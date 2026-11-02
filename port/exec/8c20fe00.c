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
undefined4 FUN_8c20fe00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20fe00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) = *(uint *)(unsigned)(ar4 + 0x90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2757ac) = *(undefined4 *)(unsigned)(ar4 + 0x94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa13c) = *(uint *)(unsigned)(ar4 + 0x98);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) >> 0x18 & 7) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa13c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa13c) & 0x3ffffff | 0x20000000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa140) = *(undefined4 *)(unsigned)(ar4 + 0x9c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa148) = *(float *)(unsigned)(ar4 + 0x70);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa14c) = *(float *)(unsigned)(ar4 + 0x74);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa150) = *(float *)(unsigned)(ar4 + 0x78);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa154) = *(float *)(unsigned)(ar4 + 0x7c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa158) = *(float *)(unsigned)(ar4 + 0x80);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa15c) = *(float *)(unsigned)(ar4 + 0x84);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa160) = *(float *)(unsigned)(ar4 + 0x88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa164) = *(float *)(unsigned)(ar4 + 0x8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa168) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) =
       *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c2757e8) +
               (((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x20000000) >> 0x18 | ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x1000000) >> 0x14 |
                ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x40) >> 3 | ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x20) >> 3 | ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x10) >> 3
               | ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 4) >> 2) * 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa27c) = ((*(undefined4 *)(unsigned)(unsigned)0x8c2757a8) & 0x7000000) >> 0x18;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa128) = (*(undefined4 *)(unsigned)(unsigned)0x8c2757a8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa138) = (*(undefined4 *)(unsigned)(unsigned)0x8c2757ac);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa27c) & 1) != 0) {
    puVar2 = ((undefined4 *)(unsigned)0x8c2757c8);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa168);
    goto LAB_8c2100aa;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2757b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa13c);
  puVar2 = ((undefined4 *)(unsigned)0x8c2757b8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2757b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa140);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) == 0) {
    puVar2 = ((undefined4 *)(unsigned)0x8c2757c8);
    goto LAB_8c2100aa;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) == 1) {
    puVar2 = ((undefined4 *)(unsigned)0x8c2757c0);
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa154);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa148);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa14c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa150);
LAB_8c20ffb2:
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
  }
  else {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) == 2) {
      puVar2 = ((undefined4 *)(unsigned)0x8c2757e0);
      puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa164);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa148);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa14c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa150);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa154);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa158);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa15c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757e0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa160);
      goto LAB_8c20ffb2;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) == 3) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa16c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c2757bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa170);
      puVar2 = ((undefined4 *)(unsigned)0x8c2757c8);
      goto LAB_8c2100aa;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) != 4) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa198) == 0x10) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c2757b8) = (float)((int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa148) * 255.0) << 0x18 |
                               (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa14c) * 255.0) << 0x10 |
                               (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa150) * 255.0) << 8 | (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa154) * 255.0));
        (*(undefined4 *)(unsigned)(unsigned)0x8c2757bc) = (float)((int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa158) * 255.0) << 0x18 |
                               (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa15c) * 255.0) << 0x10 |
                               (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa160) * 255.0) << 8 | (int)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa164) * 255.0));
        puVar2 = ((undefined4 *)(unsigned)0x8c2757c8);
      }
      goto LAB_8c2100aa;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa16c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa170);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757d8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa178);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa17c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757e0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa180);
    puVar2 = ((undefined4 *)(unsigned)0x8c2757e4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa184);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa148);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa14c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa150);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2757d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa154);
  }
  puVar2 = puVar2 + 1;
LAB_8c2100aa:
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa208) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa27c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa20c) = puVar2 + 0x1cf62a16;
  return 0;
}

__asm__(".globl _FUN_8c20fe00\n.set _FUN_8c20fe00, _FUN_8c20fe00_def\n");
