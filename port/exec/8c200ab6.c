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
undefined4 FUN_8c200ab6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200ab6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = 0x8c47d0a0;
  while( true ) {
    if (*(undefined4 *)(unsigned)0x8c47d2e0 <= iVar2) {
      *(undefined4 *)(unsigned)0x8c47d2e4 = (int)(int)0xffffff07;
      return 0;
    }
    if (*pcVar1 == '\0') break;
    pcVar1 = pcVar1 + 0x48;
    iVar2 = iVar2 + 1;
  }
  *pcVar1 = '\x01';
  *(int *)(unsigned)(pcVar1 + 0xc) = iVar2;
  return pcVar1;
}

__asm__(".globl _FUN_8c200ab6\n.set _FUN_8c200ab6, _FUN_8c200ab6_def\n");
