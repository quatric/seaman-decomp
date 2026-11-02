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
undefined4 FUN_8c205d80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c205d80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xb8,0xff07,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xb4,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xb0,0x7f7f7f,ar6,ar7));
  uVar4 = (uint)0xff;
  uVar3 = (uint)0xfe;
  a4 = (int)0x200;
  do {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(a4,(uVar4 & 0xff) << 8 | uVar3 & 0xff,ar6,ar7));
    uVar4 = uVar4 - 1;
    a4 = a4 + 4;
    uVar3 = uVar3 - 1;
  } while (0x7f < (int)uVar4);
  return uVar2;
}

__asm__(".globl _FUN_8c205d80\n.set _FUN_8c205d80, _FUN_8c205d80_def\n");
