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
int FUN_8c266c54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266c54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r2 = 0;
  int *in_r3 = 0;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *unaff_r13 = 0;
  int ar5_00;
  undefined4 in_PR = 0;
  
  iVar1 = *in_r3;
  ar5_00 = 0;
  if (*(int *)(unsigned)(ain0 + iVar1) < in_r2) {
    iVar2 = *(int *)(unsigned)(ain0 + iVar1);
    *(int *)(unsigned)(ain0 + iVar1) = iVar2 + 1;
    puVar3 = (undefined1 *)(unsigned)(iVar2 * 0x10 + *(int *)(unsigned)(ain0 + -4 + iVar1));
    *puVar3 = (char)*unaff_r13;
    ar6 = 0xe;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar3 + 2,unaff_r13 + 1,0xe,ar7));
    unaff_r13[5] = 0;
    *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x16c) = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x16c) + -1;
  }
  else {
    ar5_00 = 0xa000001;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c266c48),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266c54\n.set _FUN_8c266c54, _FUN_8c266c54_def\n");
