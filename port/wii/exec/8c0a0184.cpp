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
undefined * FUN_8c0a0184_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a0184");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)(unsigned)0x5, 4 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0a01a4))[iVar2 + -5];
                    
    switch(iVar2) {
    case 5:
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      puVar1 = (undefined *)(unsigned)0x1e;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x1e;
      puVar1 = (undefined *)(unsigned)0x9c;
      *(le<int>* )(unsigned)(ar4 + 0x9c) = *(le<int>* )(unsigned)(ar4 + 0x9c) + 1;
      break;
    case 9:
      *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)(unsigned)0xf;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)(unsigned)0xf;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}

__asm__(".globl FUN_8c0a0184\n.set FUN_8c0a0184, FUN_8c0a0184_def\n");

}
