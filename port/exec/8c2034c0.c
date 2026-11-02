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
undefined4 FUN_8c2034c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2034c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2753e8) == 1) {
    uVar5 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d280),((undefined1 *)(unsigned)0x8c26d28c),0,ar7));
    if (iVar1 == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) = 0x1000000;
      uVar2 = 0xe4;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753ec) = 0x1000000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4) = 0x1000000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f8) = 0x1000000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc) = 0;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
      uVar2 = 0xe4;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753ec) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f8) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc) = 0;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203400(uVar2,uVar3,uVar5,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c275410) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c275424) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(uVar2,uVar3,uVar5,ar7));
    if (iVar1 != 0) {
      *(undefined4 *)(unsigned)(iVar1 + 0xc) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0);
      *(undefined4 *)(unsigned)(iVar1 + 0x10) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4);
      puVar4 = ((undefined4 *)(unsigned)0x8c275400);
LAB_8c20362c:
      *(undefined4 *)(unsigned)(iVar1 + 8) = puVar4[2];
      puVar4[2] = iVar1;
      *(undefined4 *)(unsigned)(iVar1 + 4) = puVar4[3];
      puVar4[3] = iVar1;
      return 0;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d280),((undefined1 *)(unsigned)0x8c26d28c),0,ar7));
    if (iVar1 == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) = 0x1000000;
      uVar2 = 0xe4;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753ec) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f8) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc) = 0x800000;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753ec) = 0x400000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4) = 0x400000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753f8) = 0x400000;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc) = 0x400000;
      uVar2 = 0xe4;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203400(uVar2,uVar3,uVar5,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c275410) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c275424) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(uVar2,uVar3,uVar5,ar7));
    if (iVar1 != 0) {
      *(undefined4 *)(unsigned)(iVar1 + 0xc) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f0);
      *(undefined4 *)(unsigned)(iVar1 + 0x10) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f4);
      *(int *)(unsigned)(iVar1 + 8) = (*(undefined4 *)(unsigned)(unsigned)0x8c275408);
      (*(undefined4 *)(unsigned)(unsigned)0x8c275408) = iVar1;
      *(int *)(unsigned)(iVar1 + 4) = (*(undefined4 *)(unsigned)(unsigned)0x8c27540c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c27540c) = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(iVar1,((undefined4 *)(unsigned)0x8c275400),uVar5,ar7));
      if (iVar1 != 0) {
        puVar4 = ((undefined4 *)(unsigned)0x8c275414);
        *(undefined4 *)(unsigned)(iVar1 + 0xc) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753f8);
        *(undefined4 *)(unsigned)(iVar1 + 0x10) = (*(undefined4 *)(unsigned)(unsigned)0x8c2753fc);
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}

__asm__(".globl _FUN_8c2034c0\n.set _FUN_8c2034c0, _FUN_8c2034c0_def\n");
