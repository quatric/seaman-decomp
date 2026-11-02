#include "../decls.h"
undefined4 FUN_8c012da8_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 in_r0;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(short)(8 - (short)ar6);
  if (uVar6 != 0) {
    uVar3 = -uVar6;
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = (int)0xff >> (~uVar3 & 0x1f) + 1;
    }
    else {
      uVar3 = (int)0xff << (uVar3 & 0x1f);
    }
    iVar7 = 0;
    if (0 < ar5) {
      do {
        bVar1 = *ar4;
        uVar4 = -(int)(short)ar6;
        iVar7 = iVar7 + 1;
        if ((int)uVar4 < 0) {
          bVar2 = *ar4 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          bVar2 = *ar4 << (uVar4 & 0x1f);
        }
        *ar4 = bVar2;
        uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
        *ar4 = *ar4 | (byte)uVar5;
        if ((int)uVar6 < 0) {
          uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar5 = uVar4 << (uVar6 & 0x1f);
        }
        ar4 = ar4 + 1;
      } while (iVar7 < ar5);
    }
    if ((uVar5 & 0xff) == 0) {
      in_r0 = 0;
    }
    else {
      in_r0 = 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c012da8\n.set _FUN_8c012da8, _FUN_8c012da8_def\n");
