#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0526a0_def(code *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0526a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  code *ar6_00;
  code *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 in_dr0 = 0;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  undefined8 in_xd0 = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  uVar4 = 1;
  uVar8 = 1;
  pcVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),uVar4,pcVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar3,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x40)),((undefined1 *)(fr0_ - 0x60)),pcVar3,ar7));
  uVar1 = in_dr0;
  if (cVar14 == '\0') {
    (*(undefined8 *)(fr0_ - 0x180)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x180))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x180));
  }
  (*(undefined8 *)(fr0_ - 0x180)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar3,ar7));
  ar7_00 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,pcVar3,((void *)0x8c022cb0)));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,pcVar3,ar7_00));
  if (ar6 != (code *)0x0) {
    if (ar6 == (code *)0x1) {
      pcVar3 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28c));
      uVar4 = 5;
      if (((int)pcVar3 < 6) && (-1 < (int)pcVar3)) {
        ar6_00 = (code *)((int)pcVar3 * 4);
                    
        switch((unsigned long)pcVar3) {
        case 0x0:
          if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7_00));
            return 0;
          }
          *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
          ar6_00 = ar4;
        case 0x1:
          pcVar3 = ar6_00;
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057164(ar4,ar5,pcVar3,ar7_00));
          if (iVar5 == 0) {
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
          }
          break;
        case 0x2:
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x70)),5,ar6_00,ar7_00));
          uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar4;
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,ar6_00,ar7_00); });
          ar6_00 = ((void *)0x8c022ce8);
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x90)),uVar4,((void *)0x8c022ce8),ar7_00));
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x90)),ar6_00,ar7_00));
          if (cVar14 == '\0') {
            *(int *)(unsigned)(ar4 + 0x224) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x224) = in_dr0;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6_00,ar7_00));
          uVar4 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6_00,ar7_00));
          if (cVar14 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x224);
            fVar12 = 30.0;
          }
          else {
            fVar9 = 30.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_01 = 0;
            uVar7 = 0xffffffff;
            uVar4 = 0x1a;
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,uVar7,ar7_01));
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 3;
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
            pcVar3 = (code *)0x28c;
            ar7_00 = ar4;
            break;
          }
          if (cVar14 == '\0') {
            fVar9 = *(float *)(unsigned)(ar4 + 0x224);
            fVar12 = 70.0;
          }
          else {
            fVar9 = 70.0;
            fVar12 = -1.0;
          }
          if (cVar13 == '\0' && fVar9 < fVar12) {
            ar7_00 = (code *)0x0;
            pcVar3 = (code *)0xffffffff;
            uVar4 = 0x1a;
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,pcVar3,ar7_00));
            *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 3;
            break;
          }
          if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),uVar4,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xc0)),ar6_00,ar7_00); });
            ar6_00 = (code *)((undefined1 *)(fr0_ - 0xd0));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,ar6_00,ar7_00));
            uVar4 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,ar6_00,ar7_00));
          }
          else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar4,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa0)),uVar4,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xa0)),ar6_00,ar7_00); });
            ar6_00 = (code *)((undefined1 *)(fr0_ - 0xb0));
            (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057b6c(ar4,ar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6_00,ar7_00));
            uVar4 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6_00,ar7_00));
          }
          (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
        case 0x3:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c057e58(ar4,uVar4,ar6_00,ar7_00));
          pcVar3 = ar6_00;
          if (iVar5 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x28c) = 1;
          }
          break;
        case 0x4:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,5,ar6_00,ar7_00));
          pcVar3 = ar6_00;
          if (iVar5 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            uVar8 = 0;
          }
          break;
        case 0x5:
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
          uVar8 = 0;
          pcVar3 = ar6_00;
        }
      }
      goto switchD_8c0527a4_default;
    }
    if (ar6 != (code *)0x2) goto switchD_8c0527a4_default;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365a4),pcVar3,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,((undefined1 *)(fr0_ - 0xe0)),pcVar3,ar7_00); });
  pcVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0xf0)),ar5,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,pcVar3,ar7_00));
  iVar5 = -1;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,pcVar3,ar7_00));
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar10 = 1.38406752724369e-311;
  }
  if (cVar13 == '\0') {
    fVar9 = F32HI(dVar10);
    dVar10 = CONCAT44D(fVar9,F32LO(dVar10) * fVar9);
  }
  else {
    dVar10 = dVar10 * dVar10;
  }
  if (cVar14 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar10,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x28c);
  if (iVar2 == 0) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05c28c(ar4,iVar5,pcVar3,ar7_00));
    if (iVar5 == 0) {
      *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + 1;
    }
    goto switchD_8c0527a4_default;
  }
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x100)),iVar5,pcVar3,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x100)),pcVar3,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar4;
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x100)),0xffffffff,pcVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x110))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,pcVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x120)),uVar4,pcVar3,ar7_00));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x120)),uVar4,pcVar3,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x110)),((undefined1 *)(fr0_ - 0x130)),pcVar3,ar7_00));
    if (cVar14 == '\0') {
      *(int *)(unsigned)(ar4 + 0x224) = (int)(D2U(dVar10) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x224) = dVar10;
    }
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,pcVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x110)),0xffffffff,pcVar3,ar7_00));
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x420c0000,*(undefined4 *)(unsigned)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c420c0000;
    }
    if (cVar13 == '\0' && (float)uVar11 < (float)(uVar11 >> 0x20)) {
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = 0;
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      uVar11 = CONCAT44(0x425c0000,*(undefined4 *)(unsigned)(ar4 + 0x224));
    }
    else {
      uVar11 = 0x28c425c0000;
    }
    fVar9 = (float)uVar11;
    if (cVar13 == '\0' && fVar9 < (float)(uVar11 >> 0x20)) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar11 & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      goto switchD_8c0527a4_default;
    }
    if (cVar14 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
    }
    else {
      fVar9 = 45.0;
      *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x27c42340000;
    }
    if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
    }
    else if (*(int *)(unsigned)(ar4 + 0x27c) == 4) {
      ar7_00 = (code *)0x0;
      pcVar3 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
    (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,pcVar3,ar7_00));
    if (cVar14 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)fVar9;
    }
    pcVar3 = (code *)0x28c;
    iVar5 = *(int *)(unsigned)(ar4 + 0x28c);
    *(int *)(unsigned)(ar4 + 0x28c) = iVar5 + 1;
  }
  else if (iVar2 != 2) {
    if (iVar2 == 3) {
      uVar8 = 0;
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = D2U(dVar10) & 0xffffffff;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
      pcVar3 = (code *)0x0;
      ar7_00 = (code *)0x28c;
    }
    goto switchD_8c0527a4_default;
  }
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05ae54(ar4,iVar5,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x140)),iVar5,pcVar3,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x140)),((undefined1 *)(unsigned)0x8c1365a8),pcVar3,ar7_00); });
  puVar6 = ((undefined1 *)(fr0_ - 0x150));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); Vec3_add(ar5,puVar6,pcVar3,ar7_00); });
  uVar4 = (vsp = ((unsigned long)(fr0_ - 388)), get_field_1c_026dd8(ar4 + 0xb0,puVar6,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar4,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x16c)),ar4 + 0x224,pcVar3,ar7_00));
  pcVar3 = ar4 + 0x14;
  puVar6 = ((undefined1 *)(fr0_ - 0x160));
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c031eb0(ar4,ar5,puVar6,pcVar3); });
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x180)) + 4,0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,puVar6,pcVar3));
  uVar7 = 0xffffffff;
  puVar6 = ((undefined1 *)(fr0_ - 0x150));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(puVar6,0xffffffff,puVar6,0xffffffff));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,puVar6,uVar7));
  pcVar3 = (code *)(vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar6,uVar7));
  ar7_00 = pcVar3;
  if (pcVar3 == (code *)0x1) {
    *(int *)(unsigned)(ar4 + 0x28c) = *(int *)(unsigned)(ar4 + 0x28c) + -1;
  }
switchD_8c0527a4_default:
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar3,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,pcVar3,ar7_00));
  return uVar8;
}

__asm__(".globl _FUN_8c0526a0\n.set _FUN_8c0526a0, _FUN_8c0526a0_def\n");
