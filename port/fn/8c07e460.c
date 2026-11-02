#include "../decls.h"
undefined4 FUN_8c07e460_def(int ar4,undefined4 ar5,undefined1 *ar6,int *ar7)

{
  int iVar1;
  undefined1 *ar6_00;
  float fVar2;
  double in_dr0;
  double dVar3;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  double in_xd14;
  bool bVar4;
  char cVar5;
  char cVar6;
  int in_stack_00000000;
  int *in_stack_00000004;
  undefined1 auStack_2c [4];
  double dStack_28;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar6_00 = ar6;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x214) = 0;
  Vec3_ctor_copy(auStack_2c,ar6,ar6_00,ar7);
  FUN_8c031700(ar4,ar6,ar6_00,ar7);
  iVar1 = *(int *)(ar4 + 0x134);
  if ((5 < iVar1) || (iVar1 < 0)) goto switchD_8c07e4c4_default;
                    
  switch(iVar1) {
  case 0:
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,ar6,ar6_00,ar7);
    if (in_stack_00000000 != 0) {
      if (in_stack_00000000 == 1) {
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
        goto switchD_8c07e4c4_caseD_1;
      }
      if (in_stack_00000000 != 2) break;
    }
    Vec3_assign(auStack_2c,&DAT_8c125e98,ar6_00,ar7);
    (**(code **)(*in_stack_00000004 + 0x128))(in_stack_00000004,auStack_2c,ar6_00,ar7);
    dVar3 = dStack_28;
    if (cVar6 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
      dVar3 = (double)CONCAT44((*(uint*)((uchar*)&dStack_28+0)),SUB84(in_dr0,0));
      in_dr0 = in_xd14;
    }
    if (cVar5 == '\0') {
      bVar4 = (float)((ulonglong)dVar3 >> 0x20) < in_fr15;
    }
    else {
      bVar4 = dVar3 < (double)CONCAT44(in_fr14,in_fr15);
    }
    dVar3 = dStack_28;
    if ((bVar4) && (dVar3 = in_dr0, cVar6 == '\0')) {
      dStack_28 = (double)CONCAT44((*(uint*)((uchar*)&dStack_28+4)),in_fr15);
      dVar3 = dStack_28;
    }
    dStack_28 = dVar3;
    ar7 = (int *)&DAT_8c125ea8;
    ar6_00 = auStack_2c;
    iVar1 = FUN_8c07c5f8(ar4,ar5,ar6_00,&DAT_8c125ea8);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 1:
switchD_8c07e4c4_caseD_1:
    Vec3_assign(auStack_2c,&DAT_8c125ee8,ar6_00,ar7);
    (**(code **)(*in_stack_00000004 + 0x128))(in_stack_00000004,auStack_2c,ar6_00,ar7);
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      dStack_28 = (double)CONCAT44((*(uint*)((uchar*)&dStack_28+4)),fVar2);
      dVar3 = dStack_28;
    }
    dStack_28 = dVar3;
    ar6_00 = auStack_2c;
    iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,in_stack_00000004);
    ar7 = in_stack_00000004;
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 2:
    (**(code **)(*in_stack_00000004 + 0x128))(in_stack_00000004,auStack_2c,ar6_00,ar7);
    if (cVar6 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x7c);
    }
    if (cVar5 == '\0') {
      fVar2 = SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar2 = SUB84(in_dr0 + in_dr0,0);
    }
    dVar3 = in_xd0;
    if (cVar6 == '\0') {
      dStack_28 = (double)CONCAT44((*(uint*)((uchar*)&dStack_28+4)),fVar2);
      dVar3 = dStack_28;
    }
    dStack_28 = dVar3;
    ar6_00 = auStack_2c;
    iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,in_stack_00000004);
    ar7 = in_stack_00000004;
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 3:
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7);
    if ((iVar1 == 0) || (iVar1 == 0x13)) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
    }
    else if (in_stack_00000000 == 1) {
      FUN_8c034148(ar4 + 0xb0,0x13,ar6_00,ar7);
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    }
    break;
  case 4:
    Vec3_assign(auStack_2c,&DAT_8c125ec8,ar6_00,ar7);
    ar6_00 = auStack_2c;
    iVar1 = FUN_8c074d1c(ar4,ar5,ar6_00,ar7);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    break;
  case 5:
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar6_00,ar7);
    if (iVar1 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    }
  }
switchD_8c07e4c4_default:
  if (*(int *)(ar4 + 0x134) != 0) {
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7);
  }
  Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  return 1;
}

__asm__(".globl _FUN_8c07e460\n.set _FUN_8c07e460, _FUN_8c07e460_def\n");
