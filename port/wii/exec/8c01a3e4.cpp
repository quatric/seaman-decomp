#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_VM_User_Icon_VMI_01a3ec_def(le<int>* ar4,int ar5,int ar6,undefined *ar7)

{
  TRACE_ENTER("s_VM_User_Icon_VMI_01a3ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  le<int>* ar7_00;
  uint uVar2;
  
  if ((ar5 != ar4[1]) || (*(le<undefined4>* )(unsigned)0x8c2791b0 == 0)) {
    *(le<undefined4>* )(unsigned)0x8c2791b0 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      ar5 = 4;
      *(le<undefined4>* )(unsigned)0x8c2791b4 = 2;
      ar4[2] = 7;
    }
    else if (ar5 == 0xc) {
      ar5 = 0x10;
      *(le<undefined4>* )(unsigned)0x8c2791b4 = 4;
      ar4[2] = 0xd;
    }
    else if (ar5 == 0x12) {
      ar5 = 0x40;
      *(le<undefined4>* )(unsigned)0x8c2791b4 = 6;
      ar4[2] = 0x13;
    }
    else {
      ar5 = 1;
      *(le<undefined4>* )(unsigned)0x8c2791b4 = 0;
      ar4[2] = 1;
    }
    ar6 = (int)ar4 + 0x62c;
    ar7 = ((void *)(unsigned)0x8c01c998);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbd2c(0xf,ar5,ar6,((void *)(unsigned)0x8c01c998)));
    if (iVar1 != 0) {
      return *(le<undefined4>* )(unsigned)0x8c2791b0;
    }
    uVar2 = 0;
    while ((uVar2 <= 0xffff && (*(le<undefined4>* )(unsigned)0x8c2791b0 != 1))) {
      uVar2 = uVar2 + 1;
    }
    if (0xffff <= uVar2) {
      return *(le<undefined4>* )(unsigned)0x8c2791b0;
    }
  }
  if (*(le<undefined4>* )(unsigned)0x8c2791b0 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1fda7e(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      return *(le<undefined4>* )(unsigned)0x8c2791b0;
    }
    *(le<undefined4>* )(unsigned)0x8c2791b0 = 2;
  }
  if (*(le<undefined4>* )(unsigned)0x8c2791b0 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1ffcc2(*(le<undefined4>* )(unsigned)0x8c2791b4,ar5,ar6,ar7));
    if (iVar1 != 0) {
      return *(le<undefined4>* )(unsigned)0x8c2791b0;
    }
    *(le<undefined4>* )(unsigned)0x8c2791b0 = 3;
  }
  if ((-1 < *ar4) && (*(le<int>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) == 3)) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 2;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3b5c(ar4[2],ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar4[5] = 0;
  }
  else if (iVar1 == 1) {
    ar4[5] = 3;
  }
  else {
    ar4[5] = 0;
  }
  ar7_00 = ar4 + 4;
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fb18)) + 0x11;
  ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fb18));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0213bc(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fb18)),ar6_00,ar7_00));
  if (iVar1 == 0) {
    ar4[4] = 0;
  }
  ar4[6] = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01be1c(ar4,ar5_00,ar6_00,ar7_00));
  return *(le<undefined4>* )(unsigned)0x8c2791b0;
}

__asm__(".globl s_VM_User_Icon_VMI_01a3ec\n.set s_VM_User_Icon_VMI_01a3ec, s_VM_User_Icon_VMI_01a3ec_def\n");

}
