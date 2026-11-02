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
int FUN_8c200c82_def(le<short>* ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200c82");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)*ar5,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[1],ar5_00,ar6,ar7));
  *ar4 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[2],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 1) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[3],ar5_00,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 3) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[4],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 2) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[5],ar5_00,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 5) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[6],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 3) = (char)uVar2;
  cVar1 = (((undefined1 *)(unsigned)0x8c26d218))[ar5[7] & 7];
  *(char *)(unsigned)((int)ar4 + 7) = cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c200c82\n.set FUN_8c200c82, FUN_8c200c82_def\n");

}
