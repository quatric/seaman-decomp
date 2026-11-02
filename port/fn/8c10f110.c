#include "../decls.h"
undefined8 * FUN_8c10f110_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int unaff_r14;
  double in_dr2;
  undefined4 in_fr5;
  float fVar7;
  double dVar6;
  double in_dr6;
  float fVar8;
  double in_xd2;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  FUN_8c10ecd8(unaff_r14,ar5,ar6,ar7);
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44((undefined4)DAT_8c10f160,in_fr5);
  }
  else {
    dVar6 = (double)CONCAT44(0xffe7ffff,(undefined4)DAT_8c10f160);
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(uVar2 * 4 + unaff_r14);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(ar4 * 4 + unaff_r14);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr6,0));
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
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
      fVar8 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == 0) {
        fVar7 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar7,(SUB84(dVar6,0) + fVar8) * fVar7);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),(SUB84(in_dr2,0) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar3 = SUB84(in_dr2,0);
        *(int *)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return &DAT_8c10f160;
}

__asm__(".globl _FUN_8c10f110\n.set _FUN_8c10f110, _FUN_8c10f110_def\n");
