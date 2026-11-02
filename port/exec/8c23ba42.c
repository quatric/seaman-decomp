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
undefined1 * FUN_8c23ba42_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23ba42";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar1 = ((undefined1 *)(unsigned)0x8c4ab278);
  puVar5 = ((undefined1 *)(unsigned)0x8c4ab280);
  puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4ab284);
  puVar2 = ((undefined4 *)(unsigned)0x8c277b40);
  for (iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300); iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar2)))(0,*puVar3,puVar5,vr7));
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c23ba42\n.set _FUN_8c23ba42, _FUN_8c23ba42_def\n");
