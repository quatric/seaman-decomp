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
undefined4 FUN_8c1f51ec_def(undefined4 ar4,int ar5,le<uint>* ar6,le<uint>* ar7)

{
  TRACE_ENTER("FUN_8c1f51ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  byte bVar2;
  int iVar3;
  le<uint>* ar5_00;
  le<uint>* ar6_00;
  le<uint>* ar7_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f518e(ar6,ar7,ar6,ar7));
  ar5_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5146(ar6,ar7,ar6_00,ar7_00));
  iVar3 = (int)0x10c4;
  *(byte *)(unsigned)((int)ar6 + 2) = (*(byte *)(unsigned)((int)ar6 + 1) ^ (byte)*ar6) & (byte)*ar6;
  piVar1 = 0x8c4727b4;
  *(byte *)(unsigned)((int)ar6 + 3) = (*(byte *)(unsigned)((int)ar6 + 1) ^ (byte)*ar6) & ~(byte)*ar6;
  if (((*(le<int>* )(unsigned)(*piVar1 + iVar3) == 1) && ((byte)ar6[2] != 0xff)) && ((byte)ar6[2] != 0)) {
    ar5_00 = (le<uint>* )(unsigned)((*ar7 & 0xff) + 1);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4780(ar7,uVar4,vr6,vr7));
  }
  if ((byte)*ar6 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(unsigned)(ar6 + 1) = bVar2;
  if (*(byte *)(unsigned)((int)ar6 + 2) != 0) {
    *(undefined1 *)(unsigned)(ar5 + 0x10) = 1;
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f53c2(ar5,ar6,ar7,ar7_00));
    ar6_00 = ar7;
  }
  if (*(byte *)(unsigned)((int)ar6 + 3) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5506(ar5,ar5_00,ar6_00,ar7_00));
  }
  return 0;
}

__asm__(".globl FUN_8c1f51ec\n.set FUN_8c1f51ec, FUN_8c1f51ec_def\n");

}
