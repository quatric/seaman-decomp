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
int FUN_8c0105c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0105c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  short in_r0 = (short)(unsigned long)vin0;
  int iVar2;
  uint uVar3;
  short in_r1 = (short)(unsigned long)vin1;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = (int)in_r0;
  if (iVar2 == 0) {
    *(le<undefined4>* )(unsigned)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar4 = (int)in_r1 - (uint)(((int)in_r1 & 0x80000000U) != 0);
  uVar3 = iVar2 * 0x10000;
  bVar6 = (uVar4 & 0x80000000) != 0;
  bVar5 = (uVar3 & 0x80000000) != 0;
  bVar7 = (uVar4 & 0x80000000) == 0;
  uVar4 = uVar4 * 2 | (uint)(bVar5 != bVar6);
  if (bVar6 || bVar5) {
    if (!bVar6 && bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar4 + iVar2 * -0x10000;
      bVar6 = uVar4 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  return ((int)(short)uVar3 << 1 | (uint)(bVar6 == bVar5)) +
         (uint)(((int)(short)uVar3 & 0x80000000U) != 0);
}

__asm__(".globl FUN_8c0105c4\n.set FUN_8c0105c4, FUN_8c0105c4_def\n");

}
