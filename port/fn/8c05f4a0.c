#include "../decls.h"
int s_REACTION_CATCH_05f4a2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar7_00;
  undefined1 auStack_18 [20];
  
  if (*(int *)(ar4 + 0x6c) != 0) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  Vec3_ctor_copy(auStack_18,ar5 + 0x10,ar6,ar7);
  Vec3_assign_wrap_05f640(ar4,auStack_18,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  *(undefined4 *)(ar4 + 0x94) = 0x15;
  if (*(int *)(ar4 + 900) != -1) {
    *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
    iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x94) = 0;
      FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
      *(undefined4 *)(ar4 + 0x40) = 0x10;
      *(undefined4 *)(ar4 + 8) = 0x19;
      *(undefined1 *)(ar4 + 0x91) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined1 *)(ar4 + 0x80) = 1;
      *(undefined4 *)(ar4 + 900) = 0xffffffff;
    }
  }
  iVar1 = *(int *)(ar4 + 900);
  if (iVar1 == -1) {
    FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
    ar7_00 = s_REACTION_CATCH_8c136a22;
    uVar2 = 0;
    FUN_8c030568(ar4 + 0x9c,0x25,0,s_REACTION_CATCH_8c136a22,&DAT_8c1369bf);
    strcpy(ar4 + 0xbc,s_REACTION_CATCH_8c136a22,uVar2,ar7_00,ar5);
    strcpy(ar4 + 0xdc,&DAT_8c1369bf,uVar2,ar7_00,ar5);
    *(undefined4 *)(ar4 + 0xfc) = 0;
    iVar1 = ar4 + 0x9c;
    uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),iVar1,ar7_00);
    *(undefined4 *)(ar4 + 900) = uVar2;
    *(undefined4 *)(ar4 + 0x14c) = 0;
    iVar1 = FUN_8c030870(ar4 + 0x9c,2,iVar1,ar7_00);
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_05f4a2\n.set _s_REACTION_CATCH_05f4a2, _s_REACTION_CATCH_05f4a2_def\n");
