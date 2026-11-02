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
undefined4 FUN_8c01289c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01289c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)(short)(8 - (short)ar6);
  if (uVar7 != 0) {
    pbVar5 = ar4 + ar5 + -1;
    if ((int)uVar7 < 0) {
      uVar2 = (int)0xff >> (~uVar7 & 0x1f) + 1;
    }
    else {
      uVar2 = (int)0xff << (uVar7 & 0x1f);
    }
    uVar6 = 0;
    while (ar4 <= pbVar5) {
      uVar4 = (uint)(short)ar6;
      bVar1 = *pbVar5;
      if ((int)uVar4 < 0) {
        bVar3 = (byte)((uint)(int)(char)*pbVar5 >> (~uVar4 & 0x1f) + 1);
      }
      else {
        bVar3 = (byte)((int)(char)*pbVar5 << (uVar4 & 0x1f));
      }
      *pbVar5 = bVar3;
      *pbVar5 = *pbVar5 | (byte)uVar6;
      pbVar5 = pbVar5 + -1;
      uVar6 = (int)(char)bVar1 & uVar2 & 0xff;
      uVar4 = -uVar7;
      if ((int)uVar4 < 0) {
        uVar6 = uVar6 >> (~uVar4 & 0x1f) + 1;
      }
      else {
        uVar6 = uVar6 << (uVar4 & 0x1f);
      }
    }
    if ((uVar6 & 0xff) != 0) {
      return 1;
    }
    in_r0 = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c01289c\n.set _FUN_8c01289c, _FUN_8c01289c_def\n");
