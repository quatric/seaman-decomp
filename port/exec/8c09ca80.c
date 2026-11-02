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
undefined4 FUN_8c09ca80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09ca80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c019198(uVar1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(ar4 + iVar2 * 4 + 0x524) != 0) {
      a4 = *(int *)(unsigned)(ar4 + iVar2 * 4 + 0x524);
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x3c))))(a4,ar5,ar6,ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c09ca80\n.set _FUN_8c09ca80, _FUN_8c09ca80_def\n");
