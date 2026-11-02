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
undefined4 FUN_8c119320_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  short *ar7_00;
  short *psVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  short *psVar12;
  short *psVar13;
  
  iVar5 = (int)0x77ff;
  uVar7 = 0;
  iVar9 = (int)0x7fff;
  sVar6 = *(short *)(unsigned)(0x19a + ar4);
  iVar1 = 0x19a + 0x12;
  *(int *)(unsigned)(iVar1 + ar4) = *(int *)(unsigned)(iVar1 + ar4) + (int)sVar6;
  puVar11 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  uVar8 = (uint)*(ushort *)(unsigned)(ar4 + 0x50);
  if (uVar8 != 0) {
    do {
      iVar1 = (int)(short)puVar11[1];
      if (iVar1 < iVar5) {
        iVar1 = iVar1 + (short)(*(short *)(unsigned)(ar5 + (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 6)) * 2) - sVar6);
      }
      *puVar11 = (short)iVar1;
      puVar11[1] = (short)iVar1;
      if (iVar1 <= iVar9) {
        *(unsigned *)(unsigned)(0x19c + ar4) = puVar11;
        iVar9 = iVar1;
      }
      iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 2)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 2)) = iVar1;
      if (iVar1 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(puVar11 + 2),ar6,ar7));
      }
      uVar7 = uVar7 + 1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 4)) = *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 4)) + 1;
      *(undefined4 *)(unsigned)(puVar11 + 2) = *(undefined4 *)(unsigned)(puVar11 + 4);
      puVar11 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 0xc));
    } while (uVar7 < uVar8);
  }
  uVar7 = 1;
  *(short *)(unsigned)(0x19a + ar4) = (short)iVar9;
  ar7_00 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  iVar9 = (int)ar7_00[1];
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar7_00 + 0xc));
  if (1 < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2) {
    do {
      if ((int)*psVar4 < (int)(short)iVar9) {
        iVar9 = (int)*psVar4;
        ar7_00 = psVar4;
      }
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2);
  }
  (*(short *)(fr0_ - 0x2c)) = *(short *)(unsigned)(0x1e8 + ar4) + (short)iVar9;
  if (uVar7 < (uVar8 - *(int *)(unsigned)(0x1b4 + ar4)) - 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < (uVar8 - *(int *)(unsigned)(0x1b4 + ar4)) - 1);
  }
  psVar12 = ar7_00;
  if (*psVar4 < (*(short *)(fr0_ - 0x2c))) {
    (*(short *)(fr0_ - 0x2c)) = *psVar4;
    psVar12 = psVar4;
  }
  for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
    psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
  }
  iVar1 = iVar9;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar7_00));
  if ((int)*psVar4 < (int)(short)iVar9) {
    iVar1 = (int)*psVar4;
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(psVar4));
  }
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  (*(uint *)(fr0_ - 0x30)) = 0;
  sVar6 = (short)iVar1 + *(short *)(unsigned)(0x1e8 + ar4);
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 2));
  piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
  if (piVar10[1] == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00));
    *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
  }
  else {
    *(int *)(unsigned)(0x114 + ar4) = piVar10[1];
  }
  iVar1 = (int)0x12c;
  piVar10[1] = (int)piVar3;
  *piVar3 = *piVar3 + 1;
  piVar10[4] = *(int *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 6);
  iVar5 = (int)0x1ac;
  *piVar10 = 0;
  piVar10[5] = *(int *)(unsigned)(iVar1 + ar4) + 1;
  piVar10[3] = (int)psVar4[1] + *(int *)(unsigned)(iVar5 + ar4);
  iVar1 = (int)0x1b4;
  *piVar10 = *piVar10 + 1;
  if (uVar8 + *(int *)(unsigned)(iVar1 + ar4) * -2 != 0) {
    do {
      if (sVar6 < psVar4[1]) {
        psVar4[1] = sVar6;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
        *(unsigned *)(unsigned)(psVar4 + 4) = piVar10;
        *piVar10 = *piVar10 + 1;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00));
        }
      }
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
    } while ((*(uint *)(fr0_ - 0x30)) < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2);
  }
  iVar1 = *piVar10;
  *piVar10 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
  }
  if ((*(short *)(fr0_ - 0x2c)) < psVar4[1]) {
    psVar4[1] = (*(short *)(fr0_ - 0x2c));
    piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 2));
    if (piVar10[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(unsigned)(0x114 + ar4) = piVar10[1];
    }
    iVar1 = (int)0x12c;
    piVar10[1] = (int)piVar3;
    *piVar3 = *piVar3 + 1;
    piVar10[4] = *(int *)(unsigned)(psVar12 + 6);
    *piVar10 = 0;
    piVar10[5] = *(int *)(unsigned)(iVar1 + ar4) + 1;
    piVar10[3] = (int)psVar4[1] + *(int *)(unsigned)(0x1ac + ar4);
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
    *(unsigned *)(unsigned)(psVar4 + 4) = piVar10;
    *piVar10 = *piVar10 + 1;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00));
    }
  }
  psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
  uVar7 = 0;
  psVar13 = psVar12;
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar4 < psVar13[1]) {
        psVar13[1] = *psVar4;
        piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar13 + 4));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 2));
        if (piVar10 != piVar3) {
          *(unsigned *)(unsigned)(psVar13 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar13 + 0xc));
      psVar4 = psVar13;
      psVar13 = psVar12;
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  uVar7 = 0;
  psVar4 = psVar12;
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  if (*psVar4 < psVar12[1]) {
    psVar12[1] = *psVar4;
    piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 4));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 2));
    if (piVar10 != piVar3) {
      *(unsigned *)(unsigned)(psVar12 + 4) = piVar3;
      *piVar3 = *piVar3 + 1;
      iVar1 = *piVar10;
      *piVar10 = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
      }
    }
  }
  uVar7 = 0;
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 0xc));
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar12 < psVar4[1]) {
        psVar4[1] = *psVar12;
        piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 2));
        if (piVar10 != piVar3) {
          *(unsigned *)(unsigned)(psVar4 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = psVar4;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  return 0;
}

__asm__(".globl _FUN_8c119320\n.set _FUN_8c119320, _FUN_8c119320_def\n");
