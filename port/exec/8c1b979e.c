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
undefined4 FUN_8c1b979e_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b979e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
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
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    uVar3 = (uint)((in_r2 & 0x80000000) != 0);
    iVar4 = uVar3 + ar4;
    *(uint *)(unsigned)(unaff_r12 + 4) = ain0;
    *ar5 = in_r3;
    *(char *)(unsigned)(in_GBR + 0xeb) = (char)ain0;
    iVar2 = ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)register0x0000003c + uVar3 + ar4)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9422(ar4,ar5,ar6,ar7_00); });
    *(undefined4 *)(unsigned)(iVar2 + -4) = in_R1_BANK;
    *(short *)(unsigned)(in_GBR + 0x108) = (short)(undefined4 *)(unsigned)(iVar2 + -4);
    *(unsigned *)(unsigned)(ar5 + 0x38) = (undefined1 *)(unsigned)((int)register0x0000003c + iVar4);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b960a(ar4,ar5,ar6,ar7_00));
    bVar5 = (uVar3 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar3 << 1) | (ushort)bVar5;
    if (bVar5) break;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b946e(ar4,ar5,ar6,ar7_00));
    if ((int)unaff_r9 < 0) {
      ain0 = uVar3 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      ain0 = uVar3 << ((uint)unaff_r9 & 0x1f);
    }
    register0x0000003c = (BADSPACEBASE *)(unsigned)(int)(char)ar4;
    *(short *)(unsigned)(in_GBR + 0x72) = (short)ain0;
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(unsigned)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)(*(undefined1 *)(unsigned)0x8c1b988a);
  *(ushort *)(unsigned)(in_GBR + 0xc) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9664(ar4,ar5,ar6,iVar4));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b979e\n.set _FUN_8c1b979e, _FUN_8c1b979e_def\n");
