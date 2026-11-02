#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 game_poll_exit_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_poll_exit");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_poll_device_state(0x8c3dd7dc,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2d620 + ar4) = uVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01f794(0x8c3eb334,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), pack_close_and_flush(0x8c2b59d0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f816c(0x8c35468c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c2c0c(0x8c2b5628,ar5,ar6,ar7));
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dd88 + 12 * *(le<int>* )(unsigned)(unsigned)(ar4 + 0x2dd84)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)(ar4 + 0x2d59c),ar6,ar7); }
  *(le<int>* )(unsigned)(0x2d59c + ar4) = *(le<int>* )(unsigned)(0x2d59c + ar4) + 1;
  *(le<undefined4>* )(unsigned)(0x2d624 + ar4) = *(le<undefined4>* )(unsigned)(0x2d620 + ar4);
  *(le<undefined4>* )(unsigned)0x8c431a50 = 0;
  if ((iVar2 == 1) || (*(le<int>* )(unsigned)(0x2dd78 + ar4) == 4)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl game_poll_exit\n.set game_poll_exit, game_poll_exit_def\n");

}
