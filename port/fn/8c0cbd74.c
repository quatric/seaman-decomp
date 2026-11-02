#include "../decls.h"
undefined4 FUN_8c0cbd74_def(int ar4,undefined *ar5,int ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *a6;
  undefined1 *a5;
  int ar7_00;
  int ar4_00;
  float fVar5;
  undefined4 uVar6;
  double in_dr0;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined *puVar11;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar12;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_b4;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  double *pdStack_9c;
  double *pdStack_98;
  undefined8 uStack_94;
  int iStack_8c;
  undefined8 uStack_88;
  int iStack_80;
  undefined8 uStack_7c;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [36];
  
  puVar3 = ar5;
  iVar4 = ar6;
  ar7_00 = ar7;
  if (*(undefined4 *)0x8c437320 == '\0') {
    uStack_44 = Vec3_set_zero(0x8c437324,ar5,ar6,ar7);
    puVar3 = (&object_dtor_delete);
    iVar4 = 0x8c437314;
    (*(code *)(&global_list_push))
              (uStack_44,(&object_dtor_delete),0x8c437314,ar7_00);
    *(undefined4 *)0x8c437320 = '\x01';
  }
  if (*(undefined4 *)0x8c43733c == '\0') {
    uStack_48 = Vec3_ctor_zero(0x8c437340,puVar3,iVar4,ar7_00);
    puVar3 = (&Vec3_dtor);
    iVar4 = 0x8c437330;
    global_list_push(uStack_48,(&Vec3_dtor),0x8c437330,ar7_00);
    *(undefined4 *)0x8c43733c = '\x01';
  }
  if (*(undefined4 *)0x8c437354 == '\0') {
    *(undefined4 *)0x8c437350 = 0;
    *(undefined4 *)0x8c437354 = '\x01';
  }
  FUN_8c0c84cc(auStack_3c,puVar3,iVar4,ar7_00);
  iStack_4c = (**(code **)(0x144 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
  uVar6 = SUB84(in_dr0,0);
  ar4_00 = iStack_4c + 0xb0;
  iVar1 = *(int *)(0x2d39c + ar4);
  if (iVar1 == 0) {
    iStack_50 = (**(code **)(0x144 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
    *(undefined4 *)0x8c437350 = iStack_50 + 0xf8;
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44((undefined4)DAT_8c0cbf2c,uVar6);
      uStack_88 = CONCAT44((*(uint*)((uchar*)&uStack_88+4)),(undefined4)DAT_8c0cbf2c);
    }
    else {
      uVar7 = CONCAT44(0x2d3a4,(undefined4)DAT_8c0cbf2c);
      uStack_88 = uVar7;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a4) = (undefined4)uStack_88;
      uVar7 = CONCAT44((undefined4)uStack_88,(int)uVar7);
    }
    else {
      *(ulonglong *)(ar4 + 0x2d3a4) = uStack_88;
      uVar7 = uStack_88;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a8) = (undefined4)uStack_88;
      uVar7 = CONCAT44((undefined4)uStack_88,(int)uVar7);
    }
    else {
      *(ulonglong *)(ar4 + 0x2d3a8) = uStack_88;
      uVar7 = uStack_88;
    }
    iVar1 = *(undefined4 *)0x8c437350;
    vec3_copy_8c023d8c(ar4 + 0x2d3b0,iVar1,iVar4,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)0x8c437324 = 0;
    }
    else {
      *(undefined4 *)0x8c437324 = uVar7 & 0xffffffff;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((int)0x8c437324 + 4) = 0;
    }
    else {
      *(ulonglong *)((int)0x8c437324 + 4) = uVar7 & 0xffffffff;
    }
    uVar7 = uVar7 & 0xffffffff;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(0x8c437324 + 1) = 0;
    }
    else {
      ((undefined1 *)1)[0x8c437324] = uVar7;
    }
    iStack_54 = get_field_24_05c284(ar5,iVar1,iVar4,ar7_00);
    if (iStack_54 == 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44((undefined4)DAT_8c0cbfd8,(int)uVar7);
        *(undefined4 *)(ar4 + 0x2d3ac) = (undefined4)DAT_8c0cbfd8;
      }
      else {
        in_dr0 = (double)CONCAT44(0x8c437340,(undefined4)DAT_8c0cbfd8);
        *(double *)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    else {
      in_dr0 = (double)(uVar7 & 0xffffffff);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2d3ac) = 0;
      }
      else {
        *(double *)(ar4 + 0x2d3ac) = in_dr0;
      }
    }
    ar7_00 = 0x8c437340 + 8;
    iVar4 = 0x8c437340 + 4;
    iVar1 = 0x8c437340;
    FUN_8c0507a4(ar5,0x8c437340,iVar4,ar7_00);
    FUN_8c036988(ar5,iVar1,iVar4,ar7_00);
    FUN_8c078fb8(ar5,iVar1,iVar4,ar7_00);
    (**(code **)(*(int *)(ar5 + 8) + 0x6c))(ar5,iVar1,iVar4,ar7_00);
    *(undefined4 *)(0x2d39c + ar4) = 1;
    iStack_8c = get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00);
    puVar3 = (undefined *)(uint)*(byte *)(0xa0 + ar7);
    piVar2 = *(int **)(ar4 + iStack_8c * 4 + 8);
    iStack_58 = iStack_8c;
    (**(code **)(*piVar2 + 0x78))(piVar2,puVar3,iVar4,ar7_00);
    FUN_8c235ee4(piVar2,puVar3,iVar4,ar7_00);
  }
  else if (iVar1 == 1) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0cc070,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3a4);
      dVar9 = (double)CONCAT44(0x2d3a8,DAT_8c0cc070);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    uStack_94 = in_xd0;
    if (in_FPSCR_SZ == '\0') {
      uStack_94 = (double)CONCAT44(ar4,fVar5);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2d3a4) = (undefined4)uStack_94;
      dVar9 = (double)CONCAT44((undefined4)uStack_94,fVar5);
    }
    else {
      *(double *)((*(uint*)((uchar*)&uStack_94+4)) + 0x2d3a4) = uStack_94;
      dVar9 = uStack_94;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a8) = (undefined4)uStack_94;
      in_dr0 = (double)CONCAT44((undefined4)uStack_94,SUB84(dVar9,0));
    }
    else {
      *(double *)(ar4 + 0x2d3a8) = uStack_94;
      in_dr0 = uStack_94;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)(ulonglong)*(uint *)(ar4 + 0x2d3a4);
    }
    if (in_FPSCR_PR != '\0' || 0.0 <= SUB84(in_dr0,0)) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x2d3a4) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x2d3a4) = (ulonglong)in_dr0 & 0xffffffff;
      }
      *(undefined4 *)(0x2d39c + ar4) = 2;
    }
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    iStack_5c = FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00);
    if (iStack_5c == 1) {
      *(undefined4 *)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 2) {
    iStack_60 = FUN_8c1009c8(ar6,puVar3,iVar4,ar7_00);
    uVar6 = SUB84(in_dr0,0);
    if (iStack_60 == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(ar4 + 0x2d3b0);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2d3b0);
      }
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x18),uVar6);
      }
      else {
        in_dr0 = *(double *)(*(undefined4 *)0x8c437350 + 0x18);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr0,0)) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(DAT_8c0cc0c8,SUB84(in_dr0,0));
          *(undefined4 *)0x8c437324 = DAT_8c0cc0c8;
        }
        else {
          in_dr0 = (double)CONCAT44((*(uint *)0x8c0cc0cc),DAT_8c0cc0c8);
          *(undefined4 *)0x8c437324 = in_dr0;
        }
      }
    }
    else {
      iStack_64 = FUN_8c1009ec(ar6,puVar3,iVar4,ar7_00);
      uVar6 = SUB84(in_dr0,0);
      if (iStack_64 == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(ar4 + 0x2d3b0);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x2d3b0);
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0xc),uVar6);
        }
        else {
          in_dr0 = *(double *)(*(undefined4 *)0x8c437350 + 0xc);
        }
        if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(DAT_8c0cc148,SUB84(in_dr0,0));
            *(undefined4 *)0x8c437324 = DAT_8c0cc148;
          }
          else {
            in_dr0 = (double)CONCAT44((&FUN_8c100a10),DAT_8c0cc148);
            *(undefined4 *)0x8c437324 = in_dr0;
          }
        }
      }
    }
    uVar6 = SUB84(in_dr0,0);
    iStack_68 = FUN_8c100a10(ar6,puVar3,iVar4,ar7_00);
    if (iStack_68 == 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar6 = *(undefined4 *)(ar4 + 0x2d3b4);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2d3b4);
      }
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x10),uVar6);
      }
      else {
        uVar8 = *(undefined8 *)(*(undefined4 *)0x8c437350 + 0x10);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar8 < (float)((ulonglong)uVar8 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)0x8c437324 + 4) = DAT_8c0cc154;
        }
        else {
          *(undefined8 *)((int)0x8c437324 + 4) = CONCAT44((*(uint *)0x8c0cc158),DAT_8c0cc154);
        }
      }
    }
    else {
      iStack_6c = FUN_8c100a34(ar6,puVar3,iVar4,ar7_00);
      if (iStack_6c == 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar6 = *(undefined4 *)(ar4 + 0x2d3b4);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x2d3b4);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar8 = CONCAT44(*(undefined4 *)(*(undefined4 *)0x8c437350 + 0x1c),uVar6);
        }
        else {
          uVar8 = *(undefined8 *)(*(undefined4 *)0x8c437350 + 0x1c);
        }
        if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = DAT_8c0cc328;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = CONCAT44(DAT_8c0cc32c,DAT_8c0cc328);
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)0x8c437324;
      fVar10 = DAT_8c0cc32c;
    }
    else {
      in_xd0 = *(undefined4 *)0x8c437324;
      fVar5 = DAT_8c0cc32c;
      fVar10 = DAT_8c0cc330;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)0x8c437324;
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)0x8c437324 = fVar5;
          fVar5 = *(float *)0x8c437324;
        }
        else {
          *(undefined4 *)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)0x8c437324;
      fVar10 = DAT_8c0cc334;
    }
    else {
      in_xd0 = *(undefined4 *)0x8c437324;
      fVar5 = DAT_8c0cc334;
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)0x8c437324;
      }
      else {
        in_xd0 = *(undefined4 *)0x8c437324;
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)0x8c437324);
        }
        else {
          in_xd0 = *(undefined4 *)0x8c437324;
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)0x8c437324 = fVar5;
          fVar5 = *(float *)0x8c437324;
        }
        else {
          *(undefined4 *)0x8c437324 = in_xd0;
          in_xd0 = *(undefined4 *)0x8c437324;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)0x8c437324 = 0.0;
          }
          else {
            *(undefined4 *)0x8c437324 = (double)(ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)((int)0x8c437324 + 4);
      fVar10 = DAT_8c0cc32c;
    }
    else {
      in_xd0 = *(double *)((int)0x8c437324 + 4);
      fVar5 = DAT_8c0cc32c;
      fVar10 = DAT_8c0cc330;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar10) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)((int)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)((int)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        pdStack_98 = 0x8c437324;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)((int)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)((int)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || fVar5 <= 0.0) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)((int)0x8c437324 + 4);
      fVar10 = DAT_8c0cc334;
    }
    else {
      in_xd0 = *(double *)((int)0x8c437324 + 4);
      fVar5 = DAT_8c0cc334;
      fVar10 = 0x2d3b0;
    }
    if (in_FPSCR_PR != '\0' || fVar10 <= fVar5) {
      if (in_FPSCR_SZ == '\0') {
        fVar5 = *(float *)((int)0x8c437324 + 4);
      }
      else {
        in_xd0 = *(double *)((int)0x8c437324 + 4);
      }
      if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
        pdStack_9c = 0x8c437324;
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(DAT_8c0cc330,*(float *)((int)0x8c437324 + 4));
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
          dVar9 = (double)CONCAT44(DAT_8c0cc334,DAT_8c0cc330);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar9 + dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)0x8c437324 + 4) = fVar5;
        }
        else {
          *(double *)((int)0x8c437324 + 4) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)0x8c437324 + 4);
        }
        else {
          in_xd0 = *(double *)((int)0x8c437324 + 4);
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)0x8c437324 + 4) = 0.0;
          }
          else {
            *(ulonglong *)((int)0x8c437324 + 4) = (ulonglong)(uint)fVar5;
          }
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(float *)0x8c437324,*(undefined4 *)(ar4 + (int)0x2d3b0));
    }
    else {
      in_xd0 = *(double *)(ar4 + (int)0x2d3b0);
      dVar9 = *(undefined4 *)0x8c437324;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + (int)0x2d3b0) = fVar5;
    }
    else {
      *(double *)(ar4 + (int)0x2d3b0) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(float *)((int)0x8c437324 + 4),*(undefined4 *)(ar4 + 0x2d3b4)
                              );
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3b4);
      dVar9 = *(double *)((int)0x8c437324 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 + dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3b4) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3b4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      fVar5 = *(float *)(ar4 + 0x2d3ac);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = fVar5 + 1.0;
    }
    else {
      fVar5 = SUB84((double)CONCAT44(0x3f800000,fVar5) + (double)CONCAT44(0x3f800000,fVar5),0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3ac) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3ac) = in_xd0;
    }
    iStack_a8 = ar4;
    iStack_a4 = ar4;
    iStack_a0 = ar4;
    iStack_70 = FUN_8c031588(ar4_00,puVar3,iVar4,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2d3ac),in_fr3);
    }
    else {
      dVar9 = *(double *)(ar4 + 0x2d3ac);
    }
    fVar5 = (float)iStack_70;
    in_dr0 = (double)(ulonglong)(uint)fVar5;
    if (in_FPSCR_PR == '\0' && fVar5 < 0.0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(DAT_8c0cc344,fVar5);
      }
      else {
        in_dr0 = (double)CONCAT44((&get_field_24_05c284),DAT_8c0cc344);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) + fVar5);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar12 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(in_dr0,0);
    }
    else {
      bVar12 = dVar9 < in_dr0;
    }
    if (!bVar12) {
      iStack_74 = get_field_24_05c284(ar5,puVar3,iVar4,ar7_00);
      if (iStack_74 == 1) {
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = (double)CONCAT44(_DAT_8c0cc378,SUB84(in_dr0,0));
          *(undefined4 *)(ar4 + 0x2d3ac) = _DAT_8c0cc378;
        }
        else {
          in_dr0 = (double)CONCAT44((&FUN_8c1001e0),_DAT_8c0cc378);
          *(double *)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
      else {
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2d3ac) = 0;
        }
        else {
          *(double *)(ar4 + 0x2d3ac) = in_dr0;
        }
      }
    }
    iVar1 = FUN_8c1001e0(ar6,puVar3,iVar4,ar7_00);
    uStack_7c = CONCAT44(iVar1,(undefined4)uStack_7c);
    if (iVar1 == 1) {
      *(undefined4 *)(0x2d39c + ar4) = 3;
    }
  }
  else if (iVar1 == 3) {
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44(DAT_8c0cc4ac,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x2d3a4);
      dVar9 = (double)CONCAT44(DAT_8c0cc4b0,DAT_8c0cc4ac);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar9 - dVar9,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x2d3a4) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x2d3a4) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c0cc4b0,*(undefined4 *)(ar4 + 0x2d3a4));
    }
    else {
      in_dr0 = (double)CONCAT44(0x2d39c,DAT_8c0cc4b0);
    }
    iStack_ac = ar4;
    if (in_FPSCR_PR != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
      *(undefined4 *)(0x2d39c + ar4) = 5;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&uStack_b4 + 0x88) = 0;
  }
  else {
    *(ulonglong *)((int)&uStack_b4 + 0x88) = (ulonglong)in_dr0 & 0xffffffff;
  }
  uVar7 = (ulonglong)in_dr0 & 0xffffffff;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)((int)&uStack_b4 + 0x8c) = 0;
  }
  else {
    *(ulonglong *)((int)&uStack_b4 + 0x8c) = uVar7;
  }
  (**(code **)(0x120 + *(int *)(ar5 + 8)))(ar5,puVar3,iVar4,ar7_00);
  uVar6 = (undefined4)(uVar7 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    uStack_7c = CONCAT44((*(uint*)((uchar*)&uStack_7c+4)),uVar6);
    *(undefined4 *)((int)&uStack_b4 + 0x90) = uVar6;
  }
  else {
    uStack_7c = uVar7;
    *(ulonglong *)((int)&uStack_b4 + 0x90) = uVar7;
  }
  a6 = auStack_3c;
  (**(code **)(*(int *)(ar5 + 8) + 0x18))(ar5,ar7,a6,ar7_00);
  if (*(int *)(0x2d39c + ar4) == 5) {
    puVar3 = DAT_8c0cc4cc;
    puVar11 = (&FUN_8c036988);
    if (in_FPSCR_SZ == '\0') {
      puVar3 = *(undefined **)(0x8c437340 + 8);
      puVar11 = DAT_8c0cc4cc;
    }
    if (in_FPSCR_PR == '\0' && (float)(uint)puVar11 < (float)(uint)puVar3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined **)(0x8c437340 + 8) = DAT_8c0cc4cc;
      }
      else {
        *(undefined8 *)(0x8c437340 + 8) = CONCAT44((&FUN_8c036988),DAT_8c0cc4cc);
      }
    }
    iVar1 = 0x8c437340 + 8;
    iVar4 = 0x8c437340;
    FUN_8c036988(ar5,iVar1,0x8c437340,ar7_00);
    (**(code **)(*(int *)(ar5 + 8) + 0x6c))(ar5,iVar1,iVar4,ar7_00);
    (*(uint*)((uchar*)&uStack_b4+4)) = get_field_d0_0c51fc(ar6,iVar1,iVar4,ar7_00);
    a5 = (undefined1 *)(uint)*(byte *)(0xa0 + ar7);
    piVar2 = *(int **)(ar4 + (*(uint*)((uchar*)&uStack_b4+4)) * 4 + 8);
    a6 = a5;
    iStack_80 = (*(uint*)((uchar*)&uStack_b4+4));
    (**(code **)(*piVar2 + 0x70))(piVar2,a5,a5,ar7_00);
    (*(uint*)((uchar*)&uStack_b4+0)) = get_field_d0_0c51fc(ar6,a5,a6,ar7_00);
    uStack_88 = CONCAT44((int)uStack_b4,(undefined4)uStack_88);
    piVar2 = *(int **)(ar4 + (int)uStack_b4 * 4 + 8);
    (**(code **)(0xa0 + *piVar2))(piVar2,a5,a6,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(ar4 + 0x2d3a4) = DAT_8c0cc4b0;
    }
    else {
      *(undefined8 *)(ar4 + 0x2d3a4) = CONCAT44(0x2d39c,DAT_8c0cc4b0);
    }
    uStack_40 = 5;
    *(undefined4 *)(0x2d39c + ar4) = 0;
  }
  else {
    uStack_40 = *(undefined4 *)(0x2d39c + ar4);
  }
  FUN_8c0c8480(auStack_3c,0xffffffff,a6,ar7_00);
  return uStack_40;
}

__asm__(".globl _FUN_8c0cbd74\n.set _FUN_8c0cbd74, _FUN_8c0cbd74_def\n");
