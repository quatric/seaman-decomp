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
undefined4 s_SEAMAN_0c1da0_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "s_SEAMAN_0c1da0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  if (*(undefined4 *)(unsigned)0x8c436844 == '\0') {
    *(undefined4 *)(unsigned)0x8c436840 = 0;
    *(undefined4 *)(unsigned)0x8c436844 = '\x01';
  }
  if (ar7 == 0) {
    *(undefined4 *)(unsigned)0x8c436840 = 0;
    *(undefined4 *)(unsigned)0x8c436846 = 0;
    uVar3 = 0;
  }
  else if (ar7 == 1) {
    iVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf708(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5,ar6,1));
    if ((iVar1 == 1) && (*(undefined4 *)(unsigned)0x8c436840 == 1)) {
      *(undefined4 *)(unsigned)0x8c436840 = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf690(*(undefined4 *)(unsigned)(0x7cc + ar5),iVar2,ar6,ar7));
      if ((iVar1 == 1) && (*(undefined4 *)(unsigned)0x8c436840 == 0)) {
        *(undefined4 *)(unsigned)0x8c436840 = 1;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf618(*(undefined4 *)(unsigned)(0x7cc + ar5),iVar2,ar6,ar7));
    if (iVar1 == 1) {
      if (*(undefined4 *)(unsigned)0x8c436840 == 0) {
        uVar3 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016340(0x8c431294,iVar2,ar6,ar7));
      }
      else {
        uVar3 = 0;
      }
    }
  }
  else if (ar7 == 2) {
    *(undefined4 *)(unsigned)0x8c436846 = *(undefined4 *)(unsigned)0x8c436846 + 1;
    if (*(undefined4 *)(unsigned)0x8c436846 == 10) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,2));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,s0,ar6,ar7));
    }
    else if (0x14 < *(undefined4 *)(unsigned)0x8c436846) {
      uVar3 = 0x8c431a68;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c67f4(ar4 + 0x17c,ar5,0x8c431a68,2));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c6a4c(ar4 + 0x17c,0x8c435c7c,uVar3,ar7));
      iVar2 = ({ unsigned long t0_ = (unsigned long)(
                         (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa9b); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b726c))))
                        ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,
                         (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa8a); });
      if (((iVar2 == 0) &&
          (iVar2 = ({ unsigned long t0_ = (unsigned long)(
                              (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xab8); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b726c))))
                             ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,0,0,
                              (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaa2); }),
          iVar2 == 0)) &&
         (iVar2 = ({ unsigned long t0_ = (unsigned long)(
                             (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xab8); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b726c))))
                            ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,0x8c435c7c,
                             0x600,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaa2); }), iVar2 == 0
         )) {
        uVar3 = 0;
        *(undefined4 *)(unsigned)0x8c436846 = 0;
      }
      else {
        uVar3 = 1;
        *(undefined4 *)(unsigned)0x8c436846 = 0;
      }
    }
  }
  else if (ar7 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf780(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5,ar6,3));
    if (iVar2 == 1) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

__asm__(".globl _s_SEAMAN_0c1da0\n.set _s_SEAMAN_0c1da0, _s_SEAMAN_0c1da0_def\n");
