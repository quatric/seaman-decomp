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
undefined4 FUN_8c1f87ae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f87ae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0x8c474a28;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8710(0x8c474a28,ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c1f6e5e);
  *(char *)(unsigned)(iVar1 + 0x3b) = (char)uVar3;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,iVar1,vr6,vr7));
  return uVar3;
}

__asm__(".globl _FUN_8c1f87ae\n.set _FUN_8c1f87ae, _FUN_8c1f87ae_def\n");
