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
undefined4 s_herb3_pvm_06c14c_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_herb3_pvm_06c14c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  code *ar6_00;
  uint uVar3;
  code *ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  ((uint *)(fr0_ - 0x2c))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c1371c0);
  ((uint *)(fr0_ - 0x2c))[1] = (*(undefined1 *)(unsigned)0x8c1371c4);
  ((uint *)(fr0_ - 0x2c))[2] = (*(undefined1 *)(unsigned)0x8c1371c8);
  ((uint *)(fr0_ - 0x2c))[3] = (*(undefined1 *)(unsigned)0x8c1371cc);
  ((uint *)(fr0_ - 0x1c))[0] = (*(undefined1 *)(unsigned)0x8c1371d0);
  ((uint *)(fr0_ - 0x1c))[1] = (*(undefined1 *)(unsigned)0x8c1371d4);
  ((uint *)(fr0_ - 0x1c))[2] = (*(undefined1 *)(unsigned)0x8c1371d8);
  ((uint *)(fr0_ - 0x1c))[3] = (*(undefined1 *)(unsigned)0x8c1371dc);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7));
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar5 + 0x2c);
    *(undefined4 *)(unsigned)(ar4 + 0x54) = *(undefined4 *)(unsigned)(ar5 + 0x30);
    *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)(ar5 + 0x34);
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar5 + 0x38);
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar5 + 0x38);
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar5 + 0x38);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x50) = *(undefined8 *)(unsigned)(ar5 + 0x2c);
    *(undefined8 *)(unsigned)(ar4 + 0x54) = *(undefined8 *)(unsigned)(ar5 + 0x30);
    *(undefined8 *)(unsigned)(ar4 + 0x58) = *(undefined8 *)(unsigned)(ar5 + 0x34);
    *(undefined8 *)(unsigned)(ar4 + 0x5c) = *(undefined8 *)(unsigned)(ar5 + 0x38);
    *(undefined8 *)(unsigned)(ar4 + 0x60) = *(undefined8 *)(unsigned)(ar5 + 0x38);
    *(undefined8 *)(unsigned)(ar4 + 100) = *(undefined8 *)(unsigned)(ar5 + 0x38);
  }
  ar7_00 = ((void *)0x8c023a14);
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x268,ar5 + 0x4c,ar6,((void *)0x8c023a14)));
  (vsp = ((unsigned long)(fr0_ - 44)), vec3_copy_8c023d8c(ar4 + 0x278,ar5 + 0x5c,((void *)0x8c023d8c),ar7_00));
  *(int *)(unsigned)(ar4 + 0x210) = (int)*(char *)(unsigned)(ar5 + 0x68);
  *(int *)(unsigned)(ar4 + 0x218) = (int)*(char *)(unsigned)(ar5 + 0x69);
  *(int *)(unsigned)(ar4 + 0x21c) = (int)*(char *)(unsigned)(ar5 + 0x6a);
  *(int *)(unsigned)(ar4 + 0x220) = (int)*(char *)(unsigned)(ar5 + 0x6b);
  *(int *)(unsigned)(ar4 + 0x230) = (int)*(char *)(unsigned)(ar5 + 0x6c);
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x244) = *(undefined4 *)(unsigned)(ar5 + 0x70);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x244) = *(undefined8 *)(unsigned)(ar5 + 0x70);
  }
  *(undefined2 *)(unsigned)(ar4 + 0x264) = *(undefined2 *)(unsigned)(ar5 + 0x74);
  *(undefined2 *)(unsigned)(ar4 + 0x266) = *(undefined2 *)(unsigned)(ar5 + 0x76);
  ar6_00 = (code *)0x240;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x240) = *(undefined4 *)(unsigned)(ar5 + 0x78);
    *(undefined4 *)(unsigned)(ar4 + 0x234) = *(undefined4 *)(unsigned)(ar5 + 0x7c);
    *(undefined4 *)(unsigned)(ar4 + 0x238) = *(undefined4 *)(unsigned)(ar5 + 0x80);
    *(undefined4 *)(unsigned)(ar4 + 0x23c) = *(undefined4 *)(unsigned)(ar5 + 0x84);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x240) = *(undefined8 *)(unsigned)(ar5 + 0x78);
    *(undefined8 *)(unsigned)(ar4 + 0x234) = *(undefined8 *)(unsigned)(ar5 + 0x7c);
    *(undefined8 *)(unsigned)(ar4 + 0x238) = *(undefined8 *)(unsigned)(ar5 + 0x80);
    *(undefined8 *)(unsigned)(ar4 + 0x23c) = *(undefined8 *)(unsigned)(ar5 + 0x84);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,0x240,ar7_00));
  *(int *)(unsigned)(ar4 + 0x228) = iVar1 * 3 + 2;
  if (*(int *)(unsigned)(ar4 + 0x220) == 0) {
    if (*(int *)(unsigned)(ar4 + 0x230) == 3) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x218);
      if (iVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c280998) = (*(undefined4 *)(unsigned)(unsigned)0x8c280998) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x210) < 4) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + 1;
        }
        else {
          (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + 1;
        }
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
      if ((*(int *)(unsigned)(ar4 + 0x230) == 1) || (*(int *)(unsigned)(ar4 + 0x230) == 2)) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x218);
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        }
      }
    }
  }
  else {
    if (*(int *)(unsigned)(ar4 + 0x210) < 4) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x230);
      if ((iVar1 < 6) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + 1;
          break;
        case 4:
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a8) + 1;
          break;
        case 5:
          (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a0) + 1;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
      *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
    }
    else {
      iVar1 = *(int *)(unsigned)(ar4 + 0x218);
      if (iVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c280998) = (*(undefined4 *)(unsigned)(unsigned)0x8c280998) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28099c) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c2809a4) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x230) != 0) {
      if (*(int *)(unsigned)(ar4 + 0x230) == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,ar7_00));
        ar6_00 = (code *)(*(uint *)(unsigned)(ar4 + 0x214) & ~((uint *)(fr0_ - 0x2c))[iVar1]);
        *(unsigned *)(unsigned)(ar4 + 0x214) = ar6_00;
        ar7_00 = ar4;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,ar7_00));
        uVar3 = *(uint *)(unsigned)(ar4 + 0x214);
        uVar2 = ((uint *)(fr0_ - 0x2c))[iVar1];
        *(uint *)(unsigned)(ar4 + 0x214) = uVar3 & ~uVar2;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,uVar3 & ~uVar2,ar7_00));
        *(uint *)(unsigned)(ar4 + 0x214) = *(uint *)(unsigned)(ar4 + 0x214) & ~((uint *)(fr0_ - 0x1c))[iVar1];
        ar6_00 = ar4;
      }
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x8c2804f0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,ar7_00));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280620) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c136f54))[iVar1];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_01031c(*(undefined4 *)(unsigned)(ar4 + 0x210),4,ar6_00,ar7_00));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280628) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c136f68))[iVar1];
  *(unsigned *)0x8c280618 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c136f84));
  *(unsigned *)0x8c28061c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c136fb8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280634) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f78);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280648) = (*(undefined4 *)(unsigned)(unsigned)0x8c136f7c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280638) = 0x12;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28064c) = 0x16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280644) = 0x8c280738;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280658) = 0x8c280810;
  return 0x168;
}

__asm__(".globl _s_herb3_pvm_06c14c\n.set _s_herb3_pvm_06c14c, _s_herb3_pvm_06c14c_def\n");
