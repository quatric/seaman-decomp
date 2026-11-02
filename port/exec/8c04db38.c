#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c04db38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04db38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  uint in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x2a8,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x6c,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), vec3_clear(ar4 + 0x90,ar5,ar6,ar7));
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)in_fr1;
    }
    if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      ar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_length(ar4 + 0x14,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
    ar7 = 0;
    ar6 = 0xffffffff;
    ar5 = 0x49;
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x49,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return 1;
    }
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 44)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c04db38\n.set _FUN_8c04db38, _FUN_8c04db38_def\n");
