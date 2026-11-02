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
undefined4 Class_12b0c4_m2_0abc38_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b0c4_m2_0abc38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = ar5;
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x4c));
  iVar3 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c13b3b4));
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0x9c) = *(undefined4 *)(unsigned)(0xa0 + ar4);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0xa0) = *(undefined4 *)(unsigned)(0xa4 + ar4);
  *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13b2ec)) + 0xa4) = *(undefined4 *)(unsigned)(0xa8 + ar4);
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_24_026024(ar5,piVar8,piVar7,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + *ar5))))(ar5,piVar8,piVar7,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  if (((0 < iVar3) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_24_026024(ar5,piVar8,piVar7,ar7)), iVar3 == 1)) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + *ar5))))(ar5,piVar8,piVar7,ar7)), iVar3 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + *ar5))))(ar5,piVar8,piVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), get_field_18_02d1a0(ar6[1] + 0xa8,piVar8,piVar7,ar7));
  }
  piVar8 = ar5;
  piVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0abfb0(ar4,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + *(int *)(unsigned)(*ar6 + 8)))))(*ar6,piVar8,piVar7,ar7));
  if (iVar3 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                (*(int *)(unsigned)(ar4 + 0x6c),piVar8,piVar7,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_6c_02f46c(*ar6,piVar8,piVar7,ar7));
    if ((iVar3 == 0) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_70_05f490(*ar6,piVar8,piVar7,ar7)), iVar3 == 0)) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0f4d84(*ar6,piVar8,piVar7,ar7));
    }
  }
  piVar8 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c02f20c(ar4,ar6,piVar7,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_4_05eed8(ar4,piVar8,piVar7,ar7));
  piVar8 = ar6;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0abe84(ar4,ar5,ar6,uVar1));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0ac19c(ar4,ar5,piVar8,uVar1));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c05ee90(ar6[2],ar5,piVar8,uVar1));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_124_027930(ar6[2],ar5,piVar8,uVar1));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_40_05eea0(ar4,ar5,piVar8,uVar1));
  if (iVar3 != iVar2) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_40_05eea0(ar4,ar5,piVar8,uVar1));
    piVar8 = (int *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c031b08(ar6[2],ar5_00,1,uVar1));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,piVar8,uVar1));
  return uVar1;
}

__asm__(".globl _Class_12b0c4_m2_0abc38\n.set _Class_12b0c4_m2_0abc38, _Class_12b0c4_m2_0abc38_def\n");
