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
undefined4 s_64_JUNGLE_NIGHT_0e7062_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_64_JUNGLE_NIGHT_0e7062";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  double in_xd14 = 0;
  int ar4_00;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar4 = (float)ar5;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  uVar1 = 0x43b40000;
  fVar4 = (((fVar4 * 360.0) / 72000.0) * 65536.0) / 360.0;
  dVar5 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar4);
  ar4_00 = (int)fVar4;
  iVar6 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25747c(ar4_00,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(iVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c010e38(ar4_00,ar5,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),uVar1);
  }
  else {
    in_xd14 = CONCAT44D(uVar1,in_fr1);
  }
  if (*(int *)(unsigned)(ar4 + 0x10dc) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,2,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x8410) = uVar1;
    *(unsigned *)(unsigned)(ar4 + 0x83f8) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[*(int *)(unsigned)(ar4 + 0x8410)];
  }
  else if (*(int *)(unsigned)(ar4 + 0x10dc) == 36000) {
    *(undefined4 *)(unsigned)(ar4 + 0x8410) = 2;
    *(unsigned *)(unsigned)(ar4 + 0x83f8) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[*(int *)(unsigned)(ar4 + 0x8410)];
  }
  if (cVar8 == '\0') {
    dVar2 = CONCAT44D(0x461ba000,in_fr1);
  }
  else {
    dVar2 = 8.349145204665365e+24;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar2);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar2,0);
  }
  if (cVar8 == '\0') {
    in_xd14 = CONCAT44D(fVar4,fVar4);
    fVar3 = 2490.0;
  }
  else {
    fVar4 = 2490.0;
    fVar3 = 4.73527e-41;
  }
  if (cVar7 == '\0' && fVar3 < fVar4) {
    if (cVar8 == '\0') {
      in_xd14 = CONCAT44D(0x451ba000,SUB84(in_xd14,0));
    }
    else {
      in_xd14 = 7.17070546069488e-310;
    }
  }
  if (cVar7 == '\0') {
    iVar6 = (int)F32HI(in_xd14);
  }
  else {
    iVar6 = (int)in_xd14;
  }
  *(int *)(unsigned)(ar4 + 0x8400) = 0xbae - iVar6;
  return 0x8400;
}

__asm__(".globl _s_64_JUNGLE_NIGHT_0e7062\n.set _s_64_JUNGLE_NIGHT_0e7062, _s_64_JUNGLE_NIGHT_0e7062_def\n");
