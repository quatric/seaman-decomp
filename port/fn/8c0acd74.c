#include "../decls.h"
undefined4 CAnimal_m3_0acd74_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  int *ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((((((char)uVar1 == '\x01') && (*(int *)(0x948 + ar4) == 0)) &&
       (*(int *)(0x94c + ar4) == 0)) &&
      ((*(int *)(0x950 + ar4) == 0 && (*(int *)(0x954 + ar4) == 0)))) &&
     (((*(int *)(0x958 + ar4) == 0 &&
       ((*(int *)(0x95c + ar4) == 0 && (*(int *)(0x960 + ar4) == 0)))) &&
      (*(int *)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    FUN_8c0ad050(ar4,ar5,ar6,ar7_00);
  }
  if ((((*(int *)(0x948 + ar4) != 0) || (*(int *)(0x94c + ar4) != 0)) ||
      (*(int *)(0x950 + ar4) != 0)) ||
     (((*(int *)(0x954 + ar4) != 0 || (*(int *)(0x958 + ar4) != 0)) ||
      ((*(int *)(0x95c + ar4) != 0 ||
       ((*(int *)(0x960 + ar4) != 0 || (*(int *)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    if (iVar2 != -1) {
      iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
      iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                        (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
      if (iVar2 < iVar3) {
        if (*(char *)(0x968 + ar4) == '\0') {
          *(undefined1 *)(0x968 + ar4) = 1;
          *(undefined4 *)(&DATA_8c13bcc4) = 0;
        }
        ar5_00 = ar7;
        s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00);
        ar6 = ar5;
      }
    }
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00);
    iVar3 = (**(code **)(**(int **)(0x308 + ar4) + 0x44))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7_00);
    if ((iVar3 + -1 <= iVar2) && (*(char *)(0x968 + ar4) == '\x01')) {
      *(undefined4 *)(&DATA_8c13bcc4) = 1;
      *(undefined1 *)(0x968 + ar4) = 0;
    }
  }
  if (*(int *)(0x77c + ar4) == 1) {
    *(undefined4 *)(0x170c + ar4) = 1;
  }
  if (*(int *)(0x75c + ar4) == 1) {
    if ((*(int *)(0x88c + ar4) != 0) && (*(int *)(0x890 + ar4) != 0)) {
      (**(code **)(0xb8 + *ar7))
                (ar7,*(undefined4 *)(0x88c + ar4),*(undefined4 *)(0x890 + ar4),
                 ar4 + 0x760);
      *(undefined4 *)(0x88c + ar4) = 0;
      *(undefined4 *)(0x890 + ar4) = 0;
    }
    *(undefined4 *)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl _CAnimal_m3_0acd74\n.set _CAnimal_m3_0acd74, _CAnimal_m3_0acd74_def\n");
