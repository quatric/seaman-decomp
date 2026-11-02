#include "../decls.h"
int FUN_8c25a770_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 a5;
  undefined1 *ar6_00;
  uint ar6_01;
  uint uVar5;
  int in_stack_ffffffc8;
  
  ar6_00 = &stack0xffffffc8;
  iVar1 = FUN_8c25af3c(ar5,*(undefined4 *)(ar4 + 4),&stack0xffffffc8,ar7);
  if (-1 < iVar1) {
    uVar5 = *(uint *)(ar5 + 0x18);
    uVar3 = in_stack_ffffffc8 - 8;
    if ((int)uVar5 < (int)uVar3) {
      iVar1 = uVar3 - uVar5;
      uVar3 = uVar5;
    }
    else {
      iVar1 = 0;
    }
    ar6_01 = 0;
    uVar5 = _DAT_8c4aa6d0;
    if (uVar3 <= _DAT_8c4aa6d0) {
      uVar5 = uVar3;
    }
    if (0 < (int)uVar3) {
      do {
        uVar4 = uVar5;
        iVar2 = FUN_8c259c48(_DAT_8c4aa6cc,uVar5,ar6_00,ar7);
        if (iVar2 < 0) {
          FUN_8c20cf88(ar5 + 4,uVar4,ar6_00,ar7);
          return 0xffffffff;
        }
        FUN_8c1f9e32(_DAT_8c4aa6cc,uVar5,ar6_00,ar7,iVar1);
        a5 = _DAT_8c4aa6cc;
        ar6_00 = (undefined1 *)ar6_01;
        ar7 = uVar5;
        FUN_8c25ab02(ar5 + 4,_DAT_8c4aa6cc,ar6_01,uVar5);
        ar6_01 = ar6_01 + uVar5;
        uVar4 = uVar3 - ar6_01;
        if (uVar4 < _DAT_8c4aa6d0) {
          uVar5 = uVar4;
        }
        do {
          iVar2 = FUN_8c20a7e0(uVar4,a5,ar6_00,ar7);
        } while (iVar2 != 0);
      } while (ar6_01 != uVar3);
    }
    if (0 < iVar1) {
      FUN_8c25a122(iVar1,1,ar6_00,ar7);
    }
    iVar1 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25a770\n.set _FUN_8c25a770, _FUN_8c25a770_def\n");
