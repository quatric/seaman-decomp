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
undefined4 FUN_8c0f74a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f74a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126548)),ar5,ar6,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b188;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b188,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126558)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b194;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b194,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126568)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1a0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1a0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126578)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1c4,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1b8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1b8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1e0,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1d4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1d4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1fc,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1f0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1f0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b218,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b20c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b20c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b234,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b228;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b228,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b250,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b244;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b244,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b26c,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b260;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b260,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b288,puVar4,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c43b27c,ar7));
  uVar1 = 0x8c43b1fc;
  uVar3 = ({ unsigned long t0_ = (unsigned long)(0x8c43b218); unsigned long t1_ = (unsigned long)(
                     0x8c43b234); unsigned long t2_ = (unsigned long)(0x8c43b250); unsigned long t3_ = (unsigned long)(0x8c43b26c); unsigned long t4_ = (unsigned long)(0x8c43b288); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c017010))))
                    (0x8c43b2a4,0x8c43b1c4,0x8c43b1e0,0x8c43b1fc); });
  puVar4 = ((void *)(unsigned)0x8c017084);
  uVar2 = 0x8c43b298;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
            (uVar3,((void *)(unsigned)0x8c017084),0x8c43b298,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b39c,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b390;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b390,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3b8,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3ac,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3d4,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3c8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3c8,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3f0,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3e4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3e4,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b40c,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b400;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b400,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b428,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b41c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b41c,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b444,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b438;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b438,uVar1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b460,puVar4,uVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c43b454,uVar1));
  uVar2 = 0x8c43b3d4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c43b3f0); unsigned long t1_ = (unsigned long)(0x8c43b40c); unsigned long t2_ = (unsigned long)(
                     0x8c43b428); unsigned long t3_ = (unsigned long)(0x8c43b444); unsigned long t4_ = (unsigned long)(0x8c43b460); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c017010))))
                    (0x8c43b47c,0x8c43b39c,0x8c43b3b8,0x8c43b3d4); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
                    (uVar1,((void *)(unsigned)0x8c017084),0x8c43b470,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c0f74a4\n.set _FUN_8c0f74a4, _FUN_8c0f74a4_def\n");
