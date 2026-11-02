#include "../decls.h"
undefined4 s_herb3_pvm_06c14c_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  code *ar6_00;
  uint uVar3;
  code *ar7_00;
  char cVar4;
  uint auStack_2c [4];
  uint auStack_1c [5];
  
  cVar4 = '\0';
  auStack_2c[0] = DAT_8c1371c0;
  auStack_2c[1] = DAT_8c1371c4;
  auStack_2c[2] = DAT_8c1371c8;
  auStack_2c[3] = DAT_8c1371cc;
  auStack_1c[0] = DAT_8c1371d0;
  auStack_1c[1] = DAT_8c1371d4;
  auStack_1c[2] = DAT_8c1371d8;
  auStack_1c[3] = DAT_8c1371dc;
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7);
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar5 + 0x2c);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(ar5 + 0x30);
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(ar5 + 0x34);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 0x38);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar5 + 0x38);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar5 + 0x38);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(ar5 + 0x2c);
    *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)(ar5 + 0x30);
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(ar5 + 0x34);
    *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(ar5 + 0x38);
    *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(ar5 + 0x38);
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar5 + 0x38);
  }
  ar7_00 = Vec3_assign;
  Vec3_assign(ar4 + 0x268,ar5 + 0x4c,ar6,Vec3_assign);
  vec3_copy_8c023d8c(ar4 + 0x278,ar5 + 0x5c,vec3_copy_8c023d8c,ar7_00);
  *(int *)(ar4 + 0x210) = (int)*(char *)(ar5 + 0x68);
  *(int *)(ar4 + 0x218) = (int)*(char *)(ar5 + 0x69);
  *(int *)(ar4 + 0x21c) = (int)*(char *)(ar5 + 0x6a);
  *(int *)(ar4 + 0x220) = (int)*(char *)(ar5 + 0x6b);
  *(int *)(ar4 + 0x230) = (int)*(char *)(ar5 + 0x6c);
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = *(undefined4 *)(ar5 + 0x70);
  }
  else {
    *(undefined8 *)(ar4 + 0x244) = *(undefined8 *)(ar5 + 0x70);
  }
  *(undefined2 *)(ar4 + 0x264) = *(undefined2 *)(ar5 + 0x74);
  *(undefined2 *)(ar4 + 0x266) = *(undefined2 *)(ar5 + 0x76);
  ar6_00 = (code *)0x240;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x240) = *(undefined4 *)(ar5 + 0x78);
    *(undefined4 *)(ar4 + 0x234) = *(undefined4 *)(ar5 + 0x7c);
    *(undefined4 *)(ar4 + 0x238) = *(undefined4 *)(ar5 + 0x80);
    *(undefined4 *)(ar4 + 0x23c) = *(undefined4 *)(ar5 + 0x84);
  }
  else {
    *(undefined8 *)(ar4 + 0x240) = *(undefined8 *)(ar5 + 0x78);
    *(undefined8 *)(ar4 + 0x234) = *(undefined8 *)(ar5 + 0x7c);
    *(undefined8 *)(ar4 + 0x238) = *(undefined8 *)(ar5 + 0x80);
    *(undefined8 *)(ar4 + 0x23c) = *(undefined8 *)(ar5 + 0x84);
  }
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,0x240,ar7_00);
  *(int *)(ar4 + 0x228) = iVar1 * 3 + 2;
  if (*(int *)(ar4 + 0x220) == 0) {
    if (*(int *)(ar4 + 0x230) == 3) {
      iVar1 = *(int *)(ar4 + 0x218);
      if (iVar1 == 0) {
        _DAT_8c280998 = _DAT_8c280998 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        if (*(int *)(ar4 + 0x210) < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
        else {
          _DAT_8c28099c = _DAT_8c28099c + 1;
        }
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    else {
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      if ((*(int *)(ar4 + 0x230) == 1) || (*(int *)(ar4 + 0x230) == 2)) {
        iVar1 = *(int *)(ar4 + 0x218);
        if (iVar1 == 0) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        }
      }
    }
  }
  else {
    if (*(int *)(ar4 + 0x210) < 4) {
      iVar1 = *(int *)(ar4 + 0x230);
      if ((iVar1 < 6) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
          break;
        case 4:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
          _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
          break;
        case 5:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
      }
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
      *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
    }
    else {
      iVar1 = *(int *)(ar4 + 0x218);
      if (iVar1 == 0) {
        _DAT_8c280998 = _DAT_8c280998 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        _DAT_8c28099c = _DAT_8c28099c + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    if (*(int *)(ar4 + 0x230) != 0) {
      if (*(int *)(ar4 + 0x230) == 1) {
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
        ar6_00 = (code *)(*(uint *)(ar4 + 0x214) & ~auStack_2c[iVar1]);
        *(code **)(ar4 + 0x214) = ar6_00;
        ar7_00 = ar4;
      }
      else {
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
        uVar3 = *(uint *)(ar4 + 0x214);
        uVar2 = auStack_2c[iVar1];
        *(uint *)(ar4 + 0x214) = uVar3 & ~uVar2;
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,uVar3 & ~uVar2,ar7_00);
        *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_1c[iVar1];
        ar6_00 = ar4;
      }
    }
  }
  *(undefined4 *)(ar4 + 0x224) = 0x8c2804f0;
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
  _DAT_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar1];
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
  _DAT_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar1];
  _DAT_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
  _DAT_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
  _DAT_8c280634 = PTR_s_herb3_pvm_8c136f78;
  _DAT_8c280648 = PTR_s_herb5_pvm_8c136f7c;
  _DAT_8c280638 = 0x12;
  _DAT_8c28064c = 0x16;
  _DAT_8c280644 = 0x8c280738;
  _DAT_8c280658 = 0x8c280810;
  return 0x168;
}

__asm__(".globl _s_herb3_pvm_06c14c\n.set _s_herb3_pvm_06c14c, _s_herb3_pvm_06c14c_def\n");
