#include "../decls.h"
uint FUN_8c1fae2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *in_VBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  puVar6 = (&DATA_8c1fb094);
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(undefined4 *)0xff00001c = *(undefined4 *)0xff00001c | (int)0x800;
  puVar10 = (&FUN_8c1fb0c8);
  puVar9 = (&DATA_8c1fb3d0);
  puVar8 = (&DATA_8c1fb3d8);
  puVar7 = (&DATA_8c1fb230);
  puVar12 = in_VBR;
  if (ar4 == 0x80000000) {
    *(undefined **)(&DATA_8c1fb038) = (&DATA_8c1fb230);
    *(undefined **)puVar6 = puVar7;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = ar5;
    puVar16 = (undefined4 *)(&DATA_8c1fb098);
  }
  else {
    *(undefined **)(&DATA_8c1fb038) = (&FUN_8c1fb0c8);
    *(undefined **)puVar6 = puVar10;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = 0;
    puVar16 = (undefined4 *)(&DATA_8c1fb098);
  }
  for (; puVar16 <= (&FUN_8c1fb0c8); puVar16 = puVar16 + 1) {
    *puVar12 = *puVar16;
    puVar12 = puVar12 + 1;
  }
  iVar13 = ((uint)((int)puVar12 - (int)in_VBR) >> 5) + 1;
  puVar12 = in_VBR;
  do {
    CacheBlockPurge(puVar12);
    iVar13 = iVar13 + -1;
    puVar12 = puVar12 + 8;
  } while (iVar13 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x100);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x400;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xffffff00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x400);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x1000;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xfffffc00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x600);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb03c); puVar6 = (&DATA_8c1faa94),
      puVar12 <= (&DATA_8c1fb098); puVar12 = puVar12 + 1) {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x1800;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xfffffa00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  iVar14 = (int)0x200;
  iVar13 = (int)(int)0xfffffe40;
  iVar15 = (int)0x620;
  do {
    iVar11 = iVar13 >> 3;
    iVar13 = iVar13 + 0x20;
    *(undefined **)((int)in_VBR + iVar14 + iVar11) = puVar6;
  } while (iVar15 > iVar13);
  return ((uint)(iVar15 <= iVar13) | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & 0xefffffff;
}

__asm__(".globl _FUN_8c1fae2c\n.set _FUN_8c1fae2c, _FUN_8c1fae2c_def\n");
