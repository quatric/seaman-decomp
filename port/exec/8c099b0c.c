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
undefined4 FUN_8c099b0c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c099b0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined1 *puVar3;
  undefined4 ar5_01;
  undefined1 *ar6_00;
  undefined1 *a7;
  undefined1 *puVar4;
  char cVar5;
  
  cVar5 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x30)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0xa4));
  puVar3 = ((undefined1 *)(fr0_ - 0xa0));
  puVar4 = ((undefined1 *)(fr0_ - 0x9c));
  (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,puVar4,puVar3,a7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), get_field_4_05eed8(ar4,puVar4,puVar3,a7));
  if (((iVar1 != 1) && (iVar1 != 8)) && (iVar1 == 0xb)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,puVar3,a7));
    if (iVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); FUN_8c02f404(ar4,2,puVar3,a7); });
      if (cVar5 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43fa0000;
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x43fa0000;
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x43fa0000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x10043fa0000;
        *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0x10043fa0000;
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x10043fa0000;
      }
    }
    else {
      for (puVar4 = (undefined1 *)(unsigned)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,5,puVar3,a7)),
          (int)puVar4 < iVar1; puVar4 = puVar4 + 1) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar4,a7));
        a7 = ((undefined1 *)(fr0_ - 0xb0));
        ar6_00 = ((undefined1 *)(fr0_ - 0xac));
        puVar3 = ((undefined1 *)(fr0_ - 0xa8));
        (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c03f414(uVar2,puVar3,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x4c)),puVar3,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x68)),((undefined1 *)(fr0_ - 0x4c)),ar6_00,a7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x68)),ar6_00,a7); });
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x78)),ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6_00,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6_00,a7));
        ar5_01 = 5;
        puVar3 = puVar4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,5,puVar4,a7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c02f670(uVar2,ar5_01,puVar3,a7); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 200)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(fr0_ - 0x5c)),puVar3,a7); });
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x98)),puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar3,a7));
        if (cVar5 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x20));
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x1c));
          *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x18));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
          *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        }
        (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar3,a7));
        (vsp = ((unsigned long)(fr0_ - 200)), object_dtor_delete(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,puVar3,a7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,puVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,puVar3,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 200)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x20)),0xffffffff,puVar3,a7));
  return uVar2;
}

__asm__(".globl _FUN_8c099b0c\n.set _FUN_8c099b0c, _FUN_8c099b0c_def\n");
