#include "../decls.h"
undefined4 s_CAnimBody_SetFrame_033e6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr4;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  undefined4 uStack_14;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__SetFrame___8c132d31,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  if (cVar8 == '\0') {
    uVar5 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(ar4 + 0x20) = in_fr4;
  }
  else {
    uVar5 = CONCAT44(uStack_14,in_fr4);
    *(undefined8 *)(ar4 + 0x20) = uVar5;
  }
  uVar4 = (undefined4)uVar5;
  ar5_00 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7);
  if (*(char *)(ar4 + 0x54) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = *(undefined4 *)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      dVar6 = (double)CONCAT44((float)(iVar1 + -1),uVar4);
    }
    else {
      dVar6 = (double)(iVar1 + -1);
    }
    if (cVar7 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 1;
      *(undefined4 *)(ar4 + 0x70) = 1;
      if (*(int *)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar6 = *(double *)(ar4 + 0x5c);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 - dVar6,0);
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),fVar3);
    }
    else {
      dVar6 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x58) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    uVar2 = 3;
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x5c) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 4;
      *(undefined4 *)(ar4 + 0x70) = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_SetFrame_033e6e\n.set _s_CAnimBody_SetFrame_033e6e, _s_CAnimBody_SetFrame_033e6e_def\n");
