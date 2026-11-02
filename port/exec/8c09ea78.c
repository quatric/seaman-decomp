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
undefined4 FUN_8c09ea78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ea78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 124; for (int i_ = 0; i_ < 124; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  undefined1 *ar4_00;
  int ar5_00;
  undefined4 ar5_01;
  float fVar5;
  ulonglong in_dr0 = 0;
  double dVar6;
  code *pcVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar4_00 = ((undefined1 *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_ctor_zero(ar4_00,ar5,ar6,ar7));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c284d80) < 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), rand(ar4_00,ar5,ar6,ar7));
    ar5 = 5;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 124)), libgcc_divide_helper_01031c(uVar2,5,ar6,ar7));
    if (iVar3 == 0) {
      for (iVar3 = 0; fVar5 = (float)in_dr0, iVar3 < 3; iVar3 = iVar3 + 1) {
        if (cVar9 == '\0') {
          fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4);
        }
        in_dr0 = (ulonglong)(uint)fVar5;
        if ((fVar5 == 0.0) && (*(int *)(unsigned)(ar4 + 0xfd0) == 0)) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(iVar3 + 2,ar5,ar6,ar7); });
          ar5_00 = ar4 + 0x30;
          (vsp = ((unsigned long)(fr0_ - 124)), Vec3_assign(((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
          if (cVar9 == '\0') {
            dVar6 = CONCAT44D(0x41700000,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
          }
          else {
            dVar6 = -3.1600868374053233e-250;
            in_xd0 = (*(undefined8 *)(fr0_ - 0x14));
          }
          if (cVar8 == '\0') {
            fVar5 = F32LO(dVar6) + F32HI(dVar6);
          }
          else {
            fVar5 = SUB84(dVar6 + dVar6,0);
          }
          uVar1 = in_xd0;
          if (cVar9 == '\0') {
            (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),fVar5);
            uVar1 = (*(undefined8 *)(fr0_ - 0x14));
          }
          (*(undefined8 *)(fr0_ - 0x14)) = uVar1;
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c2219ac(iVar3 + 2,ar5_00,ar6,ar7); });
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4) = 0x3dcccccd;
          }
          else {
            *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + iVar3 * 4) = 0x8c22195c3dcccccd;
          }
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + iVar3 * 4) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + 1;
          *(int *)(unsigned)(ar4 + 0xfd0) = iVar3 + 1;
          ar5 = 1;
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,1,ar6,ar7));
          break;
        }
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0xfd0) != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c2219ac(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    iVar3 = *(int *)(unsigned)(ar4 + 0xfd0) + 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21415c(iVar3,ar5,ar6,ar7); });
    if (*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) == 1) {
      pfVar4 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (cVar8 != '\0' || 1.0 <= fVar5) {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
      }
    }
    else {
      pfVar4 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x3c23d70a,*pfVar4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pfVar4;
        dVar6 = -3.01216570193662e-250;
      }
      if (cVar8 == '\0') {
        fVar5 = F32LO(dVar6) - F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
      if (cVar9 == '\0') {
        *pfVar4 = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)pfVar4 = in_xd0;
      }
      if (cVar9 == '\0') {
        fVar5 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
        pcVar7 = (code *)0x3dcccccd;
      }
      else {
        fVar5 = 0.1;
        pcVar7 = ((void *)0x8c22195c);
      }
      if (cVar8 != '\0' || fVar5 <= (float)(uint)pcVar7) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), rand(iVar3,ar5,ar6,ar7));
        ar5_01 = 10;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 124)), libgcc_divide_helper_01031c(uVar2,10,ar6,ar7));
        if (iVar3 == 0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) =
                 (ulonglong)(uint)fVar5;
          }
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5_01,ar6,ar7); });
          (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 1;
        }
      }
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 124)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c09ea78\n.set _FUN_8c09ea78, _FUN_8c09ea78_def\n");
