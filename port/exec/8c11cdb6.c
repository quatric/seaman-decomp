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
undefined4 FUN_8c11cdb6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cdb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *a5;
  
  a5 = &(*(undefined4 *)(fr0_ - 0x14));
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(fr0_ - 0x10)) = 0;
    (*(undefined4 *)(fr0_ - 0x14)) = ar5;
    puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(*ar4)))(0x3c,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
    if (puVar1 != (undefined4 *)(unsigned)0x0) {
      *puVar1 = 0;
      puVar1[5] = *ar4;
      puVar1[6] = ar4[1];
      puVar1[7] = ar4[3];
      puVar1[8] = ar4[4];
      puVar1[9] = ar4[5];
      puVar1[10] = ar4[6];
      puVar1[0xb] = ar4[7];
      uVar2 = 0x1b9813f5;
      puVar1[0xc] = ar4[8];
      puVar1[0xe] = uVar2;
      puVar1[2] = (*(undefined4 *)(fr0_ - 0x14));
      puVar1[3] = (*(undefined4 *)(fr0_ - 0x10));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(puVar1[9])))(&(*(undefined4 *)(fr0_ - 0x14)),a5,ar6,ar7));
      puVar1[4] = uVar2;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(puVar1[7])))(&(*(undefined4 *)(fr0_ - 0x14)),a5,ar6,ar7));
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11cdb6\n.set _FUN_8c11cdb6, _FUN_8c11cdb6_def\n");
