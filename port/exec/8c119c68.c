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
int * FUN_8c119c68_def(int ar4,int ar5,uint *ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c119c68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *ar5_00;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  (*(char *)(fr0_ - 0x6c)) = (char)ar6;
  (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(ar7));
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x8c + ar4));
  (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((uint *)(unsigned)0x1));
  (*(int *)(fr0_ - 0x50)) = 0;
  (*(int *)(fr0_ - 0x54)) = 0;
  (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((uint *)(unsigned)*((uint *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x84))));
  (*(int *)(fr0_ - 0x3c)) = 0;
  (*(int *)(fr0_ - 0x40)) = 1;
  puVar6 = (undefined4 *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar5 + 8) != 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(ar5 + 8);
    puVar6 = &(*(undefined4 *)(fr0_ - 0x38));
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar5 + 0xc);
    (*(undefined4 *)(fr0_ - 0x38)) = 1;
    (*(unsigned *)(fr0_ - 0x7c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(0x12c + ar4))));
    (*(int *)(fr0_ - 0x68)) = (int)*(short *)(unsigned)(ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4);
  }
  (*(uint *)(fr0_ - 0x44)) = (uint)((char)ar6 == '\0');
  if (puVar6 != (undefined4 *)(unsigned)0x0) {
    iVar4 = puVar6[4];
    while (iVar4 != 0) {
      uVar1 = (uint)(*(undefined4 *)(fr0_ - 0x84)) >> 0x10;
      (*(undefined4 *)(fr0_ - 0x84)) = CONCAT22((short)uVar1,*(undefined2 *)(unsigned)(puVar6[4] + 2));
      (*(undefined4 *)(fr0_ - 0x84)) = CONCAT22(*(undefined2 *)(unsigned)(puVar6[4] + 4),*(undefined2 *)(unsigned)(puVar6[4] + 2));
      puVar9 = (undefined4 *)(unsigned)puVar6[1];
      puVar7 = (undefined4 *)(unsigned)0x0;
      if ((((*(uint *)(fr0_ - 0x44)) != 0) && (puVar9[4] != 0)) &&
         ((*(undefined4 *)(fr0_ - 0x70)) = CONCAT22(*(undefined2 *)(unsigned)(puVar9[4] + 4),*(undefined2 *)(unsigned)(puVar9[4] + 2)),
         *(uint *)(unsigned)(0x108 + ar4) <= (*(undefined4 *)(fr0_ - 0x70)))) {
        (*(int *)(fr0_ - 0x3c)) = 1;
        puVar8 = (undefined4 *)(unsigned)puVar9[1];
        if ((*(ushort *)(unsigned)puVar8[4] & 2) == 0) {
          (*(undefined4 *)(fr0_ - 0x74)) = CONCAT22(*(undefined2 *)(unsigned)(puVar8[4] + 4),*(undefined2 *)(unsigned)(puVar8[4] + 2));
          iVar5 = *(int *)(unsigned)(0x104 + ar4);
          iVar4 = *(int *)(unsigned)(0x104 + -4 + ar4);
          (*(uint *)(fr0_ - 0x58)) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(fr0_ - 0x74)) * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
          if (*(short *)(unsigned)(iVar5 + *(int *)(unsigned)((*(undefined4 *)(fr0_ - 0x84)) * 8 + iVar4 + 4) * 0xc + 8) == 0) {
            puVar7 = (undefined4 *)(unsigned)0x0;
          }
          else {
            puVar7 = puVar8;
            if ((*(uint *)(fr0_ - 0x58)) == 0) {
              puVar7 = (undefined4 *)(unsigned)puVar8[1];
              puVar9 = puVar8;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)(unsigned)puVar8[1];
          puVar9 = puVar8;
        }
      }
      (*(int *)(fr0_ - 0x64)) = puVar9[3];
      (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar9[5]));
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x68)) - puVar9[3];
      if ((*(int *)(fr0_ - 0x40)) != 0) {
        if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) < ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))) {
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
          *((int *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x8c)) = (*(int *)(fr0_ - 0x5c));
        }
        if ((*(char *)(fr0_ - 0x6c)) == '\0') {
          (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x68)) -
                      (uint)*(ushort *)(unsigned)(0x1da + ar4) *
                      (int)*(short *)(unsigned)(0x1da + -0x1c + ar4);
          (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c))));
          (*(int *)(fr0_ - 0x50)) = *(int *)(unsigned)(*(int *)(unsigned)(0x1d0 + ar4) + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) * 4);
        }
        (*(int *)(fr0_ - 0x40)) = 0;
      }
      if (ar5_00[4] == 0) {
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c112d82(ar4,ar5_00,ar6,ar7));
      }
      else {
        piVar3 = (int *)(unsigned)ar5_00[4];
      }
      ar5_00[4] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78));
      (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)(ar5_00));
      ar5_00[3] = 0;
      *ar5_00 = (*(undefined4 *)(fr0_ - 0x84));
      if ((*(char *)(fr0_ - 0x6c)) == '\0') {
        if (*(ushort *)(unsigned)puVar6[4] >> 2 == *(ushort *)(unsigned)(0xe2 + ar4)) {
          (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) - ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) - (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))))));
          (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x54)) - (*(int *)(fr0_ - 0x5c));
          (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) -
                      (*(int *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) * 4 + *(int *)(unsigned)(0x1d0 + ar4)) -
                      *(int *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) * 4 + *(int *)(unsigned)(0x1d0 + ar4)));
        }
        if ((*(ushort *)(unsigned)((*(undefined4 *)(fr0_ - 0x84)) * 2 + *(int *)(unsigned)(0xc0 + ar4)) & 0x80) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(unsigned)(0x1be + ar4);
        }
        *(undefined2 *)(unsigned)(ar5_00 + 5) = (*(uint*)((uchar*)((uint * *)(fr0_ - 0x7c))+0));
        iVar4 = ((*(int *)(fr0_ - 0x68)) - iVar4) - (*(int *)(fr0_ - 0x64));
        ar5_00[2] = iVar4;
        ar7 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c119b16(ar4,iVar4,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)),((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
        ar5_00[1] = iVar4;
        ar6 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c));
      }
      else {
        ar6 = (uint *)(unsigned)puVar6[4];
        uVar2 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x84)),ar6,ar7));
        *(short *)(unsigned)((int)ar5_00 + 0x16) = (short)uVar2;
      }
      if ((*(int *)(fr0_ - 0x3c)) != 0) {
        if (puVar7 == (undefined4 *)(unsigned)0x0) {
          puVar9 = (undefined4 *)(unsigned)puVar9[1];
          if ((*(uint *)(fr0_ - 0x58)) == 0) {
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar9[5]));
            (*(int *)(fr0_ - 0x64)) = puVar9[3];
          }
        }
        else if (puVar7[4] != 0) {
          if ((*(ushort *)(unsigned)puVar7[4] & 2) != 0) {
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar7[5]));
            (*(int *)(fr0_ - 0x64)) = puVar7[3];
            puVar9 = puVar7;
          }
          puVar9 = (undefined4 *)(unsigned)puVar9[1];
        }
        (*(int *)(fr0_ - 0x3c)) = 0;
      }
      (*(unsigned *)(fr0_ - 0x7c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x64));
      ar5_00 = piVar3;
      if (puVar9 == (undefined4 *)(unsigned)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) == (int *)(unsigned)0x0) {
    piVar10 = (int *)(unsigned)0x0;
    piVar3 = ar5_00;
  }
  else {
    if (ar5_00[4] == 0) {
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c112d82(ar4,ar5_00,ar6,ar7));
    }
    else {
      piVar3 = (int *)(unsigned)ar5_00[4];
    }
    ar5_00[3] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78));
    if ((uint)*(ushort *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 5) < *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x48))) {
      *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x48)) = (uint)*(ushort *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 5);
      *((int *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x88)) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[2];
    }
    piVar10 = ar5_00;
    if ((*(char *)(fr0_ - 0x6c)) == '\0') {
      ar5_00[2] = (*(int *)(fr0_ - 0x54));
      ar5_00[1] = (*(int *)(fr0_ - 0x50));
      *(short *)(unsigned)(ar5_00 + 5) = (short)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x60));
    }
  }
  *(unsigned *)(unsigned)(0x8c + ar4) = piVar3;
  *((uint *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x84)) = (uint)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
  return piVar10;
}

__asm__(".globl _FUN_8c119c68\n.set _FUN_8c119c68, _FUN_8c119c68_def\n");
