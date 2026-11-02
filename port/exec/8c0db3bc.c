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
int FUN_8c0db3bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db3bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined1 *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  int iVar4;
  int a4;
  int iVar5;
  uint extraout_fr1 = 0;
  undefined4 extraout_fr1_00 = 0;
  undefined4 extraout_fr0 = 0;
  undefined4 in_fr15 = 0;
  float fVar6;
  undefined8 uVar7;
  undefined8 in_xd14 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x38)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    (*(undefined8 *)(fr0_ - 0x4c)) = (ulonglong)(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+4)) << 0x20;
    uVar7 = CONCAT44(0x47435000,in_fr15);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x4c)) = (ulonglong)extraout_fr1;
    uVar7 = 0x8c022cb047435000;
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    iVar3 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
    ar7_00 = ((undefined1 *)(fr0_ - 0x40));
    ar6_00 = ((undefined1 *)(fr0_ - 0x44));
    iVar1 = (int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db5a8(ar4 + 0x9e8,iVar1,ar6_00,ar7_00));
    for (iVar4 = 3; iVar4 < 8; iVar4 = iVar4 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_38_0db5a0(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00));
      if (iVar2 != 0) {
        ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db580(iVar4 * 0x3c + ar4 + 0x3a8,iVar1,ar6_00,ar7_00));
        a4 = *(int *)(unsigned)(ar4_00 + 8);
        for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
          ar7_00 = ((undefined1 *)(fr0_ - 0x30));
          ar6_00 = ((undefined1 *)(fr0_ - 0x34));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x134))))(a4,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
          iVar1 = ar4 + 0xa68;
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023b4c(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x38)),iVar1,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),extraout_fr0);
          }
          else {
            in_xd14 = CONCAT44(extraout_fr0,extraout_fr1_00);
          }
          fVar6 = (float)uVar7;
          if ((cVar8 == '\0' && fVar6 < F32HI(uVar7)) &&
             (iVar3 = a4, uVar7 = in_xd14, cVar9 == '\0')) {
            uVar7 = CONCAT44(fVar6,fVar6);
          }
          ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), list_node_next(ar4_00,iVar1,ar6_00,ar7_00));
          a4 = *(int *)(unsigned)(ar4_00 + 8);
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x4c)) + 4,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0db3bc\n.set _FUN_8c0db3bc, _FUN_8c0db3bc_def\n");
