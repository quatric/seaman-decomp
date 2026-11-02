#include "../decls.h"
undefined4 FUN_8c057164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong in_dr0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffe0;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(ar4 + 700) = 0;
  *(undefined4 *)(ar4 + 0x40) = 3;
  if ((*(int *)(ar4 + 0x128) == 4) && (*(int *)(ar4 + 0x2b8) == 3)) {
    uVar2 = ar5;
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 0x22) {
      CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,in_stack_ffffffe0);
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x436b0000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x8c033e68436b0000;
      }
      if (cVar5 == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7,in_stack_ffffffe0);
        uVar4 = in_dr0;
        if (cVar6 == '\0') {
          uVar4 = in_dr0 >> 0x20;
        }
        in_dr0 = uVar4 & 0xffffffff;
        if ((float)uVar4 != 0.0) {
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
        }
      }
    }
    else {
      iVar1 = get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7);
      if (iVar1 == 0x20) {
        *(undefined4 *)(ar4 + 0x218) = 5;
      }
    }
  }
  if (cVar6 == '\0') {
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(ar4 + 0x278) = 0x3fe66666;
  }
  else {
    uVar2 = 0x3fe66666;
    *(undefined8 *)(ar4 + 0x278) = 0x8c04c3143fe66666;
  }
  if (*(int *)(ar4 + 0x2b8) == 2) {
    if (cVar6 == '\0') {
      *(undefined4 *)(ar4 + 0x278) = 0x3f800000;
    }
    else {
      *(undefined8 *)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar2);
    }
    uVar3 = 0;
  }
  else {
    FUN_8c04c314(ar4,ar5,ar5,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c057164\n.set _FUN_8c057164, _FUN_8c057164_def\n");
