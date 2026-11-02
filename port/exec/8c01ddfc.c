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
undefined4 FUN_8c01ddfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01ddfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(unsigned)0x8c279254 = *(int *)(unsigned)(*(int *)(unsigned)(0x5b3c + ar4) + 4);
  if (*(undefined4 *)(unsigned)0x8c279250 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(undefined4 *)(unsigned)0x8c279250,ar5,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(*(undefined4 *)(unsigned)0x8c279254 << 2,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)0x8c279250 = iVar1;
  if (*(undefined4 *)(unsigned)0x8c279250 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(unsigned)(0x5b3c + ar4) + 8;
    for (iVar4 = 0; iVar4 < *(undefined4 *)(unsigned)0x8c279254; iVar4 = iVar4 + 1) {
      *(int *)(unsigned)(iVar4 * 4 + *(undefined4 *)(unsigned)0x8c279250) = iVar1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), log_message(iVar1,ar5,ar6,ar7));
      iVar1 = iVar1 + iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ddfc\n.set _FUN_8c01ddfc, _FUN_8c01ddfc_def\n");
