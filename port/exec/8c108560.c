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
int s_GRATIFIC_RID_HOT_108562_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRATIFIC_RID_HOT_108562";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bebc(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,7,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x39a); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,8,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3ab); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,0x1a,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3bd); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl _s_GRATIFIC_RID_HOT_108562\n.set _s_GRATIFIC_RID_HOT_108562, _s_GRATIFIC_RID_HOT_108562_def\n");
