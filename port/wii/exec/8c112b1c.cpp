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
int FUN_8c112b1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c112b1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(le<undefined2>* )(unsigned)(0x1be + ar4) = (undefined2)ar5;
  uVar1 = 0x80;
  iVar2 = (int)0xc0;
  if (*(le<int>* )(unsigned)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
      do {
        if ((*(le<ushort>* )(unsigned)(uVar3 * 2 + *(le<int>* )(unsigned)(0xc0 + ar4)) & uVar1) == 0) {
          iVar2 = *(le<int>* )(unsigned)(0x1c0 + ar4);
          *(le<undefined2>* )(unsigned)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(le<int>* )(unsigned)(0x1c0 + ar4);
          *(le<undefined2>* )(unsigned)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x38));
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c112b1c\n.set FUN_8c112b1c, FUN_8c112b1c_def\n");

}
