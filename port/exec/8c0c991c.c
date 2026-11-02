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
undefined4 s_44_OUTWATERCAT_0c9920_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_44_OUTWATERCAT_0c9920";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  float *a6;
  float *a7;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  float fVar7;
  double dVar5;
  undefined1 *puVar8;
  double dVar6;
  undefined4 in_fr3 = 0;
  double in_xd0 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c43726e) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c43726c) = 0;
    (*(undefined1 *)(unsigned)0x8c43726e) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c437274) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = (double)CONCAT35((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c437270)+1)),0x144610000);
  }
  if ((*(undefined1 *)(unsigned)0x8c43727c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437278) = 0;
    (*(undefined1 *)(unsigned)0x8c43727c) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c437284) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437280) = 0x3c75c28f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437284) = CONCAT31((*(undefined1 *)(unsigned)0x8c437284),1);
  }
  if ((*(undefined1 *)(unsigned)0x8c43728c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437288) = 0x3b03126f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43728c) = CONCAT31((*(undefined1 *)(unsigned)0x8c43728c),1);
  }
  if ((*(undefined1 *)(unsigned)0x8c437294) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437290) = (double)CONCAT35((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c437290)+1)),0x1c0000000);
  }
  if ((*(undefined1 *)(unsigned)0x8c43729c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437298) = 0;
    (*(undefined1 *)(unsigned)0x8c43729c) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4372a4) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372a0) = 0xffffffff;
    (*(undefined1 *)(unsigned)0x8c4372a4) = '\x01';
  }
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0c84cc(((float *)(fr0_ - 0x54)) + 2,ar5_00,ar6,ar7));
  ((float *)(fr0_ - 0x54))[0] = in_fr1;
  if (cVar11 == '\0') {
    ((float *)(fr0_ - 0x54))[0] = 0.0;
  }
  ((float *)(fr0_ - 0x54))[1] = 0.0;
  if (cVar11 == '\0') {
    (*(float *)(fr0_ - 0x5c)) = 0.0;
  }
  else {
    ((float *)(fr0_ - 0x54))[0] = 0.0;
    (*(float *)(fr0_ - 0x5c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x58)) = 0;
  iVar2 = (int)*(short *)(unsigned)(ar4 + 0x2d1ac);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      if (cVar11 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437274),0x44610000);
        (*(undefined4 *)(unsigned)(unsigned)0x8c437018) = 0.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = 5.08118523482294e-315;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437290) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437294),0xc0000000);
        (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = (*(undefined4 *)(unsigned)(unsigned)0x8c437018);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = -1.3574323400435666e-249;
        (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = 900.0;
        (*(uint *)(unsigned)0x8c43701c) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = -1.3581185561256157e-249;
        in_fr1 = -2.0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437290) = 8.75853762720916e-312;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c437010) = (*(undefined4 *)(unsigned)(unsigned)0x8c43700c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437014) = (*(undefined4 *)(unsigned)(unsigned)0x8c43700c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437018) = (*(undefined4 *)(unsigned)(unsigned)0x8c43700c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437278) = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x19c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xb4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c437298) = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x104))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0,ar6,ar7));
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar11 == '\0') {
        in_fr1 = *(float *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c437298) + 4);
        fVar3 = 665.32495;
      }
      else {
        in_fr1 = 665.32495;
        fVar3 = 2.58887e-40;
      }
      if (cVar10 != '\0' || in_fr1 <= fVar3) {
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 3;
      }
      break;
    case 3:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 96)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13d1cf),ar6,ar7));
      *(int *)(unsigned)(ar4 + 0x2d1b8) = iVar2;
      if (iVar2 == -1) {
        (vsp = ((unsigned long)(fr0_ - 96)), report_error_message(((undefined1 *)(unsigned)0x8c13d1cf),((undefined1 *)(unsigned)0x8c13d1de),1,2));
      }
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 4;
      break;
    case 4:
      if (cVar11 == '\0') {
        dVar4 = CONCAT44D(0x3fc00000,(*(undefined4 *)(unsigned)(unsigned)0x8c437270));
      }
      else {
        dVar4 = 4.33415568043142e-312;
        in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
      }
      if (cVar10 == '\0') {
        fVar3 = F32LO(dVar4) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      dVar4 = in_xd0;
      if (cVar11 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437274),fVar3);
        dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = dVar4;
      (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xcc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
      if (cVar11 == '\0') {
        dVar4 = CONCAT44D(0xbe19999a,(*(undefined4 *)(unsigned)(unsigned)0x8c437290));
      }
      else {
        dVar4 = -1.357462683469945e-249;
        in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c437290);
      }
      if (cVar10 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      dVar6 = in_xd0;
      dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437038);
      dVar5 = in_xd0;
      if (cVar11 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437290) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437294),fVar3);
        dVar6 = CONCAT44D(fVar3,(*(undefined4 *)(unsigned)(unsigned)0x8c437038));
        dVar4 = in_xd0;
        dVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437290);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c437290) = dVar5;
      if (cVar10 == '\0') {
        fVar3 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar6,0);
      }
      dVar6 = dVar4;
      if (cVar11 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437038) = CONCAT44D((*(undefined1 *)(unsigned)0x8c437038),fVar3);
        dVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c437038);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c437038) = dVar6;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c437044) == 0) {
        if (cVar11 == '\0') {
          fVar7 = 630.0;
          fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
        }
        else {
          fVar3 = 630.0;
          fVar7 = 9.114239e+09;
          dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
        }
        if (cVar10 != '\0' || fVar3 <= fVar7) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = CONCAT44D(1,(*(undefined4 *)(unsigned)(unsigned)0x8c437040));
        }
      }
      else if ((*(undefined4 *)(unsigned)(unsigned)0x8c437044) == 1) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437280),(*(undefined4 *)(unsigned)(unsigned)0x8c437040));
        }
        else {
          dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437284),(*(undefined4 *)(unsigned)(unsigned)0x8c437280));
          dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437040);
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar6) + F32HI(dVar6);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = fVar3;
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = SUB84((*(undefined4 *)(unsigned)(unsigned)0x8c437040),0);
          dVar5 = CONCAT44D(0x44348000,(*(undefined4 *)(unsigned)(unsigned)0x8c437040));
          dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437270),in_fr3);
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = (*(undefined4 *)(unsigned)(unsigned)0x8c437040);
        }
        else {
          dVar5 = 5629500678504448.0;
          dVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = dVar4;
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          dVar5 = CONCAT44D(0x43340000,fVar3);
        }
        else {
          dVar5 = 3.446719454007875e+77;
        }
        if (cVar10 == '\0') {
          bVar9 = F32LO(dVar5) + F32HI(dVar5) <
                  F32HI(dVar6);
        }
        else {
          bVar9 = dVar5 + dVar5 < dVar6;
        }
        if (!bVar9) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = CONCAT44D(2,(*(undefined4 *)(unsigned)(unsigned)0x8c437040));
        }
      }
      else if ((*(undefined4 *)(unsigned)(unsigned)0x8c437044) == 2) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437288),(*(undefined4 *)(unsigned)(unsigned)0x8c437040));
        }
        else {
          dVar6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c43728c),(*(undefined4 *)(unsigned)(unsigned)0x8c437288));
          dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437040);
        }
        if (cVar10 == '\0') {
          fVar3 = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          fVar3 = SUB84(dVar6 - dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = fVar3;
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = SUB84((*(undefined4 *)(unsigned)(unsigned)0x8c437040),0);
          puVar8 = (undefined1 *)(unsigned)0x3dcccccd;
          dVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c437040);
          fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437040);
        }
        else {
          fVar3 = 0.1;
          puVar8 = ((undefined1 *)(unsigned)0x8c437270);
          dVar6 = dVar4;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = dVar6;
        if (cVar10 != '\0' || fVar3 <= (float)(uint)puVar8) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437040) = 6.87825041940734e-314;
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)(unsigned)0x44340000;
        fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
      }
      else {
        fVar3 = 720.0;
        puVar8 = ((undefined1 *)(unsigned)0x8c43700c);
        dVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
      }
      if (cVar10 == '\0' && fVar3 < (float)(uint)puVar8) {
        if (cVar11 == '\0') {
          dVar6 = CONCAT44D(0x3a902de0,(*(undefined4 *)(unsigned)(unsigned)0x8c43700c));
        }
        else {
          dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437010),(*(undefined4 *)(unsigned)(unsigned)0x8c43700c));
          dVar6 = -0.007812501704413444;
        }
        if (cVar10 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = F32LO(dVar6) - F32HI(dVar6);
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          fVar7 = -1.0;
          fVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c43700c);
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = SUB84(dVar4,0);
          (*(undefined4 *)(unsigned)(unsigned)0x8c437010) = F32HI(dVar4);
          fVar3 = -1.0;
          fVar7 = 160.0;
        }
        if (cVar10 == '\0' && fVar3 < fVar7) {
          if (cVar11 == '\0') {
            (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = -1.0;
          }
          else {
            (*(undefined4 *)(unsigned)(unsigned)0x8c43700c) = -1.0;
            (*(undefined4 *)(unsigned)(unsigned)0x8c437010) = 160.0;
          }
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)(unsigned)0x43200000;
        in_fr1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437270);
      }
      else {
        in_fr1 = 160.0;
        puVar8 = ((undefined1 *)(unsigned)0x8c437278);
      }
      if (cVar10 != '\0' || in_fr1 <= (float)(uint)puVar8) {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c437278) + 0x5e4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c437278) + 0x5e4),ar6,ar7));
        if (cVar11 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437274),0x43200000);
        }
        else {
          in_fr1 = 160.0;
          (*(undefined4 *)(unsigned)(unsigned)0x8c437270) = -1.358093006003901e-249;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c43726c) = (ushort)*ar5;
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      if (0x2d < *ar5 - (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c43726c)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  a7 = &(*(float *)(fr0_ - 0x5c));
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x13c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),((float *)(fr0_ - 0x54)),&(*(undefined4 *)(fr0_ - 0x58)),a7));
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(fr0_ - 0x58));
    in_fr1 = (*(float *)(fr0_ - 0x5c));
  }
  (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x5c));
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x58));
  ((float *)(fr0_ - 0x54))[6] = ((float *)(fr0_ - 0x54))[0];
  if (cVar11 == '\0') {
    ((float *)(fr0_ - 0x54))[2] = 0.0;
    ((float *)(fr0_ - 0x54))[4] = in_fr1;
  }
  else {
    ((float *)(fr0_ - 0x54))[4] = 500.0;
    ((float *)(fr0_ - 0x54))[2] = in_fr1;
  }
  ((float *)(fr0_ - 0x54))[3] = 500.0;
  if (cVar11 == '\0') {
    ((float *)(fr0_ - 0x54))[4] = 0.0;
  }
  else {
    ((float *)(fr0_ - 0x54))[5] = 0.0;
  }
  a6 = ((float *)(fr0_ - 0x54)) + 2;
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xd4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),((undefined1 *)(unsigned)0x8c43700c),a6,a7));
  if (*(int *)(unsigned)(ar4 + 0x2d1b0) != 4) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), s_GRAPHICS_ENV_0ca2d4(ar4,ar4 + 0x2d1b0,a6,a7));
    *(undefined4 *)(unsigned)(ar4 + 0x2d1b0) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0c8480(((float *)(fr0_ - 0x54)) + 2,0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,a6,a7));
  return 0;
}

__asm__(".globl _s_44_OUTWATERCAT_0c9920\n.set _s_44_OUTWATERCAT_0c9920, _s_44_OUTWATERCAT_0c9920_def\n");
