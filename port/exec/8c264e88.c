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
int FUN_8c264e88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264e88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (*(char *)(unsigned)(unaff_r14 + 1) == '\x03') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264b14(unaff_r14,ar5,ar6,ar7));
  }
  else if (*(char *)(unsigned)(unaff_r14 + 1) == '\x01') {
    (vsp = ((unsigned long)(fr0_ - 0)), s_E9081001_can_t_play_d_ch_dat_2647fe(unaff_r14,ar5,ar6,ar7));
  }
  else if (*(char *)(unsigned)(unaff_r14 + 1) == '\x02') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264a42(unaff_r14,ar5,ar6,ar7));
  }
  else if (*(char *)(unsigned)(unaff_r14 + 1) == '\x04') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264b7a(unaff_r14,ar5,ar6,ar7));
  }
  else if (*(char *)(unsigned)(unaff_r14 + 1) == '\x05') {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_264b9c(unaff_r14,ar5,ar6,ar7); });
  }
  cVar1 = *(char *)(unsigned)(unaff_r14 + 1);
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(unaff_r14,ar5,ar6,ar7));
  ar5_01 = ar5_00;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0((*(undefined4 *)(unsigned)(unsigned)0x8c2784a0),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(1000000,*(undefined4 *)(unsigned)(unaff_r14 + 0x38),vr6,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar3 << 3,10,vr6,vr7));
  if (iVar2 < iVar3) {
    return iVar3;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2784a0) = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(unsigned)(unaff_r14 + 0x72) == '\0')) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c38(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5_01,ar6,ar7)), iVar2 != 3)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_2c_2630fe(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5_01,ar6,ar7));
    if (*(int *)(unsigned)(unaff_r14 + 100) == iVar2) {
      *(short *)(unsigned)(unaff_r14 + 0x68) = *(short *)(unsigned)(unaff_r14 + 0x68) + 1;
      if (*(int *)(unsigned)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unsigned)(unaff_r14 + 0x68)) {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(unsigned)(unaff_r14 + 0x68) = 0;
    }
    *(int *)(unsigned)(unaff_r14 + 100) = iVar2;
    if (*(short *)(unsigned)(unaff_r14 + 0x60) != 0) {
      if ((*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x02')) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7));
      }
      if (*(char *)(unsigned)(unaff_r14 + 0x6d) != '\0') {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(unsigned)(unaff_r14 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(unsigned)(unaff_r14 + 0x72) == '\0' &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262c38(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5_01,ar6,ar7)), iVar2 != 3)))) {
    if (*(int *)(unsigned)(unaff_r14 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x14));
      ar5_01 = 1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar4 + 0x24))))(piVar4,piVar4,vr6,vr7));
    }
    if (iVar2 < 0x40) {
      *(short *)(unsigned)(unaff_r14 + 0x6a) = *(short *)(unsigned)(unaff_r14 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(unsigned)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unsigned)(unaff_r14 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(unsigned)(unaff_r14 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(unsigned)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unsigned)(unaff_r14 + 0x6a))
      goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(unsigned)(unaff_r14 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x01') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7));
      }
      else if (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x02') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7));
      }
      iVar2 = 0x6d;
      if (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(unsigned)(unaff_r14 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(unsigned)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(unsigned)(unaff_r14 + 8) != 0) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263746(*(undefined4 *)(unsigned)(unaff_r14 + 8),ar5_01,ar6,ar7)), iVar2 == 4)) {
    if (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x01') {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7));
    }
    else if (*(char *)(unsigned)(unaff_r14 + 0x6d) == '\x02') {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7));
    }
    iVar2 = 0x6d;
    if (*(char *)(unsigned)(unaff_r14 + 0x6d) != '\0') {
      *(undefined2 *)(unsigned)(unaff_r14 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(unsigned)(unaff_r14 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264e88\n.set _FUN_8c264e88, _FUN_8c264e88_def\n");
