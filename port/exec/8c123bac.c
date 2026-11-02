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
undefined4 FUN_8c123bac_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c123bac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  *ar5 = *(undefined1 *)(unsigned)(ar4 + 0x28);
  *(undefined4 *)(unsigned)(ar5 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
  *(undefined4 *)(unsigned)(ar5 + 8) = *(undefined4 *)(unsigned)(ar4 + 0x30);
  *(undefined4 *)(unsigned)(ar5 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0x34);
  *(undefined4 *)(unsigned)(ar5 + 0x10) = *(undefined4 *)(unsigned)(ar4 + 0x38);
  *(undefined4 *)(unsigned)(ar5 + 0x14) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
  *(undefined4 *)(unsigned)(ar5 + 0x18) = *(undefined4 *)(unsigned)(ar4 + 0x40);
  *(undefined2 *)(unsigned)(ar5 + 0x1c) = *(undefined2 *)(unsigned)(ar4 + 0x44);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined2 *)(unsigned)(ar5 + 0x1e) = *(undefined2 *)(unsigned)(ar4 + 0x46);
  *(undefined2 *)(unsigned)(ar5 + 0x20) = *(undefined2 *)(unsigned)(ar4 + 0x48);
  *(undefined2 *)(unsigned)(ar5 + 0x22) = *(undefined2 *)(unsigned)(ar4 + 0x4a);
  *(undefined4 *)(unsigned)(ar5 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x4c);
  *(undefined4 *)(unsigned)(ar5 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x50);
  do {
    *(undefined4 *)(unsigned)(ar5 + iVar1 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x54 + iVar1);
    iVar2 = iVar2 + 2;
    *(undefined4 *)(unsigned)(ar5 + iVar1 + 0x30) = *(undefined4 *)(unsigned)(ar4 + iVar1 + 0x58);
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x14);
  iVar1 = *(int *)(unsigned)(ar4 + 0xa8) - (ar4 + 0x54);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  iVar2 = 0;
  iVar3 = 0;
  *(short *)(unsigned)(ar5 + 0x7c) = (short)(iVar1 >> 2);
  do {
    *(undefined2 *)(unsigned)(ar5 + iVar2 + 0x7e) = *(undefined2 *)(unsigned)(ar4 + 0xac + iVar2);
    *(undefined2 *)(unsigned)(ar5 + iVar2 + 0x80) = *(undefined2 *)(unsigned)(ar4 + iVar2 + 0xae);
    iVar3 = iVar3 + 3;
    *(undefined2 *)(unsigned)(ar5 + iVar2 + 0x82) = *(undefined2 *)(unsigned)(ar4 + iVar2 + 0xb0);
    iVar2 = iVar2 + 6;
  } while (iVar3 < 0x96);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined4 *)(unsigned)(ar5 + 0x1ac) = *(undefined4 *)(unsigned)(ar4 + 0x430);
  do {
    iVar2 = iVar2 + 2;
    *(undefined2 *)(unsigned)(ar5 + iVar1 + 0x1b0) = *(undefined2 *)(unsigned)(ar4 + 0x434 + iVar1);
    *(undefined2 *)(unsigned)(ar5 + iVar1 + 0x1b2) = *(undefined2 *)(unsigned)(ar4 + iVar1 + 0x436);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x28);
  iVar1 = *(int *)(unsigned)(ar4 + 0x488) - (ar4 + 0x434);
  *(short *)(unsigned)(ar5 + 0x200) = (short)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1);
  return 0x200;
}

__asm__(".globl _FUN_8c123bac\n.set _FUN_8c123bac, _FUN_8c123bac_def\n");
