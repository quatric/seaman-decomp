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
uint FUN_8c213d8e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213d8e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  if ((*(uint *)(unsigned)(unaff_r14 + 0x18) & 1) == 0) {
    uVar2 = *(int *)(unsigned)(unaff_r14 + 0xc) * *(int *)(unsigned)(unaff_r14 + 0x10);
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(int *)(unsigned)(unaff_r14 + 0xc),*(int *)(unsigned)(unaff_r14 + 0x10),ar6,ar7));
    uVar2 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4U >> 1;
    if (*(int *)(unsigned)(unaff_r14 + 8) == 0x28000000) {
      uVar2 = uVar2 + 0x28;
    }
    else {
      uVar2 = uVar2 + 8;
    }
  }
  if (*(int *)(unsigned)(unaff_r14 + 8) == 0x28000000) {
    uVar2 = uVar2 >> 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c213d8e\n.set _FUN_8c213d8e, _FUN_8c213d8e_def\n");
