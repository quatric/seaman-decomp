#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25fca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25fca4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int ar7_00;
  
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4b9828)));
  *(undefined2 *)(unsigned)(ar4 + 2) = 1;
  ar7_00 = ar4 + 0xc;
  iVar2 = ({ unsigned long t0_ = (unsigned long)(ar4 + 0xd); unsigned long t1_ = (unsigned long)(ar4 + 0xf); unsigned long t2_ = (unsigned long)(ar4 + 0xe); unsigned long t3_ = (unsigned long)(ar4 + 0x14); unsigned long t4_ = (unsigned long)(ar4 + 0x18); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 20)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c260d7c))))
                    (ar5,ar6,((short *)(fr0_ - 0x14)),ar7_00); });
  if ((iVar2 < 0) || (iVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c260e9c(ar5,ar6,ar4 + 0x1c,ar7_00)), iVar2 < 0)) {
    iVar2 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c264f52))))
              (*(undefined4 *)(unsigned)(ar4 + 8),*(undefined4 *)(unsigned)(ar4 + 0x14),(int)*(short *)(unsigned)(ar4 + 0x1c),
               ar7_00));
    iVar2 = ar4 + 0x24;
    ({ unsigned long t0_ = (unsigned long)(ar4 + 0x26); unsigned long t1_ = (unsigned long)(ar4 + 0x28); unsigned long t2_ = (unsigned long)(ar4 + 0x2c); unsigned long t3_ = (unsigned long)(ar4 + 0x30); unsigned long t4_ = (unsigned long)(ar4 + 0x34); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 20)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c260f02))))
              (ar5,ar6,ar4 + 0x20,iVar2); });
    *(int *)(unsigned)(ar4 + 0x58) = (int)*(char *)(unsigned)(ar4 + 0xe);
    *(int *)(unsigned)(ar4 + 0x5c) = (int)*(char *)(unsigned)(ar4 + 0xf);
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
    *(undefined4 *)(unsigned)(ar4 + 0x68) = *(undefined4 *)(unsigned)(ar4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar4 + 0x44);
    *(undefined2 *)(unsigned)(ar4 + 0x7c) = *(undefined2 *)(unsigned)(ar4 + 0x48);
    *(undefined2 *)(unsigned)(ar4 + 0x7e) = *(undefined2 *)(unsigned)(ar4 + 0x4a);
    *(int *)(unsigned)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(unsigned)(ar4 + 0x9c) = 0;
    puVar1 = ((void *)(unsigned)0x8c013ff8);
    *(undefined2 *)(unsigned)(ar4 + 0xa8) = 0;
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x4c,0,4,iVar2));
    iVar2 = (int)((short *)(fr0_ - 0x14))[0];
  }
  return iVar2;
}

__asm__(".globl _FUN_8c25fca4\n.set _FUN_8c25fca4, _FUN_8c25fca4_def\n");
