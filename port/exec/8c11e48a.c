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
uint FUN_8c11e48a_def(int ar4,undefined4 *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e48a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((ar5 == (undefined4 *)(unsigned)0x0) || (ar6 == (uint *)(unsigned)0x0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,a6,ar7));
      uVar2 = uVar2 & 0xff;
    }
    else {
      iVar1 = *(int *)(unsigned)(0xfc + ar4);
      uVar2 = (uint)(*(int *)(unsigned)(0x100 + ar4) != 0);
      *ar6 = uVar2;
      if (uVar2 == 0) {
        *ar5 = 0;
      }
      else {
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x14))))(8,0xf4 + ar4,a6,ar7));
        *ar5 = puVar3;
        if (*(int *)(unsigned)(0x100 + ar4) != 0) {
          *puVar3 = *(undefined4 *)(unsigned)(0x100 + ar4);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e48a\n.set _FUN_8c11e48a, _FUN_8c11e48a_def\n");
