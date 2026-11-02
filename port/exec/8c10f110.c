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
undefined8 * FUN_8c10f110_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f110";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int unaff_r14 = 0;
  double in_dr2 = 0;
  undefined4 in_fr5 = 0;
  float fVar7;
  double dVar6;
  double in_dr6 = 0;
  float fVar8;
  double in_xd2 = 0;
  double in_xd4 = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ecd8(unaff_r14,ar5,ar6,ar7));
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = CONCAT44D((undefined4)(*(undefined1 *)(unsigned)0x8c10f160),in_fr5);
  }
  else {
    dVar6 = CONCAT44D(0xffe7ffff,(undefined4)(*(undefined1 *)(unsigned)0x8c10f160));
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(unsigned)(uVar2 * 4 + unaff_r14);
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(unsigned)(ar4 * 4 + unaff_r14);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr6,0));
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
      }
      else {
        in_dr6 = *pdVar3;
        in_xd2 = in_xd4;
      }
      uVar2 = uVar2 + 1;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
      fVar8 = F32HI(in_dr6);
      if (in_FPSCR_PR == 0) {
        fVar7 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar7,(F32LO(dVar6) + fVar8) * fVar7);
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(F32LO(in_dr2) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)(unsigned)pdVar3 = SUB84(in_dr2,0);
        *(int *)(unsigned)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return ((undefined1 *)(unsigned)0x8c10f160);
}

__asm__(".globl _FUN_8c10f110\n.set _FUN_8c10f110, _FUN_8c10f110_def\n");
