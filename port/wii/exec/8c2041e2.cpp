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
int FUN_8c2041e2_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2041e2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  iVar4 = 0;
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  a4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408);
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  do {
    if (a4 == 0) {
      if (((*(le<int>* )(fr0_ - 0x24)) != 2) || (iVar4 == 0)) {
        iVar4 = -1;
      }
      return iVar4;
    }
    if ((int)ar4 <= *(le<int>* )(unsigned)(a4 + 0x10)) {
      uVar1 = *(le<uint>* )(unsigned)(ar5 + 0x18);
      iVar5 = (*(le<int>* )(unsigned)(a4 + 0xc) + *(le<int>* )(unsigned)(a4 + 0x10)) - ar4;
      if ((((uVar1 & 1) == 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
        (*(le<int>* )(fr0_ - 0x24)) = 1;
        for (iVar2 = *(le<int>* )(unsigned)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
          if (iVar3 == 0) {
            return iVar2;
          }
        }
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204140(a4,ar4,ar5,ar7));
        if (-1 < iVar2) {
          for (; iVar2 <= iVar5; iVar2 = iVar2 + 0x800) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
            if (iVar3 == 0) {
              return iVar2;
            }
          }
        }
        (*(le<int>* )(fr0_ - 0x24)) = 2;
        if (iVar4 == 0) {
          for (iVar2 = *(le<int>* )(unsigned)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
            if (iVar3 == 0) {
              iVar4 = iVar2;
              iVar2 = iVar5;
            }
          }
        }
      }
    }
    a4 = *(le<int>* )(unsigned)(a4 + 8);
  } while( true );
}

__asm__(".globl FUN_8c2041e2\n.set FUN_8c2041e2, FUN_8c2041e2_def\n");

}
