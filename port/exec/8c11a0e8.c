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
int * FUN_8c11a0e8_def(int ar4,int *ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c11a0e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int *a5;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *a5_00;
  char cVar6;
  int *piVar7;
  int *ar5_00;
  int *piVar8;
  int *piVar9;
  
  cVar6 = (char)ar6;
  piVar8 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x8c + ar4));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  piVar9 = (int *)(unsigned)(uint)ar5[2];
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  (*(int *)(fr0_ - 0x24)) = 0;
  (*(int *)(fr0_ - 0x30)) = 1;
  (*(uint *)(fr0_ - 0x28)) = 0;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  a5_00 = ar5;
  if (piVar9 != (int *)(unsigned)0x0) {
    if (cVar6 == '\0') {
      (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)(((int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4)) -
                          (uint)*(ushort *)(unsigned)(0x1da + ar4) *
                          (int)*(short *)(unsigned)(0x1be + ar4))));
      (*(int *)(fr0_ - 0x30)) = *(int *)(unsigned)(0x12c + ar4);
      (*(uint *)(fr0_ - 0x28)) = *(uint *)(unsigned)(*(int *)(unsigned)(0x1d0 + ar4) + (*(int *)(fr0_ - 0x30)) * 4);
    }
    if (piVar8[4] == 0) {
      piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
    }
    else {
      piVar4 = (int *)(unsigned)piVar8[4];
    }
    (*(undefined4 *)(fr0_ - 0x44)) = (int *)(unsigned)CONCAT22(*(undefined2 *)(unsigned)(ar5[3] + 4),*(undefined2 *)(unsigned)(ar5[3] + 2));
    piVar8[4] = 0;
    piVar8[3] = 0;
    if (cVar6 == '\0') {
      iVar3 = (int)0xc0;
      *(undefined2 *)(unsigned)(piVar8 + 5) = *(undefined2 *)(unsigned)(0x12c + ar4);
      if ((*(ushort *)(unsigned)((int)(*(undefined4 *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(iVar3 + ar4)) & 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(unsigned)(0x1be + ar4);
      }
      piVar8[2] = (((int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4)) - piVar9[3]) -
                  iVar3;
      a5_00 = (int *)(unsigned)piVar8[2];
      ar6 = (uint)*(ushort *)(unsigned)(piVar8 + 5);
      ar7 = piVar9[5] & 0xffff;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119b16(ar4,a5_00,ar6,ar7));
      piVar8[1] = iVar3;
    }
    else {
      ar6 = ar5[3];
      a5_00 = (*(undefined4 *)(fr0_ - 0x44));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x44)),ar6,ar7));
      *(short *)(unsigned)((int)piVar8 + 0x16) = (short)uVar2;
    }
    *piVar8 = (int)(*(undefined4 *)(fr0_ - 0x44));
    piVar7 = piVar8;
    (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(piVar8));
    while (piVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40)), piVar8 = piVar4, a5 = piVar9, a5 != (int *)(unsigned)0x0) {
      piVar4 = piVar8;
      if (a5[4] == 0) {
        piVar9 = (int *)(unsigned)0x0;
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar1));
      }
      else {
        piVar9 = (int *)(unsigned)a5[1];
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar7));
        if ((*(ushort *)(unsigned)a5[4] & 2) == 0) {
          if (piVar8[4] == 0) {
            piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
          }
          else {
            piVar4 = (int *)(unsigned)piVar8[4];
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (int *)(unsigned)CONCAT22(*(undefined2 *)(unsigned)(a5[4] + 4),*(undefined2 *)(unsigned)(a5[4] + 2));
          piVar8[4] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
          piVar8[3] = 0;
          if (cVar6 == '\0') {
            ar6 = a5[5];
            ar7 = piVar9[5];
            if (*(ushort *)(unsigned)a5[4] >> 2 == *(ushort *)(unsigned)(0xe2 + ar4)) {
              (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) - (ar6 - ar7);
              (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) - (a5[3] - *(int *)(unsigned)(a5[1] + 0xc)))));
              (*(uint *)(fr0_ - 0x28)) = (*(uint *)(fr0_ - 0x28)) -
                          (*(int *)(unsigned)(ar6 * 4 + *(int *)(unsigned)(0x1d0 + ar4)) -
                          *(int *)(unsigned)(ar7 * 4 + *(int *)(unsigned)(0x1d0 + ar4)));
            }
            if ((*(ushort *)(unsigned)((int)(*(undefined4 *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(0xc0 + ar4)) & 0x80) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)*(short *)(unsigned)(0x1be + ar4);
            }
            *(short *)(unsigned)(piVar8 + 5) = (short)ar6;
            a5_00 = (int *)(unsigned)((a5[3] - piVar9[3]) - iVar3);
            piVar8[2] = (int)a5_00;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119b16(ar4,a5_00,ar6,ar7));
            piVar8[1] = iVar3;
          }
          else {
            ar6 = a5[4];
            a5_00 = (*(undefined4 *)(fr0_ - 0x44));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x44)),ar6,ar7));
            *(short *)(unsigned)((int)piVar8 + 0x16) = (short)uVar2;
          }
          *piVar8 = (int)(*(undefined4 *)(fr0_ - 0x44));
          piVar7 = a5;
          if ((a5 != (int *)(unsigned)(uint)ar5[2]) && (1 < *a5)) {
            a5_00 = a5;
            piVar7 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a014(ar4,a5,ar6,ar7));
          }
          ar5_00 = (int *)(unsigned)*ar5_00;
          if (ar5_00 == ((int *)(unsigned long)*(unsigned *)(unsigned)(0x120 + ar4))) {
            a5_00 = ar5_00;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
          }
          ar5_00[2] = (int)piVar7;
          (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(piVar8));
          (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar7));
          if ((piVar7 != a5) && (piVar1 != (int *)(unsigned)0x0)) {
            *piVar7 = *piVar7 + 1;
            iVar3 = *(int *)(unsigned)piVar1[1] + -1;
            *(int *)(unsigned)piVar1[1] = iVar3;
            if (iVar3 < 1) {
              a5_00 = (int *)(unsigned)piVar1[1];
              (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,a5_00,ar6,ar7));
            }
            piVar1[1] = (int)piVar7;
          }
        }
      }
    }
  }
  piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  iVar3 = (int)0x124;
  *(int *)(unsigned)(iVar3 + ar4) = *ar5_00;
  if (*(int *)(unsigned)(iVar3 + ar4) == *(int *)(unsigned)(iVar3 + -4 + ar4)) {
    a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11318e(ar4,a5_00,ar6,ar7));
  }
  if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) == (int *)(unsigned)0x0) {
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
    piVar4 = piVar8;
  }
  else {
    if (piVar8[4] == 0) {
      a5_00 = piVar8;
      piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
    }
    else {
      piVar4 = (int *)(unsigned)piVar8[4];
    }
    piVar8[3] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar8));
    if (cVar6 == '\0') {
      piVar8[2] = (int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119a18((*(int *)(fr0_ - 0x30)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),(*(uint *)(fr0_ - 0x28)),ar7));
      piVar8[1] = iVar3;
      a5_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      ar6 = (*(uint *)(fr0_ - 0x28));
    }
  }
  piVar8 = (int *)(unsigned)0x0;
  for (; ar5_00 != piVar9; ar5_00 = (int *)(unsigned)ar5_00[1]) {
    piVar7 = (int *)(unsigned)ar5_00[2];
    if (piVar8 == (int *)(unsigned)0x0) {
      piVar8 = (int *)(unsigned)0x0;
      if (piVar7[2] != 0) {
        piVar8 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a09e(piVar7[2],a5_00,ar6,ar7));
        (*(int *)(fr0_ - 0x24)) = piVar8[3] - piVar7[3];
        *piVar8 = *piVar7 + -1;
        piVar7[2] = 0;
      }
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a014(ar4,piVar7,ar6,ar7));
      *piVar8 = *piVar8 + 1;
      iVar5 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4)) = iVar5;
      a5_00 = piVar7;
      if (iVar5 < 1) {
        a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4));
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,a5_00,ar6,ar7));
      }
      *(unsigned *)(unsigned)(iVar3 + 4) = piVar8;
      iVar5 = *(int *)(unsigned)(iVar3 + 0xc);
      *(int *)(unsigned)(iVar3 + 0xc) = *(int *)(unsigned)(iVar3 + 0xc) + (*(int *)(fr0_ - 0x24));
      piVar8 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a09e(iVar3,a5_00,ar6,ar7));
      (*(int *)(fr0_ - 0x24)) = piVar8[3] - iVar5;
    }
  }
  if (piVar8 == (int *)(unsigned)0x0) {
    if (ar5[2] != 0) {
      iVar3 = *(int *)(unsigned)(uint)ar5[2] + -1;
      *(int *)(unsigned)(uint)ar5[2] = iVar3;
      if (iVar3 < 1) {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,ar5[2],ar6,ar7));
      }
      ar5[2] = 0;
    }
    *(undefined2 *)(unsigned)((int)ar5 + 2) = 0x7fff;
  }
  else {
    *piVar8 = *piVar8 + 1;
    iVar3 = *(int *)(unsigned)(uint)ar5[2] + -1;
    *(int *)(unsigned)(uint)ar5[2] = iVar3;
    if (iVar3 < 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,ar5[2],ar6,ar7));
    }
    ar5[2] = (int)piVar8;
    *(short *)(unsigned)((int)ar5 + 2) = (short)(*(int *)(fr0_ - 0x24)) + *(short *)(unsigned)((int)ar5 + 2);
  }
  *(unsigned *)(unsigned)(0x124 + ar4) = piVar9;
  *(unsigned *)(unsigned)(0x8c + ar4) = piVar4;
  return ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
}

__asm__(".globl _FUN_8c11a0e8\n.set _FUN_8c11a0e8, _FUN_8c11a0e8_def\n");
