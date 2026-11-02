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
undefined4 FUN_8c11d488_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d488";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int ar5_00;
  int ar4_00;
  undefined4 uVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar4_01;
  uint uVar6;
  int ar5_01;
  int ar4_02;
  int iVar7;
  
  ar4_01 = *(int *)(unsigned)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)0x7d0;
  iVar4 = *(int *)(unsigned)(0xfc + ar4);
  do {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(ar4_01,*(undefined4 *)(unsigned)(ar4 + 0x74),ar6,ar7));
    if (ar5_00 == 0) {
      return 0;
    }
    ar4_02 = *(int *)(unsigned)(0x124 + ar4 + iVar7);
    uVar6 = ar4_02 + (uint)*(ushort *)(unsigned)(ar4_01 + 0xc);
    if (*(uint *)(unsigned)(0x130 + ar4 + iVar7) < uVar6) {
      ar5_01 = *(int *)(unsigned)(0x118 + ar4 + iVar7);
      ar6_00 = *(int *)(unsigned)(0x130 + ar4 + iVar7) - ar5_01;
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x14))))(ar6_00 + iVar5,0xf4 + ar4,ar6,ar7));
      if (ar4_00 == 0) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,2,vr6,vr7));
        return uVar2;
      }
      if (ar5_01 != 0) {
        iVar3 = ar6_00;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,ar5_01,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(ar5_01,0xf4 + ar4,iVar3,ar7));
      }
      iVar3 = (int)0x130;
      ar4_02 = (ar4_02 - ar5_01) + ar4_00;
      uVar1 = *(ushort *)(unsigned)(ar4_01 + 0xc);
      *(int *)(unsigned)(0x118 + ar4 + iVar7) = ar4_00;
      *(int *)(unsigned)(iVar3 + ar4 + iVar7) = ar4_00 + ar6_00 + iVar5;
      uVar6 = ar4_02 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(unsigned)(ar4_01 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_02,ar5_00,ar6,ar7));
    *(uint *)(unsigned)(0x124 + ar4 + iVar7) = uVar6;
  } while( true );
}

__asm__(".globl _FUN_8c11d488\n.set _FUN_8c11d488, _FUN_8c11d488_def\n");
