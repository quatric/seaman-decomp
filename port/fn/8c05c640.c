#include "../decls.h"
undefined4 FUN_8c05c640_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  float fVar9;
  double dVar8;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffffa4;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  if (*(int *)(ar4 + 0x31c) < 1) {
    if (*(int *)(ar4 + 0x324) == 0) {
      iVar1 = *(int *)(ar4 + 300);
      if ((iVar1 < 5) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          uVar2 = ar5;
          iVar1 = ar6;
          iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
          fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
          if (iVar3 == 0x11) {
            CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,iVar1,ar7,in_stack_ffffffa4);
            if (cVar11 == '\0') {
              fVar9 = 190.0;
            }
            else {
              fVar7 = 190.0;
              fVar9 = 9.75304e-43;
            }
            if (cVar10 != '\0' || fVar7 <= fVar9) {
              *(undefined4 *)(ar4 + 0x2b8) = 3;
              *(undefined4 *)(ar4 + 300) = 3;
              return 1;
            }
          }
          if (ar6 == 1) {
            iVar1 = FUN_8c057164(ar4,ar5,iVar1,ar7);
            if (iVar1 == 0) {
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
          }
          else {
            iVar1 = FUN_8c05c28c(ar4,uVar2,iVar1,ar7);
            if (iVar1 == 0) {
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
          }
          break;
        case 1:
          *(undefined4 *)(ar4 + 0x214) = 0;
          *(undefined4 *)(ar4 + 0x178) = 1;
          iVar3 = ar4 + 0x34c;
          iVar1 = FUN_8c055c38(ar4,ar5,iVar3,ar6);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 0x178) = 0;
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x40) = 5;
            Vec3_assign(ar4 + 0x248,ar5,iVar3,ar6);
            FUN_8c032ab0(ar4,ar5,iVar3,ar6);
            if (cVar11 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x48)
                                       );
            }
            else {
              in_xd0 = *(undefined8 *)(ar4 + 0x48);
            }
            if (cVar10 == '\0') {
              fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
              in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) * fVar7);
            }
            else {
              in_dr0 = in_dr0 * in_dr0;
            }
            if (cVar11 == '\0') {
              *(int *)(ar4 + 0x248) = SUB84(in_dr0,0);
            }
            else {
              *(undefined8 *)(ar4 + 0x248) = in_xd0;
            }
            FUN_8c032ab0(ar4,ar5,iVar3,ar6);
            if (cVar11 == '\0') {
              in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x48)
                                       );
            }
            if (cVar10 == '\0') {
              fVar7 = SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              fVar7 = SUB84(in_dr0 * in_dr0,0);
            }
            if (cVar11 == '\0') {
              dVar8 = (double)CONCAT44(0x44bb8000,fVar7);
            }
            else {
              dVar8 = -1.1449929295928696e+164;
            }
            if (cVar10 == '\0') {
              dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar8,0),
                                       SUB84(dVar8,0));
            }
            else {
              dVar8 = dVar8 - dVar8;
            }
            if (cVar11 == '\0') {
              *(int *)(ar4 + 0x250) = (int)((ulonglong)dVar8 >> 0x20);
            }
            else {
              *(double *)(ar4 + 0x250) = dVar8;
            }
          }
          break;
        case 2:
          *(undefined4 *)(ar4 + 700) = 0xffffffff;
          iVar1 = FUN_8c04c314(ar4,ar5,ar4 + 0x248,ar7);
          if (iVar1 == 0) {
            *(undefined4 *)(ar4 + 700) = 0;
            iVar1 = rand_range(ar4,0,10,ar7);
            if (iVar1 < 5) {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x1e;
              iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1e,0xffffffff,0);
              if (iVar1 != 6) {
                s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
              }
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
            }
            else {
              uVar5 = 0;
              uVar4 = 0xffffffff;
              uVar2 = 0x11;
              iVar1 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0);
              if (iVar1 != 6) {
                s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
              }
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
            *(undefined4 *)(ar4 + 0x2b8) = 3;
          }
          break;
        case 3:
          iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7);
          if (iVar1 == 7) {
            *(undefined4 *)(ar4 + 300) = 0;
            uVar6 = 0;
          }
          break;
        case 4:
          iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
          if (iVar1 == 1) {
            *(undefined4 *)(ar4 + 300) = 0;
            *(undefined4 *)(ar4 + 0x2b8) = 2;
            uVar6 = 0;
          }
        }
      }
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c05c640\n.set _FUN_8c05c640, _FUN_8c05c640_def\n");
