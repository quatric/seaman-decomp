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
undefined4 FUN_8c01a630_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a630");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  le<int>* ar5_00;
  bool bVar3;
  
  ar5_00 = (le<int>* )(unsigned)(uint)ar4[9];
  uVar1 = 0x600;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4 + 0xb,ar5_00,0x600,ar7));
  bVar3 = ar4[8] == 1;
  if (bVar3) {
    ar4[8] = 0;
  }
  if (0 < ar4[7]) {
    ar4[7] = ar4[7] + -1;
    if (ar4[7] < 1) {
      if (ar4[6] == 0) {
        bVar3 = true;
      }
    }
    else {
      ar5_00 = (le<int>* )(unsigned)(uint)ar4[10];
      uVar1 = 0x600;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4 + 0xb,ar5_00,0x600,ar7));
      bVar3 = true;
    }
  }
  if (0 < ar4[6]) {
    if ((ar4[6] == 0x1e) || (bVar3)) {
      ar5_00 = (le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12f900));
      uVar1 = 0x210;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove((int)ar4 + 0x41c,(&(*(undefined1 *)(unsigned)0x8c12f900)),0x210,ar7));
      bVar3 = true;
    }
    ar4[6] = ar4[6] + -1;
    if (ar4[6] < 1) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    ar5_00 = ar4 + 0xb;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c8c8(ar4,ar5_00,uVar1,ar7));
  }
  if (*ar4 < 0) {
    uVar1 = *(le<undefined4>* )(unsigned)0x8c2791b0;
  }
  else {
    iVar2 = *(le<int>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28);
    if (iVar2 == 2) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a760(ar4,ar5_00,uVar1,ar7));
    }
    else if (iVar2 == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a900(ar4,ar5_00,uVar1,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a98c(ar4,ar5_00,uVar1,ar7));
    }
    uVar1 = *(le<undefined4>* )(unsigned)0x8c2791b0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c01a630\n.set FUN_8c01a630, FUN_8c01a630_def\n");

}
