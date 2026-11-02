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
undefined4 FUN_8c25dc60_def(int ar4,uint ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c25dc60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint d;
  undefined4 a6;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int n;
  
  ((int *)(fr0_ - 0xac))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c271fd0);
  ((int *)(fr0_ - 0xac))[1] = (*(undefined1 *)(unsigned)0x8c271fd4);
  ((int *)(fr0_ - 0xac))[2] = (*(undefined1 *)(unsigned)0x8c271fd8);
  ((int *)(fr0_ - 0xac))[3] = (*(undefined1 *)(unsigned)0x8c271fdc);
  (*(undefined4 *)(fr0_ - 0x9c)) = (*(undefined1 *)(unsigned)0x8c271fe0);
  (*(undefined4 *)(fr0_ - 0x98)) = (*(undefined1 *)(unsigned)0x8c271fe4);
  ((undefined4 *)(fr0_ - 0xc0))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c271fe8);
  ((undefined4 *)(fr0_ - 0xc0))[1] = (*(undefined1 *)(unsigned)0x8c271fec);
  ((undefined4 *)(fr0_ - 0xc0))[2] = (*(undefined1 *)(unsigned)0x8c271ff0);
  ((undefined4 *)(fr0_ - 0xc0))[3] = (*(undefined1 *)(unsigned)0x8c271ff4);
  (*(undefined4 *)(fr0_ - 0xb0)) = (*(undefined1 *)(unsigned)0x8c271ff8);
  ((undefined4 *)(fr0_ - 0xd4))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c271ffc);
  ((undefined4 *)(fr0_ - 0xd4))[1] = (*(undefined1 *)(unsigned)0x8c272000);
  ((undefined4 *)(fr0_ - 0xd4))[2] = (*(undefined1 *)(unsigned)0x8c272004);
  ((undefined4 *)(fr0_ - 0xd4))[3] = (*(undefined1 *)(unsigned)0x8c272008);
  (*(undefined4 *)(fr0_ - 0xc4)) = (*(undefined1 *)(unsigned)0x8c27200c);
  iVar6 = ((int *)(fr0_ - 0xac))[ar6];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8) = ar5;
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) != 1) && (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0x20)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8) = ar5 >> 1;
  }
  if (((*(int *)(fr0_ + 0x00000004)) == 0) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x20) != 0)) {
    (*(int *)(fr0_ - 0xdc)) = 1;
  }
  else {
    (*(int *)(fr0_ - 0xdc)) = 2;
  }
  (*(undefined4 *)(fr0_ - 0x74)) = 1;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0;
  (*(undefined4 *)(fr0_ - 0x60)) = 0;
  (*(undefined4 *)(fr0_ - 0x54)) = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  (*(undefined4 *)(fr0_ - 0x30)) = 0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    if (ar7 == 1) {
      iVar5 = 2;
      goto LAB_8c25dd8c;
    }
    (*(int *)(fr0_ - 0xd8)) = 1;
    iVar5 = 1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x28)) = 1;
    iVar5 = 1;
LAB_8c25dd8c:
    (*(int *)(fr0_ - 0xd8)) = 0;
  }
  if (iVar6 != 0x10) {
    if (iVar6 == 0x18) {
      (*(undefined4 *)(fr0_ - 0x64)) = 4;
      (*(undefined4 *)(fr0_ - 0x58)) = 2;
    }
    else {
      if (iVar6 != 0x20) goto LAB_8c25dde8;
      (*(undefined4 *)(fr0_ - 0x64)) = 6;
      (*(undefined4 *)(fr0_ - 0x58)) = 3;
    }
    (*(undefined4 *)(fr0_ - 0x68)) = 0;
    goto LAB_8c25dde8;
  }
  if (ar6 == 3) {
    (*(undefined4 *)(fr0_ - 0x64)) = 3;
LAB_8c25ddc4:
    (*(undefined4 *)(fr0_ - 0x58)) = 0;
  }
  else if (ar6 == 0) {
    (*(undefined4 *)(fr0_ - 0x64)) = 1;
    (*(undefined4 *)(fr0_ - 0x58)) = 1;
  }
  else {
    if (ar6 == 1) {
      (*(undefined4 *)(fr0_ - 0x64)) = 0;
      goto LAB_8c25ddc4;
    }
    (*(undefined4 *)(fr0_ - 0x64)) = 1;
    (*(undefined4 *)(fr0_ - 0x58)) = 1;
  }
  (*(undefined4 *)(fr0_ - 0x68)) = (*(undefined4 *)(fr0_ + 0x00000000));
