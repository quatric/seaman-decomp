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
undefined4 FUN_8c1197d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1197d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short *psVar8;
  int ar6_00;
  int ar7_00;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  
  sVar7 = 0x77ff;
  ar6_00 = (int)0x77ff;
  psVar11 = (short *)(unsigned)0x0;
  ar7_00 = (int)0x7fff;
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  sVar1 = *(short *)(unsigned)(0x19a + ar4);
  iVar2 = 0x19a + 0x12;
  *(int *)(unsigned)(iVar2 + ar4) = *(int *)(unsigned)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(unsigned)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < ar6_00) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(unsigned)(ar5 + *(int *)(unsigned)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)ar7_00) {
        ar7_00 = iVar2;
      }
      *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 4)) = *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 4)) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(unsigned)(psVar8 + 2) = *(undefined4 *)(unsigned)(psVar8 + 4);
      psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 0xc));
    } while (uVar10 < uVar6);
  }
  *(short *)(unsigned)(0x19a + ar4) = (short)ar7_00;
  uVar10 = *(uint *)(unsigned)(0x1b4 + ar4);
  (*(uint *)(fr0_ - 0x30)) = 0;
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  if (uVar6 != 0) {
    do {
      psVar11 = psVar8;
      iVar2 = *(int *)(unsigned)(psVar11 + 8);
      sVar1 = *psVar11;
      sVar7 = *(short *)(unsigned)(ar5 + *(int *)(unsigned)(iVar2 + 0xc) * 2) + sVar1;
      piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2));
      piVar9 = piVar12;
      if (sVar7 < *(short *)(unsigned)(iVar2 + 2)) {
        *(short *)(unsigned)(iVar2 + 2) = sVar7;
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
        if (piVar9[1] == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar9,ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(0x114 + ar4) = uVar3;
        }
        else {
          *(int *)(unsigned)(0x114 + ar4) = piVar9[1];
        }
        iVar4 = (int)0x12c;
        piVar9[1] = (int)piVar12;
        *piVar12 = *piVar12 + 1;
        piVar9[4] = *(int *)(unsigned)(psVar11 + 6);
        *piVar9 = 0;
        iVar5 = (int)0x1ac;
        piVar9[5] = *(int *)(unsigned)(iVar4 + ar4);
        piVar9[3] = (int)sVar1 + *(int *)(unsigned)(iVar5 + ar4);
        piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 8));
        if (piVar12 != piVar9) {
          *(unsigned *)(unsigned)(iVar2 + 8) = piVar9;
          *piVar9 = *piVar9 + 1;
          iVar2 = *piVar12;
          *piVar12 = iVar2 + -1;
          if (iVar2 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar12,ar6_00,ar7_00));
          }
        }
      }
      if ((1 < uVar10) && (uVar10 - 1 == (*(uint *)(fr0_ - 0x30)))) {
        iVar2 = *(int *)(unsigned)(ar4 + 0x54);
        sVar7 = *(short *)(unsigned)(ar5 + *(int *)(unsigned)(iVar2 + 0xc) * 2) + sVar1;
        if (sVar7 < *(short *)(unsigned)(iVar2 + 2)) {
          *(short *)(unsigned)(iVar2 + 2) = sVar7;
          piVar12 = piVar9;
          if (piVar9 == ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2))) {
            piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
            if (piVar12[1] == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar12,ar6_00,ar7_00));
              *(undefined4 *)(unsigned)(0x114 + ar4) = uVar3;
            }
            else {
              *(int *)(unsigned)(0x114 + ar4) = piVar12[1];
            }
            iVar4 = (int)0x12c;
            piVar12[1] = (int)piVar9;
            *piVar9 = *piVar9 + 1;
            piVar12[4] = *(int *)(unsigned)(psVar11 + 6);
            *piVar12 = 0;
            iVar5 = (int)0x1ac;
            piVar12[5] = *(int *)(unsigned)(iVar4 + ar4);
            piVar12[3] = (int)sVar1 + *(int *)(unsigned)(iVar5 + ar4);
          }
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 8));
          if (piVar9 != piVar12) {
            *(unsigned *)(unsigned)(iVar2 + 8) = piVar12;
            *piVar12 = *piVar12 + 1;
            iVar2 = *piVar9;
            *piVar9 = iVar2 + -1;
            if (iVar2 + -1 < 1) {
              (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar9,ar6_00,ar7_00));
            }
          }
        }
      }
      iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2)) = iVar2;
      if (iVar2 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(psVar11 + 2),ar6_00,ar7_00));
      }
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
      psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 0xc));
    } while ((*(uint *)(fr0_ - 0x30)) < uVar6);
  }
  *(short *)(unsigned)(0x1b0 + ar4) = psVar11[1];
  return 0;
}

__asm__(".globl _FUN_8c1197d8\n.set _FUN_8c1197d8, _FUN_8c1197d8_def\n");
