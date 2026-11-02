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
undefined4 FUN_8c0db224_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db224";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int *a4;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 92)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0db304(((undefined1 *)(fr0_ - 0x58)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c018f80(((undefined1 *)(fr0_ - 0x58)),ar5,ar6,ar7));
  iVar3 = 0;
  while( true ) {
    if (iVar1 <= iVar3) {
      (vsp = ((unsigned long)(fr0_ - 92)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
      return 0;
    }
    a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 92)), get_field_a4_032154(ar4_00,ar5,ar6,ar7));
    ar5 = ((undefined1 *)(fr0_ - 0x58));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,ar5,ar6,ar7));
    if (iVar2 == 1) break;
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 92)), list_node_next(ar4_00,ar5,ar6,ar7));
    iVar3 = iVar3 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 92)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0db224\n.set _FUN_8c0db224, _FUN_8c0db224_def\n");
