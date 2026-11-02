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
int FUN_8c211ba4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c211ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  ((int *)(fr0_ - 0x10))[0] = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c26d718));
  ((int *)(fr0_ - 0x10))[1] = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 4);
  ((int *)(fr0_ - 0x10))[2] = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 8);
  ((int *)(fr0_ - 0x10))[3] = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d718)) + 0xc);
  uVar1 = ar4 >> 0x19 & 3;
  iVar2 = *(undefined4 *)(unsigned)0x8c4aa008 * *(undefined4 *)(unsigned)0x8c4aa00c;
  if ((*(undefined4 *)(unsigned)0x8c4a9bb0 & 0x20) != 0) {
    if (*(undefined4 *)(unsigned)0x8c4aa010 == 0) {
      iVar2 = iVar2 * 2;
    }
    else {
      iVar2 = iVar2 * 4;
    }
  }
  *(undefined4 *)(unsigned)0x8c4aa204 =
       ((((int *)(fr0_ - 0x10))[ar4 >> 0x11 & 3] + ((int *)(fr0_ - 0x10))[ar4 >> 0x13 & 3] + ((int *)(fr0_ - 0x10))[ar4 >> 0x15 & 3] +
         ((int *)(fr0_ - 0x10))[ar4 >> 0x17 & 3] + ((int *)(fr0_ - 0x10))[uVar1]) * 4 + 0x18) * iVar2;
  return uVar1 * 4;
}

__asm__(".globl _FUN_8c211ba4\n.set _FUN_8c211ba4, _FUN_8c211ba4_def\n");
