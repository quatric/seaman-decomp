#include "../decls.h"
undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8_def(int ar4,undefined4 ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar7_00;
  undefined4 *ar7_01;
  int iVar5;
  int in_stack_ffffff9c;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  iVar5 = *(int *)(ar4 + 0x328) + ar6 * 0x124;
  auStack_20[0] = 0;
  uStack_24 = 0;
  ar7_01 = (undefined4 *)(ar4 + ar6);
  iVar3 = ar6;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iVar3 = *(int *)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar5 + 0x18),iVar3,ar7_01);
    if (iVar1 == 0) {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message(*(undefined4 *)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 4)) == '\0') {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message("Attach NULL!!",s_CAnimal__LoadGRWait___8c130008,0,2);
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020bec(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    FUN_8c015bb0(*(int *)(iVar5 + 0xa0) + iVar1 * 4,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    ar7 = auStack_20;
    iVar3 = *(int *)(ar4 + 0x410);
    iVar1 = FUN_8c020bec(ar5,*(undefined4 *)(iVar5 + 0x1c),iVar3,ar7);
    if (iVar1 == 1) {
      FUN_8c015bb0(iVar5 + 0xb0,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
    }
    else {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message
                (*(undefined4 *)(iVar5 + 0x1c),s_Failed_to_read_Munzu_hand_motion_8c13001e,0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 8)) == '\0') {
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),s_Read_NSSM_Failed___8c130041,0,
                   2);
      }
      FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,auStack_20[0],
                   iVar3,ar7,in_stack_ffffff9c);
    }
    in_stack_ffffff9c = iVar1;
    FUN_8c015be4(*(int *)(iVar5 + 0xa8) + iVar1 * 4,auStack_20[0],iVar3,ar7,iVar1);
  }
  ar7_00 = &uStack_24;
  uVar4 = *(undefined4 *)(ar4 + 0x410);
  iVar3 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar5 + 0xc),uVar4,ar7_00);
  if (iVar3 == 0) {
    ar7_00 = (undefined4 *)0x2;
    uVar4 = 0;
    report_error_message
              (*(undefined4 *)(iVar5 + 0xc),s_Read_NJCM_Failed___CAnimal__Load_8c130054,0,2);
  }
  FUN_8c015ad4(iVar5 + 0x70,uStack_24,uVar4,ar7_00,in_stack_ffffff9c);
  s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01);
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    uVar4 = s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01);
  }
  return uVar4;
}

__asm__(".globl _s_Failed_to_Load_CAnimal_LoadG_0284b8\n.set _s_Failed_to_Load_CAnimal_LoadG_0284b8, _s_Failed_to_Load_CAnimal_LoadG_0284b8_def\n");
