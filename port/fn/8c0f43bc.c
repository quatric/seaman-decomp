#include "../decls.h"
undefined4 FUN_8c0f43bc_def(int ar4,int *ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  float *a6;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar11;
  undefined4 in_fr14;
  undefined8 in_xd14;
  bool bVar12;
  char cVar13;
  char cVar14;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float afStack_80 [25];
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&uStack_90,ar5,ar6,ar7);
  Vec3_ctor_zero(&fStack_a0,ar5_00,ar6,ar7);
  Vec3_ctor_zero(&fStack_b0,ar5_00,ar6,ar7);
  fVar11 = 0.0;
  uVar1 = (**(code **)(*ar5 + 0x1d4))(ar5,ar5_00,ar6,ar7);
  iVar2 = get_field_24_026024(ar5,ar5_00,ar6,ar7);
  a6 = &fStack_a0;
  (**(code **)(*ar5 + 0x124))(ar5,&uStack_90,a6,ar7);
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x38))(*(int **)(ar4 + 0xa4),afStack_80,a6,ar7);
  pfVar4 = afStack_80;
  iVar5 = 0;
  do {
    if (7 < iVar5) {
LAB_8c0f4912:
      Vec3_dtor(&fStack_b0,0xffffffff,a6,ar7);
      Vec3_dtor(&fStack_a0,0xffffffff,a6,ar7);
      uVar1 = Vec3_dtor(&uStack_90,0xffffffff,a6,ar7);
      return uVar1;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_90,*pfVar4);
    }
    else {
      uVar7 = CONCAT44(uStack_8c,uStack_90);
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x140) = CONCAT44(0x3f800000,fVar6);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44(uStack_90,fVar6);
        *(undefined4 *)(ar4 + 0x150) = uStack_90;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = uVar7 & 0xffffffff;
        uVar7 = CONCAT44(uStack_8c,uStack_90);
        *(ulonglong *)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    fVar6 = fStack_a0;
    fVar10 = fStack_9c;
    if (cVar14 == '\0') {
      fVar6 = *pfVar4;
      fVar10 = fStack_a0;
    }
    if (cVar13 == '\0' && fVar10 < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0xbf800000;
      }
      else {
        fVar6 = -1.0;
        *(undefined8 *)(ar4 + 0x140) = 0x144bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44(fStack_a0,fVar6);
        *(float *)(ar4 + 0x150) = fStack_a0;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44(fStack_9c,fStack_a0);
        *(ulonglong *)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_88,pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44(uStack_84,uStack_88);
    }
    if (cVar13 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0x3f800000;
      }
      else {
        *(undefined8 *)(ar4 + 0x148) = CONCAT44(0x3f800000,(float)uVar7);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
        *(undefined4 *)(ar4 + 0x158) = uStack_88;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x158) = CONCAT44(uStack_84,uStack_88);
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(uStack_98,pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44(uStack_94,uStack_98);
    }
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
        uVar7 = CONCAT44(0xbf800000,(float)uVar7);
        *(undefined4 *)(ar4 + 0x148) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = uVar7 & 0xffffffff;
        uVar7 = 0x150bf800000;
        *(undefined8 *)(ar4 + 0x148) = 0x150bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x154) = 0;
        *(undefined4 *)(ar4 + 0x158) = uStack_98;
      }
      else {
        *(ulonglong *)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(ar4 + 0x158) = CONCAT44(uStack_94,uStack_98);
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44(fStack_9c,pfVar4[1]);
    }
    else {
      uVar7 = CONCAT44(uStack_98,fStack_9c);
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
        *(undefined4 *)(ar4 + 0x144) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = uVar7 & 0xffffffff;
        fVar6 = -1.0;
        *(undefined8 *)(ar4 + 0x144) = 0x148bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x150) = 0;
        uVar7 = CONCAT44(fStack_9c,fVar6);
        *(float *)(ar4 + 0x154) = fStack_9c;
      }
      else {
        *(ulonglong *)(ar4 + 0x150) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44(uStack_98,fStack_9c);
        *(ulonglong *)(ar4 + 0x154) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      fStack_b0 = *pfVar4;
      fStack_ac = pfVar4[1];
      fStack_a8 = pfVar4[2];
      uVar8 = CONCAT44(fStack_a8,fVar6);
    }
    else {
      fStack_b0 = (float)*(undefined8 *)pfVar4;
      fStack_ac = (float)*(undefined8 *)(pfVar4 + 1);
      uVar8 = *(undefined8 *)(pfVar4 + 2);
      fStack_a8 = (float)uVar8;
      uStack_a4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    if (iVar2 == 0) {
      iVar3 = (**(code **)(*ar5 + 0x130))(ar5,&fStack_b0,a6,ar7);
      if (iVar3 == 2) {
        ar7 = ar4 + 0x150;
        a6 = (float *)(ar4 + 0x140);
        iVar3 = FUN_8c017900(uVar1,&fStack_b0,a6,ar7);
        if (iVar3 == 1) {
          *(int *)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
      }
      else {
        (**(code **)(*ar5 + 0x128))(ar5,&fStack_b0,a6,ar7);
        if (cVar14 == '\0') {
          fVar11 = (float)((ulonglong)uVar8 >> 0x20);
          dVar9 = (double)CONCAT44(pfVar4[1],(int)uVar8);
        }
        else {
          dVar9 = *(double *)(pfVar4 + 1);
          in_xd14 = uVar8;
        }
        if (cVar13 == '\0') {
          bVar12 = (float)((ulonglong)dVar9 >> 0x20) < fVar11;
        }
        else {
          bVar12 = dVar9 < (double)CONCAT44(in_fr14,fVar11);
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x140) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x144) = 0x3f800000;
          }
          else {
            *(undefined8 *)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x148) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x150) = 0;
            *(float *)(ar4 + 0x154) = fVar11;
          }
          else {
            *(ulonglong *)(ar4 + 0x150) = (ulonglong)dVar9 & 0xffffffff;
            *(undefined8 *)(ar4 + 0x154) = in_xd14;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x158) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x158) = (ulonglong)dVar9 & 0xffffffff;
          }
          *(int *)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x144) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x144) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x148) = 0;
          *(undefined4 *)(ar4 + 0x150) = 0xbf800000;
          *(undefined4 *)(ar4 + 0x154) = 0xbf800000;
          *(undefined4 *)(ar4 + 0x158) = 0xbf800000;
        }
        else {
          *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x150) = 0x154bf800000;
          *(undefined8 *)(ar4 + 0x154) = 0x154bf800000;
          *(undefined8 *)(ar4 + 0x158) = 0x154bf800000;
        }
        *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
      }
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      (**(code **)(*ar5 + 0x128))(ar5,&fStack_b0,a6,ar7);
      if (cVar14 == '\0') {
        fVar11 = (float)((ulonglong)uVar8 >> 0x20);
        dVar9 = (double)CONCAT44(pfVar4[1],(int)uVar8);
      }
      else {
        dVar9 = *(double *)(pfVar4 + 1);
        in_xd14 = uVar8;
      }
      if (cVar13 == '\0') {
        bVar12 = (float)((ulonglong)dVar9 >> 0x20) < fVar11;
      }
      else {
        bVar12 = dVar9 < (double)CONCAT44(in_fr14,fVar11);
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x144) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x148) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x150) = 0;
          *(float *)(ar4 + 0x154) = fVar11;
        }
        else {
          *(ulonglong *)(ar4 + 0x150) = (ulonglong)dVar9 & 0xffffffff;
          *(undefined8 *)(ar4 + 0x154) = in_xd14;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x158) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x158) = (ulonglong)dVar9 & 0xffffffff;
        }
        *(int *)(ar4 + 0x13c) = iVar5;
        goto LAB_8c0f4912;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x140) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x144) = (ulonglong)dVar9 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x148) = 0;
        *(undefined4 *)(ar4 + 0x150) = 0xbf800000;
        *(undefined4 *)(ar4 + 0x154) = 0xbf800000;
        *(undefined4 *)(ar4 + 0x158) = 0xbf800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x148) = (ulonglong)dVar9 & 0xffffffff;
        *(undefined8 *)(ar4 + 0x150) = 0x154bf800000;
        *(undefined8 *)(ar4 + 0x154) = 0x154bf800000;
        *(undefined8 *)(ar4 + 0x158) = 0x154bf800000;
      }
      *(undefined4 *)(ar4 + 0x13c) = 0xffffffff;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 3;
  } while( true );
}

__asm__(".globl _FUN_8c0f43bc\n.set _FUN_8c0f43bc, _FUN_8c0f43bc_def\n");
