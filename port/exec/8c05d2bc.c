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
undefined4 FUN_8c05d2bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05d2bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 192; for (int i_ = 0; i_ < 192; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  (*(undefined4 *)(fr0_ - 0x80)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d28)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280330;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x80)),((void *)(unsigned)0x8c022cb0),0x8c280330,ar7));
  (*(undefined4 *)(fr0_ - 0x84)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d38)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28033c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x84)),((void *)(unsigned)0x8c022cb0),0x8c28033c,ar7));
  (*(undefined4 *)(fr0_ - 0x88)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d48)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280348;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x88)),((void *)(unsigned)0x8c022cb0),0x8c280348,ar7));
  (*(undefined4 *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d58)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280354;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x8c)),((void *)(unsigned)0x8c022cb0),0x8c280354,ar7));
  (*(undefined4 *)(fr0_ - 0x90)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d68)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280360;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x90)),((void *)(unsigned)0x8c022cb0),0x8c280360,ar7));
  (*(undefined4 *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d78)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c28036c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x94)),((void *)(unsigned)0x8c022cb0),0x8c28036c,ar7));
  (*(undefined4 *)(fr0_ - 0x98)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d88)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280378;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x98)),((void *)(unsigned)0x8c022cb0),0x8c280378,ar7));
  (*(undefined4 *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125d98)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280384;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0x9c)),((void *)(unsigned)0x8c022cb0),0x8c280384,ar7));
  (*(undefined4 *)(fr0_ - 0xa0)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125da8)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c280390;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa0)),((void *)(unsigned)0x8c022cb0),0x8c280390,ar7));
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_xyz(0x8c2803a8,puVar3,uVar2,ar7));
  uVar2 = 0x8c28039c;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa4)),((void *)(unsigned)0x8c022cb0),0x8c28039c,ar7));
  (*(undefined4 *)(fr0_ - 0xa8)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(0x8c2803d4,(&(*(undefined1 *)(unsigned)0x8c125d78)),uVar2,ar7));
  uVar2 = 0x8c2803bc;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xa8)),((void *)(unsigned)0x8c022cb0),0x8c2803bc,ar7));
  (*(undefined4 *)(fr0_ - 0xac)) = (vsp = ((unsigned long)(fr0_ - 192)), Vec3_ctor_copy(0x8c2803d4 + 0x10,(&(*(undefined1 *)(unsigned)0x8c125d68)),uVar2,ar7))
  ;
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2803c8;
  (vsp = ((unsigned long)(fr0_ - 192)), global_list_push((*(undefined4 *)(fr0_ - 0xac)),((void *)(unsigned)0x8c022cb0),0x8c2803c8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0xc0)) + 0xa4,puVar3,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb0)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34((int)&(*(undefined4 *)(fr0_ - 0xc0)) + 0x8c,uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb4)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x18,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x4c)),uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xb8)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x30,uVar1,uVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x64)),uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xbc)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x48,uVar1,uVar2,ar7));
  (*(undefined4 *)(fr0_ - 0xc0)) = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x7c)),uVar1,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 192)), FUN_8c05d608(0x8c2803f4 + 0x60,(*(undefined4 *)(fr0_ - 0xc0)),uVar2,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05d2bc\n.set _FUN_8c05d2bc, _FUN_8c05d2bc_def\n");
