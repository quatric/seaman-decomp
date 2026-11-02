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
uint FUN_8c200f2c_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c200f2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  uint s4 = *(uint *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 284; for (int i_ = 0; i_ < 284; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int *ar7_00;
  uint uVar3;
  
  ar7_00 = &(*(int *)(fr0_ - 0x20));
  uVar3 = ar7;
  (*(int *)(fr0_ - 0x1c)) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe350(ar4,0,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1ffb70(ar4,ar5,ar6,uVar3));
  if (0 < iVar2) {
    uVar1 = uVar1 + iVar2;
  }
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe7aa(ar4,ar5,s0,&(*(int *)(fr0_ - 0x20))));
      if (-1 < (int)uVar1) {
        iVar2 = ar4 * 0x148;
        uVar3 = 0;
        *(char *)(unsigned)((*(int *)(fr0_ - 0x20)) + 1) = (char)s4;
        *(undefined4 *)(unsigned)(iVar2 + -0x73b87bf0) = 1;
        *(uint *)(unsigned)(iVar2 + -0x73b87bec) =
             *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(int *)(unsigned)(iVar2 + -0x73b87c1c) * 0x50) + ar7;
        iVar2 = (*(int *)(fr0_ - 0x1c));
        if (ar7 != 0) {
          do {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1febd6((*(int *)(fr0_ - 0x20)),iVar2,s0,ar7_00));
            if ((int)uVar1 < 0) goto LAB_8c20100a;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x200;
          } while (uVar3 < ar7);
        }
        uVar1 = 0;
LAB_8c20100a:
        (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe9ae((*(int *)(fr0_ - 0x20)),0,s0,ar7_00));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c20103c(ar4,ar5,(*(int *)(fr0_ - 0x1c)),ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c200f2c\n.set _FUN_8c200f2c, _FUN_8c200f2c_def\n");
