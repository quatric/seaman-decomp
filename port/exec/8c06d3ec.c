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
int s_GRAPHICS_HERBLINE_06d3ee_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_HERBLINE_06d3ee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(unsigned)(0x224 + ar4) + ar6 * 0x124;
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(iVar2 + 0x78,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar5,*(undefined4 *)(unsigned)(iVar2 + 0x14),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar7_00));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      (*(undefined4 *)(unsigned)(iVar2 + 0x14),(&(*(undefined1 *)(unsigned)0x8c1371e0)) + 0x334,0
                       ,2));
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06d3ee\n.set _s_GRAPHICS_HERBLINE_06d3ee, _s_GRAPHICS_HERBLINE_06d3ee_def\n");
