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
undefined4 FUN_8c0cf6bc_def(int ar4,ulonglong *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cf6bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  ulonglong in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c437434) == '\0') {
    in_dr0 = CONCAT44(0x43c00000,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437430) = 0x43c00000;
    (*(undefined1 *)(unsigned)0x8c437434) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c43743c) == '\0') {
    in_dr0 = CONCAT44(0x438c0000,(int)in_dr0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437438) = 0x438c0000;
    (*(undefined1 *)(unsigned)0x8c43743c) = '\x01';
  }
  uVar2 = 2;
  sVar3 = (short)ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c((int)sVar3,2,ar6,ar7));
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)ar5 = 0x43c00000;
      *(undefined4 *)(unsigned)((int)ar5 + 4) = 0x438c0000;
    }
    else {
      *ar5 = 0x8c43743c43c00000;
      *(undefined8 *)(unsigned)((int)ar5 + 4) = 0x8c01031c438c0000;
    }
  }
  else if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)ar5 = 0;
    *(undefined4 *)(unsigned)((int)ar5 + 4) = 0x438c0000;
  }
  else {
    *ar5 = in_dr0 & 0xffffffff;
    *(undefined8 *)(unsigned)((int)ar5 + 4) = 0x8c01031c438c0000;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01538c(ar4 + 0x158,uVar2,ar6,ar7));
  iVar1 = (int)sVar3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014a94(ar4 + 0x158,iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01636c(ar4 + 0x160,iVar1,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0cf6bc\n.set _FUN_8c0cf6bc, _FUN_8c0cf6bc_def\n");
