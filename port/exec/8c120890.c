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
uint * FUN_8c120890_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *(char *)(unsigned)(ar4 + 1);
  iVar2 = ar4;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = *(char *)(unsigned)(iVar2 + 3);
    iVar2 = iVar2 + 2;
  }
  puVar3 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,((uVar4 & 0xffff) - 1) * 2 + 0xc,ar6,ar7));
  if (puVar3 != (uint *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar3 + 2,ar4,(uVar4 & 0xffff) << 1,ar7));
    *puVar3 = uVar4 & 0xffff;
    puVar3[1] = 0;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c120890\n.set _FUN_8c120890, _FUN_8c120890_def\n");
