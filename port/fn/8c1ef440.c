#include "../decls.h"
undefined4 FUN_8c1ef440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 in_r0;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar2 = (&DATA_8c125404);
  for (puVar4 = *(undefined4 **)(&DATA_8c1253f8); puVar3 = (&DATA_8c1253f4),
      puVar4 < *(undefined4 **)puVar2; puVar4 = puVar4 + 1) {
    *puVar4 = 0;
  }
  puVar6 = *(undefined1 **)(&DATA_8c1253e0);
  for (puVar5 = *(undefined1 **)(&DATA_8c1253e8); puVar2 = (&DATA_8c26bea4),
      puVar5 < *(undefined1 **)puVar3; puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  for (puVar5 = *(undefined1 **)(&DATA_8c26be98); puVar3 = (&DATA_8c26be94),
      puVar5 < *(undefined1 **)puVar2; puVar5 = puVar5 + 1) {
    *puVar5 = 0;
  }
  puVar6 = *(undefined1 **)(&DATA_8c26be80);
  for (puVar5 = *(undefined1 **)(&DATA_8c26be88); puVar5 < *(undefined1 **)puVar3;
      puVar5 = puVar5 + 1) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + 1;
    *puVar5 = uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1ef440\n.set _FUN_8c1ef440, _FUN_8c1ef440_def\n");
