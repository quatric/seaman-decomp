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
undefined4 FUN_8c1ff610_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ff610";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  undefined4 *ar5_00;
  int ar6_00;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = ar4 * 0x148;
  *(undefined4 *)(unsigned)(iVar4 + -0x73b87bf0) = 1;
  *(undefined4 *)(unsigned)(iVar4 + -0x73b87bec) =
       *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c273ab8) + *(int *)(unsigned)(iVar4 + -0x73b87c1c) * 0x50);
  if ((((undefined1 *)(unsigned)0x8c4783e2))[iVar4] != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7));
      if ((iVar2 != 0) && ((((undefined1 *)(unsigned)0x8c4783e8))[iVar4] != '\0')) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7));
        if (iVar4 < 0) {
          return 0xffffff03;
        }
        iVar4 = 0;
        puVar3 = ar5;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)(unsigned)*puVar3;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), ret_const_0_200aec(ar4,ar5_00,ar6_00,ar7));
            if (iVar2 < 0) {
              return 0xffffff0a;
            }
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = 0;
        bVar1 = false;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)(unsigned)*ar5;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1ff478(ar4,ar5_00,ar6_00,ar7));
            iVar4 = iVar4 + 1;
            if (iVar2 < 0) {
              bVar1 = true;
            }
            ar5 = ar5 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200346(ar4,ar5_00,ar6_00,ar7));
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2007f0(ar4,ar5_00,ar6_00,ar7));
        if (iVar4 < 0) {
          return iVar4;
        }
        if (bVar1) {
          return 0xffffff0a;
        }
        return 0;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff610\n.set _FUN_8c1ff610, _FUN_8c1ff610_def\n");
