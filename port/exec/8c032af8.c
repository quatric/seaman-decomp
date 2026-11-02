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
int FUN_8c032af8_def(undefined4 ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c032af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int ar7_00;
  undefined4 in_fr1 = 0;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = ar5;
  if (ar5 != ar6) {
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand_range(ar4,ar5,ar6,ar7));
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand_range(ar4,ar5,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1 + iVar2,2,iVar3,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D((float)(ar7 + -0x32),(float)iVar3);
    }
    else {
      dVar6 = (double)(ar7 + -0x32);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(0x3c23d70a,in_fr1);
    }
    else {
      dVar4 = -1.5729774083467465e+308;
    }
    if (cVar9 == '\0') {
      fVar7 = F32HI(dVar6) * F32HI(dVar4) *
              (float)(ar6 - ar5);
      fVar5 = F32LO(dVar6) + fVar7;
      dVar6 = CONCAT44D(fVar7,fVar5);
      bVar8 = (float)ar6 < fVar5;
    }
    else {
      dVar6 = dVar6 * dVar4 * (double)(ar6 - ar5);
      dVar6 = dVar6 + dVar6;
      fVar5 = F32LO(dVar6);
      bVar8 = (double)ar6 < dVar6;
    }
    if (bVar8) {
      if (cVar9 == '\0') {
        iVar3 = (int)((float)(ar6 << 1) - fVar5);
      }
      else {
        iVar3 = (int)((double)(ar6 << 1) - dVar6);
      }
    }
    else {
      if (cVar9 == '\0') {
        bVar8 = fVar5 < (float)ar5;
      }
      else {
        bVar8 = dVar6 < (double)ar5;
      }
      if (bVar8) {
        if (cVar9 == '\0') {
          iVar3 = (int)((float)(ar5 << 1) - fVar5);
        }
        else {
          iVar3 = (int)((double)(ar5 << 1) - dVar6);
        }
      }
      else if (cVar9 == '\0') {
        iVar3 = (int)fVar5;
      }
      else {
        iVar3 = (int)dVar6;
      }
    }
  }
  if (iVar3 < ar5) {
    iVar3 = ar5;
  }
  if (ar6 < iVar3) {
    iVar3 = ar6;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c032af8\n.set _FUN_8c032af8, _FUN_8c032af8_def\n");
