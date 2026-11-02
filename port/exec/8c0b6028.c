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
undefined4 Class_12b2e8_m2_0b6028_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b2e8_m2_0b6028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  uVar2 = ar5;
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  puVar6 = ((undefined1 *)(fr0_ - 0x44));
  puVar4 = ((undefined1 *)(unsigned)0x8c13bc14);
  iVar3 = 0x10;
  do {
    puVar5 = puVar4 + 1;
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar6[1] = *puVar5;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,iVar7,ar7));
  *(uint *)(unsigned)(ar4 + 0xa8) = uVar1 & 0xffff;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b6328(ar4,ar5,ar6,ar7));
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02f20c(ar4,ar6,iVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,iVar7,iVar3,ar7));
  iVar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b61bc(ar4,ar5,ar6,uVar2));
  iVar3 = (int)*(char *)(unsigned)(ar4 + 0x98);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 8;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 8;
      break;
    case 4:
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 3;
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 7;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 7;
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 2;
      (*(undefined1 *)(unsigned)0x8c13bbe8) = 2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b65b0(ar4,ar5,iVar7,uVar2));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c05ee90(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar7,uVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar7,uVar2));
  if (*(int *)(unsigned)(ar4 + 0x40) != iVar3) {
    iVar7 = 1;
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c031b08(*(undefined4 *)(unsigned)(ar6 + 8),*(undefined4 *)(unsigned)(ar4 + 0x40),1,uVar2));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,iVar7,uVar2));
  return uVar2;
}

__asm__(".globl _Class_12b2e8_m2_0b6028\n.set _Class_12b2e8_m2_0b6028, _Class_12b2e8_m2_0b6028_def\n");
