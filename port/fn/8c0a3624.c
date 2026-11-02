#include "../decls.h"
undefined4 FUN_8c0a3624_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float in_fr1;
  float extraout_fr1;
  char cVar4;
  char cVar5;
  undefined1 auStack_20 [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  if (*(int *)(ar4 + 300) == 0) {
    FUN_8c032518(ar4,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x54,auStack_20,ar6,ar7);
    Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
    ar7 = 0;
    ar6_00 = 0xffffffff;
    ar5_00 = 1;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7);
    FUN_8c031b68(ar4,0x8c2851b0,ar6_00,ar7);
    ar6 = ar4 + 0x54;
    FUN_8c031bb4(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    in_fr1 = extraout_fr1;
  }
  else if (*(int *)(ar4 + 300) != 1) {
    return 1;
  }
  if (cVar5 == '\0') {
    in_fr1 = *(float *)(ar4 + 0x130);
  }
  if (cVar4 == '\0' && in_fr1 < 0.0) {
    vec3_clear(ar4 + 0x224,uVar2,ar6,ar7);
    uVar2 = ar5;
    FUN_8c031c74(ar4,ar5,ar5,ar7);
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,uVar2,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  else {
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7);
    iVar1 = FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a3624\n.set _FUN_8c0a3624, _FUN_8c0a3624_def\n");
