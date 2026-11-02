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
undefined4 FUN_8c2046d2_def(undefined4 ar4,uint ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2046d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  ushort *puVar1;
  ushort *ar6_00;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  if (uVar2 != 0) {
    ar5 = ar5 + (0x20 - uVar2);
  }
  iVar7 = (int)(short)ar4;
  puVar3 = (ushort *)(unsigned)(((undefined4 *)(unsigned)0x8c275408))[iVar7 * 5];
  ar6_00 = (ushort *)(unsigned)0x0;
  while (puVar1 = puVar3, puVar1 != (ushort *)(unsigned)0x0) {
    if (*(int *)(unsigned)(puVar1 + 8) < (int)ar5) {
      puVar3 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar1 + 4));
    }
    else {
      puVar3 = (ushort *)(unsigned)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)(unsigned)0x0) {
LAB_8c204880:
    uVar4 = 3;
  }
  else {
    sVar6 = (short)ar7;
    if (*(uint *)(unsigned)(ar6_00 + 8) == ar5) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(((undefined4 *)(unsigned)0x8c275408) + iVar7 * 5,((undefined4 *)(unsigned)0x8c27540c) + iVar7 * 5,ar6_00,ar7); })
      ;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar7 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar7 * 5,ar6_00,ar7); })
      ;
      *ar6_00 = 1;
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(unsigned)(ar6_00 + 6);
        *(unsigned *)(unsigned)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(unsigned)(ar6_00 + 6);
        *(unsigned *)(unsigned)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 0x2000;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar5 = *(int *)(unsigned)(ar6_00 + 8);
    }
    else {
      puVar3 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204e40(0,0,ar6,ar7));
      if (puVar3 == (ushort *)(unsigned)0x0) goto LAB_8c204880;
      *(undefined4 *)(unsigned)(puVar3 + 6) = *(undefined4 *)(unsigned)(ar6_00 + 6);
      *(uint *)(unsigned)(puVar3 + 8) = ar5;
      *(uint *)(unsigned)(ar6_00 + 8) = *(int *)(unsigned)(ar6_00 + 8) - ar5;
      *(uint *)(unsigned)(ar6_00 + 6) = ar5 + *(int *)(unsigned)(ar6_00 + 6);
      ({ unsigned long ri0_ = (unsigned long)(
                   ((undefined4 *)(unsigned)0x8c275400) + iVar7 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((undefined4 *)(unsigned)0x8c275400) + iVar7 * 5,((undefined4 *)(unsigned)0x8c275404) + iVar7 * 5,puVar3,ar7); });
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(unsigned)(puVar3 + 6);
        *(unsigned *)(unsigned)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(unsigned)(puVar3 + 6);
        *(unsigned *)(unsigned)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 0x2000;
      }
      *puVar3 = *puVar3 | 4;
      iVar5 = *(int *)(unsigned)(puVar3 + 8);
    }
    uVar4 = 0;
    (((undefined4 *)(unsigned)0x8c275410))[iVar7 * 5] = (((undefined4 *)(unsigned)0x8c275410))[iVar7 * 5] - iVar5;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c2046d2\n.set _FUN_8c2046d2, _FUN_8c2046d2_def\n");
