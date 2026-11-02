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
int FUN_8c1fef5a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fef5a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 308; for (int i_ = 0; i_ < 308; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  if (*(char *)(unsigned)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1fd550(ar4,ar5_00,ar6,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7));
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c200566(ar4,ar5,((undefined1 *)(fr0_ - 0x34)),ar7));
        if (-1 < iVar1) {
          return 0;
        }
        return (int)(int)0xffffff05;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1fef5a\n.set FUN_8c1fef5a, FUN_8c1fef5a_def\n");

}
