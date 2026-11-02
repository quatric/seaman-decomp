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
undefined4 FUN_8c06d8e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c06d8e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 312; for (int i_ = 0; i_ < 312; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *ar7_00;
  char cVar6;
  
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125e00),ar5,ar6,ar7));
  uVar3 = 0x8c2804b0;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2804b0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125e10),((void *)0x8c022ce8),uVar3,ar7));
  uVar3 = 0x8c2804bc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2804bc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125e20),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2804c8;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2804c8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125e30),((void *)0x8c022ce8),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2804d4,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125e40) = CONCAT44((*(undefined1 *)(unsigned)0x8c125e44),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125e40) = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c2804f0,((void *)0x8c02452c),((void *)0x8c03a4ac),0x124); });
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e4c4),0x8c2804e4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0xd); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c280924,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e4a0),0x8c280918,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0xd); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c280964,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e47c),0x8c280958,uVar1));
  uVar1 = 8;
  ({ unsigned long t0_ = (unsigned long)(7); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c2809b8,((void *)0x8c0673cc),((void *)0x8c0673dc),8); });
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e458),0x8c2809ac,uVar1));
  uVar1 = 8;
  ({ unsigned long t0_ = (unsigned long)(6); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c2809fc,((void *)0x8c0673cc),((void *)0x8c0673dc),8); });
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e434),0x8c2809f0,uVar1));
  uVar4 = 8;
  ({ unsigned long t0_ = (unsigned long)(6); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 312)) - 8); FUN_8c010120(0x8c280a38,((void *)0x8c0673cc),((void *)0x8c0673dc),8); });
  uVar1 = 0x8c280a2c;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(0,((void *)0x8c06e410),0x8c280a2c,uVar4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x14)),((void *)0x8c022ce8),uVar1,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280abc,((undefined1 *)(fr0_ - 0x14)),uVar1,uVar4));
  uVar3 = 0x8c280a68;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280a68,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14)),0xffffffff,uVar3,uVar4));
  pcVar2 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x24)),uVar1,((void *)0x8c022ce8),uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280acc,((undefined1 *)(fr0_ - 0x24)),pcVar2,uVar4));
  uVar3 = 0x8c280a74;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280a74,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x34)),uVar1,uVar3,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280adc,((undefined1 *)(fr0_ - 0x34)),uVar3,uVar4));
  uVar3 = 0x8c280a80;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280a80,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x44)),uVar1,uVar3,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280aec,((undefined1 *)(fr0_ - 0x44)),uVar3,uVar4));
  uVar3 = 0x8c280a8c;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280a8c,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x54)),uVar1,uVar3,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280afc,((undefined1 *)(fr0_ - 0x54)),uVar3,uVar4));
  uVar3 = 0x8c280a98;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280a98,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x64)),uVar1,uVar3,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280b0c,((undefined1 *)(fr0_ - 0x64)),uVar3,uVar4));
  uVar3 = 0x8c280aa4;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280aa4,uVar4));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,uVar3,((void *)0x8c022cb0)));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x74)),((void *)0x8c022ce8),uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280b1c,((undefined1 *)(fr0_ - 0x74)),((void *)0x8c022c88),pcVar2));
  uVar3 = 0x8c280ab0;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280ab0,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x84)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280b74,((undefined1 *)(fr0_ - 0x84)),uVar3,pcVar2));
  uVar3 = 0x8c280b2c;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b2c,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280b84,((undefined1 *)(fr0_ - 0x94)),uVar3,pcVar2));
  uVar3 = 0x8c280b38;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b38,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa4)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280b94,((undefined1 *)(fr0_ - 0xa4)),uVar3,pcVar2));
  uVar3 = 0x8c280b44;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b44,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb4)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280ba4,((undefined1 *)(fr0_ - 0xb4)),uVar3,pcVar2));
  uVar3 = 0x8c280b50;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b50,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc4)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280bb4,((undefined1 *)(fr0_ - 0xc4)),0x8c280b74,pcVar2));
  uVar3 = 0x8c280b5c;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b5c,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd4)),uVar1,uVar3,pcVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280bc4,((undefined1 *)(fr0_ - 0xd4)),0x8c280b74,pcVar2));
  uVar3 = 0x8c280b68;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280b68,pcVar2));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,uVar3,pcVar2));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xe4)),uVar1,uVar3,pcVar2));
  uVar4 = 0x8c280c1c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c1c,((undefined1 *)(fr0_ - 0xe4)),((void *)0x8c022c88),0x8c280c1c));
  uVar3 = 0x8c280bd4;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280bd4,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,uVar3,uVar4));
  puVar5 = ((undefined1 *)(fr0_ - 0xf4));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(puVar5,uVar1,((void *)0x8c022ce8),puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c2c,((undefined1 *)(fr0_ - 0xf4)),((void *)0x8c022c88),puVar5));
  ar7_00 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280be0,((void *)0x8c0101a0)));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,0xffffffff,ar7_00));
  pcVar2 = ((void *)0x8c022ce8);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x104)),uVar1,((void *)0x8c022ce8),ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c3c,((undefined1 *)(fr0_ - 0x104)),pcVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280bec,uVar1));
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x104)),0xffffffff,0xffffffff,uVar1));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x114)),uVar3,uVar4,uVar1));
  puVar5 = ((undefined1 *)(fr0_ - 0x114));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c4c,puVar5,0x8c280c1c,puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280bf8,puVar5));
  puVar5 = ((undefined1 *)(fr0_ - 0x114));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(puVar5,0xffffffff,((void *)0x8c022cb0),puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x124)),((undefined1 *)(fr0_ - 0x124)),pcVar2,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c5c,((undefined1 *)(fr0_ - 0x124)),0x8c280c1c,puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280c04,puVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x124)),0xffffffff,((void *)0x8c022cb0),puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x134)),((undefined1 *)(fr0_ - 0x134)),pcVar2,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_copy(0x8c280c6c,((undefined1 *)(fr0_ - 0x134)),pcVar2,puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280c10,puVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 312)), Vec3_dtor(((undefined1 *)(fr0_ - 0x134)),0xffffffff,((void *)0x8c022cb0),puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280c88,0x8c280c88,pcVar2,puVar5));
  uVar3 = 0x8c280c7c;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280c7c,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280ca4,((void *)0x8c022ce8),uVar3,puVar5));
  uVar3 = 0x8c280c98;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280c98,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280cc0,0x8c280cc0,uVar3,puVar5));
  uVar3 = 0x8c280cb4;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280cb4,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280cdc,((void *)0x8c022ce8),uVar3,puVar5));
  uVar3 = 0x8c280cd0;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280cd0,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280cf8,0x8c280cf8,uVar3,puVar5));
  uVar3 = 0x8c280cec;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280cec,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280d14,((void *)0x8c022ce8),uVar3,puVar5));
  uVar3 = 0x8c280d08;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280d08,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280d30,0x8c280d30,uVar3,puVar5));
  uVar3 = 0x8c280d24;
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280d24,puVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), Vec3_ctor_xyz(0x8c280d4c,((void *)0x8c022ce8),uVar3,puVar5));
  (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280d40,puVar5));
  uVar3 = 0x8c280cc0;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c280cdc); unsigned long t1_ = (unsigned long)(0x8c280cf8); unsigned long t2_ = (unsigned long)(0x8c280d14); unsigned long t3_ = (unsigned long)(
                       0x8c280d30); unsigned long t4_ = (unsigned long)(0x8c280d4c); *(unsigned *)((((unsigned long)(fr0_ - 312)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 312)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 312)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 312)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 312)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 312)) - 24); FUN_8c017010(0x8c280d68,0x8c280c88,0x8c280ca4,0x8c280cc0); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 312)), global_list_push(uVar1,((void *)0x8c017084),0x8c280d5c,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c06d8e4\n.set _FUN_8c06d8e4, _FUN_8c06d8e4_def\n");
