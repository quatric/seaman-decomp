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
int FUN_8c25d0a0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25d0a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *extraout_r2 = 0;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *extraout_r3 = 0;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *a5;
  uint uVar18;
  int iVar19;
  uint n;
  bool bVar20;
  uint uVar21;
  
  bVar1 = false;
  bVar20 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d70) == 1;
  iVar17 = ar5;
  uVar18 = ar6;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) == 0) {
    uVar18 = (*(uint *)(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25cebc(ar4,ar5,(*(uint *)(fr0_ + 0x00000000)),ar7));
  }
  uVar21 = ar4 * ar5;
  iVar19 = (*(uint *)(fr0_ + 0x00000000)) * 0x20;
  (*(int *)(fr0_ - 0xd8)) = ar6 * uVar21 * 0x18 + *(int *)(unsigned)(iVar19 + -0x73b55fe4);
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x20) != 0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa010) != 0)) {
    iVar17 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa018) + iVar19);
    (*(uint *)(fr0_ - 0xcc)) = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25cfc2(*(int *)(unsigned)(iVar19 + -0x73b55fe4) + uVar21 * 0x60,iVar17,uVar18,ar7));
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa05c) == 0) && (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa064) != 0 && (bVar20 != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x80) != 0) {
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25d028((*(int *)(fr0_ - 0xd8)),iVar17,uVar18,ar7));
    (*(int *)(fr0_ - 0xd8)) = (*(int *)(fr0_ - 0xd8)) + 0x18;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa05c) == 0) {
    (*(uint *)(fr0_ - 0x98)) = 0x80000000;
  }
  else {
    (*(uint *)(fr0_ - 0x98)) = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa060) == 0) {
    (*(uint *)(fr0_ - 0x94)) = 0x80000000;
  }
  else {
    (*(uint *)(fr0_ - 0x94)) = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa064) == 0) {
    (*(uint *)(fr0_ - 0x90)) = 0x80000000;
  }
  else {
    (*(uint *)(fr0_ - 0x90)) = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa068) == 0) {
    (*(uint *)(fr0_ - 0x84)) = 0x80000000;
  }
  else {
    (*(uint *)(fr0_ - 0x84)) = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa06c) == 0) {
    (*(uint *)(fr0_ - 0x88)) = 0x80000000;
  }
  else {
    (*(uint *)(fr0_ - 0x88)) = 0;
  }
  iVar7 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa05c) * 4);
  iVar9 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa060) * 4);
  iVar10 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa064) * 4);
  iVar11 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa068) * 4);
  iVar12 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa06c) * 4);
  iVar19 = *(int *)(unsigned)(iVar19 + -0x73b55fdc);
  iVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa05c) * 4) * uVar21 * 4 + iVar19;
  iVar5 = iVar4 + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa060) * 4) * uVar21 * 4;
  iVar6 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa064) * 4) * uVar21 * 4 + iVar5;
  iVar17 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa068) * 4;
  n = 0;
  iVar13 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + iVar17);
  uVar18 = (uint)bVar20 << 0x1d;
  (*(uint *)(fr0_ - 0xd4)) = ar6;
  if (uVar21 != 0) {
    do {
      uVar16 = 0;
      if ((*(int *)(fr0_ + 0x00000004)) == 0) {
        (*(uint *)(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_01051c(n,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c),vr6,vr7));
        (*(uint *)(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_0106dc(n,(*(unsigned *)(unsigned)0x8c4aa00c),vr6,vr7));
      }
      else if ((*(int *)(fr0_ + 0x00000004)) == 1) {
        (*(uint *)(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_0106dc(n,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa008),vr6,vr7));
        (*(uint *)(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_01051c(n,(*(unsigned *)(unsigned)0x8c4aa008),vr6,vr7));
      }
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d74) == 1) && (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d78) < (*(uint *)(fr0_ - 0xd4)) || ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d7c) < (*(uint *)(fr0_ - 0xd0)))))) {
        uVar16 = 0x80000000;
      }
      uVar2 = ((*(uint *)(fr0_ - 0xd0)) & 0x3f) << 8;
      iVar17 = (*(uint *)(fr0_ - 0xd0)) * (*(undefined4 *)(unsigned)(unsigned)0x8c4aa008) + (*(uint *)(fr0_ - 0xd4));
      uVar3 = ((*(uint *)(fr0_ - 0xd4)) & 0x3f) << 2;
      uVar14 = (uint)(n == uVar21 - 1) << 0x1f | uVar2 | uVar3;
      ((uint *)(fr0_ - 0x50))[6] = uVar14 | uVar18;
      (*(uint *)(fr0_ - 0x34)) = iVar7 * 4 * iVar17 + iVar19 | (*(uint *)(fr0_ - 0x98)) | uVar16;
      uVar8 = iVar9 * 4 * iVar17 + iVar4 | (*(uint *)(fr0_ - 0x94)) | uVar16;
      uVar15 = iVar10 * 4 * iVar17 + iVar5 | (*(uint *)(fr0_ - 0x90)) | uVar16;
      (*(uint *)(fr0_ - 0x28)) = iVar11 * 4 * iVar17 + iVar6 | (*(uint *)(fr0_ - 0x84)) | uVar16;
      (*(uint *)(fr0_ - 0x24)) = uVar15;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c277d90) == 0) {
        (*(uint *)(fr0_ - 0x24)) = iVar12 * 4 * iVar17 + iVar6 + iVar13 * uVar21 * 4 | (*(uint *)(fr0_ - 0x88)) | uVar16;
      }
      (*(uint *)(fr0_ - 0x30)) = uVar8;
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d80) != 0) && ((*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x28)), (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d84) == 1)) {
        (*(uint *)(fr0_ - 0x30)) = uVar8;
        (*(uint *)(fr0_ - 0x28)) = uVar8;
      }
      (*(uint *)(fr0_ - 0x2c)) = uVar15;
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x20) == 0) {
        iVar17 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(n * 0x18 + (*(int *)(fr0_ - 0xd8)),((uint *)(fr0_ - 0x50)) + 6,0x18,ar7));
      }
      else {
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa010) == 0) {
          ((uint *)(fr0_ - 0x50))[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          ((uint *)(fr0_ - 0x50))[0] = uVar14 | uVar18 | 0x40000000;
          ((uint *)(fr0_ - 0x50))[1] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[2] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[3] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[4] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[5] = 0x80000000;
          iVar17 = n * 0x30 + (*(int *)(fr0_ - 0xd8));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,((uint *)(fr0_ - 0x50)) + 6,0x18,ar7));
          iVar17 = iVar17 + 0x18;
          a5 = ((uint *)(fr0_ - 0x50));
        }
        else {
          ((uint *)(fr0_ - 0x50))[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          ((uint *)(fr0_ - 0x80))[6] = uVar2 | uVar3 | uVar18 | 0x50000000;
          ((uint *)(fr0_ - 0x80))[0] = uVar14 | uVar18 | 0x40000000;
          ((uint *)(fr0_ - 0x50))[0] = uVar2 | uVar3 | 0x50000000;
          if (bVar1) {
            (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0xcc));
          }
          ((uint *)(fr0_ - 0x50))[1] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[2] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[3] = (*(uint *)(fr0_ - 0xcc));
          ((uint *)(fr0_ - 0x50))[4] = 0x80000000;
          ((uint *)(fr0_ - 0x50))[5] = 0x80000000;
          (*(undefined4 *)(fr0_ - 0x64)) = 0x80000000;
          (*(undefined4 *)(fr0_ - 0x60)) = 0x80000000;
          (*(uint *)(fr0_ - 0x58)) = (*(uint *)(fr0_ - 0x28));
          (*(undefined4 *)(fr0_ - 0x54)) = 0x80000000;
          (*(uint *)(fr0_ - 0x2c)) = 0x80000000;
          (*(uint *)(fr0_ - 0x28)) = 0x80000000;
          ((uint *)(fr0_ - 0x80))[1] = 0x80000000;
          ((uint *)(fr0_ - 0x80))[2] = 0x80000000;
          ((uint *)(fr0_ - 0x80))[3] = 0x80000000;
          ((uint *)(fr0_ - 0x80))[4] = 0x80000000;
          ((uint *)(fr0_ - 0x80))[5] = 0x80000000;
          iVar17 = n * 0x60 + (*(int *)(fr0_ - 0xd8));
          (*(uint *)(fr0_ - 0x5c)) = uVar15;
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,((uint *)(fr0_ - 0x50)) + 6,0x18,ar7));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17 + 0x18,((uint *)(fr0_ - 0x50)),0x18,ar7));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17 + 0x30,((uint *)(fr0_ - 0x80)) + 6,0x18,ar7));
          a5 = ((uint *)(fr0_ - 0x80));
          iVar17 = iVar17 + 0x48;
        }
        iVar17 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,a5,0x18,ar7));
      }
      n = n + 1;
    } while (n < uVar21);
  }
  return iVar17;
}

__asm__(".globl _FUN_8c25d0a0\n.set _FUN_8c25d0a0, _FUN_8c25d0a0_def\n");
