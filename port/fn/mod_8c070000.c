//@unit 8c070d7c
#include "../decls.h"
int FUN_8c070d7c_def(code *ar4,undefined4 *ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *ar6_00;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  ulonglong in_dr0;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_dr12;
  double in_dr14;
  ulonglong in_xd0;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_fffffed8;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [4];
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  
  cVar13 = '\0';
  cVar12 = '\0';
  iVar6 = 1;
  pcVar4 = FUN_8c03f480;
  FUN_8c03f480(*ar5,ar5,FUN_8c03f480,ar7,auStack_4c);
  Vec3_ctor_copy(auStack_2c,auStack_4c,pcVar4,ar7);
  ar5_00 = (code *)0xffffffff;
  pcVar4 = Vec3_dtor;
  Vec3_dtor(auStack_4c,0xffffffff,Vec3_dtor,ar7);
  if (((ar5[4] == 3) || (ar5_00 = ar4 + 0x68, *(int *)ar5_00 != 0)) && (*(int *)(ar4 + 0x298) == 1))
  {
    if (((*(int *)(ar4 + 0x124) == 4) && (*(int *)(ar4 + 300) == 2)) &&
       (iVar6 = get_field_6c_028cc4(*ar5,ar5_00,pcVar4,ar7), iVar6 != 0)) {
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,pcVar4,ar7,auStack_5c);
      ar6_00 = auStack_6c;
      Vec3_scale(auStack_5c,*(int *)(ar5[1] + 8) + 4,ar6_00,ar7,ar6_00);
      Vec3_add(auStack_6c,*(undefined4 *)(uint)ar5[1],ar6_00,ar7,auStack_7c);
      Vec3_ctor_copy(auStack_3c,auStack_7c,ar6_00,ar7);
      Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
      pcVar4 = Vec3_dtor;
      Vec3_dtor(auStack_6c,0xffffffff,ar6_00,Vec3_dtor);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_5c,0xffffffff,ar6_00,pcVar4);
      uVar1 = get_field_6c_028cc4(*ar5,uVar3,ar6_00,pcVar4);
      pcVar4 = FUN_8c036988;
      FUN_8c036988(uVar1,uVar3,ar6_00,FUN_8c036988);
      Vec3_dtor(auStack_3c,0xffffffff,ar6_00,pcVar4);
    }
    uVar1 = ar5[3];
    FUN_8c07a68c(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],uVar1);
    uVar3 = 0x80;
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,uVar1);
    Vec3_dtor(auStack_2c,0xffffffff,uVar3,uVar1);
    return 1;
  }
  iVar2 = *(int *)(ar4 + 0x124);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto switchD_8c070f82_caseD_5;
  ar7 = (code *)(&switchdata_8c070f82_8c070f8c)[iVar2];
                    
  switch(iVar2) {
  case 0:
  case 0xf:
    FUN_8c030eb8(ar4 + 0x1fc,ar5_00,0x1fc,ar7);
    ar7 = (code *)(uint)ar5[3];
    pcVar4 = *(code **)(ar5[1] + 4);
    iVar6 = FUN_8c078fd0(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 1:
    pcVar4 = (code *)auStack_2c;
    iVar6 = pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 2:
    ar7 = (code *)(uint)ar5[6];
    iVar6 = FUN_8c07af10(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],ar7);
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    break;
  case 3:
    pcVar4 = (code *)(uint)ar5[6];
    iVar6 = FUN_8c07f76c(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 4:
    ar7 = (code *)*ar5;
    pcVar4 = (code *)auStack_2c;
    iVar6 = FUN_8c077a38(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 6:
    pcVar4 = (code *)(uint)ar5[6];
    iVar6 = FUN_8c07edac(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 7:
    FUN_8c031b58(ar4 + 0xb0,ar5_00,pcVar4,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,pcVar4,ar7);
    if (iVar2 == 1) {
      FUN_8c03c314(ar4,ar5_00,pcVar4,ar7);
      iVar6 = 0;
    }
    break;
  case 10:
    iVar6 = FUN_8c076994(ar4,ar5,pcVar4,ar7);
    iVar2 = iVar6;
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],iVar6,pcVar4,ar7);
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar9 = *(double *)(ar4 + 0x48);
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 - dVar9,0);
    }
    if (cVar13 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),fVar7);
    }
    else {
      uVar8 = *(undefined8 *)(*(int *)(uint)ar5[1] + 4);
    }
    if (cVar12 == '\0' && (float)uVar8 < (float)((ulonglong)uVar8 >> 0x20)) {
      ar7 = FUN_8c03c314;
      FUN_8c03c314(ar4,iVar2,pcVar4,FUN_8c03c314);
    }
    else {
      FUN_8c031748(ar4,iVar2,pcVar4,ar7);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_dr0 = *(ulonglong *)(ar4 + 0x28);
      dVar9 = 2.651015428457012e+77;
    }
    if (cVar12 == '\0') {
      fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      *(float *)(ar4 + 0x28) = fVar7;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = in_dr0;
    }
    break;
  case 0xb:
    Vec3_ctor_copy(auStack_8c,&DAT_8c125e68,Vec3_ctor_copy,ar7);
    uVar1 = 0;
    iVar6 = FUN_8c0811b4(ar4,auStack_8c,0,ar7);
    ar7 = Vec3_dtor;
    Vec3_dtor(auStack_8c,0xffffffff,uVar1,Vec3_dtor);
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    break;
  case 0xe:
    *(undefined4 *)(ar4 + 0x214) = 0;
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    iVar6 = FUN_8c082c50(ar4,ar5,pcVar4,ar7);
    if (iVar6 == 0) {
      *(undefined4 *)(ar4 + 0x214) = 1;
    }
    break;
  case 0x14:
    if (*(int *)(ar4 + 0x21c) == 1) {
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,pcVar4,ar7);
      pcVar4 = ar4 + 0x38;
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(0x3f000000,*(undefined4 *)pcVar4);
      }
      else {
        in_xd0 = *(ulonglong *)pcVar4;
        dVar9 = 3.73993469111571e-312;
      }
      if (cVar12 == '\0') {
        fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar13 == '\0') {
        *(float *)(ar4 + 0x38) = fVar7;
      }
      else {
        *(ulonglong *)(ar4 + 0x38) = in_xd0;
      }
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,pcVar4,ar7);
      if (iVar2 == 1) {
        ar7 = (code *)0x0;
        uVar1 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,s_CAnimBody_SetFrame_033e6e,ar7);
      }
      pcVar4 = *(code **)ar5[1];
      FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,pcVar4,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2a0) = 2;
        iVar6 = 0;
      }
    }
    else {
      if (cVar13 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(ar5[3] + 8));
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)in_dr0);
      }
      else {
        in_xd12 = *(undefined8 *)(ar5[3] + 8);
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        fStack_24 = SUB84(in_dr12,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fStack_24 = SUB84(in_dr12 - dVar9,0);
      }
      if (cVar13 != '\0') {
        fStack_24 = (float)in_xd12;
        uStack_20 = (undefined4)((ulonglong)in_xd12 >> 0x20);
      }
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],ar5_00,pcVar4,ar7);
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)dVar9 >> 0x20)
                                  );
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar9,0));
        dVar9 = in_xd14;
      }
      else {
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - dVar10;
      }
      if (cVar13 == '\0') {
        dVar10 = (double)CONCAT44(fStack_28,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_24,fStack_28);
      }
      if (cVar12 == '\0') {
        bVar11 = SUB84(in_dr14,0) < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar11 = in_dr14 < dVar10;
      }
      if ((bVar11) && (fStack_28 = SUB84(in_dr14,0), cVar13 != '\0')) {
        fStack_28 = SUB84(dVar9,0);
        fStack_24 = (float)((ulonglong)dVar9 >> 0x20);
      }
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],auStack_2c,pcVar4,ar7);
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(in_dr14,0));
      }
      else {
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                                 (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar10;
      }
      if (cVar13 == '\0') {
        dVar10 = (double)CONCAT44(fStack_28,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_24,fStack_28);
      }
      fVar7 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar12 == '\0') {
        bVar11 = (float)((ulonglong)dVar10 >> 0x20) < fVar7;
      }
      else {
        bVar11 = dVar10 < dVar9;
      }
      if ((bVar11) && (fStack_28 = fVar7, cVar13 != '\0')) {
        fStack_28 = SUB84(dVar9,0);
        fStack_24 = fVar7;
      }
      ar7 = (code *)(uint)ar5[3];
      pcVar4 = (code *)auStack_2c;
      iVar6 = FUN_8c07baa0(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    }
    break;
  case 0x16:
    ar7 = (code *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    iVar6 = 0;
    break;
  case 0x17:
    Vec3_assign(auStack_2c,&DAT_8c125e88,pcVar4,ar7);
    pcVar4 = (code *)auStack_2c;
    iVar6 = FUN_8c07c0b8(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7);
    break;
  case 0x19:
    *(undefined4 *)(ar4 + 0x214) = 0;
    iVar2 = *(int *)(ar4 + 300);
    if ((iVar2 < 5) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        uVar5 = ar5[6];
        uVar3 = *(undefined4 *)(uint)ar5[1];
        uVar1 = 0x1e;
        FUN_8c033474(ar4,0x1e,uVar3,uVar5);
        FUN_8c031748(ar4,uVar1,uVar3,uVar5);
        ar7 = (code *)0x0;
        uVar1 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        uVar1 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,uVar1,ar7);
        *(undefined4 *)(ar4 + 0x220) = uVar1;
        if (*(int *)(ar4 + 0x220) == 3) {
          ar7 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(ar7,uVar1,s_CAnimBody_SetFrame_033e6e,ar7);
        }
        else {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar1,ar7);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      case 1:
        if (*(int *)(ar4 + 0x40) == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        break;
      case 2:
        iVar2 = *(int *)(ar4 + 0x220);
        if (iVar2 == 3) {
          iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,3,ar7);
          if (iVar2 == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          }
        }
        else {
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,iVar2,ar7);
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar4 + 0xb0,iVar2,ar7,in_stack_fffffed8);
          if (cVar13 == '\0') {
            in_dr0 = in_dr0 >> 0x20;
          }
          if (cVar12 != '\0' || (float)in_dr0 <= 0.0) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            ar7 = ar4;
          }
        }
        break;
      case 3:
        iVar2 = rand_range(ar4,0,10,ar7);
        if (((5 < iVar2) && (2 < *(int *)(ar4 + 0x128))) && (*(int *)(ar4 + 0x128) < 6)) {
          uVar5 = 0;
          uVar3 = 0xffffffff;
          uVar1 = 0x14;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x14,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,uVar5);
          FUN_8c032204(ar4 + 0xb0,uVar1,ar4 + 0xb0,0xb0,in_stack_fffffed8);
          ar7 = *(code **)(ar4 + 300);
          pcVar4 = ar7 + 1;
          *(code **)(ar4 + 300) = pcVar4;
          goto switchD_8c071656_caseD_4;
        }
        ar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        break;
      case 4:
switchD_8c071656_caseD_4:
        iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,pcVar4,ar7)
        ;
        if (iVar2 == 1) {
          FUN_8c032204(ar4 + 0xb0,1,pcVar4,ar7,in_stack_fffffed8);
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          ar7 = ar4 + 0xb0;
          s_CAnimBody_SetFrame_033e6e(ar7,uVar1,s_CAnimBody_SetFrame_033e6e,ar7);
          *(undefined4 *)(ar4 + 0x214) = 1;
          iVar6 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
    }
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    break;
  case 0x1a:
    FUN_8c031748(ar4,ar5_00,pcVar4,ar7);
    ar7 = (code *)0x0;
    uVar1 = 8;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
    pcVar4 = FUN_8c032ab0;
    FUN_8c032ab0(ar4,uVar1,FUN_8c032ab0,ar7);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar4,ar7);
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    break;
  case 0x1b:
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    iVar6 = FUN_8c07d904(ar4,*ar5,pcVar4,ar7);
    break;
  case 0x1e:
    pcVar4 = *(code **)ar5[1];
    FUN_8c031c74(ar4,auStack_2c,pcVar4,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,pcVar4,ar7);
    if (iVar2 == 1) {
      iVar6 = 0;
    }
    break;
  case 0x1f:
    ar7 = (code *)(uint)ar5[6];
    pcVar4 = (code *)auStack_2c;
    iVar6 = FUN_8c07f56c(ar4,*(undefined4 *)(uint)ar5[1],pcVar4,ar7,ar5[3]);
  }
switchD_8c070f82_caseD_5:
  Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar4,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,pcVar4,ar7);
  return iVar6;
}

__asm__(".globl _FUN_8c070d7c\n.set _FUN_8c070d7c, _FUN_8c070d7c_def\n");
//@unit 8c071a38
#include "../decls.h"
undefined4 FUN_8c071a38_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong *ar5_00;
  undefined4 uVar5;
  int a5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *puVar8;
  uint ar6_00;
  undefined1 *puVar9;
  code *pcVar10;
  undefined *ar7_00;
  undefined4 unaff_r12;
  code *ar7_01;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  double *pdVar11;
  undefined4 in_fr1;
  float fVar12;
  ulonglong uVar13;
  float fVar16;
  double dVar14;
  undefined8 uVar15;
  undefined8 in_dr12;
  double dVar17;
  double in_dr14;
  double dVar18;
  undefined8 in_xd0;
  undefined8 in_xd12;
  undefined8 in_xd14;
  bool bVar19;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_20 [16];
  double dStack_10;
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44(SUB84(in_dr14,0),(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    pdVar11 = &dStack_10;
    dStack_10 = (double)CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    pdVar11 = (double *)auStack_20;
    uStack_8 = in_xd14;
    dStack_10 = in_dr14;
  }
  *(undefined4 *)((int)pdVar11 + -4) = unaff_r14;
  *(undefined4 *)((int)pdVar11 + -8) = unaff_r13;
  *(undefined4 *)((int)pdVar11 + -0xc) = unaff_r12;
  *(undefined4 *)((int)pdVar11 + -0x10) = in_PR;
  ar7_01 = (code *)0x1;
  *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x8c);
  FUN_8c03f480(*ar5,1,ar6,ar7,*(undefined4 *)((int)pdVar11 + -800));
  uVar1 = (undefined4)in_dr12;
  Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x20),(undefined1 *)((int)pdVar11 + -0x8c),ar6,ar7);
  pcVar10 = (code *)((int)pdVar11 + -0x8c);
  Vec3_dtor(pcVar10,0xffffffff,ar6,pcVar10);
  ar5_00 = (ulonglong *)(ar5 + 8);
  if (in_FPSCR_SZ == '\0') {
    uVar13 = CONCAT44((int)*ar5_00,in_fr1);
    *(int *)(ar4 + 0x7c) = (int)*ar5_00;
  }
  else {
    uVar13 = *ar5_00;
    *(ulonglong *)(ar4 + 0x7c) = uVar13;
  }
  if (*(int *)(ar4 + 0x2cc) == 0) {
    if (ar5[4] != 3) {
      pcVar10 = (code *)(ar4 + 0x68);
      ar6 = *(int *)pcVar10;
      if (ar6 == 0) goto LAB_8c071c68;
    }
    ar5_00 = *(ulonglong **)(ar4 + 0x298);
    if (ar5_00 == (ulonglong *)0x1) {
      if ((*(int *)(ar4 + 0x124) == 4) && (*(int *)(ar4 + 300) == 2)) {
        uVar1 = get_field_6c_028cc4(*ar5,1,ar6,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1e4) = uVar1;
        if (*(int *)((int)pdVar11 + -0x1e4) != 0) {
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x9c);
          uVar6 = 0x80;
          Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,pcVar10,*(undefined4 *)((int)pdVar11 + -800));
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xac);
          Vec3_scale((undefined1 *)((int)pdVar11 + -0x9c),*(int *)(ar5[1] + 8) + 4,uVar6,pcVar10,
                     *(undefined4 *)((int)pdVar11 + -800));
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xbc);
          pcVar10 = Vec3_add;
          Vec3_add((undefined1 *)((int)pdVar11 + -0xac),*(undefined4 *)(uint)ar5[1],uVar6,Vec3_add,
                   *(undefined4 *)((int)pdVar11 + -800));
          Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x30),(undefined1 *)((int)pdVar11 + -0xbc),
                         uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xbc),0xffffffff,uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0xac),0xffffffff,uVar6,pcVar10);
          uVar5 = 0xffffffff;
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x9c),0xffffffff,uVar6,pcVar10);
          uVar1 = get_field_6c_028cc4(*ar5,uVar5,uVar6,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x1e8) = uVar1;
          FUN_8c036988(*(undefined4 *)((int)pdVar11 + -0x1e8),uVar5,uVar6,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x30),0xffffffff,uVar6,pcVar10);
        }
      }
      *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
      uVar5 = ar5[3];
      uVar1 = ar5[4];
      FUN_8c07a68c(ar4,*(undefined4 *)(uint)ar5[1],uVar1,uVar5);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,uVar5);
      *(undefined4 *)((int)pdVar11 + -0x1c0) = 1;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,uVar1,uVar5);
      return *(undefined4 *)((int)pdVar11 + -0x1c0);
    }
  }
