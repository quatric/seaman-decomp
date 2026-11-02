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
int FUN_8c26af42_def(undefined4 ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c26af42");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int d;
  int iVar1;
  
  if (ar5 == 0) {
    *ar6 = 0;
    return ain0;
  }
  *ar6 = 1;
  iVar1 = 0x40;
  d = 2;
  while ((*ar6 <= iVar1 && (ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614(ar5,d,vr6,vr7)), ain0 == 0))) {
    d = d * 2;
    *ar6 = *ar6 << 1;
  }
  return ain0;
}

__asm__(".globl FUN_8c26af42\n.set FUN_8c26af42, FUN_8c26af42_def\n");

}
