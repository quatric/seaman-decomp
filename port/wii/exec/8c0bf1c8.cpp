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
int FUN_8c0bf1c8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf1c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(le<int>* )(unsigned)(iVar3 * 4 + iVar2)) && (*(le<int>* )(unsigned)(iVar3 * 4 + iVar2) < 0x30)) {
      *(le<undefined4>* )(unsigned)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(unsigned)(*(le<int>* )(unsigned)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0bf1c8\n.set FUN_8c0bf1c8, FUN_8c0bf1c8_def\n");

}
