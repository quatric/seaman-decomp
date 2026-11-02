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
undefined4 FUN_8c029ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 0x10);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x328);
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar3,(short)uVar1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c019088(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c019198(ar4_00,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015510(*(int *)(unsigned)(iVar2 + (short)uVar1 * 0x124) + 0x1e8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02a29c(ar4,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c256210(1,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c029ca8\n.set _FUN_8c029ca8, _FUN_8c029ca8_def\n");
