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
int FUN_8c1ffd6c_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ffd6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 272; for (int i_ = 0; i_ < 272; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar4 + 2) != '\0') {
    puVar5 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c1fdd1a(ar4,puVar5,ar6,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c1fd550(ar4,puVar5,ar6,ar7));
      if ((iVar2 != 0) && (*(char *)(unsigned)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 272)), thunk_FUN_8c1ffcc2(ar4,puVar5,ar6,ar7));
        if (iVar3 < 0) {
          return (int)(int)0xffffff03;
        }
        puVar5 = (undefined1 *)(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x20) + 0x10);
        (*(le<unsigned>* )(fr0_ - 0x10) = (unsigned)(unsigned long)(ar5));
        for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) = uVar1;
          (*(le<unsigned>* )(fr0_ - 0x10) = (unsigned)(unsigned long)(((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x10)) + 1));
        }
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1ffd6c\n.set FUN_8c1ffd6c, FUN_8c1ffd6c_def\n");

}
