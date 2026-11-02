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
undefined4 FUN_8c124bd0_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124bd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar7 = *ar4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,vr5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124f2a(iVar7,ar4,ar6,ar7));
  iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar7 + 0x10))))(iVar7,uVar3 * 0x14,vr6,vr7));
  ar4[0xc] = iVar7;
  if (iVar7 == 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,vr6,vr7));
    return uVar4;
  }
  uVar6 = 0;
  *(short *)(unsigned)(ar4 + 0xd) = (short)uVar3;
  puVar8 = (undefined1 *)(unsigned)(uint)ar4[0xc];
  if (uVar3 != 0) {
    do {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + ar5))))(ar5,uVar6,vr6,vr7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x54))))(uVar4,vr5,vr6,vr7));
      *puVar8 = uVar1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x58))))(uVar4,vr5,vr6,vr7));
      puVar8[1] = uVar1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x5c))))(uVar4,vr5,vr6,vr7));
      puVar8[2] = uVar1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar4,vr5,vr6,vr7));
      puVar8[3] = uVar1;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 100))))(uVar4,vr5,vr6,vr7));
      *(ushort *)(unsigned)(puVar8 + 4) = uVar2 & 0xff;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + ar5))))(uVar4,vr5,vr6,vr7));
      *(undefined4 *)(unsigned)(puVar8 + 8) = uVar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + ar5))))(uVar4,vr5,vr6,vr7));
      *(undefined4 *)(unsigned)(puVar8 + 0xc) = uVar5;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + ar5))))(uVar4,vr5,vr6,vr7));
      uVar6 = uVar6 + 1;
      *(undefined4 *)(unsigned)(puVar8 + 0x10) = uVar4;
      puVar8 = puVar8 + 0x14;
    } while (uVar6 < uVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd0\n.set _FUN_8c124bd0, _FUN_8c124bd0_def\n");
