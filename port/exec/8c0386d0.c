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
undefined4 CAnimal_m2_0386d0_def(int ar4,uint ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_0386d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 uVar8;
  
  cVar1 = *(char *)(unsigned)(ar4 + 0x524);
  if (cVar1 == -1) {
    piVar6 = ar6;
    piVar7 = ar7;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
    uVar5 = uVar5 & 0xffff;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7); });
    uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
    uVar5 = uVar5 & 0xffff;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028ed4(ar4 + 0x21c,uVar5,piVar6,piVar7); });
    if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                (*(int *)(unsigned)(ar4 + 0x330),ar5,piVar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))
                (*(int *)(unsigned)(ar4 + 0x330),1,piVar6,piVar7));
      uVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      piVar6 = ar6;
      piVar7 = ar7;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
    ar5 = uVar5;
    ar6 = piVar6;
    ar7 = piVar7;
    if (((ushort)uVar2 < 5) &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_18_02d1a0(ar4 + 0x21c,uVar5,piVar6,piVar7)), ar5 = uVar5, ar6 = piVar6,
       ar7 = piVar7, -1 < iVar4)) {
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar5 = ar5;
    piVar6 = ar6;
    piVar7 = ar7;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,ar5,ar6,ar7));
    uVar8 = (undefined2)(*(undefined4 *)(fr0_ - 0x48));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_c_02d1b8(ar4 + 0x21c,uVar5,piVar6,piVar7));
    uVar3 = (uVar3 & 0xffff) - iVar4;
    if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                (*(int *)(unsigned)(ar4 + 0x330),ar5,piVar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))
                (*(int *)(unsigned)(ar4 + 0x330),1,piVar6,piVar7));
      uVar5 = ar5;
      piVar7 = ar7;
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      piVar6 = ar6;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,uVar5,piVar6,piVar7));
    if (iVar4 != 0) {
      uVar5 = uVar3;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02c030(ar4 + 0x174,uVar3,ar7,piVar7));
      piVar6 = ar7;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02c518(ar4 + 0x174,uVar5,piVar6,piVar7));
    if (iVar4 == -1) {
      ar5 = 0x3c;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_0101e4(uVar3,0x3c,piVar6,piVar7));
      ar6 = piVar6;
      ar7 = piVar7;
      if (3 < iVar4) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
      }
    }
    else {
      uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c028ee4(ar5,uVar5,piVar6,piVar7));
      uVar2 = CONCAT22((short)uVar5,uVar8);
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7); });
      uVar8 = (undefined2)((uint)uVar2 >> 0x10);
      uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
      ar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar8,(short)uVar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028ed4(ar4 + 0x21c,ar5,piVar6,piVar7); });
      ar6 = piVar6;
      ar7 = piVar7;
    }
  }
  else if (cVar1 == '\x01') {
    piVar6 = ar7;
    (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,*(undefined4 *)(unsigned)(ar4 + 0x330),ar6,piVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
    ar6 = (int *)(unsigned)0x1b;
    uVar5 = 0x1a;
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b9ed4(ar5,0x1a,0x1b,piVar6));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0f4d84(ar4,uVar5,ar6,piVar6));
    ar5 = uVar5;
    ar7 = piVar6;
  }
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _CAnimal_m2_0386d0\n.set _CAnimal_m2_0386d0, _CAnimal_m2_0386d0_def\n");
