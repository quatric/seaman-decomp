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
undefined4 FUN_8c1b9794_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9794";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint in_r0 = (uint)(unsigned long)vin0;
  uint uVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint in_r2 = 0;
  undefined1 extraout_r3 = 0;
  undefined1 in_r3 = 0;
  int ar7_00;
  int iVar4;
  char *unaff_r9 = 0;
  int unaff_r12 = 0;
  undefined4 in_R1_BANK = 0;
  int in_GBR = (void *)0x8cf80000;
  bool bVar5;
  
  while( true ) {
    if ((int)unaff_r9 < 0) {
      uVar2 = in_r0 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      uVar2 = in_r0 << ((uint)unaff_r9 & 0x1f);
    }
    *(short *)(unsigned)(in_GBR + 0x72) = (short)uVar2;
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    iVar4 = (char)ar4 + ar4;
    *(uint *)(unsigned)(unaff_r12 + 4) = uVar2;
    *ar5 = in_r3;
    *(char *)(unsigned)(in_GBR + 0xeb) = (char)uVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9422(ar4,ar5,ar6,ar7_00));
    *(undefined4 *)(unsigned)(iVar3 + -4) = in_R1_BANK;
    *(short *)(unsigned)(in_GBR + 0x108) = (short)(undefined4 *)(unsigned)(iVar3 + -4);
    *(uint *)(unsigned)(ar5 + 0x38) = iVar4 + (uint)((in_r2 & 0x80000000) != 0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b960a(ar4,ar5,ar6,ar7_00));
    bVar5 = (uVar2 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar2 << 1) | (ushort)bVar5;
    if (bVar5) break;
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b946e(ar4,ar5,ar6,ar7_00));
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(unsigned)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)(*(undefined1 *)(unsigned)0x8c1b988a);
  *(ushort *)(unsigned)(in_GBR + 0xc) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9664(ar4,ar5,ar6,iVar4));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9794\n.set _FUN_8c1b9794, _FUN_8c1b9794_def\n");
