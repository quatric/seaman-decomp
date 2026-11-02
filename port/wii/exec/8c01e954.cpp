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
undefined4 input_poll_device_state_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_poll_device_state");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f62cc(*(le<undefined4>* )(unsigned)(0xa524 + ar4),ar5,ar6,ar7));
  if ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x30)) & 1) == 0) {
    *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 10;
    if (*(le<int>* )(unsigned)(0xa51c + ar4) < 1) {
      *(le<undefined4>* )(unsigned)(0xa51c + ar4) = 0;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
    }
    else {
      *(le<int>* )(unsigned)(0xa51c + ar4) = *(le<int>* )(unsigned)(0xa51c + ar4) + -1;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 2;
      uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(0xa540 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa528 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa528 + ar4);
    *(le<undefined4>* )(unsigned)(0xa52c + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    *(le<undefined4>* )(unsigned)(0xa530 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0x10);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa530 + ar4);
    *(le<undefined4>* )(unsigned)(0xa534 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0x14);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa534 + ar4);
    *(le<int>* )(unsigned)(0xa538 + ar4) = (int)*(le<short>* )(unsigned)(iVar1 + 0x1c);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa538 + ar4);
    *(le<int>* )(unsigned)(0xa53c + ar4) = (int)*(le<short>* )(unsigned)(iVar1 + 0x1e);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa53c + ar4);
    *(le<undefined2>* )(unsigned)(0xa544 + ar4) = *(le<undefined2>* )(unsigned)(iVar1 + 0x1a);
    *(le<undefined2>* )(unsigned)(0xa546 + ar4) = *(le<undefined2>* )(unsigned)(iVar1 + 0x18);
    *(le<undefined4>* )(unsigned)(0xa51c + ar4) = 0x5a;
    if (*(le<int>* )(unsigned)(0xa518 + ar4) < 1) {
      *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      if (((*(le<int>* )(unsigned)(0xa514 + ar4) == 0) || (*(le<int>* )(unsigned)(0xa514 + ar4) == 4)) &&
         (*(le<int>* )(unsigned)(0xa510 + ar4) == 5)) {
        *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
        uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(le<int>* )(unsigned)(0xa518 + ar4) = *(le<int>* )(unsigned)(0xa518 + ar4) + -1;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 2;
      *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}

__asm__(".globl input_poll_device_state\n.set input_poll_device_state, input_poll_device_state_def\n");

}
