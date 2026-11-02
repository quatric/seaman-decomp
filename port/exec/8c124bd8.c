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
undefined4 FUN_8c124bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124bd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint a5;
  uint a5_00;
  int iVar4;
  int *unaff_r13 = 0;
  undefined1 *puVar5;
  int unaff_r14 = 0;
  
  iVar4 = *unaff_r13;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 8))))(ar5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124f2a(iVar4,unaff_r13,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x10))))(iVar4,uVar1 * 0x14,ar6,ar7));
  unaff_r13[0xc] = iVar4;
  if (iVar4 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(2,vr5,vr6,vr7));
    return uVar2;
  }
  a5_00 = 0;
  *(short *)(unsigned)(unaff_r13 + 0xd) = (short)uVar1;
  puVar5 = (undefined1 *)(unsigned)unaff_r13[0xc];
  if (uVar1 != 0) {
    do {
      a5 = a5_00;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + unaff_r14))))(unaff_r14,a5_00,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x54))))(uVar2,a5,ar6,ar7));
      *puVar5 = (char)uVar3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x58))))(uVar2,a5,ar6,ar7));
      puVar5[1] = (char)uVar3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x5c))))(uVar2,a5,ar6,ar7));
      puVar5[2] = (char)uVar3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x60))))(uVar2,a5,ar6,ar7));
      puVar5[3] = (char)uVar3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 100))))(uVar2,a5,ar6,ar7));
      *(ushort *)(unsigned)(puVar5 + 4) = (ushort)uVar3 & 0xff;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + unaff_r14))))(uVar2,a5,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + 8) = uVar3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + unaff_r14))))(uVar2,a5,ar6,ar7));
      *(undefined4 *)(unsigned)(puVar5 + 0xc) = uVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + unaff_r14))))(uVar2,a5,ar6,ar7));
      a5_00 = a5_00 + 1;
      *(undefined4 *)(unsigned)(puVar5 + 0x10) = uVar2;
      puVar5 = puVar5 + 0x14;
    } while (a5_00 < uVar1);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd8\n.set _FUN_8c124bd8, _FUN_8c124bd8_def\n");
