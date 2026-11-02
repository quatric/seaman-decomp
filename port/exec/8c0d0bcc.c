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
undefined4 s_GRAPHICS_ENV_0d0bd2_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d0bd2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *ar7_00;
  int iVar1;
  undefined **ar5_00;
  char *ar5_01;
  char *ar6_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 2,((undefined1 *)(unsigned)0x8c13d9d8),ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13d570);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 8))))(ar4,&(*(undefined4 *)(unsigned)(unsigned)0x8c13d570),ar6,ar7));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c13d47d);
  ar5_01 = ((undefined1 *)(unsigned)0x8c13d528);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d528),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    ar7_00 = (int *)(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x1;
    ar5_01 = ((undefined1 *)(unsigned)0x8c13d4fb);
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13d532),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  for (uVar2 = 0; uVar2 < 0x15e; uVar2 = uVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014cd4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00));
    ar5_01 = (char *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0d0c(ar4 + uVar2 * 0x2b + 3,1,ar6_00,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0ab4(ar4 + uVar2 * 0x2b + 3,ar5_01,ar6_00,ar7_00); });
  }
  return 0x15e;
}

__asm__(".globl _s_GRAPHICS_ENV_0d0bd2\n.set _s_GRAPHICS_ENV_0d0bd2, _s_GRAPHICS_ENV_0d0bd2_def\n");
