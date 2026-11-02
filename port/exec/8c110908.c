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
undefined4 FUN_8c110908_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110908";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint ar5_00;
  int iVar6;
  undefined4 ar6_00;
  int unaff_r14 = 0;
  float extraout_fr3 = 0;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = '\0';
  bVar1 = *(byte *)(unsigned)(unaff_r14 + 8);
  iVar4 = *(int *)(unsigned)(unaff_r14 + 0xc);
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)) + ain1) != '\x01') {
    ar6_00 = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
    ar5_00 = (uint)*(byte *)(unsigned)(unaff_r14 + 8);
    uVar9 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112074(*(undefined4 *)(unsigned)(unaff_r14 + 0xc),ar5_00,ar6_00,ar7));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (cVar10 == '\0') {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -NAN;
    }
    uVar2 = 0;
    fVar7 = extraout_fr3;
    if (*(char *)(unsigned)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (cVar10 == '\0') {
            fVar7 = *((float *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x28) + uVar2 * 4));
          }
          cVar10 = '\0';
          uVar9 = CONCAT44(F32HI(uVar9) + fVar8,(float)uVar9 + fVar7);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unsigned)(unaff_r14 + 8));
    }
    pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)),ar5_00,ar6_00,ar7));
    *pfVar3 = (float)uVar9 / F32HI(uVar9);
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0xc));
  while( true ) {
    if ((int *)(unsigned)((uint)bVar1 * 8 + iVar4) <= piVar5) {
      return 1;
    }
    iVar6 = *piVar5;
    if ((*(int *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
       (*(int *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(unsigned)(iVar6 + 0x3c))) break;
    piVar5 = piVar5 + 2;
  }
  return 0;
}

__asm__(".globl _FUN_8c110908\n.set _FUN_8c110908, _FUN_8c110908_def\n");
