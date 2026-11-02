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
undefined4 pvr_2069a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pvr_2069a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  bool bVar2;
  undefined4 ar5_00;
  
  (*(undefined4 *)(unsigned)(unsigned)0xa05f6900) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e5c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e5c) | 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) + 1;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bb0) & 2) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa10c) = (*(undefined4 *)(unsigned)(unsigned)0x8c2756b8) + 1 & 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2756b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa10c);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa10c) = ((*(undefined4 *)(unsigned)(unsigned)0xa05f810c) & 0x400) >> 10;
  }
  if ((((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bcc) & 4) == 4) && ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa10c) == 1)) {
    bVar2 = true;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) + -1;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) < 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d90);
      bVar2 = false;
    }
    else if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b0) == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b0) = 0;
    }
  }
  if (!bVar2) {
    (*(uint *)(fr0_ - 0x24)) = 0;
    ar5_00 = 0;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f28) == 0) {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) == 0) {
        (*(int *)(fr0_ - 0x28)) = 0;
        (*(int *)(fr0_ - 0x30)) = 0;
        (*(int *)(fr0_ - 0x2c)) = 0;
        ar4_00 = 0;
        for ((*(int *)(fr0_ - 0x34)) = 0; (*(int *)(fr0_ - 0x34)) < 4; (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1) {
          iVar1 = (*(int *)(fr0_ - 0x34)) * 4;
          if ((-1 < *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1)) &&
             ((*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) & 1) == 0)) {
            if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0) == 0) {
              if (*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) {
                *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 5;
                if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) != 0) {
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0bc) + 1;
                }
                (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(undefined4 *)(unsigned)(unsigned)0xa05f8008) = 0;
              }
              else {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b0) = 1;
                (*(uint *)(fr0_ - 0x24)) = 1;
                if ((*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 2) &&
                   ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8))) {
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0c0) + 1;
                  (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 0xffffffff;
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
                  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) = 0;
                }
              }
            }
            else {
              (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b0) = 1;
              (*(uint *)(fr0_ - 0x24)) = 1;
              if ((*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) &&
                 ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b4) + 1, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b4))) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0bc) + 1;
                (*(undefined4 *)(unsigned)(unsigned)0xa05f8008) = 0;
                (*(undefined4 *)(unsigned)(unsigned)0xa05f8044) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e74);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(undefined4 *)(unsigned)(unsigned)0x8c4aa008),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c),0,1));
                ar6 = 0;
                ar7 = 1;
                ar4_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa008);
                ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(undefined4 *)(unsigned)(unsigned)0x8c4aa008),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa00c),0,1));
                *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(int *)(fr0_ - 0x2c))) = 5;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa104) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa104) + 1;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b4) = 0;
              }
              if ((*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(int *)(fr0_ - 0x30))) == 2) &&
                 ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8))) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0c0) + 1;
                (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(int *)(fr0_ - 0x28))) = 0xffffffff;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
                (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0b8) = 0;
              }
            }
          }
          (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + 4;
          (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 4;
          (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 4;
        }
        (*(uint *)(fr0_ - 0x24)) = (*(uint *)(fr0_ - 0x24)) | (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0cc) + 1;
        ar5_00 = 1;
        if (0x10 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0cc)) {
          (*(undefined4 *)(unsigned)(unsigned)0xa05f8048) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e78);
          (*(undefined4 *)(unsigned)(unsigned)0xa05f804c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e70);
          (*(undefined4 *)(unsigned)(unsigned)0xa05f8068) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60);
          (*(undefined4 *)(unsigned)(unsigned)0xa05f806c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) = 0;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4aa0cc) = 0;
        }
        (*(uint *)(fr0_ - 0x24)) = 1;
      }
    }
    else {
      (*(uint *)(fr0_ - 0x24)) = 1;
    }
    if ((*(uint *)(fr0_ - 0x24)) == 0) {
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_206350(0,ar5_00,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), pvr_206480((*(uint *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_20672a((*(uint *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f20) = 0;
    }
  }
  return 0;
}

__asm__(".globl _pvr_2069a0\n.set _pvr_2069a0, _pvr_2069a0_def\n");