LAB_8c071c68:
  iVar3 = *(int *)(ar4 + 0x124);
  pcVar7 = (code *)0x21;
  if ((iVar3 < 0x22) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      if ((ar5[4] == 1) || (*(int *)(ar4 + 0x2ac) == 2)) {
        FUN_8c10277c((undefined1 *)((int)pdVar11 + -0x3c),ar5_00,ar5[7] + 4,pcVar10);
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)((int)pdVar11 + -0x3c);
        pcVar7 = *(code **)(ar5[1] + 4);
        uVar1 = FUN_8c07a3cc(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1ec) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x1ec);
        free_if_nonnull_wrap_102790((undefined1 *)((int)pdVar11 + -0x3c),0xffffffff,pcVar7,pcVar10);
      }
      else {
        FUN_8c030eb8(ar4 + 0x1fc,ar5_00,FUN_8c030eb8,ar4 + 0x1fc);
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        *(undefined4 *)((int)pdVar11 + -0x324) = *ar5;
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = *(code **)(ar5[1] + 4);
        uVar1 = FUN_8c078fd0(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x1f0) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x1f0);
      }
      break;
    case 1:
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x23c) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x23c);
      break;
    case 2:
      pcVar10 = (code *)(uint)ar5[6];
      uVar1 = FUN_8c07af10(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],pcVar10);
      *(undefined4 *)((int)pdVar11 + -600) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -600);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 3:
      if (*(int *)(ar4 + 100) == 1) {
        uVar1 = FUN_8c031de8(ar4,0x1d,0x21,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x214) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x214);
        pcVar7 = *(code **)ar5[1];
        FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      }
      else {
        pcVar7 = (code *)(uint)ar5[6];
        uVar1 = FUN_8c07f76c(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x218) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x218);
      }
      break;
    case 4:
      *(undefined4 *)((int)pdVar11 + -800) = *(undefined4 *)(ar5[1] + 8);
      *(undefined4 *)((int)pdVar11 + -0x324) = *(undefined4 *)(ar5[1] + 4);
      pcVar10 = (code *)*ar5;
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = FUN_8c077a38(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x254) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x254);
      break;
    case 6:
      pcVar7 = (code *)(uint)ar5[6];
      pcVar10 = *(code **)ar5[1];
      uVar1 = FUN_8c07edac(ar4,pcVar10,pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2a4) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2a4);
      break;
    case 7:
      FUN_8c031b58(ar4 + 0xb0,ar5_00,0x21,pcVar10);
      pcVar10 = (code *)0xb0;
      pcVar7 = (code *)(ar4 + 0xb0);
      uVar1 = CAnimBody_AdvanceFrame_wrapper(pcVar7,ar5_00,pcVar7,0xb0);
      *(undefined4 *)((int)pdVar11 + -0x2a8) = uVar1;
      if (*(int *)((int)pdVar11 + -0x2a8) == 1) {
        FUN_8c03c314(ar4,uVar1,pcVar7,pcVar10);
        ar7_01 = (code *)0x0;
      }
      break;
    case 10:
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = (code *)(uint)ar5[4];
        uVar1 = FUN_8c076750(ar4,*ar5,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x248) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x248);
      }
      else {
        pcVar7 = FUN_8c076994;
        uVar1 = FUN_8c076994(ar4,ar5,FUN_8c076994,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x24c) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x24c);
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar1,pcVar7,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x250) = (int)(uVar13 >> 0x20);
          dVar17 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),
                                    *(undefined4 *)((int)pdVar11 + -0x250));
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x250) = uVar13;
          in_xd0 = *(undefined8 *)((int)pdVar11 + -0x250);
          dVar17 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar17,0) - (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar17 - dVar17,0);
        }
        pcVar10 = *(code **)ar5[1];
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(int *)(pcVar10 + 4),fVar12);
        }
        else {
          uVar15 = *(undefined8 *)(pcVar10 + 4);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar15 < (float)((ulonglong)uVar15 >> 0x20)) {
          FUN_8c03c314(ar4,0x94,pcVar7,pcVar10);
        }
        else {
          FUN_8c031748(ar4,FUN_8c031748,pcVar7,pcVar10);
        }
      }
      *(int *)((int)pdVar11 + -0x2dc) = ar4;
      if (in_FPSCR_SZ == '\0') {
        dVar17 = (double)CONCAT44(0x3f666666,*(undefined4 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28)
                                 );
      }
      else {
        in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28);
        dVar17 = 4.245243188319886e+78;
      }
      if (in_FPSCR_PR == '\0') {
        fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar17 * dVar17,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28) = fVar12;
      }
      else {
        *(undefined8 *)(*(int *)((int)pdVar11 + -0x2dc) + 0x28) = in_xd0;
      }
      break;
    case 0xb:
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar10 = FUN_8c076198;
        uVar1 = FUN_8c076198(ar4,(int *)(ar4 + 100),pcVar7,FUN_8c076198);
        *(undefined4 *)((int)pdVar11 + -0x240) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x240);
      }
      else {
        Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0xcc),&DAT_8c125e68,pcVar7,pcVar10);
        pcVar7 = (code *)0x0;
        uVar1 = FUN_8c0811b4(ar4,(undefined1 *)((int)pdVar11 + -0xcc),0,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x244) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x244);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0xcc),0xffffffff,pcVar7,pcVar10);
      }
      break;
    case 0xe:
      *(undefined4 *)(ar4 + 0x214) = 0;
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      pcVar10 = (code *)FUN_8c082c50(ar4,ar5,pcVar7,pcVar10);
      *(code **)((int)pdVar11 + -0x21c) = pcVar10;
      ar7_01 = *(code **)((int)pdVar11 + -0x21c);
      if (ar7_01 == (code *)0x0) {
        pcVar7 = (code *)0x214;
        *(undefined4 *)(ar4 + 0x214) = 1;
      }
      break;
    case 0x10:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(int *)((int)pdVar11 + -0x2e0) = ar4;
      pcVar10 = (code *)0x1fc;
      pcVar7 = (code *)0x1fc;
      uVar1 = 0xfffffffb;
      *(byte *)(*(int *)((int)pdVar11 + -0x2e0) + 0x1fc) =
           *(byte *)(*(int *)((int)pdVar11 + -0x2e0) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        FUN_8c031748(ar4,0xfffffffb,0x1fc,0x1fc);
        pcVar10 = (code *)0x0;
        pcVar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0,0);
        *(int *)((int)pdVar11 + -0x2e4) = ar4;
        uVar1 = 300;
        *(int *)(*(int *)((int)pdVar11 + -0x2e4) + 300) =
             *(int *)(*(int *)((int)pdVar11 + -0x2e4) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          *(undefined4 *)((int)pdVar11 + -0x2f8) = ar5[2];
          Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0x10c),
                         &DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2f8) * 0x10,&DAT_8c125f30,
                         *(int *)((int)pdVar11 + -0x2f8) * 0x10);
          uVar5 = 1;
          pcVar10 = (code *)((int)pdVar11 + -0x10c);
          uVar1 = FUN_8c0811b4(ar4,pcVar10,1,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x270) = uVar1;
          *(uint *)((int)pdVar11 + -0x1d8) = (uint)(*(int *)((int)pdVar11 + -0x270) == 0);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x10c),0xffffffff,uVar5,pcVar10);
          if (*(int *)((int)pdVar11 + -0x1d8) == 0) {
            pcVar7 = (code *)0x0;
          }
          else {
            *(undefined4 *)((int)pdVar11 + -0x2fc) = ar5[2];
            Vec3_assign(ar4 + 0x14,&DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2fc) * 0x10,
                        *(int *)((int)pdVar11 + -0x1d8),pcVar10);
            *(int *)((int)pdVar11 + -0x300) = ar4;
            *(int *)(*(int *)((int)pdVar11 + -0x300) + 300) =
                 *(int *)(*(int *)((int)pdVar11 + -0x300) + 300) + 1;
            pcVar10 = (code *)0x0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            pcVar7 = (code *)0xb0;
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar10);
          }
        }
        else if (iVar3 == 3) {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xfffffffb,0x1fc,0x1fc);
          ar7_01 = (code *)0x0;
          *(undefined4 *)(ar4 + 0x178) = 0;
        }
        break;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,pcVar7,pcVar10);
      Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0xdc),uVar1,ar5[3],pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2e8) = ar5[2];
      *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0xec);
      ar7_00 = &DAT_8c125f10;
      puVar8 = &DAT_8c125f10 + *(int *)((int)pdVar11 + -0x2e8) * 0x10;
      Vec3_add(puVar8,(undefined1 *)((int)pdVar11 + -0xdc),puVar8,&DAT_8c125f10,
               *(undefined4 *)((int)pdVar11 + -800));
      *(undefined4 *)((int)pdVar11 + -0x2ec) = ar5[2];
      Vec3_ctor_copy((undefined1 *)((int)pdVar11 + -0xfc),
                     &DAT_8c125f30 + *(int *)((int)pdVar11 + -0x2ec) * 0x10,puVar8,ar7_00);
      uVar1 = FUN_8c032d48(ar4,*(undefined4 *)(uint)ar5[1],(undefined1 *)((int)pdVar11 + -0xec),
                           (undefined1 *)((int)pdVar11 + -0xfc));
      *(undefined4 *)((int)pdVar11 + -0x26c) = uVar1;
      pcVar10 = *(code **)((int)pdVar11 + -0x26c);
      ar6_00 = (uint)(pcVar10 == (code *)0x0);
      *(uint *)((int)pdVar11 + -0x1d4) = ar6_00;
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xfc),0xffffffff,ar6_00,pcVar10);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xec),0xffffffff,ar6_00,pcVar10);
      Vec3_dtor((undefined1 *)((int)pdVar11 + -0xdc),0xffffffff,ar6_00,pcVar10);
      if (*(int *)((int)pdVar11 + -0x1d4) == 0) {
        pcVar7 = (code *)0x0;
      }
      else {
        *(undefined4 *)((int)pdVar11 + -0x2f0) = *(undefined4 *)(ar4 + 0x128);
        FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2f0) * 2 + *(int *)((int)pdVar11 + -0x2f0)) * 8
                         + -0x73d7f14c,*(int *)((int)pdVar11 + -0x1d4),pcVar10);
        *(int *)((int)pdVar11 + -0x2f4) = ar4;
        pcVar10 = *(code **)((int)pdVar11 + -0x2f4);
        pcVar7 = *(code **)((int)pdVar11 + -0x2f4);
        *(int *)(pcVar10 + 300) = *(int *)(pcVar7 + 300) + 1;
      }
      break;
    case 0x11:
      *(undefined4 *)(ar4 + 0x214) = 0;
      *(int *)((int)pdVar11 + -0x304) = ar4;
      pcVar7 = (code *)(uint)*(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc);
      uVar1 = 0xfffffffb;
      *(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc) =
           *(byte *)(*(int *)((int)pdVar11 + -0x304) + 0x1fc) & 0xfb;
      iVar3 = *(int *)(ar4 + 300);
      if (iVar3 == 0) {
        *(undefined4 *)(ar4 + 0x178) = 1;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5[2] + 0x21,0xffffffff,0);
        uVar1 = 0xb0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar5,uVar6);
        vec3_clear(ar4 + 0x244,uVar1,uVar5,uVar6);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)((int)pdVar11 + -0x308) = ar4;
        uVar1 = 300;
        *(int *)(*(int *)((int)pdVar11 + -0x308) + 300) =
             *(int *)(*(int *)((int)pdVar11 + -0x308) + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          uVar1 = CAnimBody_AdvanceFrame_wrapper
                            (ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,pcVar7,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x28c) = uVar1;
          if (*(int *)((int)pdVar11 + -0x28c) == 1) {
            FUN_8c03c314(ar4,uVar1,FUN_8c03c314,pcVar10);
            uVar6 = 0;
            uVar5 = 0xffffffff;
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar5,uVar6);
            ar7_01 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x294) = 0;
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar10 = FUN_8c030eb8;
            FUN_8c030eb8(ar4 + 0x1fc,0,0x294,FUN_8c030eb8);
            pcVar7 = (code *)0x12c;
            *(undefined4 *)(ar4 + 300) = 0;
            Vec3_assign(ar4 + 0x14,ar4 + 0x80,300,pcVar10);
            *(undefined4 *)(ar4 + 0x178) = 0;
          }
          else {
            Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x6c),uVar1,
                           *(int *)((int)pdVar11 + -0x28c),pcVar10);
            puVar4 = (undefined1 *)((int)pdVar11 + -0x7c);
            Vec3_ctor_zero(puVar4,Vec3_ctor_zero,puVar4,pcVar10);
            CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,puVar4,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x290) = (int)(uVar13 >> 0x20);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x290) = uVar13;
            }
            *(undefined4 *)((int)pdVar11 + -0x31c) = ar5[2];
            *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x168);
            uVar1 = *(undefined4 *)
                     (&DAT_8c1378b8 +
                     (*(int *)((int)pdVar11 + -0x31c) * 2 + *(int *)((int)pdVar11 + -0x31c)) * 8);
            FUN_8c034384(ar4 + 0xb0,uVar1,uVar1,
                         (*(int *)((int)pdVar11 + -0x31c) * 2 + *(int *)((int)pdVar11 + -0x31c)) * 8
                        );
            pcVar10 = Vec3_assign;
            Vec3_assign((undefined1 *)((int)pdVar11 + -0x6c),(undefined1 *)((int)pdVar11 + -0x168),
                        uVar1,Vec3_assign);
            uVar1 = 0xffffffff;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x168),0xffffffff,0xffffffff,pcVar10);
            *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x178);
            iVar3 = ar4 + 0x244;
            Vec3_sub((undefined1 *)((int)pdVar11 + -0x6c),iVar3,uVar1,iVar3,
                     *(undefined4 *)((int)pdVar11 + -800));
            Vec3_assign((undefined1 *)((int)pdVar11 + -0x7c),(undefined1 *)((int)pdVar11 + -0x178),
                        uVar1,iVar3);
            pcVar10 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x178),0xffffffff,Vec3_dtor,iVar3);
            puVar4 = (undefined1 *)((int)pdVar11 + -0x6c);
            Vec3_assign(ar4 + 0x244,puVar4,pcVar10,iVar3);
            Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0x188),puVar4,pcVar10,iVar3);
            pcVar7 = FUN_8c023d04;
            uVar1 = FUN_8c023d04((undefined1 *)((int)pdVar11 + -0x7c),
                                 (undefined1 *)((int)pdVar11 + -0x188),FUN_8c023d04,iVar3);
            *(undefined4 *)((int)pdVar11 + -0x294) = uVar1;
            *(undefined4 *)((int)pdVar11 + -0x1e0) = *(undefined4 *)((int)pdVar11 + -0x294);
            pcVar10 = Vec3_dtor;
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x188),0xffffffff,pcVar7,Vec3_dtor);
            if (*(int *)((int)pdVar11 + -0x1e0) != 0) {
              vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x194),*(undefined4 *)(ar5[1] + 4),
                                 pcVar7,pcVar10);
              puVar9 = (undefined1 *)((int)pdVar11 + -0x1a4);
              *(undefined1 **)((int)pdVar11 + -800) = puVar9;
              puVar4 = (undefined1 *)((int)pdVar11 + -0x194);
              FUN_8c023484((undefined1 *)((int)pdVar11 + -0x7c),puVar4,puVar9,pcVar10,
                           *(undefined4 *)((int)pdVar11 + -800));
              uVar1 = Vec3_length((undefined1 *)((int)pdVar11 + -0x1a4),puVar4,puVar9,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x298) = uVar1;
              Vec3_assign(ar4 + 0x14,*(undefined4 *)((int)pdVar11 + -0x298),puVar9,pcVar10);
              Vec3_dtor((undefined1 *)((int)pdVar11 + -0x1a4),0xffffffff,0xffffffff,pcVar10);
              pcVar7 = object_dtor_delete;
              object_dtor_delete((undefined1 *)((int)pdVar11 + -0x194),0xffffffff,object_dtor_delete
                                 ,pcVar10);
            }
            puVar4 = (undefined1 *)((int)pdVar11 + -0x7c);
            Vec3_length_sq(puVar4,puVar4,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x29c) = (int)(uVar13 >> 0x20);
              uVar15 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x29c),(int)uVar13);
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)pdVar11 + -0x29c);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x29c) = uVar13;
              uVar15 = *(undefined8 *)((int)pdVar11 + -0x29c);
              *(undefined8 *)(ar4 + 0x28) = uVar15;
            }
            CAnimBody_GetCurFrame(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x2a0) = (int)((ulonglong)uVar15 >> 0x20);
              dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x2a0),(int)uVar15);
            }
            else {
              *(undefined8 *)((int)pdVar11 + -0x2a0) = uVar15;
              dVar17 = *(double *)((int)pdVar11 + -0x2a0);
            }
            if (in_FPSCR_PR == '\0') {
              iVar3 = (int)(float)((ulonglong)dVar17 >> 0x20);
            }
            else {
              iVar3 = (int)dVar17;
            }
            pcVar10 = (code *)0x1a4;
            if ((iVar3 == 0x1a4) && (ar5[2] == 1)) {
              FUN_8c03f39c(*ar5,FUN_8c03f39c,pcVar7,0x1a4);
              pcVar10 = (code *)(uint)ar5[6];
              pcVar7 = *(code **)ar5[1];
              FUN_8c033474(ar4,2,pcVar7,pcVar10);
            }
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x7c),0xffffffff,pcVar7,pcVar10);
            Vec3_dtor((undefined1 *)((int)pdVar11 + -0x6c),0xffffffff,pcVar7,pcVar10);
          }
        }
        break;
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      pcVar7 = FUN_8c03f3ac;
      uVar1 = FUN_8c03f3ac(pcVar10,uVar1,FUN_8c03f3ac,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x274) = uVar1;
      iVar3 = *(int *)((int)pdVar11 + -0x274);
      if (iVar3 == 7) {
        *(int *)((int)pdVar11 + -0x30c) = ar4;
        *(undefined4 *)((int)pdVar11 + -0x310) =
             *(undefined4 *)(*(int *)((int)pdVar11 + -0x30c) + 0x294);
        *(int *)(*(int *)((int)pdVar11 + -0x30c) + 0x294) = *(int *)((int)pdVar11 + -0x310) + 1;
        if (0x11 < *(int *)((int)pdVar11 + -0x310) + 1) {
          *(int *)((int)pdVar11 + -0x314) = ar4;
          pcVar7 = *(code **)((int)pdVar11 + -0x314);
          *(int *)(pcVar7 + 300) = *(int *)(*(int *)((int)pdVar11 + -0x314) + 300) + 1;
        }
      }
      else {
        Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x4c),iVar3,pcVar7,pcVar10);
        Vec3_ctor_zero((undefined1 *)((int)pdVar11 + -0x5c),iVar3,pcVar7,pcVar10);
        CAnimBody_GetCurFrame(ar4 + 0xb0,iVar3,pcVar7,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x278) = (int)(uVar13 >> 0x20);
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x278) = uVar13;
        }
        uVar1 = ar5[2];
        *(undefined4 *)((int)pdVar11 + -0x318) = uVar1;
        *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x11c);
        FUN_8c034384(ar4 + 0xb0,
                     *(undefined4 *)
                      (&DAT_8c1378b8 +
                      (*(int *)((int)pdVar11 + -0x318) * 2 + *(int *)((int)pdVar11 + -0x318)) * 8),
                     pcVar7,uVar1);
        Vec3_assign((undefined1 *)((int)pdVar11 + -0x4c),(undefined1 *)((int)pdVar11 + -0x11c),
                    pcVar7,uVar1);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x11c),0xffffffff,pcVar7,uVar1);
        *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -300);
        pcVar10 = Vec3_sub;
        Vec3_sub((undefined1 *)((int)pdVar11 + -0x4c),ar4 + 0x244,pcVar7,Vec3_sub,
                 *(undefined4 *)((int)pdVar11 + -800));
        puVar9 = (undefined1 *)((int)pdVar11 + -300);
        Vec3_assign((undefined1 *)((int)pdVar11 + -0x5c),puVar9,puVar9,pcVar10);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -300),0xffffffff,puVar9,pcVar10);
        puVar4 = (undefined1 *)((int)pdVar11 + -0x4c);
        Vec3_assign(ar4 + 0x244,puVar4,puVar9,pcVar10);
        Vec3_ctor_xyz((undefined1 *)((int)pdVar11 + -0x13c),puVar4,puVar9,pcVar10);
        uVar1 = FUN_8c023d04((undefined1 *)((int)pdVar11 + -0x5c),
                             (undefined1 *)((int)pdVar11 + -0x13c),puVar9,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x27c) = uVar1;
        *(undefined4 *)((int)pdVar11 + -0x1dc) = *(undefined4 *)((int)pdVar11 + -0x27c);
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x13c),0xffffffff,uVar1,pcVar10);
        if (*(int *)((int)pdVar11 + -0x1dc) != 0) {
          pcVar7 = vec3_copy_8c02b5fc;
          vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x148),*(undefined4 *)(ar5[1] + 4),
                             vec3_copy_8c02b5fc,pcVar10);
          *(undefined1 **)((int)pdVar11 + -800) = (undefined1 *)((int)pdVar11 + -0x158);
          puVar4 = (undefined1 *)((int)pdVar11 + -0x148);
          pcVar10 = FUN_8c023484;
          FUN_8c023484((undefined1 *)((int)pdVar11 + -0x5c),puVar4,pcVar7,FUN_8c023484,
                       *(undefined4 *)((int)pdVar11 + -800));
          pcVar7 = Vec3_length;
          uVar1 = Vec3_length((undefined1 *)((int)pdVar11 + -0x158),puVar4,Vec3_length,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x280) = uVar1;
          Vec3_assign(ar4 + 0x14,*(undefined4 *)((int)pdVar11 + -0x280),pcVar7,pcVar10);
          Vec3_dtor((undefined1 *)((int)pdVar11 + -0x158),0xffffffff,pcVar7,pcVar10);
          pcVar10 = object_dtor_delete;
          object_dtor_delete((undefined1 *)((int)pdVar11 + -0x148),0xffffffff,pcVar7,
                             object_dtor_delete);
        }
        puVar4 = (undefined1 *)((int)pdVar11 + -0x5c);
        pcVar7 = Vec3_length_sq;
        Vec3_length_sq(puVar4,Vec3_length_sq,puVar4,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x284) = (int)(uVar13 >> 0x20);
          uVar15 = CONCAT44(*(undefined4 *)((int)pdVar11 + -0x284),(int)uVar13);
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)((int)pdVar11 + -0x284);
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x284) = uVar13;
          uVar15 = *(undefined8 *)((int)pdVar11 + -0x284);
          *(undefined8 *)(ar4 + 0x28) = uVar15;
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar7,puVar4,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x288) = (int)((ulonglong)uVar15 >> 0x20);
          dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x288),(int)uVar15);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x288) = uVar15;
          dVar17 = *(double *)((int)pdVar11 + -0x288);
        }
        if (in_FPSCR_PR == '\0') {
          iVar3 = (int)(float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          iVar3 = (int)dVar17;
        }
        if ((iVar3 == 0x127) && (ar5[2] == 1)) {
          pcVar10 = (code *)(uint)ar5[6];
          puVar4 = *(undefined1 **)ar5[1];
          FUN_8c033474(ar4,3,puVar4,pcVar10);
        }
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x5c),0xffffffff,puVar4,pcVar10);
        pcVar7 = (code *)((int)pdVar11 + -0x4c);
        Vec3_dtor(pcVar7,0xffffffff,pcVar7,pcVar10);
      }
      break;
    case 0x12:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1c4) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,2,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1c4);
      }
      Vec3_assign((undefined1 *)((int)pdVar11 + -0x20),&DAT_8c125e98,0x21,pcVar10);
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))
                ((int *)(uint)ar5[6],(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x25c) = (int)(uVar13 >> 0x20);
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)((int)pdVar11 + -0x25c));
        dVar17 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),(int)uVar13);
      }
      else {
        *(ulonglong *)((int)pdVar11 + -0x25c) = uVar13;
        in_xd14 = *(undefined8 *)((int)pdVar11 + -0x25c);
        dVar17 = *(double *)((int)pdVar11 + -0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        bVar19 = (float)((ulonglong)dVar17 >> 0x20) < SUB84(in_dr14,0);
      }
      else {
        bVar19 = dVar17 < in_dr14;
      }
      if (bVar19) {
        if (in_FPSCR_SZ == '\0') {
          *(float *)((int)pdVar11 + -0x1c) = SUB84(in_dr14,0);
        }
        else {
          *(undefined8 *)((int)pdVar11 + -0x1c) = in_xd14;
        }
      }
      *(undefined4 *)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)((int)pdVar11 + -0x328) = ar5[4];
      *(undefined4 *)((int)pdVar11 + -0x32c) = *(undefined4 *)(ar5[1] + 4);
      pcVar10 = (code *)&DAT_8c125ea8;
      pcVar7 = (code *)((int)pdVar11 + -0x20);
      uVar1 = FUN_8c07c5f8(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,&DAT_8c125ea8);
      *(undefined4 *)((int)pdVar11 + -0x260) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x260);
      break;
    case 0x13:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1cc) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1cc);
      }
      *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
      pcVar10 = (code *)*ar5;
      uVar1 = FUN_8c07e828(ar4,*(undefined4 *)(uint)ar5[1],*(undefined4 *)(ar5[1] + 4),pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x268) = uVar1;
      pcVar7 = *(code **)((int)pdVar11 + -0x268);
      ar7_01 = pcVar7;
      break;
    case 0x14:
      if (*(int *)(ar4 + 100) == 1) {
        if (in_FPSCR_SZ == '\0') {
          fVar12 = *(float *)((int)pdVar11 + -0x20);
          pcVar10 = (code *)0x447a0000;
        }
        else {
          fVar12 = 1000.0;
          pcVar10 = FUN_8c07bec4;
        }
        if (in_FPSCR_PR == '\0' && (float)(uint)pcVar10 < fVar12) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)((int)pdVar11 + -0x20) = 0x447a0000;
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x20) = 0x8c07bec4447a0000;
          }
        }
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07bec4(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x224) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x224);
      }
      else if (*(int *)(ar4 + 0x21c) == 1) {
        *(undefined4 *)((int)pdVar11 + -0x2d0) = *(undefined4 *)(ar4 + 0x128);
        FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2d0) * 2 + *(int *)((int)pdVar11 + -0x2d0)) * 8
                         + -0x73d7f14c,
                     (*(int *)((int)pdVar11 + -0x2d0) * 2 + *(int *)((int)pdVar11 + -0x2d0)) * 8,
                     pcVar10);
        *(int *)((int)pdVar11 + -0x2d4) = ar4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(0x3f000000,
                                    *(undefined4 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38));
        }
        else {
          in_xd0 = *(undefined8 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38);
          dVar17 = 1.62172699419915e-311;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = SUB84(dVar17,0) * (float)((ulonglong)dVar17 >> 0x20);
        }
        else {
          fVar12 = SUB84(dVar17 * dVar17,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38) = fVar12;
        }
        else {
          *(undefined8 *)(*(int *)((int)pdVar11 + -0x2d4) + 0x38) = in_xd0;
        }
        pcVar10 = (code *)(uint)ar5[1];
        pcVar7 = *(code **)pcVar10;
        puVar4 = (undefined1 *)((int)pdVar11 + -0x20);
        FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10);
        uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x228) = uVar1;
        if (*(int *)((int)pdVar11 + -0x228) == 1) {
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          pcVar10 = (code *)(ar4 + 0xb0);
          pcVar7 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,s_CAnimBody_SetFrame_033e6e,pcVar10);
        }
        else if (*(int *)(ar4 + 0x40) == 0) {
          *(undefined4 *)((int)pdVar11 + -0x2d8) = *(undefined4 *)(ar4 + 0x128);
          pcVar7 = (code *)0x8c280eb4;
          FUN_8c031b68(ar4,(*(int *)((int)pdVar11 + -0x2d8) * 2 + *(int *)((int)pdVar11 + -0x2d8)) *
                           8 + -0x73d7f14c,0x8c280eb4,pcVar10);
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x2a0) = 2;
          ar7_01 = (code *)0x0;
        }
      }
      else {
        iVar3 = *(int *)(uint)ar5[6];
        (**(code **)(iVar3 + 0x184))((int *)(uint)ar5[6],iVar3,0x21,pcVar10);
        uVar5 = SUB84(in_dr14,0);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x22c) = (int)(uVar13 >> 0x20);
          fVar12 = *(float *)((int)pdVar11 + -0x22c);
          fVar16 = 900.0;
        }
        else {
          *(ulonglong *)((int)pdVar11 + -0x22c) = uVar13;
          fVar12 = 900.0;
          fVar16 = 1.07059e-42;
        }
        if (in_FPSCR_PR == '\0' && fVar12 < fVar16) {
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)((int)pdVar11 + -0x20);
          }
          pcVar10 = (code *)&DAT_8c125be0;
          if (in_FPSCR_SZ != '\0') {
            fVar12 = 0.0;
          }
          if (in_FPSCR_PR == '\0' && fVar12 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)((int)pdVar11 + -0x20) = 0;
            }
            else {
              fVar12 = 0.0;
              *(undefined8 *)((int)pdVar11 + -0x20) = 0;
            }
          }
        }
        iVar3 = ar5[3];
        pdVar2 = (double *)(iVar3 + 8);
        if (in_FPSCR_SZ == '\0') {
          dVar17 = (double)CONCAT44(*(undefined4 *)pdVar2,uVar1);
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar12);
        }
        else {
          dVar17 = *pdVar2;
          dVar14 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((float)((ulonglong)dVar17 >> 0x20) -
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x18) = (int)((ulonglong)dVar17 >> 0x20);
        }
        else {
          *(double *)((int)pdVar11 + -0x18) = dVar17;
        }
        a5 = *(int *)(uint)ar5[6];
        (**(code **)(a5 + 0x184))((int *)(uint)ar5[6],a5,iVar3,pcVar10);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x230) = (int)((ulonglong)dVar14 >> 0x20);
          dVar18 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x230),uVar5);
          dVar14 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar14,0));
        }
        else {
          *(double *)((int)pdVar11 + -0x230) = dVar14;
          dVar18 = *(double *)((int)pdVar11 + -0x230);
          dVar14 = *(double *)(ar4 + 0x48);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)CONCAT44((float)((ulonglong)dVar18 >> 0x20) -
                                    (float)((ulonglong)dVar14 >> 0x20),SUB84(dVar18,0));
        }
        else {
          dVar18 = dVar18 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c);
        }
        fVar12 = (float)((ulonglong)dVar18 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          bVar19 = fVar12 < (float)((ulonglong)dVar14 >> 0x20);
        }
        else {
          bVar19 = dVar18 < dVar14;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)pdVar11 + -0x1c) = fVar12;
          }
          else {
            *(double *)((int)pdVar11 + -0x1c) = dVar18;
          }
        }
        (**(code **)(*(int *)(uint)ar5[6] + 0x128))
                  ((int *)(uint)ar5[6],(undefined1 *)((int)pdVar11 + -0x20),
                   (undefined1 *)((int)pdVar11 + -0x20),ar4 + 0x48);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)pdVar11 + -0x234) = (int)((ulonglong)dVar14 >> 0x20);
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),*(undefined4 *)(ar4 + 0x48));
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x234),SUB84(dVar14,0));
        }
        else {
          *(double *)((int)pdVar11 + -0x234) = dVar14;
          in_xd12 = *(undefined8 *)(ar4 + 0x48);
          dVar14 = *(double *)((int)pdVar11 + -0x234);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = (double)CONCAT44((int)((ulonglong)dVar17 >> 0x20),
                                    SUB84(dVar17,0) + (float)((ulonglong)dVar14 >> 0x20));
        }
        else {
          dVar17 = dVar17 + dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar14 = (double)CONCAT44(*(undefined4 *)((int)pdVar11 + -0x1c),SUB84(dVar14,0));
        }
        else {
          dVar14 = *(double *)((int)pdVar11 + -0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          bVar19 = (float)((ulonglong)dVar14 >> 0x20) < SUB84(dVar17,0);
        }
        else {
          bVar19 = dVar14 < dVar17;
        }
        if (bVar19) {
          if (in_FPSCR_SZ == '\0') {
            *(float *)((int)pdVar11 + -0x1c) = SUB84(dVar17,0);
          }
          else {
            *(undefined8 *)((int)pdVar11 + -0x1c) = in_xd12;
          }
        }
        *(undefined4 *)((int)pdVar11 + -800) = ar5[6];
        pcVar10 = (code *)(uint)ar5[3];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07baa0(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x238) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x238);
      }
      break;
    case 0x16:
      pcVar10 = (code *)0x0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      ar7_01 = (code *)0x0;
      break;
    case 0x18:
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x1b0),*(undefined4 *)(ar5[1] + 4),0x21,
                         pcVar10);
      *(undefined4 *)((int)pdVar11 + -800) = 0;
      *(undefined1 **)((int)pdVar11 + -0x324) = (undefined1 *)((int)pdVar11 + -0x1b0);
      pcVar10 = (code *)(uint)ar5[6];
      pcVar7 = (code *)*ar5;
      uVar1 = FUN_8c07d048(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x2b4) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2b4);
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x1b0),0xffffffff,pcVar7,pcVar10);
      break;
    case 0x19:
      *(undefined4 *)(ar4 + 0x214) = 0;
      iVar3 = *(int *)(ar4 + 300);
      if ((iVar3 < 5) && (-1 < iVar3)) {
        switch((&switchdata_8c071f8e_8c071f9c)[iVar3]) {
        case 0x8c071fb0:
          uVar6 = ar5[6];
          uVar5 = *(undefined4 *)(uint)ar5[1];
          uVar1 = 0x1e;
          FUN_8c033474(ar4,0x1e,uVar5,uVar6);
          FUN_8c031748(ar4,uVar1,uVar5,uVar6);
          if (*(int *)(ar4 + 100) == 1) {
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
          }
          else {
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
          }
          puVar8 = &DAT_8c125e68;
          pcVar10 = FUN_8c023334;
          uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,FUN_8c023334,uVar1);
          *(undefined4 *)((int)pdVar11 + -0x1fc) = uVar5;
          *(undefined4 *)(ar4 + 0x220) = *(undefined4 *)((int)pdVar11 + -0x1fc);
          if (*(int *)(ar4 + 0x220) == 3) {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,pcVar10,uVar1);
          }
          else {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,puVar8,0xb0,uVar1);
          }
          *(int *)((int)pdVar11 + -700) = ar4;
          pcVar10 = *(code **)((int)pdVar11 + -700);
          *(int *)(*(int *)((int)pdVar11 + -700) + 300) = *(int *)(pcVar10 + 300) + 1;
        case 0x8c0720b0:
          if (*(int *)(ar4 + 0x40) == 0) {
            *(int *)((int)pdVar11 + -0x2c0) = ar4;
            *(int *)(*(int *)((int)pdVar11 + -0x2c0) + 300) =
                 *(int *)(*(int *)((int)pdVar11 + -0x2c0) + 300) + 1;
          }
          break;
        case 0x8c0720ec:
          if (*(int *)(ar4 + 0x220) == 3) {
            uVar1 = s_CAnimBody_AdvanceFrame_033ba0
                              (ar4 + 0xb0,(&switchdata_8c071f8e_8c071f9c)[iVar3],
                               s_CAnimBody_AdvanceFrame_033ba0,pcVar10);
            *(undefined4 *)((int)pdVar11 + -0x200) = uVar1;
            if (*(int *)((int)pdVar11 + -0x200) == 1) {
              *(undefined4 *)(ar4 + 0x214) = 1;
              uVar1 = rand_range(ar4,0,100,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x204) = uVar1;
              if (*(int *)((int)pdVar11 + -0x204) < 0x32) {
                *(int *)((int)pdVar11 + -0x2c4) = ar4;
                pcVar10 = *(code **)((int)pdVar11 + -0x2c4);
                *(int *)(*(int *)((int)pdVar11 + -0x2c4) + 300) = *(int *)(pcVar10 + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
          }
          else {
            uVar1 = 0xb0;
            s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,0x21,pcVar10);
            CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,pcVar7,pcVar10);
            if (in_FPSCR_SZ == '\0') {
              *(int *)((int)pdVar11 + -0x208) = (int)(uVar13 >> 0x20);
              uVar13 = (ulonglong)*(uint *)((int)pdVar11 + -0x208);
            }
            else {
              *(ulonglong *)((int)pdVar11 + -0x208) = uVar13;
            }
            if (in_FPSCR_PR != '\0' || (float)uVar13 <= 0.0) {
              pcVar10 = s_CAnimBody_SetFrame_033e6e;
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,pcVar7,s_CAnimBody_SetFrame_033e6e);
              *(undefined4 *)(ar4 + 0x214) = 1;
              uVar1 = rand_range(ar4,0,100,pcVar10);
              *(undefined4 *)((int)pdVar11 + -0x20c) = uVar1;
              pcVar10 = *(code **)((int)pdVar11 + -0x20c);
              if ((int)pcVar10 < 0x32) {
                *(int *)((int)pdVar11 + -0x2c8) = ar4;
                *(int *)(*(int *)((int)pdVar11 + -0x2c8) + 300) =
                     *(int *)(*(int *)((int)pdVar11 + -0x2c8) + 300) + 1;
              }
              else {
                ar7_01 = (code *)0x0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
          }
          break;
        case 0x8c072254:
          if (*(int *)(ar4 + 0x128) == 6) {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x26;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0);
          }
          else {
            pcVar7 = (code *)0xffffffff;
            uVar1 = 0x30;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x30,0xffffffff,0);
          }
          pcVar10 = s_CAnimBody_SetFrame_033e6e;
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,pcVar7,s_CAnimBody_SetFrame_033e6e);
          *(int *)((int)pdVar11 + -0x2cc) = ar4;
          *(int *)(*(int *)((int)pdVar11 + -0x2cc) + 300) =
               *(int *)(*(int *)((int)pdVar11 + -0x2cc) + 300) + 1;
        case 0x8c0722d2:
          uVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,pcVar7,pcVar10);
          *(undefined4 *)((int)pdVar11 + -0x210) = uVar1;
          if (*(int *)((int)pdVar11 + -0x210) == 1) {
            ar7_01 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
            uVar1 = 0;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
            pcVar10 = (code *)(ar4 + 0xb0);
            s_CAnimBody_SetFrame_033e6e(pcVar10,uVar1,s_CAnimBody_SetFrame_033e6e,pcVar10);
          }
        }
      }
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 0x1a:
      FUN_8c031748(ar4,ar5_00,0x21,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 0x1d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0);
      }
      else {
        pcVar10 = (code *)0x0;
        uVar5 = 0xffffffff;
        uVar1 = 8;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      }
      FUN_8c032ab0(ar4,uVar1,uVar5,pcVar10);
      if (in_FPSCR_SZ == '\0') {
        *(int *)((int)pdVar11 + -0x1f8) = (int)(uVar13 >> 0x20);
      }
      else {
        *(ulonglong *)((int)pdVar11 + -0x1f8) = uVar13;
      }
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar1,uVar5,pcVar10);
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      break;
    case 0x1b:
      pcVar7 = *(code **)ar5[1];
      FUN_8c031c74(ar4,(undefined1 *)((int)pdVar11 + -0x20),pcVar7,pcVar10);
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = FUN_8c07dc50;
        uVar1 = FUN_8c07dc50(ar4,*ar5,FUN_8c07dc50,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x2ac) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x2ac);
      }
      else {
        uVar1 = FUN_8c07d904(ar4,*ar5,pcVar7,pcVar10);
        *(undefined4 *)((int)pdVar11 + -0x2b0) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -0x2b0);
      }
      break;
    case 0x1d:
      if (*(int *)(ar4 + 0x128) < 7) {
        *(undefined4 *)((int)pdVar11 + -0x1c8) = 2;
        Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,0x21,pcVar10);
        return *(undefined4 *)((int)pdVar11 + -0x1c8);
      }
      *(undefined4 *)((int)pdVar11 + -800) = *ar5;
      *(undefined4 *)((int)pdVar11 + -0x324) = ar5[6];
      *(undefined4 *)((int)pdVar11 + -0x328) = *(undefined4 *)(ar4 + 100);
      pcVar10 = *(code **)(ar5[1] + 4);
      pcVar7 = (code *)&DAT_8c125eb8;
      uVar1 = FUN_8c07e460(ar4,*(undefined4 *)(uint)ar5[1],&DAT_8c125eb8,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x264) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x264);
      break;
    case 0x1e:
      pcVar7 = *(code **)ar5[1];
      puVar4 = (undefined1 *)((int)pdVar11 + -0x20);
      FUN_8c031c74(ar4,puVar4,pcVar7,pcVar10);
      uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar4,pcVar7,pcVar10);
      *(undefined4 *)((int)pdVar11 + -0x220) = uVar1;
      pcVar10 = *(code **)((int)pdVar11 + -0x220);
      if (pcVar10 == (code *)0x1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      break;
    case 0x1f:
      if (*(int *)(ar4 + 100) == 1) {
        pcVar7 = (code *)0x0;
        ar7_01 = (code *)0x0;
      }
      else {
        *(undefined4 *)((int)pdVar11 + -800) = ar5[3];
        pcVar10 = (code *)(uint)ar5[6];
        pcVar7 = (code *)((int)pdVar11 + -0x20);
        uVar1 = FUN_8c07f56c(ar4,*(undefined4 *)(uint)ar5[1],pcVar7,pcVar10,
                             *(undefined4 *)((int)pdVar11 + -800));
        *(undefined4 *)((int)pdVar11 + -500) = uVar1;
        ar7_01 = *(code **)((int)pdVar11 + -500);
      }
      break;
    case 0x20:
      vec3_copy_8c02b5fc((undefined1 *)((int)pdVar11 + -0x1bc),*(undefined4 *)(ar5[1] + 4),0x21,
                         pcVar10);
      *(undefined4 *)((int)pdVar11 + -800) = 1;
      *(undefined1 **)((int)pdVar11 + -0x324) = (undefined1 *)((int)pdVar11 + -0x1bc);
      uVar1 = FUN_8c07d048(ar4,*(undefined4 *)(uint)ar5[1],*ar5,ar5[6]);
      *(undefined4 *)((int)pdVar11 + -0x2b8) = uVar1;
      ar7_01 = *(code **)((int)pdVar11 + -0x2b8);
      pcVar7 = (code *)0xffffffff;
      pcVar10 = ar7_01;
      object_dtor_delete((undefined1 *)((int)pdVar11 + -0x1bc),0xffffffff,0xffffffff,ar7_01);
    }
  }
  if ((((*(int *)(ar4 + 0x124) != 0x12) && (*(int *)(ar4 + 0x124) != 0x18)) &&
      (*(int *)(ar4 + 0x124) != 0x20)) &&
     (((*(int *)(ar4 + 0x124) != 0x1d && (*(int *)(ar4 + 0x124) != 0x11)) &&
      (*(int *)(ar4 + 0x2ac) == 0)))) {
    pcVar7 = (code *)(ar4 + 0x14);
    Vec3_assign(ar4 + 0x80,pcVar7,pcVar7,pcVar10);
  }
  *(code **)((int)pdVar11 + -0x1d0) = ar7_01;
  Vec3_dtor((undefined1 *)((int)pdVar11 + -0x20),0xffffffff,pcVar7,pcVar10);
  return *(undefined4 *)((int)pdVar11 + -0x1d0);
}

