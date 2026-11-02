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
undefined4 FUN_8c20b7a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b7a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<int>* piVar3;
  uint uVar4;
  le<le<undefined4>*>* ar5_00;
  le<le<undefined4>*>* ar6_00;
  le<le<undefined4>*>* a7;
  int iVar5;
  
  (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c26d400)));
  (*(le<undefined4>* )(fr0_ - 0x64)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d404);
  (*(le<undefined4>* )(fr0_ - 0x60)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d408);
  (*(le<undefined4>* )(fr0_ - 0x5c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d40c);
  (*(le<undefined4>* )(fr0_ - 0x58)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d410);
  (*(le<undefined4>* )(fr0_ - 0x54)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d414);
  (*(le<undefined4>* )(fr0_ - 0x50)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d418);
  (*(le<undefined4>* )(fr0_ - 0x4c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d41c);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) != 0)) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) != 0)) &&
     ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d70) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20af20(ar4,ar5,ar6,ar7));
  }
  iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
  ((le<undefined4>*  *)(fr0_ - 0x34))[0] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560d4);
  ar5_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 2);
  ar6_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 1);
  ((le<undefined4>*  *)(fr0_ - 0x34))[1] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560c4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[2] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560b4);
  a7 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[3] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560a4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[4] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b56094);
  ((le<int>* )(fr0_ - 0x48))[0] = iVar5 + -0x73b56084;
  ((le<int>* )(fr0_ - 0x48))[1] = iVar5 + -0x73b56074;
  ((le<int>* )(fr0_ - 0x48))[2] = iVar5 + -0x73b56064;
  ((le<int>* )(fr0_ - 0x48))[3] = iVar5 + -0x73b56054;
  ((le<int>* )(fr0_ - 0x48))[4] = iVar5 + -0x73b56044;
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560d4) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218);
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560c4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[1];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560b4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[2];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560a4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[3];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b56094) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[4];
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
    (*(le<uint>* )(fr0_ - 0x74)) = 0;
    do {
      if ((int)(*(le<uint>* )(fr0_ - 0x74)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x74)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x74)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(le<uint>* )(fr0_ - 0x74)) * 4;
        iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x74))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(le<int>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x74))] = (iVar1 >> 2) << 2;
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      }
      (*(le<uint>* )(fr0_ - 0x74)) = (*(le<uint>* )(fr0_ - 0x74)) + 1;
    } while ((int)(*(le<uint>* )(fr0_ - 0x74)) < 5);
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    uVar2 = 0;
LAB_8c20b91a:
    if ((int)uVar2 < 0) {
      uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar4 = 1 << (uVar2 & 0x1f);
    }
    if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20b9b4;
    if (*(le<uint>* )(unsigned)(uVar2 * 4 + -0x73b55f20) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2]) {
      *(le<undefined4>* )(unsigned)(uVar2 * 4 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2];
    }
    ar5_00 = (le<le<undefined4>*>* )(unsigned)(uVar2 * 4);
    if ((le<undefined4>* )(unsigned)*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)ar5_00 + (int)((le<int>* )(fr0_ - 0x48)))) <= ar5_00[-0x1ced57e4])
    goto LAB_8c20b9b4;
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    goto LAB_8c20bd1e;
  }
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fcc) & 0x20) == 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210dfc(((undefined1 *)(unsigned)0x8c4aa218),ar5_00,ar6_00,a7));
    (*(le<uint>* )(fr0_ - 0x78)) = 0;
    do {
      iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
      iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x78))];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      *(le<int>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = (iVar1 >> 2) << 2;
      ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = 0;
      }
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
        if (*(le<uint>* )(unsigned)(iVar5 + -0x73b55f20) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          *(le<undefined4>* )(unsigned)(iVar5 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))];
        }
        if (*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + iVar5) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          uVar2 = 0;
          do {
            if ((int)uVar2 < 0) {
              uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            }
            else {
              uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
              *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
            }
            else {
              (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
              ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
              ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
              *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 5);
LAB_8c20bd1e:
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
          break;
        }
      }
      (*(le<uint>* )(fr0_ - 0x78)) = (*(le<uint>* )(fr0_ - 0x78)) + 1;
    } while ((int)(*(le<uint>* )(fr0_ - 0x78)) < 5);
    goto LAB_8c20bd36;
  }
  (*(le<uint>* )(fr0_ - 0x78)) = 0;
  do {
    if ((*(le<uint>* )(fr0_ - 0x78)) != (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)) {
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = 0;
      }
      else {
        iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
        piVar3 = ((le<int>* )(fr0_ - 0x48)) + (*(le<uint>* )(fr0_ - 0x78));
        iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x78))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(le<int>* )(unsigned)*piVar3 = (iVar1 >> 2) << 2;
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
        if (*(le<uint>* )(unsigned)(iVar5 + -0x73b55f20) < *(le<uint>* )(unsigned)*piVar3) {
          *(le<undefined4>* )(unsigned)((*(le<uint>* )(fr0_ - 0x78)) * 4 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))];
        }
        if (*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + (*(le<uint>* )(fr0_ - 0x78)) * 4) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          uVar2 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    (*(le<uint>* )(fr0_ - 0x78)) = (*(le<uint>* )(fr0_ - 0x78)) + 1;
  } while ((int)(*(le<uint>* )(fr0_ - 0x78)) < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar2 = uVar2 + 1;
  if (4 < (int)uVar2) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar2 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)) {
LAB_8c20bb3e:
      *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20bb3e;
      (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
      ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
      ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
LAB_8c20bb6c:
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) == *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)]) {
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
    (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) & 7) << 0x18)));
    ar5_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x68)));
    ar6_00 = (le<le<undefined4>*>* )(unsigned)0x20;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,ar5_00,0x20,
                 a7));
  }
LAB_8c20bd36:
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c) + 1 & 1;
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5_00,ar6_00,a7));
  return 0;
}

__asm__(".globl FUN_8c20b7a0\n.set FUN_8c20b7a0, FUN_8c20b7a0_def\n");

}
