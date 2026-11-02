#include "../decls.h"
undefined4 FUN_8c200cf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(ar4 + 0x1c);
  if ((((((0 < *piVar2) && (*piVar2 <= (int)0x7ff)) && (*piVar2 == piVar2[2])) &&
       ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
      (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) &&
       (piVar2[0xd] <= *piVar2)))) &&
     (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
      ((*(int *)(*(undefined4 *)0x8c4783dc + 8) != 0 ||
       ((piVar2[4] <= (int)*(short *)(ar4 + 0x10) && (piVar2[6] <= (int)*(short *)(ar4 + 0x12)))))))
     )) {
    iVar1 = *piVar2;
    if (iVar1 == 0xff) {
      *(undefined4 *)(ar4 + 4) = 0;
    }
    else if (iVar1 == 0x1ff) {
      *(undefined4 *)(ar4 + 4) = 1;
    }
    else if (iVar1 == 0x3ff) {
      *(undefined4 *)(ar4 + 4) = 2;
    }
    else {
      if (iVar1 != 0x7ff) {
        return 0xffffffff;
      }
      *(undefined4 *)(ar4 + 4) = 3;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c200cf4\n.set _FUN_8c200cf4, _FUN_8c200cf4_def\n");
