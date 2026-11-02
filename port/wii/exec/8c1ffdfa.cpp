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
int FUN_8c1ffdfa_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ffdfa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 276; for (int i_ = 0; i_ < 276; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  sVar1 = (int)0xffffff01;
  if (*(char *)(unsigned)(iVar6 + 2) != '\0') {
    puVar4 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c1fdd1a(ar4,puVar4,ar6,ar7));
      sVar1 = (int)0xffffff01;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c1fd550(ar4,puVar4,ar6,ar7));
      sVar1 = (int)0xffffff01;
      if (((iVar2 != 0) && (*(char *)(unsigned)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) &&
         (iVar5 = (vsp = ((unsigned long)(fr0_ - 276)), thunk_FUN_8c1ffcc2(ar4,puVar4,ar6,ar7)),
         sVar1 = (int)0xffffff03, -1 < iVar5)) {
        iVar5 = 0;
        puVar4 = (undefined1 *)(unsigned)(*(le<int>* )(unsigned)(iVar6 + 0x20) + 0x10);
        for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = (undefined1 *)(unsigned)(*(le<int>* )(unsigned)(iVar6 + 0x20) + 0x10);
        (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)(ar5));
        for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
          *puVar4 = *((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x14));
          puVar4 = puVar4 + 1;
          (*(le<unsigned>* )(fr0_ - 0x14) = (unsigned)(unsigned long)(((undefined1 *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x14)) + 1));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 276)), FUN_8c20065a(ar4,puVar4,iVar5,iVar2));
        return uVar3;
      }
    }
  }
  return (int)sVar1;
}

__asm__(".globl FUN_8c1ffdfa\n.set FUN_8c1ffdfa, FUN_8c1ffdfa_def\n");

}
