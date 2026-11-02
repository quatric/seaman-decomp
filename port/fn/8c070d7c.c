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
