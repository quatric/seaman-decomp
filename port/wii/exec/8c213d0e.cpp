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
int FUN_8c213d0e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213d0e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0xc) * *(le<int>* )(unsigned)(ar4 + 0x10) * 2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<int>* )(unsigned)(ar4 + 0xc),*(le<int>* )(unsigned)(ar4 + 0x10),ar6,ar7));
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4;
  }
  return iVar1;
}

__asm__(".globl FUN_8c213d0e\n.set FUN_8c213d0e, FUN_8c213d0e_def\n");

}
