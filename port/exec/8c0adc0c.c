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
undefined4 FUN_8c0adc0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0adc0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_fr0 = 0;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = *(int *)(unsigned)(ar4 + 0x328);
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x20)) = extraout_fr0;
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c21bbb0(uVar1,ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7); });
  uVar1 = 0;
  if ((*(int *)(unsigned)(ar4 + 0x88c) != 0) && (uVar1 = 0, *(int *)(unsigned)(ar4 + 0x890) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x890),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c219a9a(*(undefined4 *)(unsigned)(ar4 + 0x88c),ar5_00,(*(undefined4 *)(fr0_ - 0x20)),ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0adc0c\n.set _FUN_8c0adc0c, _FUN_8c0adc0c_def\n");
