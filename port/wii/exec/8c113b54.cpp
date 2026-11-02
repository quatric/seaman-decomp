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
int FUN_8c113b54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113b54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<undefined4>* puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  *puVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x38);
  puVar3[1] = *(le<undefined4>* )(unsigned)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(le<undefined4>* )(unsigned)(ar4 + 0x44);
  puVar3[3] = *(le<undefined4>* )(unsigned)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(le<undefined4>* )(unsigned)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(le<undefined4>* )(unsigned)(iVar1 + ar4);
  puVar3[6] = *(le<undefined4>* )(unsigned)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(le<undefined4>* )(unsigned)(iVar2 + 4 + ar4);
  puVar3[8] = *(le<undefined4>* )(unsigned)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(le<undefined4>* )(unsigned)(iVar2 + ar4);
  puVar3[0xb] = *(le<undefined4>* )(unsigned)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(le<undefined4>* )(unsigned)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(le<undefined4>* )(unsigned)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(le<undefined4>* )(unsigned)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl FUN_8c113b54\n.set FUN_8c113b54, FUN_8c113b54_def\n");

}
