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
uint FUN_8c202682_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c202682");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (uint)*ar4;
  if (uVar1 == 1) {
    uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28);
    if (uVar1 != 0) {
      if (uVar1 == 2) {
LAB_8c2026ca:
        ar4[0x28] = 0;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return uVar1;
      }
      if (uVar1 != 1) {
        if (uVar1 == 3) {
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
          return 3;
        }
        if (uVar1 != 4) goto LAB_8c2026ca;
      }
    }
  }
  else if (uVar1 == 2) {
    uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28);
    if (uVar1 == 0) {
      ar4[0x28] = 2;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0;
    }
    if ((uVar1 == 1) || ((uVar1 != 2 && (uVar1 != 3)))) {
      ar4[0x28] = 3;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar1;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar2 = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(ar4 + 0x2c);
      return uVar2;
    }
    if (uVar1 == 5) {
      uVar2 = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
      ar4[0x28] = 1;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar2;
    }
    if (uVar1 == 6) {
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x2c);
      if (iVar3 == 100) {
        ar4[0x28] = 0x65;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return 100;
      }
      if (iVar3 != 0x65) {
        ar4[0x28] = 100;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return iVar3;
      }
      ar4[0x28] = 4;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0x65;
    }
    if (uVar1 == 0) {
      uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) && (uVar1 != 3)) {
        return uVar1;
      }
    }
    else if (uVar1 == 3) {
      uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28);
      if (((uVar1 != 0) && (uVar1 != 1)) && ((uVar1 != 2 && (uVar1 != 3)))) {
        return uVar1;
      }
    }
    else {
      *ar4 = 3;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c202682\n.set FUN_8c202682, FUN_8c202682_def\n");

}
