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
int FUN_8c25a770_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c25a770";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 a5;
  undefined1 *ar6_00;
  uint ar6_01;
  uint uVar5;
  
  ar6_00 = (fr0_ + (int)0xffffffc8);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25af3c(ar5,*(undefined4 *)(unsigned)(ar4 + 4),(fr0_ + (int)0xffffffc8),ar7));
  if (-1 < iVar1) {
    uVar5 = *(uint *)(unsigned)(ar5 + 0x18);
    uVar3 = (*(int *)(fr0_ - 0x38)) - 8;
    if ((int)uVar5 < (int)uVar3) {
      iVar1 = uVar3 - uVar5;
      uVar3 = uVar5;
    }
    else {
      iVar1 = 0;
    }
    ar6_01 = 0;
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6d0);
    if (uVar3 <= (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6d0)) {
      uVar5 = uVar3;
    }
    if (0 < (int)uVar3) {
      do {
        uVar4 = uVar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c259c48((*(undefined4 *)(unsigned)(unsigned)0x8c4aa6cc),uVar5,ar6_00,ar7));
        if (iVar2 < 0) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c20cf88(ar5 + 4,uVar4,ar6_00,ar7));
          return 0xffffffff;
        }
        ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c1f9e32((*(undefined4 *)(unsigned)(unsigned)0x8c4aa6cc),uVar5,ar6_00,ar7); });
        a5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6cc);
        ar6_00 = (undefined1 *)(unsigned)ar6_01;
        ar7 = uVar5;
        (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25ab02(ar5 + 4,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa6cc),ar6_01,uVar5));
        ar6_01 = ar6_01 + uVar5;
        uVar4 = uVar3 - ar6_01;
        if (uVar4 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6d0)) {
          uVar5 = uVar4;
        }
        do {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c20a7e0(uVar4,a5,ar6_00,ar7));
        } while (iVar2 != 0);
      } while (ar6_01 != uVar3);
    }
    if (0 < iVar1) {
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25a122(iVar1,1,ar6_00,ar7));
    }
    iVar1 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25a770\n.set _FUN_8c25a770, _FUN_8c25a770_def\n");
