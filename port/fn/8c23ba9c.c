#include "../decls.h"
undefined4 FUN_8c23ba9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  double *pdVar2;
  undefined4 in_fr0;
  float fVar3;
  double in_dr2;
  double dVar4;
  float fVar5;
  undefined4 in_fr5;
  double dVar6;
  double dVar7;
  double in_xd2;
  bool bVar8;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (*(undefined4 *)0x8c4aa554 != 0) {
    in_r0 = 8;
    iVar1 = *(undefined4 *)0x8c4ab27c;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)0x8c4aa544,in_fr5);
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar1 + 8));
    }
    else {
      dVar6 = *(undefined4 *)0x8c4aa544;
      in_xd2 = *(double *)(iVar1 + 8);
    }
    fVar3 = (float)((ulonglong)dVar6 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      bVar8 = fVar3 < SUB84(in_dr2,0);
    }
    else {
      bVar8 = dVar6 < in_dr2;
    }
    if (bVar8) {
      if (in_FPSCR_SZ == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(iVar1 + 8),*(undefined4 *)0x8c4aa548);
      }
      else {
        dVar4 = *(double *)(iVar1 + 8);
        in_xd2 = *(undefined4 *)0x8c4aa548;
      }
      fVar5 = (float)((ulonglong)dVar4 >> 0x20);
      pdVar2 = (double *)*(undefined4 *)0x8c4ab278;
      if (in_FPSCR_PR != '\0' || SUB84(dVar4,0) <= fVar5) {
        fVar3 = 0.0;
      }
      else {
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(fVar5,*(undefined4 *)(iVar1 + 8));
        }
        else {
          in_xd2 = *(double *)(iVar1 + 8);
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = SUB84(dVar4,0) - fVar3;
        }
        else {
          fVar3 = SUB84(dVar4 - dVar6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar4 = (double)CONCAT44(*(undefined4 *)0x8c4aa54c,fVar3);
        }
        else {
          dVar4 = *(undefined4 *)0x8c4aa54c;
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = (float)((ulonglong)dVar4 >> 0x20);
          dVar4 = (double)CONCAT44(fVar3,SUB84(dVar4,0) * fVar3);
        }
        else {
          dVar4 = dVar4 * dVar4;
        }
        fVar3 = -SUB84(dVar4,0);
        dVar7 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar7 = (double)CONCAT44(fVar3,SUB84(dVar6,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + 1.0,SUB84(dVar7,0));
        }
        else {
          dVar7 = dVar7 + (double)CONCAT44(in_fr0,0x3f800000);
        }
        if (in_FPSCR_SZ == '\0') {
          fVar3 = *(float *)pdVar2;
        }
        else {
          in_xd2 = *pdVar2;
        }
        if (in_FPSCR_PR == '\0') {
          fVar3 = fVar3 * (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar3 = SUB84((double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),fVar3) * dVar7,0);
        }
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)pdVar2 = fVar3;
      }
      else {
        *pdVar2 = in_xd2;
      }
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c23ba9c\n.set _FUN_8c23ba9c, _FUN_8c23ba9c_def\n");
