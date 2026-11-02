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
undefined4 FUN_8c11d14c_def(int ar4,undefined4 *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d14c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 a6;
  int *a7;
  
  a7 = &(*(int *)(fr0_ - 0x20));
  a6 = 0;
  (*(int *)(fr0_ - 0x20)) = 0;
  (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)(0xfc + ar4);
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(ar6));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c120348(ar4 + 0x48,0x27,0,&(*(int *)(fr0_ - 0x20))));
  if ((uVar1 & 0xff) == 0) {
    (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x20)) + 0x88;
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x14)) + 0x14))))((*(int *)(fr0_ - 0x20)),0xf4 + ar4,a6,a7));
    iVar3 = (int)0x100;
    puVar2[1] = (*(int *)(fr0_ - 0x20));
    *puVar2 = 4;
    (vsp = ((unsigned long)(fr0_ - 32)), memmove(puVar2 + 2,*((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + ar4)) + 8,(int)0x80,a7));
    (*(int *)(fr0_ - 0x20)) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120348))))
                      (ar4 + 0x48,0x27,(int)(puVar2 + 2) + (int)0x80,&(*(int *)(fr0_ - 0x20))));
    if ((uVar1 & 0xff) == 0) {
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) = (*(int *)(fr0_ - 0x20)) + 0x88;
      *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) = puVar2;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d14c\n.set _FUN_8c11d14c, _FUN_8c11d14c_def\n");
