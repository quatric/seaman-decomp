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
undefined4 FUN_8c026de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026de0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_fr0 = 0;
  undefined4 extraout_fr0_00 = 0;
  char cVar5;
  undefined2 uVar6;
  undefined4 ain0;
  
  uVar6 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x54)) >> 0x10);
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = extraout_fr0;
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = uVar1;
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c2540a0((*(undefined4 *)(fr0_ - 0x14)),ar5,ar6,ar7); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x434) = *puVar3;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c029510(ar4,uVar1,0,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x30)) = extraout_fr0_00;
    if (cVar5 == '\0') {
      (*(undefined4 *)(fr0_ - 0x30)) = uVar1;
    }
    uVar1 = 0x29;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c21f200((*(undefined4 *)(fr0_ - 0x30)),0x29,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(iVar4 + 0x70,uVar1,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0297b8(ar4,uVar1,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c026de0\n.set _FUN_8c026de0, _FUN_8c026de0_def\n");
