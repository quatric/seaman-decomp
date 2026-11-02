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
undefined4 * FUN_8c11584e_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11584e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,0x14,ar6,ar7));
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(unsigned)(iVar4 + (int)ar4);
    puVar1 = ((void *)(unsigned)0x8c119320);
    puVar3[1] = *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4);
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c11920c));
    *(unsigned *)(unsigned)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c113680));
    *(unsigned *)(unsigned)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(unsigned *)(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(unsigned)(iVar4 + (int)ar4) = *ar5;
  puVar1 = ((void *)(unsigned)0x8c11346c);
  *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = ((void *)(unsigned)0x8c11af3a);
  *(unsigned *)(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
  return (undefined4 *)(unsigned)0;
}

__asm__(".globl _FUN_8c11584e\n.set _FUN_8c11584e, _FUN_8c11584e_def\n");
