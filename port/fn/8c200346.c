#include "../decls.h"
int FUN_8c200346_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 ar6_00;
  uint unaff_r8;
  int iVar6;
  int iVar7;
  uint a5;
  
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  uVar5 = *(uint *)(iVar6 + 0x1c);
  iVar3 = *(int *)(uVar5 + 0x18);
  uVar4 = *(uint *)(uVar5 + 0x14);
  iVar7 = 0;
  bVar1 = false;
  do {
    a5 = uVar4 & 0xffff;
    if (iVar3 <= iVar7) {
      if ((!bVar1) ||
         ((iVar3 = FUN_8c2007f0(ar4,uVar5,ar6,ar7), -1 < iVar3 &&
          (iVar3 = FUN_8c20065a(ar4,uVar5,ar6,ar7), -1 < iVar3)))) {
        iVar3 = 0;
      }
      return iVar3;
    }
    if (*(char *)(iVar6 + 0x48 + iVar7) == '\0') {
      uVar5 = a5;
      uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
    }
    else {
      while( true ) {
        ar6 = *(int *)(iVar6 + 0x28) + iVar7 * 0x200;
        iVar2 = FUN_8c1fbc44(ar4,a5,ar6,ar7);
        if (iVar2 == 0) break;
        if (iVar2 == (int)0xffffff01) {
          return iVar2;
        }
        bVar1 = true;
        uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
        ar6_00 = 0xffff;
        FUN_8c20099e(ar4,a5,0xffff,ar7);
        uVar5 = FUN_8c1fe15a(ar4,0xfffc,ar6_00,ar7);
        if ((int)uVar5 < 0) {
          return (int)(int)0xffffff04;
        }
        FUN_8c20099e(ar4,uVar5,uVar4 & 0xffff,ar7);
        if (iVar7 == 0) {
          (**(code **)(*(undefined4 *)0x8c4783dc + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,uVar5,ar7);
          unaff_r8 = a5;
          a5 = uVar5;
        }
        else {
          FUN_8c20099e(ar4,unaff_r8,uVar5,ar7);
          unaff_r8 = a5;
          a5 = uVar5;
        }
      }
      uVar5 = a5;
      uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
      *(undefined1 *)(iVar6 + 0x48 + iVar7) = 0;
    }
    iVar7 = iVar7 + 1;
    unaff_r8 = a5;
  } while( true );
}

__asm__(".globl _FUN_8c200346\n.set _FUN_8c200346, _FUN_8c200346_def\n");
