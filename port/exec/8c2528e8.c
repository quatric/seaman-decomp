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
uint FUN_8c2528e8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2528e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r8 = 0;
  ushort *puVar11;
  ushort *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  
  uVar1 = *ar4;
  uVar2 = uVar1 & 0xc000;
  puVar11 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
  if ((uVar1 & 0xc000) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 3;
    for ((*(int *)(fr0_ - 0x24)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x24)) < (int)uVar2; (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1) {
      puVar6 = (undefined4 *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar12 = puVar11 + 2;
      puVar4 = (undefined4 *)(unsigned)((uint)puVar11[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar11 = puVar11 + 3;
      puVar3 = (undefined4 *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) ||
         (((float)(uint)puVar4[1] - (float)(uint)puVar6[1]) * ((float)(uint)puVar3[2] - (float)(uint)puVar4[2]) -
          ((float)(uint)puVar4[2] - (float)(uint)puVar6[2]) * ((float)(uint)puVar3[1] - (float)(uint)puVar4[1]) <= 0.0)) {
        *puVar6 = 0xe0000000;
        CacheBlockWriteBack(puVar6);
        puVar6[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar6[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar6[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar6[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar6 + 0xb);
        uVar13 = *puVar6;
        uVar14 = puVar6[1];
        uVar16 = puVar6[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x1c) = puVar6[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x18) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x14) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x10) = uVar13;
        *puVar4 = 0xe0000000;
        CacheBlockWriteBack(puVar4);
        puVar4[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar4[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar4[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar4[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar4 + 0xb);
        uVar13 = *puVar4;
        uVar14 = puVar4[1];
        uVar16 = puVar4[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x4c) = puVar4[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x48) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x44) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x40) = uVar13;
        *puVar3 = 0xf0000000;
        CacheBlockWriteBack(puVar3);
        puVar3[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar3[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar3[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar3[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar3 + 0xb);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar16 = puVar3[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x7c) = puVar3[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x78) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x74) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x70) = uVar13;
        unaff_r8 = unaff_r8 + 0x90;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 3;
      }
    }
  }
  else if (uVar2 == 0x4000) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + (uint)ar4[1] * 4;
    for ((*(int *)(fr0_ - 0x1c)) = 0; uVar2 = (uint)ar4[1], (*(int *)(fr0_ - 0x1c)) < (int)uVar2; (*(int *)(fr0_ - 0x1c)) = (*(int *)(fr0_ - 0x1c)) + 1) {
      puVar6 = (undefined4 *)(unsigned)((uint)*puVar11 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar4 = (undefined4 *)(unsigned)((uint)puVar11[1] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar12 = puVar11 + 3;
      puVar3 = (undefined4 *)(unsigned)((uint)puVar11[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      puVar11 = puVar11 + 4;
      puVar7 = (undefined4 *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
      if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) ||
         (((float)(uint)puVar4[1] - (float)(uint)puVar6[1]) * ((float)(uint)puVar3[2] - (float)(uint)puVar4[2]) -
          ((float)(uint)puVar4[2] - (float)(uint)puVar6[2]) * ((float)(uint)puVar3[1] - (float)(uint)puVar4[1]) <= 0.0)) {
        *puVar6 = 0xe0000000;
        CacheBlockWriteBack(puVar6);
        puVar6[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar6[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar6[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar6[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar6 + 0xb);
        uVar13 = *puVar6;
        uVar14 = puVar6[1];
        uVar16 = puVar6[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x1c) = puVar6[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x18) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x14) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x10) = uVar13;
        *puVar4 = 0xe0000000;
        CacheBlockWriteBack(puVar4);
        puVar4[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar4[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar4[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar4[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar4 + 0xb);
        uVar13 = *puVar4;
        uVar14 = puVar4[1];
        uVar16 = puVar4[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x4c) = puVar4[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x48) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x44) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x40) = uVar13;
        *puVar3 = 0xe0000000;
        CacheBlockWriteBack(puVar3);
        puVar3[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar3[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar3[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar3[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar3 + 0xb);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar16 = puVar3[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x7c) = puVar3[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x78) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x74) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x70) = uVar13;
        *puVar7 = 0xf0000000;
        CacheBlockWriteBack(puVar7);
        puVar7[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar7[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar7[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar7[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar7 + 0xb);
        uVar13 = *puVar7;
        uVar14 = puVar7[1];
        uVar16 = puVar7[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0xac) = puVar7[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0xa8) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0xa4) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0xa0) = uVar13;
        unaff_r8 = unaff_r8 + 0xc0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + 4;
      }
    }
  }
  else if (uVar2 == 0x8000) {
    for (iVar5 = 0; uVar2 = (uint)ar4[1], iVar5 < (int)uVar2; iVar5 = iVar5 + 1) {
      puVar12 = puVar11 + 1;
      uVar2 = (uint)*puVar11;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + uVar2;
      if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) != 0) ||
         (iVar10 = (uint)puVar11[2] * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510),
         iVar9 = (uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510),
         iVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510) + (uint)puVar11[3] * 0x40, fVar17 = *(float *)(unsigned)(iVar10 + 4),
         fVar15 = *(float *)(unsigned)(iVar10 + 8),
         (fVar17 - *(float *)(unsigned)(iVar9 + 4)) * (*(float *)(unsigned)(iVar8 + 8) - fVar15) -
         (fVar15 - *(float *)(unsigned)(iVar9 + 8)) * (*(float *)(unsigned)(iVar8 + 4) - fVar17) <= 0.0)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + uVar2;
        (*(int *)(fr0_ - 0x2c)) = 0;
        if (0 < (int)(uVar2 - 1)) {
          do {
            uVar1 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar3 = (undefined4 *)(unsigned)((uint)uVar1 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
            *puVar3 = 0xe0000000;
            CacheBlockWriteBack(puVar3);
            puVar3[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
            puVar3[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
            puVar3[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
            puVar3[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
            CacheBlockWriteBack(puVar3 + 0xb);
            uVar13 = *puVar3;
            uVar14 = puVar3[1];
            uVar16 = puVar3[6];
            *(undefined4 *)(unsigned)(unaff_r8 + 0x1c) = puVar3[7];
            *(undefined4 *)(unsigned)(unaff_r8 + 0x18) = uVar16;
            *(undefined4 *)(unsigned)(unaff_r8 + 0x14) = uVar14;
            *(undefined4 *)(unsigned)(unaff_r8 + 0x10) = uVar13;
            unaff_r8 = unaff_r8 + 0x30;
            (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
          } while ((*(int *)(fr0_ - 0x2c)) < (int)(uVar2 - 1));
        }
        puVar11 = puVar12 + 1;
        puVar3 = (undefined4 *)(unsigned)((uint)*puVar12 * 0x40 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510));
        *puVar3 = 0xf0000000;
        CacheBlockWriteBack(puVar3);
        puVar3[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0);
        puVar3[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4);
        puVar3[10] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8);
        puVar3[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc);
        CacheBlockWriteBack(puVar3 + 0xb);
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar16 = puVar3[6];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x1c) = puVar3[7];
        *(undefined4 *)(unsigned)(unaff_r8 + 0x18) = uVar16;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x14) = uVar14;
        *(undefined4 *)(unsigned)(unaff_r8 + 0x10) = uVar13;
        unaff_r8 = unaff_r8 + 0x30;
      }
      else {
        puVar11 = puVar12 + uVar2;
      }
    }
  }
  else if (uVar2 == 0xc000) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4ab308) & 0x800000) == 0) {
      UNRECOVERED_JUMPTABLE = (code *)((void *)(unsigned)0x8c242234);
    }
    else {
      UNRECOVERED_JUMPTABLE = ((void *)0x8c2420fe);
    }
                    
                    
    uVar13 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)UNRECOVERED_JUMPTABLE))(ar4,uVar1 & 0x3fff,vr6,vr7));
    return uVar13;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2528e8\n.set _FUN_8c2528e8, _FUN_8c2528e8_def\n");
