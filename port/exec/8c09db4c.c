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
undefined4 Class_12ab2c_m2_09db4c_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12ab2c_m2_09db4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  int *a7;
  float extraout_fr1 = 0;
  float fVar2;
  float extraout_fr1_00 = 0;
  char cVar3;
  
  cVar3 = '\0';
  a7 = ar7;
  (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x198))))(ar7,ar5,ar6,a7));
  if ((((*(byte *)(fr0_ - 0x10)) & 3) >> 1) - ((int)((uint)(*(byte *)(fr0_ - 0x10)) << 0x1f) >> 0x1f) == 2) {
    if (0 < *(int *)(unsigned)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09edf0(ar4,ar5,ar6,a7));
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7));
    if ((iVar1 == 2) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), get_field_124_027930(ar4 + 0xcc4,ar5,ar6,a7)), iVar1 == 9)) {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09ea78(ar4,ar5,ar6,a7));
    }
    else if (0 < *(int *)(unsigned)(ar4 + 0xfd0)) {
      fVar2 = extraout_fr1_00;
      if (cVar3 == '\0') {
        fVar2 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
      }
      if (fVar2 != 0.0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c09edf0(ar4,ar5,ar6,a7));
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12ab2c_m2_09db4c\n.set _Class_12ab2c_m2_09db4c, _Class_12ab2c_m2_09db4c_def\n");
