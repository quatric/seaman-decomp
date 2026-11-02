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
undefined4 FUN_8c11372e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11372e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  
  iVar9 = 0;
  *(undefined4 *)(unsigned)((int)0x1ac + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xd) = 0;
  iVar2 = (int)0x150;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(iVar2 + -0x24 + (int)ar4) = 0xffffffff;
  iVar2 = (int)0x1c4;
  *(undefined2 *)(unsigned)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(iVar2 + -0x2a + (int)ar4) = 0;
  ar4[0xc] = 1;
  *(undefined4 *)(unsigned)(iVar2 + -0x28 + (int)ar4) = 0;
  if (*(char *)(unsigned)(iVar2 + -0x70 + (int)ar4) != '\0') {
    *(undefined1 *)(unsigned)((int)0x154 + (int)ar4) = 0;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1133f6(ar4,ar5,ar6,ar7));
    if ((uVar3 & 0xff) != 0) {
      return 1;
    }
  }
  piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c113354(ar4,ar5,ar6,ar7));
  piVar4[1] = 0;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112d00(ar4,ar5,ar6,ar7));
  if ((uVar3 & 0xff) == 0) {
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1157c0(ar4,ar5,ar6,ar7));
    }
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c117bac)) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115778(ar4,ar5,ar6,ar7));
    }
    iVar2 = 0;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      iVar11 = ar4[0x15];
      (*(uint *)(fr0_ - 0x2c)) = 0;
      if (*(int *)(unsigned)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)((int)0x148 + (int)ar4) + (*(uint *)(fr0_ - 0x2c)) * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + ar4[0x11]));
            for (piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(uVar7 * 4 + ar4[0x11])); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(unsigned)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined2 *)(unsigned)(iVar11 + 2) = 0;
              *(unsigned *)(unsigned)(iVar11 + 8) = piVar4;
              *(undefined4 *)(unsigned)(iVar11 + 0x10) = 0;
              iVar9 = (int)0xac;
              *(int *)(unsigned)(iVar11 + 0x14) = *(int *)(unsigned)((int)0xa4 + (int)ar4) + -4;
              *(uint *)(unsigned)(iVar11 + 0x1c) = *(int *)(unsigned)(iVar9 + (int)ar4) + (*(uint *)(fr0_ - 0x2c)) * 4;
              if (*(int *)(unsigned)(iVar11 + 0x18) == 0) {
                iVar8 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar11,ar6,ar7));
              }
              else {
                iVar8 = *(int *)(unsigned)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar8;
            }
          }
          (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) + 1;
        } while ((*(uint *)(fr0_ - 0x2c)) < *(uint *)(unsigned)((int)0x144 + (int)ar4));
      }
    }
    else if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c119320)) {
      iVar6 = *(int *)(unsigned)((int)0x1b4 + (int)ar4);
      iVar8 = ar4[0x10];
      uVar3 = 0;
      iVar11 = ar4[0x15];
      if (ar4[0x10] != 0) {
        do {
          iVar9 = iVar11;
          *(uint *)(unsigned)(iVar9 + 0xc) = uVar3 * 2 + ar4[0x12];
          *(undefined4 *)(unsigned)(iVar9 + 0x10) = 0;
          uVar1 = 0x77ff;
          if (uVar3 == iVar8 - iVar6) {
            uVar1 = 0;
          }
          *(undefined2 *)(unsigned)(iVar9 + 2) = uVar1;
          *(unsigned *)(unsigned)(iVar9 + 8) = piVar4;
          *(unsigned *)(unsigned)(iVar9 + 4) = piVar4;
          *(undefined4 *)(unsigned)(iVar9 + 0x14) = 0;
          if (*(int *)(unsigned)(iVar9 + 0x18) == 0) {
            iVar11 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar9,ar6,ar7));
          }
          else {
            iVar11 = *(int *)(unsigned)(iVar9 + 0x18);
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar3 < (uint)ar4[0x10]);
      }
      *piVar4 = iVar2;
    }
    else {
      iVar11 = ar4[0x15];
      if (ar4[0x13] == 0) {
        iVar8 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar4[0x10] << 2,ar6,ar7));
        ar4[0x13] = iVar8;
        if (ar4[0x13] == 0) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1204c4(ar4,2,ar6,ar7));
          return 1;
        }
      }
      iVar8 = ar4[0x10] << 2;
      (vsp = ((unsigned long)(fr0_ - 48)), memset(ar4[0x13],0,iVar8,ar7));
      (*(uint *)(fr0_ - 0x28)) = 0;
      if (*(int *)(unsigned)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)((int)0x148 + (int)ar4) + (*(uint *)(fr0_ - 0x28)) * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + ar4[0x11]));
            for (piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(uVar7 * 4 + ar4[0x11])); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(unsigned)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined4 *)(unsigned)(iVar11 + 0x10) = 0;
              *(undefined2 *)(unsigned)(iVar11 + 2) = 0;
              *(unsigned *)(unsigned)(iVar11 + 8) = piVar4;
              *(undefined4 *)(unsigned)(iVar11 + 0x14) = 0;
              *(int *)(unsigned)(ar4[0x13] + *piVar10 * 4) = iVar11;
              if (*(int *)(unsigned)(iVar11 + 0x18) == 0) {
                iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar11,iVar8,ar7));
              }
              else {
                iVar6 = *(int *)(unsigned)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar6;
            }
          }
          (*(uint *)(fr0_ - 0x28)) = (*(uint *)(fr0_ - 0x28)) + 1;
        } while ((*(uint *)(fr0_ - 0x28)) < *(uint *)(unsigned)((int)0x144 + (int)ar4));
      }
    }
    iVar11 = 0;
    iVar8 = 0;
    *piVar4 = *piVar4 + iVar2;
    ar4[0x18] = iVar9;
    *(short *)(unsigned)(ar4 + 0x14) = (short)iVar2;
    iVar9 = (int)0x160;
    *(undefined2 *)(unsigned)(iVar9 + -2 + (int)ar4) = *(undefined2 *)(unsigned)(iVar9 + (int)ar4);
    *(undefined1 *)(unsigned)(iVar9 + -4 + (int)ar4) = 0;
    do {
      iVar9 = (int)0x184;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(unsigned)((int)ar4 + iVar11 + 0x170) = 0;
      *(undefined4 *)(unsigned)((int)ar4 + iVar11 + iVar9) = 0;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 5);
    *(undefined1 *)(unsigned)((int)0x198 + (int)ar4) = 0;
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11372e\n.set _FUN_8c11372e, _FUN_8c11372e_def\n");
