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
int FUN_8c21da20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21da20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<ushort>* puVar3;
  le<undefined4>* puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aad86;
  puVar2 = 0x8c4aa378;
  puVar1 = 0x8c4aa37c;
  uVar5 = ar4 - 0x22;
  if (0xd < uVar5) {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 0;
    *puVar2 = 0xffffffff;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar3 = 0;
    return uVar5;
  }
  iVar6 = (int)(short)(&(*(undefined1 *)(unsigned)0x8c21da64))[uVar5];
  switch(uVar5) {
  case 0:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 3;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 0xffffffff;
    break;
  case 1:
    uVar7 = (ushort)0xffdf;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    goto LAB_8c21dad2;
  default:
    iVar6 = 4;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar4 = 5;
    break;
  case 7:
    iVar6 = 6;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 6;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 0xffffffff;
    goto LAB_8c21dad0;
  case 8:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
    return iVar6;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 7;
    *puVar2 = 2;
    *puVar1 = 5;
    *puVar4 = 8;
LAB_8c21dad0:
    uVar7 = (ushort)0xbfff;
    goto LAB_8c21dad2;
  }
  uVar7 = (ushort)0xbfdf;
LAB_8c21dad2:
  *puVar3 = *puVar3 & uVar7;
  return iVar6;
}

__asm__(".globl FUN_8c21da20\n.set FUN_8c21da20, FUN_8c21da20_def\n");

}
