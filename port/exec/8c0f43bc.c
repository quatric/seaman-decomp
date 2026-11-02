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
undefined4 FUN_8c0f43bc_def(int ar4,int *ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0f43bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  float *a6;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar11;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x90)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0xa0)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0xb0)),ar5_00,ar6,ar7));
  fVar11 = 0.0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1d4))))(ar5,ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_026024(ar5,ar5_00,ar6,ar7));
  a6 = &(*(float *)(fr0_ - 0xa0));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x90)),a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x38))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),((float *)(fr0_ - 0x80)),a6,ar7));
  pfVar4 = ((float *)(fr0_ - 0x80));
  iVar5 = 0;
  do {
    if (7 < iVar5) {
LAB_8c0f4912:
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(float *)(fr0_ - 0xb0)),0xffffffff,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(float *)(fr0_ - 0xa0)),0xffffffff,a6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x90)),0xffffffff,a6,ar7));
      return uVar1;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),*pfVar4);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x140) = CONCAT44(0x3f800000,fVar6);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),fVar6);
        *(undefined4 *)(unsigned)(ar4 + 0x150) = (*(undefined4 *)(fr0_ - 0x90));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = uVar7 & 0xffffffff;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    fVar6 = (*(float *)(fr0_ - 0xa0));
    fVar10 = (*(float *)(fr0_ - 0x9c));
    if (cVar14 == '\0') {
      fVar6 = *pfVar4;
      fVar10 = (*(float *)(fr0_ - 0xa0));
    }
    if (cVar13 == '\0' && fVar10 < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0xbf800000;
      }
      else {
        fVar6 = -1.0;
        *(undefined8 *)(unsigned)(ar4 + 0x140) = 0x144bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0xa0)),fVar6);
        *(float *)(unsigned)(ar4 + 0x150) = (*(float *)(fr0_ - 0xa0));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),(*(float *)(fr0_ - 0xa0)));
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x88)),pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
    }
    if (cVar13 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x148) = CONCAT44(0x3f800000,(float)uVar7);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = (*(undefined4 *)(fr0_ - 0x88));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(unsigned)(ar4 + 0x158) = CONCAT44((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),(*(undefined4 *)(fr0_ - 0x98)));
    }
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
        uVar7 = CONCAT44(0xbf800000,(float)uVar7);
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
        uVar7 = 0x150bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x148) = 0x150bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = (*(undefined4 *)(fr0_ - 0x98));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(unsigned)(ar4 + 0x158) = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),(*(undefined4 *)(fr0_ - 0x98)));
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),pfVar4[1]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),(*(float *)(fr0_ - 0x9c)));
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
        fVar6 = -1.0;
        *(undefined8 *)(unsigned)(ar4 + 0x144) = 0x148bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),fVar6);
        *(float *)(unsigned)(ar4 + 0x154) = (*(float *)(fr0_ - 0x9c));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),(*(float *)(fr0_ - 0x9c)));
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0xb0)) = *pfVar4;
      (*(float *)(fr0_ - 0xac)) = pfVar4[1];
      (*(float *)(fr0_ - 0xa8)) = pfVar4[2];
      uVar8 = CONCAT44((*(float *)(fr0_ - 0xa8)),fVar6);
    }
    else {
      (*(float *)(fr0_ - 0xb0)) = (float)*(undefined8 *)(unsigned)pfVar4;
      (*(float *)(fr0_ - 0xac)) = (float)*(undefined8 *)(unsigned)(pfVar4 + 1);
      uVar8 = *(undefined8 *)(unsigned)(pfVar4 + 2);
      (*(float *)(fr0_ - 0xa8)) = (float)uVar8;
      (*(undefined4 *)(fr0_ - 0xa4)) = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    if (iVar2 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x130))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
      if (iVar3 == 2) {
        ar7 = ar4 + 0x150;
        a6 = (float *)(unsigned)(ar4 + 0x140);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c017900(uVar1,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
        if (iVar3 == 1) {
          *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
        if (cVar14 == '\0') {
          fVar11 = F32HI(uVar8);
          dVar9 = CONCAT44D(pfVar4[1],(int)uVar8);
        }
        else {
          dVar9 = *(double *)(unsigned)(pfVar4 + 1);
          in_xd14 = uVar8;
        }
        if (cVar13 == '\0') {
          bVar12 = F32HI(dVar9) < fVar11;
        }
        else {
          bVar12 = dVar9 < CONCAT44D(in_fr14,fVar11);
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x144) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
            *(float *)(unsigned)(ar4 + 0x154) = fVar11;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x150) = D2U(dVar9) & 0xffffffff;
            *(undefined8 *)(unsigned)(ar4 + 0x154) = in_xd14;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x158) = D2U(dVar9) & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x144) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x150) = 0xbf800000;
          *(undefined4 *)(unsigned)(ar4 + 0x154) = 0xbf800000;
          *(undefined4 *)(unsigned)(ar4 + 0x158) = 0xbf800000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x150) = 0x154bf800000;
          *(undefined8 *)(unsigned)(ar4 + 0x154) = 0x154bf800000;
          *(undefined8 *)(unsigned)(ar4 + 0x158) = 0x154bf800000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
      }
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
      if (cVar14 == '\0') {
        fVar11 = F32HI(uVar8);
        dVar9 = CONCAT44D(pfVar4[1],(int)uVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(pfVar4 + 1);
        in_xd14 = uVar8;
      }
      if (cVar13 == '\0') {
        bVar12 = F32HI(dVar9) < fVar11;
      }
      else {
        bVar12 = dVar9 < CONCAT44D(in_fr14,fVar11);
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x144) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
          *(float *)(unsigned)(ar4 + 0x154) = fVar11;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x150) = D2U(dVar9) & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x154) = in_xd14;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x158) = D2U(dVar9) & 0xffffffff;
        }
        *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
        goto LAB_8c0f4912;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = D2U(dVar9) & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0xbf800000;
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0xbf800000;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
        *(undefined8 *)(unsigned)(ar4 + 0x150) = 0x154bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x154) = 0x154bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x158) = 0x154bf800000;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 3;
  } while( true );
}

__asm__(".globl _FUN_8c0f43bc\n.set _FUN_8c0f43bc, _FUN_8c0f43bc_def\n");
