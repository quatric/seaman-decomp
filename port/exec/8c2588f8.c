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
uint FUN_8c2588f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2588f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 472; for (int i_ = 0; i_ < 472; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *ar5_00;
  float *ar6_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a7;
  undefined4 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 in_xd2 = 0;
  char cVar10;
  
  cVar10 = '\0';
  puVar5 = (fr0_ + (int)0xffffff14);
  puVar6 = (fr0_ + (int)0xffffff14);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa518) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac) / 2.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0) / 2.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0) = 0x3f800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8) = 0x43fa0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4) = 0x3f800000;
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x2c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d8) = 0x476a6000;
  ar6_00 = &(*(float *)(fr0_ - 0x24));
  a7 = ((undefined1 *)(unsigned)0x8c4aa4c4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa540) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab14c) = 0;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac) + -1.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b0) + -1.0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c4) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c8) = 0;
  uVar9 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc));
  (*(float *)(fr0_ - 0x24)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4cc);
  (*(float *)(fr0_ - 0x20)) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d0);
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c237770(((undefined1 *)(unsigned)0x8c4aa4cc),ar5_00,ar6_00,((undefined1 *)(unsigned)0x8c4aa4c4)));
  puVar8 = (undefined1 *)(unsigned)0x8c4aa73c;
  puVar7 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aabc0);
  do {
    (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c258d82(puVar8,ar5_00,ar6_00,a7));
    puVar8 = puVar8 + 0xc0;
    *puVar7 = 0x80012;
    puVar7 = puVar7 + 1;
  } while (puVar8 < ((undefined1 *)(unsigned)0x8c4aabbc));
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c258d82(((undefined1 *)(unsigned)0x8c4aabfc),ar5_00,ar6_00,a7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aabfc) = 0xc0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aac28) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aac2c) = 0xb;
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c20f640(((undefined1 *)(unsigned)0x8c4aabfc),ar5_00,ar6_00,a7));
  puVar8 = ((undefined1 *)(unsigned)0x8c4aabfc);
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c20a366(((undefined1 *)(unsigned)0x8c4aabfc),ar5_00,ar6_00,a7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xec))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 472)); noop_257488(puVar8,ar5_00,ar6_00,a7); });
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c20a13a(puVar8,ar5_00,ar6_00,a7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 472)), FUN_8c258d4c(0,ar5_00,ar6_00,a7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xec))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 472)); FUN_8c010838(uVar1,ar5_00,(fr0_ + (int)0xffffff14),a7); });
  uVar3 = 0;
  do {
    uVar2 = uVar3 + 4;
    if (cVar10 == '\0') {
      uVar9 = (ulonglong)*(uint *)(unsigned)(puVar5 + uVar3);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(puVar5 + uVar3);
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(uVar3 + 0x8c4c0d60) = (int)uVar9;
    }
    else {
      *(undefined8 *)(unsigned)(uVar3 + 0x8c4c0d60) = in_xd2;
    }
    uVar3 = uVar2;
  } while (uVar2 < 0xc0);
  uVar1 = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c0da0) = 3;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xec))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xe8))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 472)); FUN_8c010838(uVar2,((undefined1 *)(unsigned)0x8c4c0da0),(fr0_ + (int)0xffffff14),3); });
  uVar3 = 0;
  do {
    uVar2 = uVar3;
    uVar4 = uVar3 + 4;
    if (cVar10 == '\0') {
      uVar9 = (ulonglong)*(uint *)(unsigned)(puVar6 + uVar3);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(puVar6 + uVar3);
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(uVar3 + 0x8c4c0e80) = (int)uVar9;
    }
    else {
      *(undefined8 *)(unsigned)(uVar3 + 0x8c4c0e80) = in_xd2;
    }
    uVar3 = uVar4;
  } while (uVar4 < 0xc0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4c0ec0) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab330) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c2588f8\n.set _FUN_8c2588f8, _FUN_8c2588f8_def\n");
