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
undefined4 FUN_8c0c3b74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c3b74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 760; for (int i_ = 0; i_ < 760; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  undefined8 in_dr4 = 0;
  undefined1 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 ain0;
  
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      ((float *)(fr0_ - 0x118))[iVar3 * 8 + iVar2 * 2] =
           *(float *)(unsigned)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x54) + F32HI(in_dr4);
      ((float *)(fr0_ - 0x118))[iVar3 * 8 + iVar2 * 2 + 1] =
           *(float *)(unsigned)(ar4 + iVar3 * 0x20 + iVar2 * 8 + 0x58) + (float)in_dr4;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_0101e4((uint)(*(byte *)(fr0_ + 0x00000002)),10,ar6,ar7));
  uVar4 = (undefined1)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_01031c((uint)(*(byte *)(fr0_ + 0x00000002)),10,ar6,ar7));
  uVar5 = CONCAT11((char)uVar1,uVar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_0101e4((uint)(*(byte *)(fr0_ + 0x00000003)),10,ar6,ar7));
  uVar6 = (uint)CONCAT12((char)uVar1,uVar5);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_01031c((uint)(*(byte *)(fr0_ + 0x00000003)),10,ar6,ar7));
  ain0 = CONCAT13((char)uVar1,(int3)uVar6);
  (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_0101e4((uint)(*(ushort *)(fr0_ + 0x00000000)),1000,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_01031c((uint)(*(ushort *)(fr0_ + 0x00000000)),1000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_01031c((uint)(*(ushort *)(fr0_ + 0x00000000)),100,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_0101e4(uVar1,10,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 760)), libgcc_divide_helper_01031c((uint)(*(ushort *)(fr0_ + 0x00000000)),10,ar6,ar7));
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if (((iVar3 != 0) || ((char)ain0 != '\0')) &&
       ((iVar3 != 2 || ((char)((uint)ain0 >> 0x10) != '\0')))) {
      *(ushort *)(unsigned)(ar4 + 0x184) = (ushort)(byte)((fr0_ + (int)0xfffffe84))[iVar3] << 4;
      *(undefined2 *)(unsigned)(ar4 + 0x186) = 0x3f;
      *(ushort *)(unsigned)(ar4 + 0x188) = (ushort)(byte)((fr0_ + (int)0xfffffe84))[iVar3] << 4;
      *(undefined2 *)(unsigned)(ar4 + 0x18a) = 0x20;
      *(ushort *)(unsigned)(ar4 + 0x18c) = (ushort)(byte)((fr0_ + (int)0xfffffe84))[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0x20;
      *(ushort *)(unsigned)(ar4 + 400) = (ushort)(byte)((fr0_ + (int)0xfffffe84))[iVar3] * 0x10 + 0xf;
      *(undefined2 *)(unsigned)(ar4 + 0x192) = 0x3f;
      ar7_00 = 4;
      ar6_00 = ar4 + 0x164;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 760)); FUN_8c016318(ar4 + 0x20,((float *)(fr0_ - 0x118)) + iVar3 * 8,ar6_00,4); });
      iVar2 = ar4 + 0x184;
      (vsp = ((unsigned long)(fr0_ - 760)), FUN_8c016324(ar4 + 0x20,iVar2,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 760)), FUN_8c01538c(ar4 + 4,iVar2,ar6_00,ar7_00));
      uVar1 = 0;
      (vsp = ((unsigned long)(fr0_ - 760)), FUN_8c014a94(ar4 + 4,0,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 760)), FUN_8c016340(ar4 + 0x20,uVar1,ar6_00,ar7_00));
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c0c3b74\n.set _FUN_8c0c3b74, _FUN_8c0c3b74_def\n");
