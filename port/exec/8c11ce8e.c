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
undefined4 FUN_8c11ce8e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ce8e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *s8;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  undefined *a7;
  undefined4 extraout_fr3 = 0;
  undefined8 in_xd2 = 0;
  byte in_FPSCR_DN = 0;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR = 0;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_SZ = 0;
  char cVar14;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c127c28));
  (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 4);
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 8);
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0xc);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0x10);
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0x14);
  (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c127c40));
  (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c40)) + 4);
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c40)) + 8);
  uVar4 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if (ar5 == (undefined4 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,0x13,uVar4,ar7));
    }
    else {
      iVar7 = (int)0x2b4;
      iVar8 = ar4 + 8;
      bVar9 = 0;
      bVar11 = 0;
      bVar13 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                       (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c914(ar4,1,iVar7,iVar8));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,2,iVar7,iVar8));
      }
      else {
        iVar7 = (int)0xc4;
        *(int *)(unsigned)(iVar2 + 0x48) = iVar2;
        puVar5 = (undefined4 *)(unsigned)(iVar7 + iVar2);
        *(undefined1 *)(unsigned)(iVar2 + 0x4c) = 0;
        *puVar5 = *ar5;
        puVar5[1] = ar5[1];
        puVar5[2] = ar5[2];
        puVar5[3] = ar5[3];
        puVar5[4] = ar5[4];
        puVar5[5] = ar5[5];
        puVar1 = (&(*(undefined1 *)(unsigned)0x8c1274a4));
        *(undefined4 *)(unsigned)(0xf4 + iVar2) = *(undefined4 *)(unsigned)(ar4 + 8);
        s8 = (&(*(undefined1 *)(unsigned)0x8c127aba));
        *(int *)(unsigned)(0xfc + iVar2) = ar4;
        ar6_00 = &(*(undefined4 *)(fr0_ - 0x34));
        puVar5 = &(*(undefined4 *)(fr0_ - 0x28));
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        0xffe7ffff & 0x100000) >> 0x14);
        a7 = (&(*(undefined1 *)(unsigned)0x8c1278b0));
        uVar3 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12799c))); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c127a74))); unsigned long t2_ = (unsigned long)(s8
                           ); unsigned long t3_ = (unsigned long)(puVar1); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 52)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1201e6))))
                          (iVar2,puVar5,ar6_00,(&(*(undefined1 *)(unsigned)0x8c1278b0))); });
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,puVar5,ar6_00,a7));
          *(undefined4 *)(unsigned)(0xe8 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x20))))(ar4 + 8,puVar5,ar6_00,a7));
          *(undefined4 *)(unsigned)(0xec + iVar2) = uVar4;
          *(undefined4 *)(unsigned)(iVar2 + 0x60) = 0;
          *(undefined4 *)(unsigned)(iVar2 + 100) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x5c));
          *(undefined4 *)(unsigned)(iVar2 + 0x6c) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x5c) + 4);
          *(undefined4 *)(unsigned)(iVar2 + 0x70) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x54));
          puVar1 = (&(*(undefined1 *)(unsigned)0x8c11c8be));
          *(undefined4 *)(unsigned)(iVar2 + 0x74) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x54) + 4);
          iVar7 = (int)0x100;
          *(undefined4 *)(unsigned)(iVar7 + iVar2) = 0;
          *(undefined4 *)(unsigned)(iVar7 + 4 + iVar2) = 0;
          *(undefined1 *)(unsigned)(0x234 + iVar2) = 0;
          uVar3 = 0xffe7ffff;
          iVar7 = (int)0xe0;
          *(unsigned *)(unsigned)(iVar7 + iVar2) = puVar1;
          *(undefined2 *)(unsigned)(iVar7 + 100 + iVar2) = 0;
          *(undefined4 *)(unsigned)(iVar7 + 0x68 + iVar2) = 4;
          cVar14 = (char)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                           uVar3 & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(0x28,ar4 + 8,ar6_00,a7));
          *(undefined4 *)(unsigned)(0x2b0 + iVar2) = uVar4;
          if (*(int *)(unsigned)(0x2b0 + iVar2) == 0) {
            (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,2,ar6_00,a7));
          }
          else {
            iVar7 = (int)0x22c;
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + iVar2)) = 0;
            puVar1 = ((void *)(unsigned)0x8c120348);
            a7 = (undefined *)(unsigned)0x0;
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c11d120);
            if (cVar14 != '\0') {
              in_xd2 = CONCAT44(((void *)(unsigned)0x8c120348),(*(undefined4 *)(unsigned)(unsigned)0x8c11d120));
              uVar4 = extraout_fr3;
            }
            ar6_00 = (undefined4 *)(unsigned)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(0x2a0 + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(unsigned)(0x2a0 + iVar2) = in_xd2;
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(iVar2 + 0x48,4,ar6_00,0));
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)(unsigned)0x0;
              ar6_00 = (undefined4 *)(unsigned)(0x230 + iVar2);
              uVar4 = 0x29;
              uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c120348(iVar2 + 0x48,0x29,ar6_00,0));
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11d8fc(iVar2,uVar4,ar6_00,a7)), uVar4 = 0x218df4f5,
                 (uVar3 & 0xff) == 0)) {
                iVar7 = (int)0xf8;
                iVar8 = (int)0xe4;
                uVar3 = 0;
                *(undefined4 *)(unsigned)(iVar7 + iVar2) = ar6;
                puVar6 = (undefined1 *)(unsigned)(iVar8 + iVar2);
                *(undefined4 *)(unsigned)(iVar7 + -8 + iVar2) = uVar4;
                do {
                  *puVar6 = 1;
                  puVar6[1] = 1;
                  uVar3 = uVar3 + 3;
                  puVar6[2] = 1;
                  puVar6 = puVar6 + 3;
                } while (uVar3 < 3);
                return iVar2;
              }
            }
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + iVar2),*(undefined4 *)(unsigned)(iVar2 + 0x40),ar6_00,a7
                      ));
        }
        (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x18))))(iVar2,ar4 + 8,ar6_00,a7));
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11ce8e\n.set _FUN_8c11ce8e, _FUN_8c11ce8e_def\n");
