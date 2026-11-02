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
undefined4 pvr_2069a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_2069a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  bool bVar2;
  undefined4 ar5_00;
  
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f6900) = 8;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e5c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e5c) | 2;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) + 1;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 2) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b8) + 1 & 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c);
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) = ((*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f810c) & 0x400) >> 10;
  }
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 4) == 4) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) == 1)) {
    bVar2 = true;
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) + -1;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) < 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d90);
      bVar2 = false;
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 0;
    }
  }
  if (!bVar2) {
    (*(le<uint>* )(fr0_ - 0x24)) = 0;
    ar5_00 = 0;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f28) == 0) {
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) == 0) {
        (*(le<int>* )(fr0_ - 0x28)) = 0;
        (*(le<int>* )(fr0_ - 0x30)) = 0;
        (*(le<int>* )(fr0_ - 0x2c)) = 0;
        ar4_00 = 0;
        for ((*(le<int>* )(fr0_ - 0x34)) = 0; (*(le<int>* )(fr0_ - 0x34)) < 4; (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + 1) {
          iVar1 = (*(le<int>* )(fr0_ - 0x34)) * 4;
          if ((-1 < *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1)) &&
             ((*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) & 1) == 0)) {
            if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) == 0) {
              if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) {
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 5;
                if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) != 0) {
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) + 1;
                }
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8008) = 0;
              }
              else {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 1;
                (*(le<uint>* )(fr0_ - 0x24)) = 1;
                if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 2) &&
                   ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8))) {
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) + 1;
                  (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 0xffffffff;
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
                }
              }
            }
            else {
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 1;
              (*(le<uint>* )(fr0_ - 0x24)) = 1;
              if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) &&
                 ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4))) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) + 1;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8008) = 0;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8044) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e74);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c),0,1));
                ar6 = 0;
                ar7 = 1;
                ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008);
                ar5_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c),0,1));
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x2c))) = 5;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa104) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa104) + 1;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) = 0;
              }
              if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x30))) == 2) &&
                 ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8))) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) + 1;
                (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x28))) = 0xffffffff;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
              }
            }
          }
          (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + 4;
          (*(le<int>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x30)) + 4;
          (*(le<int>* )(fr0_ - 0x2c)) = (*(le<int>* )(fr0_ - 0x2c)) + 4;
        }
        (*(le<uint>* )(fr0_ - 0x24)) = (*(le<uint>* )(fr0_ - 0x24)) | (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4);
      }
      else {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) + 1;
        ar5_00 = 1;
        if (0x10 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc)) {
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8048) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e78);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f804c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e70);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8068) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f806c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) = 0;
        }
        (*(le<uint>* )(fr0_ - 0x24)) = 1;
      }
    }
    else {
      (*(le<uint>* )(fr0_ - 0x24)) = 1;
    }
    if ((*(le<uint>* )(fr0_ - 0x24)) == 0) {
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_206350(0,ar5_00,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), pvr_206480((*(le<uint>* )(fr0_ - 0x24)),ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_20672a((*(le<uint>* )(fr0_ - 0x24)),ar5_00,ar6,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 0;
    }
  }
  return 0;
}

__asm__(".globl pvr_2069a0\n.set pvr_2069a0, pvr_2069a0_def\n");

}
