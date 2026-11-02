#include "../decls.h"
undefined4 CAnimal_m3_036568_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = get_field_a0_035724(ar5,ar5,ar6,ar7);
  if (((char)uVar1 == '\x02') && (*(int *)(0x7d4 + ar5) == 1)) {
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  CAnimal_m3_026078(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if (((char)uVar1 == '\x01') && (*(int *)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    FUN_8c0366f0(ar4,ar5,ar6,ar7_00);
  }
  if (*(int *)(0x1134 + ar4) != 0) {
    ar5_00 = ar5;
    FUN_8c03679c(ar4,ar5,ar6,ar7_00);
  }
  uVar1 = FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00);
  if ((char)uVar1 == '\x02') {
    iVar2 = get_field_2f0_03655c(ar4 + 0xd2c,ar5_00,ar6,ar7_00);
    if (iVar2 == 1) {
      s_CSquidLine_036894(ar4,ar7,ar5,ar7_00);
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  FUN_8c02a788(ar4,ar5_00,ar6,ar7_00);
  FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00);
  return 1;
}

__asm__(".globl _CAnimal_m3_036568\n.set _CAnimal_m3_036568, _CAnimal_m3_036568_def\n");
