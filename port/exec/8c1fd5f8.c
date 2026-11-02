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
undefined * FUN_8c1fd5f8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fd5f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  piVar1 = 0x8c4783dc;
  *(uint *)(unsigned)*(undefined4 *)(unsigned)0x8c4783dc = ar4 & 1;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c1fc9aa));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c1fc99a));
  if ((ar4 & 1) == 1) {
    *(unsigned *)(unsigned)(*piVar1 + 0xc) = (&(*(undefined1 *)(unsigned)0x8c1fc990));
    *(unsigned *)(unsigned)(*piVar1 + 0x10) = (&(*(undefined1 *)(unsigned)0x8c1fc9a2));
    puVar3 = (undefined *)(unsigned)0x1;
  }
  else {
    *(unsigned *)(unsigned)(*piVar1 + 0xc) = (&(*(undefined1 *)(unsigned)0x8c1fc99a));
    *(unsigned *)(unsigned)(*piVar1 + 0x10) = puVar2;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c1fd5f8\n.set _FUN_8c1fd5f8, _FUN_8c1fd5f8_def\n");
