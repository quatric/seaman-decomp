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
undefined4 FUN_8c10f736_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f736";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + ar5))))(ar5,1,1,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x54))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x58) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x58))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x59) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x5c))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x5a) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x5b) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 100))))(uVar3,vr5,vr6,vr7));
  *(ushort *)(unsigned)(ar4 + 0x5c) = uVar2 & 0xff;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar4;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 100) = uVar4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0x68) = uVar3;
  if ((uint)*(byte *)(unsigned)(ar4 + 0x58) != *(int *)(unsigned)(ar4 + 0x70) - *(int *)(unsigned)(ar4 + 0x74)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,0x66,vr6,vr7));
    return uVar3;
  }
  *(int *)(unsigned)(0x90 + ar4) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c10f736\n.set _FUN_8c10f736, _FUN_8c10f736_def\n");
