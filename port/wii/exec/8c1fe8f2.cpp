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
int FUN_8c1fe8f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fe8f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = (undefined2)ar5;
  uVar3 = (undefined1)ar6;
  if (ar4 == 0) {
    return (int)(int)0xffffff00;
  }
  if (*(char *)(unsigned)(0x8c4783e2 + *(le<int>* )(unsigned)(ar4 + 0x28) * (int)0x148) != '\0') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
      if ((iVar2 != 0) &&
         (*(char *)(unsigned)(0x8c4783e8 + *(le<int>* )(unsigned)(ar4 + 0x28) * (int)0x148) != '\0')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        *(le<undefined2>* )(unsigned)(ar4 + 2) = uVar1;
        *(undefined1 *)(unsigned)(ar4 + 1) = uVar3;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1fe8f2\n.set FUN_8c1fe8f2, FUN_8c1fe8f2_def\n");

}
