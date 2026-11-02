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
undefined4 FUN_8c0e8f54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8f54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126478),ar5,ar6,ar7));
  uVar3 = 0x8c437520;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437520,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126488),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43752c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43752c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126498),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437538;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437538,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264a8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437544;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437544,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8) = CONCAT44((*(undefined1 *)(unsigned)0x8c1264bc),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(0x8c4377f4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c4377e8;
  pcVar2 = ((void *)0x8c0153e4);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0153e4),0x8c4377e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437a78,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437a6c;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437a6c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437aa4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437a98;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437a98,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437ad0,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437ac4;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437ac4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437afc,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437af0;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437af0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10291c(0x8c437b28,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437b1c;
  pcVar2 = ((void *)0x8c0d63c0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d63c0),0x8c437b1c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0243b0(0x8c437b48,pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0ba180),0x8c437b3c,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8f54\n.set _FUN_8c0e8f54, _FUN_8c0e8f54_def\n");
