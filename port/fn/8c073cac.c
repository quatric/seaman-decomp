#include "../decls.h"
undefined4 FUN_8c073cac_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  int ar4_00;
  code *pcVar8;
  double *ar6_00;
  code *pcVar9;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 ar5_00;
  code *pcVar10;
  double in_dr0;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 in_dr4;
  undefined4 ain0;
  double in_dr12;
  double in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_c0;
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [5];
  
  cVar16 = '\0';
  cVar15 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar5_00 = 1;
  pcVar10 = (code *)0xffffffff;
  pcVar8 = ar5;
  uVar7 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_5c);
  uVar1 = Vec3_length(auStack_5c,pcVar8,uVar7,ar7);
  Vec3_ctor_copy(auStack_34,uVar1,uVar7,ar7);
  pcVar8 = Vec3_dtor;
  Vec3_dtor(auStack_5c,0xffffffff,Vec3_dtor,ar7);
  FUN_8c0230f0(ar4 + 0x14,auStack_6c,pcVar8,ar7,auStack_6c);
  FUN_8c0230f0(auStack_34,FUN_8c0230f0,pcVar8,ar7,auStack_7c);
  pcVar9 = FUN_8c022dac;
  FUN_8c022dac(auStack_6c,auStack_7c,pcVar8,FUN_8c022dac);
  dVar13 = in_dr0;
  if (cVar16 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar13 = in_xd14;
  }
  Vec3_dtor(auStack_7c,0xffffffff,pcVar8,pcVar9);
  uVar7 = 0xffffffff;
  Vec3_dtor(auStack_6c,0xffffffff,pcVar8,pcVar9);
  ar7_00 = Vec3_set_zero;
  Vec3_set_zero(&uStack_40,uVar7,pcVar8,Vec3_set_zero);
  pcVar9 = Vec3_set_zero;
  Vec3_set_zero(&fStack_4c,Vec3_set_zero,pcVar8,ar7_00);
  iVar5 = *(int *)(ar4 + 0x40);
  if ((5 < iVar5) || (iVar5 < 0)) goto switchD_8c073da6_caseD_2;
                    
  switch(iVar5) {
  case 0:
    FUN_8c073c9c(ar4,pcVar9,pcVar8,ar7_00);
    uVar1 = SUB84(in_dr0,0);
    pcVar8 = ar5;
    uVar7 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7_00);
    FUN_8c02a1fc(ar4 + 0x254,pcVar8,uVar7,ar7_00);
    pcVar8 = FUN_8c0321fc;
    FUN_8c0321fc(ar4 + 0xb0,1,FUN_8c0321fc,ar7_00);
    if (cVar16 == '\0') {
      in_dr0 = (double)CONCAT44(0x42340000,uVar1);
    }
    else {
      in_dr0 = 6.79587413861226e-312;
    }
    if (cVar15 == '\0') {
      bVar14 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar14 = in_dr14 < in_dr0;
    }
    if (bVar14) {
      pcVar9 = (code *)0x0;
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      pcVar9 = (code *)FUN_8c023334(ar4 + 0x14,auStack_34,pcVar8,ar7_00);
      *(code **)(ar4 + 0x220) = pcVar9;
    }
    iVar5 = *(int *)(ar4 + 0x220);
    if (iVar5 == 0) goto LAB_8c07441c;
    fVar6 = SUB84(in_dr14,0);
    if (iVar5 == 3) {
      if (cVar16 == '\0') {
        dVar11 = (double)CONCAT44(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)dVar11 >> 0x20) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_01 = 0;
        pcVar8 = (code *)0xffffffff;
        pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0);
        uVar7 = FUN_8c026db0(ar4,FUN_8c026db0,pcVar8,ar7_01);
        uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_01);
        pfVar2 = (float *)deref_u32(uVar1,uVar7,pcVar8,ar7_01);
        ar7_00 = (code *)(ar4 + 0xb4);
        fVar6 = pfVar2[1];
        *(float *)ar7_00 = *pfVar2;
        *(float *)(ar4 + 0xb8) = fVar6;
        *(float *)(ar4 + 0xbc) = pfVar2[2];
        if (*(int *)(ar4 + 0x128) == 2) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137648;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1376a8;
        }
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72143340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = (double)CONCAT44(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              uVar12 = CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              uVar12 = *(undefined8 *)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)uVar12 <= (float)((ulonglong)uVar12 >> 0x20)) {
              ar7_00 = (code *)0x1;
              pcVar8 = (code *)0xffffffff;
              uVar7 = 0xd;
              pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,1);
              FUN_8c032204(ar4 + 0xb0,uVar7,pcVar8,ar7_00,ain0);
              FUN_8c074d14(ar4 + 0xb0,uVar7,pcVar8,ar7_00,ain0);
              if (cVar16 == '\0') {
                dVar13 = (double)CONCAT44(SUB84(in_dr14,0),(int)((ulonglong)uVar12 >> 0x20));
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c0743d2;
            }
          }
