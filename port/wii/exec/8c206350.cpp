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
int pvr_206350_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206350");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  int iVar5;
  uint uVar6;
  le<int>* piVar7;
  
  piVar3 = 0xa05f8054;
  puVar2 = 0xa05f80e8;
  puVar1 = 0xa05f8044;
  uVar6 = 0;
  piVar7 = 0xa05f8054 + -1;
  while ((*(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) != 5 &&
         (iVar5 = *(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4), iVar5 != -3))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return iVar5;
    }
  }
  *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) = 7;
  piVar4 = 0x8c4a9ee0;
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) != 0x20)) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9be0 != 1) {
      *piVar7 = ((le<undefined4>* )(unsigned)0x8c4a9ee0)[uVar6 & 1] + *(le<undefined4>* )(unsigned)0x8c4a9dc4;
      *piVar3 = piVar4[uVar6 & 1] + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
    }
  }
  else {
    *piVar7 = *(le<undefined4>* )(unsigned)0x8c4a9ee0 + *(le<undefined4>* )(unsigned)0x8c4a9dc4;
    *piVar3 = *(le<undefined4>* )(unsigned)0x8c4a9ee4 + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
  }
  if (*(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) == -3) {
    return 0xfffffffd;
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9e54 != 1) {
    return *(le<undefined4>* )(unsigned)0x8c4a9e54;
  }
  *puVar2 = *(le<undefined4>* )(unsigned)0x8c4a9eb0;
  puVar2 = 0x8c4a9e74;
  *puVar1 = *(le<undefined4>* )(unsigned)0x8c4a9e74;
  *(le<undefined4>* )(unsigned)0x8c4a9e54 = 0;
  return (int)puVar2;
}

__asm__(".globl pvr_206350\n.set pvr_206350, pvr_206350_def\n");

}
