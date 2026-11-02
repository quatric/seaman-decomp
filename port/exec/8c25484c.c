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
undefined4 FUN_8c25484c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25484c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = 0x8c4aad48;
  uVar2 = (uint)*(undefined4 *)(unsigned)0x8c4aad80;
  iVar4 = *(undefined4 *)(unsigned)0x8c4aad48;
  if (uVar2 == 1) {
    iVar4 = iVar4 + 8;
  }
  else if (uVar2 == 2) {
    iVar4 = iVar4 + 0x10;
  }
  else if (uVar2 == 3) {
    iVar4 = iVar4 + 0x18;
  }
  else {
    if (uVar2 != 4) goto LAB_8c25487a;
    iVar4 = iVar4 + 0x20;
  }
  *(undefined4 *)(unsigned)0x8c4aad48 = iVar4;
LAB_8c25487a:
  if (piVar1[6] == 0) {
    return uVar2;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c255d6c(0,vr5,vr6,vr7));
  return uVar3;
}

__asm__(".globl _FUN_8c25484c\n.set _FUN_8c25484c, _FUN_8c25484c_def\n");
