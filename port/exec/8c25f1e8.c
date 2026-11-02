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
int FUN_8c25f1e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25f1e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = *(int *)(unsigned)(ar4 + 0x50);
  if ((*(int *)(unsigned)(ar4 + 4) == 1) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(unsigned)0x8c4b9828),vr6,vr7)),
     iVar2 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + ar4))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78));
    iVar2 = *(int *)(unsigned)(ar4 + 0x68) - *(int *)(unsigned)(ar4 + 0x70);
    if (*(int *)(unsigned)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x74);
    }
    iVar4 = *(int *)(unsigned)(ar4 + 100);
    if (*(int *)(unsigned)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(unsigned)(ar4 + 0x54);
    }
    iVar9 = *(int *)(unsigned)(ar4 + 0x70) * 2 + iVar4;
    if (*(char *)(unsigned)(ar4 + 0xe) == '\x02') {
      iVar8 = *(int *)(unsigned)(ar4 + 0x6c);
      iVar7 = 0;
      iVar3 = *(int *)(unsigned)(ar4 + 0x70);
      iVar5 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          uVar1 = *(ushort *)(unsigned)(iVar5 * 2 + iVar10);
          iVar7 = iVar7 + 1;
          *(ushort *)(unsigned)(iVar6 + iVar9) = uVar1 << 8 | uVar1 >> 8;
          uVar1 = *(ushort *)(unsigned)((iVar5 + 1) * 2 + iVar10);
          *(ushort *)(unsigned)(iVar6 + (iVar8 + iVar3) * 2 + iVar4) = uVar1 << 8 | uVar1 >> 8;
          iVar5 = iVar5 + 2;
          iVar6 = iVar6 + 2;
        } while (iVar7 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      iVar4 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = iVar6 + 1;
          *(ushort *)(unsigned)(iVar4 + iVar9) =
               *(ushort *)(unsigned)(iVar4 + iVar10) << 8 | *(ushort *)(unsigned)(iVar4 + iVar10) >> 8;
          iVar4 = iVar4 + 2;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(unsigned)(0xa0 + ar4) = iVar2;
    *(int *)(unsigned)(0xa4 + ar4) = iVar2 * *(char *)(unsigned)(ar4 + 0xe) * 2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  iVar10 = *(int *)(unsigned)(ar4 + 4);
  if (iVar10 == 2) {
    iVar10 = (int)0x90;
    iVar10 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + ar4))))
                       (*(undefined4 *)(unsigned)(iVar10 + 4 + ar4),*(undefined4 *)(unsigned)(iVar10 + 0x14 + ar4),
                        *(undefined4 *)(unsigned)(iVar10 + 0x10 + ar4),vr7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  return iVar10;
}

__asm__(".globl _FUN_8c25f1e8\n.set _FUN_8c25f1e8, _FUN_8c25f1e8_def\n");
