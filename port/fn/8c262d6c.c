#include "../decls.h"
undefined4 FUN_8c262d6c_def(int ar4,uint *ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  uint uVar3;
  uint *a5;
  uint uVar4;
  uint *a6;
  int *a7;
  uint *a6_00;
  int *a4;
  int iVar5;
  
  puVar1 = (&FUN_8c25feca);
  a6_00 = (uint *)(int)0x4000;
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar5 = 0; iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),a5,a6,a7), iVar5 < iVar2;
      iVar5 = iVar5 + 1) {
    a4 = *(int **)(iVar5 * 4 + ar4 + 0xc);
    a5 = (uint *)0x0;
    a7 = (int *)(iVar5 * 8 + ar4 + 0x1c);
    a6 = a6_00;
    (**(code **)(*a4 + 0x18))(a4,0,a6_00,a7);
  }
  iVar5 = get_field_1c_26b94e(ar4_00,a5,a6,a7);
  *ar5 = (uint)(*(int *)(ar4 + 0x1c) - iVar5) >> 1;
  uVar4 = *(uint *)(ar4 + 0x38);
  uVar3 = *(uint *)(ar4 + 0x20) >> 1;
  if ((int)uVar3 < (int)uVar4) {
    uVar4 = uVar3;
  }
  *ar6 = uVar4;
  if (*(int *)(ar4 + 0x3c) < 0) {
    *ar7 = 0x1fffffff;
  }
  else {
    *ar7 = *(int *)(ar4 + 0x3c) - *(int *)(ar4 + 0x40);
  }
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x3c);
}

__asm__(".globl _FUN_8c262d6c\n.set _FUN_8c262d6c, _FUN_8c262d6c_def\n");
