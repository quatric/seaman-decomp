#include "../decls.h"
undefined4 FUN_8c04e7e0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_fr1;
  uint uVar5;
  double dVar6;
  double dVar7;
  double in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  dVar7 = (double)CONCAT44(0x41200000,in_fr1);
  iVar1 = ar5;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  do {
    iVar2 = *(int *)(ar4 + 300);
    if ((0xc < iVar2) || (iVar2 < 0)) goto switchD_8c04e828_caseD_4;
                    
    switch(iVar2) {
    case 0:
      (**(code **)(*in_stack_00000000 + 0x178))(in_stack_00000000,iVar1,ar6,ar7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(0x41a00000,(int)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar6 = -0.007812501909938874;
        in_xd0 = dVar7;
      }
      dVar7 = dVar6;
      if (cVar8 != '\0' || (float)((ulonglong)dVar6 >> 0x20) <= SUB84(dVar6,0)) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        *(undefined4 *)(ar4 + 300) = 10;
      }
      break;
    case 1:
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 2:
      ar7 = 0;
      ar6 = -1;
      uVar3 = 0x10;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      uVar5 = SUB84(dVar7,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar5;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 3;
      goto switchD_8c04e828_caseD_4;
    case 3:
      FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7,auStack_34);
      Vec3_normalize(auStack_34,iVar1,ar6,ar7);
      Vec3_scale(auStack_44,&DAT_8c136594,ar6,ar7,auStack_54);
      FUN_8c031c74(ar4,auStack_54,ar5,ar7);
      Vec3_dtor(auStack_54,0xffffffff,ar5,ar7);
      Vec3_dtor(auStack_44,0xffffffff,ar5,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_34,0xffffffff,ar5,ar7);
      FUN_8c05ae54(ar4,uVar3,ar5,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar5,ar7);
      ar6 = ar5;
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2b8) = 2;
      }
    default:
      goto switchD_8c04e828_caseD_4;
    case 10:
      Vec3_assign(ar4 + 0x54,&DAT_8c125be0,ar6,ar7);
      if (cVar9 == '\0') {
        *(undefined4 *)(ar4 + 0x54) = 0x450fc000;
        dVar7 = (double)CONCAT44(0x44688000,SUB84(dVar7,0));
        *(undefined4 *)(ar4 + 0x5c) = 0x44688000;
      }
      else {
        *(undefined8 *)(ar4 + 0x54) = 0x44688000450fc000;
        dVar7 = 6.286777928722e-312;
        *(undefined8 *)(ar4 + 0x5c) = 0x12844688000;
      }
      (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar6,ar7);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x48);
      }
      if (cVar8 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x58) = SUB84(dVar7,0);
      }
      else {
        *(double *)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 0xb:
      uVar5 = SUB84(dVar7,0);
      ar6 = ar4 + 0x54;
      iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (cVar9 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = (ulonglong)uVar5;
        }
      }
switchD_8c04e828_caseD_4:
      Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
      return uVar4;
    case 0xc:
      FUN_8c05ae54(ar4,iVar1,ar6,ar7);
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      goto switchD_8c04e828_caseD_4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c04e7e0\n.set _FUN_8c04e7e0, _FUN_8c04e7e0_def\n");
