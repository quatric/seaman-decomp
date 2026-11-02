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
undefined4 FUN_8c115ac8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115ac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int ar5_00;
  int iVar10;
  
  uVar8 = *ar5;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((ushort *)(unsigned)(uint)ar5[2]));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((ushort *)(unsigned)(uint)ar5[3]));
  uVar9 = ar5[1];
  *(undefined2 *)(unsigned)(ar4 + 0x50) = 0;
  iVar4 = (int)0x12c;
  *(undefined4 *)(unsigned)(iVar4 + ar4) = 0xffffffff;
  *(undefined2 *)(unsigned)(iVar4 + 0x6e + ar4) = 0;
  *(undefined4 *)(unsigned)(iVar4 + 0x80 + ar4) = 0;
  *(uint *)(unsigned)(iVar4 + 0x88 + ar4) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)(unsigned)(0x1b8 + ar4) = 0;
  }
  else {
    *(uint *)(unsigned)(0x1b8 + ar4) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1133f6(ar4,ar5,ar6,ar7));
  if ((uVar5 & 0xff) == 0) {
    piVar6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c113354(ar4,ar5,ar6,ar7));
    puVar2 = ((void *)(unsigned)0x8c112d00);
    piVar6[1] = 0;
    piVar6[4] = 0;
    *piVar6 = 0;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,ar5,ar6,ar7));
    uVar1 = 0x77ff;
    if ((uVar5 & 0xff) == 0) {
      ar5_00 = 0;
      (*(int *)(fr0_ - 0x34)) = 0;
      iVar10 = *(int *)(unsigned)(ar4 + 0x54);
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30))[(*(uint *)(fr0_ - 0x38))];
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          uVar3 = uVar1;
          if ((*(uint *)(fr0_ - 0x38)) == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar3;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar10 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar10 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
        } while ((*(uint *)(fr0_ - 0x38)) < uVar9);
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      if (uVar8 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar1;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar10 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar10 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
          (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
        } while ((*(uint *)(fr0_ - 0x38)) < uVar8);
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar7;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar1;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar7 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar7 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
          (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + 1));
        } while ((*(uint *)(fr0_ - 0x38)) < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(unsigned)(ar5_00 + 0x10) = ar5_00;
      }
      else {
        *(int *)(unsigned)(ar5_00 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = (*(int *)(fr0_ - 0x34));
      *(int *)(unsigned)(ar4 + 0x60) = ar5_00;
      *(short *)(unsigned)(ar4 + 0x50) = (short)(*(int *)(fr0_ - 0x34));
      *(undefined1 *)(unsigned)(0x1d8 + ar4) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115ac8\n.set _FUN_8c115ac8, _FUN_8c115ac8_def\n");
