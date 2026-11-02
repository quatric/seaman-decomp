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
undefined4 FUN_8c26bad4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26bad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  char in_T = 0;
  
  if ((in_T != '\0') && (ar5 < 4)) {
    iVar2 = 0;
    piVar1 = (int *)(unsigned)(ar5 * 4 + ar4 + 0x18);
    while (piVar1 = (int *)(unsigned)*piVar1, piVar1 != (int *)(unsigned)0x0) {
      iVar2 = iVar2 + piVar1[3];
    }
    return iVar2;
  }
  if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c26bad4\n.set _FUN_8c26bad4, _FUN_8c26bad4_def\n");
