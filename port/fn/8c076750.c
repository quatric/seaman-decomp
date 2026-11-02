#include "../decls.h"
undefined4 FUN_8c076750_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 uVar5;
  undefined1 auStack_1c [20];
  
  uVar5 = 1;
  iVar2 = ar6;
  FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_1c);
  FUN_8c082378(ar4,auStack_1c,iVar2,ar7);
  uVar4 = 0xffffffff;
  Vec3_dtor(auStack_1c,0xffffffff,iVar2,ar7);
  uVar1 = FUN_8c053724(ar5,uVar4,iVar2,ar7);
  if ((char)uVar1 == '\0') {
    FUN_8c031748(ar4,uVar4,iVar2,ar7);
    iVar3 = *(int *)(ar4 + 0x260);
    if (iVar3 == 0) {
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7);
      if (iVar2 == 1) {
        iVar2 = rand_range(ar4,0,100,ar7);
        if (((iVar2 == 0) && (2 < *(int *)(ar4 + 0x128))) && (*(int *)(ar4 + 0x128) < 6)) {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0x13;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
        }
        else {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar4,ar7_00);
      }
    }
    else if (((iVar3 == 3) || (iVar3 == 4)) &&
            ((iVar3 = *(int *)(ar4 + 0x128), iVar3 < 8 && (-1 < iVar3)))) {
                    
      switch(iVar3) {
      case 0:
      case 1:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      case 2:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      default:
        FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        break;
      case 6:
        if (ar6 == 0) {
          FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        }
        else {
          FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7);
        }
      }
    }
  }
  else {
    iVar3 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7);
    if (iVar3 == 1) {
      FUN_8c03c314(ar4,uVar4,iVar2,ar7);
      uVar5 = 0;
      *(undefined4 *)(ar4 + 0x2b4) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c076750\n.set _FUN_8c076750, _FUN_8c076750_def\n");
