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
undefined4 FUN_8c1ff530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ff530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(undefined4 *)(unsigned)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(unsigned)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273a90) + *(int *)(unsigned)(iVar3 + -0x73b87c1c) * 0x50);
  if ((((undefined1 *)(unsigned)0x8c4783e2))[iVar3] != '\0') {
    uVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(ar4,uVar2,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(ar4,uVar2,ar6,ar7));
      if ((iVar1 != 0) && ((((undefined1 *)(unsigned)0x8c4783e8))[iVar3] != '\0')) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(ar4,uVar2,ar6,ar7));
        if (iVar3 < 0) {
          return 0xffffff03;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), ret_const_0_200aec(ar4,ar5,ar6,ar7));
        if (iVar3 < 0) {
          return 0xffffff0b;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1ff478(ar4,ar5,ar6,ar7));
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200346(ar4,ar5,ar6,ar7));
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2007f0(ar4,ar5,ar6,ar7));
        return uVar2;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff530\n.set _FUN_8c1ff530, _FUN_8c1ff530_def\n");
