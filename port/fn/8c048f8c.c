#include "../decls.h"
undefined4 FUN_8c048f8c_def(ulonglong *ar4,undefined4 ar5,int ar6,ulonglong *ar7)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  ulonglong uVar8;
  float fVar11;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_dr6;
  double in_dr14;
  ulonglong in_xd0;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined8 uStack_12c;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar5 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar6 = 1;
  uVar4 = ar5;
  iVar2 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_54);
  Vec3_normalize(auStack_54,uVar4,iVar2,ar7);
  Vec3_ctor_copy(auStack_34,auStack_64,iVar2,ar7);
  Vec3_dtor(auStack_64,0xffffffff,iVar2,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,iVar2,ar7);
  FUN_8c0230f0((undefined4 *)((int)ar4 + 0x14),uVar4,iVar2,ar7,auStack_74);
  FUN_8c0230f0(auStack_34,uVar4,iVar2,ar7,auStack_84);
  FUN_8c022dac(auStack_74,auStack_84,iVar2,ar7);
  fStack_e0 = SUB84(in_dr0,0);
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar14 == '\0') {
    fStack_e0 = fVar7;
    fVar7 = afStack_dc[0];
  }
  afStack_dc[0] = fVar7;
  Vec3_dtor(auStack_84,0xffffffff,iVar2,ar7);
  Vec3_dtor(auStack_74,0xffffffff,iVar2,ar7);
  Vec3_ctor_copy(auStack_44,ar5,iVar2,ar7);
  ar5_00 = (undefined4 *)((int)ar4 + 0x14);
  Vec3_assign(ar4 + 0x10,ar5_00,iVar2,ar7);
  iVar1 = get_field_1c_026dd8(ar4 + 0x16,ar5_00,iVar2,ar7);
  fVar7 = SUB84(in_dr0,0);
  if (iVar1 == 5) {
    if (cVar14 == '\0') {
      in_dr14 = 402653249.1875;
      in_dr0 = (double)CONCAT44(0x40a00000,fVar7);
    }
    else {
      in_dr14 = 2048.000501394272;
      in_dr0 = 2.97615090336666e-312;
      fStack_e0 = 1.96182e-43;
    }
    fStack_e4 = 5.0;
  }
  else if (iVar1 == 6) {
    in_dr0 = (double)CONCAT44(0x3f800000,fVar7);
    if (cVar14 == '\0') {
      fStack_e4 = 1.0;
      in_dr14 = 402653249.1875;
    }
    else {
      fStack_e0 = 1.0;
      in_dr14 = 2.97624156480792e-312;
      fStack_e4 = fVar7;
    }
  }
  else if (iVar1 == 10) {
    if (cVar14 == '\0') {
      in_dr14 = 33554440.1484375;
    }
    else {
      in_dr14 = -8.977643917409603e-251;
    }
  }
  iVar1 = (int)ar4[8];
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = FUN_8c05c28c(ar4,ar5_00,iVar2,ar7);
      if (iVar1 != 0) {
        Vec3_dtor(auStack_44,0xffffffff,iVar2,ar7);
        Vec3_dtor(auStack_34,0xffffffff,iVar2,ar7);
        return 1;
      }
      if (cVar14 == '\0') {
        fVar7 = SUB84(in_dr0,0);
        *(undefined4 *)(ar4 + 0x44) = 0x455ac000;
      }
      else {
        fVar7 = 3500.0;
        ar4[0x44] = 0x8c031bb4455ac000;
      }
      iVar1 = ar6;
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      uVar4 = 0x8c2803f4;
      iVar2 = (int)ar4[0x25] * 0x18 + -0x73d7fc0c;
      FUN_8c031b68(ar4,iVar2,iVar1,0x8c2803f4);
      FUN_8c03c314(ar4,iVar2,iVar1,uVar4);
      if (cVar14 == '\0') {
        fVar7 = *(float *)((int)ar4 + 0x24);
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
      }
      uVar8 = (ulonglong)(uint)fVar7;
      if (fVar7 == 0.0) {
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(0x41a00000,fVar7);
          *(undefined4 *)(ar4 + 6) = 0x41a00000;
        }
        else {
          dVar10 = 4.67383042659946e-312;
          ar4[6] = 0xdc41a00000;
        }
      }
      else {
        iVar2 = ar6;
        FUN_8c022fc0(ar5,ar6,iVar1,uVar4);
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)(uVar8 >> 0x20));
        }
        else {
          dVar10 = *(double *)((int)ar4 + 0x24);
          in_xd0 = uVar8;
        }
        if (cVar13 == '\0') {
          dVar10 = (double)(ulonglong)(uint)(SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20));
        }
        else {
          dVar10 = dVar10 / dVar10;
        }
        if (cVar14 == '\0') {
          *(int *)(ar4 + 6) = SUB84(dVar10,0);
        }
        else {
          ar4[6] = in_xd0;
        }
      }
      uVar8 = (ulonglong)dVar10 & 0xffffffff;
      if (cVar14 == '\0') {
        *(undefined4 *)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x2c) = uVar8;
      }
      FUN_8c0230f0((undefined4 *)((int)ar4 + 0x14),iVar2,iVar1,uVar4,auStack_94);
      FUN_8c0230f0(auStack_34,iVar2,iVar1,uVar4,auStack_a4);
      FUN_8c022dac(auStack_94,auStack_a4,iVar1,uVar4);
      if (cVar14 == '\0') {
        *(int *)((int)ar4 + 0x224) = (int)(uVar8 >> 0x20);
      }
      else {
        *(ulonglong *)((int)ar4 + 0x224) = uVar8;
      }
      Vec3_dtor(auStack_a4,0xffffffff,iVar1,uVar4);
      Vec3_dtor(auStack_94,0xffffffff,iVar1,uVar4);
      if (cVar14 == '\0') {
        uVar8 = CONCAT44((int)ar4[0x44],*(undefined4 *)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)((int)ar4 + 0x24);
        uVar8 = ar4[0x44];
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        iVar2 = rand_range(ar4,0,2,uVar4);
        ar7 = (ulonglong *)0x0;
        uVar4 = 0xffffffff;
        iVar2 = iVar2 + 5;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,iVar2,0xffffffff,0);
      }
      else {
        ar7 = (ulonglong *)0x0;
        uVar4 = 0xffffffff;
        iVar2 = 10;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,10,0xffffffff,0);
      }
      iVar1 = get_field_1c_026dd8(ar4 + 0x16,iVar2,uVar4,ar7);
      if (iVar1 == 5) {
        if (cVar14 != '\0') {
          fStack_e0 = 1.96182e-43;
        }
      }
      else if ((iVar1 == 6) && (cVar14 != '\0')) {
        fStack_e0 = 1.0;
      }
      if (*(int *)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          *(undefined4 *)((int)ar4 + 0x24) = 0x40c00000;
        }
        else {
          *(undefined8 *)((int)ar4 + 0x24) = 0xb040c00000;
        }
      }
      puVar3 = ar4 + 0x16;
      s_CAnimBody_SetFrame_033e6e(puVar3,iVar2,uVar4,ar7);
      *(undefined4 *)(ar4 + 8) = 1;
      if (cVar14 == '\0') {
        uVar8 = CONCAT44(0x42340000,fStack_e0);
      }
      else {
        in_xd0 = CONCAT44(afStack_dc[0],fStack_e0);
        uVar8 = 0x8c01420042340000;
      }
      if (cVar13 == '\0' && (float)uVar8 < (float)(uVar8 >> 0x20)) {
        uVar5 = rand(puVar3,iVar2,uVar4,ar7);
        iVar2 = libgcc_divide_helper_01031c(uVar5,8,uVar4,ar7);
        *(int *)(ar4 + 0x50) = iVar2 + 8;
        *(undefined4 *)(ar4 + 8) = 3;
        break;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)((int)ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)((int)ar4 + 0x2c) = uVar8 & 0xffffffff;
      }
      ar7 = (ulonglong *)0x0;
      iVar2 = -1;
      ar5_00 = (undefined4 *)0x6;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,6,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x50) = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(ar4 + 0x4f) = 0x3f000000;
      }
      else {
        ar4[0x4f] = 0x2b83f000000;
      }
      *(undefined4 *)(ar4 + 8) = 1;
      *(undefined4 *)(ar4 + 0x57) = 3;
    case 1:
      if (cVar14 == '\0') {
        fVar7 = 90.0;
      }
      else {
        in_xd0 = CONCAT44(afStack_dc[0],fStack_e0);
        fStack_e0 = 90.0;
        fVar7 = 3.0;
      }
      if (cVar13 == '\0' && fVar7 < fStack_e0) {
        if (cVar14 == '\0') {
          fVar7 = *(float *)(ar4 + 5);
          fVar11 = 3.0;
        }
        else {
          in_xd0 = ar4[5];
          fVar7 = 3.0;
          fVar11 = 0.05;
        }
        if (cVar13 != '\0' || fVar7 <= fVar11) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 6.20130889485342e-312;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 8.741916293825089e+86;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
          }
          else {
            ar4[5] = in_xd0;
          }
        }
        iVar1 = ar6;
        if (*(int *)((int)ar4 + 0x124) == 0x11) {
          Vec3_set_xyz(auStack_b0,ar5_00,iVar2,ar7);
          ar7 = (ulonglong *)((int)ar4 + 0x14);
          FUN_8c031eb0(ar4,ar5,ar6,ar7,auStack_c0);
          Vec3_assign((undefined4 *)((int)ar4 + 0x14),auStack_c0,iVar1,ar7);
          Vec3_dtor(auStack_c0,0xffffffff,iVar1,ar7);
          uVar4 = 0xffffffff;
          object_dtor_delete(auStack_b0,0xffffffff,iVar1,ar7);
        }
        else {
          Vec3_set_xyz(auStack_cc,ar5_00,iVar2,ar7);
          ar7 = (ulonglong *)((int)ar4 + 0x14);
          FUN_8c031eb0(ar4,ar5,ar6,ar7,afStack_dc);
          Vec3_assign((undefined4 *)((int)ar4 + 0x14),afStack_dc,iVar1,ar7);
          Vec3_dtor(afStack_dc,0xffffffff,iVar1,ar7);
          uVar4 = 0xffffffff;
          object_dtor_delete(auStack_cc,0xffffffff,iVar1,ar7);
        }
        if (cVar14 == '\0') {
          dVar10 = (double)CONCAT44(0x3e99999a,(int)ar4[0x4f]);
        }
        else {
          in_xd0 = ar4[0x4f];
          dVar10 = 8192.001910400391;
        }
        if (cVar13 == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 0x4f) = fVar7;
          fVar7 = *(float *)(ar4 + 0x4f);
          fVar11 = 6.0;
        }
        else {
          ar4[0x4f] = in_xd0;
          fVar7 = 6.0;
          fVar11 = 24.0;
        }
        if (cVar13 == '\0' && fVar11 < fVar7) {
          if (cVar14 == '\0') {
            *(undefined4 *)(ar4 + 0x4f) = 0x40c00000;
          }
          else {
            ar4[0x4f] = 0x41c0000040c00000;
          }
        }
        s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,uVar4,iVar1,ar7);
      }
      else {
        ar7 = (ulonglong *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 5;
        puVar3 = ar4 + 0x16;
        iVar2 = s_CAnimBody_SetAnimation_033a94(puVar3,5,0xffffffff,0);
        if (iVar2 != 6) {
          puVar3 = ar4 + 0x16;
          s_CAnimBody_SetFrame_033e6e(puVar3,uVar4,uVar5,ar7);
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x12) = 0;
        }
        else {
          ar4[0x12] = (ulonglong)(uint)fStack_e0;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 0x13) = 0;
        }
        else {
          ar4[0x13] = (ulonglong)(uint)fStack_e0;
        }
        *(undefined4 *)(ar4 + 8) = 3;
        uVar4 = rand(puVar3,uVar4,uVar5,ar7);
        iVar2 = libgcc_divide_helper_01031c(uVar4,8,uVar5,ar7);
        *(int *)(ar4 + 0x50) = iVar2 + 8;
      }
      break;
    case 3:
      if (*(int *)((int)ar4 + 0x124) == 0x11) {
        if (cVar14 == '\0') {
          in_dr0 = (double)(ulonglong)(uint)ar4[0x4f];
        }
        else {
          in_xd0 = ar4[0x4f];
        }
        dVar10 = (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
        if (cVar13 == '\0') {
          fVar7 = SUB84(in_dr0,0) + 1.0;
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 0x4f) = fVar7;
          dVar10 = (double)CONCAT44(0x3f000000,(int)ar4[5]);
        }
        else {
          ar4[0x4f] = in_xd0;
          in_xd0 = ar4[5];
          dVar10 = 3.73993469111571e-312;
        }
        if (cVar13 == '\0') {
          fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar10 + dVar10,0);
        }
        if (cVar14 == '\0') {
          *(float *)(ar4 + 5) = fVar7;
          in_dr0 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)ar4[5]);
        }
        else {
          ar4[5] = in_xd0;
          in_xd0 = ar4[5];
          in_dr0 = *(double *)((int)ar4 + 0x24);
        }
        if (cVar13 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
          if (cVar14 == '\0') {
            uVar4 = *(undefined4 *)((int)ar4 + 0x24);
            in_dr0 = (double)CONCAT44(uVar4,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + 5) = uVar4;
          }
          else {
            in_dr0 = *(double *)((int)ar4 + 0x24);
            ar4[5] = (ulonglong)in_dr0;
          }
        }
      }
      iVar1 = get_field_1c_026dd8(ar4 + 0x16,ar4 + 0x16,iVar2,ar7);
      if ((iVar1 == 5) || (iVar1 == 6)) {
        CAnimBody_GetCurFrame(ar4 + 0x16,iVar1,iVar2,ar7,uVar5);
        if (cVar13 == '\0') {
          bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          bVar12 = in_dr14 < in_dr0;
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.268568884059579e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 + dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
            uVar9 = CONCAT44(*(undefined4 *)((int)ar4 + 0x24),(int)ar4[5]);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
            uVar9 = *(undefined8 *)((int)ar4 + 0x24);
          }
          puVar3 = (ulonglong *)((int)ar4 + 0x24);
          if (cVar13 == '\0' && (float)((ulonglong)uVar9 >> 0x20) < (float)uVar9) {
            if (cVar14 == '\0') {
              *(undefined4 *)(ar4 + 5) = *(undefined4 *)((int)ar4 + 0x24);
            }
            else {
              ar4[5] = *(ulonglong *)((int)ar4 + 0x24);
            }
          }
        }
        else {
          puVar3 = ar4 + 5;
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x3d4ccccd,(int)*puVar3);
          }
          else {
            in_xd0 = *puVar3;
            dVar10 = 1.34160945841353e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 - dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)(ar4 + 5) = fVar7;
            fVar7 = *(float *)(ar4 + 5);
          }
          else {
            ar4[5] = in_xd0;
            in_xd0 = ar4[5];
          }
          if (cVar13 == '\0' && fVar7 < 0.0) {
            if (cVar14 == '\0') {
              *(undefined4 *)(ar4 + 5) = 0;
            }
            else {
              ar4[5] = (ulonglong)(uint)fVar7;
            }
          }
        }
        if (cVar14 == '\0') {
          fVar7 = *(float *)(ar4 + 0x4f);
        }
        else {
          in_xd0 = ar4[0x4f];
          fVar7 = fStack_e4;
          fStack_e4 = fStack_e0;
        }
        if (cVar13 != '\0' || fVar7 <= fStack_e4) {
          if (cVar14 == '\0') {
            in_dr0 = (double)CONCAT44(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 1.3585920559782e-311;
          }
          if (cVar13 == '\0') {
            fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) + fVar7);
          }
          else {
            in_dr0 = in_dr0 + in_dr0;
          }
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            in_dr0 = (double)CONCAT44(0x3e19999a,(int)ar4[0x4f]);
          }
          else {
            in_xd0 = ar4[0x4f];
            in_dr0 = 2.6866146507523e+96;
          }
          if (cVar13 == '\0') {
            fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
            in_dr0 = (double)CONCAT44(fVar7,SUB84(in_dr0,0) - fVar7);
          }
          else {
            in_dr0 = in_dr0 - in_dr0;
          }
          puVar3 = ar4;
          if (cVar14 == '\0') {
            *(int *)(ar4 + 0x4f) = SUB84(in_dr0,0);
          }
          else {
            ar4[0x4f] = in_xd0;
          }
        }
        if ((int)ar4[0x50] < 1) {
          iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,puVar3,iVar2,ar7);
          if (iVar1 == 1) {
            *(undefined4 *)(ar4 + 0x57) = 2;
            ar7 = (ulonglong *)0x0;
            iVar2 = -1;
            uVar4 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar4,iVar2,ar7);
            *(undefined4 *)(ar4 + 0x50) = 0;
          }
        }
        else {
          iVar1 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0x16,puVar3,iVar2,ar7);
          if (iVar1 == 1) {
            *(int *)(ar4 + 0x50) = (int)ar4[0x50] + -1;
          }
        }
      }
      else {
        (*(uint*)((uchar*)&uStack_12c+4)) = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,iVar1,iVar2,ar7);
        if ((*(uint*)((uchar*)&uStack_12c+4)) == 1) {
          *(undefined4 *)(ar4 + 0x57) = 2;
          *(undefined4 *)(ar4 + 8) = 5;
        }
      }
      FUN_8c022fc0(ar5,ar6,iVar2,ar7);
      if (cVar14 == '\0') {
        uStack_12c = (double)CONCAT44((*(uint*)((uchar*)&uStack_12c+4)),(int)((ulonglong)in_dr0 >> 0x20));
        dVar10 = (double)CONCAT44((int)ar4[9],(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = (double)ar4[9];
        uStack_12c = in_dr0;
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar10,0) + (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar14 == '\0') {
        uStack_12c = (double)CONCAT44((undefined4)uStack_12c,fVar7);
      }
      if (cVar13 != '\0' || (float)((ulonglong)uStack_12c >> 0x20) <= SUB84(uStack_12c,0)) {
        uVar8 = (ulonglong)uStack_12c & 0xffffffff;
        if (cVar14 == '\0') {
          *(undefined4 *)((int)ar4 + 0x2c) = 0;
          uVar8 = (ulonglong)(uint)ar4[7];
        }
        else {
          *(ulonglong *)((int)ar4 + 0x2c) = uVar8;
          in_xd0 = ar4[7];
        }
        if ((float)uVar8 == 0.0) {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44(0x41a00000,(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = 1.0392155376404425e+106;
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        else {
          if (cVar14 == '\0') {
            dVar10 = (double)CONCAT44((int)ar4[7],(int)ar4[5]);
          }
          else {
            in_xd0 = ar4[5];
            dVar10 = (double)ar4[7];
          }
          if (cVar13 == '\0') {
            fVar7 = SUB84(dVar10,0) / (float)((ulonglong)dVar10 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar10 / dVar10,0);
          }
          if (cVar14 == '\0') {
            *(float *)((int)ar4 + 0x3c) = fVar7;
          }
          else {
            *(ulonglong *)((int)ar4 + 0x3c) = in_xd0;
          }
        }
        ar7 = (ulonglong *)0x40;
        *(undefined4 *)(ar4 + 8) = 4;
      }
      break;
    case 4:
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x3c),(int)ar4[5]);
      }
      else {
        in_xd0 = ar4[5];
        dVar10 = *(double *)((int)ar4 + 0x3c);
      }
      if (cVar13 == '\0') {
        fVar7 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 5) = fVar7;
        fVar7 = *(float *)(ar4 + 5);
      }
      else {
        ar4[5] = in_xd0;
      }
      if (cVar13 == '\0' && fVar7 < 0.0) {
        if (cVar14 == '\0') {
          *(undefined4 *)(ar4 + 5) = 0;
        }
        else {
          ar4[5] = (ulonglong)(uint)fVar7;
        }
      }
      ar7 = ar4 + 0x4f;
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,s_CAnimBody_AdvanceFrame_033ba0,0xb0,ar7);
      if (iVar2 == 1) {
        *(undefined4 *)(ar4 + 0x57) = 2;
        uVar6 = 0;
      }
    }
  }
  FUN_8c051a68(ar4,ar6,ar5,ar7);
  Vec3_dtor(auStack_44,0xffffffff,ar5,ar7);
  Vec3_dtor(auStack_34,0xffffffff,ar5,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c048f8c\n.set _FUN_8c048f8c, _FUN_8c048f8c_def\n");
