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
uint FUN_8c1fae2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fae2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 1536; for (int i_ = 0; i_ < 1536; i_++) z_[i_] = 0; }
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
  undefined4 *in_VBR = (void *)0x8cf80000;
  byte in_MD = 0;
  byte in_RB = 0;
  byte in_BL = 0;
  byte in_FD = 0;
  byte in_M = 0;
  byte in_Q = 0;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  
  puVar6 = (&(*(undefined1 *)(unsigned)0x8c1fb094));
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(undefined4 *)(unsigned)0xff00001c = *(undefined4 *)(unsigned)0xff00001c | (int)0x800;
  puVar10 = ((void *)(unsigned)0x8c1fb0c8);
  puVar9 = (&(*(undefined1 *)(unsigned)0x8c1fb3d0));
  puVar8 = (&(*(undefined1 *)(unsigned)0x8c1fb3d8));
  puVar7 = (&(*(undefined1 *)(unsigned)0x8c1fb230));
  puVar12 = in_VBR;
  if (ar4 == 0x80000000) {
    *(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb038)) = (&(*(undefined1 *)(unsigned)0x8c1fb230));
    *(unsigned *)(unsigned)puVar6 = puVar7;
    *(undefined4 *)(unsigned)puVar8 = 0;
    *(undefined4 *)(unsigned)puVar9 = ar5;
    puVar16 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb098));
  }
  else {
    *(unsigned *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb038)) = ((void *)(unsigned)0x8c1fb0c8);
    *(unsigned *)(unsigned)puVar6 = puVar10;
    *(undefined4 *)(unsigned)puVar8 = 0;
    *(undefined4 *)(unsigned)puVar9 = 0;
    puVar16 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb098));
  }
  for (; puVar16 <= ((void *)(unsigned)0x8c1fb0c8); puVar16 = puVar16 + 1) {
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
  puVar16 = (undefined4 *)(unsigned)((int)in_VBR + (int)0x100);
  for (puVar12 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb004)); puVar12 <= (&(*(undefined1 *)(unsigned)0x8c1fb03c)); puVar12 = puVar12 + 1)
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
  puVar16 = (undefined4 *)(unsigned)((int)in_VBR + (int)0x400);
  for (puVar12 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb004)); puVar12 <= (&(*(undefined1 *)(unsigned)0x8c1fb03c)); puVar12 = puVar12 + 1)
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
  puVar16 = (undefined4 *)(unsigned)((int)in_VBR + (int)0x600);
  for (puVar12 = (undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1fb03c)); puVar6 = (&(*(undefined1 *)(unsigned)0x8c1faa94)),
      puVar12 <= (&(*(undefined1 *)(unsigned)0x8c1fb098)); puVar12 = puVar12 + 1) {
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
    *(unsigned *)(unsigned)((int)in_VBR + iVar14 + iVar11) = puVar6;
  } while (iVar15 > iVar13);
  return ((uint)(iVar15 <= iVar13) | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & 0xefffffff;
}

__asm__(".globl _FUN_8c1fae2c\n.set _FUN_8c1fae2c, _FUN_8c1fae2c_def\n");
