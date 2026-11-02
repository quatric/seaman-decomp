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
undefined4 FUN_8c201bae_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201bae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(ar4 + 0x14);
  iVar1 = ar4;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x1c)),&(*(undefined4 *)(fr0_ - 0x14)),vr7));
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x24)),ar4 + 0x3c,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2029b4(iVar1,ar5,ar6,ar7));
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x14);
  }
  else {
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x40);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c201bae\n.set _FUN_8c201bae, _FUN_8c201bae_def\n");
