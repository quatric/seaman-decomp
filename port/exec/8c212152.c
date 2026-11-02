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
uint * FUN_8c212152_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c212152";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint unaff_r14 = 0;
  
  puVar3 = 0x8c4a9ef8;
  *(undefined4 *)(unsigned)0x8c4a9ef8 = unaff_r14;
  puVar1 = 0x8c4a9efc;
  *(undefined4 *)(unsigned)0x8c4a9efc = 0xffffffff;
  puVar2 = 0x8c4a9f00;
  *(undefined4 *)(unsigned)0x8c4a9f00 = 0xffffffff;
  puVar3[3] = 0xffffffff;
  puVar1[3] = unaff_r14;
  puVar2[3] = unaff_r14;
  puVar3[6] = unaff_r14;
  *(undefined4 *)(unsigned)0x8c4a9f1c = unaff_r14;
  uVar4 = *(undefined4 *)(unsigned)0x8c4a9db4;
  while ((uVar4 != 0 && ((vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4a9e14)))(((undefined1 *)(unsigned)1)[0x8c4a9e14],ar5,ar6,ar7)), *(undefined4 *)(unsigned)0x8c4a9f1c < 0xb)
         )) {
    uVar4 = *(undefined4 *)(unsigned)0x8c4a9db4;
  }
  puVar3 = 0x8c4a9ef0;
  if (*(undefined4 *)(unsigned)0x8c4a9ef0 == 0) {
    *(undefined4 *)(unsigned)0x8c4a9f1c = unaff_r14;
    uVar4 = *(undefined4 *)(unsigned)0x8c4a9db8;
    while ((uVar4 != 0 &&
           (puVar3 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4a9e14)))(((undefined1 *)(unsigned)1)[0x8c4a9e14],ar5,ar6,ar7)),
           *(undefined4 *)(unsigned)0x8c4a9f1c < 0xb))) {
      uVar4 = *(undefined4 *)(unsigned)0x8c4a9db8;
      puVar3 = 0x8c4a9db8;
    }
  }
  *(undefined4 *)(unsigned)0x8c4a9db8 = unaff_r14;
  *(undefined4 *)(unsigned)0x8c4a9db4 = unaff_r14;
  return puVar3;
}

__asm__(".globl _FUN_8c212152\n.set _FUN_8c212152, _FUN_8c212152_def\n");
