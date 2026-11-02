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
int FUN_8c1fecf2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fecf2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  
  iVar3 = *(int *)(unsigned)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0;
  uVar4 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(int *)(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar4,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar4,ar6,ar7));
    if ((iVar1 != 0) && (*(char *)(unsigned)(0x8c4783e8 + *(int *)(unsigned)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar4,ar6,ar7));
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x30);
      uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x28);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(uVar4,ar5_00,ar6,ar7));
      if (((uVar2 & 0xffff) == 0xfffc) &&
         (*(int *)(unsigned)(ar4 + 0x30) < *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0x38))) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbc44(uVar4,ar5_00,ar5,ar7));
        if (iVar1 < 0) {
          return iVar1;
        }
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(uVar4,ar5_00,0xfffa,ar7));
        if (*(int *)(unsigned)(ar4 + 0x38) == 0xffff) {
          *(int *)(unsigned)(ar4 + 0x38) = (int)(short)ar5_00;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(uVar4,*(undefined4 *)(unsigned)(ar4 + 0x3c),ar5_00,ar7));
        }
        *(int *)(unsigned)(ar4 + 0x3c) = (int)(short)ar5_00;
        *(int *)(unsigned)(ar4 + 0x30) = *(int *)(unsigned)(ar4 + 0x30) + 1;
        return 0;
      }
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fecf2\n.set _FUN_8c1fecf2, _FUN_8c1fecf2_def\n");