LAB_8c07441c:
          if (cVar16 == '\0') {
            in_dr0 = (double)CONCAT44(0x40933333,*(undefined4 *)(ar4 + 0x24));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x24);
            in_dr0 = 7782.3994228363035;
          }
          if (cVar15 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
            if (cVar16 == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              in_dr0 = *(double *)(ar4 + 0x24);
            }
            if (cVar15 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x1;
              pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
            }
            else {
              ar7_00 = (code *)0x0;
              pcVar8 = (code *)0xffffffff;
              pcVar9 = (code *)0x12;
              pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x12,0xffffffff,0);
            }
            if (*(int *)(ar4 + 0x124) == 0) {
              pcVar8 = (code *)0x64;
              iVar5 = rand_range(ar4,0,100,ar7_00);
              if (iVar5 < 10) {
                ar7_00 = (code *)0x0;
                pcVar8 = (code *)0xffffffff;
                pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xf,0xffffffff,0);
              }
              pcVar9 = (code *)(ar4 + 0x24);
              if (cVar16 == '\0') {
                in_dr0 = (double)CONCAT44(0x3f4ccccd,*(undefined4 *)(ar4 + 0x24));
              }
              else {
                in_xd0 = *(undefined8 *)(ar4 + 0x24);
                in_dr0 = -8.399316818224296e-251;
              }
              if (cVar15 == '\0') {
                fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar6,SUB84(in_dr0,0) * fVar6);
              }
              else {
                in_dr0 = in_dr0 * in_dr0;
              }
              if (cVar16 == '\0') {
                *(int *)pcVar9 = SUB84(in_dr0,0);
              }
              else {
                *(undefined8 *)pcVar9 = in_xd0;
              }
            }
          }
          else {
            ar7_00 = (code *)0x0;
            pcVar8 = (code *)0xffffffff;
            pcVar9 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
            pcVar10 = pcVar9;
          }
          goto LAB_8c074542;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 9;
        pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
        uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00);
        uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00);
        puVar3 = (undefined4 *)deref_u32(uVar1,uVar7,pcVar8,ar7_00);
        uVar7 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 2) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137618;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137678;
        }
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0xeed02542700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c0743d2:
      pcVar9 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,pcVar8,ar7_00);
    }
    else if (iVar5 == 4) {
      if (cVar16 == '\0') {
        dVar11 = (double)CONCAT44(0x42f00000,SUB84(in_dr0,0));
      }
      else {
        dVar11 = -0.007812501948137651;
      }
      if (cVar15 == '\0') {
        bVar14 = (float)((ulonglong)dVar11 >> 0x20) < fVar6;
      }
      else {
        bVar14 = dVar11 < in_dr14;
      }
      if (bVar14) {
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 3;
        pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0);
        uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00);
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00);
        puVar3 = (undefined4 *)deref_u32(uVar7,deref_u32,pcVar8,ar7_00);
        uVar7 = puVar3[1];
        *(undefined4 *)(ar4 + 0xb4) = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar7;
        pcVar9 = (code *)puVar3[2];
        *(code **)(ar4 + 0xbc) = pcVar9;
        if (*(int *)(ar4 + 0x128) == 2) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137660;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c1376c0;
        }
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(SUB84(in_dr14,0),0x43340000);
        }
        else {
          in_xd0 = 0xf008c72243340000;
        }
        if (cVar15 == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x240) = in_dr0;
        }
      }
      else {
        if (cVar16 == '\0') {
          dVar11 = (double)CONCAT44(0x42700000,SUB84(dVar11,0));
        }
        else {
          dVar11 = -0.007812501933585736;
        }
        if (cVar15 == '\0') {
          bVar14 = fVar6 < (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          bVar14 = in_dr14 < dVar11;
        }
        if (bVar14) {
          if (*(int *)(ar4 + 0x124) == 0) {
            puVar4 = (undefined8 *)(*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f13c);
            if (cVar16 == '\0') {
              uStack_c0 = CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)puVar4);
            }
            else {
              in_xd0 = *puVar4;
              uStack_c0 = *(undefined8 *)(ar4 + 0x28);
            }
            if (cVar15 != '\0' || (float)uStack_c0 <= (float)((ulonglong)uStack_c0 >> 0x20)) {
              ar7_00 = (code *)0x1;
              uVar1 = 0xffffffff;
              uVar7 = 0xe;
              pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,1);
              FUN_8c032204(ar4 + 0xb0,uVar7,uVar1,ar7_00,ain0);
              pcVar8 = FUN_8c074d14;
              FUN_8c074d14(ar4 + 0xb0,uVar7,FUN_8c074d14,ar7_00);
              if (cVar16 == '\0') {
                uStack_c0 = CONCAT44(pcVar10,(int)((ulonglong)uStack_c0 >> 0x20));
              }
              pcVar9 = (code *)0x240;
              uVar12 = uStack_c0;
              if (cVar16 == '\0') {
                dVar13 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_c0);
                uVar12 = in_xd0;
              }
              in_xd0 = uVar12;
              if (cVar15 == '\0') {
                in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                          SUB84(dVar13,0));
              }
              else {
                in_dr0 = dVar13 / dVar13;
              }
              if (cVar16 == '\0') {
                *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(ar4 + 0x240) = in_dr0;
              }
              goto LAB_8c07412a;
            }
          }
          goto LAB_8c07441c;
        }
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        uVar7 = 10;
        pcVar10 = (code *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
        uVar7 = FUN_8c026db0(ar4,uVar7,pcVar8,ar7_00);
        uVar1 = FUN_8c03c0f0(ar4 + 0xb0,uVar7,pcVar8,ar7_00);
        puVar3 = (undefined4 *)deref_u32(uVar1,uVar7,pcVar8,ar7_00);
        pcVar9 = (code *)(ar4 + 0xb4);
        uVar7 = puVar3[1];
        *(undefined4 *)pcVar9 = *puVar3;
        *(undefined4 *)(ar4 + 0xb8) = uVar7;
        *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
        if (*(int *)(ar4 + 0x128) == 2) {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137630;
        }
        else {
          *(undefined **)(ar4 + 0xb4) = &DAT_8c137690;
        }
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(SUB84(in_dr14,0),0x42700000);
        }
        else {
          in_xd0 = 0x1eed02742700000;
        }
        if (cVar15 == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) / SUB84(dVar13,0),
                                    SUB84(dVar13,0));
        }
        else {
          in_dr0 = dVar13 / dVar13;
        }
        if (cVar16 == '\0') {
          *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x240) = in_dr0;
        }
      }
