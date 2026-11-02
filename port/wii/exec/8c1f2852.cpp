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
undefined4 FUN_8c1f2852_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f2852");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  code *pcVar3;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  piVar1 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f302a(*(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x14),0,0,0));
  if (piVar1 == (le<int>* )(unsigned)0x0) {
    return 0xfffffff3;
  }
  if ((*(le<short>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x3a) != 0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c470fb0) != (*(le<undefined4>* )(unsigned)(unsigned)0x8c470fb4))) {
    *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x3a) = 0;
  }
  if ((*(le<short>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x3a) == 0) || (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x2c) < 0x10001)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x34))))(ar4,a5,a6,a7));
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(le<undefined2>* )(unsigned)(piVar1 + 0x14) = 4;
    *(le<undefined2>* )(unsigned)(piVar1 + 0x12) = 6;
  }
  else {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c470fa0) == 1) {
      pcVar3 = ((code *)(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x28));
    }
    else {
      pcVar3 = ((code *)(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x2c));
    }
    ar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c470fa4);
    a5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c470fa8);
    a6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c470fac);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)pcVar3))((*(le<undefined4>* )(unsigned)(unsigned)0x8c470fa4),(*(le<undefined4>* )(unsigned)(unsigned)0x8c470fa8),(*(le<undefined4>* )(unsigned)(unsigned)0x8c470fac),a7));
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(le<undefined2>* )(unsigned)(piVar1 + 0x14) = 4;
    piVar1[1] = (int)((undefined1 *)(unsigned)0x8c470fb0);
    *(le<undefined2>* )(unsigned)(piVar1 + 0x12) = 8;
  }
  *(le<unsigned>* )(unsigned)(*piVar1 + 0x1c) = piVar1;
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x40))))(ar4,a5,a6,a7));
LAB_8c1f2948:
  if (iVar2 == 0) {
    return 0xfffffff3;
  }
  return 0;
}

__asm__(".globl FUN_8c1f2852\n.set FUN_8c1f2852, FUN_8c1f2852_def\n");

}
