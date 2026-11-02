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
undefined4 FUN_8c02db6c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02db6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar5_00;
  int iVar4;
  
  iVar3 = ar4;
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT31((uint3)((uint)(*(undefined4 *)(fr0_ - 0x34)) >> 8) & 0xffff00,1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); noop_02da0c(ar4,ar5,ar6,ar7); });
  *(undefined2 *)(unsigned)(ar4 + 0x1e) = 0;
  if (*(char *)(unsigned)(ar4 + 0x4c) == '\x01') {
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + ar5 * 0x140);
    iVar4 = *(int *)(unsigned)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(unsigned)(ar4 + 0x10) == iVar1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), rand(iVar3,ar5_00,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01031c(uVar2,100,ar6,ar7));
      if (iVar3 < 0x32) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), rand(iVar3,ar5_00,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01031c(uVar2,100,ar6,ar7));
      if (iVar3 < 0x4b) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + 1;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02dc8c(ar4,ar5,ar6,ar7));
  }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return 0x4c;
}

__asm__(".globl _FUN_8c02db6c\n.set _FUN_8c02db6c, _FUN_8c02db6c_def\n");
