#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012da8_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012da8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(short)(8 - (short)ar6);
  if (uVar6 != 0) {
    uVar3 = -uVar6;
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = (int)0xff >> (~uVar3 & 0x1f) + 1;
    }
    else {
      uVar3 = (int)0xff << (uVar3 & 0x1f);
    }
    iVar7 = 0;
    if (0 < ar5) {
      do {
        bVar1 = *ar4;
        uVar4 = -(int)(short)ar6;
        iVar7 = iVar7 + 1;
        if ((int)uVar4 < 0) {
          bVar2 = *ar4 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          bVar2 = *ar4 << (uVar4 & 0x1f);
        }
        *ar4 = bVar2;
        uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
        *ar4 = *ar4 | (byte)uVar5;
        if ((int)uVar6 < 0) {
          uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar5 = uVar4 << (uVar6 & 0x1f);
        }
        ar4 = ar4 + 1;
      } while (iVar7 < ar5);
    }
    if ((uVar5 & 0xff) == 0) {
      in_r0 = 0;
    }
    else {
      in_r0 = 1;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c012da8\n.set FUN_8c012da8, FUN_8c012da8_def\n");

}
