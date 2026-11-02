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
undefined4 FUN_8c0af3c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af3c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262d0),ar5,ar6,ar7));
  uVar3 = 0x8c285938;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285938,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262e0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285944;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285944,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1262f0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c285950;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c285950,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126300),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28595c,ar7));
  if (cVar5 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126310) = CONCAT44((*(undefined1 *)(unsigned)0x8c126314),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126310) = 0xffffffff00800000;
  }
  uVar1 = 0x4c;
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285974,((void *)0x8c0af2b8),((void *)0x8c0af368),0x4c); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0afa2c),0x8c285968,uVar1));
  uVar4 = 0x4c;
  ({ unsigned long t0_ = (unsigned long)(0x28); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c285c78,((void *)0x8c0af2b8),((void *)0x8c0af368),0x4c); });
  uVar1 = 0x8c285c6c;
  pcVar2 = ((void *)0x8c0afa08);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0afa08),0x8c285c6c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c2868d8,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c2868cc;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c2868cc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(((undefined1 *)(unsigned)0x8c286a08),pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c2869fc,uVar4));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286a24,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af9e4),0x8c286a18,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286a94,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af9c0),0x8c286a88,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286b04,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af99c),0x8c286af8,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c286b1c,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c286b10;
  pcVar2 = ((void *)0x8c0af978);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0af978),0x8c286b10,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b34,pcVar2,uVar1,uVar4));
  uVar3 = 0x8c286b28;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b28,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b50,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b44;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b44,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b6c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b60;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b60,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286b88,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b7c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b7c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286ba4,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286b98;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286b98,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bc0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bb4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bb4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bdc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bd0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bd0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286bf8,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286bec;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286bec,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c14,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c08;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c08,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c30,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c24;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c24,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c4c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c40;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c40,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c68,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c5c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c5c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286c84,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c78;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c78,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286ca0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286c94;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286c94,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286cbc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c286cb0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286cb0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c286cd8,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c286ccc,uVar4));
  uVar3 = 0x8c286b6c;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c286b88); unsigned long t1_ = (unsigned long)(0x8c286ba4); unsigned long t2_ = (unsigned long)(0x8c286bc0); unsigned long t3_ = (unsigned long)(
                       0x8c286bdc); unsigned long t4_ = (unsigned long)(0x8c286bf8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c286cf4,0x8c286b34,0x8c286b50,0x8c286b6c); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c286ce8,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c0af3c4\n.set _FUN_8c0af3c4, _FUN_8c0af3c4_def\n");
