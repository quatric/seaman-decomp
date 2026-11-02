#include "../decls.h"
int FUN_8c2014e6_def(int ar4,undefined4 ar5,int ar6,uint ar7,uint s0)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *ar6_00;
  uint a7;
  int iVar3;
  undefined1 auStack_30 [4];
  ushort uStack_2c;
  char cStack_2a;
  
  ar6_00 = auStack_30;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  *(undefined4 *)(iVar3 + 0x30) = 1;
  puVar1 = (&FUN_8c1fdd44);
  *(uint *)(iVar3 + 0x34) = s0;
  a7 = ar7;
  iVar3 = (*(code *)puVar1)(ar4,ar5,ar6_00,ar7);
  if (-1 < iVar3) {
    if (cStack_2a == '\x01') {
      uVar2 = (uint)uStack_2c;
      if (((ar7 < uVar2) && (s0 <= uVar2)) && (ar7 + s0 <= uVar2)) {
        iVar3 = FUN_8c200b10(ar4,ar5,ar6_00,a7);
        if (-1 < iVar3) {
          uVar2 = 0;
          if (s0 != 0) {
            do {
              iVar3 = FUN_8c1fbc44(ar4,ar7,ar6,a7);
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
              ar6 = ar6 + 0x200;
              ar7 = ar7 + 1;
            } while (uVar2 < s0);
          }
          iVar3 = 0;
        }
      }
      else {
        iVar3 = (int)(int)0xffffff00;
      }
    }
    else {
      iVar3 = (int)(int)0xffffff0b;
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2014e6\n.set _FUN_8c2014e6, _FUN_8c2014e6_def\n");
