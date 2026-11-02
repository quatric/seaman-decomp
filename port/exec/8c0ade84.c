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
undefined4 CAnimal_m7_0ade84_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_0ade84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  float fVar4;
  double in_dr0 = 0;
  double dVar5;
  double dVar6;
  double dVar7;
  double in_dr12 = 0;
  undefined4 in_fr15 = 0;
  undefined8 in_xd0 = 0;
  double in_xd12 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x3c)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7));
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x3c));
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,ar5_00,ar6,ar7));
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), get_field_124_027930(ar4 + 0x53c,ar5_00,ar6,ar7));
  if (((iVar1 == 8) || (iVar1 == 5)) || (iVar1 == 6)) {
    dVar7 = (double)(D2U(dVar7) & 0xffffffff);
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x2c)),a6,ar7));
  if (cVar10 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
  }
  fVar4 = F32LO(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar4;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),fVar3);
  }
  else {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
  }
  fVar3 = F32HI(dVar5);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),fVar3);
    }
    else {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
    }
    fVar3 = F32HI(dVar5);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x3c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) - fVar4;
      }
      else {
        fVar3 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,fVar3);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x30);
      }
      if (cVar9 == '\0') {
        fVar3 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x2c)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(*(undefined4 *)(fr0_ - 0x2c)));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(0x3dcccccd,fVar3);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x30),fVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x30);
    }
    if (cVar9 == '\0') {
      fVar3 = F32HI(dVar5);
      dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
  }
  if (cVar9 == '\0') {
    fVar3 = F32LO(dVar5) - fVar4;
  }
  else {
    fVar3 = SUB84(dVar5 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar3);
  }
  else {
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar3 = F32HI(dVar5);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar5,0)) {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar3 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D((*(float *)(fr0_ - 0x34)),fVar3);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
    }
    fVar3 = F32HI(dVar5);
    if (cVar9 != '\0' || fVar3 <= SUB84(dVar5,0)) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x34)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) - fVar4;
      }
      else {
        fVar4 = SUB84(dVar5 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,fVar4);
      }
      else {
        dVar5 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar4 = F32HI(dVar5);
        dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(fVar3,(*(undefined4 *)(fr0_ - 0x24)));
    }
    else {
      in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) + fVar4;
    }
    else {
      fVar4 = SUB84(dVar5 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(0x3dcccccd,fVar4);
    }
    else {
      dVar5 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar10 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x38);
    }
    if (cVar9 == '\0') {
      fVar4 = F32HI(dVar5);
      dVar5 = CONCAT44D(fVar4,F32LO(dVar5) + fVar4);
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  if (cVar10 == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(int)(D2U(dVar5) >> 0x20));
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar5,0));
    dVar5 = in_xd12;
  }
  else {
    dVar6 = *(double *)(unsigned)(ar4 + 0x34);
  }
  fVar4 = F32HI(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32HI(dVar6) - fVar4;
    dVar6 = CONCAT44D(fVar3,SUB84(dVar6,0));
    bVar8 = SUB84(in_dr12,0) < fVar3;
  }
  else {
    dVar6 = dVar6 - dVar7;
    bVar8 = in_dr12 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(unsigned)(ar4 + 0x34);
      fVar3 = (*(float *)(fr0_ - 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      fVar4 = (*(float *)(fr0_ - 0x38));
      fVar3 = (*(float *)(fr0_ - 0x34));
    }
    if (cVar9 != '\0' || fVar3 <= fVar4) {
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),(*(float *)(fr0_ - 0x38)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
        dVar7 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) - F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 - dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,fVar4);
      }
      else {
        dVar7 = 6.28623017172232e-312;
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar4);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar9 == '\0') {
        fVar4 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar4 = SUB84(dVar7 + dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) + fVar4);
    }
    else {
      in_dr12 = in_dr12 + dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar6,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                 F32LO(in_dr12) - F32HI(dVar7));
    }
    else {
      in_dr12 = in_dr12 - dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(0x3dcccccd,SUB84(dVar7,0));
    }
    else {
      dVar7 = 6.28623017172232e-312;
    }
    if (cVar9 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                 F32LO(in_dr12) * F32HI(dVar7));
    }
    else {
      in_dr12 = in_dr12 * dVar7;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar9 == '\0') {
      fVar4 = F32LO(in_dr12) + F32HI(dVar7);
    }
    else {
      fVar4 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar4;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x2c)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0ade84\n.set _CAnimal_m7_0ade84, _CAnimal_m7_0ade84_def\n");
