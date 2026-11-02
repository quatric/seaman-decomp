#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c20b7a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 **ar5_00;
  undefined4 **ar6_00;
  undefined4 **a7;
  int iVar5;
  
  (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c26d400)));
  (*(undefined4 *)(fr0_ - 0x64)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d404);
  (*(undefined4 *)(fr0_ - 0x60)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d408);
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d40c);
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d410);
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d414);
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d418);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d41c);
  if ((((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa05c) != 0)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa064) != 0)) &&
     ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d70) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20af20(ar4,ar5,ar6,ar7));
  }
  iVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) * 4;
  ((undefined4 * *)(fr0_ - 0x34))[0] = (undefined4 *)(unsigned)(iVar5 + -0x73b560d4);
  ar5_00 = ((undefined4 * *)(fr0_ - 0x34)) + 2;
  ar6_00 = ((undefined4 * *)(fr0_ - 0x34)) + 1;
  ((undefined4 * *)(fr0_ - 0x34))[1] = (undefined4 *)(unsigned)(iVar5 + -0x73b560c4);
  ((undefined4 * *)(fr0_ - 0x34))[2] = (undefined4 *)(unsigned)(iVar5 + -0x73b560b4);
  a7 = ((undefined4 * *)(fr0_ - 0x34)) + 4;
  ((undefined4 * *)(fr0_ - 0x34))[3] = (undefined4 *)(unsigned)(iVar5 + -0x73b560a4);
  ((undefined4 * *)(fr0_ - 0x34))[4] = (undefined4 *)(unsigned)(iVar5 + -0x73b56094);
  ((int *)(fr0_ - 0x48))[0] = iVar5 + -0x73b56084;
  ((int *)(fr0_ - 0x48))[1] = iVar5 + -0x73b56074;
  ((int *)(fr0_ - 0x48))[2] = iVar5 + -0x73b56064;
  ((int *)(fr0_ - 0x48))[3] = iVar5 + -0x73b56054;
  ((int *)(fr0_ - 0x48))[4] = iVar5 + -0x73b56044;
  *(undefined4 *)(unsigned)(iVar5 + -0x73b560d4) = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218);
  *(undefined4 *)(unsigned)(iVar5 + -0x73b560c4) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[1];
  *(undefined4 *)(unsigned)(iVar5 + -0x73b560b4) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[2];
  *(undefined4 *)(unsigned)(iVar5 + -0x73b560a4) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[3];
  *(undefined4 *)(unsigned)(iVar5 + -0x73b56094) = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[4];
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) {
    (*(uint *)(fr0_ - 0x74)) = 0;
    do {
      if ((int)(*(uint *)(fr0_ - 0x74)) < 0) {
        uVar2 = 1 >> (~(*(uint *)(fr0_ - 0x74)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(uint *)(fr0_ - 0x74)) & 0x1f);
      }
      if ((uVar2 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(uint *)(fr0_ - 0x74)) * 4;
        iVar1 = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) - *((undefined4 * *)(fr0_ - 0x34))[(*(uint *)(fr0_ - 0x74))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(int *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x74))] = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(undefined4 *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      }
      (*(uint *)(fr0_ - 0x74)) = (*(uint *)(fr0_ - 0x74)) + 1;
    } while ((int)(*(uint *)(fr0_ - 0x74)) < 5);
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0;
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
    if ((uVar4 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20b9b4;
    if (*(uint *)(unsigned)(uVar2 * 4 + -0x73b55f20) < *(uint *)(unsigned)((int *)(fr0_ - 0x48))[uVar2]) {
      *(undefined4 *)(unsigned)(uVar2 * 4 + -0x73b55f20) = *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2];
    }
    ar5_00 = (undefined4 **)(unsigned)(uVar2 * 4);
    if ((undefined4 *)(unsigned)*((uint *)(unsigned long)*(unsigned *)(unsigned)((int)ar5_00 + (int)((int *)(fr0_ - 0x48)))) <= ar5_00[-0x1ced57e4])
    goto LAB_8c20b9b4;
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) != 0) {
        (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((uint)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2],((undefined4 * *)(fr0_ - 0x68)),0x20,a7));
        ar6_00 = (undefined4 **)(unsigned)0x4;
        ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0x20;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    goto LAB_8c20bd1e;
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9fcc) & 0x20) == 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210dfc(((undefined1 *)(unsigned)0x8c4aa218),ar5_00,ar6_00,a7));
    (*(uint *)(fr0_ - 0x78)) = 0;
    do {
      iVar5 = (*(uint *)(fr0_ - 0x78)) * 4;
      iVar1 = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) - *((undefined4 * *)(fr0_ - 0x34))[(*(uint *)(fr0_ - 0x78))];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      *(int *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))] = (iVar1 >> 2) << 2;
      ar6_00 = (undefined4 **)(unsigned)0x4;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(undefined4 *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      if ((int)(*(uint *)(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(uint *)(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(uint *)(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))] = 0;
      }
      if ((int)(*(uint *)(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(uint *)(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(uint *)(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(uint *)(fr0_ - 0x78)) * 4;
        if (*(uint *)(unsigned)(iVar5 + -0x73b55f20) < *(uint *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))]) {
          *(undefined4 *)(unsigned)(iVar5 + -0x73b55f20) = *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))];
        }
        if (*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + iVar5) < *(uint *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))]) {
          uVar2 = 0;
          do {
            if ((int)uVar2 < 0) {
              uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            }
            else {
              uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) {
              *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0;
            }
            else {
              (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((uint)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2],((undefined4 * *)(fr0_ - 0x68)),0x20,a7));
              ar6_00 = (undefined4 **)(unsigned)0x4;
              ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
              *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 5);
LAB_8c20bd1e:
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
          break;
        }
      }
      (*(uint *)(fr0_ - 0x78)) = (*(uint *)(fr0_ - 0x78)) + 1;
    } while ((int)(*(uint *)(fr0_ - 0x78)) < 5);
    goto LAB_8c20bd36;
  }
  (*(uint *)(fr0_ - 0x78)) = 0;
  do {
    if ((*(uint *)(fr0_ - 0x78)) != (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0)) {
      if ((int)(*(uint *)(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(uint *)(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(uint *)(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))] = 0;
      }
      else {
        iVar5 = (*(uint *)(fr0_ - 0x78)) * 4;
        piVar3 = ((int *)(fr0_ - 0x48)) + (*(uint *)(fr0_ - 0x78));
        iVar1 = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) - *((undefined4 * *)(fr0_ - 0x34))[(*(uint *)(fr0_ - 0x78))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(int *)(unsigned)*piVar3 = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(undefined4 *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) = *(int *)(unsigned)(iVar5 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
        if (*(uint *)(unsigned)(iVar5 + -0x73b55f20) < *(uint *)(unsigned)*piVar3) {
          *(undefined4 *)(unsigned)((*(uint *)(fr0_ - 0x78)) * 4 + -0x73b55f20) = *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))];
        }
        if (*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + (*(uint *)(fr0_ - 0x78)) * 4) < *(uint *)(unsigned)((int *)(fr0_ - 0x48))[(*(uint *)(fr0_ - 0x78))]) {
          uVar2 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    (*(uint *)(fr0_ - 0x78)) = (*(uint *)(fr0_ - 0x78)) + 1;
  } while ((int)(*(uint *)(fr0_ - 0x78)) < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar2 = uVar2 + 1;
  if (4 < (int)uVar2) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar2 == (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0)) {
LAB_8c20bb3e:
      *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20bb3e;
      (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((uint)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2],((undefined4 * *)(fr0_ - 0x68)),0x20,a7));
      ar6_00 = (undefined4 **)(unsigned)0x4;
      ar5_00 = (undefined4 **)(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((undefined4 * *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(undefined4 *)(unsigned)((int *)(fr0_ - 0x48))[uVar2] = 0x20;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
LAB_8c20bb6c:
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) * 4) == *((undefined4 * *)(fr0_ - 0x34))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0)]) {
    (*(undefined4 *)(unsigned)(unsigned)0xff000038) = 0x10;
    (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = 0x10;
    (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((uint)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x68)) & 0xf0ffffff | ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) & 7) << 0x18)));
    ar5_00 = ((undefined4 * *)(fr0_ - 0x68));
    ar6_00 = (undefined4 **)(unsigned)0x20;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,ar5_00,0x20,
                 a7));
  }
LAB_8c20bd36:
  (*(undefined4 *)(unsigned)(unsigned)0x8c275710) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27570c) = (*(undefined4 *)(unsigned)(unsigned)0x8c27570c) + 1 & 1;
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5_00,ar6_00,a7));
  return 0;
}

__asm__(".globl _FUN_8c20b7a0\n.set _FUN_8c20b7a0, _FUN_8c20b7a0_def\n");
