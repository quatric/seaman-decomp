#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12bec0_m3_0f5d1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12bec0_m3_0f5d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x28))))(ar4,ar7,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(ar4,ar7,ar6,ar7_00));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_70_05f490(ar4,ar7,ar6,ar7_00));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(ar4,ar7,ar6,ar7_00));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5368(ar4,ar7,ar6,ar7_00));
  return 1;
}

__asm__(".globl _Class_12bec0_m3_0f5d1c\n.set _Class_12bec0_m3_0f5d1c, _Class_12bec0_m3_0f5d1c_def\n");
