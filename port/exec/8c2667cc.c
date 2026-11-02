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
undefined4 FUN_8c2667cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2667cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  uVar4 = (uint)0xa8;
  uVar3 = 0;
  do {
    *(undefined1 *)(unsigned)(*(int *)(unsigned)puVar1 + uVar3 + 1) = 0;
    iVar2 = *(int *)(unsigned)puVar1 + uVar3;
    uVar3 = uVar3 + 8;
    *(undefined4 *)(unsigned)(iVar2 + 4) = 0;
  } while (uVar3 < uVar4);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(unsigned)(*(int *)(unsigned)puVar1 + uVar3 * 8 + 9) = (char)uVar3;
    *(undefined1 *)(unsigned)(uVar3 * 8 + *(int *)(unsigned)puVar1 + 8) = 1;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(unsigned)(*(int *)(unsigned)puVar1 + uVar3 * 8 + 0x49) = (char)uVar3;
    *(undefined1 *)(unsigned)(uVar3 * 8 + *(int *)(unsigned)puVar1 + 0x48) = 2;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 8;
    iVar2 = (int)0x88;
    *(char *)(unsigned)((int)0x88 + *(int *)(unsigned)puVar1 + iVar5 + 1) = (char)uVar3;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(unsigned)(iVar5 + iVar2 + *(int *)(unsigned)puVar1) = 3;
  } while (uVar3 < 4);
  *(undefined1 *)(unsigned)(*(int *)(unsigned)puVar1 + 1) = 0;
  *((undefined1 *)(unsigned long)*(unsigned *)(unsigned)puVar1) = 9;
  return 0;
}

__asm__(".globl _FUN_8c2667cc\n.set _FUN_8c2667cc, _FUN_8c2667cc_def\n");
