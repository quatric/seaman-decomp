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
undefined4 FUN_8c262b04_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262b04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *puVar1;
  undefined4 ar5_01;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int a5;
  undefined4 uVar6;
  undefined1 *a6;
  undefined4 ar4_00;
  undefined1 *ar6_00;
  
  iVar5 = (int)0x9c;
  uVar6 = 8;
  iVar4 = 0;
  ar4_00 = *ar6;
  do {
    if (*(char *)(unsigned)(iVar4 * iVar5 + 0x8c4b9348) == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    ar6_00 = (undefined1 *)(unsigned)(iVar4 * iVar5 + 0x8c4b9348);
    iVar4 = 0x8c4b9348;
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_26b94e(ar4_00,iVar5,8,0x8c4b9348));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_20_26b952(ar4_00,iVar5,uVar6,iVar4));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_26b956(ar4_00,iVar5,uVar6,iVar4));
    iVar4 = (uVar2 >> 1) + (uVar3 >> 1);
    uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25fbd0(ar5,ar5_01,uVar2 >> 1,iVar4));
    puVar1 = ((void *)(unsigned)0x8c25fea8);
    ar5_00 = ((void *)(unsigned)0x8c262d6c);
    *(undefined4 *)(unsigned)(ar6_00 + 4) = uVar6;
    a6 = ar6_00;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(uVar6,ar5_00,ar6_00,iVar4));
    if (*(int *)(unsigned)(ar6_00 + 4) != 0) {
      a5 = 0;
      *(undefined4 *)(unsigned)(ar6_00 + 8) = ar4;
      ar6_00[2] = (char)ar5;
      iVar5 = 0;
      if (0 < ar5) {
        do {
          a5 = a5 + 1;
          *(undefined4 *)(unsigned)(ar6_00 + iVar5 + 0xc) = *(undefined4 *)(unsigned)(iVar5 + (int)ar6);
          iVar5 = iVar5 + 4;
        } while (a5 < ar5);
      }
      ar6_00[1] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262ae2(ar6_00,a5,a6,iVar4));
      *(undefined4 *)(unsigned)(ar6_00 + 0x48) = 0;
      *(undefined4 *)(unsigned)(ar6_00 + 0x4c) = 0;
      *(undefined4 *)(unsigned)(ar6_00 + 0x50) = 0;
      *(undefined4 *)(unsigned)(ar6_00 + 0x54) = 0;
      *ar6_00 = 1;
      return ar6_00;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c262b04\n.set _FUN_8c262b04, _FUN_8c262b04_def\n");
