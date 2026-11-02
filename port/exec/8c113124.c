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
int FUN_8c113124_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)(unsigned)((int)0x110 + (int)ar4) != 0) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x10c + (int)ar4) + uVar1 * 4),vr6,vr7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)((int)0x110 + (int)ar4));
  }
  if (*(int *)(unsigned)((int)0x10c + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x10c + (int)ar4),vr6,vr7));
  }
  iVar2 = (int)0x10c;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c113124\n.set _FUN_8c113124, _FUN_8c113124_def\n");
