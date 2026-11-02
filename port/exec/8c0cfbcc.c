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
undefined4 FUN_8c0cfbcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cfbcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263e8),ar5,ar6,ar7));
  uVar3 = 0x8c4368d0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4368d0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1263f8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4368dc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4368dc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126408),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4368e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4368e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126418),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4368f4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4368f4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126428) = CONCAT44((*(undefined1 *)(unsigned)0x8c12642c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126428) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(0x8c43690c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c436900;
  pcVar2 = ((void *)0x8c016bfc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c016bfc),0x8c436900,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(0x8c43691c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c436910;
  pcVar2 = ((void *)0x8c0153e4);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0153e4),0x8c436910,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(0x8c436938,pcVar2,uVar3,ar7));
  uVar3 = 0x8c43692c;
  pcVar2 = ((void *)0x8c0151a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c43692c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(0x8c436958,pcVar2,uVar3,ar7));
  uVar3 = 0x8c43694c;
  pcVar2 = ((void *)0x8c0151a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c43694c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(0x8c436978,pcVar2,uVar3,ar7));
  uVar3 = 0x8c43696c;
  pcVar2 = ((void *)0x8c0151a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c43696c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cebf8(((undefined1 *)(unsigned)0x8c436a28),pcVar2,uVar3,ar7));
  uVar3 = 0x8c436a1c;
  pcVar2 = ((void *)0x8c0cfed8);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0cfed8),0x8c436a1c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0199d4(0x8c436f4c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c436f40;
  pcVar2 = ((void *)0x8c019aa0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c019aa0),0x8c436f40,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5208(0x8c437028,pcVar2,uVar3,ar7));
  uVar3 = 0x8c43701c;
  pcVar2 = ((void *)0x8c0cfe78);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0cfe78),0x8c43701c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c017830(0x8c43706c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437060;
  pcVar2 = ((void *)0x8c0cfe48);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0cfe48),0x8c437060,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(0x8c4370fc,pcVar2,uVar3,ar7));
  uVar3 = 0x8c4370f0;
  pcVar2 = ((void *)0x8c016bfc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c016bfc),0x8c4370f0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43710c,pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437100,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0cfbcc\n.set _FUN_8c0cfbcc, _FUN_8c0cfbcc_def\n");
