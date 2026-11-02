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
undefined4 FUN_8c1b9c52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9c52";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  short *extraout_r1 = 0;
  uint extraout_r2 = 0;
  int extraout_r2_00 = 0;
  int iVar3;
  int *unaff_r9 = 0;
  char *unaff_r12 = 0;
  int in_GBR = (void *)0x8cf80000;
  char extraout_S = 0;
  char extraout_S_00 = 0;
  bool bVar4;
  undefined4 extraout_MACH = 0;
  undefined4 extraout_MACH_00 = 0;
  undefined4 extraout_MACL = 0;
  undefined4 extraout_MACL_00 = 0;
  
  iVar3 = (int)*unaff_r12;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9a72(ar4,ar5,ar6,iVar3));
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c1b9cd8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9c3a(ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c1b9cd8),ar6,iVar3));
  *(short *)(unsigned)(in_GBR + 0x1ce) = (short)uVar1;
  bVar4 = (extraout_r2 & 1) != 0;
  if (extraout_S != '\0') {
    mac_lOp(CONCAT44(extraout_MACH,extraout_MACL),
            (longlong)*unaff_r9 * (longlong)*(int *)(unsigned)(extraout_r2 >> 1 | (uint)bVar4 << 0x1f));
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + (-(uint)bVar4 - ar4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1bab30(ar4,uVar2,ar6,iVar3); })
  ;
  *(short *)(unsigned)(unaff_r12 + 0xf) = (short)uVar1;
  iVar3 = (int)unaff_r12[1];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9aa8(ar4,uVar2,ar6,iVar3));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9c52(ar4,uVar2,ar6,iVar3));
  *(short *)(unsigned)(in_GBR + 0x1cc) = (short)uVar2;
  if (extraout_S_00 != '\0') {
    mac_wOp(CONCAT44(extraout_MACH_00,extraout_MACL_00),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(unsigned)(extraout_r2_00 + 0x1a) = (short)uVar2;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c52\n.set _FUN_8c1b9c52, _FUN_8c1b9c52_def\n");
