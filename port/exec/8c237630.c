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
undefined4 FUN_8c237630_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c237630";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11d0) = 0x40c00000;
  uVar1 = 0x80;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11cc) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c4) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11c0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11bc) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b8) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b4) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11b0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11ac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c11a0) = 0x3f800000;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4c1300) != 0) {
    piVar4 = (int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4c1300) * 4 + -0x73b3ed80);
    iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c1300);
    do {
      piVar4 = piVar4 + -1;
      iVar2 = *(int *)(unsigned)(*piVar4 * 4 + -0x73b3ee20);
      uVar1 = 0x74;
      if ((*(int *)(unsigned)(iVar2 + 0x124) == 0x88) || (*(int *)(unsigned)(iVar2 + 0x124) == 200)) {
        uVar1 = 0x80;
        fVar5 = *(float *)(unsigned)(iVar2 + 0x70) - *(float *)(unsigned)(iVar2 + 0x74);
        *(float *)(unsigned)(iVar2 + 0x80) = 1.0 / SQRT(fVar5 * fVar5);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c237630\n.set _FUN_8c237630, _FUN_8c237630_def\n");
