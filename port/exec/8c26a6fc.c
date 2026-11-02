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
undefined4
s_E1233_sdPstmPlay_return_erro_26a6fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1233_sdPstmPlay_return_erro_26a6fe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar7_00;
  undefined4 s4;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x10);
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x14);
  if (iVar2 == 0x10) {
    ar5 = 1;
  }
  else if (iVar2 == 8) {
    ar5 = 0;
  }
  else if (iVar2 == 4) {
    ar5 = 2;
  }
  ar7_00 = 0;
  *(int *)(unsigned)(ar4 + 0x10) = iVar2;
  s4 = uVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26784c(*(undefined4 *)(unsigned)(ar4 + 0x30),ar5,uVar1,0));
  if (iVar2 != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c2736b4)); unsigned long t1_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(iVar2,ar5,uVar1,ar7_00); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1241_sdSysFlushHostCmd_retu_26a6d8(ar4,1,uVar1,ar7_00));
  return uVar1;
}

__asm__(".globl _s_E1233_sdPstmPlay_return_erro_26a6fe\n.set _s_E1233_sdPstmPlay_return_erro_26a6fe, _s_E1233_sdPstmPlay_return_erro_26a6fe_def\n");
