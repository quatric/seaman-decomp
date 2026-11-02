#include "../decls.h"
uint * FUN_8c1fa496_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char in_T;
  
  if ((in_T != '\x01') && (in_r0 == (uint *)0x36)) {
    uVar6 = (*(undefined4 *)0xa05f6900 & *(undefined4 *)0xa05f6920) >> 0xc;
    if (uVar6 == 0) {
      uVar7 = *(undefined4 *)0xa05f6904;
      uVar6 = *(undefined4 *)0xa05f6924;
      iVar4 = (int)0xb00;
      uVar3 = 0;
      while( true ) {
        if ((int)uVar3 < 0) {
          in_r0 = (uint *)(1 >> (~uVar3 & 0x1f) + 1);
        }
        else {
          in_r0 = (uint *)(1 << (uVar3 & 0x1f));
        }
        if (in_r0 == (uint *)0x10) break;
        if ((int)uVar3 < 0) {
          uVar2 = 1 >> (~uVar3 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar3 & 0x1f);
        }
        if ((uVar2 & uVar7 & uVar6) != 0) {
          FUN_8c1fa3f2(uVar3 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar3 = uVar3 + 1;
      }
    }
    else {
      iVar5 = (int)0x80;
      iVar4 = (int)0xa00;
      uVar7 = 0;
      in_r0 = 0xa05f6900;
      while( true ) {
        if ((int)uVar7 < 0) {
          iVar1 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          iVar1 = 1 << (uVar7 & 0x1f);
        }
        if (iVar1 == iVar5) break;
        if ((int)uVar7 < 0) {
          uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar7 & 0x1f);
        }
        if ((uVar3 & uVar6) != 0) {
          in_r0 = (uint *)FUN_8c1fa3f2(uVar7 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar7 = uVar7 + 1;
      }
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fa496\n.set _FUN_8c1fa496, _FUN_8c1fa496_def\n");