LAB_8c25dde8:
  n = ar4 * iVar6;
  (*(undefined4 *)(fr0_ - 0x6c)) = 0;
  (*(undefined4 *)(fr0_ - 0x78)) = 0;
  (*(int *)(fr0_ - 0x50)) = n;
  if (n < 0) {
    (*(int *)(fr0_ - 0x50)) = n + 0x3f;
  }
  (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) >> 6;
  d = 0x20;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf4) = ar4;
  (*(int *)(fr0_ - 0x70)) = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,0x20,vr6,vr7));
  uVar4 = (int)(ar5 + ((int)ar5 < 0)) >> 1;
  (*(int *)(fr0_ - 0x94)) = iVar1 + -1;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = iVar6 + 7;
  }
  iVar1 = (iVar1 >> 3) * ar4;
  (*(uint *)(fr0_ - 0x90)) = uVar4;
  if (ar7 == 1) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(int *)(fr0_ - 0x8c)) = 1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      (*(uint *)(fr0_ - 0x90)) = ar5;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
      (*(int *)(fr0_ - 0x8c)) = iVar2 + 1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
    }
  }
  else if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(int *)(fr0_ - 0x8c)) = 1;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      (*(uint *)(fr0_ - 0x90)) = ar5;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
      (*(int *)(fr0_ - 0x8c)) = iVar1 + 1;
    }
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
    (*(int *)(fr0_ - 0x8c)) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
    (*(uint *)(fr0_ - 0x90)) = ar5;
  }
  uVar3 = (*(uint *)(fr0_ - 0x90));
  (*(uint *)(fr0_ - 0x90)) = (*(uint *)(fr0_ - 0x90)) - 1;
  ar7_00 = 0x42;
  if ((*(int *)(fr0_ + 0x00000004)) == 0) {
    (*(undefined4 *)(fr0_ - 0x88)) = 0;
    if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)) {
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
            (*(undefined4 *)(fr0_ - 0x84)) = ((undefined4 *)(fr0_ - 0xc0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
            (*(uint *)(fr0_ - 0x90)) = uVar3 - 2;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x84)) = 0x400;
          }
        }
        else {
          if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
            (*(undefined4 *)(fr0_ - 0x84)) = ((undefined4 *)(fr0_ - 0xc0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
          }
          else {
            (*(undefined4 *)(fr0_ - 0x84)) = 0x401;
          }
          (*(uint *)(fr0_ - 0x90)) = uVar3 - 2;
        }
      }
      else {
        (*(undefined4 *)(fr0_ - 0x84)) = 0x400;
      }
    }
    else {
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
        (*(undefined4 *)(fr0_ - 0x84)) = ((undefined4 *)(fr0_ - 0xd4))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
      }
      else {
        (*(undefined4 *)(fr0_ - 0x84)) = 0x800;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = 0;
      (*(int *)(fr0_ - 0x8c)) = 1;
      (*(uint *)(fr0_ - 0x90)) = uVar3 - 2;
    }
    (*(int *)(fr0_ - 0xe4)) = 1;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c14) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c14) | 1;
    (*(undefined4 *)(fr0_ - 0x88)) = 1;
    (*(int *)(fr0_ - 0xe4)) = 2;
    (*(uint *)(fr0_ - 0x90)) = uVar3 - 2;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
      uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0xffffffec;
      if ((((uVar3 == 100) || (uVar3 == 0x68)) || (uVar3 == 0x24)) || (uVar3 == 0x28)) {
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
          (*(undefined4 *)(fr0_ - 0x84)) = ((undefined4 *)(fr0_ - 0xc0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
        }
        else {
          (*(undefined4 *)(fr0_ - 0x84)) = 0x401;
        }
        (*(int *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
        (*(int *)(fr0_ - 0x8c)) = (*(int *)(fr0_ - 0x8c)) + 1;
      }
      else if ((((uVar3 == 0x60) || (uVar3 == 0x40)) ||
               ((uVar3 == 0x44 || ((uVar3 == 0x20 || (uVar3 == 0)))))) || (uVar3 == 4)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc4) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dc8) = 0;
        if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
          (*(undefined4 *)(fr0_ - 0x84)) = ((undefined4 *)(fr0_ - 0xd4))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bdc)];
        }
        else {
          (*(undefined4 *)(fr0_ - 0x84)) = 0x800;
        }
        (*(int *)(fr0_ - 0x8c)) = 1;
      }
    }
    else {
      (*(undefined4 *)(fr0_ - 0x84)) = 0x401;
    }
  }
  (*(undefined4 *)(fr0_ - 0x80)) = 0x40;
  (*(undefined4 *)(fr0_ - 0x7c)) = 0x80;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa008) = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(ar4,d,vr6,vr7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa008) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa008) * (*(int *)(fr0_ - 0xe4));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(ar5 * iVar5 * (*(int *)(fr0_ - 0xdc)),d,vr6,vr7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c) = iVar5 + (*(int *)(fr0_ - 0xd8));
  a6 = 0xf;
  if (0xf < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c) = 0xf;
  }
  (*(undefined4 *)(fr0_ - 0x48)) = 9;
  (*(undefined4 *)(fr0_ - 0x4c)) = 6;
  if (iVar6 == 0x10) {
    (*(undefined4 *)(fr0_ - 0x44)) = 8;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x44)) = 0xb;
  }
  (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  iVar6 = ar4 + -1;
  (*(undefined4 *)(fr0_ - 0x34)) = 0;
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)) {
    ar5 = ar5 - 1;
    (*(uint *)(fr0_ - 0x38)) = ar5;
  }
  else {
    (*(uint *)(fr0_ - 0x38)) = uVar4 - 1;
  }
  (*(int *)(fr0_ - 0x40)) = iVar6;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x158))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x154))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c010838(iVar6,ar5,0xf,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c25dac0(iVar6,ar5,a6,ar7_00));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c25dc60\n.set _FUN_8c25dc60, _FUN_8c25dc60_def\n");
