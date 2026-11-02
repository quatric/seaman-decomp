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
undefined4 FUN_8c1fd550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fd550");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *pcVar1;
  le<uint>* puVar2;
  int iVar3;
  undefined4 ar4_00;
  
  ar4_00 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d1e8) + ar4 * 4);
  pcVar1 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(ar4_00,ar5,ar6,ar7));
  puVar2 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd26(ar4_00,ar5,ar6,ar7));
  if (((*pcVar1 != '\0') && (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1f4636(ar4_00,ar5,ar6,ar7)), iVar3 == 0)) &&
     ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c1fd550\n.set FUN_8c1fd550, FUN_8c1fd550_def\n");

}
