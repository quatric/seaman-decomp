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
undefined4 FUN_8c236278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c236278");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  int iVar2;
  le<undefined2>* puVar3;
  uint uVar4;
  
  uVar1 = 0xa5;
  uVar4 = ar4 + 0x3fU & 0xffffffe0;
  iVar2 = *(le<undefined4>* )(unsigned)0x8c4ab218;
  while( true ) {
    if (iVar2 == 0x8c4ab210) {
      return 0;
    }
    if ((*(le<short>* )(unsigned)(iVar2 + 2) == 0) && ((int)uVar4 <= *(le<int>* )(unsigned)(iVar2 + 4))) break;
    iVar2 = *(le<int>* )(unsigned)(iVar2 + 8);
  }
  if (0x40 < (int)(*(le<int>* )(unsigned)(iVar2 + 4) - uVar4)) {
    puVar3 = (le<undefined2>* )(unsigned)(uVar4 + iVar2);
    *(le<uint>* )(unsigned)(puVar3 + 2) = *(le<int>* )(unsigned)(iVar2 + 4) - uVar4;
    *puVar3 = uVar1;
    puVar3[1] = 0;
    *(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 8) + 0xc) = puVar3;
    *(le<undefined4>* )(unsigned)(puVar3 + 4) = *(le<undefined4>* )(unsigned)(iVar2 + 8);
    *(le<unsigned>* )(unsigned)(iVar2 + 8) = puVar3;
    *(le<int>* )(unsigned)(puVar3 + 6) = iVar2;
    *(le<uint>* )(unsigned)(iVar2 + 4) = uVar4;
  }
  *(le<undefined2>* )(unsigned)(iVar2 + 2) = 1;
  return iVar2 + 0x20;
}

__asm__(".globl FUN_8c236278\n.set FUN_8c236278, FUN_8c236278_def\n");

}
