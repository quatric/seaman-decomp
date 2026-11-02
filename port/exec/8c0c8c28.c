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
undefined4 s_BUGBOX_4_0c8c30_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_BUGBOX_4_0c8c30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *a6;
  undefined4 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c437244) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0;
    (*(undefined1 *)(unsigned)0x8c437244) = '\x01';
  }
  uVar5 = 1;
  iVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c84cc(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  sVar1 = *(short *)(unsigned)(ar4 + 0x2d1ac);
  if (sVar1 == 3) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437248) = 0;
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 200))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar4,ar6,ar7));
    iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4),ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 56)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4),ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4) = 0xffffffff;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 56)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13d1b2),ar6,ar7));
      ar7 = 0;
      ar6 = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4) = iVar4;
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c021d90(0x8c2b59d0,iVar4,0,0));
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 4;
    }
  }
  else if (sVar1 == 4) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248) < 0x28) {
      iVar4 = 2;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01031c((*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248),2,ar6,ar7));
      if (iVar2 == 0) {
        if (cVar6 != '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0x3dcccccd;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c43723c) = 0x3ecccccd;
      }
      else if (iVar2 == 1) {
        if (cVar6 != '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0x3f000000;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c43723c) = 0x3dcccccd;
      }
    }
    else if (((*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248) < 0x28) || (0x45 < (*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248))) {
      if (0x45 < (*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248)) {
        if (cVar6 == '\0') {
          (*(undefined4 *)(unsigned)(unsigned)0x8c43723c) = 0x3f800000;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0x3f800000;
          (*(undefined4 *)(unsigned)(unsigned)0x8c43723c) = 0x7cc;
        }
        (*(undefined4 *)(unsigned)(unsigned)0x8c437238) = 0x3f19999a;
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 5;
        (*(undefined4 *)(unsigned)(unsigned)0x8c437248) = (*(undefined4 *)(unsigned)(unsigned)0x8c437240);
      }
    }
    else {
      if (cVar6 != '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = 0x3f19999a;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c43723c) = 0x3f000000;
    }
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 200))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar4,ar6,ar7));
  }
  else if (sVar1 == 5) {
    iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4),ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 56)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4),ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4) = -1;
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c51b8(*(undefined4 *)(unsigned)(ar5 + 0x7cc),0,ar6,ar7));
      ar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0d1c20(*(undefined4 *)(unsigned)(ar4 + 0xc),*(undefined4 *)(unsigned)(ar4 + 8),0,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x78))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0,ar6,ar7));
      iVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x70))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xb4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar4,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c437248) = (*(undefined4 *)(unsigned)(unsigned)0x8c437240);
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 6;
    }
  }
  else if ((sVar1 == 6) && (0x1e < (*(undefined4 *)(unsigned)(unsigned)0x8c437240) - (*(undefined4 *)(unsigned)(unsigned)0x8c437248))) {
    *(undefined4 *)(unsigned)(ar4 + 0x2d15c) = 3;
    uVar5 = 0;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar4,ar6,ar7));
  a6 = ((undefined1 *)(fr0_ - 0x34));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 * 4 + 8));
  iVar4 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xc))))(piVar3,ar5,a6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_d0_0c51fc(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar4,a6,ar7));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xb0))))(piVar3,iVar4,a6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c437240) = (*(undefined4 *)(unsigned)(unsigned)0x8c437240) + 1;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c8480(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,ar7));
  return uVar5;
}

__asm__(".globl _s_BUGBOX_4_0c8c30\n.set _s_BUGBOX_4_0c8c30, _s_BUGBOX_4_0c8c30_def\n");
