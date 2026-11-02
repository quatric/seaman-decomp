# tiny SH-4 word dumper with literal-pool resolution: dis.py ADDR [COUNT]
import struct,sys
d=open('disc/1ST_READ.BIN','rb').read()
a=int(sys.argv[1],16); n=int(sys.argv[2]) if len(sys.argv)>2 else 24
def w(x): return struct.unpack_from('<H',d,x-0x8c010000)[0]
def l(x): return struct.unpack_from('<I',d,x-0x8c010000)[0]
R=lambda i:'r%d'%i
for i in range(n):
    pc=a+2*i; o=w(pc); hi=o>>12; rn=(o>>8)&15; rm=(o>>4)&15; lo=o&15; disp=o&0xff; t=''
    if hi==0xd: t='mov.l @(0x%x),r%d  ; =%#x'%((pc&~3)+4+disp*4,rn,l((pc&~3)+4+disp*4))
    elif hi==0x9: t='mov.w @(0x%x),r%d  ; =%#x'%(pc+4+disp*2,rn,struct.unpack_from('<h',d,pc+4+disp*2-0x8c010000)[0])
    elif hi==0xe: t='mov #%d,r%d'%(struct.unpack('b',bytes([disp]))[0],rn)
    elif hi==0x7: t='add #%d,r%d'%(struct.unpack('b',bytes([disp]))[0],rn)
    elif hi==0x6: t={3:'mov r%d,r%d'%(rm,rn),2:'mov.l @r%d,r%d'%(rm,rn),1:'mov.w @r%d,r%d'%(rm,rn),0:'mov.b @r%d,r%d'%(rm,rn),6:'mov.l @r%d+,r%d'%(rm,rn)}.get(lo,'6xxx')
    elif hi==0x5: t='mov.l @(%d,r%d),r%d'%(lo*4,rm,rn)
    elif hi==0x1: t='mov.l r%d,@(%d,r%d)'%(rm,lo*4,rn)
    elif hi==0x2: t={2:'mov.l r%d,@r%d'%(rm,rn),6:'mov.l r%d,@-r%d'%(rm,rn),1:'mov.w r%d,@r%d'%(rm,rn),0:'mov.b r%d,@r%d'%(rm,rn)}.get(lo,'2xxx')
    elif hi==0x3: t={0xc:'add r%d,r%d'%(rm,rn),8:'sub r%d,r%d'%(rm,rn),0:'cmp/eq r%d,r%d'%(rm,rn)}.get(lo,'3xxx')
    elif hi==0x4:
        t={0x0b:'jsr @r%d'%rn,0x2b:'jmp @r%d'%rn,0x00:'shll r%d'%rn,0x08:'shll2 r%d'%rn,0x18:'shll8 r%d'%rn,0x28:'shll16 r%d'%rn,0x22:'sts.l pr,@-r%d'%rn,0x26:'lds.l @r%d+,pr'%rn,0x01:'shlr r%d'%rn,0x09:'shlr2 r%d'%rn}.get(o&0xff,'4xxx')
    elif hi==0x0:
        t={9:'nop',0xb:'rts'}.get(o,'') or ({0xe:'mov.l @(r0,r%d),r%d'%(rm,rn),6:'mov.l r%d,@(r0,r%d)'%(rm,rn),0xc:'mov.b @(r0,r%d),r%d'%(rm,rn),0xd:'mov.w @(r0,r%d),r%d'%(rm,rn)}.get(lo,'0xxx'))
    elif hi==0x8:
        t={0:'mov.b r0,@(%d,r%d)'%(disp&15,rm),1:'mov.w r0,@(%d,r%d)'%((disp&15)*2,rm),8:'cmp/eq #%d,r0'%struct.unpack('b',bytes([disp]))[0],9:'bt',0xb:'bf',0xd:'bt/s',0xf:'bf/s',4:'mov.b @(%d,r%d),r0'%(disp&15,rm),5:'mov.w @(%d,r%d),r0'%((disp&15)*2,rm)}.get(rn,'8xxx')
    elif hi==0xc: t={7:'mova @(0x%x),r0'%((pc&~3)+4+disp*4),6:'mov.l @(%d,gbr),r0'%(disp*4)}.get(rn,'cxxx')
    elif hi==0xa: t='bra'
    elif hi==0xb: t='bsr'
    print('%x  %04x  %s'%(pc,o,t))
