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
int FUN_8c1f620e_def(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f620e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  uint *a5;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r8 = 0;
  undefined4 unaff_r9 = 0;
  int unaff_r10 = 0;
  int unaff_r13 = 0;
  int a4;
  int iVar4;
  
  do {
    a6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(unaff_r13,ar5,ar6,ar7));
    a5 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26(unaff_r13,ar5,ar6,ar7));
    iVar4 = unaff_r13 * 0x34;
    a4 = iVar4 + -0x73b8d83c;
    *(unsigned *)(unsigned)(iVar4 + -0x73b8d80c) = a5;
    *(undefined4 *)(unsigned)(iVar4 + -0x73b8d810) = *(undefined4 *)(unsigned)(iVar4 + -0x73b8d834);
    ar5 = a5;
    ar6 = a6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6192(a4,a5,a6,ar7));
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c472ca4) + unaff_r13 * 4) = uVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614(unaff_r13,unaff_r9,vr6,vr7));
    if (iVar2 == 0) {
      if ((((*a5 & 0x21) == 0) || (*(char *)(unsigned)(a6 + 2) != '\0')) || (*(char *)(unsigned)(a6 + 4) != '\b')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_no_device_1f5f4e(a4,ar5,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6142(a4,a5,ar6,ar7));
        ar6 = unaff_r13;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5f8c(a4,a6,unaff_r13,ar7));
      }
      *(uint *)(unsigned)(iVar4 + -0x73b8d830) = ~*(uint *)(unsigned)(iVar4 + -0x73b8d834);
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c472d04) == 0) {
        uVar3 = *(uint *)(unsigned)(iVar4 + -0x73b8d810) ^ *(uint *)(unsigned)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(unsigned)(*(uint *)(unsigned)(iVar4 + -0x73b8d834) & uVar3);
        *(unsigned *)(unsigned)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(unsigned)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(unsigned)(iVar4 + -0x73b8d810) ^ *(uint *)(unsigned)(iVar4 + -0x73b8d834) ^ unaff_r8;
        ar5 = (uint *)(unsigned)(*(uint *)(unsigned)(iVar4 + -0x73b8d834) | uVar3);
        *(unsigned *)(unsigned)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(unsigned)(iVar4 + -0x73b8d830);
      }
      *(uint *)(unsigned)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(unsigned *)(unsigned)(iVar4 + -0x73b8d818) = a5 + 5;
    }
    unaff_r13 = unaff_r13 + 1;
  } while (unaff_r13 < unaff_r10);
  return iVar2;
}

__asm__(".globl _FUN_8c1f620e\n.set _FUN_8c1f620e, _FUN_8c1f620e_def\n");
