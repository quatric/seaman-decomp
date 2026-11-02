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
undefined4 FUN_8c11fcc4_def(ushort *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c11fcc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ushort uVar4;
  int iVar5;
  char *a5;
  uint uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *a6;
  int iVar12;
  int iVar13;
  uint uVar14;
  
  uVar14 = (uint)0xff;
  iVar13 = 0;
  iVar12 = 0;
  bVar1 = *ar5;
  pbVar8 = ar5;
  while (bVar1 != uVar14) {
    pbVar8 = pbVar8 + 8;
    iVar13 = iVar13 + 1;
    bVar1 = *pbVar8;
  }
  bVar1 = *ar6;
  uVar10 = uVar14;
  pbVar8 = ar6;
  while (bVar1 != uVar14) {
    if ((uVar10 & 0xff) != (uint)*pbVar8) {
      uVar10 = (uint)(char)*pbVar8;
      iVar12 = iVar12 + 1;
    }
    pbVar8 = pbVar8 + 2;
    bVar1 = *pbVar8;
  }
  ar4[1] = (ushort)ar5[8];
  ar4[5] = (ushort)*ar6;
  pbVar9 = ar6;
  pbVar8 = ar7;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(ar4,iVar13 << 2,ar6,ar7));
  *(int *)(unsigned)(ar4 + 2) = iVar5;
  if (iVar5 != 0) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(ar4,iVar12 << 2,pbVar9,pbVar8));
    *(int *)(unsigned)(ar4 + 6) = iVar5;
    if (iVar5 != 0) {
      a6 = (byte *)(unsigned)0x1;
      a5 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 10))))(ar4,iVar13 * 2 + iVar12,1,pbVar8));
      pcVar7 = a5 + iVar13;
      bVar1 = *ar6;
      pbVar9 = ar6;
      while (bVar1 != uVar14) {
        pbVar3 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        a5[*pbVar3] = a5[*pbVar3] + '\x01';
        bVar1 = *pbVar9;
      }
      bVar1 = *ar7;
      pbVar9 = ar7;
      while (bVar1 != uVar14) {
        pcVar7[((uint)*pbVar9 - (uint)ar4[5]) + iVar13] =
             pcVar7[((uint)*pbVar9 - (uint)ar4[5]) + iVar13] + '\x01';
        pbVar3 = pbVar9 + 1;
        pbVar9 = pbVar9 + 2;
        pcVar7[*pbVar3] = pcVar7[*pbVar3] + '\x01';
        bVar1 = *pbVar9;
      }
      *ar4 = 0;
      for (pbVar9 = ar5; *pbVar9 != uVar14; pbVar9 = pbVar9 + 8) {
        if (*(int *)(unsigned)(pbVar9 + 4) == 0) {
          if (*pbVar9 == 0) {
            a6 = (byte *)(unsigned)(int)*a5;
            uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x10))))(ar4,(int)*pcVar7,a6,pbVar8));
            if ((uVar10 & 0xff) != 0) {
              return 1;
            }
          }
        }
        else {
          ar5 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pbVar9 + 4))))(ar4,(int)(char)*pbVar9,a6,pbVar8));
          if (ar5 == (byte *)(unsigned)0x0) {
            return 1;
          }
          if (ar5[8] != pcVar7[*pbVar9]) {
            return 1;
          }
          if (ar5[9] != a5[*pbVar9]) {
            return 1;
          }
          uVar4 = *ar4;
          *ar4 = uVar4 + 1;
          *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + (uint)uVar4 * 4) = ar5;
          if (*ar4 != (ushort)*pbVar9) {
            return 1;
          }
        }
      }
      ar4[4] = 0;
      uVar10 = uVar14;
      for (; *ar6 != uVar14; ar6 = ar6 + 2) {
        if (ar6[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + ((uint)ar6[1] - (uint)ar4[1]) * 4);
        }
        if ((uVar10 & 0xff) != (uint)*ar6) {
          ar5 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1122ac))))
                                  (ar4,(int)(char)*ar6,
                                   (uint)(byte)pcVar7[((uint)*ar6 - (uint)ar4[5]) + iVar13],pbVar8));
          if (ar5 == (byte *)(unsigned)0x0) {
            return 1;
          }
          uVar4 = ar4[4];
          ar4[4] = uVar4 + 1;
          *(unsigned *)(unsigned)((uint)uVar4 * 4 + *(int *)(unsigned)(ar4 + 6)) = ar5;
          uVar10 = (uint)(char)*ar6;
        }
        a6 = ar5;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11fc5e(ar4,uVar11,ar5,pbVar8));
        if ((uVar6 & 0xff) != 0) {
          return 1;
        }
      }
      bVar1 = *ar7;
      while( true ) {
        if (bVar1 == uVar14) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,a5,a6,pbVar8));
          return 0;
        }
        uVar4 = ar4[5];
        bVar1 = *ar7;
        if (ar7[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + ((uint)ar7[1] - (uint)ar4[1]) * 4);
        }
        uVar10 = (int)(char)bVar1 - (int)(short)uVar4 & 0xff;
        cVar2 = pcVar7[uVar10 + iVar13];
        pcVar7[uVar10 + iVar13] = cVar2 - 1U;
        pbVar8 = (byte *)(unsigned)(uint)(byte)(cVar2 - 1U);
        a6 = ((byte *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 6) + ((int)(char)bVar1 - (int)(short)uVar4 & 0xffU) * 4));
        uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11fbe4(ar4,uVar11,a6,pbVar8));
        if ((uVar10 & 0xff) != 0) break;
        ar7 = ar7 + 2;
        bVar1 = *ar7;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11fcc4\n.set _FUN_8c11fcc4, _FUN_8c11fcc4_def\n");
