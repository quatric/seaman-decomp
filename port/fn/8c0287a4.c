#include "../decls.h"
int s_CAnimal_LoadGResourceWait_0287ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *ar7_00;
  undefined4 auStack_18 [2];
  
  iVar1 = (**(code **)(0x144 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  if (*(int *)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    auStack_18[0] = 0;
    ar7_00 = auStack_18;
    uVar4 = *(undefined4 *)(0x410 + ar4);
    iVar3 = FUN_8c020af4(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,ar7_00);
    if (iVar3 == 0) {
      ar7_00 = (undefined4 *)0x2;
      uVar4 = 0;
      (*(code *)(&report_error_message))
                (*(undefined4 *)(iVar1 + 0xc),(&DATA_8c12fdac) + 0x2ee,0,2);
    }
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = auStack_18[0];
    (**(code **)(*piVar2 + 8))(piVar2,auStack_18[0],uVar4,ar7_00);
    uVar4 = get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00);
    uVar5 = *(undefined4 *)(0x410 + ar4);
    ar5_00 = *(undefined **)(iVar1 + 0x14);
    iVar3 = FUN_8c020ef0(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&DATA_8c12fdac) + 0x317;
      report_error_message(*(undefined4 *)(iVar1 + 0x14),ar5_00,0,2);
    }
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)(&s_CAnimal_SetPVMTexture_s_029404))
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7);
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar4,ar7);
    uVar4 = get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7);
    uVar5 = *(undefined4 *)(0x410 + ar4);
    ar5_00 = *(undefined **)(ar6 * 0x14 + iVar1 + 0x20);
    iVar3 = FUN_8c02100c(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&DATA_8c12fdac) + 0x2d1;
      (*(code *)(&report_error_message))
                ((&DATA_8c12fdac) + 0xda,ar5_00,0,2);
    }
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (*(code *)(&get_field_4_0253e4))
                      (iVar1 + ar6 * 8 + 0x88,ar5_00,uVar5,uVar4);
    iVar3 = (*(code *)(&FUN_8c020ef0))
                      (ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(0x410 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)(&report_error_message))
                        (*(undefined4 *)(iVar1 + 0x10),(&DATA_8c12fdac) + 0x340
                         ,0,2);
    }
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)(&s_CAnimal_SetPVMTexture_s_029404))
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4);
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x88);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar5,uVar4);
    uVar4 = (*(code *)(&get_field_4_0253e4))
                      (iVar1 + ar6 * 8 + 0x88,iVar3,uVar5,uVar4);
    iVar3 = (*(code *)(&FUN_8c02100c))
                      (ar5,*(undefined4 *)(ar6 * 0x14 + iVar1 + 0x48),
                       *(undefined4 *)(0x410 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)(&report_error_message))
                        ((&DATA_8c12fdac) + 0x18c,
                         (&DATA_8c12fdac) + 0x2d1,0,2);
    }
  }
  return iVar3;
}

__asm__(".globl _s_CAnimal_LoadGResourceWait_0287ac\n.set _s_CAnimal_LoadGResourceWait_0287ac, _s_CAnimal_LoadGResourceWait_0287ac_def\n");
