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
undefined1 *
s_CAnimal_SetPVMTexture_s_029404_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_SetPVMTexture_s_029404";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  if (*(int *)(unsigned)(ar5 + 0x10) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x36f); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x10c)),ar5,ar6,ar7); });
    ar7 = 2;
    ar6 = 0;
    ar5_00 = ((undefined1 *)(fr0_ - 0x10c));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x38b,ar5_00,0,2));
  }
  if (*(int *)(unsigned)(ar5 + 4) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x36f); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x10c)),ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3a6,((undefined1 *)(fr0_ - 0x10c)),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c239170))))
            (ar5 + 8,*(undefined4 *)(unsigned)(ar5 + 0x10),0x8c4312a8,*(undefined4 *)(unsigned)(ar5 + 4)));
  return ar5 + 8;
}

__asm__(".globl _s_CAnimal_SetPVMTexture_s_029404\n.set _s_CAnimal_SetPVMTexture_s_029404, _s_CAnimal_SetPVMTexture_s_029404_def\n");
