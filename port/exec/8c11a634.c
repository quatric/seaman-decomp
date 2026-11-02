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
int FUN_8c11a634_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a634";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *a7;
  int ar5_00;
  
  iVar3 = ar4[0x15];
  ar5_00 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) != 0) &&
         ((*(undefined4 *)(fr0_ - 0x28)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2)),
         (*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x28)) * 2) & 2) != 0)) {
        ar5_00 = ar5_00 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(unsigned)(ar4 + 0x14));
  }
  if (ar5_00 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar5_00 << 2,ar6,ar7));
    *ar5 = uVar1;
    iVar3 = ar4[0x15];
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((int *)(unsigned)*ar5));
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      (*(uint *)(fr0_ - 0x34)) = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) == 0) {
            iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
            if (iVar2 < 1) {
              (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115f18(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
            }
            *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x30)) * 2) & 2) == 0) {
              iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
              if (iVar2 < 1) {
                (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115f18(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
              }
              *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
            }
            else {
              *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = iVar3;
              (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
            }
          }
          iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
          (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1;
        } while ((*(uint *)(fr0_ - 0x34)) < *(ushort *)(unsigned)(ar4 + 0x14));
      }
    }
    else {
      (*(uint *)(fr0_ - 0x34)) = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) == 0) {
            iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
            if (iVar2 < 1) {
              (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
            }
            *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x2c)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x2c)) * 2) & 2) == 0) {
              iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
              if (iVar2 < 1) {
                (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
              }
              *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
            }
            else {
              *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = iVar3;
              (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
            }
          }
          iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
          (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1;
        } while ((*(uint *)(fr0_ - 0x34)) < *(ushort *)(unsigned)(ar4 + 0x14));
      }
    }
    a7 = (&(*(undefined1 *)(unsigned)0x8c11a5f6));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0140b4(*ar5,ar5_00,4,(&(*(undefined1 *)(unsigned)0x8c11a5f6))));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11a588(ar4,*ar5,ar5_00,a7));
    *(short *)(unsigned)((int)0x1da + (int)ar4) = (short)uVar1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11a634\n.set _FUN_8c11a634, _FUN_8c11a634_def\n");
