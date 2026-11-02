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
undefined4 FUN_8c121dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121dc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(le<int>* )(unsigned)(0xfc + ar4);
  iVar1 = (int)0x244;
  iVar3 = (uint)*(le<ushort>* )(unsigned)(0x244 + ar4) * 4;
  iVar4 = (int)0xf4;
  *(le<undefined4>* )(unsigned)(0x124 + ar4 + iVar3) = *(le<undefined4>* )(unsigned)(0x118 + ar4 + iVar3);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar2 + 0x18))))
            (*(le<undefined4>* )(unsigned)((uint)*(le<ushort>* )(unsigned)(iVar1 + ar4) * 8 + 0x268 + ar4 + 4),
             iVar4 + ar4,ar6,ar7));
  iVar1 = (int)0x148;
  *(le<undefined4>* )(unsigned)((uint)*(le<ushort>* )(unsigned)(0x244 + ar4) * 8 + 0x268 + ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = 0;
  return 0;
}

__asm__(".globl FUN_8c121dc8\n.set FUN_8c121dc8, FUN_8c121dc8_def\n");

}
