#include "../decls.h"
int s_REACTION_CATCH_1046a0_def(int ar4,int ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  if (*(int *)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    Vec3_ctor_copy(auStack_1c,ar5 + 0x10,ar6,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_1c,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x94) = 0x15;
    if (*(int *)(ar4 + 900) == -1) {
      FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH",&DAT_8c1eeec3);
      strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7,ar5);
      strcpy(ar4 + 0xdc,&DAT_8c1eeec3,uVar2,ar7,ar5);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),ar6,ar7);
      *(undefined4 *)(ar4 + 900) = uVar2;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      FUN_8c030870(ar4 + 0x9c,2,ar6,ar7);
    }
    iVar1 = *(int *)(ar4 + 900);
    if (iVar1 != -1) {
      *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
      iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x94) = 0;
        FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0x19;
        *(undefined1 *)(ar4 + 0x91) = 1;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined1 *)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(undefined4 *)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_1046a0\n.set _s_REACTION_CATCH_1046a0, _s_REACTION_CATCH_1046a0_def\n");
