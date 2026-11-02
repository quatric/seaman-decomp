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
int FUN_8c0859c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0859c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    if (*(int *)(unsigned)(0x10c0 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(int *)(unsigned)(0x10c0 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x10c0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x10a8 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(int *)(unsigned)(0x10d4 + ar4) != 0) {
    ar5_00 = *(int *)(unsigned)(0x10d4 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x10d4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(undefined4 *)(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x10bc + ar4) = uVar2;
    }
  }
  iVar3 = *(int *)(unsigned)(0x10c0 + ar4);
  if ((((iVar3 == 0) && (iVar3 = *(int *)(unsigned)(0x10c4 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(unsigned)(0x10c8 + ar4), iVar3 == 0)) &&
     (((iVar3 = *(int *)(unsigned)(0x10cc + ar4), iVar3 == 0 &&
       (iVar3 = *(int *)(unsigned)(0x10d0 + ar4), iVar3 == 0)) &&
      (iVar3 = *(int *)(unsigned)(0x10d4 + ar4), iVar3 == 0)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0859c8\n.set _FUN_8c0859c8, _FUN_8c0859c8_def\n");
