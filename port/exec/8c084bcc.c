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
undefined4 FUN_8c084bcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c084bcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  (*(undefined4 *)(fr0_ - 0x128)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e48)),ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e00;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x128)),((void *)(unsigned)0x8c022cb0),0x8c280e00,ar7));
  (*(undefined4 *)(fr0_ - 0x12c)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e58)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e0c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x12c)),((void *)(unsigned)0x8c022cb0),0x8c280e0c,ar7));
  (*(undefined4 *)(fr0_ - 0x130)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e68)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e18;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x130)),((void *)(unsigned)0x8c022cb0),0x8c280e18,ar7));
  (*(undefined4 *)(fr0_ - 0x134)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e78)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e24;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x134)),((void *)(unsigned)0x8c022cb0),0x8c280e24,ar7));
  (*(undefined4 *)(fr0_ - 0x138)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e88)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e30;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x138)),((void *)(unsigned)0x8c022cb0),0x8c280e30,ar7));
  (*(undefined4 *)(fr0_ - 0x13c)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125e98)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e3c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x13c)),((void *)(unsigned)0x8c022cb0),0x8c280e3c,ar7));
  (*(undefined4 *)(fr0_ - 0x140)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ea8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e48;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x140)),((void *)(unsigned)0x8c022cb0),0x8c280e48,ar7));
  (*(undefined4 *)(fr0_ - 0x144)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125eb8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e54;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x144)),((void *)(unsigned)0x8c022cb0),0x8c280e54,ar7));
  (*(undefined4 *)(fr0_ - 0x148)) = (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ec8)),puVar2,uVar1,ar7));
  puVar2 = ((void *)(unsigned)0x8c022cb0);
  uVar1 = 0x8c280e60;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x148)),((void *)(unsigned)0x8c022cb0),0x8c280e60,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,puVar2,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x14c)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125ed8)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,uVar1,ar7));
  uVar1 = 0x8c280e6c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x14c)),((void *)(unsigned)0x8c022cb0),0x8c280e6c,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x16c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x150)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125ed8)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,uVar1,ar7));
  uVar1 = 0x8c280e78;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x150)),((void *)(unsigned)0x8c022cb0),0x8c280e78,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x15c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x154)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f10)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,uVar1,ar7));
  uVar1 = 0x8c280e84;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x154)),((void *)(unsigned)0x8c022cb0),0x8c280e84,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x14c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x158)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f10)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,uVar1,ar7));
  uVar1 = 0x8c280e90;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x158)),((void *)(unsigned)0x8c022cb0),0x8c280e90,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x13c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x15c)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f30)),(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,uVar1,ar7));
  uVar1 = 0x8c280e9c;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x15c)),((void *)(unsigned)0x8c022cb0),0x8c280e9c,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x12c,0xffffffff,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_xyz((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x160)) = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022c88))))
                         ((&(*(undefined1 *)(unsigned)0x8c125f30)) + 0x10,(int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,uVar1,ar7));
  uVar1 = 0x8c280ea8;
  (vsp = ((unsigned long)(fr0_ - 388)), global_list_push((*(undefined4 *)(fr0_ - 0x160)),((void *)(unsigned)0x8c022cb0),0x8c280ea8,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x11c,0xffffffff,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x104,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x164)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xec,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x168)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x18,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xd4,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x16c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x30,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xbc,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x170)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x48,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0xa4,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x174)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x60,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0x180)) + 0x8c,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x178)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x78,uVar3,uVar1,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x10c)),uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x17c)) = uVar3;
  (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0x90,uVar3,uVar1,ar7));
  (*(undefined4 *)(fr0_ - 0x180)) = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x124)),uVar3,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c05d608(0x8c280eb4 + 0xa8,(*(undefined4 *)(fr0_ - 0x180)),uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c084bcc\n.set _FUN_8c084bcc, _FUN_8c084bcc_def\n");
