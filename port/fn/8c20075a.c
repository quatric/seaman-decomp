#include "../decls.h"
int FUN_8c20075a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  int ar7_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = 0xfffc;
  iVar4 = *(int *)(ar4 * 0x148 + 0x8c4783e0 + 0x1c);
  iVar5 = *(int *)(iVar4 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x20) + iVar5 + -1;
  do {
    ar6_00 = iVar5;
    ar7_00 = iVar4;
    iVar2 = FUN_8c1fe1e4(ar4,uVar1);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar3 = FUN_8c2009d0(ar4,iVar2 - iVar7,ar6_00,ar7_00);
        if ((uVar3 & 0xffff) != uVar1) {
          iVar4 = (iVar2 - iVar7) + -1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    if (iVar7 == iVar6) {
      return (iVar2 - iVar6) + 1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c20075a\n.set _FUN_8c20075a, _FUN_8c20075a_def\n");
