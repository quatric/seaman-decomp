#include "../decls.h"
undefined4 FUN_8c0e660c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  FUN_8c0d8808(ar4 + 0x10dc,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x78) = *(undefined4 *)(ar4 + 0x1120);
    *(undefined4 *)(ar4 + 0x7c) = *(undefined4 *)(ar4 + 0x1124);
  }
  else {
    *(undefined8 *)(ar4 + 0x78) = *(undefined8 *)(ar4 + 0x1120);
    *(undefined8 *)(ar4 + 0x7c) = *(undefined8 *)(ar4 + 0x1124);
  }
  FUN_8c0d89d8(ar4 + 0x10dc,ar5,ar6,ar7);
  FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7);
  FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7);
    if (iVar1 == 1) {
      ar6 = ar4 + 4;
      ar5 = ar4 + 0xc;
      FUN_8c0f7118(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7);
    }
  }
  FUN_8c0da754(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c0e660c\n.set _FUN_8c0e660c, _FUN_8c0e660c_def\n");
