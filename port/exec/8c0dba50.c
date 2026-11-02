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
undefined4 FUN_8c0dba50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dba50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar2;
  
  iVar2 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (7 < iVar2) {
      return 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5_00,ar6_00,ar7));
    if (iVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x38)),ar6,ar6_00,ar7));
  ar6_01 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0f69ec(ar4 + iVar2 * 0x68 + 0xc0c,((undefined1 *)(fr0_ - 0x28)),ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_01,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0dba50\n.set _FUN_8c0dba50, _FUN_8c0dba50_def\n");
