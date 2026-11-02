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
undefined4 s_GRAPHICS_ENV_0ca230_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0ca230");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  ar5_00 = ar5;
  if (*(le<int>* )(unsigned)(0x2d1b8 + ar4) != -1) {
    ar5_00 = *(le<undefined4>* )(unsigned)(0x2d1b8 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(0x8c437028,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,
             (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be,ar4));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,ar6_00,ar4))
  ;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c9738(ar4,ar5,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl s_GRAPHICS_ENV_0ca230\n.set s_GRAPHICS_ENV_0ca230, s_GRAPHICS_ENV_0ca230_def\n");

}
