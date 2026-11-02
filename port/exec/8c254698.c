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
undefined4 FUN_8c254698_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c254698";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad4c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48);
  }
  else {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 8;
    }
    else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 3) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 0xc;
    }
    else {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) != 4) goto LAB_8c2546fa;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 0x10;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad4c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48);
  }
LAB_8c2546fa:
  iVar2 = (uint)(((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 1) != 0) * 4;
  fVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54);
  if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54)) {
    fVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) + -4.2949673e+09;
  }
  uVar3 = 0;
  uVar4 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) + iVar2);
  while (uVar5 = uVar4, 1 < uVar5 - uVar3) {
    uVar4 = uVar3 + uVar5 >> 1;
    if (*(uint *)(unsigned)(uVar4 * 0x10 + *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad4c) + iVar2)) <= (uint)(int)fVar6) {
      uVar3 = uVar4;
      uVar4 = uVar5;
    }
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((&(*(undefined4 *)(unsigned)(unsigned)0x8c277c3c))[ar5])))(ar4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c254698\n.set _FUN_8c254698, _FUN_8c254698_def\n");
