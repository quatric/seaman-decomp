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
undefined4 FUN_8c0bf22c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf22c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *a4;
  undefined4 uVar1;
  undefined4 ar6_00;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0bf160(*(undefined4 *)(unsigned)(0x7d8 + ar5),iVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1b0 + *a4))))(a4,0,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
            (0x8c2b59d0,*(undefined4 *)(unsigned)(0x144 + ar4),ar6,ar7));
  uVar1 = *(undefined4 *)(unsigned)(0x148 + ar4);
  (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fa2b8(0x8c35468c,uVar1,ar6,ar7));
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,uVar1,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x154 + ar4) = 0xffffff;
  ar6_00 = 0;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c3e78(0x8c2b5628,0xffffffff,0,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), s_Failed_s_015312(ar4 + 0x48,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(0x14c + ar4) = 4;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x12;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0ba5bc(ar4 + 0x158,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(0x7dc + ar5) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0bf22c\n.set _FUN_8c0bf22c, _FUN_8c0bf22c_def\n");
