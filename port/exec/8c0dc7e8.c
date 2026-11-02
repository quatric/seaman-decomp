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
int FUN_8c0dc7e8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc7e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *ar5_00;
  int iVar3;
  
  ((undefined4 *)(fr0_ - 0x1c))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100d5c(ar5,ar5,ar6,ar7));
  if ((iVar1 == 1) && (iVar1 = *(int *)(unsigned)(ar4 + 0x9d8), iVar1 == 0)) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7));
    iVar1 = iVar2;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7));
      if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7)), iVar1 == 5)) {
        ar6 = &(*(undefined4 *)(fr0_ - 0x20));
        ar5_00 = ((undefined4 *)(fr0_ - 0x1c));
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c101210(ar5,ar5_00,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x8c))))(ar4_00,ar5_00,ar6,ar7));
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar4_00,ar5_00,ar6,ar7));
      ar4_00 = iVar1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0dc7e8\n.set _FUN_8c0dc7e8, _FUN_8c0dc7e8_def\n");
