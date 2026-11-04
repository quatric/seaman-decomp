import struct
def crc(d):
    n=0
    for b in d:
        n^=b<<8
        for _ in range(8):
            n=((n<<1)^0x1021) if n&0x8000 else n<<1
    return n&0xffff
def vms_crc(d):
    d=bytearray(d); d[0x46:0x48]=b'\0\0'
    size=0x80+0x200*struct.unpack('<H',d[0x40:0x42])[0]+struct.unpack('<I',d[0x48:0x4c])[0]
    return crc(bytes(d[:size]))
def fix(d):
    d=bytearray(d); d[0x46:0x48]=struct.pack('<H',vms_crc(d)); return bytes(d)
if __name__=='__main__':
    import sys
    d=open(sys.argv[1],'rb').read()
    print('stored %04x computed %04x'%(struct.unpack('<H',d[0x46:0x48])[0],vms_crc(d)))
