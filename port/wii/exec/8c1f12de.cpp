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
undefined4 FUN_8c1f12de_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f12de");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), syscall_1f10ec(ar4,&(*(le<int>* )(fr0_ - 0x18)),ar6,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    *ar5 = (*(le<undefined4>* )(fr0_ - 0x10));
    ar5[2] = (*(le<undefined4>* )(fr0_ - 0xc));
    return 4;
  }
  if (iVar1 == 2) {
    *ar5 = (*(le<undefined4>* )(fr0_ - 0x10));
    return 1;
  }
  if (iVar1 == 3) {
    return 0x41;
  }
  if (iVar1 == 4) {
    return 0x43;
  }
  if (iVar1 != -1) {
    return iVar1;
  }
  ar5[1] = (*(le<undefined4>* )(fr0_ - 0x14));
  if ((*(le<int>* )(fr0_ - 0x18)) == 0) {
    *ar5 = 0xffffffe5;
    return 5;
  }
  if ((*(le<int>* )(fr0_ - 0x18)) == 1) {
    uVar2 = 0xffffffe4;
LAB_8c1f1386:
    *ar5 = uVar2;
  }
  else {
    if ((*(le<int>* )(fr0_ - 0x18)) == 2) {
      uVar2 = 0xffffffe3;
    }
    else {
      if ((*(le<int>* )(fr0_ - 0x18)) == 3) {
        uVar2 = 0xffffffe2;
        goto LAB_8c1f1386;
      }
      if ((*(le<int>* )(fr0_ - 0x18)) == 4) {
        uVar2 = 0xffffffe1;
      }
      else {
        if ((*(le<int>* )(fr0_ - 0x18)) == 5) {
          uVar2 = 0xffffffe0;
          goto LAB_8c1f1386;
        }
        if ((*(le<int>* )(fr0_ - 0x18)) == 6) {
          uVar2 = 0xffffffdf;
        }
        else {
          if ((*(le<int>* )(fr0_ - 0x18)) == 7) {
            uVar2 = 0xffffffde;
            goto LAB_8c1f1386;
          }
          if ((*(le<int>* )(fr0_ - 0x18)) == 0xb) {
            uVar2 = 0xffffffdd;
          }
          else {
            if ((*(le<int>* )(fr0_ - 0x18)) == 0x10) {
              uVar2 = 0xffffffdc;
              goto LAB_8c1f1386;
            }
            uVar2 = 0xffffffe6;
          }
        }
      }
    }
    *ar5 = uVar2;
  }
  return 5;
}

__asm__(".globl FUN_8c1f12de\n.set FUN_8c1f12de, FUN_8c1f12de_def\n");

}
