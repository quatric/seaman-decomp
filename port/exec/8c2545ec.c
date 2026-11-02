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
undefined4 FUN_8c2545ec_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2545ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 1) {
    *(unsigned *)0x8c4aad50 = (unsigned)(unsigned long)((uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 1));
    *(unsigned *)0x8c4aad4c = (unsigned)(unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48));
  }
  else {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 2) {
      *(unsigned *)0x8c4aad50 = (unsigned)(unsigned long)((uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 2));
    }
    else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) == 3) {
      *(unsigned *)0x8c4aad50 = (unsigned)(unsigned long)((uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 3));
    }
    else {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) != 4) goto LAB_8c25463a;
      *(unsigned *)0x8c4aad50 = (unsigned)(unsigned long)((uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) + 4));
    }
    *(unsigned *)0x8c4aad4c = (unsigned)(unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad48));
  }
LAB_8c25463a:
  fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54);
  if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54)) {
    fVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) + -4.2949673e+09;
  }
  uVar2 = 0;
  uVar3 = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aad50);
  while (uVar4 = uVar3, 1 < uVar4 - uVar2) {
    uVar3 = uVar2 + uVar4 >> 1;
    if (*(uint *)(unsigned)(uVar3 * 0x10 + *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aad4c)) <= (uint)(int)fVar5) {
      uVar2 = uVar3;
      uVar3 = uVar4;
    }
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((&(*(undefined4 *)(unsigned)(unsigned)0x8c277c34))[ar5])))(ar4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c2545ec\n.set _FUN_8c2545ec, _FUN_8c2545ec_def\n");
