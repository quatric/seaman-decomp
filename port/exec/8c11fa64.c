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
undefined4 FUN_8c11fa64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fa64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int a4;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  uint in_fr5 = 0;
  ulonglong uVar4;
  char cVar5;
  
  a4 = *unaff_r14;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = (undefined2)ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  unaff_r14[10] = (int)extraout_fr0 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[10] * 2 + 1,4,ar7));
  unaff_r14[0xb] = iVar1;
  uVar3 = 4;
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[10],4,ar7));
  unaff_r14[0xf] = iVar1;
  if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
    uVar2 = 0;
    if (cVar5 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0xd2084f2200000000;
    }
    if (unaff_r14[10] * 2 != -1) {
      do {
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        if (cVar5 == '\0') {
          *(int *)(unsigned)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)(unaff_r14[0xb] + iVar1) = uVar4;
        }
      } while (uVar2 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,2,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c11fa64\n.set _FUN_8c11fa64, _FUN_8c11fa64_def\n");
