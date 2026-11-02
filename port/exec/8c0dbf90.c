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
undefined4 FUN_8c0dbf90_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbf90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  float fVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  ulonglong in_dr14 = 0;
  double dVar7;
  double in_xd0 = 0;
  double in_xd14 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  dVar7 = (double)(in_dr14 & 0xffffffff00000000);
  piVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100a58(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    piVar2 = (int *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar5,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(ar4[0x29c],in_fr3);
      dVar4 = CONCAT44D(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x29c);
      dVar4 = -1.4003621681683483e-250;
      in_xd0 = in_dr0;
    }
    if (cVar8 == '\0') {
      fVar5 = F32HI(dVar4);
      fVar3 = F32LO(dVar4) * fVar5;
      in_dr0 = CONCAT44D(fVar5,fVar3);
      dVar6 = CONCAT44D(F32HI(dVar6) + fVar3,SUB84(dVar6,0));
    }
    else {
      in_dr0 = dVar4 * dVar4;
      dVar6 = dVar6 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29c] = (int)(D2U(dVar6) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29c) = dVar6;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100abc(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      piVar2 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar5,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(ar4[0x29c],in_fr3);
        dVar4 = CONCAT44D(0x41200000,(int)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        dVar6 = *(double *)(unsigned)(ar4 + 0x29c);
        dVar4 = -1.4003621681683483e-250;
        in_xd0 = in_dr0;
      }
      if (cVar8 == '\0') {
        fVar5 = F32HI(dVar4);
        fVar3 = F32LO(dVar4) * fVar5;
        in_dr0 = CONCAT44D(fVar5,fVar3);
        dVar6 = CONCAT44D(F32HI(dVar6) + fVar3,SUB84(dVar6,0));
      }
      else {
        in_dr0 = dVar4 * dVar4;
        dVar6 = dVar6 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29c] = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29c) = dVar6;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0x2dc] + 8))))(ar4 + 0x2dc,piVar2,ar6,ar7));
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = in_xd14;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b20(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(-F32HI(in_dr0),SUB84(in_dr0,0));
    }
    else {
      in_dr0 = -in_dr0;
    }
    dVar4 = dVar6;
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
      dVar4 = in_xd0;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(in_dr0) * F32HI(in_dr0);
    }
    else {
      fVar3 = SUB84(in_dr0 * in_dr0,0);
    }
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(ar4[0x29b],fVar3);
    }
    else {
      in_dr0 = *(double *)(unsigned)(ar4 + 0x29b);
    }
    if (cVar8 == '\0') {
      fVar3 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) + fVar3);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      ar4[0x29b] = SUB84(in_dr0,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29b) = dVar4;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1004b4(ar5,piVar2,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b84(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,piVar2,ar6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(-F32HI(in_dr0),SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -in_dr0;
      }
      dVar4 = dVar6;
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),SUB84(dVar7,0));
        dVar4 = in_xd0;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(in_dr0) * F32HI(in_dr0);
      }
      else {
        fVar3 = SUB84(in_dr0 * in_dr0,0);
      }
      if (cVar9 == '\0') {
        in_dr0 = CONCAT44D(ar4[0x29b],fVar3);
      }
      else {
        in_dr0 = *(double *)(unsigned)(ar4 + 0x29b);
      }
      if (cVar8 == '\0') {
        fVar3 = F32HI(in_dr0);
        in_dr0 = CONCAT44D(fVar3,F32LO(in_dr0) + fVar3);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        ar4[0x29b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29b) = dVar4;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10052c(ar5,piVar2,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100be8(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,piVar2,ar6,ar7));
    if (cVar8 == '\0') {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                               F32LO(dVar7) * F32HI(in_dr0));
    }
    else {
      dVar7 = dVar7 * in_dr0;
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(ar4[0x29a],SUB84(in_dr0,0));
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x29a);
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar7) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar7 + dVar4,0);
    }
    if (cVar9 == '\0') {
      ar4[0x29a] = (int)fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x29a) = dVar6;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1005a4(ar5,piVar2,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c34(ar5,piVar2,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,piVar2,ar6,ar7));
      if (cVar8 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),
                                 F32LO(dVar7) * F32HI(in_dr0));
      }
      else {
        dVar7 = dVar7 * in_dr0;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(ar4[0x29a],SUB84(in_dr0,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x29a);
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar7) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar7 + dVar4,0);
      }
      if (cVar9 == '\0') {
        ar4[0x29a] = (int)fVar3;
      }
      else {
        *(double *)(unsigned)(ar4 + 0x29a) = dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10061c(ar5,piVar2,ar6,ar7));
    }
  }
  piVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc990(ar4,ar5,ar6,ar7));
  if (((ar4[9] != 2) && (ar4[0x275] != 0)) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc244(ar5,piVar2,ar6,ar7)), iVar1 == 1)
     ) {
    piVar2 = (int *)(unsigned)(uint)ar4[0x275];
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d69a8(ar4 + 0x29a,piVar2,ar6,ar7));
    ar4[0x275] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,piVar2,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10022c(ar5,piVar2,ar6,ar7));
  if (iVar1 == 1) {
    piVar2 = ar4 + 0x29a;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x68))))(ar4,piVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1002a8(ar5,piVar2,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dbf90\n.set _FUN_8c0dbf90, _FUN_8c0dbf90_def\n");
