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
undefined * input_peripheral_state_machine_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_peripheral_state_machine");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0xa510);
  if ((iVar2 < 6) && (1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c01e7fc))[iVar2 + -1];
                    
    switch(iVar2) {
    case 5:
    case 2:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a3b4(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      puVar1 = (undefined *)(unsigned)(uint)(iVar2 == 1);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cb54(ar4 + 0x384c,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (iVar2 == 1) {
        puVar1 = (undefined *)(unsigned)((uint)puVar1 | 2);
      }
      if (puVar1 == (undefined *)(unsigned)0x0) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      else if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 4;
      }
      else if (puVar1 == (undefined *)(unsigned)0x2) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 3;
      }
      else if (puVar1 == (undefined *)(unsigned)0x3) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
      break;
    case 3:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7));
      if (iVar2 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a3b4(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a5cc(ar4,ar5,ar6,ar7));
      if (iVar2 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cb54(ar4 + 0x384c,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
    }
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a5cc(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 3;
    }
    puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7));
    if (puVar1 == (undefined *)(unsigned)0x0) {
      puVar1 = (undefined *)(unsigned)0xa510;
      *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 4;
    }
  }
  return puVar1;
}

__asm__(".globl input_peripheral_state_machine\n.set input_peripheral_state_machine, input_peripheral_state_machine_def\n");

}
