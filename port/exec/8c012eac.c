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
undefined4 FUN_8c012eac_def(int ar4,byte *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c012eac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar5 = (byte *)(unsigned)(ar7 + -1 + ar6);
  pbVar3 = ar5 + ar7 + -1;
  uVar6 = 0;
  bVar1 = true;
  pbVar4 = pbVar3 + 1;
  for (; ar5 <= pbVar3; pbVar3 = pbVar3 + -1) {
    (*(int *)(fr0_ - 0x14)) = ((uint)*pbVar3 - (uint)*pbVar5) - uVar6;
    bVar7 = (*(int *)(fr0_ - 0x14)) < 0;
    if (bVar7) {
      (*(int *)(fr0_ - 0x14)) = 0x100 + (*(int *)(fr0_ - 0x14));
    }
    uVar6 = (uint)bVar7;
    if ((*(int *)(fr0_ - 0x14)) != 0) {
      bVar1 = false;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (byte)(*(int *)(fr0_ - 0x14));
    pbVar5 = pbVar5 + -1;
  }
  if ((uVar6 == 1) && (ar4 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012eac\n.set _FUN_8c012eac, _FUN_8c012eac_def\n");
