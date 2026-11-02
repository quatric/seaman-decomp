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
undefined4 FUN_8c1f0a22_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0a22");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar2 = 0xff;
  iVar5 = 0x3c;
  pbVar6 = ar5 + 2;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  sVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f109c(0x3e,ar5,vr6,vr7));
  if (*(le<short>* )(unsigned)(ar5 + 0x3e) == sVar3) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ar5 = (char)uVar2;
      ar5 = ar5 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl FUN_8c1f0a22\n.set FUN_8c1f0a22, FUN_8c1f0a22_def\n");

}
