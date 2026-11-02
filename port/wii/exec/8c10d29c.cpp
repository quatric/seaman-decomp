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
int FUN_8c10d29c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c10d29c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)0x114;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(iVar1 + 4 + ar4) = 0;
  iVar3 = *(le<int>* )(unsigned)(0x84 + ar4);
  iVar1 = 0x84 + 0xc;
  iVar2 = 0;
  if (*(le<short>* )(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = 0;
      if (*(le<short>* )(unsigned)(iVar3 + 4) != 0) {
        do {
          *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(iVar3 + 8) + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(le<ushort>* )(unsigned)(iVar3 + 4));
      }
      iVar1 = (int)0x90;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < (int)(uint)*(le<ushort>* )(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl FUN_8c10d29c\n.set FUN_8c10d29c, FUN_8c10d29c_def\n");

}
