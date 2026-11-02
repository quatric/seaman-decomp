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
uint FUN_8c11d9a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d9a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_r12 = 0;
  undefined4 *unaff_r13 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((unaff_r12 == (int *)(unsigned)0x0) || (unaff_r13 == (undefined4 *)(unsigned)0x0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7));
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xfc) + 0x14))))(0x38,ar4 + 0xf4,ar6,ar7));
      if (puVar3 == (undefined4 *)(unsigned)0x0) {
        *unaff_r12 = 0;
        *unaff_r13 = 0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(ar4 + 0xfc),2,ar6,ar7));
        return uVar4;
      }
      *unaff_r13 = 0x38;
      *unaff_r12 = (int)puVar3;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(*(undefined4 *)(unsigned)(ar4 + 0x78),100,vr6,vr7));
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(unsigned)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(unsigned)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(unsigned)(ar4 + 0x88);
      puVar3[2] = *(int *)(unsigned)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(unsigned)(ar4 + 0x94);
      puVar3[8] = *(int *)(unsigned)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(unsigned)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(unsigned)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(unsigned)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(unsigned)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(unsigned)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(unsigned)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11d9a0\n.set _FUN_8c11d9a0, _FUN_8c11d9a0_def\n");