__asm__(".globl _FUN_8c071a38\n.set _FUN_8c071a38, _FUN_8c071a38_def\n");
//@unit 8c0737fc
#include "../decls.h"
undefined4 FUN_8c0737fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  code *pcVar7;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar1 = ar5;
  uVar3 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_3c);
  uVar1 = Vec3_length(auStack_3c,uVar1,uVar3,ar7);
  Vec3_ctor_copy(auStack_2c,uVar1,uVar3,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,uVar3,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,uVar3,ar7,auStack_4c);
  FUN_8c0230f0(auStack_2c,uVar1,uVar3,ar7,auStack_5c);
  FUN_8c022dac(auStack_4c,auStack_5c,uVar3,ar7);
  if (cVar10 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  Vec3_dtor(auStack_5c,0xffffffff,uVar3,ar7);
  ar5_00 = -1;
  Vec3_dtor(auStack_4c,0xffffffff,uVar3,ar7);
  iVar2 = *(int *)(ar4 + 0x40);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      FUN_8c073c9c(ar4,ar5_00,uVar3,ar7);
      uVar3 = (undefined4)in_dr0;
      uVar1 = ar6;
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x42340000,uVar3);
      }
      else {
        dVar6 = 2.89140188323616e-312;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (bVar8) {
        *(undefined4 *)(ar4 + 0x220) = 0;
      }
      else {
        uVar1 = FUN_8c023334(ar4 + 0x14,auStack_2c,uVar1,ar7);
        *(undefined4 *)(ar4 + 0x220) = uVar1;
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44(0x40d9999a,*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_dr0 = 0x4093333340d9999a;
      }
      if (cVar9 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 4;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7);
      ar5_00 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x230,ar5_00,uVar3,ar7);
    case 1:
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar2 = *(int *)(ar4 + 0x220);
      if (iVar2 == 0) {
        iVar2 = FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7);
        if (0 < iVar2) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7);
        FUN_8c0230f0(ar4 + 0x230,ar5_00,uVar3,ar7,auStack_6c);
        FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_7c);
        FUN_8c022dac(auStack_6c,auStack_7c,uVar3,ar7);
        if (cVar10 == '\0') {
          pcVar7 = (code *)0x40a00000;
        }
        else {
          fVar5 = 5.0;
          pcVar7 = Vec3_dtor;
        }
        Vec3_dtor(auStack_7c,0xffffffff,uVar3,ar7);
        Vec3_dtor(auStack_6c,0xffffffff,uVar3,ar7);
        if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
          ar7 = 0;
          uVar1 = 0xffffffff;
          iVar2 = *(int *)(ar4 + 0x220) + 6;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,uVar1,ar7);
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
      }
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar3 = ar5;
      break;
    case 3:
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar1 = (undefined4)in_dr0;
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7);
      uVar3 = ar5;
      if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
          FUN_8c031e84(ar4,ar6,ar5,ar7);
          uVar3 = ar5;
          break;
        case 1:
          FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
          uVar3 = ar5;
          break;
        default:
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(0x42340000,uVar1);
          }
          else {
            dVar6 = 3.74020019962227e-312;
          }
          if (cVar9 == '\0') {
            bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
          }
          if (bVar8) {
            FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
            uVar3 = ar5;
          }
          else {
            CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
            uVar3 = ar5;
          }
          break;
        case 4:
          break;
        }
      }
      break;
    case 4:
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,uVar3,ar7);
      if (iVar2 == 0) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7);
      }
      else {
        FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7);
      }
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar3 = ar5;
    }
  }
  Vec3_dtor(auStack_2c,0xffffffff,uVar3,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0737fc\n.set _FUN_8c0737fc, _FUN_8c0737fc_def\n");
//@unit 8c073c9c
#include "../decls.h"
undefined4 FUN_8c073c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x94) = 0;
  return 0x94;
}

__asm__(".globl _FUN_8c073c9c\n.set _FUN_8c073c9c, _FUN_8c073c9c_def\n");
//@unit 8c073cac
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
//@unit 8c074d14
#include "../decls.h"
undefined4 FUN_8c074d14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _FUN_8c074d14\n.set _FUN_8c074d14, _FUN_8c074d14_def\n");
//@unit 8c074d1c
#include "../decls.h"
undefined4 FUN_8c074d1c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr0;
  double dVar8;
  code *pcVar9;
  undefined8 in_dr4;
  undefined4 ain0;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [5];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 1;
  uVar4 = 1;
  iVar5 = -1;
  uVar1 = ar5;
  Vec3_sub(ar6,ar5,1,ar7,auStack_54);
  uVar1 = Vec3_length(auStack_54,uVar1,ar6_00,ar7);
  Vec3_ctor_copy(auStack_2c,uVar1,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,ar6_00,ar7,auStack_64);
  FUN_8c0230f0(auStack_2c,uVar1,ar6_00,ar7,auStack_74);
  FUN_8c022dac(auStack_64,auStack_74,ar6_00,ar7);
  dVar8 = in_dr0;
  if (cVar12 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    dVar8 = in_xd14;
  }
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
  ar5_00 = (undefined4 *)0xffffffff;
  Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
  Vec3_set_zero(&uStack_38,ar5_00,ar6_00,ar7);
  Vec3_set_zero(&fStack_44,ar5_00,ar6_00,ar7);
  iVar3 = *(int *)(ar4 + 0x40);
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c074e10_caseD_2;
                    
  switch(iVar3) {
  case 0:
    FUN_8c073c9c(ar4,ar5_00,ar6_00,ar7);
    uVar6 = SUB84(in_dr0,0);
    uVar1 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    FUN_8c02a1fc(ar4 + 0x254,uVar1,ar6_00,ar7);
    if (cVar12 == '\0') {
      in_dr0 = (double)CONCAT44(0x42340000,uVar6);
    }
    else {
      in_dr0 = 4.41923885273116e-312;
    }
    if (cVar11 == '\0') {
      bVar10 = in_fr15 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar10 = (double)CONCAT44(in_fr14,in_fr15) < in_dr0;
    }
    if (bVar10) {
      ar5_00 = (undefined4 *)0x0;
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      ar5_00 = auStack_2c;
      uVar1 = FUN_8c023334(ar4 + 0x14,ar5_00,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar1;
    }
    iVar3 = *(int *)(ar4 + 0x220);
    if (iVar3 == 0) {
      if (cVar12 == '\0') {
        in_dr0 = (double)CONCAT44(0x40be6666,*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x24);
        in_dr0 = 5.3666392554967e-315;
      }
      if (cVar11 == '\0' && SUB84(in_dr0,0) < (float)((ulonglong)in_dr0 >> 0x20)) {
        iVar5 = rand_range(ar4,0,100,ar7);
        if (iVar5 < 0x1f) {
          ar7 = (float *)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)0x1;
          iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        }
        else {
          ar7 = (float *)0x0;
          ar6_00 = 0xffffffff;
          ar5_00 = (undefined4 *)0xd;
          iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xd,0xffffffff,0);
        }
      }
      else {
        ar7 = (float *)0x0;
        ar6_00 = 0xffffffff;
        ar5_00 = (undefined4 *)0x4;
        iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      }
    }
    else if (iVar3 == 3) {
      ar7 = (float *)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 9;
      iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0);
      ar5_00 = (undefined4 *)FUN_8c026db0(ar4,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      puVar2 = (undefined4 *)deref_u32(uVar1,ar5_00,ar6_00,ar7);
      uVar1 = puVar2[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c1376d8 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar8,0),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x240) = in_dr0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
    else if (iVar3 == 4) {
      ar7 = (float *)0x0;
      ar6_00 = 0xffffffff;
      uVar1 = 10;
      iVar5 = s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,10,0xffffffff,0);
      ar5_00 = (undefined4 *)FUN_8c026db0(ar4,uVar1,ar6_00,ar7);
      uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      puVar2 = (undefined4 *)deref_u32(uVar1,ar5_00,ar6_00,ar7);
      uVar1 = puVar2[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar2;
      *(undefined4 *)(ar4 + 0xb8) = uVar1;
      *(undefined4 *)(ar4 + 0xbc) = puVar2[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137708 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(in_fr15,0x42700000);
      }
      else {
        in_xd0 = 0x8c033e6842700000;
      }
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar8,0),SUB84(dVar8,0))
        ;
      }
      else {
        in_dr0 = dVar8 / dVar8;
      }
      if (cVar12 == '\0') {
        *(int *)(ar4 + 0x240) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x240) = in_dr0;
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
    if (iVar5 != 6) {
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    }
  case 1:
    uVar1 = FUN_8c026db0(ar4,ar5_00,ar6_00,ar7);
    switch(uVar1) {
    case 1:
    case 4:
    case 0xd:
      *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c074e10_caseD_3:
      fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      iVar5 = FUN_8c026db0(ar4,ar6,ar5,ar7);
      ar6_00 = ar5;
      if ((iVar5 < 0xe) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
          FUN_8c031e84(ar4,ar6,ar5,ar7);
          ar6_00 = 100;
          iVar5 = rand_range(ar4,0,100,ar7);
          if (iVar5 < 5) {
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          break;
        case 1:
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
          if (cVar12 == '\0') {
            pcVar9 = (code *)0x41880000;
          }
          else {
            fVar7 = 17.0;
            pcVar9 = CAnimBody_AdvanceFrame_wrapper;
          }
          if (cVar11 != '\0' || (float)(uint)pcVar9 <= fVar7) {
            FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
            FUN_8c031e84(ar4,&DAT_8c125ef8,ar5,ar7);
            ar6_00 = ar5;
          }
          else {
            CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,ar5,ar7);
            ar6_00 = ar5;
          }
          break;
        case 2:
        case 3:
        case 9:
        case 10:
          FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
          ar6_00 = ar5;
          break;
        case 4:
          FUN_8c03f3ac(ar4 + 0xb0,ar6,ar5,ar7);
          ar6_00 = ar5;
          break;
        case 0xd:
          FUN_8c032ab0(ar4,ar6,ar5,ar7);
          s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar6,ar5,ar7);
          ar6_00 = ar5;
        }
      }
      break;
    case 2:
    case 3:
    case 9:
    case 10:
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7,ain0);
      FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6_00,ar7);
      vec3_copy_8c023d8c(&uStack_38,auStack_80,ar6_00,ar7);
      object_dtor_delete(auStack_80,0xffffffff,ar6_00,ar7);
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_38);
      }
      else {
        in_xd0 = CONCAT44(uStack_34,uStack_38);
        dVar8 = *(double *)(ar4 + 0x254);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fStack_44 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fStack_44 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_34);
      }
      else {
        fStack_44 = (float)in_xd0;
        in_xd0 = CONCAT44(uStack_30,uStack_34);
        dVar8 = *(double *)(ar4 + 600);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fStack_40 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fStack_40 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_30);
      }
      else {
        fStack_40 = (float)in_xd0;
        in_xd0 = CONCAT44(auStack_2c[0],uStack_30);
        dVar8 = *(double *)(ar4 + 0x25c);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),fVar7);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x240);
      }
      if (cVar11 == '\0') {
        fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      fStack_3c = fVar7;
      if (cVar12 != '\0') {
        fStack_3c = (float)in_xd0;
        uStack_38 = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      vec3_copy_8c023d8c(ar4 + 0x254,&uStack_38,ar6_00,ar7);
      ar7 = &fStack_44;
      uVar4 = FUN_8c07c318(ar4,ar6,ar5,ar7);
      iVar5 = FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
      ar6_00 = ar5;
      if (0 < iVar5) {
        if (cVar12 == '\0') {
          dVar8 = (double)CONCAT44(0x42340000,fVar7);
        }
        else {
          dVar8 = -2.1831133518023486e+159;
        }
        if (cVar11 == '\0') {
          bVar10 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar10 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
        }
        if (bVar10) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
        else {
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(dVar8,0));
        }
      }
    }
    break;
  case 3:
    goto switchD_8c074e10_caseD_3;
  case 4:
    iVar5 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (iVar5 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6_00,ar7);
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0,ar6_00,ar7);
    }
    uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
    ar6_00 = ar5;
  }
switchD_8c074e10_caseD_2:
  object_dtor_delete(&fStack_44,0xffffffff,ar6_00,ar7);
  object_dtor_delete(&uStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_2c,0xffffffff,auStack_2c,0xffffffff);
  return uVar4;
}

__asm__(".globl _FUN_8c074d1c\n.set _FUN_8c074d1c, _FUN_8c074d1c_def\n");
//@unit 8c0755e0
#include "../decls.h"
undefined4 FUN_8c0755e0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int ar5_00;
  undefined4 *puVar5;
  undefined4 *ar6_00;
  undefined4 ain0;
  undefined4 uVar6;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float in_fr15;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [4];
  undefined8 uStack_4c;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [5];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar6 = 1;
  puVar5 = ar5;
  ar6_00 = ar6;
  ain0 = ar7;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_60);
  uVar2 = Vec3_length(auStack_60,puVar5,ar6_00,ar7);
  Vec3_ctor_copy(auStack_28,uVar2,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar2,ar6_00,ar7,auStack_70);
  FUN_8c0230f0(auStack_28,uVar2,ar6_00,ar7,auStack_80);
  FUN_8c022dac(auStack_70,auStack_80,ar6_00,ar7);
  if (cVar11 == '\0') {
    in_fr15 = (float)(in_dr0 >> 0x20);
  }
  Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7);
  Vec3_ctor_zero(auStack_38,uVar2,ar6_00,ar7);
  Vec3_set_zero(auStack_44,uVar2,ar6_00,ar7);
  Vec3_set_zero(auStack_50,uVar2,ar6_00,ar7);
  uVar2 = (undefined4)in_dr0;
  iVar4 = *(int *)(ar4 + 0x40);
  if ((5 < iVar4) || (iVar4 < 0)) goto switchD_8c0756cc_caseD_2;
  ar5_00 = iVar4 * 4;
                    
  switch(iVar4) {
  case 0:
    FUN_8c031748(ar4,ar5_00,ar6_00,ar7);
    FUN_8c031700(ar4,ar5_00,ar6_00,ar7);
    puVar5 = ar5;
    ar6_00 = ar6;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(0x42340000,uVar2);
    }
    else {
      dVar8 = 6.37147498041921e-312;
    }
    if (cVar10 == '\0') {
      bVar9 = in_fr15 < (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      bVar9 = (double)CONCAT44(in_fr14,in_fr15) < dVar8;
    }
    if (bVar9) {
      *(undefined4 *)(ar4 + 0x220) = 0;
    }
    else {
      puVar5 = auStack_28;
      uVar2 = FUN_8c023334(ar4 + 0x14,puVar5,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar2;
    }
    iVar4 = *(int *)(ar4 + 0x220);
    if (iVar4 == 0) {
      *(undefined4 *)(ar4 + 0x29c) = 0x14;
      puVar5 = *(undefined4 **)(ar4 + 0x29c);
      ar6_00 = (undefined4 *)0xb0;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,puVar5,0xb0,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,puVar5,ar6_00,ar7);
      uVar2 = puVar3[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137828 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(ar4 + 0x29c) = 0x19;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,*(undefined4 *)(ar4 + 0x29c),ar6_00,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,deref_u32,ar6_00,ar7);
      puVar5 = (undefined4 *)(ar4 + 0xb4);
      uVar2 = puVar3[1];
      *puVar5 = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    else if (iVar4 == 4) {
      *(undefined4 *)(ar4 + 0x29c) = 0x1a;
      puVar5 = *(undefined4 **)(ar4 + 0x29c);
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,puVar5,ar6_00,ar7);
      puVar3 = (undefined4 *)deref_u32(uVar2,puVar5,ar6_00,ar7);
      uVar2 = puVar3[1];
      *(undefined4 *)(ar4 + 0xb4) = *puVar3;
      *(undefined4 *)(ar4 + 0xb8) = uVar2;
      *(undefined4 *)(ar4 + 0xbc) = puVar3[2];
      *(undefined **)(ar4 + 0xb4) = &DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18;
    }
    vec3_clear(ar4 + 0x244,puVar5,ar6_00,ar7);
    FUN_8c02a1fc(ar4 + 0x254,puVar5,ar6_00,ar7);
  case 1:
    ar5_00 = *(int *)(ar4 + 0x29c);
    iVar4 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (iVar4 == 0) {
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar8 = 1.0035749846001845e+178;
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 3;
    }
    else if (iVar4 == 2) {
      *(undefined4 *)(ar4 + 0x40) = 3;
switchD_8c0756cc_caseD_3:
      iVar4 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
      if (iVar4 == 0x14) {
        iVar4 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6_00,ar7);
        if (iVar4 == 7) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x24c) = 0x41e00000;
          }
          else {
            *(undefined8 *)(ar4 + 0x24c) = 0xc441e00000;
          }
        }
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_90);
        Vec3_assign(ar4 + 0x14,auStack_90,ar6_00,ar7);
        Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7);
        FUN_8c031764(ar4,ar6,ar5,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
        FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar5,ar7);
        Vec3_assign(auStack_38,auStack_a0,ar5,ar7);
        Vec3_dtor(auStack_a0,0xffffffff,ar5,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24c),uStack_30);
        }
        else {
          in_xd0 = CONCAT44(uStack_2c,uStack_30);
          dVar8 = *(double *)(ar4 + 0x24c);
        }
        if (cVar10 == '\0') {
          fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        Vec3_assign(ar4 + 0x244,auStack_38,ar5,ar7);
        ar6_00 = ar5;
      }
      else if ((iVar4 == 0x19) || (iVar4 == 0x1a)) {
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6_00,ar7,auStack_b0);
        Vec3_assign(ar4 + 0x14,auStack_b0,ar6_00,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7,ain0);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6_00,ar7);
        vec3_copy_8c023d8c(auStack_44,auStack_bc,ar6_00,ar7);
        object_dtor_delete(auStack_bc,0xffffffff,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_40);
        }
        else {
          in_xd0 = CONCAT44(uStack_3c,uStack_40);
          dVar8 = *(double *)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar7 = (float)((ulonglong)dVar8 >> 0x20);
          dVar8 = (double)CONCAT44(fVar7,SUB84(dVar8,0) - fVar7);
        }
        else {
          dVar8 = dVar8 - dVar8;
        }
        uVar1 = in_xd0;
        if (cVar11 == '\0') {
          uStack_4c = CONCAT44((*(uint*)((uchar*)&uStack_4c+4)),SUB84(dVar8,0));
          uVar1 = uStack_4c;
        }
        uStack_4c = uVar1;
        vec3_copy_8c023d8c(ar4 + 0x254,auStack_50,ar6_00,ar7);
        vec3_copy_8c02b5fc(auStack_c8,auStack_50,ar6_00,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_c8,ar6_00,ar7,auStack_d8);
        Vec3_assign(ar4 + 0x14,auStack_d8,ar6_00,ar7);
        Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_c8,0xffffffff,ar6_00,ar7);
        iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6_00,ar7);
        if (iVar4 == 1) {
          FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)((ulonglong)dVar8 >> 0x20));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x48);
          }
          if (cVar10 == '\0' && (float)((ulonglong)dVar8 >> 0x20) < SUB84(dVar8,0)) {
            *(undefined4 *)(ar4 + 0x40) = 5;
          }
          else {
            *(undefined4 *)(ar4 + 0x40) = 0;
            uVar6 = 0;
          }
        }
        CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,ar6_00,ar7,ain0);
        if (cVar10 == '\0') {
          iVar4 = (int)(float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          iVar4 = (int)dVar8;
        }
        if (iVar4 == 0x10) {
          FUN_8c033474(ar4,0x1c,ar5,ain0);
          ar6_00 = ar5;
          ar7 = ain0;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 5;
      }
    }
    break;
  case 3:
    goto switchD_8c0756cc_caseD_3;
  case 4:
    iVar4 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    if (((iVar4 != 0x14) && (iVar4 != 0x19)) && (iVar4 != 0x1a)) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7);
      object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      return 1;
    }
    FUN_8c031764(ar4,ar6,ar5,ar7);
    iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
    if (iVar4 == 1) {
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = in_dr0 & 0xffffffff;
      }
      ar7 = 0;
      ar6_00 = (undefined4 *)0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      *(undefined4 *)(ar4 + 0x40) = 0;
      uVar6 = 0;
    }
    else {
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar6,ar5,ar7,ain0);
      FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar5,ar7);
      Vec3_assign(auStack_38,auStack_e8,ar5,ar7);
      Vec3_dtor(auStack_e8,0xffffffff,ar5,ar7);
      if (cVar11 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24c),uStack_30);
      }
      else {
        in_xd0 = CONCAT44(uStack_2c,uStack_30);
        dVar8 = *(double *)(ar4 + 0x24c);
      }
      if (cVar10 == '\0') {
        fVar7 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar7 = SUB84(dVar8 - dVar8,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar7;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      Vec3_assign(ar4 + 0x244,auStack_38,ar5,ar7);
      *(undefined4 *)(ar4 + 0x40) = 4;
      ar6_00 = ar5;
    }
  }
