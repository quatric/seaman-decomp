#include "../decls.h"
int FUN_8c1fab8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *(undefined4 *)0xffc00004 = *(undefined4 *)0xffc00004 & 0xfe;
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed8;
  for (iStack_c = 0; iStack_c < 0x50000; iStack_c = iStack_c + 1) {
  }
  if ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x1c) & 4) == 0) {
    *(undefined4 *)0x8c475ed8 = 1;
  }
  else {
    *(undefined4 *)0x8c475ed8 = 0;
  }
  puVar6 = 0xffe00008;
  puVar5 = 0xffe80008;
  piVar4 = 0x8c475ed4;
  iVar3 = 0x80000;
  if (*piVar1 == 0) {
    *(undefined4 *)0x8c475ed4 = 0xffe80000;
    *puVar5 = 0;
    *(undefined2 *)(*piVar4 + 0x18) = 6;
    *(undefined2 *)(*piVar4 + 8) = 0;
    *(undefined2 *)*piVar4 = 0;
    *(undefined1 *)(*piVar4 + 4) = 0x28;
    for (iStack_4 = 0; iStack_4 < iVar3; iStack_4 = iStack_4 + 1) {
    }
    *(undefined2 *)(*piVar4 + 0x18) = 0x308;
    *(undefined2 *)(*piVar4 + 8) = 0x30;
  }
  else {
    *piVar2 = 0xffe00000;
    *puVar6 = 0;
    *(undefined1 *)(*piVar2 + 8) = 0;
    *(undefined1 *)*piVar2 = 0;
    *(undefined1 *)(*piVar2 + 4) = 0x28;
    for (iStack_8 = 0; iStack_8 < iVar3; iStack_8 = iStack_8 + 1) {
    }
    *(undefined1 *)(*piVar2 + 8) = 0x30;
  }
  return *piVar1;
}

__asm__(".globl _FUN_8c1fab8c\n.set _FUN_8c1fab8c, _FUN_8c1fab8c_def\n");
