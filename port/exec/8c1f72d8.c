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
undefined4 FUN_8c1f72d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f72d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 ar6_00;
  int iVar5;
  
  puVar2 = 0x8c4748b0;
  ar6_00 = 0x3c;
  (vsp = ((unsigned long)(fr0_ - 32)), memset(*(undefined4 *)(unsigned)0x8c4748b0,(int)0xff,0x3c,ar7));
  puVar3 = 0x8c4748a8;
  puVar1 = ((void *)(unsigned)0x8c1f6e5e);
  iVar5 = 0;
  (*(int *)(fr0_ - 0x20)) = ar4;
  do {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))((*(int *)(fr0_ - 0x20)),*puVar2,ar6_00,ar7));
    if (iVar4 == 0) {
      *puVar3 = 8;
      return 0;
    }
    iVar5 = iVar5 + 1;
    (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x20)) + 1;
  } while (iVar5 < 4);
  return 1;
}

__asm__(".globl _FUN_8c1f72d8\n.set _FUN_8c1f72d8, _FUN_8c1f72d8_def\n");
