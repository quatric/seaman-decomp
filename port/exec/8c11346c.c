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
uint FUN_8c11346c_def(int ar4,ushort *ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c11346c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    iVar11 = *(int *)(unsigned)(ar4 + 0x54);
    (*(uint *)(fr0_ - 0x20)) = 0;
    uVar3 = (uint)*(ushort *)(unsigned)(0xe4 + ar4);
    if (*(short *)(unsigned)(ar4 + 0x50) != 0) {
      do {
        puVar6 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar11 + 0xc));
        uVar1 = *puVar6 >> 2;
        if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
          uVar3 = uVar3 + 1;
          *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
          ar5[uVar3] = uVar1;
        }
        puVar8 = puVar6 + 1;
        if ((*puVar6 & 1) == 0) {
          uVar1 = *puVar8;
          ar7 = (int *)(unsigned)(uint)(uVar1 >> 2);
          if (*(char *)(unsigned)(ar6 + (int)ar7) == '\0') {
            uVar3 = uVar3 + 1;
            *(char *)(unsigned)(ar6 + (int)ar7) = '\x01';
            ar5[uVar3] = uVar1 >> 2;
          }
          if ((*puVar8 & 1) != 0) {
            puVar7 = (uint *)(unsigned)(*(int *)(unsigned)(puVar6 + 2) * 4 + *(int *)(unsigned)(0x98 + ar4));
            piVar10 = (int *)(unsigned)puVar7[1];
            ar7 = (int *)(unsigned)*puVar7;
            while (ar7 < piVar10) {
              piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*ar7 * 4 + *(int *)(unsigned)(ar4 + 0x44)));
              iVar2 = *ar7;
              ar7 = ar7 + 1;
              piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)((iVar2 + 1) * 4 + *(int *)(unsigned)(ar4 + 0x44)));
              while (piVar9 < piVar4) {
                iVar2 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar1 = *(ushort *)(unsigned)(iVar2 * 2 + *(int *)(unsigned)(ar4 + 0x48)) >> 2;
                if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
                  uVar3 = uVar3 + 1;
                  *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
                  ar5[uVar3] = uVar1;
                }
              }
            }
          }
        }
        else {
          puVar7 = (uint *)(unsigned)(*(int *)(unsigned)puVar8 * 4 + *(int *)(unsigned)(0x98 + ar4));
          piVar10 = (int *)(unsigned)puVar7[1];
          ar7 = (int *)(unsigned)*puVar7;
          while (ar7 < piVar10) {
            piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*ar7 * 4 + *(int *)(unsigned)(ar4 + 0x44)));
            iVar2 = *ar7;
            ar7 = ar7 + 1;
            piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)((iVar2 + 1) * 4 + *(int *)(unsigned)(ar4 + 0x44)));
            while (piVar9 < piVar4) {
              iVar2 = *piVar9;
              piVar9 = piVar9 + 1;
              uVar1 = *(ushort *)(unsigned)(iVar2 * 2 + *(int *)(unsigned)(ar4 + 0x48)) >> 2;
              if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
                uVar3 = uVar3 + 1;
                *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
                ar5[uVar3] = uVar1;
              }
            }
          }
        }
        (*(uint *)(fr0_ - 0x20)) = (*(uint *)(fr0_ - 0x20)) + 1;
        iVar11 = *(int *)(unsigned)(iVar11 + 0x18);
      } while ((*(uint *)(fr0_ - 0x20)) < *(ushort *)(unsigned)(ar4 + 0x50));
    }
    uVar5 = (uint)(*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1);
    if (uVar5 - uVar3 < (uint)*(ushort *)(unsigned)(ar4 + 0x50)) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
    }
    if (uVar3 == uVar5) {
      (vsp = ((unsigned long)(fr0_ - 32)), memset(ar6,0,(*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1) + 1,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
    }
    *ar5 = (ushort)uVar3;
  }
  else if (*(int *)(unsigned)(ar4 + 0x30) == 0) {
    if (*(ushort *)(unsigned)(ar4 + 0x50) < *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 1;
    }
    uVar1 = *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1;
    uVar3 = (uint)uVar1;
    *ar5 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11346c\n.set _FUN_8c11346c, _FUN_8c11346c_def\n");
