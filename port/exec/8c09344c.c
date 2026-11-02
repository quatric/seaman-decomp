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
int FUN_8c09344c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09344c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 0x248);
  if (iVar1 == 0) {
    iVar1 = ar4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c093aec(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
    if (iVar6 == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), rand(iVar1,(*(undefined4 *)(fr0_ + 0x00000000)),ar6,ar7));
      uVar2 = 100;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
      if (iVar1 < 0xf) {
        *(undefined4 *)(unsigned)(ar4 + 0x248) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), rand(uVar3,uVar2,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar3,10,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = uVar3;
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      *(undefined4 *)(unsigned)(ar4 + 0x288) = 1;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 268)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else {
      uVar3 = ar5;
      uVar2 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,ar5,ar6,ar7));
      if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 10;
      }
      iVar1 = *(int *)(unsigned)(ar4 + 0x2f0);
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x38)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x48)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0x48)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0x58));
        puVar4 = ((undefined1 *)(fr0_ - 0x38));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x68)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x78)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0x78)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0x88));
        puVar4 = ((undefined1 *)(fr0_ - 0x68));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 2) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x98)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xa8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0xa8)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0xb8));
        puVar4 = ((undefined1 *)(fr0_ - 0x98));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,puVar4,puVar5));
      }
      else if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c032ab0(ar4,uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd8)),uVar3,uVar2,ar7));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_normalize(((undefined1 *)(fr0_ - 0xd8)),uVar3,uVar2,ar7));
        puVar5 = ((undefined1 *)(fr0_ - 0xe8));
        puVar4 = ((undefined1 *)(fr0_ - 0xc8));
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c095548(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,puVar4,puVar5));
        (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,puVar4,puVar5));
      }
      else {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c094514(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6));
      }
    }
  }
  else if (iVar1 == 3) {
    if (*(char *)(unsigned)(ar4 + 0x280) == '\x01') {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c0230f0(ar4 + 0x80,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x108)),ar6,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x248) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
      (vsp = ((unsigned long)(fr0_ - 268)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c097888(ar4,(*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6));
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c09344c\n.set _FUN_8c09344c, _FUN_8c09344c_def\n");
