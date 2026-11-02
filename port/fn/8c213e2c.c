#include "../decls.h"
undefined4 FUN_8c213e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *ar4_00;
  undefined4 uVar3;
  char cVar4;
  
  ar4_00 = _DAT_8c4aa4c0;
  uVar2 = DAT_8c278788;
  uVar1 = DAT_8c278784;
  uVar3 = DAT_8c278780;
  cVar4 = '\0';
  _DAT_8c4aa5a0 = 1;
  *(undefined4 *)((int)_DAT_8c4aa4c0 + 0x1c) = DAT_8c27878c;
  *(undefined4 *)(ar4_00 + 3) = uVar2;
  *(undefined4 *)((int)ar4_00 + 0x14) = uVar1;
  *(undefined4 *)(ar4_00 + 2) = uVar3;
  uVar2 = DAT_8c278758;
  uVar1 = DAT_8c278754;
  uVar3 = _DAT_8c278750;
  *(undefined4 *)((int)ar4_00 + 0xc) = DAT_8c27875c;
  *(undefined4 *)(ar4_00 + 1) = uVar2;
  *(undefined4 *)((int)ar4_00 + 4) = uVar1;
  _DAT_8c4aa4bc = ar4_00;
  *(undefined4 *)ar4_00 = uVar3;
  uVar3 = FUN_8c256fec(ar4_00,&DAT_8c278760,ar6,ar7,&DAT_8c4aa5a0);
  uVar3 = FUN_8c255d6c(ar4_00,_DAT_8c4c0cc0,ar6,ar7,uVar3);
  if (cVar4 == '\0') {
    _DAT_8c4c0d00 = *ar4_00;
    _DAT_8c4c0d08 = ar4_00[1];
    _DAT_8c4c0d10 = ar4_00[2];
    _DAT_8c4c0d18 = CONCAT44(*(undefined4 *)((int)ar4_00 + 0x1c),_DAT_8c4c0d18);
                    
    _DAT_8c4c0d18 = *(undefined4 *)(ar4_00 + 3);
  }
  else {
    (*(uint *)0x8c4c0ce0) = *ar4_00;
    (*(uint *)0x8c4c0ce8) = ar4_00[1];
    (*(uint *)0x8c4c0cf0) = ar4_00[2];
    (*(uint *)0x8c4c0cf8) = ar4_00[3];
    _DAT_8c4c0d00 = ar4_00[4];
    _DAT_8c4c0d08 = ar4_00[5];
    _DAT_8c4c0d10 = ar4_00[6];
    _DAT_8c4c0d18 = ar4_00[7];
  }
  return uVar3;
}

__asm__(".globl _FUN_8c213e2c\n.set _FUN_8c213e2c, _FUN_8c213e2c_def\n");
