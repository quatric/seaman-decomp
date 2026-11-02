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
int FUN_8c25a918_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a918";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 *ar4_00;
  undefined4 ar5_00;
  undefined4 *unaff_r14 = 0;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c25a962(ar5,ar5,ar6,ar7));
  if (iVar2 < 0) {
    return iVar2;
  }
  ar5_00 = *unaff_r14;
  ar4_00 = unaff_r14 + 1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c25ab74(ar4_00,ar5_00,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c20a7e0);
  if (iVar2 == 0) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
    } while (iVar2 != 0);
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c20cf88(unaff_r14 + 1,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)0x8c4aa6b4 = 8;
  return 0xfffffff8;
}

__asm__(".globl _FUN_8c25a918\n.set _FUN_8c25a918, _FUN_8c25a918_def\n");
