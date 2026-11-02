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
int FUN_8c260afc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = *(int *)(unsigned)(ar4 + 0x50);
  if ((*(int *)(unsigned)(ar4 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(unsigned)0x8c4b9828),vr6,vr7)),
     iVar2 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + ar4))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78));
    iVar2 = *(int *)(unsigned)(ar4 + 0x68) - *(int *)(unsigned)(ar4 + 0x70);
    if (*(int *)(unsigned)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x74);
    }
    iVar6 = *(int *)(unsigned)(ar4 + 100);
    if (*(int *)(unsigned)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x54);
    }
    puVar10 = (undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(unsigned)(ar4 + 0xe) == '\x02') {
      iVar9 = *(int *)(unsigned)(ar4 + 0x6c);
      iVar4 = *(int *)(unsigned)(ar4 + 0x70);
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)(unsigned)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(unsigned)(iVar7 + 2 + iVar11),*(undefined1 *)(unsigned)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(unsigned)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(unsigned)(iVar5 + iVar11),*(undefined1 *)(unsigned)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(unsigned)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(unsigned)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(unsigned)(0xa0 + ar4) = iVar2;
    *(int *)(unsigned)(0xa4 + ar4) = iVar2 * *(char *)(unsigned)(ar4 + 0xe) * 2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  iVar11 = *(int *)(unsigned)(ar4 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)0x90;
    iVar11 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar11 + ar4))))
                       (*(undefined4 *)(unsigned)(iVar11 + 4 + ar4),*(undefined4 *)(unsigned)(iVar11 + 0x14 + ar4),
                        *(undefined4 *)(unsigned)(iVar11 + 0x10 + ar4),vr7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c260afc\n.set _FUN_8c260afc, _FUN_8c260afc_def\n");
