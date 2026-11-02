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
int FUN_8c113bcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113bcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  
  iVar1 = (int)0xfc;
  puVar2 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = *puVar2;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = puVar2[2];
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = puVar2[3];
  *(le<undefined4>* )(unsigned)(ar4 + 0xc0) = puVar2[4];
  *(le<undefined4>* )(unsigned)(0x1c0 + ar4) = puVar2[5];
  iVar1 = (int)0x98;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[6];
  *(le<undefined4>* )(unsigned)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)0x148;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[8];
  *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)0xa8;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[10];
  *(le<undefined4>* )(unsigned)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(le<undefined4>* )(unsigned)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(le<undefined4>* )(unsigned)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(le<int>* )(unsigned)(iVar1 + -4 + ar4) =
       (*(le<int>* )(unsigned)(ar4 + 0x38) + *(le<int>* )(unsigned)(iVar1 + 0x10 + ar4) + 1) * 4 + *(le<int>* )(unsigned)(iVar1 + -8 + ar4);
  *(le<undefined4>* )(unsigned)(iVar1 + 0x60 + ar4) = *(le<undefined4>* )(unsigned)(ar4 + 0x38);
  return iVar1 + 0x60;
}

__asm__(".globl FUN_8c113bcc\n.set FUN_8c113bcc, FUN_8c113bcc_def\n");

}
