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
undefined4 FUN_8c06b054_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06b054";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float extraout_fr1 = 0;
  float extraout_fr1_00 = 0;
  float extraout_fr1_01 = 0;
  float fVar2;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 1;
  if (ar4 < 7) {
    if (*(int *)(unsigned)(ar4 * 8 + -0x73d7f644) == 0) {
      uVar1 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b410(*(undefined4 *)(unsigned)(ar4 * 8 + -0x73d7f644),ar5,ar6,ar7));
      fVar2 = extraout_fr1;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (ar4 < 0xd) {
    if (*(int *)(unsigned)((ar4 + -7) * 8 + -0x73d7f600) == 0) {
      uVar1 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b410(*(undefined4 *)(unsigned)((ar4 + -7) * 8 + -0x73d7f600),ar5,ar6,ar7));
      fVar2 = extraout_fr1_00;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0_00;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (*(int *)(unsigned)((ar4 + -1) * 8 + -0x73d7f5c4) == 0) {
    uVar1 = 1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b410(*(undefined4 *)(unsigned)((ar4 + -1) * 8 + -0x73d7f5c4),ar5,ar6,ar7));
    fVar2 = extraout_fr1_01;
    if (cVar4 == '\0') {
      fVar2 = extraout_fr0_01;
    }
    if (cVar3 == '\0' && 0.0 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b054\n.set _FUN_8c06b054, _FUN_8c06b054_def\n");
