#include "../decls.h"
int s_cp_ESA_FRONT_HOME_njd_08bd28_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar7_00;
  undefined4 uStack_1c;
  int aiStack_18 [2];
  
  iVar1 = -0x208;
  FUN_8c028afc(ar4,ar5,ar6,ar7);
  ar7_00 = ar4 + ar6;
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(&DATA_8c139e9c),*(undefined4 *)(0x410 + ar4),ar7_00);
  if (ar6 == 2) {
    (*(code *)(&FUN_8c020a70))
              (ar5,*(undefined4 *)(&DATA_8c139f68),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)(&DATA_8c139f6c),*(undefined4 *)(0x410 + ar4),ar7_00);
    uVar4 = *(undefined4 *)(0x410 + ar4);
    uVar3 = *(undefined4 *)(&DATA_8c139f70);
    FUN_8c020d58(ar5,uVar3,uVar4,ar7_00);
    uVar2 = FUN_8c256670(*(undefined4 *)(0x844 + ar4),uVar3,uVar4,ar7_00);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    ar6 = *(int *)(&stack0xfffffff0 + iVar1);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(0x844 + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = (&DATA_8c139fcc) + 0x5be;
      (*(code *)(&FUN_8c014334))
                ((int)&uStack_1c + 0x110 + iVar1,uVar3,uVar4,ar7_00,
                 *(undefined4 *)((int)&uStack_1c + iVar1));
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)(&report_error_message))
                      ((int)aiStack_18 + 0x10c + iVar1,
                       (&DATA_8c139fcc) + 0x5dd,1,2);
    }
  }
  else if (ar6 == 3) {
    (*(code *)(&FUN_8c020a70))
              (ar5,*(undefined4 *)(&DATA_8c139f44),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020b68))
              (ar5,*(undefined4 *)(&DATA_8c139f44),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)(&DATA_8c139f54),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020d58))
              (ar5,*(undefined4 *)(&DATA_8c139f5c),*(undefined4 *)(0x410 + ar4),ar7_00);
    (*(code *)(&FUN_8c020c60))
              (ar5,*(undefined4 *)((&DATA_8c139f54) + 4),*(undefined4 *)(0x410 + ar4),ar7_00)
    ;
    (*(code *)(&FUN_8c020d58))
              (ar5,*(undefined4 *)((&DATA_8c139f5c) + 4),*(undefined4 *)(0x410 + ar4),ar7_00)
    ;
    uVar4 = *(undefined4 *)(0x410 + ar4);
    uVar3 = *(undefined4 *)(&DATA_8c139f4c);
    FUN_8c020e48(ar5,uVar3,uVar4,ar7_00);
    uVar2 = FUN_8c256670(*(undefined4 *)(0x844 + ar4),uVar3,uVar4,ar7_00);
    *(undefined4 *)((int)aiStack_18 + iVar1 + 4) = uVar2;
    ar6 = *(int *)((int)aiStack_18 + iVar1 + 4);
    if (ar6 == -1) {
      *(undefined4 *)((int)aiStack_18 + iVar1) =
           *(undefined4 *)**(undefined4 **)(0x844 + ar4);
      *(undefined **)((int)&uStack_1c + iVar1) = (&DATA_8c139fcc) + 0x5be;
      (*(code *)(&FUN_8c014334))
                (&stack0xfffffff4 + iVar1,uVar3,uVar4,ar7_00,
                 *(undefined4 *)((int)&uStack_1c + iVar1));
      *(undefined4 *)((int)aiStack_18 + iVar1) = 5;
      ar6 = (*(code *)(&report_error_message))
                      (&stack0xfffffff4 + iVar1,(&DATA_8c139fcc) + 0x5ff,1,2);
    }
  }
  return ar6;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08bd28\n.set _s_cp_ESA_FRONT_HOME_njd_08bd28, _s_cp_ESA_FRONT_HOME_njd_08bd28_def\n");
