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
int FUN_8c11033c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11033c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)0xc4;
  iVar2 = *ar4;
  uVar4 = 0;
  uVar3 = *(int *)(unsigned)(iVar1 + iVar2) * 8 +
          *(int *)(unsigned)(iVar1 + -0x38 + iVar2) * *(int *)(unsigned)(iVar1 + -0x3c + iVar2) * 2 +
          (*(int *)(unsigned)(iVar1 + -0x30 + iVar2) + 1) * 2 + *(int *)(unsigned)(iVar1 + -0x2c + iVar2) * 2 +
          (*(int *)(unsigned)(iVar1 + -0x28 + iVar2) + 1) * 2 + *(int *)(unsigned)(iVar1 + -0x24 + iVar2) * 4 +
          (int)0xd4;
  iVar2 = iVar2 + uVar3 + ((uVar3 * 2 ^ uVar3) & 3);
  if (ar5 != 0) {
    do {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1104d2(ar4,iVar2,ar6,ar7));
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + uVar3 + ((uVar3 << 1 ^ uVar3) & 3);
    } while (uVar4 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11033c\n.set _FUN_8c11033c, _FUN_8c11033c_def\n");
