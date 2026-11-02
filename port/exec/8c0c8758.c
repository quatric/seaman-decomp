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
undefined4 s_BUGBOX_3_0c8762_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_BUGBOX_3_0c8762";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c84cc(((undefined1 *)(fr0_ - 0x38)),ar5,ar6,ar7));
  uVar6 = 1;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x48)),iVar2,ar6,ar7));
  puVar5 = ((undefined1 *)(fr0_ - 0x38));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xb0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar2,puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar2,puVar5,ar7));
  sVar1 = *(short *)(unsigned)(ar4 + 0x2d1ac);
  if (sVar1 == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a18) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a14) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a10) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a0c) = 0;
    ar7 = 4;
    puVar5 = ((undefined1 *)(unsigned)0x8c436a0c);
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c016318(0x8c436978,((undefined1 *)(unsigned)0x8c4369ec),((undefined1 *)(unsigned)0x8c436a0c),4); });
    iVar2 = 0x60;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c015198(0x8c436978,0x60,puVar5,ar7); });
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c51c4(*(undefined4 *)(unsigned)(ar5 + 0x7cc),iVar2,puVar5,ar7));
    *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 1;
  }
  else if (sVar1 == 1) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c436a0c) < 0xfc000000) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c436a0c) + iVar3 * 4) = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c436a0c) + iVar3 * 4) + 0x3000000;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c13d1a9),puVar5,ar7));
      ar7 = 0;
      puVar5 = (undefined1 *)(unsigned)0x0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c13cbf4) = iVar2;
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c021d90(0x8c2b59d0,iVar2,0,0));
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 2;
    }
  }
  else if (sVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x78))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x9c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0x8c3eb334,puVar5,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0xe0))))(iVar2,0x8c3eb334,0,ar7));
    uVar6 = 1;
    puVar5 = ((undefined1 *)(fr0_ - 0x48));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x150))))(iVar2,puVar5,1,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar2,puVar5,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar2,uVar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0xe0))))(iVar2,0x8c3eb334,0,ar7));
    uVar6 = 1;
    puVar5 = ((undefined1 *)(fr0_ - 0x48));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x150))))(iVar2,puVar5,1,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar2,puVar5,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar2,uVar6,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7));
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0xe0))))(iVar3,0x8c3eb334,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar6,uVar4,ar7));
    iVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x10c))))(iVar3,ar5,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar3,iVar2,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar3,uVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7));
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0xe0))))(iVar3,0x8c3eb334,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar6,uVar4,ar7));
    iVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x10c))))(iVar3,ar5,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar3,iVar2,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar3,uVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7));
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0xe0))))(iVar3,0x8c3eb334,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar6,uVar4,ar7));
    iVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x10c))))(iVar3,ar5,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar3,iVar2,uVar4,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar3,uVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 128)), s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7));
    puVar5 = (undefined1 *)(unsigned)0x0;
    uVar6 = 0x8c3eb334;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0xe0))))(iVar3,0x8c3eb334,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar6,puVar5,ar7));
    iVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x10c))))(iVar3,ar5,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c036988(iVar3,iVar2,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),iVar3,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c51b8(*(undefined4 *)(unsigned)(ar5 + 0x7cc),1,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x98))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0,puVar5,ar7));
    iVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x70))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0,puVar5,ar7));
    *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 3;
    uVar6 = 0;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c436a0c) != 0) {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c016340(0x8c436978,iVar2,puVar5,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c8480(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar5,ar7));
  return uVar6;
}

__asm__(".globl _s_BUGBOX_3_0c8762\n.set _s_BUGBOX_3_0c8762, _s_BUGBOX_3_0c8762_def\n");