switchD_8c0756cc_caseD_2:
  object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7);
  object_dtor_delete(auStack_44,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c0755e0\n.set _FUN_8c0755e0, _FUN_8c0755e0_def\n");
//@unit 8c075ef4
#include "../decls.h"
undefined4 FUN_8c075ef4_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 uVar5;
  float fVar6;
  double in_dr0;
  code *pcVar8;
  double dVar7;
  double in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 1;
  iVar3 = *(int *)(ar4 + 300);
  if (iVar3 == 0) {
    uVar4 = 0;
    iVar3 = FUN_8c034148(ar4 + 0xb0,0,ar6,ar7);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          return 1;
        }
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    if (iVar3 == 1) {
      FUN_8c031748(ar4,ar5,ar6,ar7);
      FUN_8c02a1fc(ar4 + 0x264,ar5,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_1c);
      FUN_8c022dac(auStack_1c,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
        pcVar8 = (code *)0x42340000;
        in_dr0 = in_xd0;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = Vec3_dtor;
      }
      bVar1 = cVar10 != '\0';
      bVar9 = fVar6 <= (float)(uint)pcVar8;
      ar5 = (undefined *)0xffffffff;
      Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
      if (bVar1 || bVar9) {
        *(undefined4 *)(ar4 + 0x260) = 0;
      }
      else {
        ar5 = &DAT_8c125e68;
        uVar4 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
        *(undefined4 *)(ar4 + 0x260) = uVar4;
      }
      FUN_8c02327c(ar4 + 0x14,ar5,ar6,ar7);
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),pcVar8);
        dVar2 = in_dr0;
      }
      else {
        dVar2 = (double)CONCAT44(pcVar8,fVar6);
        dVar7 = *(double *)(ar4 + 0x38);
      }
      if (cVar10 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0xbf800000,fVar6);
      }
      else {
        dVar7 = -8.625520112574138e-251;
      }
      if (cVar10 == '\0') {
        fVar6 = (float)((ulonglong)dVar7 >> 0x20);
        in_dr0 = (double)CONCAT44(fVar6,SUB84(dVar7,0) * fVar6);
      }
      else {
        in_dr0 = dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x268) = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x268) = dVar2;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar3 != 2) {
      return 1;
    }
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar5 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_2c);
      FUN_8c022dac(auStack_2c,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        pcVar8 = (code *)0x42aa0000;
      }
      else {
        fVar6 = 85.0;
        pcVar8 = vec3_copy_8c02b5fc;
      }
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      if (cVar10 != '\0' || fVar6 <= (float)(uint)pcVar8) {
        if (*(int *)(ar4 + 0x40) == 0) {
          ar5_00 = *(int *)(ar4 + 0x260) + 2;
          iVar3 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6,ar7);
          if (iVar3 != 0) {
            FUN_8c03c314(ar4,ar5_00,ar6,ar7);
            *(undefined4 *)(ar4 + 300) = 0;
            uVar5 = 0;
          }
        }
        else {
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
        }
      }
      else {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,ar6,ar7);
        vec3_copy_8c02b5fc(auStack_38,ar4 + 0x264,ar6,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_38,ar6,ar7,auStack_48);
        Vec3_assign(ar4 + 0x14,auStack_48,ar6,ar7);
        Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_38,0xffffffff,ar6,ar7);
      }
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c075ef4\n.set _FUN_8c075ef4, _FUN_8c075ef4_def\n");
//@unit 8c076198
#include "../decls.h"
undefined4 FUN_8c076198_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *ar5_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  code *pcVar8;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff14;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined8 uStack_20;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *(int *)(ar4 + 300);
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_34);
      FUN_8c022dac(auStack_34,&DAT_8c125e68,ar6,ar7);
      if (cVar10 == '\0') {
        uVar3 = CONCAT44(0x42340000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        uVar3 = 0x8c022cb042340000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar3;
      bVar1 = cVar9 == '\0';
      fVar6 = (float)in_dr0;
      uVar2 = (ulonglong)in_dr0 >> 0x20;
      ar5 = -1;
      Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
      if (bVar1 && (float)uVar2 < fVar6) {
        ar5_00 = &DAT_8c125e68;
        uVar5 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
        *(undefined4 *)(ar4 + 0x260) = uVar5;
        FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_44);
        FUN_8c022dac(auStack_44,&DAT_8c125e68,ar6,ar7);
        if (cVar10 == '\0') {
          uVar3 = CONCAT44(0x42aa0000,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          uVar3 = 0xbf80000042aa0000;
          in_xd0 = in_dr0;
        }
        in_dr0 = uVar3;
        bVar1 = cVar9 != '\0';
        fVar6 = (float)in_dr0;
        uVar2 = (ulonglong)in_dr0 >> 0x20;
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        if (bVar1 || (float)uVar2 <= fVar6) {
          if (*(int *)(ar4 + 0x260) == 3) {
            FUN_8c07f1e4(ar4,0x19,&DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
          }
          else {
            FUN_8c07f1e4(ar4,0x1a,&DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
          }
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(ar4 + 0x260) + 0x16;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
        }
        else {
          ar7 = 0;
          ar6 = 0xffffffff;
          ar5 = *(int *)(ar4 + 0x260) + 0x18;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x260) = 0;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    else if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 1;
      }
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_9c);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      FUN_8c022dac(auStack_9c,&DAT_8c125e68,ar6,ar7);
      if (cVar10 == '\0') {
        pcVar8 = (code *)0x42340000;
      }
      else {
        fVar6 = 45.0;
        pcVar8 = Vec3_dtor;
      }
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      if (cVar9 == '\0' && (float)(uint)pcVar8 < fVar6) {
        iVar4 = FUN_8c034148(ar4 + 0xb0,*(int *)(ar4 + 0x260) + 0x18,ar6,ar7);
        if (iVar4 == 0) {
          return 1;
        }
        *(undefined4 *)(ar4 + 300) = 0;
        return 0;
      }
      iVar4 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
      if (iVar4 == 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
    fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
    iVar4 = *(int *)(ar4 + 0x260);
    if (iVar4 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      FUN_8c03c314(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
    if ((iVar4 != 3) && (iVar4 != 4)) {
      return 1;
    }
    iVar4 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar4 != 1) {
      Vec3_set_zero(auStack_18,ar5,ar6,ar7);
      Vec3_set_zero(auStack_24,ar5,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_64);
      Vec3_assign(ar4 + 0x14,auStack_64,ar6,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,ar6,ar7,in_stack_ffffff14);
      FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
      vec3_copy_8c023d8c(auStack_18,auStack_70,ar6,ar7);
      object_dtor_delete(auStack_70,0xffffffff,ar6,ar7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
      }
      else {
        in_xd0 = CONCAT44(uStack_10,uStack_14);
        dVar7 = *(double *)(ar4 + 600);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      uVar3 = in_xd0;
      if (cVar10 == '\0') {
        uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),fVar6);
        uVar3 = uStack_20;
      }
      uStack_20 = uVar3;
      vec3_copy_8c023d8c(ar4 + 0x254,auStack_24,ar6,ar7);
      vec3_copy_8c02b5fc(auStack_7c,auStack_24,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_7c,ar6,ar7,auStack_8c);
      Vec3_assign(ar4 + 0x14,auStack_8c,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      return 1;
    }
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_54);
    FUN_8c022dac(auStack_54,&DAT_8c125e68,ar6,ar7);
    if (cVar10 == '\0') {
      pcVar8 = (code *)0x42aa0000;
    }
    else {
      fVar6 = 85.0;
      pcVar8 = Vec3_dtor;
    }
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    if (cVar9 != '\0' || (float)(uint)pcVar8 <= fVar6) {
      return 1;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    return 1;
  }
  uVar5 = 0x13;
  iVar4 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
  if (iVar4 != 0) {
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_8c076216;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar5,ar6,ar7);
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c076216:
  FUN_8c031748(ar4,uVar5,ar6,ar7);
  FUN_8c031700(ar4,uVar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c076198\n.set _FUN_8c076198, _FUN_8c076198_def\n");
//@unit 8c076750
#include "../decls.h"
undefined4 FUN_8c076750_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined1 auStack_1c [20];
  
  uVar5 = 1;
  iVar2 = ar6;
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_1c);
  FUN_8c082378(ar4,auStack_1c,iVar2,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_1c,0xffffffff,iVar2,ar7);
  uVar1 = FUN_8c053724(ar5,uVar4,iVar2,ar7);
  if ((char)uVar1 == '\0') {
    FUN_8c031748(ar4,uVar4,iVar2,ar7);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7);
      if (iVar2 == 1) {
        iVar2 = rand_range(ar4,0,100,ar7);
        if (((iVar2 == 0) && (2 < *(int *)(ar4 + 0x128))) && (*(int *)(ar4 + 0x128) < 6)) {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0x13;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        }
        else {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar4,ar7_00);
      }
    }
    else if (((iVar3 == 3) || (iVar3 == 4)) &&
            ((iVar3 = *(int *)(ar4 + 0x128), iVar3 < 8 && (-1 < iVar3)))) {
                    
      switch(iVar3) {
      case 0:
      case 1:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      case 2:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      default:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      case 6:
        if (ar6 == 0) {
          FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        }
        else {
          FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        }
      }
    }
  }
  else {
    iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7);
    if (iVar3 == 1) {
      FUN_8c03c314(ar4,uVar4,iVar2,ar7);
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c076750\n.set _FUN_8c076750, _FUN_8c076750_def\n");
//@unit 8c076994
#include "../decls.h"
undefined4 FUN_8c076994_def(int ar4,undefined4 *ar5,code *ar6,undefined *ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int ar5_00;
  undefined *puVar5;
  undefined4 ar7_00;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0;
  float fVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [12];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [12];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [12];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  
  fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  iVar7 = 0;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  pcVar4 = FUN_8c053724;
  uVar2 = FUN_8c053724(*ar5,FUN_8c053724,ar6,ar7);
  if ((char)uVar2 == '\0') {
    iVar3 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,pcVar4,ar6,ar7);
    if (iVar3 != 0) {
      *(undefined4 *)(ar4 + 0x294) = 0;
      uVar2 = (**(code **)(*(int *)*ar5 + 0x34))((int *)*ar5,pcVar4,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2d8) = uVar2;
      Vec3_assign(auStack_28,&DAT_8c125e68,ar6,ar7);
      if (*(int *)(ar4 + 0x2d8) == 3) {
        Vec3_set_xyz(auStack_34,0x2d8,ar6,ar7);
        FUN_8c023484(&DAT_8c125e68,auStack_34,ar6,ar7,auStack_44);
        Vec3_assign(auStack_28,auStack_44,ar6,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete(auStack_34,0xffffffff,ar6,ar7);
        ar6 = (code *)auStack_54;
        FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,ar6);
        FUN_8c022dac(auStack_54,auStack_28,ar6,ar7);
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.69049e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        if (bVar1 || bVar10) {
          *(undefined4 *)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x2d8) = 0;
        }
      }
      else if (*(int *)(ar4 + 0x2d8) == 4) {
        Vec3_set_xyz(auStack_60,0x2d8,ar6,ar7);
        ar7 = &DAT_8c125e68;
        ar6 = FUN_8c023484;
        FUN_8c023484(&DAT_8c125e68,auStack_60,FUN_8c023484,&DAT_8c125e68,auStack_70);
        Vec3_assign(auStack_28,auStack_70,ar6,ar7);
        Vec3_dtor(auStack_70,0xffffffff,ar6,ar7);
        uVar2 = 0xffffffff;
        object_dtor_delete(auStack_60,0xffffffff,ar6,ar7);
        FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_80);
        FUN_8c022dac(auStack_80,auStack_28,ar6,ar7);
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.63444e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        Vec3_dtor(auStack_80,0xffffffff,ar6,ar7);
        if (bVar1 || bVar10) {
          *(undefined4 *)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(ar4 + 0x2d8) = 0;
        }
      }
      else if ((((*(int *)(ar4 + 0x2d8) != 8) && (*(int *)(ar4 + 0x2d8) != 5)) &&
               (*(int *)(ar4 + 0x2d8) != 7)) && (*(int *)(ar4 + 0x2d8) != 6)) {
        *(undefined4 *)(ar4 + 0x2d8) = 0;
      }
      (**(code **)(*(int *)*ar5 + 0x38))((int *)*ar5,0,ar6,ar7);
      if (((*(int *)(ar4 + 0x2d8) != *(int *)(ar4 + 0x2d4)) && (*(int *)(ar4 + 0x2d4) != 8)) &&
         (*(int *)(ar4 + 0x2d4) != 7)) {
        *(undefined4 *)(ar4 + 0x2d4) = *(undefined4 *)(ar4 + 0x2d8);
      }
    }
    iVar3 = *(int *)(ar4 + 0x2d4);
    if ((iVar3 < 9) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        FUN_8c0230f0(ar4 + 0x14,(&switchdata_8c076cd4_8c076ce0)[iVar3],ar6,ar7,auStack_90)
        ;
        FUN_8c082378(ar4,auStack_90,ar6,ar7);
        Vec3_dtor(auStack_90,0xffffffff,ar6,ar7);
        iVar3 = *(int *)(ar4 + 300);
        if ((iVar3 < 5) && (-1 < iVar3)) {
          ar5_00 = iVar3 * 4;
                    
          switch(iVar3) {
          case 0:
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,ar7);
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          case 1:
            iVar7 = *(int *)(ar4 + 0x260);
            if (iVar7 == 0) {
              uVar2 = 0;
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,uVar2);
            }
            else if (iVar7 == 3) {
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0);
            }
            else if (iVar7 == 4) {
              ar6 = (code *)0xffffffff;
              s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0);
            }
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            break;
          case 2:
            iVar3 = *(int *)(ar4 + 0x260);
            if (iVar3 == 0) {
              iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
              FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_a0);
              FUN_8c022dac(auStack_a0,&DAT_8c125e68,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 45.0;
              }
              else {
                fVar8 = 45.0;
                fVar9 = 2.57839e-43;
              }
              Vec3_dtor(auStack_a0,0xffffffff,ar6,ar7);
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
                if (iVar3 == 3) {
                  *(undefined4 *)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              iVar3 = *(int *)(ar4 + 0x128);
              if ((iVar3 < 8) && (-1 < iVar3)) {
                    
                switch(iVar3) {
                case 0:
                case 1:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                case 2:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                default:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                  break;
                case 6:
                  iVar7 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7);
                }
              }
              if (*(int *)(ar4 + 0x260) == 3) {
                Vec3_set_xyz(auStack_ac,Vec3_set_xyz,ar6,ar7);
                FUN_8c023484(&DAT_8c125e68,auStack_ac,ar6,ar7,auStack_bc);
                Vec3_assign(auStack_28,auStack_bc,ar6,ar7);
                Vec3_dtor(auStack_bc,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                object_dtor_delete(auStack_ac,0xffffffff,ar6,ar7);
              }
              else {
                Vec3_set_xyz(auStack_c8,ar5_00,ar6,ar7);
                FUN_8c023484(&DAT_8c125e68,auStack_c8,ar6,ar7,auStack_d8);
                Vec3_assign(auStack_28,auStack_d8,ar6,ar7);
                Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
                uVar2 = 0xffffffff;
                object_dtor_delete(auStack_c8,0xffffffff,ar6,ar7);
              }
              FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_e8);
              FUN_8c022dac(auStack_e8,auStack_28,ar6,ar7);
              if (cVar12 == '\0') {
                fVar9 = 35.0;
              }
              else {
                fVar8 = 35.0;
                fVar9 = 2.52234e-43;
              }
              Vec3_dtor(auStack_e8,0xffffffff,ar6,ar7);
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
                if (iVar3 == 3) {
                  *(undefined4 *)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(ar4 + 300) = 0;
              }
            }
            if ((iVar7 == 7) || (iVar7 == 1)) {
              ar6 = (code *)0x64;
              iVar7 = rand_range(ar4,0,100,ar7);
              if (iVar7 < 2) {
                *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
              }
              else {
                *(undefined4 *)(ar4 + 300) = 1;
              }
            }
            break;
          case 3:
            iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
            if (iVar7 == 1) {
              if (*(int *)(ar4 + 0x128) == 6) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x25;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0,0);
              }
              else if (*(int *)(ar4 + 0x128) == 7) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x2f;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2f,0,0);
              }
              else {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x13;
                s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0,0);
              }
              s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_00);
              *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            }
            break;
          case 4:
            iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7);
            if (iVar7 == 1) {
              *(undefined4 *)(ar4 + 300) = 1;
            }
          }
        }
        break;
      case 3:
      case 4:
        FUN_8c0230f0(ar4 + 0x14,auStack_f8,ar6,ar7,auStack_f8);
        FUN_8c082378(ar4,auStack_f8,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_f8,0xffffffff,ar6,ar7);
        if (*(int *)(ar4 + 300) == 0) {
          FUN_8c032ab0(ar4,uVar2,ar6,ar7);
          if (*(int *)(ar4 + 0x2d4) == 3) {
            Vec3_set_xyz(auStack_104,uVar2,ar6,ar7);
            FUN_8c023484(&DAT_8c125e68,auStack_104,ar6,ar7,auStack_114);
            Vec3_assign(ar4 + 0x54,auStack_114,ar6,ar7);
            Vec3_dtor(auStack_114,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_104,0xffffffff,ar6,ar7);
          }
          else {
            Vec3_set_xyz(auStack_120,uVar2,ar6,ar7);
            FUN_8c023484(&DAT_8c125e68,auStack_120,ar6,ar7,auStack_130);
            Vec3_assign(ar4 + 0x54,auStack_130,ar6,ar7);
            Vec3_dtor(auStack_130,0xffffffff,ar6,ar7);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_120,0xffffffff,ar6,ar7);
          }
          Vec3_length(ar4 + 0x54,uVar2,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          ar7 = (undefined *)(ar4 + 0xb0);
          ar6 = get_field_1c_026dd8;
          iVar7 = get_field_1c_026dd8(ar7,300,get_field_1c_026dd8,ar7);
          if (iVar7 == 0) {
            *(undefined4 *)(ar4 + 0x2b0) = 1;
          }
          else {
            ar7 = (undefined *)0x2b0;
            ar6 = (code *)0x0;
            *(undefined4 *)(ar4 + 0x2b0) = 0;
          }
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
        else if (*(int *)(ar4 + 300) != 1) break;
        Vec3_ctor_copy(auStack_140,ar4 + 0x54,ar6,ar7);
        ar6 = (code *)0x1;
        pcVar4 = FUN_8c0811b4;
        iVar7 = FUN_8c0811b4(ar4,auStack_140,1,FUN_8c0811b4);
        Vec3_dtor(auStack_140,0xffffffff,ar6,pcVar4);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x2b0) = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          if (*(int *)(ar4 + 0x2d4) == 3) {
            *(undefined4 *)(ar4 + 0x220) = 4;
            *(undefined4 *)(ar4 + 0x260) = 4;
          }
          else {
            *(undefined4 *)(ar4 + 0x220) = 3;
            *(undefined4 *)(ar4 + 0x260) = 3;
          }
          *(undefined4 *)(ar4 + 0x2d4) = 0;
        }
        break;
      case 5:
        iVar7 = FUN_8c0839c0(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_150);
          FUN_8c022dac(auStack_150,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.41023e-43;
          }
          Vec3_dtor(auStack_150,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 6:
        iVar7 = FUN_8c083780(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_160);
          FUN_8c022dac(auStack_160,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.35418e-43;
          }
          Vec3_dtor(auStack_160,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 7:
        iVar7 = FUN_8c0845f4(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          puVar5 = &DAT_8c125e68;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7,auStack_170);
          FUN_8c022dac(auStack_170,&DAT_8c125e68,ar6,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.29813e-43;
          }
          Vec3_dtor(auStack_170,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(ar4 + 300) = 0;
        }
        break;
      case 8:
        iVar7 = FUN_8c083d8c(ar4,ar5,ar6,ar7);
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x2d4) = 0;
          uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
          *(undefined4 *)(ar4 + 0x260) = uVar2;
          FUN_8c0230f0(ar4 + 0x14,FUN_8c0230f0,ar6,ar7,auStack_180);
          ar6 = FUN_8c022dac;
          FUN_8c022dac(auStack_180,&DAT_8c125e68,FUN_8c022dac,ar7);
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.24208e-43;
          }
          Vec3_dtor(auStack_180,0xffffffff,ar6,ar7);
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(ar4 + 300) = 0;
        }
      }
    }
  }
  else {
    iVar7 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7);
    if (iVar7 == 1) {
      FUN_8c03c314(ar4,pcVar4,ar6,ar7);
      uVar6 = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,Vec3_dtor);
  return uVar6;
}

__asm__(".globl _FUN_8c076994\n.set _FUN_8c076994, _FUN_8c076994_def\n");
//@unit 8c077a38
#include "../decls.h"
undefined4 FUN_8c077a38_def(int ar4,float *ar5,float *ar6,code *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *ar5_00;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  double in_dr0;
  double dVar14;
  undefined4 in_fr15;
  double dVar15;
  double in_xd0;
  bool bVar16;
  char cVar17;
  char cVar18;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined1 auStack_2ac [16];
  undefined1 auStack_29c [16];
  undefined1 auStack_28c [16];
  undefined1 auStack_27c [16];
  undefined1 auStack_26c [216];
  undefined1 auStack_194 [16];
  undefined1 auStack_184 [16];
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [12];
  undefined1 auStack_158 [12];
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [12];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [12];
  undefined1 auStack_dc [16];
  undefined1 auStack_cc [16];
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [4];
  float fStack_34;
  undefined1 auStack_30 [12];
  
  cVar18 = '\0';
  cVar17 = '\0';
  uVar5 = 1;
  uVar11 = 1;
  pfVar8 = ar6;
  pcVar10 = ar7;
  iVar1 = get_field_6c_028cc4(ar7,1,ar6,ar7);
  if (iVar1 == 0) {
    return 2;
  }
  Vec3_ctor_zero(auStack_38,uVar5,pfVar8,ar7);
  Vec3_set_zero(auStack_44,uVar5,pfVar8,ar7);
  FUN_8c023dac(auStack_50,uVar5,pfVar8,ar7);
  FUN_8c023dac(auStack_5c,uVar5,pfVar8,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,uVar5,pfVar8,ar7,pcVar10);
  if (cVar18 == '\0') {
    in_fr15 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    ar7 = (code *)auStack_30;
    pfVar8 = &fStack_34;
    FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7);
    if (cVar18 == '\0') {
      fVar12 = 900.0;
    }
    else {
      fStack_34 = 900.0;
      fVar12 = 4.2039e-43;
    }
    if (cVar17 == '\0' && fVar12 < fStack_34) {
      FUN_8c031de8(ar4,0,pfVar8,ar7);
      FUN_8c031c74(ar4,ar6,ar5,ar7);
      pfVar8 = ar5;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2d0) = 0;
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 == 1) {
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    pfVar8 = ar6;
    if (iVar2 == 0) {
      uVar9 = 0;
      uVar5 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0);
      pcVar6 = s_CAnimBody_SetFrame_033e6e;
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,uVar5,uVar9);
      if ((*(int *)(ar4 + 0x128) < 2) || (pcVar6 = (code *)0x5, 5 < *(int *)(ar4 + 0x128))) {
        if ((*(int *)(ar4 + 0x128) == 6) || (*(int *)(ar4 + 0x128) == 7)) {
          *(undefined4 *)(ar4 + 0x294) = 1;
        }
        else {
          *(undefined4 *)(ar4 + 0x294) = 4;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x294) = 2;
      }
      *(undefined4 *)(ar4 + 0x214) = 0;
      FUN_8c03f3e8(pcVar10,pcVar6,uVar5,uVar9);
      iVar2 = get_field_6c_02f46c(iVar1,pcVar6,uVar5,uVar9);
      if (iVar2 < 0x32) {
        *(undefined4 *)(ar4 + 0x2d0) = 1;
      }
      pfVar8 = (float *)0x12c;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      iVar2 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x54,iVar2,300,uVar9);
      if (cVar18 == '\0') {
        dVar15 = (double)CONCAT44(0xbe99999a,*(undefined4 *)(ar4 + 0x58));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x58);
        dVar15 = 1.63976064280413e-311;
      }
      if (cVar17 == '\0') {
        fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x58) = fVar12;
      }
      else {
        *(double *)(ar4 + 0x58) = in_xd0;
      }
      Vec3_normalize(ar4 + 0x54,iVar2,pfVar8,uVar9);
      ar7 = Vec3_assign;
      Vec3_assign(ar4 + 0x54,auStack_6c,pfVar8,Vec3_assign);
      Vec3_dtor(auStack_6c,0xffffffff,pfVar8,ar7);
    }
    if ((*(int *)(ar4 + 0x128) < 2) && (*(int *)(ar4 + 0x40) == 4)) {
      ar7 = (code *)auStack_30;
      pfVar8 = &fStack_34;
      FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7);
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7,auStack_7c);
      Vec3_scale(auStack_7c,in_stack_00000004 + 4,pfVar8,ar7,auStack_8c);
      Vec3_add(auStack_8c,ar5,pfVar8,ar7,auStack_9c);
      Vec3_sub(auStack_9c,auStack_38,pfVar8,ar7,auStack_ac);
      Vec3_scale(auStack_ac,&DAT_8c137990,pfVar8,ar7,auStack_bc);
      FUN_8c023aa0(auStack_38,auStack_bc,pfVar8,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,pfVar8,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,pfVar8,ar7);
      uVar5 = 0xffffffff;
      Vec3_dtor(auStack_7c,0xffffffff,pfVar8,ar7);
      FUN_8c036988(iVar1,uVar5,pfVar8,ar7);
    }
    goto LAB_8c078ef6;
  }
  if (iVar2 != 2) goto LAB_8c078ef6;
  *(undefined4 *)(ar4 + 0x214) = 0;
  Vec3_ctor_copy(auStack_cc,ar4 + 0x54,pfVar8,ar7);
  FUN_8c082378(ar4,auStack_cc,pfVar8,ar7);
  Vec3_dtor(auStack_cc,0xffffffff,pfVar8,ar7);
  pcVar6 = CAnimBody_GetCurFrame;
  CAnimBody_GetCurFrame(ar4 + 0xb0,CAnimBody_GetCurFrame,pfVar8,ar7);
  dVar15 = in_dr0;
  if (cVar18 == '\0') {
    dVar15 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  if (cVar17 == '\0') {
    dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + 1.0,SUB84(dVar15,0));
  }
  else {
    dVar15 = dVar15 + (double)CONCAT44(0x3f800000,SUB84(in_dr0,0));
  }
  uVar5 = get_field_1c_026dd8(ar4 + 0xb0,pcVar6,pfVar8,ar7);
  iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7);
  fVar12 = (float)iVar2;
  dVar14 = (double)(ulonglong)(uint)fVar12;
  if (cVar17 == '\0' && fVar12 < 0.0) {
    if (cVar18 == '\0') {
      dVar14 = (double)CONCAT44(0x4f800000,fVar12);
    }
    else {
      dVar14 = 3.40178305716091e-312;
    }
    if (cVar17 == '\0') {
      fVar12 = (float)((ulonglong)dVar14 >> 0x20);
      dVar14 = (double)CONCAT44(fVar12,SUB84(dVar14,0) + fVar12);
    }
    else {
      dVar14 = dVar14 + dVar14;
    }
  }
  if (cVar17 == '\0') {
    bVar16 = (float)((ulonglong)dVar15 >> 0x20) < SUB84(dVar14,0);
  }
  else {
    bVar16 = dVar15 < dVar14;
  }
  if (!bVar16) {
    uVar5 = get_field_1c_026dd8(ar4 + 0xb0,iVar2,pfVar8,ar7);
    uVar13 = SUB84(dVar14,0);
    uVar9 = SUB84(dVar15,0);
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar5,pfVar8,ar7);
    if (cVar17 == '\0') {
      dVar15 = (double)CONCAT44((float)iVar2,uVar9);
    }
    else {
      dVar15 = (double)iVar2;
    }
    dVar14 = (double)(ulonglong)uVar13;
    if (cVar17 == '\0') {
      bVar16 = (float)((ulonglong)dVar15 >> 0x20) < 0.0;
    }
    else {
      bVar16 = dVar15 < dVar14;
    }
    if (bVar16) {
      if (cVar18 == '\0') {
        dVar14 = (double)CONCAT44(0x4f800000,uVar13);
      }
      else {
        dVar14 = 3.40178305716091e-312;
      }
    }
  }
  FUN_8c0507a4(iVar1,auStack_38,&fStack_34,auStack_30);
  ar7 = (code *)auStack_48;
  pcVar6 = (code *)auStack_4c;
  FUN_8c03f3f8(iVar1,auStack_50,pcVar6,ar7);
  if (*(int *)(ar4 + 0x2d0) == 1) {
LAB_8c078026:
    iVar2 = *(int *)(ar4 + 0x128);
    if ((iVar2 < 8) && (1 < iVar2)) {
                    
      switch(iVar2) {
      case 2:
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,pcVar6,ar7);
        puVar3 = (undefined4 *)deref_u32(uVar5,deref_u32,pcVar6,ar7);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar6,ar7);
        Vec3_assign(auStack_38,auStack_dc,pcVar6,ar7);
        pcVar10 = Vec3_dtor;
        Vec3_dtor(auStack_dc,0xffffffff,pcVar6,Vec3_dtor);
        uVar7 = 0x19;
        uVar9 = 0x19;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,0x19,pcVar10);
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,pcVar10);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 4),uVar7,pcVar10);
        vec3_copy_8c023d8c(auStack_44,auStack_e8,uVar7,pcVar10);
        object_dtor_delete(auStack_e8,0xffffffff,uVar7,pcVar10);
        uVar9 = 0x19;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x19,uVar7,pcVar10);
        pcVar10 = deref_u32;
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,deref_u32);
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 8),piVar4,pcVar10);
        FUN_8c023e04(auStack_50,auStack_f4,piVar4,pcVar10);
        free_if_nonnull_wrap_016ac4(auStack_f4,0xffffffff,piVar4,pcVar10);
        vec3_copy_8c02b5fc(auStack_100,in_stack_00000000,piVar4,pcVar10);
        FUN_8c023484(auStack_38,auStack_100,piVar4,pcVar10,auStack_110);
        Vec3_scale(auStack_110,in_stack_00000004 + 4,piVar4,pcVar10,auStack_120);
        Vec3_add(auStack_120,ar5,piVar4,pcVar10,auStack_130);
        Vec3_assign(auStack_38,auStack_130,piVar4,pcVar10);
        ar7 = (code *)auStack_130;
        pcVar6 = Vec3_dtor;
        Vec3_dtor(ar7,0xffffffff,Vec3_dtor,ar7);
        Vec3_dtor(auStack_120,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_110,0xffffffff,pcVar6,ar7);
        ar5_00 = (code *)0xffffffff;
        object_dtor_delete(auStack_100,0xffffffff,pcVar6,ar7);
        FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7);
        break;
      case 3:
        uVar9 = 0x1a;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,pcVar6,ar7);
        puVar3 = (undefined4 *)deref_u32(uVar5,uVar9,pcVar6,ar7);
        FUN_8c034384(ar4 + 0xb0,*(undefined4 *)*puVar3,pcVar6,ar7);
        Vec3_assign(auStack_38,auStack_140,pcVar6,ar7);
        Vec3_dtor(auStack_140,0xffffffff,pcVar6,ar7);
        uVar9 = 0x1a;
        uVar7 = 0xb0;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,0xb0,ar7);
        piVar4 = (int *)deref_u32(uVar5,uVar9,uVar7,ar7);
        FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*piVar4 + 4),uVar7,ar7);
        vec3_copy_8c023d8c(auStack_44,auStack_14c,uVar7,ar7);
        pcVar10 = object_dtor_delete;
        object_dtor_delete(auStack_14c,0xffffffff,uVar7,object_dtor_delete);
        uVar9 = 0x1a;
        uVar5 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,uVar7,pcVar10);
        pcVar6 = (code *)deref_u32(uVar5,uVar9,uVar7,pcVar10);
        ar7 = (code *)auStack_158;
        FUN_8c0348ac(ar4 + 0xb0,*(undefined4 *)(*(int *)pcVar6 + 8),pcVar6,ar7);
        FUN_8c023e04(auStack_50,auStack_158,pcVar6,ar7);
        free_if_nonnull_wrap_016ac4(auStack_158,0xffffffff,pcVar6,ar7);
        vec3_copy_8c02b5fc(auStack_164,in_stack_00000000,pcVar6,ar7);
        FUN_8c023484(auStack_38,auStack_164,pcVar6,ar7,auStack_174);
        Vec3_scale(auStack_174,in_stack_00000004 + 4,pcVar6,ar7,auStack_184);
        Vec3_add(auStack_184,ar5,pcVar6,ar7,auStack_194);
        Vec3_assign(auStack_38,auStack_194,pcVar6,ar7);
        Vec3_dtor(auStack_194,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_184,0xffffffff,pcVar6,ar7);
        Vec3_dtor(auStack_174,0xffffffff,pcVar6,ar7);
        ar5_00 = (code *)0xffffffff;
        object_dtor_delete(auStack_164,0xffffffff,pcVar6,ar7);
        FUN_8c078fb8(iVar1,ar5_00,pcVar6,ar7);
      }
    }
    else {
      ar7_00 = auStack_30;
      pfVar8 = &fStack_34;
      FUN_8c0507a4(iVar1,auStack_38,pfVar8,ar7_00);
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,pfVar8,ar7_00,auStack_26c);
      ar7 = (code *)auStack_27c;
      pcVar6 = (code *)(in_stack_00000004 + 4);
      Vec3_scale(auStack_26c,pcVar6,pcVar6,ar7,ar7);
      Vec3_add(auStack_27c,ar5,pcVar6,ar7,auStack_28c);
      Vec3_sub(auStack_28c,auStack_38,pcVar6,ar7,auStack_29c);
      Vec3_scale(auStack_29c,&DAT_8c137994,pcVar6,ar7,auStack_2ac);
      FUN_8c023aa0(auStack_38,auStack_2ac,pcVar6,ar7);
      Vec3_dtor(auStack_2ac,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_29c,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_28c,0xffffffff,pcVar6,ar7);
      Vec3_dtor(auStack_27c,0xffffffff,pcVar6,ar7);
      ar5_00 = (code *)0xffffffff;
      Vec3_dtor(auStack_26c,0xffffffff,pcVar6,ar7);
      if (cVar18 == '\0') {
        dVar15 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar15 = 6.28636279645629e-312;
      }
      if (cVar17 == '\0') {
        fVar12 = SUB84(dVar15,0) * (float)((ulonglong)dVar15 >> 0x20);
      }
      else {
        fVar12 = SUB84(dVar15 * dVar15,0);
      }
      if (cVar18 == '\0') {
        *(float *)(ar4 + 0x28) = fVar12;
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    ar5_00 = (code *)0xb0;
    CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar6,ar7,pcVar10);
    if (cVar18 == '\0') {
      fVar12 = (float)((ulonglong)dVar14 >> 0x20);
      pcVar10 = (code *)0x42700000;
    }
    else {
      fVar12 = 60.0;
      pcVar10 = get_field_24_05c284;
      in_xd0 = dVar14;
    }
    if ((cVar17 != '\0' || fVar12 <= (float)(uint)pcVar10) ||
       (iVar2 = get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7), iVar2 == 0xf)) goto LAB_8c078026;
  }
  if ((1 < *(int *)(ar4 + 0x128)) &&
     (iVar2 = get_field_24_05c284(iVar1,ar5_00,pcVar6,ar7), iVar2 == 0xf)) {
    ar5_00 = FUN_8c078f84;
    FUN_8c078f84(auStack_50,FUN_8c078f84,pcVar6,ar7);
  }
  FUN_8c036988(iVar1,ar5_00,pcVar6,ar7);
  FUN_8c038a10(iVar1,ar5_00,pcVar6,ar7);
  FUN_8c031c74(ar4,ar6,ar5,ar7);
  if ((*(int *)(ar4 + 0x128) < 2) || (5 < *(int *)(ar4 + 0x128))) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,2,ar5,ar7);
    pfVar8 = ar5;
    if (iVar1 == 1) {
      iVar1 = *(int *)(ar4 + 0x294) + -1;
      *(int *)(ar4 + 0x294) = iVar1;
      if (iVar1 < 1) {
        FUN_8c030eb8(ar4 + 0x1fc,iVar1,ar5,ar7);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,ar5,ar7);
        pfVar8 = ar5;
      }
    }
  }
  else {
    iVar1 = *(int *)(ar4 + 0x294);
    if (iVar1 < 1) {
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7);
      pfVar8 = ar5;
      if (iVar1 == 1) {
        FUN_8c030eb8(ar4 + 0x1fc,1,ar5,ar7);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 300) = 0;
        uVar11 = 0;
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 0x294) = 0;
        ar7 = (code *)0x0;
        pfVar8 = (float *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,pfVar8,ar7);
      }
    }
    else {
      iVar1 = FUN_8c03f3ac(ar4 + 0xb0,iVar1,ar5,ar7);
      pfVar8 = ar5;
      if (iVar1 == 7) {
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
  }
LAB_8c078ef6:
  free_if_nonnull_wrap_016ac4(auStack_5c,0xffffffff,pfVar8,ar7);
  free_if_nonnull_wrap_016ac4(auStack_50,0xffffffff,pfVar8,ar7);
  object_dtor_delete(auStack_44,0xffffffff,pfVar8,ar7);
  Vec3_dtor(auStack_38,0xffffffff,pfVar8,ar7);
  return uVar11;
}

