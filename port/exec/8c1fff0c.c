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
int FUN_8c1fff0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fff0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  uVar6 = 0xfffc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x1c) + 0x30);
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < ar5) {
      return 0xffffffff;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0xc))))(*(undefined4 *)(unsigned)(iVar4 + 0x24),iVar5 * 2,uVar6,vr7));
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar5;
}

__asm__(".globl _FUN_8c1fff0c\n.set _FUN_8c1fff0c, _FUN_8c1fff0c_def\n");
