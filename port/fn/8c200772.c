#include "../decls.h"
int FUN_8c200772_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int a6;
  int a7;
  int ar6_00;
  undefined4 unaff_r10;
  int iVar4;
  int iVar5;
  
  ar5_00 = 0xfffc;
  iVar3 = *(int *)(ar5 + in_r3 + 0x1c);
  ar6_00 = *(int *)(iVar3 + 0x1c);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x20) + ar6_00 + -1;
  do {
    a6 = ar6_00;
    a7 = iVar3;
    iVar1 = FUN_8c1fe1e4(unaff_r10,ar5_00,ar6_00,iVar3);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = FUN_8c2009d0(unaff_r10,iVar1 - iVar5,a6,a7);
        if ((uVar2 & 0xffff) != ar5_00) {
          iVar3 = (iVar1 - iVar5) + -1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar5 == iVar4) {
      return (iVar1 - iVar4) + 1;
    }
  } while( true );
}

__asm__(".globl _FUN_8c200772\n.set _FUN_8c200772, _FUN_8c200772_def\n");
