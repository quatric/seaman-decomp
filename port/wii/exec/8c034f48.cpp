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
int FUN_8c034f48_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034f48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
  for (iVar3 = 0; iVar2 = (int)*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if ((*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\0') || (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x06')) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
        if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c034f48\n.set FUN_8c034f48, FUN_8c034f48_def\n");

}
