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
undefined4 FUN_8c26bb16_def(int ar4,int ar5,undefined1 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c26bb16";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  undefined4 *ar7_00;
  undefined4 *puVar3;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,ar6,ar7));
    }
    *ar7 = 0;
    ar7[1] = 0;
    return ain0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26b960(ar4,ar5,ar6,ar7));
  iVar2 = ar5 * 4;
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18 + iVar2));
  if (puVar3 != (undefined4 *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x1c)),puVar3 + 2,vr7));
    if ((*(int *)(fr0_ - 0x18)) <= (int)ar6) {
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c010794(8,ar7,((undefined1 *)(fr0_ - 0x1c)),vr7));
      *(undefined4 *)(unsigned)(iVar2 + ar4 + 0x18) = *puVar3;
      *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0x14);
      *(unsigned *)(unsigned)(ar4 + 0x14) = puVar3;
      goto LAB_8c26bbce;
    }
    if (*(char *)(unsigned)(ar4 + 5) == '\x01') {
      ar7_00 = ((undefined4 *)(fr0_ - 0x24));
      ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26be30(((undefined1 *)(fr0_ - 0x1c)),ar6,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c010794(8,ar7,((undefined1 *)(fr0_ - 0x1c)),vr7));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c010794(8,puVar3 + 2,((undefined4 *)(fr0_ - 0x24)),vr7));
      goto LAB_8c26bbce;
    }
  }
  *ar7 = 0;
  ar7[1] = 0;
LAB_8c26bbce:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26b978(ar4,uVar1,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c26bb16\n.set _FUN_8c26bb16, _FUN_8c26bb16_def\n");
