#include "../decls.h"
uint * FUN_8c0108fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint *in_r0;
  uint *puVar2;
  uint *in_r1;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)((int)puVar3 + -3);
        *(char *)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)((int)puVar3 + -2);
          *(char *)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}

__asm__(".globl _FUN_8c0108fc\n.set _FUN_8c0108fc, _FUN_8c0108fc_def\n");
