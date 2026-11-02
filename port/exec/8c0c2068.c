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
undefined4 FUN_8c0c2068_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c2068";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 ar5_01;
  int *ar6_00;
  undefined4 *ar6_01;
  undefined4 ar7_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((*(undefined1 *)(unsigned)0x8c436854) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 0;
    (*(undefined1 *)(unsigned)0x8c436854) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c43685c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436858) = 0;
    (*(undefined1 *)(unsigned)0x8c43685c) = '\x01';
  }
  uVar1 = 2;
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bf70);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13bf74);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13bf78);
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c13bf7c);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13bf80);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13bf84);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13bf88);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13bf8c);
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bf90);
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined1 *)(unsigned)0x8c13bf94);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13bf98);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined1 *)(unsigned)0x8c13bf9c);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13bfa0);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13bfa4);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13bfa8);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13bfac);
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x6c)),ar5,ar6,ar7));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c436850) < 5) && (-1 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c436850))) {
                    
    switch((*(undefined4 *)(unsigned)(unsigned)0x8c436850)) {
    case 0:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436860) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436862) = 0xff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436864) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436866) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436868) = 0xff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c43686a) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c43686c) = 0xff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c43686e) = 0xff;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (((undefined4 *)(unsigned)0x8c13bf60))[iVar2] = 0xff000000;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 1;
      break;
    case 1:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (((undefined4 *)(unsigned)0x8c13bf60))[iVar2] = (((undefined4 *)(unsigned)0x8c13bf60))[iVar2] + 0x111111;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c13bf60) == -1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436858) = *ar6;
        (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 2;
      }
      break;
    case 2:
      if (0x3c < (uint)(*ar6 - (*(undefined4 *)(unsigned)(unsigned)0x8c436858))) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 3;
      }
      break;
    case 3:
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        (((undefined4 *)(unsigned)0x8c13bf60))[iVar3] = (((undefined4 *)(unsigned)0x8c13bf60))[iVar3] + -0x111111;
        (*(int *)(fr0_ - 0x84)) = iVar3;
        iVar2 = iVar3 + 1;
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c13bf60) == -0x1000000) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436858) = *ar6;
        (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 4;
      }
      break;
    case 4:
      if (10 < (uint)(*ar6 - (*(undefined4 *)(unsigned)(unsigned)0x8c436858))) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c436858) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c436850) = 0;
        uVar1 = 4;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c01538c(ar4 + 0x2e64c,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c014a94(ar4 + 0x2e64c,ar5,ar6_00,ar7));
  if (ar5 == 0xe) {
    ar7_00 = 4;
    ar6_01 = ((undefined4 *)(unsigned)0x8c13bf60);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x84))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 136)); FUN_8c016318(((undefined1 *)(fr0_ - 0x6c)),&(*(undefined4 *)(fr0_ - 0x38)),((undefined4 *)(unsigned)0x8c13bf60),4); });
  }
  else {
    ar7_00 = 4;
    ar6_01 = ((undefined4 *)(unsigned)0x8c13bf60);
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x84))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 136)); FUN_8c016318(((undefined1 *)(fr0_ - 0x6c)),&(*(undefined4 *)(fr0_ - 0x58)),((undefined4 *)(unsigned)0x8c13bf60),4); });
  }
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c016324(((undefined1 *)(fr0_ - 0x6c)),((undefined1 *)(unsigned)0x8c436860),ar6_01,ar7_00));
  ar5_01 = 0x80000020;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x84))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 136)); FUN_8c015198(((undefined1 *)(fr0_ - 0x6c)),0x80000020,ar6_01,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c016340(((undefined1 *)(fr0_ - 0x6c)),ar5_01,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 136)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6_01,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0c2068\n.set _FUN_8c0c2068, _FUN_8c0c2068_def\n");
