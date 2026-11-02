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
undefined4 FUN_8c1f7f9c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f7f9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar4 != (le<int>* )(unsigned)0x0) {
    *ar4 = 0;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c273a18) != 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f97b4(0,(*(le<undefined4>* )(unsigned)(unsigned)0x8c273a18),ar6,ar7)), iVar1 != -1)) {
      iVar1 = (int)(*(undefined1 *)(unsigned)0x8c00007d);
      if ((*(undefined1 *)(unsigned)0x8c00007d) == -1) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f7ffa(((le<int>* )(fr0_ - 0xc)),iVar1,ar6,ar7));
        if (((le<int>* )(fr0_ - 0xc))[0] == -1) {
          *ar4 = 1;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f7f96(((le<int>* )(fr0_ - 0xc))[0],iVar1,ar6,ar7));
          *ar4 = iVar1;
        }
      }
      else {
        *ar4 = (int)(*(undefined1 *)(unsigned)0x8c00007d);
      }
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c1f7f9c\n.set FUN_8c1f7f9c, FUN_8c1f7f9c_def\n");

}
