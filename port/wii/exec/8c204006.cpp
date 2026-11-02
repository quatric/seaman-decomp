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
undefined4 FUN_8c204006_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204006");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  for (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar2 != 0; iVar2 = *(le<int>* )(unsigned)(iVar2 + 8)) {
    if (iVar3 < *(le<int>* )(unsigned)(iVar2 + 0x10)) {
      iVar3 = *(le<int>* )(unsigned)(iVar2 + 0x10);
    }
  }
  for (; iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), puVar1 != (le<ushort>* )(unsigned)0x0; puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4))) {
    if (((*puVar1 & 4) == 0) && (iVar3 < *(le<int>* )(unsigned)(puVar1 + 8))) {
      iVar3 = *(le<int>* )(unsigned)(puVar1 + 8);
    }
  }
  for (; puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar2 != 0; iVar2 = *(le<int>* )(unsigned)(iVar2 + 8)) {
    if (iVar4 < *(le<int>* )(unsigned)(iVar2 + 0x10)) {
      iVar4 = *(le<int>* )(unsigned)(iVar2 + 0x10);
    }
  }
  for (; puVar1 != (le<ushort>* )(unsigned)0x0; puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4))) {
    if (((*puVar1 & 4) == 0) && (iVar4 < *(le<int>* )(unsigned)(puVar1 + 8))) {
      iVar4 = *(le<int>* )(unsigned)(puVar1 + 8);
    }
  }
  *ar4 = iVar3;
  *ar5 = iVar4;
  return 0;
}

__asm__(".globl FUN_8c204006\n.set FUN_8c204006, FUN_8c204006_def\n");

}
