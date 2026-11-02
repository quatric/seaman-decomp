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
int FUN_8c1fab8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fab8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<int>* piVar2;
  int iVar3;
  le<int>* piVar4;
  le<undefined2>* puVar5;
  undefined1 *puVar6;
  
  *(volatile le<undefined4>* )(unsigned)0xffc00004 = *(volatile le<undefined4>* )(unsigned)0xffc00004 & 0xfe;
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed8;
  for ((*(le<int>* )(fr0_ - 0xc)) = 0; (*(le<int>* )(fr0_ - 0xc)) < 0x50000; (*(le<int>* )(fr0_ - 0xc)) = (*(le<int>* )(fr0_ - 0xc)) + 1) {
  }
  if ((*(byte *)(unsigned)(*(le<undefined4>* )(unsigned)0x8c475ed0 + 0x1c) & 4) == 0) {
    *(le<undefined4>* )(unsigned)0x8c475ed8 = 1;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c475ed8 = 0;
  }
  puVar6 = 0xffe00008;
  puVar5 = 0xffe80008;
  piVar4 = 0x8c475ed4;
  iVar3 = 0x80000;
  if (*piVar1 == 0) {
    *(le<undefined4>* )(unsigned)0x8c475ed4 = 0xffe80000;
    *puVar5 = 0;
    *(le<undefined2>* )(unsigned)(*piVar4 + 0x18) = 6;
    *(le<undefined2>* )(unsigned)(*piVar4 + 8) = 0;
    *(le<undefined2>* )(unsigned)*piVar4 = 0;
    *(undefined1 *)(unsigned)(*piVar4 + 4) = 0x28;
    for ((*(le<int>* )(fr0_ - 0x4)) = 0; (*(le<int>* )(fr0_ - 0x4)) < iVar3; (*(le<int>* )(fr0_ - 0x4)) = (*(le<int>* )(fr0_ - 0x4)) + 1) {
    }
    *(le<undefined2>* )(unsigned)(*piVar4 + 0x18) = 0x308;
    *(le<undefined2>* )(unsigned)(*piVar4 + 8) = 0x30;
  }
  else {
    *piVar2 = 0xffe00000;
    *puVar6 = 0;
    *(undefined1 *)(unsigned)(*piVar2 + 8) = 0;
    *(undefined1 *)(unsigned)*piVar2 = 0;
    *(undefined1 *)(unsigned)(*piVar2 + 4) = 0x28;
    for ((*(le<int>* )(fr0_ - 0x8)) = 0; (*(le<int>* )(fr0_ - 0x8)) < iVar3; (*(le<int>* )(fr0_ - 0x8)) = (*(le<int>* )(fr0_ - 0x8)) + 1) {
    }
    *(undefined1 *)(unsigned)(*piVar2 + 8) = 0x30;
  }
  return *piVar1;
}

__asm__(".globl FUN_8c1fab8c\n.set FUN_8c1fab8c, FUN_8c1fab8c_def\n");

}
