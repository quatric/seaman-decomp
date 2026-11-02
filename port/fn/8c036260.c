#include "../decls.h"
int s_GRAPHICS_FROGMANLINE_036266_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  undefined4 extraout_fr1;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = 1;
  uVar1 = 5;
  ar7_00 = ar6;
  FUN_8c0254d0(ar4,5,1,ar6,0,ar5,0x8c27dfd4,&DAT_8c27e594,PTR_s_GRAPHICS_FROGMANLINE_8c13368c);
  *(undefined **)(ar4 + 8) = &DAT_8c129ea0;
  s_FROGMANLINE_05d646(ar4 + 0x490,uVar1,ar6_00,ar7_00);
  FUN_8c03a5a4(ar4 + 0xd2c,uVar1,ar6_00,ar7_00);
  FUN_8c016fcc(ar4 + 0x1088,uVar1,ar6_00,ar7_00);
  FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00,s_FrogManLine_8c135e05);
  *(int *)(ar4 + 0x308) = ar4 + 0x490;
  uVar1 = FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00);
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x308),uVar1,ar6_00,ar7_00);
  *(int *)(ar4 + 0x30c) = ar4 + 0xd2c;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x111c) = 0;
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x1134) = 0;
  }
  *(undefined1 *)(ar4 + 0x114c) = 0;
  FUN_8c0f532c(ar4,*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xb4),ar4 + 0x1088,ar7_00);
  *(undefined4 *)(ar4 + 0x3d8) = *(undefined4 *)(**(int **)(ar4 + 0x328) + 0x40);
  *(undefined4 *)(ar4 + 0x3dc) = *(undefined4 *)(**(int **)(ar4 + 0x328) + 0x40);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x468) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_FROGMANLINE_036266\n.set _s_GRAPHICS_FROGMANLINE_036266, _s_GRAPHICS_FROGMANLINE_036266_def\n");
