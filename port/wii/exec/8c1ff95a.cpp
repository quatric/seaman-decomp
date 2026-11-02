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
int FUN_8c1ff95a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ff95a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  
  if (*(char *)(unsigned)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7));
      if ((iVar2 != 0) && (*(char *)(unsigned)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), ret_const_0_200aec(ar4,ar5,ar6_00,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff0b;
        }
        puVar3 = ((undefined1 *)(fr0_ - 0x34));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,puVar3,ar7));
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,iVar2,puVar3,ar7));
        ar6_01 = (undefined1 *)(unsigned)(iVar2 + 0x10);
        for (puVar3 = ((undefined1 *)(fr0_ - 0x3c)); puVar3 < ((undefined1 *)(fr0_ - 0x34)); puVar3 = puVar3 + 1) {
          uVar1 = *ar6_01;
          ar6_01 = ar6_01 + 1;
          *puVar3 = uVar1;
        }
        (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200c82(ar6,((undefined1 *)(fr0_ - 0x3c)),ar6_01,ar7));
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1ff95a\n.set FUN_8c1ff95a, FUN_8c1ff95a_def\n");

}
