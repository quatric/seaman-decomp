#include "../decls.h"
undefined4 CAnimal_m3_085550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  FUN_8c02a788(ar4,ar5_00,ar6,ar7_00);
  FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((((char)uVar1 == '\x01') && (*(int *)(0x10c0 + ar4) == 0)) &&
      (*(int *)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(0x10c8 + ar4) == 0 && (*(int *)(0x10cc + ar4) == 0)) &&
      ((*(int *)(0x10d0 + ar4) == 0 && (*(int *)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    FUN_8c0858e4(ar4,ar5,ar6,ar7_00);
  }
  if (((*(int *)(0x10c0 + ar4) != 0) || (*(int *)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(0x10c8 + ar4) != 0 ||
      (((*(int *)(0x10cc + ar4) != 0 || (*(int *)(0x10d0 + ar4) != 0)) ||
       (*(int *)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    FUN_8c0859c8(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      if (*(char *)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(0x10d8 + ar4) = 1;
        *(undefined4 *)(&DATA_8c13bcc4) = 0;
      }
      s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00);
    iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m3_085550\n.set _CAnimal_m3_085550, _CAnimal_m3_085550_def\n");
