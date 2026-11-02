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
int s_CAnimal_ChangeBodyTexture_02af96_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_ChangeBodyTexture_02af96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x144 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3ba,
                       (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3c8,0,2));
  }
  else {
    *(int *)(unsigned)(0x42c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(int *)(unsigned)(0x430 + ar4) = iVar1 + ar5 * 8 + 0x88;
    iVar2 = 0x478;
    *(int *)(unsigned)(0x478 + ar4) = ar5;
  }
  return iVar2;
}

__asm__(".globl _s_CAnimal_ChangeBodyTexture_02af96\n.set _s_CAnimal_ChangeBodyTexture_02af96, _s_CAnimal_ChangeBodyTexture_02af96_def\n");
