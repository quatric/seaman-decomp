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
undefined4 FUN_8c1f92c0_def(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f92c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar7_00;
  int iVar4;
  int unaff_r13 = 0;
  
  iVar4 = 0;
  ar5_00 = (undefined4 *)(unsigned)0x1;
  ar4_00 = (undefined4 *)(unsigned)0xffffffff;
  if (s0 == 0) {
    iVar4 = 0;
  }
  else if (s0 == 1) {
    iVar4 = 1;
  }
  else if (s0 == 2) {
    iVar4 = -1;
  }
  if (s4 == 0) {
    unaff_r13 = 0;
  }
  else if (s4 == 1) {
    unaff_r13 = 1;
  }
  else if (s4 == 2) {
    unaff_r13 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f9150(0xffffffff,1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00));
  if (ar6 == (undefined4 *)(unsigned)0x1) {
    ar4_00 = (undefined4 *)(unsigned)0x0;
    ar5_00 = ar4;
    ar6_00 = ar5;
    if (0 < ar7) {
      do {
        uVar1 = *(undefined1 *)(unsigned)ar5_00;
        ar4_00 = (undefined4 *)(unsigned)((int)ar4_00 + 1);
        ar5_00 = (undefined4 *)(unsigned)((int)ar5_00 + iVar4);
        *(undefined1 *)(unsigned)ar6_00 = uVar1;
        ar6_00 = (undefined4 *)(unsigned)((int)ar6_00 + unaff_r13);
      } while ((int)ar4_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)(unsigned)0x2) {
    ar7_00 = iVar4 * 2;
    ar5_00 = (undefined4 *)(unsigned)0x0;
    ar4_00 = ar5;
    ar6_00 = ar4;
    if (0 < ar7) {
      do {
        uVar2 = *(undefined2 *)(unsigned)ar6_00;
        ar5_00 = (undefined4 *)(unsigned)((int)ar5_00 + 1);
        ar6_00 = (undefined4 *)(unsigned)((int)ar6_00 + ar7_00);
        *(undefined2 *)(unsigned)ar4_00 = uVar2;
        ar4_00 = (undefined4 *)(unsigned)((int)ar4_00 + unaff_r13 * 2);
      } while ((int)ar5_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)(unsigned)0x4) {
    ar7_00 = iVar4 * 4;
    ar6_00 = (undefined4 *)(unsigned)0x0;
    ar4_00 = ar5;
    ar5_00 = ar4;
    if (0 < ar7) {
      do {
        uVar3 = *ar4;
        ar6_00 = (undefined4 *)(unsigned)((int)ar6_00 + 1);
        ar4 = ar4 + iVar4;
        *ar5 = uVar3;
        ar5 = ar5 + unaff_r13;
        ar4_00 = ar5;
        ar5_00 = ar4;
      } while ((int)ar6_00 < ar7);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c1f92c0\n.set _FUN_8c1f92c0, _FUN_8c1f92c0_def\n");
