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
undefined4 FUN_8c02bd9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4,ar5,ar6,ar7));
  if ((iVar1 < 1) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4,ar5,ar6,ar7)), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7));
  if ((iVar1 == 0x2710) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c02bd9c\n.set _FUN_8c02bd9c, _FUN_8c02bd9c_def\n");
