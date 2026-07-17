from pymodbus.client import ModbusTcpClient
import time

IP = "192.168.1.11"
PORT = 502
SLAVE_ID = 9


def new_client():
    c = ModbusTcpClient(IP, port=PORT)
    c.connect()
    return c


client = new_client()


def read_status_fresh(base_addr, count=3):
    c = new_client()
    try:
        result = c.read_input_registers(address=base_addr, count=count, slave=SLAVE_ID)
        if result.isError():
            print(f"  [addr={base_addr}] ERROR: {result}")
            return None
        print(f"  [addr={base_addr}] registers: {result.registers}  hex: {[hex(r) for r in result.registers]}")
        return result.registers
    finally:
        c.close()


def read_holding(base_addr, count=3):
    try:
        result = client.read_holding_registers(address=base_addr, count=count, slave=SLAVE_ID)
    except Exception as e:
        print(f"  [HOLDING addr={base_addr}] EXCEPTION: {e}")
        return None
    if result is None or result.isError():
        print(f"  [HOLDING addr={base_addr}] ERROR: {result}")
        return None
    print(f"  [HOLDING addr={base_addr}] registers: {result.registers}  hex: {[hex(r) for r in result.registers]}")
    return result.registers


def write_deactivate(base_addr):
    result = client.write_registers(address=base_addr, values=[0x0000, 0x0000, 0x0000], slave=SLAVE_ID)
    print("  Deactivate OK" if not result.isError() else f"  Deactivate ERROR: {result}")


def write_activate(base_addr):
    result = client.write_registers(address=base_addr, values=[0x0900, 0x0000, 0x0000], slave=SLAVE_ID)
    print("  Write OK" if not result.isError() else f"  Write ERROR: {result}")


print("=== Before activation ===")
read_status_fresh(0)
read_holding(0)

print("\n=== Clearing fault: deactivate then reactivate (rising edge) ===")
write_deactivate(0)
time.sleep(0.5)
write_activate(0)
time.sleep(1.0)

print("\n=== Polling for 30s at 1s intervals (no periodic rewrite this time) ===")
for i in range(30):
    print(f"--- t={i}.0s ---")
    regs = read_status_fresh(0)
    read_holding(0)

    if regs is None or regs[0] > 0x4000:
        print("  Bad read detected (fault byte or stale frame) - NOT auto-reconnecting this run, just logging.")

    time.sleep(1.0)

client.close()