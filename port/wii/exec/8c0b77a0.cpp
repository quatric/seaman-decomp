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
uint FUN_8c0b77a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b77a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ((le<int>* )(fr0_ - 0x8))[0] = 0;
  (*(le<int>* )(fr0_ - 0xc)) = 0;
  ar6_00 = 0x4208;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7454))))
            ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar4,((le<int>* )(fr0_ - 0x8)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(le<int>* )(fr0_ - 0xc)),ar6_00,ar7));
  return (uint)(((le<int>* )(fr0_ - 0x8))[0] == (*(le<int>* )(fr0_ - 0xc)));
}

__asm__(".globl FUN_8c0b77a0\n.set FUN_8c0b77a0, FUN_8c0b77a0_def\n");

}
