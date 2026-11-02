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
int FUN_8c101004_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c101004");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(le<int>* )(unsigned)(0x88 + ar4) != -1) {
      ar5 = *(le<undefined4>* )(unsigned)(0x88 + ar4);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021f18(0x8c2b59d0,ar5,ar6,ar7));
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(le<undefined4>* )(unsigned)(0x88 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ecf8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ef68(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1017f4(ar4,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(0xb8 + ar4) = 1;
      *(le<int>* )(unsigned)(0xc4 + ar4) = *(le<int>* )(unsigned)(0xc4 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
LAB_8c1010c2:
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1019f8(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(0xb0 + ar4) == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101a4c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar2 = (int)*(char *)(unsigned)(ar4 + 0x28);
    if (iVar2 == 4) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101a4c(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101da0(ar4,ar5,ar6,ar7));
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c101004\n.set FUN_8c101004, FUN_8c101004_def\n");

}
