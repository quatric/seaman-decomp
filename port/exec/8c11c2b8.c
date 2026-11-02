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
undefined4 FUN_8c11c2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr1_00 = 0;
  undefined4 extraout_fr1_01 = 0;
  undefined4 extraout_fr1_02 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  int extraout_fr0_02 = 0;
  int extraout_fr0_03 = 0;
  int extraout_fr0_04 = 0;
  int extraout_fr0_05 = 0;
  int a5;
  char cVar7;
  
  iVar5 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,8,ar6,ar7));
  uVar6 = (int)extraout_fr0 & 0xffff;
  unaff_r14[0x15] = uVar6;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = 4;
  uVar1 = (undefined2)(uVar6 << 2);
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(unaff_r14[4] + 4) + 0xc) = uVar1;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(unaff_r14[4] + 8) + 0xc) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  cVar7 = '\0';
  *(short *)(unsigned)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_00);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,4,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_01);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,7,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_02);
  }
  uVar4 = 4;
  a5 = uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x13) + 6);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x14))))(iVar5,a5,4,ar7));
  unaff_r14[0xf] = iVar5;
  unaff_r14[0x11] = iVar5;
  iVar3 = uVar6 * 4;
  iVar5 = uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar5;
  unaff_r14[0xb] = iVar5;
  iVar2 = iVar5 + iVar3 + iVar3;
  unaff_r14[0xc] = iVar5 + iVar3;
  iVar5 = iVar2 + iVar3;
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] = iVar5;
  unaff_r14[0x14] = iVar3 + iVar5;
  if (unaff_r14[0xf] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb94(unaff_r14,a5,uVar4,ar7));
    return 0;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,0x66,uVar4,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c11c2b8\n.set _FUN_8c11c2b8, _FUN_8c11c2b8_def\n");
