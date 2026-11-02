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
int FUN_8c02257c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02257c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2680ec(((undefined4 *)(fr0_ - 0x8)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2681d0(((undefined4 *)(fr0_ - 0x8))[0],0,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c268250(((undefined4 *)(fr0_ - 0x8))[0],0x7f,0,ar7));
    ar7_00 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26813c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,0));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02257c\n.set _FUN_8c02257c, _FUN_8c02257c_def\n");
