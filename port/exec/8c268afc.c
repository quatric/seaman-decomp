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
int FUN_8c268afc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (int)0x2000;
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(undefined1 *)(unsigned)(ar4 + 4) = 0;
  *(undefined1 *)(unsigned)(ar4 + 5) = 0;
  *(undefined1 *)(unsigned)(ar4 + 6) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  *(int *)(unsigned)(ar4 + 0x40) = iVar1;
  *(int *)(unsigned)(ar4 + 0x44) = iVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x80) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 7) = 0;
  iVar1 = (int)0x88;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c268afc\n.set _FUN_8c268afc, _FUN_8c268afc_def\n");
