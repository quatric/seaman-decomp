#include "../decls.h"
undefined4 s_CMothLine_08ad54_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [68];
  
  piStack_c4 = ar5;
  uStack_c0 = ar6;
  iVar1 = get_field_25c_08a6f8(ar4 + 0x538,ar5,ar6,ar7);
  iStack_a0 = iVar1;
  Vec3_ctor_zero((int)&piStack_c4 + 0xa8,ar5,ar6,ar7);
  iStack_a4 = iVar1;
  if (*(int *)(0x8ec + ar4 + iVar1 * 4) == 0) {
    ar7 = 2;
    ar6 = 1;
    (*(code *)(&report_error_message))
              ((&DATA_8c139fcc) + 0x466,
               (&DATA_8c139fcc) + 0x470,1,2);
  }
  else {
    iVar3 = *(int *)(0x8ec + ar4 + iVar1 * 4);
    uVar2 = uStack_c0;
    iStack_a8 = iVar1;
    (**(code **)(0x10c + *(int *)(iVar3 + 8)))(iVar3,uStack_c0,ar6,ar7);
    if (iVar1 == 0) {
      (**(code **)(0x140 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      (*(code *)(&FUN_8c0230f0))
                (&stack0xffffff38 + 0x9c,uVar2,ar6,ar7,(int)&piStack_c4 + 0x88);
      Vec3_normalize(&stack0xffffff38 + 0x8c,uVar2,ar6,ar7);
      Vec3_scale(auStack_4c,(&DATA_8c139fc4),ar6,ar7,auStack_5c);
      Vec3_assign((int)&piStack_c4 + 0xa8,auStack_5c,ar6,ar7);
      Vec3_dtor(auStack_5c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,ar6,ar7);
      Vec3_dtor((int)&piStack_c4 + 0x88,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor((int)&piStack_c4 + 0x98,0xffffffff,ar6,ar7);
    }
    else {
      (**(code **)(0x140 + *(int *)(ar4 + 8)))(ar4,uVar2,ar6,ar7);
      FUN_8c0230f0(auStack_6c,uVar2,ar6,ar7,auStack_7c);
      Vec3_normalize(auStack_7c,uVar2,ar6,ar7);
      Vec3_scale(auStack_8c,(&DATA_8c139fc8),ar6,ar7,auStack_9c);
      Vec3_assign((int)&piStack_c4 + 0xa8,auStack_9c,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_7c,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_6c,0xffffffff,ar6,ar7);
    }
    iStack_ac = iVar1;
    FUN_8c036988(*(undefined4 *)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    iVar3 = *(int *)(0x8ec + ar4 + iVar1 * 4);
    iStack_b0 = iVar1;
    (**(code **)(*(int *)(iVar3 + 8) + 0x5c))(iVar3,uVar2,ar6,ar7);
    uVar2 = *(undefined4 *)(0x8ec + ar4 + iVar1 * 4);
    iStack_b4 = iVar1;
    (**(code **)(*piStack_c4 + 0x4c))(piStack_c4,uVar2,ar6,ar7);
    iStack_b8 = iVar1;
    FUN_8c036988(*(undefined4 *)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7);
    *(undefined4 *)(0x8ec + ar4 + iVar1 * 4) = 0;
    iStack_bc = iVar1;
  }
  uVar2 = Vec3_dtor((int)&piStack_c4 + 0xa8,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _s_CMothLine_08ad54\n.set _s_CMothLine_08ad54, _s_CMothLine_08ad54_def\n");
