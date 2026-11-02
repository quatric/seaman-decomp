#include "../decls.h"
undefined4
FUN_8c213e32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
            undefined4 ain1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *ar5_00;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  uint uVar8;
  uint uVar11;
  
  puVar3 = _DAT_8c4aa4c0;
  *ain0 = ain1;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (ulonglong)*puVar3;
    uVar6 = (ulonglong)puVar3[1];
    uVar9 = CONCAT44(0x3f800000,puVar3[2]);
    puVar2 = &DAT_8c278790;
    puVar3 = puVar3 + 7;
    *puVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0x3f800000;
    uVar9 = 0;
    puVar2 = (undefined4 *)&DAT_8c2787a0;
    puVar3 = puVar3 + 0xe;
    puVar3[0] = 0;
    puVar3[1] = 0x3f800000;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3[-1] = (uint)((ulonglong)uVar9 >> 0x20);
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    uVar5 = puVar2[-0x10];
    uVar8 = puVar2[-0xf];
    uVar11 = puVar2[-0xe];
    ar5_00 = puVar2 + -0xc;
    puVar3[-4] = puVar2[-0xd];
    puVar3[-5] = uVar11;
    puVar3[-6] = uVar8;
    puVar3 = puVar3 + -7;
    *puVar3 = uVar5;
  }
  else {
    *(undefined8 *)(puVar3 + -2) = uVar9;
    *(ulonglong *)(puVar3 + -4) = uVar6;
    *(ulonglong *)(puVar3 + -6) = uVar4;
    uVar9 = *(undefined8 *)(puVar2 + -0x10);
    uVar7 = *(undefined8 *)(puVar2 + -0xe);
    uVar10 = *(undefined8 *)(puVar2 + -0xc);
    ar5_00 = puVar2 + -8;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar2 + -10);
    *(undefined8 *)(puVar3 + -10) = uVar10;
    *(undefined8 *)(puVar3 + -0xc) = uVar7;
    puVar3 = puVar3 + -0xe;
    *(undefined8 *)puVar3 = uVar9;
  }
  _DAT_8c4aa4bc = puVar3;
  FUN_8c256fec(puVar3,ar5_00,ar6,ar7,in_PR);
  uVar1 = FUN_8c255d6c(puVar3,_DAT_8c4c0cc0,ar6,ar7,in_PR);
  if (in_FPSCR_SZ == '\0') {
    _DAT_8c4c0d00 = *(undefined8 *)puVar3;
    _DAT_8c4c0d08 = *(undefined8 *)(puVar3 + 2);
    _DAT_8c4c0d10 = *(undefined8 *)(puVar3 + 4);
    _DAT_8c4c0d18 = CONCAT44(puVar3[7],_DAT_8c4c0d18);
                    
    _DAT_8c4c0d18 = puVar3[6];
  }
  else {
    (*(uint *)0x8c4c0ce0) = *(undefined8 *)puVar3;
    (*(uint *)0x8c4c0ce8) = *(undefined8 *)(puVar3 + 2);
    (*(uint *)0x8c4c0cf0) = *(undefined8 *)(puVar3 + 4);
    (*(uint *)0x8c4c0cf8) = *(undefined8 *)(puVar3 + 6);
    _DAT_8c4c0d00 = *(undefined8 *)(puVar3 + 8);
    _DAT_8c4c0d08 = *(undefined8 *)(puVar3 + 10);
    _DAT_8c4c0d10 = *(undefined8 *)(puVar3 + 0xc);
    _DAT_8c4c0d18 = *(undefined8 *)(puVar3 + 0xe);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c213e32\n.set _FUN_8c213e32, _FUN_8c213e32_def\n");
