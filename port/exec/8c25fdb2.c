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
undefined4 FUN_8c25fdb2_def(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25fdb2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (((int)(uint)*ar5 >> 8 | (uint)*ar5 << 8 & 0xff00 & 0xffff) == 0x8000) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25fca4(ar4,ar5,ar6,ar7));
    return uVar1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260636(ar5,((undefined1 *)(unsigned)0x8c4b9828),vr6,vr7));
  if (iVar2 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26045c(ar4,ar5,ar6,vr7));
    return uVar1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260c2c(ar5,vr5,vr6,vr7));
  if (iVar2 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260810(ar4,ar5,ar6,vr7));
    return uVar1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25f01e(ar5,vr5,vr6,vr7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25f64c(ar5,vr5,vr6,vr7));
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25f742(ar4,ar5,ar6,vr7));
    return uVar1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25f0ea(ar4,ar5,ar6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c25fdb2\n.set _FUN_8c25fdb2, _FUN_8c25fdb2_def\n");
