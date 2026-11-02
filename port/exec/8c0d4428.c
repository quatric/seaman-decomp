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
undefined4 * FUN_8c0d4428_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d4428";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int *piVar2;
  float *pfVar3;
  int ar5_00;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar8;
  code *pcVar9;
  double dVar7;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  int ar4_00;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar5_00 = ar5;
  (*(undefined4 *)(fr0_ - 0x1c)) = in_PR;
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar4 = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(ar4 + 8,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015af8(ar4 + 0x1c,ar5_00,ar6,ar7));
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
    if (cVar11 == '\0') {
      fVar8 = -150.0;
      fVar6 = (*(float *)(fr0_ - 0x24));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      fVar6 = -150.0;
      fVar8 = 800.0;
    }
    if (cVar10 != '\0' || fVar8 <= fVar6) {
      if (cVar11 == '\0') {
        fVar8 = 800.0;
        fVar6 = (*(float *)(fr0_ - 0x24));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        fVar6 = 800.0;
        fVar8 = -100.0;
      }
      if (cVar10 != '\0' || fVar6 <= fVar8) {
        if (cVar11 == '\0') {
          fVar8 = -100.0;
          fVar6 = (*(float *)(fr0_ - 0x20));
        }
        else {
          in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
          fVar6 = -100.0;
          fVar8 = 600.0;
        }
        if (cVar10 != '\0' || fVar8 <= fVar6) {
          if (cVar11 == '\0') {
            fVar8 = 600.0;
            fVar6 = (*(float *)(fr0_ - 0x20));
          }
          else {
            in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
            fVar6 = 600.0;
            fVar8 = 4.87652e-43;
          }
          if (cVar10 != '\0' || fVar6 <= fVar8) {
            pfVar3 = (float *)(unsigned)(ar5 + iVar5 * 0x16c + 0x15c);
            if (cVar11 == '\0') {
              fVar6 = *pfVar3;
              pcVar9 = (code *)0xbf6b851f;
            }
            else {
              in_xd0 = *(undefined8 *)(unsigned)pfVar3;
              fVar6 = -0.92;
              pcVar9 = ((void *)0x8c256328);
            }
            if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
              uVar4 = 0;
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,ar5_00,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019058(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c019160(uVar4,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c015af8(ar4 + iVar5 * 4 + 0x20,ar5_00,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,ar5_00,ar6,ar7));
            }
          }
        }
      }
    }
  }
  uVar4 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar2 + 8);
  iVar5 = (int)*(short *)(unsigned)(ar4 + 4);
  *(undefined4 *)(unsigned)(iVar5 * 0xc + *piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 8);
  *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d49cc(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d4a90(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0d5d28(ar4,ar5_00,ar6,ar7));
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x47800000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.745782517784109e-250;
  }
  if (cVar10 == '\0') {
    ar4_00 = (int)(F32LO(dVar7) / F32HI(dVar7));
  }
  else {
    ar4_00 = (int)(dVar7 / dVar7);
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c25747c(ar4_00,ar5_00,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c010e38(ar4_00,ar5_00,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar7 = CONCAT44D(0x41200000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
  }
  else {
    dVar7 = 6.207226606352174e-78;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  }
  if (cVar10 == '\0') {
    fVar6 = F32LO(dVar7) + F32HI(dVar7);
  }
  else {
    fVar6 = SUB84(dVar7 + dVar7,0);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar6);
    pcVar9 = (code *)0x43b40000;
  }
  else {
    fVar6 = 360.0;
    pcVar9 = ((void *)0x8c25747c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = in_xd0;
  }
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
  if (cVar10 != '\0' || (float)(uint)pcVar9 <= fVar6) {
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D(0x43b40000,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c437c70));
    }
    else {
      dVar7 = -3.745782517784109e-250;
      in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
    }
    if (cVar10 == '\0') {
      fVar6 = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar7 - dVar7,0);
    }
    uVar1 = in_xd0;
    if (cVar11 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c437c74),fVar6);
      uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437c70);
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437c70) = uVar1;
  return ((undefined4 *)(unsigned)0x8c0d46bc);
}

__asm__(".globl _FUN_8c0d4428\n.set _FUN_8c0d4428, _FUN_8c0d4428_def\n");
