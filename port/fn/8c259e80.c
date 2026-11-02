#include "../decls.h"
undefined4 FUN_8c259e80_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar4_00;
  int ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((ar5 != 0) && (ar5 + DAT_8c277ca0 <= DAT_8c277c9c)) {
    iVar4 = DAT_8c277ca0;
    uVar6 = DAT_8c277c8c;
    iVar1 = libgcc_divide_helper_010468(DAT_8c277ca0,DAT_8c277c8c);
    uVar6 = iVar4 - uVar6 * iVar1;
    iVar4 = DAT_8c277c90;
    iVar2 = libgcc_divide_helper_010468(DAT_8c277c94,DAT_8c277c90);
    if ((iVar1 == iVar2) && (iVar2 = DAT_8c277c94, DAT_8c277ca8 != 0)) {
LAB_8c259f6a:
      DAT_8c277c94 = iVar2;
      if (uVar6 != DAT_8c277ca4) {
        DAT_8c277ca4 = uVar6;
      }
      DAT_8c277ca8 = DAT_8c277c8c - DAT_8c277ca4;
      if (DAT_8c277ca8 < ar5) {
        uVar6 = 0;
        if (DAT_8c277ca8 != 0) {
          FUN_8c23c814(ar4,DAT_8c277c88 + DAT_8c277ca4,DAT_8c277ca8,ar7);
          DAT_8c277ca0 = DAT_8c277ca0 + DAT_8c277ca8;
          uVar6 = DAT_8c277ca8;
        }
        iVar4 = DAT_8c277c88;
        iVar1 = DAT_8c277c90;
        ar4_00 = _DAT_8c4b3338;
        if (ar5 - uVar6 < DAT_8c277c9c - DAT_8c277ca0) {
          for (; DAT_8c277c88 = iVar4, DAT_8c277c90 = iVar1, _DAT_8c4b3338 = ar4_00, uVar6 < ar5;
              uVar6 = uVar6 + uVar7) {
            uVar7 = ar5 - uVar6;
            if (DAT_8c277c8c < uVar7) {
              iVar4 = libgcc_divide_helper_01051c(uVar7,DAT_8c277c8c);
              iVar1 = iVar1 * iVar4;
              iVar5 = ar4 + uVar6;
              iVar2 = FUN_8c1f31c6(ar4_00,iVar1,iVar5,ar7);
              if (iVar2 != 0) {
                _DAT_8c4aa6b8 = FUN_8c1f364c(_DAT_8c4b3338,iVar1,iVar5,ar7);
                _DAT_8c4aa6bc = FUN_8c1f37a8(_DAT_8c4b3338,iVar1,iVar5,ar7);
                _DAT_8c4aa6b4 = 5;
                return 0xffffffff;
              }
              uVar7 = DAT_8c277c8c * iVar4;
              DAT_8c277ca0 = DAT_8c277ca0 + uVar7;
              DAT_8c277c94 = DAT_8c277c94 + DAT_8c277c90 * iVar4;
              DAT_8c277ca4 = 0;
            }
            else {
              iVar2 = FUN_8c1f31c6(ar4_00,iVar1,iVar4,ar7);
              if (iVar2 != 0) {
                _DAT_8c4aa6b8 = FUN_8c1f364c(_DAT_8c4b3338,iVar1,iVar4,ar7);
                _DAT_8c4aa6bc = FUN_8c1f37a8(_DAT_8c4b3338,iVar1,iVar4,ar7);
                _DAT_8c4aa6b4 = 5;
                return 0xffffffff;
              }
              FUN_8c23c814(ar4 + uVar6,DAT_8c277c88,uVar7,ar7);
              DAT_8c277ca0 = DAT_8c277ca0 + uVar7;
              DAT_8c277c94 = DAT_8c277c94 + DAT_8c277c90;
              DAT_8c277ca8 = DAT_8c277c8c - uVar7;
              DAT_8c277ca4 = uVar7;
            }
            iVar4 = DAT_8c277c88;
            iVar1 = DAT_8c277c90;
            ar4_00 = _DAT_8c4b3338;
          }
        }
        else {
          uVar7 = (ar5 - uVar6) + 0x7ff >> 0xb;
          FUN_8c1f31c6(_DAT_8c4b3338,uVar7,ar4 + uVar6,ar7);
          DAT_8c277ca0 = DAT_8c277ca0 + uVar7 * 0x800;
          DAT_8c277c94 = 0;
          DAT_8c277ca4 = 0;
        }
      }
      else {
        FUN_8c23c814(ar4,DAT_8c277c88 + DAT_8c277ca4,ar5,ar7);
        DAT_8c277ca4 = DAT_8c277ca4 + ar5;
        DAT_8c277ca0 = DAT_8c277ca0 + ar5;
        DAT_8c277ca8 = DAT_8c277c8c - DAT_8c277ca4;
      }
      return 1;
    }
    iVar2 = FUN_8c1f3122(_DAT_8c4b3338,iVar1 * iVar4,0,ar7);
    if (iVar2 == 0) {
      iVar5 = DAT_8c277c90;
      ar6_00 = DAT_8c277c88;
      iVar3 = FUN_8c1f31c6(_DAT_8c4b3338,DAT_8c277c90,DAT_8c277c88,ar7);
      iVar2 = iVar1 * iVar4;
      if (iVar3 == 0) goto LAB_8c259f6a;
      _DAT_8c4aa6b8 = FUN_8c1f364c(_DAT_8c4b3338,iVar5,ar6_00,ar7);
      _DAT_8c4aa6bc = FUN_8c1f37a8(_DAT_8c4b3338,iVar5,ar6_00,ar7);
    }
  }
  _DAT_8c4aa6b4 = 5;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c259e80\n.set _FUN_8c259e80, _FUN_8c259e80_def\n");
