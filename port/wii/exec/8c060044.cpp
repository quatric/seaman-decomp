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
undefined4 FUN_8c060044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c060044");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) && (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
    iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar2 + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,iVar2));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  uVar1 = 0x10;
  if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((le<code*>* )&(*(undefined1 *)(unsigned)0x8c0600fc))[iVar2 + -1])))(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c060044\n.set FUN_8c060044, FUN_8c060044_def\n");

}
