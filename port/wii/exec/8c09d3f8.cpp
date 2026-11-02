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
undefined4 Class_12a990_m8_09d3f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a990_m8_09d3f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m8_0f511c(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x524 + ar4 + iVar1 * 4) != 0) {
      ar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_74_09d474(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09d46c(*(le<undefined4>* )(unsigned)(0x524 + ar4 + iVar1 * 4),ar5,ar6,ar7));
    }
  }
  return 8;
}

__asm__(".globl Class_12a990_m8_09d3f8\n.set Class_12a990_m8_09d3f8, Class_12a990_m8_09d3f8_def\n");

}
