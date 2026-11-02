#include "../decls.h"
undefined4 FUN_8c0a3aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  float fVar5;
  code *pcVar6;
  undefined8 in_dr0;
  code *pcVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  if (*(int *)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6_00 = 0;
    uVar3 = 4;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0,0);
    *(undefined4 *)(ar4 + 0x274) = 1;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    uVar3 = ar5;
    ar6_00 = ar6;
    if (*(int *)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6_00,ar7);
  if (iVar1 == 4) {
    Vec3_set_xyz(auStack_18,uVar3,ar6_00,ar7);
    iVar1 = ar4 + 0x80;
    FUN_8c031eb0(ar4,ar5,ar6,iVar1,auStack_28);
    Vec3_assign(ar4 + 0x80,auStack_28,ar6,iVar1);
    Vec3_dtor(auStack_28,0xffffffff,ar6,iVar1);
    uVar3 = 0xffffffff;
    object_dtor_delete(auStack_18,0xffffffff,ar6,iVar1);
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
    if (cVar10 == '\0') {
      pcVar7 = (code *)0x41200000;
    }
    else {
      fVar5 = 10.0;
      pcVar7 = Vec3_set_xyz;
    }
    if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
      if (cVar10 == '\0') {
        pcVar6 = pcVar7;
        pcVar7 = (code *)0x42200000;
      }
      else {
        pcVar6 = (code *)0x42200000;
        pcVar7 = (code *)0x24c;
      }
      if (cVar9 == '\0' && (float)(uint)pcVar6 < (float)(uint)pcVar7) {
        iVar2 = *(int *)(ar4 + 0x24c);
        *(int *)(ar4 + 0x24c) = iVar2 + 1;
        *(int *)(ar4 + 0x24c) = iVar2 + 2;
        if (4 < *(int *)(ar4 + 0x24c)) {
          *(undefined4 *)(ar4 + 0x24c) = 5;
        }
      }
    }
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
    if (cVar10 == '\0') {
      fVar5 = 40.0;
    }
    else {
      pcVar7 = (code *)0x42200000;
      fVar5 = 8.23963e-43;
    }
    if ((cVar9 != '\0' || fVar5 <= (float)(uint)pcVar7) &&
       (*(int *)(ar4 + 0x24c) = *(int *)(ar4 + 0x24c) + -1, *(int *)(ar4 + 0x24c) < 3)) {
      *(undefined4 *)(ar4 + 0x24c) = 0;
    }
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,iVar1);
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x24c) = 0;
    }
    else if (*(int *)(ar4 + 0x274) != 0) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1,ar5);
      if (cVar10 == '\0') {
        fVar8 = 35.0;
      }
      else {
        fVar5 = 35.0;
        fVar8 = 6.50202e-43;
      }
      if (cVar9 != '\0' || fVar8 <= fVar5) {
        *(int *)(ar4 + 0x1d0) = *(int *)(ar4 + 0x1d0) + *(int *)(ar4 + 0x274);
        if (*(int *)(ar4 + 0x1d0) < 7) {
          if (*(int *)(ar4 + 0x1d0) < 2) {
            *(undefined4 *)(ar4 + 0x274) = 0;
          }
        }
        else {
          *(int *)(ar4 + 0x274) = -*(int *)(ar4 + 0x274);
        }
      }
    }
  }
  else {
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0a3aac\n.set _FUN_8c0a3aac, _FUN_8c0a3aac_def\n");
