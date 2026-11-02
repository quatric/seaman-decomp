#include "../decls.h"
undefined4 FUN_8c0a1828_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  float fVar4;
  undefined8 in_dr0;
  float fVar7;
  double dVar5;
  undefined8 uVar6;
  undefined4 in_fr3;
  double dVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffb4;
  undefined1 auStack_24 [20];
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = *(int *)(ar4 + 0x40);
  if ((iVar3 < 6) && (-1 < iVar3)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar3) {
    case 0:
      if (*(int *)(ar4 + 0x270) == 1) {
        *(undefined4 *)(ar4 + 0x270) = 0;
      }
      if (*(int *)(ar4 + 0x1b8) == 1) {
        *(undefined4 *)(ar4 + 0x18c) = *ar5;
        *(undefined4 *)(ar4 + 400) = ar5[1];
        *(undefined4 *)(ar4 + 0x194) = ar5[2];
        *(undefined4 *)(ar4 + 0x198) = *ar6;
        *(undefined4 *)(ar4 + 0x19c) = ar6[1];
        *(undefined4 *)(ar4 + 0x1a0) = ar6[2];
      }
      if (3.0 <= *(float *)(ar4 + 0x28)) {
        *(undefined4 *)(ar4 + 0x28) = 0x40400000;
      }
      if (*(int *)(ar4 + 0x124) == 2) {
        FUN_8c031b68(ar4,0x8c2851b0,ar6,ar7);
      }
      else {
        FUN_8c031b68(ar4,0x8c2851c8,ar6,ar7);
      }
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        uVar6 = CONCAT44(ar5[1],ar6[1]);
      }
      else {
        uVar6 = *(undefined8 *)(ar5 + 1);
      }
      if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
        iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        fVar4 = (float)((ulonglong)uVar6 >> 0x20);
        if (iVar3 != 9) {
          ar7 = 0;
          ar6_00 = (undefined4 *)0xffffffff;
          ar5_00 = (undefined4 *)0x9;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        }
      }
      else {
        ar7 = 0;
        ar6_00 = (undefined4 *)0x0;
        ar5_00 = (undefined4 *)0x1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        fVar4 = (float)((ulonglong)uVar6 >> 0x20);
      }
      vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7);
      vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7);
    case 1:
      *(undefined4 *)(ar4 + 0x40) = 3;
    case 3:
      iVar3 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar3 == 1) {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(ar5 + 1);
          }
          if (cVar9 == '\0' && (float)uVar6 < (float)((ulonglong)uVar6 >> 0x20)) {
            vec3_clear(ar4 + 0x224,ar5_00,ar6_00,ar7);
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0);
          }
        }
        else {
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,in_stack_ffffffb4);
          if (cVar10 == '\0') {
            fVar7 = 15.0;
          }
          else {
            fVar4 = 15.0;
            fVar7 = 35.0;
          }
          if (cVar9 != '\0' || fVar7 <= fVar4) {
            CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,in_stack_ffffffb4);
            if (cVar10 == '\0') {
              fVar4 = 35.0;
            }
            else {
              fVar7 = 35.0;
              fVar4 = 7.73517e-43;
            }
            if (cVar9 == '\0' && fVar7 < fVar4) {
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x228),in_fr3);
                dVar5 = (double)CONCAT44(0x41a00000,DAT_8c13af4c);
              }
              else {
                dVar8 = *(double *)(ar4 + 0x228);
                dVar5 = 3.954695087201342e+231;
              }
              if (cVar9 == '\0') {
                dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                         SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 + dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(ar4 + 0x228) = (int)((ulonglong)dVar8 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x228) = dVar8;
              }
            }
            else {
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x228),in_fr3);
                dVar5 = (double)CONCAT44(0x41c80000,DAT_8c13af4c);
              }
              else {
                dVar8 = *(double *)(ar4 + 0x228);
                dVar5 = 2.8113808922932564e+173;
              }
              if (cVar9 == '\0') {
                dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                         SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),
                                         SUB84(dVar8,0));
              }
              else {
                dVar8 = dVar8 - dVar5 / dVar5;
              }
              if (cVar10 == '\0') {
                *(int *)(ar4 + 0x228) = (int)((ulonglong)dVar8 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x228) = dVar8;
              }
            }
          }
        }
      }
      else if (iVar3 == 9) {
        if (cVar10 == '\0') {
          uVar6 = CONCAT44(ar5[1],ar6[1]);
        }
        else {
          uVar6 = *(undefined8 *)(ar5 + 1);
        }
        if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
          FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        }
        else {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
          ar7 = 0;
          uVar2 = 0;
          uVar1 = 1;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
          vec3_clear(ar4 + 0x224,uVar1,uVar2,ar7);
        }
      }
      else {
        iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar3 == 1) {
          if (cVar10 == '\0') {
            uVar6 = CONCAT44(ar5[1],ar6[1]);
          }
          else {
            uVar6 = *(undefined8 *)(ar5 + 1);
          }
          if (cVar9 != '\0' || (float)uVar6 <= (float)((ulonglong)uVar6 >> 0x20)) {
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0,0);
          }
          else {
            ar7 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
          }
        }
      }
      break;
    case 4:
      FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7);
    }
  }
  uVar1 = FUN_8c031764(ar4,ar6,ar5,ar7);
  FUN_8c0230f0(ar4 + 0x14,ar6,ar5,ar7,auStack_24);
  uVar2 = Vec3_length(auStack_24,ar6,ar5,ar7);
  Vec3_assign(ar4 + 0x80,uVar2,ar5,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar5,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0a1828\n.set _FUN_8c0a1828, _FUN_8c0a1828_def\n");
