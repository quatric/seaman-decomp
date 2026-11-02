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
FUN_8c213e32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213e32";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;
  undefined4 ain1 = (undefined4)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *ar5_00;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 in_PR = 0;
  char in_FPSCR_SZ = 0;
  uint uVar8;
  uint uVar11;
  
  puVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c0);
  *ain0 = ain1;
  if (in_FPSCR_SZ == '\0') {
    uVar4 = (ulonglong)*puVar3;
    uVar6 = (ulonglong)puVar3[1];
    uVar9 = CONCAT44(0x3f800000,puVar3[2]);
    puVar2 = ((undefined1 *)(unsigned)0x8c278790);
    puVar3 = puVar3 + 7;
    *puVar3 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0x3f800000;
    uVar9 = 0;
    puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c2787a0);
    puVar3 = puVar3 + 0xe;
    puVar3[0] = 0;
    puVar3[1] = 0x3f800000;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3[-1] = (uint)((ulonglong)uVar9 >> 0x20);
    puVar3[-2] = 0;
    puVar3[-3] = 0;
    uVar5 = puVar2[-0x10];
    uVar8 = puVar2[-0xf];
    uVar11 = puVar2[-0xe];
    ar5_00 = puVar2 + -0xc;
    puVar3[-4] = puVar2[-0xd];
    puVar3[-5] = uVar11;
    puVar3[-6] = uVar8;
    puVar3 = puVar3 + -7;
    *puVar3 = uVar5;
  }
  else {
    *(undefined8 *)(unsigned)(puVar3 + -2) = uVar9;
    *(ulonglong *)(unsigned)(puVar3 + -4) = uVar6;
    *(ulonglong *)(unsigned)(puVar3 + -6) = uVar4;
    uVar9 = *(undefined8 *)(unsigned)(puVar2 + -0x10);
    uVar7 = *(undefined8 *)(unsigned)(puVar2 + -0xe);
    uVar10 = *(undefined8 *)(unsigned)(puVar2 + -0xc);
    ar5_00 = puVar2 + -8;
    *(undefined8 *)(unsigned)(puVar3 + -8) = *(undefined8 *)(unsigned)(puVar2 + -10);
    *(undefined8 *)(unsigned)(puVar3 + -10) = uVar10;
    *(undefined8 *)(unsigned)(puVar3 + -0xc) = uVar7;
    puVar3 = puVar3 + -0xe;
    *(undefined8 *)(unsigned)puVar3 = uVar9;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc) = puVar3;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(puVar3,ar5_00,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(puVar3,(*(undefined4 *)(unsigned)(unsigned)0x8c4c0cc0),ar6,ar7); });
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d00) = *(undefined8 *)(unsigned)puVar3;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d08) = *(undefined8 *)(unsigned)(puVar3 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d10) = *(undefined8 *)(unsigned)(puVar3 + 4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = CONCAT44(puVar3[7],(*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18));
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = puVar3[6];
  }
  else {
    (*(uint *)(unsigned)0x8c4c0ce0) = *(undefined8 *)(unsigned)puVar3;
    (*(uint *)(unsigned)0x8c4c0ce8) = *(undefined8 *)(unsigned)(puVar3 + 2);
    (*(uint *)(unsigned)0x8c4c0cf0) = *(undefined8 *)(unsigned)(puVar3 + 4);
    (*(uint *)(unsigned)0x8c4c0cf8) = *(undefined8 *)(unsigned)(puVar3 + 6);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d00) = *(undefined8 *)(unsigned)(puVar3 + 8);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d08) = *(undefined8 *)(unsigned)(puVar3 + 10);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d10) = *(undefined8 *)(unsigned)(puVar3 + 0xc);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = *(undefined8 *)(unsigned)(puVar3 + 0xe);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c213e32\n.set _FUN_8c213e32, _FUN_8c213e32_def\n");
