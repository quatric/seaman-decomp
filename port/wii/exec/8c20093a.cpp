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
uint FUN_8c20093a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20093a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int ar5_00;
  undefined4 uVar5;
  
  piVar1 = 0x8c4783dc;
  ar5_00 = 0;
  uVar5 = 0xfffa;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
      return ar5 & 0xffff;
    }
    pbVar2 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200a84(ar4,ar5_00,ar6,ar7));
    if (((*pbVar2 == 0x33) || (*pbVar2 == 0xcc)) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(2,uVar5,vr6,vr7)), (ar5 & 0xffff) == (uVar3 & 0xffff))) break;
    ar5_00 = ar5_00 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c20093a\n.set FUN_8c20093a, FUN_8c20093a_def\n");

}
