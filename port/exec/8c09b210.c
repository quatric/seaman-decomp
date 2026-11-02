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
undefined4 FUN_8c09b210_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126080),ar5,ar6,ar7));
  uVar3 = 0x8c284730;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284730,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126090),pcVar2,uVar3,ar7));
  uVar3 = 0x8c28473c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28473c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260a0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284748;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284748,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1260b0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c284754;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284754,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1260c0) = CONCAT44((*(undefined1 *)(unsigned)0x8c1260c4),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1260c0) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c28476c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284760;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c284760,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c28489c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284890;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c284890,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(0x8c2848b8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848ac;
  pcVar2 = ((void *)0x8c0247b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0247b0),0x8c2848ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(0x8c2848c8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848bc;
  pcVar2 = ((void *)0x8c03a3dc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a3dc),0x8c2848bc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2848d8,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848cc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2848cc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2848f4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c2848e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2848e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284910,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284904;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284904,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28492c,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284920;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284920,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284948,pcVar2,uVar3,ar7));
  uVar3 = 0x8c28493c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28493c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284964,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284958;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284958,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c284980,pcVar2,uVar3,ar7));
  uVar3 = 0x8c284974;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284974,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28499c,pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c284990,ar7));
  uVar3 = 0x8c284910;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c28492c); unsigned long t1_ = (unsigned long)(0x8c284948); unsigned long t2_ = (unsigned long)(0x8c284964); unsigned long t3_ = (unsigned long)(
                       0x8c284980); unsigned long t4_ = (unsigned long)(0x8c28499c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c2849b8,0x8c2848d8,0x8c2848f4,0x8c284910); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c2849ac,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c09b210\n.set _FUN_8c09b210, _FUN_8c09b210_def\n");
