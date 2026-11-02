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
undefined4 FUN_8c23a1b0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23a1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0x54525650;
  do {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(int *)(fr0_ - 0x20)),4,ar6,ar7));
    if ((*(int *)(fr0_ - 0x20)) == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(int *)(fr0_ - 0x18)),0xc,ar6,ar7));
      ar4[4] = (uint)(*(ushort *)(fr0_ - 0x10));
      ar4[5] = (uint)(*(ushort *)(fr0_ - 0xe));
      ar4[1] = (*(int *)(fr0_ - 0x14)) << 0x10;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(undefined4 *)(fr0_ - 0x1c)),4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238eba((*(undefined4 *)(fr0_ - 0x1c)),1,ar6,ar7));
    }
    puVar1 = ((void *)(unsigned)0x8c238eba);
  } while ((*(int *)(fr0_ - 0x20)) != iVar2);
  *ar4 = *(undefined4 *)(unsigned)0x8c4ab274;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))((*(int *)(fr0_ - 0x18)) + -8,1,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c23a1b0\n.set _FUN_8c23a1b0, _FUN_8c23a1b0_def\n");
