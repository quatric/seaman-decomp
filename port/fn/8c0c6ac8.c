#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_0c6ad0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar4_00;
  undefined4 uVar4;
  undefined **ar5_00;
  undefined4 uVar5;
  char *ar6_00;
  undefined4 in_stack_ffffffcc;
  
  uVar5 = 1;
  uVar4 = 0xffffffff;
  FUN_8c0c3e78(&DAT_8c2b5628,0xffffffff,1,ar7);
  iVar3 = *(int *)(ar4 + 0x2d3a0);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      iVar3 = ar5[499];
      FUN_8c1011e0(iVar3,uVar4,uVar5,ar7);
      FUN_8c0242e8(iVar3,uVar4,uVar5,ar7);
      _DAT_8c431a54 = 0;
      DAT_8c13bcc4 = 1;
      _DAT_8c436924 = 0;
      _DAT_8c436928 = 0;
      FUN_8c015ad4(0x8c43690c,&DAT_8c1622a4,uVar5,ar7,in_stack_ffffffcc);
      ar5_00 = &PTR_PTR_8c146440;
      Class_129920_m0_015248(0x8c43691c,&PTR_PTR_8c146440,uVar5,ar7,in_stack_ffffffcc);
      uVar4 = get_field_4_0253e4(0x8c43691c,ar5_00,uVar5,ar7);
      ar6_00 = s_GRAPHICS_COMMON_8c13d004;
      iVar3 = FUN_8c020ef0(0x8c3eb334,s_MUNZU_HAND_8c13d107,s_GRAPHICS_COMMON_8c13d004,uVar4);
      if (iVar3 == 0) {
        uVar4 = 2;
        ar6_00 = (char *)0x0;
        report_error_message(s_Failed_to_load_munzu_hand_8c13d112,s_CGame__Initial___8c13d12c,0,2);
      }
      uVar5 = 0;
      ar4_00 = &DAT_8c2b5628;
      FUN_8c0c4d70(&DAT_8c2b5628,0,ar6_00,uVar4);
      FUN_8c06a524(ar4_00,uVar5,ar6_00,uVar4);
      *(undefined4 *)(ar4 + 0x2d3a0) = 1;
      break;
    case 1:
      uVar1 = get_field_a510_01f538(0x8c3dd7dc,uVar4,uVar5,ar7);
      iVar3 = FUN_8c0b7920(uVar1,uVar4,uVar5,ar7);
      if (iVar3 == 1) {
        uVar1 = s_SEAMANDC_USR_0b76dc(uVar1,uVar4,uVar5,ar7);
        iVar3 = FUN_8c0b787c(uVar1,uVar4,uVar5,ar7);
        if (iVar3 == 1) {
          _DAT_8c43711c = *ar5;
          *(undefined4 *)(ar4 + 0x2d3a0) = 2;
        }
      }
      break;
    case 2:
      if (3 < (uint)(*ar5 - _DAT_8c43711c)) {
        *(undefined4 *)(ar4 + 0x2d3a0) = 3;
      }
      break;
    case 3:
      iVar3 = FUN_8c0b7454(s_SM2000US_USR_8c13d13d,0x8c431a68,0x4208,ar7);
      iVar2 = FUN_8c0b7454(s_SM2000US_INC_8c13d14a,0x8c435c7c,0x600,ar7);
      if ((iVar3 == 0) && (iVar2 == 0)) {
        uVar4 = 0x8c431a68;
        FUN_8c0cc784(ar4,ar5,0x8c431a68,ar7);
        (**(code **)(**(int **)(ar4 + 0x14) + 0xc0))(*(int **)(ar4 + 0x14),0x8c435c7c,uVar4,ar7);
        *(undefined4 *)(ar4 + 0x2d3a0) = 4;
      }
      else {
        *(undefined4 *)(ar4 + 0x2d3a0) = 1;
      }
      break;
    case 4:
      FUN_8c258e0a(FUN_8c0d1c3c,uVar4,uVar5,ar7,in_stack_ffffffcc);
      FUN_8c0b9230(ar5,uVar4,uVar5,ar7);
      *(undefined4 *)(ar4 + 0x2d15c) = 1;
      *(undefined4 *)(ar4 + 0x2d3a0) = 0;
    }
  }
  return 1;
}

__asm__(".globl _s_GRAPHICS_COMMON_0c6ad0\n.set _s_GRAPHICS_COMMON_0c6ad0, _s_GRAPHICS_COMMON_0c6ad0_def\n");
