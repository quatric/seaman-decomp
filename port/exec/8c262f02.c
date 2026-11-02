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
undefined4 FUN_8c262f02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262f02";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  int iVar4;
  undefined4 ar5_01;
  undefined1 *a6;
  undefined1 *ar7_00;
  undefined4 uVar5;
  int *piVar6;
  
  piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
  uVar5 = *(undefined4 *)(unsigned)(ar4 + 4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_18_25ff16(uVar5,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a000a4_25fff0(uVar5,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a0_25fff6(uVar5,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c26be30);
  iVar2 = iVar2 - *(int *)(unsigned)(ar4 + 0x34);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  ar7_00 = ((undefined1 *)(fr0_ - 0x30));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c26be30(ar4 + 0x14,ar5_00,&(*(undefined4 *)(fr0_ - 0x28)),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar6 + 0x20))))(piVar6,0,&(*(undefined4 *)(fr0_ - 0x28)),ar7_00));
  ar5_01 = 1;
  a6 = ((undefined1 *)(fr0_ - 0x30));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar6 + 0x1c))))(piVar6,1,a6,ar7_00));
  for (iVar3 = 0; iVar4 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c25feca(*(undefined4 *)(unsigned)(ar4 + 4),ar5_01,a6,ar7_00)),
      iVar3 < iVar4; iVar3 = iVar3 + 1) {
    ar7_00 = ((undefined1 *)(fr0_ - 0x30));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(puVar1)))(iVar3 * 8 + ar4 + 0x1c,iVar2 << 1,&(*(undefined4 *)(fr0_ - 0x28)),ar7_00));
    if (*(int *)(unsigned)(ar4 + 0x50) != 0) {
      ar7_00 = ((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x50))))(*(undefined4 *)(unsigned)(ar4 + 0x54),iVar3,(*(undefined4 *)(fr0_ - 0x28)),((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))));
    }
    piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + ar4 + 0xc));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar6 + 0x20))))(piVar6,1,&(*(undefined4 *)(fr0_ - 0x28)),ar7_00));
    piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc + iVar3 * 4));
    ar5_01 = 0;
    a6 = ((undefined1 *)(fr0_ - 0x30));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar6 + 0x1c))))(piVar6,0,a6,ar7_00));
  }
  *(int *)(unsigned)(ar4 + 0x2c) = *(int *)(unsigned)(ar4 + 0x2c) + iVar2;
  *(int *)(unsigned)(ar4 + 0x30) = *(int *)(unsigned)(ar4 + 0x30) + ar5_00;
  *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + iVar2;
  *(int *)(unsigned)(ar4 + 0x40) = *(int *)(unsigned)(ar4 + 0x40) + iVar2;
  *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + ar5_00;
  if (((-1 < *(int *)(unsigned)(ar4 + 0x3c)) && (*(int *)(unsigned)(ar4 + 0x3c) <= *(int *)(unsigned)(ar4 + 0x40))) &&
     (*(int *)(unsigned)(ar4 + 0x48) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x48))))(*(undefined4 *)(unsigned)(ar4 + 0x4c),ar5_01,a6,ar7_00));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c25ffb6(uVar5,ar5_01,a6,ar7_00));
  return uVar5;
}

__asm__(".globl _FUN_8c262f02\n.set _FUN_8c262f02, _FUN_8c262f02_def\n");
