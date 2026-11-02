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
undefined4 FUN_8c0fd764_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fd764");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*ar5;
  if ((iVar2 < 0x74) && (0x40 < iVar2)) {
                    
    switch(iVar2) {
    default:
      uVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,ar5,ar6,ar7));
      uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar6,ar5,uVar1,ar7); });
      return uVar1;
    case 0x49:
      break;
    }
  }
  uVar1 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar6,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x3c) + iVar2 * 4 + 0x10,uVar1,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0fd764\n.set FUN_8c0fd764, FUN_8c0fd764_def\n");

}
