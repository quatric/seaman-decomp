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
undefined4 FUN_8c10c3de_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c3de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int *a4;
  int iVar1;
  undefined4 uVar2;
  int *a6;
  
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 4);
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  a6 = ar6;
  a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(0x10,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  if (a4 == (int *)(unsigned)0x0) {
LAB_8c10c44a:
    uVar2 = 1;
  }
  else {
    a4[2] = *ar5 + -8;
    a4[1] = ar5[1];
    if (a4[2] == 0) {
      a4[3] = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(a4[2],&(*(undefined4 *)(fr0_ - 0x18)),a6,ar7));
      a4[3] = iVar1;
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(a4,&(*(undefined4 *)(fr0_ - 0x18)),a6,ar7));
        goto LAB_8c10c44a;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), memmove(a4[3],ar5 + 2,a4[2],ar7));
    }
    uVar2 = 0;
    *a4 = ar4;
    *ar6 = (int)a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c3de\n.set _FUN_8c10c3de, _FUN_8c10c3de_def\n");
