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
uint FUN_8c2614d6_def(int ar4,undefined4 ar5,int **ar6,int **ar7)

{
  ring[rp++ & 255] = "FUN_8c2614d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short **a7;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int d;
  
  uVar1 = 0x24;
  d = (int)((float)*(int *)(unsigned)(ar4 + 0x20) * *(float *)(unsigned)(ar4 + 0x24));
  iVar11 = 0;
  do {
    if (*(int *)(unsigned)(ar4 + 0x1c) <= iVar11) {
      return uVar1;
    }
    iVar7 = iVar11 * 4;
    piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4 + iVar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x24))))(piVar9,1,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), libgcc_divide_helper_010468(uVar1 >> 1,d,vr6,vr7));
    piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc + iVar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x24))))(piVar9,0,ar6,ar7));
    uVar3 = uVar1 >> 4;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
      (*(int *)(fr0_ - 0x3c)) = 0;
      for (iVar8 = 0; iVar8 < d; iVar8 = iVar8 + uVar1) {
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4 + iVar7));
        a7 = ((short * *)(fr0_ - 0x28));
        (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x18))))(piVar9,1,(d - iVar8) * 2,a7));
        uVar1 = (*(uint *)(fr0_ - 0x24)) >> 1;
        iVar5 = 0;
        psVar6 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x28));
        if (uVar1 != 0) {
          do {
            iVar4 = (int)*psVar6;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            psVar6 = psVar6 + 1;
            if ((*(int *)(fr0_ - 0x3c)) < iVar4) {
              (*(int *)(fr0_ - 0x3c)) = iVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar1);
        }
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4 + iVar7));
        (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x20))))(piVar9,0,((short * *)(fr0_ - 0x28)),a7));
      }
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc + iVar7));
      ar7 = ((int * *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x18))))(piVar9,0,0x10,ar7));
      if ((*(int *)(fr0_ - 0x2c)) == 0) {
        do {
                    
        } while( true );
      }
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x3c));
      ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30))[1] = *(int *)(unsigned)(ar4 + 0x14 + iVar7);
      ar6 = ((int * *)(fr0_ - 0x30));
      ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30))[2] = *(int *)(unsigned)(ar4 + 0x20);
      ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30))[3] = d;
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc + iVar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x20))))(piVar9,1,ar6,ar7));
      piVar9 = (int *)(unsigned)(ar4 + 0x14 + iVar7);
      *piVar9 = *piVar9 + d;
      *(int *)(unsigned)(ar4 + 0x2c) = *(int *)(unsigned)(ar4 + 0x2c) + 1;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c2614d6\n.set _FUN_8c2614d6, _FUN_8c2614d6_def\n");
