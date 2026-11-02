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
int FUN_8c02dfa0_def(char *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02dfa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *piVar4;
  char cVar5;
  float fVar6;
  ulonglong in_dr0 = 0;
  float fVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar3 = (int)ar4[0xb];
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)) != -1) {
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,piVar4,ar6,ar7));
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          (*(undefined4 *)(fr0_ - 0x28)) = uVar2;
          if (cVar9 != '\0') {
            (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr0;
            (*(undefined4 *)(fr0_ - 0x24)) = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x28)),(float)*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
          }
          if (cVar8 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,piVar4,ar6,ar7));
      fVar6 = (float)(in_dr0 >> 0x20);
      if (cVar9 == '\0') {
        fVar7 = 35.0;
      }
      else {
        fVar6 = 35.0;
        fVar7 = 3.78351e-42;
      }
      if ((cVar8 != '\0' || fVar7 <= fVar6) &&
         (*(int *)(unsigned)(ar4 + 0x14) = *(int *)(unsigned)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(unsigned)(ar4 + 0x14))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar5,piVar4,ar6,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7));
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 1:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)) != -1) {
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,piVar4,ar6,ar7));
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          (*(undefined4 *)(fr0_ - 0x34)) = uVar2;
          if (cVar9 != '\0') {
            (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)in_dr0;
            (*(undefined4 *)(fr0_ - 0x30)) = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x34)),(float)*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      ar4_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,piVar4,ar6,ar7));
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(unsigned)(ar4 + 0x14) = *(int *)(unsigned)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(unsigned)(ar4 + 0x14))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar4_00,piVar4,ar6,ar7));
        piVar4 = (int *)(unsigned)0x3e8;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7));
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bea4(ar4,piVar4,ar6,ar7));
      if (iVar3 < 1) {
        (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,piVar4,ar6,ar7));
      }
      break;
    case 2:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)) != -1) {
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,piVar4,ar6,ar7));
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          (*(undefined4 *)(fr0_ - 0x48)) = uVar2;
          if (cVar9 != '\0') {
            (*(undefined4 *)(fr0_ - 0x48)) = (undefined4)in_dr0;
            (*(undefined4 *)(fr0_ - 0x44)) = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x48)),(float)*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44((*(undefined4 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ - 0x48)));
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,piVar4,ar6,ar7));
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(unsigned)(ar4 + 0x14) = *(int *)(unsigned)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(unsigned)(ar4 + 0x14))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), rand(ar5,piVar4,ar6,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7));
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 3:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc)) != -1) {
          (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x188))))(ar5,piVar4,ar6,ar7));
          uVar1 = in_dr0;
          if (cVar9 == '\0') {
            (*(ulonglong *)(fr0_ - 0x54)) = CONCAT44((*(uint*)((uchar*)&(*(ulonglong *)(fr0_ - 0x54))+4)),(int)(in_dr0 >> 0x20));
            uVar1 = (*(ulonglong *)(fr0_ - 0x54));
          }
          (*(ulonglong *)(fr0_ - 0x54)) = uVar1;
          in_dr0 = (*(ulonglong *)(fr0_ - 0x54));
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((undefined4)(*(ulonglong *)(fr0_ - 0x54)),(float)*(int *)(unsigned)(cVar5 * 4 + *(int *)(unsigned)(ar4 + 0xc))
                             );
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      break;
    case 4:
      if ((*ar4 == '\x01') && (ar4[8] == '\x05')) {
        ar4[4] = '\x10';
        ar4[5] = '\'';
        ar4[6] = '\0';
        ar4[7] = '\0';
      }
      break;
    case 5:
      if (*ar4 == '\x01') {
        ar4[8] = '\x02' - (char)*(undefined4 *)(unsigned)(ar4 + 4);
      }
    }
  }
  iVar3 = (int)*ar4;
  if (iVar3 == 0) {
    iVar3 = 0;
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  return iVar3;
}

__asm__(".globl _FUN_8c02dfa0\n.set _FUN_8c02dfa0, _FUN_8c02dfa0_def\n");
