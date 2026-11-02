#include "../decls.h"
undefined4 s_GRAPHICS_0baac0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined4 uVar3;
  char *ar5_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_fr1;
  char cVar6;
  
  cVar6 = '\0';
  *ar5 = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  uVar2 = 0;
  ar5_00 = ar5;
  FUN_8c257104(0,ar5,ar6,ar7);
  FUN_8c235eb4(uVar2,ar5_00,ar6,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(ar4 + 0x34) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x34) = CONCAT44(0x3f800000,extraout_fr1);
  }
  for (iVar5 = 0; iVar5 < 0x12; iVar5 = iVar5 + 1) {
    *(undefined4 *)(iVar5 * 0xc + ar4 + 0x68) = 0;
  }
  uVar4 = 0x12;
  uVar2 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x13c,ar4 + 100,0x8c4312a8,0x12);
  iVar5 = ar4 + 0x13c;
  (**(code **)(*(int *)(ar4 + 0x48) + 8))((int *)(ar4 + 0x48),iVar5,uVar2,uVar4);
  uVar2 = get_field_4_0253e4(ar4 + 0x48,iVar5,uVar2,uVar4);
  iVar5 = FUN_8c02100c(0x8c3eb334,s_TITLE_pvm_8c13c891,s_GRAPHICS_8c13c89b,uVar2);
  if (iVar5 == 0) {
    uVar2 = 2;
    report_error_message(s_Failed_to_load_Title_pvm___8c13c8a4,s_CProlog__Ready_8c13c8bf,0,2);
  }
  *(undefined2 *)(ar4 + 0x38) = 0xff;
  *(undefined4 *)(ar4 + 0x3c) = 1;
  *(undefined4 *)(ar4 + 0x40) = 0;
  uVar4 = 0x4208;
  FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,uVar2);
  *(undefined2 *)((int)ar5 + 0x96) = _DAT_8c431a86;
  *(undefined2 *)(ar5 + 0x26) = _DAT_8c431a88;
  *(undefined2 *)((int)ar5 + 0x9a) = _DAT_8c431a8a;
  *(undefined2 *)(ar5 + 0x27) = _DAT_8c431a8c;
  *(undefined2 *)((int)ar5 + 0x9e) = _DAT_8c431a8e;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined1 *)((int)ar5 + iVar5 + 4) = *(undefined1 *)(iVar5 + -0x73bce56e);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    iVar1 = iVar5 * 10;
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0xc) = *(undefined2 *)(iVar1 + -0x73bce566);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0xe) = *(undefined2 *)(iVar1 + -0x73bce564);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x10) = *(undefined2 *)(iVar1 + -0x73bce562);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x12) = *(undefined2 *)(iVar1 + -0x73bce560);
    *(undefined2 *)((int)ar5 + iVar5 * 10 + 0x14) = *(undefined2 *)(iVar1 + -0x73bce55e);
  }
  uVar3 = 0x8c431ab8;
  FUN_8c0b9f5c(ar5 + 0xb,0x8c431ab8,uVar4,uVar2);
  FUN_8c0b9bb0(ar5,uVar3,uVar4,uVar2);
  uVar3 = FUN_8c0b93c0(ar5,0,uVar4,uVar2);
  ar5[0x30] = uVar3;
  uVar4 = FUN_8c0b96e4(ar5,&DAT_8c431a7c,uVar4,uVar2);
  ar5[0x31] = uVar4;
  *(int *)(ar4 + 0x150) = *(int *)(ar4 + 0x150) + 1;
  uVar4 = 0x4208;
  iVar5 = FUN_8c0b7454(s_SM2000US_USR_8c13c026,0x8c431a68,0x4208,uVar2);
  if (iVar5 == 0) {
    uVar4 = 0x8c431a68;
    FUN_8c0cd3c8(ar5[0x1f6],ar5,0x8c431a68,uVar2);
  }
  uVar3 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_FOREST_8c13c8ce,uVar4,uVar2);
  *(undefined4 *)(ar4 + 0x144) = uVar3;
  ar5_01 = s_AMB_RAIN_8c13c8d9;
  uVar3 = pack_acquire_entry_handle(0x8c2b59d0,s_AMB_RAIN_8c13c8d9,uVar4,uVar2);
  *(undefined4 *)(ar4 + 0x148) = uVar3;
  FUN_8c0ba37c(ar4 + 0x158,ar5_01,uVar4,uVar2);
  *(undefined4 *)(ar4 + 8) = 1;
  return 1;
}

__asm__(".globl _s_GRAPHICS_0baac0\n.set _s_GRAPHICS_0baac0, _s_GRAPHICS_0baac0_def\n");
