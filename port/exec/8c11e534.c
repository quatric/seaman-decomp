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
undefined4 FUN_8c11e534_def(int *ar4,int *ar5,int ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c11e534";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *ar5_00;
  undefined4 uVar5;
  int iVar6;
  uint *ar7_00;
  int iVar7;
  
  ar7_00 = &(*(uint *)(fr0_ - 0x2c));
  iVar7 = *(int *)(unsigned)((int)0xfc + (int)ar4);
  (*(uint *)(fr0_ - 0x2c)) = 0;
  ar5_00 = ar5;
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(ar4));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  sVar1 = *(short *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) + 0x3e);
  if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
    if (ar5 == (int *)(unsigned)0x0) {
      iVar3 = (int)0x100;
      if (*(int *)(unsigned)(iVar3 + (int)ar4) == 0) {
        return 0;
      }
      iVar6 = (int)0xf4;
      *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)ar4) + 4) + -1;
      *(undefined4 *)(unsigned)(iVar3 + (int)ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar7 + 0x18))))(*(undefined4 *)(unsigned)(iVar3 + 8 + (int)ar4),iVar6 + (int)ar4,ar6,ar7));
      iVar3 = (int)0x108;
      *(undefined4 *)(unsigned)(iVar3 + (int)ar4) = 0;
      if ((*(int *)(unsigned)(iVar3 + -4 + (int)ar4) != 0) &&
         (iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11ea3c(ar4,0,ar6,ar7)), iVar3 != 0)) {
        return 1;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11c99a(ar4,0,ar6,ar7));
      goto LAB_8c11e7fa;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11cad4(ar5,ar5_00,ar6,ar7));
    if (iVar3 != 0) {
      return 1;
    }
    if (*(int *)(unsigned)*ar5 == 4) {
      ((undefined4 *)(fr0_ - 0x24))[0] = 0;
      if (*(int *)(unsigned)(*ar5 + 4) == 8) {
        iVar3 = 0;
LAB_8c11e7c4:
        uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c120348(ar4 + 0x12,0x26,iVar3,((undefined4 *)(fr0_ - 0x24))));
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        return 0;
      }
      iVar3 = *ar5 + 8;
      (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x100 + (int)ar4))));
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) != (int *)(unsigned)0x0) {
        ar6 = (int)0x80;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013ec0(iVar3,*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) + 8,ar6,ar7));
        if (iVar7 == 0) {
          iVar3 = iVar3 + 0x80;
          goto LAB_8c11e7c4;
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11cd02(*(undefined4 *)(unsigned)((int)0xfc + (int)ar4),0xc,ar6,ar7))
      ;
      return uVar5;
    }
    if (*(int *)(unsigned)*ar5 != 10) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x12,0xd,ar6,ar7));
      goto LAB_8c11e7fa;
    }
    if (*(int *)(unsigned)((int)0x100 + (int)ar4) == 0) {
      iVar3 = (int)0xf4 + (int)ar4;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar7 + 0x14))))((int)0xd4,iVar3,ar6,ar7));
      *(undefined4 *)(unsigned)((int)0x108 + (int)ar4) = uVar5;
      if (*(int *)(unsigned)((int)0x108 + (int)ar4) == 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11066a(*(undefined4 *)(unsigned)((int)0x108 + (int)ar4),iVar3,ar6,ar7));
    }
    else {
      iVar3 = *(int *)(unsigned)((int)0x100 + (int)ar4);
      *(int *)(unsigned)(iVar3 + 4) = *(int *)(unsigned)(iVar3 + 4) + -1;
    }
    iVar3 = (int)0x108;
    *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + (int)ar4)) = *ar5;
    if ((*(int *)(unsigned)(iVar3 + -4 + (int)ar4) != 0) && (iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11ea3c(ar4,0,ar6,ar7)), iVar3 != 0))
    {
      return 1;
    }
    ar6 = *(int *)(unsigned)((int)0x108 + (int)ar4);
    uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c120348(ar4 + 0x12,0x25,ar6,&(*(uint *)(fr0_ - 0x2c))));
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
    uVar5 = *(undefined4 *)(unsigned)((int)0x9c + (int)ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11cc2c(ar4,uVar5,ar6,ar7_00));
    if (iVar3 == 0) {
      (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x108 + (int)ar4))));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) + 8))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),uVar5,ar6,ar7_00));
      (*(uint *)(fr0_ - 0x2c)) = 0;
      if ((uVar4 & 0xffff) != 0) {
        do {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)0x84 + *(int *)(unsigned)((int)0x108 + (int)ar4)))))
                            (*(int *)(unsigned)((int)0x108 + (int)ar4),(*(uint *)(fr0_ - 0x2c)),ar6,ar7_00));
          iVar3 = (int)0x28c;
          iVar7 = (*(uint *)(fr0_ - 0x2c)) * 4;
          iVar6 = *(int *)(unsigned)((int)0x108 + (int)ar4);
          uVar5 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x108 + -0x44 + iVar6))))(iVar6,uVar5,ar6,ar7_00));
          *(undefined4 *)(unsigned)((int)ar4 + iVar7 + iVar3) = uVar5;
          (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) + 1;
        } while ((*(uint *)(fr0_ - 0x2c)) < (uVar4 & 0xffff));
      }
      *(unsigned *)(unsigned)((int)0x100 + (int)ar4) = ar5;
      ar5[1] = ar5[1] + 1;
      return 0;
    }
    uVar5 = 0x14;
  }
  else {
    uVar5 = 7;
    ar7_00 = (uint *)(unsigned)ar7;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x12,uVar5,ar6,ar7_00));
LAB_8c11e7fa:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11e534\n.set _FUN_8c11e534, _FUN_8c11e534_def\n");
