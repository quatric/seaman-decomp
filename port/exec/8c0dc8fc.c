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
int FUN_8c0dc8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0dc8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  int iVar3;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,ar5_00,ar6,ar7));
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_b0_10113c(ar5,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x90 + *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8)))))
              (*(int *)(unsigned)(ar4_00 + 8),ar5_00,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0dc8fc\n.set _FUN_8c0dc8fc, _FUN_8c0dc8fc_def\n");
