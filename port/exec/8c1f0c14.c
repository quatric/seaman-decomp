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
undefined4 FUN_8c1f0c14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0c14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined2 *ar5_00;
  
  if (*(short *)(unsigned)(ar4 + 2) == 0) {
    ar5_00 = (undefined2 *)(unsigned)(ar4 + 0x34);
    *ar5_00 = (short)*(undefined4 *)(unsigned)(ar4 + 0x28);
    uVar2 = 0x3c;
    func_0x8c1f0974(*(undefined4 *)(unsigned)(ar4 + 0x30),ar4 + 0x36,0x3c,ar7);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7));
    *(short *)(unsigned)(ar4 + 0x72) = (short)uVar2;
    iVar1 = (*(int *)(unsigned)(ar4 + 0x28) + 1) * 0x40;
    ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c1f0958(ar5_00,*(int *)(unsigned)(ar4 + 0xc) + iVar1,0x40,ar7); });
    if (*(int *)(unsigned)(ar4 + 0x10) < *(int *)(unsigned)(ar4 + 0x14)) {
      iVar1 = (*(int *)(unsigned)(ar4 + 0x14) + 1) * 0x40;
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f09d4(*(int *)(unsigned)(ar4 + 0x10) + 1,*(int *)(unsigned)(ar4 + 0xc) + iVar1,*(undefined4 *)(unsigned)(ar4 + 0x18),
                   ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), syscall_1f98d8(*(int *)(unsigned)(ar4 + 4) + iVar1,*(int *)(unsigned)(ar4 + 0xc) + iVar1,
                             *(int *)(unsigned)(ar4 + 0x18) << 6,ar7));
      if (iVar1 == *(int *)(unsigned)(ar4 + 0x18) << 6) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x10);
        *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + 1;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), syscall_1f98d8(*(int *)(unsigned)(ar4 + 4) + (iVar1 + 1) * 0x40,ar5_00,0x40,ar7));
        if (iVar1 == 0x40) {
          return 0;
        }
      }
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0c14\n.set _FUN_8c1f0c14, _FUN_8c1f0c14_def\n");
