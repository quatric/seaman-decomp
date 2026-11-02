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
undefined4 FUN_8c0a4a5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a4a5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  undefined4 uVar2;
  undefined4 extraout_fr0 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5,ar6,ar7));
  ain0 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), deref_u32(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0) + ain0 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = extraout_fr0;
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = uVar2;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c21ba62(uVar1,(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0a4a5c\n.set _FUN_8c0a4a5c, _FUN_8c0a4a5c_def\n");
