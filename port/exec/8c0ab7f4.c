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
undefined4 Class_12b0c4_m1_0ab7f4_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b0c4_m1_0ab7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x50));
  puVar2 = ((undefined1 *)(unsigned)0x8c13b394);
  iVar5 = 0x10;
  do {
    puVar3 = puVar2 + 1;
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 2;
    puVar4[1] = *puVar3;
    puVar4 = puVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (*(undefined1 *)(unsigned)0x8c13b388) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (*(undefined1 *)(unsigned)0x8c13b38c) = *(undefined4 *)(unsigned)(ar4 + 0xa4);
  (*(undefined1 *)(unsigned)0x8c13b390) = *(undefined4 *)(unsigned)(ar4 + 0xa8);
  piVar7 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abfb0(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abc30(ar6[3],piVar7,ar6_00,ar7));
  if (((char)uVar1 == '\x01') && (iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_24_026024(ar5,piVar7,ar6_00,ar7)), iVar5 == 1)) {
    iVar6 = ar6[3];
    iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_48_0abc28(iVar6,piVar7,ar6_00,ar7));
    if (iVar5 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), rand(iVar6,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x12c;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar1,300,ar6_00,ar7));
      if (iVar5 < 1) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_48_0abc28(ar6[3],piVar7,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar1;
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(unsigned)(ar4 + 4) = 6;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
          *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
          uVar1 = 699;
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,699,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x74))))
                    (*(int *)(unsigned)(ar4 + 0x6c),uVar1,ar6_00,ar7));
          piVar7 = (int *)(unsigned)0x0;
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0996e4(ar6[3],0,ar6_00,ar7));
        }
      }
    }
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_24_026024(ar5,piVar7,ar6_00,ar7));
  if (iVar5 == 0) {
    iVar5 = ar6[6];
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_a0_035724(iVar5,piVar7,ar6_00,ar7));
    if ((byte)uVar1 < 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 1;
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), rand(iVar5,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x3e8;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar1,1000,ar6_00,ar7));
      if ((iVar5 < 1) && (*(int *)(unsigned)(ar4 + 4) != 0xb)) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5a;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7));
        piVar7 = (int *)(unsigned)0x4a6;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x4a6,ar6_00,ar7));
      }
    }
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,piVar7,ar6_00,ar7));
  if (iVar5 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),piVar7,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_6c_02f46c(*ar6,piVar7,ar6_00,ar7));
    if ((iVar5 == 0) && (iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_70_05f490(*ar6,piVar7,ar6_00,ar7)), iVar5 == 0)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,piVar7,ar6_00,ar7));
      piVar7 = (int *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abc1c(uVar1,0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0f4d84(*ar6,piVar7,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],piVar7,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,piVar7,ar6_00,ar7));
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f20c(ar4,ar6,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],piVar7,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,piVar7,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_4_05eed8(ar4,piVar7,ar6_00,ar7));
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0abe84(ar4,ar5,ar6,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],ar5,piVar7,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
  if ((*(char *)(unsigned)(ar4 + 0x98) == '\x01') && ((*(int *)(unsigned)(ar4 + 0x40) != 4 || (*(int *)(unsigned)(ar4 + 4) != 1)))
     ) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    *(undefined4 *)(unsigned)(ar4 + 8) = 99;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),ar5,piVar7,uVar1));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0ac19c(ar4,ar5,piVar7,uVar1));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c05ee90(ar6[2],ar5,piVar7,uVar1));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_124_027930(ar6[2],ar5,piVar7,uVar1));
  iVar6 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
  if (iVar5 != iVar6) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_40_05eea0(ar4,ar5,piVar7,uVar1));
    piVar7 = (int *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c031b08(ar6[2],ar5_00,1,uVar1));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,piVar7,uVar1));
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m1_0ab7f4\n.set _Class_12b0c4_m1_0ab7f4, _Class_12b0c4_m1_0ab7f4_def\n");
