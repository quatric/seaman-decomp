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
undefined4 FUN_8c0e25c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e25c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  int iVar4;
  
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  if (*(int *)(unsigned)(ar4 + 0xac8) != 0) {
    uVar3 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 0xac8),ar5,ar6,ar7));
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 0x84))))(*(int *)(unsigned)(ar4 + 0xac8),0,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100cb4(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
      for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        uVar3 = 2;
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x84))))(a4,2,ar6,ar7));
        a4 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(a4,uVar3,ar6,ar7));
      }
    }
    ar5_00 = ((undefined4 *)(fr0_ - 0x20));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    else {
      ar5_00 = ((undefined4 *)(fr0_ - 0x20));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
      if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                  (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100ce8(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
    uVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c10031c(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 200))))
                        (*(int *)(unsigned)(ar4 + 0xac8),uVar3,ar6,ar7));
      if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) == *(int *)(unsigned)(ar4 + 0xac8))) {
        uVar3 = ar5;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e4298(ar4,ar5,ar6,ar7));
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e2838(ar4 + iVar1 * 0x16c + 0x22d48,0,ar6,ar7));
        }
      }
      else {
        uVar3 = 2;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021720(0x8c2b59d0,2,ar6,ar7));
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e252c(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_cc_0dfee8(ar5,uVar3,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01f528(uVar2,uVar3,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01d9e0(uVar2,uVar3,ar6,ar7));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e25c0\n.set _FUN_8c0e25c0, _FUN_8c0e25c0_def\n");
