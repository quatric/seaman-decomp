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
undefined4 FUN_8c113e98_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c113e98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int *ar7_00;
  int *piVar20;
  int a4;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  
  (*(ushort * *)(fr0_ - 0x5c)) = (ushort *)(unsigned)(uint)ar4[0x41];
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)(unsigned)(uint)ar4[0x11];
  (*(uint * *)(fr0_ - 0x54)) = (uint *)(unsigned)*piVar20;
  a4 = *ar4;
  (*(int *)(fr0_ - 0x34)) = 0;
  (*(int *)(fr0_ - 0x40)) = 0;
  (*(int *)(fr0_ - 0x38)) = ar4[0x3b];
  iVar12 = ar4[0x3c];
  (*(int *)(fr0_ - 0x4c)) = 0;
  (*(int *)(fr0_ - 0x60)) = 0;
  (*(int * *)(fr0_ - 0x30)) = (int *)(unsigned)(uint)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar17 = ar5; iVar17 != 0; iVar17 = *(int *)(unsigned)(iVar17 + 0x10)) {
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
    for (piVar16 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar17 + 0xc)); piVar16 != (int *)(unsigned)0x0; piVar16 = (int *)(unsigned)piVar16[4]) {
      iVar13 = piVar20[*piVar16 + 1] - piVar20[*piVar16];
      if (iVar13 < 0) {
        iVar13 = iVar13 + 3;
      }
      uVar14 = iVar13 >> 2;
      iVar21 = iVar21 + uVar14;
      if (uVar22 < uVar14) {
        uVar22 = uVar14;
      }
    }
  }
  iVar13 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(iVar21 + 1) * 0xc,0,ar7));
  iVar21 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,iVar21 * uVar22 * 6,iVar17,ar7));
  *(undefined2 *)(unsigned)(iVar13 + 8) = 0xffff;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(unsigned)(iVar13 + 8); uVar5 != 0xffff;
          uVar5 = *(ushort *)(unsigned)((uint)uVar5 * 6 + iVar21 + 2)) {
        (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + 1;
      }
      piVar10 = (int *)(unsigned)(uVar8 - 1);
      (*(int * *)(fr0_ - 0x50)) = (int *)(unsigned)(iVar13 + 0xc);
      (*(int *)(fr0_ - 0x6c)) = (uint)uVar7 - (*(int *)(fr0_ - 0x40));
      piVar15 = (*(int * *)(fr0_ - 0x50));
      piVar16 = (*(int * *)(fr0_ - 0x50));
      piVar20 = piVar10;
      (*(int * *)(fr0_ - 0x84)) = piVar10;
      for (piVar24 = (int *)(unsigned)0x1; piVar24 <= piVar10; piVar24 = (int *)(unsigned)((int)piVar24 + 1)) {
        uVar22 = (uint)*(ushort *)(unsigned)(piVar16 + 2);
        if (uVar22 != 0) {
          (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x4c)) + (uint)(*(ushort * *)(fr0_ - 0x5c))[piVar15[1] * 6 + 2];
          uVar7 = (*(ushort * *)(fr0_ - 0x5c))[piVar15[1] * 6 + 4];
          while (uVar22 != 0xffff) {
            uVar8 = (*(ushort * *)(fr0_ - 0x5c))
                    [*(int *)(unsigned)((uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                    uVar7 * (short)ar4[0x3d];
            puVar19 = (ushort *)(unsigned)((uint)uVar8 * 2 + iVar12);
            iVar17 = (uint)*(ushort *)(unsigned)((uint)puVar19[1] * 2 + iVar12) -
                     (uint)*(ushort *)(unsigned)((uint)*puVar19 * 2 + iVar12);
            if (iVar17 == 0) {
              uVar8 = 0xffff;
            }
            else {
              (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x4c)) + iVar17;
              (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x84)) + 1);
              (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x6c)) + 1;
              puVar19 = (ushort *)(unsigned)((uint)uVar8 * 2 + iVar12);
              piVar20 = (int *)(unsigned)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
            }
            iVar17 = uVar22 * 6 + iVar21;
            *(ushort *)(unsigned)(iVar17 + 4) = uVar8;
            uVar22 = (uint)*(ushort *)(unsigned)(iVar17 + 2);
          }
        }
        piVar16 = piVar16 + 3;
        piVar15 = piVar15 + 3;
      }
      (*(int * *)(fr0_ - 0x64)) = piVar10;
      (*(int * *)(fr0_ - 0x74)) = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,((int)(*(int * *)(fr0_ - 0x84)) + 1U) * 4,piVar15,piVar16));
      (*(int * *)(fr0_ - 0x2c)) = (*(int * *)(fr0_ - 0x74));
      (*(uint * *)(fr0_ - 0x54)) = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(*(int *)(fr0_ - 0x6c)) << 2,piVar15,piVar16));
      puVar19 = (ushort *)(unsigned)0x2;
      (*(short * *)(fr0_ - 0x88)) = (short *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,(*(int * *)(fr0_ - 0x84)),2,piVar16));
      (*(short * *)(fr0_ - 0x44)) = (*(short * *)(fr0_ - 0x88));
      iVar17 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(int)(*(int * *)(fr0_ - 0x84)) << 1,puVar19,piVar16));
      ar4[0x70] = iVar17;
      (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))
                                    (a4,((int)(*(int * *)(fr0_ - 0x84)) + (int)piVar20 + 2) * 4,puVar19,piVar16));
      (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x70)) + (int)(*(int * *)(fr0_ - 0x84)) + 1;
      (*(int * *)(fr0_ - 0x58)) = (*(int * *)(fr0_ - 0x70));
      (*(int *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,((int)piVar20 * 2 + (*(int *)(fr0_ - 0x4c))) * 2,puVar19,piVar16));
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x48));
      piVar20 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(*(int *)(fr0_ - 0x40)) << 2,puVar19,piVar16));
      (*(int * *)(fr0_ - 0x28)) = piVar20;
      piVar15 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(int)(*(int * *)(fr0_ - 0x84)) << 3,puVar19,piVar16));
      ar4[0x40] = (int)piVar15;
      (*(int *)(fr0_ - 0x60)) = 0;
      uVar7 = *(ushort *)(unsigned)(iVar13 + 8);
      while (uVar7 != 0xffff) {
        puVar19 = (ushort *)(unsigned)((uint)uVar7 * 6 + iVar21);
        piVar16 = (int *)(unsigned)(uint)*puVar19;
        *piVar20 = (int)piVar16 + -1;
        (*(short * *)(fr0_ - 0x88))[(int)piVar16 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar7 = puVar19[1];
      }
      (*(uint * *)(fr0_ - 0x8c)) = (*(uint * *)(fr0_ - 0x54));
      piVar20 = (*(int * *)(fr0_ - 0x50));
      for ((*(int * *)(fr0_ - 0x3c)) = (int *)(unsigned)0x1; (*(int * *)(fr0_ - 0x3c)) <= piVar10; (*(int * *)(fr0_ - 0x3c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x3c)) + 1)
          ) {
        (*(int *)(fr0_ - 0x4c)) = CONCAT22((*(uint*)((uchar*)&(*(int *)(fr0_ - 0x4c))+2)),*(undefined2 *)(unsigned)(ar4[0x30] + *piVar20 * 2));
        uVar7 = *(ushort *)(unsigned)(piVar20 + 2);
        *piVar15 = *piVar20;
        uVar22 = (uint)uVar7;
        piVar15[1] = piVar20[1];
        piVar15 = piVar15 + 2;
        *(*(int * *)(fr0_ - 0x74)) = (int)(*(uint * *)(fr0_ - 0x8c));
        *(*(int * *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x60));
        *(*(int * *)(fr0_ - 0x70)) = (int)(*(int * *)(fr0_ - 0x68));
        puVar19 = (ushort *)(unsigned)&(*(int *)(fr0_ - 0x48));
        piVar16 = (*(int * *)(fr0_ - 0x30));
        (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x68)) + 1;
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c113dfa((*(ushort * *)(fr0_ - 0x5c)) + piVar20[1] * 6,&(*(int *)(fr0_ - 0x60)),puVar19,(*(int * *)(fr0_ - 0x30))));
        if (uVar22 != 0) {
          if (uVar22 == 0xffff) {
            *(*(short * *)(fr0_ - 0x88)) = 2;
          }
          else if (*(*(short * *)(fr0_ - 0x88)) != 1) {
            *(*(short * *)(fr0_ - 0x88)) = (short)(*(int *)(fr0_ - 0x4c));
          }
          (*(short * *)(fr0_ - 0x88)) = (*(short * *)(fr0_ - 0x88)) + 1;
          piVar24 = (*(int * *)(fr0_ - 0x64));
          for (; (*(int * *)(fr0_ - 0x64)) = piVar24, uVar22 != 0xffff;
              uVar22 = (uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 2)) {
            if (*(short *)(unsigned)(uVar22 * 6 + iVar21 + 4) == -1) {
              *(*(uint * *)(fr0_ - 0x8c)) = *(ushort *)(unsigned)(uVar22 * 6 + iVar21) - 1;
            }
            else {
              (*(int * *)(fr0_ - 0x64)) = (int *)(unsigned)((int)piVar24 + 1);
              *(*(uint * *)(fr0_ - 0x8c)) = (uint)piVar24;
            }
            (*(uint * *)(fr0_ - 0x8c)) = (*(uint * *)(fr0_ - 0x8c)) + 1;
            piVar24 = (*(int * *)(fr0_ - 0x64));
          }
        }
        piVar20 = piVar20 + 3;
        (*(int * *)(fr0_ - 0x74)) = (*(int * *)(fr0_ - 0x74)) + 1;
        (*(int * *)(fr0_ - 0x70)) = (*(int * *)(fr0_ - 0x70)) + 1;
      }
      *(*(int * *)(fr0_ - 0x74)) = (int)(*(uint * *)(fr0_ - 0x8c));
      *(*(int * *)(fr0_ - 0x70)) = (int)(*(int * *)(fr0_ - 0x68));
      piVar24 = (*(int * *)(fr0_ - 0x50));
      (*(int * *)(fr0_ - 0x74)) = (*(int * *)(fr0_ - 0x74)) + 1;
      (*(int * *)(fr0_ - 0x70)) = (*(int * *)(fr0_ - 0x70)) + 1;
      (*(int * *)(fr0_ - 0x64)) = piVar10;
      for ((*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)0x1; (*(int * *)(fr0_ - 0x7c)) <= piVar10; (*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x7c)) + 1)
          ) {
        uVar22 = (uint)*(ushort *)(unsigned)(piVar24 + 2);
        puVar1 = (*(uint * *)(fr0_ - 0x8c));
        piVar2 = (*(int * *)(fr0_ - 0x74));
        piVar3 = (*(int * *)(fr0_ - 0x70));
        ar7_00 = (*(int * *)(fr0_ - 0x64));
        if (uVar22 != 0) {
          for (; (*(uint * *)(fr0_ - 0x8c)) = puVar1, (*(int * *)(fr0_ - 0x74)) = piVar2, (*(int * *)(fr0_ - 0x70)) = piVar3, (*(int * *)(fr0_ - 0x64)) = ar7_00,
              uVar22 != 0xffff; uVar22 = (uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 2)) {
            uVar7 = *(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 4);
            piVar20 = (int *)(unsigned)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
            if (uVar7 != 0xffff) {
              *piVar15 = -1;
              piVar15[1] = -1;
              piVar15 = piVar15 + 2;
              (*(ushort * *)(fr0_ - 0x5c)) = (ushort *)(unsigned)((uint)uVar7 * 2 + iVar12);
              puVar19 = (ushort *)(unsigned)&(*(int *)(fr0_ - 0x48));
              (*(int * *)(fr0_ - 0x64)) = (int *)(unsigned)((int)ar7_00 + 1);
              ({ unsigned long t0_ = (unsigned long)(
                           (uint)(*(ushort * *)(fr0_ - 0x5c))[1] * 2 + iVar12); unsigned long t1_ = (unsigned long)((*(int *)(fr0_ - 0x38))); unsigned long t2_ = (unsigned long)(piVar20); unsigned long ri0_ = (unsigned long)((uint)*(*(ushort * *)(fr0_ - 0x5c)) * 2 + iVar12); *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 8) = (unsigned)t2_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 140)) - 16); FUN_8c113d68(&(*(int * *)(fr0_ - 0x68)),&(*(int *)(fr0_ - 0x60)),puVar19,ar7_00); });
              (*(int * *)(fr0_ - 0x70)) = piVar3 + 1;
              *piVar3 = (int)(*(int * *)(fr0_ - 0x68));
              (*(uint * *)(fr0_ - 0x8c)) = puVar1 + 1;
              *puVar1 = *(ushort *)(unsigned)(uVar22 * 6 + iVar21) - 1;
              (*(int * *)(fr0_ - 0x74)) = piVar2 + 1;
              *piVar2 = (int)(*(uint * *)(fr0_ - 0x8c));
              piVar16 = ar7_00;
            }
            puVar1 = (*(uint * *)(fr0_ - 0x8c));
            piVar2 = (*(int * *)(fr0_ - 0x74));
            piVar3 = (*(int * *)(fr0_ - 0x70));
            ar7_00 = (*(int * *)(fr0_ - 0x64));
          }
        }
        piVar24 = piVar24 + 3;
      }
      *(*(int * *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x60));
      uVar22 = ar4[0x56];
      if (uVar22 < (uint)((*(int *)(fr0_ - 0x34)) * 0x14)) {
        uVar22 = (*(int *)(fr0_ - 0x34)) * 0x14;
      }
      ar4[0x56] = uVar22;
      ar4[0x42] = (int)piVar10;
      ar4[0x51] = (*(int *)(fr0_ - 0x40));
      ar4[0xe] = (int)(*(int * *)(fr0_ - 0x84));
      ar4[0x11] = (int)(*(int * *)(fr0_ - 0x58));
      ar4[0x12] = (*(int *)(fr0_ - 0x24));
      ar4[0x30] = (int)(*(short * *)(fr0_ - 0x44));
      ar4[0x26] = (int)(*(int * *)(fr0_ - 0x2c));
      ar4[0x27] = (int)(*(uint * *)(fr0_ - 0x54));
      ar4[0x2d] = (*(int *)(fr0_ - 0x6c));
      (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x68)) + 1;
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c112b1c(ar4,(int)*(short *)(unsigned)((int)ar4 + 0x1be),puVar19,piVar16));
      ar4[0x52] = (int)(*(int * *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar13,puVar19,piVar16));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar21,puVar19,piVar16));
      if ((((code *)(uint)ar4[0x4c] == ((void *)0x8c11617a)) &&
          (uVar22 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c1155a0(ar4,iVar21,puVar19,piVar16)), (uVar22 & 0xff) != 0)) ||
         (((code *)(uint)ar4[0x4c] == ((void *)0x8c117bac) &&
          (uVar22 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c115732(ar4,iVar21,puVar19,piVar16)), (uVar22 & 0xff) != 0)))) {
        uVar11 = 1;
      }
      else {
        *(undefined1 *)(unsigned)(ar4 + 0x1f) = 1;
        uVar11 = 0;
      }
      return uVar11;
    }
    (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)0x0;
    (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)0x0;
    piVar16 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
    uVar22 = 0;
    if (piVar16 != (int *)(unsigned)0x0) {
      do {
        if (piVar16 == (int *)(unsigned)0x0) break;
        (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)*piVar16;
        uVar5 = *(ushort *)(unsigned)(uVar22 * 0xc + iVar13 + 8);
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84))] - (int)(*(uint * *)(fr0_ - 0x54));
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(iVar17 >> 2);
        while (uVar14 = (uint)uVar5, uVar14 != 0xffff) {
          if ((int *)(unsigned)*(int *)(unsigned)((uint)*(ushort *)(unsigned)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) ==
              (*(int * *)(fr0_ - 0x70))) {
            uVar22 = (uint)*(ushort *)(unsigned)(uVar14 * 6 + iVar21);
            piVar16 = (int *)(unsigned)piVar16[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(unsigned)(uVar14 * 6 + iVar21 + 2);
        }
        if (uVar22 == 0) {
          ar7 = 1;
        }
        else {
          iVar17 = piVar20[*(int *)(unsigned)(uVar22 * 0xc + iVar13) + 1] -
                   piVar20[*(int *)(unsigned)(uVar22 * 0xc + iVar13)];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          ar7 = iVar17 >> 2;
        }
LAB_8c11405a:
      } while (uVar14 != 0xffff);
      uVar5 = *(ushort *)(unsigned)(uVar22 * 0xc + iVar13 + 8);
      uVar14 = ar7;
      while( true ) {
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84)) + 1] - piVar20[(int)(*(int * *)(fr0_ - 0x84))];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        ar7 = iVar17 >> 2;
        (*(short * *)(fr0_ - 0x44)) = (short *)(unsigned)(ar7 - 1);
        (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)(uint)uVar8;
        uVar18 = 0;
        uVar4 = uVar7;
        if (ar7 != 0) {
          do {
            psVar9 = (short *)(unsigned)((uint)uVar4 * 6 + iVar21);
            uVar7 = uVar5;
            for ((*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)0x0; (*(int * *)(fr0_ - 0x7c)) < uVar14;
                (*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x7c)) + 1)) {
              *psVar9 = uVar8 + (short)uVar18;
              uVar6 = uVar7;
              if (uVar5 == 0xffff) {
                uVar6 = 0xffff;
              }
              psVar9[1] = uVar6;
              uVar7 = uVar7 + 1;
              psVar9 = psVar9 + 3;
            }
            if ((short *)(unsigned)uVar18 == (*(short * *)(fr0_ - 0x44))) {
              for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                *(ushort *)(unsigned)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
              }
            }
            uVar7 = uVar4 + (short)uVar14;
            piVar15 = (int *)(unsigned)(((int)(*(int * *)(fr0_ - 0x58)) + uVar18) * 0xc + iVar13);
            piVar15[1] = (int)(*(int * *)(fr0_ - 0x70)) + uVar18;
            uVar18 = uVar18 + 1;
            *piVar15 = (int)(*(int * *)(fr0_ - 0x84));
            uVar5 = uVar4;
            uVar4 = uVar7;
          } while (uVar18 < ar7);
        }
        (*(uint*)((uchar*)&(*(short * *)(fr0_ - 0x88))+0)) = (short)ar7;
        uVar8 = (short)(*(short * *)(fr0_ - 0x88)) + uVar8;
        piVar16 = (int *)(unsigned)piVar16[4];
        if (piVar16 == (int *)(unsigned)0x0) break;
        (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)*piVar16;
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84))] - (int)(*(uint * *)(fr0_ - 0x54));
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(iVar17 >> 2);
        uVar5 = 0xffff;
        uVar22 = (uint)(*(int * *)(fr0_ - 0x58));
        uVar14 = ar7;
      }
      uVar14 = 0;
      uVar22 = (uint)(*(int * *)(fr0_ - 0x58));
      if (ar7 != 0) {
        do {
          iVar17 = uVar22 * 0xc;
          uVar22 = uVar22 + 1;
          uVar14 = uVar14 + 1;
          *(undefined2 *)(unsigned)(iVar17 + iVar13 + 8) = 0xffff;
        } while (uVar14 < ar7);
      }
    }
    ar5 = *(int *)(unsigned)(ar5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c113e98\n.set _FUN_8c113e98, _FUN_8c113e98_def\n");
