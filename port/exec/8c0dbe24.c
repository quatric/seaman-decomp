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
undefined4 FUN_8c0dbe24_def(int ar4,undefined4 ar5,undefined8 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0dbe24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 uVar3;
  undefined8 *ar6_00;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_dr0 = 0;
  undefined4 uVar6;
  undefined8 in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 200)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  uVar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_zero(&(*(undefined8 *)(fr0_ - 0x34)),uVar3,ar6_00,ar7));
  uVar6 = 0;
  (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0191e4(((undefined1 *)(fr0_ - 0xb4)),uVar3,ar6_00,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 200)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    uVar4 = 0;
  }
  else {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6_00,ar7));
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c0dbf88(ar4_00,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0xc4)),uVar3,ar6_00,ar7));
      ar7 = (int)&(*(undefined8 *)(fr0_ - 0x34)) + 4;
      ar6_00 = &(*(undefined8 *)(fr0_ - 0x34));
      (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c019508(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7));
      uVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c022fc0(&(*(undefined8 *)(fr0_ - 0x34)),ar5,ar6_00,ar7));
      uVar1 = in_dr0;
      if (cVar8 == '\0') {
        uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
        in_dr0 = CONCAT44(uVar6,*(undefined4 *)(unsigned)ar6);
        uVar1 = in_xd14;
      }
      in_xd14 = uVar1;
      if (cVar7 == '\0' && F32HI(in_dr0) < (float)in_dr0) {
        uVar4 = ar4_00;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)ar6 = uVar6;
        }
        else {
          *ar6 = in_xd14;
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 200)), list_node_next(ar4_00,uVar3,ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 200)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined8 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0dbe24\n.set _FUN_8c0dbe24, _FUN_8c0dbe24_def\n");
