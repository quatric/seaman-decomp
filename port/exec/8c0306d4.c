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
undefined4 FUN_8c0306d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0306d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  
  puVar3 = ((undefined1 *)(fr0_ - 0x3c));
  iVar6 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c132998));
  do {
    puVar4 = puVar5 + 1;
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar3[1] = *puVar4;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar7 = 0;
  if ((*(char *)(unsigned)(0x774 + ar4) == '\0') && (*(int *)(unsigned)(0x778 + ar4) == 0)) {
    uVar2 = ar6;
    ar7_00 = ar7;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(undefined4 *)(unsigned)(0x2ec + ar4) = uVar1;
    if (*(int *)(unsigned)(0x2e8 + ar4) == -1) {
      if (*(int *)(unsigned)(0x2e8 + ar4) == -1) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
        uVar7 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
        *(undefined4 *)(unsigned)(0xb0 + ar4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x60) = ar6;
        iVar6 = ar4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f82a4))))
                          (0x8c35468c,*(undefined4 *)(unsigned)(0x2ec + ar4),ar4,ar7));
        *(undefined4 *)(unsigned)(0x2e8 + ar4) = uVar2;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,iVar6,ar7));
        if (*(int *)(unsigned)(0x2e8 + ar4) != -1) {
          *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unsigned)(0x2e8 + ar4) = 0xffffffff;
      uVar7 = 0;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar7,ar7_00));
      uVar2 = ar6;
      uVar7 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
      *(undefined4 *)(unsigned)(0xb0 + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x60) = ar6;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,uVar2,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0f82a4(0x8c35468c,*(undefined4 *)(unsigned)(0x2ec + ar4),ar4,ar7));
      *(undefined4 *)(unsigned)(0x2e8 + ar4) = uVar2;
      if (*(int *)(unsigned)(0x2e8 + ar4) != -1) {
        *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
      }
    }
  }
  return uVar7;
}

__asm__(".globl _FUN_8c0306d4\n.set _FUN_8c0306d4, _FUN_8c0306d4_def\n");
