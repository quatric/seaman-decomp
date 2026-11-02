#include "../decls.h"
int FUN_8c0d49cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar2;
  undefined4 in_PR;
  char cVar3;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  uStack_34 = DAT_8c13f4f8;
  uStack_28 = DAT_8c13f504;
  uStack_24 = DAT_8c13f508;
  puStack_30 = &uStack_20;
  puStack_2c = &uStack_34;
  uStack_14 = in_PR;
  iVar1 = get_field_d0_0d3f70(ar4 + 0x34,ar5,ar6,ar7);
  ar4_00 = FUN_8c0d3f50(ar4 + 0x34,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (cVar3 == '\0') {
      uStack_20 = *(undefined4 *)(ar4_00 + 8);
      uStack_1c = *(undefined4 *)(ar4_00 + 0xc);
      uStack_18 = *(undefined4 *)(ar4_00 + 0x10);
    }
    else {
      uStack_20 = (undefined4)*(undefined8 *)(ar4_00 + 8);
      uStack_1c = (undefined4)*(undefined8 *)(ar4_00 + 0xc);
      uStack_18 = (undefined4)*(undefined8 *)(ar4_00 + 0x10);
      uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(ar4_00 + 0x10) >> 0x20);
    }
    ar6_00 = 0x40;
    ar5_00 = 1;
    FUN_8c234fd0(&puStack_30,1,0x40,ar7);
    ar4_00 = list_node_next(ar4_00,ar5_00,ar6_00,ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0d49cc\n.set _FUN_8c0d49cc, _FUN_8c0d49cc_def\n");
