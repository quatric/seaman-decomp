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
undefined4 FUN_8c2043d4_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2043d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)(unsigned)0x0;
  puVar3 = (ushort *)(unsigned)(((undefined4 *)(unsigned)0x8c275408))[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)(unsigned)0x0) {
    iVar4 = *(int *)(unsigned)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(unsigned)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(unsigned)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar3 + 4));
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)(unsigned)0x0;
    }
  }
  if (ar6_00 == (ushort *)(unsigned)0x0) {
    return 3;
  }
  if (*(uint *)(unsigned)(ar6_00 + 8) == ar6) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204ed2(((undefined4 *)(unsigned)0x8c275408) + iVar2 * 5,((undefined4 *)(unsigned)0x8c27540c) + iVar2 * 5,ar6_00,0); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar2 * 5,ar6_00,a7); });
    *(undefined4 *)(unsigned)(ar7 + 0x1c) = *(undefined4 *)(unsigned)(ar6_00 + 6);
    *(int *)(unsigned)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x80;
    }
    else {
      *ar6_00 = *ar6_00 | 0x100;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(unsigned)(ar6_00 + 8);
  }
  else {
    if (*(int *)(unsigned)(ar6_00 + 6) != ar5) {
      if (*(int *)(unsigned)(ar6_00 + 6) + *(int *)(unsigned)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (ushort *)(unsigned)0x0) {
          return 3;
        }
        *(uint *)(unsigned)(ar6_00 + 8) = *(int *)(unsigned)(ar6_00 + 8) - ar6;
        *(int *)(unsigned)(ar6_01 + 6) = ar5;
        *(uint *)(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(
                     ((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(undefined4 *)(unsigned)(ar7 + 0x1c) = *(undefined4 *)(unsigned)(ar6_01 + 6);
        *(int *)(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (ushort *)(unsigned)0x0) {
          return 3;
        }
        ain0 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(puVar3,iVar4,iVar5,a7));
        if (ain0 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e6c(ar6_01,iVar4,iVar5,a7); });
          return 3;
        }
        iVar5 = *(int *)(unsigned)(ar6_00 + 8);
        iVar4 = *(int *)(unsigned)(ar6_00 + 6);
        *(int *)(unsigned)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(unsigned)(ar6_01 + 6) = ar5;
        *(uint *)(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(uint *)(unsigned)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(unsigned)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204eb6(((undefined4 *)(unsigned)0x8c27540c) + iVar2 * 5,ain0,(((undefined4 *)(unsigned)0x8c27540c))[iVar2 * 5],a7); });
        *(undefined4 *)(unsigned)(ar7 + 0x1c) = *(undefined4 *)(unsigned)(ar6_01 + 6);
        *(int *)(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (((undefined4 *)(unsigned)0x8c275410))[iVar2 * 5] = (((undefined4 *)(unsigned)0x8c275410))[iVar2 * 5] - *(int *)(unsigned)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
    if (puVar3 == (ushort *)(unsigned)0x0) {
      return 3;
    }
    *(undefined4 *)(unsigned)(puVar3 + 6) = *(undefined4 *)(unsigned)(ar6_00 + 6);
    *(uint *)(unsigned)(puVar3 + 8) = ar6;
    *(uint *)(unsigned)(ar6_00 + 8) = *(int *)(unsigned)(ar6_00 + 8) - ar6;
    *(uint *)(unsigned)(ar6_00 + 6) = *(int *)(unsigned)(ar6_00 + 6) + ar6;
    ({ unsigned long ri0_ = (unsigned long)(
                 ((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar2 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar2 * 5,puVar3,a7); });
    *(undefined4 *)(unsigned)(ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar3 + 6);
    *(int *)(unsigned)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    else {
      *puVar3 = *puVar3 | 0x100;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(unsigned)(puVar3 + 8);
  }
  (((undefined4 *)(unsigned)0x8c275410))[iVar2 * 5] = (((undefined4 *)(unsigned)0x8c275410))[iVar2 * 5] - iVar5;
  return 0;
}

__asm__(".globl _FUN_8c2043d4\n.set _FUN_8c2043d4, _FUN_8c2043d4_def\n");
