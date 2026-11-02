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
int s_GRAPHICS_SQUIDLINE_0ae54a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ae54a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0209fc))))
                    (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar6));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3bc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020af4))))
                    (ar4,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3dc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3fe,
                     *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),*ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x406,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ae54a\n.set _s_GRAPHICS_SQUIDLINE_0ae54a, _s_GRAPHICS_SQUIDLINE_0ae54a_def\n");
