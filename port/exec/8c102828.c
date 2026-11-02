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
undefined4 report_error_message_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "report_error_message";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  
  ar6_00 = ar6;
  { extern void dbg_ring(int); dbg_ring(60); } (vsp = ((unsigned long)(fr0_ - 0)), log_message(ar4,ar5,ar6,ar7));
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_a(ar4,ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(ar4,ar5,ar6_00,ar7));
  }
  return 0;
}

__asm__(".globl _report_error_message\n.set _report_error_message, _report_error_message_def\n");
