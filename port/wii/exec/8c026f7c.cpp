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
int FUN_8c026f7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c026f7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* puVar2;
  int iVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  puVar2 = (le<undefined4>* )(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015510))))
                     (*(le<int>* )(unsigned)((short)uVar1 * 0x124 + *(le<int>* )(unsigned)(0x328 + ar4)) +
                      0x1e4,ar5,ar6,ar7));
  *puVar2 = *(le<undefined4>* )(unsigned)
             (*(le<int>* )(unsigned)((short)uVar1 * 0x124 + *(le<int>* )(unsigned)(0x328 + ar4)) + 0x40);
  iVar3 = *(le<int>* )(unsigned)(0x344 + ar4);
  *(le<unsigned>* )(unsigned)(iVar3 + 4) = puVar2;
  return iVar3;
}

__asm__(".globl FUN_8c026f7c\n.set FUN_8c026f7c, FUN_8c026f7c_def\n");

}
