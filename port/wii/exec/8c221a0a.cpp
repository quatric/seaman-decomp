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
undefined4 FUN_8c221a0a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c221a0a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint unaff_r11 = 0;
  int a6;
  le<uint>* unaff_r14 = 0;
  uint uVar3;
  
  puVar2 = ((void *)(unsigned)0x8c21279c);
  puVar1 = ((void *)(unsigned)0x8c212740);
  uVar3 = *unaff_r14;
  a6 = 0x8c4c0ee0;
  while( true ) {
    if ((uVar3 & unaff_r11) != 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,ar4,a6,ar7));
      }
      else {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,ar4,a6,ar7));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) break;
    ar4 = ar4 + 0xc;
    uVar3 = uVar3 >> 3;
    a6 = a6 + 0x20;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c221a0a\n.set FUN_8c221a0a, FUN_8c221a0a_def\n");

}
