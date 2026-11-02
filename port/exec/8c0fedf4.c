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
int FUN_8c0fedf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fedf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
  ar4_00 = 0;
  if (iVar1 != 0) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fee88(ar4,ar5_00,ar6,ar7));
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(int *)(unsigned)(ar4_00 + 0x10) != 2) {
        ar6 = *(undefined4 *)(unsigned)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xdc + *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8)))))
                          (*(int *)(unsigned)(ar4_00 + 8),ar5,ar6,ar7));
        if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0fedf4\n.set _FUN_8c0fedf4, _FUN_8c0fedf4_def\n");
