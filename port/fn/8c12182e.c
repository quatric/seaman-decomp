#include "../decls.h"
undefined4 FUN_8c12182e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr4;
  float fVar2;
  
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  if ((float)in_dr4 <= fVar2) {
    iVar1 = *(int *)(ar4 + 0x30) + 1;
    *(int *)(ar4 + 0x30) = iVar1;
    if (iVar1 == 6) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
  }
  else {
    *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
    *(undefined4 *)(ar4 + 0x30) = 0;
  }
  if ((float)in_dr4 + *(float *)(ar4 + 0x60) <= fVar2) {
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = 0;
  }
  if (*(uint *)(ar4 + 0x50) < *(uint *)(ar4 + 0x34)) {
    *(undefined1 *)(ar4 + 0x44) = 1;
  }
  if ((*(uint *)(ar4 + 0x5c) < *(uint *)(ar4 + 0x2c)) && (*(char *)(ar4 + 0x44) != '\0')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c12182e\n.set _FUN_8c12182e, _FUN_8c12182e_def\n");
