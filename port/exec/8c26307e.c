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
undefined4 FUN_8c26307e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26307e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(unsigned)(ar4 + 1) != '\x02') {
    if (*(char *)(unsigned)(ar4 + 1) == 1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c80(ar4,ar5,ar6,ar7));
      return uVar2;
    }
    return (int)*(char *)(unsigned)(ar4 + 1);
  }
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_25ff38(uVar2,vr5,vr6,vr7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262e10(ar4,ar5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2602f4(uVar2,vr5,vr6,vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_25ff38(uVar2,vr5,vr6,vr7));
  if (iVar1 == 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262f02(ar4,ar5,ar6,ar7));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26307e\n.set _FUN_8c26307e, _FUN_8c26307e_def\n");
