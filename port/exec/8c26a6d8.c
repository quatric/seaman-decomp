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
int s_E1241_sdSysFlushHostCmd_retu_26a6d8_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1241_sdSysFlushHostCmd_retu_26a6d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 in_PR = 0;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688b4(ar4,ar5,ar6,ar7));
  if ((ar4_00 != 0) && (ar4_00 != 0xb000003)) {
    ar4_00 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c273678)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); debug_printf(ar4_00,ar5,ar6,ar7); });
  }
  return ar4_00;
}

__asm__(".globl _s_E1241_sdSysFlushHostCmd_retu_26a6d8\n.set _s_E1241_sdSysFlushHostCmd_retu_26a6d8, _s_E1241_sdSysFlushHostCmd_retu_26a6d8_def\n");
