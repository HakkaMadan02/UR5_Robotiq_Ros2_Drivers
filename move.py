import time
from pymodbus.client import ModbusTcpClient

client = ModbusTcpClient('192.168.1.11', port=502)
client.connect()

SLAVE = 9

def read_status():
    r = client.read_input_registers(address=0x0000, count=3, slave=SLAVE)
    return [hex(v) for v in r.registers]

def write_cmd(byte0, byte1, position, speed, force):
    values = [
        (byte0 << 8) | byte1,
        (position << 8) | speed,
        (force << 8) | 0x00,
    ]
    return client.write_registers(address=0x0000, values=values, slave=SLAVE)

print("Before:", read_status())

# Step 1: clear rGTO (rACT stays 1, rGTO=0)
write_cmd(byte0=0x01, byte1=0x00, position=0, speed=0, force=0)
time.sleep(0.5)
print("After GTO clear:", read_status())

# Step 2: set rGTO with a fresh 0->1 edge, along with the move command
position = 100   # 0 = fully open, 255 = fully closed
speed = 100      # 0-255
force = 100       # 0-255

write_cmd(byte0=0x09, byte1=0x00, position=position, speed=speed, force=force)
time.sleep(1.5)
print("After move command:", read_status())

client.close()