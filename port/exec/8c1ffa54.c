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
undefined4 FUN_8c1ffa54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ffa54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *a6;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  sVar2 = (short)ar6;
  uVar1 = (undefined1)ar7;
  *(undefined4 *)(unsigned)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(unsigned)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273a9c) + *(int *)(unsigned)(iVar5 + -0x73b87c1c) * 0x50);
  if ((((undefined1 *)(unsigned)0x8c4783e2))[iVar5] != '\0') {
    uVar4 = ar5;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fdd1a(ar4,uVar4,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fd550(ar4,uVar4,ar6,ar7));
      if ((iVar3 != 0) && ((((undefined1 *)(unsigned)0x8c4783e8))[iVar5] != '\0')) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 316)), thunk_FUN_8c1ffcc2(ar4,uVar4,ar6,ar7));
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = (vsp = ((unsigned long)(fr0_ - 316)), ret_const_0_200aec(ar4,ar5,ar6,ar7));
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        a6 = ((undefined1 *)(fr0_ - 0x3c));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,a6,ar7));
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,iVar5,a6,ar7));
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c26d20c) != 0) {
          a6 = (undefined1 *)(unsigned)(int)sVar2;
          (vsp = ((unsigned long)(fr0_ - 316)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 0x10))))(iVar3,0x1a,a6,ar7));
        }
        *(undefined1 *)(unsigned)(iVar3 + 1) = uVar1;
        (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a9c(ar4,iVar5,a6,ar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200346(ar4,iVar5,a6,ar7));
        return uVar4;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ffa54\n.set _FUN_8c1ffa54, _FUN_8c1ffa54_def\n");
