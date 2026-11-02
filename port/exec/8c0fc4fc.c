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
undefined4 FUN_8c0fc4fc_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fc4fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  
  if ((*(int *)(unsigned)(ar5 + 0x28) != 1) && (*(int *)(unsigned)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      ar5_00 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0faf30((&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x4c,ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x40); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 24)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x18)),ar5_00,ar6,ar7); });
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0faf30(((undefined1 *)(fr0_ - 0x18)),ar5 + iVar2 * 0x68 + 0xb0,ar6,ar7));
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0fc4fc\n.set _FUN_8c0fc4fc, _FUN_8c0fc4fc_def\n");
