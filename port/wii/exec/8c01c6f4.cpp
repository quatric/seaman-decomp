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
int FUN_8c01c6f4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01c6f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (*(undefined1 *)(fr0_ - 0x18)) = *(&(*(undefined1 *)(unsigned)0x8c12fb10));
  (*(undefined1 *)(fr0_ - 0x17)) = (&(*(undefined1 *)(unsigned)0x8c12fb10))[1];
  (*(undefined1 *)(fr0_ - 0x16)) = (&(*(undefined1 *)(unsigned)0x8c12fb10))[2];
  (*(undefined1 *)(fr0_ - 0x15)) = (&(*(undefined1 *)(unsigned)0x8c12fb10))[3];
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1f5d6c(ar4[2],&(*(undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(le<undefined4>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c01c6f4\n.set FUN_8c01c6f4, FUN_8c01c6f4_def\n");

}
