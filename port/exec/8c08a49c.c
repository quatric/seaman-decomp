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
undefined4 Class_12a5d0_m2_08a49c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a5d0_m2_08a49c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 ar7_00;
  float fVar3;
  ulonglong in_dr0 = 0;
  double dVar4;
  ulonglong in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x928) = ar7;
  if (*(int *)(unsigned)(ar4 + 0x48c) == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b08(ar4 + 0x538,0,1,ar7));
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x01') && (*(int *)(unsigned)(ar4 + 0x8f8) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f4) == 0)) {
    ar5_00 = ar7;
    ar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ab58(ar4,ar7,ar5,ar7_00));
  }
  if ((*(int *)(unsigned)(ar4 + 0x8f4) != 0) || (*(int *)(unsigned)(ar4 + 0x8f8) != 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08ac38(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x02') &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_25c_08a6f8(ar4 + 0x538,ar5_00,ar6,ar7_00)), iVar2 != -1)) {
    (vsp = ((unsigned long)(fr0_ - 4)), s_CMothLine_08ad54(ar4,ar7,ar5,ar7_00));
    ar5_00 = ar7;
    ar6 = ar5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((char)uVar1 == '\x02') && (*(int *)(unsigned)(ar4 + 0x8ec) == 0)) && (*(int *)(unsigned)(ar4 + 0x8f0) == 0)) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c035f4c(ar4 + 0x490,0,ar6,ar7_00));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_124_027930(ar4 + 0x538,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7_00));
  if ((iVar2 == 3) && ((short)uVar1 == 2)) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c08a6e8(ar4 + 0x538,ar5_00,ar6,ar7_00));
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xc5e10000,(int)(in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar4 = -0.007812505759034138;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar6 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 4.89066565470418e-311;
    }
    if (cVar5 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar6 == '\0') {
      *(float *)(unsigned)(ar4 + 0x438) = fVar3;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0;
    }
  }
  else {
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x438) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x438) = in_dr0 & 0xffffffff;
    }
    if ((iVar2 == 9) && ((short)uVar1 == 3)) {
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x900,ar4 + 0x30,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar4 + 0x910,ar4 + 0x50,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar4 + 0x91c,ar4 + 0x5c,ar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0x1e;
    }
    else {
      iVar2 = *(int *)(unsigned)(ar4 + 0x8fc) + -1;
      *(int *)(unsigned)(ar4 + 0x8fc) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x8fc) = 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12a5d0_m2_08a49c\n.set _Class_12a5d0_m2_08a49c, _Class_12a5d0_m2_08a49c_def\n");
