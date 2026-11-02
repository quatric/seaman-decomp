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
undefined4 FUN_8c053730_def(int ar4,int *ar5,undefined4 ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c053730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  code *ar5_00;
  undefined4 uVar4;
  undefined *ar5_01;
  undefined1 *puVar5;
  undefined1 *ar7_00;
  undefined4 uVar6;
  double dVar7;
  float fVar9;
  undefined8 uVar8;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 ain0;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  ar5_00 = ((void *)0x8c022c4c);
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),((void *)0x8c022c4c),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031748(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022d04(ar4 + 0x90,ar5_00,ar6,ar7_00));
  puVar5 = ((undefined1 *)(fr0_ - 0x38));
  ({ unsigned long t0_ = (unsigned long)(puVar5); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_scale(ar4 + 0x14,((undefined1 *)(unsigned)0x8c1365ac),puVar5,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x38)),puVar5,ar7_00); });
  puVar5 = ar7;
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x48)),ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar5,ar7_00));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar5,ar7_00));
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
    dVar7 = 52776566443212.8;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar7);
    dVar7 = CONCAT44D(fVar9,F32LO(dVar7) * fVar9);
  }
  else {
    dVar7 = dVar7 * dVar7;
  }
  if (cVar12 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar7,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
  }
  (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c05ae54(ar4,uVar4,puVar5,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c053724(ar5,uVar4,puVar5,ar7_00));
  ain0 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x12c)) >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar4,puVar5,ar7_00));
    if (iVar3 != 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar4,puVar5,ar7_00));
      uVar2 = (undefined4)(D2U(dVar7) >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x348) = uVar4;
      ar5_01 = ((undefined1 *)(unsigned)0x8c125d48);
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c125d48),puVar5,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x348) == 3) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),ar5_01,puVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),puVar5,ar7_00));
        ar5_01 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar5,ar7_00));
      }
      else if (*(int *)(unsigned)(ar4 + 0x348) == 4) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),ar5_01,puVar5,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x68)),puVar5,ar7_00));
        ar5_01 = (undefined *)(unsigned)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar5,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_01,puVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x78)),((undefined1 *)(fr0_ - 0x28)),puVar5,ar7_00));
      if (cVar12 == '\0') {
        dVar7 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = -7.932637925129825e-251;
      }
      bVar10 = cVar11 == '\0';
      fVar9 = F32LO(dVar7);
      uVar1 = D2U(dVar7) >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar5,ar7_00));
      if (bVar10 && fVar9 < (float)uVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,0,puVar5,ar7_00));
      if ((*(int *)(unsigned)(ar4 + 0x348) != *(int *)(unsigned)(ar4 + 0x344)) && (*(int *)(unsigned)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(ar4 + 0x348);
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x344);
    if (iVar3 == 0) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else if (iVar3 != 1) {
        if (iVar3 == 2) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 304)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar4,puVar5,ar7_00); });
          if (cVar12 == '\0') {
            uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24c),(int)(D2U(dVar7) >> 0x20));
          }
          else {
            uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x24c);
          }
          if (cVar11 != '\0' || F32HI(uVar8) <= (float)uVar8) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,uVar4,puVar5,ar7_00));
            if (iVar3 == 7) {
              (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
              if (cVar12 == '\0') {
                *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)uVar8 >> 0x20);
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x248) = uVar8;
              }
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar4,puVar5,ar7_00));
          }
        }
        goto LAB_8c053eda;
      }
      iVar3 = *(int *)(unsigned)(ar4 + 0x27c);
      if (iVar3 == 0) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      }
      else if (iVar3 == 3) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0xb;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
      }
      else if (iVar3 == 4) {
        ar7_00 = (undefined1 *)(unsigned)0x0;
        puVar5 = (undefined1 *)(unsigned)0xffffffff;
        uVar4 = 0xc;
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0));
      }
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022d04(ar4 + 0x248,uVar4,puVar5,ar7_00));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
      if (cVar12 == '\0') {
        *(int *)(unsigned)(ar4 + 0x248) = (int)(D2U(dVar7) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x248) = dVar7;
      }
    }
    else if ((iVar3 == 3) || (iVar3 == 4)) {
      iVar3 = *(int *)(unsigned)(ar4 + 300);
      if (iVar3 == 0) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,puVar5,ar7_00));
        if (iVar3 == 1) {
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x88)),uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x88)),puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar5,ar7_00));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c032ab0(ar4,uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x98)),uVar4,puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x98)),puVar5,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar5,ar7_00));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar3 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa8))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar4,puVar5,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb8))); *(unsigned *)((((unsigned long)(fr0_ - 304)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 304)) - 8); FUN_8c0230f0(ar4 + 0x54,uVar4,puVar5,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa8)),((undefined1 *)(fr0_ - 0xb8)),puVar5,ar7_00));
        if (cVar12 == '\0') {
          in_fr15 = F32HI(dVar7);
        }
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,puVar5,ar7_00));
        uVar2 = SUB84(dVar7,0);
        uVar4 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar5,ar7_00));
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x41200000,uVar2);
        }
        else {
          dVar7 = 6.37138561414139e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = F32HI(dVar7) < in_fr15;
        }
        else {
          bVar10 = dVar7 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar10) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x298) = 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 304)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar4,puVar5,ar7_00));
      }
      else if (iVar3 == 2) {
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xc8)),ar4 + 0x54,puVar5,ar7_00));
        ar7_00 = ((undefined1 *)(fr0_ - 0xc8));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c04e2d0(ar4,ar7,ar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar7,ar7_00));
        puVar5 = ar7;
        if (iVar3 == 0) {
          puVar5 = (undefined1 *)(unsigned)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,((void *)0x8c026858),puVar5,ar7_00));
    if (iVar3 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
    }
  }
LAB_8c053eda:
  (vsp = ((unsigned long)(fr0_ - 304)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,puVar5,ar7_00));
  return uVar6;
}

__asm__(".globl _FUN_8c053730\n.set _FUN_8c053730, _FUN_8c053730_def\n");
