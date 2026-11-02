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
undefined4 FUN_8c11617a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11617a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  iVar2 = (int)(int)0xffffff70;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) = ar4;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) = ar5;
  ((fr0_ + (int)0x0000000f))[iVar2] =
       *(undefined1 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x7c);
  if (0xea60 < (int)(uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50))
  {
    return 0xffffffff;
  }
  *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = (int)0x7fff;
  *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) =
       (int)*(short *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54);
  iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
  *(int *)(unsigned)(0x1ac + iVar6) =
       *(int *)(unsigned)(0x1ac + iVar6) + *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = 0;
  while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
         (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50)) {
    iVar6 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
    *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar6;
    if (iVar6 < 0x77ff) {
      *(uint *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
           (uint)(*((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc)) >> 2);
      iVar4 = *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar4 - *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2);
      iVar6 = (int)0x88;
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2)) =
           (short)(iVar4 - *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2));
      *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
           *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
           (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) * 2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    else {
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2)) =
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) <= *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2)) {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
        while ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000004) + iVar2)) & 1) == 0) {
          *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 2;
        }
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000002) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 4);
        if ((*(ushort *)(unsigned)
              (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xc0) +
              *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        }
      }
      else {
        *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    iVar6 = (int)0x84;
    piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
    *piVar7 = *piVar7 + 1;
    iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
    iVar6 = (int)0x84;
    *(undefined4 *)(unsigned)(iVar4 + 4) = *(undefined4 *)(unsigned)(iVar4 + 8);
    *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x18);
    *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
  }
  *(short *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
       (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115fec(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),ar5,ar6,ar7));
  iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
  *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) =
       *(short *)(unsigned)(0x19a + -0x3c + iVar6) + *(short *)(unsigned)(0x19a + iVar6) +
       *(short *)(unsigned)((int)0x1a0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
  *(uint *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50);
  *(uint *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 100);
  *(uint *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x70);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x60);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x6c);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x78);
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54);
  iVar6 = 0;
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
  do {
    *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = iVar6;
    if ((uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50) <=
        *(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = uVar9,
            uVar9 < *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2)) {
        iVar6 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar6;
        if (*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) < iVar6) {
          if ((*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) != 0) &&
             (piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8)),
             iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 < 1)) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
            ;
          }
          if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
          else {
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c)) = 0;
          }
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + -1;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = iVar6;
          *(undefined2 *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = *(undefined2 *)(unsigned)(iVar6 + 2);
          *(undefined2 *)(unsigned)((fr0_ + (int)0x00000026) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          iVar6 = (int)0xa8;
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + iVar6) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
          if (iVar6 == 0) {
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
            if (*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) != 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            }
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa8) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            }
          }
          else if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) < (int)*(short *)(unsigned)(iVar6 + 2)) {
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) + 8);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2);
          }
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
            ;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) = 0x7fff;
          iVar6 = (int)0x84;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = uVar9,
            uVar9 < *(uint *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
             (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000026) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) < *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2)) {
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa8) +
           *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) + -1;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0x98) +
                *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0x98) +
                (*(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) + 1) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa0) +
                *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          while (*(uint *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000018) + iVar2)) {
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) = iVar6;
            *(short *)(unsigned)((fr0_ + (int)0x0000000c) + iVar2) =
                 *(short *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                 *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) +
                                    (int)0x1c0) + iVar6 * 2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x44) +
                  *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) * 4);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x44) +
                  (*(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) + 1) * 4);
            while (*(uint *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000010) + iVar2)) {
              puVar5 = (ushort *)(unsigned)
                       (*((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000014) + iVar2)) * 2 +
                       *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x48));
              *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar5;
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) =
                   *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2));
              *(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) =
                   *(short *)(unsigned)((fr0_ + (int)0x0000000c) + iVar2) +
                   *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                             (uint)(*puVar5 >> 2) * 2);
              if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
                if (*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) == 0) {
                  if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
                    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
                  }
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) = 0;
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                  *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
                  *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2)) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2);
                  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
                  iVar6 = *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) -
                          *(int *)(unsigned)((int)0x9c +
                                  *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 3;
                  }
                  *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
                       *(int *)(unsigned)(0x144 + iVar4) * 4 + *(int *)(unsigned)(0xac + iVar4) +
                       (iVar6 >> 2) * 4;
                }
                else if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
                         *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
                  iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8)) + -1;
                  *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8)) = iVar6;
                  if (iVar6 < 1) {
                    (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8),ar6,ar7));
                  }
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                }
              }
              *(int *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) + 4;
              *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 4;
            }
            *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) + 4;
          }
          iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + -1;
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2),ar6,ar7));
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) = 0x77ff;
          iVar6 = (int)0x84;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x60) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x6c) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x78) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000048) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 100) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x70) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2);
      return 0;
    }
    *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2));
    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4);
    puVar5 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc));
    *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar5;
    uVar1 = *puVar5;
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
    }
    else {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 0;
    }
    if ((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) {
      iVar6 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
      *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = (ushort *)(unsigned)(iVar6 + 2);
      uVar1 = *(ushort *)(unsigned)(iVar6 + 2);
      *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
      uVar9 = (uint)(uVar1 >> 2);
      *(uint *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) = uVar9;
      *(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) =
           *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + uVar9 * 2) +
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
      if (((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) || (((fr0_ + (int)0x0000000f))[iVar2] != '\0')) {
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
              if (*(int *)(unsigned)(iVar6 + 4) == 0) {
                iVar4 = (int)0x114;
                iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            iVar6 = (int)0x84;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
        }
        else if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
                 *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6;
            if (iVar6 < 1) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
        piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7))
          ;
        }
        if (*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) <=
            *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
          iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
          goto LAB_8c1173e8;
        }
        if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
             *(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))) ||
           (*(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
            *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) == 0)
          goto LAB_8c116732;
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0) {
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
            goto LAB_8c1173e8;
          }
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,
                         ar7));
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) != *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            goto LAB_8c1173cc;
          }
        }
        else {
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) = 0;
LAB_8c116732:
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,
                         ar7));
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) + 0x14)
                 = 0;
          }
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) != *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            goto LAB_8c1173cc;
          }
        }
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
        goto LAB_8c1173cc;
      }
      iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
      *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                            (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
        iVar6 = (int)0x84;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
        *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x1c)) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
        if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                            (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
        if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        }
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x10) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      }
      else {
        if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6;
            if (iVar6 < 1) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
        iVar6 = *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2);
        *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = iVar6;
        iVar6 = *(int *)(unsigned)(iVar6 + 0x10);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <
                 (int)*(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
               (iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
               *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6, iVar6 < 1)) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7));
      }
      if (*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) <
          *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2)) {
        piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
          ;
        }
        if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
             *(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))) ||
           (*(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
            *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
        }
        else {
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) = 0;
        }
        if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
        }
        goto LAB_8c1173cc;
      }
      iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
    }
    else {
      if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10);
      }
      else {
        iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
      }
      *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          else {
            iVar6 = (int)0x84;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x1c) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x1c)) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
        }
      }
      else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <
               (int)*(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
        *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
        if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
             (iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
             *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6, iVar6 < 1)) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
          }
        }
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7));
      }
      if ((*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) <=
           *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) ||
         (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0)) {
        iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
        goto LAB_8c1173e8;
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7));
      }
      if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
        puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
LAB_8c11734a:
        *puVar8 = 0;
      }
      else {
        if ((*(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
             *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) &&
           (*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
            *(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)))) {
          puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14));
          goto LAB_8c11734a;
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) != 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
        }
      }
      if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
      }
      else {
        *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
      }
LAB_8c1173cc:
      *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + -1;
    }
LAB_8c1173e8:
    iVar6 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c11617a\n.set _FUN_8c11617a, _FUN_8c11617a_def\n");
