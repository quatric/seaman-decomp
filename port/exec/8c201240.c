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
int FUN_8c201240_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c201240";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar6_00;
  int *ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  
  ar7_00 = &(*(int *)(fr0_ - 0x2c));
  ar6_00 = &(*(int *)(fr0_ - 0x2c));
  (*(undefined4 *)(fr0_ - 0x28)) = ar5;
  (*(int *)(fr0_ - 0x24)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe646(ar4,ar5,s0,&(*(int *)(fr0_ - 0x2c))));
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(unsigned)((*(int *)(fr0_ - 0x2c)) + 1) = (undefined1)s4;
    *(undefined4 *)(unsigned)(iVar1 + -0x73b87bf0) = 1;
    *(uint *)(unsigned)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(int *)(unsigned)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = (*(int *)(fr0_ - 0x24));
    if (ar7 != 0) {
      do {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fecf2((*(int *)(fr0_ - 0x2c)),iVar3,s0,ar7_00));
        if (iVar1 < 0) goto LAB_8c201312;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(int *)(fr0_ - 0x2c)),0,s0,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe534(ar4,(*(undefined4 *)(fr0_ - 0x28)),&(*(int *)(fr0_ - 0x2c)),ar7_00));
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = (*(int *)(fr0_ - 0x24));
      if (ar7 != 0) {
        do {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fee6c((*(int *)(fr0_ - 0x2c)),ar5_00,ar6_00,ar7_00));
          s0 = (undefined1 *)(unsigned)ar6_00;
          if (iVar1 < 0) goto LAB_8c201312;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00));
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)(unsigned)ar6_00;
            goto LAB_8c201312;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)(unsigned)ar6_00;
LAB_8c201312:
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(int *)(fr0_ - 0x2c)),0,s0,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c201240\n.set _FUN_8c201240, _FUN_8c201240_def\n");
