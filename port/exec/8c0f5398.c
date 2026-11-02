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
undefined4 * FUN_8c0f5398_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5398";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1 = 0;
  undefined4 uVar4;
  double dVar5;
  double in_dr12 = 0;
  double in_dr14 = 0;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 2.508760045925733e+21;
    in_dr12 = 3.062442976448328e+17;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)(unsigned)ar5 = 0;
    puVar3 = (undefined4 *)(unsigned)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(unsigned)(ar5 + 1) = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)ar5 = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar1,iVar6,ar6,ar7));
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)F32HI(in_dr12);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar2 = (int)F32HI(in_dr14);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar5 + 1) = (int)(D2U(dVar5) >> 0x20);
      *(undefined4 *)(unsigned)((int)ar5 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)(unsigned)((int)ar5 + 4) = *(undefined8 *)(unsigned)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(unsigned)(ar4 + 0x34);
  }
  return puVar3;
}

__asm__(".globl _FUN_8c0f5398\n.set _FUN_8c0f5398, _FUN_8c0f5398_def\n");
