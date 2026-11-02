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
undefined4 FUN_8c0e8280_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x30)) = ar4_00;
  (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0637d0(ar5,uVar2,ar6,ar7));
  if ((*(int *)(fr0_ - 0x34)) == 0) {
    (*(int *)(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c100898(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x38)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1004b4(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x3c)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1008e4(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x3c)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10052c(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x40)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c100930(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x40)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1005a4(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10097c(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x44)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10061c(ar5,uVar2,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1002a8(ar5,uVar2,ar6,ar7));
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c101210(ar5,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(&(*(undefined2 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); FUN_8c0e89c4(ar4,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7); });
    puVar1 = (undefined2 *)(unsigned)(ar4 + 0x224);
    *puVar1 = (*(undefined2 *)(fr0_ - 0x5c));
    puVar1[1] = (*(undefined2 *)(fr0_ - 0x5a));
    (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    if ((*(short *)(unsigned)(0x224 + ar4) != -1) && (*(short *)(unsigned)(0x226 + ar4) != -1)) {
      uVar2 = *(undefined4 *)(unsigned)0x8c431a58;
      (*(int *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01ad9c(ar4_00,uVar2,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x48)) == 4) {
        (*(int *)(fr0_ - 0x54)) = (int)*(short *)(unsigned)(0x226 + ar4);
        (*(int *)(fr0_ - 0x58)) = (int)*(short *)(unsigned)(0x224 + ar4);
        if ((*(int *)(unsigned)(0xa4 + ar4 + (*(int *)(fr0_ - 0x54)) * 0x80 + (*(int *)(fr0_ - 0x58)) * 0x20) != 0) &&
           ((*(int *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10031c(ar5,uVar2,ar6_00,ar7)), (*(int *)(fr0_ - 0x4c)) == 1)) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c51c4(ar5,uVar2,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e84c8(((undefined1 *)(fr0_ - 0x60)),ar4 + 0x224,ar6_00,ar7));
          (*(undefined4 *)(fr0_ - 0x50)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e81f0(ar4,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e59c0(ar5,(*(undefined4 *)(fr0_ - 0x50)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_016660(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7));
          uVar2 = 3;
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e4330(ar5,3,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c90d0(ar5,uVar2,ar6_00,ar7));
        }
      }
    }
    (*(undefined4 *)(fr0_ - 0x2c)) = 1;
    (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x28)) = 1;
    (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return (*(undefined4 *)(fr0_ - 0x28));
}

__asm__(".globl _FUN_8c0e8280\n.set _FUN_8c0e8280, _FUN_8c0e8280_def\n");
