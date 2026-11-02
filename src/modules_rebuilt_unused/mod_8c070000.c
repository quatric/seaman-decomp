/* Seaman (USA) region 0x8c070000-0x8c080000 (Ghidra decompiler) */

/* FUN_8c070d7c @ 8c070d7c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c070d7c(int ar4,undefined4 *ar5,undefined4 ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *a5;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 *a6;
  undefined8 *a6_00;
  undefined4 uVar5;
  undefined4 unaff_r12;
  int iVar6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  float fVar8;
  ulonglong in_dr0;
  undefined8 uVar9;
  double dVar10;
  double in_dr12;
  double in_dr14;
  double dVar11;
  undefined8 in_xd0;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar12;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = (undefined1 *)((int)&uStack_10 + 4);
    uStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_10);
  }
  else {
    puVar7 = auStack_18;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar7 + -0x10) = in_PR;
  iVar6 = 1;
  *(undefined1 **)(puVar7 + -0x120) = puVar7 + DAT_8c070efc + -0x11c;
  puVar4 = PTR_FUN_8c070f00;
  (*(code *)PTR_FUN_8c070f00)(*ar5,ar5,PTR_FUN_8c070f00,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c070f08)
            (puVar7 + DAT_8c070f04 + -0x11c,puVar7 + DAT_8c070efc + -0x11c,puVar4,ar7);
  a5 = (int *)0xffffffff;
  puVar4 = PTR_Vec3_dtor_8c070f0c;
  (*(code *)PTR_Vec3_dtor_8c070f0c)
            (puVar7 + DAT_8c070efc + -0x11c,0xffffffff,PTR_Vec3_dtor_8c070f0c,ar7);
  if (((ar5[4] == 3) || (a5 = (int *)(ar4 + 0x68), *a5 != 0)) && (*(int *)(DAT_8c070f10 + ar4) == 1)
     ) {
    if ((*(int *)(DAT_8c070f14 + ar4) == 4) && (*(int *)(DAT_8c070f18 + ar4) == 2)) {
      uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c070f1c)(*ar5,a5,puVar4,ar7);
      *(undefined4 *)(puVar7 + DAT_8c070f20 + -0x11c) = uVar1;
      if (*(int *)(puVar7 + DAT_8c070f20 + -0x11c) != 0) {
        *(undefined1 **)(puVar7 + -0x120) = puVar7 + DAT_8c070f24 + -0x11c;
        (*(code *)PTR_Vec3_scale_8c070f2c)(ar4 + DAT_8c070f28,ar4 + 0x48,puVar4,ar7);
        a6 = puVar7 + DAT_8c070f30 + -0x11c;
        *(undefined1 **)(puVar7 + -0x120) = a6;
        (*(code *)PTR_Vec3_scale_8c070f2c)
                  (puVar7 + DAT_8c070f34 + -0x120,*(int *)(ar5[1] + 8) + 4,a6,ar7);
        *(undefined1 **)(puVar7 + -0x120) = puVar7 + DAT_8c070f38 + -0x11c;
        (*(code *)PTR_Vec3_add_8c070f40)
                  (puVar7 + DAT_8c070f3c + -0x120,*(undefined4 *)ar5[1],a6,ar7);
        (*(code *)PTR_Vec3_ctor_copy_8c070f08)
                  (puVar7 + DAT_8c070f44 + -0x11c,puVar7 + DAT_8c070f38 + -0x11c,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c070f0c)(puVar7 + DAT_8c070f38 + -0x11c,0xffffffff,a6,ar7);
        puVar4 = PTR_Vec3_dtor_8c070f0c;
        (*(code *)PTR_Vec3_dtor_8c070f0c)
                  (puVar7 + DAT_8c070f30 + -0x11c,0xffffffff,a6,PTR_Vec3_dtor_8c070f0c);
        uVar3 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c070f0c)(puVar7 + DAT_8c070f24 + -0x11c,0xffffffff,a6,puVar4);
        uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c070f1c)(*ar5,uVar3,a6,puVar4);
        *(undefined4 *)(puVar7 + DAT_8c070f48 + -0x11c) = uVar1;
        puVar4 = PTR_FUN_8c070f54;
        (*(code *)PTR_FUN_8c070f54)
                  (*(undefined4 *)(puVar7 + DAT_8c070f48 + -0x11c),uVar3,a6,PTR_FUN_8c070f54);
        (*(code *)PTR_Vec3_dtor_8c070f0c)(puVar7 + DAT_8c070f44 + -0x11c,0xffffffff,a6,puVar4);
      }
    }
    *(undefined4 *)(puVar7 + -0x120) = ar5[6];
    uVar1 = ar5[3];
    (*(code *)PTR_FUN_8c070f58)(ar4,*(undefined4 *)ar5[1],ar5[4],uVar1);
    iVar6 = DAT_8c070f28;
    (*(code *)PTR_Vec3_assign_8c070f5c)(ar4 + DAT_8c070f28,ar4 + 0x14,DAT_8c070f28,uVar1);
    *(undefined4 *)(puVar7 + DAT_8c070f60 + -0x11c) = 1;
    (*(code *)PTR_Vec3_dtor_8c070f0c)(puVar7 + DAT_8c070f04 + -0x11c,0xffffffff,iVar6,uVar1);
    return *(undefined4 *)(puVar7 + DAT_8c070f60 + -0x11c);
  }
  iVar2 = *(int *)(DAT_8c070f88 + ar4);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto switchD_8c070f82_caseD_5;
  ar7 = (&switchD_8c070f82::switchdataD_8c070f8c)[iVar2];
  switch(iVar2) {
  case 0:
  case 0xf:
    (*(code *)PTR_FUN_8c071050)(ar4 + DAT_8c07104c,a5,DAT_8c07104c,ar7);
    *(undefined4 *)(puVar7 + -0x120) = ar5[6];
    *(undefined4 *)(puVar7 + -0x124) = *ar5;
    ar7 = (undefined *)ar5[3];
    puVar4 = *(undefined **)(ar5[1] + 4);
    uVar1 = (*(code *)PTR_FUN_8c071054)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + DAT_8c071058 + -0x11c) = uVar1;
    iVar6 = *(int *)(puVar7 + DAT_8c071058 + -0x11c);
    break;
  case 1:
    puVar4 = puVar7 + DAT_8c07113c + -0x11c;
    uVar1 = (*(code *)PTR_pure_virtual_stub_8c071144)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xa0) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xa0);
    break;
  case 2:
    ar7 = (undefined *)ar5[6];
    uVar1 = (*(code *)PTR_FUN_8c0712a8)(ar4,*(undefined4 *)ar5[1],ar5[4],ar7);
    *(undefined4 *)(puVar7 + -0xb4) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xb4);
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c0712b0)(ar4,puVar7 + DAT_8c0712ac + -0x11c,puVar4,ar7);
    break;
  case 3:
    puVar4 = (undefined *)ar5[6];
    uVar1 = (*(code *)PTR_FUN_8c07107c)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + DAT_8c071080 + -0x11c) = uVar1;
    iVar6 = *(int *)(puVar7 + DAT_8c071080 + -0x11c);
    break;
  case 4:
    *(undefined4 *)(puVar7 + -0x120) = *(undefined4 *)(ar5[1] + 8);
    *(undefined4 *)(puVar7 + -0x124) = *(undefined4 *)(ar5[1] + 4);
    ar7 = (undefined *)*ar5;
    puVar4 = puVar7 + DAT_8c071270 + -0x124;
    uVar1 = (*(code *)PTR_FUN_8c071274)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xb0) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xb0);
    break;
  case 6:
    puVar4 = (undefined *)ar5[6];
    uVar1 = (*(code *)PTR_FUN_8c071490)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + -200) = uVar1;
    iVar6 = *(int *)(puVar7 + -200);
    break;
  case 7:
    (*(code *)PTR_FUN_8c0714d4)(ar4 + DAT_8c0714d0,a5,puVar4,ar7);
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0714d8)(ar4 + DAT_8c0714d0,a5,puVar4,ar7)
    ;
    *(undefined4 *)(puVar7 + -0xcc) = uVar1;
    if (*(int *)(puVar7 + -0xcc) == 1) {
      (*(code *)PTR_FUN_8c0714dc)(ar4,a5,puVar4,ar7);
      iVar6 = 0;
    }
    break;
  case 10:
    uVar1 = (*(code *)PTR_FUN_8c0711fc)(ar4,ar5,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xa8) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xa8);
    iVar2 = iVar6;
    (**(code **)(DAT_8c071200 + *(int *)ar5[6]))((int *)ar5[6],iVar6,puVar4,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0xac) = (int)(in_dr0 >> 0x20);
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(puVar7 + -0xac));
    }
    else {
      *(ulonglong *)(puVar7 + -0xac) = in_dr0;
      in_xd0 = *(undefined8 *)(puVar7 + -0xac);
      dVar10 = *(double *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar10 - dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar9 = CONCAT44(*(undefined4 *)(*(int *)ar5[1] + 4),fVar8);
    }
    else {
      uVar9 = *(undefined8 *)(*(int *)ar5[1] + 4);
    }
    if (in_FPSCR_PR == '\0' && (float)uVar9 < (float)((ulonglong)uVar9 >> 0x20)) {
      ar7 = PTR_FUN_8c071238;
      (*(code *)PTR_FUN_8c071238)(ar4,iVar2,puVar4,PTR_FUN_8c071238);
    }
    else {
      (*(code *)PTR_FUN_8c071204)(ar4,iVar2,puVar4,ar7);
    }
    *(int *)(puVar7 + -0xf8) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar10 = (double)CONCAT44(DAT_8c07123c,*(undefined4 *)(*(int *)(puVar7 + -0xf8) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar7 + -0xf8) + 0x28);
      dVar10 = (double)CONCAT44(uRam8c071240,DAT_8c07123c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar10 * dVar10,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar7 + -0xf8) + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(*(int *)(puVar7 + -0xf8) + 0x28) = in_xd0;
    }
    break;
  case 0xb:
    (*(code *)PTR_Vec3_ctor_copy_8c071198)
              (puVar7 + DAT_8c071194 + -0x11c,PTR_DAT_8c071190,PTR_Vec3_ctor_copy_8c071198,ar7);
    uVar3 = 0;
    uVar1 = (*(code *)PTR_FUN_8c07119c)(ar4,puVar7 + DAT_8c071194 + -0x11c,0,ar7);
    *(undefined4 *)(puVar7 + -0xa4) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xa4);
    ar7 = PTR_Vec3_dtor_8c0711a0;
    (*(code *)PTR_Vec3_dtor_8c0711a0)
              (puVar7 + DAT_8c071194 + -0x11c,0xffffffff,uVar3,PTR_Vec3_dtor_8c0711a0);
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c0711a8)(ar4,puVar7 + DAT_8c0711a4 + -0x11c,puVar4,ar7);
    break;
  case 0xe:
    *(undefined4 *)(DAT_8c071520 + ar4) = 0;
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c071528)(ar4,puVar7 + DAT_8c071524 + -0x11c,puVar4,ar7);
    uVar1 = (*(code *)PTR_FUN_8c07152c)(ar4,ar5,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xd0) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xd0);
    if (iVar6 == 0) {
      *(undefined4 *)(DAT_8c071520 + ar4) = 1;
    }
    break;
  case 0x14:
    if (*(int *)(DAT_8c071388 + ar4) == 1) {
      *(undefined4 *)(puVar7 + -0xfc) = *(undefined4 *)(DAT_8c07138c + ar4);
      (*(code *)PTR_FUN_8c071394)
                (ar4,(*(int *)(puVar7 + -0xfc) * 2 + *(int *)(puVar7 + -0xfc)) * 8 + DAT_8c071390,
                 puVar4,ar7);
      *(int *)(puVar7 + -0x100) = ar4;
      a6_00 = (undefined8 *)(*(int *)(puVar7 + -0x100) + 0x38);
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(DAT_8c071398,*(undefined4 *)a6_00);
      }
      else {
        in_xd0 = *a6_00;
        dVar10 = (double)CONCAT44(DAT_8c07139c,DAT_8c071398);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar10,0) * (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar10 * dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar7 + -0x100) + 0x38) = fVar8;
      }
      else {
        *(undefined8 *)(*(int *)(puVar7 + -0x100) + 0x38) = in_xd0;
      }
      uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0713a0)
                        (ar4 + DAT_8c07139c,DAT_8c07139c,a6_00,ar7);
      *(undefined4 *)(puVar7 + -0xb8) = uVar1;
      if (*(int *)(puVar7 + -0xb8) == 1) {
        ar7 = (undefined *)0x0;
        uVar1 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0713a8)(ar4 + DAT_8c07139c,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0713ac)
                  (ar4 + DAT_8c07139c,uVar1,PTR_s_CAnimBody_SetFrame_033e6e_8c0713ac,ar7);
      }
      puVar4 = *(undefined **)ar5[1];
      (*(code *)PTR_FUN_8c0713b4)(ar4,puVar7 + DAT_8c0713b0 + -0x11c,puVar4,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        *(undefined4 *)(puVar7 + -0x104) = *(undefined4 *)(DAT_8c07138c + ar4);
        (*(code *)PTR_FUN_8c071394)
                  (ar4,(*(int *)(puVar7 + -0x104) * 2 + *(int *)(puVar7 + -0x104)) * 8 +
                       DAT_8c071390,puVar4,ar7);
        *(undefined4 *)(DAT_8c0713b8 + ar4) = 0;
        *(undefined4 *)(DAT_8c0713bc + ar4) = 2;
        iVar6 = 0;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(ar5[3] + 8));
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)in_dr0);
      }
      else {
        in_xd12 = *(undefined8 *)(ar5[3] + 8);
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(in_dr12,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(in_dr12 - dVar10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar7 + DAT_8c071458 + -0x11c) = fVar8;
      }
      else {
        *(undefined8 *)(puVar7 + DAT_8c071458 + -0x11c) = in_xd12;
      }
      (**(code **)(DAT_8c07145c + *(int *)ar5[6]))((int *)ar5[6],a5,puVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -0xbc) = (int)((ulonglong)dVar10 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(puVar7 + -0xbc)
                                  );
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar10,0));
      }
      else {
        *(double *)(puVar7 + -0xbc) = dVar10;
        in_xd14 = *(undefined8 *)(puVar7 + -0xbc);
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                  SUB84(in_dr14,0) - (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        dVar11 = in_dr14 - dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(puVar7 + DAT_8c071460 + -0x11c),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(puVar7 + DAT_8c071460 + -0x11c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar12 = SUB84(dVar11,0) < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar12 = dVar11 < dVar10;
      }
      if (bVar12) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar7 + DAT_8c071460 + -0x11c) = SUB84(dVar11,0);
        }
        else {
          *(undefined8 *)(puVar7 + DAT_8c071460 + -0x11c) = in_xd14;
        }
      }
      (**(code **)(DAT_8c071468 + *(int *)ar5[6]))
                ((int *)ar5[6],puVar7 + DAT_8c071464 + -0x11c,puVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -0xc0) = (int)((ulonglong)dVar10 >> 0x20);
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar11,0));
        dVar10 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0xc0),SUB84(dVar10,0));
      }
      else {
        *(double *)(puVar7 + -0xc0) = dVar10;
        dVar11 = *(double *)(ar4 + 0x48);
        dVar10 = *(double *)(puVar7 + -0xc0);
      }
      if (in_FPSCR_PR == '\0') {
        dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                                  (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar11,0));
      }
      else {
        dVar11 = dVar11 + dVar10;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(puVar7 + DAT_8c071460 + -0x11c),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(puVar7 + DAT_8c071460 + -0x11c);
      }
      fVar8 = (float)((ulonglong)dVar11 >> 0x20);
      if (in_FPSCR_PR == '\0') {
        bVar12 = (float)((ulonglong)dVar10 >> 0x20) < fVar8;
      }
      else {
        bVar12 = dVar10 < dVar11;
      }
      if (bVar12) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar7 + DAT_8c071460 + -0x11c) = fVar8;
        }
        else {
          *(double *)(puVar7 + DAT_8c071460 + -0x11c) = dVar11;
        }
      }
      *(undefined4 *)(puVar7 + -0x120) = ar5[6];
      ar7 = (undefined *)ar5[3];
      puVar4 = puVar7 + DAT_8c071460 + -0x120;
      uVar1 = (*(code *)PTR_FUN_8c07146c)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
      *(undefined4 *)(puVar7 + -0xc4) = uVar1;
      iVar6 = *(int *)(puVar7 + -0xc4);
    }
    break;
  case 0x16:
    ar7 = (undefined *)0x0;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0710bc)(ar4 + DAT_8c0710b4._4_4_,0,0xffffffff,0)
    ;
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c0710c4)(ar4,puVar7 + DAT_8c0710c0 + -0x11c,puVar4,ar7);
    iVar6 = 0;
    break;
  case 0x17:
    (*(code *)PTR_Vec3_assign_8c0710fc)(puVar7 + DAT_8c0710f8 + -0x11c,PTR_DAT_8c0710f4,puVar4,ar7);
    puVar4 = puVar7 + DAT_8c0710f8 + -0x11c;
    uVar1 = (*(code *)PTR_FUN_8c071100)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + DAT_8c071104 + -0x11c) = uVar1;
    iVar6 = *(int *)(puVar7 + DAT_8c071104 + -0x11c);
    break;
  case 0x19:
    *(undefined4 *)(DAT_8c07165c + ar4) = 0;
    switch(*(undefined4 *)(DAT_8c071660 + ar4)) {
    case 0:
      uVar5 = ar5[6];
      uVar3 = *(undefined4 *)ar5[1];
      uVar1 = 0x1e;
      (*(code *)PTR_FUN_8c0716e0)(ar4,0x1e,uVar3,uVar5);
      (*(code *)PTR_FUN_8c0716e4)(ar4,uVar1,uVar3,uVar5);
      ar7 = (undefined *)0x0;
      uVar1 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0716f0)
                (ar4 + DAT_8c0716e8._4_4_,8,0xffffffff,0);
      uVar1 = (*(code *)PTR_FUN_8c0716f8)(ar4 + 0x14,PTR_DAT_8c0716f4,uVar1,ar7);
      *(undefined4 *)(puVar7 + -0xe0) = uVar1;
      uVar3 = *(undefined4 *)(puVar7 + -0xe0);
      *(undefined4 *)(DAT_8c0716fc + ar4) = uVar3;
      if (*(int *)(DAT_8c0716fc + ar4) == 3) {
        ar7 = (undefined *)(ar4 + DAT_8c0716e8._4_4_);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c071704)
                  (ar7,uVar3,PTR_s_CAnimBody_SetFrame_033e6e_8c071704,ar7);
      }
      else {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07175c)
                  (ar4 + DAT_8c071754._4_4_,DAT_8c071754._4_4_,uVar1,ar7);
      }
      *(int *)(puVar7 + -0x108) = ar4;
      *(int *)(DAT_8c071760 + *(int *)(puVar7 + -0x108)) =
           *(int *)(DAT_8c071760 + *(int *)(puVar7 + -0x108)) + 1;
    case 1:
      if (*(int *)(ar4 + 0x40) == 0) {
        *(int *)(puVar7 + -0x10c) = ar4;
        *(int *)(DAT_8c071760 + *(int *)(puVar7 + -0x10c)) =
             *(int *)(DAT_8c071760 + *(int *)(puVar7 + -0x10c)) + 1;
      }
      break;
    case 2:
      iVar2 = *(int *)(DAT_8c0717a8 + ar4);
      if (iVar2 == 3) {
        uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c0717b4)
                          (ar4 + DAT_8c0717ac._4_4_,ar4 + DAT_8c0717ac._4_4_,3,ar7);
        *(undefined4 *)(puVar7 + -0xe4) = uVar1;
        if (*(int *)(puVar7 + -0xe4) == 1) {
          *(int *)(puVar7 + -0x110) = ar4;
          *(int *)(DAT_8c0717b8 + *(int *)(puVar7 + -0x110)) =
               *(int *)(DAT_8c0717b8 + *(int *)(puVar7 + -0x110)) + 1;
        }
      }
      else {
        (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c071810)
                  (ar4 + DAT_8c071808._4_4_,DAT_8c071808._4_4_,iVar2,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c071814)
                  (ar4 + DAT_8c071808._4_4_,ar4 + DAT_8c071808._4_4_,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0xe8) = (int)(in_dr0 >> 0x20);
          in_dr0 = (ulonglong)*(uint *)(puVar7 + -0xe8);
        }
        else {
          *(ulonglong *)(puVar7 + -0xe8) = in_dr0;
        }
        if (in_FPSCR_PR != '\0' || (float)in_dr0 <= 0.0) {
          *(int *)(puVar7 + -0x114) = ar4;
          ar7 = *(undefined **)(puVar7 + -0x114);
          *(int *)(ar7 + DAT_8c071818) = *(int *)(DAT_8c071818 + *(int *)(puVar7 + -0x114)) + 1;
        }
      }
      break;
    case 3:
      uVar1 = (*(code *)PTR_rand_range_8c071898)(ar4,0,10,ar7);
      *(undefined4 *)(puVar7 + -0xec) = uVar1;
      if (((5 < *(int *)(puVar7 + -0xec)) && (2 < *(int *)(DAT_8c07189c + ar4))) &&
         (*(int *)(DAT_8c07189c + ar4) < 6)) {
        uVar5 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 0x14;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0718a8)
                  (ar4 + DAT_8c0718a0._4_4_,0x14,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0718ac)
                  (ar4 + DAT_8c0718a0._4_4_,uVar1,uVar3,uVar5);
        (*(code *)PTR_FUN_8c0718b4)
                  (ar4 + DAT_8c0718a0._4_4_,uVar1,ar4 + DAT_8c0718a0._4_4_,DAT_8c0718a0._4_4_);
        *(int *)(puVar7 + -0x118) = ar4;
        ar7 = *(undefined **)(DAT_8c0718b8 + *(int *)(puVar7 + -0x118));
        puVar4 = ar7 + 1;
        *(undefined **)(DAT_8c0718b8 + *(int *)(puVar7 + -0x118)) = puVar4;
        goto switchD_8c071656_caseD_4;
      }
      ar7 = (undefined *)0x0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c071908)(ar4 + DAT_8c071904,8,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07190c)
                (ar4 + DAT_8c071904,ar4 + DAT_8c071904,DAT_8c071904,ar7);
      *(int *)(puVar7 + -0x11c) = ar4;
      *(int *)(DAT_8c071910 + *(int *)(puVar7 + -0x11c)) =
           *(int *)(DAT_8c071910 + *(int *)(puVar7 + -0x11c)) + 1;
      break;
    case 4:
switchD_8c071656_caseD_4:
      uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c071990)
                        (ar4 + DAT_8c07198c,PTR_CAnimBody_AdvanceFrame_wrapper_8c071990,puVar4,ar7);
      *(undefined4 *)(puVar7 + -0xf0) = uVar1;
      if (*(int *)(puVar7 + -0xf0) == 1) {
        (*(code *)PTR_FUN_8c071994)(ar4 + DAT_8c07198c,1,puVar4,ar7);
        uVar1 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07199c)(ar4 + DAT_8c07198c,0,0xffffffff,0);
        ar7 = (undefined *)(ar4 + DAT_8c07198c);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0719a0)
                  (ar7,uVar1,PTR_s_CAnimBody_SetFrame_033e6e_8c0719a0,ar7);
        *(undefined4 *)(DAT_8c0719a4 + ar4) = 1;
        iVar6 = 0;
        *(undefined4 *)(DAT_8c0719a8 + ar4) = 0;
      }
    }
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c0719b0)(ar4,puVar7 + DAT_8c0719ac + -0x11c,puVar4,ar7);
    break;
  case 0x1a:
    (*(code *)PTR_FUN_8c07160c)(ar4,a5,puVar4,ar7);
    ar7 = (undefined *)0x0;
    uVar1 = 8;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c071618)(ar4 + DAT_8c071610._4_4_,8,0xffffffff,0)
    ;
    puVar4 = PTR_FUN_8c071620;
    (*(code *)PTR_FUN_8c071620)(ar4,uVar1,PTR_FUN_8c071620,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar7 + -0xdc) = (int)(in_dr0 >> 0x20);
    }
    else {
      *(ulonglong *)(puVar7 + -0xdc) = in_dr0;
    }
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c071624)
              (ar4 + DAT_8c071610._4_4_,ar4 + DAT_8c071610._4_4_,puVar4,ar7);
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c07162c)(ar4,puVar7 + DAT_8c071628 + -0x11c,puVar4,ar7);
    break;
  case 0x1b:
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c071a20)(ar4,puVar7 + DAT_8c071a1c + -0x11c,puVar4,ar7);
    uVar1 = (*(code *)PTR_FUN_8c071a24)(ar4,*ar5,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xf4) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xf4);
    break;
  case 0x1e:
    puVar4 = *(undefined **)ar5[1];
    (*(code *)PTR_FUN_8c071570)(ar4,puVar7 + DAT_8c07156c + -0x11c,puVar4,ar7);
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c071578)
                      (ar4 + DAT_8c071574,PTR_CAnimBody_AdvanceFrame_wrapper_8c071578,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xd4) = uVar1;
    if (*(int *)(puVar7 + -0xd4) == 1) {
      iVar6 = 0;
    }
    break;
  case 0x1f:
    *(undefined4 *)(puVar7 + -0x120) = ar5[3];
    ar7 = (undefined *)ar5[6];
    puVar4 = puVar7 + DAT_8c0715a8 + -0x120;
    uVar1 = (*(code *)PTR_FUN_8c0715ac)(ar4,*(undefined4 *)ar5[1],puVar4,ar7);
    *(undefined4 *)(puVar7 + -0xd8) = uVar1;
    iVar6 = *(int *)(puVar7 + -0xd8);
  }
switchD_8c070f82_caseD_5:
  (*(code *)PTR_Vec3_assign_8c071a2c)(ar4 + DAT_8c071a28,ar4 + 0x14,puVar4,ar7);
  *(int *)(puVar7 + DAT_8c071a30 + -0x11c) = iVar6;
  (*(code *)PTR_Vec3_dtor_8c071a34)(puVar7 + DAT_8c071a1c + -0x11c,0xffffffff,puVar4,ar7);
  return *(undefined4 *)(puVar7 + DAT_8c071a30 + -0x11c);
}



/* FUN_8c071a38 @ 8c071a38 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c071bf0 */
/* WARNING: Switch with 1 destination removed at 0x8c071c74 */
/* WARNING: Switch with 1 destination removed at 0x8c071c82 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c071a38(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int a5;
  int *a4;
  undefined *a7;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar5;
  undefined8 in_dr12;
  undefined8 in_dr14;
  undefined8 in_xd14;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar5 = &uStack_10;
    uStack_10 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar5 = (undefined8 *)auStack_20;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)((int)puVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)puVar5 + -0x10) = in_PR;
  iVar1 = -DAT_8c071bf8;
  *(undefined1 **)((int)puVar5 + iVar1 + -0x14) =
       (undefined1 *)((int)puVar5 + DAT_8c071bfc + iVar1 + -0x10);
  (*(code *)PTR_FUN_8c071c00)(*ar5,1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c071c08)
            ((undefined1 *)((int)puVar5 + DAT_8c071c04 + iVar1 + -0x10),
             (undefined1 *)((int)puVar5 + DAT_8c071bfc + iVar1 + -0x10),ar6,ar7);
  a4 = (int *)((int)puVar5 + DAT_8c071bfc + iVar1 + -0x10);
  (*(code *)PTR_Vec3_dtor_8c071c0c)(a4,0xffffffff,ar6,a4);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x7c) = ar5[8];
  }
  else {
    *(undefined8 *)(ar4 + 0x7c) = *(undefined8 *)(ar5 + 8);
  }
  if (*(int *)(DAT_8c071c10 + ar4) == 0) {
    if (ar5[4] != 3) {
      a4 = (int *)(ar4 + 0x68);
      ar6 = *a4;
      if (ar6 == 0) goto LAB_8c071c68;
    }
    if (*(int *)(DAT_8c071c14 + ar4) == 1) {
      if ((*(int *)(DAT_8c071c18 + ar4) == 4) && (*(int *)(DAT_8c071c1c + ar4) == 2)) {
        uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c071c20)(*ar5,1,ar6,a4);
        *(undefined4 *)((int)puVar5 + DAT_8c071c24 + iVar1 + -0x10) = uVar2;
        if (*(int *)((int)puVar5 + DAT_8c071c24 + iVar1 + -0x10) != 0) {
          *(undefined1 **)((int)puVar5 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar5 + DAT_8c071c28 + iVar1 + -0x10);
          iVar3 = DAT_8c071c2c;
          (*(code *)PTR_Vec3_scale_8c071c30)(ar4 + DAT_8c071c2c,ar4 + 0x48,DAT_8c071c2c,a4);
          *(undefined1 **)((int)puVar5 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar5 + DAT_8c071c34 + iVar1 + -0x10);
          (*(code *)PTR_Vec3_scale_8c071c30)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c38 + iVar1 + -0x14),
                     *(int *)(ar5[1] + 8) + 4,iVar3,a4);
          *(undefined1 **)((int)puVar5 + iVar1 + -0x14) =
               (undefined1 *)((int)puVar5 + DAT_8c071c3c + iVar1 + -0x10);
          a7 = PTR_Vec3_add_8c071c44;
          (*(code *)PTR_Vec3_add_8c071c44)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c40 + iVar1 + -0x14),
                     *(undefined4 *)ar5[1],iVar3,PTR_Vec3_add_8c071c44);
          (*(code *)PTR_Vec3_ctor_copy_8c071c08)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c48 + iVar1 + -0x10),
                     (undefined1 *)((int)puVar5 + DAT_8c071c3c + iVar1 + -0x10),iVar3,a7);
          (*(code *)PTR_Vec3_dtor_8c071c0c)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c3c + iVar1 + -0x10),0xffffffff,iVar3,a7)
          ;
          (*(code *)PTR_Vec3_dtor_8c071c0c)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c34 + iVar1 + -0x10),0xffffffff,iVar3,a7)
          ;
          uVar4 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c071c0c)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c28 + iVar1 + -0x10),0xffffffff,iVar3,a7)
          ;
          uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c071c20)(*ar5,uVar4,iVar3,a7);
          *(undefined4 *)((int)puVar5 + DAT_8c071c4c + iVar1 + -0x10) = uVar2;
          (*(code *)PTR_FUN_8c071c58)
                    (*(undefined4 *)((int)puVar5 + DAT_8c071c4c + iVar1 + -0x10),uVar4,iVar3,a7);
          (*(code *)PTR_Vec3_dtor_8c071c0c)
                    ((undefined1 *)((int)puVar5 + DAT_8c071c48 + iVar1 + -0x10),0xffffffff,iVar3,a7)
          ;
        }
      }
      *(undefined4 *)((int)puVar5 + iVar1 + -0x14) = ar5[6];
      uVar4 = ar5[3];
      uVar2 = ar5[4];
      (*(code *)PTR_FUN_8c071c5c)(ar4,*(undefined4 *)ar5[1],uVar2,uVar4);
      (*(code *)PTR_Vec3_assign_8c071c60)(ar4 + DAT_8c071c2c,ar4 + 0x14,uVar2,uVar4);
      *(undefined4 *)((int)puVar5 + DAT_8c071c64 + iVar1 + -0x10) = 1;
      (*(code *)PTR_Vec3_dtor_8c071c0c)
                ((undefined1 *)((int)puVar5 + DAT_8c071c04 + iVar1 + -0x10),0xffffffff,uVar2,uVar4);
      return *(undefined4 *)((int)puVar5 + DAT_8c071c64 + iVar1 + -0x10);
    }
  }
LAB_8c071c68:
  iVar3 = *(int *)(DAT_8c071c98 + ar4);
  a5 = 0x21;
  if ((iVar3 < 0x22) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c071c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_8c071c9c)[iVar3])();
    return uVar2;
  }
  if ((((*(int *)(DAT_8c0737dc + ar4) != 0x12) && (*(int *)(DAT_8c0737dc + ar4) != 0x18)) &&
      (*(int *)(DAT_8c0737dc + ar4) != 0x20)) &&
     (((*(int *)(DAT_8c0737dc + ar4) != 0x1d && (*(int *)(DAT_8c0737dc + ar4) != 0x11)) &&
      (*(int *)(DAT_8c0737e0 + ar4) == 0)))) {
    a5 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0737e8)(ar4 + DAT_8c0737e4,a5,a5,a4);
  }
  *(undefined4 *)((int)puVar5 + DAT_8c0737ec + iVar1 + -0x10) = 1;
  (*(code *)PTR_Vec3_dtor_8c0737f4)
            ((undefined1 *)((int)puVar5 + DAT_8c0737f0 + iVar1 + -0x10),0xffffffff,a5,a4);
  return *(undefined4 *)((int)puVar5 + DAT_8c0737ec + iVar1 + -0x10);
}



/* FUN_8c0737fc @ 8c0737fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0737fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 uVar5;
  undefined4 unaff_r14;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 in_dr0;
  double dVar9;
  undefined *puVar10;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd4;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar6 = auStack_4;
  }
  else {
    puVar6 = auStack_8;
  }
  *(undefined4 *)(puVar6 + -4) = unaff_r14;
  *(undefined4 *)(puVar6 + -8) = unaff_r13;
  *(undefined4 *)(puVar6 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar6 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar6 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar6 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0xb0) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar6 + -0xac) = (int)in_dr4;
  }
  else {
    *(undefined8 *)(puVar6 + -0xb0) = in_dr4;
    *(undefined8 *)(puVar6 + -0xac) = in_xd4;
  }
  uVar5 = 1;
  *(undefined1 **)(puVar6 + -0xb4) = puVar6 + -0x38;
  uVar1 = ar5;
  uVar4 = ar6;
  (*(code *)PTR_Vec3_sub_8c0738c8)(ar6,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_length_8c0738cc)(puVar6 + -0x38,uVar1,uVar4,ar7);
  *(undefined4 *)(puVar6 + -0x84) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c0738d4)
            (puVar6 + DAT_8c0738d0 + -0xb0,*(undefined4 *)(puVar6 + -0x84),uVar4,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0738d8)(puVar6 + -0x38,0xffffffff,uVar4,ar7);
  *(undefined1 **)(puVar6 + -0xb4) = puVar6 + -0x48;
  (*(code *)PTR_FUN_8c0738dc)(ar4 + 0x14,uVar1,uVar4,ar7);
  *(undefined1 **)(puVar6 + -0xb4) = puVar6 + -0x58;
  (*(code *)PTR_FUN_8c0738dc)(puVar6 + DAT_8c0738e0 + -0xb4,uVar1,uVar4,ar7);
  (*(code *)PTR_FUN_8c0738e4)(puVar6 + -0x48,puVar6 + -0x58,uVar4,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar6 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar6 + -0x88);
  }
  else {
    *(undefined8 *)(puVar6 + -0x88) = in_dr0;
  }
  (*(code *)PTR_Vec3_dtor_8c0738d8)(puVar6 + -0x58,0xffffffff,uVar4,ar7);
  iVar3 = -1;
  (*(code *)PTR_Vec3_dtor_8c0738d8)(puVar6 + -0x48,0xffffffff,uVar4,ar7);
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    (*(code *)PTR_FUN_8c073940)(ar4,iVar3,uVar4,ar7);
    uVar4 = (undefined4)in_dr0;
    uVar1 = ar6;
    (*(code *)PTR_FUN_8c073944)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar9 = (double)CONCAT44((undefined4)DAT_8c073948,uVar4);
    }
    else {
      dVar9 = (double)CONCAT44(DAT_8c073948._4_4_,(undefined4)DAT_8c073948);
    }
    if (in_FPSCR_PR == '\0') {
      bVar11 = in_fr15 < (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      bVar11 = (double)CONCAT44(in_fr14,in_fr15) < dVar9;
    }
    if (bVar11) {
      *(undefined4 *)(DAT_8c073988 + ar4) = 0;
    }
    else {
      uVar1 = (*(code *)PTR_FUN_8c073950)(ar4 + 0x14,puVar6 + DAT_8c073948._4_4_ + -0xb0,uVar1,ar7);
      *(undefined4 *)(puVar6 + -0x8c) = uVar1;
      *(undefined4 *)(DAT_8c073954 + ar4) = *(undefined4 *)(puVar6 + -0x8c);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44(*(undefined4 *)DAT_8c07398c,*(undefined4 *)(ar4 + 0x24));
    }
    else {
      in_dr0 = *DAT_8c07398c;
    }
    if (in_FPSCR_PR == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
      ar7 = 0;
      uVar4 = 0xffffffff;
      uVar1 = 1;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0739ec)
                (ar4 + DAT_8c0739e4._4_4_,1,0xffffffff,0);
    }
    else {
      ar7 = 0;
      uVar4 = 0xffffffff;
      uVar1 = 4;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c073998)(ar4 + DAT_8c073994,4,0xffffffff,0);
    }
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0739f0)(ar4 + DAT_8c0739e4._4_4_,uVar1,uVar4,ar7);
    iVar3 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c0739f8)(ar4 + DAT_8c0739f4,iVar3,uVar4,ar7);
  case 1:
    iVar2 = *(int *)(DAT_8c0739fc + ar4);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_FUN_8c073b08)(ar4 + DAT_8c073b04,0,uVar4,ar7);
      *(undefined4 *)(puVar6 + -0x94) = uVar1;
      if (0 < *(int *)(puVar6 + -0x94)) {
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
    }
    else if ((iVar2 == 3) || (iVar2 == 4)) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c073aa8)(ar4 + DAT_8c073aa4,iVar3,uVar4,ar7);
      *(undefined1 **)(puVar6 + -0xb4) = puVar6 + -0x68;
      (*(code *)PTR_FUN_8c073ab0)(ar4 + DAT_8c073aac,iVar3,uVar4,ar7);
      *(undefined1 **)(puVar6 + -0xb4) = puVar6 + -0x78;
      (*(code *)PTR_FUN_8c073ab0)(ar4 + 0x14,iVar3,uVar4,ar7);
      (*(code *)PTR_FUN_8c073ab4)(puVar6 + -0x68,puVar6 + -0x78,uVar4,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar6 + -0x90) = (int)((ulonglong)in_dr0 >> 0x20);
        puVar7 = *(undefined **)(puVar6 + -0x90);
        puVar10 = DAT_8c073ab8;
      }
      else {
        *(undefined8 *)(puVar6 + -0x90) = in_dr0;
        puVar7 = DAT_8c073ab8;
        puVar10 = PTR_Vec3_dtor_8c073abc;
      }
      *(uint *)(puVar6 + -0x80) = (uint)(in_FPSCR_PR != '\0' || (float)puVar10 <= (float)puVar7);
      (*(code *)PTR_Vec3_dtor_8c073abc)(puVar6 + -0x78,0xffffffff,uVar4,ar7);
      (*(code *)PTR_Vec3_dtor_8c073abc)(puVar6 + -0x68,0xffffffff,uVar4,ar7);
      if (*(int *)(puVar6 + -0x80) != 0) {
        ar7 = 0;
        uVar1 = 0xffffffff;
        iVar3 = *(int *)(DAT_8c073ac0._4_4_ + ar4) + 6;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c073ac8)
                  (ar4 + DAT_8c073aa4,iVar3,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c073acc)(ar4 + DAT_8c073aa4,iVar3,uVar1,ar7);
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
    }
    uVar1 = (*(code *)PTR_FUN_8c073b0c)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(puVar6 + -0x98) = uVar1;
    uVar5 = *(undefined4 *)(puVar6 + -0x98);
    uVar4 = ar5;
    break;
  case 3:
    uVar1 = (*(code *)PTR_FUN_8c073b4c)(ar4,ar6,ar5,ar7);
    uVar8 = (undefined4)in_dr0;
    *(undefined4 *)(puVar6 + -0x9c) = uVar1;
    uVar5 = *(undefined4 *)(puVar6 + -0x9c);
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c073b54)(ar4 + DAT_8c073b50,ar6,ar5,ar7);
    *(undefined4 *)(puVar6 + -0xa0) = uVar1;
    uVar4 = ar5;
    switch(*(undefined4 *)(puVar6 + -0xa0)) {
    case 0:
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c073ba8)(ar4 + DAT_8c073ba4,ar6,ar5,ar7);
      (*(code *)PTR_FUN_8c073bb0)(ar4,ar6,ar5,ar7);
      uVar4 = ar5;
      break;
    case 1:
      (*(code *)PTR_FUN_8c073bcc)(ar4 + DAT_8c073bc8,0,ar5,ar7);
      uVar4 = ar5;
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44((undefined4)DAT_8c073be8,uVar8);
      }
      else {
        dVar9 = (double)CONCAT44(DAT_8c073be8._4_4_,(undefined4)DAT_8c073be8);
      }
      if (in_FPSCR_PR == '\0') {
        bVar11 = in_fr15 < (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        bVar11 = (double)CONCAT44(in_fr14,in_fr15) < dVar9;
      }
      if (bVar11) {
        (*(code *)PTR_FUN_8c073c0c)(ar4 + DAT_8c073c08,0,ar5,ar7);
        uVar4 = ar5;
      }
      else {
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c073bf0)(ar4 + DAT_8c073be8._4_4_,ar6,ar5,ar7)
        ;
        uVar4 = ar5;
      }
    }
    break;
  case 4:
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c073c3c)(ar4 + DAT_8c073c38,iVar3,uVar4,ar7);
    *(undefined4 *)(puVar6 + -0xa4) = uVar1;
    if (*(int *)(puVar6 + -0xa4) == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c073c8c)(ar4 + DAT_8c073c88,iVar3,uVar4,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c073c40)(ar4 + DAT_8c073c38,0,uVar4,ar7);
    }
    uVar1 = (*(code *)PTR_FUN_8c073c90)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(puVar6 + -0xa8) = uVar1;
    uVar5 = *(undefined4 *)(puVar6 + -0xa8);
    uVar4 = ar5;
  }
  *(undefined4 *)(puVar6 + -0x7c) = uVar5;
  (*(code *)PTR_Vec3_dtor_8c073c98)(puVar6 + DAT_8c073c94 + -0xb0,0xffffffff,uVar4,ar7);
  return *(undefined4 *)(puVar6 + -0x7c);
}



/* FUN_8c073c9c @ 8c073c9c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c073c9c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_fr1;
  char in_FPSCR_SZ;
  
  iVar1 = DAT_8c073ca8;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + DAT_8c073ca8) = 0;
  }
  else {
    *(ulonglong *)(ar4 + DAT_8c073ca8) = (ulonglong)in_fr1;
  }
  return iVar1;
}



/* FUN_8c073cac @ 8c073cac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c073cac(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 *a5;
  undefined *puVar6;
  undefined *puVar7;
  double *a6;
  undefined1 *a4;
  undefined4 uVar8;
  undefined4 *a7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 a5_00;
  undefined4 unaff_r13;
  undefined8 *puVar9;
  undefined4 unaff_r14;
  undefined1 *puVar10;
  float fVar11;
  double in_dr0;
  undefined8 uVar12;
  double dVar13;
  undefined8 in_dr4;
  double in_dr12;
  double dVar14;
  double in_dr14;
  undefined8 in_xd0;
  undefined8 in_xd4;
  double in_xd14;
  bool bVar15;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_18 [8];
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = (double)CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    puVar10 = (undefined1 *)((int)&uStack_10 + 4);
    uStack_10 = (double)CONCAT44(SUB84(in_dr12,0),(undefined4)uStack_10);
  }
  else {
    puVar10 = auStack_18;
    uStack_8 = in_xd14;
    uStack_10 = in_dr14;
  }
  *(undefined4 *)(puVar10 + -4) = unaff_r14;
  *(undefined4 *)(puVar10 + -8) = unaff_r13;
  *(undefined4 *)(puVar10 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar10 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar10 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar10 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar10 + -0x168) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar10 + -0x164) = (int)in_dr4;
  }
  else {
    *(undefined8 *)(puVar10 + -0x168) = in_dr4;
    *(undefined8 *)(puVar10 + -0x164) = in_xd4;
  }
  a5_00 = 1;
  puVar9 = (undefined8 *)0xffffffff;
  *(undefined1 **)(puVar10 + -0x16c) = puVar10 + DAT_8c073dac + -0x168;
  puVar7 = ar5;
  uVar5 = ar6;
  (*(code *)PTR_Vec3_sub_8c073db0)(ar6,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_length_8c073db4)(puVar10 + DAT_8c073dac + -0x168,puVar7,uVar5,ar7);
  *(undefined4 *)(puVar10 + DAT_8c073db8 + -0x168) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c073dc0)
            (puVar10 + DAT_8c073dbc + -0x168,*(undefined4 *)(puVar10 + DAT_8c073db8 + -0x168),uVar5,
             ar7);
  puVar7 = PTR_Vec3_dtor_8c073dc4;
  (*(code *)PTR_Vec3_dtor_8c073dc4)
            (puVar10 + DAT_8c073dac + -0x168,0xffffffff,PTR_Vec3_dtor_8c073dc4,ar7);
  *(undefined1 **)(puVar10 + -0x16c) = puVar10 + DAT_8c073dc8 + -0x168;
  (*(code *)PTR_FUN_8c073dcc)(ar4 + 0x14,puVar10 + DAT_8c073dc8 + -0x168,puVar7,ar7);
  *(undefined1 **)(puVar10 + -0x16c) = puVar10 + DAT_8c073dd0 + -0x168;
  (*(code *)PTR_FUN_8c073dcc)(puVar10 + DAT_8c073dd4 + -0x16c,PTR_FUN_8c073dcc,puVar7,ar7);
  puVar6 = PTR_FUN_8c073dd8;
  (*(code *)PTR_FUN_8c073dd8)
            (puVar10 + DAT_8c073dc8 + -0x168,puVar10 + DAT_8c073dd0 + -0x168,puVar7,PTR_FUN_8c073dd8
            );
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar10 + DAT_8c073ddc + -0x168) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)(puVar10 + DAT_8c073ddc + -0x168));
  }
  else {
    *(double *)(puVar10 + DAT_8c073ddc + -0x168) = in_dr0;
    in_xd14 = *(double *)(puVar10 + DAT_8c073ddc + -0x168);
  }
  (*(code *)PTR_Vec3_dtor_8c073dc4)(puVar10 + DAT_8c073dd0 + -0x168,0xffffffff,puVar7,puVar6);
  uVar5 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c073dc4)(puVar10 + DAT_8c073dc8 + -0x168,0xffffffff,puVar7,puVar6);
  a7 = (undefined4 *)PTR_Vec3_set_zero_8c073de4;
  (*(code *)PTR_Vec3_set_zero_8c073de4)
            (puVar10 + DAT_8c073de0 + -0x168,uVar5,puVar7,PTR_Vec3_set_zero_8c073de4);
  a5 = (undefined8 *)PTR_Vec3_set_zero_8c073de4;
  (*(code *)PTR_Vec3_set_zero_8c073de4)
            (puVar10 + DAT_8c073de8 + -0x168,PTR_Vec3_set_zero_8c073de4,puVar7,a7);
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    (*(code *)PTR_FUN_8c073e68)(ar4,a5,puVar7,a7);
    uVar1 = SUB84(in_dr0,0);
    puVar7 = ar5;
    uVar5 = ar6;
    (*(code *)PTR_FUN_8c073e6c)(ar4,ar5,ar6,a7);
    (*(code *)PTR_FUN_8c073e74)(ar4 + DAT_8c073e70,puVar7,uVar5,a7);
    puVar7 = PTR_FUN_8c073e7c;
    (*(code *)PTR_FUN_8c073e7c)(ar4 + DAT_8c073e78,1,PTR_FUN_8c073e7c,a7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((undefined4)DAT_8c073e80,uVar1);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c073e80._4_4_,(undefined4)DAT_8c073e80);
    }
    if (in_FPSCR_PR == '\0') {
      bVar15 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar15 = in_dr14 < in_dr0;
    }
    if (bVar15) {
      a5 = (undefined8 *)0x0;
      *(undefined4 *)(DAT_8c073eb8 + ar4) = 0;
    }
    else {
      uVar5 = (*(code *)PTR_FUN_8c073e88)
                        (ar4 + 0x14,puVar10 + DAT_8c073e80._4_4_ + -0x168,puVar7,a7);
      *(undefined4 *)(puVar10 + DAT_8c073e8c + -0x168) = uVar5;
      a5 = *(undefined8 **)(puVar10 + DAT_8c073e8c + -0x168);
      *(undefined8 **)(DAT_8c073e90 + ar4) = a5;
    }
    iVar2 = *(int *)(DAT_8c073eb8 + ar4);
    if (iVar2 == 0) goto LAB_8c07441c;
    fVar11 = SUB84(in_dr14,0);
    if (iVar2 == 3) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44((undefined4)DAT_8c074204,SUB84(in_dr0,0));
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c074204._4_4_,(undefined4)DAT_8c074204);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = (float)((ulonglong)dVar13 >> 0x20) < fVar11;
      }
      else {
        bVar15 = dVar13 < in_dr14;
      }
      if (bVar15) {
        uVar8 = 0;
        puVar7 = (undefined *)0xffffffff;
        uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074210)
                          (ar4 + DAT_8c07420c,2,0xffffffff,0);
        *(undefined4 *)(puVar10 + DAT_8c07420c + -0x168) = uVar5;
        puVar9 = *(undefined8 **)(puVar10 + DAT_8c07420c + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c074214)(ar4,PTR_FUN_8c074214,puVar7,uVar8);
        *(undefined4 *)(puVar10 + DAT_8c074218 + -0x168) = uVar5;
        uVar1 = *(undefined4 *)(puVar10 + DAT_8c074218 + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c07421c)(ar4 + DAT_8c07420c,uVar1,puVar7,uVar8);
        *(undefined4 *)(puVar10 + DAT_8c074220 + -0x168) = uVar5;
        uVar5 = (*(code *)PTR_deref_u32_8c074224)
                          (*(undefined4 *)(puVar10 + DAT_8c074220 + -0x168),uVar1,puVar7,uVar8);
        *(undefined4 *)(puVar10 + DAT_8c074228 + -0x168) = uVar5;
        a7 = (undefined4 *)(ar4 + DAT_8c07422c);
        puVar3 = *(undefined4 **)(puVar10 + DAT_8c074228 + -0x168);
        uVar5 = puVar3[1];
        *a7 = *puVar3;
        a7[1] = uVar5;
        a7[2] = puVar3[2];
        if (*(int *)(DAT_8c074230 + ar4) == 2) {
          *(undefined **)(DAT_8c07422c + ar4) = PTR_DAT_8c074234;
        }
        else {
          *(undefined **)(DAT_8c074254 + ar4) = PTR_DAT_8c074258;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c074260);
        }
        else {
          in_xd0 = CONCAT44(uRam8c074264,DAT_8c074260);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                    SUB84(in_xd14,0));
        }
        else {
          in_dr0 = in_xd14 / in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c07425c) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c07425c) = in_dr0;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c0742ec,SUB84(dVar13,0));
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c0742ec._4_4_,(undefined4)DAT_8c0742ec);
        }
        if (in_FPSCR_PR == '\0') {
          bVar15 = fVar11 < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar15 = in_dr14 < dVar13;
        }
        if (bVar15) {
          if (*(int *)(DAT_8c0743e8 + ar4) == 0) {
            *(undefined4 *)(puVar10 + -0x150) = *(undefined4 *)(DAT_8c0743ec + ar4);
            puVar9 = (undefined8 *)
                     ((*(int *)(puVar10 + -0x150) * 2 + *(int *)(puVar10 + -0x150)) * 8 +
                      DAT_8c0743f0 + 0x10);
            if (in_FPSCR_SZ == '\0') {
              uVar12 = CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)puVar9);
            }
            else {
              in_xd0 = *puVar9;
              uVar12 = *(undefined8 *)(ar4 + 0x28);
            }
            if (in_FPSCR_PR != '\0' || (float)uVar12 <= (float)((ulonglong)uVar12 >> 0x20)) {
              a7 = (undefined4 *)0x1;
              puVar7 = (undefined *)0xffffffff;
              uVar1 = 0xd;
              uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0743fc)
                                (ar4 + DAT_8c0743f8,0xd,0xffffffff,1);
              *(undefined4 *)(puVar10 + DAT_8c074400 + -0x168) = uVar5;
              puVar9 = *(undefined8 **)(puVar10 + DAT_8c074400 + -0x168);
              (*(code *)PTR_FUN_8c074408)(ar4 + DAT_8c0743f8,uVar1,puVar7,a7);
              (*(code *)PTR_FUN_8c07440c)(ar4 + DAT_8c0743f8,uVar1,puVar7,a7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar10 + DAT_8c074410 + -0x168) = (int)((ulonglong)uVar12 >> 0x20);
              }
              else {
                *(undefined8 *)(puVar10 + DAT_8c074410 + -0x168) = uVar12;
              }
              if (in_FPSCR_SZ == '\0') {
                in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),
                                           *(undefined4 *)(puVar10 + DAT_8c074410 + -0x168));
              }
              else {
                in_xd0 = *(undefined8 *)(puVar10 + DAT_8c074410 + -0x168);
              }
              if (in_FPSCR_PR == '\0') {
                in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                          SUB84(in_xd14,0));
              }
              else {
                in_dr0 = in_xd14 / in_xd14;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(ar4 + DAT_8c074414) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(ar4 + DAT_8c074414) = in_dr0;
              }
              goto LAB_8c0743d2;
            }
          }
LAB_8c07441c:
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44(*(undefined4 *)(DAT_8c074458 + 4),*(undefined4 *)(ar4 + 0x24))
            ;
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x24);
            in_dr0 = *(double *)(DAT_8c074458 + 4);
          }
          if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(undefined8 *)(ar4 + 0x28);
              in_dr0 = *(double *)(ar4 + 0x24);
            }
            if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
              a7 = (undefined4 *)0x0;
              puVar7 = (undefined *)0xffffffff;
              a5 = (undefined8 *)0x1;
              uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074594)
                                ((undefined *)(ar4 + (int)DAT_8c07458c._4_4_),1,0xffffffff,0);
              *(undefined4 *)(puVar10 + DAT_8c074598 + -0x168) = uVar5;
              puVar9 = *(undefined8 **)(puVar10 + DAT_8c074598 + -0x168);
            }
            else {
              a7 = (undefined4 *)0x0;
              puVar7 = (undefined *)0xffffffff;
              a5 = (undefined8 *)0x12;
              uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0744b0)
                                (ar4 + DAT_8c0744ac,0x12,0xffffffff,0);
              *(undefined4 *)(puVar10 + DAT_8c0744b4 + -0x168) = uVar5;
              puVar9 = *(undefined8 **)(puVar10 + DAT_8c0744b4 + -0x168);
            }
            if (*(int *)(DAT_8c07459c + ar4) == 0) {
              puVar7 = (undefined *)0x64;
              uVar5 = (*(code *)PTR_rand_range_8c0745a0)(ar4,0,100,a7);
              *(undefined4 *)(puVar10 + -0xec) = uVar5;
              if (*(int *)(puVar10 + -0xec) < 10) {
                a7 = (undefined4 *)0x0;
                puVar7 = (undefined *)0xffffffff;
                uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074594)
                                  ((undefined *)(ar4 + (int)DAT_8c07458c._4_4_),0xf,0xffffffff,0);
                *(undefined4 *)(puVar10 + -0xf0) = uVar5;
                puVar9 = *(undefined8 **)(puVar10 + -0xf0);
              }
              *(int *)(puVar10 + -0x154) = ar4;
              a5 = (undefined8 *)(*(int *)(puVar10 + -0x154) + 0x24);
              if (in_FPSCR_SZ == '\0') {
                in_dr0 = (double)CONCAT44(DAT_8c0745a4,
                                          *(undefined4 *)(*(int *)(puVar10 + -0x154) + 0x24));
              }
              else {
                in_xd0 = *(undefined8 *)(*(int *)(puVar10 + -0x154) + 0x24);
                in_dr0 = (double)CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c0745a8,DAT_8c0745a4);
              }
              if (in_FPSCR_PR == '\0') {
                fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
                in_dr0 = (double)CONCAT44(fVar11,SUB84(in_dr0,0) * fVar11);
              }
              else {
                in_dr0 = in_dr0 * in_dr0;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)a5 = SUB84(in_dr0,0);
              }
              else {
                *a5 = in_xd0;
              }
            }
          }
          else {
            a7 = (undefined4 *)0x0;
            puVar7 = (undefined *)0xffffffff;
            uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074464)
                              (ar4 + DAT_8c074460,4,0xffffffff,0);
            *(undefined4 *)(puVar10 + DAT_8c074468 + -0x168) = uVar5;
            a5 = *(undefined8 **)(puVar10 + DAT_8c074468 + -0x168);
            puVar9 = a5;
          }
          goto LAB_8c074542;
        }
        a7 = (undefined4 *)0x0;
        puVar7 = (undefined *)0xffffffff;
        uVar1 = 9;
        uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0742f8)
                          (ar4 + DAT_8c0742f4,9,0xffffffff,0);
        *(undefined4 *)(puVar10 + DAT_8c0742fc + -0x168) = uVar5;
        puVar9 = *(undefined8 **)(puVar10 + DAT_8c0742fc + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c074300)(ar4,uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c074304 + -0x168) = uVar5;
        uVar1 = *(undefined4 *)(puVar10 + DAT_8c074304 + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c074308)(ar4 + DAT_8c0742f4,uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c07430c + -0x168) = uVar5;
        uVar5 = (*(code *)PTR_deref_u32_8c074310)
                          (*(undefined4 *)(puVar10 + DAT_8c07430c + -0x168),uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c074314 + -0x168) = uVar5;
        puVar4 = (undefined4 *)(ar4 + DAT_8c074318);
        puVar3 = *(undefined4 **)(puVar10 + DAT_8c074314 + -0x168);
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        puVar4[2] = puVar3[2];
        if (*(int *)(DAT_8c07431c + ar4) == 2) {
          *(undefined **)(DAT_8c074318 + ar4) = PTR_DAT_8c074320;
        }
        else {
          *(undefined **)(DAT_8c074340 + ar4) = PTR_DAT_8c074344;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c07434c);
        }
        else {
          in_xd0 = CONCAT44(uRam8c074350,DAT_8c07434c);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                    SUB84(in_xd14,0));
        }
        else {
          in_dr0 = in_xd14 / in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c074348) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c074348) = in_dr0;
        }
      }
LAB_8c0743d2:
      a5 = (undefined8 *)PTR_s_CAnimBody_SetFrame_033e6e_8c074418;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c074418)
                (ar4 + DAT_8c0743f8,PTR_s_CAnimBody_SetFrame_033e6e_8c074418,puVar7,a7);
    }
    else if (iVar2 == 4) {
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44((undefined4)DAT_8c073f4c,SUB84(in_dr0,0));
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c073f4c._4_4_,(undefined4)DAT_8c073f4c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar15 = (float)((ulonglong)dVar13 >> 0x20) < fVar11;
      }
      else {
        bVar15 = dVar13 < in_dr14;
      }
      if (bVar15) {
        a7 = (undefined4 *)0x0;
        puVar7 = (undefined *)0xffffffff;
        uVar1 = 3;
        uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c073f58)
                          (ar4 + DAT_8c073f54,3,0xffffffff,0);
        *(undefined4 *)(puVar10 + DAT_8c073f5c + -0x168) = uVar5;
        puVar9 = *(undefined8 **)(puVar10 + DAT_8c073f5c + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c073f60)(ar4,uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c073f64 + -0x168) = uVar5;
        uVar5 = (*(code *)PTR_FUN_8c073f68)
                          (ar4 + DAT_8c073f54,*(undefined4 *)(puVar10 + DAT_8c073f64 + -0x168),
                           puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c073f6c + -0x168) = uVar5;
        uVar5 = (*(code *)PTR_deref_u32_8c073f70)
                          (*(undefined4 *)(puVar10 + DAT_8c073f6c + -0x168),PTR_deref_u32_8c073f70,
                           puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c073f74 + -0x168) = uVar5;
        puVar3 = (undefined4 *)(ar4 + DAT_8c073f78);
        puVar4 = *(undefined4 **)(puVar10 + DAT_8c073f74 + -0x168);
        uVar5 = puVar4[1];
        *puVar3 = *puVar4;
        puVar3[1] = uVar5;
        a5 = (undefined8 *)puVar4[2];
        puVar3[2] = a5;
        if (*(int *)(DAT_8c073f7c + ar4) == 2) {
          *(undefined **)(DAT_8c073f78 + ar4) = PTR_DAT_8c073f80;
        }
        else {
          *(undefined **)(DAT_8c073fa0 + ar4) = PTR_DAT_8c073fa4;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c073fac);
        }
        else {
          in_xd0 = CONCAT44(uRam8c073fb0,DAT_8c073fac);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                    SUB84(in_xd14,0));
        }
        else {
          in_dr0 = in_xd14 / in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c073fa8) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c073fa8) = in_dr0;
        }
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c07403c,SUB84(dVar13,0));
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c07403c._4_4_,(undefined4)DAT_8c07403c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar15 = fVar11 < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar15 = in_dr14 < dVar13;
        }
        if (bVar15) {
          if (*(int *)(DAT_8c074140 + ar4) == 0) {
            *(undefined4 *)(puVar10 + -0x14c) = *(undefined4 *)(DAT_8c074144 + ar4);
            puVar9 = (undefined8 *)
                     ((*(int *)(puVar10 + -0x14c) * 2 + *(int *)(puVar10 + -0x14c)) * 8 +
                      DAT_8c074148 + 0x10);
            if (in_FPSCR_SZ == '\0') {
              uVar12 = CONCAT44(*(undefined4 *)(ar4 + 0x28),*(undefined4 *)puVar9);
            }
            else {
              in_xd0 = *puVar9;
              uVar12 = *(undefined8 *)(ar4 + 0x28);
            }
            if (in_FPSCR_PR != '\0' || (float)uVar12 <= (float)((ulonglong)uVar12 >> 0x20)) {
              a7 = (undefined4 *)0x1;
              uVar8 = 0xffffffff;
              uVar1 = 0xe;
              uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074154)
                                (ar4 + DAT_8c07414c._4_4_,0xe,0xffffffff,1);
              *(undefined4 *)(puVar10 + DAT_8c074158 + -0x168) = uVar5;
              puVar9 = *(undefined8 **)(puVar10 + DAT_8c074158 + -0x168);
              (*(code *)PTR_FUN_8c074160)(ar4 + DAT_8c07414c._4_4_,uVar1,uVar8,a7);
              puVar7 = PTR_FUN_8c074164;
              (*(code *)PTR_FUN_8c074164)(ar4 + DAT_8c07414c._4_4_,uVar1,PTR_FUN_8c074164,a7);
              a5 = DAT_8c07416c;
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar10 + DAT_8c074168 + -0x168) = (int)((ulonglong)uVar12 >> 0x20);
              }
              else {
                *(undefined8 *)(puVar10 + DAT_8c074168 + -0x168) = uVar12;
              }
              if (in_FPSCR_SZ == '\0') {
                in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),
                                           *(undefined4 *)(puVar10 + DAT_8c074168 + -0x168));
              }
              else {
                in_xd0 = *(undefined8 *)(puVar10 + DAT_8c074168 + -0x168);
              }
              if (in_FPSCR_PR == '\0') {
                in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                          SUB84(in_xd14,0));
              }
              else {
                in_dr0 = in_xd14 / in_xd14;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(ar4 + (int)DAT_8c07416c) = (int)((ulonglong)in_dr0 >> 0x20);
              }
              else {
                *(double *)(ar4 + (int)DAT_8c07416c) = in_dr0;
              }
              goto LAB_8c07412a;
            }
          }
          goto LAB_8c07441c;
        }
        a7 = (undefined4 *)0x0;
        puVar7 = (undefined *)0xffffffff;
        uVar1 = 10;
        uVar5 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074048)
                          (ar4 + DAT_8c074044,10,0xffffffff,0);
        *(undefined4 *)(puVar10 + DAT_8c07404c + -0x168) = uVar5;
        puVar9 = *(undefined8 **)(puVar10 + DAT_8c07404c + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c074050)(ar4,uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c074054 + -0x168) = uVar5;
        uVar1 = *(undefined4 *)(puVar10 + DAT_8c074054 + -0x168);
        uVar5 = (*(code *)PTR_FUN_8c074058)(ar4 + DAT_8c074044,uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c07405c + -0x168) = uVar5;
        uVar5 = (*(code *)PTR_deref_u32_8c074060)
                          (*(undefined4 *)(puVar10 + DAT_8c07405c + -0x168),uVar1,puVar7,a7);
        *(undefined4 *)(puVar10 + DAT_8c074064 + -0x168) = uVar5;
        a5 = (undefined8 *)(ar4 + DAT_8c074068);
        puVar3 = *(undefined4 **)(puVar10 + DAT_8c074064 + -0x168);
        uVar5 = puVar3[1];
        *(undefined4 *)a5 = *puVar3;
        *(undefined4 *)((int)a5 + 4) = uVar5;
        *(undefined4 *)(a5 + 1) = puVar3[2];
        if (*(int *)(DAT_8c07406c + ar4) == 2) {
          *(undefined **)(DAT_8c074068 + ar4) = PTR_DAT_8c074070;
        }
        else {
          *(undefined **)(DAT_8c074090 + ar4) = PTR_DAT_8c074094;
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd14 = (double)CONCAT44(SUB84(in_dr14,0),DAT_8c07409c);
        }
        else {
          in_xd0 = CONCAT44(uRam8c0740a0,DAT_8c07409c);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                    SUB84(in_xd14,0));
        }
        else {
          in_dr0 = in_xd14 / in_xd14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + DAT_8c074098) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(ar4 + DAT_8c074098) = in_dr0;
        }
      }
LAB_8c07412a:
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c074170)(ar4 + DAT_8c07414c._4_4_,a5,puVar7,a7);
    }
LAB_8c074542:
    if (puVar9 != (undefined8 *)0x6) {
      puVar7 = (undefined *)(ar4 + (int)DAT_8c07458c._4_4_);
      a7 = DAT_8c07458c._4_4_;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0745a8)(puVar7,a5,puVar7,DAT_8c07458c._4_4_);
    }
  case 1:
    uVar5 = (*(code *)PTR_FUN_8c0745ac)(ar4,a5,puVar7,a7);
    *(undefined4 *)(puVar10 + -0xf4) = uVar5;
    switch(*(undefined4 *)(puVar10 + -0xf4)) {
    case 1:
    case 4:
    case 0x10:
    case 0x11:
    case 0x12:
      uVar5 = (*(code *)PTR_FUN_8c074a74)(ar4 + DAT_8c074a70,0,puVar7,a7);
      *(undefined4 *)(puVar10 + -300) = uVar5;
      if (0 < *(int *)(puVar10 + -300)) {
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
      uVar5 = (*(code *)PTR_FUN_8c074a78)(ar4,ar6,ar5,a7);
      *(undefined4 *)(puVar10 + -0x130) = uVar5;
      a5_00 = *(undefined4 *)(puVar10 + -0x130);
      puVar7 = ar5;
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      (*(code *)PTR_CAnimBody_GetCurFrame_8c074734)(ar4 + DAT_8c074730,DAT_8c074730,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0xf8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(puVar10 + -0xf8) = in_dr0;
      }
      *(undefined1 **)(puVar10 + -0x16c) = puVar10 + DAT_8c074738 + -0x168;
      (*(code *)PTR_FUN_8c074740)
                (ar4 + DAT_8c074730,*(undefined4 *)(*(int *)(DAT_8c07473c + ar4) + 4),puVar7,a7);
      uVar5 = SUB84(in_dr0,0);
      (*(code *)PTR_vec3_copy_8c023d8c_8c074748)
                (puVar10 + DAT_8c074744 + -0x168,puVar10 + DAT_8c074738 + -0x168,puVar7,a7);
      (*(code *)PTR_object_dtor_delete_8c07474c)
                (puVar10 + DAT_8c074738 + -0x168,0xffffffff,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        uVar5 = *(undefined4 *)(puVar10 + DAT_8c074744 + -0x168);
      }
      else {
        in_xd0 = *(undefined8 *)(puVar10 + DAT_8c074744 + -0x168);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c074750),uVar5);
      }
      else {
        dVar13 = *(double *)(ar4 + DAT_8c074750);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c074754),fVar11);
      }
      else {
        dVar13 = *(double *)(ar4 + DAT_8c074754);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 * dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + DAT_8c074758 + -0x168) = fVar11;
        fVar11 = *(float *)(puVar10 + DAT_8c07475c + -0x168);
      }
      else {
        *(undefined8 *)(puVar10 + DAT_8c074758 + -0x168) = in_xd0;
        in_xd0 = *(undefined8 *)(puVar10 + DAT_8c07475c + -0x168);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c074760),fVar11);
      }
      else {
        dVar13 = *(double *)(ar4 + DAT_8c074760);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 - dVar13,0);
      }
      a6 = (double *)(ar4 + DAT_8c074754);
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)a6,fVar11);
      }
      else {
        dVar13 = *a6;
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 * dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + DAT_8c074764 + -0x168) = fVar11;
        fVar11 = *(float *)(puVar10 + DAT_8c074768 + -0x168);
      }
      else {
        *(undefined8 *)(puVar10 + DAT_8c074764 + -0x168) = in_xd0;
        in_xd0 = *(undefined8 *)(puVar10 + DAT_8c074768 + -0x168);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07476c),fVar11);
      }
      else {
        dVar13 = *(double *)(ar4 + DAT_8c07476c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 - dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c074754),fVar11);
      }
      else {
        dVar13 = *(double *)(ar4 + DAT_8c074754);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar13 * dVar13,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar10 + DAT_8c074770 + -0x168) = fVar11;
      }
      else {
        *(undefined8 *)(puVar10 + DAT_8c074770 + -0x168) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c023d8c_8c074748)
                (ar4 + DAT_8c074750,puVar10 + DAT_8c074744 + -0x168,a6,DAT_8c074754);
      a7 = (undefined4 *)(puVar10 + DAT_8c074758 + -0x168);
      uVar5 = (*(code *)PTR_FUN_8c074774)(ar4,ar6,ar5,a7);
      *(undefined4 *)(puVar10 + -0xfc) = uVar5;
      a5_00 = *(undefined4 *)(puVar10 + -0xfc);
      if (*(int *)(ar4 + 0x44) == 0) {
        (*(code *)PTR_FUN_8c07477c)(ar4,ar6,ar5,a7);
      }
      uVar5 = (*(code *)PTR_FUN_8c074780)(ar4 + DAT_8c074730,0,ar5,a7);
      *(undefined4 *)(puVar10 + -0x100) = uVar5;
      puVar7 = ar5;
      if (0 < *(int *)(puVar10 + -0x100)) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c074784,fVar11);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c074784._4_4_,(undefined4)DAT_8c074784);
        }
        if (in_FPSCR_PR == '\0') {
          bVar15 = SUB84(in_dr14,0) < (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          bVar15 = in_dr14 < dVar13;
        }
        if (bVar15) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 0x40) = 5;
          *(int *)(puVar10 + -0x158) = ar4;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = (double)CONCAT44(DAT_8c074784._4_4_,
                                      *(undefined4 *)(*(int *)(puVar10 + -0x158) + 0x48));
          }
          else {
            in_xd0 = *(undefined8 *)(*(int *)(puVar10 + -0x158) + 0x48);
            dVar13 = (double)CONCAT44(uRam8c07478c,DAT_8c074784._4_4_);
          }
          if (in_FPSCR_PR == '\0') {
            dVar13 = (double)(ulonglong)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20))
            ;
          }
          else {
            dVar13 = dVar13 + dVar13;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(*(int *)(puVar10 + -0x158) + 0x48) = SUB84(dVar13,0);
          }
          else {
            *(undefined8 *)(*(int *)(puVar10 + -0x158) + 0x48) = in_xd0;
          }
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
        }
      }
      break;
    case 0xd:
      (*(code *)PTR_FUN_8c07486c)(ar4,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x104) = (int)((ulonglong)in_dr0 >> 0x20);
        dVar13 = (double)CONCAT44(*(undefined4 *)(puVar10 + -0x104),SUB84(in_dr14,0));
        dVar14 = (double)CONCAT44(DAT_8c074870,SUB84(in_dr0,0));
      }
      else {
        *(double *)(puVar10 + -0x104) = in_dr0;
        dVar13 = *(double *)(puVar10 + -0x104);
        dVar14 = (double)CONCAT44(DAT_8c074874,DAT_8c074870);
      }
      if (in_FPSCR_PR == '\0') {
        dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                                  (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar13,0));
      }
      else {
        dVar13 = dVar13 / dVar14;
      }
      (*(code *)PTR_FUN_8c074878)(DAT_8c074874 + ar4,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x108) = (int)((ulonglong)dVar14 >> 0x20);
      }
      else {
        *(double *)(puVar10 + -0x108) = dVar14;
      }
      (*(code *)PTR_FUN_8c074878)(DAT_8c074874 + ar4,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x10c) = (int)((ulonglong)dVar14 >> 0x20);
        dVar14 = (double)CONCAT44(*(undefined4 *)(puVar10 + -0x10c),
                                  *(undefined4 *)(puVar10 + -0x108));
      }
      else {
        *(double *)(puVar10 + -0x10c) = dVar14;
        in_xd0 = *(undefined8 *)(puVar10 + -0x108);
        dVar14 = *(double *)(puVar10 + -0x10c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = (float)((ulonglong)dVar14 >> 0x20);
        dVar13 = (double)CONCAT44(fVar11,SUB84(dVar14,0) * fVar11 *
                                         (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        dVar13 = dVar14 * dVar14 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + DAT_8c07487c + -0x168) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(puVar10 + DAT_8c07487c + -0x168) = in_xd0;
      }
      (*(code *)PTR_FUN_8c074884)(ar4,ar6,ar5,puVar10 + DAT_8c074880 + -0x168);
      a7 = (undefined4 *)0x1;
      *(undefined4 *)(ar4 + 0x40) = 1;
      puVar6 = DAT_8c074874 + ar4;
      puVar7 = DAT_8c074874;
      uVar5 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c074888)(puVar6,puVar6,DAT_8c074874,1);
      *(undefined4 *)(puVar10 + -0x110) = uVar5;
      if (*(int *)(puVar10 + -0x110) == 1) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar11;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar5 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074890)(DAT_8c074874 + ar4,0,0xffffffff,0);
        a7 = (undefined4 *)(DAT_8c074874 + ar4);
        puVar7 = PTR_FUN_8c074894;
        (*(code *)PTR_FUN_8c074894)(a7,uVar5,PTR_FUN_8c074894,a7);
        a5_00 = 0;
      }
      else {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c0748d4)(ar4 + DAT_8c0748d0,puVar6,puVar7,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar10 + -0x114) = (int)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)(ulonglong)*(uint *)(puVar10 + -0x114);
        }
        else {
          *(double *)(puVar10 + -0x114) = dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c0748d8),SUB84(dVar13,0));
        }
        else {
          uVar12 = *(undefined8 *)(ar4 + DAT_8c0748d8);
        }
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar12 >> 0x20) <= (float)uVar12) {
          (*(code *)PTR_FUN_8c0748dc)(ar4 + DAT_8c0748d0,0xffffffff,puVar7,a7);
        }
      }
      break;
    case 0xe:
      (*(code *)PTR_FUN_8c0749c0)(ar4,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x118) = (int)((ulonglong)in_dr0 >> 0x20);
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                   *(undefined4 *)(puVar10 + -0x118));
        dVar13 = (double)CONCAT44(DAT_8c0749c4,SUB84(in_dr0,0));
      }
      else {
        *(double *)(puVar10 + -0x118) = in_dr0;
        dVar13 = (double)CONCAT44(DAT_8c0749c8,DAT_8c0749c4);
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),
                                  SUB84(in_dr12,0) / (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        dVar14 = in_dr12 / dVar13;
      }
      (*(code *)PTR_FUN_8c0749cc)(ar4 + DAT_8c0749c8,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x11c) = (int)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)(puVar10 + -0x11c) = dVar13;
      }
      (*(code *)PTR_FUN_8c0749cc)(ar4 + DAT_8c0749c8,a5,puVar7,a7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + -0x120) = (int)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(*(undefined4 *)(puVar10 + -0x120),
                                  *(undefined4 *)(puVar10 + -0x11c));
      }
      else {
        *(double *)(puVar10 + -0x120) = dVar13;
        in_xd0 = *(undefined8 *)(puVar10 + -0x11c);
        dVar13 = *(double *)(puVar10 + -0x120);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = SUB84(dVar13,0) * (float)((ulonglong)dVar13 >> 0x20) * SUB84(dVar14,0);
      }
      else {
        fVar11 = SUB84(dVar13 * dVar13 * dVar14,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar13 = (double)CONCAT44(DAT_8c0749d0,fVar11);
      }
      else {
        dVar13 = (double)CONCAT44(DAT_8c0749d4,DAT_8c0749d0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar11 = (float)((ulonglong)dVar13 >> 0x20);
        dVar13 = (double)CONCAT44(fVar11,SUB84(dVar13,0) * fVar11);
      }
      else {
        dVar13 = dVar13 * dVar13;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar10 + DAT_8c0749d4 + -0x168) = SUB84(dVar13,0);
      }
      else {
        *(undefined8 *)(puVar10 + DAT_8c0749d4 + -0x168) = in_xd0;
      }
      a7 = (undefined4 *)(puVar10 + DAT_8c0749d8 + -0x168);
      (*(code *)PTR_FUN_8c0749dc)(ar4,ar6,ar5,a7);
      *(undefined4 *)(ar4 + 0x40) = 1;
      uVar5 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0749e0)(ar4 + DAT_8c0749c8,ar6,ar5,a7);
      *(undefined4 *)(puVar10 + -0x124) = uVar5;
      if (*(int *)(puVar10 + -0x124) == 1) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar13 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar13,0));
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar13 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20);
        }
        else {
          fVar11 = SUB84(dVar13 / dVar13,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar11;
        }
        else {
          *(undefined8 *)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        a7 = (undefined4 *)0x0;
        puVar7 = (undefined *)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0749e4)(ar4 + DAT_8c0749c8,0,0xffffffff,0);
        (*(code *)PTR_FUN_8c0749e8)(ar4 + DAT_8c0749c8,PTR_FUN_8c0749e8,puVar7,a7);
        a5_00 = 0;
      }
      else {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c074a2c)(ar4 + DAT_8c074a28,ar6,ar5,a7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar10 + -0x128) = (int)((ulonglong)dVar13 >> 0x20);
          dVar13 = (double)(ulonglong)*(uint *)(puVar10 + -0x128);
        }
        else {
          *(double *)(puVar10 + -0x128) = dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(ar4 + DAT_8c074a30),SUB84(dVar13,0));
        }
        else {
          uVar12 = *(undefined8 *)(ar4 + DAT_8c074a30);
        }
        puVar7 = ar5;
        if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar12 >> 0x20) <= (float)uVar12) {
          (*(code *)PTR_FUN_8c074a34)(ar4 + DAT_8c074a28,0xffffffff,ar5,a7);
          puVar7 = ar5;
        }
      }
      break;
    case 0xf:
      *(undefined4 *)(puVar10 + -0x15c) = *(undefined4 *)(DAT_8c074ae8 + ar4);
      a7 = (undefined4 *)PTR_FUN_8c074af8;
      (*(code *)PTR_FUN_8c074af8)(ar4,a5,puVar7,PTR_FUN_8c074af8);
      puVar7 = (undefined *)0x40;
      *(undefined4 *)(ar4 + 0x40) = 1;
      uVar5 = (*(code *)PTR_FUN_8c074b00)(ar4 + DAT_8c074afc,0,0x40,a7);
      *(undefined4 *)(puVar10 + -0x134) = uVar5;
      if (0 < *(int *)(puVar10 + -0x134)) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        a5_00 = 0;
      }
    }
    break;
  case 3:
    uVar5 = (*(code *)PTR_FUN_8c074b44)(ar4,ar6,ar5,a7);
    *(undefined4 *)(puVar10 + -0x138) = uVar5;
    a5_00 = *(undefined4 *)(puVar10 + -0x138);
    uVar5 = (*(code *)PTR_FUN_8c074b48)(ar4,ar6,ar5,a7);
    *(undefined4 *)(puVar10 + -0x13c) = uVar5;
    puVar7 = ar5;
    switch(*(undefined4 *)(puVar10 + -0x13c)) {
    case 0:
      iVar2 = ar4 + DAT_8c074be0;
      puVar7 = PTR_CAnimBody_AdvanceFrame_wrapper_8c074be4;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c074be4)
                (iVar2,PTR_CAnimBody_AdvanceFrame_wrapper_8c074be4,iVar2,a7);
      (*(code *)PTR_FUN_8c074bec)(ar4,puVar7,iVar2,a7);
      puVar7 = (undefined *)0x64;
      uVar5 = (*(code *)PTR_rand_range_8c074bf0)(ar4,0,100,a7);
      *(undefined4 *)(puVar10 + -0x140) = uVar5;
      a7 = *(undefined4 **)(puVar10 + -0x140);
      if ((int)a7 < 10) {
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
    case 0x12:
      (*(code *)PTR_FUN_8c074c10)(ar4 + DAT_8c074c0c,0,ar5,a7);
      puVar7 = ar5;
    }
    break;
  case 4:
    a7 = (undefined4 *)PTR_FUN_8c074c54;
    uVar5 = (*(code *)PTR_FUN_8c074c54)(ar4,ar6,ar5,PTR_FUN_8c074c54);
    *(undefined4 *)(puVar10 + -0x144) = uVar5;
    a5_00 = *(undefined4 *)(puVar10 + -0x144);
    uVar5 = (*(code *)PTR_get_field_1c_026dd8_8c074c5c)(ar4 + DAT_8c074c58,a5_00,ar5,a7);
    *(undefined4 *)(puVar10 + -0x148) = uVar5;
    if (*(int *)(puVar10 + -0x148) == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c074cf0)
                (ar4 + DAT_8c074cec,PTR_CAnimBody_AdvanceFrame_wrapper_8c074cf0,ar5,a7);
      *(undefined4 *)(puVar10 + -0x160) = *(undefined4 *)(DAT_8c074cf4 + ar4);
      puVar7 = *(undefined **)(puVar10 + -0x160);
      (*(code *)PTR_FUN_8c074cfc)
                (ar4,((int)puVar7 * 2 + *(int *)(puVar10 + -0x160)) * 8 + DAT_8c074cf8,puVar7,a7);
    }
    else {
      (*(code *)PTR_FUN_8c074c60)(ar4 + DAT_8c074c58,0,ar5,a7);
      puVar7 = ar5;
    }
  }
  *(undefined4 *)(puVar10 + DAT_8c074d00 + -0x168) = a5_00;
  (*(code *)PTR_object_dtor_delete_8c074d04)(puVar10 + DAT_8c074cf4 + -0x168,0xffffffff,puVar7,a7);
  uVar5 = 0xffffffff;
  a4 = puVar10 + DAT_8c074d08 + -0x168;
  (*(code *)PTR_object_dtor_delete_8c074d04)(a4,0xffffffff,a4,0xffffffff);
  (*(code *)PTR_Vec3_dtor_8c074d10)(puVar10 + DAT_8c074d0c + -0x168,0xffffffff,a4,uVar5);
  return *(undefined4 *)(puVar10 + DAT_8c074d00 + -0x168);
}



/* FUN_8c074d14 @ 8c074d14 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c074d14(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c074d1c @ 8c074d1c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c074d1c(int ar4,undefined4 ar5,undefined4 ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *a5;
  undefined4 uVar5;
  undefined4 a6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar6;
  undefined4 unaff_r13;
  int iVar7;
  undefined4 unaff_r14;
  undefined1 *puVar8;
  float fVar9;
  undefined *puVar10;
  double in_dr0;
  double dVar11;
  undefined *puVar12;
  undefined8 in_dr4;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd4;
  double in_xd14;
  bool bVar13;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_4;
  }
  else {
    puVar8 = auStack_8;
  }
  *(undefined4 *)(puVar8 + -4) = unaff_r14;
  *(undefined4 *)(puVar8 + -8) = unaff_r13;
  *(undefined4 *)(puVar8 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar8 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar8 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar8 + -0x18) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0xf8) = (int)((ulonglong)in_dr4 >> 0x20);
    *(int *)(puVar8 + -0xf4) = (int)in_dr4;
  }
  else {
    *(undefined8 *)(puVar8 + -0xf8) = in_dr4;
    *(undefined8 *)(puVar8 + -0xf4) = in_xd4;
  }
  a6 = 1;
  uVar6 = 1;
  iVar7 = -1;
  *(undefined1 **)(puVar8 + -0xfc) = puVar8 + DAT_8c074e14 + -0xf8;
  uVar1 = ar5;
  (*(code *)PTR_Vec3_sub_8c074e18)(ar6,ar5,1,ar7);
  uVar1 = (*(code *)PTR_Vec3_length_8c074e1c)(puVar8 + DAT_8c074e14 + -0xf8,uVar1,a6,ar7);
  *(undefined4 *)(puVar8 + -0x84) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c074e24)
            (puVar8 + DAT_8c074e20 + -0xf8,*(undefined4 *)(puVar8 + -0x84),a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c074e28)(puVar8 + DAT_8c074e14 + -0xf8,0xffffffff,a6,ar7);
  *(undefined1 **)(puVar8 + -0xfc) = puVar8 + DAT_8c074e2c + -0xf8;
  (*(code *)PTR_FUN_8c074e30)(ar4 + 0x14,uVar1,a6,ar7);
  *(undefined1 **)(puVar8 + -0xfc) = puVar8 + DAT_8c074e34 + -0xf8;
  (*(code *)PTR_FUN_8c074e30)(puVar8 + DAT_8c074e38 + -0xfc,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c074e3c)(puVar8 + DAT_8c074e2c + -0xf8,puVar8 + DAT_8c074e34 + -0xf8,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar8 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar8 + -0x88);
  }
  else {
    *(double *)(puVar8 + -0x88) = in_dr0;
    in_xd14 = *(double *)(puVar8 + -0x88);
  }
  (*(code *)PTR_Vec3_dtor_8c074e28)(puVar8 + DAT_8c074e34 + -0xf8,0xffffffff,a6,ar7);
  a5 = (undefined1 *)0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c074e28)(puVar8 + DAT_8c074e2c + -0xf8,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c074e44)(puVar8 + DAT_8c074e40 + -0xf8,a5,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c074e44)(puVar8 + DAT_8c074e48 + -0xf8,a5,a6,ar7);
  switch(*(undefined4 *)(ar4 + 0x40)) {
  case 0:
  case 5:
    (*(code *)PTR_FUN_8c074eb8)(ar4,a5,a6,ar7);
    uVar5 = SUB84(in_dr0,0);
    uVar1 = ar5;
    a6 = ar6;
    (*(code *)PTR_FUN_8c074ebc)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c074ec4)(ar4 + DAT_8c074ec0,uVar1,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((undefined4)DAT_8c074ec8,uVar5);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c074ec8._4_4_,(undefined4)DAT_8c074ec8);
    }
    if (in_FPSCR_PR == '\0') {
      bVar13 = in_fr15 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar13 = (double)CONCAT44(in_fr14,in_fr15) < in_dr0;
    }
    if (bVar13) {
      a5 = (undefined1 *)0x0;
      *(undefined4 *)(DAT_8c074ef8 + ar4) = 0;
    }
    else {
      a5 = puVar8 + DAT_8c074ec8._4_4_ + -0xf8;
      uVar1 = (*(code *)PTR_FUN_8c074ed0)(ar4 + 0x14,a5,a6,ar7);
      *(undefined4 *)(puVar8 + -0x8c) = uVar1;
      *(undefined4 *)(DAT_8c074ed4 + ar4) = *(undefined4 *)(puVar8 + -0x8c);
    }
    iVar2 = *(int *)(DAT_8c074ef8 + ar4);
    if (iVar2 == 0) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = (double)CONCAT44(*(undefined4 *)(DAT_8c0750ec + 8),*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x24);
        in_dr0 = *(double *)(DAT_8c0750ec + 8);
      }
      if (in_FPSCR_PR == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
        uVar1 = (*(code *)PTR_rand_range_8c07513c)(ar4,0,100,ar7);
        *(undefined4 *)(puVar8 + -0xb4) = uVar1;
        if (*(int *)(puVar8 + -0xb4) < 0x1f) {
          ar7 = (undefined1 *)0x0;
          a6 = 0xffffffff;
          a5 = (undefined1 *)0x1;
          uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0751b0)
                            (ar4 + DAT_8c0751a8._4_4_,1,0xffffffff,0);
          *(undefined4 *)(puVar8 + -0xbc) = uVar1;
          iVar7 = *(int *)(puVar8 + -0xbc);
        }
        else {
          ar7 = (undefined1 *)0x0;
          a6 = 0xffffffff;
          a5 = (undefined1 *)0xd;
          uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c075148)
                            (ar4 + DAT_8c075140._4_4_,0xd,0xffffffff,0);
          *(undefined4 *)(puVar8 + -0xb8) = uVar1;
          iVar7 = *(int *)(puVar8 + -0xb8);
        }
      }
      else {
        ar7 = (undefined1 *)0x0;
        a6 = 0xffffffff;
        a5 = (undefined1 *)0x4;
        uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c0750f8)
                          (ar4 + DAT_8c0750f4,4,0xffffffff,0);
        *(undefined4 *)(puVar8 + -0xb0) = uVar1;
        iVar7 = *(int *)(puVar8 + -0xb0);
      }
    }
    else if (iVar2 == 3) {
      ar7 = (undefined1 *)0x0;
      a6 = 0xffffffff;
      uVar5 = 9;
      uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c075090)
                        (ar4 + DAT_8c075088._4_4_,9,0xffffffff,0);
      *(undefined4 *)(puVar8 + -0xa0) = uVar1;
      iVar7 = *(int *)(puVar8 + -0xa0);
      uVar1 = (*(code *)PTR_FUN_8c075094)(ar4,uVar5,a6,ar7);
      *(undefined4 *)(puVar8 + -0xa4) = uVar1;
      a5 = *(undefined1 **)(puVar8 + -0xa4);
      uVar1 = (*(code *)PTR_FUN_8c075098)(ar4 + DAT_8c075088._4_4_,a5,a6,ar7);
      *(undefined4 *)(puVar8 + -0xa8) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c07509c)(*(undefined4 *)(puVar8 + -0xa8),a5,a6,ar7);
      *(undefined4 *)(puVar8 + -0xac) = uVar1;
      puVar4 = (undefined4 *)(ar4 + DAT_8c0750a0);
      puVar3 = *(undefined4 **)(puVar8 + -0xac);
      uVar1 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar1;
      puVar4[2] = puVar3[2];
      *(int *)(puVar8 + -0xf0) = *(int *)(DAT_8c0750a4 + ar4) + -6;
      *(undefined **)(DAT_8c0750a0 + ar4) =
           PTR_DAT_8c0750a8 + (*(int *)(puVar8 + -0xf0) * 2 + *(int *)(puVar8 + -0xf0)) * 8;
      if (in_FPSCR_SZ == '\0') {
        in_xd14 = (double)CONCAT44(in_fr15,_DAT_8c0750b0);
      }
      else {
        in_xd0 = CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c0750b4,_DAT_8c0750b0);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                  SUB84(in_xd14,0));
      }
      else {
        in_dr0 = in_xd14 / in_xd14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c0750ac) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c0750ac) = in_dr0;
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0750b4)(ar4 + DAT_8c075088._4_4_,a5,a6,ar7);
    }
    else if (iVar2 == 4) {
      ar7 = (undefined1 *)0x0;
      a6 = 0xffffffff;
      uVar5 = 10;
      uVar1 = (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c074fb4)
                        (ar4 + DAT_8c074fac._4_4_,10,0xffffffff,0);
      *(undefined4 *)(puVar8 + -0x90) = uVar1;
      iVar7 = *(int *)(puVar8 + -0x90);
      uVar1 = (*(code *)PTR_FUN_8c074fb8)(ar4,uVar5,a6,ar7);
      *(undefined4 *)(puVar8 + -0x94) = uVar1;
      a5 = *(undefined1 **)(puVar8 + -0x94);
      uVar1 = (*(code *)PTR_FUN_8c074fbc)(ar4 + DAT_8c074fac._4_4_,a5,a6,ar7);
      *(undefined4 *)(puVar8 + -0x98) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c074fc0)(*(undefined4 *)(puVar8 + -0x98),a5,a6,ar7);
      *(undefined4 *)(puVar8 + -0x9c) = uVar1;
      puVar4 = (undefined4 *)(ar4 + DAT_8c074fc4);
      puVar3 = *(undefined4 **)(puVar8 + -0x9c);
      uVar1 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar1;
      puVar4[2] = puVar3[2];
      *(int *)(puVar8 + -0xec) = *(int *)(DAT_8c074fc8 + ar4) + -6;
      *(undefined **)(DAT_8c074fc4 + ar4) =
           PTR_DAT_8c074fcc + (*(int *)(puVar8 + -0xec) * 2 + *(int *)(puVar8 + -0xec)) * 8;
      if (in_FPSCR_SZ == '\0') {
        in_xd14 = (double)CONCAT44(in_fr15,_DAT_8c074fd4);
      }
      else {
        in_xd0 = CONCAT44(PTR_s_CAnimBody_SetFrame_033e6e_8c074fd8,_DAT_8c074fd4);
      }
      if (in_FPSCR_PR == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_xd14 >> 0x20) / SUB84(in_xd14,0),
                                  SUB84(in_xd14,0));
      }
      else {
        in_dr0 = in_xd14 / in_xd14;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c074fd0) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + DAT_8c074fd0) = in_dr0;
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c074fd8)(ar4 + DAT_8c074fac._4_4_,a5,a6,ar7);
    }
    if (iVar7 != 6) {
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c0751b4)(ar4 + DAT_8c0751a8._4_4_,a5,a6,ar7);
    }
  case 1:
    uVar1 = (*(code *)PTR_FUN_8c0751b8)(ar4,a5,a6,ar7);
    *(undefined4 *)(puVar8 + -0xc0) = uVar1;
    switch(*(undefined4 *)(puVar8 + -0xc0)) {
    case 1:
    case 4:
    case 0xd:
      *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c074e10_caseD_3:
      uVar1 = (*(code *)PTR_FUN_8c07537c)(ar4,ar6,ar5,ar7);
      *(undefined4 *)(puVar8 + -0xd0) = uVar1;
      uVar6 = *(undefined4 *)(puVar8 + -0xd0);
      uVar1 = (*(code *)PTR_FUN_8c075380)(ar4,ar6,ar5,ar7);
      *(undefined4 *)(puVar8 + -0xd4) = uVar1;
      a6 = ar5;
      switch(*(undefined4 *)(puVar8 + -0xd4)) {
      case 0:
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c075404)(ar4 + DAT_8c075400,ar6,ar5,ar7);
        (*(code *)PTR_FUN_8c07540c)(ar4,ar6,ar5,ar7);
        a6 = 100;
        uVar1 = (*(code *)PTR_rand_range_8c075410)(ar4,0,100,ar7);
        *(undefined4 *)(puVar8 + -0xd8) = uVar1;
        if (*(int *)(puVar8 + -0xd8) < 5) {
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        break;
      case 1:
        (*(code *)PTR_CAnimBody_GetCurFrame_8c07548c)(ar4 + DAT_8c075488,ar6,ar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0xdc) = (int)((ulonglong)in_dr0 >> 0x20);
          puVar10 = *(undefined **)(puVar8 + -0xdc);
          puVar12 = DAT_8c075490;
        }
        else {
          *(double *)(puVar8 + -0xdc) = in_dr0;
          puVar10 = DAT_8c075490;
          puVar12 = PTR_CAnimBody_AdvanceFrame_wrapper_8c075494;
        }
        if (in_FPSCR_PR != '\0' || (float)puVar12 <= (float)puVar10) {
          (*(code *)PTR_FUN_8c0754c4)(ar4 + DAT_8c0754c0,0,ar5,ar7);
          (*(code *)PTR_FUN_8c0754cc)(ar4,PTR_DAT_8c0754c8,ar5,ar7);
          a6 = ar5;
        }
        else {
          (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c075494)
                    (ar4 + DAT_8c075488,ar4 + DAT_8c075488,ar5,ar7);
          a6 = ar5;
        }
        break;
      case 2:
      case 3:
      case 9:
      case 10:
        (*(code *)PTR_FUN_8c07542c)(ar4 + DAT_8c075428,0,ar5,ar7);
        a6 = ar5;
        break;
      case 4:
        (*(code *)PTR_FUN_8c075454)(ar4 + DAT_8c075450,ar6,ar5,ar7);
        a6 = ar5;
        break;
      case 0xd:
        (*(code *)PTR_FUN_8c075508)(ar4,ar6,ar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar8 + -0xe0) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(puVar8 + -0xe0) = in_dr0;
        }
        (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c075518)(ar4 + DAT_8c075514,ar6,ar5,ar7);
        a6 = ar5;
      }
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      (*(code *)PTR_CAnimBody_GetCurFrame_8c0752ec)(ar4 + DAT_8c0752e8,a5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar8 + -0xc4) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(puVar8 + -0xc4) = in_dr0;
      }
      *(undefined1 **)(puVar8 + -0xfc) = puVar8 + -0x7c;
      (*(code *)PTR_FUN_8c0752f4)
                (ar4 + DAT_8c0752e8,*(undefined4 *)(*(int *)(DAT_8c0752f0 + ar4) + 4),a6,ar7);
      uVar1 = SUB84(in_dr0,0);
      (*(code *)PTR_vec3_copy_8c023d8c_8c0752fc)
                (puVar8 + DAT_8c0752f8 + -0xf8,puVar8 + -0x7c,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c075300)(puVar8 + -0x7c,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(puVar8 + DAT_8c0752f8 + -0xf8);
      }
      else {
        in_xd0 = *(undefined8 *)(puVar8 + DAT_8c0752f8 + -0xf8);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075304),uVar1);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075304);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075308),fVar9);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075308);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar8 + DAT_8c07530c + -0xf8) = fVar9;
        fVar9 = *(float *)(puVar8 + DAT_8c075310 + -0xf8);
      }
      else {
        *(undefined8 *)(puVar8 + DAT_8c07530c + -0xf8) = in_xd0;
        in_xd0 = *(undefined8 *)(puVar8 + DAT_8c075310 + -0xf8);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075314),fVar9);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075314);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075308),fVar9);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075308);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar8 + DAT_8c075318 + -0xf8) = fVar9;
        fVar9 = *(float *)(puVar8 + DAT_8c07531c + -0xf8);
      }
      else {
        *(undefined8 *)(puVar8 + DAT_8c075318 + -0xf8) = in_xd0;
        in_xd0 = *(undefined8 *)(puVar8 + DAT_8c07531c + -0xf8);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075320),fVar9);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075320);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 - dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075308),fVar9);
      }
      else {
        dVar11 = *(double *)(ar4 + DAT_8c075308);
      }
      if (in_FPSCR_PR == '\0') {
        fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar9 = SUB84(dVar11 * dVar11,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar8 + DAT_8c075324 + -0xf8) = fVar9;
      }
      else {
        *(undefined8 *)(puVar8 + DAT_8c075324 + -0xf8) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c023d8c_8c0752fc)
                (ar4 + DAT_8c075304,puVar8 + DAT_8c0752f8 + -0xf8,a6,ar7);
      ar7 = puVar8 + DAT_8c07530c + -0xf8;
      uVar1 = (*(code *)PTR_FUN_8c075328)(ar4,ar6,ar5,ar7);
      *(undefined4 *)(puVar8 + -200) = uVar1;
      uVar6 = *(undefined4 *)(puVar8 + -200);
      uVar1 = (*(code *)PTR_FUN_8c07532c)(ar4 + DAT_8c0752e8,0,ar5,ar7);
      *(undefined4 *)(puVar8 + -0xcc) = uVar1;
      a6 = ar5;
      if (0 < *(int *)(puVar8 + -0xcc)) {
        if (in_FPSCR_SZ == '\0') {
          dVar11 = (double)CONCAT44(DAT_8c075330,fVar9);
        }
        else {
          dVar11 = (double)CONCAT44(uRam8c075334,DAT_8c075330);
        }
        if (in_FPSCR_PR == '\0') {
          bVar13 = in_fr15 < (float)((ulonglong)dVar11 >> 0x20);
        }
        else {
          bVar13 = (double)CONCAT44(in_fr14,in_fr15) < dVar11;
        }
        if (bVar13) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar11,0));
        }
      }
    }
    break;
  case 3:
    goto switchD_8c074e10_caseD_3;
  case 4:
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c07554c)(ar4 + DAT_8c075548,a5,a6,ar7);
    *(undefined4 *)(puVar8 + -0xe4) = uVar1;
    if (*(int *)(puVar8 + -0xe4) == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0755c4)
                (ar4 + DAT_8c0755c0,PTR_CAnimBody_AdvanceFrame_wrapper_8c0755c4,a6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c075550)(ar4 + DAT_8c075548,0,a6,ar7);
    }
    uVar1 = (*(code *)PTR_FUN_8c0755c8)(ar4,ar6,ar5,ar7);
    *(undefined4 *)(puVar8 + -0xe8) = uVar1;
    uVar6 = *(undefined4 *)(puVar8 + -0xe8);
    a6 = ar5;
  }
  *(undefined4 *)(puVar8 + -0x80) = uVar6;
  (*(code *)PTR_object_dtor_delete_8c0755d0)(puVar8 + DAT_8c0755cc + -0xf8,0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c0755d0)(puVar8 + DAT_8c0755d4 + -0xf8,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c0755dc)
            (puVar8 + DAT_8c0755d8 + -0xf8,0xffffffff,puVar8 + DAT_8c0755d8 + -0xf8,0xffffffff);
  return *(undefined4 *)(puVar8 + -0x80);
}



/* FUN_8c0755e0 @ 8c0755e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c0755e0(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int a5;
  undefined4 *a6;
  undefined4 unaff_r11;
  undefined4 uVar6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  float fVar8;
  double in_dr0;
  double dVar9;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar7 = auStack_4;
  }
  else {
    puVar7 = auStack_8;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = 1;
  *(undefined4 *)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar7 + -0x14) = in_PR;
  *(undefined4 *)(puVar7 + -0x150) = ar7;
  uVar6 = 1;
  *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c0756d0 + -0x150;
  puVar3 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_sub_8c0756d4)(ar6,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_Vec3_length_8c0756d8)(puVar7 + DAT_8c0756d0 + -0x150,puVar3,a6,ar7);
  *(undefined4 *)(puVar7 + -0xf0) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c0756e0)
            (puVar7 + DAT_8c0756dc + -0x150,*(undefined4 *)(puVar7 + -0xf0),a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0756e4)(puVar7 + DAT_8c0756d0 + -0x150,0xffffffff,a6,ar7);
  *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c0756e8 + -0x150;
  (*(code *)PTR_FUN_8c0756ec)(ar4 + 0x14,uVar1,a6,ar7);
  *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c0756f0 + -0x150;
  (*(code *)PTR_FUN_8c0756ec)(puVar7 + DAT_8c0756f4 + -0x154,uVar1,a6,ar7);
  (*(code *)PTR_FUN_8c0756f8)(puVar7 + DAT_8c0756e8 + -0x150,puVar7 + DAT_8c0756f0 + -0x150,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar7 + -0xf4) = (int)((ulonglong)in_dr0 >> 0x20);
    in_fr15 = *(float *)(puVar7 + -0xf4);
  }
  else {
    *(double *)(puVar7 + -0xf4) = in_dr0;
  }
  (*(code *)PTR_Vec3_dtor_8c0756e4)(puVar7 + DAT_8c0756f0 + -0x150,0xffffffff,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c0756e4)(puVar7 + DAT_8c0756e8 + -0x150,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c075700)(puVar7 + DAT_8c0756fc + -0x150,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c075708)(puVar7 + DAT_8c075704 + -0x150,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c075708)(puVar7 + DAT_8c07570c + -0x150,uVar1,a6,ar7);
  iVar5 = *(int *)(ar4 + 0x40);
  if ((5 < iVar5) || (iVar5 < 0)) goto switchD_8c0756cc_caseD_2;
  a5 = iVar5 * 4;
  switch(iVar5) {
  default:
    (*(code *)PTR_FUN_8c07577c)(ar4,a5,a6,ar7);
    uVar1 = SUB84(in_dr0,0);
    (*(code *)PTR_FUN_8c075780)(ar4,a5,a6,ar7);
    puVar3 = ar5;
    a6 = ar6;
    (*(code *)PTR_FUN_8c075788)(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((undefined4)DAT_8c07578c,uVar1);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c07578c._4_4_,(undefined4)DAT_8c07578c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = in_fr15 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar10 = (double)CONCAT44(in_fr14,in_fr15) < in_dr0;
    }
    if (bVar10) {
      *(undefined4 *)(DAT_8c0757bc + ar4) = 0;
    }
    else {
      puVar3 = (undefined4 *)(puVar7 + DAT_8c07578c._4_4_ + -0x150);
      uVar1 = (*(code *)PTR_FUN_8c075794)(ar4 + 0x14,puVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0xf8) = uVar1;
      *(undefined4 *)(DAT_8c075798 + ar4) = *(undefined4 *)(puVar7 + -0xf8);
    }
    iVar5 = *(int *)(DAT_8c0757bc + ar4);
    if (iVar5 == 0) {
      *(undefined4 *)(DAT_8c075828 + ar4) = 0x14;
      puVar3 = *(undefined4 **)(DAT_8c075828 + ar4);
      a6 = DAT_8c07582c;
      uVar1 = (*(code *)PTR_FUN_8c075830)(ar4 + (int)DAT_8c07582c,puVar3,DAT_8c07582c,ar7);
      *(undefined4 *)(puVar7 + -0xfc) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c075834)(*(undefined4 *)(puVar7 + -0xfc),puVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0x100) = uVar1;
      puVar2 = (undefined4 *)(ar4 + DAT_8c075838);
      puVar4 = *(undefined4 **)(puVar7 + -0x100);
      uVar1 = puVar4[1];
      *puVar2 = *puVar4;
      puVar2[1] = uVar1;
      puVar2[2] = puVar4[2];
      *(int *)(puVar7 + -0x140) = *(int *)(DAT_8c07583c + ar4) + -6;
      *(undefined **)(DAT_8c075838 + ar4) =
           PTR_DAT_8c075840 + (*(int *)(puVar7 + -0x140) * 2 + *(int *)(puVar7 + -0x140)) * 8;
    }
    else if (iVar5 == 3) {
      *(undefined4 *)(DAT_8c0758ac + ar4) = 0x19;
      uVar1 = (*(code *)PTR_FUN_8c0758b4)
                        (ar4 + DAT_8c0758b0,*(undefined4 *)(DAT_8c0758ac + ar4),a6,ar7);
      *(undefined4 *)(puVar7 + -0x104) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c0758b8)
                        (*(undefined4 *)(puVar7 + -0x104),PTR_deref_u32_8c0758b8,a6,ar7);
      *(undefined4 *)(puVar7 + -0x108) = uVar1;
      puVar3 = (undefined4 *)(ar4 + DAT_8c0758bc);
      puVar2 = *(undefined4 **)(puVar7 + -0x108);
      uVar1 = puVar2[1];
      *puVar3 = *puVar2;
      puVar3[1] = uVar1;
      puVar3[2] = puVar2[2];
      *(int *)(puVar7 + -0x144) = *(int *)(DAT_8c0758c0 + ar4) + -6;
      *(undefined **)(DAT_8c0758bc + ar4) =
           PTR_DAT_8c0758c4 + (*(int *)(puVar7 + -0x144) * 2 + *(int *)(puVar7 + -0x144)) * 8;
    }
    else if (iVar5 == 4) {
      *(undefined4 *)(DAT_8c075964 + ar4) = 0x1a;
      puVar3 = *(undefined4 **)(DAT_8c075964 + ar4);
      uVar1 = (*(code *)PTR_FUN_8c07596c)(ar4 + DAT_8c075968,puVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0x10c) = uVar1;
      uVar1 = (*(code *)PTR_deref_u32_8c075970)(*(undefined4 *)(puVar7 + -0x10c),puVar3,a6,ar7);
      *(undefined4 *)(puVar7 + -0x110) = uVar1;
      puVar4 = (undefined4 *)(ar4 + DAT_8c075974);
      puVar2 = *(undefined4 **)(puVar7 + -0x110);
      uVar1 = puVar2[1];
      *puVar4 = *puVar2;
      puVar4[1] = uVar1;
      puVar4[2] = puVar2[2];
      *(int *)(puVar7 + -0x148) = *(int *)(DAT_8c075978 + ar4) + -6;
      *(undefined **)(DAT_8c075974 + ar4) =
           PTR_DAT_8c07597c + (*(int *)(puVar7 + -0x148) * 2 + *(int *)(puVar7 + -0x148)) * 8;
    }
    (*(code *)PTR_vec3_clear_8c075984)(ar4 + DAT_8c075980,puVar3,a6,ar7);
    (*(code *)PTR_FUN_8c07598c)(ar4 + DAT_8c075988,puVar3,a6,ar7);
  case 1:
    a5 = *(int *)(DAT_8c075964 + ar4);
    uVar1 = (*(code *)PTR_FUN_8c075990)(ar4 + DAT_8c075968,a5,a6,ar7);
    *(undefined4 *)(puVar7 + -0x114) = uVar1;
    iVar5 = *(int *)(puVar7 + -0x114);
    if (iVar5 == 0) {
      *(int *)(puVar7 + -0x14c) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c0759c0,*(undefined4 *)(*(int *)(puVar7 + -0x14c) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar7 + -0x14c) + 0x28);
        dVar9 = (double)CONCAT44(uRam8c0759c4,DAT_8c0759c0);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar7 + -0x14c) + 0x28) = fVar8;
      }
      else {
        *(undefined8 *)(*(int *)(puVar7 + -0x14c) + 0x28) = in_xd0;
      }
    }
    else if (iVar5 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else if (iVar5 == 2) {
      *(undefined4 *)(ar4 + 0x40) = 3;
code_r0x8c0759c4:
      uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c0759f0)(ar4 + DAT_8c0759ec,a5,a6,ar7);
      *(undefined4 *)(puVar7 + -0x118) = uVar1;
      iVar5 = *(int *)(puVar7 + -0x118);
      if (iVar5 == 0x14) {
        uVar1 = (*(code *)PTR_FUN_8c075ad0)(ar4 + DAT_8c075acc,a5,a6,ar7);
        *(undefined4 *)(puVar7 + -0x11c) = uVar1;
        if (*(int *)(puVar7 + -0x11c) == 7) {
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = (double)CONCAT44((undefined4)DAT_8c075ad8,SUB84(in_dr0,0));
            *(undefined4 *)(ar4 + DAT_8c075ad4) = (undefined4)DAT_8c075ad8;
          }
          else {
            in_dr0 = (double)CONCAT44(DAT_8c075ad8._4_4_,(undefined4)DAT_8c075ad8);
            *(double *)(ar4 + DAT_8c075ad4) = in_dr0;
          }
        }
        *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c075ad8._4_4_ + -0x150;
        (*(code *)PTR_FUN_8c075ae0)(ar4 + 0x14,a5,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c075ae4)(ar4 + 0x14,puVar7 + DAT_8c075ad8._4_4_ + -0x150,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c075ae8)(puVar7 + DAT_8c075ad8._4_4_ + -0x150,0xffffffff,a6,ar7);
        (*(code *)PTR_FUN_8c075aec)(ar4,ar6,ar5,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c075af0)(ar4 + DAT_8c075acc,ar6,ar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x120) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(puVar7 + -0x120) = in_dr0;
        }
        *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c075af4 + -0x150;
        (*(code *)PTR_FUN_8c075af8)
                  (ar4 + DAT_8c075acc,**(undefined4 **)(DAT_8c075af4 + ar4),ar5,ar7);
        uVar1 = SUB84(in_dr0,0);
        (*(code *)PTR_Vec3_assign_8c075ae4)
                  (puVar7 + DAT_8c075afc + -0x150,puVar7 + DAT_8c075af4 + -0x150,ar5,ar7);
        (*(code *)PTR_Vec3_dtor_8c075ae8)(puVar7 + DAT_8c075af4 + -0x150,0xffffffff,ar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar1 = *(undefined4 *)(puVar7 + DAT_8c075b00 + -0x150);
        }
        else {
          in_xd0 = *(undefined8 *)(puVar7 + DAT_8c075b00 + -0x150);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075ad4),uVar1);
        }
        else {
          dVar9 = *(double *)(ar4 + DAT_8c075ad4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x28) = fVar8;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        (*(code *)PTR_Vec3_assign_8c075ae4)
                  (ar4 + DAT_8c075b04,puVar7 + DAT_8c075afc + -0x150,ar5,ar7);
        a6 = ar5;
      }
      else if ((iVar5 == 0x19) || (iVar5 == 0x1a)) {
        *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c075c30 + -0x150;
        (*(code *)PTR_FUN_8c075c34)(ar4 + 0x14,a5,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c075c38)(ar4 + 0x14,puVar7 + DAT_8c075c30 + -0x150,a6,ar7);
        uVar1 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c075c3c)(puVar7 + DAT_8c075c30 + -0x150,0xffffffff,a6,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c075c44)(ar4 + DAT_8c075c40,uVar1,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x124) = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          *(double *)(puVar7 + -0x124) = in_dr0;
        }
        *(undefined1 **)(puVar7 + -0x154) = puVar7 + DAT_8c075c48 + -0x150;
        (*(code *)PTR_FUN_8c075c50)
                  (ar4 + DAT_8c075c40,*(undefined4 *)(*(int *)(DAT_8c075c4c + ar4) + 4),a6,ar7);
        uVar1 = SUB84(in_dr0,0);
        (*(code *)PTR_vec3_copy_8c023d8c_8c075c58)
                  (puVar7 + DAT_8c075c54 + -0x150,puVar7 + DAT_8c075c48 + -0x150,a6,ar7);
        (*(code *)PTR_object_dtor_delete_8c075c5c)(puVar7 + DAT_8c075c48 + -0x150,0xffffffff,a6,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          uVar1 = *(undefined4 *)(puVar7 + DAT_8c075c60 + -0x150);
        }
        else {
          in_xd0 = *(undefined8 *)(puVar7 + DAT_8c075c60 + -0x150);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075c64),uVar1);
        }
        else {
          dVar9 = *(double *)(ar4 + DAT_8c075c64);
        }
        if (in_FPSCR_PR == '\0') {
          fVar8 = (float)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(fVar8,SUB84(dVar9,0) - fVar8);
        }
        else {
          dVar9 = dVar9 - dVar9;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + DAT_8c075c68 + -0x150) = SUB84(dVar9,0);
        }
        else {
          *(undefined8 *)(puVar7 + DAT_8c075c68 + -0x150) = in_xd0;
        }
        (*(code *)PTR_vec3_copy_8c023d8c_8c075c58)
                  (ar4 + DAT_8c075c70,puVar7 + DAT_8c075c6c + -0x150,a6,ar7);
        (*(code *)PTR_vec3_copy_8c02b5fc_8c075c78)
                  (puVar7 + DAT_8c075c74 + -0x150,puVar7 + DAT_8c075c6c + -0x150,a6,ar7);
        *(undefined1 **)(puVar7 + -0x154) = puVar7 + -0xd4;
        (*(code *)PTR_FUN_8c075c80)(ar4 + 0x14,puVar7 + DAT_8c075c7c + -0x154,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c075c38)(ar4 + 0x14,puVar7 + -0xd4,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c075c3c)(puVar7 + -0xd4,0xffffffff,a6,ar7);
        (*(code *)PTR_object_dtor_delete_8c075c5c)(puVar7 + DAT_8c075c74 + -0x150,0xffffffff,a6,ar7)
        ;
        uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c075c84)
                          (ar4 + DAT_8c075c40,DAT_8c075c40,a6,ar7);
        *(undefined4 *)(puVar7 + -0x128) = uVar1;
        if (*(int *)(puVar7 + -0x128) == 1) {
          (*(code *)PTR_FUN_8c075c88)(ar5,ar6,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + -300) = (int)((ulonglong)dVar9 >> 0x20);
            dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(puVar7 + -300));
          }
          else {
            *(double *)(puVar7 + -300) = dVar9;
            dVar9 = *(double *)(ar4 + 0x48);
          }
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar9 >> 0x20) < SUB84(dVar9,0)) {
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          else {
            *(undefined4 *)(ar4 + 0x40) = 0;
            uVar6 = 0;
          }
        }
        (*(code *)PTR_CAnimBody_GetCurFrame_8c075cd0)(ar4 + DAT_8c075ccc,DAT_8c075ccc,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x130) = (int)((ulonglong)dVar9 >> 0x20);
          dVar9 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x130),SUB84(dVar9,0));
        }
        else {
          *(double *)(puVar7 + -0x130) = dVar9;
          dVar9 = *(double *)(puVar7 + -0x130);
        }
        if (in_FPSCR_PR == '\0') {
          iVar5 = (int)(float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          iVar5 = (int)dVar9;
        }
        if (iVar5 == 0x10) {
          ar7 = *(undefined4 *)(puVar7 + -0x150);
          (*(code *)PTR_FUN_8c075cd4)(ar4,0x1c,ar5,ar7);
          a6 = ar5;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    break;
  case 2:
    break;
  case 3:
    goto code_r0x8c0759c4;
  case 4:
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c075d60)(ar4 + DAT_8c075d5c,a5,a6,ar7);
    *(undefined4 *)(puVar7 + -0x134) = uVar1;
    iVar5 = *(int *)(puVar7 + -0x134);
    if (((iVar5 != 0x14) && (iVar5 != 0x19)) && (iVar5 != 0x1a)) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(undefined4 *)(puVar7 + -0xe8) = 1;
      (*(code *)PTR_object_dtor_delete_8c075d68)(puVar7 + DAT_8c075d64 + -0x150,0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c075d68)(puVar7 + DAT_8c075d6c + -0x150,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c075d74)(puVar7 + DAT_8c075d70 + -0x150,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c075d74)(puVar7 + DAT_8c075d78 + -0x150,0xffffffff,a6,ar7);
      return *(undefined4 *)(puVar7 + -0xe8);
    }
    (*(code *)PTR_FUN_8c075dd4)(ar4,ar6,ar5,ar7);
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c075ddc)(ar4 + DAT_8c075dd8,ar6,ar5,ar7);
    *(undefined4 *)(puVar7 + -0x138) = uVar1;
    if (*(int *)(puVar7 + -0x138) == 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)in_dr0 & 0xffffffff;
      }
      ar7 = 0;
      a6 = (undefined4 *)0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c075de4)(ar4 + DAT_8c075dd8,0x13,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x40) = 0;
      uVar6 = 0;
    }
    else {
      (*(code *)PTR_CAnimBody_GetCurFrame_8c075ec0)(ar4 + DAT_8c075ebc,ar6,ar5,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar7 + -0x13c) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(puVar7 + -0x13c) = in_dr0;
      }
      *(undefined1 **)(puVar7 + -0x154) = puVar7 + -0xe4;
      (*(code *)PTR_FUN_8c075ec8)(ar4 + DAT_8c075ebc,**(undefined4 **)(DAT_8c075ec4 + ar4),ar5,ar7);
      uVar1 = SUB84(in_dr0,0);
      (*(code *)PTR_Vec3_assign_8c075ed0)(puVar7 + DAT_8c075ecc + -0x150,puVar7 + -0xe4,ar5,ar7);
      (*(code *)PTR_Vec3_dtor_8c075ed4)(puVar7 + -0xe4,0xffffffff,ar5,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar1 = *(undefined4 *)(puVar7 + DAT_8c075ed8 + -0x150);
      }
      else {
        in_xd0 = *(undefined8 *)(puVar7 + DAT_8c075ed8 + -0x150);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c075edc),uVar1);
      }
      else {
        dVar9 = *(double *)(ar4 + DAT_8c075edc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 - dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x28) = fVar8;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      (*(code *)PTR_Vec3_assign_8c075ed0)(ar4 + DAT_8c075ee0,puVar7 + DAT_8c075ecc + -0x150,ar5,ar7)
      ;
      *(undefined4 *)(ar4 + 0x40) = 4;
      a6 = ar5;
    }
  }
switchD_8c0756cc_caseD_2:
  *(undefined4 *)(puVar7 + -0xec) = uVar6;
  (*(code *)PTR_object_dtor_delete_8c075ee8)(puVar7 + DAT_8c075ee4 + -0x150,0xffffffff,a6,ar7);
  (*(code *)PTR_object_dtor_delete_8c075ee8)(puVar7 + DAT_8c075eec + -0x150,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c075ed4)(puVar7 + DAT_8c075ecc + -0x150,0xffffffff,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c075ed4)(puVar7 + DAT_8c075ef0 + -0x150,0xffffffff,a6,ar7);
  return *(undefined4 *)(puVar7 + -0xec);
}



/* FUN_8c075ef4 @ 8c075ef4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c075ef4(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  double dVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  int a5;
  undefined4 uVar6;
  float fVar7;
  undefined *puVar8;
  double in_dr0;
  undefined *puVar10;
  double dVar9;
  undefined *puVar11;
  double in_xd0;
  bool bVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *puStack_60;
  undefined *puStack_5c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  uVar6 = 1;
  iVar4 = *(int *)(DAT_8c07613c + ar4);
  if (iVar4 == 0) {
    uVar5 = 0;
    iVar4 = (*(code *)PTR_FUN_8c076144)(ar4 + DAT_8c076140,0,ar6,ar7);
    if (iVar4 != 0) {
      if (iVar4 != 1) {
        if (iVar4 != 2) {
          return 1;
        }
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076148)(ar4 + DAT_8c076140,uVar5,ar6,ar7);
      }
      *(int *)(DAT_8c07613c + ar4) = *(int *)(DAT_8c07613c + ar4) + 1;
    }
  }
  else {
    if (iVar4 == 1) {
      (*(code *)PTR_FUN_8c07614c)(ar4,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076154)(ar4 + DAT_8c076150,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076158)(ar4 + 0x14,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076160)(auStack_1c,PTR_DAT_8c07615c,ar6,ar7);
      puStack_60 = DAT_8c076164;
      puVar10 = PTR_Vec3_dtor_8c076168;
      if (in_FPSCR_SZ == '\0') {
        uVar3 = (ulonglong)in_dr0 >> 0x20;
        in_dr0 = in_xd0;
        puStack_60 = (undefined *)uVar3;
        puVar10 = DAT_8c076164;
      }
      bVar1 = in_FPSCR_PR != '\0';
      bVar12 = (float)puStack_60 <= (float)puVar10;
      ar5 = (undefined *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c076168)(auStack_1c,0xffffffff,ar6,ar7);
      if (bVar1 || bVar12) {
        *(undefined4 *)(DAT_8c076170 + ar4) = 0;
      }
      else {
        ar5 = PTR_DAT_8c07615c;
        puStack_5c = (undefined *)(*(code *)PTR_FUN_8c07616c)(ar4 + 0x14,PTR_DAT_8c07615c,ar6,ar7);
        *(undefined **)(DAT_8c076170 + ar4) = puStack_5c;
      }
      (*(code *)PTR_FUN_8c076174)(ar4 + 0x14,ar5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        puStack_60 = puVar10;
        puVar10 = puStack_5c;
      }
      puStack_5c = puVar10;
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),puStack_60);
        dVar2 = in_dr0;
      }
      else {
        dVar2 = (double)CONCAT44(puStack_5c,puStack_60);
        dVar9 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 / dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c07617c,fVar7);
      }
      else {
        dVar9 = (double)CONCAT44(PTR_FUN_8c076180,DAT_8c07617c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = (float)((ulonglong)dVar9 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar7,SUB84(dVar9,0) * fVar7);
      }
      else {
        in_dr0 = dVar9 * dVar9;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(ar4 + DAT_8c076178) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + DAT_8c076178) = dVar2;
      }
      *(int *)(DAT_8c07613c + ar4) = *(int *)(DAT_8c07613c + ar4) + 1;
    }
    else if (iVar4 != 2) {
      return 1;
    }
    puVar10 = (undefined *)((ulonglong)in_dr0 >> 0x20);
    iVar4 = *(int *)(DAT_8c076170 + ar4);
    if (iVar4 == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076148)(ar4 + DAT_8c076140,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        (*(code *)PTR_FUN_8c076180)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(DAT_8c07613c + ar4) = 0;
        uVar6 = 0;
      }
    }
    else if ((iVar4 == 3) || (iVar4 == 4)) {
      (*(code *)PTR_FUN_8c076158)(ar4 + 0x14,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076160)(auStack_2c,PTR_DAT_8c07615c,ar6,ar7);
      puVar8 = DAT_8c076184;
      puVar11 = PTR_vec3_copy_8c02b5fc_8c076188;
      if (in_FPSCR_SZ == '\0') {
        puVar8 = puVar10;
        puVar11 = DAT_8c076184;
      }
      uVar5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c076168)(auStack_2c,0xffffffff,ar6,ar7);
      if (in_FPSCR_PR != '\0' || (float)puVar8 <= (float)puVar11) {
        if (*(int *)(ar4 + 0x40) == 0) {
          a5 = *(int *)(DAT_8c076170 + ar4) + 2;
          iVar4 = (*(code *)PTR_FUN_8c076144)(ar4 + DAT_8c076140,a5,ar6,ar7);
          if (iVar4 != 0) {
            (*(code *)PTR_FUN_8c076180)(ar4,a5,ar6,ar7);
            *(undefined4 *)(DAT_8c07613c + ar4) = 0;
            uVar6 = 0;
          }
        }
        else {
          (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076148)(ar4 + DAT_8c076140,uVar5,ar6,ar7);
        }
      }
      else {
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076148)(ar4 + DAT_8c076140,uVar5,ar6,ar7);
        (*(code *)PTR_vec3_copy_8c02b5fc_8c076188)(auStack_38,ar4 + DAT_8c076150,ar6,ar7);
        (*(code *)PTR_FUN_8c07618c)(ar4 + 0x14,auStack_38,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c076190)(ar4 + 0x14,auStack_48,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c076168)(auStack_48,0xffffffff,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c076194)(auStack_38,0xffffffff,ar6,ar7);
      }
    }
  }
  return uVar6;
}



/* FUN_8c076198 @ 8c076198 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c076198(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  undefined *puVar7;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined *puStack_cc;
  undefined *puStack_c8;
  undefined *puStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [104];
  
  iVar2 = *(int *)(DAT_8c0761c8 + ar4);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      (*(code *)PTR_FUN_8c07632c)(ar4 + 0x14,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076334)((int)&fStack_ec + DAT_8c076328,PTR_DAT_8c076330,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        uStack_b4 = CONCAT44(uStack_b4._4_4_,uVar4);
        uVar1 = CONCAT44(DAT_8c076338,uVar4);
      }
      else {
        uVar1 = CONCAT44(PTR_Vec3_dtor_8c07633c,DAT_8c076338);
        in_xd0 = in_dr0;
        uStack_b4 = in_dr0;
      }
      in_dr0 = uVar1;
      uStack_a0 = (uint)(in_FPSCR_PR == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0);
      ar5 = -1;
      (*(code *)PTR_Vec3_dtor_8c07633c)((int)&fStack_ec + DAT_8c076328,0xffffffff,ar6,ar7);
      if (uStack_a0 == 0) {
        *(undefined4 *)(DAT_8c076440 + ar4) = 0;
      }
      else {
        puVar3 = PTR_DAT_8c076330;
        uVar4 = (*(code *)PTR_FUN_8c076340)(ar4 + 0x14,PTR_DAT_8c076330,ar6,ar7);
        *(undefined4 *)(DAT_8c076344 + ar4) = uVar4;
        uStack_bc._4_4_ = uVar4;
        (*(code *)PTR_FUN_8c07632c)(ar4 + 0x14,puVar3,ar6,ar7);
        (*(code *)PTR_FUN_8c076334)((int)&fStack_ec + DAT_8c076348,PTR_DAT_8c076330,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          uStack_bc = CONCAT44(uStack_bc._4_4_,uVar4);
          uVar1 = CONCAT44(DAT_8c07634c,uVar4);
        }
        else {
          uVar1 = CONCAT44(_DAT_8c076350,DAT_8c07634c);
          in_xd0 = in_dr0;
          uStack_bc = in_dr0;
        }
        in_dr0 = uVar1;
        uStack_a4 = (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)
                          );
        (*(code *)PTR_Vec3_dtor_8c07633c)((int)&fStack_ec + DAT_8c076348,0xffffffff,ar6,ar7);
        if (uStack_a4 == 0) {
          if (*(int *)(DAT_8c076394 + ar4) == 3) {
            iStack_e0 = *(int *)(DAT_8c076398 + ar4) + -6;
            (*(code *)PTR_FUN_8c0763a0)(ar4,0x19,PTR_DAT_8c07639c + iStack_e0 * 0x18,ar7);
          }
          else {
            iStack_e4 = *(int *)(DAT_8c0763f4 + ar4) + -6;
            (*(code *)PTR_FUN_8c0763fc)(ar4,0x1a,PTR_DAT_8c0763f8 + iStack_e4 * 0x18,ar7);
          }
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(DAT_8c076404 + ar4) + 0x16;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07640c)
                    (ar4 + DAT_8c076408,ar5,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c076410)(ar4 + DAT_8c076408,ar5,ar6,ar7);
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(DAT_8c076344 + ar4) + 0x18;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076358)
                    (ar4 + _DAT_8c076354,ar5,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07635c)(ar4 + _DAT_8c076354,ar5,ar6,ar7);
          *(int *)(DAT_8c076360 + ar4) = *(int *)(DAT_8c076360 + ar4) + 1;
          iStack_dc = ar4;
        }
      }
      *(int *)(DAT_8c076444 + ar4) = *(int *)(DAT_8c076444 + ar4) + 1;
      iStack_e8 = ar4;
    }
    else if (iVar2 != 2) {
      if (iVar2 != 3) {
        return 1;
      }
      (*(code *)PTR_FUN_8c0766f0)(ar4 + 0x14,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c0766f8)(auStack_9c,PTR_DAT_8c0766f4,ar6,ar7);
      puVar3 = (undefined *)((ulonglong)in_dr0 >> 0x20);
      puStack_cc = puVar3;
      puVar7 = DAT_8c0766fc;
      if (in_FPSCR_SZ != '\0') {
        puStack_cc = (undefined *)in_dr0;
        puStack_c8 = puVar3;
        puVar3 = DAT_8c0766fc;
        puVar7 = PTR_Vec3_dtor_8c076700;
      }
      uStack_ac = (uint)(in_FPSCR_PR == '\0' && (float)puVar7 < (float)puVar3);
      (*(code *)PTR_Vec3_dtor_8c076700)(auStack_9c,0xffffffff,ar6,ar7);
      if (uStack_ac != 0) {
        iVar2 = (*(code *)PTR_FUN_8c07670c)
                          (ar4 + DAT_8c076708,*(int *)(DAT_8c076704 + ar4) + 0x18,ar6,ar7);
        if (iVar2 == 0) {
          return 1;
        }
        *(undefined4 *)(DAT_8c076710 + ar4) = 0;
        return 0;
      }
      iVar2 = (*(code *)PTR_FUN_8c076748)(ar4 + DAT_8c076744,0x13,ar6,ar7);
      if (iVar2 == 0) {
        return 1;
      }
      *(undefined4 *)(DAT_8c07674c + ar4) = 0;
      return 0;
    }
    iVar2 = *(int *)(DAT_8c076440 + ar4);
    if (iVar2 == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07647c)(ar4 + DAT_8c076478,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      (*(code *)PTR_FUN_8c076480)(ar4,ar5,ar6,ar7);
      *(undefined4 *)(DAT_8c076484 + ar4) = 0;
      return 0;
    }
    if ((iVar2 != 3) && (iVar2 != 4)) {
      return 1;
    }
    puStack_c0 = (undefined *)
                 (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076504)
                           (ar4 + DAT_8c076500,ar5,ar6,ar7);
    if (puStack_c0 != (undefined *)0x1) {
      (*(code *)PTR_Vec3_set_zero_8c076638)((int)&fStack_ec + DAT_8c076634,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_set_zero_8c076638)((int)&fStack_ec + DAT_8c07663c,ar5,ar6,ar7);
      (*(code *)PTR_FUN_8c076644)(ar4 + 0x14,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c076648)(ar4 + 0x14,(int)&fStack_ec + DAT_8c076640,ar6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07664c)((int)&fStack_ec + DAT_8c076640,0xffffffff,ar6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c076654)(ar4 + DAT_8c076650,uVar4,ar6,ar7);
      uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      puStack_c8 = (undefined *)uVar4;
      if (in_FPSCR_SZ != '\0') {
        puStack_c8 = (undefined *)in_dr0;
        puStack_c4 = (undefined *)uVar4;
      }
      (*(code *)PTR_FUN_8c07665c)
                (ar4 + DAT_8c076650,*(undefined4 *)(*(int *)(DAT_8c076658 + ar4) + 4),ar6,ar7);
      uVar4 = (undefined4)in_dr0;
      (*(code *)PTR_vec3_copy_8c023d8c_8c076660)((int)&fStack_ec + DAT_8c076634,auStack_70,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c076664)(auStack_70,0xffffffff,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar4 = *(undefined4 *)((int)&fStack_ec + DAT_8c076668);
      }
      else {
        in_xd0 = *(undefined8 *)((int)&fStack_ec + DAT_8c076668);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07666c),uVar4);
      }
      else {
        dVar6 = *(double *)(ar4 + DAT_8c07666c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)((int)&fStack_ec + DAT_8c076670) = fVar5;
      }
      else {
        *(undefined8 *)((int)&fStack_ec + DAT_8c076670) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c023d8c_8c076660)
                (ar4 + DAT_8c076674,(int)&fStack_ec + DAT_8c07663c,ar6,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c076678)(auStack_7c,(int)&fStack_ec + DAT_8c07663c,ar6,ar7);
      (*(code *)PTR_FUN_8c07667c)(ar4 + 0x14,auStack_7c,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c076648)(ar4 + 0x14,auStack_8c,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07664c)(auStack_8c,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c076664)(auStack_7c,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c076664)((int)&fStack_ec + DAT_8c07663c,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c076664)((int)&fStack_ec + DAT_8c076634,0xffffffff,ar6,ar7);
      return 1;
    }
    (*(code *)PTR_FUN_8c07650c)(ar4 + 0x14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c076514)((int)&fStack_ec + DAT_8c076508,PTR_DAT_8c076510,ar6,ar7);
    puVar3 = (undefined *)((ulonglong)in_dr0 >> 0x20);
    puStack_c4 = puVar3;
    puVar7 = DAT_8c076518;
    if (in_FPSCR_SZ != '\0') {
      puStack_c4 = (undefined *)in_dr0;
      puStack_c0 = puVar3;
      puVar3 = DAT_8c076518;
      puVar7 = PTR_Vec3_dtor_8c07651c;
    }
    uStack_a8 = (uint)(in_FPSCR_PR == '\0' && (float)puVar3 < (float)puVar7);
    (*(code *)PTR_Vec3_dtor_8c07651c)((int)&fStack_ec + DAT_8c076508,0xffffffff,ar6,ar7);
    if (uStack_a8 == 0) {
      return 1;
    }
    *(int *)(DAT_8c076520 + ar4) = *(int *)(DAT_8c076520 + ar4) + 1;
    return 1;
  }
  uVar4 = 0x13;
  iVar2 = (*(code *)PTR_FUN_8c0761f4)(ar4 + DAT_8c0761f0,0x13,ar6,ar7);
  uStack_b4 = CONCAT44(iVar2,(undefined4)uStack_b4);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_8c076216;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076230)(ar4 + DAT_8c07622c,uVar4,ar6,ar7);
    }
    *(int *)(DAT_8c076234 + ar4) = *(int *)(DAT_8c076234 + ar4) + 1;
    iStack_d8 = ar4;
  }
LAB_8c076216:
  (*(code *)PTR_FUN_8c076238)(ar4,uVar4,ar6,ar7);
  (*(code *)PTR_FUN_8c07623c)(ar4,uVar4,ar6,ar7);
  return 1;
}



/* FUN_8c076750 @ 8c076750 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c076750(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a7;
  undefined4 uVar5;
  undefined1 auStack_1c [20];
  
  uVar5 = 1;
  iVar2 = ar6;
  (*(code *)PTR_FUN_8c076930)(ar4 + 0x14,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c076938)(ar4,auStack_1c,iVar2,ar7);
  uVar4 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07693c)(auStack_1c,0xffffffff,iVar2,ar7);
  uVar1 = (*(code *)PTR_FUN_8c076940)(ar5,uVar4,iVar2,ar7);
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_FUN_8c076944)(ar4,uVar4,iVar2,ar7);
    iVar3 = *(int *)(DAT_8c076948 + ar4);
    if (iVar3 == 0) {
      iVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076950)
                        (ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
      if (iVar2 == 1) {
        iVar2 = (*(code *)PTR_rand_range_8c076954)(ar4,0,100,ar7);
        if (((iVar2 == 0) && (2 < *(int *)(DAT_8c076958 + ar4))) &&
           (*(int *)(DAT_8c076958 + ar4) < 6)) {
          a7 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0x13;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076960)
                    (ar4 + DAT_8c07694c,0x13,0xffffffff,0);
        }
        else {
          a7 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076960)(ar4 + DAT_8c07694c,0,0xffffffff,0)
          ;
        }
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c076964)(ar4 + DAT_8c07694c,uVar1,uVar4,a7);
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      switch(*(undefined4 *)(DAT_8c076958 + ar4)) {
      case 0:
      case 1:
        (*(code *)PTR_FUN_8c076970)(ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
        break;
      case 2:
        (*(code *)PTR_FUN_8c076970)(ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
        break;
      case 3:
      case 4:
      case 5:
        (*(code *)PTR_FUN_8c076970)(ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
        break;
      case 6:
      case 7:
        if (ar6 == 0) {
          (*(code *)PTR_FUN_8c076970)(ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
        }
        else {
          (*(code *)PTR_FUN_8c076970)(ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
        }
      }
    }
  }
  else {
    iVar3 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076950)
                      (ar4 + DAT_8c07694c,uVar4,iVar2,ar7);
    if (iVar3 == 1) {
      (*(code *)PTR_FUN_8c07698c)(ar4,uVar4,iVar2,ar7);
      uVar5 = 0;
      *(undefined4 *)(DAT_8c076990 + ar4) = 0;
    }
  }
  return uVar5;
}



/* FUN_8c076994 @ 8c076994 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c0774de) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c076994(int ar4,undefined4 *ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int a5;
  undefined4 a7;
  undefined4 unaff_r11;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  float fVar8;
  undefined8 in_dr0;
  float fVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar7 = auStack_4;
  }
  else {
    puVar7 = auStack_8;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = 1;
  *(undefined4 *)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar7 + -0x14) = in_PR;
  iVar1 = -DAT_8c076adc;
  uVar5 = 1;
  iVar6 = 0;
  (*(code *)PTR_Vec3_ctor_zero_8c076ae4)(puVar7 + DAT_8c076ae0 + iVar1 + -0x14,ar5,ar6,ar7);
  puVar4 = PTR_FUN_8c076ae8;
  uVar2 = (*(code *)PTR_FUN_8c076ae8)(*ar5,PTR_FUN_8c076ae8,ar6,ar7);
  puVar7[iVar1 + -0x14] = (char)uVar2;
  if (puVar7[iVar1 + -0x14] == '\0') {
    uVar2 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,puVar4,ar6,ar7);
    *(undefined4 *)(puVar7 + DAT_8c076aec + iVar1 + -0x14) = uVar2;
    if (*(int *)(puVar7 + DAT_8c076aec + iVar1 + -0x14) != 0) {
      *(undefined4 *)(DAT_8c076af0 + ar4) = 0;
      uVar2 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,puVar4,ar6,ar7);
      *(undefined4 *)(puVar7 + DAT_8c076af4 + iVar1 + -0x14) = uVar2;
      *(undefined4 *)(DAT_8c076af8 + ar4) = *(undefined4 *)(puVar7 + DAT_8c076af4 + iVar1 + -0x14);
      (*(code *)PTR_Vec3_assign_8c076b00)
                (puVar7 + DAT_8c076ae0 + iVar1 + -0x14,PTR_DAT_8c076afc,ar6,ar7);
      if (*(int *)(DAT_8c076af8 + ar4) == 3) {
        (*(code *)PTR_Vec3_set_xyz_8c076b0c)
                  (puVar7 + DAT_8c076b04._4_4_ + iVar1 + -0x14,DAT_8c076af8,ar6,ar7);
        *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c076b10 + iVar1 + -0x14;
        (*(code *)PTR_FUN_8c076b18)(PTR_DAT_8c076afc,puVar7 + DAT_8c076b14 + iVar1 + -0x18,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c076b00)
                  (puVar7 + DAT_8c076ae0 + iVar1 + -0x14,puVar7 + DAT_8c076b10 + iVar1 + -0x14,ar6,
                   ar7);
        (*(code *)PTR_Vec3_dtor_8c076b1c)(puVar7 + DAT_8c076b10 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c076b20)
                  (puVar7 + DAT_8c076b04._4_4_ + iVar1 + -0x14,0xffffffff,ar6,ar7);
        ar6 = puVar7 + DAT_8c076b24 + iVar1 + -0x14;
        *(undefined **)(puVar7 + iVar1 + -0x18) = ar6;
        (*(code *)PTR_FUN_8c076b28)(ar4 + 0x14,uVar2,ar6,ar7);
        (*(code *)PTR_FUN_8c076b2c)
                  (puVar7 + DAT_8c076b24 + iVar1 + -0x14,puVar7 + DAT_8c076ae0 + iVar1 + -0x14,ar6,
                   ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + DAT_8c076b30 + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = CONCAT44(DAT_8c076b34,*(undefined4 *)(puVar7 + DAT_8c076b30 + iVar1 + -0x14));
        }
        else {
          *(undefined8 *)(puVar7 + DAT_8c076b30 + iVar1 + -0x14) = in_dr0;
          in_dr0 = CONCAT44(DAT_8c076b38,DAT_8c076b34);
        }
        *(uint *)(puVar7 + DAT_8c076b38 + iVar1 + -0x14) =
             (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20));
        (*(code *)PTR_Vec3_dtor_8c076b1c)(puVar7 + DAT_8c076b24 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        if (*(int *)(puVar7 + DAT_8c076b38 + iVar1 + -0x14) == 0) {
          *(undefined4 *)(DAT_8c076b48 + ar4) = 0;
        }
        else {
          *(undefined4 *)(DAT_8c076af8 + ar4) = 0;
        }
      }
      else if (*(int *)(DAT_8c076c04 + ar4) == 4) {
        (*(code *)PTR_Vec3_set_xyz_8c076c10)
                  (puVar7 + DAT_8c076c08._4_4_ + iVar1 + -0x14,DAT_8c076af8,ar6,ar7);
        *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c076c14 + iVar1 + -0x14;
        ar6 = PTR_FUN_8c076c20;
        ar7 = PTR_DAT_8c076c1c;
        (*(code *)PTR_FUN_8c076c20)
                  (PTR_DAT_8c076c1c,puVar7 + DAT_8c076c18 + iVar1 + -0x18,PTR_FUN_8c076c20,
                   PTR_DAT_8c076c1c);
        (*(code *)PTR_Vec3_assign_8c076c28)
                  (puVar7 + DAT_8c076c24 + iVar1 + -0x14,puVar7 + DAT_8c076c14 + iVar1 + -0x14,ar6,
                   ar7);
        (*(code *)PTR_Vec3_dtor_8c076c2c)(puVar7 + DAT_8c076c14 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        (*(code *)PTR_object_dtor_delete_8c076c30)
                  (puVar7 + DAT_8c076c08._4_4_ + iVar1 + -0x14,0xffffffff,ar6,ar7);
        *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c076c34 + iVar1 + -0x14;
        (*(code *)PTR_FUN_8c076c38)(ar4 + 0x14,uVar2,ar6,ar7);
        (*(code *)PTR_FUN_8c076c3c)
                  (puVar7 + DAT_8c076c34 + iVar1 + -0x14,puVar7 + DAT_8c076c24 + iVar1 + -0x14,ar6,
                   ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + DAT_8c076c40 + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
          in_dr0 = CONCAT44(DAT_8c076c44,*(undefined4 *)(puVar7 + DAT_8c076c40 + iVar1 + -0x14));
        }
        else {
          *(undefined8 *)(puVar7 + DAT_8c076c40 + iVar1 + -0x14) = in_dr0;
          in_dr0 = CONCAT44(DAT_8c076c48,DAT_8c076c44);
        }
        *(uint *)(puVar7 + DAT_8c076c48 + iVar1 + -0x14) =
             (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20));
        (*(code *)PTR_Vec3_dtor_8c076c2c)(puVar7 + DAT_8c076c34 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        if (*(int *)(puVar7 + DAT_8c076c48 + iVar1 + -0x14) == 0) {
          *(undefined4 *)(DAT_8c076c58 + ar4) = 0;
        }
        else {
          *(undefined4 *)(DAT_8c076c04 + ar4) = 0;
        }
      }
      else if ((((*(int *)(DAT_8c076cd8 + ar4) != 8) && (*(int *)(DAT_8c076cd8 + ar4) != 5)) &&
               (*(int *)(DAT_8c076cd8 + ar4) != 7)) && (*(int *)(DAT_8c076cd8 + ar4) != 6)) {
        *(undefined4 *)(DAT_8c076cd8 + ar4) = 0;
      }
      (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,ar6,ar7);
      if (((*(int *)(DAT_8c076cd8 + ar4) != *(int *)(DAT_8c076cdc + ar4)) &&
          (*(int *)(DAT_8c076cdc + ar4) != 8)) && (*(int *)(DAT_8c076cdc + ar4) != 7)) {
        *(undefined4 *)(DAT_8c076cdc + ar4) = *(undefined4 *)(DAT_8c076cd8 + ar4);
      }
    }
    iVar3 = *(int *)(DAT_8c076cdc + ar4);
    if ((iVar3 < 9) && (-1 < iVar3)) {
      puVar4 = (&switchD_8c076cd4::switchdataD_8c076ce0)[iVar3];
      switch(iVar3) {
      case 0:
        *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c076d58 + iVar1 + -0x14;
        (*(code *)PTR_FUN_8c076d5c)(ar4 + 0x14,puVar4,ar6,ar7);
        (*(code *)PTR_FUN_8c076d64)(ar4,puVar7 + DAT_8c076d58 + iVar1 + -0x14,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c076d68)(puVar7 + DAT_8c076d58 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        iVar3 = *(int *)(DAT_8c076d6c + ar4);
        if ((iVar3 < 5) && (-1 < iVar3)) {
          a5 = iVar3 * 4;
          switch(iVar3) {
          case 0:
            (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c076dc4)
                      (ar4 + DAT_8c076dc0,PTR_s_CAnimBody_SetFrame_033e6e_8c076dc4,ar6,ar7);
            *(int *)(puVar7 + iVar1 + 8) = ar4;
            *(int *)(DAT_8c076dc8 + *(int *)(puVar7 + iVar1 + 8)) =
                 *(int *)(DAT_8c076dc8 + *(int *)(puVar7 + iVar1 + 8)) + 1;
          case 1:
            iVar6 = *(int *)(DAT_8c076dcc + ar4);
            if (iVar6 == 0) {
              uVar2 = 0;
              ar6 = (undefined *)0xffffffff;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076e64)
                        (ar4 + DAT_8c076e5c._4_4_,0,0xffffffff,0);
              (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c076e68)
                        (ar4 + DAT_8c076e5c._4_4_,PTR_s_CAnimBody_SetFrame_033e6e_8c076e68,ar6,uVar2
                        );
            }
            else if (iVar6 == 3) {
              ar6 = (undefined *)0xffffffff;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076df4)
                        (ar4 + DAT_8c076dec._4_4_,5,0xffffffff,0);
            }
            else if (iVar6 == 4) {
              ar6 = (undefined *)0xffffffff;
              (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c076e1c)
                        (ar4 + DAT_8c076e14._4_4_,6,0xffffffff,0);
            }
            *(int *)(puVar7 + iVar1 + 4) = ar4;
            *(int *)(DAT_8c076e6c + *(int *)(puVar7 + iVar1 + 4)) =
                 *(int *)(DAT_8c076e6c + *(int *)(puVar7 + iVar1 + 4)) + 1;
            break;
          case 2:
            iVar3 = *(int *)(DAT_8c076e84 + ar4);
            if (iVar3 == 0) {
              uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c076f14)
                                (ar4 + DAT_8c076f10,a5,ar6,ar7);
              *(undefined4 *)(puVar7 + DAT_8c076f18 + iVar1 + -0x14) = uVar2;
              iVar6 = *(int *)(puVar7 + DAT_8c076f18 + iVar1 + -0x14);
              *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c076f1c + iVar1 + -0x14;
              (*(code *)PTR_FUN_8c076f20)(ar4 + 0x14,a5,ar6,ar7);
              (*(code *)PTR_FUN_8c076f28)
                        (puVar7 + DAT_8c076f1c + iVar1 + -0x14,PTR_DAT_8c076f24,ar6,ar7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar7 + DAT_8c076f2c + iVar1 + -0x14) = (int)((ulonglong)in_dr0 >> 0x20);
                fVar8 = *(float *)(puVar7 + DAT_8c076f2c + iVar1 + -0x14);
                fVar9 = DAT_8c076f30;
              }
              else {
                *(undefined8 *)(puVar7 + DAT_8c076f2c + iVar1 + -0x14) = in_dr0;
                fVar8 = DAT_8c076f30;
                fVar9 = DAT_8c076f34;
              }
              *(uint *)(puVar7 + (int)DAT_8c076f34 + iVar1 + -0x14) =
                   (uint)(in_FPSCR_PR == '\0' && fVar9 < fVar8);
              (*(code *)PTR_Vec3_dtor_8c076f38)
                        (puVar7 + DAT_8c076f1c + iVar1 + -0x14,0xffffffff,ar6,ar7);
              if (*(int *)(puVar7 + (int)DAT_8c076f34 + iVar1 + -0x14) != 0) {
                uVar2 = (*(code *)PTR_FUN_8c076f3c)(ar4 + 0x14,PTR_DAT_8c076f24,ar6,ar7);
                *(undefined4 *)(puVar7 + DAT_8c076f40 + iVar1 + -0x14) = uVar2;
                if (*(int *)(puVar7 + DAT_8c076f40 + iVar1 + -0x14) == 3) {
                  *(undefined4 *)(DAT_8c076f44 + ar4) = 3;
                }
                else {
                  *(undefined4 *)(DAT_8c076f60 + ar4) = 4;
                }
                *(undefined4 *)(DAT_8c076f64 + ar4) = 0;
                *(undefined4 *)(DAT_8c076f68 + ar4) = 0;
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              switch(*(undefined4 *)(DAT_8c076f84 + ar4)) {
              case 0:
              case 1:
                uVar2 = (*(code *)PTR_FUN_8c076fd8)(ar4 + DAT_8c076fd4,a5,ar6,ar7);
                *(undefined4 *)(puVar7 + DAT_8c076fdc + iVar1 + -0x14) = uVar2;
                iVar6 = *(int *)(puVar7 + DAT_8c076fdc + iVar1 + -0x14);
                break;
              case 2:
                uVar2 = (*(code *)PTR_FUN_8c077010)(ar4 + DAT_8c07700c,a5,ar6,ar7);
                *(undefined4 *)(puVar7 + iVar1 + 0x68) = uVar2;
                iVar6 = *(int *)(puVar7 + iVar1 + 0x68);
                break;
              case 3:
              case 4:
              case 5:
                uVar2 = (*(code *)PTR_FUN_8c077044)(ar4 + DAT_8c077040,a5,ar6,ar7);
                *(undefined4 *)(puVar7 + iVar1 + 100) = uVar2;
                iVar6 = *(int *)(puVar7 + iVar1 + 100);
                break;
              case 6:
              case 7:
                uVar2 = (*(code *)PTR_FUN_8c0770d8)(ar4 + DAT_8c0770d4,a5,ar6,ar7);
                *(undefined4 *)(puVar7 + iVar1 + 0x60) = uVar2;
                iVar6 = *(int *)(puVar7 + iVar1 + 0x60);
              }
              if (*(int *)(DAT_8c0770dc + ar4) == 3) {
                (*(code *)PTR_Vec3_set_xyz_8c0770e8)
                          (puVar7 + DAT_8c0770e4 + iVar1 + -0x14,PTR_Vec3_set_xyz_8c0770e8,ar6,ar7);
                *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c0770ec + iVar1 + -0x14;
                (*(code *)PTR_FUN_8c0770f8)
                          (PTR_DAT_8c0770f4,puVar7 + DAT_8c0770f0 + iVar1 + -0x18,ar6,ar7);
                (*(code *)PTR_Vec3_assign_8c077100)
                          (puVar7 + DAT_8c0770fc + iVar1 + -0x14,
                           puVar7 + DAT_8c0770ec + iVar1 + -0x14,ar6,ar7);
                (*(code *)PTR_Vec3_dtor_8c077104)
                          (puVar7 + DAT_8c0770ec + iVar1 + -0x14,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                (*(code *)PTR_object_dtor_delete_8c077108)
                          (puVar7 + DAT_8c0770e4 + iVar1 + -0x14,0xffffffff,ar6,ar7);
              }
              else {
                (*(code *)PTR_Vec3_set_xyz_8c0771e8)
                          (puVar7 + DAT_8c0771e0._4_4_ + iVar1 + -0x14,a5,ar6,ar7);
                *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c0771ec + iVar1 + -0x14;
                (*(code *)PTR_FUN_8c0771f8)
                          (PTR_DAT_8c0771f4,puVar7 + DAT_8c0771f0 + iVar1 + -0x18,ar6,ar7);
                (*(code *)PTR_Vec3_assign_8c077200)
                          (puVar7 + DAT_8c0771fc + iVar1 + -0x14,
                           puVar7 + DAT_8c0771ec + iVar1 + -0x14,ar6,ar7);
                (*(code *)PTR_Vec3_dtor_8c077204)
                          (puVar7 + DAT_8c0771ec + iVar1 + -0x14,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                (*(code *)PTR_object_dtor_delete_8c077208)
                          (puVar7 + DAT_8c0771e0._4_4_ + iVar1 + -0x14,0xffffffff,ar6,ar7);
              }
              *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c07720c + iVar1 + -0x14;
              (*(code *)PTR_FUN_8c077210)(ar4 + 0x14,uVar2,ar6,ar7);
              (*(code *)PTR_FUN_8c077214)
                        (puVar7 + DAT_8c07720c + iVar1 + -0x14,puVar7 + DAT_8c0771fc + iVar1 + -0x14
                         ,ar6,ar7);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(puVar7 + iVar1 + 0x5c) = (int)((ulonglong)in_dr0 >> 0x20);
                fVar8 = *(float *)(puVar7 + iVar1 + 0x5c);
                fVar9 = DAT_8c077218;
              }
              else {
                *(undefined8 *)(puVar7 + iVar1 + 0x5c) = in_dr0;
                fVar8 = DAT_8c077218;
                fVar9 = DAT_8c07721c;
              }
              *(uint *)(puVar7 + (int)DAT_8c07721c + iVar1 + -0x14) =
                   (uint)(in_FPSCR_PR == '\0' && fVar9 < fVar8);
              (*(code *)PTR_Vec3_dtor_8c077204)
                        (puVar7 + DAT_8c07720c + iVar1 + -0x14,0xffffffff,ar6,ar7);
              if (*(int *)(puVar7 + (int)DAT_8c07721c + iVar1 + -0x14) != 0) {
                uVar2 = (*(code *)PTR_FUN_8c077220)(ar4 + 0x14,PTR_DAT_8c0771f4,ar6,ar7);
                *(undefined4 *)(puVar7 + iVar1 + 0x58) = uVar2;
                if (*(int *)(puVar7 + iVar1 + 0x58) == 3) {
                  *(undefined4 *)(DAT_8c077224 + ar4) = 3;
                }
                else {
                  *(undefined4 *)(DAT_8c077288 + ar4) = 4;
                }
                *(undefined4 *)(DAT_8c07728c + ar4) = 0;
                *(undefined4 *)(DAT_8c077290 + ar4) = 0;
              }
            }
            if ((iVar6 == 7) || (iVar6 == 1)) {
              ar6 = (undefined *)0x64;
              uVar2 = (*(code *)PTR_rand_range_8c077294)(ar4,0,100,ar7);
              *(undefined4 *)(puVar7 + iVar1 + 0x54) = uVar2;
              if (*(int *)(puVar7 + iVar1 + 0x54) < 2) {
                *(int *)(puVar7 + iVar1) = ar4;
                *(int *)(DAT_8c077290 + *(int *)(puVar7 + iVar1)) =
                     *(int *)(DAT_8c077290 + *(int *)(puVar7 + iVar1)) + 1;
              }
              else {
                *(undefined4 *)(DAT_8c0772a4 + ar4) = 1;
              }
            }
            break;
          case 3:
            uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0772f4)
                              (ar4 + DAT_8c0772f0,a5,ar6,ar7);
            *(undefined4 *)(puVar7 + iVar1 + 0x50) = uVar2;
            if (*(int *)(puVar7 + iVar1 + 0x50) == 1) {
              if (*(int *)(DAT_8c0772f8 + ar4) == 6) {
                a7 = 0;
                ar6 = (undefined *)0x0;
                uVar2 = 0x25;
                (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c077300)(ar4 + DAT_8c0772f0,0x25,0,0)
                ;
              }
              else if (*(int *)(DAT_8c077330 + ar4) == 7) {
                a7 = 0;
                ar6 = (undefined *)0x0;
                uVar2 = 0x2f;
                (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07733c)
                          (ar4 + DAT_8c077334._4_4_,0x2f,0,0);
              }
              else {
                a7 = 0;
                ar6 = (undefined *)0x0;
                uVar2 = 0x13;
                (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07738c)
                          (ar4 + DAT_8c077384._4_4_,0x13,0,0);
              }
              (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c077390)
                        (ar4 + DAT_8c077384._4_4_,uVar2,ar6,a7);
              *(int *)(puVar7 + iVar1 + -4) = ar4;
              *(int *)(DAT_8c077394 + *(int *)(puVar7 + iVar1 + -4)) =
                   *(int *)(DAT_8c077394 + *(int *)(puVar7 + iVar1 + -4)) + 1;
            }
            break;
          case 4:
            uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c0773c4)
                              (ar4 + DAT_8c0773c0,a5,ar6,ar7);
            *(undefined4 *)(puVar7 + iVar1 + 0x4c) = uVar2;
            if (*(int *)(puVar7 + iVar1 + 0x4c) == 1) {
              *(undefined4 *)(DAT_8c0773c8 + ar4) = 1;
            }
          }
        }
        break;
      case 3:
      case 4:
        *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c077414 + iVar1 + -0x14;
        (*(code *)PTR_FUN_8c077418)(ar4 + 0x14,puVar7 + DAT_8c077414 + iVar1 + -0x14,ar6,ar7);
        (*(code *)PTR_FUN_8c077420)(ar4,puVar7 + DAT_8c077414 + iVar1 + -0x14,ar6,ar7);
        uVar2 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c077424)(puVar7 + DAT_8c077414 + iVar1 + -0x14,0xffffffff,ar6,ar7);
        if (*(int *)(DAT_8c077428 + ar4) == 0) {
          (*(code *)PTR_FUN_8c0774b0)(ar4,uVar2,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + iVar1 + 0x48) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(puVar7 + iVar1 + 0x48) = in_dr0;
          }
          if (*(int *)(DAT_8c0774b4 + ar4) == 3) {
            (*(code *)PTR_Vec3_set_xyz_8c0774bc)
                      (puVar7 + DAT_8c0774b8 + iVar1 + -0x14,uVar2,ar6,ar7);
            *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c0774c0 + iVar1 + -0x14;
            (*(code *)PTR_FUN_8c0774cc)
                      (PTR_DAT_8c0774c8,puVar7 + DAT_8c0774c4 + iVar1 + -0x18,ar6,ar7);
            (*(code *)PTR_Vec3_assign_8c0774d0)
                      (ar4 + 0x54,puVar7 + DAT_8c0774c0 + iVar1 + -0x14,ar6,ar7);
            (*(code *)PTR_Vec3_dtor_8c0774d4)
                      (puVar7 + DAT_8c0774c0 + iVar1 + -0x14,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            (*(code *)PTR_object_dtor_delete_8c0774d8)
                      (puVar7 + DAT_8c0774b8 + iVar1 + -0x14,0xffffffff,ar6,ar7);
          }
          else {
            (*(code *)PTR_Vec3_set_xyz_8c07757c)
                      (puVar7 + DAT_8c077578 + iVar1 + -0x14,uVar2,ar6,ar7);
            *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c077580 + iVar1 + -0x14;
            (*(code *)PTR_FUN_8c07758c)
                      (PTR_DAT_8c077588,puVar7 + DAT_8c077584 + iVar1 + -0x18,ar6,ar7);
            (*(code *)PTR_Vec3_assign_8c077590)
                      (ar4 + 0x54,puVar7 + DAT_8c077580 + iVar1 + -0x14,ar6,ar7);
            (*(code *)PTR_Vec3_dtor_8c077594)
                      (puVar7 + DAT_8c077580 + iVar1 + -0x14,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            (*(code *)PTR_object_dtor_delete_8c077598)
                      (puVar7 + DAT_8c077578 + iVar1 + -0x14,0xffffffff,ar6,ar7);
          }
          (*(code *)PTR_Vec3_length_8c07759c)(ar4 + 0x54,uVar2,ar6,ar7);
          iVar6 = DAT_8c077584;
          *(int *)(puVar7 + iVar1 + -8) = ar4;
          *(int *)(DAT_8c077584 + *(int *)(puVar7 + iVar1 + -8)) =
               *(int *)(DAT_8c077584 + *(int *)(puVar7 + iVar1 + -8)) + 1;
          puVar4 = (undefined *)(ar4 + DAT_8c0775a0);
          ar6 = PTR_get_field_1c_026dd8_8c0775a4;
          uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c0775a4)
                            (puVar4,iVar6,PTR_get_field_1c_026dd8_8c0775a4,puVar4);
          ar7 = DAT_8c077640;
          *(undefined4 *)(puVar7 + iVar1 + 0x44) = uVar2;
          if (*(int *)(puVar7 + iVar1 + 0x44) == 0) {
            *(undefined4 *)(DAT_8c0775a8 + ar4) = 1;
            ar7 = puVar4;
          }
          else {
            ar6 = (undefined *)0x0;
            *(undefined4 *)(DAT_8c077640 + ar4) = 0;
          }
          *(undefined4 *)(DAT_8c077644 + ar4) = 0;
        }
        else if (*(int *)(DAT_8c077428 + ar4) != 1) break;
        (*(code *)PTR_Vec3_ctor_copy_8c07764c)
                  (puVar7 + DAT_8c077648 + iVar1 + -0x14,ar4 + 0x54,ar6,ar7);
        ar6 = (undefined *)0x1;
        puVar4 = PTR_FUN_8c077650;
        uVar2 = (*(code *)PTR_FUN_8c077650)
                          (ar4,puVar7 + DAT_8c077648 + iVar1 + -0x14,1,PTR_FUN_8c077650);
        *(undefined4 *)(puVar7 + iVar1 + 0x40) = uVar2;
        *(uint *)(puVar7 + DAT_8c077654 + iVar1 + -0x14) =
             (uint)(*(int *)(puVar7 + iVar1 + 0x40) == 0);
        (*(code *)PTR_Vec3_dtor_8c077658)
                  (puVar7 + DAT_8c077648 + iVar1 + -0x14,0xffffffff,ar6,puVar4);
        if (*(int *)(puVar7 + DAT_8c077654 + iVar1 + -0x14) != 0) {
          *(undefined4 *)(DAT_8c07765c + ar4) = 0;
          *(undefined4 *)(DAT_8c077640 + ar4) = 0;
          *(undefined4 *)(DAT_8c077644 + ar4) = 0;
          if (*(int *)(DAT_8c077660 + ar4) == 3) {
            *(undefined4 *)(puVar7 + iVar1 + -0xc) = 4;
            *(undefined4 *)(DAT_8c077664 + ar4) = *(undefined4 *)(puVar7 + iVar1 + -0xc);
            *(undefined4 *)(DAT_8c077668 + ar4) = *(undefined4 *)(puVar7 + iVar1 + -0xc);
          }
          else {
            *(undefined4 *)(puVar7 + iVar1 + -0x10) = 3;
            *(undefined4 *)(DAT_8c077688 + ar4) = *(undefined4 *)(puVar7 + iVar1 + -0x10);
            *(undefined4 *)(DAT_8c07768c + ar4) = *(undefined4 *)(puVar7 + iVar1 + -0x10);
          }
          *(undefined4 *)(DAT_8c077690 + ar4) = 0;
        }
        break;
      case 5:
        uVar2 = (*(code *)PTR_FUN_8c077730)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(puVar7 + iVar1 + 0x3c) = uVar2;
        if (*(int *)(puVar7 + iVar1 + 0x3c) == 0) {
          *(undefined4 *)(DAT_8c077734 + ar4) = 0;
          puVar4 = PTR_DAT_8c077738;
          uVar2 = (*(code *)PTR_FUN_8c07773c)(ar4 + 0x14,PTR_DAT_8c077738,ar6,ar7);
          *(undefined4 *)(puVar7 + iVar1 + 0x38) = uVar2;
          *(undefined4 *)(DAT_8c077740 + ar4) = *(undefined4 *)(puVar7 + iVar1 + 0x38);
          *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c077744 + iVar1 + -0x14;
          (*(code *)PTR_FUN_8c077748)(ar4 + 0x14,puVar4,ar6,ar7);
          (*(code *)PTR_FUN_8c07774c)
                    (puVar7 + DAT_8c077744 + iVar1 + -0x14,PTR_DAT_8c077738,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + iVar1 + 0x34) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar8 = *(float *)(puVar7 + iVar1 + 0x34);
            fVar9 = DAT_8c077750;
          }
          else {
            *(undefined8 *)(puVar7 + iVar1 + 0x34) = in_dr0;
            fVar8 = DAT_8c077750;
            fVar9 = DAT_8c077754;
          }
          *(uint *)(puVar7 + (int)DAT_8c077754 + iVar1 + -0x14) =
               (uint)(in_FPSCR_PR == '\0' && fVar8 < fVar9);
          (*(code *)PTR_Vec3_dtor_8c077758)
                    (puVar7 + DAT_8c077744 + iVar1 + -0x14,0xffffffff,ar6,ar7);
          if (*(int *)(puVar7 + (int)DAT_8c077754 + iVar1 + -0x14) != 0) {
            *(undefined4 *)(DAT_8c077740 + ar4) = 0;
          }
        }
        break;
      case 6:
        uVar2 = (*(code *)PTR_FUN_8c0777f8)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(puVar7 + iVar1 + 0x30) = uVar2;
        if (*(int *)(puVar7 + iVar1 + 0x30) == 0) {
          *(undefined4 *)(DAT_8c0777fc + ar4) = 0;
          puVar4 = PTR_DAT_8c077800;
          uVar2 = (*(code *)PTR_FUN_8c077804)(ar4 + 0x14,PTR_DAT_8c077800,ar6,ar7);
          *(undefined4 *)(puVar7 + iVar1 + 0x2c) = uVar2;
          *(undefined4 *)(DAT_8c077808 + ar4) = *(undefined4 *)(puVar7 + iVar1 + 0x2c);
          *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c07780c + iVar1 + -0x14;
          (*(code *)PTR_FUN_8c077810)(ar4 + 0x14,puVar4,ar6,ar7);
          (*(code *)PTR_FUN_8c077814)
                    (puVar7 + DAT_8c07780c + iVar1 + -0x14,PTR_DAT_8c077800,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + iVar1 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar8 = *(float *)(puVar7 + iVar1 + 0x28);
            fVar9 = DAT_8c077818;
          }
          else {
            *(undefined8 *)(puVar7 + iVar1 + 0x28) = in_dr0;
            fVar8 = DAT_8c077818;
            fVar9 = DAT_8c07781c;
          }
          *(uint *)(puVar7 + (int)DAT_8c07781c + iVar1 + -0x14) =
               (uint)(in_FPSCR_PR == '\0' && fVar8 < fVar9);
          (*(code *)PTR_Vec3_dtor_8c077820)
                    (puVar7 + DAT_8c07780c + iVar1 + -0x14,0xffffffff,ar6,ar7);
          if (*(int *)(puVar7 + (int)DAT_8c07781c + iVar1 + -0x14) != 0) {
            *(undefined4 *)(DAT_8c077808 + ar4) = 0;
          }
        }
        break;
      case 7:
        uVar2 = (*(code *)PTR_FUN_8c0778bc)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(puVar7 + iVar1 + 0x24) = uVar2;
        if (*(int *)(puVar7 + iVar1 + 0x24) == 0) {
          *(undefined4 *)(DAT_8c0778c0 + ar4) = 0;
          puVar4 = PTR_DAT_8c0778c4;
          uVar2 = (*(code *)PTR_FUN_8c0778c8)(ar4 + 0x14,PTR_DAT_8c0778c4,ar6,ar7);
          *(undefined4 *)(puVar7 + iVar1 + 0x20) = uVar2;
          *(undefined4 *)(DAT_8c0778cc + ar4) = *(undefined4 *)(puVar7 + iVar1 + 0x20);
          *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c0778d0 + iVar1 + -0x14;
          (*(code *)PTR_FUN_8c0778d4)(ar4 + 0x14,puVar4,ar6,ar7);
          (*(code *)PTR_FUN_8c0778d8)
                    (puVar7 + DAT_8c0778d0 + iVar1 + -0x14,PTR_DAT_8c0778c4,ar6,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + iVar1 + 0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar8 = *(float *)(puVar7 + iVar1 + 0x1c);
            fVar9 = DAT_8c0778dc;
          }
          else {
            *(undefined8 *)(puVar7 + iVar1 + 0x1c) = in_dr0;
            fVar8 = DAT_8c0778dc;
            fVar9 = DAT_8c0778e0;
          }
          *(uint *)(puVar7 + (int)DAT_8c0778e0 + iVar1 + -0x14) =
               (uint)(in_FPSCR_PR == '\0' && fVar8 < fVar9);
          (*(code *)PTR_Vec3_dtor_8c0778e4)
                    (puVar7 + DAT_8c0778d0 + iVar1 + -0x14,0xffffffff,ar6,ar7);
          if (*(int *)(puVar7 + (int)DAT_8c0778e0 + iVar1 + -0x14) != 0) {
            *(undefined4 *)(DAT_8c0778cc + ar4) = 0;
          }
          *(undefined4 *)(DAT_8c0778e8 + ar4) = 0;
        }
        break;
      case 8:
        uVar2 = (*(code *)PTR_FUN_8c077988)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(puVar7 + iVar1 + 0x18) = uVar2;
        if (*(int *)(puVar7 + iVar1 + 0x18) == 0) {
          *(undefined4 *)(DAT_8c07798c + ar4) = 0;
          uVar2 = (*(code *)PTR_FUN_8c077994)(ar4 + 0x14,PTR_DAT_8c077990,ar6,ar7);
          *(undefined4 *)(puVar7 + iVar1 + 0x14) = uVar2;
          *(undefined4 *)(DAT_8c077998 + ar4) = *(undefined4 *)(puVar7 + iVar1 + 0x14);
          *(undefined1 **)(puVar7 + iVar1 + -0x18) = puVar7 + DAT_8c07799c + iVar1 + -0x14;
          (*(code *)PTR_FUN_8c0779a0)(ar4 + 0x14,PTR_FUN_8c0779a0,ar6,ar7);
          ar6 = PTR_FUN_8c0779a4;
          (*(code *)PTR_FUN_8c0779a4)
                    (puVar7 + DAT_8c07799c + iVar1 + -0x14,PTR_DAT_8c077990,PTR_FUN_8c0779a4,ar7);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(puVar7 + iVar1 + 0x10) = (int)((ulonglong)in_dr0 >> 0x20);
            fVar8 = *(float *)(puVar7 + iVar1 + 0x10);
            fVar9 = DAT_8c0779a8;
          }
          else {
            *(undefined8 *)(puVar7 + iVar1 + 0x10) = in_dr0;
            fVar8 = DAT_8c0779a8;
            fVar9 = DAT_8c0779ac;
          }
          *(uint *)(puVar7 + (int)DAT_8c0779ac + iVar1 + -0x14) =
               (uint)(in_FPSCR_PR == '\0' && fVar8 < fVar9);
          (*(code *)PTR_Vec3_dtor_8c0779b0)
                    (puVar7 + DAT_8c07799c + iVar1 + -0x14,0xffffffff,ar6,ar7);
          if (*(int *)(puVar7 + (int)DAT_8c0779ac + iVar1 + -0x14) != 0) {
            *(undefined4 *)(DAT_8c077998 + ar4) = 0;
          }
          *(undefined4 *)(DAT_8c0779b4 + ar4) = 0;
        }
      }
    }
  }
  else {
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c077a1c)
                      (ar4 + DAT_8c077a18,puVar4,ar6,ar7);
    *(undefined4 *)(puVar7 + iVar1 + 0xc) = uVar2;
    if (*(int *)(puVar7 + iVar1 + 0xc) == 1) {
      (*(code *)PTR_FUN_8c077a20)(ar4,puVar4,ar6,ar7);
      uVar5 = 0;
      *(undefined4 *)(DAT_8c077a24 + ar4) = 0;
    }
  }
  *(undefined4 *)(puVar7 + DAT_8c077a28 + iVar1 + -0x14) = uVar5;
  (*(code *)PTR_Vec3_dtor_8c077a30)
            (puVar7 + DAT_8c077a2c + iVar1 + -0x14,0xffffffff,ar6,PTR_Vec3_dtor_8c077a30);
  return *(undefined4 *)(puVar7 + DAT_8c077a28 + iVar1 + -0x14);
}



/* FUN_8c077a38 @ 8c077a38 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c077f68) */
/* WARNING: Switch with 1 destination removed at 0x8c077a80 */
/* WARNING: Switch with 1 destination removed at 0x8c077af6 */
/* WARNING: Switch with 1 destination removed at 0x8c077b6c */
/* WARNING: Switch with 1 destination removed at 0x8c077baa */
/* WARNING: Switch with 1 destination removed at 0x8c077d3c */
/* WARNING: Switch with 1 destination removed at 0x8c077d50 */
/* WARNING: Switch with 1 destination removed at 0x8c077e60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c077a38(int ar4,undefined1 *ar5,undefined1 *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *a6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 uVar9;
  undefined4 unaff_r10;
  int iVar10;
  undefined4 unaff_r11;
  int iVar11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined8 *puVar12;
  float fVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 in_dr0;
  float fVar17;
  double dVar16;
  undefined *puVar18;
  undefined4 uVar19;
  undefined8 in_dr14;
  double dVar20;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar21;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_10 [8];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
    puVar12 = &uStack_8;
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar12 = (undefined8 *)auStack_10;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)((int)puVar12 + -4) = unaff_r14;
  *(undefined4 *)((int)puVar12 + -8) = unaff_r13;
  *(undefined4 *)((int)puVar12 + -0xc) = 1;
  *(undefined4 *)((int)puVar12 + -0x10) = unaff_r11;
  *(undefined4 *)((int)puVar12 + -0x14) = unaff_r10;
  *(undefined4 *)((int)puVar12 + -0x18) = unaff_r9;
  *(undefined4 *)((int)puVar12 + -0x1c) = unaff_r8;
  *(undefined4 *)((int)puVar12 + -0x20) = in_PR;
  iVar1 = -DAT_8c077a88;
  *(undefined **)((int)puVar12 + iVar1 + -0x20) = ar7;
  iVar11 = *(int *)((int)puVar12 + DAT_8c077a8c + iVar1 + -0x20);
  iVar10 = *(int *)((int)puVar12 + DAT_8c077a90 + iVar1 + -0x20);
  uVar5 = 1;
  uVar9 = 1;
  puVar7 = ar6;
  uVar2 = (*(code *)PTR_get_field_6c_028cc4_8c077a94)
                    (*(undefined4 *)((int)puVar12 + iVar1 + -0x20),1,ar6,ar7);
  uVar19 = (undefined4)in_dr14;
  *(undefined4 *)((int)puVar12 + DAT_8c077a98 + iVar1 + -0x20) = uVar2;
  iVar4 = *(int *)((int)puVar12 + DAT_8c077a98 + iVar1 + -0x20);
  if (iVar4 == 0) {
    return 2;
  }
  (*(code *)PTR_Vec3_ctor_zero_8c077b04)
            ((undefined1 *)((int)puVar12 + DAT_8c077b00 + iVar1 + -0x20),uVar5,puVar7,ar7);
  (*(code *)PTR_Vec3_set_zero_8c077b0c)
            ((undefined1 *)((int)puVar12 + DAT_8c077b08 + iVar1 + -0x20),uVar5,puVar7,ar7);
  (*(code *)PTR_FUN_8c077b14)
            ((undefined1 *)((int)puVar12 + DAT_8c077b10 + iVar1 + -0x20),uVar5,puVar7,ar7);
  (*(code *)PTR_FUN_8c077b14)
            ((undefined1 *)((int)puVar12 + DAT_8c077b18 + iVar1 + -0x20),uVar5,puVar7,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c077b20)(ar4 + DAT_8c077b1c,uVar5,puVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar12 + DAT_8c077b24 + iVar1 + -0x20) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar19 = *(undefined4 *)((int)puVar12 + DAT_8c077b24 + iVar1 + -0x20);
  }
  else {
    *(undefined8 *)((int)puVar12 + DAT_8c077b24 + iVar1 + -0x20) = in_dr0;
  }
  iVar3 = *(int *)(DAT_8c077b28 + ar4);
  if (iVar3 == 0) {
    ar7 = (undefined *)((int)puVar12 + DAT_8c077b74 + iVar1 + -0x20);
    puVar7 = (undefined1 *)((int)puVar12 + DAT_8c077b78 + iVar1 + -0x20);
    (*(code *)PTR_FUN_8c077b80)
              (iVar4,(undefined1 *)((int)puVar12 + DAT_8c077b7c + iVar1 + -0x20),puVar7,ar7);
    fVar13 = DAT_8c077b84;
    fVar17 = DAT_8c077b88;
    if (in_FPSCR_SZ == '\0') {
      fVar13 = *(float *)((int)puVar12 + DAT_8c077b78 + iVar1 + -0x20);
      fVar17 = DAT_8c077b84;
    }
    if (in_FPSCR_PR == '\0' && fVar17 < fVar13) {
      (*(code *)PTR_FUN_8c077bb4)(ar4,0,puVar7,ar7);
      (*(code *)PTR_FUN_8c077bb8)(ar4,ar6,ar5,ar7);
      puVar7 = ar5;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)((int)puVar12 + iVar1) = ar4;
      *(int *)((int)DAT_8c077b88 + *(int *)((int)puVar12 + iVar1)) =
           *(int *)((int)DAT_8c077b88 + *(int *)((int)puVar12 + iVar1)) + 1;
      *(undefined4 *)(DAT_8c077b8c + ar4) = 0;
    }
    goto LAB_8c078ef6;
  }
  if (iVar3 == 1) {
    *(undefined4 *)((int)puVar12 + iVar1 + -4) = *(undefined4 *)(DAT_8c077c48 + ar4);
    uVar2 = (*(code *)PTR_pure_virtual_stub_8c077c58)(ar4,ar5,ar6,ar7);
    *(undefined4 *)((int)puVar12 + DAT_8c077c5c + iVar1 + -0x20) = uVar2;
    puVar7 = ar6;
    if (*(int *)((int)puVar12 + DAT_8c077c5c + iVar1 + -0x20) == 0) {
      uVar5 = 0;
      uVar2 = 0xffffffff;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c077c64)(ar4 + DAT_8c077c60,7,0xffffffff,0);
      puVar6 = PTR_s_CAnimBody_SetFrame_033e6e_8c077c68;
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c077c68)
                (ar4 + DAT_8c077c60,PTR_s_CAnimBody_SetFrame_033e6e_8c077c68,uVar2,uVar5);
      if ((*(int *)(DAT_8c077c48 + ar4) < 2) ||
         (puVar6 = (undefined *)0x5, 5 < *(int *)(DAT_8c077c48 + ar4))) {
        if ((*(int *)(DAT_8c077c8c + ar4) == 6) || (*(int *)(DAT_8c077c8c + ar4) == 7)) {
          *(undefined4 *)(DAT_8c077c90 + ar4) = 1;
        }
        else {
          *(undefined4 *)(DAT_8c077e68 + ar4) = 4;
        }
      }
      else {
        *(undefined4 *)(DAT_8c077c6c + ar4) = 2;
      }
      *(undefined4 *)(DAT_8c077e6c + ar4) = 0;
      (*(code *)PTR_FUN_8c077e70)(*(undefined4 *)((int)puVar12 + iVar1 + -0x20),puVar6,uVar2,uVar5);
      uVar2 = (*(code *)PTR_get_field_6c_02f46c_8c077e74)(iVar4,puVar6,uVar2,uVar5);
      *(undefined4 *)((int)puVar12 + DAT_8c077e78 + iVar1 + -0x20) = uVar2;
      if (*(int *)((int)puVar12 + DAT_8c077e78 + iVar1 + -0x20) < 0x32) {
        *(undefined4 *)(DAT_8c077e7c + ar4) = 1;
      }
      puVar7 = DAT_8c077e80;
      *(int *)((int)puVar12 + iVar1 + -8) = ar4;
      *(int *)(DAT_8c077e80 + *(int *)((int)puVar12 + iVar1 + -8)) =
           *(int *)(DAT_8c077e80 + *(int *)((int)puVar12 + iVar1 + -8)) + 1;
      *(undefined4 *)(DAT_8c077e84 + ar4) = 0;
      iVar11 = ar4 + 0x14;
      (*(code *)PTR_Vec3_assign_8c077e88)(ar4 + 0x54,iVar11,puVar7,uVar5);
      *(int *)((int)puVar12 + iVar1 + -0xc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c077e8c,
                                  *(undefined4 *)(*(int *)((int)puVar12 + iVar1 + -0xc) + 0x58));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar12 + iVar1 + -0xc) + 0x58);
        dVar20 = (double)CONCAT44(DAT_8c077e90,DAT_8c077e8c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar20 * dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar12 + iVar1 + -0xc) + 0x58) = fVar13;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar12 + iVar1 + -0xc) + 0x58) = in_xd0;
      }
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077e90 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_normalize_8c077e94)(ar4 + 0x54,iVar11,puVar7,uVar5);
      ar7 = PTR_Vec3_assign_8c077e88;
      (*(code *)PTR_Vec3_assign_8c077e88)
                (ar4 + 0x54,(undefined1 *)((int)puVar12 + DAT_8c077e90 + iVar1 + -0x20),puVar7,
                 PTR_Vec3_assign_8c077e88);
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077e90 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
    }
    if ((*(int *)(DAT_8c077e9c + ar4) < 2) && (*(int *)(ar4 + 0x40) == 4)) {
      ar7 = (undefined *)((int)puVar12 + DAT_8c077ea0 + iVar1 + -0x20);
      puVar7 = (undefined1 *)((int)puVar12 + DAT_8c077ea4 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c077eac)
                (iVar4,(undefined1 *)((int)puVar12 + DAT_8c077ea8 + iVar1 + -0x20),puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077eb0 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c077eb8)(ar4 + DAT_8c077eb4,ar4 + 0x48,puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077ebc + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c077eb8)
                ((undefined1 *)((int)puVar12 + DAT_8c077ec0 + iVar1 + -0x24),iVar10 + 4,puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077ec4 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_add_8c077ecc)
                ((undefined1 *)((int)puVar12 + DAT_8c077ec8 + iVar1 + -0x24),ar5,puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077ed0 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_sub_8c077ed8)
                ((undefined1 *)((int)puVar12 + DAT_8c077ed4 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c077ea4 + iVar1 + -0x24),puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c077e84 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c077eb8)
                ((undefined1 *)((int)puVar12 + DAT_8c077ee0 + iVar1 + -0x24),PTR_DAT_8c077edc,puVar7
                 ,ar7);
      (*(code *)PTR_FUN_8c077ee4)
                ((undefined1 *)((int)puVar12 + DAT_8c077ea8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c077e84 + iVar1 + -0x20),puVar7,ar7);
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077e84 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077ed0 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077ec4 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077ebc + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c077e98)
                ((undefined1 *)((int)puVar12 + DAT_8c077eb0 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      (*(code *)PTR_FUN_8c077ee8)(iVar4,uVar2,puVar7,ar7);
    }
    goto LAB_8c078ef6;
  }
  if (iVar3 != 2) goto LAB_8c078ef6;
  *(undefined4 *)(DAT_8c07804c + ar4) = 0;
  (*(code *)PTR_Vec3_ctor_copy_8c078054)
            ((undefined1 *)((int)puVar12 + DAT_8c078050 + iVar1 + -0x20),ar4 + 0x54,puVar7,ar7);
  (*(code *)PTR_FUN_8c078058)
            (ar4,(undefined1 *)((int)puVar12 + DAT_8c078050 + iVar1 + -0x20),puVar7,ar7);
  (*(code *)PTR_Vec3_dtor_8c07805c)
            ((undefined1 *)((int)puVar12 + DAT_8c078050 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
  puVar6 = PTR_CAnimBody_GetCurFrame_8c078064;
  (*(code *)PTR_CAnimBody_GetCurFrame_8c078064)
            (DAT_8c078060 + ar4,PTR_CAnimBody_GetCurFrame_8c078064,puVar7,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)puVar12 + DAT_8c078068 + iVar1 + -0x20) = (int)((ulonglong)in_dr0 >> 0x20);
    dVar20 = (double)CONCAT44(*(undefined4 *)((int)puVar12 + DAT_8c078068 + iVar1 + -0x20),uVar19);
  }
  else {
    *(undefined8 *)((int)puVar12 + DAT_8c078068 + iVar1 + -0x20) = in_dr0;
    dVar20 = *(double *)((int)puVar12 + DAT_8c078068 + iVar1 + -0x20);
  }
  if (in_FPSCR_PR == '\0') {
    dVar20 = (double)CONCAT44((float)((ulonglong)dVar20 >> 0x20) + 1.0,SUB84(dVar20,0));
  }
  else {
    dVar20 = dVar20 + (double)CONCAT44(0x3f800000,(int)in_dr0);
  }
  uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c07806c)(DAT_8c078060 + ar4,puVar6,puVar7,ar7);
  *(undefined4 *)((int)puVar12 + DAT_8c078070 + iVar1 + -0x20) = uVar2;
  uVar2 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c078074)
                    (DAT_8c078060 + ar4,*(undefined4 *)((int)puVar12 + DAT_8c078070 + iVar1 + -0x20)
                     ,puVar7,ar7);
  *(undefined4 *)((int)puVar12 + DAT_8c078078 + iVar1 + -0x20) = uVar2;
  fVar13 = (float)*(int *)((int)puVar12 + DAT_8c078078 + iVar1 + -0x20);
  dVar16 = (double)(ulonglong)(uint)fVar13;
  if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
    if (in_FPSCR_SZ == '\0') {
      dVar16 = (double)CONCAT44(DAT_8c07807c,fVar13);
    }
    else {
      dVar16 = (double)CONCAT44(_DAT_8c078080,DAT_8c07807c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (float)((ulonglong)dVar16 >> 0x20);
      dVar16 = (double)CONCAT44(fVar13,SUB84(dVar16,0) + fVar13);
    }
    else {
      dVar16 = dVar16 + dVar16;
    }
  }
  if (in_FPSCR_PR == '\0') {
    bVar21 = (float)((ulonglong)dVar20 >> 0x20) < SUB84(dVar16,0);
  }
  else {
    bVar21 = dVar20 < dVar16;
  }
  if (!bVar21) {
    uVar2 = (*(code *)PTR_get_field_1c_026dd8_8c07806c)
                      (DAT_8c078060 + ar4,*(int *)((int)puVar12 + DAT_8c078078 + iVar1 + -0x20),
                       puVar7,ar7);
    uVar14 = SUB84(dVar16,0);
    uVar5 = SUB84(dVar20,0);
    *(undefined4 *)((int)puVar12 + _DAT_8c078080 + iVar1 + -0x20) = uVar2;
    uVar2 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c078074)
                      (DAT_8c078060 + ar4,
                       *(undefined4 *)((int)puVar12 + _DAT_8c078080 + iVar1 + -0x20),puVar7,ar7);
    *(undefined4 *)((int)puVar12 + DAT_8c078084 + iVar1 + -0x20) = uVar2;
    if (in_FPSCR_PR == '\0') {
      dVar20 = (double)CONCAT44((float)*(int *)((int)puVar12 + DAT_8c078084 + iVar1 + -0x20),uVar5);
    }
    else {
      dVar20 = (double)*(int *)((int)puVar12 + DAT_8c078084 + iVar1 + -0x20);
    }
    dVar16 = (double)(ulonglong)uVar14;
    if (in_FPSCR_PR == '\0') {
      bVar21 = (float)((ulonglong)dVar20 >> 0x20) < 0.0;
    }
    else {
      bVar21 = dVar20 < dVar16;
    }
    if (bVar21) {
      if (in_FPSCR_SZ == '\0') {
        dVar16 = (double)CONCAT44(DAT_8c07807c,uVar14);
      }
      else {
        dVar16 = (double)CONCAT44(_DAT_8c078080,DAT_8c07807c);
      }
    }
  }
  (*(code *)PTR_FUN_8c078094)
            (iVar4,(undefined1 *)((int)puVar12 + DAT_8c078090 + iVar1 + -0x20),
             (undefined1 *)((int)puVar12 + DAT_8c07808c + iVar1 + -0x20),
             (undefined1 *)((int)puVar12 + DAT_8c078088 + iVar1 + -0x20));
  ar7 = (undefined *)((int)puVar12 + DAT_8c078098 + iVar1 + -0x20);
  a6 = (int *)((int)puVar12 + DAT_8c07809c + iVar1 + -0x20);
  (*(code *)PTR_FUN_8c0780a4)
            (iVar4,(undefined1 *)((int)puVar12 + DAT_8c0780a0 + iVar1 + -0x20),a6,ar7);
  if (*(int *)(DAT_8c0780a8 + ar4) == 1) {
LAB_8c078026:
    switch(*(undefined4 *)(DAT_8c0780bc + ar4)) {
    case 2:
      uVar2 = (*(code *)PTR_FUN_8c07827c)(ar4 + DAT_8c078278,0x19,a6,ar7);
      *(undefined4 *)((int)puVar12 + DAT_8c078280 + iVar1 + -0x20) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078284)
                        (*(undefined4 *)((int)puVar12 + DAT_8c078280 + iVar1 + -0x20),
                         PTR_deref_u32_8c078284,a6,ar7);
      *(undefined4 *)((int)puVar12 + DAT_8c078288 + iVar1 + -0x20) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c07828c + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078290)
                (ar4 + DAT_8c078278,
                 *(undefined4 *)**(undefined4 **)((int)puVar12 + DAT_8c078280 + iVar1 + -0x24),a6,
                 ar7);
      (*(code *)PTR_Vec3_assign_8c078298)
                ((undefined1 *)((int)puVar12 + DAT_8c078294 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c07828c + iVar1 + -0x20),a6,ar7);
      puVar6 = PTR_Vec3_dtor_8c07829c;
      (*(code *)PTR_Vec3_dtor_8c07829c)
                ((undefined1 *)((int)puVar12 + DAT_8c07828c + iVar1 + -0x20),0xffffffff,a6,
                 PTR_Vec3_dtor_8c07829c);
      uVar19 = 0x19;
      uVar5 = 0x19;
      uVar2 = (*(code *)PTR_FUN_8c07827c)(ar4 + DAT_8c078278,0x19,0x19,puVar6);
      *(undefined4 *)((int)puVar12 + DAT_8c0782a0 + iVar1 + -0x20) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078284)
                        (*(undefined4 *)((int)puVar12 + DAT_8c0782a0 + iVar1 + -0x20),uVar5,uVar19,
                         puVar6);
      *(undefined4 *)((int)puVar12 + DAT_8c0782a4 + iVar1 + -0x20) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0782a8 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0782ac)
                (ar4 + DAT_8c078278,
                 *(undefined4 *)(**(int **)((int)puVar12 + DAT_8c0782a0 + iVar1 + -0x24) + 4),uVar19
                 ,puVar6);
      (*(code *)PTR_vec3_copy_8c023d8c_8c0782b4)
                ((undefined1 *)((int)puVar12 + DAT_8c0782b0 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0782a8 + iVar1 + -0x20),uVar19,puVar6);
      (*(code *)PTR_object_dtor_delete_8c0782b8)
                ((undefined1 *)((int)puVar12 + DAT_8c0782a8 + iVar1 + -0x20),0xffffffff,uVar19,
                 puVar6);
      uVar5 = 0x19;
      uVar2 = (*(code *)PTR_FUN_8c07827c)(ar4 + DAT_8c078278,0x19,uVar19,puVar6);
      *(undefined4 *)((int)puVar12 + DAT_8c0782bc + iVar1 + -0x20) = uVar2;
      puVar6 = PTR_deref_u32_8c078284;
      uVar2 = (*(code *)PTR_deref_u32_8c078284)
                        (*(undefined4 *)((int)puVar12 + DAT_8c0782bc + iVar1 + -0x20),uVar5,uVar19,
                         PTR_deref_u32_8c078284);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x5c) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0782c0 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0782c4)
                (ar4 + DAT_8c078278,
                 *(undefined4 *)(**(int **)((int)puVar12 + DAT_8c0782bc + iVar1 + -0x24) + 8),uVar2,
                 puVar6);
      (*(code *)PTR_FUN_8c0782cc)
                ((undefined1 *)((int)puVar12 + DAT_8c0782c8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0782c0 + iVar1 + -0x20),uVar2,puVar6);
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0782d0)
                ((undefined1 *)((int)puVar12 + DAT_8c0782c0 + iVar1 + -0x20),0xffffffff,uVar2,puVar6
                );
      (*(code *)PTR_vec3_copy_8c02b5fc_8c0782d8)
                ((undefined1 *)((int)puVar12 + DAT_8c0782d4 + iVar1 + -0x20),iVar11,uVar2,puVar6);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0782dc + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0782e8)
                ((undefined1 *)((int)puVar12 + DAT_8c0782e4 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c0782e0 + iVar1 + -0x24),uVar2,puVar6);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0782ec + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c0782f4)
                ((undefined1 *)((int)puVar12 + DAT_8c0782f0 + iVar1 + -0x24),iVar10 + 4,uVar2,puVar6
                );
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0782f8 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_add_8c078300)
                ((undefined1 *)((int)puVar12 + DAT_8c0782fc + iVar1 + -0x24),ar5,uVar2,puVar6);
      (*(code *)PTR_Vec3_assign_8c078384)
                ((undefined1 *)((int)puVar12 + DAT_8c078380 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0782f8 + iVar1 + -0x20),uVar2,puVar6);
      ar7 = (undefined *)((int)puVar12 + DAT_8c078388 + iVar1 + -0x20);
      a6 = (int *)PTR_Vec3_dtor_8c07838c;
      (*(code *)PTR_Vec3_dtor_8c07838c)(ar7,0xffffffff,PTR_Vec3_dtor_8c07838c,ar7);
      (*(code *)PTR_Vec3_dtor_8c07838c)
                ((undefined1 *)((int)puVar12 + DAT_8c078390 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07838c)
                ((undefined1 *)((int)puVar12 + DAT_8c078394 + iVar1 + -0x20),0xffffffff,a6,ar7);
      puVar6 = (undefined *)0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c07839c)
                ((undefined1 *)((int)puVar12 + DAT_8c078398 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c0783ac)(iVar4,puVar6,a6,ar7);
      break;
    case 3:
    case 4:
    case 5:
      uVar5 = 0x1a;
      uVar2 = (*(code *)PTR_FUN_8c0785b8)(ar4 + DAT_8c0785b4,0x1a,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x58) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c0785bc)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x58),uVar5,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x54) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0785c0 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0785c4)
                (ar4 + DAT_8c0785b4,*(undefined4 *)**(undefined4 **)((int)puVar12 + iVar1 + 0x54),a6
                 ,ar7);
      (*(code *)PTR_Vec3_assign_8c0785cc)
                ((undefined1 *)((int)puVar12 + DAT_8c0785c8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0785c0 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0785d0)
                ((undefined1 *)((int)puVar12 + DAT_8c0785c0 + iVar1 + -0x20),0xffffffff,a6,ar7);
      uVar5 = 0x1a;
      iVar3 = DAT_8c0785b4;
      uVar2 = (*(code *)PTR_FUN_8c0785b8)(ar4 + DAT_8c0785b4,0x1a,DAT_8c0785b4,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x50) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c0785bc)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x50),uVar5,iVar3,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x4c) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0785d4 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c0785d8)
                (ar4 + DAT_8c0785b4,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x4c) + 4),
                 iVar3,ar7);
      (*(code *)PTR_vec3_copy_8c023d8c_8c0785e0)
                ((undefined1 *)((int)puVar12 + DAT_8c0785dc + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0785d4 + iVar1 + -0x20),iVar3,ar7);
      puVar6 = PTR_object_dtor_delete_8c0785e4;
      (*(code *)PTR_object_dtor_delete_8c0785e4)
                ((undefined1 *)((int)puVar12 + DAT_8c0785d4 + iVar1 + -0x20),0xffffffff,iVar3,
                 PTR_object_dtor_delete_8c0785e4);
      uVar5 = 0x1a;
      uVar2 = (*(code *)PTR_FUN_8c0785b8)(ar4 + DAT_8c0785b4,0x1a,iVar3,puVar6);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x48) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c0785bc)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x48),uVar5,iVar3,puVar6);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x44) = uVar2;
      ar7 = (undefined *)((int)puVar12 + DAT_8c0785e8 + iVar1 + -0x20);
      *(undefined **)((int)puVar12 + iVar1 + -0x24) = ar7;
      a6 = *(int **)((int)puVar12 + iVar1 + 0x44);
      (*(code *)PTR_FUN_8c0785ec)(ar4 + DAT_8c0785b4,*(undefined4 *)(*a6 + 8),a6,ar7);
      (*(code *)PTR_FUN_8c0785f4)
                ((undefined1 *)((int)puVar12 + DAT_8c0785f0 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0785e8 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c0785f8)
                ((undefined1 *)((int)puVar12 + DAT_8c0785e8 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c078600)
                ((undefined1 *)((int)puVar12 + DAT_8c0785fc + iVar1 + -0x20),iVar11,a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078604 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078610)
                ((undefined1 *)((int)puVar12 + DAT_8c07860c + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c078608 + iVar1 + -0x24),a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078614 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c07861c)
                ((undefined1 *)((int)puVar12 + DAT_8c078618 + iVar1 + -0x24),iVar10 + 4,a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078620 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_add_8c078628)
                ((undefined1 *)((int)puVar12 + DAT_8c078624 + iVar1 + -0x24),ar5,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c0785cc)
                ((undefined1 *)((int)puVar12 + DAT_8c0785c8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078620 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0785d0)
                ((undefined1 *)((int)puVar12 + DAT_8c078620 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0785d0)
                ((undefined1 *)((int)puVar12 + DAT_8c078614 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c0785d0)
                ((undefined1 *)((int)puVar12 + DAT_8c078604 + iVar1 + -0x20),0xffffffff,a6,ar7);
      puVar6 = (undefined *)0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c0785e4)
                ((undefined1 *)((int)puVar12 + DAT_8c0785fc + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c078634)(iVar4,puVar6,a6,ar7);
      break;
    case 6:
      uVar2 = (*(code *)PTR_FUN_8c07883c)(ar4 + DAT_8c078838,0x22,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x40) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078840)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x40),PTR_deref_u32_8c078840,a6,ar7)
      ;
      *(undefined4 *)((int)puVar12 + iVar1 + 0x3c) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078844 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078848)
                (ar4 + DAT_8c078838,*(undefined4 *)**(undefined4 **)((int)puVar12 + iVar1 + 0x3c),a6
                 ,ar7);
      (*(code *)PTR_Vec3_assign_8c078850)
                ((undefined1 *)((int)puVar12 + DAT_8c07884c + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078844 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078854)
                ((undefined1 *)((int)puVar12 + DAT_8c078844 + iVar1 + -0x20),0xffffffff,a6,ar7);
      uVar2 = (*(code *)PTR_FUN_8c07883c)(ar4 + DAT_8c078838,0x22,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x38) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078840)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x38),
                         *(undefined4 *)((int)puVar12 + iVar1 + 0x38),a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x34) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078858 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c07885c)
                (ar4 + DAT_8c078838,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x34) + 4),
                 DAT_8c078838,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x34) + 4));
      puVar8 = (undefined1 *)((int)puVar12 + DAT_8c078858 + iVar1 + -0x20);
      puVar7 = (undefined1 *)((int)puVar12 + DAT_8c078860 + iVar1 + -0x20);
      (*(code *)PTR_vec3_copy_8c023d8c_8c078864)(puVar7,puVar8,puVar7,puVar8);
      (*(code *)PTR_object_dtor_delete_8c078868)
                ((undefined1 *)((int)puVar12 + DAT_8c078858 + iVar1 + -0x20),0xffffffff,puVar7,
                 puVar8);
      uVar5 = 0x22;
      uVar2 = (*(code *)PTR_FUN_8c07883c)(ar4 + DAT_8c078838,0x22,puVar7,puVar8);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x30) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078840)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x30),uVar5,puVar7,puVar8);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x2c) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c07886c + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078870)
                (ar4 + DAT_8c078838,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x2c) + 8),
                 puVar7,puVar8);
      (*(code *)PTR_FUN_8c078878)
                ((undefined1 *)((int)puVar12 + DAT_8c078874 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c07886c + iVar1 + -0x20),puVar7,puVar8);
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c07887c)
                ((undefined1 *)((int)puVar12 + DAT_8c07886c + iVar1 + -0x20),0xffffffff,puVar7,
                 puVar8);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c078884)
                ((undefined1 *)((int)puVar12 + DAT_8c078880 + iVar1 + -0x20),iVar11,puVar7,puVar8);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078888 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078894)
                ((undefined1 *)((int)puVar12 + DAT_8c078890 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c07888c + iVar1 + -0x24),puVar7,puVar8);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078898 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c0788a0)
                ((undefined1 *)((int)puVar12 + DAT_8c07889c + iVar1 + -0x24),iVar10 + 4,puVar7,
                 puVar8);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c0788a4 + iVar1 + -0x20);
      ar7 = (undefined *)((int)puVar12 + DAT_8c0788a8 + iVar1 + -0x24);
      a6 = (int *)PTR_Vec3_add_8c0788ac;
      (*(code *)PTR_Vec3_add_8c0788ac)(ar7,ar5,PTR_Vec3_add_8c0788ac,ar7);
      (*(code *)PTR_Vec3_assign_8c078850)
                ((undefined1 *)((int)puVar12 + DAT_8c07884c + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c0788a4 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078854)
                ((undefined1 *)((int)puVar12 + DAT_8c0788a4 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078854)
                ((undefined1 *)((int)puVar12 + DAT_8c078898 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078854)
                ((undefined1 *)((int)puVar12 + DAT_8c078888 + iVar1 + -0x20),0xffffffff,a6,ar7);
      puVar6 = (undefined *)0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c078868)
                ((undefined1 *)((int)puVar12 + DAT_8c078880 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_FUN_8c0788b8)(iVar4,puVar6,a6,ar7);
      break;
    case 7:
      uVar5 = 0x2b;
      uVar2 = (*(code *)PTR_FUN_8c078ac0)(ar4 + DAT_8c078abc,0x2b,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x28) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078ac4)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x28),uVar5,a6,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x24) = uVar2;
      puVar7 = (undefined1 *)((int)puVar12 + DAT_8c078ac8 + iVar1 + -0x20);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) = puVar7;
      (*(code *)PTR_FUN_8c078acc)
                (ar4 + DAT_8c078abc,*(undefined4 *)**(undefined4 **)((int)puVar12 + iVar1 + 0x24),
                 puVar7,uVar2);
      (*(code *)PTR_Vec3_assign_8c078ad4)
                ((undefined1 *)((int)puVar12 + DAT_8c078ad0 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078ac8 + iVar1 + -0x20),puVar7,uVar2);
      (*(code *)PTR_Vec3_dtor_8c078ad8)
                ((undefined1 *)((int)puVar12 + DAT_8c078ac8 + iVar1 + -0x20),0xffffffff,puVar7,uVar2
                );
      uVar5 = (*(code *)PTR_FUN_8c078ac0)(ar4 + DAT_8c078abc,0x2b,puVar7,uVar2);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x20) = uVar5;
      uVar5 = (*(code *)PTR_deref_u32_8c078ac4)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x20),uVar5,puVar7,uVar2);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x1c) = uVar5;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078adc + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078ae0)
                (ar4 + DAT_8c078abc,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x1c) + 4),
                 puVar7,uVar2);
      (*(code *)PTR_vec3_copy_8c023d8c_8c078ae8)
                ((undefined1 *)((int)puVar12 + DAT_8c078ae4 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078adc + iVar1 + -0x20),puVar7,uVar2);
      ar7 = (undefined *)0xffffffff;
      puVar7 = (undefined1 *)((int)puVar12 + DAT_8c078adc + iVar1 + -0x20);
      (*(code *)PTR_object_dtor_delete_8c078aec)(puVar7,0xffffffff,puVar7,0xffffffff);
      uVar2 = (*(code *)PTR_FUN_8c078ac0)(ar4 + DAT_8c078abc,0x2b,puVar7,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x18) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c078ac4)
                        (*(undefined4 *)((int)puVar12 + iVar1 + 0x18),
                         *(undefined4 *)((int)puVar12 + iVar1 + 0x18),puVar7,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0x14) = uVar2;
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078af0 + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078af4)
                (ar4 + DAT_8c078abc,*(undefined4 *)(**(int **)((int)puVar12 + iVar1 + 0x14) + 8),
                 puVar7,ar7);
      (*(code *)PTR_FUN_8c078afc)
                ((undefined1 *)((int)puVar12 + DAT_8c078af8 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078af0 + iVar1 + -0x20),puVar7,ar7);
      (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c078b00)
                ((undefined1 *)((int)puVar12 + DAT_8c078af0 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c078b08)
                ((undefined1 *)((int)puVar12 + DAT_8c078b04 + iVar1 + -0x20),iVar11,puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078b0c + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078b18)
                ((undefined1 *)((int)puVar12 + DAT_8c078b14 + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c078b10 + iVar1 + -0x24),puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078b1c + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c078b24)
                ((undefined1 *)((int)puVar12 + DAT_8c078b20 + iVar1 + -0x24),iVar10 + 4,puVar7,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078b28 + iVar1 + -0x20);
      a6 = (int *)PTR_Vec3_add_8c078b30;
      (*(code *)PTR_Vec3_add_8c078b30)
                ((undefined1 *)((int)puVar12 + DAT_8c078b2c + iVar1 + -0x24),ar5,
                 PTR_Vec3_add_8c078b30,ar7);
      (*(code *)PTR_Vec3_assign_8c078ad4)
                ((undefined1 *)((int)puVar12 + DAT_8c078ad0 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078b28 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078ad8)
                ((undefined1 *)((int)puVar12 + DAT_8c078b28 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078ad8)
                ((undefined1 *)((int)puVar12 + DAT_8c078b1c + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078ad8)
                ((undefined1 *)((int)puVar12 + DAT_8c078b0c + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_object_dtor_delete_8c078aec)
                ((undefined1 *)((int)puVar12 + DAT_8c078b04 + iVar1 + -0x20),0xffffffff,a6,ar7);
      puVar6 = (undefined *)(iVar11 + 4);
      (*(code *)PTR_FUN_8c078b3c)(iVar4,puVar6,a6,ar7);
      break;
    default:
      puVar8 = (undefined1 *)((int)puVar12 + DAT_8c078d08 + iVar1 + -0x20);
      puVar7 = (undefined1 *)((int)puVar12 + DAT_8c078d0c + iVar1 + -0x20);
      (*(code *)PTR_FUN_8c078d14)
                (iVar4,(undefined1 *)((int)puVar12 + DAT_8c078d10 + iVar1 + -0x20),puVar7,puVar8);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078d18 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c078d20)(ar4 + DAT_8c078d1c,ar4 + 0x48,puVar7,puVar8);
      ar7 = (undefined *)((int)puVar12 + DAT_8c078d24 + iVar1 + -0x20);
      *(undefined **)((int)puVar12 + iVar1 + -0x24) = ar7;
      a6 = (int *)(iVar10 + 4);
      (*(code *)PTR_Vec3_scale_8c078d20)
                ((undefined1 *)((int)puVar12 + DAT_8c078d28 + iVar1 + -0x24),a6,a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078d2c + iVar1 + -0x20);
      (*(code *)PTR_Vec3_add_8c078d34)
                ((undefined1 *)((int)puVar12 + DAT_8c078d30 + iVar1 + -0x24),ar5,a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078d38 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_sub_8c078d40)
                ((undefined1 *)((int)puVar12 + DAT_8c078d3c + iVar1 + -0x24),
                 (undefined1 *)((int)puVar12 + DAT_8c078d0c + iVar1 + -0x24),a6,ar7);
      *(undefined1 **)((int)puVar12 + iVar1 + -0x24) =
           (undefined1 *)((int)puVar12 + DAT_8c078d44 + iVar1 + -0x20);
      (*(code *)PTR_Vec3_scale_8c078d20)
                ((undefined1 *)((int)puVar12 + DAT_8c078d4c + iVar1 + -0x24),PTR_DAT_8c078d48,a6,ar7
                );
      (*(code *)PTR_FUN_8c078d50)
                ((undefined1 *)((int)puVar12 + DAT_8c078d10 + iVar1 + -0x20),
                 (undefined1 *)((int)puVar12 + DAT_8c078d44 + iVar1 + -0x20),a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078d54)
                ((undefined1 *)((int)puVar12 + DAT_8c078d44 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078d54)
                ((undefined1 *)((int)puVar12 + DAT_8c078d38 + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078d54)
                ((undefined1 *)((int)puVar12 + DAT_8c078d2c + iVar1 + -0x20),0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c078d54)
                ((undefined1 *)((int)puVar12 + DAT_8c078d24 + iVar1 + -0x20),0xffffffff,a6,ar7);
      puVar6 = (undefined *)0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c078d54)
                ((undefined1 *)((int)puVar12 + DAT_8c078d18 + iVar1 + -0x20),0xffffffff,a6,ar7);
      *(int *)((int)puVar12 + iVar1 + -0x10) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar20 = (double)CONCAT44(DAT_8c078d58,
                                  *(undefined4 *)(*(int *)((int)puVar12 + iVar1 + -0x10) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)puVar12 + iVar1 + -0x10) + 0x28);
        dVar20 = (double)CONCAT44(DAT_8c078d5c,DAT_8c078d58);
      }
      if (in_FPSCR_PR == '\0') {
        fVar13 = SUB84(dVar20,0) * (float)((ulonglong)dVar20 >> 0x20);
      }
      else {
        fVar13 = SUB84(dVar20 * dVar20,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)puVar12 + iVar1 + -0x10) + 0x28) = fVar13;
      }
      else {
        *(undefined8 *)(*(int *)((int)puVar12 + iVar1 + -0x10) + 0x28) = in_xd0;
      }
    }
  }
  else {
    puVar6 = DAT_8c078060;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c078064)(DAT_8c078060 + ar4,DAT_8c078060,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)puVar12 + DAT_8c0780ac + iVar1 + -0x20) = (int)((ulonglong)dVar16 >> 0x20);
      puVar15 = *(undefined **)((int)puVar12 + DAT_8c0780ac + iVar1 + -0x20);
      puVar18 = DAT_8c0780b0;
    }
    else {
      *(double *)((int)puVar12 + DAT_8c0780ac + iVar1 + -0x20) = dVar16;
      in_xd0 = *(undefined8 *)((int)puVar12 + DAT_8c0780ac + iVar1 + -0x20);
      puVar15 = DAT_8c0780b0;
      puVar18 = PTR_get_field_24_05c284_8c0780b4;
    }
    if (in_FPSCR_PR != '\0' || (float)puVar15 <= (float)puVar18) goto LAB_8c078026;
    uVar2 = (*(code *)PTR_get_field_24_05c284_8c0780b4)(iVar4,puVar6,a6,ar7);
    *(undefined4 *)((int)puVar12 + DAT_8c0780b8 + iVar1 + -0x20) = uVar2;
    if (*(int *)((int)puVar12 + DAT_8c0780b8 + iVar1 + -0x20) == 0xf) goto LAB_8c078026;
  }
  if (1 < *(int *)(DAT_8c078d5c + ar4)) {
    uVar2 = (*(code *)PTR_get_field_24_05c284_8c078d60)(iVar4,puVar6,a6,ar7);
    *(undefined4 *)((int)puVar12 + iVar1 + 0x10) = uVar2;
    if (*(int *)((int)puVar12 + iVar1 + 0x10) == 0xf) {
      puVar6 = PTR_FUN_8c078d68;
      (*(code *)PTR_FUN_8c078d68)
                ((undefined1 *)((int)puVar12 + DAT_8c078d64 + iVar1 + -0x20),PTR_FUN_8c078d68,a6,ar7
                );
    }
  }
  (*(code *)PTR_FUN_8c078d6c)(iVar4,puVar6,a6,ar7);
  (*(code *)PTR_FUN_8c078d78)(iVar4,puVar6,a6,ar7);
  (*(code *)PTR_FUN_8c078d7c)(ar4,ar6,ar5,ar7);
  if ((*(int *)(DAT_8c078d5c + ar4) < 2) || (5 < *(int *)(DAT_8c078d5c + ar4))) {
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c078ec4)(ar4 + DAT_8c078ec0,2,ar5,ar7);
    *(undefined4 *)((int)puVar12 + iVar1 + 4) = uVar2;
    puVar7 = ar5;
    if (*(int *)((int)puVar12 + iVar1 + 4) == 1) {
      *(int *)((int)puVar12 + iVar1 + -0x18) = ar4;
      *(int *)((int)puVar12 + iVar1 + -0x1c) =
           *(int *)(DAT_8c078ec8 + *(int *)((int)puVar12 + iVar1 + -0x18)) + -1;
      uVar2 = *(undefined4 *)((int)puVar12 + iVar1 + -0x1c);
      *(undefined4 *)(DAT_8c078ec8 + *(int *)((int)puVar12 + iVar1 + -0x18)) = uVar2;
      if (*(int *)((int)puVar12 + iVar1 + -0x1c) < 1) {
        (*(code *)PTR_FUN_8c078ed0)(ar4 + DAT_8c078ecc,uVar2,ar5,ar7);
        *(undefined4 *)(DAT_8c078ec8 + ar4) = 0;
        *(undefined4 *)(DAT_8c078ed4 + ar4) = 0;
        uVar9 = 0;
        *(undefined4 *)(DAT_8c078ed8 + ar4) = 1;
        *(undefined4 *)(DAT_8c078ec8 + ar4) = 0;
        ar7 = (undefined *)0x0;
        puVar7 = (undefined1 *)0xffffffff;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c078ee0)(ar4 + DAT_8c078ec0,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c078ee4)(ar4 + DAT_8c078ec0,uVar2,puVar7,ar7);
      }
      else {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c078f5c)(ar4 + DAT_8c078f58,DAT_8c078f58,ar5,ar7)
        ;
        puVar7 = ar5;
      }
    }
  }
  else {
    iVar4 = *(int *)(DAT_8c078d80 + ar4);
    if (iVar4 < 1) {
      uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c078e10)
                        (ar4 + DAT_8c078e0c,iVar4,ar5,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 8) = uVar2;
      puVar7 = ar5;
      if (*(int *)((int)puVar12 + iVar1 + 8) == 1) {
        (*(code *)PTR_FUN_8c078e18)(ar4 + DAT_8c078e14,uVar2,ar5,ar7);
        *(undefined4 *)(DAT_8c078e1c + ar4) = 0;
        *(undefined4 *)(DAT_8c078e20 + ar4) = 0;
        uVar9 = 0;
        *(undefined4 *)(DAT_8c078e24 + ar4) = 1;
        *(undefined4 *)(DAT_8c078e1c + ar4) = 0;
        ar7 = (undefined *)0x0;
        puVar7 = (undefined1 *)0xffffffff;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c078e2c)(ar4 + DAT_8c078e0c,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c078e30)(ar4 + DAT_8c078e0c,uVar2,puVar7,ar7);
      }
    }
    else {
      uVar2 = (*(code *)PTR_FUN_8c078d90)(ar4 + DAT_8c078d8c,iVar4,ar5,ar7);
      *(undefined4 *)((int)puVar12 + iVar1 + 0xc) = uVar2;
      puVar7 = ar5;
      if (*(int *)((int)puVar12 + iVar1 + 0xc) == 7) {
        *(int *)((int)puVar12 + iVar1 + -0x14) = ar4;
        *(int *)(DAT_8c078d80 + *(int *)((int)puVar12 + iVar1 + -0x14)) =
             *(int *)(DAT_8c078d80 + *(int *)((int)puVar12 + iVar1 + -0x14)) + -1;
      }
    }
  }
LAB_8c078ef6:
  *(undefined4 *)((int)puVar12 + DAT_8c078f60 + iVar1 + -0x20) = uVar9;
  (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c078f68)
            ((undefined1 *)((int)puVar12 + DAT_8c078f64 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
  (*(code *)PTR_free_if_nonnull_wrap_016ac4_8c078f68)
            ((undefined1 *)((int)puVar12 + DAT_8c078f6c + iVar1 + -0x20),0xffffffff,puVar7,ar7);
  (*(code *)PTR_object_dtor_delete_8c078f74)
            ((undefined1 *)((int)puVar12 + DAT_8c078f70 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
  (*(code *)PTR_Vec3_dtor_8c078f7c)
            ((undefined1 *)((int)puVar12 + DAT_8c078f78 + iVar1 + -0x20),0xffffffff,puVar7,ar7);
  return *(undefined4 *)((int)puVar12 + DAT_8c078f60 + iVar1 + -0x20);
}



/* FUN_8c078f84 @ 8c078f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c078f84(ulonglong *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 1) = 0;
    uStack_8 = 0;
    *(undefined4 *)((int)ar4 + 4) = 0;
  }
  else {
    ar4[1] = (ulonglong)in_fr1;
    *(ulonglong *)((int)ar4 + 4) = (ulonglong)in_fr1;
    uStack_8 = in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    *(uint *)ar4 = uStack_8;
  }
  else {
    *ar4 = (ulonglong)uStack_8;
  }
  return 0;
}



/* FUN_8c078fb8 @ 8c078fb8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c078fb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined8 in_xd4;
  char in_FPSCR_SZ;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ar4 + 0x50) = in_fr4;
    *(undefined4 *)(ar4 + 0x54) = in_fr5;
    *(undefined4 *)(ar4 + 0x58) = in_fr6;
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(ar4 + 0x54) = in_xd4;
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(in_fr6,in_fr7);
  }
  return 1;
}



/* FUN_8c078fd0 @ 8c078fd0 callers=0 callees=0 */

/* WARNING: Switch with 1 destination removed at 0x8c079068 */
/* WARNING: Switch with 1 destination removed at 0x8c079076 */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c078fd0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  int *a4;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  undefined8 in_dr0;
  undefined8 uVar5;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_4;
  }
  else {
    puVar4 = auStack_8;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = 1;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar4 + -0x1c) = in_PR;
  iVar1 = -DAT_8c07908c;
  *(int *)(puVar4 + iVar1 + -0x1c) = ar6;
  a4 = *(int **)(puVar4 + DAT_8c079090 + iVar1 + -0x1c);
  (*(code *)PTR_Vec3_ctor_zero_8c07909c)(puVar4 + DAT_8c079094._4_4_ + iVar1 + -0x1c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c0790a4)(puVar4 + DAT_8c0790a0 + iVar1 + -0x1c,ar5,ar6,ar7);
  (**(code **)(DAT_8c0790a8 + *a4))(a4,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar4 + DAT_8c0790ac + iVar1 + -0x1c) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar5 = CONCAT44(DAT_8c0790b0,*(undefined4 *)(puVar4 + DAT_8c0790ac + iVar1 + -0x1c));
  }
  else {
    *(undefined8 *)(puVar4 + DAT_8c0790ac + iVar1 + -0x1c) = in_dr0;
    uVar5 = CONCAT44(DAT_8c0790b4,DAT_8c0790b0);
  }
  if (in_FPSCR_PR == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
    ar6 = ar4 + DAT_8c0790b4;
    (*(code *)PTR_FUN_8c0790b8)(ar6,ar5,ar6,ar7);
    (**(code **)(DAT_8c0790a8 + *a4))(a4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + DAT_8c0790bc + iVar1 + -0x1c) = (int)((ulonglong)uVar5 >> 0x20);
    }
    else {
      *(undefined8 *)(puVar4 + DAT_8c0790bc + iVar1 + -0x1c) = uVar5;
    }
  }
  iVar3 = *(int *)(DAT_8c0790c4 + ar4);
  if ((iVar3 < 10) && (-1 < iVar3)) {
                    /* WARNING: Could not recover jumptable at 0x8c079086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&PTR_LAB_8c0790c8)[iVar3])();
    return uVar2;
  }
  *(undefined4 *)(puVar4 + DAT_8c07a3b4 + iVar1 + -0x1c) = 1;
  (*(code *)PTR_free_if_nonnull_wrap_102790_8c07a3bc)
            (puVar4 + DAT_8c07a3b8 + iVar1 + -0x1c,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07a3c4)(puVar4 + DAT_8c07a3c0 + iVar1 + -0x1c,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + DAT_8c07a3b4 + iVar1 + -0x1c);
}



/* FUN_8c07a3cc @ 8c07a3cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c07a3cc(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  int *a7;
  int *a7_00;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int aiStack_80 [5];
  undefined8 uStack_6c;
  int iStack_64;
  int iStack_60;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  aiStack_80[0] = ar7;
  a7_00 = *(int **)((int)aiStack_80 + DAT_8c07a628);
  uVar2 = ar5;
  (*(code *)PTR_FUN_8c07a630)(ar4 + DAT_8c07a62c,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c07a634)(ar4,uVar2,ar6,ar7);
  iVar1 = *(int *)(DAT_8c07a638 + ar4);
  if (iVar1 == 0) {
    iStack_60 = (*(code *)PTR_rand_range_8c07a63c)(ar4,0,100,ar7);
    if ((iStack_60 < 0x32) || (*(int *)(DAT_8c07a640 + ar4) != 0)) {
      *(undefined4 *)(DAT_8c07a638 + ar4) = 1;
      goto LAB_8c07a446;
    }
    *(undefined4 *)(DAT_8c07a638 + ar4) = 2;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07a446:
      (*(code *)PTR_FUN_8c07a644)(ar4,ar5,ar5,ar7);
      uVar2 = 0x13;
      iStack_64 = (*(code *)PTR_FUN_8c07a648)(ar4,0x13,ar5,ar7);
      if (iStack_64 != 0) {
        return 1;
      }
      (*(code *)PTR_FUN_8c07a64c)(ar4,uVar2,ar5,ar7);
      iVar1 = *(int *)(DAT_8c07a640 + ar4) + -1;
      *(int *)(DAT_8c07a640 + ar4) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(DAT_8c07a640 + ar4) = 0;
      }
      *(undefined4 *)(DAT_8c07a638 + ar4) = 0;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c07a5f4;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = (double)CONCAT44(DAT_8c07a658,in_fr1);
  }
  else {
    dVar4 = (double)CONCAT44(DAT_8c07a65c,DAT_8c07a658);
  }
  iVar1 = aiStack_80[0];
  a7 = a7_00;
  (*(code *)PTR_FUN_8c07a664)(ar4,ar5,aiStack_80[0],a7_00);
  (*(code *)PTR_Vec3_assign_8c07a668)(ar4 + 0x54,auStack_24,iVar1,a7);
  (*(code *)PTR_Vec3_dtor_8c07a66c)(auStack_24,0xffffffff,iVar1,a7);
  a5 = ar4 + 0x54;
  uStack_6c._4_4_ = (**(code **)(DAT_8c07a638 + *a7_00))(a7_00,a5,iVar1,a7);
  if (uStack_6c._4_4_ == 1) {
    (*(code *)PTR_Vec3_set_xyz_8c07a670)(auStack_30,a5,iVar1,a7);
    (*(code *)PTR_FUN_8c07a674)(ar4 + 0x14,auStack_30,iVar1,a7);
    (*(code *)PTR_Vec3_assign_8c07a668)(ar4 + 0x14,auStack_40,iVar1,a7);
    (*(code *)PTR_Vec3_dtor_8c07a66c)(auStack_40,0xffffffff,iVar1,a7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c07a678)(auStack_30,0xffffffff,iVar1,a7);
    (*(code *)PTR_Vec3_set_xyz_8c07a670)(auStack_4c,uVar2,iVar1,a7);
    (*(code *)PTR_FUN_8c07a674)(ar4 + DAT_8c07a628,auStack_4c,iVar1,a7);
    (*(code *)PTR_Vec3_assign_8c07a668)(ar4 + DAT_8c07a628,auStack_5c,iVar1,a7);
    (*(code *)PTR_Vec3_dtor_8c07a66c)(auStack_5c,0xffffffff,iVar1,a7);
    (*(code *)PTR_object_dtor_delete_8c07a678)(auStack_4c,0xffffffff,iVar1,a7);
    return 1;
  }
  (**(code **)(DAT_8c07a67c + *a7_00))(a7_00,ar4 + 0x54,iVar1,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uStack_6c = (double)CONCAT44(uStack_6c._4_4_,uVar2);
    dVar4 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x7c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x7c);
    uStack_6c = dVar4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(ar4 + 0x58) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
  }
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(int *)(DAT_8c07a638 + ar4) = *(int *)(DAT_8c07a638 + ar4) + 1;
  aiStack_80[1] = ar4;
LAB_8c07a5f4:
  iVar1 = (*(code *)PTR_FUN_8c07a680)(ar4,ar5,ar4 + 0x54,a7_00);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_8c07a638 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}



/* ret_const_0_07a684 @ 8c07a684 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_07a684(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c07a68c @ 8c07a68c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c07aa88) */
/* WARNING: Removing unreachable block (ram,0x8c07aa7a) */
/* WARNING: Removing unreachable block (ram,0x8c07ab82) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07a68c(double *ar4,double *ar5,double *ar6,undefined *ar7)

{
  int iVar1;
  undefined4 uVar2;
  double *pdVar3;
  double *a6;
  undefined4 a7;
  int *a4;
  undefined *puVar4;
  float fVar5;
  double in_dr0;
  undefined *puVar9;
  ulonglong uVar6;
  double dVar7;
  undefined8 uVar8;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_f0;
  undefined8 uStack_ec;
  double *pdStack_e4;
  int iStack_e0;
  double *pdStack_dc;
  int iStack_d8;
  int iStack_d4;
  double *pdStack_d0;
  double *pdStack_cc;
  int iStack_c8;
  double *pdStack_c4;
  double *pdStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined8 uStack_b4;
  int iStack_ac;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_9c;
  undefined *puStack_98;
  undefined *puStack_94;
  undefined *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [4];
  undefined1 auStack_74 [100];
  
  a4 = *(int **)((int)&uStack_ec + DAT_8c07a6d4);
  pdVar3 = ar5;
  a6 = ar6;
  (*(code *)PTR_Vec3_ctor_zero_8c07a6dc)((int)&uStack_ec + DAT_8c07a6d8,ar5,ar6,ar7);
  switch(*(int *)(ar4 + 0xd)) {
  case 0:
    *(undefined4 *)(DAT_8c07a83c + (int)ar4) = 0;
    (*(code *)PTR_FUN_8c07a844)((int)ar4 + DAT_8c07a840,pdVar3,a6,ar7);
    iVar1 = DAT_8c07a848;
    pdVar3 = (double *)((int)ar4 + DAT_8c07a848);
    in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)pdVar3 = 0;
    }
    else {
      *pdVar3 = in_dr0;
    }
    (**(code **)(DAT_8c07a84c + *a4))(a4,pdVar3,iVar1,ar7);
    puVar4 = (undefined *)((ulonglong)in_dr0 >> 0x20);
    puStack_94 = puVar4;
    puVar9 = DAT_8c07a850;
    if (in_FPSCR_SZ != '\0') {
      puStack_94 = SUB84(in_dr0,0);
      in_xd0 = in_dr0;
      puStack_90 = puVar4;
      puVar4 = DAT_8c07a850;
      puVar9 = PTR_DAT_8c07a854;
    }
    if (in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar9) {
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)PTR_DAT_8c07a854,*(int *)ar5);
      }
      else {
        in_xd0 = *ar5;
        uVar8 = *(undefined8 *)PTR_DAT_8c07a854;
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c07a85c,*(undefined4 *)(PTR_DAT_8c07a854 + 8));
        }
        else {
          in_xd0 = *(double *)(PTR_DAT_8c07a854 + 8);
          dVar7 = (double)CONCAT44(DAT_8c07a860,DAT_8c07a85c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c07a860,fVar5);
        }
        else {
          dVar7 = (double)CONCAT44(DAT_8c07a864,DAT_8c07a860);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 * dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(*(int *)(ar5 + 1),fVar5);
        }
        else {
          dVar7 = ar5[1];
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 - dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c07a858) = fVar5;
        }
        else {
          *(double *)((int)ar4 + DAT_8c07a858) = in_xd0;
        }
      }
    }
    a7 = 0;
    uVar2 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07a86c)((int)ar4 + DAT_8c07a868,8,0xffffffff,0);
    iStack_bc = *(int *)(DAT_8c07a870 + (int)ar4);
    (*(code *)PTR_FUN_8c07a878)(ar4,iStack_bc * 0x18 + DAT_8c07a874,uVar2,a7);
    iVar1 = DAT_8c07a87c;
    pdVar3 = (double *)((int)ar4 + DAT_8c07a87c);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c07a880,*(int *)pdVar3);
    }
    else {
      in_xd0 = *pdVar3;
      in_dr0 = (double)CONCAT44(PTR_FUN_8c07a884,DAT_8c07a880);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)ar4 + DAT_8c07a87c) = SUB84(in_dr0,0);
    }
    else {
      *(double *)((int)ar4 + DAT_8c07a87c) = in_xd0;
    }
    pdStack_c0 = ar4;
    (*(code *)PTR_FUN_8c07a884)(ar4,pdVar3,iVar1,a7);
    a6 = ar4 + 0xd;
    *(int *)(ar4 + 0xd) = *(int *)a6 + 1;
    pdStack_c4 = ar4;
  case 1:
    ar7 = PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07a88c;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07a88c)
              ((int)ar4 + DAT_8c07a868,pdVar3,a6,PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07a88c);
    a6 = (double *)((int)ar4 + 100);
    iVar1 = *(int *)a6;
    if (iVar1 == 0) {
      puStack_f0 = (undefined1 *)((int)&uStack_ec + DAT_8c07a890);
      (*(code *)PTR_Vec3_normalize_8c07a894)((int *)((int)ar4 + 4),0,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c07a898)
                ((int *)((int)ar4 + 0x14),(int)&uStack_ec + DAT_8c07a890,a6,ar7);
      iVar1 = -1;
      (*(code *)PTR_Vec3_dtor_8c07a89c)((int)&uStack_ec + DAT_8c07a890,0xffffffff,a6,ar7);
    }
    if (ar6 != (double *)0x3) {
      if (ar6 == (double *)0x1) {
        *(int *)(ar4 + 0xd) = 3;
        (*(code *)PTR_Vec3_assign_8c07a898)((int)ar4 + DAT_8c07a8a0,(int *)((int)ar4 + 0x14),a6,ar7)
        ;
switchD_8c07a6ce_caseD_3:
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 5) = 0;
        }
        else {
          ar4[5] = in_dr0;
        }
        iVar1 = (int)ar4 + DAT_8c07ac50;
        (*(code *)PTR_Vec3_assign_8c07ac58)((int)&uStack_ec + DAT_8c07ac54,iVar1,a6,ar7);
        fVar5 = SUB84(in_dr0,0);
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)ar4 + DAT_8c07ac50);
        }
        else {
          in_xd0 = *(double *)((int)ar4 + DAT_8c07ac50);
        }
        uVar6 = (ulonglong)(uint)fVar5;
        if (fVar5 == 0.0) {
          if (in_FPSCR_SZ == '\0') {
            fVar5 = *(float *)((int)ar4 + DAT_8c07ac5c);
          }
          else {
            in_xd0 = *(double *)((int)ar4 + DAT_8c07ac5c);
          }
          uVar6 = (ulonglong)(uint)fVar5;
          if (fVar5 == 0.0) {
            uVar6 = CONCAT44(0x3f800000,fVar5);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)&uStack_ec + DAT_8c07ac54) = 0x3f800000;
            }
            else {
              *(ulonglong *)((int)&uStack_ec + DAT_8c07ac54) = uVar6;
            }
          }
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)((int)&uStack_ec + DAT_8c07ac60) = 0;
        }
        else {
          *(ulonglong *)((int)&uStack_ec + DAT_8c07ac60) = uVar6 & 0xffffffff;
        }
        uVar2 = (*(code *)PTR_Vec3_length_8c07ac64)((int)&uStack_ec + DAT_8c07ac54,iVar1,a6,ar7);
        uStack_a8 = (double)CONCAT44(uVar2,(undefined4)uStack_a8);
        (*(code *)PTR_Vec3_assign_8c07ac58)((int)&uStack_ec + DAT_8c07ac54,uVar2,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c07ac6c,*(undefined4 *)((int)ar4 + DAT_8c07ac68));
        }
        else {
          in_xd0 = *(double *)((int)ar4 + DAT_8c07ac68);
          dVar7 = (double)CONCAT44(_DAT_8c07ac70,DAT_8c07ac6c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 + dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)ar4 + DAT_8c07ac68) = fVar5;
        }
        else {
          *(double *)((int)ar4 + DAT_8c07ac68) = in_xd0;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)ar4 + DAT_8c07ac68);
        }
        else {
          in_xd0 = *(double *)((int)ar4 + DAT_8c07ac68);
        }
        if (in_FPSCR_PR != '\0' || 1.0 <= fVar5) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c07ac68) = 0x3f800000;
          }
          else {
            *(undefined8 *)((int)ar4 + DAT_8c07ac68) = CONCAT44(0x3f800000,fVar5);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)ar4 + DAT_8c07ac68);
        }
        else {
          in_xd0 = *(double *)((int)ar4 + DAT_8c07ac68);
        }
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44(1.0 - fVar5,fVar5);
        }
        else {
          dVar7 = (double)CONCAT44(0x3f800000,fVar5) - (double)CONCAT44(0x3f800000,fVar5);
        }
        uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
        uStack_88 = uVar2;
        if (in_FPSCR_SZ != '\0') {
          uStack_88 = SUB84(dVar7,0);
          auStack_84[0] = uVar2;
        }
        puStack_f0 = (undefined1 *)((int)&uStack_ec + _DAT_8c07ac70);
        pdStack_dc = ar4;
        (*(code *)PTR_Vec3_scale_8c07ac74)((int)ar4 + DAT_8c07ac50,&uStack_88,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uStack_8c = *(undefined4 *)((int)ar4 + DAT_8c07ac68);
          uVar8 = CONCAT44(uStack_8c,SUB84(dVar7,0));
        }
        else {
          uVar8 = *(undefined8 *)((int)ar4 + DAT_8c07ac68);
          uStack_8c = (undefined4)uVar8;
          uStack_88 = (undefined4)((ulonglong)uVar8 >> 0x20);
        }
        fVar5 = (float)uVar8;
        puStack_f0 = (undefined1 *)((int)&uStack_ec + DAT_8c07ac78);
        (*(code *)PTR_Vec3_scale_8c07ac74)((int)&puStack_f0 + DAT_8c07ac60,&uStack_8c,a6,ar7);
        puStack_f0 = (undefined1 *)((int)&uStack_ec + DAT_8c07ac7c);
        (*(code *)PTR_Vec3_add_8c07ac88)
                  ((int)&puStack_f0 + DAT_8c07ac84,(int)&puStack_f0 + DAT_8c07ac80,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c07ac58)
                  ((int *)((int)ar4 + 0x14),(int)&uStack_ec + DAT_8c07ac7c,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c07ac8c)((int)&uStack_ec + DAT_8c07ac7c,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c07ac8c)((int)&uStack_ec + DAT_8c07ac78,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c07ac8c)((int)&uStack_ec + _DAT_8c07ac70,0xffffffff,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          fVar5 = *(float *)((int)ar4 + DAT_8c07ac68);
        }
        else {
          in_xd0 = *(double *)((int)ar4 + DAT_8c07ac68);
        }
        if (fVar5 == 1.0) {
          ar7 = (undefined *)0x0;
          a6 = (double *)0xffffffff;
          uVar2 = 0x13;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07ac98)
                    ((int)ar4 + DAT_8c07ac90._4_4_,0x13,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07ac9c)
                    ((int)ar4 + DAT_8c07ac90._4_4_,uVar2,a6,ar7);
          dVar7 = (double)(ulonglong)(uint)fVar5;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)ar4 + DAT_8c07ac68) = 0;
          }
          else {
            *(double *)((int)ar4 + DAT_8c07ac68) = dVar7;
          }
          *(int *)((int)ar4 + 100) = 1;
          *(int *)(ar4 + 0xd) = 0;
          puStack_f0 = auStack_74;
          (*(code *)PTR_FUN_8c07aca0)((int *)((int)ar4 + 0x14),uVar2,a6,ar7);
          (*(code *)PTR_Vec3_assign_8c07ac58)((int *)((int)ar4 + 0x14),auStack_74,a6,ar7);
          uVar2 = 0xffffffff;
          (*(code *)PTR_Vec3_dtor_8c07ac8c)(auStack_74,0xffffffff,a6,ar7);
          (**(code **)(*(int *)ar4 + 0x2c))(ar4,uVar2,a6,ar7);
          iStack_e0 = *(int *)(DAT_8c07aca4 + (int)ar4);
          (*(code *)PTR_FUN_8c07acac)(ar4,iStack_e0 * 0x18 + DAT_8c07aca8,a6,ar7);
          pdVar3 = ar5;
          (**(code **)(DAT_8c07aca4 + *a4))(a4,ar5,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            uVar2 = (undefined4)((ulonglong)dVar7 >> 0x20);
            uStack_a8 = (double)CONCAT44(uStack_a8._4_4_,uVar2);
            dVar7 = (double)CONCAT44(uVar2,*(int *)((int)ar4 + 0x7c));
          }
          else {
            in_xd0 = *(double *)((int)ar4 + 0x7c);
            uStack_a8 = dVar7;
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)ar5 + 4) = fVar5;
          }
          else {
            *(double *)((int)ar5 + 4) = in_xd0;
          }
          (*(code *)PTR_FUN_8c07acb4)((int)ar4 + DAT_8c07acb0,pdVar3,a6,ar7);
        }
      }
      else if (ar6 == (double *)0x2) {
        *(undefined4 *)(DAT_8c07a8c0 + (int)ar4) = 0;
        *(undefined4 *)(DAT_8c07a8c4 + (int)ar4) = 0;
        *(int *)(ar4 + 0xd) = 4;
      }
      else {
        (*(code *)PTR_Vec3_length_sq_8c07a960)((int *)((int)ar4 + 4),iVar1,a6,ar7);
        puVar4 = (undefined *)((ulonglong)in_dr0 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(DAT_8c07a964,puVar4);
          puStack_98 = puVar4;
        }
        else {
          puStack_98 = SUB84(in_dr0,0);
          dVar7 = (double)CONCAT44(DAT_8c07a968,DAT_8c07a964);
          in_xd0 = in_dr0;
          puStack_94 = puVar4;
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = (float)((ulonglong)dVar7 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar5,SUB84(dVar7,0) * fVar5);
        }
        else {
          in_dr0 = dVar7 * dVar7;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(ar4 + 5) = SUB84(in_dr0,0);
        }
        else {
          ar4[5] = in_xd0;
        }
        iStack_c8 = *(int *)(DAT_8c07a968 + (int)ar4);
        (*(code *)PTR_FUN_8c07a970)(ar4,iStack_c8 * 0x18 + DAT_8c07a96c,a6,ar7);
        *(int *)((int)ar4 + 0x44) = 1;
        *(int *)(ar4 + 8) = 5;
        *(int *)(ar4 + 0xd) = *(int *)(ar4 + 0xd) + 1;
        pdVar3 = ar4;
        pdStack_cc = ar4;
switchD_8c07a6ce_caseD_2:
        (**(code **)(DAT_8c07a974 + *a4))(a4,pdVar3,a6,ar7);
        puVar4 = (undefined *)((ulonglong)in_dr0 >> 0x20);
        puStack_9c = puVar4;
        puVar9 = DAT_8c07a978;
        if (in_FPSCR_SZ != '\0') {
          puStack_9c = SUB84(in_dr0,0);
          in_xd0 = in_dr0;
          puStack_98 = puVar4;
          puVar4 = DAT_8c07a978;
          puVar9 = DAT_8c07a97c;
        }
        if (in_FPSCR_PR != '\0' || (float)puVar9 <= (float)puVar4) {
          (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07aa34)
                    ((int)ar4 + DAT_8c07aa2c._4_4_,pdVar3,a6,ar7);
          (*(code *)PTR_FUN_8c07aa40)(ar4,pdVar3,a6,ar7);
          if (in_FPSCR_SZ == '\0') {
            puVar4 = *(undefined **)(ar4 + 5);
            puStack_a0 = puVar9;
          }
          else {
            in_xd0 = ar4[5];
            puStack_a0 = puVar4;
            puStack_9c = puVar9;
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = (float)puVar4 * (float)puVar9;
          }
          else {
            fVar5 = SUB84((double)CONCAT44(puVar9,puVar4) * (double)CONCAT44(puVar9,puVar4),0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 5) = fVar5;
          }
          else {
            ar4[5] = in_xd0;
          }
          iStack_d4 = *(int *)(DAT_8c07aa44 + (int)ar4);
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(int *)(ar4 + 5),
                                     *(undefined4 *)(iStack_d4 * 0x18 + DAT_8c07aa48 + 0x10));
          }
          else {
            dVar7 = ar4[5];
          }
          pdStack_d0 = ar4;
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar7,0)) {
            *(int *)((int)ar4 + 100) = 0;
            *(int *)(ar4 + 0xd) = 0;
            (**(code **)(*(int *)ar4 + 0x2c))(ar4,pdVar3,a6,ar7);
            iStack_d8 = *(int *)(DAT_8c07aa44 + (int)ar4);
            iVar1 = iStack_d8 * 0x18 + DAT_8c07aa48;
            (*(code *)PTR_FUN_8c07aa4c)(ar4,iVar1,a6,ar7);
            (*(code *)PTR_FUN_8c07aa54)((int)ar4 + DAT_8c07aa50,iVar1,a6,ar7);
          }
        }
        else {
          *(undefined4 *)(DAT_8c07a97c + (int)ar4) = 0;
          *(undefined4 *)(DAT_8c07a980 + (int)ar4) = 0;
          *(int *)(ar4 + 0xd) = 4;
          *(undefined4 *)(DAT_8c07a984 + (int)ar4) = 0x11;
        }
      }
    }
    break;
  case 2:
    goto switchD_8c07a6ce_caseD_2;
  case 3:
    goto switchD_8c07a6ce_caseD_3;
  case 4:
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c07ad88,*(int *)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      dVar7 = (double)CONCAT44(DAT_8c07ad8c,DAT_8c07ad88);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 5) = fVar5;
    }
    else {
      ar4[5] = in_xd0;
    }
    pdStack_e4 = ar4;
    (*(code *)PTR_Vec3_ctor_xyz_8c07ad90)(auStack_84,pdVar3,a6,ar7);
    a6 = (double *)0x1;
    iStack_ac = (*(code *)PTR_FUN_8c07ad94)(ar4,auStack_84,1,ar7);
    puStack_90 = (undefined *)(uint)(iStack_ac == 0);
    (*(code *)PTR_Vec3_dtor_8c07ad98)(auStack_84,0xffffffff,a6,ar7);
    if (puStack_90 != (undefined *)0x0) {
      pdVar3 = ar4 + 5;
      if (in_FPSCR_SZ == '\0') {
        *(int *)pdVar3 = 0;
      }
      else {
        *pdVar3 = (double)(ulonglong)(uint)fVar5;
      }
      *(int *)(ar4 + 0xd) = *(int *)(ar4 + 0xd) + 1;
      *(undefined4 *)(DAT_8c07ad9c + (int)ar4) = 0;
      *(int *)((int)ar4 + 100) = 0;
      uStack_ec._4_4_ = ar4;
      iVar1 = (*(code *)PTR_rand_range_8c07ada0)(ar4,0,100,pdVar3);
      uStack_b4 = (double)CONCAT44(iVar1,(undefined4)uStack_b4);
      if (iVar1 < 0x1f) {
        if (*(int *)(DAT_8c07ada4 + (int)ar4) == 6) {
          ar7 = (undefined *)0x0;
          a6 = (double *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07adac)
                    ((int)ar4 + DAT_8c07ada8,0x26,0xffffffff,0);
        }
        else {
          ar7 = (undefined *)0x0;
          a6 = (double *)0xffffffff;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07add8)
                    ((int)ar4 + DAT_8c07add0._4_4_,0x30,0xffffffff,0);
        }
      }
      else {
        ar7 = (undefined *)0x0;
        a6 = (double *)0xffffffff;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07ae0c)
                  ((int)ar4 + DAT_8c07ae04._4_4_,0,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07ae10)
                ((int)ar4 + DAT_8c07ae04._4_4_,DAT_8c07ae04._4_4_,a6,ar7);
    }
    break;
  case 5:
    puVar4 = PTR_FUN_8c07aedc;
    (*(code *)PTR_FUN_8c07aedc)(ar4,PTR_FUN_8c07aedc,a6,ar7);
    dVar7 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uStack_b4 = (double)CONCAT44(uStack_b4._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
      dVar7 = uStack_b4;
    }
    uStack_b4 = dVar7;
    iStack_b8 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07aee4)
                          ((int)ar4 + DAT_8c07aee0,puVar4,a6,ar7);
    if (iStack_b8 == 1) {
      *(int *)(ar4 + 0xd) = 0;
      (**(code **)(*(int *)ar4 + 0x2c))(ar4,1,a6,ar7);
      uStack_ec._0_4_ = *(int *)(DAT_8c07aee8 + (int)ar4);
      iVar1 = (int)uStack_ec * 0x18 + DAT_8c07aeec;
      (*(code *)PTR_FUN_8c07aef0)(ar4,iVar1,a6,ar7);
      (*(code *)PTR_FUN_8c07aef8)((int)ar4 + DAT_8c07aef4,iVar1,a6,ar7);
      ar7 = (undefined *)0x0;
      a6 = (double *)0xffffffff;
      uVar2 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07af00)
                ((int)ar4 + DAT_8c07aee0,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07af04)((int)ar4 + DAT_8c07aee0,uVar2,a6,ar7);
    }
  }
  uVar2 = (*(code *)PTR_Vec3_dtor_8c07af0c)((int)&uStack_ec + DAT_8c07af08,0xffffffff,a6,ar7);
  return uVar2;
}



/* FUN_8c07af10 @ 8c07af10 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07af10(int ar4,int ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int a6;
  int *a7;
  undefined4 a5;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  double in_dr0;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 in_fr5;
  double dVar9;
  bool bVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  *(undefined4 *)(DAT_8c07af8c + ar4) = 0;
  iVar1 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_FUN_8c07af94)(ar4 + DAT_8c07af90,ar5,ar6,ar7);
  *(byte *)(DAT_8c07af90 + ar4) = *(byte *)(DAT_8c07af90 + ar4) & 0xfd | 2;
  uVar3 = 1;
  a5 = 0xb;
  if ((5 < *(int *)(DAT_8c07af98 + ar4)) && (ar6 == 1)) {
    a5 = 0x12;
  }
  switch(*(undefined4 *)(DAT_8c07af9c + ar4)) {
  case 0:
    iVar1 = (*(code *)PTR_FUN_8c07afec)(ar4 + DAT_8c07afe8,a5,a6,a7);
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 1;
        }
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07b018)(ar4 + DAT_8c07b014,a5,a6,a7);
      }
      *(int *)(DAT_8c07b01c + ar4) = *(int *)(DAT_8c07b01c + ar4) + 1;
    }
    break;
  case 1:
    iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07b0ac)(ar4 + DAT_8c07b0a8,iVar1,a6,a7);
    uVar4 = SUB84(in_dr0,0);
    if (iVar1 == 1) {
      iVar1 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c07b0b0)(ar4 + DAT_8c07b0a8,a5,a6,a7);
      if (in_FPSCR_PR == '\0') {
        dVar9 = (double)CONCAT44((float)iVar1,in_fr5);
      }
      else {
        dVar9 = (double)iVar1;
      }
      if (in_FPSCR_PR == '\0') {
        bVar10 = (float)((ulonglong)dVar9 >> 0x20) < 0.0;
      }
      else {
        bVar10 = dVar9 < (double)(ulonglong)uVar4;
      }
      uVar5 = uVar4;
      if ((bVar10) && (uVar5 = DAT_8c07b0b4, in_FPSCR_SZ == '\0')) {
        uVar5 = uVar4;
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07b0b8)(ar4 + DAT_8c07b0a8,a5,a6,a7);
      if (ar6 == 0) {
        (*(code *)PTR_FUN_8c07b0bc)(ar4,a5,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          uVar7 = CONCAT44((undefined4)DAT_8c07b0c4,uVar5);
          *(undefined4 *)(ar4 + DAT_8c07b0c0) = (undefined4)DAT_8c07b0c4;
        }
        else {
          uVar7 = CONCAT44(DAT_8c07b0c4._4_4_,(undefined4)DAT_8c07b0c4);
          *(ulonglong *)(ar4 + DAT_8c07b0c0) = uVar7;
        }
        *(undefined4 *)(DAT_8c07b0c4._4_4_ + ar4) = 0;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x2c) = uVar7 & 0xffffffff;
        }
        *(int *)(DAT_8c07b0cc + ar4) = *(int *)(DAT_8c07b0cc + ar4) + 1;
      }
      else {
        *(undefined4 *)(DAT_8c07b0dc + ar4) = 5;
        uVar3 = 0;
      }
    }
    break;
  case 2:
    (**(code **)(DAT_8c07b144 + *ar7))(ar7,iVar1,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
      (*(code *)PTR_FUN_8c07b148)(ar4,iVar1,a6,a7);
      (*(code *)PTR_FUN_8c07b154)(ar4,*(int *)(DAT_8c07b14c + ar4) * 0x18 + DAT_8c07b150,a6,a7);
      *(undefined4 *)(DAT_8c07b158 + ar4) = 0;
      *(int *)(DAT_8c07b15c + ar4) = *(int *)(DAT_8c07b15c + ar4) + 1;
    }
    break;
  case 3:
    (**(code **)(DAT_8c07b200 + *ar7))(ar7,iVar1,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      uVar7 = CONCAT44(*(undefined4 *)(ar5 + 4),SUB84(in_dr0,0));
    }
    else {
      uVar7 = *(ulonglong *)(ar5 + 4);
    }
    (*(code *)PTR_FUN_8c07b204)(ar4 + 0x14,iVar1,a6,a7);
    (*(code *)PTR_Vec3_length_sq_8c07b208)(ar4 + 0x14,iVar1,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x28) = (int)(uVar7 >> 0x20);
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = uVar7;
    }
    (*(code *)PTR_Vec3_length_8c07b20c)(ar4 + 0x14,iVar1,a6,a7);
    iVar2 = *(int *)(DAT_8c07b210 + ar4);
    *(int *)(DAT_8c07b210 + ar4) = iVar2 + 1;
    if (DAT_8c07b214 <= iVar2 + 1) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar7 & 0xffffffff;
      }
      (*(code *)PTR_FUN_8c07b218)(ar4,iVar1,a6,a7);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + DAT_8c07b21c) = (undefined4)DAT_8c07b220;
      }
      else {
        *(undefined8 *)(ar4 + DAT_8c07b21c) = CONCAT44(DAT_8c07b220._4_4_,(undefined4)DAT_8c07b220);
      }
      *(int *)(DAT_8c07b220._4_4_ + ar4) = *(int *)(DAT_8c07b220._4_4_ + ar4) + 1;
    }
    break;
  case 4:
    iVar1 = ar5;
    (**(code **)(DAT_8c07b298 + *ar7))(ar7,ar5,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      fVar6 = SUB84(in_dr0 + in_dr0,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar6);
    }
    else {
      uVar8 = *(undefined8 *)(ar5 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
      (*(code *)PTR_FUN_8c07b29c)(ar4,iVar1,a6,a7);
      (*(code *)PTR_FUN_8c07b2a0)(ar4,iVar1,a6,a7);
      (*(code *)PTR_FUN_8c07b2a8)(ar4,*(int *)(DAT_8c07b298 + ar4) * 0x18 + DAT_8c07b2a4,a6,a7);
      *(int *)(DAT_8c07b2ac + ar4) = *(int *)(DAT_8c07b2ac + ar4) + 1;
      uVar3 = 0;
    }
    break;
  case 5:
    (*(code *)PTR_FUN_8c07b2d0)(ar4,iVar1,a6,a7);
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c07b2d4 @ 8c07b2d4 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c07b5fc) */
/* WARNING: Removing unreachable block (ram,0x8c07b4ac) */
/* WARNING: Removing unreachable block (ram,0x8c07b356) */
/* WARNING: Removing unreachable block (ram,0x8c07b35a) */
/* WARNING: Removing unreachable block (ram,0x8c07b4b0) */
/* WARNING: Removing unreachable block (ram,0x8c07b600) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07b2d4(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int a6;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  uint in_fr1;
  ulonglong uVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar3 + -0x10) = in_PR;
  uVar1 = ar5;
  a6 = ar6;
  (*(code *)PTR_vec3_clear_8c07b44c)(ar4 + DAT_8c07b448,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c07b450 + ar4) = 0;
  dVar5 = (double)(ulonglong)in_fr1;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar3 + -0xc4) = 0;
  }
  else {
    *(double *)(puVar3 + -0xc4) = dVar5;
  }
  fVar6 = 1.0;
  (*(code *)PTR_Vec3_ctor_zero_8c07b458)(puVar3 + DAT_8c07b454 + -0xfc,uVar1,a6,ar7);
  *(undefined4 *)(puVar3 + -200) = 0;
  (*(code *)PTR_Vec3_ctor_xyz_8c07b460)(puVar3 + DAT_8c07b45c + -0xfc,uVar1,a6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c07b468)(ar6 + DAT_8c07b464,puVar3 + DAT_8c07b45c + -0xfc,a6,ar7);
  *(undefined4 *)(puVar3 + -0xdc) = uVar1;
  *(undefined4 *)(puVar3 + -0xcc) = *(undefined4 *)(puVar3 + -0xdc);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07b46c)(puVar3 + DAT_8c07b45c + -0xfc,0xffffffff,a6,ar7);
  if ((*(int *)(puVar3 + -0xcc) != 0) && ((int)((uint)*(byte *)(DAT_8c07b470 + ar4) << 0x1f) < 0)) {
    (*(code *)PTR_Vec3_ctor_xyz_8c07b460)(puVar3 + DAT_8c07b474 + -0xfc,uVar1,a6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c07b468)(ar6 + DAT_8c07b464,puVar3 + DAT_8c07b474 + -0xfc,a6,ar7);
    *(undefined4 *)(puVar3 + -0xe0) = uVar1;
    *(undefined4 *)(puVar3 + -0xd0) = *(undefined4 *)(puVar3 + -0xe0);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07b46c)(puVar3 + DAT_8c07b474 + -0xfc,0xffffffff,a6,ar7);
    if (*(int *)(puVar3 + -0xd0) != 0) {
      (*(code *)PTR_Vec3_ctor_xyz_8c07b460)(puVar3 + DAT_8c07b478._4_4_ + -0xfc,uVar1,a6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c07b468)
                        (ar6 + DAT_8c07b464,puVar3 + DAT_8c07b478._4_4_ + -0xfc,a6,ar7);
      *(undefined4 *)(puVar3 + -0xe4) = uVar1;
      *(undefined4 *)(puVar3 + -0xd4) = *(undefined4 *)(puVar3 + -0xe4);
      uVar1 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07b46c)(puVar3 + DAT_8c07b478._4_4_ + -0xfc,0xffffffff,a6,ar7);
      if (*(int *)(puVar3 + -0xd4) != 0) {
        (*(code *)PTR_Vec3_length_sq_8c07b480)(ar4 + 4,uVar1,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar3 + -0xe8) = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined4 *)(puVar3 + -0xc4) = *(undefined4 *)(puVar3 + -0xe8);
          uVar4 = (ulonglong)*(uint *)(puVar3 + -0xc4);
        }
        else {
          *(double *)(puVar3 + -0xe8) = dVar5;
          uVar4 = *(ulonglong *)(puVar3 + -0xe8);
          *(ulonglong *)(puVar3 + -0xc4) = uVar4;
          in_xd0 = *(undefined8 *)(puVar3 + -0xc4);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar4 < 1.0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(puVar3 + -0xc4) = 0x3f800000;
          }
          else {
            *(ulonglong *)(puVar3 + -0xc4) = CONCAT44(0x3f800000,(float)uVar4);
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar5 = (double)CONCAT44(DAT_8c07b484,*(undefined4 *)(puVar3 + -0xc4));
        }
        else {
          in_xd0 = *(undefined8 *)(puVar3 + -0xc4);
          dVar5 = (double)CONCAT44(DAT_8c07b488,DAT_8c07b484);
        }
        if (in_FPSCR_PR == '\0') {
          fVar6 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar5 * dVar5,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(puVar3 + -0xd8) = fVar6;
        }
        else {
          *(undefined8 *)(puVar3 + -0xd8) = in_xd0;
        }
        *(undefined1 **)(puVar3 + -0x100) = puVar3 + DAT_8c07b488 + -0xfc;
        (*(code *)PTR_Vec3_scale_8c07b48c)(ar6 + DAT_8c07b464,puVar3 + -0xd8,a6,ar7);
        (*(code *)PTR_Vec3_assign_8c07b490)(ar4 + DAT_8c07b448,puVar3 + DAT_8c07b488 + -0xfc,a6,ar7)
        ;
        (*(code *)PTR_Vec3_dtor_8c07b46c)(puVar3 + DAT_8c07b488 + -0xfc,0xffffffff,a6,ar7);
        *(undefined4 *)(DAT_8c07b450 + ar4) = 1;
        goto LAB_8c07b7a8;
      }
    }
  }
  if ((*(int *)(ar6 + 0x68) != 0) && ((int)((uint)*(byte *)(DAT_8c07b59c + ar4) << 0x1e) < 0)) {
    *(undefined4 *)(DAT_8c07b5a0 + ar4) = 1;
    if (in_FPSCR_SZ == '\0') {
      fVar6 = *(float *)(*(int *)(ar6 + 0x68) + DAT_8c07b5a4);
    }
    (*(code *)PTR_Vec3_assign_8c07b5ac)
              (puVar3 + DAT_8c07b5a8 + -0xfc,*(int *)(ar6 + 0x68) + 4,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + DAT_8c07b5b0 + -0xfc),SUB84(dVar5,0));
    }
    else {
      dVar5 = *(double *)(puVar3 + DAT_8c07b5b0 + -0xfc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + fVar6,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + (double)CONCAT44(in_fr14,fVar6);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar3 + DAT_8c07b5b0 + -0xfc) = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)(puVar3 + DAT_8c07b5b0 + -0xfc) = dVar5;
    }
    *(undefined1 **)(puVar3 + -0x100) = puVar3 + DAT_8c07b5b4 + -0xfc;
    (*(code *)PTR_Vec3_sub_8c07b5b8)(ar5,puVar3 + DAT_8c07b5b0 + -0x100,a6,ar7);
    *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0x80;
    (*(code *)PTR_Vec3_scale_8c07b5c4)(puVar3 + DAT_8c07b5c0 + -0x100,PTR_DAT_8c07b5bc,a6,ar7);
    (*(code *)PTR_Vec3_assign_8c07b5ac)(ar4 + DAT_8c07b5c8,puVar3 + -0x80,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07b5cc)(puVar3 + -0x80,0xffffffff,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07b5cc)(puVar3 + DAT_8c07b5b4 + -0xfc,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_length_sq_8c07b5d0)(ar4 + DAT_8c07b5c8,uVar1,a6,ar7);
    uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(puVar3 + -0xec) = uVar2;
      dVar5 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar3 + -0xec) = dVar5;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar5,0) + fVar6;
    }
    else {
      fVar6 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar6),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0xec),fVar6);
    }
    else {
      dVar5 = *(double *)(puVar3 + -0xec);
    }
    if (in_FPSCR_PR == '\0') {
      fVar6 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar5 - dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar3 + -0xc4) = fVar6;
      fVar6 = *(float *)(puVar3 + -0xc4);
    }
    else {
      *(undefined8 *)(puVar3 + -0xc4) = in_xd0;
    }
    if (in_FPSCR_PR == '\0' && fVar6 < 1.0) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + -0xc4) = 0x3f800000;
      }
      else {
        *(ulonglong *)(puVar3 + -0xc4) = CONCAT44(0x3f800000,fVar6);
      }
    }
    (*(code *)PTR_Vec3_length_8c07b5d4)(ar4 + DAT_8c07b5c8,uVar1,a6,ar7);
    (*(code *)PTR_FUN_8c07b5d8)(ar4 + DAT_8c07b5c8,puVar3 + -0xc4,a6,ar7);
    (*(code *)PTR_FUN_8c07b5d8)(ar4 + DAT_8c07b5c8,PTR_DAT_8c07b5dc,a6,ar7);
    *(undefined4 *)(DAT_8c07b5e0 + ar4) = 1;
LAB_8c07b7a8:
    uVar1 = (*(code *)PTR_Vec3_dtor_8c07b7cc)(puVar3 + DAT_8c07b7c8 + -0xfc,0xffffffff,a6,ar7);
    return uVar1;
  }
  if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(DAT_8c07b644 + ar4) << 0x1d))) {
    uVar1 = (*(code *)PTR_Vec3_dtor_8c07b7a4)(puVar3 + DAT_8c07b7a0 + -0xfc,0xffffffff,a6,ar7);
    return uVar1;
  }
  uVar2 = (*(code *)PTR_get_field_24_05c284_8c07b648)(*(undefined4 *)(ar6 + 0x50),uVar1,a6,ar7);
  *(undefined4 *)(puVar3 + -0xf0) = uVar2;
  if (*(int *)(puVar3 + -0xf0) != 0xf) {
    uVar2 = (*(code *)PTR_get_field_24_05c284_8c07b648)(*(undefined4 *)(ar6 + 0x50),uVar1,a6,ar7);
    *(undefined4 *)(puVar3 + -0xf4) = uVar2;
    if (*(int *)(puVar3 + -0xf4) != 10) {
      *(undefined4 *)(DAT_8c07b760 + ar4) = 1;
      (**(code **)(DAT_8c07b764 + *(int *)(*(int *)(ar6 + 0x50) + 8)))
                (*(int *)(ar6 + 0x50),uVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + -0xf8) = (int)((ulonglong)dVar5 >> 0x20);
        fVar6 = *(float *)(puVar3 + -0xf8);
      }
      else {
        *(double *)(puVar3 + -0xf8) = dVar5;
      }
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0x90;
      (*(code *)PTR_FUN_8c07b768)(*(undefined4 *)(ar6 + 0x50),uVar1,a6,ar7);
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xa0;
      (*(code *)PTR_Vec3_sub_8c07b76c)(ar5,puVar3 + -0x90,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c07b774)(ar4 + DAT_8c07b770,puVar3 + -0xa0,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07b778)(puVar3 + -0xa0,0xffffffff,a6,ar7);
      uVar1 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07b778)(puVar3 + -0x90,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_sq_8c07b77c)(ar4 + DAT_8c07b770,uVar1,a6,ar7);
      uVar2 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(puVar3 + -0xfc) = uVar2;
        dVar5 = (double)CONCAT44(uVar2,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        *(double *)(puVar3 + -0xfc) = dVar5;
        in_xd0 = *(undefined8 *)(ar4 + 0x48);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar5,0) + fVar6;
      }
      else {
        fVar6 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar6),0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar5 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0xfc),fVar6);
      }
      else {
        dVar5 = *(double *)(puVar3 + -0xfc);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar5 - dVar5,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar3 + -0xc4) = fVar6;
        fVar6 = *(float *)(puVar3 + -0xc4);
      }
      else {
        *(undefined8 *)(puVar3 + -0xc4) = in_xd0;
      }
      if (in_FPSCR_PR == '\0' && fVar6 < 1.0) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(puVar3 + -0xc4) = 0;
        }
        else {
          *(ulonglong *)(puVar3 + -0xc4) = (ulonglong)(uint)fVar6;
        }
      }
      (*(code *)PTR_Vec3_length_8c07b780)(ar4 + DAT_8c07b770,uVar1,a6,ar7);
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xb0;
      (*(code *)PTR_Vec3_scale_8c07b784)(ar4 + DAT_8c07b770,puVar3 + -0xc4,a6,ar7);
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xc0;
      (*(code *)PTR_Vec3_scale_8c07b784)(puVar3 + -0xb0,PTR_DAT_8c07b788,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c07b774)(ar4 + DAT_8c07b770,puVar3 + -0xc0,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07b778)(puVar3 + -0xc0,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07b778)(puVar3 + -0xb0,0xffffffff,a6,ar7);
      *(undefined4 *)(DAT_8c07b78c + ar4) = 1;
      goto LAB_8c07b7a8;
    }
  }
  uVar1 = (*(code *)PTR_Vec3_dtor_8c07b650)(puVar3 + DAT_8c07b64c + -0xfc,0xffffffff,a6,ar7);
  return uVar1;
}



/* FUN_8c07b7d0 @ 8c07b7d0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07b7d0(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 a7;
  undefined4 in_fr1;
  undefined8 uVar5;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  iVar1 = *(int *)(DAT_8c07ba24 + ar4);
  uVar3 = ar5;
  if (iVar1 == 0) {
    a7 = 0;
    uVar4 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07ba30)(ar4 + DAT_8c07ba28._4_4_,4,0xffffffff,0)
    ;
    uVar2 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c07ba34)
                      (ar4 + DAT_8c07ba28._4_4_,4,uVar4,a7);
    uVar4 = 0;
    (*(code *)PTR_rand_range_8c07ba38)(ar4,0,uVar2,a7);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07ba3c)(ar4 + DAT_8c07ba28._4_4_,uVar4,uVar2,a7);
    uVar4 = DAT_8c07ba44;
    if (in_FPSCR_SZ == '\0') {
      uVar4 = in_fr1;
    }
    (*(code *)PTR_FUN_8c07ba50)(ar4,ar6,uVar2,a7);
    (*(code *)PTR_Vec3_add_8c07ba54)(auStack_20,ar5,uVar2,a7);
    (*(code *)PTR_Vec3_assign_8c07ba58)(ar4 + 0x54,auStack_30,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c07ba5c)(auStack_30,0xffffffff,uVar2,a7);
    (*(code *)PTR_Vec3_dtor_8c07ba5c)(auStack_20,0xffffffff,uVar2,a7);
    uVar2 = DAT_8c07ba64;
    if (in_FPSCR_SZ == '\0') {
      uVar2 = uVar4;
    }
    iVar1 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c07ba68)(ar4,iVar1,ar7,in_stack_00000000);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = CONCAT44((undefined4)DAT_8c07ba6c,uVar2);
      *(undefined4 *)(ar4 + 0x34) = (undefined4)DAT_8c07ba6c;
    }
    else {
      uVar5 = CONCAT44(DAT_8c07ba6c._4_4_,(undefined4)DAT_8c07ba6c);
      *(undefined8 *)(ar4 + 0x34) = uVar5;
    }
    (*(code *)PTR_FUN_8c07ba74)(ar4,iVar1,ar7,in_stack_00000000);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(ar4 + 0x38) = (int)((ulonglong)uVar5 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x38) = uVar5;
    }
    (*(code *)PTR_FUN_8c07ba74)(ar4,iVar1,ar7,in_stack_00000000);
    ar6 = ar4 + 0x54;
    (*(code *)PTR_FUN_8c07ba7c)(ar4,ar5,ar6,in_stack_00000000);
    *(int *)(DAT_8c07ba24 + ar4) = *(int *)(DAT_8c07ba24 + ar4) + 1;
  }
  else {
    in_stack_00000000 = ar7;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        (*(code *)PTR_FUN_8c07ba88)(ar4,ar4 + 0x54,ar5,ar7);
        iVar1 = (*(code *)PTR_FUN_8c07ba8c)(ar4 + DAT_8c07ba28._4_4_,0,ar5,ar7);
        if (iVar1 < 1) {
          return 1;
        }
        *(int *)(DAT_8c07ba24 + ar4) = *(int *)(DAT_8c07ba24 + ar4) + 1;
        return 1;
      }
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = ar4 + 0x54;
      (*(code *)PTR_FUN_8c07ba88)(ar4,iVar1,ar5,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07ba90)
                        (ar4 + DAT_8c07ba28._4_4_,iVar1,ar5,ar7);
      if (iVar1 != 1) {
        return 1;
      }
      (*(code *)PTR_FUN_8c07ba9c)(ar4,*(int *)(DAT_8c07ba94 + ar4) * 0x18 + DAT_8c07ba98,ar5,ar7);
      *(undefined4 *)(DAT_8c07ba24 + ar4) = 0;
      return 0;
    }
  }
  (*(code *)PTR_FUN_8c07ba84)(ar4 + DAT_8c07ba28._4_4_,uVar3,ar6,in_stack_00000000);
  (*(code *)PTR_FUN_8c07ba88)(ar4,ar4 + 0x54,ar5,in_stack_00000000);
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(DAT_8c07ba24 + ar4) = *(int *)(DAT_8c07ba24 + ar4) + 1;
  }
  return 1;
}



/* FUN_8c07baa0 @ 8c07baa0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07baa0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  undefined4 a7;
  undefined4 a7_00;
  undefined4 uVar3;
  undefined8 in_dr0;
  undefined *puVar4;
  undefined *puVar5;
  char in_FPSCR_SZ;
  int aiStack_80 [4];
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_54;
  int iStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  int iStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  a7_00 = *(undefined4 *)((int)aiStack_80 + DAT_8c07baec);
  uVar3 = 1;
  uVar1 = ar6;
  a6 = ar6;
  a7 = ar7;
  iStack_40 = (*(code *)PTR_FUN_8c07baf4)(ar4 + DAT_8c07baf0,ar6,ar6,ar7);
  if (iStack_40 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c07baf8)(ar4,0,a6,a7);
    return uVar1;
  }
  if (*(int *)(DAT_8c07bb44 + ar4) == 1) {
    (*(code *)PTR_Vec3_assign_8c07bb4c)(ar4 + DAT_8c07bb48,ar6,a6,a7);
    iStack_64 = *(int *)(DAT_8c07bb50 + ar4);
    (*(code *)PTR_FUN_8c07bb58)(ar4,iStack_64 * 0x18 + DAT_8c07bb54,a6,a7);
    *(undefined4 *)(DAT_8c07bb5c + ar4) = 0;
    *(undefined4 *)(DAT_8c07bb60 + ar4) = 2;
    return 0;
  }
  iVar2 = *(int *)(DAT_8c07bb88 + ar4);
  if (iVar2 == 0) {
    (*(code *)PTR_FUN_8c07bc6c)(ar4,uVar1,a6,a7);
    puStack_48 = (undefined *)in_dr0;
    puVar4 = (undefined *)((ulonglong)in_dr0 >> 0x20);
    puStack_4c = DAT_8c07bc74;
    puVar5 = PTR_Vec3_ctor_xyz_8c07bc78;
    if (in_FPSCR_SZ == '\0') {
      puStack_4c = puStack_48;
      puVar5 = DAT_8c07bc74;
      puStack_48 = puVar4;
      puVar4 = puStack_44;
    }
    puStack_44 = puVar4;
    (*(code *)PTR_FUN_8c07bc6c)(ar4,uVar1,a6,a7);
    if (in_FPSCR_SZ == '\0') {
      puStack_4c = puVar5;
      puVar5 = puStack_48;
    }
    puStack_48 = puVar5;
    (*(code *)PTR_Vec3_ctor_xyz_8c07bc78)(auStack_2c,uVar1,a6,a7);
    (*(code *)PTR_Vec3_sub_8c07bc7c)(ar6,auStack_2c,a6,a7);
    (*(code *)PTR_Vec3_assign_8c07bc80)(ar4 + 0x54,auStack_3c,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07bc84)(auStack_3c,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07bc84)(auStack_2c,0xffffffff,a6,a7);
    a7 = a7_00;
    iStack_50 = (*(code *)PTR_FUN_8c07bc8c)(ar4,ar4 + 0x54,ar7,a7_00);
    if (iStack_50 == 0) {
      (*(code *)PTR_FUN_8c07bc90)(ar4,ar4 + 0x54,ar7,a7_00);
      a7 = a7_00;
    }
    if (*(int *)(DAT_8c07bc94 + ar4) == 1) {
      *(undefined4 *)(DAT_8c07bc98 + ar4) = 2;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c07bcf4 + ar4) = *(int *)(DAT_8c07bcf4 + ar4) + 1;
      iStack_68 = ar4;
      if (((*(int *)(DAT_8c07bcf8 + ar4) < 6) ||
          (iStack_54 = (*(code *)PTR_rand_range_8c07bcfc)(ar4,0,100,a7), 10 < iStack_54)) ||
         (*(int *)(DAT_8c07bd00 + ar4) == 0x21)) goto LAB_8c07bd04;
      *(int *)(DAT_8c07bcf4 + ar4) = *(int *)(DAT_8c07bcf4 + ar4) + 2;
      iStack_6c = ar4;
    }
  }
  else {
    if (iVar2 == 1) {
LAB_8c07bd04:
      uStack_70 = *(undefined4 *)(DAT_8c07bd68 + ar4);
      iVar2 = (*(code *)PTR_pure_virtual_stub_8c07bd78)(ar4,ar5,ar4 + 0x54,a7);
      if (iVar2 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c07bd7c + ar4) = *(int *)(DAT_8c07bd7c + ar4) + 1;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x38) = DAT_8c07bd80;
        return 1;
      }
      *(undefined8 *)(ar4 + 0x38) = CONCAT44(uRam8c07bd84,DAT_8c07bd80);
      return 1;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return 1;
      }
      *(undefined4 *)(DAT_8c07bea0 + ar4) = 0;
      uVar1 = ar6;
      iStack_60 = (*(code *)PTR_FUN_8c07bea4)(ar4,ar5,ar6,a7_00);
      if (iStack_60 != 0) {
        return 1;
      }
      *(undefined4 *)(DAT_8c07bea8 + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      (*(code *)PTR_Vec3_assign_8c07beb0)(ar4 + DAT_8c07beac,ar6,uVar1,a7_00);
      aiStack_80[0] = *(int *)(DAT_8c07beb4 + ar4);
      (*(code *)PTR_FUN_8c07bebc)(ar4,aiStack_80[0] * 0x18 + DAT_8c07beb8,uVar1,a7_00);
      *(undefined4 *)(DAT_8c07bec0 + ar4) = 2;
      return 0;
    }
  }
  aiStack_80[2] = *(undefined4 *)(DAT_8c07be04 + ar4);
  uVar1 = ar6;
  iStack_5c = (*(code *)PTR_pure_virtual_stub_8c07be14)(ar4,ar5,ar6,a7);
  if ((iStack_5c == 0) && (*(int *)(ar4 + 0x40) == 0)) {
    (*(code *)PTR_Vec3_assign_8c07be1c)(ar4 + DAT_8c07be18,ar6,uVar1,a7);
    aiStack_80[1] = *(int *)(DAT_8c07be04 + ar4);
    (*(code *)PTR_FUN_8c07be20)(ar4,aiStack_80[1] * 0x18 + DAT_8c07be0c,uVar1,a7);
    *(undefined4 *)(DAT_8c07be24 + ar4) = 0;
    *(undefined4 *)(DAT_8c07be28 + ar4) = 2;
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c07bec4 @ 8c07bec4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07bec4(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a5;
  undefined1 *a6;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  uVar3 = 1;
  a5 = ar6;
  a6 = ar6;
  uVar2 = ar7;
  iVar1 = (*(code *)PTR_FUN_8c07c084)(ar4 + DAT_8c07c080,ar6,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_8c07c088)(ar4,0x13,a6,uVar2);
    return uVar2;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c07c090)(auStack_28,a5,a6,uVar2);
  iVar1 = *(int *)(DAT_8c07c094 + ar4);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_8c07c098)(ar4,a5,a6,uVar2);
    (*(code *)PTR_FUN_8c07c098)(ar4,a5,a6,uVar2);
    (*(code *)PTR_Vec3_ctor_xyz_8c07c090)(auStack_38,a5,a6,uVar2);
    (*(code *)PTR_Vec3_sub_8c07c0a4)(ar6,auStack_38,a6,uVar2);
    (*(code *)PTR_Vec3_assign_8c07c0a8)(ar4 + 0x54,auStack_48,a6,uVar2);
    (*(code *)PTR_Vec3_dtor_8c07c0ac)(auStack_48,0xffffffff,a6,uVar2);
    (*(code *)PTR_Vec3_dtor_8c07c0ac)(auStack_38,0xffffffff,a6,uVar2);
    if (in_FPSCR_SZ == '\0') {
      dVar5 = (double)CONCAT44(DAT_8c07c08c,*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x7c);
      dVar5 = (double)CONCAT44(PTR_Vec3_ctor_xyz_8c07c090,DAT_8c07c08c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x58) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(DAT_8c07c094 + ar4) = *(int *)(DAT_8c07c094 + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      a6 = auStack_28;
      iVar1 = (*(code *)PTR_FUN_8c07c0b0)(ar4,ar5,a6,ar7);
      uVar2 = ar7;
      if ((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
        (*(code *)PTR_Vec3_assign_8c07c0a8)(ar4 + DAT_8c07c080,ar6,a6,ar7);
        *(undefined4 *)(DAT_8c07c094 + ar4) = 0;
        *(undefined4 *)(DAT_8c07c0b4 + ar4) = 2;
        uVar3 = 0;
        uVar2 = ar7;
      }
    }
    goto LAB_8c07c05e;
  }
  a6 = (undefined1 *)(ar4 + 0x54);
  iVar1 = (*(code *)PTR_FUN_8c07c0b0)(ar4,ar5,a6,ar7);
  uVar2 = ar7;
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(DAT_8c07c094 + ar4) = *(int *)(DAT_8c07c094 + ar4) + 1;
  }
LAB_8c07c05e:
  (*(code *)PTR_Vec3_dtor_8c07c0ac)(auStack_28,0xffffffff,a6,uVar2);
  return uVar3;
}



/* FUN_8c07c0b8 @ 8c07c0b8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07c0b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  int a6;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  undefined8 uStack_64;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar2 = *(int *)(DAT_8c07c2cc + ar4);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44((undefined4)DAT_8c07c2d0,(int)in_dr0);
      *(undefined4 *)(ar4 + 0x38) = (undefined4)DAT_8c07c2d0;
    }
    else {
      in_dr0 = CONCAT44(DAT_8c07c2d0._4_4_,(undefined4)DAT_8c07c2d0);
      *(undefined8 *)(ar4 + 0x38) = in_dr0;
    }
    *(int *)(DAT_8c07c2cc + ar4) = *(int *)(DAT_8c07c2cc + ar4) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      (*(code *)PTR_FUN_8c07c2dc)(ar4,ar5,ar6,ar7);
      a6 = ar4 + 0x54;
      iVar2 = (*(code *)PTR_pure_virtual_stub_8c07c2e8)(ar4,ar5,a6,ar7);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *(int *)(DAT_8c07c304 + ar4) * 0x18 + DAT_8c07c308;
      (*(code *)PTR_FUN_8c07c30c)(ar4,iVar2,a6,ar7);
      (*(code *)PTR_FUN_8c07c314)(ar4,iVar2,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c07c2fc)(ar4 + 0x54,(int)&uStack_64 + 4,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07c300)((int)&uStack_64 + 4,0xffffffff,a6,ar7);
      *(int *)(DAT_8c07c2cc + ar4) = *(int *)(DAT_8c07c2cc + ar4) + 1;
      return 1;
    }
    if (iVar2 != 3) {
      return 1;
    }
    iVar2 = (*(code *)PTR_pure_virtual_stub_8c07c2e8)(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(DAT_8c07c2cc + ar4) = 0;
    return 0;
  }
  (*(code *)PTR_FUN_8c07c2dc)(ar4,ar5,ar6,ar7);
  uVar1 = in_dr0;
  if (in_FPSCR_SZ == '\0') {
    uStack_64 = CONCAT44(uStack_64._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_64;
  }
  uStack_64 = uVar1;
  iVar2 = (*(code *)PTR_pure_virtual_stub_8c07c2e8)(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    (*(code *)PTR_Vec3_scale_8c07c2f0)(ar4 + 0x14,PTR_DAT_8c07c2ec,ar6,ar7);
    (*(code *)PTR_Vec3_scale_8c07c2f0)(auStack_20,ar4 + 0x48,ar6,ar7);
    (*(code *)PTR_Vec3_scale_8c07c2f0)(auStack_30,PTR_DAT_8c07c2f4,ar6,ar7);
    (*(code *)PTR_Vec3_add_8c07c2f8)(auStack_40,ar5,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c07c2fc)(ar4 + 0x54,auStack_50,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07c300)(auStack_50,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07c300)(auStack_40,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07c300)(auStack_30,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07c300)(auStack_20,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(DAT_8c07c2cc + ar4) = *(int *)(DAT_8c07c2cc + ar4) + 1;
  }
  return 1;
}



/* FUN_8c07c318 @ 8c07c318 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c07c434) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07c318(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  double *pdVar3;
  undefined4 a6;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_a8 [8];
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [36];
  
  if (*(int *)(ar4 + 0x40) == 0) {
    uStack_88 = 0;
  }
  else {
    uVar4 = 1;
    uVar1 = ar6;
    a6 = ar6;
    auStack_a8._0_4_ = ar7;
    (*(code *)PTR_Vec3_sub_8c07c5bc)(ar5,ar6,ar6,ar7);
    uVar1 = (*(code *)PTR_Vec3_length_8c07c5c0)(auStack_44,uVar1,a6,ar7);
    uStack_90 = (double)CONCAT44(uVar1,(undefined4)uStack_90);
    (*(code *)PTR_Vec3_ctor_copy_8c07c5c8)(auStack_a8 + DAT_8c07c5c4,uVar1,a6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07c5cc)(auStack_44,0xffffffff,a6,ar7);
    iVar2 = *(int *)(ar4 + 0x40);
    if ((iVar2 == 1) || (iVar2 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        (*(code *)PTR_FUN_8c07c5d0)(ar4,uVar1,a6,ar7);
      }
      pdVar3 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        uStack_84 = (double)CONCAT44(uStack_84._4_4_,fVar5);
      }
      else {
        uStack_84 = in_xd0;
      }
      iStack_98 = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),
                                 *(undefined4 *)(auStack_a8 + DAT_8c07c5d4));
      }
      else {
        in_xd0 = *(double *)(auStack_a8 + DAT_8c07c5d4);
        dVar7 = *(double *)(ar4 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      dVar7 = uStack_84;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((undefined4)uStack_84,fVar5);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 * dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),fVar5);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x18) = fVar5;
      }
      else {
        *(double *)(ar4 + 0x18) = in_xd0;
      }
      (*(code *)PTR_vec3_copy_8c02b5fc_8c07c5d8)(auStack_50,auStack_a8._0_4_,a6,ar7);
      (*(code *)PTR_FUN_8c07c5dc)(ar4 + 0x14,auStack_50,a6,ar7);
      (*(code *)PTR_Vec3_assign_8c07c5e0)(ar4 + 0x14,auStack_60,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07c5cc)(auStack_60,0xffffffff,a6,ar7);
      uVar1 = 0xffffffff;
      (*(code *)PTR_object_dtor_delete_8c07c5e4)(auStack_50,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c07c5c0)(ar4 + 0x14,uVar1,a6,ar7);
      pdVar3 = (double *)(ar4 + 0x2c);
      if (in_FPSCR_SZ != '\0') {
        in_xd0 = *pdVar3;
        pdVar3 = (double *)(ar4 + 0x30);
      }
      dVar7 = *pdVar3;
      if (SUB84(dVar7,0) != (float)((ulonglong)dVar7 >> 0x20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar6 = dVar7;
        }
        dVar7 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (in_FPSCR_PR == '\0' && 0.0 < SUB84(dVar6,0)) {
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 / dVar7,0);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar5);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar5 = SUB84(dVar7 + dVar7,0);
          }
          pdVar3 = (double *)(ar4 + 0x30);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 0x2c) = fVar5;
            pdVar3 = (double *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = in_xd0;
            in_xd0 = *(double *)(ar4 + 0x2c);
          }
          dVar7 = *pdVar3;
          iStack_9c = ar4;
          if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar7,0)) {
            if (in_FPSCR_SZ == '\0') {
              uVar1 = *(undefined4 *)(ar4 + 0x30);
              dVar7 = (double)CONCAT44(uVar1,SUB84(dVar7,0));
              *(undefined4 *)(ar4 + 0x2c) = uVar1;
            }
            else {
              dVar7 = *(double *)(ar4 + 0x30);
              *(double *)(ar4 + 0x2c) = dVar7;
            }
          }
        }
      }
      (*(code *)PTR_FUN_8c07c5e8)(ar6,ar5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uStack_90 = (double)CONCAT44(uStack_90._4_4_,(int)((ulonglong)dVar7 >> 0x20));
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar6 = *(double *)(ar4 + 0x48);
        uStack_90 = dVar7;
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      dVar7 = uStack_90;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((undefined4)uStack_90,fVar5);
      }
      if (in_FPSCR_PR != '\0' || (float)((ulonglong)dVar7 >> 0x20) <= SUB84(dVar7,0)) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar7,0));
          in_xd0 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (in_FPSCR_PR == '\0') {
          fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar5 = SUB84(dVar7 / dVar7,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(ar4 + 0x3c) = fVar5;
        }
        else {
          *(double *)(ar4 + 0x3c) = in_xd0;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar4 = 0;
      }
    }
    else if (iVar2 == 4) {
      uVar4 = 0;
      (*(code *)PTR_FUN_8c07c5ec)(ar4 + 0x14,uVar1,a6,ar7);
      uStack_94 = (*(code *)PTR_Vec3_length_8c07c5c0)(auStack_70,uVar1,a6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c07c5c8)(auStack_34,uStack_94,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07c5cc)(auStack_70,0xffffffff,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2c);
        dVar7 = *(double *)(ar4 + 0x38);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 / dVar7,0);
      }
      dVar7 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        uStack_84 = (double)CONCAT44(uStack_84._4_4_,fVar5);
        dVar7 = uStack_84;
      }
      uStack_84 = dVar7;
      (*(code *)PTR_Vec3_scale_8c07c5f0)(auStack_34,&uStack_84,a6,ar7);
      (*(code *)PTR_FUN_8c07c5f4)(ar4 + 0x14,(int)&uStack_84 + 4,a6,ar7);
      uVar1 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07c5cc)((int)&uStack_84 + 4,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c07c5c0)(ar4 + 0x14,uVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar7 = *(double *)(ar4 + 0x3c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar7 - dVar7,0);
      }
      unique0x10000289 = in_xd0;
      if (in_FPSCR_SZ == '\0') {
        stack0xffffff5c = (double)CONCAT44(ar4,fVar5);
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(iStack_a0 + 0x28) = auStack_a8._4_4_;
        dVar7 = (double)((ulonglong)stack0xffffff5c & 0xffffffff);
      }
      else {
        *(double *)(iStack_a0 + 0x28) = stack0xffffff5c;
        dVar7 = stack0xffffff5c;
      }
      if (in_FPSCR_PR != '\0' || SUB84(dVar7,0) <= 0.0) {
        *(undefined4 *)(ar4 + 0x40) = 0;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)dVar7 & 0xffffffff;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar7,0));
        }
      }
      (*(code *)PTR_Vec3_dtor_8c07c5cc)(auStack_34,0xffffffff,a6,ar7);
    }
    uStack_88 = uVar4;
    (*(code *)PTR_Vec3_dtor_8c07c5cc)(auStack_a8 + DAT_8c07c5c4,0xffffffff,a6,ar7);
  }
  return uStack_88;
}



/* FUN_8c07c5f8 @ 8c07c5f8 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07c5f8(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a5;
  undefined4 a6;
  int a7;
  undefined4 uVar3;
  uint uVar4;
  undefined8 in_dr0;
  ulonglong uVar5;
  undefined8 uVar6;
  char in_FPSCR_SZ;
  undefined1 *puStack_15c;
  int aiStack_158 [4];
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  int iStack_138;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [212];
  
  *(undefined4 *)(DAT_8c07c650 + ar4) = 0;
  uVar3 = 1;
  iVar1 = ar5;
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_Vec3_ctor_zero_8c07c658)((int)aiStack_158 + DAT_8c07c654,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c07c658)((int)aiStack_158 + DAT_8c07c65c,iVar1,a6,a7);
  iVar1 = *(int *)(DAT_8c07c660 + ar4);
  if ((iVar1 < 5) && (-1 < iVar1)) {
    switch(iVar1) {
    case 0:
      if (*(int *)((int)aiStack_158 + DAT_8c07c688) == 1) {
        uVar3 = 0;
        break;
      }
      *(undefined4 *)(DAT_8c07c7d8 + ar4) = 1;
      (*(code *)PTR_FUN_8c07c7dc)(ar4,iVar1 * 4,a6,a7);
      (*(code *)PTR_FUN_8c07c7e4)
                (*(undefined4 *)((int)aiStack_158 + DAT_8c07c7e0),PTR_FUN_8c07c7e4,a6,a7);
      puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07c7e8);
      (*(code *)PTR_Vec3_scale_8c07c7f0)(ar7,PTR_DAT_8c07c7ec,a6,a7);
      puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07c7f4);
      (*(code *)PTR_Vec3_add_8c07c7fc)(ar6,(int)&puStack_15c + DAT_8c07c7f8,a6,a7);
      puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07c800);
      (*(code *)PTR_Vec3_sub_8c07c808)((int)&puStack_15c + DAT_8c07c804,ar5,a6,a7);
      puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07c80c);
      (*(code *)PTR_Vec3_normalize_8c07c814)
                ((int)&puStack_15c + DAT_8c07c810,PTR_Vec3_normalize_8c07c814,a6,a7);
      (*(code *)PTR_Vec3_assign_8c07c818)(ar4 + 0x54,(int)aiStack_158 + DAT_8c07c80c,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c07c81c)((int)aiStack_158 + DAT_8c07c80c,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c07c81c)((int)aiStack_158 + DAT_8c07c800,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c07c81c)((int)aiStack_158 + DAT_8c07c7f4,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c07c81c)((int)aiStack_158 + DAT_8c07c7e8,0xffffffff,a6,a7);
      *(int *)(DAT_8c07c820 + ar4) = *(int *)(DAT_8c07c820 + ar4) + 1;
      iStack_144 = ar4;
    case 1:
      (*(code *)PTR_Vec3_ctor_copy_8c07c828)((int)aiStack_158 + DAT_8c07c824,ar4 + 0x54,a6,a7);
      a6 = 1;
      iStack_11c = (*(code *)PTR_FUN_8c07c82c)(ar4,(int)aiStack_158 + DAT_8c07c824,1,a7);
      uStack_10c = (uint)(iStack_11c == 0);
      (*(code *)PTR_Vec3_dtor_8c07c81c)((int)aiStack_158 + DAT_8c07c824,0xffffffff,a6,a7);
      if (uStack_10c != 0) {
        a7 = 0;
        a6 = 0xffffffff;
        uVar2 = 1;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07c838)
                  (ar4 + DAT_8c07c830._4_4_,1,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07c83c)(ar4 + DAT_8c07c830._4_4_,uVar2,a6,a7);
        *(int *)(DAT_8c07c820 + ar4) = *(int *)(DAT_8c07c820 + ar4) + 1;
        iStack_148 = ar4;
      }
      (*(code *)PTR_Vec3_assign_8c07c818)(ar4 + DAT_8c07c840,ar4 + 0x14,a6,a7);
      break;
    case 2:
      (*(code *)PTR_Vec3_ctor_copy_8c07c8cc)((int)aiStack_158 + DAT_8c07c8c8,ar7,a6,a7);
      a7 = (int)aiStack_158 + DAT_8c07c8c8;
      iStack_120 = (*(code *)PTR_FUN_8c07c8d0)(ar4,ar5,ar6,a7);
      uStack_110 = (uint)(iStack_120 == 0);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07c8d4)((int)aiStack_158 + DAT_8c07c8c8,0xffffffff,ar6,a7);
      a6 = ar6;
      if (uStack_110 != 0) {
        (*(code *)PTR_vec3_clear_8c07c8dc)(ar4 + DAT_8c07c8d8,uVar2,ar6,a7);
        *(undefined4 *)(DAT_8c07c8e0 + ar4) = 0;
        *(int *)(DAT_8c07c8e4 + ar4) = *(int *)(DAT_8c07c8e4 + ar4) + 1;
        a6 = ar6;
        aiStack_158[3] = ar4;
      }
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07c8ec)(ar4 + DAT_8c07c8e8,uVar2,a6,a7);
      (*(code *)PTR_Vec3_assign_8c07c8f4)(ar4 + DAT_8c07c8f0,ar4 + 0x14,a6,a7);
      break;
    case 3:
      (*(code *)PTR_Vec3_ctor_xyz_8c07c9ac)((int)aiStack_158 + DAT_8c07c9a4._4_4_,iVar1 * 4,a6,a7);
      a6 = 1;
      iStack_124 = (*(code *)PTR_FUN_8c07c9b0)(ar4,(int)aiStack_158 + DAT_8c07c9a4._4_4_,1,a7);
      uStack_114 = (uint)(iStack_124 == 0);
      uVar2 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07c9b4)((int)aiStack_158 + DAT_8c07c9a4._4_4_,0xffffffff,a6,a7);
      if (uStack_114 != 0) {
        (*(code *)PTR_Vec3_ctor_xyz_8c07c9ac)((int)aiStack_158 + DAT_8c07c9b8,uVar2,a6,a7);
        (*(code *)PTR_Vec3_assign_8c07c9bc)(ar4 + 0x14,(int)aiStack_158 + DAT_8c07c9b8,a6,a7);
        (*(code *)PTR_Vec3_dtor_8c07c9b4)((int)aiStack_158 + DAT_8c07c9b8,0xffffffff,a6,a7);
        a7 = 0;
        a6 = 0xffffffff;
        uVar2 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07c9c0)
                  (ar4 + DAT_8c07c9a4._4_4_,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07c9c4)(ar4 + DAT_8c07c9a4._4_4_,uVar2,a6,a7);
        *(int *)(DAT_8c07c9c8 + ar4) = *(int *)(DAT_8c07c9c8 + ar4) + 1;
        aiStack_158[2] = ar4;
      }
      break;
    case 4:
      uVar2 = 0x11;
      iVar1 = (*(code *)PTR_FUN_8c07ca94)(ar4,0x11,a6,a7);
      uStack_12c = CONCAT44(iVar1,(undefined4)uStack_12c);
      if (iVar1 == 0) {
        a7 = 0;
        a6 = 0xffffffff;
        uVar3 = 0x13;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07caa0)
                  (ar4 + DAT_8c07ca98._4_4_,0x13,0xffffffff,0);
        uVar4 = (uint)in_dr0;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07caa4)(ar4 + DAT_8c07ca98._4_4_,uVar3,a6,a7);
        aiStack_158[1] = *(int *)(DAT_8c07caa8 + ar4);
        (*(code *)PTR_FUN_8c07cab0)(ar4,aiStack_158[1] * 0x18 + DAT_8c07caac,a6,a7);
        uVar5 = (ulonglong)uVar4;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar5;
        }
        iVar1 = ar4 + 0x14;
        (*(code *)PTR_Vec3_assign_8c07cab8)(ar4 + DAT_8c07cab4,iVar1,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          uVar6 = CONCAT44(_DAT_8c07cabc,(int)uVar5);
          *(undefined4 *)(ar4 + 0x38) = _DAT_8c07cabc;
        }
        else {
          uVar6 = CONCAT44(PTR_FUN_8c07cac0,_DAT_8c07cabc);
          *(undefined8 *)(ar4 + 0x38) = uVar6;
        }
        (*(code *)PTR_FUN_8c07cac0)(ar4,iVar1,a6,a7);
        *(undefined4 *)(DAT_8c07cac4 + ar4) = 0;
        *(undefined4 *)(DAT_8c07cac8 + ar4) = 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(DAT_8c07cacc + ar4) = 0;
        *(undefined4 *)(ar4 + 100) = 1;
        *(undefined4 *)(DAT_8c07cad0 + ar4) = 1;
        uVar3 = 0;
        (**(code **)(DAT_8c07caa8 + **(int **)((int)aiStack_158 + DAT_8c07cad4)))
                  (*(int **)((int)aiStack_158 + DAT_8c07cad4),ar5,a6,a7);
        if (in_FPSCR_SZ == '\0') {
          uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_12c = CONCAT44(uStack_12c._4_4_,uVar2);
          *(undefined4 *)(ar5 + 4) = uVar2;
        }
        else {
          *(undefined8 *)(ar5 + 4) = uVar6;
          uStack_12c = uVar6;
        }
      }
      else {
        iVar1 = (*(code *)PTR_get_field_1c_026dd8_8c07cc84)(ar4 + DAT_8c07cc80,uVar2,a6,a7);
        uStack_134 = CONCAT44(iVar1,(undefined4)uStack_134);
        if (iVar1 == 0x11) {
          (*(code *)PTR_CAnimBody_GetCurFrame_8c07cc88)(ar4 + DAT_8c07cc80,uVar2,a6,a7);
          uVar6 = in_dr0;
          if (in_FPSCR_SZ == '\0') {
            uStack_134 = CONCAT44(uStack_134._4_4_,(int)((ulonglong)in_dr0 >> 0x20));
            uVar6 = uStack_134;
          }
          uStack_134 = uVar6;
          aiStack_158[0] = *(int *)(DAT_8c07cc8c + ar4) + -6;
          puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07cc90);
          (*(code *)PTR_FUN_8c07cc98)
                    (ar4 + DAT_8c07cc80,*(undefined4 *)(PTR_DAT_8c07cc94 + aiStack_158[0] * 0x18),a6
                     ,a7);
          (*(code *)PTR_Vec3_assign_8c07cca0)
                    ((int)aiStack_158 + DAT_8c07cc9c,(int)aiStack_158 + DAT_8c07cc90,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c07cca4)((int)aiStack_158 + DAT_8c07cc90,0xffffffff,a6,a7);
          puStack_15c = (undefined1 *)((int)aiStack_158 + DAT_8c07cca8);
          (*(code *)PTR_Vec3_sub_8c07ccb4)
                    ((int)&puStack_15c + DAT_8c07ccb0,ar4 + DAT_8c07ccac,a6,a7);
          (*(code *)PTR_Vec3_assign_8c07cca0)
                    ((int)aiStack_158 + DAT_8c07ccb8,(int)aiStack_158 + DAT_8c07cca8,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c07cca4)((int)aiStack_158 + DAT_8c07cca8,0xffffffff,a6,a7);
          iVar1 = (int)aiStack_158 + DAT_8c07cc9c;
          (*(code *)PTR_Vec3_assign_8c07cca0)(ar4 + DAT_8c07ccac,iVar1,a6,a7);
          (*(code *)PTR_Vec3_ctor_xyz_8c07ccbc)(auStack_e8,iVar1,a6,a7);
          iStack_138 = (*(code *)PTR_FUN_8c07ccc0)((int)aiStack_158 + DAT_8c07ccb8,auStack_e8,a6,a7)
          ;
          iStack_118 = iStack_138;
          (*(code *)PTR_Vec3_dtor_8c07cca4)(auStack_e8,0xffffffff,a6,a7);
          uVar2 = 0;
          if (iStack_118 != 0) {
            (*(code *)PTR_vec3_copy_8c02b5fc_8c07ccc8)
                      (auStack_f4,*(undefined4 *)((int)aiStack_158 + DAT_8c07ccc4),a6,a7);
            puStack_15c = auStack_104;
            a5 = auStack_f4;
            (*(code *)PTR_FUN_8c07ccd0)((int)&puStack_15c + DAT_8c07cccc,a5,a6,a7);
            uVar2 = (*(code *)PTR_Vec3_length_8c07ccd4)(auStack_104,a5,a6,a7);
            uStack_140 = CONCAT44(uVar2,(undefined4)uStack_140);
            (*(code *)PTR_Vec3_assign_8c07cca0)(ar4 + 0x14,uVar2,a6,a7);
            (*(code *)PTR_Vec3_dtor_8c07cca4)(auStack_104,0xffffffff,a6,a7);
            uVar2 = 0xffffffff;
            (*(code *)PTR_object_dtor_delete_8c07ccd8)(auStack_f4,0xffffffff,a6,a7);
          }
          (*(code *)PTR_Vec3_length_sq_8c07ccdc)((int)aiStack_158 + DAT_8c07ccb8,uVar2,a6,a7);
          if (in_FPSCR_SZ == '\0') {
            uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
            uStack_140 = CONCAT44(uStack_140._4_4_,uVar2);
            *(undefined4 *)(ar4 + 0x28) = uVar2;
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_dr0;
            uStack_140 = in_dr0;
          }
        }
      }
    }
  }
  uStack_108 = uVar3;
  (*(code *)PTR_Vec3_dtor_8c07cca4)((int)aiStack_158 + DAT_8c07ccb8,0xffffffff,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c07cca4)((int)aiStack_158 + DAT_8c07cc9c,0xffffffff,a6,a7);
  return uStack_108;
}



/* FUN_8c07cce0 @ 8c07cce0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07cce0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar2;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  int iVar4;
  undefined4 unaff_r14;
  double *pdVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined8 in_dr12;
  float fVar7;
  double in_dr14;
  double dVar8;
  undefined8 in_xd14;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar5 = &dStack_10;
    dStack_10 = (double)CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar5 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar5 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar5 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar5 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar5 + -0x10) = unaff_r11;
  *(undefined4 *)((int)pdVar5 + -0x14) = unaff_r10;
  *(undefined4 *)((int)pdVar5 + -0x18) = unaff_r9;
  *(undefined4 *)((int)pdVar5 + -0x1c) = in_PR;
  *(undefined4 *)((int)pdVar5 + -0x8c) = ar6;
  a7 = ar7;
  uVar1 = (*(code *)PTR_get_field_6c_028cc4_8c07cfc8)(ar7,ar5,ar6,ar7);
  *(undefined4 *)((int)pdVar5 + -0x58) = uVar1;
  iVar4 = *(int *)((int)pdVar5 + -0x58);
  if (iVar4 == 0) {
    *(undefined4 *)(DAT_8c07cfcc + ar4) = 0;
    return 2;
  }
  *(undefined4 *)(DAT_8c07cfd0 + ar4) = 0;
  *(int *)((int)pdVar5 + -0x70) = ar4;
  *(byte *)(DAT_8c07cfd4 + *(int *)((int)pdVar5 + -0x70)) =
       *(byte *)(DAT_8c07cfd4 + *(int *)((int)pdVar5 + -0x70)) & 0xfb;
  *(int *)((int)pdVar5 + -0x74) = ar4;
  *(byte *)(DAT_8c07cfd4 + *(int *)((int)pdVar5 + -0x74)) =
       *(byte *)(DAT_8c07cfd4 + *(int *)((int)pdVar5 + -0x74)) & 0xfe;
  uVar3 = 1;
  *(undefined1 **)((int)pdVar5 + -0x90) = (undefined1 *)((int)pdVar5 + -0x3c);
  (*(code *)PTR_Vec3_sub_8c07cfd8)(*(undefined4 *)((int)pdVar5 + -0x8c),ar5,ar6,a7);
  (*(code *)PTR_Vec3_ctor_copy_8c07cfdc)
            ((undefined1 *)((int)pdVar5 + -0x2c),(undefined1 *)((int)pdVar5 + -0x3c),ar6,a7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07cfe0)((undefined1 *)((int)pdVar5 + -0x3c),0xffffffff,ar6,a7);
  (*(code *)PTR_Vec3_length_sq_8c07cfe4)((undefined1 *)((int)pdVar5 + -0x2c),uVar1,ar6,a7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)((int)pdVar5 + -0x5c) = (int)((ulonglong)in_dr0 >> 0x20);
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               *(undefined4 *)((int)pdVar5 + -0x5c));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
  }
  else {
    *(undefined8 *)((int)pdVar5 + -0x5c) = in_dr0;
    in_xd14 = *(undefined8 *)((int)pdVar5 + -0x5c);
    dVar6 = *(double *)(ar4 + 0x28);
  }
  fVar7 = SUB84(in_dr14,0);
  if (in_FPSCR_PR == '\0') {
    bVar9 = fVar7 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar9 = in_dr14 < dVar6;
  }
  if (bVar9) {
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd14;
    }
  }
  else {
    *(int *)((int)pdVar5 + -0x78) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x34);
    }
    if (in_FPSCR_PR == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               fVar7 / (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar8 = in_dr14 / dVar6;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(*(int *)((int)pdVar5 + -0x78) + 0x28),SUB84(dVar6,0))
      ;
    }
    else {
      dVar6 = *(double *)(*(int *)((int)pdVar5 + -0x78) + 0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = SUB84(dVar8,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)((int)pdVar5 + -0x78) + 0x28) = fVar7;
    }
    else {
      *(undefined8 *)(*(int *)((int)pdVar5 + -0x78) + 0x28) = in_xd14;
    }
  }
  uVar1 = (*(code *)PTR_Vec3_length_8c07cfe8)((undefined1 *)((int)pdVar5 + -0x2c),uVar1,ar6,a7);
  *(undefined4 *)((int)pdVar5 + -0x60) = uVar1;
  uVar1 = *(undefined4 *)((int)pdVar5 + -0x60);
  (*(code *)PTR_Vec3_assign_8c07cfec)(ar4 + 0x14,uVar1,ar6,a7);
  *(undefined1 **)((int)pdVar5 + -0x90) = (undefined1 *)((int)pdVar5 + -0x4c);
  (**(code **)(DAT_8c07cff0 + *(int *)(iVar4 + 8)))(iVar4,uVar1,ar6,a7);
  (*(code *)PTR_Vec3_assign_8c07cfec)(ar4 + DAT_8c07cff4,(undefined1 *)((int)pdVar5 + -0x4c),ar6,a7)
  ;
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07cfe0)((undefined1 *)((int)pdVar5 + -0x4c),0xffffffff,ar6,a7);
  if (*(int *)(DAT_8c07cff8 + ar4) == 1) {
    uVar2 = 0xf;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c07d004,DAT_8c07cffc._4_4_);
    }
    else {
      dVar8 = (double)CONCAT44((undefined4)DAT_8c07d008,DAT_8c07d004);
    }
  }
  else {
    if (*(int *)(DAT_8c07cff8 + ar4) != 2) {
      *(undefined4 *)((int)pdVar5 + -0x50) = 2;
      (*(code *)PTR_Vec3_dtor_8c07cfe0)((undefined1 *)((int)pdVar5 + -0x2c),0xffffffff,ar6,a7);
      return *(undefined4 *)((int)pdVar5 + -0x50);
    }
    uVar2 = 0x13;
    if (in_FPSCR_SZ == '\0') {
      dVar8 = (double)CONCAT44(DAT_8c07d010,DAT_8c07d008._4_4_);
    }
    else {
      dVar8 = (double)CONCAT44(_DAT_8c07d014,DAT_8c07d010);
    }
  }
  iVar4 = *(int *)(_DAT_8c07d014 + ar4);
  if (iVar4 == 0) {
    a7 = 0;
    ar6 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07d020)
              (ar4 + DAT_8c07d018._4_4_,uVar2,0xffffffff,0);
    (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07d024)(ar4 + DAT_8c07d018._4_4_,uVar2,ar6,a7);
    *(undefined4 *)(DAT_8c07d028 + ar4) = 0;
    *(int *)((int)pdVar5 + -0x7c) = ar4;
    *(int *)(_DAT_8c07d014 + *(int *)((int)pdVar5 + -0x7c)) =
         *(int *)(_DAT_8c07d014 + *(int *)((int)pdVar5 + -0x7c)) + 1;
  }
  else {
    uVar2 = uVar1;
    if (iVar4 != 1) {
      if (iVar4 == 2) {
        uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07d040)
                          (ar4 + DAT_8c07d018._4_4_,uVar1,ar6,a7);
        *(undefined4 *)((int)pdVar5 + -0x6c) = uVar2;
        if (*(int *)((int)pdVar5 + -0x6c) == 1) {
          *(undefined4 *)(DAT_8c07cfd0 + ar4) = 1;
          *(undefined4 *)(_DAT_8c07d014 + ar4) = 0;
          *(undefined4 *)(DAT_8c07d028 + ar4) = 0;
          (*(code *)PTR_FUN_8c07d044)(ar4 + DAT_8c07cfd4,uVar1,ar6,a7);
          *(undefined4 *)(DAT_8c07cfcc + ar4) = 0;
          uVar3 = 0;
          (*(code *)PTR_Vec3_assign_8c07cfec)(ar4 + 0x14,ar4 + DAT_8c07cff4,ar6,a7);
          a7 = 0;
          ar6 = 0xffffffff;
          uVar1 = 0;
          (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07d020)
                    (ar4 + DAT_8c07d018._4_4_,0,0xffffffff,0);
          (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07d024)(ar4 + DAT_8c07d018._4_4_,uVar1,ar6,a7)
          ;
        }
      }
      goto LAB_8c07cf9c;
    }
  }
  uVar1 = (*(code *)PTR_FUN_8c07d02c)(ar4 + DAT_8c07d018._4_4_,uVar2,ar6,a7);
  *(undefined4 *)((int)pdVar5 + -100) = uVar1;
  if (*(int *)((int)pdVar5 + -100) == 7) {
    *(int *)((int)pdVar5 + -0x80) = ar4;
    *(undefined4 *)((int)pdVar5 + -0x84) =
         *(undefined4 *)(DAT_8c07d028 + *(int *)((int)pdVar5 + -0x80));
    *(int *)(DAT_8c07d028 + *(int *)((int)pdVar5 + -0x80)) = *(int *)((int)pdVar5 + -0x84) + 1;
    if (4 < *(int *)((int)pdVar5 + -0x84) + 1) {
      *(int *)((int)pdVar5 + -0x88) = ar4;
      *(int *)(_DAT_8c07d014 + *(int *)((int)pdVar5 + -0x88)) =
           *(int *)(_DAT_8c07d014 + *(int *)((int)pdVar5 + -0x88)) + 1;
    }
  }
  else {
    (*(code *)PTR_CAnimBody_GetCurFrame_8c07d030)(ar4 + DAT_8c07d018._4_4_,uVar2,ar6,a7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)pdVar5 + -0x68) = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)((int)pdVar5 + -0x68),SUB84(dVar6,0));
    }
    else {
      *(double *)((int)pdVar5 + -0x68) = dVar6;
      dVar6 = *(double *)((int)pdVar5 + -0x68);
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)dVar8 >> 0x20) == (float)(int)(float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar8 == (double)(int)dVar6;
    }
    if (bVar9) {
      a7 = *(undefined4 *)((int)pdVar5 + DAT_8c07d034 + -0x8c);
      uVar1 = 5;
      (*(code *)PTR_FUN_8c07d038)(ar4,5,ar5,a7);
      (*(code *)PTR_FUN_8c07d03c)(ar7,uVar1,ar5,a7);
      ar6 = ar5;
    }
  }
LAB_8c07cf9c:
  *(undefined4 *)((int)pdVar5 + -0x54) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c07cfe0)((undefined1 *)((int)pdVar5 + -0x2c),0xffffffff,ar6,a7);
  return *(undefined4 *)((int)pdVar5 + -0x54);
}



/* FUN_8c07d048 @ 8c07d048 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07d048(int ar4,undefined4 ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *a6;
  int a7;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_198;
  int aiStack_194 [4];
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  int iStack_168;
  int iStack_164;
  undefined8 uStack_160;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [252];
  
  aiStack_194[0] = ar6;
  uVar5 = *(undefined4 *)((int)aiStack_194 + DAT_8c07d134);
  a7 = 0;
  *(undefined4 *)(DAT_8c07d138 + ar4) = 0;
  uVar4 = ar5;
  a6 = DAT_8c07d13c;
  (*(code *)PTR_FUN_8c07d140)(DAT_8c07d13c + ar4,ar5,DAT_8c07d13c,0);
  uVar6 = 1;
  (*(code *)PTR_Vec3_ctor_zero_8c07d148)((int)aiStack_194 + DAT_8c07d144,uVar4,a6,a7);
  iVar1 = (**(code **)(DAT_8c07d14c + *ar7))(ar7,uVar4,a6,a7);
  iStack_148 = iVar1;
  iVar2 = (**(code **)(DAT_8c07d150 + *ar7))(ar7,uVar4,a6,a7);
  iStack_14c = iVar2;
  (*(code *)PTR_Vec3_ctor_xyz_8c07d160)((int)aiStack_194 + DAT_8c07d15c,uVar4,a6,a7);
  puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d164);
  (*(code *)PTR_Vec3_add_8c07d16c)(iVar2 + 4,(int)&puStack_198 + DAT_8c07d168,a6,a7);
  (*(code *)PTR_Vec3_assign_8c07d170)
            ((int)aiStack_194 + DAT_8c07d144,(int)aiStack_194 + DAT_8c07d164,a6,a7);
  (*(code *)PTR_Vec3_dtor_8c07d174)((int)aiStack_194 + DAT_8c07d164,0xffffffff,a6,a7);
  iVar3 = -1;
  (*(code *)PTR_Vec3_dtor_8c07d174)((int)aiStack_194 + DAT_8c07d15c,0xffffffff,a6,a7);
  switch(*(undefined4 *)(DAT_8c07d178 + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c07d368 + ar4) = 1;
    (*(code *)PTR_Vec3_ctor_xyz_8c07d378)((int)aiStack_194 + DAT_8c07d374,iVar3,a6,a7);
    puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d37c);
    (*(code *)PTR_Vec3_sub_8c07d388)
              ((int)&puStack_198 + DAT_8c07d384,(int)&puStack_198 + DAT_8c07d380,a6,a7);
    (*(code *)PTR_Vec3_assign_8c07d390)(ar4 + DAT_8c07d38c,(int)aiStack_194 + DAT_8c07d37c,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d37c,0xffffffff,a6,a7);
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d374,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c07d398)(ar4,uVar4,a6,a7);
    (*(code *)PTR_Vec3_ctor_xyz_8c07d378)
              ((int)aiStack_194 + DAT_8c07d39c._4_4_,PTR_Vec3_ctor_xyz_8c07d378,a6,a7);
    puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d3a4);
    (*(code *)PTR_Vec3_scale_8c07d3b0)((int)&puStack_198 + DAT_8c07d3ac,PTR_DAT_8c07d3a8,a6,a7);
    puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d3b4);
    (*(code *)PTR_Vec3_add_8c07d3bc)
              ((int)&puStack_198 + DAT_8c07d384,(int)&puStack_198 + DAT_8c07d3b8,a6,a7);
    puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d3c0);
    (*(code *)PTR_Vec3_add_8c07d3bc)((int)&puStack_198 + DAT_8c07d3c4,ar5,a6,a7);
    puStack_198 = (undefined1 *)((int)aiStack_194 + DAT_8c07d3c8);
    (*(code *)PTR_Vec3_scale_8c07d3b0)((int)&puStack_198 + DAT_8c07d3d0,PTR_DAT_8c07d3cc,a6,a7);
    (*(code *)PTR_Vec3_assign_8c07d390)(ar4 + 0x54,(int)aiStack_194 + DAT_8c07d3c8,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d3c8,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d3c0,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d3b4,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d3a4,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07d394)((int)aiStack_194 + DAT_8c07d39c._4_4_,0xffffffff,a6,a7);
    (**(code **)(DAT_8c07d380 + *ar7))(ar7,ar4 + 0x54,a6,a7);
    iVar3 = (int)((ulonglong)in_dr0 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x58),iVar3);
      in_dr0 = in_xd0;
      iStack_150 = iVar3;
    }
    else {
      iStack_150 = (int)in_dr0;
      uVar8 = *(undefined8 *)(ar4 + 0x58);
      iStack_14c = iVar3;
    }
    if (in_FPSCR_PR == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
      (**(code **)(DAT_8c07d380 + *ar7))(ar7,ar4 + 0x54,a6,a7);
      iVar3 = (int)((ulonglong)uVar8 >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(DAT_8c07d3d4,*(undefined4 *)(ar4 + 0x48));
        iStack_154 = iVar3;
      }
      else {
        iStack_154 = (int)uVar8;
        in_dr0 = *(undefined8 *)(ar4 + 0x48);
        dVar9 = (double)CONCAT44(DAT_8c07d3d8,DAT_8c07d3d4);
        iStack_150 = iVar3;
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar9 = (double)CONCAT44(iStack_154,fVar7);
      }
      else {
        dVar9 = (double)CONCAT44(iStack_150,iStack_154);
      }
      if (in_FPSCR_PR == '\0') {
        fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(ar4 + 0x58) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_dr0;
      }
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(DAT_8c07d3d8 + ar4) = *(int *)(DAT_8c07d3d8 + ar4) + 1;
    iStack_178 = ar4;
  case 1:
    a6 = (undefined *)(ar4 + 0x54);
    iStack_158 = (*(code *)PTR_pure_virtual_stub_8c07d3e0)(ar4,ar5,a6,a7);
    if (iStack_158 == 0) {
      *(int *)(DAT_8c07d3d8 + ar4) = *(int *)(DAT_8c07d3d8 + ar4) + 1;
      iStack_17c = ar4;
    }
    iVar3 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c07d390)(ar4 + DAT_8c07d3e4,iVar3,a6,a7);
    break;
  case 2:
    uVar4 = 1;
    (*(code *)PTR_FUN_8c07d4c0)(ar4,1,a6,a7);
    (*(code *)PTR_Vec3_ctor_xyz_8c07d4cc)((int)aiStack_194 + DAT_8c07d4c4._4_4_,uVar4,a6,a7);
    a7 = (int)aiStack_194 + DAT_8c07d4c4._4_4_;
    a6 = (undefined *)((int)aiStack_194 + DAT_8c07d4d0);
    iVar3 = (*(code *)PTR_FUN_8c07d4d4)(ar4,ar5,a6,a7);
    uStack_160 = CONCAT44(iVar3,(undefined4)uStack_160);
    uStack_140 = (uint)(iVar3 == 0);
    (*(code *)PTR_Vec3_dtor_8c07d4d8)((int)aiStack_194 + DAT_8c07d4c4._4_4_,0xffffffff,a6,a7);
    if (uStack_140 != 0) {
      iStack_180 = *(int *)(DAT_8c07d4dc + ar4);
      (*(code *)PTR_FUN_8c07d4e4)(ar4,iStack_180 * 0x18 + DAT_8c07d4e0,a6,a7);
      *(int *)(DAT_8c07d4e8 + ar4) = *(int *)(DAT_8c07d4e8 + ar4) + 1;
      iStack_184 = ar4;
    }
    iVar3 = ar4 + 0x14;
    (*(code *)PTR_Vec3_assign_8c07d4f0)(ar4 + DAT_8c07d4ec,iVar3,a6,a7);
    if (*(int *)((int)aiStack_194 + DAT_8c07d4f4) == 0) {
      iVar3 = (int)aiStack_194 + DAT_8c07d4d0;
      (*(code *)PTR_FUN_8c07d4f8)(ar5,iVar3,a6,a7);
      uVar8 = in_dr0;
      fVar7 = DAT_8c07d4fc;
      fVar10 = _DAT_8c07d500;
      if (in_FPSCR_SZ == '\0') {
        fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
        uStack_160 = CONCAT44(uStack_160._4_4_,fVar7);
        uVar8 = uStack_160;
        fVar10 = DAT_8c07d4fc;
      }
      uStack_160 = uVar8;
      if ((in_FPSCR_PR == '\0' && fVar10 < fVar7) && (iVar1 == 0)) {
        uVar6 = 2;
        *(undefined4 *)(DAT_8c07d4e8 + ar4) = 0;
        *(undefined4 *)((int)_DAT_8c07d500 + ar4) = 0;
      }
    }
    break;
  case 3:
    (*(code *)PTR_Vec3_ctor_xyz_8c07d5d4)((int)aiStack_194 + DAT_8c07d5cc._4_4_,iVar3,a6,a7);
    a6 = (undefined *)0x1;
    iStack_164 = (*(code *)PTR_FUN_8c07d5d8)(ar4,(int)aiStack_194 + DAT_8c07d5cc._4_4_,1,a7);
    uStack_144 = (uint)(iStack_164 == 0);
    iVar3 = -1;
    (*(code *)PTR_Vec3_dtor_8c07d5dc)((int)aiStack_194 + DAT_8c07d5cc._4_4_,0xffffffff,a6,a7);
    if (uStack_144 != 0) {
      (*(code *)PTR_Vec3_ctor_xyz_8c07d5d4)((int)aiStack_194 + DAT_8c07d5e0,iVar3,a6,a7);
      (*(code *)PTR_Vec3_assign_8c07d5e4)(ar4 + 0x14,(int)aiStack_194 + DAT_8c07d5e0,a6,a7);
      (*(code *)PTR_Vec3_dtor_8c07d5dc)((int)aiStack_194 + DAT_8c07d5e0,0xffffffff,a6,a7);
      (*(code *)PTR_Vec3_assign_8c07d5e4)(ar4 + DAT_8c07d5e8,ar4 + 0x14,a6,a7);
      *(int *)(DAT_8c07d5ec + ar4) = *(int *)(DAT_8c07d5ec + ar4) + 1;
      a7 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0x27;
      aiStack_194[3] = ar4;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07d5f4)(ar4 + DAT_8c07d5f0,0x27,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07d5f8)(ar4 + DAT_8c07d5f0,uVar4,uVar5,a7);
      iVar3 = 0x27;
      a6 = PTR_DAT_8c07d5fc;
      (*(code *)PTR_FUN_8c07d600)(ar4,0x27,PTR_DAT_8c07d5fc,a7);
    }
    break;
  case 4:
    iStack_168 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07d66c)
                           (ar4 + DAT_8c07d668,iVar3,a6,a7);
    if (iStack_168 == 1) {
      a7 = 0;
      uVar5 = 0xffffffff;
      uVar4 = 0x28;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07d674)(ar4 + DAT_8c07d668,0x28,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07d678)(ar4 + DAT_8c07d668,uVar4,uVar5,a7);
      iVar3 = 0x28;
      a6 = PTR_DAT_8c07d67c;
      (*(code *)PTR_FUN_8c07d680)(ar4,0x28,PTR_DAT_8c07d67c,a7);
      (*(code *)PTR_FUN_8c07d684)(aiStack_194[0],iVar3,a6,a7);
      *(int *)(DAT_8c07d688 + ar4) = *(int *)(DAT_8c07d688 + ar4) + 1;
      aiStack_194[2] = ar4;
    }
    else {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c07d6b8)((int)aiStack_194 + DAT_8c07d6b4,uVar5,a6,a7);
      (*(code *)PTR_FUN_8c07d6bc)(ar4,(int)aiStack_194 + DAT_8c07d6b4,a6,a7);
      iVar3 = -1;
      (*(code *)PTR_object_dtor_delete_8c07d6c0)((int)aiStack_194 + DAT_8c07d6b4,0xffffffff,a6,a7);
    }
    break;
  case 5:
    fStack_16c = (float)(*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07d740)
                                  (ar4 + DAT_8c07d73c,iVar3,a6,a7);
    if (fStack_16c == 1.4013e-45) {
      a7 = 0;
      a6 = (undefined *)0xffffffff;
      uVar4 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07d748)(ar4 + DAT_8c07d73c,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07d74c)(ar4 + DAT_8c07d73c,uVar4,a6,a7);
      *(undefined4 *)(DAT_8c07d750 + ar4) = 1;
      (*(code *)PTR_FUN_8c07d758)(ar4 + DAT_8c07d754,uVar4,a6,a7);
      (*(code *)PTR_Vec3_assign_8c07d760)(ar4 + 0x14,ar4 + DAT_8c07d75c,a6,a7);
      iVar3 = DAT_8c07d764;
      *(undefined4 *)(DAT_8c07d764 + ar4) = 0;
      uVar6 = 0;
    }
    else {
      (*(code *)PTR_vec3_copy_8c02b5fc_8c07d8b0)(auStack_118,uVar5,a6,a7);
      (*(code *)PTR_FUN_8c07d8b4)(ar4,auStack_118,a6,a7);
      (*(code *)PTR_object_dtor_delete_8c07d8b8)(auStack_118,0xffffffff,a6,a7);
      iVar3 = ar4 + DAT_8c07d8bc;
      (*(code *)PTR_FUN_8c07d8c0)(ar4,iVar3,a6,a7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c07d8c8)(ar4 + DAT_8c07d8c4,iVar3,a6,a7);
      fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
      fStack_170 = fVar7;
      fVar10 = DAT_8c07d8cc;
      if (in_FPSCR_SZ != '\0') {
        fStack_170 = (float)in_dr0;
        in_xd0 = in_dr0;
        fStack_16c = fVar7;
        fVar7 = DAT_8c07d8cc;
        fVar10 = _DAT_8c07d8d0;
      }
      if (in_FPSCR_PR == '\0' && fVar10 < fVar7) {
        (*(code *)PTR_CAnimBody_GetCurFrame_8c07d8c8)(ar4 + DAT_8c07d8c4,iVar3,a6,a7);
        fStack_174 = fVar10;
        fVar11 = _DAT_8c07d8d0;
        if (in_FPSCR_SZ != '\0') {
          in_xd0 = CONCAT44(fVar10,fVar7);
          fStack_174 = fVar7;
          fStack_170 = fVar10;
          fVar10 = _DAT_8c07d8d0;
          fVar11 = DAT_8c07d8d4;
        }
        if (in_FPSCR_PR == '\0' && fVar10 < fVar11) {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(DAT_8c07d8d4,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar9 = (double)CONCAT44(DAT_8c07d8d8,DAT_8c07d8d4);
          }
          if (in_FPSCR_PR == '\0') {
            fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar9 * dVar9,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(ar4 + 0x28) = fVar7;
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
          }
          aiStack_194[1] = ar4;
          (*(code *)PTR_Vec3_ctor_xyz_8c07d8dc)(auStack_128,auStack_128,a6,a7);
          puStack_198 = auStack_138;
          (*(code *)PTR_Vec3_scale_8c07d8e0)(auStack_128,ar4 + 0x28,a6,a7);
          (*(code *)PTR_Vec3_ctor_copy_8c07d8e8)((int)aiStack_194 + DAT_8c07d8e4,auStack_138,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c07d8ec)(auStack_138,0xffffffff,a6,a7);
          (*(code *)PTR_Vec3_dtor_8c07d8ec)(auStack_128,0xffffffff,a6,a7);
          (*(code *)PTR_FUN_8c07d8f0)(iVar2 + 4,(int)aiStack_194 + DAT_8c07d8e4,a6,a7);
          (*(code *)PTR_FUN_8c07d8f0)(iVar2 + 0x14,(int)aiStack_194 + DAT_8c07d8e4,a6,a7);
          iVar3 = -1;
          (*(code *)PTR_Vec3_dtor_8c07d8ec)((int)aiStack_194 + DAT_8c07d8e4,0xffffffff,a6,a7);
        }
      }
    }
  }
  (*(code *)PTR_FUN_8c07d8f4)(ar4,iVar3,a6,a7);
  uStack_13c = uVar6;
  (*(code *)PTR_Vec3_dtor_8c07d8ec)((int)aiStack_194 + DAT_8c07d8f8,0xffffffff,a6,a7);
  return uStack_13c;
}



/* ret_const_0_07d8fc @ 8c07d8fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_07d8fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c07d904 @ 8c07d904 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07d904(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *a5;
  undefined4 uVar2;
  undefined4 a7;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0;
  float fVar5;
  float fVar6;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  uVar3 = 1;
  switch(*(undefined4 *)(DAT_8c07dbd8 + ar4)) {
  case 0:
    (*(code *)PTR_FUN_8c07dbdc)(ar4,ar5,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07dbe8)(ar4 + DAT_8c07dbe0._4_4_,0,0xffffffff,0)
    ;
    a5 = PTR_DAT_8c07dbec;
    uVar2 = (*(code *)PTR_FUN_8c07dbf0)(ar4 + 0x14,PTR_DAT_8c07dbec,ar6,ar7);
    *(undefined4 *)(DAT_8c07dbf4 + ar4) = uVar2;
    if (*(int *)(DAT_8c07dbf4 + ar4) == 3) {
      (*(code *)PTR_FUN_8c07dbfc)(ar4 + DAT_8c07dbf8,a5,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c07dbfc)(ar4 + DAT_8c07dbf8,a5,ar6,ar7);
    }
    *(int *)(DAT_8c07dbd8 + ar4) = *(int *)(DAT_8c07dbd8 + ar4) + 1;
  case 1:
    fVar5 = (float)(in_dr0 >> 0x20);
    (*(code *)PTR_vec3_copy_8c02b5fc_8c07dc00)(auStack_18,ar4 + DAT_8c07dbf8,ar6,ar7);
    (*(code *)PTR_FUN_8c07dc04)(ar4 + 0x14,auStack_18,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c07dc08)(ar4 + 0x14,auStack_28,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07dc0c)(auStack_28,0xffffffff,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_object_dtor_delete_8c07dc10)(auStack_18,0xffffffff,ar6,ar7);
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07dc14)(ar4 + DAT_8c07dbe0._4_4_,uVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c07dc18)(ar4 + 0x14,uVar2,ar6,ar7);
    (*(code *)PTR_FUN_8c07dc1c)(auStack_38,PTR_DAT_8c07dbec,ar6,ar7);
    fVar4 = DAT_8c07dc20;
    fVar6 = _DAT_8c07dc24;
    if (in_FPSCR_SZ == '\0') {
      fVar4 = fVar5;
      fVar6 = DAT_8c07dc20;
    }
    (*(code *)PTR_Vec3_dtor_8c07dc0c)(auStack_38,0xffffffff,ar6,ar7);
    if (in_FPSCR_PR == '\0' && fVar4 < fVar6) {
      *(undefined4 *)((int)_DAT_8c07dc24 + ar4) = 0;
      *(int *)(DAT_8c07dbd8 + ar4) = *(int *)(DAT_8c07dbd8 + ar4) + 1;
    }
    if (*(int *)(DAT_8c07dc28 + ar4) == 0) {
      *(undefined4 *)(DAT_8c07dbd8 + ar4) = 0;
      uVar3 = 0;
    }
    break;
  case 2:
    *(undefined4 *)(DAT_8c07dc2c + ar4) = 1;
    uVar2 = ar5;
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07dc14)(ar4 + DAT_8c07dbe0._4_4_,ar5,ar6,ar7);
    iVar1 = *(int *)((int)_DAT_8c07dc24 + ar4);
    *(int *)((int)_DAT_8c07dc24 + ar4) = iVar1 + 1;
    if (DAT_8c07dbd8 < iVar1 + 1) {
      (*(code *)PTR_FUN_8c07dc30)(ar5,uVar2,ar6,ar7);
      *(int *)(DAT_8c07dbd8 + ar4) = *(int *)(DAT_8c07dbd8 + ar4) + 1;
    }
    else if (*(int *)(DAT_8c07dc28 + ar4) == 0) {
      *(undefined4 *)(DAT_8c07dbd8 + ar4) = 0;
      uVar3 = 0;
    }
    break;
  case 3:
    iVar1 = (*(code *)PTR_FUN_8c07dc34)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0xb) {
      iVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07dc14)
                        (ar4 + DAT_8c07dbe0._4_4_,ar5,ar6,ar7);
      if (iVar1 == 1) {
        uVar2 = 0xb;
        (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c07dc38)
                  (ar4 + DAT_8c07dbe0._4_4_,0xb,ar6,ar7);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07dc40)(ar4 + DAT_8c07dbe0._4_4_,uVar2,ar6,ar7);
        *(int *)(DAT_8c07dbd8 + ar4) = *(int *)(DAT_8c07dbd8 + ar4) + 1;
      }
    }
    else {
      (*(code *)PTR_FUN_8c07dc44)(ar4 + DAT_8c07dbe0._4_4_,0xb,ar6,ar7);
    }
    break;
  case 4:
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07dc48)(ar4 + DAT_8c07dbe0._4_4_,ar5,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c07dc4c)(ar4 + DAT_8c07dbe0._4_4_,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = in_dr0 >> 0x20;
    }
    if (in_FPSCR_PR != '\0' || (float)in_dr0 <= 0.0) {
      a7 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07dbe8)
                (ar4 + DAT_8c07dbe0._4_4_,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07dc40)(ar4 + DAT_8c07dbe0._4_4_,uVar3,uVar2,a7);
      *(undefined4 *)(DAT_8c07dbd8 + ar4) = 0;
      uVar3 = 0;
    }
  }
  *(undefined4 *)(DAT_8c07dc28 + ar4) = 0;
  return uVar3;
}



/* FUN_8c07dc50 @ 8c07dc50 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07dc50(undefined *ar4,undefined *ar5,undefined *ar6,undefined4 ar7)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 a7;
  undefined4 uVar6;
  float fVar7;
  ulonglong in_dr0;
  undefined *puVar9;
  double dVar8;
  uint uVar10;
  ulonglong in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 *puStack_11c;
  undefined *apuStack_118 [3];
  int iStack_10c;
  undefined *puStack_108;
  undefined *puStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined *puStack_ec;
  undefined *puStack_e8;
  undefined8 uStack_e4;
  int iStack_dc;
  int iStack_d8;
  undefined *puStack_cc;
  undefined *puStack_c8;
  undefined *puStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined1 auStack_9c [148];
  
  uVar6 = 1;
  apuStack_118[0] = ar5;
  switch(*(undefined4 *)(ar4 + DAT_8c07dc88)) {
  case 0:
    iVar3 = 0x13;
    iVar2 = (*(code *)PTR_FUN_8c07dcd8)(ar4 + DAT_8c07dcd4,0x13,ar6,ar7);
    uStack_b4 = CONCAT44(iVar2,(undefined4)uStack_b4);
    if (iVar2 != 0) {
      if (iVar2 != 1) {
        if (iVar2 != 2) goto LAB_8c07dcfc;
        (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07dd14)(ar4 + DAT_8c07dd10,iVar3,ar6,ar7);
      }
      iVar3 = DAT_8c07dd18;
      *(int *)(ar4 + DAT_8c07dd18) = *(int *)(ar4 + DAT_8c07dd18) + 1;
      ar6 = ar4;
      puStack_e8 = ar4;
    }
LAB_8c07dcfc:
    (*(code *)PTR_FUN_8c07dd1c)(ar4,iVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c07dd20)(ar4,iVar3,ar6,ar7);
    break;
  case 1:
    puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07de18);
    (*(code *)PTR_FUN_8c07de1c)(ar4 + 0x14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c07de24)((int)apuStack_118 + DAT_8c07de18,PTR_DAT_8c07de20,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      uVar5 = (undefined4)(in_dr0 >> 0x20);
      uStack_b4 = CONCAT44(uStack_b4._4_4_,uVar5);
      uVar1 = CONCAT44(DAT_8c07de28,uVar5);
    }
    else {
      uVar1 = CONCAT44(PTR_Vec3_dtor_8c07de2c,DAT_8c07de28);
      in_xd0 = in_dr0;
      uStack_b4 = in_dr0;
    }
    in_dr0 = uVar1;
    uStack_a0 = (uint)(in_FPSCR_PR == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0);
    ar5 = (undefined *)0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07de2c)((int)apuStack_118 + DAT_8c07de18,0xffffffff,ar6,ar7);
    if (uStack_a0 == 0) {
      *(undefined4 *)(ar4 + DAT_8c07df30) = 0;
    }
    else {
      puVar4 = PTR_DAT_8c07de20;
      uVar5 = (*(code *)PTR_FUN_8c07de30)(ar4 + 0x14,PTR_DAT_8c07de20,ar6,ar7);
      *(undefined4 *)(ar4 + DAT_8c07de34) = uVar5;
      puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07de38);
      uStack_bc._4_4_ = uVar5;
      (*(code *)PTR_FUN_8c07de1c)(ar4 + 0x14,puVar4,ar6,ar7);
      (*(code *)PTR_FUN_8c07de24)((int)apuStack_118 + DAT_8c07de38,PTR_DAT_8c07de20,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        uVar5 = (undefined4)(in_dr0 >> 0x20);
        uStack_bc = CONCAT44(uStack_bc._4_4_,uVar5);
        uVar1 = CONCAT44(DAT_8c07de3c,uVar5);
      }
      else {
        uVar1 = CONCAT44(_DAT_8c07de40,DAT_8c07de3c);
        in_xd0 = in_dr0;
        uStack_bc = in_dr0;
      }
      in_dr0 = uVar1;
      uStack_a4 = (uint)(in_FPSCR_PR == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20));
      (*(code *)PTR_Vec3_dtor_8c07de2c)((int)apuStack_118 + DAT_8c07de38,0xffffffff,ar6,ar7);
      if (uStack_a4 == 0) {
        if (*(int *)(ar4 + DAT_8c07de84) == 3) {
          iStack_f0 = *(int *)(ar4 + DAT_8c07de88) + -6;
          (*(code *)PTR_FUN_8c07de90)(ar4,0x19,PTR_DAT_8c07de8c + iStack_f0 * 0x18,ar7);
        }
        else {
          iStack_f4 = *(int *)(ar4 + DAT_8c07dee4) + -6;
          (*(code *)PTR_FUN_8c07deec)(ar4,0x1a,PTR_DAT_8c07dee8 + iStack_f4 * 0x18,ar7);
        }
        ar7 = 0;
        ar6 = (undefined *)0xffffffff;
        ar5 = (undefined *)(*(int *)(ar4 + DAT_8c07def4) + 0x16);
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07defc)(ar4 + DAT_8c07def8,ar5,0xffffffff,0)
        ;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07df00)(ar4 + DAT_8c07def8,ar5,ar6,ar7);
      }
      else {
        ar7 = 0;
        iVar3 = *(int *)(ar4 + DAT_8c07de34) + 0x18;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07de48)
                  (ar4 + _DAT_8c07de44,iVar3,0xffffffff,0);
        ar6 = PTR_s_CAnimBody_SetFrame_033e6e_8c07de4c;
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07de4c)
                  (ar4 + _DAT_8c07de44,iVar3,PTR_s_CAnimBody_SetFrame_033e6e_8c07de4c,ar7);
        *(int *)(ar4 + DAT_8c07de50) = *(int *)(ar4 + DAT_8c07de50) + 1;
        ar5 = ar4;
        puStack_ec = ar4;
      }
    }
    *(int *)(ar4 + DAT_8c07df34) = *(int *)(ar4 + DAT_8c07df34) + 1;
    puStack_f8 = ar4;
  case 2:
    iVar3 = *(int *)(ar4 + DAT_8c07df30);
    if (iVar3 == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07df6c)(ar4 + DAT_8c07df68,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        (*(code *)PTR_FUN_8c07df70)(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + DAT_8c07df74) = 0;
        uVar6 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      puStack_c0 = (undefined *)
                   (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07dff8)
                             (ar4 + DAT_8c07dff4,ar5,ar6,ar7);
      if (puStack_c0 == (undefined *)0x1) {
        puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07dffc);
        (*(code *)PTR_FUN_8c07e000)(ar4 + 0x14,ar5,ar6,ar7);
        (*(code *)PTR_FUN_8c07e008)((int)apuStack_118 + DAT_8c07dffc,PTR_DAT_8c07e004,ar6,ar7);
        puVar4 = (undefined *)(in_dr0 >> 0x20);
        puStack_c4 = puVar4;
        puVar9 = DAT_8c07e00c;
        if (in_FPSCR_SZ != '\0') {
          puStack_c4 = (undefined *)in_dr0;
          puStack_c0 = puVar4;
          puVar4 = DAT_8c07e00c;
          puVar9 = PTR_Vec3_dtor_8c07e010;
        }
        uStack_a8 = (uint)(in_FPSCR_PR == '\0' && (float)puVar4 < (float)puVar9);
        (*(code *)PTR_Vec3_dtor_8c07e010)((int)apuStack_118 + DAT_8c07dffc,0xffffffff,ar6,ar7);
        if (uStack_a8 != 0) {
          *(int *)(ar4 + DAT_8c07e014) = *(int *)(ar4 + DAT_8c07e014) + 1;
        }
      }
      else {
        (*(code *)PTR_Vec3_set_zero_8c07e12c)((int)apuStack_118 + DAT_8c07e128,ar5,ar6,ar7);
        (*(code *)PTR_Vec3_set_zero_8c07e12c)((int)apuStack_118 + DAT_8c07e130,ar5,ar6,ar7);
        puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07e134);
        (*(code *)PTR_FUN_8c07e138)(ar4 + 0x14,ar5,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c07e13c)(ar4 + 0x14,(int)apuStack_118 + DAT_8c07e134,ar6,ar7);
        uVar5 = 0xffffffff;
        (*(code *)PTR_Vec3_dtor_8c07e140)((int)apuStack_118 + DAT_8c07e134,0xffffffff,ar6,ar7);
        (*(code *)PTR_CAnimBody_GetCurFrame_8c07e148)(ar4 + DAT_8c07e144,uVar5,ar6,ar7);
        uVar5 = (undefined4)(in_dr0 >> 0x20);
        puStack_c8 = (undefined *)uVar5;
        if (in_FPSCR_SZ != '\0') {
          puStack_c8 = (undefined *)in_dr0;
          puStack_c4 = (undefined *)uVar5;
        }
        puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07e14c);
        (*(code *)PTR_FUN_8c07e150)
                  (ar4 + DAT_8c07e144,*(undefined4 *)(*(int *)(ar4 + DAT_8c07e134) + 4),ar6,ar7);
        uVar5 = (undefined4)in_dr0;
        (*(code *)PTR_vec3_copy_8c023d8c_8c07e154)
                  ((int)apuStack_118 + DAT_8c07e128,(int)apuStack_118 + DAT_8c07e14c,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c07e158)
                  ((int)apuStack_118 + DAT_8c07e14c,0xffffffff,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          uVar5 = *(undefined4 *)((int)apuStack_118 + DAT_8c07e15c);
        }
        else {
          in_xd0 = *(ulonglong *)((int)apuStack_118 + DAT_8c07e15c);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07e160),uVar5);
        }
        else {
          dVar8 = *(double *)(ar4 + DAT_8c07e160);
        }
        if (in_FPSCR_PR == '\0') {
          fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 - dVar8,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)apuStack_118 + DAT_8c07e164) = fVar7;
        }
        else {
          *(ulonglong *)((int)apuStack_118 + DAT_8c07e164) = in_xd0;
        }
        (*(code *)PTR_vec3_copy_8c023d8c_8c07e154)
                  (ar4 + DAT_8c07e168,(int)apuStack_118 + DAT_8c07e130,ar6,ar7);
        (*(code *)PTR_vec3_copy_8c02b5fc_8c07e170)
                  ((int)apuStack_118 + DAT_8c07e16c,(int)apuStack_118 + DAT_8c07e130,ar6,ar7);
        puStack_11c = (undefined1 *)((int)apuStack_118 + DAT_8c07e174);
        (*(code *)PTR_FUN_8c07e17c)(ar4 + 0x14,(int)apuStack_118 + DAT_8c07e178 + -4,ar6,ar7);
        (*(code *)PTR_Vec3_assign_8c07e13c)(ar4 + 0x14,(int)apuStack_118 + DAT_8c07e174,ar6,ar7);
        (*(code *)PTR_Vec3_dtor_8c07e140)((int)apuStack_118 + DAT_8c07e174,0xffffffff,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c07e158)
                  ((int)apuStack_118 + DAT_8c07e16c,0xffffffff,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c07e158)
                  ((int)apuStack_118 + DAT_8c07e130,0xffffffff,ar6,ar7);
        (*(code *)PTR_object_dtor_delete_8c07e158)
                  ((int)apuStack_118 + DAT_8c07e128,0xffffffff,ar6,ar7);
      }
    }
    break;
  case 3:
    puStack_11c = auStack_9c;
    (*(code *)PTR_FUN_8c07e208)(ar4 + 0x14,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c07e210)(auStack_9c,PTR_DAT_8c07e20c,ar6,ar7);
    puVar4 = (undefined *)(in_dr0 >> 0x20);
    puStack_cc = puVar4;
    puVar9 = DAT_8c07e214;
    if (in_FPSCR_SZ != '\0') {
      puStack_cc = (undefined *)in_dr0;
      puStack_c8 = puVar4;
      puVar4 = DAT_8c07e214;
      puVar9 = PTR_Vec3_dtor_8c07e218;
    }
    uStack_ac = (uint)(in_FPSCR_PR == '\0' && (float)puVar9 < (float)puVar4);
    (*(code *)PTR_Vec3_dtor_8c07e218)(auStack_9c,0xffffffff,ar6,ar7);
    if (uStack_ac == 0) {
      iVar3 = (*(code *)PTR_FUN_8c07e270)(ar4 + DAT_8c07e26c,0x13,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + DAT_8c07e274) = 0;
        *(int *)(ar4 + DAT_8c07e278) = *(int *)(ar4 + DAT_8c07e278) + 1;
      }
    }
    else {
      iVar3 = (*(code *)PTR_FUN_8c07e224)
                        (ar4 + DAT_8c07e220,*(int *)(ar4 + DAT_8c07e21c) + 0x18,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + DAT_8c07e228) = 0;
        *(int *)(ar4 + DAT_8c07e22c) = *(int *)(ar4 + DAT_8c07e22c) + 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(ar4 + DAT_8c07e2d0) = 1;
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07e2d8)(ar4 + DAT_8c07e2d4,ar5,ar6,ar7);
    iStack_10c = *(int *)(ar4 + DAT_8c07e2dc);
    *(int *)(ar4 + DAT_8c07e2dc) = iStack_10c + 1;
    if (DAT_8c07e2e0 < iStack_10c + 1) {
      puStack_108 = ar4;
      (*(code *)PTR_FUN_8c07e2e4)(apuStack_118[0],iStack_10c,PTR_FUN_8c07e2e4,ar7);
      *(int *)(ar4 + DAT_8c07e2e0) = *(int *)(ar4 + DAT_8c07e2e0) + 1;
    }
    else if (*(int *)(ar4 + DAT_8c07e304) == 0) {
      *(undefined4 *)(ar4 + DAT_8c07e308) = 0;
      uVar6 = 0;
    }
    break;
  case 5:
    iStack_d8 = (*(code *)PTR_FUN_8c07e328)(ar4,ar5,ar6,ar7);
    if (iStack_d8 == 0x12) {
      iStack_dc = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07e398)
                            (ar4 + DAT_8c07e394,DAT_8c07e394,ar6,ar7);
      if (iStack_dc == 1) {
        uVar5 = (*(code *)PTR_s_Check_This_Motion_Data_0314fc_8c07e39c)
                          (ar4 + DAT_8c07e394,0x12,ar6,ar7);
        uStack_e4 = CONCAT44(uVar5,(undefined4)uStack_e4);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07e3a4)
                  (ar4 + DAT_8c07e394,PTR_s_CAnimBody_SetFrame_033e6e_8c07e3a4,ar6,ar7);
        *(int *)(ar4 + DAT_8c07e3a8) = *(int *)(ar4 + DAT_8c07e3a8) + 1;
      }
    }
    else {
      (*(code *)PTR_FUN_8c07e3c4)(ar4 + DAT_8c07e3c0,0x12,ar4 + DAT_8c07e3c0,DAT_8c07e3c0);
    }
    break;
  case 6:
    puVar4 = ar4 + DAT_8c07e440._4_4_;
    (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07e448)(puVar4,puVar4,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c07e44c)(ar4 + DAT_8c07e440._4_4_,puVar4,ar6,ar7);
    uVar1 = in_dr0;
    if (in_FPSCR_SZ == '\0') {
      uVar10 = (uint)(in_dr0 >> 0x20);
      uStack_e4 = CONCAT44(uStack_e4._4_4_,uVar10);
      in_dr0 = (ulonglong)uVar10;
      uVar1 = uStack_e4;
    }
    uStack_e4 = uVar1;
    if (in_FPSCR_PR != '\0' || (float)in_dr0 <= 0.0) {
      a7 = 0;
      uVar5 = 0xffffffff;
      uVar6 = 0x13;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07e450)
                (ar4 + DAT_8c07e440._4_4_,0x13,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07e454)(ar4 + DAT_8c07e440._4_4_,uVar6,uVar5,a7);
      *(undefined4 *)(ar4 + DAT_8c07e458) = 0;
      uVar6 = 0;
    }
  }
  *(undefined4 *)(ar4 + DAT_8c07e45c) = 0;
  return uVar6;
}



/* FUN_8c07e460 @ 8c07e460 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07e460(int ar4,undefined4 ar5,undefined1 *ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar3;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int *a4;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  bool bVar7;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_4;
  }
  else {
    puVar4 = auStack_8;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar4 + -0x18) = in_PR;
  *(undefined1 **)(puVar4 + -0x6c) = ar6;
  *(int **)(puVar4 + -0x68) = ar7;
  iVar3 = *(int *)(puVar4 + 4);
  a4 = *(int **)(puVar4 + 8);
  (*(code *)PTR_FUN_8c07e4cc)(ar4 + DAT_8c07e4c8,ar5,ar6,ar7);
  *(undefined4 *)(DAT_8c07e4d0 + ar4) = 0;
  uVar2 = *(undefined4 *)(puVar4 + -0x6c);
  (*(code *)PTR_Vec3_ctor_copy_8c07e4d4)(puVar4 + -0x28,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c07e4d8)(ar4,uVar2,ar6,ar7);
  switch(*(undefined4 *)(DAT_8c07e4dc + ar4)) {
  case 0:
    *(undefined4 *)(DAT_8c07e51c + ar4) = 1;
    (*(code *)PTR_FUN_8c07e520)(ar4,uVar2,ar6,ar7);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        *(int *)(puVar4 + -0x58) = ar4;
        *(int *)(DAT_8c07e62c + *(int *)(puVar4 + -0x58)) =
             *(int *)(DAT_8c07e62c + *(int *)(puVar4 + -0x58)) + 1;
        goto switchD_8c07e4c4_caseD_1;
      }
      if (iVar3 != 2) break;
    }
    (*(code *)PTR_Vec3_assign_8c07e5a0)(puVar4 + -0x28,PTR_DAT_8c07e59c,ar6,ar7);
    (**(code **)(DAT_8c07e5a4 + *a4))(a4,puVar4 + -0x28,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x30) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar4 + -0x30);
      dVar6 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x24),(int)in_dr0);
    }
    else {
      *(undefined8 *)(puVar4 + -0x30) = in_dr0;
      in_xd14 = *(undefined8 *)(puVar4 + -0x30);
      dVar6 = *(double *)(puVar4 + -0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
    }
    else {
      bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar7) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar4 + -0x24) = in_fr15;
      }
      else {
        *(undefined8 *)(puVar4 + -0x24) = in_xd14;
      }
    }
    *(undefined4 *)(puVar4 + -0x70) = *(undefined4 *)(puVar4 + 0xc);
    *(int **)(puVar4 + -0x74) = a4;
    *(int *)(puVar4 + -0x78) = iVar3;
    *(undefined4 *)(puVar4 + -0x7c) = *(undefined4 *)(puVar4 + -0x68);
    ar6 = puVar4 + -0x28;
    ar7 = (int *)PTR_DAT_8c07e5a8;
    uVar2 = (*(code *)PTR_FUN_8c07e5ac)(ar4,ar5,ar6,PTR_DAT_8c07e5a8);
    *(undefined4 *)(puVar4 + -0x34) = uVar2;
    if (*(int *)(puVar4 + -0x34) == 0) {
      *(int *)(puVar4 + -0x54) = ar4;
      *(int *)(DAT_8c07e5b0 + *(int *)(puVar4 + -0x54)) =
           *(int *)(DAT_8c07e5b0 + *(int *)(puVar4 + -0x54)) + 1;
    }
    break;
  case 1:
switchD_8c07e4c4_caseD_1:
    (*(code *)PTR_Vec3_assign_8c07e634)(puVar4 + -0x28,PTR_DAT_8c07e630 + 0x10,ar6,ar7);
    (**(code **)(DAT_8c07e638 + *a4))(a4,puVar4 + -0x28,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x38) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x38),*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      *(undefined8 *)(puVar4 + -0x38) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x7c);
      dVar6 = *(double *)(puVar4 + -0x38);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar4 + -0x24) = fVar5;
    }
    else {
      *(undefined8 *)(puVar4 + -0x24) = in_xd0;
    }
    ar6 = puVar4 + -0x28;
    uVar2 = (*(code *)PTR_FUN_8c07e63c)(ar4,ar5,ar6,a4);
    *(undefined4 *)(puVar4 + -0x3c) = uVar2;
    ar7 = a4;
    if (*(int *)(puVar4 + -0x3c) == 0) {
      *(int *)(puVar4 + -0x5c) = ar4;
      *(int *)(DAT_8c07e62c + *(int *)(puVar4 + -0x5c)) =
           *(int *)(DAT_8c07e62c + *(int *)(puVar4 + -0x5c)) + 1;
    }
    break;
  case 2:
    (**(code **)(DAT_8c07e698 + *a4))(a4,puVar4 + -0x28,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x40) = (int)((ulonglong)in_dr0 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x40),*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      *(undefined8 *)(puVar4 + -0x40) = in_dr0;
      in_xd0 = *(undefined8 *)(ar4 + 0x7c);
      dVar6 = *(double *)(puVar4 + -0x40);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(puVar4 + -0x24) = fVar5;
    }
    else {
      *(undefined8 *)(puVar4 + -0x24) = in_xd0;
    }
    ar6 = puVar4 + -0x28;
    uVar2 = (*(code *)PTR_FUN_8c07e69c)(ar4,ar5,ar6,a4);
    *(undefined4 *)(puVar4 + -0x44) = uVar2;
    ar7 = a4;
    if (*(int *)(puVar4 + -0x44) == 0) {
      *(int *)(puVar4 + -0x60) = ar4;
      *(int *)(DAT_8c07e6a0 + *(int *)(puVar4 + -0x60)) =
           *(int *)(DAT_8c07e6a0 + *(int *)(puVar4 + -0x60)) + 1;
    }
    break;
  case 3:
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c07e6c4)(ar4 + DAT_8c07e6c0,uVar2,ar6,ar7);
    *(undefined4 *)(puVar4 + -0x48) = uVar1;
    if ((*(int *)(puVar4 + -0x48) == 0) || (*(int *)(puVar4 + -0x48) == 0x13)) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07e6e4)(ar4 + DAT_8c07e6e0,uVar2,ar6,ar7);
      *(undefined4 *)(DAT_8c07e6e8 + ar4) = 0;
    }
    else if (iVar3 == 1) {
      (*(code *)PTR_FUN_8c07e708)(ar4 + DAT_8c07e704,0x13,ar6,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c07e724)(ar4 + DAT_8c07e720,0,ar6,ar7);
    }
    break;
  case 4:
    (*(code *)PTR_Vec3_assign_8c07e76c)(puVar4 + -0x28,PTR_DAT_8c07e768,ar6,ar7);
    ar6 = puVar4 + -0x28;
    uVar2 = (*(code *)PTR_FUN_8c07e774)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(puVar4 + -0x4c) = uVar2;
    if (*(int *)(puVar4 + -0x4c) == 0) {
      *(int *)(puVar4 + -100) = ar4;
      *(int *)(DAT_8c07e778 + *(int *)(puVar4 + -100)) =
           *(int *)(DAT_8c07e778 + *(int *)(puVar4 + -100)) + 1;
    }
    break;
  case 5:
    uVar1 = (*(code *)PTR_get_field_1c_026dd8_8c07e798)(ar4 + DAT_8c07e794,uVar2,ar6,ar7);
    *(undefined4 *)(puVar4 + -0x50) = uVar1;
    if (*(int *)(puVar4 + -0x50) == 0) {
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07e7b8)(ar4 + DAT_8c07e7b4,uVar2,ar6,ar7);
      *(undefined4 *)(DAT_8c07e7bc + ar4) = 0;
    }
    else {
      (*(code *)PTR_FUN_8c07e814)(ar4 + DAT_8c07e810,0,ar6,ar7);
    }
  }
  if (*(int *)(DAT_8c07e818 + ar4) != 0) {
    (*(code *)PTR_Vec3_assign_8c07e820)(ar4 + DAT_8c07e81c,ar4 + 0x14,ar6,ar7);
  }
  *(undefined4 *)(puVar4 + -0x2c) = 1;
  (*(code *)PTR_Vec3_dtor_8c07e824)(puVar4 + -0x28,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + -0x2c);
}



/* FUN_8c07e828 @ 8c07e828 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c07eb06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07e828(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  undefined1 *a5_00;
  undefined4 uVar3;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar4;
  undefined4 unaff_r12;
  int *a4;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar5;
  float fVar6;
  undefined8 in_dr0;
  double dVar7;
  undefined8 uVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_4;
  }
  else {
    puVar5 = auStack_8;
  }
  *(undefined4 *)(puVar5 + -4) = unaff_r14;
  *(undefined4 *)(puVar5 + -8) = unaff_r13;
  *(undefined4 *)(puVar5 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar5 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar5 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar5 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar5 + -0x1c) = in_PR;
  *(undefined4 *)(puVar5 + -0x104) = ar6;
  a4 = *(int **)(puVar5 + DAT_8c07e88c + -0x104);
  *(undefined4 *)(DAT_8c07e890 + ar4) = 0;
  uVar3 = ar5;
  (*(code *)PTR_FUN_8c07e898)(ar4 + DAT_8c07e894,ar5,ar6,ar7);
  uVar4 = 1;
  (*(code *)PTR_FUN_8c07e89c)(ar4,uVar3,ar6,ar7);
  *(undefined4 *)(DAT_8c07e8a0 + ar4) = 0xffffffff;
  (*(code *)PTR_Vec3_ctor_zero_8c07e8a8)(puVar5 + DAT_8c07e8a4 + -0x104,uVar3,ar6,ar7);
  iVar1 = *(int *)(DAT_8c07e8ac + ar4);
  if (iVar1 == 0) {
    *(undefined4 *)(DAT_8c07e920 + ar4) = 1;
    (*(code *)PTR_FUN_8c07e924)(ar4,uVar3,ar6,ar7);
    (*(code *)PTR_FUN_8c07e92c)(ar4,PTR_DAT_8c07e928,ar5,ar7);
    ar6 = ar5;
    if (*(int *)(ar4 + 0x40) == 0) {
      uVar3 = (*(code *)PTR_FUN_8c07e934)(ar4 + DAT_8c07e930,0x29,ar5,ar7);
      *(undefined4 *)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(puVar5 + -0xc4)) {
        *(undefined4 *)(DAT_8c07e938 + ar4) = 0;
        *(undefined4 *)(DAT_8c07e93c + ar4) = *(undefined4 *)(DAT_8c07e938 + ar4);
        *(int *)(puVar5 + -0xf0) = ar4;
        *(int *)(DAT_8c07e940 + *(int *)(puVar5 + -0xf0)) =
             *(int *)(DAT_8c07e940 + *(int *)(puVar5 + -0xf0)) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    (*(code *)PTR_CAnimBody_GetCurFrame_8c07e988)(ar4 + DAT_8c07e984,uVar3,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar5 + -200);
      dVar7 = (double)CONCAT44(DAT_8c07e98c,(int)in_dr0);
    }
    else {
      *(undefined8 *)(puVar5 + -200) = in_dr0;
      dVar7 = (double)CONCAT44(_DAT_8c07e990,DAT_8c07e98c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (**(code **)(_DAT_8c07e990 + *a4))(a4,6,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(puVar5 + -0xcc) == 0) {
        uVar3 = (**(code **)(DAT_8c07e9b4 + *a4))(a4,4,ar6,ar7);
        *(undefined4 *)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(puVar5 + -0xb8) = 2;
          (*(code *)PTR_Vec3_dtor_8c07e9dc)(puVar5 + DAT_8c07e9d8 + -0x104,0xffffffff,ar6,ar7);
          return *(undefined4 *)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      a5 = 0x2c;
      uVar2 = (*(code *)PTR_FUN_8c07ebe4)(ar4 + DAT_8c07ebe0,0x2c,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd4) = uVar2;
      uVar2 = (*(code *)PTR_deref_u32_8c07ebe8)(*(undefined4 *)(puVar5 + -0xd4),a5,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd8) = uVar2;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c07ebec)(ar4 + DAT_8c07ebe0,a5,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xdc) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(puVar5 + -0xdc) = dVar7;
      }
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + DAT_8c07ebf0 + -0x104;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(DAT_8c07ebf4,SUB84(dVar7,0));
      }
      else {
        uVar8 = CONCAT44(PTR_FUN_8c07ebf8,DAT_8c07ebf4);
      }
      (*(code *)PTR_FUN_8c07ebf8)
                (ar4 + DAT_8c07ebe0,*(undefined4 *)**(undefined4 **)(puVar5 + -0xd8),ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c07ec00)
                (puVar5 + DAT_8c07ebfc + -0x104,puVar5 + DAT_8c07ebf0 + -0x104,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + DAT_8c07ebf0 + -0x104,0xffffffff,ar6,ar7);
      (*(code *)PTR_vec3_copy_8c02b5fc_8c07ec0c)
                (puVar5 + DAT_8c07ec08 + -0x104,*(undefined4 *)(puVar5 + -0x104),ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + DAT_8c07ec10 + -0x104;
      (*(code *)PTR_FUN_8c07ec18)
                (puVar5 + DAT_8c07ec14 + -0x108,puVar5 + DAT_8c07ebe0 + -0x108,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + DAT_8c07ec1c + -0x104;
      (*(code *)PTR_Vec3_add_8c07ec24)(puVar5 + DAT_8c07ec20 + -0x108,ar5,ar6,ar7);
      (*(code *)PTR_Vec3_assign_8c07ec00)
                (puVar5 + DAT_8c07ebfc + -0x104,puVar5 + DAT_8c07ec1c + -0x104,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + DAT_8c07ec1c + -0x104,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + DAT_8c07ec10 + -0x104,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c07ec28)(puVar5 + DAT_8c07ec08 + -0x104,0xffffffff,ar6,ar7);
      ar6 = *(undefined4 *)(DAT_8c07ec2c + ar4);
      uVar2 = (**(code **)(DAT_8c07ec30 + *a4))(a4,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        (*(code *)PTR_FUN_8c07ec38)(iVar1,uVar3,ar6,ar7);
      }
      (*(code *)PTR_Vec3_ctor_xyz_8c07ec3c)(puVar5 + -0x88,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xf4) = *(undefined4 *)(DAT_8c07ec2c + ar4);
      (*(code *)PTR_Vec3_set_xyz_8c07ec40)(puVar5 + -0x94,uVar3,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xa4;
      (*(code *)PTR_FUN_8c07ec18)(puVar5 + DAT_8c07ec44 + -0x108,puVar5 + -0x94,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xb4;
      (*(code *)PTR_Vec3_scale_8c07ec4c)(puVar5 + -0xa4,PTR_DAT_8c07ec48,ar6,ar7);
      (*(code *)PTR_Vec3_ctor_copy_8c07ec54)(puVar5 + DAT_8c07ec50 + -0x104,puVar5 + -0xb4,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + -0xb4,0xffffffff,ar6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + -0xa4,0xffffffff,ar6,ar7);
      (*(code *)PTR_object_dtor_delete_8c07ec28)(puVar5 + -0x94,0xffffffff,ar6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + -0x88,0xffffffff,ar6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c07ebec)(ar4 + DAT_8c07ebe0,uVar3,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = (double)CONCAT44(DAT_8c07ebf4,*(undefined4 *)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(puVar5 + -0xe4);
        dVar7 = (double)CONCAT44(PTR_FUN_8c07ebf8,DAT_8c07ebf4);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(DAT_8c07ec58,fVar6);
      }
      else {
        dVar7 = (double)CONCAT44(PTR_FUN_8c07ec5c,DAT_8c07ec58);
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(puVar5 + -0xc0) = fVar6;
      }
      else {
        *(undefined8 *)(puVar5 + -0xc0) = in_xd0;
      }
      (*(code *)PTR_FUN_8c07ec5c)(puVar5 + DAT_8c07ec50 + -0x104,puVar5 + -0xc0,ar6,ar7);
      a5_00 = puVar5 + DAT_8c07ec50 + -0x104;
      (*(code *)PTR_FUN_8c07ec60)(puVar5 + DAT_8c07ebfc + -0x104,a5_00,ar6,ar7);
      (*(code *)PTR_FUN_8c07ec38)(iVar1,a5_00,ar6,ar7);
      uVar3 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07ec04)(puVar5 + DAT_8c07ec50 + -0x104,0xffffffff,ar6,ar7);
    }
    else {
      (*(code *)PTR_vec3_clear_8c07ecec)(puVar5 + DAT_8c07ece8 + -0x104,uVar3,ar6,ar7);
    }
    uVar2 = (*(code *)PTR_FUN_8c07ecfc)(ar4 + DAT_8c07ecf8,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar1 == DAT_8c07ed00) {
        uVar3 = 6;
        (*(code *)PTR_FUN_8c07ed04)(ar4,6,ar5,a4);
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(puVar5 + -0xfc) = *(undefined4 *)(DAT_8c07ed08 + *(int *)(puVar5 + -0xf8));
      *(int *)(DAT_8c07ed08 + *(int *)(puVar5 + -0xf8)) = *(int *)(puVar5 + -0xfc) + 1;
      if (*(int *)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(DAT_8c07ed24 + ar4) = *(undefined4 *)(DAT_8c07ed28 + ar4);
      }
      else {
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07ed0c)(ar4 + DAT_8c07ecf8,uVar3,ar6,ar7);
        *(int *)(puVar5 + -0x100) = ar4;
        *(int *)(DAT_8c07ed10 + *(int *)(puVar5 + -0x100)) =
             *(int *)(DAT_8c07ed10 + *(int *)(puVar5 + -0x100)) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07ed90)(ar4 + DAT_8c07ed8c,uVar3,ar6,ar7)
    ;
    *(undefined4 *)(puVar5 + -0xec) = uVar2;
    if (*(int *)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      (*(code *)PTR_FUN_8c07ed94)(ar4,uVar3,ar6,ar7);
      *(undefined4 *)(DAT_8c07ed98 + ar4) = 1;
      *(undefined4 *)(DAT_8c07ed9c + ar4) = 0;
      *(undefined4 *)(DAT_8c07eda0 + ar4) = 0;
    }
  }
  *(undefined4 *)(puVar5 + -0xbc) = uVar4;
  (*(code *)PTR_Vec3_dtor_8c07eda8)(puVar5 + DAT_8c07eda4 + -0x104,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0xbc);
}



/* FUN_8c07edac @ 8c07edac callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07edac(int ar4,int ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined *a6;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  undefined8 in_xd0;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  iVar4 = 0xc;
  if (*(int *)(ar4 + 100) == 1) {
    iVar4 = 0x17;
  }
  iVar1 = *(int *)(DAT_8c07edf0 + ar4);
  piVar3 = ar6;
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) != 1) {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(DAT_8c07eedc,(int)in_dr0);
      }
      else {
        in_dr0 = CONCAT44(DAT_8c07eee0,DAT_8c07eedc);
      }
      a6 = PTR_DAT_8c07eed4;
      ar7 = ar6;
      (*(code *)PTR_FUN_8c07eee8)(ar4,ar5,PTR_DAT_8c07eed4,ar6);
      (*(code *)PTR_Vec3_assign_8c07eeec)(ar4 + 0x54,auStack_28,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07eef0)(auStack_28,0xffffffff,a6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(DAT_8c07eef4 + ar4) = *(int *)(DAT_8c07eef4 + ar4) + 1;
      goto LAB_8c07ee84;
    }
    *(undefined4 *)(DAT_8c07ee08 + ar4) = 3;
    iVar4 = ar5;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07ee84:
      piVar3 = (int *)(ar4 + 0x54);
      (*(code *)PTR_pure_virtual_stub_8c07ef00)(ar4,ar5,piVar3,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        *(int *)(DAT_8c07eef4 + ar4) = *(int *)(DAT_8c07eef4 + ar4) + 1;
        *(undefined4 *)(DAT_8c07ef04 + ar4) = 0;
      }
      goto switchD_8c07f028_default;
    }
    if (iVar1 == 2) {
      *(byte *)(DAT_8c07ef44 + ar4) = *(byte *)(DAT_8c07ef44 + ar4) & 0xfe;
      iVar1 = (*(code *)PTR_FUN_8c07ef4c)(ar4 + DAT_8c07ef48,iVar4,ar6,ar7);
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *(int *)(DAT_8c07efb0 + ar4) = *(int *)(DAT_8c07efb0 + ar4) + 1;
        }
        else if (iVar1 == 2) {
          *(int *)(DAT_8c07ef68 + ar4) = *(int *)(DAT_8c07ef68 + ar4) + 1;
          goto LAB_8c07efc4;
        }
      }
      (*(code *)PTR_FUN_8c07efb4)(ar4 + 0x14,iVar4,piVar3,ar7);
      (*(code *)PTR_FUN_8c07efbc)(ar4,auStack_38,piVar3,ar7);
      (*(code *)PTR_Vec3_dtor_8c07efc0)(auStack_38,0xffffffff,piVar3,ar7);
      goto switchD_8c07f028_default;
    }
    iVar4 = ar5;
    if (iVar1 != 3) goto switchD_8c07f028_default;
  }
LAB_8c07efc4:
  (*(code *)PTR_FUN_8c07f02c)(ar4 + 0x14,iVar4,piVar3,ar7);
  (*(code *)PTR_FUN_8c07f034)(ar4,auStack_48,piVar3,ar7);
  uVar2 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07f038)(auStack_48,0xffffffff,piVar3,ar7);
  *(byte *)(DAT_8c07f03c + ar4) = *(byte *)(DAT_8c07f03c + ar4) & 0xfe;
  switch(*(undefined4 *)(DAT_8c07f040 + ar4)) {
  case 0:
  case 1:
    (*(code *)PTR_FUN_8c07f088)(ar4 + DAT_8c07f084,uVar2,piVar3,ar7);
    break;
  case 2:
    (*(code *)PTR_FUN_8c07f0b0)(ar4 + DAT_8c07f0ac,uVar2,piVar3,ar7);
    break;
  case 3:
  case 4:
  case 5:
    (*(code *)PTR_FUN_8c07f0d8)(ar4 + DAT_8c07f0d4,uVar2,piVar3,ar7);
    break;
  case 6:
    (*(code *)PTR_FUN_8c07f100)(ar4 + DAT_8c07f0fc,uVar2,piVar3,ar7);
    break;
  case 7:
    if (*(int *)(ar4 + 100) == 1) {
      (*(code *)PTR_FUN_8c07f134)(ar4 + DAT_8c07f130,uVar2,piVar3,ar7);
    }
    else {
      (*(code *)PTR_FUN_8c07f1d0)(ar4 + DAT_8c07f1cc,uVar2,piVar3,ar7);
    }
  }
switchD_8c07f028_default:
  (**(code **)(DAT_8c07f1d4 + *ar6))(ar6,ar5,piVar3,ar7);
  uStack_50 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    in_dr0 = CONCAT44(uStack_50,*(undefined4 *)(ar5 + 4));
  }
  else {
    uStack_50 = (undefined4)in_dr0;
    in_xd0 = *(undefined8 *)(ar5 + 4);
  }
  if (in_FPSCR_PR != '\0' || (float)in_dr0 <= (float)((ulonglong)in_dr0 >> 0x20)) {
    iVar4 = ar5;
    (**(code **)(DAT_8c07f1d4 + *ar6))(ar6,ar5,piVar3,ar7);
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_54 = uVar2;
    if (in_FPSCR_SZ != '\0') {
      uStack_54 = (undefined4)in_dr0;
      uStack_50 = uVar2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),uStack_54);
    }
    else {
      in_xd0 = CONCAT44(uStack_50,uStack_54);
      dVar6 = *(double *)(ar5 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 - dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c07f1dc,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(PTR_FUN_8c07f1e0,DAT_8c07f1dc);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07f1d8),fVar5);
    }
    else {
      dVar6 = *(double *)(ar4 + DAT_8c07f1d8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(ar4 + DAT_8c07f1d8) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + DAT_8c07f1d8) = in_xd0;
    }
    (*(code *)PTR_FUN_8c07f1e0)(ar4,iVar4,piVar3,ar7);
  }
  return 1;
}



/* FUN_8c07f1e4 @ 8c07f1e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07f1e4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = ar6;
  uVar1 = (*(code *)PTR_FUN_8c07f24c)(ar4 + DAT_8c07f248,ar5,ar6,ar7);
  puVar2 = (undefined4 *)(*(code *)PTR_deref_u32_8c07f250)(uVar1,ar5,uVar3,ar7);
  puVar4 = (undefined4 *)(ar4 + DAT_8c07f254);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  puVar4[2] = puVar2[2];
  *(undefined4 *)(DAT_8c07f254 + ar4) = ar6;
  (*(code *)PTR_vec3_clear_8c07f25c)(ar4 + DAT_8c07f258,ar5,uVar3,ar7);
  uVar3 = (*(code *)PTR_FUN_8c07f264)(ar4 + DAT_8c07f260,ar5,uVar3,ar7);
  return uVar3;
}



/* FUN_8c07f268 @ 8c07f268 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07f268(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  uVar2 = ar5;
  (*(code *)PTR_Vec3_ctor_zero_8c07f3d8)(auStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c07f3d8)(auStack_28,uVar2,ar6,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c07f3e0)(ar4 + DAT_8c07f3dc,uVar2,ar6,ar7);
  (*(code *)PTR_FUN_8c07f3e8)(ar4 + DAT_8c07f3dc,**(undefined4 **)(DAT_8c07f3e4 + ar4),ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c07f3ec)(auStack_18,auStack_38,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_38,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_sub_8c07f3f8)(auStack_18,ar4 + DAT_8c07f3f4,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c07f3ec)(auStack_28,auStack_48,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_48,0xffffffff,ar6,ar7);
  puVar3 = auStack_18;
  (*(code *)PTR_Vec3_assign_8c07f3ec)(ar4 + DAT_8c07f3f4,puVar3,ar6,ar7);
  (*(code *)PTR_Vec3_length_sq_8c07f3fc)(auStack_28,puVar3,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_dr0;
  }
  (*(code *)PTR_Vec3_ctor_xyz_8c07f400)(auStack_58,puVar3,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c07f404)(auStack_28,auStack_58,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_58,0xffffffff,ar6,ar7);
  if (iVar1 != 0) {
    (*(code *)PTR_vec3_copy_8c02b5fc_8c07f408)(auStack_64,ar5,ar6,ar7);
    puVar3 = auStack_64;
    (*(code *)PTR_FUN_8c07f40c)(auStack_28,puVar3,ar6,ar7);
    uVar2 = (*(code *)PTR_Vec3_length_8c07f410)(auStack_74,puVar3,ar6,ar7);
    (*(code *)PTR_Vec3_assign_8c07f3ec)(ar4 + 0x14,uVar2,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_74,0xffffffff,ar6,ar7);
    (*(code *)PTR_object_dtor_delete_8c07f414)(auStack_64,0xffffffff,ar6,ar7);
  }
  (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_28,0xffffffff,ar6,ar7);
  uVar2 = (*(code *)PTR_Vec3_dtor_8c07f3f0)(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}



/* FUN_8c07f418 @ 8c07f418 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07f418(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  
  uVar1 = ar5;
  uStack_c = in_PR;
  (*(code *)PTR_Vec3_set_zero_8c07f534)(&uStack_18,ar5,ar6,ar7);
  (*(code *)PTR_Vec3_set_zero_8c07f534)(&fStack_24,uVar1,ar6,ar7);
  (*(code *)PTR_CAnimBody_GetCurFrame_8c07f53c)(ar4 + DAT_8c07f538,uVar1,ar6,ar7);
  (*(code *)PTR_FUN_8c07f544)
            (ar4 + DAT_8c07f538,*(undefined4 *)(*(int *)(DAT_8c07f540 + ar4) + 4),ar6,ar7);
  (*(code *)PTR_vec3_copy_8c023d8c_8c07f548)(&uStack_18,auStack_30,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c07f54c)(auStack_30,0xffffffff,ar6,ar7);
  uVar1 = uStack_18;
  if (in_FPSCR_SZ != '\0') {
    in_xd0 = CONCAT44(fStack_14,uStack_18);
    uVar1 = in_fr1;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07f550),uVar1);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c07f550);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  fStack_24 = fVar2;
  if (in_FPSCR_SZ != '\0') {
    fStack_24 = (float)in_xd0;
    in_xd0 = CONCAT44(fStack_10,fStack_14);
    fStack_14 = fVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07f554),fStack_14);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c07f554);
  }
  if (in_FPSCR_PR == '\0') {
    fVar2 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 - dVar3,0);
  }
  fStack_20 = fVar2;
  if (in_FPSCR_SZ != '\0') {
    fStack_20 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_c,fStack_10);
    fStack_10 = fVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + DAT_8c07f558),fStack_10);
  }
  else {
    dVar3 = *(double *)(ar4 + DAT_8c07f558);
  }
  if (in_FPSCR_PR == '\0') {
    fStack_1c = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar3 - dVar3,0);
  }
  if (in_FPSCR_SZ != '\0') {
    fStack_1c = (float)in_xd0;
    uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (*(code *)PTR_vec3_copy_8c023d8c_8c07f548)(ar4 + DAT_8c07f550,&uStack_18,ar6,ar7);
  (*(code *)PTR_vec3_copy_8c02b5fc_8c07f55c)(auStack_3c,&fStack_24,ar6,ar7);
  (*(code *)PTR_FUN_8c07f560)(ar5,auStack_3c,ar6,ar7);
  (*(code *)PTR_Vec3_assign_8c07f564)(ar5,auStack_4c,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07f568)(auStack_4c,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c07f54c)(auStack_3c,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c07f54c)(&fStack_24,0xffffffff,ar6,ar7);
  (*(code *)PTR_object_dtor_delete_8c07f54c)(&uStack_18,0xffffffff,ar6,ar7);
  return ar5;
}



/* FUN_8c07f56c @ 8c07f56c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c07f56c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 a7;
  double in_dr0;
  double dVar3;
  undefined4 in_fr3;
  bool bVar4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined4 in_stack_00000000;
  undefined8 uStack_48;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  iVar1 = *(int *)(DAT_8c07f71c + ar4);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(DAT_8c07f71c + ar4) = *(int *)(DAT_8c07f71c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = (*(code *)PTR_pure_virtual_stub_8c07f728)(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(DAT_8c07f71c + ar4) = 0;
    return 0;
  }
  a6 = ar6;
  a7 = ar7;
  (*(code *)PTR_pure_virtual_stub_8c07f728)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c07f72c)(ar5,ar6,a6,a7);
  if (in_FPSCR_SZ == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_48 = (double)CONCAT44(uStack_48._4_4_,uVar2);
    in_dr0 = (double)CONCAT44(uVar2,in_fr3);
    dVar3 = (double)CONCAT44(DAT_8c07f730,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    dVar3 = (double)CONCAT44(PTR_Vec3_sub_8c07f734,DAT_8c07f730);
    uStack_48 = in_dr0;
  }
  if (in_FPSCR_PR == '\0') {
    bVar4 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar4 = dVar3 * dVar3 < in_dr0;
  }
  if (!bVar4) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    (*(code *)PTR_Vec3_sub_8c07f734)(ar5,ar6,a6,a7);
    uVar2 = (*(code *)PTR_Vec3_length_8c07f738)(auStack_24,ar6,a6,a7);
    (*(code *)PTR_FUN_8c07f74c)(ar4,uVar2,a6,a7);
    (*(code *)PTR_Vec3_add_8c07f750)(auStack_34,ar5,a6,a7);
    (*(code *)PTR_Vec3_assign_8c07f754)(ar4 + 0x54,(int)&uStack_48 + 4,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07f758)((int)&uStack_48 + 4,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07f758)(auStack_34,0xffffffff,a6,a7);
    (*(code *)PTR_Vec3_dtor_8c07f758)(auStack_24,0xffffffff,a6,a7);
    (*(code *)PTR_FUN_8c07f760)(ar4,ar4 + 0x54,in_stack_00000000,ar7);
    *(int *)(DAT_8c07f71c + ar4) = *(int *)(DAT_8c07f71c + ar4) + 1;
  }
  return 1;
}



/* FUN_8c07f76c @ 8c07f76c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c07f76c(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *a6;
  float in_fr1;
  float fVar5;
  ulonglong uVar6;
  undefined *puVar9;
  double dVar7;
  undefined8 uVar8;
  bool bVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  uStack_c = 1;
  if (in_FPSCR_SZ == '\0') {
    in_fr1 = *(float *)(ar4 + DAT_8c07f8a8);
  }
  uVar6 = (ulonglong)(uint)in_fr1;
  if (in_FPSCR_PR == '\0' && in_fr1 < 0.0) {
    uVar4 = 0;
    a6 = ar6;
    iVar3 = (*(code *)PTR_FUN_8c07f8ac)(ar4,0,ar6,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(DAT_8c07f8b0 + ar4) = 2;
    }
    uVar2 = (uint)(iVar3 != 0);
    (*(code *)PTR_FUN_8c07f8b4)(ar4 + 0x14,uVar4,a6,ar7);
    (*(code *)PTR_FUN_8c07f8b8)(ar4 + 0x14,auStack_20,a6,ar7);
    puStack_50 = (undefined *)(uVar6 >> 0x20);
    puStack_54 = puStack_50;
    puVar9 = DAT_8c07f8bc;
    if (in_FPSCR_SZ != '\0') {
      puStack_50 = (undefined *)uVar6;
      puStack_54 = DAT_8c07f8bc;
      puVar9 = PTR_Vec3_dtor_8c07f8c0;
    }
    bVar1 = in_FPSCR_PR == '\0';
    bVar10 = (float)puVar9 < (float)puStack_54;
    uVar4 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c07f8c0)(auStack_20,0xffffffff,a6,ar7);
    if (bVar1 && bVar10) {
      (*(code *)PTR_FUN_8c07f8b4)(ar4 + 0x14,uVar4,a6,ar7);
      (*(code *)PTR_Vec3_scale_8c07f8c8)(auStack_30,PTR_DAT_8c07f8c4,a6,ar7);
      (*(code *)PTR_FUN_8c07f8cc)(ar4 + 0x14,auStack_40,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07f8c0)(auStack_40,0xffffffff,a6,ar7);
      uVar4 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07f8c0)(auStack_30,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_length_8c07f8d0)(ar4 + 0x14,uVar4,a6,ar7);
    }
    iVar3 = ar5;
    (**(code **)(DAT_8c07f8d4 + *ar6))(ar6,ar5,a6,ar7);
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(DAT_8c07f8bc,*(undefined4 *)(ar4 + 0x48));
      puStack_54 = puVar9;
    }
    else {
      dVar7 = (double)CONCAT44(PTR_Vec3_dtor_8c07f8c0,DAT_8c07f8bc);
      puStack_50 = puVar9;
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar7 = (double)CONCAT44(puStack_54,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(puStack_50,puStack_54);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (in_FPSCR_SZ == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar5);
    }
    else {
      uVar8 = *(undefined8 *)(ar5 + 4);
    }
    if (in_FPSCR_PR != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
      (*(code *)PTR_FUN_8c07f8d8)(ar4,iVar3,a6,ar7);
    }
  }
  else {
    uVar2 = (*(code *)PTR_FUN_8c07f8ac)(ar4,8,ar6,ar7);
  }
  (*(code *)PTR_FUN_8c07f8dc)(ar4,ar5,ar5,ar7);
  return uVar2;
}



/* FUN_8c07f8e0 @ 8c07f8e0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07f8e0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 uVar2;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar3;
  float fVar4;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  undefined4 in_PR;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  double dVar5;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_4;
  }
  else {
    puVar3 = auStack_8;
  }
  *(undefined4 *)(puVar3 + -4) = unaff_r14;
  *(undefined4 *)(puVar3 + -8) = unaff_r13;
  *(undefined4 *)(puVar3 + -0xc) = 1;
  *(undefined4 *)(puVar3 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar3 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar3 + -0x18) = in_PR;
  *(undefined4 *)(puVar3 + -0x100) = ar7;
  uVar2 = 1;
  a6 = ar6;
  uVar1 = (**(code **)(DAT_8c07f9bc + **(int **)(puVar3 + -0x100)))
                    (*(int **)(puVar3 + -0x100),ar5,ar6,ar7);
  *(undefined4 *)(puVar3 + -0xc0) = uVar1;
  (*(code *)PTR_Vec3_ctor_copy_8c07f9c4)
            (puVar3 + DAT_8c07f9c0 + -0x100,*(undefined4 *)(puVar3 + -0xc0),a6,ar7);
  *(undefined1 **)(puVar3 + -0x104) = puVar3 + DAT_8c07f9c8 + -0x100;
  uVar1 = ar5;
  (*(code *)PTR_Vec3_sub_8c07f9cc)(ar6,ar5,a6,ar7);
  *(undefined1 **)(puVar3 + -0x104) = puVar3 + DAT_8c07f9d0 + -0x100;
  (*(code *)PTR_Vec3_normalize_8c07f9d8)(puVar3 + DAT_8c07f9d4 + -0x104,uVar1,a6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c07f9c4)
            (puVar3 + DAT_8c07f9dc + -0x100,puVar3 + DAT_8c07f9d0 + -0x100,a6,ar7);
  (*(code *)PTR_Vec3_dtor_8c07f9e0)(puVar3 + DAT_8c07f9d0 + -0x100,0xffffffff,a6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c07f9e0)(puVar3 + DAT_8c07f9c8 + -0x100,0xffffffff,a6,ar7);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(puVar3 + DAT_8c07f9e4._4_4_ + -0x100) = (undefined4)DAT_8c07f9e4;
    dVar8 = (double)CONCAT44(*(undefined4 *)(puVar3 + DAT_8c07f9c0 + -0x100),in_fr3);
    dVar5 = (double)CONCAT44(DAT_8c07f9ec,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    *(ulonglong *)(puVar3 + DAT_8c07f9e4._4_4_ + -0x100) =
         CONCAT44(DAT_8c07f9e4._4_4_,(undefined4)DAT_8c07f9e4);
    dVar8 = *(double *)(puVar3 + DAT_8c07f9c0 + -0x100);
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar5 = (double)CONCAT44(DAT_8c07f9f0,DAT_8c07f9ec);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) * fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + fVar4,SUB84(dVar8,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
    dVar8 = dVar8 + dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar3 + DAT_8c07f9c0 + -0x100) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(puVar3 + DAT_8c07f9c0 + -0x100) = dVar8;
  }
  if (*(int *)(DAT_8c07f9f0 + ar4) < 6) {
    *(undefined4 *)(puVar3 + -0xac) = 0;
    (*(code *)PTR_Vec3_dtor_8c07f9e0)(puVar3 + DAT_8c07f9dc + -0x100,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07f9e0)(puVar3 + DAT_8c07f9c0 + -0x100,0xffffffff,a6,ar7);
    uVar1 = *(undefined4 *)(puVar3 + -0xac);
  }
  else {
    switch(*(undefined4 *)(DAT_8c07fa14 + ar4)) {
    case 0:
      if (*(int *)(DAT_8c07fa68 + ar4) == 1) {
        *(undefined4 *)(DAT_8c07fa68 + ar4) = 0;
        *(undefined4 *)(puVar3 + -0xb0) = 0;
        (*(code *)PTR_Vec3_dtor_8c07fa70)(puVar3 + DAT_8c07fa6c + -0x100,0xffffffff,a6,ar7);
        (*(code *)PTR_Vec3_dtor_8c07fa70)(puVar3 + DAT_8c07fa74 + -0x100,0xffffffff,a6,ar7);
        return *(undefined4 *)(puVar3 + -0xb0);
      }
      (*(code *)PTR_Vec3_ctor_copy_8c07fae0)
                (puVar3 + DAT_8c07fadc + -0x100,puVar3 + DAT_8c07fad8 + -0x100,a6,ar7);
      a6 = 1;
      uVar1 = (*(code *)PTR_FUN_8c07fae4)(ar4,puVar3 + DAT_8c07fadc + -0x100,1,ar7);
      *(undefined4 *)(puVar3 + -0xc4) = uVar1;
      *(uint *)(puVar3 + -0xb8) = (uint)(*(int *)(puVar3 + -0xc4) == 0);
      (*(code *)PTR_Vec3_dtor_8c07fae8)(puVar3 + DAT_8c07fadc + -0x100,0xffffffff,a6,ar7);
      if (*(int *)(puVar3 + -0xb8) != 0) {
        *(int *)(puVar3 + -0xe4) = ar4;
        *(int *)(DAT_8c07faec + *(int *)(puVar3 + -0xe4)) =
             *(int *)(DAT_8c07faec + *(int *)(puVar3 + -0xe4)) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
      break;
    case 1:
      *(int *)(puVar3 + -0xe8) = ar4;
      *(int *)(DAT_8c07fb7c + *(int *)(puVar3 + -0xe8)) =
           *(int *)(DAT_8c07fb7c + *(int *)(puVar3 + -0xe8)) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      a6 = 5;
      uVar1 = (*(code *)PTR_rand_range_8c07fb80)(ar4,3,5,ar7);
      *(undefined4 *)(puVar3 + -200) = uVar1;
      *(undefined4 *)(DAT_8c07fb84 + ar4) = *(undefined4 *)(puVar3 + -200);
    case 2:
      (*(code *)PTR_Vec3_ctor_copy_8c07fb90)
                (puVar3 + DAT_8c07fb8c + -0x100,puVar3 + DAT_8c07fb88 + -0x100,a6,ar7);
      (*(code *)PTR_FUN_8c07fb98)(ar4,puVar3 + DAT_8c07fb8c + -0x100,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07fb9c)(puVar3 + DAT_8c07fb8c + -0x100,0xffffffff,a6,ar7);
      *(int *)(puVar3 + -0xec) = ar4;
      *(int *)(DAT_8c07fb7c + *(int *)(puVar3 + -0xec)) =
           *(int *)(DAT_8c07fb7c + *(int *)(puVar3 + -0xec)) + 1;
      if (*(int *)(DAT_8c07fba0 + ar4) == 6) {
        ar7 = 0;
        a6 = 0xffffffff;
        uVar1 = 0x24;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07fbac)
                  (ar4 + DAT_8c07fba4._4_4_,0x24,0xffffffff,0);
      }
      else {
        ar7 = 0;
        a6 = 0xffffffff;
        uVar1 = 0x2e;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07fbe0)
                  (ar4 + DAT_8c07fbd8._4_4_,0x2e,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07fbe4)(ar4 + DAT_8c07fbd8._4_4_,uVar1,a6,ar7);
      break;
    case 3:
      *(undefined4 *)(DAT_8c07fc38 + ar4) = 1;
      (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c07fc40)(ar4 + DAT_8c07fc3c,uVar1,a6,ar7);
      (*(code *)PTR_CAnimBody_GetCurFrame_8c07fc44)(ar4 + DAT_8c07fc3c,uVar1,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + -0xcc) = (int)((ulonglong)dVar5 >> 0x20);
        fVar4 = *(float *)(puVar3 + -0xcc);
        fVar6 = DAT_8c07fc48;
      }
      else {
        *(double *)(puVar3 + -0xcc) = dVar5;
        fVar4 = DAT_8c07fc48;
        fVar6 = _DAT_8c07fc4c;
      }
      if (in_FPSCR_PR != '\0' || fVar6 <= fVar4) {
        *(undefined4 *)((int)_DAT_8c07fc4c + ar4) = 0x10;
        *(int *)(puVar3 + -0xf0) = ar4;
        *(int *)(DAT_8c07fc50 + *(int *)(puVar3 + -0xf0)) =
             *(int *)(DAT_8c07fc50 + *(int *)(puVar3 + -0xf0)) + 1;
      }
      break;
    case 4:
      (*(code *)PTR_Vec3_ctor_copy_8c07fd90)(puVar3 + -0x88,puVar3 + DAT_8c07fd8c + -0x100,a6,ar7);
      uVar7 = SUB84(dVar8,0);
      (*(code *)PTR_FUN_8c07fd98)(ar4,puVar3 + -0x88,a6,ar7);
      a5 = 0xffffffff;
      (*(code *)PTR_Vec3_dtor_8c07fd9c)(puVar3 + -0x88,0xffffffff,a6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c07fdac)(ar4 + DAT_8c07fda8,a5,a6,ar7);
      *(undefined4 *)(puVar3 + -0xd0) = uVar1;
      if (*(int *)(puVar3 + -0xd0) == 7) {
        (*(code *)PTR_FUN_8c07fdb8)(ar4,a5,a6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar3 + -0xd4) = (int)((ulonglong)dVar5 >> 0x20);
        }
        else {
          *(double *)(puVar3 + -0xd4) = dVar5;
        }
        (*(code *)PTR_FUN_8c07fdbc)(ar4 + DAT_8c07fda8,a5,a6,ar7);
      }
      *(undefined4 *)(DAT_8c07fdc0 + ar4) = 1;
      (*(code *)PTR_CAnimBody_GetCurFrame_8c07fdc4)(ar4 + DAT_8c07fda8,a5,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + -0xd8) = (int)((ulonglong)dVar5 >> 0x20);
        dVar8 = (double)CONCAT44(DAT_8c07fdc8,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        *(double *)(puVar3 + -0xd8) = dVar5;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar8 = (double)CONCAT44(DAT_8c07fdcc,DAT_8c07fdc8);
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar8,0) < (float)((ulonglong)dVar8 >> 0x20)) {
        *(int *)(puVar3 + -0xf4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(DAT_8c07fdcc,*(undefined4 *)(*(int *)(puVar3 + -0xf4) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar3 + -0xf4) + 0x28);
          dVar8 = (double)CONCAT44(PTR_Vec3_scale_8c07fdd0,DAT_8c07fdcc);
        }
        if (in_FPSCR_PR == '\0') {
          fVar4 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar4,SUB84(dVar8,0) + fVar4);
        }
        else {
          dVar8 = dVar8 + dVar8;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar3 + -0xf4) + 0x28) = SUB84(dVar8,0);
        }
        else {
          *(undefined8 *)(*(int *)(puVar3 + -0xf4) + 0x28) = in_xd0;
        }
      }
      *(undefined1 **)(puVar3 + -0x104) = puVar3 + -0x98;
      (*(code *)PTR_Vec3_scale_8c07fdd0)(ar4 + 0x14,ar4 + 0x28,a6,ar7);
      *(undefined1 **)(puVar3 + -0x104) = puVar3 + -0xa8;
      (*(code *)PTR_Vec3_add_8c07fdd4)(ar5,puVar3 + -0x98,a6,ar7);
      (*(code *)PTR_FUN_8c07fdd8)(puVar3 + -0xa8,ar6,a6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar3 + -0xdc) = (int)((ulonglong)dVar8 >> 0x20);
        dVar8 = (double)CONCAT44(*(undefined4 *)(puVar3 + -0xdc),uVar7);
        dVar5 = (double)CONCAT44((undefined4)DAT_8c07fdb0,*(undefined4 *)(ar4 + 0x48));
      }
      else {
        *(double *)(puVar3 + -0xdc) = dVar8;
        dVar8 = *(double *)(puVar3 + -0xdc);
        dVar5 = (double)CONCAT44(DAT_8c07fdb0._4_4_,(undefined4)DAT_8c07fdb0);
      }
      if (in_FPSCR_PR == '\0') {
        bVar9 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20) <
                (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        bVar9 = dVar5 * dVar5 < dVar8;
      }
      *(uint *)(puVar3 + -0xbc) = 1 - (uint)bVar9;
      (*(code *)PTR_Vec3_dtor_8c07fd9c)(puVar3 + -0xa8,0xffffffff,a6,ar7);
      (*(code *)PTR_Vec3_dtor_8c07fd9c)(puVar3 + -0x98,0xffffffff,a6,ar7);
      if (*(int *)(puVar3 + -0xbc) == 0) {
        if (*(int *)(DAT_8c07fe10 + ar4) == 1) {
          *(int *)(puVar3 + -0xfc) = ar4;
          *(int *)(DAT_8c07fe14 + *(int *)(puVar3 + -0xfc)) =
               *(int *)(DAT_8c07fe14 + *(int *)(puVar3 + -0xfc)) + 1;
          *(undefined4 *)(DAT_8c07fe10 + ar4) = 0;
          *(undefined4 *)(DAT_8c07fe18 + ar4) = 0;
        }
      }
      else {
        *(int *)(puVar3 + -0xf8) = ar4;
        *(int *)(DAT_8c07fddc + *(int *)(puVar3 + -0xf8)) =
             *(int *)(DAT_8c07fddc + *(int *)(puVar3 + -0xf8)) + 1;
        *(undefined4 *)(DAT_8c07fde0 + ar4) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(DAT_8c07fecc + ar4) = 1;
      a6 = ar5;
      (*(code *)PTR_FUN_8c07fed0)(ar4,ar5,ar5,ar7);
      uVar1 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033ba0_8c07fedc)
                        (ar4 + DAT_8c07fed4._4_4_,ar5,a6,ar7);
      *(undefined4 *)(puVar3 + -0xe0) = uVar1;
      if (*(int *)(puVar3 + -0xe0) == 1) {
        uVar2 = 0;
        *(undefined4 *)(DAT_8c07fee0 + ar4) = 0;
        *(undefined4 *)(DAT_8c07fee4 + ar4) = 0;
        ar7 = 0;
        a6 = 0xffffffff;
        uVar1 = 0;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c07feec)
                  (ar4 + DAT_8c07fed4._4_4_,0,0xffffffff,0);
        (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c07fef0)(ar4 + DAT_8c07fed4._4_4_,uVar1,a6,ar7);
        (*(code *)PTR_FUN_8c07fef4)(ar4 + DAT_8c07fed4._4_4_,uVar1,a6,ar7);
        *(undefined4 *)(DAT_8c07fecc + ar4) = 0;
        *(undefined4 *)(DAT_8c07fef8 + ar4) = 0xffffffff;
      }
    }
    *(undefined4 *)(puVar3 + -0xb4) = uVar2;
    (*(code *)PTR_Vec3_dtor_8c07ff00)(puVar3 + DAT_8c07fefc + -0x100,0xffffffff,a6,ar7);
    (*(code *)PTR_Vec3_dtor_8c07ff00)(puVar3 + DAT_8c07ff04 + -0x100,0xffffffff,a6,ar7);
    uVar1 = *(undefined4 *)(puVar3 + -0xb4);
  }
  return uVar1;
}



/* FUN_8c07ff08 @ 8c07ff08 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c07ff08(int ar4,undefined1 *ar5,undefined1 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined4 uVar2;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 uVar3;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined4 in_fr3;
  float fVar9;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar10;
  undefined4 in_PR;
  int iVar11;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar4 = auStack_4;
  }
  else {
    puVar4 = auStack_8;
  }
  *(undefined4 *)(puVar4 + -4) = unaff_r14;
  *(undefined4 *)(puVar4 + -8) = unaff_r13;
  *(undefined4 *)(puVar4 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar4 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar4 + -0x14) = in_PR;
  *(int *)(puVar4 + -0x154) = ar7;
  uVar3 = 1;
  uVar1 = (**(code **)(DAT_8c080044 + **(int **)(puVar4 + -0x154)))
                    (*(int **)(puVar4 + -0x154),ar5,ar6,ar7);
  *(undefined4 *)(puVar4 + -0xe8) = uVar1;
  uVar1 = *(undefined4 *)(puVar4 + -0xe8);
  (*(code *)PTR_Vec3_ctor_copy_8c08004c)(puVar4 + DAT_8c080048 + -0x154,uVar1,ar6,ar7);
  fVar9 = 0.0;
  (*(code *)PTR_Vec3_ctor_zero_8c080054)(puVar4 + DAT_8c080050 + -0x154,uVar1,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_zero_8c080054)
            (puVar4 + DAT_8c080058 + -0x154,PTR_Vec3_ctor_zero_8c080054,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c08005c,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = (double)CONCAT44(DAT_8c080060,DAT_8c08005c);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    *(float *)(puVar4 + DAT_8c080050 + -0x154) = fVar5;
    dVar6 = (double)CONCAT44(DAT_8c080060,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    *(undefined8 *)(puVar4 + DAT_8c080050 + -0x154) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = (double)CONCAT44(DAT_8c080064,DAT_8c080060);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44(DAT_8c080064,fVar5);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c080068,DAT_8c080064);
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar4 + DAT_8c080058 + -0x154) = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined4 *)(puVar4 + DAT_8c08006c + -0x154) = DAT_8c080068;
    *(undefined4 *)(puVar4 + DAT_8c080070 + -0x154) = DAT_8c080068;
    *(undefined4 *)(puVar4 + DAT_8c080078 + -0x154) = DAT_8c080074;
    uVar7 = CONCAT44(DAT_8c080074,SUB84(dVar6,0));
    *(undefined4 *)(puVar4 + DAT_8c08007c + -0x154) = DAT_8c080074;
  }
  else {
    *(double *)(puVar4 + DAT_8c080058 + -0x154) = dVar6;
    *(ulonglong *)(puVar4 + DAT_8c08006c + -0x154) = CONCAT44(DAT_8c08006c,DAT_8c080068);
    *(ulonglong *)(puVar4 + DAT_8c080070 + -0x154) = CONCAT44(DAT_8c08006c,DAT_8c080068);
    *(ulonglong *)(puVar4 + DAT_8c080078 + -0x154) = CONCAT44(DAT_8c080078,DAT_8c080074);
    uVar7 = CONCAT44(DAT_8c080078,DAT_8c080074);
    *(undefined8 *)(puVar4 + DAT_8c08007c + -0x154) = uVar7;
  }
  *(undefined1 **)(puVar4 + -0x158) = puVar4 + DAT_8c080080 + -0x154;
  a5 = puVar4 + DAT_8c080070 + -0x158;
  (*(code *)PTR_Vec3_sub_8c080084)(ar5,a5,ar6,ar7);
  *(undefined1 **)(puVar4 + -0x158) = puVar4 + DAT_8c080088 + -0x154;
  (*(code *)PTR_Vec3_normalize_8c080090)(puVar4 + DAT_8c08008c + -0x158,a5,ar6,ar7);
  (*(code *)PTR_Vec3_ctor_copy_8c08004c)
            (puVar4 + DAT_8c080094 + -0x154,puVar4 + DAT_8c080088 + -0x154,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080088 + -0x154,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080080 + -0x154,0xffffffff,ar6,ar7);
  iVar11 = DAT_8c080844;
  if (*(int *)(DAT_8c080078 + ar4) < 6) {
    *(undefined4 *)(puVar4 + -0xd8) = 0;
    (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080094 + -0x154,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080058 + -0x154,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080050 + -0x154,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c080098)(puVar4 + DAT_8c080048 + -0x154,0xffffffff,ar6,ar7);
    return *(undefined4 *)(puVar4 + -0xd8);
  }
  switch(*(undefined4 *)(DAT_8c0800c4 + ar4)) {
  case 0:
    ar7 = DAT_8c080120;
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c080124)
                      (ar4 + DAT_8c080120,PTR_CAnimBody_AdvanceFrame_wrapper_8c080124,ar6,
                       DAT_8c080120);
    *(undefined4 *)(puVar4 + -0xec) = uVar1;
    if (*(int *)(puVar4 + -0xec) == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(puVar4 + -300) = ar4;
      *(int *)(DAT_8c080128 + *(int *)(puVar4 + -300)) =
           *(int *)(DAT_8c080128 + *(int *)(puVar4 + -300)) + 1;
    }
    break;
  case 1:
    ar6 = puVar4 + DAT_8c08019c + -0x154;
    uVar1 = (*(code *)PTR_pure_virtual_stub_8c0801a4)(ar4,ar5,ar6,ar7);
    *(undefined4 *)(puVar4 + -0xf0) = uVar1;
    if (*(int *)(puVar4 + -0xf0) == 0) {
      *(int *)(puVar4 + -0x130) = ar4;
      *(int *)(DAT_8c0801a8 + *(int *)(puVar4 + -0x130)) =
           *(int *)(DAT_8c0801a8 + *(int *)(puVar4 + -0x130)) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      ar6 = (undefined1 *)0x5;
      uVar1 = (*(code *)PTR_rand_range_8c0801ac)(ar4,3,5,ar7);
      *(undefined4 *)(puVar4 + -0xf4) = uVar1;
      *(undefined4 *)(DAT_8c0801b0 + ar4) = *(undefined4 *)(puVar4 + -0xf4);
      *(undefined4 *)(DAT_8c0801b4 + ar4) = 0;
    }
    break;
  case 2:
    *(undefined1 **)(puVar4 + -0x158) = puVar4 + DAT_8c080248 + -0x154;
    (*(code *)PTR_FUN_8c08024c)(ar4 + 0x14,uVar1,ar6,ar7);
    (*(code *)PTR_FUN_8c080254)(ar4,puVar4 + DAT_8c080248 + -0x154,ar6,ar7);
    uVar2 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c080258)(puVar4 + DAT_8c080248 + -0x154,0xffffffff,ar6,ar7);
    iVar11 = ar4 + DAT_8c08025c;
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c080260)(iVar11,uVar2,ar6,ar7);
    *(undefined4 *)(puVar4 + -0xf8) = uVar1;
    if (*(int *)(puVar4 + -0xf8) == 1) {
      (*(code *)PTR_FUN_8c080264)(iVar11,uVar2,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0xfc) = (int)((ulonglong)uVar7 >> 0x20);
        fVar9 = *(float *)(puVar4 + -0xfc);
        fVar5 = DAT_8c080268;
      }
      else {
        *(undefined8 *)(puVar4 + -0xfc) = uVar7;
        fVar9 = DAT_8c080268;
        fVar5 = _DAT_8c08026c;
      }
      if (in_FPSCR_PR == '\0' && fVar9 < fVar5) {
        *(int *)(puVar4 + -0x134) = ar4;
        *(int *)((int)_DAT_8c08026c + *(int *)(puVar4 + -0x134)) =
             *(int *)((int)_DAT_8c08026c + *(int *)(puVar4 + -0x134)) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(DAT_8c080270 + ar4) = 0;
      }
    }
    break;
  case 3:
    (*(code *)PTR_Vec3_ctor_copy_8c0802f8)
              (puVar4 + DAT_8c0802f4 + -0x154,puVar4 + DAT_8c0802f0 + -0x154,ar6,ar7);
    ar6 = (undefined1 *)0x1;
    uVar1 = (*(code *)PTR_FUN_8c0802fc)(ar4,puVar4 + DAT_8c0802f4 + -0x154,1,ar7);
    *(undefined4 *)(puVar4 + -0x100) = uVar1;
    *(uint *)(puVar4 + -0xe0) = (uint)(*(int *)(puVar4 + -0x100) == 0);
    (*(code *)PTR_Vec3_dtor_8c080300)(puVar4 + DAT_8c0802f4 + -0x154,0xffffffff,ar6,ar7);
    if (*(int *)(puVar4 + -0xe0) != 0) {
      *(int *)(puVar4 + -0x138) = ar4;
      *(int *)(DAT_8c080304 + *(int *)(puVar4 + -0x138)) =
           *(int *)(DAT_8c080304 + *(int *)(puVar4 + -0x138)) + 1;
      if (*(int *)(DAT_8c080308 + ar4) == 6) {
        ar7 = 0;
        ar6 = (undefined1 *)0xffffffff;
        uVar1 = 0x23;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c080314)
                  (ar4 + DAT_8c08030c._4_4_,0x23,0xffffffff,0);
      }
      else {
        ar7 = 0;
        ar6 = (undefined1 *)0xffffffff;
        uVar1 = 0x2d;
        (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c080374)
                  (ar4 + DAT_8c08036c._4_4_,0x2d,0xffffffff,0);
      }
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c080378)(ar4 + DAT_8c08036c._4_4_,uVar1,ar6,ar7);
      *(undefined4 *)(DAT_8c08037c + ar4) = 0;
      (*(code *)PTR_FUN_8c080388)(ar4,uVar1,ar6,ar7);
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar4 + -0x104) = (int)((ulonglong)uVar7 >> 0x20);
      }
      else {
        *(undefined8 *)(puVar4 + -0x104) = uVar7;
      }
      (*(code *)PTR_FUN_8c08038c)(ar4 + DAT_8c08036c._4_4_,uVar1,ar6,ar7);
    }
    break;
  case 4:
    *(undefined4 *)(DAT_8c080438 + ar4) = 1;
    (*(code *)PTR_Vec3_ctor_copy_8c080444)
              (puVar4 + DAT_8c080440 + -0x154,puVar4 + DAT_8c08043c + -0x154,ar6,ar7);
    (*(code *)PTR_FUN_8c08044c)(ar4,puVar4 + DAT_8c080440 + -0x154,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c080450)(puVar4 + DAT_8c080440 + -0x154,0xffffffff,ar6,ar7);
    (*(code *)PTR_FUN_8c080454)(ar4,uVar1,ar6,ar7);
    ar6 = ar5;
    (*(code *)PTR_FUN_8c080458)(ar4,ar5,ar5,ar7);
    (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c08045c)(ar4 + DAT_8c080440,ar5,ar6,ar7);
    (*(code *)PTR_CAnimBody_GetCurFrame_8c080460)(ar4 + DAT_8c080440,ar5,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x108) = (int)((ulonglong)uVar7 >> 0x20);
      fVar9 = *(float *)(puVar4 + -0x108);
      fVar5 = DAT_8c080464;
    }
    else {
      *(undefined8 *)(puVar4 + -0x108) = uVar7;
      fVar9 = DAT_8c080464;
      fVar5 = _DAT_8c080468;
    }
    if (in_FPSCR_PR != '\0' || fVar5 <= fVar9) {
      *(int *)(puVar4 + -0x13c) = ar4;
      *(int *)((int)_DAT_8c080468 + *(int *)(puVar4 + -0x13c)) =
           *(int *)((int)_DAT_8c080468 + *(int *)(puVar4 + -0x13c)) + 1;
      ar6 = (undefined1 *)0x6;
      uVar1 = (*(code *)PTR_rand_range_8c08046c)(ar4,4,6,ar7);
      *(undefined4 *)(puVar4 + -0x10c) = uVar1;
      *(undefined4 *)(DAT_8c080470 + ar4) = *(undefined4 *)(puVar4 + -0x10c);
      *(undefined4 *)(DAT_8c080474 + ar4) = 0xf;
    }
    break;
  case 5:
    (*(code *)PTR_Vec3_ctor_copy_8c08053c)
              (puVar4 + DAT_8c080538 + -0x154,puVar4 + DAT_8c080534 + -0x154,ar6,ar7);
    (*(code *)PTR_FUN_8c080544)(ar4,puVar4 + DAT_8c080538 + -0x154,ar6,ar7);
    uVar1 = 0xffffffff;
    (*(code *)PTR_Vec3_dtor_8c080548)(puVar4 + DAT_8c080538 + -0x154,0xffffffff,ar6,ar7);
    *(undefined4 *)(DAT_8c08054c + ar4) = 1;
    (*(code *)PTR_CAnimBody_GetCurFrame_8c080554)(ar4 + DAT_8c080550,uVar1,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x110) = (int)((ulonglong)uVar7 >> 0x20);
      fVar9 = *(float *)(puVar4 + -0x110);
    }
    else {
      *(undefined8 *)(puVar4 + -0x110) = uVar7;
    }
    if (in_FPSCR_PR == '\0') {
      iVar11 = (int)fVar9;
    }
    else {
      iVar11 = (int)(double)CONCAT44(in_fr14,fVar9);
    }
    if ((iVar11 == DAT_8c080558) && (*(int *)(DAT_8c08055c + ar4) < 1)) {
      *(int *)(puVar4 + -0x140) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c080560,*(undefined4 *)(*(int *)(puVar4 + -0x140) + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x140) + 0x28);
        dVar6 = (double)CONCAT44(DAT_8c080564,DAT_8c080560);
      }
      if (in_FPSCR_PR == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)(puVar4 + -0x140) + 0x28) = fVar5;
        fVar5 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(*(int *)(puVar4 + -0x140) + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      uVar2 = (*(code *)PTR_s_CAnimBody_AdvanceFrame_033d90_8c080570)
                        (ar4 + DAT_8c080550,uVar1,ar6,ar7);
      *(undefined4 *)(puVar4 + -0x114) = uVar2;
      if (*(int *)(puVar4 + -0x114) == 7) {
        ar6 = (undefined1 *)0x6;
        uVar1 = 4;
        uVar2 = (*(code *)PTR_rand_range_8c080574)(ar4,4,6,ar7);
        *(undefined4 *)(puVar4 + -0x118) = uVar2;
        *(undefined4 *)(DAT_8c08055c + ar4) = *(undefined4 *)(puVar4 + -0x118);
      }
    }
    else {
      uVar2 = (*(code *)PTR_FUN_8c0806ec)(ar4 + DAT_8c0806e8,uVar1,ar6,ar7);
      *(undefined4 *)(puVar4 + -0x11c) = uVar2;
      if (*(int *)(puVar4 + -0x11c) == 7) {
        (*(code *)PTR_FUN_8c0806f8)(ar4,uVar1,ar6,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar4 + -0x120) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(puVar4 + -0x120) = uVar7;
        }
        (*(code *)PTR_FUN_8c0806fc)(ar4 + DAT_8c0806e8,uVar1,ar6,ar7);
        *(int *)(puVar4 + -0x144) = ar4;
        *(int *)(DAT_8c080700 + *(int *)(puVar4 + -0x144)) =
             *(int *)(DAT_8c080700 + *(int *)(puVar4 + -0x144)) + -1;
      }
    }
    (*(code *)PTR_FUN_8c080704)(ar4,uVar1,ar6,ar7);
    *(int *)(puVar4 + -0x148) = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c080708,*(undefined4 *)(*(int *)(puVar4 + -0x148) + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x148) + 0x28);
      dVar6 = (double)CONCAT44(DAT_8c08070c,DAT_8c080708);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(*(int *)(puVar4 + -0x148) + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(*(int *)(puVar4 + -0x148) + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (in_FPSCR_PR == '\0' && 0.0 < fVar5) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(DAT_8c08070c,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(DAT_8c080710,DAT_8c08070c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = (float)((ulonglong)dVar6 >> 0x20) < fVar9;
    }
    else {
      bVar10 = dVar6 < (double)CONCAT44(in_fr14,fVar9);
    }
    if (bVar10) {
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c080710,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c080714,DAT_8c080710);
      }
      if (in_FPSCR_PR == '\0') {
        bVar10 = fVar9 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar10 = (double)CONCAT44(in_fr14,fVar9) < dVar6;
      }
      if (!bVar10) goto LAB_8c08060a;
LAB_8c08061a:
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c08071c,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = (double)CONCAT44(DAT_8c080720,DAT_8c08071c);
      }
      if (in_FPSCR_PR == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        *(int *)(puVar4 + -0x14c) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c080720,*(undefined4 *)(*(int *)(puVar4 + -0x14c) + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)(puVar4 + -0x14c) + 0x28);
          dVar6 = (double)CONCAT44(DAT_8c080724,DAT_8c080720);
        }
        if (in_FPSCR_PR == '\0') {
          fVar9 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar9,SUB84(dVar6,0) - fVar9);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(*(int *)(puVar4 + -0x14c) + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(*(int *)(puVar4 + -0x14c) + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08060a:
      if (in_FPSCR_SZ == '\0') {
        dVar6 = (double)CONCAT44(DAT_8c080714,SUB84(dVar6,0));
      }
      else {
        dVar6 = (double)CONCAT44(DAT_8c080718,DAT_8c080714);
      }
      if (in_FPSCR_PR == '\0') {
        bVar10 = (float)((ulonglong)dVar6 >> 0x20) < fVar9;
      }
      else {
        bVar10 = dVar6 < (double)CONCAT44(in_fr14,fVar9);
      }
      if (bVar10) {
        if (in_FPSCR_SZ == '\0') {
          dVar6 = (double)CONCAT44(DAT_8c080718,SUB84(dVar6,0));
        }
        else {
          dVar6 = (double)CONCAT44(DAT_8c08071c,DAT_8c080718);
        }
        if (in_FPSCR_PR == '\0') {
          bVar10 = fVar9 < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar10 = (double)CONCAT44(in_fr14,fVar9) < dVar6;
        }
        if (bVar10) goto LAB_8c08061a;
      }
    }
    *(undefined1 **)(puVar4 + -0x158) = puVar4 + DAT_8c080724 + -0x154;
    (*(code *)PTR_Vec3_scale_8c080728)(ar4 + 0x14,ar4 + 0x28,ar6,ar7);
    *(undefined1 **)(puVar4 + -0x158) = puVar4 + DAT_8c08072c + -0x154;
    (*(code *)PTR_Vec3_add_8c080734)(ar5,puVar4 + DAT_8c080730 + -0x158,ar6,ar7);
    (*(code *)PTR_FUN_8c08073c)
              (puVar4 + DAT_8c08072c + -0x154,puVar4 + DAT_8c080738 + -0x154,ar6,ar7);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar4 + -0x124) = (int)((ulonglong)dVar6 >> 0x20);
      dVar6 = (double)CONCAT44(*(undefined4 *)(puVar4 + -0x124),in_fr3);
      dVar8 = (double)CONCAT44((undefined4)DAT_8c0806f0,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(double *)(puVar4 + -0x124) = dVar6;
      dVar6 = *(double *)(puVar4 + -0x124);
      dVar8 = (double)CONCAT44(DAT_8c0806f0._4_4_,(undefined4)DAT_8c0806f0);
    }
    if (in_FPSCR_PR == '\0') {
      bVar10 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20) <
               (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar10 = dVar8 * dVar8 < dVar6;
    }
    *(uint *)(puVar4 + -0xe4) = 1 - (uint)bVar10;
    (*(code *)PTR_Vec3_dtor_8c080740)(puVar4 + DAT_8c08072c + -0x154,0xffffffff,ar6,ar7);
    (*(code *)PTR_Vec3_dtor_8c080740)(puVar4 + DAT_8c080724 + -0x154,0xffffffff,ar6,ar7);
    if (*(int *)(puVar4 + -0xe4) != 0) {
      *(int *)(puVar4 + -0x150) = ar4;
      *(int *)(DAT_8c080744 + *(int *)(puVar4 + -0x150)) =
           *(int *)(DAT_8c080744 + *(int *)(puVar4 + -0x150)) + 1;
      *(undefined4 *)(DAT_8c080748 + ar4) = 0;
    }
    break;
  case 6:
    *(undefined4 *)(DAT_8c080844 + ar4) = 1;
    (*(code *)PTR_FUN_8c080848)(ar4,iVar11,ar6,ar7);
    (*(code *)PTR_FUN_8c08084c)(ar4,ar5,ar5,ar7);
    uVar1 = (*(code *)PTR_CAnimBody_AdvanceFrame_wrapper_8c080854)
                      (ar4 + DAT_8c080850,PTR_CAnimBody_AdvanceFrame_wrapper_8c080854,ar5,ar7);
    *(undefined4 *)(puVar4 + -0x128) = uVar1;
    ar6 = ar5;
    if (*(int *)(puVar4 + -0x128) == 1) {
      uVar3 = 0;
      *(undefined4 *)(DAT_8c080858 + ar4) = 0;
      *(undefined4 *)(DAT_8c08085c + ar4) = 0;
      (*(code *)PTR_FUN_8c080860)(ar4,0,ar5,ar7);
      *(undefined4 *)(DAT_8c080844 + ar4) = 0;
      *(undefined4 *)(DAT_8c080864 + ar4) = 0;
      ar7 = 0;
      uVar2 = 0xffffffff;
      uVar1 = 0;
      (*(code *)PTR_s_CAnimBody_SetAnimation_033a94_8c08086c)(ar4 + DAT_8c080850,0,0xffffffff,0);
      (*(code *)PTR_s_CAnimBody_SetFrame_033e6e_8c080870)(ar4 + DAT_8c080850,uVar1,uVar2,ar7);
      (*(code *)PTR_FUN_8c080874)(ar4 + DAT_8c080850,uVar1,uVar2,ar7);
      ar6 = (undefined1 *)0xffffffff;
      *(undefined4 *)(DAT_8c080878 + ar4) = 0xffffffff;
    }
  }
  *(undefined4 *)(puVar4 + -0xdc) = uVar3;
  (*(code *)PTR_Vec3_dtor_8c080880)(puVar4 + DAT_8c08087c + -0x154,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080880)(puVar4 + DAT_8c080884 + -0x154,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080880)(puVar4 + DAT_8c080888 + -0x154,0xffffffff,ar6,ar7);
  (*(code *)PTR_Vec3_dtor_8c080880)(puVar4 + DAT_8c08088c + -0x154,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar4 + -0xdc);
}


