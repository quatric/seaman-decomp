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
undefined4 FUN_8c117bac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c117bac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar2 = (int)(int)0xffffff74;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) = ar4;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = ar5;
  ((fr0_ + (int)0x0000000f))[iVar2] =
       *(undefined1 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x7c);
  if (0xea60 < *(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50)) {
    return 0xffffffff;
  }
  *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = (int)0x7fff;
  *(undefined2 *)(unsigned)((fr0_ + (int)0x00000036) + iVar2) =
       *(undefined2 *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54);
  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
  *(int *)(unsigned)(0x1ac + iVar4) =
       *(int *)(unsigned)(0x1ac + iVar4) + (int)*(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2);
  iVar4 = 0;
  while (*(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = iVar4,
        *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) <
        (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50)) {
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
         (uint)(*((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc)) >> 2);
    iVar4 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2);
    *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = iVar4;
    if (iVar4 < 0x77ff) {
      iVar7 = *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = iVar7 - *(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2);
      iVar4 = (int)0x84;
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2)) =
           (short)(iVar7 - *(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2));
      *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
           *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) +
           (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) * 2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    else {
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2)) =
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) <= *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
        while ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000000) + iVar2)) & 1) == 0) {
          *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 2;
        }
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 4);
        if ((*(ushort *)(unsigned)
              (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xc0) +
              *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        }
      }
      else {
        *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    iVar4 = (int)0x80;
    piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
    *piVar5 = *piVar5 + 1;
    iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2);
    iVar4 = (int)0x80;
    *(undefined4 *)(unsigned)(iVar7 + 4) = *(undefined4 *)(unsigned)(iVar7 + 8);
    *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2) + 0x18);
    iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
  }
  *(undefined2 *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2);
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c115fec(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),ar5,ar6,ar7));
  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
  *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) =
       *(short *)(unsigned)(0x19a + -0x3c + iVar4) + *(short *)(unsigned)(0x19a + iVar4) +
       *(short *)(unsigned)((int)0x1a0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
  *(uint *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50);
  *(uint *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 100);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x60);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x6c);
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54);
  iVar4 = 0;
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = 0;
  do {
    *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = iVar4;
    if ((uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50) <=
        *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2)) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = 0;
      *(undefined4 *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000040) + iVar2)) {
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
             (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x0000002e) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) < *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2)) {
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           (*(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) * 2 + 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + -1;
        }
        else {
          ((fr0_ + (int)0x00000007))[iVar2] = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0x98) +
                *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0x98) +
                (*(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) + 1) * 4);
          while (*(uint *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2)) {
            iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000020) + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) = iVar4;
            *(short *)(unsigned)((fr0_ + (int)0x00000032) + iVar2) =
                 (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                 *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                    (int)0x1c0) + iVar4 * 2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x44) +
                  *(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) * 4);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x44) +
                  (*(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) + 1) * 4);
            while (*(uint *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000014) + iVar2)) {
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000018) + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) = iVar4;
              puVar8 = (ushort *)(unsigned)
                       (iVar4 * 2 + *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x48)
                       );
              *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar8;
              *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) =
                   *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                             (uint)(*puVar8 >> 2) * 2) + *(short *)(unsigned)((fr0_ + (int)0x00000032) + iVar2);
              if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
                iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                                *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4);
                *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar4;
                if (iVar4 == 0) {
                  if (((fr0_ + (int)0x00000007))[iVar2] == '\0') {
                    iVar4 = *(int *)(unsigned)((int)0x114 +
                                    *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
                    if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                      uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                        (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                      *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)(unsigned)
                       ((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                           *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
                    }
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
                    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                         *(undefined4 *)(unsigned)
                          ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                         *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                         *(int *)(unsigned)((int)0x1ac +
                                 *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
                    ((fr0_ + (int)0x00000007))[iVar2] = 1;
                  }
                  if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
                    uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
                  }
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                  *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
                  *(undefined4 *)(unsigned)
                   (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                   *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
                }
                else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
                  if (((fr0_ + (int)0x00000007))[iVar2] == '\0') {
                    iVar4 = *(int *)(unsigned)((int)0x114 +
                                    *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
                    if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                      uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                        (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                      *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)(unsigned)
                       ((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                           *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
                    }
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
                    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                         *(undefined4 *)(unsigned)
                          ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                         *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                         *(int *)(unsigned)((int)0x1ac +
                                 *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
                    ((fr0_ + (int)0x00000007))[iVar2] = 1;
                  }
                  iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8);
                  *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
                  if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
                    if (iVar4 < 1) {
                      (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
                    }
                  }
                }
              }
              *(int *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) + 4;
            }
            *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) + 4;
          }
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2) = 0x77ff;
          iVar4 = (int)0x80;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
        }
        *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x60) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x6c) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000048) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 100) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      return 0;
    }
    *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2));
    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4);
    puVar8 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc));
    *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar8;
    uVar1 = *puVar8;
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
    }
    else {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 0;
    }
    if ((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) {
      iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
      *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = (ushort *)(unsigned)(iVar4 + 2);
      uVar1 = *(ushort *)(unsigned)(iVar4 + 2);
      *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
      if (((uVar1 & 1) == 0) || (((fr0_ + (int)0x0000000f))[iVar2] != '\0')) {
        iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) -
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x48);
        *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
        sVar6 = *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                          (*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) >> 2) * 2) +
                (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = sVar6;
        if (sVar6 <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
             *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
          else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
              if (iVar4 < 1) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
        }
        if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar7 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          goto LAB_8c118c66;
        }
        iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
      }
      else {
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
        *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) =
             *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                       (*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) >> 2) * 2) +
             (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                 (int)0xb0) + *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 8);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar4;
        if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
          else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
              if (iVar4 < 1) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          iVar7 = *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2);
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = iVar7 + 1;
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0xb0) + (iVar7 + 1) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            }
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
            }
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) < (int)*(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
                 (iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
                 *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4, iVar4 < 1)) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
        }
        if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar7 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
LAB_8c118c66:
          *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + -1;
        }
        else {
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
        }
      }
    }
    else {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
        iVar4 = *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2 + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = iVar4;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                 (int)0xb0) + iVar4 * 4);
        *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = iVar4;
        if (iVar4 == 0) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
            if (*(int *)(unsigned)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) < (int)*(short *)(unsigned)(iVar4 + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
            if (*(int *)(unsigned)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
          if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
               (iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
               *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4, iVar4 < 1)) {
              (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                        (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
      }
      piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
      iVar4 = *piVar5 + -1;
      *piVar5 = iVar4;
      if (iVar4 < 1) {
        (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
      }
      if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
          *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7));
        }
        if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
          *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
          *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 8) = 0;
        }
        else {
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar7 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar4 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x4c) + ((int)(iVar7 + (uint)(iVar7 < 0)) >> 1) * 4) = 0;
        }
        if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        goto LAB_8c118c66;
      }
      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
    }
    iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c117bac\n.set _FUN_8c117bac, _FUN_8c117bac_def\n");
