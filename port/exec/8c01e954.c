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
undefined4 input_poll_device_state_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "input_poll_device_state";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f62cc(*(undefined4 *)(unsigned)(0xa524 + ar4),ar5,ar6,ar7));
  if ((*((uint *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x30)) & 1) == 0) {
    *(undefined4 *)(unsigned)(0xa518 + ar4) = 10;
    if (*(int *)(unsigned)(0xa51c + ar4) < 1) {
      *(undefined4 *)(unsigned)(0xa51c + ar4) = 0;
      *(undefined4 *)(unsigned)(0xa510 + ar4) = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(0xa514 + ar4) = *(undefined4 *)(unsigned)(0xa510 + ar4);
      uVar2 = *(undefined4 *)(unsigned)(0xa510 + ar4);
    }
    else {
      *(int *)(unsigned)(0xa51c + ar4) = *(int *)(unsigned)(0xa51c + ar4) + -1;
      *(undefined4 *)(unsigned)(0xa510 + ar4) = 2;
      uVar2 = *(undefined4 *)(unsigned)(0xa510 + ar4);
    }
  }
  else {
    *(undefined4 *)(unsigned)(0xa540 + ar4) = 0;
    *(undefined4 *)(unsigned)(0xa528 + ar4) = *(undefined4 *)(unsigned)(iVar1 + 8);
    *(uint *)(unsigned)(0xa540 + ar4) = *(uint *)(unsigned)(0xa540 + ar4) | *(uint *)(unsigned)(0xa528 + ar4);
    *(undefined4 *)(unsigned)(0xa52c + ar4) = *(undefined4 *)(unsigned)(iVar1 + 0xc);
    *(undefined4 *)(unsigned)(0xa530 + ar4) = *(undefined4 *)(unsigned)(iVar1 + 0x10);
    *(uint *)(unsigned)(0xa540 + ar4) = *(uint *)(unsigned)(0xa540 + ar4) | *(uint *)(unsigned)(0xa530 + ar4);
    *(undefined4 *)(unsigned)(0xa534 + ar4) = *(undefined4 *)(unsigned)(iVar1 + 0x14);
    *(uint *)(unsigned)(0xa540 + ar4) = *(uint *)(unsigned)(0xa540 + ar4) | *(uint *)(unsigned)(0xa534 + ar4);
    *(int *)(unsigned)(0xa538 + ar4) = (int)*(short *)(unsigned)(iVar1 + 0x1c);
    *(uint *)(unsigned)(0xa540 + ar4) = *(uint *)(unsigned)(0xa540 + ar4) | *(uint *)(unsigned)(0xa538 + ar4);
    *(int *)(unsigned)(0xa53c + ar4) = (int)*(short *)(unsigned)(iVar1 + 0x1e);
    *(uint *)(unsigned)(0xa540 + ar4) = *(uint *)(unsigned)(0xa540 + ar4) | *(uint *)(unsigned)(0xa53c + ar4);
    *(undefined2 *)(unsigned)(0xa544 + ar4) = *(undefined2 *)(unsigned)(iVar1 + 0x1a);
    *(undefined2 *)(unsigned)(0xa546 + ar4) = *(undefined2 *)(unsigned)(iVar1 + 0x18);
    *(undefined4 *)(unsigned)(0xa51c + ar4) = 0x5a;
    if (*(int *)(unsigned)(0xa518 + ar4) < 1) {
      *(undefined4 *)(unsigned)(0xa518 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      if (((*(int *)(unsigned)(0xa514 + ar4) == 0) || (*(int *)(unsigned)(0xa514 + ar4) == 4)) &&
         (*(int *)(unsigned)(0xa510 + ar4) == 5)) {
        *(undefined4 *)(unsigned)(0xa518 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(undefined4 *)(unsigned)(0xa514 + ar4) = *(undefined4 *)(unsigned)(0xa510 + ar4);
        uVar2 = *(undefined4 *)(unsigned)(0xa510 + ar4);
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(int *)(unsigned)(0xa518 + ar4) = *(int *)(unsigned)(0xa518 + ar4) + -1;
      *(undefined4 *)(unsigned)(0xa510 + ar4) = 2;
      *(undefined4 *)(unsigned)(0xa514 + ar4) = *(undefined4 *)(unsigned)(0xa510 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}

__asm__(".globl _input_poll_device_state\n.set _input_poll_device_state, _input_poll_device_state_def\n");
