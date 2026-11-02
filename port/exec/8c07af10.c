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
undefined4 FUN_8c07af10_def(int ar4,int ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c07af10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int *ar7_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  double in_dr0 = 0;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 in_fr5 = 0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
  iVar1 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
  *(byte *)(unsigned)(ar4 + 0x1fc) = *(byte *)(unsigned)(ar4 + 0x1fc) & 0xfd | 2;
  uVar3 = 1;
  ar5_00 = 0xb;
  if ((5 < *(int *)(unsigned)(ar4 + 0x128)) && (ar6 == 1)) {
    ar5_00 = 0x12;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034148(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return 1;
          }
          (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6_00,ar7_00));
      uVar4 = SUB84(in_dr0,0);
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D((float)iVar1,in_fr5);
        }
        else {
          dVar8 = (double)iVar1;
        }
        if (cVar10 == '\0') {
          bVar9 = F32HI(dVar8) < 0.0;
        }
        else {
          bVar9 = dVar8 < (double)(ulonglong)uVar4;
        }
        if ((bVar9) && (cVar11 != '\0')) {
          uVar4 = 0x4f800000;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
        if (ar6 == 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5_00,ar6_00,ar7_00));
          if (cVar11 == '\0') {
            uVar6 = CONCAT44(0xbba3d70a,uVar4);
            *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0xbba3d70a;
          }
          else {
            uVar6 = 0x298bba3d70a;
            *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x298bba3d70a;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
          if (cVar11 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar6 & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 5;
          uVar3 = 0;
        }
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar5 + 4));
      }
      if (cVar10 != '\0' || F32HI(in_dr0) <= SUB84(in_dr0,0)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x184))))(ar7,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),SUB84(in_dr0,0));
      }
      else {
        uVar6 = *(ulonglong *)(unsigned)(ar5 + 4);
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_length_sq(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        *(int *)(unsigned)(ar4 + 0x28) = (int)(uVar6 >> 0x20);
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), Vec3_length(ar4 + 0x14,iVar1,ar6_00,ar7_00));
      iVar2 = *(int *)(unsigned)(ar4 + 0x294);
      *(int *)(unsigned)(ar4 + 0x294) = iVar2 + 1;
      if (0x1517 < iVar2 + 1) {
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6 & 0xffffffff;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,iVar1,ar6_00,ar7_00));
        if (cVar11 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3d4ccccd;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x12c3d4ccccd;
        }
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 4:
      iVar1 = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6_00,ar7_00));
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x7c));
      }
      if (cVar10 == '\0') {
        fVar5 = F32LO(in_dr0) + F32HI(in_dr0);
      }
      else {
        fVar5 = SUB84(in_dr0 + in_dr0,0);
      }
      if (cVar11 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),fVar5);
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)(ar5 + 4);
      }
      if (cVar10 != '\0' || F32HI(uVar7) <= (float)uVar7) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,iVar1,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,*(int *)(unsigned)(ar4 + 0x128) * 0x18 + -0x73d7f14c,ar6_00,ar7_00));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        uVar3 = 0;
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,iVar1,ar6_00,ar7_00));
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07af10\n.set _FUN_8c07af10, _FUN_8c07af10_def\n");
