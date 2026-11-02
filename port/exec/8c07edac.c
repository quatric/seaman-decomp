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
undefined4 FUN_8c07edac_def(int ar4,int ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07edac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0xc;
  if (*(int *)(unsigned)(ar4 + 100) == 1) {
    iVar3 = 0x17;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  piVar2 = ar6;
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(ar4 + 100) != 1) {
      ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
      in_dr0 = CONCAT44(0x40400000,(int)in_dr0);
      ar7 = ar6;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032518(ar4,ar5,((undefined4 *)(unsigned)0x8c125bf0),ar6));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x28)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      goto LAB_8c07ee84;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 3;
    iVar3 = ar5;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07ee84:
      piVar2 = (int *)(unsigned)(ar4 + 0x54);
      (vsp = ((unsigned long)(fr0_ - 76)), pure_virtual_stub(ar4,ar5,piVar2,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
      }
      goto switchD_8c07f028_default;
    }
    if (iVar1 == 2) {
      *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfe;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c034148(ar4 + 0xb0,iVar3,ar6,ar7));
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else if (iVar1 == 2) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          goto LAB_8c07efc4;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7); });
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x38)),piVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar2,ar7));
      goto switchD_8c07f028_default;
    }
    iVar3 = ar5;
    if (iVar1 != 3) goto switchD_8c07f028_default;
  }
LAB_8c07efc4:
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x48)),piVar2,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,piVar2,ar7));
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfe;
  iVar3 = *(int *)(unsigned)(ar4 + 0x128);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
    case 1:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    default:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 6:
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      break;
    case 7:
      if (*(int *)(unsigned)(ar4 + 100) == 1) {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7));
      }
    }
  }
switchD_8c07f028_default:
  (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,piVar2,ar7));
  if (cVar7 == '\0') {
    in_dr0 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar5 + 4);
  }
  if (cVar6 != '\0' || (float)in_dr0 <= F32HI(in_dr0)) {
    iVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,piVar2,ar7));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar5 = *(double *)(unsigned)(ar5 + 4);
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x3d4ccccd,fVar4);
    }
    else {
      dVar5 = -8.332610289015658e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x2c0);
    }
    if (cVar6 == '\0') {
      fVar4 = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2c0) = fVar4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c031748(ar4,iVar3,piVar2,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c07edac\n.set _FUN_8c07edac, _FUN_8c07edac_def\n");
