import sys
D=open('disc/1ST_READ.BIN','rb').read()
M=0xffffffff
def rd(a,n):
    o=a-0x8c010000; return int.from_bytes(D[o:o+n],'little')
def s8(x): return x-256 if x&0x80 else x
def s12(x): return x-4096 if x&0x800 else x
def run(entry,r4,r5,maxsteps=2000):
    R=[0]*16; R[4]=r4&M; R[5]=r5&M; R[15]=0x8cf00000
    T=0;Q=0;Mb=0; pc=entry; delay=None; PR=0xdead0000
    mem={}
    steps=0
    def exe(op,pc_):
        nonlocal T,Q,Mb
        n=(op>>8)&15; m=(op>>4)&15; hi=op>>12; lo=op&15; i=op&255
        if op==0x0009: return None
        if op==0x0008: T=0; return None
        if op==0x0018: T=1; return None
        if hi==2 and lo==6: R[n]=(R[n]-4)&M; mem[R[n]]=R[m]; return None
        if hi==6 and lo==6: R[n]=mem.get(R[m],0); R[m]=(R[m]+4)&M; return None
        if hi==6 and lo==3: R[n]=R[m]; return None
        if hi==2 and lo==8: T=int((R[n]&R[m])==0); return None
        if hi==2 and lo==10: R[n]^=R[m]; return None
        if hi==2 and lo==9: R[n]&=R[m]; return None
        if hi==2 and lo==11: R[n]|=R[m]; return None
        if hi==3 and lo==12: R[n]=(R[n]+R[m])&M; return None
        if hi==3 and lo==8: R[n]=(R[n]-R[m])&M; return None
        if hi==3 and lo==0: T=int(R[n]==R[m]); return None
        if hi==3 and lo==2: T=int(R[n]>=R[m]); return None
        if hi==3 and lo==3: T=int(((R[n]^0x80000000)-0x80000000)>=((R[m]^0x80000000)-0x80000000)); return None
        if hi==3 and lo==6: T=int(R[n]>R[m]); return None
        if hi==3 and lo==7: T=int(((R[n]^0x80000000)-0x80000000)>((R[m]^0x80000000)-0x80000000)); return None
        if hi==3 and lo==4:  # div1
            old_q=Q; Q=(R[n]>>31)&1; R[n]=((R[n]<<1)|T)&M
            tmp0=R[n]
            if old_q==0:
                if Mb==0: R[n]=(R[n]-R[m])&M; tmp1=int(R[n]>tmp0); Q=Q^tmp1 if True else Q
                else: R[n]=(R[n]+R[m])&M; tmp1=int(R[n]<tmp0); Q=Q^(1-tmp1)
            else:
                if Mb==0: R[n]=(R[n]+R[m])&M; tmp1=int(R[n]<tmp0); Q=Q^tmp1
                else: R[n]=(R[n]-R[m])&M; tmp1=int(R[n]>tmp0); Q=Q^(1-tmp1)
            T=int(Q==Mb); return None
        if op&0xf0ff==0x4024: c=(R[n]>>31)&1; R[n]=((R[n]<<1)|T)&M; T=c; return None
        if op&0xf0ff==0x4025: c=R[n]&1; R[n]=(R[n]>>1)|(T<<31); T=c; return None
        if op&0xf0ff==0x4000: T=(R[n]>>31)&1; R[n]=(R[n]<<1)&M; return None
        if op&0xf0ff==0x4001: T=R[n]&1; R[n]>>=1; return None
        if op&0xf0ff==0x4021: T=R[n]&1; R[n]=(R[n]>>1)|(R[n]&0x80000000); return None
        if op&0xf0ff==0x4008: R[n]=(R[n]<<2)&M; return None
        if op&0xf0ff==0x4018: R[n]=(R[n]<<8)&M; return None
        if op&0xf0ff==0x4028: R[n]=(R[n]<<16)&M; return None
        if op&0xf0ff==0x4009: R[n]>>=2; return None
        if op&0xf0ff==0x4019: R[n]>>=8; return None
        if op&0xf0ff==0x4029: R[n]>>=16; return None
        if hi==6 and lo==11: R[n]=(-R[m])&M; return None
        if hi==6 and lo==7: R[n]=(~R[m])&M; return None
        if hi==6 and lo==14: R[n]=(R[m]&0xff) if not R[m]&0x80 else (R[m]&0xff)|0xffffff00; return None
        if hi==6 and lo==15: R[n]=(R[m]&0xffff) if not R[m]&0x8000 else (R[m]&0xffff)|0xffff0000; return None
        if hi==6 and lo==12: R[n]=R[m]&0xff; return None
        if hi==6 and lo==13: R[n]=R[m]&0xffff; return None
        if hi==7: R[n]=(R[n]+(i if i<128 else i-256))&M; return None
        if hi==14: R[n]=(i if i<128 else i-256)&M; return None
        if op&0xf0ff==0x0029: R[n]=T; return None
        if op==0x0019: Mb=0;Q=0;T=0; return None   # div0u
        if hi==2 and lo==7: Q=(R[n]>>31)&1; Mb=(R[m]>>31)&1; T=int(Q!=Mb); return None  # div0s
        if op&0xf0ff==0x4015: T=int(((R[n]^0x80000000)-0x80000000)>0); return None
        if op&0xf0ff==0x4011: T=int(((R[n]^0x80000000)-0x80000000)>=0); return None
        if op&0xf0ff==0x4010: R[n]=(R[n]-1)&M; T=int(R[n]==0); return None
        if op&0xf0ff==0x400b or op&0xf0ff==0x400a: return 'x'
        if op&0xff00==0xc800: T=int((R[0]&(i))==0); return None
        if op&0xff00==0x8800: T=int(R[0]==(i if i<128 else i-256)&M); return None
        if op&0xff00==0xc900: R[0]&=i; return None
        if op==0x000b: return 'rts'
        if hi==3 and lo==10: # subc
            tmp=(R[n]-R[m])&M; c=int(R[n]<R[m]); t2=(tmp-T)&M; c2=int(tmp<T); R[n]=t2; T=c|c2; return None
        if hi==3 and lo==14: # addc
            tmp=(R[n]+R[m])&M; c=int(tmp<R[n]); t2=(tmp+T)&M; c2=int(t2<tmp); R[n]=t2; T=c|c2; return None
        if hi==2 and lo==1: mem[R[n]&~1]=R[m]&0xffff; return None
        if hi==2 and lo==2: mem[R[n]&~3]=R[m]; return None
        if hi==6 and lo==2: R[n]=mem.get(R[m]&~3,0); return None
        if hi==2 and lo==2: return None
        if op&0xf0ff==0x4022: R[15]-=4; mem[R[15]]=0; return None
        raise Exception('op %04x at %x'%(op,pc_))
    while steps<maxsteps:
        steps+=1
        op=rd(pc,2)
        if hi:=op>>12 and False: pass
        # branches
        h=op>>12
        def dly():
            exe(rd(pc+2,2),pc+2)
        if h==8 and (op>>8)&15 in (9,11,13,15):
            sub=(op>>8)&15; disp=s8(op&255); tgt=pc+4+disp*2
            take = T if sub in (9,13) else 1-T
            if sub in (13,15):
                if take: dly(); pc=tgt; continue
                pc+=2; continue
            if take: pc=tgt; continue
            pc+=2; continue
        if h==10:
            tgt=pc+4+s12(op&0xfff)*2; dly(); pc=tgt; continue
        if (op&0xf0ff)==0x402b: # jmp @rn
            tgt=R[(op>>8)&15]; dly(); pc=tgt; continue
        if op==0x000b:
            dly(); return R
        if (op&0xf000)==0x9000: # mov.w @(disp,pc),rn
            R[(op>>8)&15]=rd(pc+4+(op&255)*2,2); R[(op>>8)&15]|=0xffff0000 if R[(op>>8)&15]&0x8000 else 0; pc+=2; continue
        if (op&0xf000)==0xd000:
            R[(op>>8)&15]=rd(((pc+4)&~3)+(op&255)*4,4); pc+=2; continue
        r=exe(op,pc)
        pc+=2
    raise Exception('timeout')
if __name__=='__main__':
    for ent in sys.argv[1:]:
        e=int(ent,16)
        print(ent,end=': ')
        for a,b in ((100,7),(0xfffffff0,7),(100,0xfffffff9),(7,100),(1000000,10),(0x80000000,3)):
            try:
                R=run(e,a,b); print('(%x,%x)->r0=%x r1=%x'%(a,b,R[0],R[1]),end='  ')
            except Exception as ex: print('ERR',ex,end='  '); break
        print()
