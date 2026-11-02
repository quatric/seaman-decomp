#include "../decls.h"
undefined4 FUN_8c200226_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  uint a6;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint a6_00;
  ushort uStack_2c;
  
  a6 = 0xfffa;
  iVar7 = 0;
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  uStack_2c = *(ushort *)(*(int *)(iVar6 + 0x1c) + 0x14);
  uVar1 = (uint)(short)uStack_2c;
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 0x18);
  a6_00 = 0xfffa + 2;
  if (0 < iVar5) {
    do {
      uVar3 = uVar1 & 0xffff;
      uVar1 = FUN_8c2009d0(ar4,uVar3,ar6,ar7);
      ar6 = a6_00;
      FUN_8c20099e(ar4,uVar3,a6_00,ar7);
      if (((uVar1 & 0xffff) == a6) || ((uVar1 & 0xffff) == a6_00)) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  uVar1 = (uint)(short)uStack_2c;
  iVar7 = 0;
  do {
    if (iVar5 <= iVar7) {
      if ((uint)uStack_2c != *(uint *)(*(int *)(iVar6 + 0x1c) + 0x14)) {
        uVar4 = 0x4a;
        iVar5 = (int)(short)uStack_2c;
        (**(code **)(*(undefined4 *)0x8c4783dc + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,iVar5,ar7);
        FUN_8c2007f0(ar4,uVar4,iVar5,ar7);
        FUN_8c20065a(ar4,uVar4,iVar5,ar7);
      }
      return 0;
    }
    while (iVar2 = (*(code *)(&FUN_8c1fbc44))
                             (ar4,uVar1 & 0xffff,*(int *)(iVar6 + 0x28) + iVar7 * 0x200,ar7),
          iVar2 != 0) {
      if (iVar2 == (int)0xffffff01) {
        return iVar2;
      }
      uVar4 = 0xffff;
      FUN_8c20099e(ar4,uVar1 & 0xffff,0xffff,ar7);
      uVar1 = FUN_8c1fe15a(ar4,a6_00,uVar4,ar7);
    }
    if (iVar7 == 0) {
      uStack_2c = (ushort)uVar1;
    }
    uVar3 = a6;
    FUN_8c20099e(ar4,uVar1 & 0xffff,a6,ar7);
    if (iVar7 != iVar5 + -1) {
      uVar4 = FUN_8c1fe15a(ar4,a6_00,uVar3,ar7);
      FUN_8c20099e(ar4,uVar1 & 0xffff,uVar4,ar7);
      uVar1 = (uint)(short)uVar4;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c200226\n.set _FUN_8c200226, _FUN_8c200226_def\n");
