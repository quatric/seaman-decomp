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
undefined4 FUN_8c105094_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c105094");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) && (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  uVar1 = 0x20;
  if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((le<code*>* )&(*(undefined1 *)(unsigned)0x8c10519c))[iVar2 + -1])))(uVar3,vr5,vr6,vr7));
    return uVar3;
  }
  return uVar1;
}

__asm__(".globl FUN_8c105094\n.set FUN_8c105094, FUN_8c105094_def\n");

}
