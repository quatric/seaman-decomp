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
undefined4 FUN_8c1fb3e0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fb3e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  le<uint>* puVar2;
  int iVar3;
  le<int>* piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = 0x8c475f0c;
  puVar1 = 0x8c475f10;
  uVar6 = 0xffffffe0;
  uVar5 = ar4 + 0x1fU & 0xffffffe0;
  *(le<undefined4>* )(unsigned)0x8c475f08 = uVar5;
  *puVar1 = uVar5;
  piVar4 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *puVar2 = ar5 & 0xffffffe0;
  *piVar4 = iVar3;
  *(le<int>* )(unsigned)iVar3 = iVar3;
  *(le<undefined4>* )(unsigned)(iVar3 + 4) = 0;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1fb426(0,0xffffffe0,ar6,ar7));
  uVar5 = *(le<undefined4>* )(unsigned)0x8c475f08;
  *(le<uint>* )(unsigned)(uVar5 + 4) = ar5 >> 5;
  uVar6 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1fb586(uVar5 + 0x20,uVar6,ar6,ar7));
  return uVar6;
}

__asm__(".globl FUN_8c1fb3e0\n.set FUN_8c1fb3e0, FUN_8c1fb3e0_def\n");

}
