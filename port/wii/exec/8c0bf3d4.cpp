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
int Class_12b334_m1_0bf3d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b334_m1_0bf3d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((ar4 + 0x8)) << 1) + *(le<int>* )(unsigned)((ar4 + 0x8))) << 2) + ar4) + 0xc)),ar4,ar5,ar6,ar7); }));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bb1bc(*(le<undefined4>* )(unsigned)(0x7cc + ar5),iVar1,ar6,ar7));
  if (iVar1 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
    iVar1 = 0x7dc;
    *(le<undefined4>* )(unsigned)(0x7dc + ar5) = 0;
  }
  return iVar1;
}

__asm__(".globl Class_12b334_m1_0bf3d4\n.set Class_12b334_m1_0bf3d4, Class_12b334_m1_0bf3d4_def\n");

}
