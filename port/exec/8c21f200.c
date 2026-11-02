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
undefined4
FUN_8c21f200_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21f200";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  float in_fr4 = 0;
  
  if (ar4 == (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = 0;
  }
  else {
    fVar2 = (float)(int)ar4[1];
    if ((int)ar4[1] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 <= in_fr4) {
      return ain0;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = *(undefined2 *)(unsigned)(ar4 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = *(ushort *)(unsigned)((int)ar4 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = (ushort)((*(ushort *)(unsigned)((int)ar4 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad64) = *ar4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad74) = ar4[1];
    (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad7c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa36c) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759dc))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad84)];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) = in_fr4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21da20(ar5,0,((undefined1 *)(unsigned)0x8c4aad64),((undefined1 *)(unsigned)0x8c4aad84)));
  return uVar1;
}

__asm__(".globl _FUN_8c21f200\n.set _FUN_8c21f200, _FUN_8c21f200_def\n");
