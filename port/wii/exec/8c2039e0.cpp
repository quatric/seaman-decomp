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
int FUN_8c2039e0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2039e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  uint uVar1;
  le<ushort>* puVar2;
  int iVar3;
  int iVar4;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  iVar4 = ar5;
  puVar2 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c204c00(0,ar4,ar5,ar7));
  if (puVar2 == (le<ushort>* )(unsigned)0x0) {
    iVar4 = ar5;
    puVar2 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c204c00(1,ar4,ar5,ar7));
  }
  if (puVar2 == (le<ushort>* )(unsigned)0x0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2041e2(ar4,ar5,iVar4,ar7));
    if (iVar4 == -1) {
      iVar3 = 3;
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2043d4(0,iVar4,ar4,ar5));
      if (iVar3 == 0) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2043d4(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar4,ar4,((undefined1 *)(fr0_ - 0x3c))));
      }
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = *(le<undefined4>* )(unsigned)(puVar2 + 6);
    *(le<int>* )(unsigned)(puVar2 + 10) = ar5;
    *puVar2 = *puVar2 | 4;
    iVar3 = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c2039e0\n.set FUN_8c2039e0, FUN_8c2039e0_def\n");

}