__asm__(".globl _FUN_8c077a38\n.set _FUN_8c077a38, _FUN_8c077a38_def\n");
//@unit 8c078f84
#include "../decls.h"
undefined4 FUN_8c078f84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c078f84\n.set _FUN_8c078f84, _FUN_8c078f84_def\n");
//@unit 8c078fb8
#include "../decls.h"
undefined4 FUN_8c078fb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x50) = in_fr4;
  *(undefined4 *)(ar4 + 0x54) = in_fr5;
  *(undefined4 *)(ar4 + 0x58) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c078fb8\n.set _FUN_8c078fb8, _FUN_8c078fb8_def\n");
//@unit 8c078fd0
#include "../decls.h"
undefined4 FUN_8c078fd0_def(int ar4,int *ar5,int *ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *ar6_00;
  code *pcVar4;
  undefined1 *ar6_01;
  int *ar7_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 in_dr0;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  int *in_stack_00000000;
  int *in_stack_00000004;
  undefined1 auStack_1ac [16];
  undefined1 auStack_19c [16];
  undefined1 auStack_18c [16];
  undefined1 auStack_17c [16];
  undefined1 auStack_16c [256];
  undefined1 auStack_6c [48];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar5 = 1;
  piVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  FUN_8c102748(auStack_3c,piVar2,ar6_00,ar7_00);
  (**(code **)(*in_stack_00000004 + 0x184))(in_stack_00000004,piVar2,ar6_00,ar7_00);
  if (cVar12 == '\0') {
    uVar7 = CONCAT44(0x44610000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar7 = 0x1fc44610000;
  }
  uVar8 = uVar7;
  if (cVar11 == '\0' && (float)uVar7 < (float)((ulonglong)uVar7 >> 0x20)) {
    ar6_00 = (int *)(ar4 + 0x1fc);
    FUN_8c030f2c(ar6_00,piVar2,ar6_00,ar7_00);
    (**(code **)(*in_stack_00000004 + 0x184))(in_stack_00000004,piVar2,ar6_00,ar7_00);
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(0x43200000,(int)((ulonglong)uVar7 >> 0x20));
    }
    else {
      uVar8 = 0x13443200000;
      in_dr0 = uVar7;
    }
    if (cVar11 == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
      piVar2 = (int *)(ar4 + 0x50);
    }
  }
  iVar1 = *(int *)(ar4 + 0x134);
  if ((iVar1 < 10) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar6_00 = *(int **)(ar4 + 0x128);
      if (((int)ar6_00 < 8) && (-1 < (int)ar6_00)) {
                    
                    
        uVar5 = (*(code *)((code **)&DATA_8c079148)[(int)ar6_00])();
        return uVar5;
      }
      break;
    case 1:
      FUN_8c031c74(ar4,ar5,ar5,ar7_00);
      iVar1 = *in_stack_00000004;
      (**(code **)(iVar1 + 0x184))(in_stack_00000004,iVar1,ar5,ar7_00);
      if (cVar12 == '\0') {
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3f7851ec,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7_00);
      ar6_00 = ar5;
      if (iVar1 == 1) {
        ar7_00 = (int *)0x0;
        ar6_00 = (int *)0xffffffff;
        uVar5 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar5,ar6_00,ar7_00);
        FUN_8c03c314(ar4,uVar5,ar6_00,ar7_00);
        uVar5 = 0;
        iVar1 = *(int *)(ar4 + 0x2a0) + -1;
        *(int *)(ar4 + 0x2a0) = iVar1;
        if (iVar1 < 0) {
          *(undefined4 *)(ar4 + 0x2a0) = 0;
        }
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 2:
      iVar1 = *in_stack_00000004;
      (**(code **)(iVar1 + 0x184))(in_stack_00000004,iVar1,ar6_00,ar7_00);
      if (cVar12 == '\0') {
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        fVar10 = 900.0;
        uVar8 = in_dr0;
      }
      else {
        fVar6 = 900.0;
        fVar10 = 0.97;
      }
      if (cVar11 == '\0' && fVar6 < fVar10) {
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x3f7851ec,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          uVar8 = *(undefined8 *)(ar4 + 0x28);
          dVar9 = 3.73997364963455e-312;
        }
        if (cVar11 == '\0') {
          fVar6 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = uVar8;
        }
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00);
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x40) = 5;
        ar6_00 = (int *)0x134;
        *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      }
      break;
    case 3:
      if (*(int *)(ar4 + 0x1d4) == 1) {
        Vec3_ctor_zero(auStack_6c,piVar2,ar6_00,ar7_00);
        fVar6 = (float)((ulonglong)uVar8 >> 0x20);
        pcVar4 = Vec3_ctor_xyz;
        Vec3_ctor_xyz(auStack_16c,piVar2,Vec3_ctor_xyz,ar7_00);
        iVar1 = FUN_8c023cd4(ar4 + 0x200,auStack_16c,pcVar4,ar7_00);
        uVar3 = 0xffffffff;
        Vec3_dtor(auStack_16c,0xffffffff,pcVar4,ar7_00);
        if (iVar1 == 0) {
          uVar3 = Vec3_length(ar4 + 0x200,uVar3,pcVar4,ar7_00);
          Vec3_assign(auStack_6c,uVar3,pcVar4,ar7_00);
        }
        else {
          iVar1 = ar4 + 0x54;
          piVar2 = ar5;
          Vec3_sub(iVar1,ar5,iVar1,ar7_00,auStack_17c);
          uVar3 = Vec3_length(auStack_17c,piVar2,iVar1,ar7_00);
          Vec3_scale(uVar3,&DAT_8c137998,iVar1,ar7_00,auStack_18c);
          Vec3_assign(auStack_6c,auStack_18c,iVar1,ar7_00);
          Vec3_dtor(auStack_18c,0xffffffff,iVar1,ar7_00);
          pcVar4 = (code *)auStack_17c;
          Vec3_dtor(pcVar4,0xffffffff,pcVar4,ar7_00);
        }
        FUN_8c022dac(auStack_6c,ar4 + 0x14,pcVar4,ar7_00);
        if (cVar12 == '\0') {
          fVar10 = 90.0;
        }
        else {
          fVar6 = 90.0;
          fVar10 = 2.9147e-43;
        }
        if (cVar11 == '\0' && fVar10 < fVar6) {
          ar6_01 = auStack_19c;
          FUN_8c03263c(ar4,auStack_6c,ar6_01,ar7_00);
          Vec3_add(auStack_19c,ar5,ar6_01,ar7_00,auStack_1ac);
          Vec3_assign(ar4 + 0x54,auStack_1ac,ar6_01,ar7_00);
          pcVar4 = Vec3_dtor;
          Vec3_dtor(auStack_1ac,0xffffffff,Vec3_dtor,ar7_00);
          Vec3_dtor(auStack_19c,0xffffffff,pcVar4,ar7_00);
          FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000004);
          *(undefined4 *)(ar4 + 0x40) = 5;
          ar7_00 = in_stack_00000004;
        }
        Vec3_dtor(auStack_6c,0xffffffff,Vec3_dtor,ar7_00);
      }
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)0x0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 4:
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = FUN_8c07f8e0(ar4,ar5,ar6_00,in_stack_00000004);
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        ar6_00 = (int *)0x0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 5:
      ar6_00 = (int *)(ar4 + 0x54);
      iVar1 = FUN_8c07ff08(ar4,ar5,ar6_00,in_stack_00000004);
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 6:
      iVar1 = FUN_8c080e80(ar4,ar5,in_stack_00000004,ar7_00);
      ar6_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
      break;
    case 7:
      iVar1 = FUN_8c08248c(ar4,ar5,ar6,in_stack_00000004);
      ar6_00 = ar6;
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        ar6_00 = ar6;
      }
      break;
    case 8:
      iVar1 = FUN_8c0831c8(ar4,ar5,in_stack_00000000,in_stack_00000004);
      ar6_00 = in_stack_00000000;
      ar7_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
        ar6_00 = in_stack_00000000;
      }
      break;
    case 9:
      iVar1 = FUN_8c080890(ar4,ar5,in_stack_00000004,ar7_00);
      ar6_00 = in_stack_00000004;
      if (iVar1 == 0) {
        uVar5 = 0;
        *(undefined4 *)(ar4 + 0x134) = 0;
      }
    }
  }
  free_if_nonnull_wrap_102790(auStack_3c,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar5;
}

__asm__(".globl _FUN_8c078fd0\n.set _FUN_8c078fd0, _FUN_8c078fd0_def\n");
//@unit 8c07a3cc
#include "../decls.h"
uint FUN_8c07a3cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined4 ar7_00;
  int *ar7_01;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  int *in_stack_00000000;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = ar5;
  ar7_00 = ar7;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  FUN_8c031748(ar4,uVar2,ar6,ar7_00);
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    iVar1 = rand_range(ar4,0,100,ar7_00);
    if ((iVar1 < 0x32) || (*(int *)(ar4 + 0x2a0) != 0)) {
      *(undefined4 *)(ar4 + 0x134) = 1;
      goto LAB_8c07a446;
    }
    *(undefined4 *)(ar4 + 0x134) = 2;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07a446:
      FUN_8c031c74(ar4,ar5,ar5,ar7_00);
      uVar2 = 0x13;
      iVar1 = FUN_8c031de8(ar4,0x13,ar5,ar7_00);
      if (iVar1 != 0) {
        return 1;
      }
      FUN_8c03c314(ar4,uVar2,ar5,ar7_00);
      iVar1 = *(int *)(ar4 + 0x2a0) + -1;
      *(int *)(ar4 + 0x2a0) = iVar1;
      if (iVar1 < 0) {
        *(undefined4 *)(ar4 + 0x2a0) = 0;
      }
      *(undefined4 *)(ar4 + 0x134) = 0;
      return 0;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      goto LAB_8c07a5f4;
    }
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40400000,in_fr1);
  }
  else {
    dVar4 = 52776566554624.0;
  }
  ar7_01 = in_stack_00000000;
  FUN_8c032518(ar4,ar5,ar7,in_stack_00000000);
  Vec3_assign(ar4 + 0x54,auStack_24,ar7,ar7_01);
  Vec3_dtor(auStack_24,0xffffffff,ar7,ar7_01);
  a5 = ar4 + 0x54;
  iVar1 = (**(code **)(*in_stack_00000000 + 0x134))(in_stack_00000000,a5,ar7,ar7_01);
  if (iVar1 == 1) {
    Vec3_set_xyz(auStack_30,a5,ar7,ar7_01);
    FUN_8c023484(ar4 + 0x14,auStack_30,ar7,ar7_01,auStack_40);
    Vec3_assign(ar4 + 0x14,auStack_40,ar7,ar7_01);
    Vec3_dtor(auStack_40,0xffffffff,ar7,ar7_01);
    uVar2 = 0xffffffff;
    object_dtor_delete(auStack_30,0xffffffff,ar7,ar7_01);
    Vec3_set_xyz(auStack_4c,uVar2,ar7,ar7_01);
    FUN_8c023484(ar4 + 0x80,auStack_4c,ar7,ar7_01,auStack_5c);
    Vec3_assign(ar4 + 0x80,auStack_5c,ar7,ar7_01);
    Vec3_dtor(auStack_5c,0xffffffff,ar7,ar7_01);
    object_dtor_delete(auStack_4c,0xffffffff,ar7,ar7_01);
    return 1;
  }
  (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar4 + 0x54,ar7,ar7_01);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x7c);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x58) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x58) = in_xd0;
  }
  *(undefined4 *)(ar4 + 0x40) = 5;
  *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
LAB_8c07a5f4:
  iVar1 = FUN_8c0755e0(ar4,ar5,ar4 + 0x54,in_stack_00000000);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x134) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c07a3cc\n.set _FUN_8c07a3cc, _FUN_8c07a3cc_def\n");
//@unit 8c07a684
#include "../decls.h"
undefined4 ret_const_0_07a684_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_07a684\n.set _ret_const_0_07a684, _ret_const_0_07a684_def\n");
//@unit 8c07a68c
#include "../decls.h"
undefined4 FUN_8c07a68c_def(double *ar4,double *ar5,double *ar6,code *ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double *pdVar4;
  code *ar5_00;
  double *ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  undefined4 *puVar7;
  double dVar5;
  float fVar8;
  double dVar6;
  double in_xd0;
  char cVar9;
  char cVar10;
  int *in_stack_00000000;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [4];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  pdVar4 = ar5;
  ar6_00 = ar6;
  Vec3_ctor_zero(&fStack_24,ar5,ar6,ar7);
  fVar3 = *(float *)(ar4 + 0xd);
  if ((5 < (int)fVar3) || ((int)fVar3 < 0)) goto switchD_8c07a6ce_default;
                    
  switch(fVar3) {
  case 0.0:
    *(float *)(ar4 + 0x2f) = 0.0;
    FUN_8c030f2c((float *)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7);
    pdVar4 = ar4 + 0x48;
    dVar6 = (double)((ulonglong)in_dr0 & 0xffffffff);
    if (cVar10 == '\0') {
      *(float *)pdVar4 = 0.0;
    }
    else {
      *pdVar4 = dVar6;
    }
    (**(code **)(*in_stack_00000000 + 0x184))(in_stack_00000000,pdVar4,0x240,ar7);
    fVar3 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar10 == '\0') {
      puVar7 = (undefined4 *)0x44610000;
      dVar6 = in_xd0;
    }
    else {
      fVar3 = 900.0;
      puVar7 = &DAT_8c125be0;
    }
    if (cVar9 == '\0' && fVar3 < (float)(uint)puVar7) {
      if (cVar10 == '\0') {
        fVar3 = *(float *)ar5;
      }
      else {
        dVar6 = *ar5;
        fVar3 = 0.0;
      }
      if (cVar9 != '\0' || 0.0 <= fVar3) {
        if (cVar10 == '\0') {
          dVar5 = 1.2986507827891524e+23;
        }
        else {
          dVar6 = 0.0;
          dVar5 = 3.051758593897169e-05;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = (double)CONCAT44(0x3f000000,fVar3);
        }
        else {
          dVar5 = -0.007812501833541319;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar10 == '\0') {
          dVar5 = (double)CONCAT44(*(float *)(ar5 + 1),fVar3);
        }
        else {
          dVar5 = ar5[1];
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar10 == '\0') {
          *(float *)((int)ar4 + 0x2c4) = fVar3;
        }
        else {
          *(double *)((int)ar4 + 0x2c4) = dVar6;
        }
      }
    }
    ar7_00 = 0;
    uVar2 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,8,0xffffffff,0);
    FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,uVar2,ar7_00);
    pdVar4 = ar4 + 0x14;
    if (cVar10 == '\0') {
      in_dr0 = (double)CONCAT44(0x43160000,*(float *)pdVar4);
      in_xd0 = dVar6;
    }
    else {
      in_xd0 = *pdVar4;
      in_dr0 = -8.625516875868561e-251;
    }
    if (cVar9 == '\0') {
      fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar3,SUB84(in_dr0,0) * fVar3);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 0x14) = SUB84(in_dr0,0);
    }
    else {
      ar4[0x14] = in_xd0;
    }
    FUN_8c03c314(ar4,pdVar4,0xa0,ar7_00);
    ar6_00 = ar4 + 0xd;
    *(int *)(ar4 + 0xd) = (int)*(float *)ar6_00 + 1;
  case 1.4013e-45:
    ar7 = s_CAnimBody_AdvanceFrame_033ba0;
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,s_CAnimBody_AdvanceFrame_033ba0);
    ar6_00 = (double *)((int)ar4 + 100);
    fVar3 = *(float *)ar6_00;
    if (fVar3 == 0.0) {
      Vec3_normalize((float *)((int)ar4 + 4),0,ar6_00,ar7);
      Vec3_assign((float *)((int)ar4 + 0x14),auStack_34,ar6_00,ar7);
      fVar3 = -NAN;
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    }
    if (ar6 != (double *)0x3) {
      if (ar6 == (double *)0x1) {
        *(float *)(ar4 + 0xd) = 4.2039e-45;
        Vec3_assign(ar4 + 0x46,(float *)((int)ar4 + 0x14),ar6_00,ar7);
switchD_8c07a6ce_caseD_3:
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar10 == '\0') {
          *(float *)(ar4 + 5) = 0.0;
        }
        else {
          ar4[5] = in_dr0;
        }
        pdVar4 = ar4 + 0x46;
        Vec3_assign(&fStack_24,pdVar4,ar6_00,ar7);
        fStack_20 = SUB84(in_dr0,0);
        if (cVar10 == '\0') {
          fStack_20 = *(float *)(ar4 + 0x46);
        }
        else {
          in_xd0 = ar4[0x46];
        }
        if (fStack_20 == 0.0) {
          if (cVar10 == '\0') {
            fStack_20 = *(float *)(ar4 + 0x47);
          }
          else {
            in_xd0 = ar4[0x47];
          }
          if ((fStack_20 == 0.0) && (fStack_24 = fStack_20, cVar10 == '\0')) {
            fStack_24 = 1.0;
          }
        }
        if (cVar10 == '\0') {
          fStack_20 = 0.0;
        }
        else {
          uStack_1c = 0;
        }
        uVar2 = Vec3_length(&fStack_24,pdVar4,ar6_00,ar7);
        Vec3_assign(&fStack_24,uVar2,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x3e4ccccd,*(float *)(ar4 + 0x48));
        }
        else {
          in_xd0 = ar4[0x48];
          dVar6 = 3.57011700451707e-312;
        }
        if (cVar9 == '\0') {
          fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x48) = fVar3;
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          ar4[0x48] = in_xd0;
          in_xd0 = ar4[0x48];
        }
        if (cVar9 != '\0' || 1.0 <= fVar3) {
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x48) = 1.0;
          }
          else {
            ar4[0x48] = (double)CONCAT44(0x3f800000,fVar3);
          }
        }
        if (cVar10 == '\0') {
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (cVar9 == '\0') {
          dVar6 = (double)CONCAT44(1.0 - fVar3,fVar3);
        }
        else {
          dVar6 = (double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3);
        }
        uVar2 = (undefined4)((ulonglong)dVar6 >> 0x20);
        uStack_88 = uVar2;
        if (cVar10 != '\0') {
          uStack_88 = SUB84(dVar6,0);
          auStack_84[0] = uVar2;
        }
        Vec3_scale(ar4 + 0x46,&uStack_88,ar6_00,ar7,auStack_44);
        if (cVar10 == '\0') {
          fStack_8c = *(float *)(ar4 + 0x48);
          dVar6 = (double)CONCAT44(fStack_8c,SUB84(dVar6,0));
        }
        else {
          dVar6 = ar4[0x48];
          fStack_8c = SUB84(dVar6,0);
          uStack_88 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        fVar3 = SUB84(dVar6,0);
        Vec3_scale(&fStack_24,&fStack_8c,ar6_00,ar7,auStack_54);
        Vec3_add(auStack_44,auStack_54,ar6_00,ar7,auStack_64);
        Vec3_assign((float *)((int)ar4 + 0x14),auStack_64,ar6_00,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
        if (cVar10 == '\0') {
          fVar3 = *(float *)(ar4 + 0x48);
        }
        else {
          in_xd0 = ar4[0x48];
        }
        if (fVar3 == 1.0) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          uVar2 = 0x13;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x13,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7);
          dVar6 = (double)(ulonglong)(uint)fVar3;
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x48) = 0.0;
          }
          else {
            ar4[0x48] = dVar6;
          }
          *(float *)((int)ar4 + 100) = 1.4013e-45;
          *(float *)(ar4 + 0xd) = 0.0;
          FUN_8c0230f0((float *)((int)ar4 + 0x14),uVar2,ar6_00,ar7,auStack_74);
          Vec3_assign((float *)((int)ar4 + 0x14),auStack_74,ar6_00,ar7);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
          (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,uVar2,ar6_00,ar7);
          FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7);
          pdVar4 = ar5;
          (**(code **)(*in_stack_00000000 + 0x128))(in_stack_00000000,ar5,ar6_00,ar7);
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(float *)((int)ar4 + 0x7c));
          }
          else {
            in_xd0 = *(double *)((int)ar4 + 0x7c);
          }
          if (cVar9 == '\0') {
            fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar6 + dVar6,0);
          }
          if (cVar10 == '\0') {
            *(float *)((int)ar5 + 4) = fVar3;
          }
          else {
            *(double *)((int)ar5 + 4) = in_xd0;
          }
          FUN_8c030f2c((float *)((int)ar4 + 0x1fc),pdVar4,ar6_00,ar7);
        }
      }
      else if (ar6 == (double *)0x2) {
        *(float *)(ar4 + 0x56) = 0.0;
        *(float *)((int)ar4 + 0x2b4) = 0.0;
        *(float *)(ar4 + 0xd) = 5.60519e-45;
      }
      else {
        Vec3_length_sq((float *)((int)ar4 + 4),fVar3,ar6_00,ar7);
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x3f4ccccd,(int)((ulonglong)in_dr0 >> 0x20));
        }
        else {
          dVar6 = 6.2863545074132e-312;
          in_xd0 = in_dr0;
        }
        if (cVar9 == '\0') {
          fVar3 = (float)((ulonglong)dVar6 >> 0x20);
          in_dr0 = (double)CONCAT44(fVar3,SUB84(dVar6,0) * fVar3);
        }
        else {
          in_dr0 = dVar6 * dVar6;
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 5) = SUB84(in_dr0,0);
        }
        else {
          ar4[5] = in_xd0;
        }
        FUN_8c031b68(ar4,(int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c,ar6_00,ar7);
        *(float *)((int)ar4 + 0x44) = 1.4013e-45;
        *(float *)(ar4 + 8) = 7.00649e-45;
        *(int *)(ar4 + 0xd) = (int)*(float *)(ar4 + 0xd) + 1;
        pdVar4 = ar4;
switchD_8c07a6ce_caseD_2:
        (**(code **)(*in_stack_00000000 + 0x184))(in_stack_00000000,pdVar4,ar6_00,ar7);
        fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar10 == '\0') {
          fVar8 = 900.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar3 = 900.0;
          fVar8 = 9.64093e-43;
        }
        if (cVar9 != '\0' || fVar8 <= fVar3) {
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,pdVar4,ar6_00,ar7);
          FUN_8c032ab0(ar4,pdVar4,ar6_00,ar7);
          if (cVar10 == '\0') {
            fVar3 = *(float *)(ar4 + 5);
          }
          else {
            in_dr0 = ar4[5];
          }
          if (cVar9 == '\0') {
            fVar3 = fVar3 * fVar8;
          }
          else {
            fVar3 = SUB84((double)CONCAT44(fVar8,fVar3) * (double)CONCAT44(fVar8,fVar3),0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 5) = fVar3;
          }
          else {
            ar4[5] = in_dr0;
          }
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(*(float *)(ar4 + 5),
                                     *(undefined4 *)
                                      ((int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f13c));
          }
          else {
            dVar6 = ar4[5];
          }
          if (cVar9 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
            *(float *)((int)ar4 + 100) = 0.0;
            *(float *)(ar4 + 0xd) = 0.0;
            (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,pdVar4,ar6_00,ar7);
            iVar1 = (int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
            FUN_8c031b68(ar4,iVar1,ar6_00,ar7);
            FUN_8c030eb8((float *)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7);
          }
        }
        else {
          *(float *)(ar4 + 0x56) = 0.0;
          *(float *)((int)ar4 + 0x2b4) = 0.0;
          *(float *)(ar4 + 0xd) = 5.60519e-45;
          *(float *)(ar4 + 0x43) = 2.38221e-44;
        }
      }
    }
    break;
  case 2.8026e-45:
    goto switchD_8c07a6ce_caseD_2;
  case 4.2039e-45:
    goto switchD_8c07a6ce_caseD_3;
  case 5.60519e-45:
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(0x3f666666,*(float *)(ar4 + 5));
    }
    else {
      in_xd0 = ar4[5];
      dVar6 = -0.00781250184518285;
    }
    if (cVar9 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar10 == '\0') {
      *(float *)(ar4 + 5) = fVar3;
    }
    else {
      ar4[5] = in_xd0;
    }
    Vec3_ctor_xyz(auStack_84,pdVar4,ar6_00,ar7);
    ar6_00 = (double *)0x1;
    iVar1 = FUN_8c0811b4(ar4,auStack_84,1,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    if (iVar1 == 0) {
      pdVar4 = ar4 + 5;
      if (cVar10 == '\0') {
        *(float *)pdVar4 = 0.0;
      }
      else {
        *pdVar4 = (double)(ulonglong)(uint)fVar3;
      }
      *(int *)(ar4 + 0xd) = (int)*(float *)(ar4 + 0xd) + 1;
      *(float *)((int)ar4 + 0x2b4) = 0.0;
      *(float *)((int)ar4 + 100) = 0.0;
      iVar1 = rand_range(ar4,0,100,pdVar4);
      if (iVar1 < 0x1f) {
        if (*(float *)(ar4 + 0x25) == 8.40779e-45) {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x26,0xffffffff,0);
        }
        else {
          ar7 = (code *)0x0;
          ar6_00 = (double *)0xffffffff;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0x30,0xffffffff,0);
        }
      }
      else {
        ar7 = (code *)0x0;
        ar6_00 = (double *)0xffffffff;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,0xb0,ar6_00,ar7);
    }
    break;
  case 7.00649e-45:
    ar5_00 = FUN_8c032ab0;
    FUN_8c032ab0(ar4,FUN_8c032ab0,ar6_00,ar7);
    iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0x16,ar5_00,ar6_00,ar7);
    if (iVar1 == 1) {
      *(float *)(ar4 + 0xd) = 0.0;
      (**(code **)((int)*(float *)ar4 + 0x2c))(ar4,1,ar6_00,ar7);
      iVar1 = (int)*(float *)(ar4 + 0x25) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar1,ar6_00,ar7);
      FUN_8c030eb8((float *)((int)ar4 + 0x1fc),iVar1,ar6_00,ar7);
      ar7 = (code *)0x0;
      ar6_00 = (double *)0xffffffff;
      uVar2 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0x16,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0x16,uVar2,ar6_00,ar7);
    }
  }
