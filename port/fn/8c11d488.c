#include "../decls.h"
undefined4 FUN_8c11d488_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
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
  
  ar4_01 = *(int *)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)0x7d0;
  iVar4 = *(int *)(0xfc + ar4);
  do {
    ar5_00 = FUN_8c111fbe(ar4_01,*(undefined4 *)(ar4 + 0x74),ar6,ar7);
    if (ar5_00 == 0) {
      return 0;
    }
    ar4_02 = *(int *)(0x124 + ar4 + iVar7);
    uVar6 = ar4_02 + (uint)*(ushort *)(ar4_01 + 0xc);
    if (*(uint *)(0x130 + ar4 + iVar7) < uVar6) {
      ar5_01 = *(int *)(0x118 + ar4 + iVar7);
      ar6_00 = *(int *)(0x130 + ar4 + iVar7) - ar5_01;
      ar4_00 = (**(code **)(iVar4 + 0x14))(ar6_00 + iVar5,0xf4 + ar4,ar6,ar7);
      if (ar4_00 == 0) {
        uVar2 = FUN_8c1204c4(ar4 + 0x48,2);
        return uVar2;
      }
      if (ar5_01 != 0) {
        iVar3 = ar6_00;
        memmove(ar4_00,ar5_01,ar6_00,ar7);
        (**(code **)(iVar4 + 0x18))(ar5_01,0xf4 + ar4,iVar3,ar7);
      }
      iVar3 = (int)0x130;
      ar4_02 = (ar4_02 - ar5_01) + ar4_00;
      uVar1 = *(ushort *)(ar4_01 + 0xc);
      *(int *)(0x118 + ar4 + iVar7) = ar4_00;
      *(int *)(iVar3 + ar4 + iVar7) = ar4_00 + ar6_00 + iVar5;
      uVar6 = ar4_02 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(ar4_01 + 0xc);
    memmove(ar4_02,ar5_00,ar6,ar7);
    *(uint *)(0x124 + ar4 + iVar7) = uVar6;
  } while( true );
}

__asm__(".globl _FUN_8c11d488\n.set _FUN_8c11d488, _FUN_8c11d488_def\n");
