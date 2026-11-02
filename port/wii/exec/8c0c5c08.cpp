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
undefined4 Class_12b388_m1_0c5c08_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b388_m1_0c5c08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0x2d15c + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d15c + ar4))) << 2) + ar4) + 0x2d170)),ar4,ar5,ar6,ar7); }));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ad88(uVar2,ar5_00,ar6,ar7));
  iVar4 = 1;
  if ((((iVar3 == 1) ||
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffff4(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7)),
       iVar4 != 1)) || (iVar4 = *(le<int>* )(unsigned)(0x2d164 + ar4), iVar4 != 0)) && (iVar1 != 0)) {
    return iVar4;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5cb4(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl Class_12b388_m1_0c5c08\n.set Class_12b388_m1_0c5c08, Class_12b388_m1_0c5c08_def\n");

}
