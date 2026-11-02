#include "../decls.h"
int FUN_8c0dbbe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  int iVar4;
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  iVar2 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    aiStack_1c[0] = iVar2;
    iVar3 = FUN_8c0f4d34(iVar2,ar5,ar6,ar7);
    if (iVar3 == 0) {
      iVar2 = get_field_24_05c284(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar2 == 0xd) {
        *(undefined4 *)0x8c431a54 = 0;
      }
      if (aiStack_1c[0] == *(int *)(0xac8 + ar4)) {
        *(undefined4 *)(0xac8 + ar4) = 0;
      }
      if (aiStack_1c[0] == *(int *)(0x9d4 + ar4)) {
        *(undefined4 *)(0x9d4 + ar4) = 0;
      }
      iVar2 = aiStack_1c[0];
      iVar3 = get_field_24_05c284(aiStack_1c[0],ar5,ar6,ar7);
      if (iVar3 != 0xf) {
        FUN_8c0c4e2c(iVar2,ar5,ar6,ar7);
      }
      iVar2 = list_node_next(aiStack_1c[0],ar5,ar6,ar7);
      iVar3 = get_field_24_05c284(aiStack_1c[0],ar5,ar6,ar7);
      ar5_00 = get_field_160_0dab80(aiStack_1c[0],ar5,ar6,ar7);
      (*(code *)(&s_Item_pointer_is_NULL_CNodePt_0fe338))
                (iVar3 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7);
      uStack_20 = get_field_160_0dab80(aiStack_1c[0],ar5_00,ar6,ar7);
      FUN_8c0feb88(ar4 + 0x7a4,&uStack_20,ar6,ar7);
      (*(code *)(&s_Item_pointer_is_NULL_CItemLi_0fe01c))
                (ar4 + 0xa4,aiStack_1c[0],ar6,ar7);
      ar5 = 1;
      iVar3 = FUN_8c0d1b90(aiStack_1c,1,ar6,ar7);
    }
    else {
      iVar3 = list_node_next(iVar2,ar5,ar6,ar7);
      iVar2 = iVar3;
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0dbbe8\n.set _FUN_8c0dbbe8, _FUN_8c0dbbe8_def\n");
