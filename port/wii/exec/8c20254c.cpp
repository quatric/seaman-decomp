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
uint FUN_8c20254c_def(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20254c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 ar5_00;
  byte bVar3;
  
  if (*ar4 == 3) {
    return 3;
  }
  uVar1 = ar5;
  if (ar5 == 0xffffffff) {
    uVar1 = (uint)*ar4;
    if (uVar1 == 4) {
      *ar4 = 3;
    }
    else {
      *ar4 = 4;
    }
  }
  if (ar5 != 0) {
    return uVar1;
  }
  if (*ar4 == 0) {
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x2c);
    if (iVar2 != 1) goto LAB_8c20262e;
  }
  else if ((*ar4 != 1) || (iVar2 = 1, *(le<int>* )(unsigned)(ar4 + 0x2c) != 1)) {
    if (*ar4 == 2) {
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x2c);
      if (iVar2 == 2) goto LAB_8c20262e;
      if ((*ar4 == 2) && (*(le<int>* )(unsigned)(ar4 + 0x2c) == 3)) {
        ar5_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efd14(*(le<undefined4>* )(unsigned)(ar4 + 0x24),vr5,vr6,vr7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20200c(ar4,ar5_00,ar6,ar7));
        if (iVar2 == 0) {
          return 0;
        }
        *ar4 = 5;
        return iVar2;
      }
    }
    if (*ar4 == 4) {
      iVar2 = 4;
      if (*(le<int>* )(unsigned)(ar4 + 0x2c) == 0) goto LAB_8c20262e;
      if (*ar4 == 4) {
        iVar2 = 1;
        if (*(le<int>* )(unsigned)(ar4 + 0x2c) == 1) goto LAB_8c202640;
        if (*ar4 == 4) {
          iVar2 = *(le<int>* )(unsigned)(ar4 + 0x2c);
          if (iVar2 == 2) {
LAB_8c20262e:
            bVar3 = 1;
            goto LAB_8c202642;
          }
          if (*ar4 == 4) {
            iVar2 = *(le<int>* )(unsigned)(ar4 + 0x2c);
            if (iVar2 == 3) goto LAB_8c202640;
            if ((*ar4 == 4) && (iVar2 = *(le<int>* )(unsigned)(ar4 + 0x2c), iVar2 == 4)) goto LAB_8c20262e;
          }
        }
      }
    }
    if ((*ar4 != 5) || (iVar2 = 1, *(le<int>* )(unsigned)(ar4 + 0x2c) != 1)) {
      uVar1 = (uint)*ar4;
      if ((uVar1 == 6) && (uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x2c), uVar1 == 4)) {
        if (ar4[1] == 2) {
          *ar4 = 0;
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        else {
          *ar4 = 2;
          ar4[0x28] = 2;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        return (uint)ar4[1];
      }
      return uVar1;
    }
  }
LAB_8c202640:
  bVar3 = 2;
LAB_8c202642:
  *ar4 = bVar3;
  return iVar2;
}

__asm__(".globl FUN_8c20254c\n.set FUN_8c20254c, FUN_8c20254c_def\n");

}
