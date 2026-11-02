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
undefined4 FUN_8c1213d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1213d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *ar4_00;
  int iVar7;
  undefined4 *a6;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ar4_01;
  uint *ar4_02;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *ar7_00;
  uint ain0;
  uint uVar14;
  uint uVar15;
  int a4;
  
  ar4_01 = *(int *)(unsigned)(ar4 + 0xfc);
  a4 = *(int *)(unsigned)(ar4 + 0x108);
  iVar6 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 8))))(a4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x70))))(a4,iVar6,ar6,ar7));
  iVar10 = *(int *)(unsigned)(ar5 * 8 + ar4 + 0x26c);
  ain0 = (uint)*(ushort *)(unsigned)(ar4 + 0x288);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x20))))(a4,iVar6,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x9c))))(a4,iVar6,ar6,ar7));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x50))))(a4,iVar6,ar6,ar7));
  iVar6 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x94))))(a4,iVar6,ar6,ar7));
  ar7_00 = (undefined4 *)(unsigned)(ar4 + 0xf4);
  ar4_00 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11c914(ar4_01,ain0 << 1,4,ar7_00));
  puVar13 = (undefined4 *)(unsigned)(ain0 * 4);
  ar4_02 = (uint *)(unsigned)((int)puVar13 + (int)ar4_00);
  (vsp = ((unsigned long)(fr0_ - 92)), memset(ar4_02,0xff,puVar13,ar7_00));
  (*(uint *)(fr0_ - 0x50)) = 0;
  puVar11 = (undefined4 *)(unsigned)((ain0 - 1) * 2 + iVar10);
  if (uVar5 != 0) {
    do {
      uVar14 = 0;
      (*(uint *)(fr0_ - 0x58)) = 0;
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x284))));
      iVar10 = uVar1 * ((uint)*(ushort *)(unsigned)(iVar6 + (*(uint *)(fr0_ - 0x50)) * 2) - iVar3);
      if (uVar1 != 0) {
        do {
          uVar15 = uVar14;
          uVar9 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x84))))(a4,uVar14,puVar13,ar7_00));
          iVar7 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0xc0))))(uVar9,uVar15,puVar13,ar7_00));
          a6 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x68))))(uVar9,uVar15,puVar13,ar7_00));
          uVar9 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x60))))(uVar9,uVar15,puVar13,ar7_00));
          if (iVar4 == 0) {
            iVar7 = (uint)*(ushort *)(unsigned)(iVar2 + (iVar10 + uVar14) * 2) + iVar7;
            iVar8 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c1211ac(iVar7,uVar9,a6,ar7_00));
            ar7_00 = (undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
            ({ unsigned long t0_ = (unsigned long)(uVar9); unsigned long t1_ = (unsigned long)(iVar7); unsigned long ri0_ = (unsigned long)(ain0); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 92)) - 8) + 4) = (unsigned)t1_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); FUN_8c1211f0(ar4_00,iVar7,a6,ar7_00); });
          }
          else {
            uVar15 = (uint)*(ushort *)(unsigned)(iVar2 + (iVar10 + uVar14) * 2);
            puVar13 = (undefined4 *)(unsigned)(uVar15 & 1);
            iVar7 = ((int)uVar15 >> 1) + iVar7;
            iVar8 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c121260(iVar7,puVar13,uVar9,a6));
            ar7_00 = a6;
            ({ unsigned long t0_ = (unsigned long)(ain0); unsigned long t1_ = (unsigned long)(uVar9); unsigned long t2_ = (unsigned long)(puVar13); unsigned long ri0_ = (unsigned long)(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 92)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 92)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 92)) - 16) + 8) = (unsigned)t2_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 92)) - 16); FUN_8c1212d4(ar4_00,iVar7,puVar13,a6); });
            a6 = puVar13;
          }
          (*(uint *)(fr0_ - 0x58)) = (*(uint *)(fr0_ - 0x58)) + iVar8;
          uVar14 = uVar14 + 1;
          (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))[4]));
          puVar13 = a6;
        } while (uVar14 < uVar1);
      }
      uVar14 = 0;
      puVar12 = ar4_02;
      puVar13 = puVar11;
      ar7_00 = ar4_00;
      if (ain0 != 0) {
        do {
          uVar15 = ar4_00[uVar14] - ((*(uint *)(fr0_ - 0x58)) >> 1);
          if (uVar15 < ar4_02[uVar14]) {
            *puVar12 = uVar15;
            *(undefined2 *)(unsigned)puVar13 = *(undefined2 *)(unsigned)((*(uint *)(fr0_ - 0x50)) * 2 + iVar6);
          }
          uVar14 = uVar14 + 1;
          *ar7_00 = 0;
          puVar13 = (undefined4 *)(unsigned)((int)puVar13 + -2);
          ar7_00 = ar7_00 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar14 < ain0);
      }
      (*(uint *)(fr0_ - 0x50)) = (*(uint *)(fr0_ - 0x50)) + 1;
    } while ((*(uint *)(fr0_ - 0x50)) < uVar5);
  }
                    
                    
  uVar9 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_01 + 0x18))))(ar4_00,ar4 + 0xf4,vr6,vr7));
  return uVar9;
}

__asm__(".globl _FUN_8c1213d0\n.set _FUN_8c1213d0, _FUN_8c1213d0_def\n");
