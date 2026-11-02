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
int FUN_8c2653e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2653e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  int *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  iVar1 = *unaff_r14;
  ar5_00 = 0;
  if (iVar1 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = *(int *)(unsigned)(iVar1 + 0x1cc);
    *(int *)(unsigned)(iVar1 + 0x1b0) = iVar2 + 0x20;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268650(iVar2 + 0x20,*unaff_r14 + 0x1d0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268650(iVar2 + 0x21,*unaff_r14 + 0x1d1,ar6,ar7));
    if ((*(char *)(unsigned)(*unaff_r14 + 0x1d0) == '\x01') && (*(char *)(unsigned)(*unaff_r14 + 0x1d1) == '\0')) {
      iVar1 = iVar2 + 0x23;
    }
    else {
      iVar1 = iVar2 + 0x22;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268650(iVar1,*unaff_r14 + 0x1d2,ar6,ar7));
    *(undefined1 *)(unsigned)(*unaff_r14 + 0x1d3) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 0xc0,*unaff_r14 + 0x1b4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 0xc4,*unaff_r14 + 0x1b8,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 200,*unaff_r14 + 0x1bc,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 0xcc,*unaff_r14 + 0x1c0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 0xd0,*unaff_r14 + 0x1c4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar2 + 0xd4,*unaff_r14 + 0x1c8,ar6,ar7));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c2653e0),ar5_00,ar6,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2653e8\n.set _FUN_8c2653e8, _FUN_8c2653e8_def\n");
