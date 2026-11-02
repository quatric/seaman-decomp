#include "../decls.h"
int FUN_8c119a1e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  double in_dr0;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr5;
  float fVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  double in_xd2;
  double in_xd14;
  char in_T;
  bool bVar10;
  int in_FPUL;
  int iVar11;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  fVar4 = (float)in_FPUL;
  if (in_T != '\x01') {
    if (in_FPSCR_PR == 0) {
      fVar4 = fVar4 + 0x4f800000;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(0x4f800000,fVar4) + (double)CONCAT44(0x4f800000,fVar4),0);
    }
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar6,fVar4);
  }
  else {
    dVar5 = (double)ar6;
  }
  if (ar6 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_PR == 0) {
    fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar4,fVar4);
  }
  else {
    dVar5 = (double)ar4;
  }
  if (ar4 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == 0) {
    in_xd2 = (double)CONCAT44(SUB84(dVar5,0),in_fr5);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(in_xd2,0));
  }
  else {
    dVar5 = in_xd2 / dVar5;
  }
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44(DAT_8c119ab4,DAT_8c119ab0);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c119ab8,DAT_8c119ab4);
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  fVar8 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == 0) {
    bVar10 = fVar8 < fVar4;
  }
  else {
    bVar10 = dVar5 < dVar6;
  }
  dVar7 = dVar5;
  if (in_FPSCR_SZ == 0) {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar8);
    dVar7 = in_xd14;
  }
  if (in_FPSCR_PR == 0) {
    fVar9 = SUB84(in_dr14,0) * SUB84(dVar6,0);
  }
  else {
    fVar9 = SUB84(in_dr14 * dVar6,0);
  }
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (bVar10) {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,DAT_8c119ab8);
      dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
    }
    if (in_FPSCR_PR == 0) {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
    thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == 0) {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119ac0);
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0));
    }
    else {
      dVar5 = in_dr0 + dVar6;
    }
    if (in_FPSCR_SZ == 0) {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119ac4);
    }
    if (in_FPSCR_PR == 0) {
      fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 / dVar5,0);
    }
  }
  else {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,(undefined4)DAT_8c119ac8);
    }
    if (in_FPSCR_PR == 0) {
      bVar10 = SUB84(in_dr0,0) < fVar8;
    }
    else {
      bVar10 = in_dr0 < dVar5;
    }
    if (bVar10) {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(fVar4,_DAT_8c119be0);
        dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar6;
      }
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119be8);
      }
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0)
                                );
      }
      else {
        dVar5 = in_dr0 + dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119bf0);
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar5,0);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(DAT_8c119ad0,(*(uint*)((uchar*)&DAT_8c119ac8+4)));
      }
      else {
        dVar6 = (double)CONCAT44((*(uint *)0x8c119ad4),DAT_8c119ad0);
      }
      if (in_FPSCR_PR == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - fVar8);
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      if (in_FPSCR_SZ == 0) {
        dVar5 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar6,0);
      }
    }
  }
  fVar8 = SUB84(dVar6,0);
  if (in_FPSCR_SZ == 0) {
    fVar8 = fVar4;
  }
  cVar1 = (char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  dVar5 = (double)CONCAT44(0x4f000000,fVar8);
  if (cVar1 != '\0' || 0x4f000000 <= fVar8) {
    if (cVar1 == '\0') {
      dVar5 = (double)CONCAT44(0x4f000000 + 0x4f000000,fVar8 - (0x4f000000 + 0x4f000000)
                              );
    }
    else {
      dVar5 = (dVar5 + dVar5) - (dVar5 + dVar5);
    }
  }
  if (cVar1 == '\0') {
    iVar11 = (int)SUB84(dVar5,0);
  }
  else {
    iVar11 = (int)dVar5;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c119a1e\n.set _FUN_8c119a1e, _FUN_8c119a1e_def\n");
