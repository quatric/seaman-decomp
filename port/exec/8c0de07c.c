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
undefined4 FUN_8c0de07c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0de07c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr0 = 0;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 36)), s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7));
  ar6_00 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 36)), s_GRAPHICS_COMMON_0d33f4(ar4 + 0x10ac,ar5,ar6_00,ar7));
  iVar1 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),iVar1,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0bf11c(ar4 + 0x13b70,iVar1,ar6_00,ar7); });
  if (cVar2 == '\0') {
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = extraout_fr0;
  }
  else {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44(extraout_fr0,extraout_fr1);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4e88(ar4 + 0x10ac,(undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),ar6_00,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor((undefined1 *)(unsigned)((int)register0x0000003c + -0x1c),0xffffffff,ar6_00,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) || (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    iVar1 = ar4 + 0x10ac;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4f3c(iVar1,ar5_00,ar6_00,ar7));
  }
  else {
    iVar1 = ar4 + 0x10ac;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d4f70(iVar1,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d5e2c(iVar1,ar5_00,ar6_00,ar7));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+0)) = (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c20a1d0(0x8c43786c,ar5_00,ar6_00,ar7));
  return (undefined4)(*(undefined8 *)(fr0_ - 0x20));
}

__asm__(".globl _FUN_8c0de07c\n.set _FUN_8c0de07c, _FUN_8c0de07c_def\n");
