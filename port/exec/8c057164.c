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
undefined4 FUN_8c057164_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057164";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong in_dr0 = 0;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar3 = 1;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
  if ((*(int *)(unsigned)(ar4 + 0x128) == 4) && (*(int *)(unsigned)(ar4 + 0x2b8) == 3)) {
    uVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 0x22) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
      if (cVar6 == '\0') {
        in_dr0 = CONCAT44(0x436b0000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x8c033e68436b0000;
      }
      if (cVar5 == '\0' && (float)in_dr0 < (float)(in_dr0 >> 0x20)) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar2,ar6,ar7); });
        uVar4 = in_dr0;
        if (cVar6 == '\0') {
          uVar4 = in_dr0 >> 0x20;
        }
        in_dr0 = uVar4 & 0xffffffff;
        if ((float)uVar4 != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_1c_026dd8(ar4 + 0xb0,uVar2,ar6,ar7));
      if (iVar1 == 0x20) {
        *(undefined4 *)(unsigned)(ar4 + 0x218) = 5;
      }
    }
  }
  if (cVar6 == '\0') {
    uVar2 = (undefined4)in_dr0;
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3fe66666;
  }
  else {
    uVar2 = 0x3fe66666;
    *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c04c3143fe66666;
  }
  if (*(int *)(unsigned)(ar4 + 0x2b8) == 2) {
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar2);
    }
    uVar3 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c04c314(ar4,ar5,ar5,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c057164\n.set _FUN_8c057164, _FUN_8c057164_def\n");
