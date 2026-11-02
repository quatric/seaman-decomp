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
undefined4 FUN_8c0abe84_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0abe84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13b2ec) + *(int *)(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac068(ar4,ar5,ar6,ar7));
    ar5_00 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7));
  }
  else if (iVar1 == 1) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
  }
  else if (iVar1 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6_00,ar7));
    if ((iVar2 == 1) && (*(int *)(unsigned)(ar4 + 0x88) == 1)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),iVar2 + -1,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    iVar2 = *ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5_00,ar6_00,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0abe84\n.set _FUN_8c0abe84, _FUN_8c0abe84_def\n");
