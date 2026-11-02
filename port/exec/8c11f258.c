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
uint FUN_8c11f258_def(int ar4,uint ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11f258";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  
  puVar10 = ar6;
  iVar9 = ar7;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar5 == 0) {
    if (ar6 == (undefined1 *)(unsigned)0x0) {
      uVar11 = 0x13;
    }
    else {
      sVar2 = *(short *)(unsigned)(ar4 + 0x3e);
      uVar8 = (uint)sVar2;
      if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
        if (*(int *)(unsigned)(0x10c + ar4) == 3) {
          uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11f13e(ar4,ar5,puVar10,iVar9));
          uVar8 = ar5;
          if ((uVar6 & 0xff) != 0) {
            return uVar6 & 0xff;
          }
        }
        else if (ar5 != *(uint *)(unsigned)(0x10c + ar4)) {
          uVar11 = 1;
          goto override_prt_8c11f2f4_7a4d7f16;
        }
        puVar4 = ((void *)(unsigned)0x8c120284);
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        uVar13 = *(uint *)(unsigned)(0x110 + ar4);
        for (uVar6 = ar7 + (uint)*(ushort *)(unsigned)(0x22a + ar4); uVar13 <= uVar6;
            uVar6 = uVar6 - uVar13) {
          if (*(short *)(unsigned)(0x22a + ar4) == 0) {
            puVar10 = (undefined1 *)(unsigned)0x1;
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x60),ar6,1,iVar9));
            if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            if (*(int *)(unsigned)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)(unsigned)0x1;
              uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x70),ar6,1,iVar9));
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
            ar6 = ar6 + uVar13;
          }
          else {
            iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 0x60),uVar8,puVar10,iVar9));
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                      (iVar5,0x150 + ar4,(uint)*(ushort *)(unsigned)(0x22a + ar4),iVar9));
            puVar10 = (undefined1 *)(unsigned)(uVar13 - *(ushort *)(unsigned)(0x22a + ar4));
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                      (iVar5 + (uint)*(ushort *)(unsigned)(0x22a + ar4),ar6,puVar10,iVar9));
            uVar3 = *(ushort *)(unsigned)(0x22a + ar4);
            *(undefined2 *)(unsigned)(0x22a + ar4) = 0;
            ar6 = ar6 + (uVar13 - uVar3);
            if (*(int *)(unsigned)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)(unsigned)0x1;
              uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x70),iVar5,1,iVar9));
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
          }
          iVar5 = (int)0x13c;
          *(int *)(unsigned)(iVar5 + ar4) = *(int *)(unsigned)(iVar5 + ar4) + 1;
          uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(iVar5 + -0x28 + ar4),puVar10,iVar9));
          if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
          uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
          if ((uVar7 & 0xff) != 0) goto LAB_8c11f504;
          if (*(int *)(unsigned)(0x140 + ar4) != 0) {
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(0x114 + ar4),puVar10,iVar9));
            if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
            uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
            uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
joined_r0x8c11f48c:
            if ((uVar6 & 0xff) != 0) {
LAB_8c11f504:
              return *(undefined4 *)(unsigned)(ar4 + 0x40);
            }
            uVar6 = 0;
            break;
          }
          if ((*(uint *)(unsigned)(ar4 + 0x78) != 0) &&
             (*(uint *)(unsigned)(ar4 + 0x78) < *(uint *)(unsigned)(0x13c + ar4))) {
            iVar9 = 0;
            puVar10 = (undefined1 *)(unsigned)0x0;
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,3,0,0));
            if (((uVar8 & 0xff) == 0) &&
               (uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(0x114 + ar4),puVar10,iVar9)),
               (uVar8 & 0xff) == 0)) {
              uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
              uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
              goto joined_r0x8c11f48c;
            }
            goto LAB_8c11f5ba;
          }
        }
        if ((*(short *)(unsigned)(0x144 + ar4) != 0) &&
           (((*(short *)(unsigned)(0x144 + ar4) == 1 &&
             (uVar13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11eb8c(ar4,uVar8,puVar10,iVar9)), (uVar13 & 0xff) != 0)) ||
            ((*(short *)(unsigned)(0x144 + ar4) == 2 &&
             (uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ec7c(ar4,uVar8,puVar10,iVar9)), (uVar8 & 0xff) != 0)))))) {
LAB_8c11f5ba:
          return *(undefined4 *)(unsigned)(ar4 + 0x40);
        }
        if (*(int *)(unsigned)(0x148 + ar4) == 4) {
          iVar9 = (int)0x22a;
          uVar8 = (uint)*(ushort *)(unsigned)(iVar9 + ar4);
          puVar10 = (undefined1 *)(unsigned)(0x150 + ar4 + uVar8);
          for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
            uVar1 = *ar6;
            ar6 = ar6 + 1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + 1;
          }
          *(short *)(unsigned)(iVar9 + ar4) = (short)uVar6;
          goto LAB_8c11f5ba;
        }
        iVar5 = (int)0x148;
        iVar12 = (int)0xf4;
        uVar11 = *(undefined4 *)(unsigned)(iVar5 + ar4);
        *(undefined4 *)(unsigned)(iVar5 + ar4) = 4;
        uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + -0x7c + ar4))))(uVar11,iVar12 + ar4,puVar10,iVar9));
        if ((uVar8 & 0xff) == 0) goto LAB_8c11f5ba;
        goto LAB_8c11f57e;
      }
      uVar11 = 7;
    }
override_prt_8c11f2f4_7a4d7f16:
    uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,uVar11,puVar10,iVar9));
    uVar8 = uVar8 & 0xff;
  }
  else {
LAB_8c11f57e:
    uVar8 = 1;
  }
  return uVar8;
}

__asm__(".globl _FUN_8c11f258\n.set _FUN_8c11f258, _FUN_8c11f258_def\n");
