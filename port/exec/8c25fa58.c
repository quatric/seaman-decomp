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
int FUN_8c25fa58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25fa58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  int iVar11;
  undefined1 *puVar12;
  
  puVar12 = ((undefined1 *)(unsigned)0x8c4b9828);
  pbVar10 = ((byte *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
  if ((*(int *)(unsigned)(ar4 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)), iVar2 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x88))))(*(undefined4 *)(unsigned)(ar4 + 0x8c),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78));
    iVar2 = *(int *)(unsigned)(ar4 + 0x68) - *(int *)(unsigned)(ar4 + 0x70);
    if (*(int *)(unsigned)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x74);
    }
    iVar6 = *(int *)(unsigned)(ar4 + 100);
    if (*(int *)(unsigned)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x54);
    }
    puVar9 = (undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(unsigned)(ar4 + 0xe) == '\x02') {
      iVar3 = *(int *)(unsigned)(ar4 + 0x6c);
      iVar8 = 0;
      iVar4 = *(int *)(unsigned)(ar4 + 0x70);
      iVar11 = 0;
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar11 = iVar11 + 1;
          *(undefined2 *)(unsigned)((int)puVar9 + iVar7) =
               *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)pbVar10[iVar8] * 2);
          iVar5 = iVar8 + 1;
          iVar8 = iVar8 + 2;
          *(undefined2 *)(unsigned)(iVar7 + (iVar3 + iVar4) * 2 + iVar6) =
               *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)pbVar10[iVar5] * 2);
          iVar7 = iVar7 + 2;
        } while (iVar11 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + 1;
          *puVar9 = *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c277da0) + (uint)bVar1 * 2);
          puVar9 = puVar9 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(unsigned)(ar4 + 0xa0) = iVar2;
    *(int *)(unsigned)(ar4 + 0xa4) = iVar2 * *(char *)(unsigned)(ar4 + 0xe);
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 4);
  if (iVar2 == 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x90))))
                      (*(undefined4 *)(unsigned)(ar4 + 0x94),*(undefined4 *)(unsigned)(ar4 + 0xa4),
                       *(undefined4 *)(unsigned)(ar4 + 0xa0),puVar12));
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c25fa58\n.set _FUN_8c25fa58, _FUN_8c25fa58_def\n");