switchD_8c07a6ce_default:
  uVar2 = Vec3_dtor(&fStack_24,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07a68c\n.set _FUN_8c07a68c, _FUN_8c07a68c_def\n");
//@unit 8c07af10
#include "../decls.h"
undefined4 FUN_8c07af10_def(int ar4,int ar5,int ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int ar6_00;
  int *ar7_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  double in_dr0;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 in_fr5;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(ar4 + 0x214) = 0;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfd | 2;
  uVar3 = 1;
  ar5_00 = 0xb;
  if ((5 < *(int *)(ar4 + 0x128)) && (ar6 == 1)) {
    ar5_00 = 0x12;
  }
  iVar2 = *(int *)(ar4 + 300);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return 1;
          }
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 1:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00);
      uVar4 = SUB84(in_dr0,0);
      if (iVar1 == 1) {
        iVar1 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar10 == '\0') {
          bVar9 = (float)((ulonglong)dVar8 >> 0x20) < 0.0;
        }
        else {
          bVar9 = dVar8 < (double)(ulonglong)uVar4;
        }
        if ((bVar9) && (cVar11 != '\0')) {
          uVar4 = 0x4f800000;
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
        if (ar6 == 0) {
          FUN_8c03c314(ar4,ar5_00,ar6_00,ar7_00);
          if (cVar11 == '\0') {
            uVar6 = CONCAT44(0xbba3d70a,uVar4);
            *(undefined4 *)(ar4 + 0xa0) = 0xbba3d70a;
          }
          else {
            uVar6 = 0x298bba3d70a;
            *(undefined8 *)(ar4 + 0xa0) = 0x298bba3d70a;
          }
          *(undefined4 *)(ar4 + 0x298) = 0;
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x2c) = uVar6 & 0xffffffff;
          }
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(ar4 + 300) = 5;
          uVar3 = 0;
        }
      }
      break;
    case 2:
      (**(code **)(*ar7 + 0x184))(ar7,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
      }
      if (cVar10 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= SUB84(in_dr0,0)) {
        FUN_8c031748(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      (**(code **)(*ar7 + 0x184))(ar7,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)(ar5 + 4),SUB84(in_dr0,0));
      }
      else {
        uVar6 = *(ulonglong *)(ar5 + 4);
      }
      FUN_8c022d04(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      Vec3_length_sq(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x28) = (int)(uVar6 >> 0x20);
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = uVar6;
      }
      Vec3_length(ar4 + 0x14,iVar1,ar6_00,ar7_00);
      iVar2 = *(int *)(ar4 + 0x294);
      *(int *)(ar4 + 0x294) = iVar2 + 1;
      if (0x1517 < iVar2 + 1) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar6 & 0xffffffff;
        }
        FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0xa0) = 0x3d4ccccd;
        }
        else {
          *(undefined8 *)(ar4 + 0xa0) = 0x12c3d4ccccd;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      iVar1 = ar5;
      (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6_00,ar7_00);
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(in_dr0,0) + (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        fVar5 = SUB84(in_dr0 + in_dr0,0);
      }
      if (cVar11 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar5);
      }
      else {
        uVar7 = *(undefined8 *)(ar5 + 4);
      }
      if (cVar10 != '\0' || (float)((ulonglong)uVar7 >> 0x20) <= (float)uVar7) {
        FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031748(ar4,iVar1,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        uVar3 = 0;
      }
      break;
    case 5:
      FUN_8c031700(ar4,iVar1,ar6_00,ar7_00);
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07af10\n.set _FUN_8c07af10, _FUN_8c07af10_def\n");
//@unit 8c07b2d4
#include "../decls.h"
undefined4 FUN_8c07b2d4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int ar6_00;
  uint in_fr1;
  float fVar4;
  uint uVar7;
  double dVar5;
  double dVar6;
  undefined4 uVar8;
  float fVar9;
  undefined4 in_fr14;
  double in_xd0;
  char cVar10;
  char cVar11;
  float fStack_100;
  float fStack_fc;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_dc;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  double dStack_20;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  vec3_clear(ar4 + 0x200,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2b8) = 0;
  dVar5 = (double)(ulonglong)in_fr1;
  dVar6 = dVar5;
  if (cVar11 == '\0') {
    uStack_c8 = (double)((ulonglong)(*(uint*)((uchar*)&uStack_c8+4)) << 0x20);
    dVar6 = uStack_c8;
  }
  uStack_c8 = dVar6;
  fVar9 = 1.0;
  Vec3_ctor_zero(auStack_24,uVar3,ar6_00,ar7);
  uStack_cc = 0;
  Vec3_ctor_xyz(auStack_34,uVar3,ar6_00,ar7);
  iStack_d0 = FUN_8c023d04(ar6 + 0xa0,auStack_34,ar6_00,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
  if ((iStack_d0 != 0) && ((int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1f) < 0)) {
    Vec3_ctor_xyz(auStack_44,uVar3,ar6_00,ar7);
    iStack_d4 = FUN_8c023d04(ar6 + 0xa0,auStack_44,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7);
    if (iStack_d4 != 0) {
      Vec3_ctor_xyz(auStack_54,uVar3,ar6_00,ar7);
      uVar3 = FUN_8c023d04(ar6 + 0xa0,auStack_54,ar6_00,ar7);
      uStack_dc = (double)CONCAT44(uVar3,(undefined4)uStack_dc);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7);
      if ((*(uint*)((uchar*)&uStack_dc+4)) != 0) {
        Vec3_length_sq(ar4 + 4,uVar3,ar6_00,ar7);
        uVar7 = (uint)((ulonglong)dVar5 >> 0x20);
        dVar6 = dVar5;
        dVar1 = dVar5;
        if (cVar11 == '\0') {
          uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),uVar7);
          dVar5 = (double)(ulonglong)uVar7;
          dVar6 = in_xd0;
          dVar1 = uStack_c8;
        }
        uStack_c8 = dVar1;
        dVar1 = uStack_c8;
        if ((cVar10 == '\0' && SUB84(dVar5,0) < 1.0) &&
           (dVar1 = (double)CONCAT44(0x3f800000,SUB84(dVar5,0)), cVar11 == '\0')) {
          uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),0x3f800000);
          dVar1 = uStack_c8;
        }
        uStack_c8 = dVar1;
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x3e99999a,(undefined4)uStack_c8);
        }
        else {
          dVar5 = 3.3155023767404e-312;
          dVar6 = uStack_c8;
        }
        if (cVar10 == '\0') {
          fVar9 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar9 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          uStack_dc = (double)CONCAT44((*(uint*)((uchar*)&uStack_dc+4)),fVar9);
          dVar6 = uStack_dc;
        }
        uStack_dc = dVar6;
        Vec3_scale(ar6 + 0xa0,&uStack_dc,ar6_00,ar7,auStack_64);
        Vec3_assign(ar4 + 0x200,auStack_64,ar6_00,ar7);
        Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x2b8) = 1;
        goto LAB_8c07b7a8;
      }
    }
  }
  if ((*(int *)(ar6 + 0x68) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1e))) {
    if ((*(int *)(ar6 + 100) == 0) || (-1 < (int)((uint)*(byte *)(ar4 + 0x1fc) << 0x1d))) {
      uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      return uVar3;
    }
    iVar2 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7);
    if ((iVar2 == 0xf) ||
       (iVar2 = get_field_24_05c284(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7), iVar2 == 10)) {
      uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      return uVar3;
    }
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    (**(code **)(*(int *)(*(int *)(ar6 + 0x50) + 8) + 0x170))(*(int *)(ar6 + 0x50),uVar3,ar6_00,ar7)
    ;
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    fStack_fc = fVar4;
    if (cVar11 != '\0') {
      fStack_fc = SUB84(dVar5,0);
      fVar4 = fVar9;
    }
    FUN_8c02f670(*(undefined4 *)(ar6 + 0x50),uVar3,ar6_00,ar7,auStack_94);
    Vec3_sub(ar5,auStack_94,ar6_00,ar7,auStack_a4);
    Vec3_assign(ar4 + 0x200,auStack_a4,ar6_00,ar7);
    Vec3_dtor(auStack_a4,0xffffffff,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_94,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7);
    fVar9 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fVar9,*(undefined4 *)(ar4 + 0x48));
      fStack_100 = fVar9;
    }
    else {
      fStack_100 = SUB84(dVar5,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      fStack_fc = fVar9;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + (double)CONCAT44(in_fr14,fVar4),0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_100,fVar4);
    }
    else {
      dVar5 = (double)CONCAT44(fStack_fc,fStack_100);
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),fVar9);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    dVar5 = uStack_c8;
    if ((cVar10 == '\0' && fVar9 < 1.0) && (dVar5 = (double)(ulonglong)(uint)fVar9, cVar11 == '\0'))
    {
      uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff00000000);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7);
    Vec3_scale(ar4 + 0x200,&uStack_c8,ar6_00,ar7,auStack_b4);
    Vec3_scale(auStack_b4,&DAT_8c1379a4,ar6_00,ar7,(int)&uStack_c8 + 4);
    Vec3_assign(ar4 + 0x200,(int)&uStack_c8 + 4,ar6_00,ar7);
    Vec3_dtor((int)&uStack_c8 + 4,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_b4,0xffffffff,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x2b8) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x1d4) = 1;
    if (cVar11 == '\0') {
      fVar9 = *(float *)(*(int *)(ar6 + 0x68) + 0x158);
    }
    Vec3_assign(auStack_24,*(int *)(ar6 + 0x68) + 4,ar6_00,ar7);
    dVar6 = dStack_20;
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+0)),SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + fVar9,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 + (double)CONCAT44(in_fr14,fVar9);
    }
    dVar5 = dVar6;
    if (cVar11 == '\0') {
      dStack_20 = (double)CONCAT44((*(uint*)((uchar*)&dStack_20+4)),(int)((ulonglong)dVar6 >> 0x20));
      dVar5 = dStack_20;
    }
    dStack_20 = dVar5;
    Vec3_sub(ar5,auStack_24,ar6_00,ar7,auStack_74);
    Vec3_scale(auStack_74,&DAT_8c13799c,ar6_00,ar7,auStack_84);
    Vec3_assign(ar4 + 0x200,auStack_84,ar6_00,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6_00,ar7);
    uVar3 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7);
    Vec3_length_sq(ar4 + 0x200,uVar3,ar6_00,ar7);
    uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(uVar8,*(undefined4 *)(ar4 + 0x48));
      uStack_f0 = uVar8;
    }
    else {
      uStack_f0 = SUB84(dVar6,0);
      in_xd0 = *(double *)(ar4 + 0x48);
      uStack_ec = uVar8;
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar6,0) + fVar9;
    }
    else {
      fVar9 = SUB84(dVar6 + (double)CONCAT44(in_fr14,fVar9),0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(uStack_f0,fVar9);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_ec,uStack_f0);
    }
    if (cVar10 == '\0') {
      fVar9 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar5 - dVar5,0);
    }
    dVar5 = in_xd0;
    if (cVar11 == '\0') {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),fVar9);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    dVar5 = uStack_c8;
    if ((cVar10 == '\0' && fVar9 < 1.0) &&
       (dVar5 = (double)CONCAT44(0x3f800000,fVar9), cVar11 == '\0')) {
      uStack_c8 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c8+4)),0x3f800000);
      dVar5 = uStack_c8;
    }
    uStack_c8 = dVar5;
    Vec3_length(ar4 + 0x200,uVar3,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&uStack_c8,ar6_00,ar7);
    FUN_8c023bf4(ar4 + 0x200,&DAT_8c1379a0,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x2b8) = 1;
  }
LAB_8c07b7a8:
  uVar3 = Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c07b2d4\n.set _FUN_8c07b2d4, _FUN_8c07b2d4_def\n");
//@unit 8c07b7d0
#include "../decls.h"
undefined4 FUN_8c07b7d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined4 in_fr1;
  char cVar4;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar4 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  uVar2 = ar5;
  if (iVar1 == 0) {
    ar7_00 = 0;
    uVar3 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
    uVar3 = s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,4,uVar3,ar7_00);
    ar5_00 = 0;
    rand_range(ar4,0,uVar3,ar7_00);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar3,ar7_00);
    if (cVar4 != '\0') {
      in_fr1 = 0x41700000;
    }
    FUN_8c03263c(ar4,ar6,uVar3,ar7_00);
    Vec3_add(auStack_20,ar5,uVar3,ar7_00,auStack_30);
    Vec3_assign(ar4 + 0x54,auStack_30,uVar3,ar7_00);
    Vec3_dtor(auStack_30,0xffffffff,uVar3,ar7_00);
    Vec3_dtor(auStack_20,0xffffffff,uVar3,ar7_00);
    if (cVar4 != '\0') {
      in_fr1 = 0x40400000;
    }
    iVar1 = ar4 + 0x54;
    FUN_8c032788(ar4,iVar1,ar7,s0);
    if (cVar4 == '\0') {
      uVar3 = 0x40000000;
      *(undefined4 *)(ar4 + 0x34) = 0x40000000;
    }
    else {
      in_fr1 = 0x40000000;
      uVar3 = 0x42700000;
      *(undefined8 *)(ar4 + 0x34) = 0x4270000040000000;
    }
    FUN_8c032ab0(ar4,iVar1,ar7,s0);
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x38) = uVar3;
    }
    else {
      *(ulonglong *)(ar4 + 0x38) = CONCAT44(uVar3,in_fr1);
    }
    FUN_8c032ab0(ar4,iVar1,ar7,s0);
    ar6 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,ar6,s0);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    s0 = ar7;
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
        iVar1 = FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
        if (iVar1 < 1) {
          return 1;
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        return 1;
      }
      if (iVar1 != 3) {
        return 1;
      }
      iVar1 = ar4 + 0x54;
      FUN_8c031764(ar4,iVar1,ar5,ar7);
      if (*(int *)(ar4 + 0x40) != 0) {
        return 1;
      }
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar5,ar7);
      if (iVar1 != 1) {
        return 1;
      }
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar5,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      return 0;
    }
  }
  FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,s0);
  FUN_8c031764(ar4,ar4 + 0x54,ar5,s0);
  if (*(int *)(ar4 + 0x40) == 4) {
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07b7d0\n.set _FUN_8c07b7d0, _FUN_8c07b7d0_def\n");
//@unit 8c07baa0
#include "../decls.h"
undefined4 FUN_8c07baa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_stack_00000000;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar6;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c031de8(ar4,0,ar6_00,ar7_00);
    return uVar2;
  }
  if (*(int *)(ar4 + 0x1d4) == 1) {
    Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7_00);
    FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x2a0) = 2;
    return 0;
  }
  iVar1 = *(int *)(ar4 + 0x134);
  if (iVar1 == 0) {
    FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00);
    FUN_8c032ab0(ar4,uVar2,ar6_00,ar7_00);
    Vec3_ctor_xyz(auStack_2c,uVar2,ar6_00,ar7_00);
    Vec3_sub(ar6,auStack_2c,ar6_00,ar7_00,auStack_3c);
    Vec3_assign(ar4 + 0x54,auStack_3c,ar6_00,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    ar7_00 = in_stack_00000000;
    iVar1 = FUN_8c0329ac(ar4,ar4 + 0x54,ar7,in_stack_00000000);
    if (iVar1 == 0) {
      FUN_8c032788(ar4,ar4 + 0x54,ar7,in_stack_00000000);
      ar7_00 = in_stack_00000000;
    }
    if (*(int *)(ar4 + 0x21c) == 1) {
      *(undefined4 *)(ar4 + 0x134) = 2;
    }
    else {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      if (((*(int *)(ar4 + 0x128) < 6) || (iVar1 = rand_range(ar4,0,100,ar7_00), 10 < iVar1)) ||
         (*(int *)(ar4 + 0x124) == 0x21)) goto LAB_8c07bd04;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 2;
    }
  }
  else {
    if (iVar1 == 1) {
LAB_8c07bd04:
      iVar1 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7_00);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
      if (cVar4 == '\0') {
        *(undefined4 *)(ar4 + 0x38) = 0x41f00000;
        return 1;
      }
      *(undefined8 *)(ar4 + 0x38) = 0xeed01f41f00000;
      return 1;
    }
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x2b8) = 0;
      uVar2 = ar6;
      iVar1 = FUN_8c07f8e0(ar4,ar5,ar6,in_stack_00000000);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x134) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      Vec3_assign(ar4 + 0x270,ar6,uVar2,in_stack_00000000);
      FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,in_stack_00000000);
      *(undefined4 *)(ar4 + 0x2a0) = 2;
      return 0;
    }
  }
  uVar2 = ar6;
  iVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7_00);
  if ((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
    Vec3_assign(ar4 + 0x270,ar6,uVar2,ar7_00);
    FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar2,ar7_00);
    *(undefined4 *)(ar4 + 0x134) = 0;
    *(undefined4 *)(ar4 + 0x2a0) = 2;
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07baa0\n.set _FUN_8c07baa0, _FUN_8c07baa0_def\n");
//@unit 8c07bec4
#include "../decls.h"
undefined4 FUN_8c07bec4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  ar5_00 = ar6;
  ar6_00 = ar6;
  uVar2 = ar7;
  iVar1 = FUN_8c023cd4(ar4 + 0x270,ar6,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c031de8(ar4,0x13,ar6_00,uVar2);
    return uVar2;
  }
  Vec3_ctor_xyz(auStack_28,ar5_00,ar6_00,uVar2);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2);
    FUN_8c032ab0(ar4,ar5_00,ar6_00,uVar2);
    Vec3_ctor_xyz(auStack_38,ar5_00,ar6_00,uVar2);
    Vec3_sub(ar6,auStack_38,ar6_00,uVar2,auStack_48);
    Vec3_assign(ar4 + 0x54,auStack_48,ar6_00,uVar2);
    Vec3_dtor(auStack_48,0xffffffff,ar6_00,uVar2);
    Vec3_dtor(auStack_38,0xffffffff,ar6_00,uVar2);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x43340000,*(undefined4 *)(ar4 + 0x7c));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x7c);
      dVar5 = -7.933010938730413e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x58) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x58) = in_xd0;
    }
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      ar6_00 = auStack_28;
      iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,ar7);
      uVar2 = ar7;
      if ((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
        Vec3_assign(ar4 + 0x270,ar6,ar6_00,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2a0) = 2;
        uVar3 = 0;
        uVar2 = ar7;
      }
    }
    goto LAB_8c07c05e;
  }
  ar6_00 = (undefined1 *)(ar4 + 0x54);
  iVar1 = FUN_8c0755e0(ar4,ar5,ar6_00,ar7);
  uVar2 = ar7;
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
LAB_8c07c05e:
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,uVar2);
  return uVar3;
}

__asm__(".globl _FUN_8c07bec4\n.set _FUN_8c07bec4, _FUN_8c07bec4_def\n");
//@unit 8c07c0b8
#include "../decls.h"
undefined4 FUN_8c07c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  int iVar2;
  int ar6_00;
  undefined8 in_dr0;
  char cVar3;
  undefined8 uStack_64;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar3 = '\0';
  uStack_c = 1;
  iVar2 = *(int *)(ar4 + 300);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    in_dr0 = CONCAT44(0x41700000,(int)in_dr0);
    *(undefined4 *)(ar4 + 0x38) = 0x41700000;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      FUN_8c032ab0(ar4,ar5,ar6,ar7);
      ar6_00 = ar4 + 0x54;
      iVar2 = pure_virtual_stub(ar4,ar5,ar6_00,ar7);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar2,ar6_00,ar7);
      FUN_8c033530(ar4,iVar2,ar6_00,ar7);
      Vec3_assign(ar4 + 0x54,(int)&uStack_64 + 4,ar6_00,ar7);
      Vec3_dtor((int)&uStack_64 + 4,0xffffffff,ar6_00,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      return 1;
    }
    if (iVar2 != 3) {
      return 1;
    }
    iVar2 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    return 0;
  }
  FUN_8c032ab0(ar4,ar5,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar3 == '\0') {
    uStack_64 = CONCAT44((*(uint*)((uchar*)&uStack_64+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_64;
  }
  uStack_64 = uVar1;
  iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    Vec3_scale(ar4 + 0x14,&DAT_8c1379ac,ar6,ar7,auStack_20);
    Vec3_scale(auStack_20,ar4 + 0x48,ar6,ar7,auStack_30);
    Vec3_scale(auStack_30,&DAT_8c1379b0,ar6,ar7,auStack_40);
    Vec3_add(auStack_40,ar5,ar6,ar7,auStack_50);
    Vec3_assign(ar4 + 0x54,auStack_50,ar6,ar7);
    Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07c0b8\n.set _FUN_8c07c0b8, _FUN_8c07c0b8_def\n");
//@unit 8c07c318
#include "../decls.h"
undefined4 FUN_8c07c318_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar6;
  double dVar7;
  double dVar8;
  double in_xd0;
  char cVar9;
  char cVar10;
  undefined8 uStack_a4;
  undefined8 uStack_90;
  undefined8 uStack_84;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    uVar2 = ar6;
    ar6_00 = ar6;
    ar7_00 = ar7;
    Vec3_sub(ar5,ar6,ar6,ar7,auStack_44);
    uVar2 = Vec3_length(auStack_44,uVar2,ar6_00,ar7_00);
    Vec3_ctor_copy(auStack_24,uVar2,ar6_00,ar7_00);
    uVar5 = 0xffffffff;
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    iVar3 = *(int *)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(ar4 + 0x44) == 1) {
        FUN_8c031fc4(ar4,uVar5,ar6_00,ar7_00);
      }
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      dVar8 = *pdVar4;
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((*(uint*)((uchar*)&uStack_84+4)),fVar6);
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),uStack_20);
        dVar8 = in_xd0;
      }
      else {
        dVar8 = (double)CONCAT44(uStack_1c,uStack_20);
        dVar7 = *(double *)(ar4 + 0x18);
        uStack_84 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      dVar7 = uStack_84;
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44((undefined4)uStack_84,fVar6);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x18),fVar6);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x18);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x18) = fVar6;
      }
      else {
        *(double *)(ar4 + 0x18) = dVar8;
      }
      vec3_copy_8c02b5fc(auStack_50,ar7,ar6_00,ar7_00);
      FUN_8c023484(ar4 + 0x14,auStack_50,ar6_00,ar7_00,auStack_60);
      Vec3_assign(ar4 + 0x14,auStack_60,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      uVar5 = 0xffffffff;
      object_dtor_delete(auStack_50,0xffffffff,ar6_00,ar7_00);
      Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7_00);
      pdVar4 = (double *)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        dVar8 = *pdVar4;
        pdVar4 = (double *)(ar4 + 0x30);
      }
      uStack_90 = *pdVar4;
      if (SUB84(uStack_90,0) != (float)((ulonglong)uStack_90 >> 0x20)) {
        if (cVar10 == '\0') {
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x28);
        }
        else {
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = uStack_90;
        }
        uStack_90 = (double)((ulonglong)dVar7 & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar7,0)) {
          if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            dVar8 = *(double *)(ar4 + 0x28);
            dVar7 = *(double *)(ar4 + 0x24);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar10 == '\0') {
            dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c),fVar6);
          }
          else {
            dVar7 = *(double *)(ar4 + 0x2c);
          }
          if (cVar9 == '\0') {
            fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
          }
          else {
            fVar6 = SUB84(dVar7 + dVar7,0);
          }
          pdVar4 = (double *)(ar4 + 0x30);
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x2c) = fVar6;
            pdVar4 = (double *)(ar4 + 0x2c);
          }
          else {
            *(double *)(ar4 + 0x2c) = dVar8;
            dVar8 = *(double *)(ar4 + 0x2c);
          }
          uStack_90 = *pdVar4;
          if (cVar9 == '\0' && (float)((ulonglong)uStack_90 >> 0x20) < SUB84(uStack_90,0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(ar4 + 0x30);
              uStack_90 = (double)CONCAT44(uVar5,SUB84(uStack_90,0));
              *(undefined4 *)(ar4 + 0x2c) = uVar5;
            }
            else {
              uStack_90 = *(double *)(ar4 + 0x30);
              *(double *)(ar4 + 0x2c) = uStack_90;
            }
          }
        }
      }
      FUN_8c022fc0(ar6,ar5,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        uStack_90 = (double)CONCAT44(uVar2,(int)((ulonglong)uStack_90 >> 0x20));
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        dVar8 = *(double *)(ar4 + 0x28);
        dVar7 = *(double *)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        uStack_90 = (double)CONCAT44((undefined4)uStack_90,fVar6);
      }
      if (cVar9 != '\0' || (float)((ulonglong)uStack_90 >> 0x20) <= SUB84(uStack_90,0)) {
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
          dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_90,0));
          dVar8 = *(double *)(ar4 + 0x28);
          dVar7 = *(double *)(ar4 + 0x38);
        }
        if (cVar9 == '\0') {
          fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x3c) = fVar6;
        }
        else {
          *(double *)(ar4 + 0x3c) = dVar8;
        }
        *(undefined4 *)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7_00,auStack_70);
      uVar2 = Vec3_length(auStack_70,uVar5,ar6_00,ar7_00);
      Vec3_ctor_copy(auStack_34,uVar2,ar6_00,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x2c);
        dVar8 = *(double *)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        uStack_84 = (double)CONCAT44((*(uint*)((uchar*)&uStack_84+4)),fVar6);
        dVar8 = uStack_84;
      }
      uStack_84 = dVar8;
      Vec3_scale(auStack_34,&uStack_84,ar6_00,ar7_00,(int)&uStack_84 + 4);
      FUN_8c023aa0(ar4 + 0x14,(int)&uStack_84 + 4,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&uStack_84 + 4,0xffffffff,ar6_00,ar7_00);
      Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7_00);
      if (cVar10 == '\0') {
        dVar8 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x28);
        dVar8 = *(double *)(ar4 + 0x3c);
      }
      if (cVar9 == '\0') {
        fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 - dVar8,0);
      }
      uStack_a4 = in_xd0;
      if (cVar10 == '\0') {
        uStack_a4 = (double)CONCAT44(ar4,fVar6);
      }
      if (cVar10 == '\0') {
        *(undefined4 *)((*(uint*)((uchar*)&uStack_a4+4)) + 0x28) = (undefined4)uStack_a4;
        uStack_a4 = (double)((ulonglong)uStack_a4 & 0xffffffff);
      }
      else {
        *(double *)((*(uint*)((uchar*)&uStack_a4+4)) + 0x28) = uStack_a4;
      }
      if (cVar9 != '\0' || SUB84(uStack_a4,0) <= 0.0) {
        *(undefined4 *)(ar4 + 0x40) = 0;
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)uStack_a4 & 0xffffffff;
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x2c) = 0x3f800000;
        }
        else {
          *(undefined8 *)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84(uStack_a4,0));
        }
      }
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c07c318\n.set _FUN_8c07c318, _FUN_8c07c318_def\n");
//@unit 8c07c5f8
#include "../decls.h"
undefined4 FUN_8c07c5f8_def(int ar4,int ar5,undefined4 ar6,undefined1 *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 ar6_00;
  undefined1 *ar7_00;
  undefined4 uVar4;
  uint uVar5;
  undefined8 in_dr0;
  ulonglong uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  int *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_fffffea8;
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  *(undefined4 *)(ar4 + 0x214) = 0;
  uVar4 = 1;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_38,iVar1,ar6_00,ar7_00);
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if (in_stack_00000004 == 1) {
        uVar4 = 0;
        break;
      }
      *(undefined4 *)(ar4 + 0x2ac) = 1;
      FUN_8c031748(ar4,iVar1 * 4,ar6_00,ar7_00);
      FUN_8c03f39c(in_stack_0000000c,FUN_8c03f39c,ar6_00,ar7_00);
      Vec3_scale(ar7,&DAT_8c1379b4,ar6_00,ar7_00,auStack_48);
      Vec3_add(ar6,auStack_48,ar6_00,ar7_00,auStack_58);
      Vec3_sub(auStack_58,ar5,ar6_00,ar7_00,auStack_68);
      Vec3_normalize(auStack_68,Vec3_normalize,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x54,auStack_78,ar6_00,ar7_00);
      Vec3_dtor(auStack_78,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_68,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      Vec3_ctor_copy(auStack_88,ar4 + 0x54,ar6_00,ar7_00);
      ar6_00 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_88,1,ar7_00);
      Vec3_dtor(auStack_88,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      break;
    case 2:
      Vec3_ctor_copy(auStack_98,ar7,ar6_00,ar7_00);
      ar7_00 = auStack_98;
      iVar1 = FUN_8c032d48(ar4,ar5,ar6,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_98,0xffffffff,ar6,ar7_00);
      ar6_00 = ar6;
      if (iVar1 == 0) {
        vec3_clear(ar4 + 0x244,uVar2,ar6,ar7_00);
        *(undefined4 *)(ar4 + 0x298) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar6_00 = ar6;
      }
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
      Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
      break;
    case 3:
      Vec3_ctor_xyz(auStack_a8,iVar1 * 4,ar6_00,ar7_00);
      ar6_00 = 1;
      iVar1 = FUN_8c0811b4(ar4,auStack_a8,1,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_a8,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        Vec3_ctor_xyz(auStack_b8,uVar2,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,auStack_b8,ar6_00,ar7_00);
        Vec3_dtor(auStack_b8,0xffffffff,ar6_00,ar7_00);
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar2 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 4:
      uVar2 = 0x11;
      iVar1 = FUN_8c031de8(ar4,0x11,ar6_00,ar7_00);
      if (iVar1 == 0) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = 0xffffffff;
        uVar4 = 0x13;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        uVar5 = (uint)in_dr0;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        uVar6 = (ulonglong)uVar5;
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = uVar6;
        }
        iVar1 = ar4 + 0x14;
        Vec3_assign(ar4 + 0x80,iVar1,ar6_00,ar7_00);
        if (cVar8 == '\0') {
          uVar7 = CONCAT44(0x40000000,(int)uVar6);
          *(undefined4 *)(ar4 + 0x38) = 0x40000000;
        }
        else {
          uVar7 = 0x8c03c31440000000;
          *(undefined8 *)(ar4 + 0x38) = 0x8c03c31440000000;
        }
        FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x298) = 1;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 0x2ac) = 0;
        *(undefined4 *)(ar4 + 100) = 1;
        *(undefined4 *)(ar4 + 0x214) = 1;
        uVar4 = 0;
        (**(code **)(*in_stack_00000008 + 0x128))(in_stack_00000008,ar5,ar6_00,ar7_00);
        if (cVar8 == '\0') {
          *(int *)(ar5 + 4) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(undefined8 *)(ar5 + 4) = uVar7;
        }
      }
      else {
        iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6_00,ar7_00);
        if (iVar1 == 0x11) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6_00,ar7_00,in_stack_fffffea8);
          FUN_8c034384(ar4 + 0xb0,
                       *(undefined4 *)(&DAT_8c1377f8 + (*(int *)(ar4 + 0x128) + -6) * 0x18),ar6_00,
                       ar7_00);
          Vec3_assign(auStack_28,auStack_c8,ar6_00,ar7_00);
          Vec3_dtor(auStack_c8,0xffffffff,ar6_00,ar7_00);
          Vec3_sub(auStack_28,ar4 + 0x244,ar6_00,ar7_00,auStack_d8);
          Vec3_assign(auStack_38,auStack_d8,ar6_00,ar7_00);
          Vec3_dtor(auStack_d8,0xffffffff,ar6_00,ar7_00);
          puVar3 = auStack_28;
          Vec3_assign(ar4 + 0x244,puVar3,ar6_00,ar7_00);
          Vec3_ctor_xyz(auStack_e8,puVar3,ar6_00,ar7_00);
          iVar1 = FUN_8c023d04(auStack_38,auStack_e8,ar6_00,ar7_00);
          Vec3_dtor(auStack_e8,0xffffffff,ar6_00,ar7_00);
          uVar2 = 0;
          if (iVar1 != 0) {
            vec3_copy_8c02b5fc(auStack_f4,in_stack_00000000,ar6_00,ar7_00);
            puVar3 = auStack_f4;
            FUN_8c023484(auStack_38,puVar3,ar6_00,ar7_00,auStack_104);
            uVar2 = Vec3_length(auStack_104,puVar3,ar6_00,ar7_00);
            Vec3_assign(ar4 + 0x14,uVar2,ar6_00,ar7_00);
            Vec3_dtor(auStack_104,0xffffffff,ar6_00,ar7_00);
            uVar2 = 0xffffffff;
            object_dtor_delete(auStack_f4,0xffffffff,ar6_00,ar7_00);
          }
          Vec3_length_sq(auStack_38,uVar2,ar6_00,ar7_00);
          if (cVar8 == '\0') {
            *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_dr0;
          }
        }
      }
    }
  }
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c07c5f8\n.set _FUN_8c07c5f8, _FUN_8c07c5f8_def\n");
//@unit 8c07cce0
#include "../decls.h"
undefined4 FUN_8c07cce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  undefined4 uVar5;
  undefined8 in_dr0;
  double dVar6;
  double dVar7;
  float fVar8;
  double in_dr14;
  undefined8 in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = ar7;
  uVar3 = ar6;
  iVar1 = get_field_6c_028cc4(ar7,ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 0;
    return 2;
  }
  *(undefined4 *)(ar4 + 0x214) = 0;
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
  uVar5 = 1;
  Vec3_sub(uVar3,ar5,ar6,uVar4,auStack_4c);
  Vec3_ctor_copy(auStack_3c,auStack_4c,ar6,uVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6,uVar4);
  Vec3_length_sq(auStack_3c,uVar2,ar6,uVar4);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),(int)in_dr0);
    in_dr0 = in_xd14;
  }
  else {
    dVar6 = *(double *)(ar4 + 0x28);
  }
  fVar8 = SUB84(in_dr14,0);
  if (cVar10 == '\0') {
    bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar9 = in_dr14 < dVar6;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  else {
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x34);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 fVar8 / (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 / dVar6;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(ar4 + 0x28);
    }
    if (cVar10 == '\0') {
      fVar8 = SUB84(in_dr14,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar8 = SUB84(in_dr14 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_dr0;
    }
  }
  uVar2 = Vec3_length(auStack_3c,uVar2,ar6,uVar4);
  Vec3_assign(ar4 + 0x14,uVar2,ar6,uVar4);
  (**(code **)(*(int *)(iVar1 + 8) + 0x140))(iVar1,uVar2,ar6,uVar4);
  Vec3_assign(ar4 + 0x80,auStack_5c,ar6,uVar4);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_5c,0xffffffff,ar6,uVar4);
  if (*(int *)(ar4 + 0x128) == 1) {
    ar5_00 = 0xf;
    if (cVar11 == '\0') {
      dVar7 = 1099511902400.0;
    }
    else {
      dVar7 = 206158464224.0;
    }
  }
  else {
    if (*(int *)(ar4 + 0x128) != 2) {
      Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar4);
      return 2;
    }
    ar5_00 = 0x13;
    if (cVar11 == '\0') {
      dVar7 = 3848291247424.0;
    }
    else {
      dVar7 = 6.37150347401503e-312;
    }
  }
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    uVar4 = 0;
    ar6 = 0xffffffff;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,uVar4);
    *(undefined4 *)(ar4 + 0x294) = 0;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else {
    ar5_00 = uVar2;
    if (iVar1 != 1) {
      if ((iVar1 == 2) &&
         (iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,uVar4), iVar1 == 1)) {
        *(undefined4 *)(ar4 + 0x214) = 1;
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x294) = 0;
        FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,uVar4);
        *(undefined4 *)(ar4 + 0x178) = 0;
        uVar5 = 0;
        Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6,uVar4);
        uVar4 = 0;
        ar6 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,uVar4);
      }
      goto LAB_8c07cf9c;
    }
  }
  iVar1 = FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,uVar4);
  if (iVar1 == 7) {
    iVar1 = *(int *)(ar4 + 0x294);
    *(int *)(ar4 + 0x294) = iVar1 + 1;
    if (4 < iVar1 + 1) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
  }
  else {
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,uVar4,uVar3);
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) == (float)(int)(float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar9 = dVar7 == (double)(int)dVar6;
    }
    if (bVar9) {
      uVar4 = 5;
      FUN_8c033474(ar4,5,ar5,in_stack_00000000);
      FUN_8c03f39c(ar7,uVar4,ar5,in_stack_00000000);
      ar6 = ar5;
      uVar4 = in_stack_00000000;
    }
  }
