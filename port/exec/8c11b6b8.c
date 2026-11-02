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
undefined4 FUN_8c11b6b8_def(int ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b6b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int ar5_00;
  float fVar9;
  float in_fr4 = 0;
  
  uVar5 = 1;
  uVar7 = 0x1c;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x1c,ar7));
  if (piVar1 != (int *)(unsigned)0x0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar5,uVar7,ar7));
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 6);
      uVar5 = *ar6;
      uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 1);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112642(*piVar1,uVar6,uVar8,uVar5); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 0xe);
        uVar5 = ar6[2];
        uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 3);
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[1],uVar6,uVar8,uVar5));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
        piVar1[3] = iVar2;
        if (iVar2 != 0) {
          uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 0x16);
          uVar5 = ar6[4];
          uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 5);
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[3],uVar6,uVar8,uVar5));
          fVar9 = (float)(ar5 + -1);
          if (ar5 + -1 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
          }
          fVar9 = fVar9 / in_fr4 + 0.5;
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 4.2949673e+09;
          }
          iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
          piVar1[4] = iVar2;
          if (iVar2 != 0) {
            uVar7 = 0;
            uVar5 = 1;
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[4],ar5,1,0));
            iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,ar5,uVar5,uVar7));
            piVar1[5] = iVar2;
            if (iVar2 != 0) {
              uVar5 = 1;
              ar5_00 = (int)fVar9 + 2;
              iVar2 = ar5_00;
              iVar4 = ar4;
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112410(piVar1[5],ar5_00,1,ar4));
              if (iVar3 != 0) {
                iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1123b0(ar4,iVar2,uVar5,iVar4));
                piVar1[6] = iVar2;
                if (iVar2 != 0) {
                  uVar5 = 1;
                  iVar2 = ar4;
                  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112482(piVar1[6],1,ar5_00,ar4));
                  if (iVar4 != 0) {
                    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar5,ar5_00,iVar2));
                    piVar1[2] = iVar4;
                    if ((iVar4 != 0) &&
                       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1124de(piVar1[2],piVar1[1],ar4,iVar2)), iVar2 != 0)) {
                      return piVar1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11b6b8\n.set _FUN_8c11b6b8, _FUN_8c11b6b8_def\n");
