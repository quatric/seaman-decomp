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
undefined4 FUN_8c236250_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c236250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = 0x8c4ab210;
  uVar1 = 0xa5;
  *(undefined4 *)(unsigned)(0x8c4ab210 + 2) = 0x24;
  puVar3 = 0x8c4ab234;
  *puVar2 = uVar1;
  puVar2[1] = 1;
  *(unsigned *)(unsigned)(puVar2 + 6) = ar4;
  *(unsigned *)(unsigned)(puVar2 + 4) = ar4;
  *(undefined4 *)(unsigned)(ar4 + 2) = ar5;
  *ar4 = uVar1;
  ar4[1] = 0;
  *(unsigned *)(unsigned)(ar4 + 6) = puVar2;
  *(unsigned *)(unsigned)(ar4 + 4) = puVar2;
  *puVar3 = *(undefined4 *)(unsigned)(puVar2 + 4);
  return 0;
}

__asm__(".globl _FUN_8c236250\n.set _FUN_8c236250, _FUN_8c236250_def\n");
