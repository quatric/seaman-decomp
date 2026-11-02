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
undefined4 FUN_8c07f268_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f268";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  
  cVar4 = '\0';
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x18)),ar4 + 0x244,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  puVar3 = ((undefined1 *)(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x244,puVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),puVar3,ar6,ar7));
  if (cVar4 == '\0') {
    *(int *)(unsigned)(ar4 + 0x28) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x58)),puVar3,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c023d04(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x58)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x64)),uVar2,ar6,ar7));
    puVar3 = ((undefined1 *)(fr0_ - 0x64));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x28)),puVar3,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length(((undefined1 *)(fr0_ - 0x74)),puVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(ar4 + 0x14,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 120)), object_dtor_delete(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c07f268\n.set _FUN_8c07f268, _FUN_8c07f268_def\n");
