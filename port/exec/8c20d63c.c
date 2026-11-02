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
int FUN_8c20d63c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20d63c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(uint *)(unsigned)(ar4 + 0xc);
  uVar4 = *(uint *)(unsigned)(ar4 + 0x10);
  iVar5 = (uVar3 >> 1) * (uVar4 >> 1);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(uVar3,uVar4,ar6,ar7));
  if ((*(uint *)(unsigned)(ar4 + 0x18) & 1) == 0) {
    iVar5 = iVar5 + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c26d448) + iVar2 * 4);
  }
  else {
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 2;
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar6 = uVar3 * uVar4;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 >> 1;
      iVar5 = iVar5 + iVar6;
    }
    if (uVar3 == uVar4) {
      iVar5 = iVar5 + 2;
    }
    else {
      iVar5 = iVar5 + uVar3 * uVar4;
    }
    iVar5 = iVar5 + 10 + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c26d464) + iVar2 * 4);
  }
  return iVar5;
}

__asm__(".globl _FUN_8c20d63c\n.set _FUN_8c20d63c, _FUN_8c20d63c_def\n");
