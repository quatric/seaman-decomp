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
undefined4 s_GRAPHICS_ENV_0ca0e6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0ca0e6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined *ar5_00;
  undefined4 ar5_01;
  undefined *ar6_00;
  
  iVar1 = ar5;
  if (*(int *)(unsigned)(0x2d1b8 + ar4) != -1) {
    iVar1 = *(int *)(unsigned)(0x2d1b8 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), pack_release_entry_handle(0x8c2b59d0,iVar1,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5330(ar4 + 0x2d1b0,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(0x8c437028,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,
             (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be,ar4));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be;
  ar5_00 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7;
  iVar1 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(0x8c3eb334,ar5_00,ar6_00,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb0 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8))))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6_00,iVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x40))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5_00,ar6_00,iVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x90 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8))))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0x8c3eb334,ar6_00,iVar1));
  ar5_01 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(*(undefined4 *)(unsigned)(0x7cc + ar5),0,ar6_00,iVar1));
  ar4_00 = *(undefined4 *)(unsigned)(0x7cc + ar5);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c90d0(ar4_00,ar5_01,ar6_00,iVar1));
  *(undefined2 *)(unsigned)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(unsigned)(0xa0 + ar5) = 2;
  *(undefined4 *)(unsigned)(0x2d160 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x2d15c + ar4) = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4_00,ar5_01,ar6_00,iVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e48(ar4_00,ar5_01,ar6_00,iVar1));
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0ca0e6\n.set _s_GRAPHICS_ENV_0ca0e6, _s_GRAPHICS_ENV_0ca0e6_def\n");
