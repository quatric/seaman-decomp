#include "../decls.h"
undefined4 FUN_8c1f3de2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int in_r3;
  int iVar1;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_r14;
  
  *unaff_r14 = in_r3;
  *(undefined4 *)(ain0 + in_r2) = ar4;
  *(undefined4 *)(ain0 + 4 + *unaff_r14) = ar6;
  a6 = 0x1f;
  if ((*(uint *)(ain0 + *unaff_r14) & 0x1f) != 0) {
    *(int *)(*unaff_r14 + 0xfc4) = *(int *)(*unaff_r14 + 0xfc4) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) & 0xffffffe0;
  }
  iVar1 = *unaff_r14;
  if ((*(uint *)(iVar1 + 0xfc8) & 0x1f) != 0) {
    *(int *)(iVar1 + 0xfc8) = *(int *)(iVar1 + 0xfc8) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) & 0xffffffe0;
  }
  *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) | 0xa0000000;
  *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(*unaff_r14 + 0xf90 + *piVar3) != '\0') {
      a4 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(a4,a5,a6,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,ar7);
  *(undefined4 *)(*unaff_r14 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x10) = 0;
  iVar1 = *unaff_r14;
  *(uint *)(*(int *)(iVar1 + 0x10f4) + 0x80) = *(uint *)(iVar1 + 0x10c0) | *(uint *)(iVar1 + 0x10d0)
  ;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3de2\n.set _FUN_8c1f3de2, _FUN_8c1f3de2_def\n");
