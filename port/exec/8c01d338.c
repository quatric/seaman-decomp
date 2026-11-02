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
undefined4 FUN_8c01d338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01d338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x563c);
  uVar1 = 5;
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da90(ar4,ar5,ar6,ar7));
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01dea4(ar4,ar5,ar6,ar7));
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d78c(ar4,ar5,ar6,ar7));
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d8d8(ar4,ar5,ar6,ar7));
      break;
    case 4:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d7cc(ar4,ar5,ar6,ar7));
      break;
    case 5:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_01d92e(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01d338\n.set _FUN_8c01d338, _FUN_8c01d338_def\n");
