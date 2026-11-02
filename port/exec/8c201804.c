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
undefined4 FUN_8c201804_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *unaff_r14 = 0;
  
  if ((((*(short *)(unsigned)(unaff_r14 + ain0) != 0) && (*(ushort *)(unsigned)(unaff_r14 + ain0) < 4)) &&
      (*(ushort *)(unsigned)(unaff_r14 + 0x44) < 4)) && (*(uint *)(unsigned)(unaff_r14 + 0x48) < 0xe1001)) {
    iVar3 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + (uint)*(ushort *)(unsigned)(unaff_r14 + 0x40) * 4);
    iVar6 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + (uint)*(ushort *)(unsigned)(unaff_r14 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(unsigned)(unaff_r14 + 0x48) + 0x80;
    if (uVar8 < 0xe1001) {
      puVar5 = ar4;
      puVar7 = unaff_r14;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = unaff_r14 + 0x10;
      *puVar5 = 0;
      puVar5 = ar4 + 0x12;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      puVar7 = unaff_r14 + 0x30;
      puVar5 = ar4 + 0x34;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      *(undefined2 *)(unsigned)(ar4 + 0x4e) = *(undefined2 *)(unsigned)(unaff_r14 + 0x42);
      *(undefined2 *)(unsigned)(ar4 + 0x4c) = *(undefined2 *)(unsigned)(unaff_r14 + 0x40);
      *(int *)(unsigned)(ar4 + 0x44) = ar5 + 0x60;
      *(int *)(unsigned)(ar4 + 0x48) = ar5 + 0x80;
      iVar3 = ar5 + 0x80 + iVar3;
      *(undefined2 *)(unsigned)(ar4 + 0x54) = *(undefined2 *)(unsigned)(unaff_r14 + 0x44);
      if (*(short *)(unsigned)(unaff_r14 + 0x44) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x50) = iVar3;
        iVar3 = iVar3 + iVar6;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(unaff_r14 + 0x48);
      if (*(int *)(unsigned)(unaff_r14 + 0x48) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x58) = iVar3;
      }
      uVar2 = *(ushort *)(unsigned)(unaff_r14 + 0x46);
      *(undefined2 *)(unsigned)(unaff_r14 + 0x46) = 0;
      uVar8 = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c201948(ar5,uVar8,iVar3,puVar5));
      *(ushort *)(unsigned)(unaff_r14 + 0x46) = uVar2;
      if ((uVar8 & 0xffff) != (uint)uVar2) {
        return 0xffffff20;
      }
      return 0;
    }
  }
  return 0xffffff21;
}

__asm__(".globl _FUN_8c201804\n.set _FUN_8c201804, _FUN_8c201804_def\n");