LAB_8c07cf9c:
  Vec3_dtor(auStack_3c,0xffffffff,ar6,uVar4);
  return uVar5;
}

__asm__(".globl _FUN_8c07cce0\n.set _FUN_8c07cce0, _FUN_8c07cce0_def\n");
//@unit 8c07d048
#include "../decls.h"
undefined4 FUN_8c07d048_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar5_00;
  undefined4 uVar4;
  undefined *ar6_00;
  undefined4 uVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  float fVar7;
  undefined8 in_dr0;
  undefined8 uVar8;
  float fVar10;
  double dVar9;
  undefined8 in_xd0;
  char cVar11;
  char cVar12;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [12];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar7_00 = (undefined1 *)0x0;
  *(undefined4 *)(ar4 + 0x214) = 0;
  ar6_00 = (undefined *)0x1fc;
  uVar4 = ar5;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,0x1fc,0);
  uVar6 = 1;
  Vec3_ctor_zero(auStack_30,uVar4,ar6_00,ar7_00);
  iVar1 = (**(code **)(*ar7 + 0x1d0))(ar7,uVar4,ar6_00,ar7_00);
  iVar2 = (**(code **)(*ar7 + 0x1cc))(ar7,uVar4,ar6_00,ar7_00);
  Vec3_ctor_xyz(auStack_50,uVar4,ar6_00,ar7_00);
  Vec3_add(iVar2 + 4,auStack_50,ar6_00,ar7_00,auStack_60);
  Vec3_assign(auStack_30,auStack_60,ar6_00,ar7_00);
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
  ar5_00 = (undefined1 *)0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
  iVar3 = *(int *)(ar4 + 300);
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x178) = 1;
      Vec3_ctor_xyz(auStack_70,ar5_00,ar6_00,ar7_00);
      Vec3_sub(auStack_30,auStack_70,ar6_00,ar7_00,auStack_80);
      Vec3_assign(ar4 + 0x280,auStack_80,ar6_00,ar7_00);
      Vec3_dtor(auStack_80,0xffffffff,ar6_00,ar7_00);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      FUN_8c031748(ar4,uVar4,ar6_00,ar7_00);
      Vec3_ctor_xyz(auStack_90,Vec3_ctor_xyz,ar6_00,ar7_00);
      Vec3_scale(auStack_90,&DAT_8c1379b8,ar6_00,ar7_00,auStack_a0);
      Vec3_add(auStack_30,auStack_a0,ar6_00,ar7_00,auStack_b0);
      Vec3_add(auStack_b0,ar5,ar6_00,ar7_00,auStack_c0);
      Vec3_scale(auStack_c0,&DAT_8c1379bc,ar6_00,ar7_00,auStack_d0);
      Vec3_assign(ar4 + 0x54,auStack_d0,ar6_00,ar7_00);
      Vec3_dtor(auStack_d0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_c0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_b0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_a0,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_90,0xffffffff,ar6_00,ar7_00);
      (**(code **)(*ar7 + 0x128))(ar7,ar4 + 0x54,ar6_00,ar7_00);
      uStack_150 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar12 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(ar4 + 0x58),uStack_150);
        in_dr0 = in_xd0;
      }
      else {
        uStack_150 = (undefined4)in_dr0;
        uVar8 = *(undefined8 *)(ar4 + 0x58);
      }
      if (cVar11 == '\0' && (float)((ulonglong)uVar8 >> 0x20) < (float)uVar8) {
        (**(code **)(*ar7 + 0x128))(ar7,ar4 + 0x54,ar6_00,ar7_00);
        uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
          uStack_154 = uVar4;
        }
        else {
          uStack_154 = (undefined4)uVar8;
          in_dr0 = *(undefined8 *)(ar4 + 0x48);
          dVar9 = 6.37129236237323e-312;
          uStack_150 = uVar4;
        }
        if (cVar11 == '\0') {
          fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 * dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar9 = (double)CONCAT44(uStack_154,fVar7);
        }
        else {
          dVar9 = (double)CONCAT44(uStack_150,uStack_154);
        }
        if (cVar11 == '\0') {
          fVar7 = SUB84(dVar9,0) + (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x58) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x58) = in_dr0;
        }
      }
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      ar6_00 = (undefined *)(ar4 + 0x54);
      iVar1 = pure_virtual_stub(ar4,ar5,ar6_00,ar7_00);
      if (iVar1 == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(ar4 + 0x14);
      Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
      break;
    case 2:
      uVar4 = 1;
      FUN_8c031de8(ar4,1,ar6_00,ar7_00);
      fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
      Vec3_ctor_xyz(auStack_e0,uVar4,ar6_00,ar7_00);
      ar7_00 = auStack_e0;
      ar6_00 = auStack_30;
      iVar2 = FUN_8c032d48(ar4,ar5,ar6_00,ar7_00);
      Vec3_dtor(auStack_e0,0xffffffff,ar6_00,ar7_00);
      if (iVar2 == 0) {
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      ar5_00 = (undefined1 *)(ar4 + 0x14);
      Vec3_assign(ar4 + 0x80,ar5_00,ar6_00,ar7_00);
      if (in_stack_00000004 == 0) {
        ar5_00 = auStack_30;
        FUN_8c022fc0(ar5,ar5_00,ar6_00,ar7_00);
        if (cVar12 == '\0') {
          fVar10 = 1000.0;
        }
        else {
          fVar7 = 1000.0;
          fVar10 = 5.26888e-43;
        }
        if ((cVar11 == '\0' && fVar10 < fVar7) && (iVar1 == 0)) {
          uVar6 = 2;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
        }
      }
      break;
    case 3:
      Vec3_ctor_xyz(auStack_f0,ar5_00,ar6_00,ar7_00);
      ar6_00 = (undefined *)0x1;
      iVar1 = FUN_8c0811b4(ar4,auStack_f0,1,ar7_00);
      ar5_00 = (undefined1 *)0xffffffff;
      Vec3_dtor(auStack_f0,0xffffffff,ar6_00,ar7_00);
      if (iVar1 == 0) {
        Vec3_ctor_xyz(auStack_100,ar5_00,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,auStack_100,ar6_00,ar7_00);
        Vec3_dtor(auStack_100,0xffffffff,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar7_00 = (undefined1 *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x27;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x27,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00);
        ar6_00 = &DAT_8c137888;
        ar5_00 = (undefined1 *)0x27;
        FUN_8c07f1e4(ar4,0x27,&DAT_8c137888,ar7_00);
      }
      break;
    case 4:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)0x0;
        uVar5 = 0xffffffff;
        uVar4 = 0x28;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x28,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar5,ar7_00);
        ar6_00 = &DAT_8c1378a0;
        ar5_00 = (undefined1 *)0x28;
        FUN_8c07f1e4(ar4,0x28,&DAT_8c1378a0,ar7_00);
        FUN_8c03f39c(ar6,ar5_00,ar6_00,ar7_00);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        vec3_copy_8c02b5fc(auStack_10c,in_stack_00000000,ar6_00,ar7_00);
        FUN_8c07f268(ar4,auStack_10c,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)0xffffffff;
        object_dtor_delete(auStack_10c,0xffffffff,ar6_00,ar7_00);
      }
      break;
    case 5:
      iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00);
      if (iVar1 == 1) {
        ar7_00 = (undefined1 *)0x0;
        ar6_00 = (undefined *)0xffffffff;
        uVar4 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00);
        *(undefined4 *)(ar4 + 0x214) = 1;
        FUN_8c030eb8(ar4 + 0x1fc,uVar4,ar6_00,ar7_00);
        Vec3_assign(ar4 + 0x14,ar4 + 0x80,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)0x178;
        *(undefined4 *)(ar4 + 0x178) = 0;
        uVar6 = 0;
      }
      else {
        vec3_copy_8c02b5fc(auStack_118,in_stack_00000000,ar6_00,ar7_00);
        FUN_8c07f268(ar4,auStack_118,ar6_00,ar7_00);
        object_dtor_delete(auStack_118,0xffffffff,ar6_00,ar7_00);
        ar5_00 = (undefined1 *)(ar4 + 0x80);
        FUN_8c07f418(ar4,ar5_00,ar6_00,ar7_00);
        CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00,ar6);
        fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
        if (cVar12 == '\0') {
          fVar10 = 160.0;
          in_dr0 = in_xd0;
        }
        else {
          fVar7 = 160.0;
          fVar10 = 480.0;
        }
        if (cVar11 == '\0' && fVar10 < fVar7) {
          CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6_00,ar7_00,ar6);
          if (cVar12 == '\0') {
            fVar7 = 480.0;
          }
          else {
            in_dr0 = CONCAT44(fVar10,fVar7);
            fVar10 = 480.0;
            fVar7 = 0.25;
          }
          if (cVar11 == '\0' && fVar10 < fVar7) {
            if (cVar12 == '\0') {
              dVar9 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
            }
            else {
              in_dr0 = *(undefined8 *)(ar4 + 0x28);
              dVar9 = -0.007812501818989404;
            }
            if (cVar11 == '\0') {
              fVar7 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
            }
            else {
              fVar7 = SUB84(dVar9 * dVar9,0);
            }
            if (cVar12 == '\0') {
              *(float *)(ar4 + 0x28) = fVar7;
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = in_dr0;
            }
            Vec3_ctor_xyz(auStack_128,auStack_128,ar6_00,ar7_00);
            Vec3_scale(auStack_128,ar4 + 0x28,ar6_00,ar7_00,auStack_138);
            Vec3_ctor_copy(auStack_40,auStack_138,ar6_00,ar7_00);
            Vec3_dtor(auStack_138,0xffffffff,ar6_00,ar7_00);
            Vec3_dtor(auStack_128,0xffffffff,ar6_00,ar7_00);
            FUN_8c023aa0(iVar2 + 4,auStack_40,ar6_00,ar7_00);
            FUN_8c023aa0(iVar2 + 0x14,auStack_40,ar6_00,ar7_00);
            ar5_00 = (undefined1 *)0xffffffff;
            Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
          }
        }
      }
    }
  }
  FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00);
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar6;
}

__asm__(".globl _FUN_8c07d048\n.set _FUN_8c07d048, _FUN_8c07d048_def\n");
//@unit 8c07d8fc
#include "../decls.h"
undefined4 ret_const_0_07d8fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_07d8fc\n.set _ret_const_0_07d8fc, _ret_const_0_07d8fc_def\n");
//@unit 8c07d904
#include "../decls.h"
undefined4 FUN_8c07d904_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c031748(ar4,ar5,ar6,ar7);
      ar7 = 0;
      ar6 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      ar5_00 = &DAT_8c125e68;
      uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar2;
      if (*(int *)(ar4 + 0x220) == 3) {
        FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7);
      }
      else {
        FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      fVar4 = (float)(in_dr0 >> 0x20);
      vec3_copy_8c02b5fc(auStack_18,ar4 + 0x254,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_38);
      FUN_8c022dac(auStack_38,&DAT_8c125e68,ar6,ar7);
      if (cVar7 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar4 = 5.0;
        fVar5 = 9.24857e-43;
      }
      Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
      if (cVar6 == '\0' && fVar4 < fVar5) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      if (*(int *)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
      }
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x2a4) = 1;
      uVar2 = ar5;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      iVar1 = *(int *)(ar4 + 0x294);
      *(int *)(ar4 + 0x294) = iVar1 + 1;
      if (iVar1 + 1 < 0x12d) {
        if (*(int *)(ar4 + 0x2a8) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          uVar3 = 0;
        }
      }
      else {
        FUN_8c03f39c(uVar2,ar5,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = FUN_8c026db0(ar4,ar5,ar6,ar7);
      if (iVar1 == 0xb) {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
        if (iVar1 == 1) {
          uVar2 = 0xb;
          s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0xb,ar6,ar7);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        FUN_8c034148(ar4 + 0xb0,0xb,ar6,ar7);
      }
      break;
    case 4:
      uVar2 = ar5;
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
      if (cVar7 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (cVar6 != '\0' || (float)in_dr0 <= 0.0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
      }
    }
  }
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  return uVar3;
}

__asm__(".globl _FUN_8c07d904\n.set _FUN_8c07d904, _FUN_8c07d904_def\n");
//@unit 8c07dc50
#include "../decls.h"
undefined4 FUN_8c07dc50_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *ar5_00;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  ulonglong in_xd0;
  char cVar10;
  char cVar11;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [4];
  ulonglong uStack_20;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar7 = 1;
  iVar3 = *(int *)(ar4 + 300);
  if ((6 < iVar3) || (iVar3 < 0)) goto switchD_8c07dc84_default;
  pcVar5 = ar5;
                    
  switch(iVar3) {
  case 0:
    uVar6 = 0x13;
    iVar3 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_8c07dcfc;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6,ar7);
      }
      uVar6 = 300;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = ar4;
    }
LAB_8c07dcfc:
    FUN_8c031748(ar4,uVar6,ar6,ar7);
    FUN_8c031700(ar4,uVar6,ar6,ar7);
    break;
  case 1:
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_34);
    FUN_8c022dac(auStack_34,&DAT_8c125e68,ar6,ar7);
    if (cVar11 == '\0') {
      uVar2 = CONCAT44(0x42340000,(int)(in_dr0 >> 0x20));
    }
    else {
      uVar2 = 0x8c022cb042340000;
      in_xd0 = in_dr0;
    }
    in_dr0 = uVar2;
    bVar1 = cVar10 == '\0';
    fVar8 = (float)in_dr0;
    uVar2 = in_dr0 >> 0x20;
    pcVar4 = (code *)0xffffffff;
    pcVar5 = ar5;
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    if (bVar1 && (float)uVar2 < fVar8) {
      ar5_00 = &DAT_8c125e68;
      uVar6 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
      *(undefined4 *)(ar4 + 0x260) = uVar6;
      FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7,auStack_44);
      FUN_8c022dac(auStack_44,&DAT_8c125e68,ar6,ar7);
      if (cVar11 == '\0') {
        uVar2 = CONCAT44(0x42aa0000,(int)(in_dr0 >> 0x20));
      }
      else {
        uVar2 = 0xbf80000042aa0000;
        in_xd0 = in_dr0;
      }
      in_dr0 = uVar2;
      bVar1 = cVar10 != '\0';
      fVar8 = (float)in_dr0;
      uVar2 = in_dr0 >> 0x20;
      Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
      if (bVar1 || (float)uVar2 <= fVar8) {
        if (*(int *)(ar4 + 0x260) == 3) {
          FUN_8c07f1e4(ar4,0x19,&DAT_8c137738 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
        }
        else {
          FUN_8c07f1e4(ar4,0x1a,&DAT_8c137768 + (*(int *)(ar4 + 0x128) + -6) * 0x18,ar7);
        }
        ar7 = 0;
        ar6 = (code *)0xffffffff;
        ar5 = (code *)(*(int *)(ar4 + 0x260) + 0x16);
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
      }
      else {
        ar7 = 0;
        iVar3 = *(int *)(ar4 + 0x260) + 0x18;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar3,0xffffffff,0);
        ar6 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar3,s_CAnimBody_SetFrame_033e6e,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        ar5 = ar4;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x260) = 0;
      ar5 = pcVar4;
    }
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  case 2:
    fVar8 = (float)(in_dr0 >> 0x20);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        FUN_8c03c314(ar4,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      if (iVar3 == 1) {
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_54);
        FUN_8c022dac(auStack_54,&DAT_8c125e68,ar6,ar7);
        if (cVar11 == '\0') {
          pcVar5 = (code *)0x42aa0000;
        }
        else {
          fVar8 = 85.0;
          pcVar5 = Vec3_dtor;
        }
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        if (cVar10 == '\0' && fVar8 < (float)(uint)pcVar5) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        Vec3_set_zero(auStack_18,ar5,ar6,ar7);
        Vec3_set_zero(auStack_24,ar5,ar6,ar7);
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_64);
        Vec3_assign(ar4 + 0x14,auStack_64,ar6,ar7);
        uVar6 = 0xffffffff;
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar6,ar6,ar7,pcVar5);
        FUN_8c034574(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
        vec3_copy_8c023d8c(auStack_18,auStack_70,ar6,ar7);
        object_dtor_delete(auStack_70,0xffffffff,ar6,ar7);
        if (cVar11 == '\0') {
          dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
        }
        else {
          in_xd0 = CONCAT44(uStack_10,uStack_14);
          dVar9 = *(double *)(ar4 + 600);
        }
        if (cVar10 == '\0') {
          fVar8 = SUB84(dVar9,0) - (float)((ulonglong)dVar9 >> 0x20);
        }
        else {
          fVar8 = SUB84(dVar9 - dVar9,0);
        }
        uVar2 = in_xd0;
        if (cVar11 == '\0') {
          uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),fVar8);
          uVar2 = uStack_20;
        }
        uStack_20 = uVar2;
        vec3_copy_8c023d8c(ar4 + 0x254,auStack_24,ar6,ar7);
        vec3_copy_8c02b5fc(auStack_7c,auStack_24,ar6,ar7);
        FUN_8c023484(ar4 + 0x14,auStack_7c,ar6,ar7,auStack_8c);
        Vec3_assign(ar4 + 0x14,auStack_8c,ar6,ar7);
        Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_24,0xffffffff,ar6,ar7);
        object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      }
    }
    break;
  case 3:
    FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_9c);
    fVar8 = (float)(in_dr0 >> 0x20);
    FUN_8c022dac(auStack_9c,&DAT_8c125e68,ar6,ar7);
    if (cVar11 == '\0') {
      pcVar5 = (code *)0x42340000;
    }
    else {
      fVar8 = 45.0;
      pcVar5 = Vec3_dtor;
    }
    Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
    if (cVar10 != '\0' || fVar8 <= (float)(uint)pcVar5) {
      iVar3 = FUN_8c034148(ar4 + 0xb0,0x13,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      iVar3 = FUN_8c034148(ar4 + 0xb0,*(int *)(ar4 + 0x260) + 0x18,ar6,ar7);
      if (iVar3 != 0) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x2a4) = 1;
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    iVar3 = *(int *)(ar4 + 0x294);
    *(int *)(ar4 + 0x294) = iVar3 + 1;
    if (iVar3 + 1 < 0x12d) {
      if (*(int *)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar7 = 0;
      }
    }
    else {
      FUN_8c03f39c(ar5,iVar3,FUN_8c03f39c,ar7);
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    break;
  case 5:
    iVar3 = FUN_8c026db0(ar4,ar5,ar6,ar7);
    if (iVar3 == 0x12) {
      iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,ar6,ar7);
      if (iVar3 == 1) {
        s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x12,ar6,ar7);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,s_CAnimBody_SetFrame_033e6e,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      FUN_8c034148(ar4 + 0xb0,0x12,ar4 + 0xb0,0xb0);
    }
    break;
  case 6:
    pcVar5 = ar4 + 0xb0;
    s_CAnimBody_AdvanceFrame_033ba0(pcVar5,pcVar5,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,pcVar5,ar6,ar7,ar5);
    if (cVar11 == '\0') {
      in_dr0 = in_dr0 >> 0x20;
    }
    if (cVar10 != '\0' || (float)in_dr0 <= 0.0) {
      ar7_00 = 0;
      uVar6 = 0xffffffff;
      uVar7 = 0x13;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar7,uVar6,ar7_00);
      *(undefined4 *)(ar4 + 300) = 0;
      uVar7 = 0;
    }
  }
switchD_8c07dc84_default:
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  return uVar7;
}

__asm__(".globl _FUN_8c07dc50\n.set _FUN_8c07dc50, _FUN_8c07dc50_def\n");
//@unit 8c07e460
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
//@unit 8c07e828
#include "../decls.h"
undefined4 FUN_8c07e828_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
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
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
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
  a4 = *(int **)(puVar5 + 4);
  *(undefined4 *)(ar4 + 0x214) = 0;
  uVar3 = ar5;
  FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7);
  uVar4 = 1;
  FUN_8c031700(ar4,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + 0x290) = 0xffffffff;
  Vec3_ctor_zero(puVar5 + -0x2c,uVar3,ar6,ar7);
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,uVar3,ar6,ar7);
    FUN_8c031c74(ar4,&DAT_8c125e78,ar5,ar7);
    ar6 = ar5;
    if (*(int *)(ar4 + 0x40) == 0) {
      uVar3 = FUN_8c034148(ar4 + 0xb0,0x29,ar5,ar7);
      *(undefined4 *)(puVar5 + -0xc4) = uVar3;
      ar6 = ar5;
      if (0 < *(int *)(puVar5 + -0xc4)) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
        *(int *)(puVar5 + -0xf0) = ar4;
        *(int *)(*(int *)(puVar5 + -0xf0) + 300) = *(int *)(*(int *)(puVar5 + -0xf0) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 1) {
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
    if (in_FPSCR_SZ == '\0') {
      *(int *)(puVar5 + -200) = (int)((ulonglong)in_dr0 >> 0x20);
      in_fr15 = *(float *)(puVar5 + -200);
      dVar7 = (double)CONCAT44(0x43250000,(int)in_dr0);
    }
    else {
      *(undefined8 *)(puVar5 + -200) = in_dr0;
      dVar7 = 6.03203368746242e-312;
    }
    if (in_FPSCR_PR == '\0') {
      bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
    }
    else {
      bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar9) {
      uVar3 = (**(code **)(*a4 + 0x11c))(a4,6,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xcc) = uVar3;
      if (*(int *)(puVar5 + -0xcc) == 0) {
        uVar3 = (**(code **)(*a4 + 0x11c))(a4,4,ar6,ar7);
        *(undefined4 *)(puVar5 + -0xd0) = uVar3;
        if (*(int *)(puVar5 + -0xd0) == 0) {
          *(undefined4 *)(puVar5 + -0xb8) = 2;
          Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
          return *(undefined4 *)(puVar5 + -0xb8);
        }
        uVar3 = 4;
      }
      else {
        uVar3 = 6;
      }
      ar5_00 = 0x2c;
      uVar2 = FUN_8c03c0f0(ar4 + 0xb0,0x2c,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd4) = uVar2;
      uVar2 = deref_u32(*(undefined4 *)(puVar5 + -0xd4),ar5_00,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xd8) = uVar2;
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xdc) = (int)((ulonglong)dVar7 >> 0x20);
      }
      else {
        *(double *)(puVar5 + -0xdc) = dVar7;
      }
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x4c;
      if (in_FPSCR_SZ == '\0') {
        uVar8 = CONCAT44(0x42f40000,SUB84(dVar7,0));
      }
      else {
        uVar8 = 0x8c0342d842f40000;
      }
      FUN_8c0342d8(ar4 + 0xb0,*(undefined4 *)**(undefined4 **)(puVar5 + -0xd8),ar6,ar7);
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x4c,ar6,ar7);
      Vec3_dtor(puVar5 + -0x4c,0xffffffff,ar6,ar7);
      vec3_copy_8c02b5fc(puVar5 + -0x58,*(undefined4 *)(puVar5 + -0x104),ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x68;
      FUN_8c023484(puVar5 + -0x2c,puVar5 + -0x58,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0x78;
      Vec3_add(puVar5 + -0x68,ar5,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_assign(puVar5 + -0x2c,puVar5 + -0x78,ar6,ar7);
      Vec3_dtor(puVar5 + -0x78,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0x68,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x58,0xffffffff,ar6,ar7);
      ar6 = *(undefined4 *)(ar4 + 0x294);
      uVar2 = (**(code **)(*a4 + 0x100))(a4,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xe0) = uVar2;
      iVar1 = *(int *)(puVar5 + -0xe0);
      if (iVar1 != 0) {
        FUN_8c036988(iVar1,uVar3,ar6,ar7);
      }
      Vec3_ctor_xyz(puVar5 + -0x88,uVar3,ar6,ar7);
      *(undefined4 *)(puVar5 + -0xf4) = *(undefined4 *)(ar4 + 0x294);
      Vec3_set_xyz(puVar5 + -0x94,uVar3,ar6,ar7);
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xa4;
      FUN_8c023484(puVar5 + -0x88,puVar5 + -0x94,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      *(undefined1 **)(puVar5 + -0x108) = puVar5 + -0xb4;
      Vec3_scale(puVar5 + -0xa4,&DAT_8c1379c0,ar6,ar7,*(undefined4 *)(puVar5 + -0x108));
      Vec3_ctor_copy(puVar5 + -0x3c,puVar5 + -0xb4,ar6,ar7);
      Vec3_dtor(puVar5 + -0xb4,0xffffffff,ar6,ar7);
      Vec3_dtor(puVar5 + -0xa4,0xffffffff,ar6,ar7);
      object_dtor_delete(puVar5 + -0x94,0xffffffff,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x88,0xffffffff,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,ar7,*(undefined4 *)(puVar5 + -0x104));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(puVar5 + -0xe4) = (int)((ulonglong)uVar8 >> 0x20);
        dVar7 = (double)CONCAT44(0x42f40000,*(undefined4 *)(puVar5 + -0xe4));
      }
      else {
        *(undefined8 *)(puVar5 + -0xe4) = uVar8;
        in_xd0 = *(undefined8 *)(puVar5 + -0xe4);
        dVar7 = -8.406882663868896e-251;
      }
      if (in_FPSCR_PR == '\0') {
        fVar6 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 - dVar7,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(0x42f00000,fVar6);
      }
      else {
        dVar7 = -7.95866521996774e-251;
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
      FUN_8c023bf4(puVar5 + -0x3c,puVar5 + -0xc0,ar6,ar7);
      ar5_01 = puVar5 + -0x3c;
      FUN_8c023aa0(puVar5 + -0x2c,ar5_01,ar6,ar7);
      FUN_8c036988(iVar1,ar5_01,ar6,ar7);
      uVar3 = 0xffffffff;
      Vec3_dtor(puVar5 + -0x3c,0xffffffff,ar6,ar7);
    }
    else {
      vec3_clear(puVar5 + -0x2c,uVar3,ar6,ar7);
    }
    uVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xe8) = uVar2;
    if (*(int *)(puVar5 + -0xe8) == 7) {
      if (in_FPSCR_PR == '\0') {
        iVar1 = (int)in_fr15;
      }
      else {
        iVar1 = (int)(double)CONCAT44(in_fr14,in_fr15);
      }
      if (iVar1 == 0xa5) {
        uVar3 = 6;
        FUN_8c033474(ar4,6,ar5,a4);
        ar6 = ar5;
        ar7 = a4;
      }
      *(int *)(puVar5 + -0xf8) = ar4;
      *(undefined4 *)(puVar5 + -0xfc) = *(undefined4 *)(*(int *)(puVar5 + -0xf8) + 0x294);
      *(int *)(*(int *)(puVar5 + -0xf8) + 0x294) = *(int *)(puVar5 + -0xfc) + 1;
      if (*(int *)(puVar5 + -0xfc) + 1 < 6) {
        *(undefined4 *)(ar4 + 0x290) = *(undefined4 *)(ar4 + 0x294);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7);
        *(int *)(puVar5 + -0x100) = ar4;
        *(int *)(*(int *)(puVar5 + -0x100) + 300) = *(int *)(*(int *)(puVar5 + -0x100) + 300) + 1;
      }
    }
  }
  else if (iVar1 == 2) {
    uVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,ar7);
    *(undefined4 *)(puVar5 + -0xec) = uVar2;
    if (*(int *)(puVar5 + -0xec) == 1) {
      uVar4 = 0;
      FUN_8c03c314(ar4,uVar3,ar6,ar7);
      *(undefined4 *)(ar4 + 0x214) = 1;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x178) = 0;
    }
  }
  *(undefined4 *)(puVar5 + -0xbc) = uVar4;
  Vec3_dtor(puVar5 + -0x2c,0xffffffff,ar6,ar7);
  return *(undefined4 *)(puVar5 + -0xbc);
}

