#include "../decls.h"
undefined4 FUN_8c04db38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  uint in_fr1;
  char cVar2;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar2 = '\0';
  iVar1 = *(int *)(ar4 + 300);
  if (iVar1 == 0) {
    vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7);
    vec3_clear(ar4 + 0x6c,ar5,ar6,ar7);
    vec3_clear(ar4 + 0x90,ar5,ar6,ar7);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(ar4 + 0xa0) = (ulonglong)in_fr1;
    }
    if (*(int *)(ar4 + 0x128) == 4) {
      Vec3_set_xyz(auStack_18,ar5,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      ar5 = 0xffffffff;
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
    }
    Vec3_length(ar4 + 0x14,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7);
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 0x49;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x49,0xffffffff,0);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      *(undefined4 *)(ar4 + 0x280) = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    return 0;
  }
  iVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    ar5_00 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6,ar7);
    s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7);
    *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    *(undefined4 *)(ar4 + 0x280) = 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c04db38\n.set _FUN_8c04db38, _FUN_8c04db38_def\n");
