#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c010b60_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010b60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStackY_8028 [8];
  undefined1 auStackY_8020 [32748];
  
  puVar5 = (fr0_ + (int)0xffffffcc);
  puVar8 = (fr0_ + (int)0xffffffcc);
  uVar4 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x30)) >> 0x10),(undefined2)ar4);
  puVar6 = ((undefined1 *)(fr0_ - 0x20));
  if (ar6 < 1) {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012b1c(-ar6,(fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),ar7));
    iVar2 = (int)(short)uVar4;
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0129b4((fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),iVar2,ar5));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012b1c(ar6,(fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),ar7));
    iVar2 = (int)(short)uVar4;
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c010c60((fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),iVar2,ar5));
    puVar8 = puVar5;
  }
  iVar9 = 0x3f - (short)(*(le<undefined4>* )(fr0_ - 0x34));
  iVar3 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); unsigned long ri1_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c0105c4(puVar8,puVar6,iVar2,ar5); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012e00(((undefined1 *)(fr0_ - 0x20)),9,0x42 - (short)iVar9,ar5));
  iVar7 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar7 < 9) {
    do {
      sVar1 = (short)iVar2;
      ((undefined1 *)(fr0_ - 0x20))[sVar1] = ((undefined1 *)(fr0_ - 0x20))[sVar1 - iVar7];
      iVar2 = sVar1 + -1;
    } while (iVar7 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar8 = ((undefined1 *)(fr0_ - 0x20)) + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = 0;
    sVar1 = (short)iVar2;
  }
  iVar9 = iVar9 + iVar3 * -8;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c012da8(((undefined1 *)(fr0_ - 0x20)),9,iVar9,ar5); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012c70(((undefined1 *)(fr0_ - 0x20)),0x40,iVar9,ar5));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 104)), memmove(ar7,((undefined1 *)(fr0_ - 0x20)),8,ar5));
  return uVar4;
}

__asm__(".globl FUN_8c010b60\n.set FUN_8c010b60, FUN_8c010b60_def\n");

}
