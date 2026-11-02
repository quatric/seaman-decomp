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
undefined4 s_WARNING_EXIT_0c76d0_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_WARNING_EXIT_0c76d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 156; for (int i_ = 0; i_ < 156; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char *ar7_00;
  undefined4 uVar6;
  undefined4 ar7_01;
  undefined4 uVar7;
  undefined4 in_fr1 = 0;
  char cVar8;
  
  cVar8 = '\0';
  uVar7 = 2;
  if ((*(undefined1 *)(unsigned)0x8c437134) == '\0') {
    ar6 = ((undefined1 *)(unsigned)0x8c437130);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437130) = 0;
    (*(undefined1 *)(unsigned)0x8c437134) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c43713c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 0;
    (*(undefined1 *)(unsigned)0x8c43713c) = '\x01';
  }
  pcVar5 = (code *)(int)(*(undefined1 *)(unsigned)0x8c437180);
  if (pcVar5 == (code *)0x0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0162f8(0x8c437184,((void *)0x8c0162f8),ar6,0));
    ar6 = (undefined1 *)(unsigned)0x8c437174;
    (vsp = ((unsigned long)(fr0_ - 156)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c437174,pcVar5));
    (*(undefined1 *)(unsigned)0x8c437180) = '\x01';
  }
  ar5_00 = (code *)((undefined1 *)(unsigned)0x8c4371a4);
  if ((*(undefined1 *)(unsigned)0x8c4371a4) == '\0') {
    pcVar5 = ((void *)0x8c0162f8);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0162f8(0x8c4371a8,((undefined1 *)(unsigned)0x8c4371a4),ar6,((void *)0x8c0162f8)));
    ar6 = (undefined1 *)(unsigned)0x8c437198;
    ar5_00 = ((void *)0x8c0151a0);
    (vsp = ((unsigned long)(fr0_ - 156)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c437198,pcVar5));
    (*(undefined1 *)(unsigned)0x8c4371a4) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4371c8) == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0162f8(0x8c4371cc,ar5_00,ar6,pcVar5));
    ar6 = (undefined1 *)(unsigned)0x8c4371bc;
    (vsp = ((unsigned long)(fr0_ - 156)), global_list_push(uVar1,((void *)0x8c0151a0),0x8c4371bc,pcVar5));
    ar5_00 = (code *)0x1;
    (*(undefined1 *)(unsigned)0x8c4371c8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4371e4) == '\0') {
    *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)0x0);
    (*(undefined1 *)(unsigned)0x8c4371e4) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,pcVar5));
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371e8) = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371e8) = in_fr1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4371ec) = 0x43f00000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371f4) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371fc) = uVar1;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371fc) = 0x44200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371f4) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4371f8) = 0x44200000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4371fc) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c437204) = 0x43f00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437200) = 0x44200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437214) = 0x90000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437210) = 0x90000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c43720c) = 0x90000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c437208) = 0x90000000;
  uVar1 = 4;
  puVar4 = ((undefined1 *)(unsigned)0x8c437208);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4371f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4371f4);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c4371e8),((undefined1 *)(unsigned)0x8c437208),4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c015198(((undefined1 *)(fr0_ - 0x2c)),0x60,puVar4,uVar1); });
  pcVar5 = ((void *)0x8c016340);
  (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(((undefined1 *)(fr0_ - 0x2c)),((void *)0x8c016340),puVar4,uVar1));
  ar7_00 = (char *)(unsigned)((int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0) + 1);
  puVar4 = ((undefined1 *)(unsigned)0x8c437138);
  *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)ar7_00);
  if ((4 < (*(undefined4 *)(unsigned)(unsigned)0x8c437138)) || ((*(undefined4 *)(unsigned)(unsigned)0x8c437138) < 0)) goto LAB_8c0c7fc4;
                    
  switch((*(undefined4 *)(unsigned)(unsigned)0x8c437138)) {
  case 0:
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc8ebc) = 0xffffffff;
      *(undefined4 *)(unsigned)(iVar2 * 4 + -0x73bc8eac) = 0xff00ff00;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437164) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437166) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437168) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43716a) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43716c) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c43716e) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437170) = 0xff;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437172) = 0xff;
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016324(0x8c437184,((undefined1 *)(unsigned)0x8c437164),((undefined1 *)(unsigned)0x8c437138),ar7_00));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c015198(0x8c437184,0x80000060,puVar4,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016324(0x8c4371a8,((undefined1 *)(unsigned)0x8c437164),puVar4,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c015198(0x8c4371a8,0x80000060,puVar4,ar7_00); });
    pcVar5 = ((void *)0x8c016324);
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016324(0x8c4371cc,((undefined1 *)(unsigned)0x8c437164),puVar4,((void *)0x8c016324)));
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c015198(0x8c4371cc,0x80000060,puVar4,pcVar5); });
    *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)0x0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 1;
    ar7_00 = (char *)(unsigned)pcVar5;
  case 1:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),puVar4,ar7_00));
    if (iVar2 != 2) {
      (vsp = ((unsigned long)(fr0_ - 156)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),puVar4,ar7_00));
    }
    if (5 < (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437140) =
           (code *)pack_acquire_entry_handle
                             (0x8c2b59d0,((undefined1 *)(unsigned)0x8c13d17c),puVar4,((void *)0x8c021b10));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c021d90(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),0,0));
      (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 2;
    }
  case 2:
    uVar6 = 0;
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c021d90(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),0,0));
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,((void *)0x8c01538c),uVar1,uVar6));
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,0,uVar1,uVar6));
    uVar6 = 4;
    uVar1 = 0x8c437144;
    puVar3 = ((undefined1 *)(unsigned)0x8c13ce50);
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c4371cc,((undefined1 *)(unsigned)0x8c13ce50),0x8c437144,4); });
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c4371cc,puVar3,uVar1,uVar6));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0bf708(*(undefined4 *)(unsigned)(ar5 + 0x7cc),puVar3,uVar1,uVar6));
    if ((iVar2 == 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c437130) == 1)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437130) = 0;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0bf690(*(undefined4 *)(unsigned)(ar5 + 0x7cc),puVar3,uVar1,uVar6));
      if ((iVar2 == 1) && ((*(undefined4 *)(unsigned)(unsigned)0x8c437130) == 0)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437130) = 1;
      }
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c437130) == 0) {
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,2,uVar1,uVar6));
      uVar6 = 4;
      uVar1 = 0x8c437154;
      puVar3 = ((undefined1 *)(unsigned)0x8c13ce30);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c4371a8,((undefined1 *)(unsigned)0x8c13ce30),0x8c437154,4); });
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c4371a8,puVar3,uVar1,uVar6));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,1,uVar1,uVar6));
      ar7_00 = (char *)(unsigned)0x4;
      puVar4 = (undefined1 *)(unsigned)0x8c437144;
      pcVar5 = (code *)((undefined1 *)(unsigned)0x8c13cdd0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c437184,((undefined1 *)(unsigned)0x8c13cdd0),0x8c437144,4); });
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c437184,pcVar5,puVar4,ar7_00));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,puVar3,uVar1,uVar6));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,1,uVar1,uVar6));
      ar7_01 = 4;
      uVar6 = 0x8c437154;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c437184,((undefined1 *)(unsigned)0x8c13ce10),0x8c437154,4); });
      uVar1 = 0x8c437184;
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c437184,0x8c437184,uVar6,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,uVar1,uVar6,ar7_01));
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,2,uVar6,ar7_01));
      ar7_00 = (char *)(unsigned)0x4;
      puVar4 = (undefined1 *)(unsigned)0x8c437144;
      pcVar5 = (code *)((undefined1 *)(unsigned)0x8c13cdf0);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x98))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c4371a8,((undefined1 *)(unsigned)0x8c13cdf0),0x8c437144,4); });
      (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c4371a8,pcVar5,puVar4,ar7_00));
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0c8058(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00));
    if (iVar2 == 1) {
      puVar4 = (undefined1 *)(unsigned)0x8c2b59d0;
      pcVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437140);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),0x8c2b59d0,ar7_00));
      if (iVar2 != 2) {
        pcVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c437140);
        (vsp = ((unsigned long)(fr0_ - 156)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),puVar4,ar7_00));
      }
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c437130) == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 1;
        uVar7 = 1;
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 3;
      }
      *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)0x0);
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0c8024(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00));
    if ((iVar2 == 1) ||
       ((iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c1000c8(*(undefined4 *)(unsigned)(ar5 + 0x7cc),pcVar5,puVar4,ar7_00)), iVar2 == 1 &&
        (0xf < (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0))))) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),puVar4,ar7_00));
      if (iVar2 != 2) {
        (vsp = ((unsigned long)(fr0_ - 156)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c437140),puVar4,ar7_00));
      }
      uVar7 = 1;
      ar7_00 = ((undefined1 *)(unsigned)0x8c437130);
      puVar4 = (undefined1 *)(unsigned)0x0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437130) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 1;
      pcVar5 = (code *)0x0;
      *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)0x0);
    }
    break;
  case 3:
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01538c(ar4 + 0x2d3f4,pcVar5,((undefined1 *)(unsigned)0x8c437138),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c014a94(ar4 + 0x2d3f4,3,puVar4,((void *)0x8c014a94)));
    ar7_00 = (char *)(unsigned)0x4;
    puVar4 = (undefined1 *)(unsigned)0x8c437144;
    pcVar5 = (code *)((undefined1 *)(unsigned)0x8c13ce50);
    ({ unsigned long ri0_ = (unsigned long)(((void *)0x8c016318)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 156)); FUN_8c016318(0x8c4371cc,((undefined1 *)(unsigned)0x8c13ce50),0x8c437144,4); });
    (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c016340(0x8c4371cc,pcVar5,puVar4,ar7_00));
    *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0) + 1);
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0) == (code *)0x1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01f520(0x8c3dd7dc,pcVar5,puVar4,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01ad88(uVar1,pcVar5,puVar4,ar7_00));
      if (iVar2 == 1) {
        uVar7 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01f520(0x8c3dd7dc,pcVar5,puVar4,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c01ab2c(uVar7,pcVar5,puVar4,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 156)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,puVar4,ar7_00));
        return 2;
      }
    }
    if (10 < (int)((undefined4 *)(unsigned long)*(unsigned *)0x8c4371e0)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 4;
      pcVar5 = (code *)((undefined1 *)(unsigned)0x8c4371e0);
      *(unsigned *)0x8c4371e0 = (unsigned)(unsigned long)((code *)0x0);
    }
    break;
  case 4:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0637d0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),*(undefined4 *)(unsigned)(ar5 + 0x7cc),((undefined1 *)(unsigned)0x8c437138),
                         ar7_00));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), get_field_d4_0c7424(*(undefined4 *)(unsigned)(ar5 + 0x7cc),0x7cc,puVar4,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 156)), s_wtNumberOfItems_is_over_CGam_0c5df6(ar4,ar5,iVar2,0x8c431a68));
    (vsp = ((unsigned long)(fr0_ - 156)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) + 0xf8))))(0x8c435c7c,vr5,vr6,vr7));
    ar7_00 = ((undefined1 *)(unsigned)0x8c13d157);
    puVar4 = (undefined1 *)(unsigned)0x4208;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), (*(code *)xlat((unsigned long)(0x8c0b6e6c)))(((undefined1 *)(unsigned)0x8c13d13d),0x8c431a68,((undefined1 *)(unsigned)0x8c13d168),1));
    if (iVar2 == 0) {
      ar7_00 = ((undefined1 *)(unsigned)0x8c13d189);
      puVar4 = (undefined1 *)(unsigned)0x600;
      pcVar5 = (code *)0x8c435c7c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 156)), (*(code *)xlat((unsigned long)(0x8c0b6e6c)))(((undefined1 *)(unsigned)0x8c13d14a),((undefined1 *)(unsigned)0x8c13d19f),1,vr7));
      if (iVar2 != 0) goto LAB_8c0c7fb8;
      uVar7 = 0;
      ar7_00 = ((undefined1 *)(unsigned)0x8c437138);
      puVar4 = (undefined1 *)(unsigned)0x0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 0;
    }
    else {
LAB_8c0c7fb8:
      pcVar5 = (code *)0x1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437138) = 1;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437130) = 0;
  }
LAB_8c0c7fc4:
  (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c0c453c(((undefined1 *)(unsigned)0x8c2b5628),pcVar5,puVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 156)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,puVar4,ar7_00));
  return uVar7;
}

__asm__(".globl _s_WARNING_EXIT_0c76d0\n.set _s_WARNING_EXIT_0c76d0, _s_WARNING_EXIT_0c76d0_def\n");
