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
int FUN_8c213d3e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213d3e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(unsigned)(ar4 + 0x18) & 1) == 0) {
    uVar2 = (uint)(*(int *)(unsigned)(ar4 + 0xc) * *(int *)(unsigned)(ar4 + 0x10)) >> 2;
    if ((*(int *)(unsigned)(ar4 + 0xc) == 8) && (*(int *)(unsigned)(ar4 + 0x10) == 8)) {
      uVar2 = uVar2 + 0x10;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(int *)(unsigned)(ar4 + 0xc),*(int *)(unsigned)(ar4 + 0x10),ar6,ar7));
    uVar2 = (*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4U >> 3) + 10;
  }
  return uVar2 + 0x800;
}

__asm__(".globl _FUN_8c213d3e\n.set _FUN_8c213d3e, _FUN_8c213d3e_def\n");
