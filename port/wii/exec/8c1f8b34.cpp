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
uint sh4_tmu_1f8b34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_tmu_1f8b34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = 0xffd80004;
  if (((((ushort)ar4 != 0) && ((ushort)ar4 != 1)) && ((ushort)ar4 != 2)) &&
     (((ushort)ar4 != 3 && ((ushort)ar4 != 4)))) {
    (*(le<uint>* )((uchar*)&ar4+0)) = 2;
  }
  cVar1 = *(volatile le<undefined4>* )(unsigned)0xffd80004;
  cVar2 = *(volatile le<undefined4>* )(unsigned)0xffd80004;
  *(volatile le<undefined4>* )(unsigned)0xffd80004 = (char)((int)cVar2 & 0xfbU);
  *(volatile le<undefined4>* )(unsigned)0xffd80028 = *(volatile le<undefined4>* )(unsigned)0xffd80028 & 0xfff8 | (ushort)ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}

__asm__(".globl sh4_tmu_1f8b34\n.set sh4_tmu_1f8b34, sh4_tmu_1f8b34_def\n");

}
