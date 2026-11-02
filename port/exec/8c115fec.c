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
undefined4 FUN_8c115fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115fec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  undefined4 uVar2;
  int extraout_r3 = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint d;
  
  iVar4 = 0;
  if (*(char *)(unsigned)(ar4 + 0x15c) == '\0') {
    if ((10 < *(uint *)(unsigned)(ar4 + 300)) || (*(uint *)(unsigned)(ar4 + 0x158) >> 2 < (uint)*(ushort *)(unsigned)(ar4 + 0x50))
       ) {
      *(undefined1 *)(unsigned)(ar4 + 0x15c) = 1;
    }
  }
  else {
    d = 1;
    iVar3 = 0;
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 + *(int *)(unsigned)(ar4 + 0x170 + iVar3);
      d = d + *(int *)(unsigned)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5 * 0x80,d,vr6,vr7));
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5,d >> 7,vr6,vr7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x168) = uVar2;
    iVar3 = *(int *)(unsigned)(ar4 + 0x158) - (uint)*(ushort *)(unsigned)(ar4 + 0x50);
    iVar6 = iVar3 * *(int *)(unsigned)(ar4 + 0x16c) * *(int *)(unsigned)(ar4 + 0x168);
    if (iVar3 < 1) {
      iVar3 = -0x1fffc000;
      if ((iVar6 < 1) && (iVar3 = iVar6, iVar6 < -0x1fffc000)) {
        iVar3 = -0x1fffc000;
      }
    }
    else {
      iVar3 = 0x1fffc000;
      if ((-1 < iVar6) && (iVar3 = iVar6, 0x1fffc000 < iVar6)) {
        iVar3 = 0x1fffc000;
      }
    }
    uVar1 = *(ushort *)(unsigned)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(ushort *)(unsigned)(ar4 + 0x160) < iVar3) {
      *(undefined2 *)(unsigned)(ar4 + 0x15e) = *(undefined2 *)(unsigned)(ar4 + 0x160);
    }
    else {
      *(short *)(unsigned)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,3,vr6,vr7));
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,uVar2,vr6,vr7));
      *(short *)(unsigned)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(unsigned)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(unsigned)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(unsigned)(ar4 + 0x198) + 1;
    *(uint *)(unsigned)(ar4 + 0x170 + iVar6) =
         (uint)*(ushort *)(unsigned)(ar4 + 0x50) * (uint)*(ushort *)(unsigned)(ar4 + 0x15e) >> 3;
    *(uint *)(unsigned)(iVar6 + ar4 + 0x184) =
         (uint)*(ushort *)(unsigned)(ar4 + 0x50) * (uint)*(ushort *)(unsigned)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(unsigned)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c115fec\n.set _FUN_8c115fec, _FUN_8c115fec_def\n");
