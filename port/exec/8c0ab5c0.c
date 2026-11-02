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
undefined4 FUN_8c0ab5c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ab5c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126238)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285840;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285840,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126248)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28584c;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c28584c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126258)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c285858;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c285858,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126268)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c285864,ar7));
  uVar2 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (0x8c28587c,((void *)(unsigned)0x8c015b94),((void *)(unsigned)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(0,((void *)(unsigned)0x8c0ab73c),0x8c285870,uVar2));
  ar7_00 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (0x8c2858ac,((void *)(unsigned)0x8c015bc8),((void *)(unsigned)0x8c03a3dc),4); });
  puVar3 = ((void *)(unsigned)0x8c0ab718);
  uVar2 = 0x8c2858a0;
  (vsp = ((unsigned long)(fr0_ - 28)), global_list_push(0,((void *)(unsigned)0x8c0ab718),0x8c2858a0,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),puVar3,uVar2,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c05d608(0x8c2858d0,uVar1,uVar2,ar7_00));
  return uVar2;
}

__asm__(".globl _FUN_8c0ab5c0\n.set _FUN_8c0ab5c0, _FUN_8c0ab5c0_def\n");
