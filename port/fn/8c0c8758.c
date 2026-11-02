#include "../decls.h"
undefined4 s_BUGBOX_3_0c8762_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffff84;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [36];
  
  iVar2 = ar5;
  FUN_8c0c84cc(auStack_38,ar5,ar6,ar7);
  uVar6 = 1;
  Vec3_ctor_zero(auStack_48,iVar2,ar6,ar7);
  puVar5 = auStack_38;
  iVar2 = ar5;
  (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0xb0))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  (**(code **)(**(int **)(ar4 + 8) + 0x30))(*(int **)(ar4 + 8),iVar2,puVar5,ar7);
  sVar1 = *(short *)(ar4 + 0x2d1ac);
  if (sVar1 == 0) {
    _DAT_8c436a18 = 0;
    _DAT_8c436a14 = 0;
    _DAT_8c436a10 = 0;
    _DAT_8c436a0c = 0;
    ar7 = 4;
    puVar5 = &DAT_8c436a0c;
    FUN_8c016318(0x8c436978,&DAT_8c4369ec,&DAT_8c436a0c,4,in_stack_ffffff84);
    iVar2 = 0x60;
    FUN_8c015198(0x8c436978,0x60,puVar5,ar7,in_stack_ffffff84);
    FUN_8c0c51c4(*(undefined4 *)(ar5 + 0x7cc),iVar2,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 1;
  }
  else if (sVar1 == 1) {
    if (_DAT_8c436a0c < 0xfc000000) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        *(int *)(&DAT_8c436a0c + iVar3 * 4) = *(int *)(&DAT_8c436a0c + iVar3 * 4) + 0x3000000;
      }
    }
    else {
      iVar2 = pack_acquire_entry_handle(0x8c2b59d0,s_BUGBOX_3_8c13d1a9,puVar5,ar7);
      ar7 = 0;
      puVar5 = (undefined1 *)0x0;
      DAT_8c13cbf4 = iVar2;
      FUN_8c021d90(0x8c2b59d0,iVar2,0,0);
      *(undefined2 *)(ar4 + 0x2d1ac) = 2;
    }
  }
  else if (sVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 8) + 0x78))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 8) + 0x9c))(*(int **)(ar4 + 8),0,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x18))(*(int **)(ar4 + 0xc),0x8c3eb334,puVar5,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar2 = s_Shell_0fef9c(0x8c3eb324,0xe,0x1b,ar7);
    (**(code **)(*(int *)(iVar2 + 8) + 0xe0))(iVar2,0x8c3eb334,0,ar7);
    uVar6 = 1;
    puVar5 = auStack_48;
    (**(code **)(*(int *)(iVar2 + 8) + 0x150))(iVar2,puVar5,1,ar7);
    FUN_8c036988(iVar2,puVar5,uVar6,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar2,uVar6,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    uVar4 = 0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,uVar4,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,uVar4,ar7);
    FUN_8c036988(iVar3,iVar2,uVar4,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,uVar4,ar7);
    iVar3 = s_Shell_0fef9c(0x8c3eb324,0xb,0x1b,ar7);
    puVar5 = (undefined1 *)0x0;
    uVar6 = 0x8c3eb334;
    (**(code **)(*(int *)(iVar3 + 8) + 0xe0))(iVar3,0x8c3eb334,0,ar7);
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar6,puVar5,ar7);
    iVar2 = ar5;
    (**(code **)(*(int *)(iVar3 + 8) + 0x10c))(iVar3,ar5,puVar5,ar7);
    FUN_8c036988(iVar3,iVar2,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x4c))(*(int **)(ar4 + 0xc),iVar3,puVar5,ar7);
    FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),1,puVar5,ar7);
    (**(code **)(**(int **)(ar4 + 0xc) + 0x98))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    iVar2 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 0x70))(*(int **)(ar4 + 0xc),0,puVar5,ar7);
    *(undefined2 *)(ar4 + 0x2d1ac) = 3;
    uVar6 = 0;
  }
  if (_DAT_8c436a0c != 0) {
    FUN_8c016340(0x8c436978,iVar2,puVar5,ar7);
  }
  Vec3_dtor(auStack_48,0xffffffff,puVar5,ar7);
  FUN_8c0c8480(auStack_38,0xffffffff,puVar5,ar7);
  return uVar6;
}

__asm__(".globl _s_BUGBOX_3_0c8762\n.set _s_BUGBOX_3_0c8762, _s_BUGBOX_3_0c8762_def\n");