__asm__(".globl _FUN_8c07e828\n.set _FUN_8c07e828, _FUN_8c07e828_def\n");
//@unit 8c07edac
#include "../decls.h"
undefined4 FUN_8c07edac_def(int ar4,int ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0xc;
  if (*(int *)(ar4 + 100) == 1) {
    iVar3 = 0x17;
  }
  iVar1 = *(int *)(ar4 + 300);
  piVar2 = ar6;
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) != 1) {
      ar6_00 = &DAT_8c125bf0;
      in_dr0 = CONCAT44(0x40400000,(int)in_dr0);
      ar7 = ar6;
      FUN_8c032518(ar4,ar5,&DAT_8c125bf0,ar6);
      Vec3_assign(ar4 + 0x54,auStack_28,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto LAB_8c07ee84;
    }
    *(undefined4 *)(ar4 + 300) = 3;
    iVar3 = ar5;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07ee84:
      piVar2 = (int *)(ar4 + 0x54);
      pure_virtual_stub(ar4,ar5,piVar2,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
      goto switchD_8c07f028_default;
    }
    if (iVar1 == 2) {
      *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
      iVar1 = FUN_8c034148(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else if (iVar1 == 2) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          goto LAB_8c07efc4;
        }
      }
      FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7,auStack_38);
      FUN_8c082378(ar4,auStack_38,piVar2,ar7);
      Vec3_dtor(auStack_38,0xffffffff,piVar2,ar7);
      goto switchD_8c07f028_default;
    }
    iVar3 = ar5;
    if (iVar1 != 3) goto switchD_8c07f028_default;
  }
LAB_8c07efc4:
  FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7,auStack_48);
  FUN_8c082378(ar4,auStack_48,piVar2,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,piVar2,ar7);
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
  iVar3 = *(int *)(ar4 + 0x128);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
    case 1:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 2:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    default:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 6:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 7:
      if (*(int *)(ar4 + 100) == 1) {
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      }
      else {
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      }
    }
  }
switchD_8c07f028_default:
  (**(code **)(*ar6 + 0x128))(ar6,ar5,piVar2,ar7);
  if (cVar7 == '\0') {
    in_dr0 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar5 + 4);
  }
  if (cVar6 != '\0' || (float)in_dr0 <= (float)((ulonglong)in_dr0 >> 0x20)) {
    iVar3 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,piVar2,ar7);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar5 = *(double *)(ar5 + 4);
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x3d4ccccd,fVar4);
    }
    else {
      dVar5 = -8.332610289015658e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x2c0);
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x2c0) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x2c0) = in_dr0;
    }
    FUN_8c031748(ar4,iVar3,piVar2,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c07edac\n.set _FUN_8c07edac, _FUN_8c07edac_def\n");
//@unit 8c07f1e4
#include "../decls.h"
undefined4 FUN_8c07f1e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar3 = ar6;
  uVar1 = FUN_8c03c0f0(ar4 + 0xb0,ar5,ar6,ar7);
  puVar2 = (undefined4 *)deref_u32(uVar1,ar5,uVar3,ar7);
  puVar4 = (undefined4 *)(ar4 + 0xb4);
  uVar1 = puVar2[1];
  *puVar4 = *puVar2;
  puVar4[1] = uVar1;
  puVar4[2] = puVar2[2];
  *(undefined4 *)(0xb4 + ar4) = ar6;
  vec3_clear(ar4 + 0x244,ar5,uVar3,ar7);
  uVar3 = FUN_8c02a1fc(ar4 + 0x254,ar5,uVar3,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c07f1e4\n.set _FUN_8c07f1e4, _FUN_8c07f1e4_def\n");
//@unit 8c07f268
#include "../decls.h"
undefined4 FUN_8c07f268_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_dr0;
  char cVar4;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar4 = '\0';
  uVar2 = ar5;
  Vec3_ctor_zero(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
  FUN_8c034384(ar4 + 0xb0,**(undefined4 **)(ar4 + 0xb4),ar6,ar7);
  Vec3_assign(auStack_18,auStack_38,ar6,ar7);
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_sub(auStack_18,ar4 + 0x244,ar6,ar7,auStack_48);
  Vec3_assign(auStack_28,auStack_48,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  puVar3 = auStack_18;
  Vec3_assign(ar4 + 0x244,puVar3,ar6,ar7);
  Vec3_length_sq(auStack_28,puVar3,ar6,ar7);
  if (cVar4 == '\0') {
    *(int *)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = in_dr0;
  }
  Vec3_ctor_xyz(auStack_58,puVar3,ar6,ar7);
  iVar1 = FUN_8c023d04(auStack_28,auStack_58,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  if (iVar1 != 0) {
    vec3_copy_8c02b5fc(auStack_64,uVar2,ar6,ar7);
    puVar3 = auStack_64;
    FUN_8c023484(auStack_28,puVar3,ar6,ar7,auStack_74);
    uVar2 = Vec3_length(auStack_74,puVar3,ar6,ar7);
    Vec3_assign(ar4 + 0x14,uVar2,ar6,ar7);
    Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
    object_dtor_delete(auStack_64,0xffffffff,ar6,ar7);
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07f268\n.set _FUN_8c07f268, _FUN_8c07f268_def\n");
//@unit 8c07f418
#include "../decls.h"
undefined4 FUN_8c07f418_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  double dVar1;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar2;
  char cVar3;
  undefined4 in_stack_ffffffac;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar3 = '\0';
  cVar2 = '\0';
  ar5_00 = ar5;
  uStack_c = in_PR;
  Vec3_set_zero(&uStack_18,ar5,ar6,ar7);
  Vec3_set_zero(&fStack_24,ar5_00,ar6,ar7);
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7,in_stack_ffffffac);
  FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(*(int *)(ar4 + 0xb4) + 4),ar6,ar7);
  vec3_copy_8c023d8c(&uStack_18,auStack_30,ar6,ar7);
  object_dtor_delete(auStack_30,0xffffffff,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x254),uStack_18);
  }
  else {
    in_xd0 = CONCAT44(uStack_14,uStack_18);
    dVar1 = *(double *)(ar4 + 0x254);
  }
  if (cVar2 == '\0') {
    fStack_24 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_24 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 600),uStack_14);
  }
  else {
    fStack_24 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar1 = *(double *)(ar4 + 600);
  }
  if (cVar2 == '\0') {
    fStack_20 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_20 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x25c),uStack_10);
  }
  else {
    fStack_20 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_c,uStack_10);
    dVar1 = *(double *)(ar4 + 0x25c);
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_1c = (float)in_xd0;
    uStack_18 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  vec3_copy_8c023d8c(ar4 + 0x254,&uStack_18,ar6,ar7);
  vec3_copy_8c02b5fc(auStack_3c,&fStack_24,ar6,ar7);
  FUN_8c023484(ar5,auStack_3c,ar6,ar7,auStack_4c);
  Vec3_assign(ar5,auStack_4c,ar6,ar7);
  Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_3c,0xffffffff,ar6,ar7);
  object_dtor_delete(&fStack_24,0xffffffff,ar6,ar7);
  object_dtor_delete(&uStack_18,0xffffffff,ar6,ar7);
  return ar5;
}

__asm__(".globl _FUN_8c07f418\n.set _FUN_8c07f418, _FUN_8c07f418_def\n");
//@unit 8c07f56c
#include "../decls.h"
undefined4 FUN_8c07f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  double dVar3;
  undefined4 in_fr3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uStack_48;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    iVar1 = pure_virtual_stub(ar4,ar5,ar4 + 0x54,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 300) = 0;
    return 0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00);
  if (cVar6 == '\0') {
    uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uStack_48 = (double)CONCAT44((*(uint*)((uchar*)&uStack_48+4)),uVar2);
    in_dr0 = (double)CONCAT44(uVar2,in_fr3);
    dVar3 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    dVar3 = -7.956826985829187e-251;
    uStack_48 = in_dr0;
  }
  if (cVar5 == '\0') {
    bVar4 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar4 = dVar3 * dVar3 < in_dr0;
  }
  if (!bVar4) {
    *(undefined4 *)(ar4 + 0x40) = 5;
    Vec3_sub(ar5,ar6,ar6_00,ar7_00,auStack_24);
    uVar2 = Vec3_length(auStack_24,ar6,ar6_00,ar7_00);
    FUN_8c03263c(ar4,uVar2,ar6_00,ar7_00);
    Vec3_add(auStack_34,ar5,ar6_00,ar7_00,(int)&uStack_48 + 4);
    Vec3_assign(ar4 + 0x54,(int)&uStack_48 + 4,ar6_00,ar7_00);
    Vec3_dtor((int)&uStack_48 + 4,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7_00);
    FUN_8c032788(ar4,ar4 + 0x54,s0,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c07f56c\n.set _FUN_8c07f56c, _FUN_8c07f56c_def\n");
//@unit 8c07f76c
#include "../decls.h"
uint FUN_8c07f76c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *ar6_00;
  float fVar5;
  ulonglong uVar6;
  code *pcVar9;
  double dVar7;
  undefined8 uVar8;
  bool bVar10;
  char cVar11;
  char cVar12;
  code *pcStack_54;
  code *pcStack_50;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uStack_c = 1;
  uVar6 = (ulonglong)(uint)*(float *)(ar4 + 0x130);
  if (*(float *)(ar4 + 0x130) < 0.0) {
    uVar4 = 0;
    ar6_00 = ar6;
    iVar3 = FUN_8c031de8(ar4,0,ar6,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(ar4 + 0x2a0) = 2;
    }
    uVar2 = (uint)(iVar3 != 0);
    FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_20);
    FUN_8c022dac(ar4 + 0x14,auStack_20,ar6_00,ar7);
    pcStack_50 = (code *)(uVar6 >> 0x20);
    if (cVar12 == '\0') {
      pcVar9 = (code *)0x40000000;
      pcStack_54 = pcStack_50;
    }
    else {
      pcStack_50 = (code *)uVar6;
      pcStack_54 = (code *)0x40000000;
      pcVar9 = Vec3_dtor;
    }
    bVar1 = cVar11 == '\0';
    bVar10 = (float)(uint)pcVar9 < (float)(uint)pcStack_54;
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_20,0xffffffff,ar6_00,ar7);
    if (bVar1 && bVar10) {
      FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7,auStack_30);
      Vec3_scale(auStack_30,&DAT_8c1379c4,ar6_00,ar7,auStack_40);
      FUN_8c023aa0(ar4 + 0x14,auStack_40,ar6_00,ar7);
      Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7);
      uVar4 = 0xffffffff;
      Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
      Vec3_length(ar4 + 0x14,uVar4,ar6_00,ar7);
    }
    iVar3 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,ar6_00,ar7);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
      pcStack_54 = pcVar9;
    }
    else {
      dVar7 = -7.932637895862283e-251;
      pcStack_50 = pcVar9;
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 * dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(pcStack_54,fVar5);
    }
    else {
      dVar7 = (double)CONCAT44(pcStack_50,pcStack_54);
    }
    if (cVar11 == '\0') {
      fVar5 = SUB84(dVar7,0) + (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 + dVar7,0);
    }
    if (cVar12 == '\0') {
      uVar8 = CONCAT44(*(undefined4 *)(ar5 + 4),fVar5);
    }
    else {
      uVar8 = *(undefined8 *)(ar5 + 4);
    }
    if (cVar11 != '\0' || (float)((ulonglong)uVar8 >> 0x20) <= (float)uVar8) {
      FUN_8c031748(ar4,iVar3,ar6_00,ar7);
    }
  }
  else {
    uVar2 = FUN_8c031de8(ar4,8,ar6,ar7);
  }
  FUN_8c031c74(ar4,ar5,ar5,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c07f76c\n.set _FUN_8c07f76c, _FUN_8c07f76c_def\n");
//@unit 8c07f8e0
#include "../decls.h"
undefined4 FUN_8c07f8e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ain0 = ar7;
  uVar1 = (**(code **)(*ar7 + 0x10c))(ar7,ar5,ar6,ar7);
  Vec3_ctor_copy(&uStack_2c,uVar1,ar6_00,ar7);
  uVar1 = ar5;
  Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_4c);
  Vec3_normalize(auStack_4c,uVar1,ar6_00,ar7);
  Vec3_ctor_copy(auStack_3c,auStack_5c,ar6_00,ar7);
  Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44(uStack_2c,in_fr3);
    dVar5 = (double)CONCAT44(0x40a00000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    uStack_24 = 0xdc;
    dVar8 = (double)CONCAT44(0x444d0000,uStack_2c);
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar5 = 6.28646433727248e-312;
  }
  uStack_28 = 0x444d0000;
  if (cVar10 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) * fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + fVar4,SUB84(dVar8,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
    dVar8 = dVar8 + dVar5;
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  uStack_2c = uVar7;
  if (cVar11 != '\0') {
    uStack_2c = SUB84(dVar8,0);
    uStack_28 = uVar7;
  }
  if (*(int *)(ar4 + 0x128) < 6) {
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        if (*(int *)(ar4 + 0x2b8) == 1) {
          *(undefined4 *)(ar4 + 0x2b8) = 0;
          Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
          Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
          return 0;
        }
        Vec3_ctor_copy(auStack_6c,auStack_3c,ar6_00,ar7);
        ar6_00 = 1;
        iVar2 = FUN_8c0811b4(ar4,auStack_6c,1,ar7);
        Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        break;
      case 1:
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        ar6_00 = 5;
        uVar1 = rand_range(ar4,3,5,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar1;
      case 2:
        Vec3_ctor_copy(auStack_7c,auStack_3c,ar6_00,ar7);
        FUN_8c082378(ar4,auStack_7c,ar6_00,ar7);
        Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (*(int *)(ar4 + 0x128) == 6) {
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x24;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0);
        }
        else {
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x2e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        break;
      case 3:
        *(undefined4 *)(ar4 + 0x178) = 1;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        if (cVar11 == '\0') {
          fVar6 = 90.0;
        }
        else {
          fVar4 = 90.0;
          fVar6 = 7.51096e-43;
        }
        if (cVar10 != '\0' || fVar6 <= fVar4) {
          *(undefined4 *)(ar4 + 0x218) = 0x10;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        break;
      case 4:
        Vec3_ctor_copy(auStack_8c,auStack_3c,ar6_00,ar7);
        uVar7 = SUB84(dVar8,0);
        FUN_8c082378(ar4,auStack_8c,ar6_00,ar7);
        uVar1 = 0xffffffff;
        Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7);
        iVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7);
        if (iVar2 == 7) {
          FUN_8c032ab0(ar4,uVar1,ar6_00,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar8 = 1.3411048278844095e-08;
        }
        if (cVar10 == '\0' && SUB84(dVar8,0) < (float)((ulonglong)dVar8 >> 0x20)) {
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar8 = -7.957972460180408e-251;
          }
          if (cVar10 == '\0') {
            fVar4 = (float)((ulonglong)dVar8 >> 0x20);
            dVar8 = (double)CONCAT44(fVar4,SUB84(dVar8,0) + fVar4);
          }
          else {
            dVar8 = dVar8 + dVar8;
          }
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x28) = SUB84(dVar8,0);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
          }
        }
        Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6_00,ar7,auStack_9c);
        Vec3_add(ar5,auStack_9c,ar6_00,ar7,auStack_ac);
        FUN_8c022fc0(auStack_ac,ar6,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),uVar7);
          dVar5 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar5 = 3.051758535548288e-05;
        }
        if (cVar10 == '\0') {
          bVar9 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20) <
                  (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar9 = dVar5 * dVar5 < dVar8;
        }
        Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7);
        if (bVar9) {
          if (*(int *)(ar4 + 0x2b8) == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x2b8) = 0;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
          }
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
        break;
      case 5:
        *(undefined4 *)(ar4 + 0x178) = 1;
        ar6_00 = ar5;
        FUN_8c031c74(ar4,ar5,ar5,ar7);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6_00,ar7);
        if (iVar2 == 1) {
          uVar3 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x294) = 0;
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
          *(undefined4 *)(ar4 + 0x178) = 0;
          *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
        }
      }
    }
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07f8e0\n.set _FUN_8c07f8e0, _FUN_8c07f8e0_def\n");
//@unit 8c07ff08
#include "../decls.h"
undefined4 FUN_8c07ff08_def(int ar4,float *ar5,float *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  undefined4 *ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  float fVar8;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float afStack_38 [4];
  undefined1 auStack_28 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  ain0 = ar7;
  uVar1 = (**(code **)(*ar7 + 0x10c))(ar7,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_28,uVar1,ar6,ar7);
  fVar8 = 0.0;
  Vec3_ctor_zero(afStack_38,uVar1,ar6,ar7);
  Vec3_ctor_zero(&uStack_48,Vec3_ctor_zero,ar6,ar7);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x40e00000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = 512.0001237392426;
  }
  if (cVar10 == '\0') {
    afStack_38[0] = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    afStack_38[0] = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x40800000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    afStack_38[0] = (float)in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar6 = 7.971355785012665e+24;
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x451a6000,fVar5);
  }
  else {
    dVar6 = 7.321052503998254e+19;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - SUB84(dVar6,0),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 - dVar6;
  }
  uStack_48 = SUB84(dVar6,0);
  if (cVar11 == '\0') {
    uStack_48 = (undefined4)((ulonglong)dVar6 >> 0x20);
    fVar5 = 750.0;
  }
  else {
    afStack_38[3] = 4.14784e-43;
    fVar5 = 4.14784e-43;
    uStack_3c = 0x128;
  }
  afStack_38[2] = 750.0;
  afStack_38[1] = 575.0;
  uStack_40 = 0x443b8000;
  uStack_44 = 0x440fc000;
  ar5_00 = &uStack_48;
  Vec3_sub(ar5,ar5_00,ar6,ar7,auStack_68);
  Vec3_normalize(auStack_68,ar5_00,ar6,ar7);
  Vec3_ctor_copy(auStack_58,auStack_78,ar6,ar7);
  Vec3_dtor(auStack_78,0xffffffff,ar6,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  if (*(int *)(ar4 + 0x128) < 6) {
    Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_48,0xffffffff,ar6,ar7);
    Vec3_dtor(afStack_38,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
    return 0;
  }
  iVar2 = *(int *)(ar4 + 300);
  if ((6 < iVar2) || (iVar2 < 0)) goto switchD_8c0800be_default;
                    
  switch(iVar2) {
  case 0:
    ar7 = (int *)0xb0;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar6,0xb0);
    if (iVar2 == 1) {
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    }
    break;
  case 1:
    ar6 = afStack_38;
    iVar2 = pure_virtual_stub(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      ar6 = (float *)0x5;
      uVar1 = rand_range(ar4,3,5,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
    break;
  case 2:
    FUN_8c0230f0(ar4 + 0x14,uVar1,ar6,ar7,auStack_88);
    FUN_8c082378(ar4,auStack_88,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_88,0xffffffff,ar6,ar7);
    ar4_00 = ar4 + 0xb0;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4_00,uVar1,ar6,ar7);
    if (iVar2 == 1) {
      FUN_8c010e38(ar4_00,uVar1,ar6,ar7,ain0);
      if (cVar11 == '\0') {
        fVar8 = 0.03;
      }
      else {
        fVar5 = 0.03;
        fVar8 = 4.2039e-43;
      }
      if (cVar10 == '\0' && fVar5 < fVar8) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
    }
    break;
  case 3:
    Vec3_ctor_copy(auStack_98,auStack_58,ar6,ar7);
    ar6 = (float *)0x1;
    iVar2 = FUN_8c0811b4(ar4,auStack_98,1,ar7);
    Vec3_dtor(auStack_98,0xffffffff,ar6,ar7);
    if (iVar2 == 0) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      if (*(int *)(ar4 + 0x128) == 6) {
        ar7 = (int *)0x0;
        ar6 = (float *)0xffffffff;
        uVar1 = 0x23;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x23,0xffffffff,0);
      }
      else {
        ar7 = (int *)0x0;
        ar6 = (float *)0xffffffff;
        uVar1 = 0x2d;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2d,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      FUN_8c032ab0(ar4,uVar1,ar6,ar7);
      FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
    }
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x178) = 1;
    Vec3_ctor_copy(auStack_a8,auStack_58,ar6,ar7);
    FUN_8c082378(ar4,auStack_a8,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_a8,0xffffffff,ar6,ar7);
    FUN_8c031748(ar4,uVar1,ar6,ar7);
    ar6 = ar5;
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
    CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,ain0);
    if (cVar11 == '\0') {
      fVar8 = 100.0;
    }
    else {
      fVar5 = 100.0;
      fVar8 = 4.2039e-43;
    }
    if (cVar10 != '\0' || fVar8 <= fVar5) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      ar6 = (float *)0x6;
      uVar1 = rand_range(ar4,4,6,ar7);
      *(undefined4 *)(ar4 + 0x294) = uVar1;
      *(undefined4 *)(ar4 + 0x218) = 0xf;
    }
    break;
  case 5:
    Vec3_ctor_copy(auStack_b8,auStack_58,ar6,ar7);
    FUN_8c082378(ar4,auStack_b8,ar6,ar7);
    uVar1 = 0xffffffff;
    Vec3_dtor(auStack_b8,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x178) = 1;
    CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
    if (cVar11 == '\0') {
      fVar8 = fVar5;
    }
    if (cVar10 == '\0') {
      iVar2 = (int)fVar8;
    }
    else {
      iVar2 = (int)(double)CONCAT44(in_fr14,fVar8);
    }
    if ((iVar2 == 0x8a) && (*(int *)(ar4 + 0x294) < 1)) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x3ca3d70a,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 985162545658593.2;
      }
      if (cVar10 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x28) = fVar5;
        fVar5 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
      }
      if (cVar10 == '\0' && 0.0 < fVar5) {
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
        }
      }
      iVar2 = s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar1,ar6,ar7);
      if (iVar2 == 7) {
        ar6 = (float *)0x6;
        uVar1 = 4;
        uVar3 = rand_range(ar4,4,6,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar3;
      }
    }
    else {
      iVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6,ar7);
      if (iVar2 == 7) {
        FUN_8c032ab0(ar4,uVar1,ar6,ar7);
        FUN_8c032204(ar4 + 0xb0,uVar1,ar6,ar7,ain0);
        *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + -1;
      }
    }
    FUN_8c031748(ar4,uVar1,ar6,ar7);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x3d4ccccd,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
      dVar6 = 87960946291507.2;
    }
    if (cVar10 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar11 == '\0') {
      *(float *)(ar4 + 0x28) = fVar5;
      fVar5 = *(float *)(ar4 + 0x28);
    }
    else {
      *(undefined8 *)(ar4 + 0x28) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x28);
    }
    if (cVar10 == '\0' && 0.0 < fVar5) {
      if (cVar11 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar5;
      }
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x42d40000,fVar5);
    }
    else {
      dVar6 = 211106267570176.0;
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)dVar6 >> 0x20) < fVar8;
    }
    else {
      bVar9 = dVar6 < (double)CONCAT44(in_fr14,fVar8);
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x42e80000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 492581279399936.0;
      }
      if (cVar10 == '\0') {
        bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar9 = (double)CONCAT44(in_fr14,fVar8) < dVar6;
      }
      if (!bVar9) goto LAB_8c08060a;
LAB_8c08061a:
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0xc0400000,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar6 = 1.1920937492693184e-07;
      }
      if (cVar10 == '\0' && (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar6,0)) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3e800000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar6 = 3.06085459277653e-312;
        }
        if (cVar10 == '\0') {
          fVar8 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar8,SUB84(dVar6,0) - fVar8);
        }
        else {
          dVar6 = dVar6 - dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
      }
    }
    else {
LAB_8c08060a:
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(0x42fc0000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 844425070608384.0;
      }
      if (cVar10 == '\0') {
        bVar9 = (float)((ulonglong)dVar6 >> 0x20) < fVar8;
      }
      else {
        bVar9 = dVar6 < (double)CONCAT44(in_fr14,fVar8);
      }
      if (bVar9) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x43080000,SUB84(dVar6,0));
        }
        else {
          dVar6 = -32.00000799074769;
        }
        if (cVar10 == '\0') {
          bVar9 = fVar8 < (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar9 = (double)CONCAT44(in_fr14,fVar8) < dVar6;
        }
        if (bVar9) goto LAB_8c08061a;
      }
    }
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_c8);
    Vec3_add(ar5,auStack_c8,ar6,ar7,auStack_d8);
    FUN_8c022fc0(auStack_d8,&uStack_48,ar6,ar7);
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),in_fr3);
      dVar7 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      dVar7 = 3.051758535548288e-05;
    }
    if (cVar10 == '\0') {
      bVar9 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20)
      ;
    }
    else {
      bVar9 = dVar7 * dVar7 < dVar6;
    }
    Vec3_dtor(auStack_d8,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_c8,0xffffffff,ar6,ar7);
    if (!bVar9) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
    break;
  case 6:
    *(undefined4 *)(ar4 + 0x178) = 1;
    FUN_8c031748(ar4,0x178,ar6,ar7);
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,CAnimBody_AdvanceFrame_wrapper,ar5,ar7);
    ar6 = ar5;
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x294) = 0;
      FUN_8c03c314(ar4,0,ar5,ar7);
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
      ar7 = (int *)0x0;
      uVar3 = 0xffffffff;
      uVar1 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7);
      FUN_8c032204(ar4 + 0xb0,uVar1,uVar3,ar7,ain0);
      ar6 = (float *)0xffffffff;
      *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
    }
  }
switchD_8c0800be_default:
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(&uStack_48,0xffffffff,ar6,ar7);
  Vec3_dtor(afStack_38,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c07ff08\n.set _FUN_8c07ff08, _FUN_8c07ff08_def\n");
