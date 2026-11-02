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
undefined4 FUN_8c23a1b0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c23a1b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0x54525650;
  do {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(le<int>* )(fr0_ - 0x20)),4,ar6,ar7));
    if ((*(le<int>* )(fr0_ - 0x20)) == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(le<int>* )(fr0_ - 0x18)),0xc,ar6,ar7));
      ar4[4] = (uint)(*(le<ushort>* )(fr0_ - 0x10));
      ar4[5] = (uint)(*(le<ushort>* )(fr0_ - 0xe));
      ar4[1] = (*(le<int>* )(fr0_ - 0x14)) << 0x10;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238e98(&(*(le<undefined4>* )(fr0_ - 0x1c)),4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c238eba((*(le<undefined4>* )(fr0_ - 0x1c)),1,ar6,ar7));
    }
    puVar1 = ((void *)(unsigned)0x8c238eba);
  } while ((*(le<int>* )(fr0_ - 0x20)) != iVar2);
  *ar4 = *(le<undefined4>* )(unsigned)0x8c4ab274;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))((*(le<int>* )(fr0_ - 0x18)) + -8,1,ar6,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c23a1b0\n.set FUN_8c23a1b0, FUN_8c23a1b0_def\n");

}
