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
undefined4 FUN_8c0c4644_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c4644";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263a0),ar5,ar6,ar7));
  uVar3 = 0x8c286e20;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e20,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263b0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c286e2c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e2c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263c0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c286e38;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e38,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263d0),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286e44,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1263e0) = CONCAT44((*(undefined1 *)(unsigned)0x8c1263e4),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1263e0) = 0xffffffff00800000;
  }
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286e5c,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0c4c60),0x8c286e50,uVar1));
  ar7_00 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286e8c,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c286e80;
  pcVar2 = ((void *)0x8c0c4c3c);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0c4c3c),0x8c286e80,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bff8c(0x8c286ebc,pcVar2,uVar1,ar7_00));
  uVar3 = 0x8c286eb0;
  pcVar2 = ((void *)0x8c0c0368);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c0368),0x8c286eb0,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Mess_ICON00_pvr_0c2496(((undefined1 *)(unsigned)0x8c2b5628),pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c2b561c;
  pcVar2 = ((void *)0x8c0c4b84);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c4b84),0x8c2b561c,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), pack_ctor(0x8c2b59d0,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c2b59c4;
  pcVar2 = ((void *)0x8c0214e0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0214e0),0x8c2b59c4,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7f78(0x8c35468c,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c354680;
  pcVar2 = ((void *)0x8c0f7fa8);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0f7fa8),0x8c354680,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01e504(0x8c3dd7dc,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c3dd7d0;
  pcVar2 = ((void *)0x8c01e560);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c01e560),0x8c3dd7d0,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0febbc(0x8c3e7d30,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c3e7d24;
  pcVar2 = ((void *)0x8c0c4a44);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c4a44),0x8c3e7d24,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fef8c(0x8c3eb324,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c3eb318;
  pcVar2 = ((void *)0x8c0c4a14);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c4a14),0x8c3eb318,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f5d0(0x8c3eb334,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c3eb328;
  pcVar2 = ((void *)0x8c01f5d8);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c01f5d8),0x8c3eb328,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(0x8c431294,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c431288;
  pcVar2 = ((void *)0x8c0151a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c431288,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9fb4(0x8c431a68,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c431a5c;
  pcVar2 = ((void *)0x8c0c4968);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c4968),0x8c431a5c,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba1c0(0x8c435c7c,pcVar2,uVar3,ar7_00));
  uVar3 = 0x8c435c70;
  pcVar2 = ((void *)0x8c0c491c);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0c491c),0x8c435c70,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdc98(0x8c436280,pcVar2,uVar3,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0c4644\n.set _FUN_8c0c4644, _FUN_8c0c4644_def\n");
