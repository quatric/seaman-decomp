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
int FUN_8c1f69f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f69f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = ((void *)(unsigned)0x8c01422c);
  piVar1 = 0x8c474898;
  iVar4 = 0x7fffffff;
  if (-1 < ar4) {
    iVar4 = *(le<int>* )(unsigned)((int)0x204 + *(le<undefined4>* )(unsigned)0x8c474898) + ar4;
  }
  iVar3 = (int)0xd78;
  *(le<int>* )(unsigned)(*(le<int>* )(unsigned)((int)0xd78 + *(le<undefined4>* )(unsigned)0x8c474898) + 0x14) = iVar4;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(*(le<int>* )(unsigned)(iVar3 + *piVar1) + 0x18,vr5,vr6,vr7));
  if (iVar4 == 0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013e4c(*piVar1 + 4,1,vr6,vr7));
  }
  return iVar4;
}

__asm__(".globl FUN_8c1f69f2\n.set FUN_8c1f69f2, FUN_8c1f69f2_def\n");

}
