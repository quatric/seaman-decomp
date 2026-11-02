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
undefined4 FUN_8c0c75f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c75f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  uint a5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  a5 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
  piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0x78))))(piVar2,a5,ar6,ar7));
  if ((*(le<int>* )(unsigned)(0x2d15c + ar4) != 0) && (*(le<int>* )(unsigned)(0x2d15c + ar4) != 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                      (*(le<undefined4>* )(unsigned)(0x7cc + ar5),a5,ar6,ar7));
    piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x9c + *piVar2))))(piVar2,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((((*(le<int>* )(unsigned)((0x2d160 + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d160 + ar4))) << 2) << 2) + ar4) + (((((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff) << 1) + ((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff)) << 2)) + 0x2d33c)),ar4,ar5,ar6,ar7); }));
  return 1;
}

__asm__(".globl FUN_8c0c75f4\n.set FUN_8c0c75f4, FUN_8c0c75f4_def\n");

}
