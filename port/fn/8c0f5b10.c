#include "../decls.h"
int s_Failed_to_load_textuer_FOOD_0f5b18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined1 *ar5_01;
  undefined **ar5_02;
  undefined *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  uint uVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar7_00 = 4;
  ar6_00 = &DAT_8c1401b4;
  ar5_00 = &DAT_8c140184;
  iVar1 = ar4 + 0x170;
  FUN_8c016464(iVar1,&DAT_8c140184,&DAT_8c1401b4,4);
  iVar1 = rand(iVar1,ar5_00,ar6_00,ar7_00);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 512.0001354217529;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40800000,fVar3);
  }
  else {
    dVar4 = -1.3757563587465766e-249;
  }
  if (cVar5 == '\0') {
    iVar1 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar4 * dVar4);
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    ar6_01 = 4;
    ar5_01 = &DAT_8c43b338 + iVar1 * 0x10;
    FUN_8c0164c8(ar4 + 0x170,ar5_01,4,ar7_00);
  }
  else {
    ar6_01 = 4;
    ar5_01 = &DAT_8c43b368;
    FUN_8c0164c8(ar4 + 0x170,&DAT_8c43b368,4,ar7_00);
  }
  FUN_8c014790(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  FUN_8c014764(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  FUN_8c014a64(ar4 + 0x170,ar5_01,ar6_01,ar7_00);
  ar5_02 = &PTR_PTR_8c1401d0;
  (**(code **)(*(int *)(ar4 + 0x1b4) + 8))((int *)(ar4 + 0x1b4),&PTR_PTR_8c1401d0,ar6_01,ar7_00);
  iVar1 = get_field_4_0253e4(ar4 + 0x1b4,ar5_02,ar6_01,ar7_00);
  for (uVar2 = 0; uVar2 < *(uint *)(iVar1 + 4); uVar2 = uVar2 + 1) {
  }
  iVar1 = FUN_8c020ef0(ar5,&DAT_8c14026d,s___GRAPHICS_COMMON_8c1401e2 + 2,iVar1);
  if (iVar1 == -1) {
    iVar1 = report_error_message(s_Failed_to_load_textuer___FOOD__8c140272,&DAT_8c140291,0,2);
  }
  return iVar1;
}

__asm__(".globl _s_Failed_to_load_textuer_FOOD_0f5b18\n.set _s_Failed_to_load_textuer_FOOD_0f5b18, _s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
