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
undefined4 FUN_8c04d62c_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04d62c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  int *ar6_00;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  double in_dr0 = 0;
  undefined4 uVar10;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3 = 0;
  undefined4 in_fr5 = 0;
  ulonglong in_dr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar3 = 1;
  dVar8 = (double)(in_dr14 & 0xffffffff00000000);
  if (2 < *(int *)(unsigned)(ar4 + 0x128)) {
    in_dr0 = CONCAT44D(0x3ecccccd,SUB84(in_dr0,0));
    dVar8 = CONCAT44D((int)(in_dr14 >> 0x20),*(float *)(unsigned)(ar4 + 0x48) * 0.4);
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 7) && (-1 < iVar1)) {
    ar5_00 = ar5;
    ar6_00 = ar6;
                    
    switch(iVar1) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 1) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_dr0 & 0xffffffff;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
      }
      break;
    case 1:
      ar7 = 0;
      ar6_00 = (int *)(unsigned)0xffffffff;
      ar5_00 = 9;
      (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,9,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar13 == '\0') {
        in_fr5 = 0x3f99999a;
      }
      else {
        in_fr5 = 0x3f4ccccd;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        *(int *)(unsigned)(ar4 + 0x278) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x278) = in_dr0;
      }
    case 2:
      uVar2 = SUB84(in_dr0,0);
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x94);
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        fVar6 = -0.005;
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbba3d70a;
      }
      else {
        uVar2 = 0xbba3d70a;
        fVar6 = 5.43704e-43;
        *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x184bba3d70a;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5_00,ar6_00,ar7));
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
        uVar2 = in_fr3;
      }
      else {
        dVar7 = -8.332610302023455e-251;
      }
      if (cVar12 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
        dVar8 = CONCAT44D((fVar6 - fVar4) - F32LO(dVar8),uVar2);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
        dVar8 = (CONCAT44D(fVar6,uVar2) - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar4);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar8) < F32HI(dVar7);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7));
        dVar7 = (double)(D2U(dVar7) & 0xffffffff);
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(double *)(unsigned)(ar4 + 0xa0) = dVar7;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), vec3_clear(ar4 + 0x90,ar5_00,ar6_00,ar7));
      }
      uVar5 = SUB84(dVar7,0);
      if (cVar13 != '\0') {
        in_fr5 = 0x42c80000;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c05ae54(ar4,ar5_00,ar6_00,ar7));
      if (cVar13 != '\0') {
        in_fr5 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x278);
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,ar6_00,ar7));
      if (iVar1 == 1) {
        uVar2 = 9;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,9,ar6_00,ar7));
        if (cVar12 == '\0') {
          dVar8 = CONCAT44D((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar11 = dVar8 < (double)(ulonglong)uVar5;
        }
        if ((bVar11) && (cVar13 != '\0')) {
          uVar5 = 0x4f800000;
        }
        uVar10 = 0x3f800000;
        (vsp = ((unsigned long)(fr0_ - 64)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,uVar2,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,uVar2,ar6_00,ar7));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = uVar10;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = CONCAT44(uVar10,uVar5);
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5,ar6,ar7));
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar7 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        dVar7 = 1.53683721570537e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
        dVar8 = CONCAT44D((F32HI(in_dr0) - fVar6) - F32LO(dVar8),
                                 SUB84(in_dr0,0));
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
        dVar8 = (in_dr0 - dVar7 * dVar7) - dVar8;
      }
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),fVar6);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar8) < F32HI(dVar7);
      }
      else {
        bVar11 = dVar8 < dVar7;
      }
      if (bVar11) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2d4,iVar1,ar6,ar7));
        uVar5 = SUB84(dVar7,0);
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x2a8,iVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c022d04(ar4 + 0x90,iVar1,ar6,ar7));
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        iVar1 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 64)), Vec3_assign(ar4 + 0x80,iVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,iVar1,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0x1518;
      }
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,ar5,ar6,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x280);
      *(int *)(unsigned)(ar4 + 0x280) = iVar1 + -1;
      if (iVar1 < 1) {
        uVar9 = (ulonglong)in_dr0 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c03c314(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
        if (cVar13 == '\0') {
          *(int *)(unsigned)(ar4 + 0xa0) = (int)(uVar9 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar9;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031700(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      }
      break;
    case 5:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6,ar7));
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x3da3d70a,*(undefined4 *)(unsigned)(ar4 + 0x48));
        (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x3c)) = SUB84(in_dr0,0);
        dVar8 = -8.332610297860959e-251;
        (*(undefined4 *)(fr0_ - 0x38)) = uVar2;
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),fVar6);
      }
      else {
        dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      if (cVar12 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar13 == '\0') {
        uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar6);
      }
      else {
        uVar9 = *(ulonglong *)(unsigned)(ar5 + 4);
      }
      if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
        uVar9 = uVar9 & 0xffffffff;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x70) = uVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031748(ar4,iVar1,ar6,ar7));
        uVar5 = (uint)uVar9;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7fc0c,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar5;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c04d62c\n.set _FUN_8c04d62c, _FUN_8c04d62c_def\n");
