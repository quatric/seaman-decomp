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
int FUN_8c0daea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daea8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,0,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x7c))))(a4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,uVar3,ar6,ar7));
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0daea8\n.set FUN_8c0daea8, FUN_8c0daea8_def\n");

}
