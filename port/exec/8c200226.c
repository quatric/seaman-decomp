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
undefined4 FUN_8c200226_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200226";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  uint a6;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint a6_00;
  
  a6 = 0xfffa;
  iVar7 = 0;
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  (*(ushort *)(fr0_ - 0x2c)) = *(ushort *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x1c) + 0x14);
  uVar1 = (uint)(short)(*(ushort *)(fr0_ - 0x2c));
  iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x1c) + 0x18);
  a6_00 = 0xfffa + 2;
  if (0 < iVar5) {
    do {
      uVar3 = uVar1 & 0xffff;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2009d0(ar4,uVar3,ar6,ar7));
      ar6 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar3,a6_00,ar7));
      if (((uVar1 & 0xffff) == a6) || ((uVar1 & 0xffff) == a6_00)) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  uVar1 = (uint)(short)(*(ushort *)(fr0_ - 0x2c));
  iVar7 = 0;
  do {
    if (iVar5 <= iVar7) {
      if ((uint)(*(ushort *)(fr0_ - 0x2c)) != *(uint *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x1c) + 0x14)) {
        uVar4 = 0x4a;
        iVar5 = (int)(short)(*(ushort *)(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)0x8c4783dc + 0x10))))(*(undefined4 *)(unsigned)(iVar6 + 0x20),0x4a,iVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2007f0(ar4,uVar4,iVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20065a(ar4,uVar4,iVar5,ar7));
      }
      return 0;
    }
    while (iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                             (ar4,uVar1 & 0xffff,*(int *)(unsigned)(iVar6 + 0x28) + iVar7 * 0x200,ar7)),
          iVar2 != 0) {
      if (iVar2 == (int)0xffffff01) {
        return iVar2;
      }
      uVar4 = 0xffff;
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,0xffff,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fe15a(ar4,a6_00,uVar4,ar7));
    }
    if (iVar7 == 0) {
      (*(ushort *)(fr0_ - 0x2c)) = (ushort)uVar1;
    }
    uVar3 = a6;
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,a6,ar7));
    if (iVar7 != iVar5 + -1) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fe15a(ar4,a6_00,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,uVar4,ar7));
      uVar1 = (uint)(short)uVar4;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c200226\n.set _FUN_8c200226, _FUN_8c200226_def\n");
