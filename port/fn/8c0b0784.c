#include "../decls.h"
int FUN_8c0b0784_def(int ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar8;
  char cVar9;
  int *in_stack_00000000;
  int *in_stack_00000004;
  undefined1 auStack_38 [16];
  int aiStack_28 [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar5 = 1;
  piVar3 = ar6;
  piVar4 = ar7;
  FUN_8c03f480(ar5,ar5,ar6,ar7,auStack_38);
  Vec3_ctor_copy(aiStack_28,auStack_38,piVar3,piVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,piVar3,piVar4);
  iVar1 = *(int *)(ar4 + 0x124);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if (*(int *)(ar4 + 0x348) == 1) {
        piVar3 = aiStack_28;
        iVar5 = FUN_8c0b3604(ar4,in_stack_00000000,piVar3,ar6);
        piVar4 = ar6;
      }
      else if (*(int *)(ar4 + 0x324) == 0) {
        iVar5 = FUN_8c0b0ad4(ar4,uVar2,piVar3,piVar4);
        if (cVar9 == '\0') {
          dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar7 = -8.36519102553774e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        piVar3 = aiStack_28;
        iVar5 = FUN_8c0b3604(ar4,in_stack_00000000,piVar3,ar6);
        piVar4 = ar6;
      }
      if (iVar5 == 0) {
        *(undefined4 *)(ar4 + 0x348) = 0;
        piVar3 = (int *)0x64;
        iVar1 = rand_range(ar4,0,100,piVar4);
        if (iVar1 < 0x50) {
          *(undefined4 *)(ar4 + 0x324) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x324) = 1;
        }
      }
      break;
    case 1:
      (**(code **)(*ar7 + 0x128))(ar7,in_stack_00000000,piVar3,piVar4);
      piVar3 = aiStack_28;
      iVar5 = FUN_8c0b3184(ar4,in_stack_00000000,piVar3,ar6);
      piVar4 = ar6;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b5098(ar4,in_stack_00000000,ar5,piVar4);
      FUN_8c031c74(ar4,aiStack_28,in_stack_00000000,piVar4);
      piVar3 = in_stack_00000000;
      break;
    case 3:
      if (0 < *(int *)(ar4 + 0x314)) {
        *(undefined4 *)(ar4 + 0x214) = 0;
      }
      iVar5 = FUN_8c0b1ac0(ar4,in_stack_00000000,in_stack_00000004,ar6);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar3 = in_stack_00000004;
      piVar4 = ar6;
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 4:
      iVar5 = FUN_8c0b4d14(ar4,ar5,in_stack_00000000,in_stack_00000004);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar4 = in_stack_00000004;
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
        piVar3 = in_stack_00000000;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        piVar3 = in_stack_00000000;
      }
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b4c7c(ar4,uVar2,piVar3,piVar4);
      if (cVar9 == '\0') {
        dVar7 = (double)CONCAT44(0x3f7d70a4,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 6:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar5 = FUN_8c0b4ba0(ar4,uVar2,piVar3,piVar4);
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x214) = 0;
      if (*(int *)(ar4 + 0x314) < 2) {
        iVar5 = FUN_8c0b0eec(ar4,in_stack_00000000,in_stack_00000004,ar7);
        piVar3 = in_stack_00000004;
        piVar4 = ar7;
      }
      else {
        iVar5 = 0;
      }
      break;
    case 8:
      *(undefined4 *)(ar4 + 0x214) = 0;
      piVar4 = (int *)0x0;
      piVar3 = (int *)0xffffffff;
      uVar2 = 5;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,piVar3,piVar4);
    }
  }
  Vec3_dtor(aiStack_28,0xffffffff,piVar3,piVar4);
  return iVar5;
}

__asm__(".globl _FUN_8c0b0784\n.set _FUN_8c0b0784, _FUN_8c0b0784_def\n");
