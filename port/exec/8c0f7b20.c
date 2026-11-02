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
undefined4 main_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "main";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), game_init(ar4,ar5,ar6,ar7));
  while( true ) {
    uVar2 = 0x8c286ebc;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), game_poll_exit(0x8c286ebc,ar5,ar6,ar7));
    if (iVar1 < 0) break;
    (vsp = ((unsigned long)(fr0_ - 0)), game_frame(uVar2,ar5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_a(uVar2,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _game_main\n.set _game_main, _main_def\n");
