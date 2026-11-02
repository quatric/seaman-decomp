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
undefined4 FUN_8c01a760_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a760");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4[*ar4 * 10 + 0x915];
  uVar1 = 0xd;
  if ((iVar2 < 0xe) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c1a4(ar4,ar5,ar6,ar7));
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c260(ar4,ar5,ar6,ar7));
      break;
    case 2:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01aa94(ar4,ar5,ar6,ar7));
      if (iVar2 == 1) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a98c(ar4,ar5,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c924(ar4,ar5,ar6,ar7));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bebc(ar4,ar5,ar6,ar7));
      }
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c924(ar4,ar5,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bfd0(ar4,ar5,ar6,ar7));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c924(ar4,ar5,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c0e4(ar4,ar5,ar6,ar7));
      break;
    case 5:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c450(ar4,ar5,ar6,ar7));
      break;
    case 6:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c4d8(ar4,ar5,ar6,ar7));
      break;
    case 7:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c560(ar4,ar5,ar6,ar7));
      break;
    case 8:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c320(ar4,ar5,ar6,ar7));
      break;
    case 9:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c3c4(ar4,ar5,ar6,ar7));
      break;
    case 10:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c6f4(ar4,ar5,ar6,ar7));
      break;
    case 0xb:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c774(ar4,ar5,ar6,ar7));
      break;
    case 0xc:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c7f4(ar4,ar5,ar6,ar7));
      break;
    case 0xd:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c860(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01a760\n.set FUN_8c01a760, FUN_8c01a760_def\n");

}
