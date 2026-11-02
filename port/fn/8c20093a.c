#include "../decls.h"
uint FUN_8c20093a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int ar5_00;
  undefined4 uVar5;
  
  piVar1 = 0x8c4783dc;
  ar5_00 = 0;
  uVar5 = 0xfffa;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  while( true ) {
    if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
      return ar5 & 0xffff;
    }
    pbVar2 = (byte *)FUN_8c200a84(ar4,ar5_00,ar6,ar7);
    if (((*pbVar2 == 0x33) || (*pbVar2 == 0xcc)) &&
       (uVar3 = (**(code **)(*piVar1 + 0xc))(2,uVar5), (ar5 & 0xffff) == (uVar3 & 0xffff))) break;
    ar5_00 = ar5_00 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c20093a\n.set _FUN_8c20093a, _FUN_8c20093a_def\n");
