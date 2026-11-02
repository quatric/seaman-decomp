#include "../decls.h"
undefined4
FUN_8c21f200_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  float fVar2;
  float in_fr4;
  
  if (ar4 == (undefined4 *)0x0) {
    _DAT_8c4aad86 = 0;
    _DAT_8c4ab0c2 = 0;
    _DAT_8c4aad84 = 0;
  }
  else {
    fVar2 = (float)(int)ar4[1];
    if ((int)ar4[1] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 <= in_fr4) {
      return ain0;
    }
    _DAT_8c4aad86 = *(undefined2 *)(ar4 + 2);
    _DAT_8c4aad84 = *(ushort *)((int)ar4 + 10) & 0xff3f;
    _DAT_8c4ab0c2 = (ushort)((*(ushort *)((int)ar4 + 10) & 0xc0) != 0);
    _DAT_8c4aad64 = *ar4;
    _DAT_8c4aad74 = ar4[1];
    DAT_8c2759d8 = 0;
  }
  _DAT_8c4aad78 = 0;
  _DAT_8c4aad7c = 0;
  _DAT_8c4aa36c = (&PTR_LAB_8c2759dc)[_DAT_8c4aad84];
  _DAT_8c4aad70 = in_fr4;
  uVar1 = FUN_8c21da20(ar5,0,&DAT_8c4aad64,&DAT_8c4aad84);
  return uVar1;
}

__asm__(".globl _FUN_8c21f200\n.set _FUN_8c21f200, _FUN_8c21f200_def\n");
