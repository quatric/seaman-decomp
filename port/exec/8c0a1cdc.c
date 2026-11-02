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
undefined4 FUN_8c0a1cdc_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a1cdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = 0;
      ar6 = (int *)(unsigned)0xffffffff;
      ar5 = 3;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7));
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = 3;
        (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 2:
      uVar2 = 0x3c23d70a;
      *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0x94) + 0.01;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x184))))(ar6,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
        dVar5 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = F32HI(dVar5);
        fVar4 = F32LO(dVar5) - fVar6;
        dVar5 = CONCAT44D(fVar6,fVar4);
        bVar8 = fVar4 < F32HI(dVar7);
      }
      else {
        dVar5 = dVar5 - dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (bVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x94) = D2U(dVar5) & 0xffffffff;
        }
      }
      break;
    case 3:
      uVar2 = 0x3c23d70a;
      *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0x94) - 0.01;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,ar5,ar6,ar7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 4),in_fr3);
        dVar5 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar5 + 4);
        dVar5 = 6.28650578250278e-312;
      }
      if (cVar9 == '\0') {
        fVar6 = F32HI(dVar5);
        fVar4 = F32LO(dVar5) + fVar6;
        dVar5 = CONCAT44D(fVar6,fVar4);
        bVar8 = fVar4 < F32HI(dVar7);
      }
      else {
        dVar5 = dVar5 + dVar5;
        bVar8 = dVar5 < dVar7;
      }
      if (!bVar8) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x94) = D2U(dVar5) & 0xffffffff;
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a1cdc\n.set _FUN_8c0a1cdc, _FUN_8c0a1cdc_def\n");
