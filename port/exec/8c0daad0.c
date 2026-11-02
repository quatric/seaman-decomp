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
int FUN_8c0daad0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0daad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ((undefined4 *)(fr0_ - 0x14))[0] = 0;
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_24_05c284(ar5,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
            (iVar1 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  ((undefined4 *)(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0feb88(ar4 + 0x7a4,((undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), s_Item_pointer_is_NULL_CItemLi_0fe01c(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar5 + 8) + 100))))(ar5,iVar2,ar6,ar7));
  return ar5;
}

__asm__(".globl _FUN_8c0daad0\n.set _FUN_8c0daad0, _FUN_8c0daad0_def\n");
