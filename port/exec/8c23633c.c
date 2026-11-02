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
undefined4 FUN_8c23633c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23633c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (*(undefined1 *)(unsigned)0x8c278798);
  fVar6 = (*(undefined1 *)(unsigned)0x8c278794);
  fVar5 = (*(undefined1 *)(unsigned)0x8c278790);
  fVar4 = (*(undefined1 *)(unsigned)0x8c27878c);
  fVar3 = (*(undefined1 *)(unsigned)0x8c278788);
  fVar2 = (*(undefined1 *)(unsigned)0x8c278784);
  fVar1 = (*(undefined1 *)(unsigned)0x8c278780);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a0) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc) = ar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c0) = ar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa59c) = ar5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab148) = ar6;
  ar4[0xf] = (*(undefined1 *)(unsigned)0x8c27879c);
  ar4[0xe] = fVar7;
  ar4[0xd] = fVar6;
  ar4[0xc] = fVar5;
  ar4[0xb] = fVar4;
  ar4[10] = fVar3;
  ar4[9] = fVar2;
  ar4[8] = fVar1;
  fVar7 = (*(undefined1 *)(unsigned)0x8c278778);
  fVar6 = (*(undefined1 *)(unsigned)0x8c278774);
  fVar5 = (*(undefined1 *)(unsigned)0x8c278770);
  fVar4 = (*(undefined1 *)(unsigned)0x8c27876c);
  fVar3 = (*(undefined1 *)(unsigned)0x8c278768);
  fVar2 = (*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c278760)+4));
  fVar1 = (float)(*(undefined1 *)(unsigned)0x8c278760);
  ar4[7] = (*(undefined1 *)(unsigned)0x8c27877c);
  ar4[6] = fVar7;
  ar4[5] = fVar6;
  ar4[4] = fVar5;
  ar4[3] = fVar4;
  ar4[2] = fVar3;
  ar4[1] = fVar2;
  *ar4 = fVar1;
  *ar4 = -fVar1;
  ar4[5] = -fVar6;
  return 0x14;
}

__asm__(".globl _FUN_8c23633c\n.set _FUN_8c23633c, _FUN_8c23633c_def\n");
