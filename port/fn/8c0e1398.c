#include "../decls.h"
int FUN_8c0e1398_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_dr0;
  undefined4 uVar5;
  undefined8 uVar4;
  char cVar6;
  char cVar7;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar4 + 0x22eb4;
  FUN_8c0d3d6c(ar4 + 0x10ac,uVar2,ar6,ar7);
  FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7);
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x2300c),uVar5);
  }
  else {
    uVar4 = *(undefined8 *)(ar4 + 0x2300c);
  }
  if (cVar6 == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
    uVar2 = 0;
    FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
  }
  FUN_8c0d0d1c(ar4 + 0x13b8c,uVar2,ar6,ar7);
  ar4_00 = FUN_8c101154(*(undefined4 *)(ar5 + 0x7cc),uVar2,ar6,ar7);
  if (ar4_00 == 1) {
    iVar1 = get_field_38_0db5a0(ar4 + 0x4d4,uVar2,ar6,ar7);
    ar4_00 = 0;
    if (iVar1 != 0) {
      ar4_00 = FUN_8c0db580(ar4 + 0x4d4,uVar2,ar6,ar7);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = get_field_b8_101178(*(undefined4 *)(ar5 + 0x7cc),uVar2,ar6,ar7);
        uVar2 = uVar2 & 0xff;
        (**(code **)(*(int *)(*(int *)(ar4_00 + 8) + 8) + 0x50))(*(int *)(ar4_00 + 8),uVar2,ar6,ar7)
        ;
        ar4_00 = list_node_next(ar4_00,uVar2,ar6,ar7);
      }
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0e1398\n.set _FUN_8c0e1398, _FUN_8c0e1398_def\n");
