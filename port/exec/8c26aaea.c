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
undefined4 s_E1247_sdPstmSetDrctLev_retur_26aaf2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1247_sdPstmSetDrctLev_retur_26aaf2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int a4;
  int a5;
  int a6;
  int a6_00;
  int a5_00;
  char in_T = 0;
  
  puVar2 = ((void *)(unsigned)0x8c267a10);
  puVar1 = ((void *)(unsigned)0x8c26a14e);
  if (in_T == '\x01') {
    if (ar5 < 0) {
      a6_00 = ar5 * 3;
    }
    else {
      a6_00 = 0x7f;
    }
  }
  else {
    a6_00 = -0x7f;
  }
  for (a5_00 = 0; a5_00 < *(int *)(unsigned)(ar4 + 0xc); a5_00 = a5_00 + 1) {
    a5 = a5_00;
    a6 = a6_00;
    a4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(*(undefined4 *)(unsigned)(ar4 + 0x30),a5_00,a6_00,ar7));
    in_r0 = 0;
    if (a4 != 0) {
      in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(a4,a5,a6,ar7));
    }
  }
  return in_r0 = 0;
}

__asm__(".globl _s_E1247_sdPstmSetDrctLev_retur_26aaf2\n.set _s_E1247_sdPstmSetDrctLev_retur_26aaf2, _s_E1247_sdPstmSetDrctLev_retur_26aaf2_def\n");
