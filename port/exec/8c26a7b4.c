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
int s_E1236_sdPstmGetCurAdr_return_26a7b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1236_sdPstmGetCurAdr_return_26a7b6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  uint s4;
  
  s4 = 1;
  (*(undefined4 *)(fr0_ - 0xc)) = ar5;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c266f38(*(undefined4 *)(unsigned)(ar4 + 0x30),0,(fr0_ + (int)0xffffffec),ar7));
  if ((s4 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    ar6_00 = &(*(undefined4 *)(fr0_ - 0x10));
    ar5_00 = (*(undefined4 *)(fr0_ - 0xc));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), thunk_FUN_8c266d28(*(undefined4 *)(unsigned)(ar4 + 0x30),(*(undefined4 *)(fr0_ - 0xc)),ar6_00,ar7));
    if (iVar1 != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c273744)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 40)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 40)) - 8); debug_printf(iVar1,ar5_00,ar6_00,ar7); });
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_010468((*(undefined4 *)(fr0_ - 0x10)),*(undefined4 *)(unsigned)(ar4 + 0x10),vr6,vr7));
    iVar1 = iVar1 << 3;
  }
  return iVar1;
}

__asm__(".globl _s_E1236_sdPstmGetCurAdr_return_26a7b6\n.set _s_E1236_sdPstmGetCurAdr_return_26a7b6, _s_E1236_sdPstmGetCurAdr_return_26a7b6_def\n");
