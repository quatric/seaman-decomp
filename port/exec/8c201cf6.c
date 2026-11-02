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
undefined4 FUN_8c201cf6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c201cf6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 auStackY_1c [8];
  undefined1 auStackY_14 [8];
  int iVar3;
  
  iVar1 = ar4;
  iVar3 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c20202e(ar4,ar5,ar6,ar7); });
  if (iVar3 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,ar4 + 8,(fr0_ + (int)0x00000004),vr7));
  }
  else if (iVar3 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_14,(fr0_ + (int)0x00000004),vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,auStackY_1c,ar4 + 8,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20280c(iVar1,ar5,ar6,ar7));
  }
  else if (iVar3 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_201c8e(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,ar4 + 8,iVar1 + 0x3c,vr7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(8,(*(undefined4 *)(fr0_ + 0x00000000)),ar4 + 8,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c201cf6\n.set _FUN_8c201cf6, _FUN_8c201cf6_def\n");
