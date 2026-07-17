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

def read_status(base_addr, count=3):
    result = client.read_input_registers(address=base_addr, count=count, slave=SLAVE_ID)
    if result.isError():
        print(f"  [addr={base_addr}] ERROR: {result}")
        return None
    print(f"  [addr={base_addr}] registers: {result.registers}  hex: {[hex(r) for r in result.registers]}")
    return result.registers

def write_activate(base_addr):
    result = client.write_registers(address=base_addr, values=[0x0900, 0x0000, 0x0000], slave=SLAVE_ID)
    print("  Write OK" if not result.isError() else f"  Write ERROR: {result}")

print("=== Before activation ===")
read_status(0)

print("\n=== Activating ===")
write_activate(0)
time.sleep(0.2)

print("\n=== Polling for 30s, resending rGTO every 3s ===")
for i in range(60):
    print(f"--- t={i*0.5:.1f}s ---")
    regs = read_status(0)

    if regs is None or regs[0] > 0x4000:
        print("  Bad read detected, reconnecting...")
        client.close()
        time.sleep(0.3)
        client = new_client()
    elif i % 6 == 0:
        write_activate(0)

    time.sleep(0.5)

client.close()