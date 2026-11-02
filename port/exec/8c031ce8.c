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
undefined4 FUN_8c031ce8_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031ce8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *ar6_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,ar5,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr0;
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar1 = uVar2;
  if (cVar3 == '\0') {
    uVar1 = ((undefined4 *)(fr0_ - 0x34))[0];
    (*(undefined4 *)(fr0_ - 0x24)) = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x20));
  }
  (*(undefined4 *)(fr0_ - 0x20)) = uVar2;
  ((undefined4 *)(fr0_ - 0x34))[0] = uVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,ar5,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
    uVar1 = (*(undefined4 *)(fr0_ - 0x18));
  }
  (*(undefined4 *)(fr0_ - 0x18)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_xyz(((undefined4 *)(fr0_ - 0x34)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,((undefined4 *)(fr0_ - 0x34)),ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined4 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,uVar1,ar6_00,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  if (cVar3 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x24)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return 0;
}

__asm__(".globl _FUN_8c031ce8\n.set _FUN_8c031ce8, _FUN_8c031ce8_def\n");
