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
undefined4 input_device_select_and_reset_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_device_select_and_reset");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbc8));
  ((le<undefined4>* )(fr0_ - 0x24))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 4);
  ((le<undefined4>* )(fr0_ - 0x24))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 8);
  ((le<undefined4>* )(fr0_ - 0x24))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 0xc);
  (*(le<undefined4>* )(fr0_ - 0x14)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 0x10);
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 0) {
    return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
  }
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0xa524 + ar4) = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbc8));
    *(le<undefined4>* )(unsigned)(0xa528 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa52c + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa530 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa534 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa538 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa53c + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa540 + ar4) = 0;
    if (ar5 == 0) {
      for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f62cc(((le<undefined4>* )(fr0_ - 0x24))[iVar3],ar5,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f6338(((le<undefined4>* )(fr0_ - 0x24))[iVar3],ar5,ar6,ar7));
        if ((iVar2 == 0) && ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x30)) & 1) != 0)) break;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[0];
        return 1;
      }
    }
    else {
      for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f62cc(((le<undefined4>* )(fr0_ - 0x24))[iVar1],ar5,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f6338(((le<undefined4>* )(fr0_ - 0x24))[iVar1],ar5,ar6,ar7));
        if ((iVar2 == 0) && ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x30)) & 1) != 0)) break;
      }
      if (iVar1 != 3) {
        *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[3];
        return 1;
      }
    }
    *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[iVar1];
    *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 5;
  }
  *(le<undefined2>* )(unsigned)(0xa546 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xa544 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 36)), input_update_state_gate(ar4,ar5,ar6,ar7));
  return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
}

__asm__(".globl input_device_select_and_reset\n.set input_device_select_and_reset, input_device_select_and_reset_def\n");

}
