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
undefined4 FUN_8c08ab58_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08ab58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    if (*(undefined4 *)(unsigned)0x8c431a54 == 0) {
      *(undefined4 *)(unsigned)0x8c431a54 = 1;
      a6 = 0x19;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0xc,0x19,ar7));
      *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    else {
      a6 = 0x17;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0xb,0x17,ar7));
      *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4) = uVar1;
    }
    a4 = *(int *)(unsigned)(0x8ec + ar4 + iVar2 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x54))))(a4,0x8c3eb324,a6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar6),
                       *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar2 * 4),0,ar7));
    *(undefined4 *)(unsigned)(0x8f4 + ar4 + iVar2 * 4) = uVar1;
  }
  return 2;
}

__asm__(".globl _FUN_8c08ab58\n.set _FUN_8c08ab58, _FUN_8c08ab58_def\n");
