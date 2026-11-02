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
undefined4 FUN_8c0b7628_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7628");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01b5f8(ar4_00,ar4,ar5,ar6));
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,ar6_00,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b7b0))))
                        (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar5,ar6));
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b7628\n.set FUN_8c0b7628, FUN_8c0b7628_def\n");

}
