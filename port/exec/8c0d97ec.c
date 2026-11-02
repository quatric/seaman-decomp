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
int FUN_8c0d97ec_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d97ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  uint extraout_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0103d0(*ar5,uVar3,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,uVar3,ar6,ar7));
    if ((char)uVar2 == '\x02') {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x10) = 1;
    }
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x14) = (ulonglong)extraout_fr1;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar5,uVar3,ar6,ar7));
    ar5_00 = 3;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar3,3,ar6,ar7));
    *(char *)(unsigned)(ar4 + 0x18) = (char)uVar2;
    *(char *)(unsigned)(ar4 + 0x18) = *(char *)(unsigned)(ar4 + 0x18) + '\x01';
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar3,ar5_00,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar3,500,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0x1c) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d97ec\n.set _FUN_8c0d97ec, _FUN_8c0d97ec_def\n");
