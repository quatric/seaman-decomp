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
undefined4 FUN_8c10ac3c_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ac3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  int iVar2;
  int unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x50) = 1;
    return 1;
  }
  if (in_r0 == 3) {
    if (ar6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a410(unaff_r14,*ar7 + ar6,ar6,ar7));
    }
    iVar2 = *ar7 + (*(int *)(unsigned)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  else {
    if (in_r0 != 4) {
      if (in_r0 == 0xf8) {
        *ar7 = *(int *)(unsigned)(unaff_r14 + 0x38);
        return 1;
      }
      if (in_r0 == 0xff) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10abf4(unaff_r14,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
        return 1;
      }
      return 0;
    }
    if (ar6 == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a308(unaff_r14,ar5,0,ar7));
      if ((uVar1 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a4bc(unaff_r14,*ar7 + ar6,ar6,ar7));
    iVar2 = *ar7 + (*(int *)(unsigned)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  *ar7 = iVar2;
  return 1;
}

__asm__(".globl _FUN_8c10ac3c\n.set _FUN_8c10ac3c, _FUN_8c10ac3c_def\n");
