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
int FUN_8c11a588_def(int ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11a588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (ar6 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    iVar1 = *(le<int>* )(unsigned)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((*((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x10)) & 1) != 0) &&
           ((*(le<undefined4>* )(fr0_ - 0xc)) = CONCAT22(*(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 0x10) + 4),
                                *(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 0x10) + 2)),
           (*(le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(0xc0 + ar4) + (*(le<undefined4>* )(fr0_ - 0xc)) * 2) & 0x80) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(le<int>* )(unsigned)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c11a588\n.set FUN_8c11a588, FUN_8c11a588_def\n");

}
