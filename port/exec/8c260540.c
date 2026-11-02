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
int FUN_8c260540_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260540";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(unsigned)(ar4 + 0x50);
  if ((*(int *)(unsigned)(ar4 + 4) == 1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(unsigned)0x8c4b9828),vr6,vr7)),
     iVar1 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + ar4))))
              (*(undefined4 *)(unsigned)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78));
    iVar1 = *(int *)(unsigned)(ar4 + 0x68) - *(int *)(unsigned)(ar4 + 0x70);
    if (*(int *)(unsigned)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x74);
    }
    iVar5 = *(int *)(unsigned)(ar4 + 100);
    if (*(int *)(unsigned)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x54);
    }
    iVar8 = *(int *)(unsigned)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(unsigned)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(unsigned)(ar4 + 0x6c);
      iVar3 = *(int *)(unsigned)(ar4 + 0x70);
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(unsigned)(iVar7 + iVar8) = *(undefined2 *)(unsigned)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(unsigned)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(unsigned)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(unsigned)(iVar5 + iVar8) = *(undefined2 *)(unsigned)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(unsigned)(0xa0 + ar4) = iVar1;
    *(int *)(unsigned)(0xa4 + ar4) = iVar1 * *(char *)(unsigned)(ar4 + 0xe) * 2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(unsigned)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + ar4))))
                      (*(undefined4 *)(unsigned)(iVar9 + 4 + ar4),*(undefined4 *)(unsigned)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(unsigned)(iVar9 + 0x10 + ar4),vr7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c260540\n.set _FUN_8c260540, _FUN_8c260540_def\n");
