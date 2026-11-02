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
int FUN_8c0cf9b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cf9b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 196; for (int i_ = 0; i_ < 196; i_++) z_[i_] = 0; }
  int iVar1;
  short *ar4_00;
  code *ar5_00;
  code *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  code *pcVar7;
  double dVar6;
  undefined4 uVar8;
  undefined8 in_dr2 = 0;
  double dVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  ar7_00 = 4;
  ar6_00 = ((void *)0x8c016660);
  ar5_00 = ((void *)0x8c016690);
  ar4_00 = ((short *)(fr0_ - 0x7c));
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 196)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 196)) - 8); FUN_8c010120(ar4_00,((void *)0x8c016690),((void *)0x8c016660),4); });
  iVar2 = 0;
  for (iVar3 = 0; uVar8 = (undefined4)in_dr2, iVar3 < 5; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
      ar4_00 = (short *)(unsigned)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 196)), get_field_14_0cf620(ar4_00,ar5_00,ar6_00,ar7_00));
      if (iVar1 != 1) {
        if (cVar11 == '\0') {
          fVar5 = *(float *)(unsigned)(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x178);
          pcVar7 = (code *)0x44278000;
        }
        else {
          fVar5 = 670.0;
          pcVar7 = ((void *)0x8c0100dc);
        }
        if (fVar5 != (float)(uint)pcVar7) {
          ((short *)(fr0_ - 0x7c))[iVar2 * 2] = (short)iVar4;
          ((short *)(fr0_ - 0x7c))[iVar2 * 2 + 1] = (short)iVar3;
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  if (iVar2 == 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 196)); vec_delete_array(((short *)(fr0_ - 0x7c)),((void *)0x8c016660),4,0x19); });
    iVar2 = 0;
  }
  else if (iVar2 == 1) {
    iVar2 = ((short *)(fr0_ - 0x7c))[1] * 0x78 + ar4 + ((short *)(fr0_ - 0x7c))[0] * 0x18 + 0x174;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 196)); vec_delete_array(((short *)(fr0_ - 0x7c)),((void *)0x8c016660),4,0x19); });
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 196)), rand(ar4_00,ar5_00,ar6_00,ar7_00));
    if (cVar10 == '\0') {
      dVar9 = CONCAT44D((float)iVar2,uVar8);
    }
    else {
      dVar9 = (double)iVar2;
    }
    if (cVar11 == '\0') {
      dVar6 = CONCAT44D(0x47000000,(float)iVar3);
    }
    else {
      dVar6 = 3.428006581677106e-307;
    }
    if (cVar10 == '\0') {
      iVar3 = (int)(F32HI(dVar9) *
                   (F32LO(dVar6) / F32HI(dVar6)));
    }
    else {
      iVar3 = (int)(dVar9 * (dVar6 / dVar6));
    }
    if (iVar2 == iVar3) {
      iVar3 = iVar2 + -1;
    }
    iVar2 = ((short *)(fr0_ - 0x7c))[iVar3 * 2 + 1] * 0x78 + ar4 + ((short *)(fr0_ - 0x7c))[iVar3 * 2] * 0x18 + 0x174;
    ({ unsigned long ri0_ = (unsigned long)(iVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 196)); vec_delete_array(((short *)(fr0_ - 0x7c)),((void *)0x8c016660),4,0x19); });
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0cf9b4\n.set _FUN_8c0cf9b4, _FUN_8c0cf9b4_def\n");
