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
undefined1 * FUN_8c2693ce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2693ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 d;
  int iVar4;
  undefined1 *a7;
  
  iVar3 = *(int *)(unsigned)(ar4 + 0x28);
  d = *(undefined4 *)(unsigned)(ar4 + 8);
  iVar4 = (iVar3 - *(int *)(unsigned)(ar4 + 0x34)) - *(int *)(unsigned)(ar4 + 0x54);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(0x20,d,vr6,vr7));
  iVar1 = iVar1 << 3;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar4,iVar1,vr6,vr7));
  iVar3 = iVar3 - *(int *)(unsigned)(ar4 + 0x50);
  if (iVar4 * iVar1 < iVar3) {
    iVar3 = iVar4 * iVar1;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(0x800,d,vr6,vr7));
  if (iVar4 << 3 <= iVar3) {
    iVar3 = iVar4 << 3;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar3,iVar1,vr6,vr7));
  if (iVar3 * iVar1 < 1) {
    puVar2 = (undefined1 *)(unsigned)0x0;
  }
  else {
    if (*(int *)(unsigned)(ar4 + 8) == 4) {
      puVar2 = ((undefined1 *)(unsigned)0x8c4be220);
    }
    else {
      puVar2 = (undefined1 *)(unsigned)0x8c4bda00;
    }
    a7 = puVar2 + 0x20;
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(unsigned)(ar4 + 3); iVar3 = iVar3 + 1) {
      puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268ddc(ar4,iVar3,*(undefined4 *)(unsigned)(ar4 + 0x50),a7));
    }
    *(unsigned *)(unsigned)(ar4 + 0x58) = puVar2;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c2693ce\n.set _FUN_8c2693ce, _FUN_8c2693ce_def\n");
