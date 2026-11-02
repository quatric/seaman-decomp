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
int FUN_8c265ac8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265ac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int ar5_00;
  
  ar7_00 = 0;
  ar6_00 = ((undefined4 *)(unsigned)0x8c2784c0);
  ar5_00 = 0;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x17c) = ar4;
    iVar2 = 0;
    *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x180) = ar5;
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x184) = 0;
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x188) = 0;
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x18c) = 0;
    in_r0 = 400;
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 400) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd408) = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x17c;
    iVar1 = 0;
    if (0 < ar5) {
      do {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,*(int *)(unsigned)(*ar6_00 + 0x17c) + iVar1,((undefined1 *)(unsigned)0x8c2784f8),vr7));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c265ac8),ar5_00,ar6_00,ar7_00); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ac8\n.set _FUN_8c265ac8, _FUN_8c265ac8_def\n");
