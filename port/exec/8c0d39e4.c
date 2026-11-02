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
undefined4 s_GRAPHICS_ENV_0d39ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d39ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined4 a7;
  int iVar3;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4e8);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13f4ec);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f4f0);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c21279c(0,&(*(undefined4 *)(fr0_ - 0x1c)),ar4 + 0x5d8,ar7); });
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(uint *)(unsigned)(iVar3 * 0xc + -0x73bc8950) = *(uint *)(unsigned)(iVar3 * 0xc + -0x73bc8950) | 0x80000000;
  }
  a7 = 0x19;
  uVar2 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(0x8c4376a4,0x8c4376ac,0x8c4312a8,0x19));
  uVar1 = 0x8c4376a4;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 8))))((int *)(unsigned)(ar4 + 8),0x8c4376a4,uVar2,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 8,uVar1,uVar2,a7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,ar6,((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fab9),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(uint *)(unsigned)(iVar3 * 0xc + ar4 + 0x164) = *(uint *)(unsigned)(iVar3 * 0xc + ar4 + 0x164) | 0x80000000;
  }
  uVar2 = 0x3c;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(ar4 + 0x158,ar4 + 0x160,0x8c4312a8,0x3c));
  iVar3 = ar4 + 0x158;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x108) + 8))))((int *)(unsigned)(ar4 + 0x108),iVar3,uVar1,uVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 0x108,iVar3,uVar1,uVar2));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13faf0),((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fafa),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c13f164);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c015ad4(ar4 + 0x154,((undefined1 *)(unsigned)0x8c13f164),ar6_00,uVar1); });
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015bb8(ar4 + 0x1c,ar5_00,ar6_00,uVar1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0151fc(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar3 + 4) + 4),ar5_00,ar6_00,uVar1));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0d5de0(ar4,ar5_00,ar6_00,uVar1));
  return 1;
}

__asm__(".globl _s_GRAPHICS_ENV_0d39ea\n.set _s_GRAPHICS_ENV_0d39ea, _s_GRAPHICS_ENV_0d39ea_def\n");
