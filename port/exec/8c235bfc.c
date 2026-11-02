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
undefined4 FUN_8c235bfc_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235bfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 816; for (int i_ = 0; i_ < 816; i_++) z_[i_] = 0; }
  int ar7_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 *ar6_01;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ar6_00 = ((undefined1 *)(fr0_ - 0x32c));
  ar6_01 = ((undefined1 *)(fr0_ - 0x32c));
  if ((ar6 & 0x80000000) == 0) {
    uVar1 = ar5;
    ar7_00 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c235e1c(ar4,ar5,((undefined1 *)(fr0_ - 0x32c)),ar7));
    if (ar7_00 == -1) {
      return 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c236454(ar4,uVar1,ar6_01,ar7));
    if ((ar6 & 0x40) == 0) {
      uVar2 = 0x80002;
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c237124(0x80002,uVar1,ar6_01,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c236510(uVar2,uVar1,ar6_01,ar7));
    }
    else {
      uVar2 = 0x2100002;
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c237124(0x2100002,uVar1,ar6_01,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c2365e2(uVar2,uVar1,ar6_01,ar7));
    }
    if ((ar6 & 0x20) == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c25c3a4(((undefined1 *)(fr0_ - 0x32c)),ar5,uVar1,ar7_00));
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c25b650(((undefined1 *)(fr0_ - 0x32c)),ar5,uVar1,ar7_00));
    }
  }
  else {
    uVar1 = ar5;
    ar7_00 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c235d8c(ar4,ar5,((undefined1 *)(fr0_ - 0x32c)),ar7));
    if (ar7_00 == -1) {
      return 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c236454(ar4,uVar1,ar6_00,ar7));
    if ((ar6 & 0x40) == 0) {
      uVar2 = 0x8000a;
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c237124(0x8000a,uVar1,ar6_00,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c23666c(uVar2,uVar1,ar6_00,ar7));
    }
    else {
      uVar2 = 0x210000a;
      (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c237124(0x210000a,uVar1,ar6_00,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c236718(uVar2,uVar1,ar6_00,ar7));
    }
    if ((ar6 & 0x20) == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c25c868(((undefined1 *)(fr0_ - 0x32c)),ar5,uVar1,ar7_00));
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c25bc88(((undefined1 *)(fr0_ - 0x32c)),ar5,uVar1,ar7_00));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c2370dc(uVar2,ar5,uVar1,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 816)), FUN_8c2364b2(uVar2,ar5,uVar1,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c235bfc\n.set _FUN_8c235bfc, _FUN_8c235bfc_def\n");
