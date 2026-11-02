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
undefined4 FUN_8c0303b8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0303b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  
  puVar7 = ((undefined1 *)(fr0_ - 0x34));
  puVar5 = ((undefined1 *)(unsigned)0x8c132950);
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar8 = CONCAT13((*(undefined1 *)(unsigned)0x8c132973),CONCAT12((*(undefined1 *)(unsigned)0x8c132972),CONCAT11((*(undefined1 *)(unsigned)0x8c132971),(*(undefined1 *)(unsigned)0x8c132970))));
  iVar4 = ar6;
  uVar3 = ar7;
  if (0 < ar6) {
    iVar4 = 0;
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030550(ar4,ar5,0,ar7));
  }
  if ((((*(int *)(unsigned)(ar4 + 0x2e8) == -1) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030538(ar4,ar5,iVar4,uVar3)), iVar1 == 0)) &&
      (*(int *)(unsigned)(ar4 + 0x770) == 0)) &&
     ((*(int *)(unsigned)(ar4 + 0x778) == 0 && (*(int *)(unsigned)(ar4 + 0x60) <= ar6)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x770) = 1;
    *(int *)(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2c8,iVar4,uVar3); });
    uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),(char)uVar8 + *(char *)(unsigned)(ar4 + 0x728));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x34)),(fr0_ + (int)0xffffffb4),iVar4,uVar3));
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4,((undefined1 *)(fr0_ - 0x34)),iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x20,ar7,iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x40,s0,iVar4,uVar3); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(unsigned)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0303b8\n.set _FUN_8c0303b8, _FUN_8c0303b8_def\n");