LAB_8c07412a:
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,pcVar9,pcVar8,ar7_00);
    }
LAB_8c074542:
    if (pcVar10 != (code *)0x6) {
      ar7_00 = (code *)0xb0;
      pcVar8 = (code *)(ar4 + 0xb0);
      s_CAnimBody_SetFrame_033e6e(pcVar8,pcVar9,pcVar8,0xb0);
    }
  case 1:
    uVar7 = FUN_8c026db0(ar4,pcVar9,pcVar8,ar7_00);
    switch(uVar7) {
    case 1:
    case 4:
    case 0x10:
    case 0x11:
    case 0x12:
      iVar5 = FUN_8c034148(ar4 + 0xb0,0,pcVar8,ar7_00);
      if (0 < iVar5) {
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
      ar5_00 = FUN_8c031764(ar4,ar6,ar5,ar7_00);
      pcVar8 = ar5;
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar8,ar7_00,ain0);
      FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),pcVar8,ar7_00);
      vec3_copy_8c023d8c(&uStack_40,auStack_88,pcVar8,ar7_00);
      object_dtor_delete(auStack_88,0xffffffff,pcVar8,ar7_00);
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_40);
      }
      else {
        in_xd0 = CONCAT44(uStack_3c,uStack_40);
        dVar13 = *(double *)(ar4 + 0x254);
      }
      if (cVar15 == '\0') {
        fVar6 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        fStack_4c = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fStack_4c = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_3c);
      }
      else {
        fStack_4c = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_38,uStack_3c);
        dVar13 = *(double *)(ar4 + 600);
      }
      if (cVar15 == '\0') {
        fVar6 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      ar6_00 = (double *)(ar4 + 0x240);
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)ar6_00,fVar6);
      }
      else {
        dVar13 = *ar6_00;
      }
      if (cVar15 == '\0') {
        fStack_48 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fStack_48 = SUB84(dVar13 * dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_38);
      }
      else {
        fStack_48 = (float)in_xd0;
        in_xd0 = CONCAT44(auStack_34[0],uStack_38);
        dVar13 = *(double *)(ar4 + 0x25c);
      }
      if (cVar15 == '\0') {
        fVar6 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar13 - dVar13,0);
      }
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar6);
      }
      else {
        dVar13 = *(double *)(ar4 + 0x240);
      }
      if (cVar15 == '\0') {
        fVar6 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13,0);
      }
      fStack_44 = fVar6;
      if (cVar16 != '\0') {
        fStack_44 = (float)in_xd0;
        uStack_40 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c023d8c(ar4 + 0x254,&uStack_40,ar6_00,0x240);
      ar7_00 = (code *)&fStack_4c;
      ar5_00 = FUN_8c07c318(ar4,ar6,ar5,ar7_00);
      if (*(int *)(ar4 + 0x44) == 0) {
        FUN_8c031e84(ar4,ar6,ar5,ar7_00);
      }
      iVar5 = FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00);
      pcVar8 = ar5;
      if (0 < iVar5) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x42340000,fVar6);
        }
        else {
          dVar13 = 524288.1293029785;
        }
        if (cVar15 == '\0') {
          bVar14 = SUB84(in_dr14,0) < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar14 = in_dr14 < dVar13;
        }
        if (bVar14) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 0x40) = 5;
          if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(0x41200000,*(undefined4 *)(ar4 + 0x48));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x48);
            dVar13 = -2.1831133447441e+159;
          }
          if (cVar15 == '\0') {
            dVar13 = (double)(ulonglong)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20))
            ;
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
          if (cVar16 == '\0') {
            *(int *)(ar4 + 0x48) = SUB84(dVar13,0);
          }
          else {
            *(undefined8 *)(ar4 + 0x48) = in_xd0;
          }
        }
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
        }
      }
      break;
    case 0xd:
      FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00);
      uStack_110 = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr0 = (double)CONCAT44(uVar7,SUB84(in_dr14,0));
        dVar13 = (double)CONCAT44(0x42700000,uStack_110);
        uStack_110 = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) /
                                  (float)((ulonglong)dVar13 >> 0x20),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 / dVar13;
      }
      FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00,ain0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uStack_114 = uVar7;
      if (cVar16 != '\0') {
        uStack_114 = SUB84(dVar13,0);
        uStack_110 = uVar7;
      }
      FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00,ain0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(uVar7,uStack_114);
      }
      else {
        in_xd0 = CONCAT44(uStack_110,uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = (float)((ulonglong)dVar13 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar6,SUB84(dVar13,0) * fVar6 * (float)((ulonglong)in_dr0 >> 0x20)
                                 );
      }
      else {
        in_dr0 = dVar13 * dVar13 * in_dr0;
      }
      if (cVar16 == '\0') {
        fStack_48 = SUB84(in_dr0,0);
      }
      else {
        fStack_48 = (float)in_xd0;
        fStack_44 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      FUN_8c07c318(ar4,ar6,ar5,&fStack_4c);
      ar7_00 = (code *)0x1;
      *(undefined4 *)(ar4 + 0x40) = 1;
      pcVar8 = (code *)0xb0;
      ar4_00 = ar4 + 0xb0;
      iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4_00,ar4_00,0xb0,1);
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(in_dr0,0));
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar7 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        ar7_00 = (code *)(ar4 + 0xb0);
        pcVar8 = FUN_8c032204;
        FUN_8c032204(ar7_00,uVar7,FUN_8c032204,ar7_00);
        ar5_00 = 0;
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar4_00,pcVar8,ar7_00,ain0);
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(ar4 + 0x240),(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(ar4 + 0x240);
        }
        if (cVar15 != '\0' || (float)((ulonglong)uVar12 >> 0x20) <= (float)uVar12) {
          FUN_8c0321fc(ar4 + 0xb0,0xffffffff,pcVar8,ar7_00,ain0);
        }
      }
      break;
    case 0xe:
      FUN_8c026d7c(ar4,pcVar9,pcVar8,ar7_00);
      uStack_124 = SUB84(in_dr0,0);
      uVar7 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar16 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),uVar7);
        dVar13 = (double)CONCAT44(0x42700000,uStack_124);
        uStack_124 = uVar7;
      }
      else {
        dVar13 = 3.74021962707397e-312;
      }
      if (cVar15 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   SUB84(in_dr12,0) / (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        in_dr12 = in_dr12 / dVar13;
      }
      FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00,ain0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      uStack_128 = uVar7;
      if (cVar16 != '\0') {
        uStack_128 = SUB84(dVar13,0);
        uStack_124 = uVar7;
      }
      FUN_8c074d14(ar4 + 0xb0,pcVar9,pcVar8,ar7_00,ain0);
      uVar7 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(uVar7,uStack_128);
      }
      else {
        in_xd0 = CONCAT44(uStack_124,uVar7);
      }
      if (cVar15 == '\0') {
        fVar6 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20) * SUB84(in_dr12,0);
      }
      else {
        fVar6 = SUB84(dVar13 * dVar13 * in_dr12,0);
      }
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(0xbf800000,fVar6);
      }
      else {
        dVar13 = 6.38186089609776e-312;
      }
      if (cVar15 == '\0') {
        fVar6 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar6,SUB84(dVar13,0) * fVar6);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (cVar16 == '\0') {
        fStack_48 = SUB84(dVar13,0);
      }
      else {
        fStack_48 = (float)in_xd0;
        fStack_44 = (float)((ulonglong)in_xd0 >> 0x20);
      }
      ar7_00 = (code *)&fStack_4c;
      FUN_8c07c318(ar4,ar6,ar5,ar7_00);
      *(undefined4 *)(ar4 + 0x40) = 1;
      iVar5 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7_00);
      if (iVar5 == 1) {
        if (cVar16 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (cVar15 == '\0') {
          fVar6 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar13 / dVar13,0);
        }
        if (cVar16 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        ar7_00 = (code *)0x0;
        pcVar8 = (code *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        FUN_8c032204(ar4 + 0xb0,FUN_8c032204,pcVar8,ar7_00,ain0);
        ar5_00 = 0;
      }
      else {
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7_00,ain0);
        if (cVar16 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(ar4 + 0x240),(int)((ulonglong)dVar13 >> 0x20));
        }
        else {
          uVar12 = *(undefined8 *)(ar4 + 0x240);
        }
        pcVar8 = ar5;
        if (cVar15 != '\0' || (float)((ulonglong)uVar12 >> 0x20) <= (float)uVar12) {
          FUN_8c0321fc(ar4 + 0xb0,0xffffffff,ar5,ar7_00,ain0);
          pcVar8 = ar5;
        }
      }
      break;
    case 0xf:
      ar7_00 = FUN_8c031e84;
      FUN_8c031e84(ar4,pcVar9,pcVar8,FUN_8c031e84);
      pcVar8 = (code *)0x40;
      *(undefined4 *)(ar4 + 0x40) = 1;
      iVar5 = FUN_8c034148(ar4 + 0xb0,0,0x40,ar7_00);
      if (0 < iVar5) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        ar5_00 = 0;
      }
    }
    break;
  case 3:
    ar5_00 = FUN_8c031764(ar4,ar6,ar5,ar7_00);
    iVar5 = FUN_8c026db0(ar4,ar6,ar5,ar7_00);
    pcVar8 = ar5;
    if ((iVar5 < 0x13) && (-1 < iVar5)) {
                    
      switch(iVar5) {
      case 0:
        iVar5 = ar4 + 0xb0;
        pcVar8 = CAnimBody_AdvanceFrame_wrapper;
        CAnimBody_AdvanceFrame_wrapper(iVar5,CAnimBody_AdvanceFrame_wrapper,iVar5,ar7_00);
        FUN_8c031e84(ar4,pcVar8,iVar5,ar7_00);
        pcVar8 = (code *)0x64;
        ar7_00 = (code *)rand_range(ar4,0,100,ar7_00);
        if ((int)ar7_00 < 10) {
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        break;
      default:
        FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00);
        pcVar8 = ar5;
        break;
      case 5:
        break;
      }
    }
    break;
  case 4:
    ar7_00 = FUN_8c031764;
    ar5_00 = FUN_8c031764(ar4,ar6,ar5,FUN_8c031764);
    iVar5 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar5,ar7_00);
    if (iVar5 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar5,ar7_00);
      pcVar8 = *(code **)(ar4 + 0x128);
      FUN_8c031b68(ar4,(int)pcVar8 * 0x18 + -0x73d7f14c,pcVar8,ar7_00);
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar5,ar7_00);
      pcVar8 = ar5;
    }
  }
switchD_8c073da6_caseD_2:
  object_dtor_delete(&fStack_4c,0xffffffff,pcVar8,ar7_00);
  uVar7 = 0xffffffff;
  puVar3 = &uStack_40;
  object_dtor_delete(puVar3,0xffffffff,puVar3,0xffffffff);
  Vec3_dtor(auStack_34,0xffffffff,puVar3,uVar7);
  return ar5_00;
}

__asm__(".globl _FUN_8c073cac\n.set _FUN_8c073cac, _FUN_8c073cac_def\n");
