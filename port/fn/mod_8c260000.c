//@unit 8c260000
#include "../decls.h"
undefined4 FUN_8c260000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)(&FUN_8c264f86))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5,*(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c260000\n.set _FUN_8c260000, _FUN_8c260000_def\n");
//@unit 8c260006
#include "../decls.h"
undefined4 FUN_8c260006_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)(&FUN_8c264f86))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5,*(int *)(ar6 + 0x14) + *(int *)(ar6 + 0x20) * 2);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c260006\n.set _FUN_8c260006, _FUN_8c260006_def\n");
//@unit 8c26002c
#include "../decls.h"
undefined4 FUN_8c26002c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  (*(code *)(&FUN_8c264fa4))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,
             *(int *)(ar4 + 0x6c) * 2 + *(int *)(ar4 + 100) + *(int *)(ar4 + 0x70) * 2);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c26002c\n.set _FUN_8c26002c, _FUN_8c26002c_def\n");
//@unit 8c260030
#include "../decls.h"
undefined4 FUN_8c260030_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ar7_00 = *(int *)(ar6 + 100) + *(int *)(ar6 + 0x70) * 2;
  (*(code *)(&FUN_8c264fa4))
            (uVar1,*(undefined4 *)(ar4 + 0x50),ar5 << 1,ar7_00,*(int *)(ar6 + 0x6c) * 2 + ar7_00);
  uVar1 = FUN_8c264fc2(uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c260030\n.set _FUN_8c260030, _FUN_8c260030_def\n");
//@unit 8c260062
#include "../decls.h"
undefined4 FUN_8c260062_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int n;
  
  iVar4 = ar4 + 0x50;
  ar5_00 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58));
  iVar8 = *(int *)(iVar4 + 0x28);
  iVar5 = *(int *)(iVar4 + 0x10);
  iVar9 = *(int *)(iVar4 + 0x20);
  iVar3 = iVar8 + iVar5 + -1;
  n = *(int *)(iVar4 + 0x24);
  iVar6 = *(int *)(iVar4 + 0x18);
  iVar1 = libgcc_divide_helper_010468(iVar3,iVar5);
  iVar3 = libgcc_divide_helper_010614(iVar3,iVar5);
  iVar7 = (iVar5 - iVar3) + -1;
  iVar3 = libgcc_divide_helper_010468((iVar6 - iVar9) + iVar5 + -1,iVar5);
  if ((iVar1 < iVar3) && ((iVar3 * iVar5 - iVar7) + iVar9 < *(int *)(iVar4 + 0x18))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar8 < n) {
    n = n + iVar7;
  }
  iVar5 = libgcc_divide_helper_010468(n,iVar5);
  if (iVar5 < ar5_00) {
    ar5_00 = iVar5;
  }
  if (iVar1 < ar5_00) {
    ar5_00 = iVar1;
  }
  if (iVar3 < ar5_00) {
    ar5_00 = iVar3;
  }
  if (*(int *)(iVar4 + 8) == 2) {
    uVar2 = FUN_8c26002c(ar4,ar5_00,iVar5,iVar3);
    return uVar2;
  }
  uVar2 = FUN_8c260000(ar4,ar5_00,iVar5,iVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c260062\n.set _FUN_8c260062, _FUN_8c260062_def\n");
//@unit 8c26011e
#include "../decls.h"
undefined4 FUN_8c26011e_def(undefined2 *ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26011e\n.set _FUN_8c26011e, _FUN_8c26011e_def\n");
//@unit 8c26014c
#include "../decls.h"
undefined4 FUN_8c26014c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 uVar1;
  
  uVar1 = ar7;
  ain0 = FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7,ar6);
  uVar1 = FUN_8c26011e(ar6 * 2 + ar4,(ar5 + ar6) * 2 + ar4,ar7,uVar1,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c26014c\n.set _FUN_8c26014c, _FUN_8c26014c_def\n");
//@unit 8c260180
#include "../decls.h"
undefined4 FUN_8c260180_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c26011e(ar4,ar5 * 2 + ar4,ar7,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c260180\n.set _FUN_8c260180, _FUN_8c260180_def\n");
//@unit 8c260198
#include "../decls.h"
undefined4 FUN_8c260198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar4_00;
  int ar5_00;
  int d;
  int iVar7;
  
  d = *(int *)(ar4 + 0x60);
  iVar4 = *(int *)(ar4 + 0x5c);
  ar5_00 = *(int *)(ar4 + 0x40);
  iVar5 = d + *(int *)(ar4 + 0x78) + -1;
  iVar7 = *(int *)(ar4 + 0x70);
  ar4_00 = *(undefined4 *)(ar4 + 100);
  uVar6 = *(undefined4 *)(ar4 + 0x44);
  iVar1 = libgcc_divide_helper_010468(iVar5,d);
  iVar2 = libgcc_divide_helper_010614(iVar5,d);
  iVar5 = get_field_10_264ff8(*(undefined4 *)(ar4 + 8),iVar5,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(d * iVar5,*(undefined4 *)(ar4 + 0x58));
  if (iVar1 <= iVar5) {
    iVar3 = iVar3 - ((d - iVar2) + -1);
  }
  iVar7 = iVar7 + iVar3;
  *(int *)(ar4 + 0xa0) = iVar3;
  *(int *)(ar4 + 0xa4) = iVar4 * iVar5;
  if (ar5_00 <= iVar7) {
    iVar7 = iVar7 - ar5_00;
    if (*(int *)(ar4 + 0x58) == 2) {
      uVar6 = FUN_8c26014c(ar4_00,ar5_00,uVar6,iVar7);
      return uVar6;
    }
    uVar6 = FUN_8c260180(ar4_00,ar5_00,uVar6,iVar7);
    return uVar6;
  }
  return 0xa4;
}

__asm__(".globl _FUN_8c260198\n.set _FUN_8c260198, _FUN_8c260198_def\n");
//@unit 8c260284
#include "../decls.h"
int FUN_8c260284_def(undefined4 ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int unaff_r13;
  int unaff_r14;
  
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    ar5 = unaff_r13 + 0x70;
    ar7 = unaff_r13 + 0x78;
    ar6 = unaff_r13 + 0x74;
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),ar5,ar6,ar7);
    FUN_8c260062(unaff_r14,ar5,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar1 = *(int *)(unaff_r14 + 4);
  if (iVar1 == 2) {
    FUN_8c26501c(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    if (iVar1 == 3) {
      FUN_8c260198(unaff_r14,ar5,ar6,ar7);
      FUN_8c264fea(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
      iVar1 = (int)0x90;
      iVar1 = (**(code **)(iVar1 + unaff_r14))
                        (*(undefined4 *)(iVar1 + 4 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x14 + unaff_r14),
                         *(undefined4 *)(iVar1 + 0x10 + unaff_r14),ar7);
      *(undefined4 *)(unaff_r14 + 4) = 3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c260284\n.set _FUN_8c260284, _FUN_8c260284_def\n");
//@unit 8c2602f4
#include "../decls.h"
undefined4 FUN_8c2602f4_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(0xa8 + ar4) == 0) {
    if ((*(int *)(ar4 + 4) == 1) &&
       (iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8)), iVar1 == 0)) {
      ar5 = ar4 + 0x70;
      ar7 = ar4 + 0x78;
      ar6 = ar4 + 0x74;
      (**(code **)(0x88 + ar4))(*(undefined4 *)(0x88 + 4 + ar4));
      FUN_8c260062(ar4,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 4) = 2;
    }
    iVar1 = *(int *)(ar4 + 4);
    if (iVar1 == 2) {
      FUN_8c26501c(*(undefined4 *)(ar4 + 8));
      iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8));
      if (iVar1 == 3) {
        FUN_8c260198(ar4,ar5,ar6,ar7);
        FUN_8c264fea(*(undefined4 *)(ar4 + 8));
        iVar1 = (int)0x90;
        iVar1 = (**(code **)(iVar1 + ar4))
                          (*(undefined4 *)(iVar1 + 4 + ar4),*(undefined4 *)(iVar1 + 0x14 + ar4),
                           *(undefined4 *)(iVar1 + 0x10 + ar4));
        *(undefined4 *)(ar4 + 4) = 3;
      }
    }
    return iVar1;
  }
  if (*(short *)(0xa8 + ar4) == 2) {
    uVar2 = FUN_8c260540();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 3) {
    uVar2 = FUN_8c25f40e();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 4) {
    uVar2 = FUN_8c25fb5c();
    return uVar2;
  }
  if (*(short *)(0xa8 + ar4) == 1) {
    uVar2 = FUN_8c260c60();
    return uVar2;
  }
  return (int)*(short *)(0xa8 + ar4);
}

__asm__(".globl _FUN_8c2602f4\n.set _FUN_8c2602f4, _FUN_8c2602f4_def\n");
//@unit 8c260340
#include "../decls.h"
int FUN_8c260340_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  short *psVar2;
  int iVar3;
  
  iVar3 = (int)0xac;
  psVar2 = (short *)(unaff_r12 + (int)ar4);
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2602f4(ar4,ar5,ar6,ar7);
    }
    ar4 = (short *)((int)ar4 + iVar3);
  } while (ar4 < psVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c260340\n.set _FUN_8c260340, _FUN_8c260340_def\n");
//@unit 8c260390
#include "../decls.h"
undefined4
FUN_8c260390_def(int ar4,undefined4 ar5,short *ar6,undefined1 *ar7,undefined1 *s0,char *s4,char *s8,
            uint *s12,int *s16,undefined4 *s20,undefined2 *s24)

{
  char cVar1;
  int *piVar2;
  
  *ar6 = (ushort)*(byte *)(ar4 + 7) << 4;
  *s8 = (*(byte *)(ar4 + 9) & 3) + 1;
  *s12 = (uint)*(ushort *)(ar4 + 0x2a);
  cVar1 = *(char *)(ar4 + 8);
  piVar2 = (int *)(ar4 + 0xc);
  if (cVar1 == '\0') {
    *s0 = 0x10;
    *s4 = *s8 << 1;
    *s20 = 1;
    *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
    *s24 = 0;
  }
  else if (cVar1 == '\x01') {
    *s0 = 8;
    *s4 = *s8;
    *s20 = 1;
    *s16 = *piVar2;
    *s24 = 1;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *s0 = 4;
    *s4 = *s8;
    *s20 = 2;
    *s16 = *piVar2 << 1;
    *s24 = 2;
  }
  *s4 = '\x02';
  *s20 = 1;
  *s16 = (int)(*piVar2 + (uint)(*piVar2 < 0)) >> 1;
  *s0 = 0x10;
  *ar7 = 0xff;
  return 0;
}

__asm__(".globl _FUN_8c260390\n.set _FUN_8c260390, _FUN_8c260390_def\n");
//@unit 8c26045c
#include "../decls.h"
int FUN_8c26045c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_18 [2];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(ar4 + 2) = 1;
  uStack_14 = ar5;
  uStack_10 = ar6;
  iVar1 = FUN_8c260390(ar5,ar6,asStack_18,a7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(ar4 + 0x1c) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x26) = 0;
    *(undefined2 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x30) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
    *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
    *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
    *(int *)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(ar4 + 0x9c) = 0;
    *(undefined4 *)(ar4 + 0x98) = 0;
    *(undefined2 *)(ar4 + 0xa8) = 2;
    memset(ar4 + 0x4c,0,4,a7);
    iVar1 = (int)asStack_18[0];
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26045c\n.set _FUN_8c26045c, _FUN_8c26045c_def\n");
//@unit 8c260540
#include "../decls.h"
int FUN_8c260540_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar1 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar1 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x74);
    }
    iVar5 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x54);
    }
    iVar8 = *(int *)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(ar4 + 0x6c);
      iVar3 = *(int *)(ar4 + 0x70);
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(0xa0 + ar4) = iVar1;
    *(int *)(0xa4 + ar4) = iVar1 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + ar4))
                      (*(undefined4 *)(iVar9 + 4 + ar4),*(undefined4 *)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(iVar9 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c260540\n.set _FUN_8c260540, _FUN_8c260540_def\n");
//@unit 8c26054c
#include "../decls.h"
int FUN_8c26054c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13;
  int iVar10;
  int unaff_r14;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar1 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar1) {
      iVar1 = unaff_r13[9];
    }
    iVar5 = unaff_r13[5];
    if (unaff_r13[1] < iVar1) {
      iVar1 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar5;
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar2 = unaff_r13[7];
      iVar3 = unaff_r13[8];
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar1;
    *(int *)(0xa4 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + unaff_r14))
                      (*(undefined4 *)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c26054c\n.set _FUN_8c26054c, _FUN_8c26054c_def\n");
//@unit 8c260636
#include "../decls.h"
uint FUN_8c260636_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272048,4,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c260636\n.set _FUN_8c260636, _FUN_8c260636_def\n");
//@unit 8c260658
#include "../decls.h"
undefined4
FUN_8c260658_def(int ar4,uint ar5,short *ar6,undefined1 *ar7,char *s0,char *s4,char *s8,uint *s12,
            undefined4 s16,undefined4 *s20,undefined2 *s24)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar8;
  undefined1 *a7;
  ushort *puVar9;
  uint uVar10;
  
  uVar10 = 0;
  a7 = ar7;
  if (0 < (int)ar5) {
    do {
      iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa0,4,a7);
      if (iVar5 == 0) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)ar5);
  }
  if (uVar10 != ar5) {
    if ((int)uVar10 < 0) {
      uVar6 = ~(~uVar10 + 1 & 3) + 1;
    }
    else {
      uVar6 = uVar10 & 3;
    }
    if ((uVar6 == 0) && (puVar9 = (ushort *)(uVar10 + 8 + ar4), *puVar9 < 2)) {
      uVar10 = 0;
      if (0 < (int)ar5) {
        do {
          iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa8,4,a7);
          if (iVar5 == 0) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)ar5);
      }
      if (uVar10 != ar5) {
        pbVar8 = (byte *)(uVar10 + 4 + ar4);
        bVar2 = pbVar8[1];
        bVar1 = *pbVar8;
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        *ar6 = (short)uVar10 + 8;
        uVar10 = (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar1;
        *ar7 = 0xff;
        *s12 = (uint)*(byte *)((int)puVar9 + 5) << 8 | (uint)(byte)puVar9[3] << 0x10 |
               (uint)*(byte *)((int)puVar9 + 7) << 0x18 | (uint)(byte)puVar9[2];
        *s8 = (char)puVar9[1];
        *s0 = (char)puVar9[7];
        *s4 = (char)puVar9[6];
        uVar7 = libgcc_divide_helper_010468(uVar10,(int)*s4);
        *extraout_r3 = uVar7;
        *s20 = 1;
        if (*s0 == '\x10') {
          *s24 = 0;
        }
        else if (*s0 == '\b') {
          *s24 = 1;
        }
        else if (*s0 == '\x04') {
          *s4 = *s8 << 1;
          *s20 = 4;
          uVar7 = libgcc_divide_helper_01051c(uVar10 >> 1,(int)*s8);
          *extraout_r2 = uVar7;
          *s0 = '\x10';
          *s24 = 2;
        }
        if ((((*s0 != '\0') && (*s4 != '\0')) && ('\0' < *s8)) && ((*s8 < '\x03' && (*s12 != 0)))) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c260658\n.set _FUN_8c260658, _FUN_8c260658_def\n");
//@unit 8c260810
#include "../decls.h"
int FUN_8c260810_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  short asStack_18 [2];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a7 = ar4 + 0xc;
  *(undefined2 *)(ar4 + 2) = 1;
  uStack_14 = ar5;
  uStack_10 = ar6;
  iVar1 = FUN_8c260658(ar5,ar6,asStack_18,a7);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(ar4 + 0x1c) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x26) = 0;
    *(undefined2 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x30) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(int *)(ar4 + 0x58) = (int)*(char *)(ar4 + 0xe);
    *(int *)(ar4 + 0x5c) = (int)*(char *)(ar4 + 0xf);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x3c);
    *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x44);
    *(undefined2 *)(ar4 + 0x7c) = *(undefined2 *)(ar4 + 0x48);
    *(undefined2 *)(ar4 + 0x7e) = *(undefined2 *)(ar4 + 0x4a);
    *(int *)(ar4 + 0x80) = ar4 + 0x4c;
    *(undefined4 *)(ar4 + 0x9c) = 0;
    *(undefined4 *)(ar4 + 0x98) = 0;
    *(undefined2 *)(ar4 + 0xa8) = 1;
    memset(ar4 + 0x4c,0,4,a7);
    iVar1 = (int)asStack_18[0];
  }
  return iVar1;
}

__asm__(".globl _FUN_8c260810\n.set _FUN_8c260810, _FUN_8c260810_def\n");
//@unit 8c2608f8
#include "../decls.h"
int FUN_8c2608f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar1 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar1 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x74);
    }
    iVar5 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar1) {
      iVar1 = *(int *)(ar4 + 0x54);
    }
    iVar8 = *(int *)(ar4 + 0x70) * 2 + iVar5;
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar2 = *(int *)(ar4 + 0x6c);
      iVar3 = *(int *)(ar4 + 0x70);
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(0xa0 + ar4) = iVar1;
    *(int *)(0xa4 + ar4) = iVar1 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar9 = *(int *)(ar4 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + ar4))
                      (*(undefined4 *)(iVar9 + 4 + ar4),*(undefined4 *)(iVar9 + 0x14 + ar4),
                       *(undefined4 *)(iVar9 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c2608f8\n.set _FUN_8c2608f8, _FUN_8c2608f8_def\n");
//@unit 8c260904
#include "../decls.h"
int FUN_8c260904_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *unaff_r13;
  int iVar10;
  int unaff_r14;
  
  iVar9 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar1 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar1 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar1 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar1) {
      iVar1 = unaff_r13[9];
    }
    iVar5 = unaff_r13[5];
    if (unaff_r13[1] < iVar1) {
      iVar1 = unaff_r13[1];
    }
    iVar8 = unaff_r13[8] * 2 + iVar5;
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar2 = unaff_r13[7];
      iVar3 = unaff_r13[8];
      iVar10 = 0;
      iVar6 = 0;
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          iVar10 = iVar10 + 1;
          *(undefined2 *)(iVar7 + iVar8) = *(undefined2 *)(iVar6 * 2 + iVar9);
          iVar4 = iVar6 + 1;
          iVar6 = iVar6 + 2;
          *(undefined2 *)(iVar7 + (iVar2 + iVar3) * 2 + iVar5) = *(undefined2 *)(iVar4 * 2 + iVar9);
          iVar7 = iVar7 + 2;
        } while (iVar10 < iVar1);
      }
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          iVar2 = iVar2 + 1;
          *(undefined2 *)(iVar5 + iVar8) = *(undefined2 *)(iVar5 + iVar9);
          iVar5 = iVar5 + 2;
        } while (iVar2 < iVar1);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar1;
    *(int *)(0xa4 + unaff_r14) = iVar1 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar9 = *(int *)(unaff_r14 + 4);
  if (iVar9 == 2) {
    iVar9 = (int)0x90;
    iVar9 = (**(code **)(iVar9 + unaff_r14))
                      (*(undefined4 *)(iVar9 + 4 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar9 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar9;
}

__asm__(".globl _FUN_8c260904\n.set _FUN_8c260904, _FUN_8c260904_def\n");
//@unit 8c2609f0
#include "../decls.h"
int FUN_8c2609f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    psVar10 = (short *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar3 = *(int *)(ar4 + 0x6c);
      iVar9 = 0;
      iVar4 = *(int *)(ar4 + 0x70);
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar10 + iVar8) = (pbVar11[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar11[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (iVar9 < iVar2);
      }
    }
    else {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar11;
          pbVar11 = pbVar11 + 1;
          iVar6 = iVar6 + 1;
          *psVar10 = (bVar1 - 0x80) * 0x100;
          psVar10 = psVar10 + 1;
        } while (iVar6 < iVar2);
      }
    }
    *(int *)(0xa0 + ar4) = iVar2;
    *(int *)(0xa4 + ar4) = iVar2 * *(char *)(ar4 + 0xe);
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar2 = *(int *)(ar4 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)0x90;
    iVar2 = (**(code **)(iVar2 + ar4))
                      (*(undefined4 *)(iVar2 + 4 + ar4),*(undefined4 *)(iVar2 + 0x14 + ar4),
                       *(undefined4 *)(iVar2 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2609f0\n.set _FUN_8c2609f0, _FUN_8c2609f0_def\n");
//@unit 8c2609fc
#include "../decls.h"
int FUN_8c2609fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  byte *pbVar10;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  pbVar10 = (byte *)*unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if ((int)unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if ((int)unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    psVar9 = (short *)(unaff_r13[8] * 2 + iVar6);
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar3 = unaff_r13[7];
      ar7 = 0;
      iVar4 = unaff_r13[8];
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)psVar9 + iVar8) = (pbVar10[iVar7] - 0x80) * 0x100;
          iVar5 = iVar7 + 1;
          ar7 = ar7 + 1;
          iVar7 = iVar7 + 2;
          *(ushort *)(iVar8 + (iVar3 + iVar4) * 2 + iVar6) = (pbVar10[iVar5] - 0x80) * 0x100;
          iVar8 = iVar8 + 2;
        } while (ar7 < iVar2);
      }
    }
    else {
      ar7 = 0;
      if (0 < iVar2) {
        do {
          bVar1 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          ar7 = ar7 + 1;
          *psVar9 = (bVar1 - 0x80) * 0x100;
          psVar9 = psVar9 + 1;
        } while (ar7 < iVar2);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar2;
    *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe);
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar2 = *(int *)(unaff_r14 + 4);
  if (iVar2 == 2) {
    iVar2 = (int)0x90;
    iVar2 = (**(code **)(iVar2 + unaff_r14))
                      (*(undefined4 *)(iVar2 + 4 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x14 + unaff_r14),
                       *(undefined4 *)(iVar2 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2609fc\n.set _FUN_8c2609fc, _FUN_8c2609fc_def\n");
//@unit 8c260afc
#include "../decls.h"
int FUN_8c260afc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = *(int *)(ar4 + 0x50);
  if ((*(int *)(ar4 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(ar4 + 8),&DAT_8c4b9828),
     iVar2 == 0)) {
    (**(code **)(0x88 + ar4))
              (*(undefined4 *)(0x88 + 4 + ar4),ar4 + 0x70,ar4 + 0x74,ar4 + 0x78);
    iVar2 = *(int *)(ar4 + 0x68) - *(int *)(ar4 + 0x70);
    if (*(int *)(ar4 + 0x74) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x74);
    }
    iVar6 = *(int *)(ar4 + 100);
    if (*(int *)(ar4 + 0x54) < iVar2) {
      iVar2 = *(int *)(ar4 + 0x54);
    }
    puVar10 = (undefined2 *)(*(int *)(ar4 + 0x70) * 2 + iVar6);
    if (*(char *)(ar4 + 0xe) == '\x02') {
      iVar9 = *(int *)(ar4 + 0x6c);
      iVar4 = *(int *)(ar4 + 0x70);
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(iVar7 + 2 + iVar11),*(undefined1 *)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(iVar5 + iVar11),*(undefined1 *)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(0xa0 + ar4) = iVar2;
    *(int *)(0xa4 + ar4) = iVar2 * *(char *)(ar4 + 0xe) * 2;
    *(undefined4 *)(ar4 + 4) = 2;
  }
  iVar11 = *(int *)(ar4 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)0x90;
    iVar11 = (**(code **)(iVar11 + ar4))
                       (*(undefined4 *)(iVar11 + 4 + ar4),*(undefined4 *)(iVar11 + 0x14 + ar4),
                        *(undefined4 *)(iVar11 + 0x10 + ar4));
    *(undefined4 *)(ar4 + 4) = 3;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c260afc\n.set _FUN_8c260afc, _FUN_8c260afc_def\n");
//@unit 8c260b08
#include "../decls.h"
int FUN_8c260b08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int *unaff_r13;
  int iVar12;
  int unaff_r14;
  
  iVar11 = *unaff_r13;
  if ((*(int *)(unaff_r14 + 4) == 1) &&
     (iVar2 = get_field_c_264f82(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7)
     , iVar2 == 0)) {
    (**(code **)(0x88 + unaff_r14))
              (*(undefined4 *)(0x88 + 4 + unaff_r14),unaff_r13 + 8,unaff_r13 + 9,
               unaff_r13 + 10);
    iVar2 = unaff_r13[6] - unaff_r13[8];
    if (unaff_r13[9] < iVar2) {
      iVar2 = unaff_r13[9];
    }
    iVar6 = unaff_r13[5];
    if (unaff_r13[1] < iVar2) {
      iVar2 = unaff_r13[1];
    }
    puVar10 = (undefined2 *)(unaff_r13[8] * 2 + iVar6);
    ar7 = 0;
    if (*(char *)(unaff_r14 + 0xe) == '\x02') {
      iVar9 = unaff_r13[7];
      iVar4 = unaff_r13[8];
      iVar12 = 0;
      iVar7 = 0;
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          *(ushort *)((int)puVar10 + iVar8) =
               CONCAT11(*(undefined1 *)(iVar7 + 2 + iVar11),*(undefined1 *)(iVar11 + iVar7));
          iVar5 = iVar7 + 3;
          iVar3 = iVar7 + 1;
          iVar12 = iVar12 + 1;
          iVar7 = iVar7 + 4;
          *(ushort *)(iVar8 + (iVar9 + iVar4) * 2 + iVar6) =
               CONCAT11(*(undefined1 *)(iVar5 + iVar11),*(undefined1 *)(iVar3 + iVar11));
          iVar8 = iVar8 + 2;
        } while (iVar12 < iVar2);
      }
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar7 = iVar6 + 1;
          iVar4 = iVar4 + 1;
          puVar1 = (undefined1 *)(iVar6 + iVar11);
          iVar6 = iVar6 + 2;
          *puVar10 = CONCAT11(*(undefined1 *)(iVar7 + iVar11),*puVar1);
          puVar10 = puVar10 + 1;
        } while (iVar4 < iVar2);
      }
    }
    *(int *)(0xa0 + unaff_r14) = iVar2;
    *(int *)(0xa4 + unaff_r14) = iVar2 * *(char *)(unaff_r14 + 0xe) * 2;
    *(undefined4 *)(unaff_r14 + 4) = 2;
  }
  iVar11 = *(int *)(unaff_r14 + 4);
  if (iVar11 == 2) {
    iVar11 = (int)0x90;
    iVar11 = (**(code **)(iVar11 + unaff_r14))
                       (*(undefined4 *)(iVar11 + 4 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x14 + unaff_r14),
                        *(undefined4 *)(iVar11 + 0x10 + unaff_r14),ar7);
    *(undefined4 *)(unaff_r14 + 4) = 3;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c260b08\n.set _FUN_8c260b08, _FUN_8c260b08_def\n");
//@unit 8c260c2c
#include "../decls.h"
undefined4 FUN_8c260c2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013ec0(ar4,&DAT_8c272050,4,ar7);
  if ((iVar1 == 0) && (iVar1 = FUN_8c013ec0(ar4 + 8,&DAT_8c272060,4,ar7), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c260c2c\n.set _FUN_8c260c2c, _FUN_8c260c2c_def\n");
//@unit 8c260c60
#include "../decls.h"
undefined4 FUN_8c260c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(short *)(0xaa + ar4) == 2) {
    uVar1 = FUN_8c260afc(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(0xaa + ar4) == 1) {
    uVar1 = FUN_8c2609f0(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(0xaa + ar4) == 0) {
    uVar1 = FUN_8c2608f8(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)0xaa;
}

__asm__(".globl _FUN_8c260c60\n.set _FUN_8c260c60, _FUN_8c260c60_def\n");
//@unit 8c260c98
#include "../decls.h"
undefined4 FUN_8c260c98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c277fb0 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c260c98\n.set _FUN_8c260c98, _FUN_8c260c98_def\n");
//@unit 8c260ca0
#include "../decls.h"
uint FUN_8c260ca0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  if (DAT_8c277fb0 == 0) {
    DAT_8c277fb4 = (((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
    ain0 = ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
           (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
           (uint)in_MD << 0x1e | 0xf0;
  }
  DAT_8c277fb0 = DAT_8c277fb0 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c260ca0\n.set _FUN_8c260ca0, _FUN_8c260ca0_def\n");
//@unit 8c260cc8
#include "../decls.h"
uint FUN_8c260cc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  
  DAT_8c277fb0 = DAT_8c277fb0 + -1;
  if (DAT_8c277fb0 == 0) {
    ain0 = (DAT_8c277fb4 & 0xf) << 4 |
           ((uint)in_S << 1 | 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
           (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
           (uint)in_MD << 0x1e;
  }
  return ain0;
}

__asm__(".globl _FUN_8c260cc8\n.set _FUN_8c260cc8, _FUN_8c260cc8_def\n");
//@unit 8c260cf8
#include "../decls.h"
undefined4 * FUN_8c260cf8_def(int ar4,int ar5,undefined2 *ar6,undefined2 *ar7)

{
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double dVar5;
  undefined4 in_fr13;
  double dVar6;
  undefined4 uVar7;
  double in_xd2;
  undefined2 uVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  dVar3 = (double)CONCAT44((float)ar5,0x40c90fdb);
  fVar4 = (float)ar4 * 6.2831855;
  dVar6 = (double)CONCAT44(0x3fb504f3,in_fr13);
  FUN_8c013c38(ar4,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    fVar4 = 2.0;
  }
  else {
    fVar4 = SUB84((double)CONCAT44(fVar4,0x3f800000) + (double)CONCAT44(fVar4,0x3f800000),0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar6,0));
    dVar3 = (double)CONCAT44(0xbf800000,SQRT(fVar4));
  }
  else {
    dVar6 = dVar6 - dVar3;
    dVar3 = SQRT(-(double)CONCAT44(0x3f800000,fVar4));
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,uVar7);
    in_xd2 = (double)CONCAT44(SUB84(dVar3,0),uVar7);
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    in_xd2 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) + fVar4,SUB84(in_xd2,0));
  }
  else {
    in_xd2 = in_xd2 + dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(fVar4,uVar7);
  }
  fVar4 = (float)((ulonglong)in_xd2 >> 0x20);
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) - fVar4;
    fVar2 = SQRT((SUB84(dVar3,0) + fVar4) * fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,fVar1);
  }
  else {
    dVar3 = SQRT((dVar3 + in_xd2) * (dVar6 - in_xd2));
    dVar6 = (dVar6 - in_xd2) - dVar3;
  }
  uVar7 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar5 = dVar6;
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),fVar4);
    dVar5 = (double)CONCAT44(uVar7,SUB84(in_xd2,0));
  }
  if (cVar9 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar3,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 / dVar3;
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),0x46000000);
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(uVar7,fVar4);
  }
  if (cVar9 == '\0') {
    fVar1 = SUB84(dVar6,0) * SUB84(dVar3,0);
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar1);
    uVar8 = (undefined2)(int)fVar1;
  }
  else {
    dVar6 = dVar6 * dVar3;
    uVar8 = (undefined2)(int)dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar4);
  }
  if (cVar9 == '\0') {
    fVar4 = SUB84(dVar6,0) * fVar4;
  }
  else {
    fVar4 = SUB84(dVar6 * dVar5,0);
  }
  *ar6 = uVar8;
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x45800000,fVar4);
  }
  else {
    dVar6 = 1.38524461322914e-309;
  }
  if (cVar9 == '\0') {
    fVar4 = (float)((ulonglong)dVar6 >> 0x20);
    dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) * fVar4);
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (cVar9 == '\0') {
    uVar8 = (undefined2)(int)-SUB84(dVar6,0);
  }
  else {
    uVar8 = (undefined2)(int)(double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),-SUB84(dVar6,0));
  }
  *ar7 = uVar8;
  return &DAT_8c260e88;
}

__asm__(".globl _FUN_8c260cf8\n.set _FUN_8c260cf8, _FUN_8c260cf8_def\n");
//@unit 8c260d7c
#include "../decls.h"
undefined4
FUN_8c260d7c_def(ushort *ar4,int ar5,short *ar6,undefined1 *ar7,undefined1 *s0,undefined1 *s4,
            undefined1 *s8,uint *s12,uint *s16)

{
  undefined4 uVar1;
  undefined4 *extraout_r3;
  uint uVar2;
  
  if (ar5 < 0x10) {
    return 0xffffffff;
  }
  if (((int)(uint)*ar4 >> 8 | (*ar4 & 0xff) << 8) == 0x8000) {
    *ar6 = (ar4[1] >> 8 | ar4[1] << 8) + 4;
    *ar7 = (char)ar4[2];
    *s4 = *(undefined1 *)((int)ar4 + 5);
    *s0 = (char)ar4[3];
    *s8 = *(undefined1 *)((int)ar4 + 7);
    uVar2 = *(uint *)(ar4 + 4);
    *s12 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = *(uint *)(ar4 + 6);
    *s16 = uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar1 = libgcc_divide_helper_010468(((char)*s4 + -2) * 8,(int)(char)*s0);
    *extraout_r3 = uVar1;
    return 0;
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260d7c\n.set _FUN_8c260d7c, _FUN_8c260d7c_def\n");
//@unit 8c260e9c
#include "../decls.h"
undefined4 FUN_8c260e9c_def(ushort *ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  if (0x11 < ar5) {
    if (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) != 0x8000) {
      return 0xfffffffe;
    }
    if (0xd < (int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00)) {
      *ar6 = ar4[8] >> 8 | ar4[8] << 8 & (int)0xffffff00;
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c260e9c\n.set _FUN_8c260e9c, _FUN_8c260e9c_def\n");
//@unit 8c260f02
#include "../decls.h"
undefined4
FUN_8c260f02_def(ushort *ar4,int ar5,uint *ar6,ushort *ar7,ushort *s0,uint *s4,uint *s8,uint *s12,
            uint *s16)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  *ar7 = 0;
  uVar2 = 0xff00;
  if (ar5 < 0x30) {
    return 0xffffffff;
  }
  if ((ushort)(*ar4 >> 8 | *ar4 << 8 & (ushort)0xff00) == 0x8000) {
    if ((int)((int)(short)ar4[1] >> 8 & 0xffU | (int)(short)ar4[1] << 8 & 0xff00) < 0x2c) {
      return 0xffffffff;
    }
    *ar6 = (int)(short)ar4[10] >> 8 & 0xffU | (int)(short)ar4[10] << 8 & 0xff00;
    uVar1 = (int)0xffffff00;
    *ar7 = ar4[0xb] >> 8 | ar4[0xb] << 8 & (int)0xffffff00;
    uVar3 = 0xff0000;
    if (*ar7 == 1) {
      *s0 = ar4[0xd] >> 8 | ar4[0xd] << 8 & uVar1;
      uVar4 = *(uint *)(ar4 + 0xe);
      *s4 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x10);
      *s8 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x12);
      *s12 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      uVar4 = *(uint *)(ar4 + 0x14);
      *s16 = uVar4 >> 0x18 | (int)uVar4 >> 8 & uVar2 | uVar4 << 8 & uVar3 | uVar4 << 0x18;
      return 0;
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c260f02\n.set _FUN_8c260f02, _FUN_8c260f02_def\n");
//@unit 8c261058
#include "../decls.h"
int FUN_8c261058_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined4 s0,undefined4 s4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iStack_20;
  
  fVar5 = (float)((int)*ar7 << 0x10);
  fVar6 = (float)((int)ar7[1] << 0x10);
  fVar8 = (float)((int)(short)s0 << 4) / 65536.0;
  fVar9 = (float)((int)(short)s4 << 4) / 65536.0;
  iVar4 = 0;
  while( true ) {
    if (ar5 <= iVar4) {
      *ar7 = (short)((uint)(int)fVar5 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar6 >> 0x10);
      return ar5;
    }
    uVar2 = (uint)(short)(*ar4 >> 8 | *ar4 << 8);
    if ((uVar2 & 0x8000) != 0) break;
    iStack_20 = 0;
    ar4 = ar4 + 1;
    fVar7 = (float)((uVar2 & 0x1fff) + 1);
    do {
      uVar1 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar3 = (uint)(byte)uVar1 * 4;
      fVar6 = fVar7 * *(float *)(&DAT_8c272730 + iVar3) + fVar8 * fVar5 + fVar9 * fVar6;
      *ar6 = (short)((uint)(int)fVar6 >> 0x10);
      fVar5 = fVar7 * *(float *)(&DAT_8c272b30 + iVar3) + fVar8 * fVar6 + fVar9 * fVar5;
      ar6[1] = (short)((uint)(int)fVar5 >> 0x10);
      ar6 = ar6 + 2;
      iStack_20 = iStack_20 + 2;
    } while (iStack_20 < 0x20);
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c261058\n.set _FUN_8c261058, _FUN_8c261058_def\n");
//@unit 8c261170
#include "../decls.h"
int FUN_8c261170_def(ushort *ar4,int ar5,undefined2 *ar6,short *ar7,undefined2 *s0,short *s4,
                undefined4 s8,undefined4 s12)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  fVar7 = (float)((int)*ar7 << 0x10);
  fVar8 = (float)((int)ar7[1] << 0x10);
  fVar9 = (float)((int)*s4 << 0x10);
  fVar10 = (float)((int)s4[1] << 0x10);
  iStack_30 = 0;
  iStack_28 = 1;
  iStack_2c = 0;
  fVar12 = (float)((int)(short)s8 << 4) / 65536.0;
  fVar13 = (float)((int)(short)s12 << 4) / 65536.0;
  while( true ) {
    if ((int)(ar5 + (uint)(ar5 < 0)) >> 1 <= iStack_30) {
      *ar7 = (short)((uint)(int)fVar7 >> 0x10);
      ar7[1] = (short)((uint)(int)fVar8 >> 0x10);
      *s4 = (short)((uint)(int)fVar9 >> 0x10);
      s4[1] = (short)((uint)(int)fVar10 >> 0x10);
      return ar5;
    }
    uVar3 = *ar4 >> 8 | *ar4 << 8;
    if (((int)(short)uVar3 & 0x8000U) != 0) break;
    iVar2 = 0;
    fVar11 = (float)(((int)(short)uVar3 & 0x1fffU) + 1);
    puVar1 = ar4 + 1;
    do {
      puVar6 = puVar1;
      iVar4 = (uint)(byte)*puVar6 * 4;
      fVar8 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar7 + fVar13 * fVar8;
      *ar6 = (short)((uint)(int)fVar8 >> 0x10);
      fVar7 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar8 + fVar13 * fVar7;
      iVar2 = iVar2 + 2;
      ar6[1] = (short)((uint)(int)fVar7 >> 0x10);
      ar6 = ar6 + 2;
      puVar1 = (ushort *)((int)puVar6 + 1);
    } while (iVar2 < 0x20);
    uVar3 = *(ushort *)((int)puVar6 + 1);
    uVar5 = (uint)(short)(uVar3 >> 8 | uVar3 << 8);
    if ((uVar5 & 0x8000) != 0) {
      return iStack_28;
    }
    iVar2 = 0;
    ar4 = (ushort *)((int)puVar6 + 3);
    fVar11 = (float)((uVar5 & 0x1fff) + 1);
    do {
      uVar3 = *ar4;
      ar4 = (ushort *)((int)ar4 + 1);
      iVar4 = (uint)(byte)uVar3 * 4;
      fVar10 = fVar11 * *(float *)(&DAT_8c272730 + iVar4) + fVar12 * fVar9 + fVar13 * fVar10;
      *s0 = (short)((uint)(int)fVar10 >> 0x10);
      fVar9 = fVar11 * *(float *)(&DAT_8c272b30 + iVar4) + fVar12 * fVar10 + fVar13 * fVar9;
      iVar2 = iVar2 + 2;
      s0[1] = (short)((uint)(int)fVar9 >> 0x10);
      s0 = s0 + 2;
    } while (iVar2 < 0x20);
    iStack_30 = iStack_30 + 1;
    iStack_28 = iStack_28 + 2;
    iStack_2c = iStack_2c + 2;
  }
  return iStack_2c;
}

__asm__(".globl _FUN_8c261170\n.set _FUN_8c261170, _FUN_8c261170_def\n");
//@unit 8c261370
#include "../decls.h"
undefined4 FUN_8c261370_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4b39a0,0,(int)0x180,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c261370\n.set _FUN_8c261370, _FUN_8c261370_def\n");
//@unit 8c2613aa
#include "../decls.h"
undefined1 * FUN_8c2613aa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0x30 + -0x73b4c660) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 == 8) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    ar6_00 = ar6;
    FUN_8c260ca0(8,ar5,ar6,ar7,ar5);
    iVar2 = iVar2 * 0x30;
    ar5_00 = 0;
    puVar1 = (undefined1 *)(iVar2 + -0x73b4c660);
    *(char *)(iVar2 + -0x73b4c65e) = (char)ar4;
    ar4_00 = 0;
    if (0 < ar4) {
      do {
        ar5_00 = ar5_00 + 1;
        *(undefined4 *)(iVar2 + -0x73b4c65c + ar4_00) = *(undefined4 *)(ar5 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c654 + ar4_00) = *(undefined4 *)(ar6 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c64c + ar4_00) = 0;
        ar4_00 = ar4_00 + 4;
      } while (ar5_00 < ar4);
    }
    *(undefined1 *)(iVar2 + -0x73b4c65f) = 0;
    *(undefined4 *)(iVar2 + -0x73b4c634) = 0;
    *(int *)(iVar2 + -0x73b4c644) = ar4;
    *(undefined4 *)(iVar2 + -0x73b4c640) = 0xac44;
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + -0x73b4c63c) = 0x3dcccccd;
      *(undefined4 *)(iVar2 + -0x73b4c638) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(iVar2 + -0x73b4c63c) = 0x8c260cc83dcccccd;
      *(undefined8 *)(iVar2 + -0x73b4c638) = 0x8c260cc83dcccccd;
    }
    *puVar1 = 1;
    FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7,ar5);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c2613aa\n.set _FUN_8c2613aa, _FUN_8c2613aa_def\n");
//@unit 8c26145e
#include "../decls.h"
undefined4 FUN_8c26145e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  if (ar4 != 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
    ar5_00 = 0;
    ar6_00 = 0x30;
    uVar1 = memset(ar4,0,0x30,ar7);
    uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26145e\n.set _FUN_8c26145e, _FUN_8c26145e_def\n");
//@unit 8c2614d6
#include "../decls.h"
uint FUN_8c2614d6_def(int ar4,undefined4 ar5,int **ar6,int **ar7)

{
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
  int iStack_3c;
  int *piStack_30;
  int iStack_2c;
  short *psStack_28;
  uint uStack_24;
  
  uVar1 = 0x24;
  d = (int)((float)*(int *)(ar4 + 0x20) * *(float *)(ar4 + 0x24));
  iVar11 = 0;
  do {
    if (*(int *)(ar4 + 0x1c) <= iVar11) {
      return uVar1;
    }
    iVar7 = iVar11 * 4;
    piVar9 = *(int **)(ar4 + 4 + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,1,ar6,ar7);
    uVar2 = libgcc_divide_helper_010468(uVar1 >> 1,d);
    piVar9 = *(int **)(ar4 + 0xc + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,0,ar6,ar7);
    uVar3 = uVar1 >> 4;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
      iStack_3c = 0;
      for (iVar8 = 0; iVar8 < d; iVar8 = iVar8 + uVar1) {
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        a7 = &psStack_28;
        (**(code **)(*piVar9 + 0x18))(piVar9,1,(d - iVar8) * 2,a7);
        uVar1 = uStack_24 >> 1;
        iVar5 = 0;
        psVar6 = psStack_28;
        if (uVar1 != 0) {
          do {
            iVar4 = (int)*psVar6;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            psVar6 = psVar6 + 1;
            if (iStack_3c < iVar4) {
              iStack_3c = iVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar1);
        }
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        (**(code **)(*piVar9 + 0x20))(piVar9,0,&psStack_28,a7);
      }
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      ar7 = &piStack_30;
      (**(code **)(*piVar9 + 0x18))(piVar9,0,0x10,ar7);
      if (iStack_2c == 0) {
        do {
                    
        } while( true );
      }
      *piStack_30 = iStack_3c;
      piStack_30[1] = *(int *)(ar4 + 0x14 + iVar7);
      ar6 = &piStack_30;
      piStack_30[2] = *(int *)(ar4 + 0x20);
      piStack_30[3] = d;
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      uVar1 = (**(code **)(*piVar9 + 0x20))(piVar9,1,ar6,ar7);
      piVar9 = (int *)(ar4 + 0x14 + iVar7);
      *piVar9 = *piVar9 + d;
      *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c2614d6\n.set _FUN_8c2614d6, _FUN_8c2614d6_def\n");
//@unit 8c261640
#include "../decls.h"
undefined4 FUN_8c261640_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(char *)(ar4 + 1) == 2) {
    uVar1 = FUN_8c2614d6(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c261640\n.set _FUN_8c261640, _FUN_8c261640_def\n");
//@unit 8c26165c
#include "../decls.h"
int FUN_8c26165c_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  char *pcVar2;
  
  pcVar2 = ar4 + unaff_r13;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c261640(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0x30;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c26165c\n.set _FUN_8c26165c, _FUN_8c26165c_def\n");
//@unit 8c261680
#include "../decls.h"
undefined4 FUN_8c261680_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x20) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c261680\n.set _FUN_8c261680, _FUN_8c261680_def\n");
//@unit 8c2616a8
#include "../decls.h"
undefined4 FUN_8c2616a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
                    
                    
  uVar1 = (*(code *)(0xa0000000 | 0x8c2616d4))
                    ((short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
  return uVar1;
}

__asm__(".globl _FUN_8c2616a8\n.set _FUN_8c2616a8, _FUN_8c2616a8_def\n");
//@unit 8c26175c
#include "../decls.h"
uint FUN_8c26175c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_8c2616a8(ar4,ar5,ar6,ar7);
  puVar1 = 0xff00001c;
  *(undefined4 *)0xff00001c = ar4 & (int)(int)0xfffff7ff | (int)0x800;
  uVar2 = *puVar1 & 0xfffffff7 | 8;
  *puVar1 = uVar2;
  return uVar2;
}

__asm__(".globl _FUN_8c26175c\n.set _FUN_8c26175c, _FUN_8c26175c_def\n");
//@unit 8c261786
#include "../decls.h"
undefined4 FUN_8c261786_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = 0x1fffffe0 & ar4;
    if (0x30000 <= ar5) {
                    
                    
      uVar1 = (*(code *)(0xa0000000 | 0x8c261818))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockInvalidate(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c261786\n.set _FUN_8c261786, _FUN_8c261786_def\n");
//@unit 8c2619b4
#include "../decls.h"
undefined4 * FUN_8c2619b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (&memset);
  memset(0x8c4b3b20,0,(int)0x300,ar7);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400,ar7);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000,ar7);
  (*(code *)puVar1)(0x8c4b5224,0,0x20,ar7);
  puVar2 = 0x8c4b4220;
  *(undefined4 *)0x8c4b5244 = 0;
  *puVar2 = 0;
  return puVar2;
}

__asm__(".globl _FUN_8c2619b4\n.set _FUN_8c2619b4, _FUN_8c2619b4_def\n");
//@unit 8c2619ee
#include "../decls.h"
undefined4 FUN_8c2619ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = 0x8c4b5244;
  uVar3 = 0x8c4b5224;
  puVar1 = (&memset);
  *(undefined4 *)0x8c4b4220 = 0;
  *puVar2 = 0;
  (*(code *)puVar1)(uVar3,0,0x20);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400);
  uVar3 = (*(code *)puVar1)(0x8c4b3b20,0,(int)0x300);
  return uVar3;
}

__asm__(".globl _FUN_8c2619ee\n.set _FUN_8c2619ee, _FUN_8c2619ee_def\n");
//@unit 8c2619f8
#include "../decls.h"
undefined4 FUN_8c2619f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *in_r0;
  undefined4 uVar2;
  undefined4 *in_r2;
  undefined4 in_r3;
  
  uVar2 = 0x8c4b5224;
  puVar1 = (&memset);
  *in_r2 = in_r3;
  *in_r0 = in_r3;
  (*(code *)puVar1)(uVar2,ar5,0x20,ar7);
  (*(code *)puVar1)(0x8c4b4224,(int)0xff,(int)0x1000,ar7);
  (*(code *)puVar1)(0x8c4b3e20,0,(int)0x400,ar7);
  uVar2 = (*(code *)puVar1)(0x8c4b3b20,0,(int)0x300,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c2619f8\n.set _FUN_8c2619f8, _FUN_8c2619f8_def\n");
//@unit 8c261a4c
#include "../decls.h"
int FUN_8c261a4c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = 0x8c4b5244;
  uVar4 = *(undefined4 *)0x8c4b5244;
  if ((int)uVar4 < 0) {
    uVar4 = ~(~uVar4 + 1 & (int)0xff) + 1;
  }
  else {
    uVar4 = uVar4 & (int)0xff;
  }
  *(undefined4 *)0x8c4b5244 = uVar4;
  iVar3 = ar4 * 2;
  puVar5 = (undefined1 *)(uVar4 * 0x10 + 0x8c4b4224);
  if (ar5 == 0) {
    *(short *)(0x8c4b5224 + iVar3) = *(short *)(0x8c4b5224 + iVar3) + 1;
  }
  *puVar5 = (char)ar4;
  puVar5[1] = (char)ar5;
  iVar2 = 0x8c4b5224;
  *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(0x8c4b5224 + iVar3);
  *(undefined4 *)(puVar5 + 4) = ar6;
  *(undefined4 *)(puVar5 + 8) = ar7;
  *(undefined4 *)(puVar5 + 0xc) = s0;
  *puVar1 = *puVar1 + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c261a4c\n.set _FUN_8c261a4c, _FUN_8c261a4c_def\n");
//@unit 8c261aa8
#include "../decls.h"
undefined4 FUN_8c261aa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 0xc350;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_r0;
}

__asm__(".globl _FUN_8c261aa8\n.set _FUN_8c261aa8, _FUN_8c261aa8_def\n");
//@unit 8c261ab2
#include "../decls.h"
undefined4 s_E9040801_ptid_is_range_outsi_261ab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  char *s0;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040801__ptid__is_range_outside_8c27207c;
  }
  else {
    if (ar5 != 0) {
      return 0;
    }
    s0 = s_E9040802__ptinfo__is_NULL__adxf__8c2720b0;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}

__asm__(".globl _s_E9040801_ptid_is_range_outsi_261ab2\n.set _s_E9040801_ptid_is_range_outsi_261ab2, _s_E9040801_ptid_is_range_outsi_261ab2_def\n");
//@unit 8c261ae2
#include "../decls.h"
undefined4 FUN_8c261ae2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 a5;
  int iVar3;
  
  iVar3 = 0;
  do {
    a5 = ar5;
    uVar2 = ar6;
    ar5 = a5;
    a4 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(ar4,a5,ar6,ar7);
    if (0 < a4) break;
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  if (iVar3 == 10000) {
    return 0;
  }
  iVar3 = 0;
  do {
    FUN_8c1f39f0(a4,a5,uVar2,ar7);
    FUN_8c26371e(a4,a5,uVar2,ar7);
    FUN_8c262524(a4,a5,uVar2,ar7);
    a4 = ar4;
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(ar4,a5,uVar2,ar7);
    if (iVar1 == 3) break;
    FUN_8c261aa8(a4,a5,uVar2,ar7,ar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10000);
  uVar2 = s_E9040831_adxf_is_NULL_ADXF_G_262696(ar4,a5,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c261ae2\n.set _FUN_8c261ae2, _FUN_8c261ae2_def\n");
//@unit 8c261b96
#include "../decls.h"
int s_E9040804_can_t_open_s_ADXF_L_261ba4_def(int ar4,undefined4 ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined2 *extraout_r2;
  undefined2 *extraout_r2_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *ar5_00;
  undefined4 uVar7;
  int iVar8;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  puVar5 = ar6;
  iStack_30 = ar7;
  iVar2 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar2) {
    puVar6 = &uStack_3c;
    uVar7 = ar5;
    iVar2 = FUN_8c2637ca(ar5,puVar6,puVar5,ar7);
    if (iVar2 < 0) {
      s0 = s_E9040803_can_t_get_FAD_of___s____8c2720dc;
    }
    else {
      puVar6 = &uStack_2c;
      uVar7 = ar5;
      puStack_34 = (undefined4 *)FUN_8c26201c(ar5,puVar6,puVar5,ar7);
      if (puStack_34 != (undefined4 *)0x0) {
        ar5_00 = (int *)0x0;
        iVar8 = -1;
        uVar7 = 0x18;
        puVar5 = ar6;
        memset(ar6,0,0x18,ar7);
        *(undefined4 **)(ar4 * 4 + -0x73b4c1e0) = ar6;
        iVar2 = 0;
        *ar6 = 0;
        ar6[2] = uStack_3c;
        puStack_38 = ar6 + 5;
        *(undefined1 *)((int)ar6 + 0x12) = 0;
        iStack_24 = (int)ar6 + 0x16;
        iStack_40 = 0;
        ar6[3] = 0;
        puStack_28 = (undefined4 *)&DAT_8c4b5268;
LAB_8c261d02:
        do {
          puVar6 = (undefined4 *)0x3;
          if (2 < iVar2) {
            puVar6 = puVar5;
            if (iVar2 == 3) {
              FUN_8c25ece6(puVar5,ar5_00,uVar7,ar7,s_E9040805_read_error__s___ADXF_Lo_8c272144,ar5);
              puVar6 = puVar5;
            }
LAB_8c261d1a:
            if (iVar8 == -4) {
              FUN_8c25ece6(puVar6,ar5_00,uVar7,ar7,s_E9040806___s__is_broken__ADXF_Lo_8c272174,ar5);
            }
            FUN_8c262168(puStack_34,ar5_00,uVar7,ar7);
            return iVar8;
          }
          ar5_00 = (int *)0x1;
          puVar5 = puStack_34;
          uVar7 = 0x8c4b5260;
          iVar3 = FUN_8c261ae2(puStack_34,1,0x8c4b5260,ar7);
          if (0 < iVar3) {
            uVar7 = 0x800;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b5264) {
                _DAT_8c4b5264 = 0x10000;
                puVar6 = (undefined4 *)0xfffffffc;
                iVar8 = -4;
                goto LAB_8c261d1a;
              }
              if (iStack_30 < _DAT_8c4b5264) {
                uVar1 = (ushort)iStack_30;
              }
              else {
                uVar1 = (ushort)_DAT_8c4b5264;
              }
              *(ushort *)(ar6 + 4) = uVar1;
              ar6[3] = (uint)uVar1;
              ar6[1] = (uVar1 + 1) * 2 + 0x16 & 0xfffffffc;
              uVar4 = libgcc_divide_helper_010468(*puStack_28,0x800);
              *extraout_r2 = (short)uVar4;
            }
            else {
              puVar6 = (undefined4 *)0x1;
            }
            ar7 = 0x200;
            ar5_00 = (int *)((int)puVar6 * 4 + -0x73b4ada0);
            if (puVar6 < (undefined4 *)0x200) {
              do {
                iStack_40 = iStack_40 + 1;
                uVar4 = libgcc_divide_helper_010468(*ar5_00 + 0x7ff,uVar7);
                *extraout_r2_00 = (short)uVar4;
                if ((int)ar6[3] <= iStack_40) {
                  iVar8 = 0;
                  goto LAB_8c261d1a;
                }
                puVar6 = (undefined4 *)((int)puVar6 + 2);
                ar5_00 = ar5_00 + 2;
              } while ((int)puVar6 < ar7);
            }
            iVar2 = 0;
            puVar5 = puVar6;
            goto LAB_8c261d02;
          }
          iVar2 = iVar2 + 1;
        } while( true );
      }
      s0 = s_E9040804_can_t_open___s___ADXF_L_8c272114;
      puStack_34 = (undefined4 *)0x0;
    }
    FUN_8c25ece6(uVar7,puVar6,puVar5,ar7,s0,ar5);
    iVar2 = -1;
  }
  return iVar2;
}

__asm__(".globl _s_E9040804_can_t_open_s_ADXF_L_261ba4\n.set _s_E9040804_can_t_open_s_ADXF_L_261ba4, _s_E9040804_can_t_open_s_ADXF_L_261ba4_def\n");
//@unit 8c261d46
#include "../decls.h"
int s_E9040807_can_t_find_s_ADXF_A_261d54_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *s0;
  int *piVar4;
  uint ar4_00;
  int *ar5_00;
  int *ar6_00;
  int iVar5;
  int iVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  ar6_00 = ar6;
  iStack_30 = ar7;
  iVar1 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar1) {
    ar5_00 = &iStack_38;
    uVar3 = ar5;
    iVar1 = FUN_8c2637ca(ar5,ar5_00,ar6_00,ar7);
    if (iVar1 < 0) {
      s0 = s_E9040807_can_t_find___s___ADXF_A_8c2721a4;
    }
    else {
      ar5_00 = &iStack_28;
      uVar3 = ar5;
      iStack_34 = FUN_8c26201c(ar5,ar5_00,ar6_00,ar7);
      if (iStack_34 != 0) {
        iVar6 = -1;
        piVar4 = (int *)(ar4 * 4 + -0x73b4c1e0);
        *ar6 = *piVar4;
        *piVar4 = (int)ar6;
        iVar5 = 0;
        iVar1 = 0;
        ar6[2] = iStack_38;
        *(undefined1 *)((int)ar6 + 0x12) = 1;
        piStack_24 = ar6 + 5;
        iStack_2c = 0;
        ar6[3] = 0;
LAB_8c261ebe:
        do {
          ar4_00 = 3;
          if (2 < iVar1) {
            if (iVar1 == 3) {
              FUN_8c25ece6(3,ar5_00,ar6_00,ar7,s_E9040809_read_error__s___ADXF_Lo_8c272204,ar5);
            }
LAB_8c261ed6:
            if (iVar6 == -4) {
              FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7,s_E9040810___s__is_broken__ADXF_Lo_8c272234,ar5)
              ;
            }
            *(undefined2 *)(ar6 + 4) = (undefined2)iStack_2c;
            ar6[1] = (uint)*(ushort *)(ar6 + 4) * 8 + *(int *)(*ar6 + 4) + 0x14;
            FUN_8c262168(iStack_34,ar5_00,ar6_00,ar7);
            return iVar6;
          }
          ar5_00 = (int *)0x1;
          ar6_00 = (int *)0x8c4b72e0;
          iVar2 = FUN_8c261ae2(iStack_34,1,0x8c4b72e0,ar7);
          if (0 < iVar2) {
            ar4_00 = 0;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b72e4) {
                _DAT_8c4b72e4 = 0x10000;
                ar4_00 = 0xfffffffc;
                iVar6 = -4;
                goto LAB_8c261ed6;
              }
              iVar1 = _DAT_8c4b72e4;
              if (iStack_30 < _DAT_8c4b72e4) {
                iVar1 = iStack_30;
              }
              ar6[3] = iVar1;
              ar4_00 = 2;
            }
            ar5_00 = (int *)0x200;
            if (ar4_00 < 0x200) {
              do {
                if (*(int *)(ar4_00 * 4 + -0x73b48d20) == 0) {
                  ar4_00 = ar4_00 + 2;
                }
                else {
                  ar7 = 0x7ff;
                  ar5_00 = piStack_24 + iStack_2c * 2;
                  *(short *)ar5_00 = (short)iVar5;
                  ar6_00 = (int *)0x800;
                  iVar2 = ar4_00 + 1;
                  iStack_2c = iStack_2c + 1;
                  iVar1 = libgcc_divide_helper_010468
                                    (*(int *)(ar4_00 * 4 + -0x73b48d20) + 0x7ff,0x800);
                  ar5_00[1] = iVar1;
                  ar4_00 = iVar2 + 1;
                  uVar3 = libgcc_divide_helper_010468
                                    (*(int *)(iVar2 * 4 + -0x73b48d20) + ar7,ar6_00);
                  *(short *)((int)ar5_00 + 2) = (short)uVar3;
                }
                iVar5 = iVar5 + 1;
                if (ar6[3] <= iVar5) {
                  iVar6 = 0;
                  goto LAB_8c261ed6;
                }
              } while ((int)ar4_00 < 0x200);
            }
            iVar1 = 0;
            goto LAB_8c261ebe;
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      s0 = s_E9040808_cannot_open___s___ADXF__8c2721d4;
      iStack_34 = 0;
    }
    FUN_8c25ece6(uVar3,ar5_00,ar6_00,ar7,s0,ar5);
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _s_E9040807_can_t_find_s_ADXF_A_261d54\n.set _s_E9040807_can_t_find_s_ADXF_A_261d54, _s_E9040807_can_t_find_s_ADXF_A_261d54_def\n");
//@unit 8c261f22
#include "../decls.h"
char * FUN_8c261f22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = 0x8c4b3b20;
  for (pcVar1 = 0x8c4b3b20;
      (pcVar3 = (char *)0x0, pcVar1 < 0x8c4b3b20 + 0x300 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x30) {
    pcVar2 = pcVar2 + 0x30;
  }
  return pcVar3;
}

__asm__(".globl _FUN_8c261f22\n.set _FUN_8c261f22, _FUN_8c261f22_def\n");
//@unit 8c261f48
#include "../decls.h"
undefined4 FUN_8c261f48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c261f22(ar4,ar5,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0;
  }
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 1;
  return puVar1;
}

__asm__(".globl _FUN_8c261f48\n.set _FUN_8c261f48, _FUN_8c261f48_def\n");
//@unit 8c261f7a
#include "../decls.h"
int s_E9040901_can_t_find_s_ADXF_O_261f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 a4;
  undefined4 *ar5_00;
  undefined4 *a5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  a5 = &uStack_20;
  ar5_00 = auStack_18;
  a4 = ar5;
  iVar2 = FUN_8c2637ca(ar5,ar5_00,ar6,ar7);
  puVar1 = (&FUN_8c25ece6);
  if (-1 < iVar2) {
    ar5_00 = &uStack_1c;
    a4 = ar5;
    iVar2 = FUN_8c2637e8(ar5,ar5_00,ar6,ar7);
    if (-1 < iVar2) {
      iVar2 = FUN_8c263816(ar5,&uStack_20,ar6,ar7);
      if (iVar2 < 0) {
        (*(code *)puVar1)(ar5,a5,ar6,ar7);
        return iVar2;
      }
      *(undefined4 *)(ar4 + 0xc) = auStack_18[0];
      *(undefined4 *)(ar4 + 0x10) = uStack_1c;
      *(undefined4 *)(ar4 + 0x14) = uStack_20;
      return 0;
    }
  }
  (*(code *)puVar1)(a4,ar5_00,ar6,ar7);
  return iVar2;
}

__asm__(".globl _s_E9040901_can_t_find_s_ADXF_O_261f82\n.set _s_E9040901_can_t_find_s_ADXF_O_261f82, _s_E9040901_can_t_find_s_ADXF_O_261f82_def\n");
//@unit 8c26201c
#include "../decls.h"
int FUN_8c26201c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  undefined4 ain0;
  
  ar5_00 = 0;
  ar4_00 = 1;
  ar6_00 = ar4;
  ain0 = ar5;
  FUN_8c261a4c(1,0,ar4,ar5);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar5,ain0);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar5);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = ar4, ar4_00 = s_E9040901_can_t_find_s_ADXF_O_261f82(a4,ar4,ar6_00,ar5), ar4_00 < 0))
  {
    FUN_8c262168(a4,ar5_00,ar6_00,ar5);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar5,ain0);
  FUN_8c261a4c(1,1,ar4,ain0);
  return iVar1;
}

__asm__(".globl _FUN_8c26201c\n.set _FUN_8c26201c, _FUN_8c26201c_def\n");
//@unit 8c262078
#include "../decls.h"
undefined4 FUN_8c262078_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  iVar1 = FUN_8c26270c(ar5,ar6,&uStack_14,&iStack_18);
  if (iVar1 < 0) {
    return 0xfffffffd;
  }
  *(undefined4 *)(ar4 + 0xc) = uStack_14;
  *(int *)(ar4 + 0x10) = iStack_18;
  *(int *)(ar4 + 0x14) = iStack_18 << 0xb;
  return 0;
}

__asm__(".globl _FUN_8c262078\n.set _FUN_8c262078, _FUN_8c262078_def\n");
//@unit 8c2620c8
#include "../decls.h"
int FUN_8c2620c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int iVar1;
  undefined4 in_PR;
  
  ar5_00 = 0;
  ar4_00 = 2;
  ar6_00 = unaff_r12;
  ar7_00 = unaff_r13;
  FUN_8c261a4c(2,0,unaff_r12,unaff_r13);
  FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  a4 = FUN_8c261f48(ar4_00,ar5_00,ar6_00,ar7_00);
  iVar1 = a4;
  if ((a4 != 0) &&
     (ar5_00 = unaff_r12, ar6_00 = unaff_r13, ar4_00 = FUN_8c262078(a4,unaff_r12,unaff_r13,ar7_00),
     ar4_00 < 0)) {
    FUN_8c262168(a4,ar5_00,ar6_00,ar7_00);
    iVar1 = 0;
    ar4_00 = a4;
  }
  FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  FUN_8c261a4c(2,1,unaff_r12,unaff_r13);
  return iVar1;
}

__asm__(".globl _FUN_8c2620c8\n.set _FUN_8c2620c8, _FUN_8c2620c8_def\n");
//@unit 8c26211c
#include "../decls.h"
int FUN_8c26211c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 in_stack_fffffff4;
  
  if (*(int *)(ar4 + 4) != 0) {
    ain0 = FUN_8c263446(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7,in_stack_fffffff4);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  if ((*(int *)(ar4 + 8) != 0) && (ain0 = (int)*(char *)(ar4 + 2), ain0 == 0)) {
    if (_DAT_8c4b4220 == 1) {
      ar5 = *(undefined4 *)(ar4 + 0x2c);
      FUN_8c261786(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,in_stack_fffffff4);
    }
    ain0 = (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26211c\n.set _FUN_8c26211c, _FUN_8c26211c_def\n");
//@unit 8c262168
#include "../decls.h"
undefined4 FUN_8c262168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar6_00 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,0xffffffff,0xffffffff);
  if (ar4 != 0) {
    FUN_8c260ca0();
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,ar6_00,ar7_00);
    }
    memset(ar4,0,0x30);
    FUN_8c260cc8();
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff,0xffffffff);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262168\n.set _FUN_8c262168, _FUN_8c262168_def\n");
//@unit 8c26216c
#include "../decls.h"
undefined4 FUN_8c26216c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  uVar2 = 3;
  iVar3 = ar4;
  uVar1 = FUN_8c261a4c(3,0,ar4,in_r3);
  if (ar4 != 0) {
    FUN_8c260ca0(uVar2,ar5_00,iVar3,in_r3,in_PR);
    if (*(char *)(ar4 + 1) == '\x02') {
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,ar5_00,iVar3,in_r3);
    }
    uVar1 = 0;
    uVar2 = 0x30;
    iVar3 = ar4;
    memset(ar4,0,0x30,in_r3);
    FUN_8c260cc8(iVar3,uVar1,uVar2,in_r3,in_PR);
    uVar1 = FUN_8c261a4c(3,1,ar4,0xffffffff);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26216c\n.set _FUN_8c26216c, _FUN_8c26216c_def\n");
//@unit 8c2621e2
#include "../decls.h"
int FUN_8c2621e2_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  char *a4;
  char *pcVar3;
  
  pcVar2 = ar5 + unaff_r12;
  a4 = ar5;
  pcVar3 = ar5;
  do {
    iVar1 = (int)*pcVar3;
    if (iVar1 == 1) {
      iVar1 = FUN_8c262168(a4,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + 0x30;
    a4 = a4 + 0x30;
  } while (pcVar3 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2621e2\n.set _FUN_8c2621e2, _FUN_8c2621e2_def\n");
//@unit 8c262208
#include "../decls.h"
undefined4 s_E9040811_adxf_is_NULL_adxf_r_26220e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  if ((ar4 == 0) || (ar5 < 0)) {
    FUN_8c25ece6(ar4,ar5,ar6,ar7);
  }
  else {
    if (ar6 != 0) {
      if (*(char *)(ar4 + 1) == '\x02') {
        return 0;
      }
      if (*(int *)(ar4 + 4) != 0) {
        FUN_8c25ece6(ar4,ar5,ar6,ar7);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x18);
      iVar2 = *(int *)(ar4 + 0x10) - *(int *)(ar4 + 0x18);
      if (ar5 < iVar2) {
        iVar2 = ar5;
      }
      *(int *)(ar4 + 0x20) = iVar2;
      *(undefined4 *)(ar4 + 0x24) = 0;
      ar5_00 = *(undefined4 *)(ar4 + 0x20);
      iVar2 = ar6;
      iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
        ar4_00 = 0;
      }
      else {
        *(int *)(ar4 + 4) = iVar1;
        *(undefined1 *)(ar4 + 1) = 2;
        ar4_00 = *(undefined4 *)(ar4 + 4);
        FUN_8c26346e(ar4_00,ar5_00,ar6,ar7);
        uVar3 = *(undefined4 *)(ar4 + 0x20);
      }
      FUN_8c260cc8(ar4_00,ar5_00,ar6,ar7,iVar2);
      return uVar3;
    }
    FUN_8c25ece6(ar4,ar5,0,ar7);
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040811_adxf_is_NULL_adxf_r_26220e\n.set _s_E9040811_adxf_is_NULL_adxf_r_26220e, _s_E9040811_adxf_is_NULL_adxf_r_26220e_def\n");
//@unit 8c2622e4
#include "../decls.h"
undefined4 FUN_8c2622e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int ar4_00;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
  ar4_00 = ar4;
  ain0 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 2) = 1;
  FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return ain0;
}

__asm__(".globl _FUN_8c2622e4\n.set _FUN_8c2622e4, _FUN_8c2622e4_def\n");
//@unit 8c262312
#include "../decls.h"
undefined4 s_E9040816_adxf_is_NULL_ADXF_R_26231a_def(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint ar4_00;
  int *ar4_01;
  undefined4 a5;
  int iVar3;
  int iVar4;
  int *a6;
  int ar7_00;
  
  a5 = 0;
  uVar2 = 4;
  piVar1 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(4,0,ar4,ar5);
  if ((ar4 == (int *)0x0) || (ar5 < 0)) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else if (ar6 == 0) {
    FUN_8c25ece6(uVar2,a5,piVar1,ar7_00);
  }
  else {
    if ((ar6 & 0x1f) == 0) {
      if (*(char *)((int)ar4 + 1) == '\x02') {
        return 0;
      }
      if (ar4[2] != 0) {
        FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
        return 0xffffffff;
      }
      iVar3 = ar5 << 0xb;
      uVar2 = 0;
      ar4_00 = ar6;
      iVar4 = iVar3;
      piVar1 = (int *)FUN_8c26b564(ar6,iVar3,0,ar7_00);
      if (piVar1 == (int *)0x0) {
        return 0xfffffffe;
      }
      ar4[10] = ar6;
      ar4[0xb] = iVar4;
      if (_DAT_8c4b4220 == 1) {
        iVar3 = ar4[0xb];
        ar4_00 = ar4[10];
        FUN_8c261786(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      }
      FUN_8c260ca0(ar4_00,iVar3,uVar2,ar7_00,iVar4);
      ar4_01 = ar4;
      iVar4 = ar5;
      a6 = piVar1;
      iVar3 = s_E9040811_adxf_is_NULL_adxf_r_26220e(ar4,ar5,piVar1,ar7_00);
      if (iVar3 < 1) {
        (**(code **)(*piVar1 + 0xc))(piVar1,iVar4,a6,ar7_00);
        ar4_01 = piVar1;
      }
      else {
        ar4[2] = (int)piVar1;
      }
      *(undefined1 *)((int)ar4 + 2) = 0;
      FUN_8c260cc8(ar4_01,iVar4,a6,ar7_00,iVar3);
      FUN_8c261a4c(4,1,ar4,ar5);
      return iVar3;
    }
    FUN_8c25ece6(ar6,a5,piVar1,ar7_00);
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040816_adxf_is_NULL_ADXF_R_26231a\n.set _s_E9040816_adxf_is_NULL_ADXF_R_26231a, _s_E9040816_adxf_is_NULL_ADXF_R_26231a_def\n");
//@unit 8c262406
#include "../decls.h"
undefined4
s_E9040822_adxf_is_NULL_ADXF_S_262408_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  
  ar5_01 = &stack0xfffffff4;
  ar5_00 = 0;
  ar7_00 = 0xffffffff;
  ar4_00 = 5;
  ar6_00 = ar4;
  FUN_8c261a4c(5,0,ar4,0xffffffff);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040822:\'adxf\' is NULL.(ADXF_Stop)\n",
                 in_stack_fffffff4);
    return 0xfffffffd;
  }
  if (*(char *)(ar4 + 1) != '\x01') {
    if (*(char *)(ar4 + 1) == '\x03') {
      *(undefined1 *)(ar4 + 1) = 1;
    }
    else {
      if (*(int *)(ar4 + 4) == 0) {
        FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7_00,"E9040823:\'adxf->stm\' is NULL.(ADXF_Stop)\n",
                     in_stack_fffffff4);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4_00,ar5_00,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c263498(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7_00);
      FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6_00,ar7_00);
      *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
      ar4_01 = ar4;
      FUN_8c26211c(ar4,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      *(undefined1 *)(ar4 + 1) = 1;
      FUN_8c260cc8(ar4_01,ar5_01,ar6_00,ar7_00,in_stack_fffffff4);
      FUN_8c261a4c(5,1,ar4,0xffffffff);
    }
  }
  return *(undefined4 *)(ar4 + 0x18);
}

__asm__(".globl _s_E9040822_adxf_is_NULL_ADXF_S_262408\n.set _s_E9040822_adxf_is_NULL_ADXF_S_262408, _s_E9040822_adxf_is_NULL_ADXF_S_262408_def\n");
//@unit 8c2624a0
#include "../decls.h"
int FUN_8c2624a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  undefined4 in_stack_fffffff4;
  
  ar5_00 = &stack0xfffffff4;
  iVar1 = (int)*(char *)(ar4 + 1);
  if (iVar1 == 2) {
    uVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *(char *)(ar4 + 1) = (char)uVar2;
    FUN_8c263768(*(undefined4 *)(ar4 + 4),&stack0xfffffff4,ar6,ar7);
    *(undefined4 *)(ar4 + 0x24) = in_stack_fffffff4;
    iVar1 = (int)*(char *)(ar4 + 1);
    if ((iVar1 == 3) || (iVar1 == 4)) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x24);
      iVar1 = FUN_8c26211c(ar4,ar5_00,ar6,ar7,in_stack_fffffff4);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2624a0\n.set _FUN_8c2624a0, _FUN_8c2624a0_def\n");
//@unit 8c262524
#include "../decls.h"
undefined4 FUN_8c262524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  char *ar4_00;
  char *a4;
  undefined4 in_PR;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
  a4 = &DAT_8c4b3b20;
  do {
    ain0 = (int)*a4;
    ar4_00 = a4;
    if (ain0 == 1) {
      ain0 = FUN_8c2624a0(a4,ar5,ar6,ar7);
    }
    a4 = a4 + 0x30;
  } while (a4 < (char *)0x8c4b3e20);
  uVar1 = FUN_8c260cc8(ar4_00,ar5,ar6,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c262524\n.set _FUN_8c262524, _FUN_8c262524_def\n");
//@unit 8c262554
#include "../decls.h"
undefined4 FUN_8c262554_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  ar6_00 = ar4;
  ar7_00 = ar5;
  FUN_8c261a4c(6,0,ar4,ar5,ar6);
  if (ar4 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(ar4 + 1) == '\x02') {
      ar4_00 = ar4;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(ar4,uVar1,ar6_00,ar7_00);
    }
    if (ar6 == 0) {
      *(int *)(ar4 + 0x18) = ar5;
    }
    else if (ar6 == 1) {
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + ar5;
    }
    else {
      if (ar6 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,ar6_00,ar7_00,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x10) + ar5;
    }
    if (*(int *)(ar4 + 0x18) < 0) {
      *(undefined4 *)(ar4 + 0x18) = 0;
    }
    else if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x18)) {
      *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x10);
    }
    FUN_8c261a4c(6,1,ar4,ar5,ar6);
    uVar1 = *(undefined4 *)(ar4 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c262554\n.set _FUN_8c262554, _FUN_8c262554_def\n");
//@unit 8c262560
#include "../decls.h"
undefined4
s_E9040825_adxf_is_NULL_ADXF_S_262560_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int a6;
  int a7;
  int unaff_r12;
  int unaff_r13;
  int unaff_r14;
  undefined4 in_PR;
  
  uVar1 = 0;
  ar4_00 = 6;
  a6 = unaff_r14;
  a7 = unaff_r12;
  FUN_8c261a4c(6,0,unaff_r14,unaff_r12);
  if (unaff_r14 == 0) {
    FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040825__adxf__is_NULL__ADXF_Se_8c2724ec,in_PR);
LAB_8c2625b4:
    uVar1 = 0xfffffffd;
  }
  else {
    if (*(char *)(unaff_r14 + 1) == '\x02') {
      ar4_00 = unaff_r14;
      s_E9040822_adxf_is_NULL_ADXF_S_262408(unaff_r14,uVar1,a6,a7);
    }
    if (unaff_r13 == 0) {
      *(int *)(unaff_r14 + 0x18) = unaff_r12;
    }
    else if (unaff_r13 == 1) {
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x18) + unaff_r12;
    }
    else {
      if (unaff_r13 != 2) {
        FUN_8c25ece6(ar4_00,uVar1,a6,a7,s_E9040826__type__is_illigal__ADXF_8c272514,in_PR);
        goto LAB_8c2625b4;
      }
      *(int *)(unaff_r14 + 0x18) = *(int *)(unaff_r14 + 0x10) + unaff_r12;
    }
    if (*(int *)(unaff_r14 + 0x18) < 0) {
      *(undefined4 *)(unaff_r14 + 0x18) = 0;
    }
    else if (*(int *)(unaff_r14 + 0x10) < *(int *)(unaff_r14 + 0x18)) {
      *(undefined4 *)(unaff_r14 + 0x18) = *(undefined4 *)(unaff_r14 + 0x10);
    }
    FUN_8c261a4c(6,1,unaff_r14,unaff_r12);
    uVar1 = *(undefined4 *)(unaff_r14 + 0x18);
  }
  return uVar1;
}

__asm__(".globl _s_E9040825_adxf_is_NULL_ADXF_S_262560\n.set _s_E9040825_adxf_is_NULL_ADXF_S_262560, _s_E9040825_adxf_is_NULL_ADXF_S_262560_def\n");
//@unit 8c2625ec
#include "../decls.h"
undefined4
s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040827__adxf__is_NULL__ADXF_Te_8c27253c,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x18);
}

__asm__(".globl _s_E9040827_adxf_is_NULL_ADXF_T_2625ec\n.set _s_E9040827_adxf_is_NULL_ADXF_T_2625ec, _s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def\n");
//@unit 8c262628
#include "../decls.h"
undefined4
s_E9040828_adxf_is_NULL_ADXF_G_262628_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040828__adxf__is_NULL__ADXF_Ge_8c272564,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x10);
}

__asm__(".globl _s_E9040828_adxf_is_NULL_ADXF_G_262628\n.set _s_E9040828_adxf_is_NULL_ADXF_G_262628, _s_E9040828_adxf_is_NULL_ADXF_G_262628_def\n");
//@unit 8c262646
#include "../decls.h"
undefined4
s_E9040829_adxf_is_NULL_ADXF_G_262646_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040829__adxf__is_NULL__ADXF_Ge_8c272590,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x14);
}

__asm__(".globl _s_E9040829_adxf_is_NULL_ADXF_G_262646\n.set _s_E9040829_adxf_is_NULL_ADXF_G_262646, _s_E9040829_adxf_is_NULL_ADXF_G_262646_def\n");
//@unit 8c262664
#include "../decls.h"
undefined4
s_E9040830_adxf_is_NULL_ADXF_G_262664_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040830__adxf__is_NULL__ADXF_Ge_8c2725c0,ar5);
    *ar5 = 0;
    return 0xfffffffd;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x1c);
  return *(undefined4 *)(ar4 + 0x20);
}

__asm__(".globl _s_E9040830_adxf_is_NULL_ADXF_G_262664\n.set _s_E9040830_adxf_is_NULL_ADXF_G_262664, _s_E9040830_adxf_is_NULL_ADXF_G_262664_def\n");
//@unit 8c262696
#include "../decls.h"
undefined4
s_E9040831_adxf_is_NULL_ADXF_G_262696_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040831__adxf__is_NULL__ADXF_Ge_8c2725f0,in_PR);
    return 0xfffffffd;
  }
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _s_E9040831_adxf_is_NULL_ADXF_G_262696\n.set _s_E9040831_adxf_is_NULL_ADXF_G_262696, _s_E9040831_adxf_is_NULL_ADXF_G_262696_def\n");
//@unit 8c2626b4
#include "../decls.h"
undefined4
s_E9040832_adxf_is_NULL_ADXF_G_2626b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    FUN_8c25ece6(0,ar5,ar6,ar7,s_E9040832__adxf__is_NULL__ADXF_Ge_8c272620,in_PR);
    return 0xfffffffd;
  }
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _s_E9040832_adxf_is_NULL_ADXF_G_2626b4\n.set _s_E9040832_adxf_is_NULL_ADXF_G_2626b4, _s_E9040832_adxf_is_NULL_ADXF_G_2626b4_def\n");
//@unit 8c2626d2
#include "../decls.h"
undefined4 s_E9040828_ptid_is_range_outsi_2626d2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char *s0;
  undefined4 in_PR;
  
  if ((ar4 < 0) || (0xff < ar4)) {
    s0 = s_E9040828__ptid__is_range_outside_8c272648;
  }
  else {
    ar4 = *(int *)(ar4 * 4 + -0x73b4c1e0);
    if ((-1 < ar5) && (ar5 < *(int *)(ar4 + 0xc))) {
      return 0;
    }
    s0 = s_E9040828__flid__is_range_outside_8c272680;
  }
  FUN_8c25ece6(ar4,ar5,ar6,ar7,s0,in_PR);
  return 0xfffffffd;
}

__asm__(".globl _s_E9040828_ptid_is_range_outsi_2626d2\n.set _s_E9040828_ptid_is_range_outsi_2626d2, _s_E9040828_ptid_is_range_outsi_2626d2_def\n");
//@unit 8c26270c
#include "../decls.h"
int FUN_8c26270c_def(int ar4,uint ar5,int *ar6,uint *ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = s_E9040828_ptid_is_range_outsi_2626d2(ar4,ar5,ar6,ar7);
  if (iVar2 < 0) {
    *ar6 = -1;
    *ar7 = 0xffffffff;
  }
  else {
    for (piVar4 = *(int **)(0x8c4b3e20 + ar4 * 4); iVar5 = 0, *piVar4 != 0;
        piVar4 = (int *)*piVar4) {
      for (; iVar5 < (int)(uint)*(ushort *)(piVar4 + 4); iVar5 = iVar5 + 1) {
        puVar3 = (ushort *)(piVar4 + iVar5 * 2 + 5);
        if (*puVar3 == ar5) {
          *ar6 = piVar4[2] + *(int *)(puVar3 + 2);
          *ar7 = (uint)puVar3[1];
          return iVar2;
        }
      }
    }
    iVar5 = 0;
    uVar6 = (uint)*(ushort *)(piVar4 + 5);
    puVar3 = (ushort *)((int)piVar4 + 0x16);
    if (0 < (int)ar5) {
      do {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 + 1;
        uVar6 = uVar6 + uVar1;
      } while (iVar5 < (int)ar5);
    }
    *ar6 = uVar6 + piVar4[2];
    *ar7 = (uint)((ushort *)((int)piVar4 + 0x16))[ar5];
  }
  return iVar2;
}

__asm__(".globl _FUN_8c26270c\n.set _FUN_8c26270c, _FUN_8c26270c_def\n");
//@unit 8c2627f6
#include "../decls.h"
undefined4 FUN_8c2627f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,&DAT_8c2726e8,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c2627f6\n.set _FUN_8c2627f6, _FUN_8c2627f6_def\n");
//@unit 8c262810
#include "../decls.h"
undefined4 FUN_8c262810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int ain0_00;
  undefined1 *ar4_00;
  code *ar5_00;
  
  if (DAT_8c278478 == 0) {
    uVar1 = FUN_8c260c98(ar4,ar5,ar6,ar7,ain0);
    uVar1 = FUN_8c260ca0(ar4,ar5,ar6,ar7,uVar1);
    uVar1 = FUN_8c26b992(ar4,ar5,ar6,ar7,uVar1);
    uVar1 = FUN_8c26b526(ar4,ar5,ar6,ar7,uVar1);
    FUN_8c26b212(ar4,ar5,ar6,ar7,uVar1);
    FUN_8c25eca8(ar4,ar5,ar6,ar7);
    FUN_8c263244(ar4,ar5,ar6,ar7);
    FUN_8c262ac4(ar4,ar5,ar6,ar7);
    FUN_8c2619b4(ar4,ar5,ar6,ar7);
    thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7);
    thunk_FUN_8c26a130(FUN_8c2627f6,0,ar6,ar7);
    ar4_00 = &DAT_8c277fd0;
    uVar1 = 0x4a0;
    ar5_00 = (code *)0x0;
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    ain0_00 = DAT_8c278474;
    if (DAT_8c278474 == 1) {
      ar4_00 = (undefined1 *)0x900;
      ar7 = 0;
      ar5_00 = FUN_8c264010;
      uVar1 = 0x70;
      ain0_00 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
      DAT_8c278470 = ain0_00;
    }
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,uVar1,ar7,ain0_00);
  }
  DAT_8c278478 = DAT_8c278478 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c262810\n.set _FUN_8c262810, _FUN_8c262810_def\n");
//@unit 8c262814
#include "../decls.h"
undefined4 FUN_8c262814_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 ar4_00;
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    FUN_8c260c98(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b992(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b526(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c26b212(ar4,ar5,ar6,ar7,in_PR);
    FUN_8c25eca8(ar4,ar5,ar6,ar7);
    FUN_8c263244(ar4,ar5,ar6,ar7);
    FUN_8c262ac4(ar4,ar5,ar6,ar7);
    FUN_8c2619b4(ar4,ar5,ar6,ar7);
    thunk_FUN_8c2689c8(ar4,ar5,ar6,ar7);
    thunk_FUN_8c26a130(FUN_8c2627f6,0,ar6,ar7);
    memset(&DAT_8c277fd0,0,0x4a0,ar7);
    ar4_00 = 0x900;
    ar7_00 = 0;
    ar5_00 = FUN_8c264010;
    ar6_00 = 0x70;
    DAT_8c278470 = FUN_8c1fa244(0x900,FUN_8c264010,0x70,0);
    ain0 = FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7_00,in_PR);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return ain0;
}

__asm__(".globl _FUN_8c262814\n.set _FUN_8c262814, _FUN_8c262814_def\n");
//@unit 8c2628fa
#include "../decls.h"
undefined4 FUN_8c2628fa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar2 = *ar4;
  *ar4 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    iVar2 = DAT_8c278470;
    if (DAT_8c278470 != 0) {
      FUN_8c1fa54c(DAT_8c278470,ar5,ar6,ar7);
      DAT_8c278470 = 0;
    }
    FUN_8c260cc8(iVar2,ar5,ar6,ar7,in_PR);
    thunk_FUN_8c268a24(iVar2,ar5,ar6,ar7);
    FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c2619ee(iVar2,ar5,ar6,ar7);
    FUN_8c262ad8(iVar2,ar5,ar6,ar7);
    noop_26325a(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c25ecc2(iVar2,ar5,ar6,ar7);
    FUN_8c26b234(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c26b548(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c26b9b4(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c260cc8(iVar2,ar5,ar6,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2628fa\n.set _FUN_8c2628fa, _FUN_8c2628fa_def\n");
//@unit 8c2629a0
#include "../decls.h"
undefined4 thunk_FUN_8c2689c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c2689c8)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c2689c8\n.set _thunk_FUN_8c2689c8, _thunk_FUN_8c2689c8_def\n");
//@unit 8c2629a6
#include "../decls.h"
undefined4 thunk_FUN_8c268a24_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c268a24)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c268a24\n.set _thunk_FUN_8c268a24, _thunk_FUN_8c268a24_def\n");
//@unit 8c2629b2
#include "../decls.h"
undefined4 FUN_8c2629b2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  uVar1 = s_E1205_Illigal_parameter_MWRN_268c80(ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c2629b2\n.set _FUN_8c2629b2, _FUN_8c2629b2_def\n");
//@unit 8c2629e8
#include "../decls.h"
undefined4 ret_const_7fffffff_2629e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x7fffffff;
}

__asm__(".globl _ret_const_7fffffff_2629e8\n.set _ret_const_7fffffff_2629e8, _ret_const_7fffffff_2629e8_def\n");
//@unit 8c2629f4
#include "../decls.h"
undefined4 thunk_FUN_8c2695e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2695e4();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c2695e4\n.set _thunk_FUN_8c2695e4, _thunk_FUN_8c2695e4_def\n");
//@unit 8c262a44
#include "../decls.h"
undefined4 noop_262a44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_262a44\n.set _noop_262a44, _noop_262a44_def\n");
//@unit 8c262a4c
#include "../decls.h"
undefined4 FUN_8c262a4c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  s_E1205_Illigal_parameter_MWRN_269fcc(ar4,ar5,auStack_8,ar7);
  return auStack_8[0];
}

__asm__(".globl _FUN_8c262a4c\n.set _FUN_8c262a4c, _FUN_8c262a4c_def\n");
//@unit 8c262ac4
#include "../decls.h"
undefined4 FUN_8c262ac4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25fb8c(ar4,ar5,ar6,ar7);
  uVar1 = memset(0x8c4b9348,0,(int)0x4e0);
  return uVar1;
}

__asm__(".globl _FUN_8c262ac4\n.set _FUN_8c262ac4, _FUN_8c262ac4_def\n");
//@unit 8c262ad8
#include "../decls.h"
undefined4 FUN_8c262ad8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memset(0x8c4b9348,0,(int)0x4e0);
  return uVar1;
}

__asm__(".globl _FUN_8c262ad8\n.set _FUN_8c262ad8, _FUN_8c262ad8_def\n");
//@unit 8c262ae2
#include "../decls.h"
undefined4 FUN_8c262ae2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0x7fffffff;
  *(undefined4 *)(0x98 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0x3c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 3) = 0;
  return 0;
}

__asm__(".globl _FUN_8c262ae2\n.set _FUN_8c262ae2, _FUN_8c262ae2_def\n");
//@unit 8c262b04
#include "../decls.h"
undefined4 FUN_8c262b04_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined *puVar1;
  undefined4 ar5_01;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int a5;
  undefined4 uVar6;
  undefined1 *a6;
  undefined4 ar4_00;
  undefined1 *ar6_00;
  
  iVar5 = (int)0x9c;
  uVar6 = 8;
  iVar4 = 0;
  ar4_00 = *ar6;
  do {
    if (*(char *)(iVar4 * iVar5 + 0x8c4b9348) == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    ar6_00 = (undefined1 *)(iVar4 * iVar5 + 0x8c4b9348);
    iVar4 = 0x8c4b9348;
    ar5_01 = get_field_1c_26b94e(ar4_00,iVar5,8,0x8c4b9348);
    uVar2 = get_field_20_26b952(ar4_00,iVar5,uVar6,iVar4);
    uVar3 = get_field_24_26b956(ar4_00,iVar5,uVar6,iVar4);
    iVar4 = (uVar2 >> 1) + (uVar3 >> 1);
    uVar6 = FUN_8c25fbd0(ar5,ar5_01,uVar2 >> 1,iVar4);
    puVar1 = (&FUN_8c25fea8);
    ar5_00 = (&FUN_8c262d6c);
    *(undefined4 *)(ar6_00 + 4) = uVar6;
    a6 = ar6_00;
    (*(code *)puVar1)(uVar6,ar5_00,ar6_00,iVar4);
    if (*(int *)(ar6_00 + 4) != 0) {
      a5 = 0;
      *(undefined4 *)(ar6_00 + 8) = ar4;
      ar6_00[2] = (char)ar5;
      iVar5 = 0;
      if (0 < ar5) {
        do {
          a5 = a5 + 1;
          *(undefined4 *)(ar6_00 + iVar5 + 0xc) = *(undefined4 *)(iVar5 + (int)ar6);
          iVar5 = iVar5 + 4;
        } while (a5 < ar5);
      }
      ar6_00[1] = 0;
      FUN_8c262ae2(ar6_00,a5,a6,iVar4);
      *(undefined4 *)(ar6_00 + 0x48) = 0;
      *(undefined4 *)(ar6_00 + 0x4c) = 0;
      *(undefined4 *)(ar6_00 + 0x50) = 0;
      *(undefined4 *)(ar6_00 + 0x54) = 0;
      *ar6_00 = 1;
      return ar6_00;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c262b04\n.set _FUN_8c262b04, _FUN_8c262b04_def\n");
//@unit 8c262c04
#include "../decls.h"
undefined4 FUN_8c262c04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    if (*(int *)(ar4 + 4) != 0) {
      FUN_8c25fc5c(*(undefined4 *)(ar4 + 4));
    }
    FUN_8c260ca0();
    memset(ar4,0,(int)0x9c);
    uVar1 = FUN_8c260cc8();
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c262c04\n.set _FUN_8c262c04, _FUN_8c262c04_def\n");
//@unit 8c262c08
#include "../decls.h"
undefined4 FUN_8c262c08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    if (*(int *)(unaff_r14 + 4) != 0) {
      ar4 = *(undefined4 *)(unaff_r14 + 4);
      FUN_8c25fc5c(ar4,ar5,ar6,ar7,in_PR);
    }
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    ar5_00 = 0;
    ar6_00 = 0x9c;
    uVar1 = memset(unaff_r14,0,0x9c,ar7);
    uVar1 = FUN_8c260cc8(unaff_r14,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c262c08\n.set _FUN_8c262c08, _FUN_8c262c08_def\n");
//@unit 8c262c38
#include "../decls.h"
int FUN_8c262c38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c262c38\n.set _FUN_8c262c38, _FUN_8c262c38_def\n");
//@unit 8c262c3c
#include "../decls.h"
undefined4 FUN_8c262c3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c262c3c\n.set _FUN_8c262c3c, _FUN_8c262c3c_def\n");
//@unit 8c262c4c
#include "../decls.h"
undefined4 FUN_8c262c4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c262c4c\n.set _FUN_8c262c4c, _FUN_8c262c4c_def\n");
//@unit 8c262c50
#include "../decls.h"
undefined4 FUN_8c262c50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c262ae2(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}

__asm__(".globl _FUN_8c262c50\n.set _FUN_8c262c50, _FUN_8c262c50_def\n");
//@unit 8c262c66
#include "../decls.h"
undefined4 FUN_8c262c66_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c25ff9c(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}

__asm__(".globl _FUN_8c262c66\n.set _FUN_8c262c66, _FUN_8c262c66_def\n");
//@unit 8c262c80
#include "../decls.h"
undefined4 FUN_8c262c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 *a7;
  undefined1 *ar7_00;
  undefined4 uVar4;
  int *a4;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  int iStack_18;
  
  a4 = *(int **)(ar4 + 8);
  uVar4 = *(undefined4 *)(ar4 + 4);
  a7 = &uStack_1c;
  (**(code **)(*a4 + 0x18))(a4,1,(int)0x1000,a7);
  if (((iStack_18 < 0x10) ||
      (ar5_01 = uStack_1c, iVar3 = iStack_18,
      ar5_00 = FUN_8c25fdb2(uVar4,uStack_1c,iStack_18,a7), puVar1 = (&FUN_8c25fec0),
      ar5_00 == 0)) || (iStack_18 < ar5_00)) {
    uVar4 = (**(code **)(*a4 + 0x1c))(a4,1,&uStack_1c,a7);
  }
  else {
    *(int *)(0x98 + ar4) = ar5_00;
    iVar2 = (*(code *)puVar1)(uVar4,ar5_01,iVar3,a7);
    if (iVar2 == 4) {
      *(undefined1 *)(ar4 + 3) = 1;
    }
    iVar3 = FUN_8c25fec0(uVar4,ar5_01,iVar3,a7);
    if (iVar3 == 2) {
      if (0x3f < iStack_18) {
        iStack_18 = 0x40;
      }
      memmove(ar4 + 0x58,uStack_1c,iStack_18,a7);
    }
    ar7_00 = auStack_24;
    FUN_8c26be30(&uStack_1c,ar5_00,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x20))(a4,0,&uStack_1c,ar7_00);
    (**(code **)(*a4 + 0x1c))(a4,1,auStack_24,ar7_00);
    uVar4 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c262c80\n.set _FUN_8c262c80, _FUN_8c262c80_def\n");
//@unit 8c262d6c
#include "../decls.h"
undefined4 FUN_8c262d6c_def(int ar4,uint *ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  uint uVar3;
  uint *a5;
  uint uVar4;
  uint *a6;
  int *a7;
  uint *a6_00;
  int *a4;
  int iVar5;
  
  puVar1 = (&FUN_8c25feca);
  a6_00 = (uint *)(int)0x4000;
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar5 = 0; iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 4),a5,a6,a7), iVar5 < iVar2;
      iVar5 = iVar5 + 1) {
    a4 = *(int **)(iVar5 * 4 + ar4 + 0xc);
    a5 = (uint *)0x0;
    a7 = (int *)(iVar5 * 8 + ar4 + 0x1c);
    a6 = a6_00;
    (**(code **)(*a4 + 0x18))(a4,0,a6_00,a7);
  }
  iVar5 = get_field_1c_26b94e(ar4_00,a5,a6,a7);
  *ar5 = (uint)(*(int *)(ar4 + 0x1c) - iVar5) >> 1;
  uVar4 = *(uint *)(ar4 + 0x38);
  uVar3 = *(uint *)(ar4 + 0x20) >> 1;
  if ((int)uVar3 < (int)uVar4) {
    uVar4 = uVar3;
  }
  *ar6 = uVar4;
  if (*(int *)(ar4 + 0x3c) < 0) {
    *ar7 = 0x1fffffff;
  }
  else {
    *ar7 = *(int *)(ar4 + 0x3c) - *(int *)(ar4 + 0x40);
  }
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x3c);
}

__asm__(".globl _FUN_8c262d6c\n.set _FUN_8c262d6c, _FUN_8c262d6c_def\n");
//@unit 8c262e10
#include "../decls.h"
undefined4 FUN_8c262e10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int a7;
  undefined4 uVar3;
  int *a4;
  
  uVar3 = *(undefined4 *)(ar4 + 4);
  a4 = *(int **)(ar4 + 8);
  if ((*(char *)(ar4 + 3) == '\x01') &&
     (iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7), iVar1 == 0)) {
    *(undefined1 *)(ar4 + 1) = 3;
    return 3;
  }
  ar5_00 = 1;
  a7 = ar4 + 0x14;
  ar6_00 = 0x7fffffff;
  (**(code **)(*a4 + 0x18))(a4,1,0x7fffffff,a7);
  iVar1 = FUN_8c25fec0(uVar3,ar5_00,ar6_00,a7);
  if ((((iVar1 == 0) && (1 < *(int *)(ar4 + 0x18))) &&
      (((int)**(short **)(ar4 + 0x14) >> 8 & 0xffU |
       (int)**(short **)(ar4 + 0x14) << 8 & 0xff00 & 0xffff) == 0x8001)) ||
     (iVar1 = FUN_8c263186(ar4,ar5_00,ar6_00,a7), iVar1 <= *(int *)(ar4 + 0x34))) {
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    iVar1 = FUN_8c26316e(ar4,ar5_00,ar6_00,a7);
    uVar2 = (**(code **)(**(int **)(ar4 + 0xc) + 0x24))(*(int **)(ar4 + 0xc),0,ar6_00,a7);
    if (iVar1 <= (int)(uVar2 >> 1)) {
      FUN_8c25ff3c(uVar3,*(undefined4 *)(ar4 + 0x14),*(undefined4 *)(ar4 + 0x18),a7);
      uVar3 = FUN_8c25ff8e(uVar3);
      return uVar3;
    }
  }
                    
                    
  uVar3 = (**(code **)(*a4 + 0x1c))(a4,1,ar4 + 0x14);
  return uVar3;
}

__asm__(".globl _FUN_8c262e10\n.set _FUN_8c262e10, _FUN_8c262e10_def\n");
//@unit 8c262f02
#include "../decls.h"
undefined4 FUN_8c262f02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  int iVar4;
  undefined4 ar5_01;
  undefined1 *a6;
  undefined1 *ar7_00;
  undefined4 uVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined1 *puStack_24;
  
  piVar6 = *(int **)(ar4 + 8);
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar2 = get_field_18_25ff16(uVar5,ar5,ar6,ar7);
  ar5_00 = get_field_a000a4_25fff0(uVar5,ar5,ar6,ar7);
  iVar3 = get_field_a0_25fff6(uVar5,ar5,ar6,ar7);
  puVar1 = (&FUN_8c26be30);
  iVar2 = iVar2 - *(int *)(ar4 + 0x34);
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  ar7_00 = auStack_30;
  FUN_8c26be30(ar4 + 0x14,ar5_00,&uStack_28,ar7_00);
  (**(code **)(*piVar6 + 0x20))(piVar6,0,&uStack_28,ar7_00);
  ar5_01 = 1;
  a6 = auStack_30;
  (**(code **)(*piVar6 + 0x1c))(piVar6,1,a6,ar7_00);
  for (iVar3 = 0; iVar4 = FUN_8c25feca(*(undefined4 *)(ar4 + 4),ar5_01,a6,ar7_00),
      iVar3 < iVar4; iVar3 = iVar3 + 1) {
    ar7_00 = auStack_30;
    (*(code *)puVar1)(iVar3 * 8 + ar4 + 0x1c,iVar2 << 1,&uStack_28,ar7_00);
    if (*(int *)(ar4 + 0x50) != 0) {
      ar7_00 = puStack_24;
      (**(code **)(ar4 + 0x50))(*(undefined4 *)(ar4 + 0x54),iVar3,uStack_28,puStack_24);
    }
    piVar6 = *(int **)(iVar3 * 4 + ar4 + 0xc);
    (**(code **)(*piVar6 + 0x20))(piVar6,1,&uStack_28,ar7_00);
    piVar6 = *(int **)(ar4 + 0xc + iVar3 * 4);
    ar5_01 = 0;
    a6 = auStack_30;
    (**(code **)(*piVar6 + 0x1c))(piVar6,0,a6,ar7_00);
  }
  *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + iVar2;
  *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + ar5_00;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar2;
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + iVar2;
  *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + ar5_00;
  if (((-1 < *(int *)(ar4 + 0x3c)) && (*(int *)(ar4 + 0x3c) <= *(int *)(ar4 + 0x40))) &&
     (*(int *)(ar4 + 0x48) != 0)) {
    (**(code **)(ar4 + 0x48))(*(undefined4 *)(ar4 + 0x4c),ar5_01,a6,ar7_00);
  }
  uVar5 = FUN_8c25ffb6(uVar5,ar5_01,a6,ar7_00);
  return uVar5;
}

__asm__(".globl _FUN_8c262f02\n.set _FUN_8c262f02, _FUN_8c262f02_def\n");
//@unit 8c26304a
#include "../decls.h"
undefined4 FUN_8c26304a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unaff_r13 + 4);
  iVar1 = get_field_4_25ff38(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c262e10(unaff_r13,ar5,ar6,ar7);
  }
  FUN_8c2602f4(uVar2,ar5,ar6,ar7);
  iVar1 = get_field_4_25ff38(uVar2,ar5,ar6,ar7);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(unaff_r13,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26304a\n.set _FUN_8c26304a, _FUN_8c26304a_def\n");
//@unit 8c26307e
#include "../decls.h"
undefined4 FUN_8c26307e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(ar4 + 1) != '\x02') {
    if (*(char *)(ar4 + 1) == 1) {
      uVar2 = FUN_8c262c80(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    return (int)*(char *)(ar4 + 1);
  }
  uVar2 = *(undefined4 *)(ar4 + 4);
  iVar1 = get_field_4_25ff38(uVar2);
  if (iVar1 == 0) {
    FUN_8c262e10(ar4,ar5,ar6,ar7);
  }
  FUN_8c2602f4(uVar2);
  iVar1 = get_field_4_25ff38(uVar2);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26307e\n.set _FUN_8c26307e, _FUN_8c26307e_def\n");
//@unit 8c2630cc
#include "../decls.h"
int FUN_8c2630cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *ar4_00;
  
  iVar3 = (int)0x9c;
  pcVar2 = 0x8c4b9348 + 0x4e0;
  ar4_00 = 0x8c4b9348;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + iVar3;
  } while (ar4_00 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2630cc\n.set _FUN_8c2630cc, _FUN_8c2630cc_def\n");
//@unit 8c2630d6
#include "../decls.h"
int FUN_8c2630d6_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  int iVar3;
  
  iVar3 = (int)0x9c;
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26307e(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + iVar3;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2630d6\n.set _FUN_8c2630d6, _FUN_8c2630d6_def\n");
//@unit 8c2630fe
#include "../decls.h"
undefined4 get_field_2c_2630fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}

__asm__(".globl _get_field_2c_2630fe\n.set _get_field_2c_2630fe, _get_field_2c_2630fe_def\n");
//@unit 8c263102
#include "../decls.h"
undefined4 FUN_8c263102_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x34) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c263102\n.set _FUN_8c263102, _FUN_8c263102_def\n");
//@unit 8c263114
#include "../decls.h"
undefined4 FUN_8c263114_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  *(undefined4 *)(ar4 + 0x4c) = ar6;
  return 0x4c;
}

__asm__(".globl _FUN_8c263114\n.set _FUN_8c263114, _FUN_8c263114_def\n");
//@unit 8c26311e
#include "../decls.h"
undefined4 FUN_8c26311e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c26311e\n.set _FUN_8c26311e, _FUN_8c26311e_def\n");
//@unit 8c263126
#include "../decls.h"
undefined4 FUN_8c263126_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x40) = ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c263126\n.set _FUN_8c263126, _FUN_8c263126_def\n");
//@unit 8c263132
#include "../decls.h"
undefined4 FUN_8c263132_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c263132\n.set _FUN_8c263132, _FUN_8c263132_def\n");
//@unit 8c26313e
#include "../decls.h"
undefined4 FUN_8c26313e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25fec0(*(undefined4 *)(ar4 + 4));
  return uVar1;
}

__asm__(".globl _FUN_8c26313e\n.set _FUN_8c26313e, _FUN_8c26313e_def\n");
//@unit 8c26314a
#include "../decls.h"
undefined4 FUN_8c26314a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x14);
}

__asm__(".globl _FUN_8c26314a\n.set _FUN_8c26314a, _FUN_8c26314a_def\n");
//@unit 8c263156
#include "../decls.h"
undefined4 FUN_8c263156_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25feca(*(undefined4 *)(ar4 + 4));
  return uVar1;
}

__asm__(".globl _FUN_8c263156\n.set _FUN_8c263156, _FUN_8c263156_def\n");
//@unit 8c263162
#include "../decls.h"
undefined4 FUN_8c263162_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25fed2(*(undefined4 *)(ar4 + 4));
  return uVar1;
}

__asm__(".globl _FUN_8c263162\n.set _FUN_8c263162, _FUN_8c263162_def\n");
//@unit 8c26316e
#include "../decls.h"
undefined4 FUN_8c26316e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x10);
}

__asm__(".globl _FUN_8c26316e\n.set _FUN_8c26316e, _FUN_8c26316e_def\n");
//@unit 8c263186
#include "../decls.h"
undefined4 FUN_8c263186_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_18_25ff16(*(undefined4 *)(ar4 + 4));
  return uVar1;
}

__asm__(".globl _FUN_8c263186\n.set _FUN_8c263186, _FUN_8c263186_def\n");
//@unit 8c26319e
#include "../decls.h"
undefined4 FUN_8c26319e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25ff22(*(undefined4 *)(ar4 + 4));
  return uVar1;
}

__asm__(".globl _FUN_8c26319e\n.set _FUN_8c26319e, _FUN_8c26319e_def\n");
//@unit 8c2631b6
#include "../decls.h"
undefined4 FUN_8c2631b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x28);
}

__asm__(".globl _FUN_8c2631b6\n.set _FUN_8c2631b6, _FUN_8c2631b6_def\n");
//@unit 8c2631c2
#include "../decls.h"
undefined4 FUN_8c2631c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x2c);
}

__asm__(".globl _FUN_8c2631c2\n.set _FUN_8c2631c2, _FUN_8c2631c2_def\n");
//@unit 8c2631ce
#include "../decls.h"
undefined4 FUN_8c2631ce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x30);
}

__asm__(".globl _FUN_8c2631ce\n.set _FUN_8c2631ce, _FUN_8c2631ce_def\n");
//@unit 8c2631da
#include "../decls.h"
undefined4 FUN_8c2631da_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(int *)(ar4 + 4) + 0x34);
}

__asm__(".globl _FUN_8c2631da\n.set _FUN_8c2631da, _FUN_8c2631da_def\n");
//@unit 8c2631f8
#include "../decls.h"
int FUN_8c2631f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x58;
}

__asm__(".globl _FUN_8c2631f8\n.set _FUN_8c2631f8, _FUN_8c2631f8_def\n");
//@unit 8c263244
#include "../decls.h"
undefined4 FUN_8c263244_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(0x8c4b9828,0,(int)0xc80,ar7);
  return 1;
}

__asm__(".globl _FUN_8c263244\n.set _FUN_8c263244, _FUN_8c263244_def\n");
//@unit 8c26325a
#include "../decls.h"
undefined4 noop_26325a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_26325a\n.set _noop_26325a, _noop_26325a_def\n");
//@unit 8c26325e
#include "../decls.h"
undefined1 * FUN_8c26325e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x7fffffff;
  iVar3 = 0;
  do {
    if (*(char *)(iVar3 * 100 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * 100 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = 0;
    *(int **)(puVar1 + 4) = ar7;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*ar7 + 0x24))(ar7,0);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26325e\n.set _FUN_8c26325e, _FUN_8c26325e_def\n");
//@unit 8c26326e
#include "../decls.h"
undefined1 * FUN_8c26326e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10;
  int *unaff_r11;
  int unaff_r14;
  
  uVar2 = 0x7fffffff;
  iVar3 = unaff_r10;
  do {
    if (*(char *)(iVar3 * unaff_r14 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < in_r0);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)(iVar3 * unaff_r14 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = (char)unaff_r10;
    *(int **)(puVar1 + 4) = unaff_r11;
    *(undefined4 *)(puVar1 + 8) = ar4;
    *(int *)(puVar1 + 0xc) = unaff_r10;
    *(undefined4 *)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (**(code **)(*unaff_r11 + 0x24))(unaff_r11,0,ar6,1);
    *(undefined4 *)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26326e\n.set _FUN_8c26326e, _FUN_8c26326e_def\n");
//@unit 8c2632e2
#include "../decls.h"
undefined4 FUN_8c2632e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memset(0,100);
  return uVar1;
}

__asm__(".globl _FUN_8c2632e2\n.set _FUN_8c2632e2, _FUN_8c2632e2_def\n");
//@unit 8c2632ea
#include "../decls.h"
undefined4
s_E8101210_can_t_open_s_ADXSTM_2632ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 in_stack_ffffffec;
  
  ar5_01 = &stack0xffffffec;
  ar5_00 = 0;
  ar4_00 = ar4;
  iVar1 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c25ece6(ar4_00,ar5_00,ar6,ar7,"E8101210: can\'t open \'%s\' (ADXSTM_OpenFname)",ar4);
  }
  else {
    ar4_01 = iVar1;
    iVar2 = FUN_8c1f30d4(iVar1,&stack0xffffffec,ar6,ar7);
    if (iVar2 != 0) {
      iVar1 = FUN_8c26325e(iVar1,0,in_stack_ffffffec,ar5);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar5);
      return iVar1;
    }
    FUN_8c25ece6(ar4_01,ar5_01,ar6,ar7,"E8101211: can\'t GetFileSize (ADXSTM_OpenFname)",
                 in_stack_ffffffec);
    FUN_8c1f309c(iVar1,ar5_01,ar6,ar7,in_stack_ffffffec);
  }
  return 0;
}

__asm__(".globl _s_E8101210_can_t_open_s_ADXSTM_2632ee\n.set _s_E8101210_can_t_open_s_ADXSTM_2632ee, _s_E8101210_can_t_open_s_ADXSTM_2632ee_def\n");
//@unit 8c263388
#include "../decls.h"
undefined4
s_E8101212_can_t_open_fad_d_ns_26338a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar6_00;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  a4 = FUN_8c1f39ac(ar4,ar5,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,iVar1,ar6_00,ar7,s_E8101212__can_t_open_fad__d__nsc_8c272f90,ar4);
    return 0;
  }
  iVar1 = FUN_8c26325e(a4,0,ar5 << 0xb,ar6);
  if (iVar1 != 0) {
    FUN_8c0143c0(iVar1 + 0x40,s_OpenRange_8c272fc8,0x20,ar6);
  }
  return iVar1;
}

__asm__(".globl _s_E8101212_can_t_open_fad_d_ns_26338a\n.set _s_E8101212_can_t_open_fad_d_ns_26338a, _s_E8101212_can_t_open_fad_d_ns_26338a_def\n");
//@unit 8c2633e6
#include "../decls.h"
int s_E8101213_can_t_open_s_ADXSTM_2633ea_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a4;
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  ar5_00 = 0;
  iVar1 = ar6;
  uVar2 = ar7;
  a4 = FUN_8c1f397e(ar4,0,ar6,ar7);
  if (a4 == 0) {
    FUN_8c25ece6(0,ar5_00,iVar1,uVar2,s_E8101213__can_t_open___s__ADXSTM_8c272fd4,ar4);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_8c26325e(a4,ar5,ar6 << 0xb,ar7);
    if (iVar1 != 0) {
      uVar2 = 0x20;
      FUN_8c0143c0(iVar1 + 0x40,ar4,0x20,ar7);
      FUN_8c263534(iVar1,0,uVar2,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _s_E8101213_can_t_open_s_ADXSTM_2633ea\n.set _s_E8101213_can_t_open_s_ADXSTM_2633ea, _s_E8101213_can_t_open_s_ADXSTM_2633ea_def\n");
//@unit 8c263446
#include "../decls.h"
undefined4 FUN_8c263446_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 8) != 0) {
      FUN_8c1f309c(*(undefined4 *)(ar4 + 8));
    }
    uVar1 = FUN_8c2632e2(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c263446\n.set _FUN_8c263446, _FUN_8c263446_def\n");
//@unit 8c26344a
#include "../decls.h"
undefined4 FUN_8c26344a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  if (unaff_r14 != 0) {
    FUN_8c263498(ar4,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 8) != 0) {
      FUN_8c1f309c(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7,in_PR);
    }
    uVar1 = FUN_8c2632e2(unaff_r14,ar5,ar6,ar7);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26344a\n.set _FUN_8c26344a, _FUN_8c26344a_def\n");
//@unit 8c26346e
#include "../decls.h"
undefined4 FUN_8c26346e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 1) = 3;
  }
  else {
    *(undefined1 *)(ar4 + 1) = 2;
    *(undefined4 *)(ar4 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(ar4 + 0xc) = uVar1;
  }
  return 1;
}

__asm__(".globl _FUN_8c26346e\n.set _FUN_8c26346e, _FUN_8c26346e_def\n");
//@unit 8c263472
#include "../decls.h"
undefined4 FUN_8c263472_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 0x14) == 0) {
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    *(undefined1 *)(unaff_r14 + 1) = 3;
  }
  else {
    *(undefined1 *)(unaff_r14 + 1) = 2;
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    uVar1 = FUN_8c2634dc(ar4,0,ar6,ar7);
    *(undefined4 *)(unaff_r14 + 0xc) = uVar1;
  }
  return 1;
}

__asm__(".globl _FUN_8c263472\n.set _FUN_8c263472, _FUN_8c263472_def\n");
//@unit 8c263498
#include "../decls.h"
undefined4 FUN_8c263498_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(char *)(ar4 + 2) == '\x01') && (*(int *)(ar4 + 8) != 0)) {
    uVar1 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
    uVar2 = *(undefined4 *)(ar4 + 8);
    FUN_8c1f367a(uVar2,ar5,ar6,ar7);
    uVar2 = sh4_tmu_1f88e6(uVar2,ar5,ar6,ar7);
    uVar1 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
    *(undefined4 *)(&DATA_8c278480) = uVar1;
    *(undefined1 *)(ar4 + 2) = 0;
  }
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}

__asm__(".globl _FUN_8c263498\n.set _FUN_8c263498, _FUN_8c263498_def\n");
//@unit 8c2634dc
#include "../decls.h"
int FUN_8c2634dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 8) != 0) {
    iVar1 = FUN_8c1f316e(*(undefined4 *)(ar4 + 8));
    return iVar1 - *(int *)(ar4 + 0x10);
  }
  return 0;
}

__asm__(".globl _FUN_8c2634dc\n.set _FUN_8c2634dc, _FUN_8c2634dc_def\n");
//@unit 8c2634e0
#include "../decls.h"
int FUN_8c2634e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  if (*(int *)(unaff_r14 + 8) != 0) {
    iVar1 = FUN_8c1f316e(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    return iVar1 - *(int *)(unaff_r14 + 0x10);
  }
  return 0;
}

__asm__(".globl _FUN_8c2634e0\n.set _FUN_8c2634e0, _FUN_8c2634e0_def\n");
//@unit 8c263534
#include "../decls.h"
undefined4 FUN_8c263534_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x14) + (int)0x7ff;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  iVar1 = iVar1 >> 0xb;
  if (ar5 <= iVar1) {
    iVar1 = ar5;
  }
  uVar2 = 0;
  iVar1 = *(int *)(ar4 + 0x10) + iVar1;
  FUN_8c1f3122(*(undefined4 *)(ar4 + 8),iVar1,0,ar7);
  uVar2 = FUN_8c2634dc(ar4,iVar1,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c263534\n.set _FUN_8c263534, _FUN_8c263534_def\n");
//@unit 8c263574
#include "../decls.h"
undefined4 FUN_8c263574_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  *(undefined4 *)(ar4 + 0x3c) = ar6;
  return in_r0;
}

__asm__(".globl _FUN_8c263574\n.set _FUN_8c263574, _FUN_8c263574_def\n");
//@unit 8c26357a
#include "../decls.h"
undefined4 FUN_8c26357a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (ar5 < 0) {
    iVar1 = *(int *)(ar4 + 0x14) + (int)0x7ff;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x7ff;
    }
    *(int *)(ar4 + 0x30) = iVar1 >> 0xb;
  }
  else {
    *(int *)(ar4 + 0x30) = ar5;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26357a\n.set _FUN_8c26357a, _FUN_8c26357a_def\n");
//@unit 8c26359a
#include "../decls.h"
undefined4 FUN_8c26359a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(int *)(&DATA_8c278484) = *(int *)(&DATA_8c278484) + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26359a\n.set _FUN_8c26359a, _FUN_8c26359a_def\n");
//@unit 8c2635a4
#include "../decls.h"
int s_E8101214_GDFS_error_adxstmf__2635aa_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  int iVar6;
  int *a4;
  undefined4 in_stack_ffffffdc;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  uStack_c = 1;
  a4 = *(int **)(ar4 + 4);
  iVar1 = ar4;
  if (*(char *)(ar4 + 2) == '\x01') {
    iVar1 = FUN_8c1f364c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar6 = *(int *)(ar4 + 0x20) * 0x800;
      ar7 = auStack_20;
      FUN_8c26be30(ar4 + 0x24,iVar6,auStack_18,ar7);
      (**(code **)(*a4 + 0x20))(a4,1,auStack_18,ar7);
      uVar5 = 0;
      ar6 = auStack_20;
      (**(code **)(*a4 + 0x1c))(a4,0,ar6,ar7);
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      if ((iVar1 == *(int *)(ar4 + 0x30)) && (*(int *)(ar4 + 0x38) != 0)) {
        (**(code **)(ar4 + 0x38))(*(undefined4 *)(ar4 + 0x3c),uVar5,ar6,ar7);
      }
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar6;
      *(undefined1 *)(ar4 + 2) = 0;
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      iVar6 = *(int *)(ar4 + 0x14) + 0x7ff;
      if (iVar6 < 0) {
        iVar6 = *(int *)(ar4 + 0x14) + 0xffe;
      }
      ar5 = iVar6 >> 0xb;
      if (ar5 <= iVar1) {
        *(undefined1 *)(ar4 + 1) = 3;
      }
    }
    else if (iVar1 == 5) {
      FUN_8c25ece6(5,ar5,ar6,ar7,"E8101214: GDFS error (adxstmf_stat_exec)\n",in_stack_ffffffdc);
      *(undefined1 *)(ar4 + 1) = 4;
      *(undefined1 *)(ar4 + 2) = 0;
    }
  }
  iVar6 = (int)*(char *)(ar4 + 2);
  if (iVar6 == 0) {
    if ((a4 == (int *)0x0) || (*a4 == 0)) {
      iVar6 = FUN_8c26359a(iVar1,ar5,ar6,ar7,in_stack_ffffffdc);
    }
    else {
      iVar6 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
      if (iVar6 < *(int *)(ar4 + 0x1c)) {
        a6 = *(undefined4 *)(ar4 + 0x18);
        uVar5 = 0;
        iVar1 = ar4 + 0x24;
        (**(code **)(*a4 + 0x18))(a4,0,a6,iVar1);
        iVar6 = *(int *)(ar4 + 0x28);
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x7ff;
        }
        iVar3 = *(int *)(ar4 + 0x30);
        iVar2 = FUN_8c2634dc(ar4,uVar5,a6,iVar1);
        iVar4 = iVar3 - iVar2;
        if (iVar6 >> 0xb < iVar3 - iVar2) {
          iVar4 = iVar6 >> 0xb;
        }
        iVar6 = *(int *)(ar4 + 0x2c);
        if (iVar4 < *(int *)(ar4 + 0x2c)) {
          iVar6 = iVar4;
        }
        if (iVar6 != 0) {
          iVar6 = FUN_8c1f332c(*(undefined4 *)(ar4 + 8),iVar6,*(undefined4 *)(ar4 + 0x24),iVar1);
          *(int *)(ar4 + 0x20) = iVar6;
          if (0 < iVar6) {
            *(undefined1 *)(ar4 + 2) = 1;
            return 1;
          }
        }
        iVar6 = (**(code **)(*a4 + 0x1c))(a4,0,ar4 + 0x24,iVar1);
      }
    }
  }
  return iVar6;
}

__asm__(".globl _s_E8101214_GDFS_error_adxstmf__2635aa\n.set _s_E8101214_GDFS_error_adxstmf__2635aa, _s_E8101214_GDFS_error_adxstmf__2635aa_def\n");
//@unit 8c263702
#include "../decls.h"
undefined4 FUN_8c263702_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  int a4;
  
  a4 = ar4;
  FUN_8c260ca0(ar4,ar5,ar6,ar7,ar4);
  ain0 = (int)*(char *)(a4 + 1);
  if (ain0 == 2) {
    ain0 = s_E8101214_GDFS_error_adxstmf__2635aa(a4,ar5,ar6,ar7);
    ar4 = a4;
  }
  uVar1 = FUN_8c260cc8(ar4,ar5,ar6,ar7,ain0);
  return uVar1;
}

__asm__(".globl _FUN_8c263702\n.set _FUN_8c263702, _FUN_8c263702_def\n");
//@unit 8c26371e
#include "../decls.h"
int FUN_8c26371e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  char *ar4_00;
  
  pcVar2 = 0x8c4b9828 + 0xc80;
  ar4_00 = 0x8c4b9828;
  do {
    iVar1 = (int)*ar4_00;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4_00,ar5,ar6,ar7);
    }
    ar4_00 = ar4_00 + 100;
  } while (ar4_00 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c26371e\n.set _FUN_8c26371e, _FUN_8c26371e_def\n");
//@unit 8c263726
#include "../decls.h"
int FUN_8c263726_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  char *pcVar2;
  
  pcVar2 = ar4 + unaff_r13;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c263702(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 100;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c263726\n.set _FUN_8c263726, _FUN_8c263726_def\n");
//@unit 8c263746
#include "../decls.h"
int FUN_8c263746_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c263746\n.set _FUN_8c263746, _FUN_8c263746_def\n");
//@unit 8c263768
#include "../decls.h"
undefined4 FUN_8c263768_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c2634dc(ar4,ar5,ar6,ar7);
  *ar5 = iVar1 - *(int *)(ar4 + 0xc);
  return 1;
}

__asm__(".globl _FUN_8c263768\n.set _FUN_8c263768, _FUN_8c263768_def\n");
//@unit 8c263798
#include "../decls.h"
undefined4 FUN_8c263798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1c) = ar5;
  *(undefined4 *)(ar4 + 0x18) = ar6;
  return 1;
}

__asm__(".globl _FUN_8c263798\n.set _FUN_8c263798, _FUN_8c263798_def\n");
//@unit 8c2637ae
#include "../decls.h"
undefined4 FUN_8c2637ae_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f364c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  *ar5 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2637ae\n.set _FUN_8c2637ae, _FUN_8c2637ae_def\n");
//@unit 8c2637ca
#include "../decls.h"
undefined4 FUN_8c2637ca_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [4];
  
  uVar1 = FUN_8c1f3968(ar4,auStack_10,ar6,ar7);
  *ar5 = auStack_10[0];
  return uVar1;
}

__asm__(".globl _FUN_8c2637ca\n.set _FUN_8c2637ca, _FUN_8c2637ca_def\n");
//@unit 8c2637e8
#include "../decls.h"
undefined4 FUN_8c2637e8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  uVar1 = FUN_8c1f3968(ar4,auStack_10,ar6,ar7);
  iStack_c = iStack_c + 0x7ff;
  if (iStack_c < 0) {
    iStack_c = iStack_c + 0x7ff;
  }
  *ar5 = iStack_c >> 0xb;
  return uVar1;
}

__asm__(".globl _FUN_8c2637e8\n.set _FUN_8c2637e8, _FUN_8c2637e8_def\n");
//@unit 8c263816
#include "../decls.h"
undefined4 FUN_8c263816_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uVar1 = FUN_8c1f3968(ar4,auStack_10,ar6,ar7);
  *ar5 = uStack_c;
  return uVar1;
}

__asm__(".globl _FUN_8c263816\n.set _FUN_8c263816, _FUN_8c263816_def\n");
//@unit 8c263840
#include "../decls.h"
undefined4 FUN_8c263840_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int a6;
  uint uVar8;
  undefined1 *ar4_00;
  code *pcVar10;
  double dVar9;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = ar5 + 0x1fU & 0xffffffe0;
  iVar7 = ar6 - (uVar8 - ar5);
  iVar4 = 0;
  do {
    if ((&DAT_8c277fd0)[iVar4 * 0x94] == '\0') break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  if (iVar4 != 8) {
    iVar4 = iVar4 * 0x94;
    ar4_00 = &DAT_8c277fd0 + iVar4;
    memset(ar4_00,0,0x94,ar7);
    *(char *)(iVar4 + -0x73d8802d) = (char)ar4;
    *(uint *)(iVar4 + -0x73d88010) = ar4 * 0x4040 + uVar8;
    *(uint *)(iVar4 + -0x73d8800c) = (iVar7 + ar4 * -0x4040) - 0x24U & 0xfffff800;
    *(undefined4 *)(iVar4 + -0x73d88008) = 0x24;
    *(uint *)(iVar4 + -0x73d88004) = uVar8;
    *(undefined4 *)(iVar4 + -0x73d88000) = 0x2000;
    *(undefined4 *)(iVar4 + -0x73d87ffc) = 0x2020;
    a6 = *(int *)(iVar4 + -0x73d88008);
    iVar6 = *(int *)(iVar4 + -0x73d8800c);
    iVar1 = FUN_8c26b564(*(undefined4 *)(iVar4 + -0x73d88010),iVar6,a6,ar7);
    *(int *)(iVar4 + -0x73d88020) = iVar1;
    *(int *)(iVar4 + -0x73d8801c) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < ar4) {
        do {
          iVar7 = iVar1 * 4;
          puVar3 = (undefined4 *)(iVar7 + iVar4 + -0x73d88018);
          a6 = (*(int *)(iVar4 + -0x73d87ffc) - *(int *)(iVar4 + -0x73d88000)) * 2;
          iVar6 = *(int *)(iVar4 + -0x73d88000) << 1;
          uVar2 = FUN_8c26b564(*(int *)(iVar4 + -0x73d87ffc) * iVar1 * 2 +
                               *(int *)(iVar4 + -0x73d88004),iVar6,a6,ar7);
          *puVar3 = uVar2;
          if (*(int *)(iVar4 + -0x73d88018 + iVar7) == 0) goto override_prt_8c26394e_7a4d7f16;
          iVar1 = iVar1 + 1;
        } while (iVar1 < ar4);
      }
      a6 = iVar4 + -0x73d88018;
      iVar6 = ar4;
      iVar1 = FUN_8c262b04(*(undefined4 *)(iVar4 + -0x73d8801c),ar4,a6,ar7);
      *(int *)(iVar4 + -0x73d8802c) = iVar1;
      if (iVar1 != 0) {
        iVar6 = ar4;
        iVar1 = s_E1201_mwRnaCreate_Illigal_pa_268b7a(iVar4 + -0x73d88018,ar4,a6,ar7);
        *(int *)(iVar4 + -0x73d88024) = iVar1;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar4 + -0x73d87ff8) = 0x3c;
          iVar7 = *(int *)(iVar4 + -0x73d8800c);
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x7ff;
          }
          iVar6 = 0;
          *(short *)(iVar4 + -0x73d87ff4) = (short)(iVar7 >> 0xb);
          if (cVar13 == '\0') {
            pcVar10 = (code *)0x3f59999a;
          }
          else {
            pcVar10 = FUN_8c2629b2;
          }
          dVar9 = (double)CONCAT44(pcVar10,(float)(int)*(short *)(iVar4 + -0x73d87ff4));
          if (cVar12 == '\0') {
            uVar11 = (undefined2)(int)((float)(int)*(short *)(iVar4 + -0x73d87ff4) * (float)(uint)pcVar10)
            ;
          }
          else {
            uVar11 = (undefined2)(int)(dVar9 * dVar9);
          }
          *(undefined2 *)(iVar4 + -0x73d87ff2) = uVar11;
          *(undefined2 *)(iVar4 + -0x73d87ff0) = 0;
          puVar5 = (undefined2 *)(iVar4 + -0x73d87fee);
          if (0 < ar4) {
            do {
              iVar6 = iVar6 + 1;
              *puVar5 = 0xff80;
              puVar5 = puVar5 + 1;
            } while (iVar6 < ar4);
          }
          *(undefined1 *)(iVar4 + -0x73d87fc4) = 1;
          *(undefined4 *)(iVar4 + -0x73d87fdc) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fd8) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fd4) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fd0) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fcc) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fc8) = 0;
          *(undefined2 *)(iVar4 + -0x73d87fc6) = 0;
          *(undefined1 *)(iVar4 + -0x73d87fc3) = 1;
          *(undefined1 *)(iVar4 + -0x73d87fbe) = 0;
          *(undefined4 *)(iVar4 + -0x73d87fa8) = 0;
          *ar4_00 = 1;
          return ar4_00;
        }
      }
    }
override_prt_8c26394e_7a4d7f16:
    FUN_8c2639fa(ar4_00,iVar6,a6,ar7,iVar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c263840\n.set _FUN_8c263840, _FUN_8c263840_def\n");
//@unit 8c2639fa
#include "../decls.h"
undefined4
FUN_8c2639fa_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar3;
  int iVar4;
  int *in_stack_ffffffe8;
  
  if (ar4 != (undefined1 *)0x0) {
    puVar2 = ar4;
    FUN_8c263c64(ar4,ar5,ar6,ar7);
    if (*(int *)(ar4 + 0xc) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 0xc);
      FUN_8c2629b2(puVar2,ar5,ar6,ar7);
    }
    if (*(int *)(ar4 + 4) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 4);
      FUN_8c262c04(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    if (*(int *)(ar4 + 8) != 0) {
      puVar2 = *(undefined1 **)(ar4 + 8);
      FUN_8c263446(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    }
    FUN_8c260ca0(puVar2,ar5,ar6,ar7,in_stack_ffffffe8);
    if (*(int *)(ar4 + 0x10) != 0) {
      in_stack_ffffffe8 = *(int **)(ar4 + 0x10);
      (**(code **)(*in_stack_ffffffe8 + 0xc))(in_stack_ffffffe8,ar5,ar6,ar7);
    }
    for (iVar3 = 0; iVar3 < (char)ar4[3]; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      if (*(int *)(ar4 + iVar4 + 0x18) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x18) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x18),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x78) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x78) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x78),ar5,ar6,ar7);
      }
      if (*(int *)(ar4 + iVar4 + 0x80) != 0) {
        (**(code **)(**(int **)(ar4 + iVar4 + 0x80) + 0xc))
                  (*(int **)(ar4 + iVar4 + 0x80),ar5,ar6,ar7);
      }
    }
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c26145e(*(undefined4 *)(ar4 + 0x74),ar5,ar6,ar7,in_stack_ffffffe8);
    }
    ar5_00 = 0;
    ar6_00 = 0x94;
    puVar2 = ar4;
    uVar1 = memset(ar4,0,0x94,ar7);
    *ar4 = 0;
    uVar1 = FUN_8c260cc8(puVar2,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2639fa\n.set _FUN_8c2639fa, _FUN_8c2639fa_def\n");
//@unit 8c263b0c
#include "../decls.h"
int FUN_8c263b0c_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  char *pcVar2;
  undefined4 in_PR;
  
  pcVar2 = ar4 + unaff_r12;
  do {
    iVar1 = (int)*ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c2639fa(ar4,ar5,ar6,ar7,in_PR);
    }
    ar4 = ar4 + 0x94;
  } while (ar4 < pcVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c263b0c\n.set _FUN_8c263b0c, _FUN_8c263b0c_def\n");
//@unit 8c263b34
#include "../decls.h"
undefined4 FUN_8c263b34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *a4;
  int iVar1;
  undefined4 uVar2;
  
  ar5_00 = ar5;
  for (iVar1 = 0; iVar1 < *(char *)(ar4 + 3); iVar1 = iVar1 + 1) {
    a4 = *(int **)(iVar1 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = ar5_00;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7,ar5_00);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  FUN_8c262c50(*(undefined4 *)(ar4 + 4),ar5_00,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined1 *)(ar4 + 0x71) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0x7fffffff;
  *(undefined4 *)(ar4 + 0x90) = 0xffffffff;
  return 0x90;
}

__asm__(".globl _FUN_8c263b34\n.set _FUN_8c263b34, _FUN_8c263b34_def\n");
//@unit 8c263bc0
#include "../decls.h"
undefined4 FUN_8c263bc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  undefined4 ar5_00;
  int ar6_00;
  
  ar6_00 = (int)*(short *)(ar4 + 0x3c) << 0xb;
  ain0 = FUN_8c263798(*(undefined4 *)(ar4 + 8),(int)*(short *)(ar4 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x19,ar6_00,ar7,ain0);
  FUN_8c26346e(*(undefined4 *)(ar4 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(ar4,*(undefined4 *)(ar4 + 0x10),ar6_00,ar7);
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc0\n.set _FUN_8c263bc0, _FUN_8c263bc0_def\n");
//@unit 8c263bc8
#include "../decls.h"
undefined4 FUN_8c263bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  code *in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  ar6_00 = (int)*(short *)(ain0 + unaff_r14) << 0xb;
  (*in_r3)(*(undefined4 *)(unaff_r14 + 8),(int)*(short *)(unaff_r14 + 0x3e) << 0xb,ar6_00,ar7);
  ar5_00 = 0x19;
  FUN_8c26357a(*(undefined4 *)(unaff_r14 + 8),0x19,ar6_00,ar7,in_PR);
  FUN_8c26346e(*(undefined4 *)(unaff_r14 + 8),ar5_00,ar6_00,ar7);
  FUN_8c263b34(unaff_r14,*(undefined4 *)(unaff_r14 + 0x10),ar6_00,ar7);
  *(undefined1 *)(unaff_r14 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c263bc8\n.set _FUN_8c263bc8, _FUN_8c263bc8_def\n");
//@unit 8c263bfe
#include "../decls.h"
undefined4 FUN_8c263bfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *a4;
  int iVar3;
  
  iVar3 = ar4;
  uVar1 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar3,ar5,ar6,ar7,uVar1);
  for (iVar3 = 0; iVar3 < *(char *)(ar4 + 3); iVar3 = iVar3 + 1) {
    a4 = *(int **)(iVar3 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,ar5,ar6,ar7);
  }
  uVar2 = uVar1;
  FUN_8c262c3c(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7,uVar1);
  *(undefined4 *)(ar4 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(ar4 + 4);
  FUN_8c262c50(uVar2,uVar1,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  *(undefined1 *)(ar4 + 2) = 3;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  uVar1 = FUN_8c260cc8(uVar2,uVar1,ar6,ar7,0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c263bfe\n.set _FUN_8c263bfe, _FUN_8c263bfe_def\n");
//@unit 8c263c64
#include "../decls.h"
undefined4 FUN_8c263c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_fffffff0);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  ar4_00 = *(int **)(ar4 + 4);
  FUN_8c262c66(ar4_00,uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    FUN_8c263446(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7,in_stack_fffffff0);
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0x14))(ar4_00,uVar1,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = 0;
  }
  if ((*(char *)(ar4 + 2) == '\x02') && (*(int *)(ar4 + 0x14) != 0)) {
    ar4_00 = *(int **)(ar4 + 0x14);
    (**(code **)(*ar4_00 + 0xc))(ar4_00,uVar1,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  uVar1 = FUN_8c260cc8(ar4_00,uVar1,ar6,ar7,0);
  return uVar1;
}

__asm__(".globl _FUN_8c263c64\n.set _FUN_8c263c64, _FUN_8c263c64_def\n");
//@unit 8c263cd4
#include "../decls.h"
int FUN_8c263cd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c263cd4\n.set _FUN_8c263cd4, _FUN_8c263cd4_def\n");
//@unit 8c263cd8
#include "../decls.h"
undefined4 FUN_8c263cd8_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *ar6_00;
  
  if ((*(char *)(ar4 + 1) == '\x03') || (*(char *)(ar4 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(ar4 + 0xc),ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c263186(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    *ar5 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    *ar6 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(ar4 + 4),ar5_00,ar6_00,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *ar5 = *ar5 * iVar1;
  }
  else {
    *ar5 = 0;
    *ar6 = 1;
  }
  *ar5 = *ar5 + *(int *)(ar4 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263cd8\n.set _FUN_8c263cd8, _FUN_8c263cd8_def\n");
//@unit 8c263ce4
#include "../decls.h"
undefined4 FUN_8c263ce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_r12;
  int *unaff_r13;
  int unaff_r14;
  
  if ((*(char *)(unaff_r14 + 1) == '\x03') || (*(char *)(unaff_r14 + 1) == '\x04')) {
    s_E1205_Illigal_parameter_MWRN_2699d4(*(undefined4 *)(unaff_r14 + 0xc),unaff_r13,unaff_r12,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    iVar1 = FUN_8c263186(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r13 = iVar1;
    uVar2 = FUN_8c26314a(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    *unaff_r12 = uVar2;
    uVar2 = FUN_8c263162(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(0x10,uVar2);
    *unaff_r13 = *unaff_r13 * iVar1;
  }
  else {
    *unaff_r13 = 0;
    *unaff_r12 = 1;
  }
  *unaff_r13 = *unaff_r13 + *(int *)(unaff_r14 + 0x88);
  return 0x88;
}

__asm__(".globl _FUN_8c263ce4\n.set _FUN_8c263ce4, _FUN_8c263ce4_def\n");
//@unit 8c263d90
#include "../decls.h"
int FUN_8c263d90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iStack_c;
  int aiStack_8 [2];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c263cd8(ar4,&iStack_c,aiStack_8,ar7);
  if (cVar4 == '\0') {
    fVar1 = (float)iStack_c / (float)aiStack_8[0];
  }
  else {
    fVar1 = SUB84((double)aiStack_8[0] / (double)aiStack_8[0],0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x42c80000,fVar1);
  }
  else {
    dVar2 = -3.874703964122394e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 * dVar2);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c263d90\n.set _FUN_8c263d90, _FUN_8c263d90_def\n");
//@unit 8c263dd8
#include "../decls.h"
undefined4 FUN_8c263dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ('\x01' < *(char *)(ar4 + 1)) {
    uVar1 = FUN_8c26314a(*(undefined4 *)(ar4 + 4));
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c263dd8\n.set _FUN_8c263dd8, _FUN_8c263dd8_def\n");
//@unit 8c263df6
#include "../decls.h"
undefined4 FUN_8c263df6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ('\x01' < *(char *)(ar4 + 1)) {
    uVar1 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c263df6\n.set _FUN_8c263df6, _FUN_8c263df6_def\n");
//@unit 8c263e50
#include "../decls.h"
undefined4 FUN_8c263e50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  *(short *)(ar5 * 2 + ar4 + 0x42) = (short)ar6;
  if (ar5 < *(char *)(ar4 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(ar4 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c263e50\n.set _FUN_8c263e50, _FUN_8c263e50_def\n");
//@unit 8c263e5c
#include "../decls.h"
undefined4
s_E8101208_parameter_error_ADX_263e5c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  int in_r3;
  int unaff_r14;
  undefined4 in_PR;
  
  *(short *)(in_r3 + in_r2) = (short)ar6;
  if (ar5 < *(char *)(unaff_r14 + 3)) {
    uVar1 = (*(code *)&SUB_8c262a12)(*(undefined4 *)(unaff_r14 + 0xc));
    return uVar1;
  }
  uVar1 = FUN_8c25ece6(ar4,ar5,ar6,ar7,s_E8101208__parameter_error__ADXT__8c273038,in_PR);
  return uVar1;
}

__asm__(".globl _s_E8101208_parameter_error_ADX_263e5c\n.set _s_E8101208_parameter_error_ADX_263e5c, _s_E8101208_parameter_error_ADX_263e5c_def\n");
//@unit 8c263e8e
#include "../decls.h"
undefined4 FUN_8c263e8e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined2 *)(ar4 + 0x40) = (undefined2)ar5;
  uVar1 = s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(ar4 + 0xc));
  return uVar1;
}

__asm__(".globl _FUN_8c263e8e\n.set _FUN_8c263e8e, _FUN_8c263e8e_def\n");
//@unit 8c263f1a
#include "../decls.h"
int FUN_8c263f1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) == 0) {
    return 0;
  }
  iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7ff;
  }
  return iVar1 >> 0xb;
}

__asm__(".globl _FUN_8c263f1a\n.set _FUN_8c263f1a, _FUN_8c263f1a_def\n");
//@unit 8c263f54
#include "../decls.h"
int FUN_8c263f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 a5;
  undefined1 *puVar3;
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = auStack_8;
  }
  else {
    puVar3 = auStack_c;
  }
  *(undefined4 *)(puVar3 + -4) = in_PR;
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  if ((1 < iVar1) && (*(int *)(ar4 + 0x14) != 0)) {
    a4 = *(int **)(ar4 + 0x14);
    a5 = 1;
    *(int **)(puVar3 + -0xc) = a4;
    uVar2 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
    *(undefined4 *)(puVar3 + -0xc) = uVar2;
    uVar2 = FUN_8c263df6(ar4,a5,ar6,ar7);
    *(undefined4 *)(puVar3 + -8) = uVar2;
    FUN_8c263dd8(ar4,a5,ar6,ar7);
    iVar1 = libgcc_divide_helper_010468(*(undefined4 *)(puVar3 + -0xc),*(int *)(puVar3 + -8) * 0x12)
    ;
    iVar1 = iVar1 << 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c263f54\n.set _FUN_8c263f54, _FUN_8c263f54_def\n");
//@unit 8c263fba
#include "../decls.h"
undefined4 FUN_8c263fba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(ar4 + 0x14) != 0) {
    iVar1 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    if ((int)*(short *)(ar4 + 0x3e) << 0xb <= iVar1) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c263fba\n.set _FUN_8c263fba, _FUN_8c263fba_def\n");
//@unit 8c263ffa
#include "../decls.h"
undefined4 FUN_8c263ffa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x6d) = (undefined1)ar5;
  return 0x6d;
}

__asm__(".globl _FUN_8c263ffa\n.set _FUN_8c263ffa, _FUN_8c263ffa_def\n");
//@unit 8c264010
#include "../decls.h"
undefined4 FUN_8c264010_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar4_01;
  char *a4;
  
  ar4_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  FUN_8c2630cc(ar4,ar5,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = ar4_00;
  uVar2 = uVar1;
  DAT_8c27848c = FUN_8c1f88f0(ar4_00,uVar1,ar6,ar7);
  thunk_FUN_8c2695e4(uVar3,uVar2,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar3,uVar2,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278490 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  FUN_8c262524(uVar1,uVar3,ar6,ar7);
  uVar1 = sh4_tmu_1f88e6(uVar1,uVar3,ar6,ar7);
  uVar3 = uVar1;
  DAT_8c278494 = FUN_8c1f88f0(uVar2,uVar1,ar6,ar7);
  FUN_8c26371e(uVar2,uVar3,ar6,ar7);
  uVar2 = sh4_tmu_1f88e6(uVar2,uVar3,ar6,ar7);
  uVar3 = uVar2;
  DAT_8c278498 = FUN_8c1f88f0(uVar1,uVar2,ar6,ar7);
  a4 = &DAT_8c277fd0;
  do {
    ar4_01 = a4;
    if (*a4 == '\x01') {
      FUN_8c264e84(a4,uVar3,ar6,ar7);
    }
    a4 = a4 + 0x94;
  } while (a4 < &DAT_8c278470);
  uVar3 = sh4_tmu_1f88e6(ar4_01,uVar3,ar6,ar7);
  DAT_8c27849c = FUN_8c1f88f0(uVar2,uVar3,ar6,ar7);
  DAT_8c278488 = FUN_8c1f88f0(ar4_00,uVar3,ar6,ar7);
  return DAT_8c278488;
}

__asm__(".globl _FUN_8c264010\n.set _FUN_8c264010, _FUN_8c264010_def\n");
//@unit 8c264104
#include "../decls.h"
undefined4 FUN_8c264104_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  *(char *)(ar4 + 0x72) = (char)ar5;
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return iVar1;
  }
  if (ar5 == 1) {
    (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
              (*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
    iVar1 = 0x7a120;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_26973a))
                      (*(undefined4 *)(ar4 + 0xc));
    return uVar2;
  }
  uVar2 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
                    (*(undefined4 *)(ar4 + 0xc),1);
  return uVar2;
}

__asm__(".globl _FUN_8c264104\n.set _FUN_8c264104, _FUN_8c264104_def\n");
//@unit 8c2641e2
#include "../decls.h"
undefined4 thunk_FUN_8c25ecdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c25ecdc)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c25ecdc\n.set _thunk_FUN_8c25ecdc, _thunk_FUN_8c25ecdc_def\n");
//@unit 8c2641ee
#include "../decls.h"
undefined4 FUN_8c2641ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  
  if (*(char *)(ar4 + 0x72) == '\0') {
    return 0;
  }
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  uVar1 = s_E1205_Illigal_parameter_MWRN_269816(ar4_00,ar5,ar6,ar7);
  FUN_8c264010(ar4_00,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c2641ee\n.set _FUN_8c2641ee, _FUN_8c2641ee_def\n");
//@unit 8c264222
#include "../decls.h"
undefined4 FUN_8c264222_def(ushort *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  short asStack_28 [2];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [8];
  int *piStack_8;
  
  if (((1 < ar5) &&
      (((int)(uint)*ar4 >> 8 | (uint)*ar4 << 8 & 0xff00 & 0xffff) == 0x8000)) &&
     (piStack_8 = ar6,
     iVar1 = (*(code *)(&FUN_8c260d7c))
                       (ar4,ar5,asStack_28,auStack_24,auStack_20,auStack_1c,auStack_18,auStack_14,
                        auStack_10), -1 < iVar1)) {
    *piStack_8 = (int)asStack_28[0];
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264222\n.set _FUN_8c264222, _FUN_8c264222_def\n");
//@unit 8c264308
#include "../decls.h"
int FUN_8c264308_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *a7;
  undefined1 *a7_00;
  int d;
  int *a4;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  a7 = auStack_28;
  a7_00 = auStack_28;
  a4 = *(int **)(ar4 + 0x14);
  if (ar6 < 0) {
    ar6 = ar6 + 0x1f;
  }
  d = ar5 * 0x12;
  iVar3 = (ar6 >> 5) * d;
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3,puVar2);
  iVar1 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar1 = iVar1 * d;
  memset(uStack_20,0,iVar1,puVar2);
  FUN_8c26be30(&uStack_20,iVar1,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7);
  puVar2 = &uStack_20;
  (**(code **)(*a4 + 0x18))(a4,0,iVar3 - iVar1,puVar2);
  iVar3 = libgcc_divide_helper_010468(uStack_1c,d);
  iVar3 = iVar3 * d;
  memset(uStack_20,0,iVar3,puVar2);
  FUN_8c26be30(&uStack_20,iVar3,&uStack_20,auStack_28);
  (**(code **)(*a4 + 0x20))(a4,1,&uStack_20,a7_00);
  (**(code **)(*a4 + 0x1c))(a4,0,auStack_28,a7_00);
  iVar1 = libgcc_divide_helper_010468(iVar1 + iVar3,d);
  return iVar1 << 5;
}

__asm__(".globl _FUN_8c264308\n.set _FUN_8c264308, _FUN_8c264308_def\n");
//@unit 8c264408
#include "../decls.h"
undefined4
s_E8101202_can_t_open_d_d_ADXT_26440a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *ar7_00;
  int in_stack_ffffffe8;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar2 = ar4;
  uStack_10 = ar5;
  uStack_c = ar6;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_stack_ffffffe8);
  ar7_00 = &uStack_14;
  FUN_8c26270c(uStack_10,uStack_c,&stack0xffffffe8,ar7_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = in_stack_ffffffe8;
  iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(in_stack_ffffffe8,uStack_14,uVar3,ar7_00);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,iVar2);
    FUN_8c25ece6(in_stack_ffffffe8,uStack_14,uVar3,ar7_00,
                 "E8101202: can\'t open %d, %d (ADXT_StartAfs)\n",uStack_10);
    ar4 = in_stack_ffffffe8;
  }
  else {
    FUN_8c263bc0(ar4,uStack_14,uVar3,ar7_00);
  }
  uVar3 = FUN_8c260cc8(ar4,uStack_14,uVar3,ar7_00,iVar2);
  return uVar3;
}

__asm__(".globl _s_E8101202_can_t_open_d_d_ADXT_26440a\n.set _s_E8101202_can_t_open_d_d_ADXT_26440a, _s_E8101202_can_t_open_d_d_ADXT_26440a_def\n");
//@unit 8c26446c
#include "../decls.h"
undefined4 s_E8101205_can_t_open_s_ADXT_S_26446e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ain0;
  int iVar2;
  int ain0_00;
  undefined4 uVar3;
  
  iVar2 = ar4;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,ar6,ar7,ain0_00);
  uVar3 = *(undefined4 *)(ar4 + 0x10);
  iVar2 = ain0_00;
  iVar1 = s_E8101210_can_t_open_s_ADXSTM_2632ee(ain0_00,uVar3,ar6,ar7);
  *(int *)(ar4 + 8) = iVar1;
  if (iVar1 == 0) {
    FUN_8c260cc8(ain0_00,uVar3,ar6,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,uVar3,ar6,ar7,"E8101205: can\'t open \'%s\' (ADXT_StartFname)",iVar2
                       );
    ar4 = ain0_00;
  }
  else {
    ain0 = FUN_8c263bc0(ar4,uVar3,ar6,ar7);
  }
  uVar3 = FUN_8c260cc8(ar4,uVar3,ar6,ar7,ain0);
  return uVar3;
}

__asm__(".globl _s_E8101205_can_t_open_s_ADXT_S_26446e\n.set _s_E8101205_can_t_open_s_ADXT_S_26446e, _s_E8101205_can_t_open_s_ADXT_S_26446e_def\n");
//@unit 8c2644b8
#include "../decls.h"
undefined4 s_E8101207_can_t_create_sj_ADX_2644ba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ain0;
  undefined4 uVar1;
  int iVar2;
  int ain0_00;
  
  iVar2 = ar4;
  uVar1 = ar6;
  ain0_00 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  FUN_8c260ca0(iVar2,ar5,uVar1,ar7,ain0_00);
  iVar2 = ain0_00;
  ar5_00 = FUN_8c26b250(ain0_00,ar6,uVar1,ar7);
  if (ar5_00 == 0) {
    FUN_8c260cc8(ain0_00,0,uVar1,ar7,iVar2);
    ain0 = FUN_8c25ece6(ain0_00,ar5_00,uVar1,ar7,"E8101207: can\'t create sj (ADXT_StartMem)\n",
                        iVar2);
  }
  else {
    ain0_00 = ar4;
    FUN_8c263b34(ar4,ar5_00,uVar1,ar7);
    ain0 = 2;
    *(undefined1 *)(ar4 + 2) = 2;
  }
  uVar1 = FUN_8c260cc8(ain0_00,ar5_00,uVar1,ar7,ain0);
  return uVar1;
}

__asm__(".globl _s_E8101207_can_t_create_sj_ADX_2644ba\n.set _s_E8101207_can_t_create_sj_ADX_2644ba, _s_E8101207_can_t_create_sj_ADX_2644ba_def\n");
//@unit 8c264504
#include "../decls.h"
undefined4 s_E8101207_can_t_create_sj_ADX_26450a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  int ain0;
  
  iVar3 = ar5;
  ar6_00 = ar6;
  ain0 = ar5;
  FUN_8c263c64(ar4,ar5,ar6,ar7);
  uVar2 = *(uint *)(ar5 + 4);
  if ((ar6 < (int)(uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18
                  )) && (-1 < ar6)) {
    FUN_8c260ca0(uVar2,iVar3,ar6_00,ar7,ain0);
    uVar2 = *(uint *)((ar6 + 1) * 8 + ar5);
    iVar3 = (uVar2 >> 0x18 | (int)uVar2 >> 8 & 0xff00U | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            ain0;
    ar5_00 = FUN_8c26b250(iVar3,0x40000000,ar6_00,ar7);
    if (ar5_00 == 0) {
      FUN_8c260cc8(iVar3,0,ar6_00,ar7,ain0);
      uVar1 = FUN_8c25ece6(iVar3,ar5_00,ar6_00,ar7,"E8101207: can\'t create sj (ADXT_StartMemIdx)",
                           ain0);
    }
    else {
      iVar3 = ar4;
      FUN_8c263b34(ar4,ar5_00,ar6_00,ar7);
      uVar1 = 2;
      *(undefined1 *)(ar4 + 2) = 2;
    }
    uVar1 = FUN_8c260cc8(iVar3,ar5_00,ar6_00,ar7,uVar1);
    return uVar1;
  }
  return 0xff00;
}

__asm__(".globl _s_E8101207_can_t_create_sj_ADX_26450a\n.set _s_E8101207_can_t_create_sj_ADX_26450a, _s_E8101207_can_t_create_sj_ADX_26450a_def\n");
//@unit 8c264614
#include "../decls.h"
undefined4
s_E8101201_not_enough_data_adx_26461e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 uVar1;
  int s4;
  int *ar4_00;
  undefined4 ar5_01;
  undefined4 a6;
  undefined1 *a6_00;
  undefined1 *puVar2;
  undefined4 ar4_01;
  int *a4;
  undefined1 auStack_20 [4];
  int iStack_1c;
  
  a4 = *(int **)(ar4 + 0x14);
  ar4_01 = *(undefined4 *)(ar4 + 4);
  ar5_00 = FUN_8c2631b6(ar4_01,ar5,ar6,ar7);
  uVar1 = FUN_8c2631c2(ar4_01,ar5,ar6,ar7);
  s4 = FUN_8c2631ce(ar4_01,ar5,ar6,ar7);
  FUN_8c2631da(ar4_01,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 8) == 0) && (*(char *)(ar4 + 0x6c) == '\0')) {
    uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,s4);
  }
  else {
    a6 = *(undefined4 *)(ar4 + 0x50);
    ar5_01 = 1;
    puVar2 = auStack_20;
    ar4_00 = a4;
    (**(code **)(*a4 + 0x18))(a4,1,a6,puVar2);
    if (iStack_1c < *(int *)(ar4 + 0x50)) {
      FUN_8c25ece6(ar4_00,ar5_01,a6,puVar2,"E8101201: not enough data (adxt_trap_entry)\n",s4);
    }
    a6_00 = auStack_20;
    (**(code **)(*a4 + 0x20))(a4,0,a6_00,puVar2);
    FUN_8c263126(ar4_01,0,a6_00,puVar2);
    *(int *)(ar4 + 0x90) = s4 - ar5_00;
    FUN_8c26311e(ar4_01,s4 - ar5_00,a6_00,puVar2,s4);
    FUN_8c263132(ar4_01,uVar1,a6_00,puVar2);
    FUN_8c263102(ar4_01,ar5_00,a6_00,puVar2,s4);
    if (*(char *)(ar4 + 2) == '\x02') {
      (**(code **)(*a4 + 0x14))(a4,ar5_00,a6_00,puVar2);
      puVar2 = auStack_20;
      (**(code **)(*a4 + 0x18))(a4,1,uVar1,puVar2);
      (**(code **)(*a4 + 0x20))(a4,0,auStack_20,puVar2);
    }
    uVar1 = 0x4c;
    *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + 1;
  }
  return uVar1;
}

__asm__(".globl _s_E8101201_not_enough_data_adx_26461e\n.set _s_E8101201_not_enough_data_adx_26461e, _s_E8101201_not_enough_data_adx_26461e_def\n");
//@unit 8c2646fe
#include "../decls.h"
undefined4 FUN_8c2646fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 8);
  ain0 = FUN_8c2631c2(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x6c) != '\0') {
    if (ain0 < 0) {
      ain0 = ain0 + 0x7ff;
    }
    uVar1 = FUN_8c263534(uVar1,ain0 >> 0xb,ar6,ar7);
    return uVar1;
  }
  uVar1 = FUN_8c26311e(*(undefined4 *)(ar4 + 4),0xffffffff,ar6,ar7,ain0);
  uVar1 = FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c2646fe\n.set _FUN_8c2646fe, _FUN_8c2646fe_def\n");
//@unit 8c264784
#include "../decls.h"
undefined4 FUN_8c264784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
  puVar1 = (&DATA_8c262a12);
  if (iVar2 == 1) {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    uVar3 = FUN_8c262a12(*(undefined4 *)(ar4 + 0xc),0,iVar2);
  }
  else {
    if (*(short *)(ar4 + 0x42) == -0x80) {
      iVar2 = -0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x42);
    }
    FUN_8c262a12(*(undefined4 *)(ar4 + 0xc),0,iVar2);
    if (*(short *)(ar4 + 0x44) == -0x80) {
      iVar2 = 0xf;
    }
    else {
      iVar2 = (int)*(short *)(ar4 + 0x44);
    }
    uVar3 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0xc),1,iVar2);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c264784\n.set _FUN_8c264784, _FUN_8c264784_def\n");
//@unit 8c264788
#include "../decls.h"
undefined4 FUN_8c264788_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r14;
  
  iVar2 = FUN_8c263156(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
  puVar1 = (&DATA_8c262a12);
  if (iVar2 == 1) {
    if (*(short *)(unaff_r14 + 0x42) == -0x80) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x42);
    }
    uVar3 = FUN_8c262a12(*(undefined4 *)(unaff_r14 + 0xc),0,iVar2,ar7);
  }
  else {
    if (*(short *)(unaff_r14 + 0x42) == -0x80) {
      iVar2 = -0xf;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x42);
    }
    FUN_8c262a12(*(undefined4 *)(unaff_r14 + 0xc),0,iVar2,ar7);
    if (*(short *)(unaff_r14 + 0x44) == -0x80) {
      iVar2 = 0xf;
    }
    else {
      iVar2 = (int)*(short *)(unaff_r14 + 0x44);
    }
    uVar3 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0xc),1,iVar2,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c264788\n.set _FUN_8c264788, _FUN_8c264788_def\n");
//@unit 8c2647f4
#include "../decls.h"
int s_E9081001_can_t_play_d_ch_dat_2647fe_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  undefined4 ar5_01;
  undefined4 *extraout_r3;
  code *ar5_02;
  undefined4 uVar5;
  undefined4 in_stack_ffffffe0;
  
  uVar5 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c262c38(uVar5,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = FUN_8c263156(uVar5,ar5,ar6,ar7);
    if (*(char *)(ar4 + 3) < iVar1) {
      FUN_8c25ece6(iVar1,ar5,ar6,ar7,s_E9081001__can_t_play__d_ch_data___8c273180,iVar1);
      uVar5 = FUN_8c263c64(ar4,ar5,ar6,ar7);
      return uVar5;
    }
    uVar2 = FUN_8c26314a(uVar5,ar5,ar6,ar7);
    iVar1 = FUN_8c26319e(uVar5,ar5,ar6,ar7);
    if (iVar1 < 1) {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = (int)(iVar3 * 3 + (uint)(iVar3 * 3 < 0)) >> 1;
    }
    else {
      iVar3 = libgcc_divide_helper_010468(uVar2,*(undefined4 *)(ar4 + 0x38));
      iVar3 = iVar3 * 3;
    }
    *(int *)(ar4 + 0x48) = iVar3;
    iVar3 = FUN_8c26316e(uVar5,ar5,ar6,ar7);
    iVar3 = iVar3 * 2;
    iVar4 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x48) + iVar3,iVar3);
    *(int *)(ar4 + 0x48) = iVar4 * iVar3;
    ar5_02 = *(code **)(ar4 + 0x48);
    FUN_8c262c4c(uVar5,ar5_02,ar6,ar7,in_stack_ffffffe0);
    if (iVar1 < 1) {
      if (*(int *)(ar4 + 8) != 0) {
        ar5_02 = (code *)0x7fffffff;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),0x7fffffff,ar6,ar7,in_stack_ffffffe0);
      }
    }
    else {
      if (*(char *)(ar4 + 2) == '\x02') {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        iVar1 = FUN_8c2631da(uVar5,ar5_02,ar6,ar7);
        iVar3 = libgcc_divide_helper_010614(iVar1,0x800);
        *(int *)(ar4 + 0x50) = 0x800 - iVar3;
        uVar2 = libgcc_divide_helper_010614(*(undefined4 *)(ar4 + 0x50),0x800);
        *extraout_r3 = uVar2;
        uVar2 = libgcc_divide_helper_010468(iVar1 + 0x7ff,0x800);
        *(undefined4 *)(ar4 + 0x8c) = uVar2;
        FUN_8c26357a(*(undefined4 *)(ar4 + 8),uVar2,ar6,ar7,in_stack_ffffffe0);
        ar5_02 = FUN_8c2646fe;
        ar6 = ar4;
        FUN_8c263574(*(undefined4 *)(ar4 + 8),FUN_8c2646fe,ar4,ar7,in_stack_ffffffe0);
      }
      uVar2 = FUN_8c2631ce(uVar5,ar5_02,ar6,ar7);
      *(undefined4 *)(ar4 + 0x90) = uVar2;
      FUN_8c26311e(uVar5,uVar2,ar6,ar7,in_stack_ffffffe0);
      FUN_8c263132(uVar5,0,ar6,ar7);
      FUN_8c263126(uVar5,0,ar6,ar7);
      ar5_02 = s_E8101201_not_enough_data_adx_26461e;
      ar6 = ar4;
      FUN_8c263114(uVar5,s_E8101201_not_enough_data_adx_26461e,ar4,ar7);
    }
    iVar3 = FUN_8c26314a(uVar5,ar5_02,ar6,ar7);
    uVar2 = FUN_8c263156(uVar5,ar5_02,ar6,ar7);
    ar5_00 = FUN_8c263186(uVar5,ar5_02,ar6,ar7);
    ar5_01 = FUN_8c263162(uVar5,ar5_02,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269b92(*(undefined4 *)(ar4 + 0xc),ar5_01,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269c06(*(undefined4 *)(ar4 + 0xc),iVar3,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_269aec(*(undefined4 *)(ar4 + 0xc),uVar2,ar6,ar7);
    noop_262a44(*(undefined4 *)(ar4 + 0xc),ar5_00,ar6,ar7,ar5_00);
    iVar1 = (int)*(short *)(ar4 + 0x40);
    s_E1205_Illigal_parameter_MWRN_269c42(*(undefined4 *)(ar4 + 0xc),iVar1,ar6,ar7);
    FUN_8c264784(ar4,iVar1,ar6,ar7);
    if (*(int *)(ar4 + 0x74) != 0) {
      FUN_8c261680(*(undefined4 *)(ar4 + 0x74),iVar3,ar6,ar7,ar5_00);
      iVar1 = iVar3;
    }
    iVar3 = FUN_8c26313e(uVar5,iVar1,ar6,ar7);
    if (iVar3 == 2) {
      uVar5 = FUN_8c2631f8(uVar5,iVar1,ar6,ar7);
      FUN_8c262a4c(*(undefined4 *)(ar4 + 0xc),uVar5,ar6,ar7);
    }
    s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
    iVar1 = 2;
    *(undefined1 *)(ar4 + 1) = 2;
  }
  return iVar1;
}

__asm__(".globl _s_E9081001_can_t_play_d_ch_dat_2647fe\n.set _s_E9081001_can_t_play_d_ch_dat_2647fe, _s_E9081001_can_t_play_d_ch_dat_2647fe_def\n");
//@unit 8c264a42
#include "../decls.h"
int FUN_8c264a42_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 *a7;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ar4_01;
  int iVar6;
  int *a4;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  ar4_00 = *(undefined4 *)(ar4 + 4);
  ar4_01 = *(undefined4 *)(ar4 + 0xc);
  iVar2 = s_E1205_Illigal_parameter_MWRN_269aa8(ar4_01,ar5,ar6,ar7);
  iVar3 = ret_const_7fffffff_2629e8(ar4_01,ar5,ar6,ar7);
  if (((*(int *)(ar4 + 0x48) <= iVar2) ||
      (iVar2 = FUN_8c26316e(ar4_00,ar5,ar6,ar7), iVar3 <= iVar2)) ||
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7), iVar2 == 3)) {
    if (*(char *)(ar4 + 0x70) == '\0') {
      if (*(char *)(ar4 + 0x72) == '\0') {
        ar5 = 1;
        s_E1205_Illigal_parameter_MWRN_2691ba(ar4_01,1,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 1) = 3;
    }
    *(undefined1 *)(ar4 + 0x71) = 1;
  }
  iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar2 == 3) {
    iVar3 = FUN_8c263df6(ar4,ar5,ar6,ar7);
    puVar1 = (&memset);
    iVar2 = 0x48;
    iVar4 = *(int *)(ar4 + 0x48);
    iVar6 = 0;
    puVar5 = (undefined4 *)(ar4 + 0x18);
    if (0 < iVar3) {
      do {
        a4 = (int *)*puVar5;
        puVar5 = puVar5 + 1;
        a7 = &uStack_24;
        (**(code **)(*a4 + 0x18))(a4,0,iVar4 * iVar3 * 2,a7);
        (*(code *)puVar1)(uStack_24,0,uStack_20,a7);
        iVar2 = (**(code **)(*a4 + 0x20))(a4,1,&uStack_24,a7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264a42\n.set _FUN_8c264a42, _FUN_8c264a42_def\n");
//@unit 8c264b14
#include "../decls.h"
int FUN_8c264b14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),&DAT_8c278064);
  if (iVar1 == 3) {
    iVar2 = FUN_8c263156(*(undefined4 *)(ar4 + 4));
    iVar4 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        piVar3 = *(int **)(iVar4 * 4 + ar4 + 0x18);
        iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,1);
        if (0x1f < iVar1) break;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    if (iVar4 == iVar2) {
      s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0);
      iVar1 = 4;
      *(undefined1 *)(ar4 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b14\n.set _FUN_8c264b14, _FUN_8c264b14_def\n");
//@unit 8c264b1a
#include "../decls.h"
int FUN_8c264b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *a4;
  int unaff_r13;
  int iVar3;
  
  iVar1 = FUN_8c262c38(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
  if (iVar1 == 3) {
    iVar2 = FUN_8c263156(*(undefined4 *)(unaff_r13 + 4),ar5,ar6,ar7);
    iVar3 = 0;
    iVar1 = iVar2;
    if (0 < iVar2) {
      do {
        a4 = *(int **)(iVar3 * 4 + unaff_r13 + 0x18);
        iVar1 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
        if (0x1f < iVar1) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    if (iVar3 == iVar2) {
      (*(code *)(&s_E1205_Illigal_parameter_MWRN_2690dc))
                (*(undefined4 *)(unaff_r13 + 0xc),0,ar6,ar7);
      iVar1 = 4;
      *(undefined1 *)(unaff_r13 + 1) = 4;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b1a\n.set _FUN_8c264b1a, _FUN_8c264b1a_def\n");
//@unit 8c264b7a
#include "../decls.h"
int FUN_8c264b7a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = s_E1205_Illigal_parameter_MWRN_269aa8(*(undefined4 *)(ar4 + 0xc));
  if (iVar1 < 1) {
    s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0);
    iVar1 = 5;
    *(undefined1 *)(ar4 + 1) = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b7a\n.set _FUN_8c264b7a, _FUN_8c264b7a_def\n");
//@unit 8c264b7e
#include "../decls.h"
int FUN_8c264b7e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_269aa8))
                    (*(undefined4 *)(unaff_r14 + 0xc),ar5,ar6,ar7);
  if (iVar1 < 1) {
    (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
              (*(undefined4 *)(unaff_r14 + 0xc),0,ar6,ar7);
    iVar1 = 5;
    *(undefined1 *)(unaff_r14 + 1) = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264b7e\n.set _FUN_8c264b7e, _FUN_8c264b7e_def\n");
//@unit 8c264b9c
#include "../decls.h"
undefined4 noop_264b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_264b9c\n.set _noop_264b9c, _noop_264b9c_def\n");
//@unit 8c264ba0
#include "../decls.h"
undefined4 FUN_8c264ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int *a4;
  int iVar2;
  undefined4 in_stack_ffffffec;
  
  FUN_8c260ca0(ar4,ar5,ar6,ar7,in_stack_ffffffec);
  s_E1205_Illigal_parameter_MWRN_2690dc(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  uVar1 = 0;
  s_E1205_Illigal_parameter_MWRN_2691ba(*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
  FUN_8c262c66(*(undefined4 *)(ar4 + 4),uVar1,ar6,ar7);
  if (*(int *)(ar4 + 8) != 0) {
    FUN_8c263498(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x14) + 0x14))(*(int **)(ar4 + 0x14),uVar1,ar6,ar7);
  }
  for (iVar2 = 0; iVar2 < *(char *)(ar4 + 3); iVar2 = iVar2 + 1) {
    a4 = *(int **)(iVar2 * 4 + ar4 + 0x18);
    (**(code **)(*a4 + 0x14))(a4,uVar1,ar6,ar7);
  }
  if (*(int *)(ar4 + 8) != 0) {
    uVar1 = 0;
    FUN_8c263534(*(undefined4 *)(ar4 + 8),0,ar6,ar7);
    FUN_8c26346e(*(undefined4 *)(ar4 + 8),uVar1,ar6,ar7);
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x14);
  uVar1 = FUN_8c263b34(ar4,ar5_00,ar6,ar7);
  uVar1 = FUN_8c260cc8(ar4,ar5_00,ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c264ba0\n.set _FUN_8c264ba0, _FUN_8c264ba0_def\n");
//@unit 8c264c92
#include "../decls.h"
int FUN_8c264c92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  
  cVar1 = *(char *)(ar4 + 1);
  ar5_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(ar4 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar2) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar2;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      if (*(char *)(ar4 + 0x6d) != '\0') {
        *(undefined2 *)(ar4 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(ar4 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(ar4 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      ar5_01 = 1;
      iVar2 = (**(code **)(**(int **)(ar4 + 0x14) + 0x24))(*(int **)(ar4 + 0x14),1,ar6,ar7);
    }
    if (iVar2 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      FUN_8c263c64(ar4,ar5_01,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264c92\n.set _FUN_8c264c92, _FUN_8c264c92_def\n");
//@unit 8c264e84
#include "../decls.h"
int FUN_8c264e84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  
  if (*(char *)(ar4 + 1) == '\x03') {
    FUN_8c264b14(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x01') {
    s_E9081001_can_t_play_d_ch_dat_2647fe(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x02') {
    FUN_8c264a42(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x04') {
    FUN_8c264b7a(ar4,ar5,ar6,ar7);
  }
  else if (*(char *)(ar4 + 1) == '\x05') {
    noop_264b9c(ar4,ar5,ar6,ar7,5);
  }
  cVar1 = *(char *)(ar4 + 1);
  ar5_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(ar4 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(ar4 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7);
    if (*(int *)(ar4 + 100) == iVar2) {
      *(short *)(ar4 + 0x68) = *(short *)(ar4 + 0x68) + 1;
      if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x68)) {
        *(undefined2 *)(ar4 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x68) = 0;
    }
    *(int *)(ar4 + 100) = iVar2;
    if (*(short *)(ar4 + 0x60) != 0) {
      if ((*(char *)(ar4 + 0x6d) == '\x01') || (*(char *)(ar4 + 0x6d) == '\x02')) {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      if (*(char *)(ar4 + 0x6d) != '\0') {
        *(undefined2 *)(ar4 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(ar4 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(ar4 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(ar4 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(ar4 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = *(int **)(ar4 + 0x14);
      ar5_01 = 1;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar4);
    }
    if (iVar2 < 0x40) {
      *(short *)(ar4 + 0x6a) = *(short *)(ar4 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(ar4 + 0x38) * 5 < (int)*(short *)(ar4 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(ar4 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(ar4 + 0x38) * 0x14 < (int)*(short *)(ar4 + 0x6a)) goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(ar4 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(ar4 + 0x6d) == '\x01') {
        FUN_8c263c64(ar4,ar5_01,ar6,ar7);
      }
      else if (*(char *)(ar4 + 0x6d) == '\x02') {
        FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(ar4 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(ar4 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(ar4 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(ar4 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(ar4 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(ar4 + 0x6d) == '\x01') {
      FUN_8c263c64(ar4,ar5_01,ar6,ar7);
    }
    else if (*(char *)(ar4 + 0x6d) == '\x02') {
      FUN_8c264ba0(ar4,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(ar4 + 0x6d) != '\0') {
      *(undefined2 *)(ar4 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(ar4 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264e84\n.set _FUN_8c264e84, _FUN_8c264e84_def\n");
//@unit 8c264e88
#include "../decls.h"
int FUN_8c264e88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 ar5_00;
  undefined4 ar4_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 ar5_01;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*(char *)(unaff_r14 + 1) == '\x03') {
    FUN_8c264b14(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x01') {
    s_E9081001_can_t_play_d_ch_dat_2647fe(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x02') {
    FUN_8c264a42(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x04') {
    FUN_8c264b7a(unaff_r14,ar5,ar6,ar7);
  }
  else if (*(char *)(unaff_r14 + 1) == '\x05') {
    noop_264b9c(unaff_r14,ar5,ar6,ar7,in_PR);
  }
  cVar1 = *(char *)(unaff_r14 + 1);
  ar5_00 = sh4_tmu_1f88e6(unaff_r14,ar5,ar6,ar7);
  ar5_01 = ar5_00;
  ar4_00 = FUN_8c1f88f0(DAT_8c2784a0,ar5_00,ar6,ar7);
  iVar2 = FUN_8c1f88f6(ar4_00,ar5_01,ar6,ar7);
  iVar3 = libgcc_divide_helper_010468(1000000,*(undefined4 *)(unaff_r14 + 0x38));
  iVar3 = libgcc_divide_helper_010468(iVar3 << 3,10);
  if (iVar2 < iVar3) {
    return iVar3;
  }
  DAT_8c2784a0 = ar5_00;
  if (((cVar1 == '\x03') && (*(char *)(unaff_r14 + 0x72) == '\0')) &&
     (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)) {
    iVar2 = get_field_2c_2630fe(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7);
    if (*(int *)(unaff_r14 + 100) == iVar2) {
      *(short *)(unaff_r14 + 0x68) = *(short *)(unaff_r14 + 0x68) + 1;
      if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x68)) {
        *(undefined2 *)(unaff_r14 + 0x60) = 0xfffe;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x68) = 0;
    }
    *(int *)(unaff_r14 + 100) = iVar2;
    if (*(short *)(unaff_r14 + 0x60) != 0) {
      if ((*(char *)(unaff_r14 + 0x6d) == '\x01') || (*(char *)(unaff_r14 + 0x6d) == '\x02')) {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      if (*(char *)(unaff_r14 + 0x6d) != '\0') {
        *(undefined2 *)(unaff_r14 + 0x60) = 0;
        goto LAB_8c264d58;
      }
    }
  }
  else {
LAB_8c264d58:
    *(undefined2 *)(unaff_r14 + 0x68) = 0;
  }
  if ((('\0' < cVar1) && (cVar1 < '\x04')) &&
     ((*(char *)(unaff_r14 + 0x72) == '\0' &&
      (iVar2 = FUN_8c262c38(*(undefined4 *)(unaff_r14 + 4),ar5_01,ar6,ar7), iVar2 != 3)))) {
    if (*(int *)(unaff_r14 + 0x14) == 0) {
      iVar2 = 0;
    }
    else {
      piVar4 = *(int **)(unaff_r14 + 0x14);
      ar5_01 = 1;
      iVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,piVar4);
    }
    if (iVar2 < 0x40) {
      *(short *)(unaff_r14 + 0x6a) = *(short *)(unaff_r14 + 0x6a) + 1;
      if (cVar1 == '\x03') {
        if (*(int *)(unaff_r14 + 0x38) * 5 < (int)*(short *)(unaff_r14 + 0x6a)) {
LAB_8c264dce:
          *(undefined2 *)(unaff_r14 + 0x60) = 0xffff;
        }
      }
      else if (*(int *)(unaff_r14 + 0x38) * 0x14 < (int)*(short *)(unaff_r14 + 0x6a))
      goto LAB_8c264dce;
      iVar2 = 0x60;
      if (*(short *)(unaff_r14 + 0x60) == 0) goto LAB_8c264e04;
      if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
        FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
      }
      else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
        FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
      }
      iVar2 = 0x6d;
      if (*(char *)(unaff_r14 + 0x6d) == '\0') goto LAB_8c264e04;
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
    }
  }
  iVar2 = 0x6a;
  *(undefined2 *)(unaff_r14 + 0x6a) = 0;
LAB_8c264e04:
  if ((*(int *)(unaff_r14 + 8) != 0) &&
     (iVar2 = FUN_8c263746(*(undefined4 *)(unaff_r14 + 8),ar5_01,ar6,ar7), iVar2 == 4)) {
    if (*(char *)(unaff_r14 + 0x6d) == '\x01') {
      FUN_8c263c64(unaff_r14,ar5_01,ar6,ar7);
    }
    else if (*(char *)(unaff_r14 + 0x6d) == '\x02') {
      FUN_8c264ba0(unaff_r14,ar5_01,ar6,ar7);
    }
    iVar2 = 0x6d;
    if (*(char *)(unaff_r14 + 0x6d) != '\0') {
      *(undefined2 *)(unaff_r14 + 0x60) = 0;
      iVar2 = 0x6a;
      *(undefined2 *)(unaff_r14 + 0x6a) = 0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264e88\n.set _FUN_8c264e88, _FUN_8c264e88_def\n");
//@unit 8c264ed0
#include "../decls.h"
undefined4 FUN_8c264ed0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memset(0x8c4ba4a8,0,(int)0x1a0);
  return uVar1;
}

__asm__(".globl _FUN_8c264ed0\n.set _FUN_8c264ed0, _FUN_8c264ed0_def\n");
//@unit 8c264eda
#include "../decls.h"
undefined4 * FUN_8c264eda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 *ar4_00;
  int ar4_01;
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x34 + 0x8c4ba4a8) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  if (iVar1 == 8) {
    ar4_00 = (undefined4 *)0x0;
  }
  else {
    ar4_00 = (undefined4 *)(iVar1 * 0x34 + 0x8c4ba4a8);
    memset(ar4_00,0,0x34,ar7);
    *ar4_00 = 1;
    ar5_00 = 0xac44;
    ar4_01 = (int)0x1f4;
    ar4_00[1] = iVar1;
    ar4_00[2] = 0;
    ar4_00[3] = 0;
    iVar1 = (int)ar4_00 + 0x32;
    FUN_8c260cf8(ar4_01,ar5_00,ar4_00 + 0xc,iVar1);
    memset(ar4_00 + 10,0,8,iVar1);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c264eda\n.set _FUN_8c264eda, _FUN_8c264eda_def\n");
//@unit 8c264f52
#include "../decls.h"
undefined4 FUN_8c264f52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c260cf8(ar6,ar4 + 0x30,ar4 + 0x32);
  return uVar1;
}

__asm__(".globl _FUN_8c264f52\n.set _FUN_8c264f52, _FUN_8c264f52_def\n");
//@unit 8c264f6a
#include "../decls.h"
undefined4 FUN_8c264f6a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  undefined4 uVar2;
  
  puVar1 = (&memset);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = 0;
    uVar2 = (*(code *)puVar1)(0,0x34);
    return uVar2;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c264f6a\n.set _FUN_8c264f6a, _FUN_8c264f6a_def\n");
//@unit 8c264f82
#include "../decls.h"
undefined4 get_field_c_264f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}

__asm__(".globl _get_field_c_264f82\n.set _get_field_c_264f82, _get_field_c_264f82_def\n");
//@unit 8c264f86
#include "../decls.h"
undefined4 FUN_8c264f86_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 1;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = 0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264f86\n.set _FUN_8c264f86, _FUN_8c264f86_def\n");
//@unit 8c264fa4
#include "../decls.h"
undefined4 FUN_8c264fa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x14) = 2;
    *(undefined4 *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x1c) = ar6;
    *(undefined4 *)(ar4 + 0x20) = ar7;
    *(undefined4 *)(ar4 + 0x24) = s0;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c264fa4\n.set _FUN_8c264fa4, _FUN_8c264fa4_def\n");
//@unit 8c264fc2
#include "../decls.h"
undefined4 FUN_8c264fc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x10) = 0;
    *(undefined4 *)(ar4 + 0xc) = 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c264fc2\n.set _FUN_8c264fc2, _FUN_8c264fc2_def\n");
//@unit 8c264fd4
#include "../decls.h"
undefined4 FUN_8c264fd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  uVar1 = memset(ar4 + 0x28,0,8);
  return uVar1;
}

__asm__(".globl _FUN_8c264fd4\n.set _FUN_8c264fd4, _FUN_8c264fd4_def\n");
//@unit 8c264fea
#include "../decls.h"
int FUN_8c264fea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc);
  if (iVar1 == 3) {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264fea\n.set _FUN_8c264fea, _FUN_8c264fea_def\n");
//@unit 8c264ff8
#include "../decls.h"
undefined4 get_field_10_264ff8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_264ff8\n.set _get_field_10_264ff8, _get_field_10_264ff8_def\n");
//@unit 8c264ffc
#include "../decls.h"
undefined4 FUN_8c264ffc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(&DATA_8c2784a8) = 1;
  return in_r0;
}

__asm__(".globl _FUN_8c264ffc\n.set _FUN_8c264ffc, _FUN_8c264ffc_def\n");
//@unit 8c26501c
#include "../decls.h"
uint FUN_8c26501c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int ar7_00;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int ain0;
  
  if (*(int *)(ar4 + 0xc) == 1) {
    *(undefined4 *)(ar4 + 0xc) = 2;
  }
  uVar1 = *(uint *)(ar4 + 0xc);
  if (uVar1 == 2) {
    if (*(int *)(ar4 + 0x14) == 1) {
      uVar1 = FUN_8c261058(*(undefined4 *)(ar4 + 0x18),*(undefined4 *)(ar4 + 0x1c),
                           *(undefined4 *)(ar4 + 0x20),ar4 + 0x28,(int)*(short *)(ar4 + 0x30),
                           (int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
    }
    else {
      ar7_00 = ar4 + 0x28;
      ar5_00 = *(undefined4 *)(ar4 + 0x1c);
      ar6_00 = *(undefined4 *)(ar4 + 0x20);
      ar4_00 = *(undefined4 *)(ar4 + 0x18);
      ain0 = ar7_00;
      uVar1 = FUN_8c261170(ar4_00,ar5_00,ar6_00,ar7_00,*(undefined4 *)(ar4 + 0x24),ar4 + 0x2c,
                           (int)*(short *)(ar4 + 0x30),(int)*(short *)(ar4 + 0x32));
      *(uint *)(ar4 + 0x10) = uVar1;
      if ((int)uVar1 < 0) {
        uVar1 = ~(~uVar1 + 1 & 1) + 1;
      }
      else {
        uVar1 = uVar1 & 1;
      }
      if (uVar1 == 1) {
        uVar1 = FUN_8c264ffc(ar4_00,ar5_00,ar6_00,ar7_00,ain0);
      }
    }
    *(undefined4 *)(ar4 + 0xc) = 3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26501c\n.set _FUN_8c26501c, _FUN_8c26501c_def\n");
//@unit 8c2650be
#include "../decls.h"
int FUN_8c2650be_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r13;
  int *piVar2;
  
  piVar2 = (int *)(unaff_r13 + (int)ar4);
  do {
    iVar1 = *ar4;
    if (iVar1 == 1) {
      iVar1 = FUN_8c26501c(ar4,ar5,ar6,ar7);
    }
    ar4 = ar4 + 0xd;
  } while (ar4 < piVar2);
  return iVar1;
}

__asm__(".globl _FUN_8c2650be\n.set _FUN_8c2650be, _FUN_8c2650be_def\n");
//@unit 8c2650ec
#include "../decls.h"
undefined4 FUN_8c2650ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  uint ar4_00;
  undefined4 uVar2;
  
  puVar1 = (&DATA_8c2784c0);
  ar5_00 = (int)0x100;
  *(uint *)(&DATA_8c2784c0) = 0x8c4ba677 & 0xffffffe0;
  ar4_00 = 0x8c4bb603 & 0xffffffe0;
  FUN_8c265ac8(0x8c4babe4,0x40,ar6,ar7);
  uVar2 = 0x40;
  FUN_8c265ba8(0x8c4bb3e4,0x40,ar6,ar7);
  FUN_8c266bd4(ar4_00,uVar2,ar6,ar7);
  uVar2 = 0x8c4bb804;
  FUN_8c268920(0x8c4bb804,ar5_00,ar6,ar7);
  FUN_8c2667cc(uVar2,ar5_00,ar6,ar7);
  *(undefined4 *)((int)0x1a8 + *(int *)puVar1) = 0;
  FUN_8c1f8d98(*(int *)puVar1 + (int)0x1ac,0,ar6,ar7);
  *(undefined4 *)0x8c4ba648 = *(undefined4 *)((int)0x1ac + *(int *)puVar1);
  return 0;
}

__asm__(".globl _FUN_8c2650ec\n.set _FUN_8c2650ec, _FUN_8c2650ec_def\n");
//@unit 8c26518c
#include "../decls.h"
int FUN_8c26518c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_01;
  undefined4 in_stack_ffffffdc;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = &stack0xffffffdc;
  if (DAT_8c2784c0 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    if (*(int *)(DAT_8c2784c0 + 0x160) != 1) {
      iVar2 = *(int *)(DAT_8c2784c0 + 0x1bc);
      FUN_8c26870c(iVar2,&stack0xffffffdc,ar6,ar7);
      if ((char)in_stack_ffffffdc == '\0') {
        iVar4 = 0;
        iVar5 = *(int *)(DAT_8c2784c0 + 0x168);
        iVar3 = 0;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(iVar1 + 0x174);
            *(int *)(iVar1 + 0x174) = iVar2 + 1;
            iVar2 = iVar2 * 0x1c + *(int *)(iVar1 + 0x164);
            if (*(int *)(iVar1 + 0x174) == iVar5) {
              *(undefined4 *)(iVar1 + 0x174) = 0;
            }
            if (*(int *)(iVar2 + 0x14) == 1) {
              ar5_01 = FUN_8c266c48(iVar2,ar5_00,ar6,ar7);
              if (ar5_01 != 0) goto LAB_8c26522c;
              iVar4 = iVar4 + 1;
              if ((iVar4 == 0x20) || (*(int *)(DAT_8c2784c0 + 0x16c) == 0)) break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar5);
        }
        ar5_01 = FUN_8c266b08(iVar2,ar5_00,ar6,ar7);
        goto LAB_8c26522c;
      }
    }
    ar5_01 = 0xb000003;
  }
LAB_8c26522c:
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c26518c,ar5_01,ar6,ar7,in_stack_ffffffdc);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c26518c\n.set _FUN_8c26518c, _FUN_8c26518c_def\n");
//@unit 8c265278
#include "../decls.h"
undefined4 aica_reg_265278_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  FUN_8c1f92c0(0xa0702c00,0x8c4ba650,4,1,1,1);
  ar5_00 = 0xa0702c00;
  ar4_00 = 0x8c4ba650;
  *(undefined4 *)0x8c4ba650 = *(undefined4 *)0x8c4ba650 | 1;
  FUN_8c1f9610(ar4_00,ar5_00,4,1,1,1);
  iVar1 = (int)0x100;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

__asm__(".globl _aica_reg_265278\n.set _aica_reg_265278, _aica_reg_265278_def\n");
//@unit 8c2652f4
#include "../decls.h"
undefined4 aica_reg_2652f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar4_00;
  undefined4 ar5_00;
  int iVar1;
  
  FUN_8c1f92c0(0xa0702c00,(&DATA_8c2784b0),4,1,1,1);
  ar5_00 = 0xa0702c00;
  ar4_00 = (&DATA_8c2784b0);
  *(uint *)(&DATA_8c2784b0) = *(uint *)(&DATA_8c2784b0) & 0xfffffffe;
  FUN_8c1f9610(ar4_00,ar5_00,4,1,1,1);
  iVar1 = (int)0x100;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

__asm__(".globl _aica_reg_2652f4\n.set _aica_reg_2652f4, _aica_reg_2652f4_def\n");
//@unit 8c265374
#include "../decls.h"
int FUN_8c265374_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined1 *ar6_00;
  int *ar7_00;
  int in_stack_ffffffe4;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char cStack_c;
  
  ar6_00 = &stack0xffffffe4;
  ar7_00 = &iStack_18;
  uStack_14 = ar4;
  uStack_10 = ar5;
  cStack_c = (char)ar6;
  ar5_00 = FUN_8c2684f0(ar5,(int)(char)ar6,&stack0xffffffe4,ar7_00);
  if (ar5_00 == 0) {
    if ((in_stack_ffffffe4 == 0) || (iStack_18 < 1)) {
      ar5_00 = 0x7fffffff;
    }
    else {
      ar5_00 = FUN_8c265ff4(uStack_14,in_stack_ffffffe4,ar6_00,ar7_00);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265374,ar5_00,ar6_00,ar7_00,in_stack_ffffffe4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265374\n.set _FUN_8c265374, _FUN_8c265374_def\n");
//@unit 8c2653e0
#include "../decls.h"
int FUN_8c2653e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (&FUN_8c268650);
  puVar1 = (&DATA_8c2784c0);
  iVar4 = *(int *)(&DATA_8c2784c0);
  iVar3 = 0xd000001;
  if (iVar4 != 0) {
    iVar3 = (int)0x1d0;
    iVar5 = *(int *)(0x1cc + iVar4);
    iVar6 = iVar5 + 0x20;
    *(int *)(0x1cc + -0x1c + iVar4) = iVar6;
    (*(code *)puVar2)(iVar6,*(int *)puVar1 + iVar3);
    (*(code *)puVar2)(iVar5 + 0x21,*(int *)puVar1 + (int)0x1d1);
    if ((*(char *)(*(int *)puVar1 + (int)0x1d0) == '\x01') &&
       (*(char *)((int)0x1d1 + *(int *)puVar1) == '\0')) {
      iVar5 = iVar5 + 0x23;
    }
    else {
      iVar5 = iVar5 + 0x22;
    }
    (*(code *)puVar2)(iVar5,(int)0x1d2 + *(int *)puVar1);
    iVar3 = (int)0xa0;
    *(undefined1 *)((int)0x1d3 + *(int *)puVar1) = 0;
    puVar2 = (&aica_ram_268618);
    aica_ram_268618(iVar3 + iVar6,*(int *)puVar1 + (int)0x1b4);
    (*(code *)puVar2)(0xa4 + iVar6,*(int *)puVar1 + (int)0x1b8);
    (*(code *)puVar2)(0xa8 + iVar6,*(int *)puVar1 + (int)0x1bc);
    (*(code *)puVar2)(0xac + iVar6,*(int *)puVar1 + (int)0x1c0);
    (*(code *)puVar2)(0xb0 + iVar6,*(int *)puVar1 + (int)0x1c4);
    (*(code *)puVar2)(0xb4 + iVar6,*(int *)puVar1 + (int)0x1c8);
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    FUN_8c2688a0((&FUN_8c2653e0),iVar3);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2653e0\n.set _FUN_8c2653e0, _FUN_8c2653e0_def\n");
//@unit 8c2653e8
#include "../decls.h"
int FUN_8c2653e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  int *unaff_r14;
  undefined4 in_PR;
  
  iVar1 = *unaff_r14;
  ar5_00 = 0;
  if (iVar1 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x1cc);
    *(int *)(iVar1 + 0x1b0) = iVar2 + 0x20;
    FUN_8c268650(iVar2 + 0x20,*unaff_r14 + 0x1d0,ar6,ar7);
    FUN_8c268650(iVar2 + 0x21,*unaff_r14 + 0x1d1,ar6,ar7);
    if ((*(char *)(*unaff_r14 + 0x1d0) == '\x01') && (*(char *)(*unaff_r14 + 0x1d1) == '\0')) {
      iVar1 = iVar2 + 0x23;
    }
    else {
      iVar1 = iVar2 + 0x22;
    }
    FUN_8c268650(iVar1,*unaff_r14 + 0x1d2,ar6,ar7);
    *(undefined1 *)(*unaff_r14 + 0x1d3) = 0;
    aica_ram_268618(iVar2 + 0xc0,*unaff_r14 + 0x1b4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xc4,*unaff_r14 + 0x1b8,ar6,ar7);
    aica_ram_268618(iVar2 + 200,*unaff_r14 + 0x1bc,ar6,ar7);
    aica_ram_268618(iVar2 + 0xcc,*unaff_r14 + 0x1c0,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd0,*unaff_r14 + 0x1c4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd4,*unaff_r14 + 0x1c8,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2653e0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2653e8\n.set _FUN_8c2653e8, _FUN_8c2653e8_def\n");
//@unit 8c2654f4
#include "../decls.h"
int FUN_8c2654f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x7000103;
  if ((((ar4 != 0) && (piVar3 = *(int **)(ar4 + 8), iVar2 = 0x9000001, *piVar3 == 0x56524453))
      && (iVar2 = 0xb000002, (char)piVar3[1] == '\x01')) && (*(char *)((int)piVar3 + 5) < '\x02')
     ) {
    aica_reg_265278();
    aica_ram_2684b8();
    FUN_8c265704((&DATA_8c2784b8));
    FUN_8c265ea0(*(undefined4 *)(&DATA_8c2784b8),piVar3 + 8,piVar3[2],0xffffffff,0);
    FUN_8c265ff4(*(undefined4 *)(&DATA_8c2784b8),0);
    aica_reg_2652f4();
    puVar1 = (&FUN_8c2653e0);
    for (iVar2 = 0x200000; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    *(undefined4 *)(&DATA_8c2784c4) = 1;
    (*(code *)puVar1)();
    FUN_8c2659dc(ar4);
    iVar2 = 0;
  }
  if (*(int *)(&DATA_8c2784b8) != 0) {
    FUN_8c265784(*(undefined4 *)(&DATA_8c2784b8));
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2654f4),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2654f4\n.set _FUN_8c2654f4, _FUN_8c2654f4_def\n");
//@unit 8c2654fc
#include "../decls.h"
int FUN_8c2654fc_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int unaff_r12;
  int *piVar2;
  int ar5_01;
  undefined4 in_PR;
  
  ar5_01 = 0;
  if (unaff_r12 == 0) {
    ar5_01 = 0x7000103;
  }
  else {
    piVar2 = *(int **)(unaff_r12 + 8);
    if (*piVar2 == 0x56524453) {
      if (((char)piVar2[1] == '\x01') && (*(char *)((int)piVar2 + 5) < '\x02')) {
        aica_reg_265278(ar4,ar5,ar6,ar7);
        aica_ram_2684b8(ar4,ar5,ar6,ar7);
        FUN_8c265704(&DAT_8c2784b8,ar5,ar6,ar7);
        ar7 = 0xffffffff;
        ar6 = piVar2[2];
        FUN_8c265ea0(0,piVar2 + 8,ar6,0xffffffff,0);
        ar5_00 = 0;
        ar4_00 = 0;
        FUN_8c265ff4(0,0,ar6,ar7);
        aica_reg_2652f4(ar4_00,ar5_00,ar6,ar7);
        for (iVar1 = 0x200000; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
        DAT_8c2784c4 = 1;
        FUN_8c2653e0(0,ar5_00,ar6,ar7);
        FUN_8c2659dc(unaff_r12,ar5_00,ar6,ar7);
      }
      else {
        ar5_01 = 0xb000002;
      }
    }
    else {
      ar5_01 = 0x9000001;
    }
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c2654f4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c2654fc\n.set _FUN_8c2654fc, _FUN_8c2654fc_def\n");
//@unit 8c2655f4
#include "../decls.h"
int FUN_8c2655f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = FUN_8c2650ec(0,ar5,ar6,ar7);
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2655f4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2655f4\n.set _FUN_8c2655f4, _FUN_8c2655f4_def\n");
//@unit 8c265620
#include "../decls.h"
int FUN_8c265620_def(int ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int ar5_00;
  int in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      *(undefined4 *)(ar4 + 0x18) = 0;
      ar5_00 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (ar5_00 == 0) {
        ar7 = FUN_8c26592c;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        ar6 = *(undefined4 *)(ar4 + 0xc);
        ar5_00 = aica_ram_266970(*(undefined4 *)(ar4 + 8),ar5,ar6,FUN_8c26592c,ar4);
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265620,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265620\n.set _FUN_8c265620, _FUN_8c265620_def\n");
//@unit 8c265704
#include "../decls.h"
int FUN_8c265704_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ain0;
  int *dst;
  int ar6_00;
  int ar5_00;
  
  ar5_00 = 0;
  ain0 = 0x17c;
  dst = *(int **)(DAT_8c2784c0 + 0x17c);
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = 0;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        ain0 = 0x184;
        *ar4 = dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    ar5_00 = 0x7000101;
    *ar4 = 0;
    ain0 = 1;
  }
LAB_8c26574e:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265704,ar5_00,ar6_00,ar7,ain0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265704\n.set _FUN_8c265704, _FUN_8c265704_def\n");
//@unit 8c26570c
#include "../decls.h"
int FUN_8c26570c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  int *in_r3;
  int *dst;
  int ar6_00;
  int unaff_r14;
  undefined4 in_PR;
  
  dst = *(int **)(*in_r3 + 0x17c);
  if (*in_r3 == 0) {
    unaff_r14 = 0xd000001;
    ar6_00 = 0;
  }
  else {
    ar7 = 0x40;
    ar6_00 = ain1;
    do {
      if (*dst != 1) {
        FUN_8c010794(0x20,dst,&DAT_8c2784d0);
        *ar4 = (int)dst;
        *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + 1;
        goto LAB_8c26574e;
      }
      ar6_00 = ar6_00 + 1;
      dst = dst + 8;
    } while (ar6_00 < 0x40);
    unaff_r14 = 0x7000101;
    *ar4 = ain1;
  }
LAB_8c26574e:
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265704,unaff_r14,ar6_00,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c26570c\n.set _FUN_8c26570c, _FUN_8c26570c_def\n");
//@unit 8c265784
#include "../decls.h"
int FUN_8c265784_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&DATA_8c2784c0);
  iVar2 = 0xd000001;
  if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000102, ar4 != (int *)0x0)) && (*ar4 == 1))
  {
    iVar2 = (int)0x184;
    *ar4 = 0;
    *(int *)(iVar2 + *(int *)puVar1) = *(int *)(iVar2 + *(int *)puVar1) + -1;
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c265784),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c265784\n.set _FUN_8c265784, _FUN_8c265784_def\n");
//@unit 8c26578c
#include "../decls.h"
int FUN_8c26578c_def(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r14 = 0xd000001;
  }
  else {
    ar7 = 0x7000102;
    if (ar4 == (int *)0x0) {
      unaff_r14 = 0x7000102;
    }
    else if (*ar4 == 1) {
      *ar4 = ar6;
      *(int *)(DAT_8c2784c0 + 0x184) = *(int *)(DAT_8c2784c0 + 0x184) + -1;
    }
    else {
      unaff_r14 = 0x7000102;
    }
  }
  if (unaff_r14 != 0) {
    FUN_8c2688a0(FUN_8c265784,unaff_r14,ar6,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c26578c\n.set _FUN_8c26578c, _FUN_8c26578c_def\n");
//@unit 8c2657ec
#include "../decls.h"
int aica_ram_2657ec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  int in_stack_ffffffdc;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffdc,ar6,ar7);
    if (in_stack_ffffffdc == 2) {
      iVar2 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      iVar2 = ar5 + -0x5f800000;
      ar7 = *(undefined4 *)(ar4 + 0xc);
      ar6 = *(undefined4 *)(ar4 + 8);
      uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
      _DAT_8c4bd404 = FUN_8c1f900c(uVar1,iVar2,ar6,ar7,0,1,1,FUN_8c26592c,ar4);
      if (_DAT_8c4bd404 != 0) {
        FUN_8c2658e2(uVar1,iVar2,ar6,ar7,in_stack_ffffffdc);
      }
      iVar2 = FUN_8c265f74(ar4,2,ar6,ar7);
      if (iVar2 == 0) {
        ar5_00 = 0;
        *(int *)(DAT_8c2784c0 + 400) = ar4;
        *(int *)(DAT_8c2784c0 + 0x188) = *(int *)(DAT_8c2784c0 + 0x188) + 1;
        uVar1 = *(undefined4 *)(DAT_8c2784c0 + 0x1ac);
        _DAT_8c4bd404 = FUN_8c1f9194(uVar1,0,ar6,ar7);
        if (_DAT_8c4bd404 != 0) {
          FUN_8c2658e2(uVar1,ar5_00,ar6,ar7,in_stack_ffffffdc);
        }
      }
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(aica_ram_2657ec,iVar2,ar6,ar7,in_stack_ffffffdc);
  }
  return iVar2;
}

__asm__(".globl _aica_ram_2657ec\n.set _aica_ram_2657ec, _aica_ram_2657ec_def\n");
//@unit 8c2658de
#include "../decls.h"
undefined4 noop_2658de_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_2658de\n.set _noop_2658de, _noop_2658de_def\n");
//@unit 8c2658e2
#include "../decls.h"
undefined4 FUN_8c2658e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(int *)(&DATA_8c2784f0) = *(int *)(&DATA_8c2784f0) + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c2658e2\n.set _FUN_8c2658e2, _FUN_8c2658e2_def\n");
//@unit 8c26592c
#include "../decls.h"
uint FUN_8c26592c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  byte in_MD;
  byte bVar3;
  byte in_RB;
  byte bVar4;
  byte in_BL;
  byte bVar5;
  byte in_FD;
  byte bVar6;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte extraout_M_01;
  byte extraout_M_02;
  byte bVar7;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte extraout_Q_01;
  byte extraout_Q_02;
  byte bVar8;
  byte in_IMASK;
  byte bVar9;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_S_01;
  byte extraout_S_02;
  byte bVar10;
  byte in_T;
  byte extraout_T;
  byte extraout_T_00;
  byte bVar11;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  uint uStack_c;
  
  puVar1 = (&FUN_8c2659dc);
  uStack_c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar5 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar3 = bVar5 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar9 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar6 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar5 = (bVar5 & 0x10) >> 4;
  bVar4 = (bVar3 & 0x20) >> 5;
  bVar3 = ((bVar3 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(ar4 + 4) = 1;
  (*(code *)puVar1)(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c2784c0);
  *(undefined4 *)((int)0x190 + *(int *)(&DATA_8c2784c0)) = 0;
  iVar2 = *(int *)puVar1;
  *(int *)(0x18c + iVar2) = *(int *)(0x18c + iVar2) + 1;
  FUN_8c265b68(&iStack_10,ar5,ar6,ar7);
  bVar11 = 0;
  bVar7 = extraout_M;
  bVar8 = extraout_Q;
  bVar10 = extraout_S;
  if (0 < iStack_10) {
    FUN_8c265c50(&uStack_18,&uStack_14,ar6,ar7);
    iVar2 = *(int *)(*(int *)puVar1 + (int)0x1a8);
    if (iVar2 == 0) {
      FUN_8c265ff4(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_01;
      bVar8 = extraout_Q_01;
      bVar10 = extraout_S_01;
      bVar11 = extraout_T;
    }
    else if (iVar2 == 1) {
      aica_ram_2657ec(uStack_18,uStack_14,ar6,ar7);
      bVar7 = extraout_M_02;
      bVar8 = extraout_Q_02;
      bVar10 = extraout_S_02;
      bVar11 = extraout_T_00;
    }
    else {
      bVar11 = 0;
      bVar7 = extraout_M_00;
      bVar8 = extraout_Q_00;
      bVar10 = extraout_S_00;
    }
  }
  return (uStack_c & 0xf) << 4 |
         ((uint)bVar11 | (uint)bVar10 << 1 | (uint)bVar9 << 4 | (uint)bVar8 << 8 | (uint)bVar7 << 9
          | (uint)bVar6 << 0xf | (uint)bVar5 << 0x1c | (uint)bVar4 << 0x1d | (uint)bVar3 << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26592c\n.set _FUN_8c26592c, _FUN_8c26592c_def\n");
//@unit 8c2659dc
#include "../decls.h"
int FUN_8c2659dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0x7000103;
  if ((ar4 != 0) && (iVar2 = iVar1, *(int *)(ar4 + 0x10) != 0)) {
    if (*(int *)(ar4 + 0x10) == -1) {
      *(undefined4 *)(ar4 + 0x18) = 1;
    }
    else {
      (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14));
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2659dc),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2659dc\n.set _FUN_8c2659dc, _FUN_8c2659dc_def\n");
//@unit 8c2659e4
#include "../decls.h"
int FUN_8c2659e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    if (*(int *)(ar4 + 0x10) != 0) {
      if (*(int *)(ar4 + 0x10) == -1) {
        *(undefined4 *)(ar4 + 0x18) = 1;
      }
      else {
        (**(code **)(ar4 + 0x10))(*(undefined4 *)(ar4 + 0x14),ar5,ar6,ar7);
      }
    }
  }
  else {
    unaff_r13 = 0x7000103;
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c2659dc,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c2659e4\n.set _FUN_8c2659e4, _FUN_8c2659e4_def\n");
//@unit 8c265a2c
#include "../decls.h"
int FUN_8c265a2c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = 0;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar5 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    *ar5 = *(undefined4 *)(ar4 + 4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265a2c,ar5_00,ar6,ar7,ar5);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265a2c\n.set _FUN_8c265a2c, _FUN_8c265a2c_def\n");
//@unit 8c265ab0
#include "../decls.h"
undefined4 FUN_8c265ab0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(&DATA_8c2784c0) != 0) {
    *ar4 = *(undefined4 *)((int)0x1a8 + *(int *)(&DATA_8c2784c0));
  }
  return 0;
}

__asm__(".globl _FUN_8c265ab0\n.set _FUN_8c265ab0, _FUN_8c265ab0_def\n");
//@unit 8c265ac8
#include "../decls.h"
int FUN_8c265ac8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int iVar2;
  int ar5_00;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x17c) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x180) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x184) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x188) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x18c) = 0;
    in_r0 = 400;
    *(undefined4 *)(DAT_8c2784c0 + 400) = 0;
    _DAT_8c4bd408 = DAT_8c2784c0 + 0x17c;
    iVar1 = 0;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(0x20,*(int *)(*ar6_00 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ac8\n.set _FUN_8c265ac8, _FUN_8c265ac8_def\n");
//@unit 8c265ace
#include "../decls.h"
int FUN_8c265ace_def(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(*ar6 + 0x17c) = ar4;
    *(int *)(*ar6 + 0x180) = ar5;
    *(int *)(*ar6 + 0x184) = ar7;
    *(int *)(*ar6 + 0x188) = ar7;
    *(int *)(*ar6 + 0x18c) = ar7;
    *(int *)(*ar6 + 400) = ar7;
    _DAT_8c4bd408 = *ar6 + 0x17c;
    iVar1 = ar7;
    iVar3 = ar7;
    if (0 < ar5) {
      do {
        FUN_8c010794(0x20,*(int *)(*ar6 + 0x17c) + iVar1,&DAT_8c2784f8);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ac8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c265ace\n.set _FUN_8c265ace, _FUN_8c265ace_def\n");
//@unit 8c265b68
#include "../decls.h"
int FUN_8c265b68_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    in_r0 = 0x1a4;
    *ar4 = *(undefined4 *)(DAT_8c2784c0 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265b68\n.set _FUN_8c265b68, _FUN_8c265b68_def\n");
//@unit 8c265b6a
#include "../decls.h"
int FUN_8c265b6a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*in_r3 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265b6a\n.set _FUN_8c265b6a, _FUN_8c265b6a_def\n");
//@unit 8c265ba8
#include "../decls.h"
int FUN_8c265ba8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int *ar6_00;
  undefined4 ar7_00;
  int ar5_00;
  int iVar2;
  
  ar7_00 = 0;
  ar6_00 = &DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x194) = ar4;
    iVar2 = 0;
    *(int *)(DAT_8c2784c0 + 0x198) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x19c) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    in_r0 = 0x1a4;
    *(undefined4 *)(DAT_8c2784c0 + 0x1a4) = 0;
    _DAT_8c4bd418 = DAT_8c2784c0 + 0x194;
    iVar1 = 0;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        in_r0 = FUN_8c010794(8,*(int *)(*ar6_00 + 0x194) + iVar1,&DAT_8c278518);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ba8\n.set _FUN_8c265ba8, _FUN_8c265ba8_def\n");
//@unit 8c265bae
#include "../decls.h"
int FUN_8c265bae_def(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(*ar6 + 0x194) = ar4;
    *(int *)(*ar6 + 0x198) = ar5;
    *(int *)(*ar6 + 0x19c) = ar7;
    *(int *)(*ar6 + 0x1a0) = ar7;
    *(int *)(*ar6 + 0x1a4) = ar7;
    _DAT_8c4bd418 = *ar6 + 0x194;
    iVar1 = ar7;
    iVar3 = ar7;
    _DAT_8c4bd410 = ar4;
    _DAT_8c4bd414 = ar5;
    if (0 < ar5) {
      do {
        FUN_8c010794(8,*(int *)(*ar6 + 0x194) + iVar1,&DAT_8c278518);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c265ba8,ar7,ar6,iVar2,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c265bae\n.set _FUN_8c265bae, _FUN_8c265bae_def\n");
//@unit 8c265c50
#include "../decls.h"
int FUN_8c265c50_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  ar7_00 = DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194));
    *ar5 = *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4);
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194)) = 0;
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x1a0) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4) = 0;
    *(int *)(DAT_8c2784c0 + 0x1a0) = *(int *)(DAT_8c2784c0 + 0x1a0) + 1;
    if (*(int *)(DAT_8c2784c0 + 0x1a0) == *(int *)(DAT_8c2784c0 + 0x198)) {
      *(undefined4 *)(DAT_8c2784c0 + 0x1a0) = 0;
    }
    *(int *)(DAT_8c2784c0 + 0x1a4) = *(int *)(DAT_8c2784c0 + 0x1a4) + -1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265c50,ar5_00,&DAT_8c2784c0,ar7_00,
                 (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265c50\n.set _FUN_8c265c50, _FUN_8c265c50_def\n");
//@unit 8c265d38
#include "../decls.h"
int FUN_8c265d38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar7_00;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  ar7_00 = DAT_8c2784c0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (*(int *)(DAT_8c2784c0 + 0x1a4) < *(int *)(DAT_8c2784c0 + 0x198)) {
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x19c) * 8 + *(int *)(DAT_8c2784c0 + 0x194)) = ar4;
    *(undefined4 *)(*(int *)(DAT_8c2784c0 + 0x19c) * 8 + *(int *)(DAT_8c2784c0 + 0x194) + 4) = ar5;
    *(int *)(DAT_8c2784c0 + 0x19c) = *(int *)(DAT_8c2784c0 + 0x19c) + 1;
    if (*(int *)(DAT_8c2784c0 + 0x19c) == *(int *)(DAT_8c2784c0 + 0x198)) {
      *(undefined4 *)(DAT_8c2784c0 + 0x19c) = 0;
    }
    *(int *)(DAT_8c2784c0 + 0x1a4) = *(int *)(DAT_8c2784c0 + 0x1a4) + 1;
  }
  else {
    ar5_00 = 0x5000101;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265d38,ar5_00,&DAT_8c2784c0,ar7_00,
                 (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265d38\n.set _FUN_8c265d38, _FUN_8c265d38_def\n");
//@unit 8c265e08
#include "../decls.h"
undefined4 FUN_8c265e08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  char in_IMASK;
  char in_S;
  byte in_T;
  int aiStack_10 [2];
  
  ar5_00 = aiStack_10;
  if ((((*(int *)(&DATA_8c2784c0) != 0) &&
       ((byte)((in_T | in_S << 1) & 0xf0 | in_IMASK << 4) == 0xf0)) &&
      ((*(code *)(&FUN_8c1f8d48))
                 (*(undefined4 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)),aiStack_10,ar6,ar7),
      aiStack_10[0] == 0)) && (*(int *)((int)0x190 + *(int *)(&DATA_8c2784c0)) != 0)) {
    (*(code *)(&FUN_8c1f8cbc))
              (*(undefined4 *)((int)0x1ac + *(int *)(&DATA_8c2784c0)),ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c265e08\n.set _FUN_8c265e08, _FUN_8c265e08_def\n");
//@unit 8c265e80
#include "../decls.h"
undefined4 FUN_8c265e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 8) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c265e80\n.set _FUN_8c265e80, _FUN_8c265e80_def\n");
//@unit 8c265e88
#include "../decls.h"
undefined4 FUN_8c265e88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0x7000103;
  if (ar4 != 0) {
    *(undefined4 *)(ar4 + 0x10) = ar5;
    *(undefined4 *)(ar4 + 0x14) = ar6;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c265e88\n.set _FUN_8c265e88, _FUN_8c265e88_def\n");
//@unit 8c265ea0
#include "../decls.h"
int FUN_8c265ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  int in_stack_ffffffe0;
  
  ar5_00 = 0;
  uVar1 = ar6;
  uVar2 = ar7;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      FUN_8c265f74(ar4,0,uVar1,uVar2);
      FUN_8c265e80(ar4,ar5,uVar1,uVar2);
      FUN_8c265f7c(ar4,ar6,uVar1,uVar2);
      FUN_8c265e88(ar4,ar7,s0,uVar2);
      FUN_8c265f74(ar4,0,s0,uVar2);
      uVar1 = s0;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ea0,ar5_00,uVar1,uVar2,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ea0\n.set _FUN_8c265ea0, _FUN_8c265ea0_def\n");
//@unit 8c265f74
#include "../decls.h"
undefined4 FUN_8c265f74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c265f74\n.set _FUN_8c265f74, _FUN_8c265f74_def\n");
//@unit 8c265f7c
#include "../decls.h"
undefined4 FUN_8c265f7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c265f7c\n.set _FUN_8c265f7c, _FUN_8c265f7c_def\n");
//@unit 8c265f84
#include "../decls.h"
undefined4 FUN_8c265f84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 a4;
  
  puVar2 = (&FUN_8c2688e0);
  puVar1 = (&DATA_8c2784c0);
  a4 = ar4;
  if (*(int *)(&DATA_8c2784c0) != 0) {
    while (*(int *)((int)0x190 + *(int *)puVar1) != 0) {
      (*(code *)puVar2)(a4,ar5,ar6,ar7);
    }
    *(undefined4 *)((int)0x1a8 + *(int *)puVar1) = ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c265f84\n.set _FUN_8c265f84, _FUN_8c265f84_def\n");
//@unit 8c265ff4
#include "../decls.h"
int FUN_8c265ff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a5;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar1;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  ar5_00 = 0;
  uStack_1c = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = in_stack_ffffffd4;
  uStack_20 = ar5;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&iStack_24,ar6,ar7);
    uVar1 = in_stack_ffffffd4;
    if (iStack_24 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      _DAT_8c4bd404 = 0;
      *(undefined4 *)(ar4 + 0x18) = 0;
      if (*(int *)(DAT_8c2784c0 + 0x1a8) == 0) {
        ar5_00 = FUN_8c265620(ar4,uStack_20,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        if (ar5_00 == 0) {
          return 0;
        }
      }
      else if (((*(int *)(DAT_8c2784c0 + 0x1a8) == 1) &&
               (ar5_00 = FUN_8c265d38(ar4,uStack_20,ar6,ar7), uVar1 = in_stack_ffffffd4, ar5_00 == 0
               )) && (*(int *)(DAT_8c2784c0 + 400) == 0)) {
        FUN_8c265c50(&stack0xffffffd4,&uStack_28,ar6,ar7);
        uVar1 = in_stack_ffffffd4;
        ar5_00 = aica_ram_2657ec(in_stack_ffffffd4,uStack_28,ar6,ar7);
        if ((ar5_00 == 0) && (a5 = uStack_28, *(int *)(ar4 + 0x10) == -1)) {
          while (*(int *)(ar4 + 0x18) != 1) {
            FUN_8c2688e0(in_stack_ffffffd4,a5,ar6,ar7);
            noop_2658de(in_stack_ffffffd4,a5,ar6,ar7);
          }
        }
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ff4,ar5_00,ar6,ar7,uVar1);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ff4\n.set _FUN_8c265ff4, _FUN_8c265ff4_def\n");
//@unit 8c266134
#include "../decls.h"
int FUN_8c266134_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x18,
                    &stack0xfffffff0,ar6,ar7);
    *ar5 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266134,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266134\n.set _FUN_8c266134, _FUN_8c266134_def\n");
//@unit 8c2661a4
#include "../decls.h"
int FUN_8c2661a4_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x11,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2661a4\n.set _FUN_8c2661a4, _FUN_8c2661a4_def\n");
//@unit 8c266214
#include "../decls.h"
int FUN_8c266214_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c26868c(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x1c,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = in_stack_fffffff0 & 0xffff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266214,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266214\n.set _FUN_8c266214, _FUN_8c266214_def\n");
//@unit 8c266288
#include "../decls.h"
int FUN_8c266288_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c26870c(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8),&stack0xfffffff0,ar6,ar7
                );
    *ar5 = in_stack_fffffff0 & 0xff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266288,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266288\n.set _FUN_8c266288, _FUN_8c266288_def\n");
//@unit 8c2662f8
#include "../decls.h"
int FUN_8c2662f8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x10,&stack0xfffffff0,
                 ar6,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2662f8,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2662f8\n.set _FUN_8c2662f8, _FUN_8c2662f8_def\n");
//@unit 8c266368
#include "../decls.h"
int FUN_8c266368_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 2,&stack0xfffffff0,ar6
                 ,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266368,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266368\n.set _FUN_8c266368, _FUN_8c266368_def\n");
//@unit 8c2663d8
#include "../decls.h"
undefined4 FUN_8c2663d8_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 8,&stack0xfffffff0,
                    ar6,ar7);
    *ar5 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2663d8,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return 0;
}

__asm__(".globl _FUN_8c2663d8\n.set _FUN_8c2663d8, _FUN_8c2663d8_def\n");
//@unit 8c266448
#include "../decls.h"
int FUN_8c266448_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 4,&stack0xfffffff0,
                    ar6,ar7);
    iVar1 = in_stack_fffffff0;
    if (in_stack_fffffff0 < 0) {
      iVar1 = in_stack_fffffff0 + 3;
    }
    *ar5 = (short)(iVar1 >> 2);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266448,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266448\n.set _FUN_8c266448, _FUN_8c266448_def\n");
//@unit 8c2664c4
#include "../decls.h"
int FUN_8c2664c4_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c266214(ar4,ar5 + 0x14,ar6,ar7);
    FUN_8c266288(ar4,ar5 + 0x18,ar6,ar7);
    *ar5 = 0;
    ar5[1] = 0;
    FUN_8c266620(ar4,ar5 + 2,ar6,ar7);
    FUN_8c266368(ar4,ar5 + 3,ar6,ar7);
    FUN_8c2663d8(ar4,ar5 + 6,ar6,ar7);
    FUN_8c266448(ar4,ar5 + 8,ar6,ar7);
    FUN_8c2662f8(ar4,ar5 + 4,ar6,ar7);
    FUN_8c2661a4(ar4,ar5 + 5,ar6,ar7);
    FUN_8c266134(ar4,ar5 + 0x10,ar6,ar7);
    in_r0 = FUN_8c2665b0(ar4,ar5 + 0xc,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2664c4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2664c4\n.set _FUN_8c2664c4, _FUN_8c2664c4_def\n");
//@unit 8c2664d4
#include "../decls.h"
int FUN_8c2664d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r11;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r11 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r11 = 0x7000103;
  }
  else {
    FUN_8c266214(unaff_r13,unaff_r14 + 0x14,ar6,ar7);
    FUN_8c266288(unaff_r13,unaff_r14 + 0x18,ar6,ar7);
    *unaff_r14 = (char)unaff_r11;
    unaff_r14[1] = (char)unaff_r11;
    FUN_8c266620(unaff_r13,unaff_r14 + 2,ar6,ar7);
    FUN_8c266368(unaff_r13,unaff_r14 + 3,ar6,ar7);
    FUN_8c2663d8(unaff_r13,unaff_r14 + 6,ar6,ar7);
    FUN_8c266448(unaff_r13,unaff_r14 + 8,ar6,ar7);
    FUN_8c2662f8(unaff_r13,unaff_r14 + 4,ar6,ar7);
    FUN_8c2661a4(unaff_r13,unaff_r14 + 5,ar6,ar7);
    FUN_8c266134(unaff_r13,unaff_r14 + 0x10,ar6,ar7);
    FUN_8c2665b0(unaff_r13,unaff_r14 + 0xc,ar6,ar7);
  }
  if (unaff_r11 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r11,ar6,ar7,in_PR);
  }
  return unaff_r11;
}

__asm__(".globl _FUN_8c2664d4\n.set _FUN_8c2664d4, _FUN_8c2664d4_def\n");
//@unit 8c2665b0
#include "../decls.h"
int FUN_8c2665b0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x14,
                    &stack0xfffffff0,ar6,ar7);
    *ar5 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2665b0,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2665b0\n.set _FUN_8c2665b0, _FUN_8c2665b0_def\n");
//@unit 8c266620
#include "../decls.h"
int FUN_8c266620_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x20 + *(int *)(DAT_8c2784c0 + 0x1b8) + 1,&stack0xfffffff0,ar6
                 ,ar7);
    *ar5 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266620,ar5_00,ar6,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266620\n.set _FUN_8c266620, _FUN_8c266620_def\n");
//@unit 8c266690
#include "../decls.h"
int FUN_8c266690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x7000103;
  if ((ar4 != 0) && (iVar1 = 0, *(int *)(ar4 + 4) != 1)) {
    iVar1 = 0x7000102;
  }
  if (iVar1 != 0) {
    FUN_8c2688a0((&FUN_8c266690),iVar1);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c266690\n.set _FUN_8c266690, _FUN_8c266690_def\n");
//@unit 8c266694
#include "../decls.h"
int FUN_8c266694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (in_T == '\0') {
    if (*(int *)(ar4 + 4) != 1) {
      ar5_00 = 0x7000102;
    }
  }
  else {
    ar5_00 = 0x7000103;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266690,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266694\n.set _FUN_8c266694, _FUN_8c266694_def\n");
//@unit 8c2666cc
#include "../decls.h"
int FUN_8c2666cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  
  ar5_00 = FUN_8c266690(ar4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    *(undefined4 *)(ar4 + 4) = 0;
  }
  else {
    FUN_8c2688a0(FUN_8c2666cc,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2666cc\n.set _FUN_8c2666cc, _FUN_8c2666cc_def\n");
//@unit 8c266708
#include "../decls.h"
int FUN_8c266708_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x7000101;
  iVar3 = *(int *)(&DATA_8c2784c0);
  if (ar5 == 1) {
    iVar2 = 0;
    iVar3 = iVar3 + 8;
    do {
      if (*(int *)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar3 = 0;
    }
  }
  else {
    if (ar5 == 2) {
      iVar2 = 0;
      iVar3 = iVar3 + 0x48;
      do {
        if (*(int *)(iVar3 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    iVar2 = 0x7fffffff;
    if (ar5 != 3) goto LAB_8c2667a0;
    iVar2 = 0;
    iVar3 = 0x88 + iVar3;
    do {
      if (*(int *)(iVar3 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < 4);
    if (iVar2 == 4) goto LAB_8c266782;
  }
  if (iVar3 == 0) {
    *ar4 = 0;
    iVar2 = iVar1;
  }
  else {
    *ar4 = iVar3;
    *(undefined4 *)(iVar3 + 4) = 1;
    iVar2 = 0;
  }
LAB_8c2667a0:
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c266708),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c266708\n.set _FUN_8c266708, _FUN_8c266708_def\n");
//@unit 8c266710
#include "../decls.h"
int FUN_8c266710_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int ar6_00;
  int iVar2;
  int unaff_r13;
  undefined4 in_PR;
  
  ar6_00 = 8;
  iVar2 = unaff_r13;
  if (ain0 == 1) {
    iVar1 = DAT_8c2784c0 + 8;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 8;
    } while (iVar2 < 8);
joined_r0x8c266742:
    if (iVar2 == 8) {
LAB_8c266782:
      iVar1 = unaff_r13;
    }
  }
  else {
    if (ain0 == 2) {
      iVar1 = DAT_8c2784c0 + 0x48;
      do {
        if (*(int *)(iVar1 + 4) != 1) break;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < 8);
      goto joined_r0x8c266742;
    }
    if (ain0 != 3) {
      iVar2 = DAT_8c2784c0;
      iVar1 = 0x7fffffff;
      goto LAB_8c2667a0;
    }
    iVar1 = DAT_8c2784c0 + 0x88;
    iVar2 = 4;
    ar6_00 = unaff_r13;
    do {
      if (*(int *)(iVar1 + 4) != 1) break;
      ar6_00 = ar6_00 + 1;
      iVar1 = iVar1 + 8;
    } while (ar6_00 < 4);
    if (ar6_00 == 4) goto LAB_8c266782;
  }
  if (iVar1 == 0) {
    iVar1 = 0x7000101;
    *ar4 = unaff_r13;
  }
  else {
    *ar4 = iVar1;
    *(undefined4 *)(iVar1 + 4) = 1;
    iVar1 = unaff_r13;
  }
LAB_8c2667a0:
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c266708,iVar1,ar6_00,iVar2,in_PR);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c266710\n.set _FUN_8c266710, _FUN_8c266710_def\n");
//@unit 8c2667cc
#include "../decls.h"
undefined4 FUN_8c2667cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (&DATA_8c2784c0);
  uVar4 = (uint)0xa8;
  uVar3 = 0;
  do {
    *(undefined1 *)(*(int *)puVar1 + uVar3 + 1) = 0;
    iVar2 = *(int *)puVar1 + uVar3;
    uVar3 = uVar3 + 8;
    *(undefined4 *)(iVar2 + 4) = 0;
  } while (uVar3 < uVar4);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 9) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 8) = 1;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    *(char *)(*(int *)puVar1 + uVar3 * 8 + 0x49) = (char)uVar3;
    *(undefined1 *)(uVar3 * 8 + *(int *)puVar1 + 0x48) = 2;
    uVar3 = uVar4;
  } while (uVar4 < 8);
  uVar3 = 0;
  do {
    iVar5 = uVar3 * 8;
    iVar2 = (int)0x88;
    *(char *)((int)0x88 + *(int *)puVar1 + iVar5 + 1) = (char)uVar3;
    uVar3 = uVar3 + 1;
    *(undefined1 *)(iVar5 + iVar2 + *(int *)puVar1) = 3;
  } while (uVar3 < 4);
  *(undefined1 *)(*(int *)puVar1 + 1) = 0;
  **(undefined1 **)puVar1 = 9;
  return 0;
}

__asm__(".globl _FUN_8c2667cc\n.set _FUN_8c2667cc, _FUN_8c2667cc_def\n");
//@unit 8c26686a
#include "../decls.h"
int FUN_8c26686a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (((char)ar5 < '\0') || (' ' < (char)ar5)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26686a,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26686a\n.set _FUN_8c26686a, _FUN_8c26686a_def\n");
//@unit 8c26686e
#include "../decls.h"
int FUN_8c26686e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if ((ar4 < 0) || (0x20 < ar4)) {
    ar5_00 = 0x3000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(&LAB_8c26686a,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26686e\n.set _FUN_8c26686e, _FUN_8c26686e_def\n");
//@unit 8c266892
#include "../decls.h"
int FUN_8c266892_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (char)ar5;
  if ((cVar1 < '\0') || ('\x10' < cVar1)) {
    iVar2 = 0x3000001;
  }
  else {
    iVar2 = FUN_8c266690(ar4,ar5,ar6,ar7);
    iVar2 = -((iVar2 == 0) - 1);
    if (iVar2 == 0) {
      return 0;
    }
    *(char *)(ar4 + 2) = cVar1;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c266892,iVar2,ar6,ar7,ar4);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c266892\n.set _FUN_8c266892, _FUN_8c266892_def\n");
//@unit 8c2668fc
#include "../decls.h"
int aica_ram_2668fc_def(int ar4,uint ar5,uint ar6,int ar7)

{
  uint ar6_00;
  int iVar1;
  int ar5_00;
  
  ar5_00 = 0;
  if (((ar5 & 3) == 0) && ((ar6 & 3) == 0)) {
    iVar1 = ar6 + 3;
    if (iVar1 < 0) {
      iVar1 = ar6 + 6;
    }
    ar7 = iVar1 >> 2;
    ar6_00 = 4;
    _DAT_8c4bd404 = FUN_8c1f92c0(ar4 + -0x5f800000,ar5,4,ar7,1,1);
  }
  else {
    ar5_00 = 0x7fffffff;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(aica_ram_2668fc,ar5_00,ar6_00,ar7,ar6);
  }
  return ar5_00;
}

__asm__(".globl _aica_ram_2668fc\n.set _aica_ram_2668fc, _aica_ram_2668fc_def\n");
//@unit 8c266970
#include "../decls.h"
int aica_ram_266970_def(uint ar4,int ar5,uint ar6,code *ar7,undefined4 s0)

{
  int ar5_00;
  uint uVar1;
  code *ar7_00;
  int ar5_01;
  
  ar5_01 = 0;
  if (((ar4 & 3) == 0) && ((ar6 & 3) == 0)) {
    uVar1 = ar6;
    if ((int)ar6 < 0) {
      uVar1 = ar6 + 3;
    }
    ar7_00 = (code *)((int)uVar1 >> 2);
    ar5_00 = ar5 + -0x5f800000;
    uVar1 = 4;
    _DAT_8c4bd404 = FUN_8c1f9610(ar4,ar5_00,4,ar7_00,1,1);
    if ((ar7 != (code *)0x0) && (ar7 != (code *)0xffffffff)) {
      (*ar7)(s0,ar5_00,uVar1,ar7_00);
    }
  }
  else {
    ar5_01 = 0x7fffffff;
    uVar1 = ar6;
    ar7_00 = ar7;
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(aica_ram_266970,ar5_01,uVar1,ar7_00,ar6);
  }
  return ar5_01;
}

__asm__(".globl _aica_ram_266970\n.set _aica_ram_266970, _aica_ram_266970_def\n");
//@unit 8c2669f4
#include "../decls.h"
int FUN_8c2669f4_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int *piVar4;
  int ar4_00;
  
  ar4_00 = 0;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    piVar3 = *(int **)(ar4 + 8);
    if (*piVar3 == 0x544c4d53) {
      FUN_8c265704(&stack0xffffffdc,ar5,ar6,ar7);
      iVar1 = piVar3[2];
      piVar4 = piVar3 + 8;
      if ((char)piVar3[1] < '\x01') {
        if (piVar3[4] != -1) {
          piVar4 = piVar3 + 4;
        }
        ar5_00 = 0x9000002;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if (-1 < piVar4[3]) {
            ar5 = piVar4[1];
            ar7 = piVar4[3];
            ar6 = piVar4[2];
            ar5_00 = FUN_8c268320(*piVar4,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          if (0 < piVar4[5]) {
            ar7 = -1;
            ar6 = piVar4[5];
            ar5 = piVar4[4] + (int)piVar3;
            ar5_00 = FUN_8c265ea0(ar4_00,ar5,ar6,0xffffffff,0);
            if (ar5_00 != 0) break;
            ar5 = *piVar4;
            ar6 = piVar4[1];
            ar5_00 = FUN_8c265374(ar4_00,ar5,ar6,ar7);
            if (ar5_00 != 0) break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 8;
        } while (iVar2 < iVar1);
      }
    }
    else {
      ar5_00 = 0x9000001;
    }
  }
  if (ar4_00 != 0) {
    FUN_8c265784(ar4_00,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2669f4,ar5_00,ar6,ar7,ar4_00);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2669f4\n.set _FUN_8c2669f4, _FUN_8c2669f4_def\n");
//@unit 8c266b08
#include "../decls.h"
undefined4 FUN_8c266b08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  undefined *ar7_00;
  
  if (*(int *)(DAT_8c2784c0 + 0x15c) != 0) {
    *(undefined4 *)(DAT_8c2784c0 + 0x160) = 1;
    if ((*(uint *)(DAT_8c2784c0 + 0x15c) & 1) != 0) {
      *(int *)(DAT_8c2784c0 + 0x15c) = *(int *)(DAT_8c2784c0 + 0x15c) + 1;
    }
    ar7_00 = (undefined *)0x8c266b70;
    ar6_00 = *(int *)(DAT_8c2784c0 + 0x15c) << 4;
    FUN_8c265ea0(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x158),ar6_00,
                 (undefined *)0x8c266b70,DAT_8c2784c0 + 0x158);
    FUN_8c265ff4(*(undefined4 *)(DAT_8c2784c0 + 0x178),*(undefined4 *)(DAT_8c2784c0 + 0x1c4),ar6_00,
                 ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c266b08\n.set _FUN_8c266b08, _FUN_8c266b08_def\n");
//@unit 8c266b0e
#include "../decls.h"
undefined4 FUN_8c266b0e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar6_00;
  undefined *ar7_00;
  int *unaff_r14;
  
  if (*(int *)(in_r0 + *unaff_r14) != 0) {
    iVar1 = (int)0x160;
    *(undefined4 *)(iVar1 + *unaff_r14) = 1;
    if ((*(uint *)(iVar1 + -4 + *unaff_r14) & 1) != 0) {
      *(int *)((int)0x15c + *unaff_r14) = *(int *)((int)0x15c + *unaff_r14) + 1;
    }
    iVar1 = (int)0x15c;
    ar6_00 = *(int *)(iVar1 + *unaff_r14) << 4;
    ar7_00 = (&DATA_8c266b70);
    (*(code *)(&FUN_8c265ea0))
              (*(undefined4 *)(iVar1 + 0x1c + *unaff_r14),*(undefined4 *)(iVar1 + -4 + *unaff_r14),
               ar6_00,(&DATA_8c266b70),(int)0x158 + *unaff_r14);
    (*(code *)(&FUN_8c265ff4))
              (*(undefined4 *)(0x1c4 + -0x4c + *unaff_r14),
               *(undefined4 *)((int)0x1c4 + *unaff_r14),ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c266b0e\n.set _FUN_8c266b0e, _FUN_8c266b0e_def\n");
//@unit 8c266b76
#include "../decls.h"
int FUN_8c266b76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  FUN_8c2687c8(*(undefined4 *)((int)0x1bc + *unaff_r14),ar5,ar6,ar7);
  for (iVar2 = 0; iVar1 = (int)0x15c, iVar2 < *(int *)(iVar1 + *unaff_r14); iVar2 = iVar2 + 1
      ) {
    *(undefined1 *)(iVar2 * 0x10 + *(int *)((int)0x158 + *unaff_r14)) = 0;
  }
  *(undefined4 *)(iVar1 + *unaff_r14) = 0;
  *(undefined4 *)(iVar1 + 4 + *unaff_r14) = 0;
  return iVar1 + 4;
}

__asm__(".globl _FUN_8c266b76\n.set _FUN_8c266b76, _FUN_8c266b76_def\n");
//@unit 8c266bd4
#include "../decls.h"
int FUN_8c266bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = (&memset);
  puVar2 = 0x8c4bd420;
  puVar1 = (&DATA_8c2784c0);
  iVar4 = 0xd000001;
  if (*(int *)(&DATA_8c2784c0) != 0) {
    iVar4 = (int)0x200;
    *(undefined4 *)((int)0x158 + *(int *)(&DATA_8c2784c0)) = ar4;
    *puVar2 = ar4;
    (*(code *)puVar3)(0,iVar4);
    *(undefined4 *)((int)0x160 + *(int *)puVar1) = 0;
    iVar4 = FUN_8c265704(*(int *)puVar1 + (int)0x178);
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c266bd4),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266bd4\n.set _FUN_8c266bd4, _FUN_8c266bd4_def\n");
//@unit 8c266bda
#include "../decls.h"
int FUN_8c266bda_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int *unaff_r13;
  int ar5_01;
  undefined4 in_PR;
  
  if (*unaff_r13 == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    ar6 = 0x200;
    *(undefined4 *)(*unaff_r13 + 0x158) = ar4;
    ar5_00 = 0;
    _DAT_8c4bd420 = ar4;
    memset(ar4,0,0x200,ar7);
    *(undefined4 *)(*unaff_r13 + 0x160) = 0;
    ar5_01 = FUN_8c265704(*unaff_r13 + 0x178,ar5_00,ar6,ar7);
  }
  if (ar5_01 != 0) {
    FUN_8c2688a0(FUN_8c266bd4,ar5_01,ar6,ar7,in_PR);
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c266bda\n.set _FUN_8c266bda, _FUN_8c266bda_def\n");
//@unit 8c266c48
#include "../decls.h"
int FUN_8c266c48_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = (int)0x15c;
  iVar3 = *(int *)(&DATA_8c2784c0);
  iVar4 = 0xa000001;
  if (*(int *)(iVar2 + iVar3) < 0x20) {
    iVar4 = *(int *)(iVar2 + iVar3);
    *(int *)(iVar2 + iVar3) = iVar4 + 1;
    puVar1 = (&memmove);
    puVar5 = (undefined1 *)(iVar4 * 0x10 + *(int *)(iVar2 + -4 + iVar3));
    *puVar5 = (char)*ar4;
    (*(code *)puVar1)(puVar5 + 2,ar4 + 1,0xe,0);
    puVar1 = (&DATA_8c2784c0);
    iVar4 = (int)0x16c;
    ar4[5] = 0;
    *(int *)(iVar4 + *(int *)puVar1) = *(int *)(iVar4 + *(int *)puVar1) + -1;
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c266c48),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266c48\n.set _FUN_8c266c48, _FUN_8c266c48_def\n");
//@unit 8c266c54
#include "../decls.h"
int FUN_8c266c54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int *in_r3;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *unaff_r13;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = *in_r3;
  ar5_00 = 0;
  if (*(int *)(ain0 + iVar1) < in_r2) {
    iVar2 = *(int *)(ain0 + iVar1);
    *(int *)(ain0 + iVar1) = iVar2 + 1;
    puVar3 = (undefined1 *)(iVar2 * 0x10 + *(int *)(ain0 + -4 + iVar1));
    *puVar3 = (char)*unaff_r13;
    ar6 = 0xe;
    memmove(puVar3 + 2,unaff_r13 + 1,0xe,ar7);
    unaff_r13[5] = 0;
    *(int *)(DAT_8c2784c0 + 0x16c) = *(int *)(DAT_8c2784c0 + 0x16c) + -1;
  }
  else {
    ar5_00 = 0xa000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266c48,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266c54\n.set _FUN_8c266c54, _FUN_8c266c54_def\n");
//@unit 8c266ccc
#include "../decls.h"
int FUN_8c266ccc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ccc,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266ccc\n.set _FUN_8c266ccc, _FUN_8c266ccc_def\n");
//@unit 8c266cce
#include "../decls.h"
int FUN_8c266cce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ccc,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266cce\n.set _FUN_8c266cce, _FUN_8c266cce_def\n");
//@unit 8c266d1c
#include "../decls.h"
undefined4 thunk_FUN_8c266ccc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c266ccc();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c266ccc\n.set _thunk_FUN_8c266ccc, _thunk_FUN_8c266ccc_def\n");
//@unit 8c266d28
#include "../decls.h"
int FUN_8c266d28_def(int ar4,undefined4 ar5,int *ar6,undefined1 *ar7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int ar5_00;
  int in_stack_ffffffd8;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  ar5_00 = 0;
  piVar2 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (int *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    piVar3 = (int *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xa8);
    aica_ram_268618(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                    0x418,&stack0xffffffd8,ar6,ar7);
    ar7 = auStack_18;
    piVar2 = &iStack_1c;
    FUN_8c2684f0(0x52535053,(int)*(char *)((int)piVar3 + (char)ar5 + 7),piVar2,ar7);
    iVar1 = *piVar3;
    if (iVar1 == 1) {
      in_stack_ffffffd8 = in_stack_ffffffd8 * 2;
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      in_stack_ffffffd8 = (int)(in_stack_ffffffd8 + (uint)(in_stack_ffffffd8 < 0)) >> 1;
    }
    *ar6 = in_stack_ffffffd8;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266d28,ar5_00,piVar2,ar7,in_stack_ffffffd8);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266d28\n.set _FUN_8c266d28, _FUN_8c266d28_def\n");
//@unit 8c266e20
#include "../decls.h"
undefined4 thunk_FUN_8c266d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c266d28();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c266d28\n.set _thunk_FUN_8c266d28, _thunk_FUN_8c266d28_def\n");
//@unit 8c266e2c
#include "../decls.h"
undefined4 FUN_8c266e2c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int ar6_00;
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 *puStack_c;
  
  ar6_00 = *(int *)(&DATA_8c2784c0);
  uVar1 = 0xd000001;
  if (((ar6_00 != 0) && (uVar1 = 0x7000103, ar4 != 0)) &&
     (uVar1 = 0x7000203, ar6 != (undefined1 *)0x0)) {
    puStack_c = ar6;
    (*(code *)(&FUN_8c268650))
              (*(char *)(ar4 + 1) * 0x40 + (int)0x400 + *(int *)(0x1b8 + ar6_00) +
               (char)ar5 * 0x20 + 0x11,auStack_10,ar6_00,ar7);
    *puStack_c = auStack_10[0];
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c266e2c\n.set _FUN_8c266e2c, _FUN_8c266e2c_def\n");
//@unit 8c266ea8
#include "../decls.h"
int FUN_8c266ea8_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x41c,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266ea8,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266ea8\n.set _FUN_8c266ea8, _FUN_8c266ea8_def\n");
//@unit 8c266f38
#include "../decls.h"
int FUN_8c266f38_def(int ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  uint in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (uint *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    FUN_8c26870c(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + 0x400 +
                 (char)ar5 * 0x20,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0 & 0xff;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266f38,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266f38\n.set _FUN_8c266f38, _FUN_8c266f38_def\n");
//@unit 8c266fc8
#include "../decls.h"
int FUN_8c266fc8_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined1 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                 0x410,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266fc8,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266fc8\n.set _FUN_8c266fc8, _FUN_8c266fc8_def\n");
//@unit 8c267058
#include "../decls.h"
int FUN_8c267058_def(int ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  ar5_00 = 0;
  pcVar4 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (char *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0;
    FUN_8c268650(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                 0x402,&stack0xffffffe0,ar6,ar7);
    cVar3 = (char)in_stack_ffffffe0;
    cVar1 = *(char *)(iVar2 + 0xad);
    if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
      if ((char)ar5 == '\0') {
        cVar3 = cVar3 + '@';
      }
      else if ((char)ar5 == '\x01') {
        if (cVar3 == '\0') {
          cVar3 = -1;
        }
        cVar3 = cVar3 + -0x40;
      }
      cVar3 = cVar3 * '\x02';
    }
    *ar6 = cVar3;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267058,ar5_00,pcVar4,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267058\n.set _FUN_8c267058, _FUN_8c267058_def\n");
//@unit 8c267130
#include "../decls.h"
int FUN_8c267130_def(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined2 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x408,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267130,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267130\n.set _FUN_8c267130, _FUN_8c267130_def\n");
//@unit 8c2671c0
#include "../decls.h"
int FUN_8c2671c0_def(int ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined2 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_268618(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x404,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (short)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2671c0,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2671c0\n.set _FUN_8c2671c0, _FUN_8c2671c0_def\n");
//@unit 8c267250
#include "../decls.h"
int FUN_8c267250_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0xd000001;
  if ((*(int *)(&DATA_8c2784c0) != 0) && (iVar2 = 0x7000103, ar4 != 0)) {
    FUN_8c266ea8(ar4,ar5,ar6 + 0x14);
    FUN_8c266f38(ar4,ar5,ar6 + 0x18);
    puVar1 = (&FUN_8c2673f0);
    *ar6 = 0;
    ar6[1] = 0;
    (*(code *)puVar1)(ar4,ar5,ar6 + 2);
    FUN_8c267058(ar4,ar5,ar6 + 3);
    FUN_8c267130(ar4,ar5,ar6 + 6);
    FUN_8c2671c0(ar4,ar5,ar6 + 8);
    FUN_8c266fc8(ar4,ar5,ar6 + 4);
    FUN_8c266e2c(ar4,ar5,ar6 + 5);
    FUN_8c266d28(ar4,ar5,ar6 + 0x10);
    FUN_8c267360(ar4,ar5,ar6 + 0xc);
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2664c4),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267250\n.set _FUN_8c267250, _FUN_8c267250_def\n");
//@unit 8c267264
#include "../decls.h"
int FUN_8c267264_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int *in_r2;
  int unaff_r10;
  undefined4 unaff_r12;
  int unaff_r13;
  undefined1 *unaff_r14;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    unaff_r10 = 0xd000001;
  }
  else if (unaff_r13 == 0) {
    unaff_r10 = 0x7000103;
  }
  else {
    FUN_8c266ea8(unaff_r13,unaff_r12,unaff_r14 + 0x14,ar7);
    FUN_8c266f38(unaff_r13,unaff_r12,unaff_r14 + 0x18,ar7);
    *unaff_r14 = (char)unaff_r10;
    unaff_r14[1] = (char)unaff_r10;
    FUN_8c2673f0(unaff_r13,unaff_r12,unaff_r14 + 2,ar7);
    FUN_8c267058(unaff_r13,unaff_r12,unaff_r14 + 3,ar7);
    FUN_8c267130(unaff_r13,unaff_r12,unaff_r14 + 6,ar7);
    FUN_8c2671c0(unaff_r13,unaff_r12,unaff_r14 + 8,ar7);
    FUN_8c266fc8(unaff_r13,unaff_r12,unaff_r14 + 4,ar7);
    FUN_8c266e2c(unaff_r13,unaff_r12,unaff_r14 + 5,ar7);
    FUN_8c266d28(unaff_r13,unaff_r12,unaff_r14 + 0x10,ar7);
    ar6 = unaff_r14 + 0xc;
    FUN_8c267360(unaff_r13,unaff_r12,ar6,ar7);
  }
  if (unaff_r10 != 0) {
    FUN_8c2688a0(&LAB_8c2664c4,unaff_r10,ar6,ar7,in_PR);
  }
  return unaff_r10;
}

__asm__(".globl _FUN_8c267264\n.set _FUN_8c267264, _FUN_8c267264_def\n");
//@unit 8c267354
#include "../decls.h"
undefined4 thunk_FUN_8c267250_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267250();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c267250\n.set _thunk_FUN_8c267250, _thunk_FUN_8c267250_def\n");
//@unit 8c267360
#include "../decls.h"
int FUN_8c267360_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (undefined4 *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    aica_ram_2686d4(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                    0x414,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267360,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267360\n.set _FUN_8c267360, _FUN_8c267360_def\n");
//@unit 8c2673f0
#include "../decls.h"
int FUN_8c2673f0_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 in_stack_fffffff0;
  
  ar5_00 = 0;
  iVar1 = DAT_8c2784c0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c268650(*(char *)(ar4 + 1) * 0x40 + *(int *)(DAT_8c2784c0 + 0x1b8) + (char)ar5 * 0x20 +
                 0x401,&stack0xfffffff0,DAT_8c2784c0,ar7);
    *ar6 = (char)in_stack_fffffff0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2673f0,ar5_00,iVar1,ar7,in_stack_fffffff0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2673f0\n.set _FUN_8c2673f0, _FUN_8c2673f0_def\n");
//@unit 8c267470
#include "../decls.h"
int FUN_8c267470_def(int *ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0,undefined4 s4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int ar5_00;
  undefined4 *puVar4;
  undefined1 auStackY_a0 [128];
  undefined4 in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
LAB_8c2674f6:
    ar5_00 = 0x3000001;
  }
  else {
    if (((int)&s0 + 1U & 3) == 0) {
      puVar4 = (undefined4 *)((int)&s0 + 1);
    }
    else {
      puVar4 = &s4;
    }
    for (ar6 = 0; ar6 < (char)s0; ar6 = ar6 + 1) {
      puVar1 = puVar4 + 1;
      if (((uint)puVar1 & 3) != 0) {
        puVar1 = puVar4 + 2;
      }
      puVar4 = puVar1 + -1;
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = puVar1 + -2;
      }
      (&stack0xffffffe0)[ar6] = (char)*puVar4;
      ar7 = (int)(char)(&stack0xffffffe0)[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c2674f6;
      puVar4 = puVar1;
    }
    puVar2 = &stack0xffffffe0 + (char)s0;
    if (puVar2 < &stack0xffffffe2) {
      ar6 = -1;
      do {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (puVar2 < &stack0xffffffe2);
    }
    ar5_00 = FUN_8c266708(ar4,3,ar6,ar7);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(DAT_8c2784c0 + 0xa8 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar4 = 1;
      *(char *)(puVar4 + 1) = (char)s0;
      FUN_8c267d88(*ar4,(int)(char)s0,ar6,ar7);
      FUN_8c267924(*ar4,0,ar6,ar7);
      for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
        *(undefined1 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
        puVar4[iVar3 + 3] = 1;
        puVar4[iVar3 + 5] = 0;
        puVar4[iVar3 + 9] = 0;
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267470,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267470\n.set _FUN_8c267470, _FUN_8c267470_def\n");
//@unit 8c2675d8
#include "../decls.h"
int FUN_8c2675d8_def(int *ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0,undefined4 s4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int ar5_00;
  undefined4 *puVar4;
  undefined1 auStackY_a0 [128];
  undefined4 in_stack_ffffffe0;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (((char)s0 < '\x01') || ('\x02' < (char)s0)) {
LAB_8c26765e:
    ar5_00 = 0x3000001;
  }
  else {
    if (((int)&s0 + 1U & 3) == 0) {
      puVar4 = (undefined4 *)((int)&s0 + 1);
    }
    else {
      puVar4 = &s4;
    }
    for (ar6 = 0; ar6 < (char)s0; ar6 = ar6 + 1) {
      puVar1 = puVar4 + 1;
      if (((uint)puVar1 & 3) != 0) {
        puVar1 = puVar4 + 2;
      }
      puVar4 = puVar1 + -1;
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = puVar1 + -2;
      }
      (&stack0xffffffe0)[ar6] = (char)*puVar4;
      ar7 = (int)(char)(&stack0xffffffe0)[ar6];
      if ((ar7 < 0) || (0xf < ar7)) goto LAB_8c26765e;
      puVar4 = puVar1;
    }
    puVar2 = &stack0xffffffe0 + (char)s0;
    if (puVar2 < &stack0xffffffe2) {
      ar6 = -1;
      do {
        *puVar2 = 0xff;
        puVar2 = puVar2 + 1;
      } while (puVar2 < &stack0xffffffe2);
    }
    ar5_00 = FUN_8c266708(ar4,3,ar6,ar7);
    if (ar5_00 == 0) {
      puVar4 = (undefined4 *)(DAT_8c2784c0 + 0xa8 + (short)*(char *)(*ar4 + 1) * 0x2c);
      *puVar4 = 1;
      *(char *)(puVar4 + 1) = (char)s0;
      FUN_8c267d88(*ar4,(int)(char)s0,ar6,ar7);
      FUN_8c267924(*ar4,0,ar6,ar7);
      for (iVar3 = 0; iVar3 < (char)s0; iVar3 = iVar3 + 1) {
        *(undefined1 *)((int)puVar4 + iVar3 + 7) = (&stack0xffffffe0)[iVar3];
        puVar4[iVar3 + 3] = 1;
        puVar4[iVar3 + 5] = 0;
        puVar4[iVar3 + 9] = 0;
      }
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267470,ar5_00,ar6,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2675d8\n.set _FUN_8c2675d8, _FUN_8c2675d8_def\n");
//@unit 8c267740
#include "../decls.h"
int FUN_8c267740_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  
  iVar7 = 0xd000001;
  if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar7 = 0x7000103, ar4 != 0)) &&
     (iVar7 = 0x3000001, ((byte)ar7 & 0xf0) == 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    piVar6 = (int *)((short)(char)bVar1 * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0));
    *piVar6 = ar5;
    pbVar9 = 0x8c4bd42c;
    puVar2 = 0x8c4bd428;
    iVar7 = 0x3000001;
    if (*(char *)((int)piVar6 + 5) == '\x01') {
      bVar10 = 0;
    }
    else {
      if (*(char *)((int)piVar6 + 5) != '\x02') goto LAB_8c267802;
      bVar10 = (byte)0x80;
    }
    iVar5 = *piVar6;
    if (iVar5 == 1) {
      bVar8 = 0;
    }
    else if (iVar5 == 0) {
      bVar8 = 0x10;
    }
    else {
      if (iVar5 != 2) goto LAB_8c267802;
      bVar8 = 0x30;
    }
    piVar6[3] = 0;
    piVar6[4] = 0;
    *puVar2 = 0x21;
    puVar3 = 0x8c4bd42d;
    *pbVar9 = bVar1 | bVar10 | bVar8;
    *puVar3 = *(undefined1 *)((int)piVar6 + 6);
    *(char *)((int)puVar2 + 6) = (char)ar6;
    pcVar4 = 0x8c4bd430;
    pbVar9[3] = (byte)((uint)ar6 >> 8);
    *pcVar4 = (byte)ar7 << 3;
    pbVar9 = (byte *)((int)piVar6 + 7);
    for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      ((undefined1 *)iVar7)[0x8c4bd42c] = bVar1;
    }
    iVar7 = FUN_8c267fe8(0x8c4bd428,FUN_8c267740);
  }
LAB_8c267802:
  if (iVar7 != 0) {
    FUN_8c2688a0((&FUN_8c267740),iVar7);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c267740\n.set _FUN_8c267740, _FUN_8c267740_def\n");
//@unit 8c267744
#include "../decls.h"
int FUN_8c267744_def(int ar4,int ar5,undefined1 *ar6,uint ar7)

{
  undefined1 uVar1;
  byte bVar2;
  int *in_r3;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_PR;
  
  if (*in_r3 == 0) {
    iVar6 = 0xd000001;
    goto LAB_8c267802;
  }
  if (ar4 == 0) {
    iVar6 = 0x7000103;
    goto LAB_8c267802;
  }
  if ((ar7 & 0xf0) == 0) {
    bVar2 = *(byte *)(ar4 + 1);
    piVar3 = (int *)((short)(char)bVar2 * 0x2c + *in_r3 + 0xa8);
    *piVar3 = ar5;
    if (*(char *)((int)piVar3 + 5) == '\x01') {
      bVar5 = 0;
    }
    else {
      if (*(char *)((int)piVar3 + 5) != '\x02') goto LAB_8c2677e6;
      bVar5 = 0x80;
    }
    iVar6 = *piVar3;
    if (iVar6 == 1) {
      bVar4 = 0;
    }
    else if (iVar6 == 0) {
      bVar4 = 0x10;
    }
    else {
      if (iVar6 != 2) goto LAB_8c2677e6;
      bVar4 = 0x30;
    }
    DAT_8c4bd42c = bVar2 | bVar5 | bVar4;
    piVar3[3] = 0;
    piVar3[4] = 0;
    _DAT_8c4bd428 = 0x21;
    DAT_8c4bd42d = *(undefined1 *)((int)piVar3 + 6);
    ar7 = (int)(char)ar7 << 3;
    DAT_8c4bd42e = SUB41(ar6,0);
    DAT_8c4bd42f = (undefined1)((uint)ar6 >> 8);
    DAT_8c4bd430 = (undefined1)ar7;
    ar6 = (undefined1 *)((int)piVar3 + 7);
    for (iVar6 = 5; iVar6 < 7; iVar6 = iVar6 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      (&DAT_8c4bd42c)[iVar6] = uVar1;
    }
    iVar6 = FUN_8c267fe8(&DAT_8c4bd428,7,ar6,ar7);
  }
  else {
LAB_8c2677e6:
    iVar6 = 0x3000001;
  }
LAB_8c267802:
  if (iVar6 != 0) {
    FUN_8c2688a0(FUN_8c267740,iVar6,ar6,ar7,in_PR);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c267744\n.set _FUN_8c267744, _FUN_8c267744_def\n");
//@unit 8c26784c
#include "../decls.h"
int FUN_8c26784c_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int ar5_00;
  uint *puVar1;
  undefined4 in_PR;
  
  puVar1 = &DAT_8c278520;
  do {
    if ((int)*puVar1 < 1) {
      ar5_00 = 0x3000001;
LAB_8c267878:
      if (ar5_00 != 0) {
        FUN_8c2688a0(FUN_8c26784c,ar5_00,ar6,ar7,in_PR);
      }
      return ar5_00;
    }
    if ((ar6 & 0xffff) == *puVar1) {
      ar6 = (uint)(short)puVar1[1];
      ar5_00 = FUN_8c267740(ar4,ar5,ar6,ar7);
      goto LAB_8c267878;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}

__asm__(".globl _FUN_8c26784c\n.set _FUN_8c26784c, _FUN_8c26784c_def\n");
//@unit 8c2678a4
#include "../decls.h"
int FUN_8c2678a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd440 = 0x2e;
    DAT_8c4bd444 = *(undefined1 *)(ar4 + 1);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd440,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2678a4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2678a4\n.set _FUN_8c2678a4, _FUN_8c2678a4_def\n");
//@unit 8c2678a6
#include "../decls.h"
int FUN_8c2678a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd440 = 0x2e;
    DAT_8c4bd444 = *(undefined1 *)(ar4 + 1);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd440,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2678a4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2678a6\n.set _FUN_8c2678a6, _FUN_8c2678a6_def\n");
//@unit 8c267908
#include "../decls.h"
undefined4 thunk_FUN_8c2678a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2678a4();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c2678a4\n.set _thunk_FUN_8c2678a4, _thunk_FUN_8c2678a4_def\n");
//@unit 8c267914
#include "../decls.h"
undefined4 FUN_8c267914_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267924((int)(char)ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c267914\n.set _FUN_8c267914, _FUN_8c267914_def\n");
//@unit 8c267924
#include "../decls.h"
int FUN_8c267924_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int in_r0;
  int ar7_00;
  int ar5_00;
  
  ar6_00 = DAT_8c2784c0;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      in_r0 = 0;
    }
    else {
      in_r0 = ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xae) = (char)in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267924\n.set _FUN_8c267924, _FUN_8c267924_def\n");
//@unit 8c267926
#include "../decls.h"
int FUN_8c267926_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *in_r3;
  int ar6_00;
  int ar7_00;
  int ar5_00;
  undefined4 in_PR;
  
  ar6_00 = *in_r3;
  ar7_00 = 0xd000001;
  ar5_00 = 0;
  if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6_00 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    ar7_00 = (int)*(char *)(ar4 + 1);
    if ((char)ar5 == '\x7f') {
      cVar1 = '\0';
    }
    else {
      cVar1 = (char)ar5 * -2 + -1;
    }
    *(char *)((short)*(char *)(ar4 + 1) * 0x2c + ar6_00 + 0xae) = cVar1;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267924,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267926\n.set _FUN_8c267926, _FUN_8c267926_def\n");
//@unit 8c2679a0
#include "../decls.h"
int FUN_8c2679a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd458 = 0x2b;
    DAT_8c4bd45c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd45d = (undefined1)((char)ar5 + 0x80);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd458,(char)ar5 + 0x80,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2679a0,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2679a0\n.set _FUN_8c2679a0, _FUN_8c2679a0_def\n");
//@unit 8c2679a2
#include "../decls.h"
int FUN_8c2679a2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd458 = 0x2b;
    DAT_8c4bd45c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd45d = (undefined1)((char)ar5 + 0x80);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd458,(char)ar5 + 0x80,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2679a0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2679a2\n.set _FUN_8c2679a2, _FUN_8c2679a2_def\n");
//@unit 8c267a10
#include "../decls.h"
undefined4 FUN_8c267a10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2679a0((int)(char)ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c267a10\n.set _FUN_8c267a10, _FUN_8c267a10_def\n");
//@unit 8c267a20
#include "../decls.h"
int FUN_8c267a20_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd470 = 0x29;
    DAT_8c4bd474 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd475 = (undefined1)ar5;
    DAT_8c4bd476 = (undefined1)ar6;
    in_r0 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267a20\n.set _FUN_8c267a20, _FUN_8c267a20_def\n");
//@unit 8c267a22
#include "../decls.h"
int FUN_8c267a22_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd470 = 0x29;
    DAT_8c4bd474 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd475 = (undefined1)ar5;
    DAT_8c4bd476 = (undefined1)ar6;
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267a22\n.set _FUN_8c267a22, _FUN_8c267a22_def\n");
//@unit 8c267a98
#include "../decls.h"
undefined4 FUN_8c267a98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267a20((int)(char)ar6,(int)(char)ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c267a98\n.set _FUN_8c267a98, _FUN_8c267a98_def\n");
//@unit 8c267ab0
#include "../decls.h"
int FUN_8c267ab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd488 = 0x2a;
    DAT_8c4bd48c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd48d = (undefined1)((char)ar5 + 0x80);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd488,(char)ar5 + 0x80,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267ab0,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267ab0\n.set _FUN_8c267ab0, _FUN_8c267ab0_def\n");
//@unit 8c267ab2
#include "../decls.h"
int FUN_8c267ab2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd488 = 0x2a;
    DAT_8c4bd48c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd48d = (undefined1)((char)ar5 + 0x80);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd488,(char)ar5 + 0x80,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267ab0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267ab2\n.set _FUN_8c267ab2, _FUN_8c267ab2_def\n");
//@unit 8c267b20
#include "../decls.h"
undefined4 FUN_8c267b20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267ab0((int)(char)ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c267b20\n.set _FUN_8c267b20, _FUN_8c267b20_def\n");
//@unit 8c267b30
#include "../decls.h"
int FUN_8c267b30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffe4;
  int iStack_18;
  
  if (DAT_8c2784c0 == 0) {
    iVar5 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar5 = 0x7000103;
  }
  else {
    bVar1 = *(byte *)(ar4 + 1);
    cVar2 = (char)ar6;
    ar6 = 0;
    iVar6 = DAT_8c2784c0 + 0xa8 + (short)(char)bVar1 * 0x2c;
    *(int *)((char)ar5 * 4 + iVar6 + 0x1c) = (int)cVar2;
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = (int)cVar2;
    }
    uVar3 = (uint)(char)ar5;
    if ((*(char *)(iVar6 + 5) != '\x01') && (*(char *)(iVar6 + 5) == '\x02')) {
      if (uVar3 == 0) {
        in_stack_ffffffe4 = in_stack_ffffffe4 + 0x80;
      }
      else if ((uVar3 == 1) && (iStack_18 = iStack_18 + -0x80, -2 < iStack_18)) {
        iStack_18 = -2;
      }
      for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
        *(int *)(&stack0xffffffe4 + iVar5 * 4) =
             (int)(*(int *)(&stack0xffffffe4 + iVar5 * 4) +
                  (uint)(*(int *)(&stack0xffffffe4 + iVar5 * 4) < 0)) >> 1;
      }
    }
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = *(int *)(&stack0xffffffe4 + iVar5 * 4) + 0x80;
    }
    _DAT_8c4bd4a0 = 0x26;
    DAT_8c4bd4a4 = (&DAT_8c278588)[uVar3 & 3] | bVar1;
    uVar4 = (undefined1)((uint)ar7 >> 8);
    if (uVar3 == 0) {
      DAT_8c4bd4a5 = (undefined1)in_stack_ffffffe4;
      DAT_8c4bd4a9 = 0;
      DAT_8c4bd4aa = 0;
      DAT_8c4bd4ab = 0;
      DAT_8c4bd4a6 = (char)ar7;
      DAT_8c4bd4a7 = uVar4;
    }
    else if (uVar3 == 1) {
      DAT_8c4bd4a5 = 0;
      DAT_8c4bd4a6 = 0;
      DAT_8c4bd4a7 = 0;
      DAT_8c4bd4a9 = (undefined1)iStack_18;
      DAT_8c4bd4aa = (char)ar7;
      DAT_8c4bd4ab = uVar4;
    }
    iVar5 = FUN_8c267fe8(&DAT_8c4bd4a0,&DAT_8c4bd4a5,0,ar7);
  }
  if (iVar5 != 0) {
    FUN_8c2688a0(FUN_8c267b30,iVar5,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar5;
}

__asm__(".globl _FUN_8c267b30\n.set _FUN_8c267b30, _FUN_8c267b30_def\n");
//@unit 8c267cc0
#include "../decls.h"
undefined4 thunk_FUN_8c267b30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267b30();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c267b30\n.set _thunk_FUN_8c267b30, _thunk_FUN_8c267b30_def\n");
//@unit 8c267ccc
#include "../decls.h"
int FUN_8c267ccc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  
  iVar1 = ar6;
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      _DAT_8c4bd4b8 = 0x28;
      DAT_8c4bd4bc = *(undefined1 *)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      DAT_8c4bd4be = (undefined1)iVar2;
      DAT_8c4bd4bf = (undefined1)((uint)iVar2 >> 8);
      DAT_8c4bd4c0 = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      DAT_8c4bd4c1 = (undefined1)((uint)ar6 >> 8);
      in_r0 = FUN_8c267fe8(&DAT_8c4bd4b8,iVar2 >> 8,iVar1,ar7);
      iVar2 = in_r0;
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267ccc,iVar2,iVar1,ar7,in_r0);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267ccc\n.set _FUN_8c267ccc, _FUN_8c267ccc_def\n");
//@unit 8c267cce
#include "../decls.h"
int FUN_8c267cce_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      _DAT_8c4bd4b8 = 0x28;
      DAT_8c4bd4bc = *(undefined1 *)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      DAT_8c4bd4be = (undefined1)iVar2;
      DAT_8c4bd4bf = (undefined1)((uint)iVar2 >> 8);
      DAT_8c4bd4c0 = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      DAT_8c4bd4c1 = (undefined1)((uint)ar6 >> 8);
      iVar2 = FUN_8c267fe8(&DAT_8c4bd4b8,iVar2 >> 8,iVar1,ar7);
    }
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267ccc,iVar2,iVar1,ar7,in_PR);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267cce\n.set _FUN_8c267cce, _FUN_8c267cce_def\n");
//@unit 8c267d74
#include "../decls.h"
undefined4 FUN_8c267d74_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267ccc((int)(short)ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c267d74\n.set _FUN_8c267d74, _FUN_8c267d74_def\n");
//@unit 8c267d88
#include "../decls.h"
int FUN_8c267d88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0xd000001;
  if ((((*(int *)(&DATA_8c2784c0) != 0) && (iVar4 = 0x7000103, ar4 != 0)) &&
      (iVar3 = (int)(char)ar5, iVar4 = 0x3000001, 0 < iVar3)) &&
     (((iVar3 < 3 &&
       (iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0),
       -1 < iVar3)) && (iVar3 <= *(char *)(iVar2 + 4))))) {
    *(char *)(iVar2 + 5) = (char)ar5;
    puVar1 = (&FUN_8c267b30);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (*(code *)puVar1)(ar4,iVar5,*(undefined4 *)(iVar5 * 4 + iVar2 + 0x1c),0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c267d88),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c267d88\n.set _FUN_8c267d88, _FUN_8c267d88_def\n");
//@unit 8c267d98
#include "../decls.h"
int FUN_8c267d98_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int *in_r3;
  int iVar1;
  int unaff_r10;
  int iVar2;
  int iVar3;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = ar7;
  if (*in_r3 == 0) {
    ar7 = 0xd000001;
  }
  else if (unaff_r10 == 0) {
    ar7 = 0x7000103;
  }
  else {
    iVar3 = (int)(char)ar5;
    if ((0 < iVar3) && (iVar3 < 3)) {
      ar6 = (int)*(char *)(unaff_r10 + 1);
      iVar2 = (short)*(char *)(unaff_r10 + 1) * 0x2c + *in_r3 + 0xa8;
      if ((-1 < iVar3) && (iVar3 <= *(char *)(iVar2 + 4))) {
        *(char *)(iVar2 + 5) = (char)ar5;
        ar5_00 = ar7;
        if (0 < iVar3) {
          do {
            ar6 = *(int *)(ar5_00 * 4 + iVar2 + 0x1c);
            iVar1 = 0;
            FUN_8c267b30(unaff_r10,ar5_00,ar6,0);
            ar5_00 = ar5_00 + 1;
          } while (ar5_00 < iVar3);
        }
        goto LAB_8c267e0a;
      }
    }
    ar7 = 0x3000001;
  }
LAB_8c267e0a:
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c267d88,ar7,ar6,iVar1,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c267d98\n.set _FUN_8c267d98, _FUN_8c267d98_def\n");
//@unit 8c267e48
#include "../decls.h"
undefined4 thunk_FUN_8c267d88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267d88();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c267d88\n.set _thunk_FUN_8c267d88, _thunk_FUN_8c267d88_def\n");
//@unit 8c267e54
#include "../decls.h"
int FUN_8c267e54_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 uVar1;
  uint uVar2;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd4d0 = 0x25;
    DAT_8c4bd4d4 = (&DAT_8c278590)[uVar2 & 3] | *(byte *)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d5 = (char)ar6;
      DAT_8c4bd4d6 = (char)ar7;
      DAT_8c4bd4d7 = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d9 = (char)ar6;
      DAT_8c4bd4da = (char)ar7;
      DAT_8c4bd4db = uVar1;
    }
    in_r0 = FUN_8c267fe8(&DAT_8c4bd4d0,ar7,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267e54,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267e54\n.set _FUN_8c267e54, _FUN_8c267e54_def\n");
//@unit 8c267e56
#include "../decls.h"
int FUN_8c267e56_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r3;
  undefined1 uVar1;
  int ar5_00;
  uint uVar2;
  undefined4 in_PR;
  
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    uVar2 = (uint)(char)ar5;
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd4d0 = 0x25;
    DAT_8c4bd4d4 = (&DAT_8c278590)[uVar2 & 3] | *(byte *)(ar4 + 1);
    uVar1 = (undefined1)((uint)ar7 >> 8);
    if ((uVar2 == 0) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d5 = (char)ar6;
      DAT_8c4bd4d6 = (char)ar7;
      DAT_8c4bd4d7 = uVar1;
    }
    if ((uVar2 == 1) || (uVar2 == 0xffffffff)) {
      DAT_8c4bd4d9 = (char)ar6;
      DAT_8c4bd4da = (char)ar7;
      DAT_8c4bd4db = uVar1;
    }
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd4d0,ar7,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267e54,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267e56\n.set _FUN_8c267e56, _FUN_8c267e56_def\n");
//@unit 8c267f20
#include "../decls.h"
undefined4 thunk_FUN_8c267e54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267e54();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c267e54\n.set _thunk_FUN_8c267e54, _thunk_FUN_8c267e54_def\n");
//@unit 8c267f2c
#include "../decls.h"
int FUN_8c267f2c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    DAT_8c4bd4ec = *(char *)(ar4 + 1);
    ar7 = 0;
    ar6 = (short)DAT_8c4bd4ec * 0x2c + DAT_8c2784c0 + 0xa8;
    cVar1 = *(char *)(ar6 + 4);
    in_stack_fffffff0 = CONCAT31((int3)((uint)in_stack_fffffff0 >> 8),cVar1);
    iVar2 = 0;
    if (0 < cVar1) {
      do {
        *(undefined4 *)(ar6 + 0xc + iVar2) = 1;
        ar7 = ar7 + 1;
        *(undefined4 *)(ar6 + 0x14 + iVar2) = 0;
        *(undefined4 *)(ar6 + 0x24 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (ar7 < cVar1);
    }
    _DAT_8c4bd4e8 = 0x22;
    iVar2 = FUN_8c267fe8(&DAT_8c4bd4e8,0,ar6,ar7);
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267f2c,iVar2,ar6,ar7,in_stack_fffffff0);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267f2c\n.set _FUN_8c267f2c, _FUN_8c267f2c_def\n");
//@unit 8c267fdc
#include "../decls.h"
undefined4 thunk_FUN_8c267f2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c267f2c();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c267f2c\n.set _thunk_FUN_8c267f2c, _thunk_FUN_8c267f2c_def\n");
//@unit 8c267fe8
#include "../decls.h"
int FUN_8c267fe8_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  uint ain0;
  int iVar2;
  int iVar3;
  int ar5_00;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  iVar1 = DAT_8c2784c0;
  ar5_00 = 0;
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = DAT_8c2784c0 + 0x158;
    ar7 = *(int *)(DAT_8c2784c0 + 0x168);
    if (*(int *)(DAT_8c2784c0 + 0x16c) == 0x100) {
      ar5_00 = 0xa000001;
      ar6 = 0x100;
    }
    else {
      iVar3 = *(int *)(DAT_8c2784c0 + 0x170);
      *(int *)(DAT_8c2784c0 + 0x170) = iVar3 + 1;
      ar6 = iVar3 * 0x1c + *(int *)(iVar1 + 0x164);
      if (*(int *)(iVar1 + 0x170) == ar7) {
        *(undefined4 *)(iVar1 + 0x170) = 0;
      }
      *(undefined4 *)(ar6 + 0x14) = 1;
      FUN_8c0107a0(0x14,ar6,ar4);
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267fe8,ar5_00,ar6,ar7,ain0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267fe8\n.set _FUN_8c267fe8, _FUN_8c267fe8_def\n");
//@unit 8c26809c
#include "../decls.h"
int FUN_8c26809c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26809c,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26809c\n.set _FUN_8c26809c, _FUN_8c26809c_def\n");
//@unit 8c26809e
#include "../decls.h"
int FUN_8c26809e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c2666cc(ar4,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c26809c,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26809e\n.set _FUN_8c26809e, _FUN_8c26809e_def\n");
//@unit 8c2680ec
#include "../decls.h"
int FUN_8c2680ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    in_r0 = FUN_8c266708(ar4,2,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2680ec,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2680ec\n.set _FUN_8c2680ec, _FUN_8c2680ec_def\n");
//@unit 8c2680ee
#include "../decls.h"
int FUN_8c2680ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar5_00 = FUN_8c266708(ar4,2,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2680ec,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2680ee\n.set _FUN_8c2680ee, _FUN_8c2680ee_def\n");
//@unit 8c26813c
#include "../decls.h"
int FUN_8c26813c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  if (DAT_8c2784c0 == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      _DAT_8c4bd500 = 0x11;
      DAT_8c4bd504 = *(undefined1 *)(ar4 + 1);
      DAT_8c4bd505 = (undefined1)ar5;
      DAT_8c4bd506 = (undefined1)ar6;
      DAT_8c4bd507 = (undefined1)(iVar1 << 3);
      in_r0 = FUN_8c267fe8(&DAT_8c4bd500,ar5,ar6,ar7);
      iVar1 = in_r0;
    }
  }
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c26813c,iVar1,ar6,ar7,in_r0);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26813c\n.set _FUN_8c26813c, _FUN_8c26813c_def\n");
//@unit 8c26813e
#include "../decls.h"
int FUN_8c26813e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    iVar1 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar1 = 0x7000103;
  }
  else {
    iVar1 = (int)(char)ar7;
    if ((iVar1 < 0) || (0x1f < iVar1)) {
      iVar1 = 0x3000001;
    }
    else {
      _DAT_8c4bd500 = 0x11;
      DAT_8c4bd504 = *(undefined1 *)(ar4 + 1);
      DAT_8c4bd505 = (undefined1)ar5;
      DAT_8c4bd506 = (undefined1)ar6;
      DAT_8c4bd507 = (undefined1)(iVar1 << 3);
      iVar1 = FUN_8c267fe8(&DAT_8c4bd500,ar5,ar6,ar7);
    }
  }
  if (iVar1 != 0) {
    FUN_8c2688a0(FUN_8c26813c,iVar1,ar6,ar7,in_PR);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26813e\n.set _FUN_8c26813e, _FUN_8c26813e_def\n");
//@unit 8c2681d0
#include "../decls.h"
int FUN_8c2681d0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar5_00;
  
  iVar1 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd518 = 0x16;
    DAT_8c4bd51c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd51d = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd51e = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    DAT_8c4bd51f = (undefined1)((uint)ar6 >> 8);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd518,(char)ar5 + 0x80,iVar1,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2681d0,ar5_00,iVar1,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2681d0\n.set _FUN_8c2681d0, _FUN_8c2681d0_def\n");
//@unit 8c2681d2
#include "../decls.h"
int FUN_8c2681d2_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int iVar1;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = ar6;
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd518 = 0x16;
    DAT_8c4bd51c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd51d = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd51e = (undefined1)ar6;
    iVar1 = ar6 >> 8;
    DAT_8c4bd51f = (undefined1)((uint)ar6 >> 8);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd518,(char)ar5 + 0x80,iVar1,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2681d0,ar5_00,iVar1,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2681d2\n.set _FUN_8c2681d2, _FUN_8c2681d2_def\n");
//@unit 8c268250
#include "../decls.h"
int FUN_8c268250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar4 = 0x8c4bd534;
  puVar2 = 0x8c4bd530;
  iVar7 = 0x7000103;
  if (ar4 != 0) {
    cVar1 = (char)0x80;
    *(undefined4 *)0x8c4bd530 = 0x15;
    puVar5 = 0x8c4bd536;
    *puVar4 = *(undefined1 *)(ar4 + 1);
    puVar4[1] = (char)ar5 + cVar1;
    *puVar5 = (char)ar6;
    puVar6 = (&FUN_8c267fe8);
    puVar3 = 0x8c4bd530;
    *(char *)((int)puVar2 + 7) = (char)((uint)ar6 >> 8);
    iVar7 = (*(code *)puVar6)(puVar3);
  }
  if (iVar7 != 0) {
    FUN_8c2688a0((&FUN_8c268250),iVar7);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c268250\n.set _FUN_8c268250, _FUN_8c268250_def\n");
//@unit 8c268254
#include "../decls.h"
int FUN_8c268254_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int ar5_00;
  char in_T;
  undefined4 in_PR;
  
  if (in_T == '\0') {
    _DAT_8c4bd530 = 0x15;
    DAT_8c4bd534 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd535 = (undefined1)((char)ar5 + 0x80);
    DAT_8c4bd536 = (undefined1)ar6;
    ar6_00 = ar6 >> 8;
    DAT_8c4bd537 = (undefined1)((uint)ar6 >> 8);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd530,(char)ar5 + 0x80,ar6_00,ar7);
  }
  else {
    ar5_00 = 0x7000103;
    ar6_00 = ar6;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268250,ar5_00,ar6_00,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268254\n.set _FUN_8c268254, _FUN_8c268254_def\n");
//@unit 8c2682bc
#include "../decls.h"
int FUN_8c2682bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd548 = 0x12;
    DAT_8c4bd54c = *(undefined1 *)(ar4 + 1);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd548,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2682bc,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2682bc\n.set _FUN_8c2682bc, _FUN_8c2682bc_def\n");
//@unit 8c2682be
#include "../decls.h"
int FUN_8c2682be_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    _DAT_8c4bd548 = 0x12;
    DAT_8c4bd54c = *(undefined1 *)(ar4 + 1);
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd548,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2682bc,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2682be\n.set _FUN_8c2682be, _FUN_8c2682be_def\n");
//@unit 8c268320
#include "../decls.h"
undefined4 FUN_8c268320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int ar7_00;
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 *puVar3;
  
  ar6_00 = *(int *)(&DATA_8c2784c0);
  if (ar6_00 == 0) {
    return 0xd000001;
  }
  ar7_00 = (int)(char)ar5;
  if (ar7_00 < 0) {
    return 0x8000003;
  }
  iVar1 = (char)ar5 * 8;
  if (ar4 == 0x42534d53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x1e4;
    ar4_00 = *(int *)(0x1c0 + ar6_00) + iVar1;
  }
  else if (ar4 == 0x42504d53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x264;
    ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x80 + iVar1;
  }
  else if (ar4 == 0x42534f53) {
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x2e4;
    ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x100 + iVar1;
  }
  else {
    if (ar4 != 0x52535053) {
      if (ar4 == 0x42504653) {
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x3e4;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x200;
      }
      else if (ar4 == 0x424f4653) {
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x464;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x280;
      }
      else {
        if (ar4 != 0x57504653) {
          return 0x9000001;
        }
        if (0 < ar7_00) {
          return 0x8000003;
        }
        iVar1 = (int)0x46c;
        ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x288;
      }
      puVar3 = (undefined4 *)(iVar1 + ar6_00);
      goto LAB_8c26846a;
    }
    if (0xf < ar7_00) {
      return 0x8000003;
    }
    iVar2 = (int)0x364;
    ar4_00 = *(int *)(0x1c0 + ar6_00) + (int)0x180 + iVar1;
  }
  puVar3 = (undefined4 *)(iVar2 + ar6_00 + iVar1);
LAB_8c26846a:
  aica_ram_268748(ar4_00,ar6,ar6_00,ar7_00);
  aica_ram_268748(ar4_00 + 4,ar7,ar6_00,ar7_00);
  *puVar3 = ar6;
  puVar3[1] = ar7;
  return 0;
}

__asm__(".globl _FUN_8c268320\n.set _FUN_8c268320, _FUN_8c268320_def\n");
//@unit 8c2684b8
#include "../decls.h"
undefined4 aica_ram_2684b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  aica_reg_265278(ar4,ar5,ar6,ar7);
  FUN_8c1f9610((&DATA_8c278598),0xa0800000,4,0x80000,0,1);
  return 0;
}

__asm__(".globl _aica_ram_2684b8\n.set _aica_ram_2684b8, _aica_ram_2684b8_def\n");
//@unit 8c2684f0
#include "../decls.h"
undefined4 FUN_8c2684f0_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 *ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(&DATA_8c2784c0);
  uVar3 = 0;
  if (iVar4 == 0) {
    return 0xd000001;
  }
  if (ar6 == (undefined4 *)0x0) {
    return 0x3000001;
  }
  if (ar7 == (undefined4 *)0x0) {
    return 0x3000001;
  }
  if ((char)ar5 < '\0') {
    return 0x8000003;
  }
  if (ar4 == 0x42534d53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x1e4;
  }
  else if (ar4 == 0x42504d53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x264;
  }
  else if (ar4 == 0x42534f53) {
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x2e4;
  }
  else {
    if (ar4 != 0x52535053) {
      if (ar4 == 0x42504653) {
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x3e4;
      }
      else if (ar4 == 0x424f4653) {
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x464;
      }
      else {
        if (ar4 != 0x57504653) {
          puVar2 = (undefined4 *)0x0;
          uVar3 = 0x9000001;
          goto LAB_8c2685de;
        }
        if ((char)ar5 != '\0') {
          return 0x8000003;
        }
        iVar1 = (int)0x46c;
      }
      puVar2 = (undefined4 *)(iVar1 + iVar4);
      goto LAB_8c2685de;
    }
    if ('\x0f' < (char)ar5) {
      return 0x8000003;
    }
    iVar1 = (int)0x364;
  }
  puVar2 = (undefined4 *)(iVar1 + iVar4 + (char)ar5 * 8);
LAB_8c2685de:
  if (puVar2 == (undefined4 *)0x0) {
    if (ar6 != (undefined4 *)0x0) {
      *ar6 = 0;
    }
    if (ar7 != (undefined4 *)0x0) {
      *ar7 = 0xffffffff;
    }
  }
  else {
    *ar6 = *puVar2;
    *ar7 = puVar2[1];
  }
  return uVar3;
}

__asm__(".globl _FUN_8c2684f0\n.set _FUN_8c2684f0, _FUN_8c2684f0_def\n");
//@unit 8c268618
#include "../decls.h"
undefined4 aica_ram_268618_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 < 0x200000) {
    FUN_8c1f92c0(ar4 + 0xa0800000,ar5,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_268618\n.set _aica_ram_268618, _aica_ram_268618_def\n");
//@unit 8c268650
#include "../decls.h"
undefined4 FUN_8c268650_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_8 [8];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_8,ar6,ar7);
    *ar5 = auStack_8[ar4 & 3];
  }
  return 0;
}

__asm__(".globl _FUN_8c268650\n.set _FUN_8c268650, _FUN_8c268650_def\n");
//@unit 8c26868c
#include "../decls.h"
undefined4 FUN_8c26868c_def(uint ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_c,ar6,ar7);
    *ar5 = *(undefined2 *)((int)auStack_c + (ar4 & 2));
  }
  return 0;
}

__asm__(".globl _FUN_8c26868c\n.set _FUN_8c26868c, _FUN_8c26868c_def\n");
//@unit 8c2686d4
#include "../decls.h"
undefined4 aica_ram_2686d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 < 0x200000) {
    FUN_8c1f92c0(ar4 + 0xa0800000,ar5,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_2686d4\n.set _aica_ram_2686d4, _aica_ram_2686d4_def\n");
//@unit 8c26870c
#include "../decls.h"
undefined4 FUN_8c26870c_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_8 [8];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_8,ar6,ar7);
    *ar5 = auStack_8[ar4 & 3];
  }
  return 0;
}

__asm__(".globl _FUN_8c26870c\n.set _FUN_8c26870c, _FUN_8c26870c_def\n");
//@unit 8c268748
#include "../decls.h"
undefined4 aica_ram_268748_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  if (ar4 < 0x200000) {
    auStack_8[0] = ar5;
    FUN_8c1f9610(auStack_8,ar4 + 0xa0800000,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_268748\n.set _aica_ram_268748, _aica_ram_268748_def\n");
//@unit 8c268788
#include "../decls.h"
undefined4 aica_ram_268788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  if (ar4 < 0x200000) {
    auStack_8[0] = ar5;
    FUN_8c1f9610(auStack_8,ar4 + 0xa0800000,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_268788\n.set _aica_ram_268788, _aica_ram_268788_def\n");
//@unit 8c2687c8
#include "../decls.h"
undefined4 FUN_8c2687c8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_10 [2];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_10,ar6,ar7);
    *(undefined1 *)((ar4 & 3) + (int)auStack_10) = (undefined1)ar5;
    aica_ram_268788(ar4 & 0xfffffffc,auStack_10[0],ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c2687c8\n.set _FUN_8c2687c8, _FUN_8c2687c8_def\n");
//@unit 8c268818
#include "../decls.h"
int FUN_8c268818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar4 = in_r0;
    ar5_00 = 0xd000001;
  }
  else {
    _DAT_8c4bd560 = 0x8a;
    if (ar4 == 0x4f4e4f4d) {
      DAT_8c4bd564 = 0xff;
    }
    else {
      if (ar4 != 0x4f525453) {
        ar5_00 = 0x3000001;
        goto LAB_8c268860;
      }
      DAT_8c4bd564 = 0;
    }
    ar4 = FUN_8c267fe8(&DAT_8c4bd560,&DAT_8c4bd564,ar6,ar7);
    ar5_00 = ar4;
  }
LAB_8c268860:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268818,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268818\n.set _FUN_8c268818, _FUN_8c268818_def\n");
//@unit 8c26881a
#include "../decls.h"
int FUN_8c26881a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    _DAT_8c4bd560 = 0x8a;
    if (ar4 == 0x4f4e4f4d) {
      DAT_8c4bd564 = 0xff;
    }
    else {
      if (ar4 != 0x4f525453) {
        ar5_00 = 0x3000001;
        goto LAB_8c268860;
      }
      DAT_8c4bd564 = 0;
    }
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd560,&DAT_8c4bd564,ar6,ar7);
  }
LAB_8c268860:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268818,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c26881a\n.set _FUN_8c26881a, _FUN_8c26881a_def\n");
//@unit 8c2688a0
#include "../decls.h"
undefined4 FUN_8c2688a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c2785a4);
  *(undefined4 *)0x8c2785a0 = ar4;
  *(undefined4 *)puVar1 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c2688a0\n.set _FUN_8c2688a0, _FUN_8c2688a0_def\n");
//@unit 8c2688b4
#include "../decls.h"
int FUN_8c2688b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = FUN_8c26518c(ar4,ar5,ar6,ar7);
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2688b4,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2688b4\n.set _FUN_8c2688b4, _FUN_8c2688b4_def\n");
//@unit 8c2688e0
#include "../decls.h"
undefined4 FUN_8c2688e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = DAT_8c2784c0;
  if (((DAT_8c2784c0 != 0) && (DAT_8c2784c4 == 1)) && (0 < *(int *)(DAT_8c2784c0 + 0x16c))) {
    FUN_8c26518c(DAT_8c2784c0,ar5,ar6,ar7);
  }
  FUN_8c265e08(ar4_00,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c2688e0\n.set _FUN_8c2688e0, _FUN_8c2688e0_def\n");
//@unit 8c2688e2
#include "../decls.h"
undefined4 FUN_8c2688e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar4_00;
  
  ar4_00 = *in_r3;
  if (((ar4_00 != 0) && (*(int *)(&DATA_8c2784c4) == 1)) && (0 < *(int *)(0x16c + ar4_00))) {
    FUN_8c26518c(ar4_00,ar5,ar6,ar7);
  }
  FUN_8c265e08(ar4_00,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c2688e2\n.set _FUN_8c2688e2, _FUN_8c2688e2_def\n");
//@unit 8c268920
#include "../decls.h"
int FUN_8c268920_def(undefined4 ar4,uint ar5,undefined *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *(undefined4 *)(DAT_8c2784c0 + 0x164) = ar4;
    *(uint *)(DAT_8c2784c0 + 0x168) = ar5;
    *(undefined4 *)(DAT_8c2784c0 + 0x174) = 0;
    *(undefined4 *)(DAT_8c2784c0 + 0x170) = 0;
    _DAT_8c4bd578 = ar4;
    in_r0 = memset(ar4,0,ar5 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar2 = 0;
    iVar1 = 0;
    if (ar5 != 0) {
      do {
        in_r0 = FUN_8c0107a0(0x1c,*(int *)(DAT_8c2784c0 + 0x164) + iVar1,ar6);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x1c;
      } while (uVar2 < ar5);
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268920,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268920\n.set _FUN_8c268920, _FUN_8c268920_def\n");
//@unit 8c26892c
#include "../decls.h"
uint FUN_8c26892c_def(undefined4 ar4,undefined4 ar5,undefined *ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r12;
  uint unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    unaff_r13 = 0xd000001;
  }
  else {
    *(undefined4 *)(*unaff_r14 + 0x164) = ar4;
    *(uint *)(*unaff_r14 + 0x168) = unaff_r12;
    *(uint *)(*unaff_r14 + 0x174) = unaff_r13;
    *(uint *)(*unaff_r14 + 0x170) = unaff_r13;
    _DAT_8c4bd578 = ar4;
    memset(ar4,0,unaff_r12 * 0x1c,ar7);
    ar6 = &DAT_8c2785a8;
    uVar1 = unaff_r13;
    uVar2 = unaff_r13;
    if (unaff_r12 != 0) {
      do {
        FUN_8c0107a0(0x1c,*(int *)(*unaff_r14 + 0x164) + uVar1,ar6);
        uVar2 = uVar2 + 1;
        uVar1 = uVar1 + 0x1c;
      } while (uVar2 < unaff_r12);
    }
  }
  if (unaff_r13 != 0) {
    FUN_8c2688a0(FUN_8c268920,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c26892c\n.set _FUN_8c26892c, _FUN_8c26892c_def\n");
//@unit 8c2689c4
#include "../decls.h"
undefined4 noop_2689c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_2689c4\n.set _noop_2689c4, _noop_2689c4_def\n");
//@unit 8c2689c8
#include "../decls.h"
undefined4 FUN_8c2689c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 ar4_01;
  undefined4 uVar1;
  undefined4 *ar6_00;
  undefined4 a7;
  undefined4 in_PR;
  
  noop_26a0f8(ar4,ar5,ar6,ar7,in_PR);
  memset(&DAT_8c4bd580,0,0x480,ar7);
  memset(0x8c4bda00,0,0x820,ar7);
  uVar1 = 0x80808080;
  ar4_00 = 0;
  a7 = 0x200;
  ar6_00 = (undefined4 *)&DAT_8c4be220;
  do {
    ar4_00 = ar4_00 + 1;
    *ar6_00 = 0x80808080;
    ar6_00 = ar6_00 + 1;
  } while (ar4_00 < 0x200);
  if (DAT_8c2785cc == 0) {
    DAT_8c2785cc = ret_const_8c2785e8_26b1ca(ar4_00,0x80808080,ar6_00,0x200);
  }
  ar4_01 = 0;
  (**(code **)(DAT_8c2785cc + 0xc))(0,uVar1,ar6_00,a7);
  noop_2689c4(ar4_01,uVar1,ar6_00,a7,in_PR);
  uVar1 = FUN_8c26a130(0,0,ar6_00,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c2689c8\n.set _FUN_8c2689c8, _FUN_8c2689c8_def\n");
//@unit 8c268a24
#include "../decls.h"
undefined4 FUN_8c268a24_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar1 = 0x8c4bd580;
  iVar5 = (int)0x480;
  iVar8 = (int)0x90;
  pcVar4 = 0x8c4bd580 + iVar5;
  pcVar6 = 0x8c4bd580;
  pcVar7 = 0x8c4bd580;
  do {
    if (*pcVar7 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar6,ar5,ar6,ar7);
    }
    pcVar7 = pcVar7 + iVar8;
    pcVar6 = pcVar6 + iVar8;
  } while (pcVar7 < pcVar4);
  pcVar6 = pcVar1;
  pcVar7 = pcVar1;
  pcVar4 = pcVar1;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar7,pcVar6,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar8;
    pcVar7 = pcVar7 + iVar8;
  } while (pcVar4 < pcVar1 + iVar5);
  memset(pcVar1,0,iVar5);
  memset(0x8c4bda00,0,(int)0x820);
  uVar2 = 0x80808080;
  iVar5 = 0;
  iVar8 = (int)0x200;
  puVar3 = 0x8c4be220;
  do {
    iVar5 = iVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (iVar5 < iVar8);
  uVar2 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))();
  return uVar2;
}

__asm__(".globl _FUN_8c268a24\n.set _FUN_8c268a24, _FUN_8c268a24_def\n");
//@unit 8c268a36
#include "../decls.h"
undefined4 FUN_8c268a36_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  undefined4 *a7;
  int unaff_r9;
  int unaff_r10;
  char *unaff_r11;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)0x90;
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  do {
    if (*pcVar3 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar2,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + iVar5;
    pcVar2 = pcVar2 + iVar5;
  } while (pcVar3 < (char *)(unaff_r9 + unaff_r10));
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  pcVar4 = unaff_r11;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar3,pcVar2,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar5;
    pcVar3 = pcVar3 + iVar5;
  } while (pcVar4 < unaff_r11 + unaff_r10);
  memset(unaff_r11,0,unaff_r10,ar7);
  memset(0x8c4bda00,0,(int)0x820,ar7);
  uVar1 = 0x80808080;
  iVar5 = 0;
  a6 = (int)0x200;
  a7 = 0x8c4be220;
  do {
    iVar5 = iVar5 + 1;
    *a7 = uVar1;
    a7 = a7 + 1;
  } while (iVar5 < a6);
  uVar1 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))(iVar5,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c268a36\n.set _FUN_8c268a36, _FUN_8c268a36_def\n");
//@unit 8c268afc
#include "../decls.h"
int FUN_8c268afc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x2000;
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined1 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 5) = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(int *)(ar4 + 0x40) = iVar1;
  *(int *)(ar4 + 0x44) = iVar1;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0;
  *(undefined4 *)(ar4 + 0x80) = 0;
  *(undefined4 *)(ar4 + 0x8c) = 0;
  *(undefined1 *)(ar4 + 7) = 0;
  iVar1 = (int)0x88;
  *(undefined4 *)(iVar1 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c268afc\n.set _FUN_8c268afc, _FUN_8c268afc_def\n");
//@unit 8c268b48
#include "../decls.h"
char * FUN_8c268b48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = 0x8c4bd580;
  for (pcVar1 = 0x8c4bd580;
      (pcVar3 = (char *)0x0, pcVar1 < 0x8c4bd580 + 0x480 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x90) {
    pcVar2 = pcVar2 + 0x90;
  }
  return pcVar3;
}

__asm__(".globl _FUN_8c268b48\n.set _FUN_8c268b48, _FUN_8c268b48_def\n");
//@unit 8c268b70
#include "../decls.h"
undefined4 s_E1201_mwRnaCreate_Illigal_pa_268b7a_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *a4;
  undefined4 uVar2;
  int *a4_00;
  undefined1 *a4_01;
  int iVar3;
  uint ar5_00;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  
  puVar1 = (&debug_printf);
  a4_01 = auStack_20;
  if (((int)ar5 < 1) || (2 < (int)ar5)) {
    debug_printf(ar4,ar5,ar6,ar7);
  }
  else {
    a4_00 = ar4;
    ar5_00 = ar5;
    if (ar4 != (int *)0x0) {
      ar5_00 = 0;
      if (0 < (int)ar5) {
        do {
          if (*a4_00 == 0) goto LAB_8c268bae;
          ar5_00 = ar5_00 + 1;
          a4_00 = a4_00 + 1;
        } while ((int)ar5_00 < (int)ar5);
      }
      FUN_8c26a100(auStack_20,ar5_00,ar6,ar7);
      a4 = (undefined1 *)FUN_8c268b48(a4_01,ar5_00,ar6,ar7);
      if (a4 == (undefined1 *)0x0) {
        (*(code *)puVar1)(a4_01,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = 0;
        a4[3] = (char)ar5;
        a4[2] = (char)ar5;
        iVar3 = 0;
        if (0 < (int)ar5) {
          do {
            ar5_00 = ar5_00 + 1;
            *(undefined4 *)(a4 + iVar3 + 0x10) = *(undefined4 *)(iVar3 + (int)ar4);
            iVar3 = iVar3 + 4;
          } while ((int)ar5_00 < (int)ar5);
        }
        iVar3 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x14))(ar5,ar5_00,ar6,ar7);
        *(int *)(a4 + 0x38) = iVar3;
        if (iVar3 == 0) {
          (*(code *)puVar1)(ar5,ar5_00,ar6,ar7);
          a4 = (undefined1 *)0x0;
        }
        else {
          FUN_8c268afc(a4,ar5_00,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269b92(a4,0x10,ar6,ar7);
          s_E1205_Illigal_parameter_MWRN_269c06(a4,0xac44,ar6,ar7);
          ar5_00 = (uint)(byte)a4[3];
          s_E1205_Illigal_parameter_MWRN_269aec(a4,ar5_00,ar6,ar7);
          piStack_1c = *(int **)(a4 + 0x38);
          uVar2 = (**(code **)(*piStack_1c + 0x18))(piStack_1c,ar5_00,ar6,ar7);
          *(undefined4 *)(a4 + 0x28) = uVar2;
          *a4 = 1;
        }
      }
      FUN_8c26a118(auStack_20,ar5_00,ar6,ar7);
      return a4;
    }
LAB_8c268bae:
    debug_printf(a4_00,ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _s_E1201_mwRnaCreate_Illigal_pa_268b7a\n.set _s_E1201_mwRnaCreate_Illigal_pa_268b7a, _s_E1201_mwRnaCreate_Illigal_pa_268b7a_def\n");
//@unit 8c268c7e
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268c80_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == (undefined1 *)0x0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
  if (ar4[1] != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *ar4 = 0;
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[2]; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x10) = 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0xc))(*(int **)(ar4 + 0x38),0,ar6,ar7);
  uVar1 = 0;
  ar6_00 = 0x90;
  memset(ar4,0,0x90,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff0,uVar1,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268c80\n.set _s_E1205_Illigal_parameter_MWRN_268c80, _s_E1205_Illigal_parameter_MWRN_268c80_def\n");
//@unit 8c268cee
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268cf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 1) != '\0') {
    s_E1205_Illigal_parameter_MWRN_268d66(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 1) = 4;
  uVar1 = 1;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x44);
  s_E1205_Illigal_parameter_MWRN_2690dc(ar4,1,ar6,ar7);
  uVar1 = FUN_8c26a118(&stack0xfffffff4,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268cf0\n.set _s_E1205_Illigal_parameter_MWRN_268cf0, _s_E1205_Illigal_parameter_MWRN_268cf0_def\n");
//@unit 8c268d60
#include "../decls.h"
undefined4 noop_268d60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_268d60\n.set _noop_268d60, _noop_268d60_def\n");
//@unit 8c268d64
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268d66_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_fffffff4);
    return uVar1;
  }
  uVar1 = 0;
  if (*(char *)(ar4 + 1) != '\0') {
    FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar1 = 0;
    s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
    noop_268d60(ar4,uVar1,ar6,ar7,in_stack_fffffff4);
    *(undefined1 *)(ar4 + 7) = 0;
    *(undefined1 *)(ar4 + 1) = 0;
    uVar1 = FUN_8c26a118(&stack0xfffffff4,uVar1,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268d66\n.set _s_E1205_Illigal_parameter_MWRN_268d66, _s_E1205_Illigal_parameter_MWRN_268d66_def\n");
//@unit 8c268db4
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_268db4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  if (*(char *)(ar4 + 6) != '\x01') {
    *(undefined1 *)(ar4 + 6) = 1;
  }
  return 1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_268db4\n.set _s_E1205_Illigal_parameter_MWRN_268db4, _s_E1205_Illigal_parameter_MWRN_268db4_def\n");
//@unit 8c268ddc
#include "../decls.h"
undefined4 FUN_8c268ddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  if (s0 < 1) {
    return 0;
  }
  (**(code **)(**(int **)(ar4 + 0x38) + 0x4c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x5c) = 1;
  return s0;
}

__asm__(".globl _FUN_8c268ddc\n.set _FUN_8c268ddc, _FUN_8c268ddc_def\n");
//@unit 8c268e1a
#include "../decls.h"
int FUN_8c268e1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  int aiStack_24 [3];
  
  if (*(int *)(ar4 + 0x5c) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    aiStack_24[1] = 1;
    aiStack_24[0] = 1;
    for (a5 = 0; a5 < (int)(uint)*(byte *)(ar4 + 3); a5 = a5 + 1) {
      iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x50))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
      if (iVar2 != 1) {
        aiStack_24[a5] = 0;
      }
    }
    if ((aiStack_24[0] == 0) || (aiStack_24[1] == 0)) {
      iVar1 = 0;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x5c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c268e1a\n.set _FUN_8c268e1a, _FUN_8c268e1a_def\n");
//@unit 8c268ea8
#include "../decls.h"
undefined4 FUN_8c268ea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_1c [4];
  int *piStack_18;
  
  FUN_8c26a100(auStack_1c,ar5,ar6,ar7);
  piStack_18 = *(int **)(ar4 + 0x38);
  iVar4 = *(int *)(ar4 + 0x30);
  uVar1 = (**(code **)(*piStack_18 + 0x20))(piStack_18,0,ar6,ar7);
  iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar2 = iVar2 << 3;
  iVar3 = libgcc_divide_helper_010468(uVar1,iVar2);
  iVar5 = iVar3 * iVar2 - iVar4;
  *(int *)(ar4 + 0x30) = iVar3 * iVar2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + *(int *)(ar4 + 0x28);
  }
  iVar2 = *(int *)(ar4 + 0x34) - iVar5;
  if (iVar2 < 0) {
    *(undefined1 *)(ar4 + 4) = 1;
    iVar2 = 0;
    iVar5 = *(int *)(ar4 + 0x2c) - iVar4;
  }
  if ((*(char *)(ar4 + 4) == '\x01') &&
     (iVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,uVar1,ar6,ar7), iVar3 == 1)) {
    *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x30);
    *(undefined1 *)(ar4 + 4) = 0;
  }
  *(int *)(ar4 + 0x34) = iVar2;
  *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + iVar5;
  uVar1 = FUN_8c26a118(auStack_1c,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c268ea8\n.set _FUN_8c268ea8, _FUN_8c268ea8_def\n");
//@unit 8c268f3e
#include "../decls.h"
undefined4
s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar2 = auStack_3c;
  FUN_8c26a100(auStack_3c,ar5,ar6,ar7);
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    if (*(int *)(iVar4 * 4 + ar4 + 0x10) == 0) {
      debug_printf(puVar2,ar5,ar6,ar7);
    }
  }
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(ar4 + 3); iVar4 = iVar4 + 1) {
    uStack_28 = *(undefined4 *)(ar4 + 0x18 + iVar4 * 8);
    uStack_24 = *(undefined4 *)(iVar4 * 8 + ar4 + 0x1c);
    puVar2 = auStack_30;
    ar7 = auStack_38;
    uVar1 = libgcc_divide_helper_010468(*(int *)(ar4 + 0x3c) * *(int *)(ar4 + 8),8);
    FUN_8c26be30(&uStack_28,uVar1,puVar2,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    (**(code **)(*piVar3 + 0x20))(piVar3,0,auStack_30,ar7);
    piVar3 = *(int **)(ar4 + 0x10 + iVar4 * 4);
    ar5 = 1;
    ar6 = auStack_38;
    (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
  }
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x2c) + *(int *)(ar4 + 0x3c),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x2c) = uVar1;
  *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x4c) = *(int *)(ar4 + 0x4c) + *(int *)(ar4 + 0x3c);
  *(undefined4 *)(ar4 + 0x3c) = 0;
  uVar1 = FUN_8c26a118(auStack_3c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c\n.set _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c, _s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def\n");
//@unit 8c269056
#include "../decls.h"
undefined4 FUN_8c269056_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x58),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}

__asm__(".globl _FUN_8c269056\n.set _FUN_8c269056, _FUN_8c269056_def\n");
//@unit 8c26905a
#include "../decls.h"
undefined4 FUN_8c26905a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *in_r2;
  
  uVar1 = (*in_r2)();
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}

__asm__(".globl _FUN_8c26905a\n.set _FUN_8c26905a, _FUN_8c26905a_def\n");
//@unit 8c269086
#include "../decls.h"
int s_E1209_mwRnaPause_Time_out_of_26908e_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 s4;
  
  DAT_8c2785d4 = 0;
  for (iVar2 = 0; ar4_00 = 0, s4 = ar4, iVar2 < 200; iVar2 = iVar2 + 1) {
    ain0 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    ar4_00 = ar4;
    if (ain0 == 1) break;
    iVar1 = 5000;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    DAT_8c2785d4 = DAT_8c2785d4 + 1;
    ar4 = s4;
  }
  if (iVar2 == 200) {
    ain0 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1209_mwRnaPause_Time_out_of_wai_8c2732ec,s4);
  }
  return ain0;
}

__asm__(".globl _s_E1209_mwRnaPause_Time_out_of_26908e\n.set _s_E1209_mwRnaPause_Time_out_of_26908e, _s_E1209_mwRnaPause_Time_out_of_26908e_def\n");
//@unit 8c2690d8
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2690dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a5;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_ffffffec);
  }
  else {
    *(undefined4 *)(ar4 + 0x8c) = 1;
    a5 = ar5;
    if (*(char *)(ar4 + 5) == '\x01') {
      s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_ffffffec);
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 == 1) {
        s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,a5,ar6,ar7);
      }
      else {
        FUN_8c269056(ar4,a5,ar6,ar7);
      }
      *(undefined1 *)(ar4 + 5) = 0;
    }
    FUN_8c26a100(&stack0xffffffec,a5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x8c) = 0;
    if (ar5 == 0) {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7);
      if (iVar2 != 0) {
        *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x54) = 0;
        *(undefined4 *)(ar4 + 0x58) = 0;
        *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 6;
      }
    }
    else if ((ar5 == 1) &&
            (iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,a5,ar6,ar7), iVar2 != 1)) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
      *(undefined4 *)(ar4 + 0x30) = 0;
      *(undefined4 *)(ar4 + 0x34) = 0;
      *(undefined1 *)(ar4 + 6) = 0;
      *(undefined4 *)(ar4 + 0x5c) = 0;
      *(undefined4 *)(ar4 + 0x48) = 0;
      *(undefined4 *)(ar4 + 0x4c) = 0;
      *(undefined4 *)(ar4 + 0x3c) = 0;
      *(undefined1 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x2c);
      *(undefined4 *)(ar4 + 0x54) = 0;
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 1;
    }
    uVar1 = FUN_8c26a118(&stack0xffffffec,a5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2690dc\n.set _s_E1205_Illigal_parameter_MWRN_2690dc, _s_E1205_Illigal_parameter_MWRN_2690dc_def\n");
//@unit 8c2691b8
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2691ba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_c [8];
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
    return uVar1;
  }
  iVar2 = ar5;
  FUN_8c26a100(auStack_c,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(ar4 + 0x38) + 0x14))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
      *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) & 5;
    }
  }
  else if ((iVar2 == 1) &&
          (iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7), iVar2 != 1)) {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x10))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(byte *)(ar4 + 1) = *(byte *)(ar4 + 1) | 2;
  }
  uVar1 = FUN_8c26a118(auStack_c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2691ba\n.set _s_E1205_Illigal_parameter_MWRN_2691ba, _s_E1205_Illigal_parameter_MWRN_2691ba_def\n");
//@unit 8c269244
#include "../decls.h"
int * s_E1212_mwlRnaStartTrans_rna_s_269252_def
                (undefined1 *ar4,undefined4 ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  undefined1 *a7;
  int *piVar3;
  undefined1 *puVar4;
  int *a5;
  undefined1 *a6;
  int *piVar5;
  int iVar6;
  
  iVar1 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
  iVar1 = iVar1 * 8;
  piVar3 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34));
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  piVar5 = (int *)(iVar2 * iVar1);
  for (iVar2 = 0; iVar2 < (int)(uint)(byte)ar4[3]; iVar2 = iVar2 + 1) {
    if (*(int *)(ar4 + iVar2 * 4 + 0x10) == 0) {
      debug_printf(piVar3,ar5,ar6,ar7);
    }
    piVar3 = *(int **)(ar4 + iVar2 * 4 + 0x10);
    iVar6 = (int)piVar5 * *(int *)(ar4 + 8);
    ar7 = ar4 + iVar2 * 8 + 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    ar5 = 1;
    ar6 = (undefined1 *)(iVar6 >> 3);
    (**(code **)(*piVar3 + 0x18))(piVar3,1,ar6,ar7);
  }
  if (ar4[3] == '\x01') {
    puVar4 = *(undefined1 **)(ar4 + 0x1c);
  }
  else {
    ar6 = *(undefined1 **)(ar4 + 0x1c);
    ar7 = *(undefined1 **)(ar4 + 0x24);
    puVar4 = ar7;
    if ((int)ar6 < (int)ar7) {
      puVar4 = ar6;
    }
  }
  iVar2 = libgcc_divide_helper_010468(puVar4,*(undefined4 *)(ar4 + 8));
  piVar3 = (int *)(iVar2 << 3);
  if ((int)piVar5 <= iVar2 << 3) {
    piVar3 = piVar5;
  }
  a5 = (int *)(*(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x2c));
  if ((int)a5 <= (int)piVar3) {
    piVar3 = a5;
  }
  iVar2 = libgcc_divide_helper_010468(piVar3,iVar1);
  if (iVar2 * iVar1 < 1) {
    for (iVar1 = 0; iVar1 < (int)(uint)(byte)ar4[3]; iVar1 = iVar1 + 1) {
      if (*(int *)(ar4 + iVar1 * 4 + 0x10) == 0) {
        debug_printf(piVar3,a5,ar6,ar7);
      }
      piVar3 = *(int **)(ar4 + iVar1 * 4 + 0x10);
      a5 = (int *)0x1;
      ar6 = ar4 + iVar1 * 8 + 0x18;
      (**(code **)(*piVar3 + 0x1c))(piVar3,1,ar6,ar7);
    }
    piVar5 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_8c4bea40;
    for (piVar3 = (int *)0x0; (int)piVar3 < (int)(uint)(byte)ar4[3];
        piVar3 = (int *)((int)piVar3 + 1)) {
      a7 = *(undefined1 **)(ar4 + (int)piVar3 * 8 + 0x18);
      a6 = *(undefined1 **)(ar4 + 0x2c);
      _DAT_8c4bea40 = sh4_tmu_1f88e6(puVar4,a5,ar6,ar7);
      puVar4 = ar4;
      a5 = piVar3;
      piVar5 = (int *)FUN_8c268ddc(ar4,piVar3,a6,a7);
      _DAT_8c4bea44 = sh4_tmu_1f88e6(puVar4,a5,a6,a7);
      ar6 = a6;
      ar7 = a7;
    }
    *(int **)(ar4 + 0x3c) = piVar5;
  }
  return piVar5;
}

__asm__(".globl _s_E1212_mwlRnaStartTrans_rna_s_269252\n.set _s_E1212_mwlRnaStartTrans_rna_s_269252, _s_E1212_mwlRnaStartTrans_rna_s_269252_def\n");
//@unit 8c2693ce
#include "../decls.h"
undefined1 * FUN_8c2693ce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 d;
  int iVar4;
  undefined1 *a7;
  
  iVar3 = *(int *)(ar4 + 0x28);
  d = *(undefined4 *)(ar4 + 8);
  iVar4 = (iVar3 - *(int *)(ar4 + 0x34)) - *(int *)(ar4 + 0x54);
  iVar1 = libgcc_divide_helper_010468(0x20,d);
  iVar1 = iVar1 << 3;
  iVar4 = libgcc_divide_helper_010468(iVar4,iVar1);
  iVar3 = iVar3 - *(int *)(ar4 + 0x50);
  if (iVar4 * iVar1 < iVar3) {
    iVar3 = iVar4 * iVar1;
  }
  iVar4 = libgcc_divide_helper_010468(0x800,d);
  if (iVar4 << 3 <= iVar3) {
    iVar3 = iVar4 << 3;
  }
  iVar3 = libgcc_divide_helper_010468(iVar3,iVar1);
  if (iVar3 * iVar1 < 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (*(int *)(ar4 + 8) == 4) {
      puVar2 = &DAT_8c4be220;
    }
    else {
      puVar2 = (undefined1 *)0x8c4bda00;
    }
    a7 = puVar2 + 0x20;
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(ar4 + 3); iVar3 = iVar3 + 1) {
      puVar2 = (undefined1 *)FUN_8c268ddc(ar4,iVar3,*(undefined4 *)(ar4 + 0x50),a7);
    }
    *(undefined1 **)(ar4 + 0x58) = puVar2;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c2693ce\n.set _FUN_8c2693ce, _FUN_8c2693ce_def\n");
//@unit 8c2694a4
#include "../decls.h"
uint FUN_8c2694a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(0x8c + ar4) == 1) {
    return 1;
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c2785d8);
  if ((iVar2 == 1) && (*(char *)(ar4 + 5) == '\x01')) {
    iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
      *(undefined4 *)puVar1 = 0;
    }
    else {
      *(int *)puVar1 = *(int *)puVar1 + 1;
    }
  }
  if ((*(char *)(ar4 + 6) == '\x01') && (*(char *)(ar4 + 5) == '\0')) {
    ar5 = 1;
    iVar2 = (**(code **)(**(int **)(ar4 + 0x10) + 0x24))(*(int **)(ar4 + 0x10),1,ar6,ar7);
    if (iVar2 < 0x20) {
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 6) = 0;
    }
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
  }
  iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = s_E1212_mwlRnaStartTrans_rna_s_269252(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if ((iVar2 != 1) || (*(int *)(ar4 + 0x28) <= *(int *)(ar4 + 0x54))) goto LAB_8c26958c;
    if ((*(char *)(ar4 + 5) == '\x01') && (iVar2 = FUN_8c268e1a(ar4,ar5,ar6,ar7), iVar2 == 1)) {
      FUN_8c269056(ar4,ar5,ar6,ar7);
      *(undefined1 *)(ar4 + 5) = 0;
    }
    if (*(char *)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = FUN_8c2693ce(ar4,ar5,ar6,ar7);
  }
  if (0 < iVar2) {
    *(undefined1 *)(ar4 + 5) = 1;
  }
LAB_8c26958c:
  if (((*(char *)(ar4 + 1) == '\x05') && (*(int *)(ar4 + 0x40) <= *(int *)(ar4 + 0x34))) &&
     (*(char *)(ar4 + 7) == '\0')) {
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    *(undefined4 *)(ar4 + 0x40) = 0x7fffffff;
  }
  if ((*(byte *)(ar4 + 1) == 6) && (*(int *)(ar4 + 0x34) == 0)) {
    uVar3 = 0;
    s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
    uVar3 = noop_268d60(ar4,uVar3,ar6,ar7);
    return uVar3;
  }
  return (uint)*(byte *)(ar4 + 1);
}

__asm__(".globl _FUN_8c2694a4\n.set _FUN_8c2694a4, _FUN_8c2694a4_def\n");
//@unit 8c2695e4
#include "../decls.h"
undefined4 FUN_8c2695e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *a5;
  char *pcVar2;
  int iVar3;
  char *a4;
  char *pcVar4;
  undefined1 auStack_18 [8];
  
  FUN_8c26a100(auStack_18,ar5,ar6,ar7);
  iVar3 = (int)0x90;
  pcVar2 = 0x8c4bd580 + 0x480;
  a5 = 0x8c4bd580;
  a4 = 0x8c4bd580;
  pcVar4 = 0x8c4bd580;
  do {
    if (*pcVar4 == '\x01') {
      FUN_8c2694a4(a4,a5,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar3;
    a4 = a4 + iVar3;
  } while (pcVar4 < pcVar2);
  uVar1 = FUN_8c26a118(auStack_18,a5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c2695e4\n.set _FUN_8c2695e4, _FUN_8c2695e4_def\n");
//@unit 8c26962c
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269630_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,"E1205:Illigal parameter (MWRNA=NULL)",in_stack_fffffff0);
  }
  else {
    FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
    if (*(char *)(ar4 + 7) == '\0') {
      iVar2 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
      uVar3 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
      *(uint *)(ar4 + 0x88) = iVar2 << 1 | uVar3;
      FUN_8c268ea8(ar4,ar5,ar6,ar7);
      ar5 = 0;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7);
      *(undefined1 *)(ar4 + 7) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        *(undefined4 *)(ar4 + 0x8c) = 1;
        FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,in_stack_fffffff0);
        FUN_8c26a100(&stack0xfffffff0,ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      s_E1205_Illigal_parameter_MWRN_26973a(ar4,ar5,ar6,ar7);
    }
    uVar1 = FUN_8c26a118(&stack0xfffffff0,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269630\n.set _s_E1205_Illigal_parameter_MWRN_269630, _s_E1205_Illigal_parameter_MWRN_269630_def\n");
//@unit 8c2696aa
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_2696ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff4
                        );
    return uVar1;
  }
  FUN_8c26a100(&stack0xfffffff4,ar5,ar6,ar7);
  if (*(char *)(ar4 + 7) == '\x01') {
    if ((*(int *)(ar4 + 0x88) != 0) && (*(int *)(ar4 + 0x88) != 1)) {
      ar5 = 1;
      s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 7) = 0;
  }
  uVar1 = FUN_8c26a118(&stack0xfffffff4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2696ac\n.set _s_E1205_Illigal_parameter_MWRN_2696ac, _s_E1205_Illigal_parameter_MWRN_2696ac_def\n");
//@unit 8c269718
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269718_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0;
  }
  return (uint)*(byte *)(ar4 + 7);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269718\n.set _s_E1205_Illigal_parameter_MWRN_269718, _s_E1205_Illigal_parameter_MWRN_269718_def\n");
//@unit 8c269738
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_26973a_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int in_stack_ffffffec;
  undefined1 auStack_10 [4];
  int *piStack_c;
  
  puVar3 = &stack0xffffffec;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffec
                        );
    return uVar1;
  }
  FUN_8c26a100(auStack_10,ar5,ar6,ar7);
  if (*(char *)(ar4 + 5) == '\x01') {
    iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
    if (iVar2 == 1) {
      s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c269056(ar4,ar5,ar6,ar7);
    }
    *(undefined1 *)(ar4 + 5) = 0;
  }
  if ((*(int *)(ar4 + 0x30) != 0) && (0 < *(int *)(ar4 + 0x34))) {
    piStack_c = *(int **)(ar4 + 0x38);
    iVar2 = (**(code **)(*piStack_c + 0x54))
                      (piStack_c,*(undefined4 *)(ar4 + 0x30),&stack0xffffffec,ar7);
    ar6 = puVar3;
    if (*(int *)(ar4 + 0x88) == 2) {
      uVar1 = libgcc_divide_helper_010614
                        ((*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x28)) - in_stack_ffffffec,
                         *(int *)(ar4 + 0x28));
      *(undefined4 *)(ar4 + 0x50) = uVar1;
      ar6 = puVar3;
    }
    ar5 = *(int *)(ar4 + 0x28);
    uVar1 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x2c) + ar5) - in_stack_ffffffec,ar5);
    *(undefined4 *)(ar4 + 0x2c) = uVar1;
    *(int *)(ar4 + 0x30) = (*(int *)(ar4 + 0x30) + iVar2) - in_stack_ffffffec;
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) - iVar2;
  }
  uVar1 = FUN_8c26a118(auStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_26973a\n.set _s_E1205_Illigal_parameter_MWRN_26973a, _s_E1205_Illigal_parameter_MWRN_26973a_def\n");
//@unit 8c269808
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269816_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined1 *a5;
  int *piVar5;
  undefined1 *ar5_00;
  undefined1 auStack_4c [4];
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  undefined1 auStack_28 [4];
  undefined1 *puStack_24;
  
  iVar2 = ar4;
  iVar3 = ar5;
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    iVar1 = s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7);
    if (iVar1 != 1) {
      if (iVar3 < 1) {
        return 0;
      }
      *(undefined4 *)(ar4 + 0x8c) = 1;
      if (*(char *)(ar4 + 5) == '\x01') {
        s_E1209_mwRnaPause_Time_out_of_26908e(ar4,ar5,ar6,ar7,iVar3);
        iVar2 = s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7);
        if (iVar2 == 1) {
          s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7);
        }
        else {
          FUN_8c269056(ar4,ar5,ar6,ar7);
        }
        *(undefined1 *)(ar4 + 5) = 0;
      }
      FUN_8c26a100(auStack_4c,ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x8c) = 0;
      iVar2 = libgcc_divide_helper_010468(0x20,*(undefined4 *)(ar4 + 8));
      iVar2 = iVar2 << 3;
      iVar3 = libgcc_divide_helper_010468(iVar3,iVar2);
      iVar3 = iVar3 * iVar2;
      if (*(int *)(ar4 + 0x34) < iVar3) {
        iVar2 = (iVar3 - *(int *)(ar4 + 0x34)) * *(int *)(ar4 + 8);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        ar6 = (undefined1 *)(iVar2 >> 3);
        (**(code **)(**(int **)(ar4 + 0x10) + 0x18))(*(int **)(ar4 + 0x10),1,ar6,auStack_30);
        a5 = (undefined1 *)0x1;
        ar7 = auStack_28;
        (**(code **)(**(int **)(ar4 + 0x14) + 0x18))(*(int **)(ar4 + 0x14),1,ar6,ar7);
        ar5_00 = puStack_2c;
        if ((*(char *)(ar4 + 3) != '\x01') &&
           (puStack_48 = auStack_28, a5 = puStack_24, ar6 = puStack_2c, ar5_00 = puStack_24,
           puStack_44 = auStack_30, (int)puStack_2c < (int)puStack_24)) {
          ar5_00 = puStack_2c;
        }
        for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(ar4 + 3); iVar2 = iVar2 + 1) {
          ar7 = auStack_40;
          FUN_8c26be30(auStack_30 + iVar2 * 8,ar5_00,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          (**(code **)(*piVar5 + 0x20))(piVar5,0,auStack_38,ar7);
          piVar5 = *(int **)(ar4 + 0x10 + iVar2 * 4);
          a5 = (undefined1 *)0x1;
          ar6 = auStack_40;
          (**(code **)(*piVar5 + 0x1c))(piVar5,1,ar6,ar7);
        }
        *(undefined4 *)(ar4 + 0x2c) = 0;
        *(undefined4 *)(ar4 + 0x34) = 0;
        iVar2 = libgcc_divide_helper_010468(ar5_00,*(undefined4 *)(ar4 + 8));
        iVar2 = iVar2 * 8 + *(int *)(ar4 + 0x28);
      }
      else {
        a5 = (undefined1 *)
             libgcc_divide_helper_010614(*(int *)(ar4 + 0x30) + iVar3,*(undefined4 *)(ar4 + 0x28));
        iVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x58))(*(int **)(ar4 + 0x38),a5,ar6,ar7);
        iVar3 = *(int *)(ar4 + 0x34) - iVar2;
        *(int *)(ar4 + 0x34) = iVar3;
        uVar4 = libgcc_divide_helper_010614(iVar3,*(undefined4 *)(ar4 + 0x28));
        *(undefined4 *)(ar4 + 0x2c) = uVar4;
      }
      *(undefined4 *)(ar4 + 0x30) = 0;
      FUN_8c26a118(auStack_4c,a5,ar6,ar7);
      return iVar2;
    }
    s0 = s_E1210_mwRnaDiscardData_Play_Swit_8c273344;
  }
  debug_printf(iVar2,ar5,ar6,ar7,s0,iVar3);
  return 0;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269816\n.set _s_E1205_Illigal_parameter_MWRN_269816, _s_E1205_Illigal_parameter_MWRN_269816_def\n");
//@unit 8c2699d0
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_2699d4_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *a5;
  undefined4 *puVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    a5 = ar5;
    puVar2 = ar6;
    FUN_8c268ea8(ar4,ar5,ar6,ar7);
    *ar5 = *(int *)(ar4 + 0x4c) - *(int *)(ar4 + 0x34);
    uVar1 = s_E1205_Illigal_parameter_MWRN_269e36(ar4,a5,ar6,ar7);
    *puVar2 = uVar1;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_2699d4\n.set _s_E1205_Illigal_parameter_MWRN_2699d4, _s_E1205_Illigal_parameter_MWRN_2699d4_def\n");
//@unit 8c269a10
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (uint)*(byte *)(ar4 + 1);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269a10\n.set _s_E1205_Illigal_parameter_MWRN_269a10, _s_E1205_Illigal_parameter_MWRN_269a10_def\n");
//@unit 8c269a30
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269a30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(byte *)(ar4 + 1) & 1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269a30\n.set _s_E1205_Illigal_parameter_MWRN_269a30, _s_E1205_Illigal_parameter_MWRN_269a30_def\n");
//@unit 8c269a56
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269a56_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 2) >> 1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269a56\n.set _s_E1205_Illigal_parameter_MWRN_269a56, _s_E1205_Illigal_parameter_MWRN_269a56_def\n");
//@unit 8c269a7e
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269a7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return (int)(*(byte *)(ar4 + 1) & 4) >> 2;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269a7e\n.set _s_E1205_Illigal_parameter_MWRN_269a7e, _s_E1205_Illigal_parameter_MWRN_269a7e_def\n");
//@unit 8c269aa8
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269aa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269aa8\n.set _s_E1205_Illigal_parameter_MWRN_269aa8, _s_E1205_Illigal_parameter_MWRN_269aa8_def\n");
//@unit 8c269ac6
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269ac6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(int *)(ar4 + 0x28) - *(int *)(ar4 + 0x34);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269ac6\n.set _s_E1205_Illigal_parameter_MWRN_269ac6, _s_E1205_Illigal_parameter_MWRN_269ac6_def\n");
//@unit 8c269ae8
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269aec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if (ar5 <= (int)(uint)*(byte *)(ar4 + 2)) {
      *(char *)(ar4 + 3) = (char)ar5;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x1c))(*(int **)(ar4 + 0x38),(int)(char)ar5,ar6,ar7);
      if (ar5 == 1) {
        *(undefined4 *)(ar4 + 100) = 0;
        *(undefined4 *)(ar4 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 100) = 0xfffffff1;
        *(undefined4 *)(ar4 + 0x68) = 0xf;
      }
      s_E1205_Illigal_parameter_MWRN_269c8c(ar4,0,*(undefined4 *)(ar4 + 100),ar7);
      uVar1 = s_E1205_Illigal_parameter_MWRN_269c8c(ar4,1,*(undefined4 *)(ar4 + 0x68),ar7);
      return uVar1;
    }
    s0 = s_E1211_mwRnaSetNumChan_Illigal_pa_8c273370;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_fffffff0);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269aec\n.set _s_E1205_Illigal_parameter_MWRN_269aec, _s_E1205_Illigal_parameter_MWRN_269aec_def\n");
//@unit 8c269b6e
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269b6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269b6e\n.set _s_E1205_Illigal_parameter_MWRN_269b6e, _s_E1205_Illigal_parameter_MWRN_269b6e_def\n");
//@unit 8c269b8e
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269b92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    iVar2 = *(int *)(ar4 + 0x28) * *(int *)(ar4 + 8);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar2 = libgcc_divide_helper_010468(iVar2 >> 3,ar5);
    *(int *)(ar4 + 0x28) = iVar2 << 3;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x2c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = ar5;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269b92\n.set _s_E1205_Illigal_parameter_MWRN_269b92, _s_E1205_Illigal_parameter_MWRN_269b92_def\n");
//@unit 8c269c04
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269c06_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
    return uVar1;
  }
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x24))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269c06\n.set _s_E1205_Illigal_parameter_MWRN_269c06, _s_E1205_Illigal_parameter_MWRN_269c06_def\n");
//@unit 8c269c3e
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269c42_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    if (ar5 < 0) {
      if (ar5 < -0x3e6) {
        ar5 = -999;
      }
    }
    else {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x34))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    uVar1 = 0x60;
    *(int *)(ar4 + 0x60) = ar5;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269c42\n.set _s_E1205_Illigal_parameter_MWRN_269c42, _s_E1205_Illigal_parameter_MWRN_269c42_def\n");
//@unit 8c269c88
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269c8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar5);
  }
  else {
    iVar2 = -0xf;
    if ((ar6 < -0xf) || (iVar2 = 0xf, 0xf < ar6)) {
      ar6 = iVar2;
    }
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x3c))(*(int **)(ar4 + 0x38),ar5,ar6,ar7);
    *(int *)(ar5 * 4 + ar4 + 100) = ar6;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269c8c\n.set _s_E1205_Illigal_parameter_MWRN_269c8c, _s_E1205_Illigal_parameter_MWRN_269c8c_def\n");
//@unit 8c269cec
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269cf2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_ffffffec;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if ((-1 < ar5) && (ar5 < 0x11)) {
      if (ar6 < -0x2d) {
        ar6 = -0x2d;
      }
      else if (0 < ar6) {
        ar6 = 0;
      }
      (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),0,ar5,ar6);
      *(int *)(ar4 + 0x6c) = ar5;
      *(int *)(ar4 + 0x70) = ar6;
      return 0x70;
    }
    s0 = s_E1207_mwRnaSetFx_Illigal_paramet_8c2733a4;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_ffffffec);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269cf2\n.set _s_E1205_Illigal_parameter_MWRN_269cf2, _s_E1205_Illigal_parameter_MWRN_269cf2_def\n");
//@unit 8c269d58
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269d5a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_ffffffe4
                        );
    return uVar1;
  }
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x44))(piStack_14,1,ar5,ar6);
  piStack_14 = *(int **)(ar4 + 0x38);
  (**(code **)(*piStack_14 + 0x48))(piStack_14,1,&stack0xffffffe4,&uStack_18);
  *(undefined4 *)(ar4 + 0x74) = in_stack_ffffffe4;
  *(undefined4 *)(ar4 + 0x78) = uStack_18;
  return 0x78;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269d5a\n.set _s_E1205_Illigal_parameter_MWRN_269d5a, _s_E1205_Illigal_parameter_MWRN_269d5a_def\n");
//@unit 8c269db8
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269dbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_stack_fffffff0
                        );
  }
  else {
    if (ar5 < -0x2d) {
      ar5 = -0x2d;
    }
    else if (0 < ar5) {
      ar5 = 0;
    }
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),2,ar5,0);
    uVar1 = 0x84;
    *(int *)(ar4 + 0x84) = ar5;
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269dbc\n.set _s_E1205_Illigal_parameter_MWRN_269dbc, _s_E1205_Illigal_parameter_MWRN_269dbc_def\n");
//@unit 8c269e18
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269e18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269e18\n.set _s_E1205_Illigal_parameter_MWRN_269e18, _s_E1205_Illigal_parameter_MWRN_269e18_def\n");
//@unit 8c269e36
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269e36_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0xc);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269e36\n.set _s_E1205_Illigal_parameter_MWRN_269e36, _s_E1205_Illigal_parameter_MWRN_269e36_def\n");
//@unit 8c269e54
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269e54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x60);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269e54\n.set _s_E1205_Illigal_parameter_MWRN_269e54, _s_E1205_Illigal_parameter_MWRN_269e54_def\n");
//@unit 8c269e74
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269e74_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar5 * 4 + ar4 + 100);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269e74\n.set _s_E1205_Illigal_parameter_MWRN_269e74, _s_E1205_Illigal_parameter_MWRN_269e74_def\n");
//@unit 8c269e9a
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269e9a_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    *ar5 = 0xffffffff;
    *ar6 = 0xffffffff;
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x6c);
  *ar6 = *(undefined4 *)(ar4 + 0x70);
  return 0x70;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269e9a\n.set _s_E1205_Illigal_parameter_MWRN_269e9a, _s_E1205_Illigal_parameter_MWRN_269e9a_def\n");
//@unit 8c269eda
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269eda_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    *ar5 = 0xffffffff;
    *ar6 = 0xffffffff;
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x74);
  *ar6 = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269eda\n.set _s_E1205_Illigal_parameter_MWRN_269eda, _s_E1205_Illigal_parameter_MWRN_269eda_def\n");
//@unit 8c269f1a
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269f1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  if (ar4 == 0) {
    debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 + 0x84);
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269f1a\n.set _s_E1205_Illigal_parameter_MWRN_269f1a, _s_E1205_Illigal_parameter_MWRN_269f1a_def\n");
//@unit 8c269f3a
#include "../decls.h"
undefined4 thunk_FUN_8c26a130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c26a130)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c26a130\n.set _thunk_FUN_8c26a130, _thunk_FUN_8c26a130_def\n");
//@unit 8c269f50
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269f52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
    return uVar1;
  }
  *(undefined4 *)(ar4 + 0x7c) = ar5;
  *(undefined4 *)(ar4 + 0x80) = ar6;
                    
                    
  uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),3,ar5,ar6);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269f52\n.set _s_E1205_Illigal_parameter_MWRN_269f52, _s_E1205_Illigal_parameter_MWRN_269f52_def\n");
//@unit 8c269fa0
#include "../decls.h"
undefined4
s_E1205_Illigal_parameter_MWRN_269fa0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,in_PR);
    return uVar1;
  }
  *ar5 = *(undefined4 *)(ar4 + 0x7c);
  *ar6 = *(undefined4 *)(ar4 + 0x80);
  return 0x80;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269fa0\n.set _s_E1205_Illigal_parameter_MWRN_269fa0, _s_E1205_Illigal_parameter_MWRN_269fa0_def\n");
//@unit 8c269fc8
#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269fcc_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *a6;
  undefined1 *a7;
  undefined4 *a7_00;
  int *piVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  int *piStack_20;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 auStack_10 [2];
  
  puStack_24 = (undefined4 *)ar5;
  if (ar4 == 0) {
    uVar1 = debug_printf(0,ar5,ar6,ar7,s_E1205_Illigal_parameter__MWRNA_N_8c2732a0,ar6);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x38) + 0x44))(*(int **)(ar4 + 0x38),4,ar5,0);
    uVar2 = 4;
    a7 = auStack_1c;
    piVar3 = ar6;
    uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),4,ar6,a7);
    if (0 < *piVar3) {
      uVar1 = (**(code **)(**(int **)(ar4 + 0x38) + 0x30))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uStack_18 = (**(code **)(**(int **)(ar4 + 0x38) + 0x28))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      uVar2 = (**(code **)(**(int **)(ar4 + 0x38) + 0x38))(*(int **)(ar4 + 0x38),uVar2,ar6,a7);
      puStack_24 = &uStack_14;
      piStack_20 = *(int **)(ar4 + 0x38);
      uStack_14 = (**(code **)(*piStack_20 + 0x40))(piStack_20,0,ar6,a7);
      piStack_20 = auStack_10;
      auStack_10[0] = (**(code **)(**(int **)(ar4 + 0x38) + 0x40))(*(int **)(ar4 + 0x38),1,ar6,a7);
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),0,&uStack_2c,&uStack_28);
      a6 = &uStack_34;
      a7_00 = &uStack_30;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x48))(*(int **)(ar4 + 0x38),3,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269b92(ar4,uVar1,a6,a7_00);
      s_E1205_Illigal_parameter_MWRN_269c06(ar4,uStack_18,a6,a7_00);
      *(undefined4 *)(ar4 + 0x60) = uVar2;
      *(undefined4 *)(ar4 + 100) = *puStack_24;
      *(int *)(ar4 + 0x68) = *piStack_20;
      *(undefined4 *)(ar4 + 0x6c) = uStack_2c;
      *(undefined4 *)(ar4 + 0x70) = uStack_28;
      *(undefined4 *)(ar4 + 0x7c) = uStack_34;
      uVar1 = 0x80;
      *(undefined4 *)(ar4 + 0x80) = uStack_30;
    }
  }
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269fcc\n.set _s_E1205_Illigal_parameter_MWRN_269fcc, _s_E1205_Illigal_parameter_MWRN_269fcc_def\n");
//@unit 8c26a0f8
#include "../decls.h"
undefined4 noop_26a0f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_26a0f8\n.set _noop_26a0f8, _noop_26a0f8_def\n");
//@unit 8c26a100
#include "../decls.h"
uint FUN_8c26a100_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  uVar1 = (uint)(int)0xffffff0f;
  *ar4 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         uVar1 | 0xf0;
}

__asm__(".globl _FUN_8c26a100\n.set _FUN_8c26a100, _FUN_8c26a100_def\n");
//@unit 8c26a118
#include "../decls.h"
uint FUN_8c26a118_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (*ar4 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26a118\n.set _FUN_8c26a118, _FUN_8c26a118_def\n");
//@unit 8c26a130
#include "../decls.h"
undefined4 FUN_8c26a130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&DATA_8c2785e4);
  if (ar4 == 0) {
    *(undefined4 *)(&DATA_8c2785e0) = 0;
    *(undefined4 *)puVar1 = 0;
  }
  else {
    *(int *)(&DATA_8c2785e0) = ar4;
    *(undefined4 *)puVar1 = ar5;
  }
  uVar2 = memset(0x8c4bea48,0,(int)0x100);
  return uVar2;
}

__asm__(".globl _FUN_8c26a130\n.set _FUN_8c26a130, _FUN_8c26a130_def\n");
//@unit 8c26a14e
#include "../decls.h"
undefined4
debug_printf_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = vsprintf_like(0x8c4bea48,s0,&s4);
  if (*(code **)(&DATA_8c2785e0) != (code *)0x0) {
    uVar1 = (**(code **)(&DATA_8c2785e0))(*(undefined4 *)(&DATA_8c2785e4),0x8c4bea48);
  }
  return uVar1;
}

__asm__(".globl _debug_printf\n.set _debug_printf, _debug_printf_def\n");
//@unit 8c26a152
#include "../decls.h"
undefined4
FUN_8c26a152_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  
  if ((ar5 & (uint)&s8) == 0) {
    ar6_00 = &s8;
  }
  else {
    ar6_00 = &s12;
  }
  uVar1 = vsprintf_like(0x8c4bea48,s4,ar6_00,ar7);
  if (*(code **)(&DATA_8c2785e0) != (code *)0x0) {
    uVar1 = (**(code **)(&DATA_8c2785e0))(*(undefined4 *)(&DATA_8c2785e4),0x8c4bea48,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26a152\n.set _FUN_8c26a152, _FUN_8c26a152_def\n");
//@unit 8c26a1a4
#include "../decls.h"
undefined4 FUN_8c26a1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = memset(0x8c4beb48,0,0x40,ar7);
  iVar3 = 0xf;
  uVar4 = 0x8c4beb48 + 0x40;
  uVar2 = 0x8c4beb48;
  do {
    *(int *)(uVar2 + 4) = iVar3;
    uVar2 = uVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (uVar2 < uVar4);
  return uVar1;
}

__asm__(".globl _FUN_8c26a1a4\n.set _FUN_8c26a1a4, _FUN_8c26a1a4_def\n");
//@unit 8c26a1ca
#include "../decls.h"
undefined4 FUN_8c26a1ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = 0x8c4beb48;
  piVar2 = 0x8c4beb48;
  while( true ) {
    if (0x8c4beb48 + 0x10 <= piVar1) {
      return 0;
    }
    if (*piVar1 == 0) break;
    piVar1 = piVar1 + 2;
    piVar2 = piVar2 + 2;
  }
  *piVar2 = 1;
  return piVar2;
}

__asm__(".globl _FUN_8c26a1ca\n.set _FUN_8c26a1ca, _FUN_8c26a1ca_def\n");
//@unit 8c26a1f2
#include "../decls.h"
undefined4 FUN_8c26a1f2_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c26a1f2\n.set _FUN_8c26a1f2, _FUN_8c26a1f2_def\n");
//@unit 8c26a1f8
#include "../decls.h"
undefined4 get_field_4_26a1f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_26a1f8\n.set _get_field_4_26a1f8, _get_field_4_26a1f8_def\n");
//@unit 8c26a204
#include "../decls.h"
undefined4 FUN_8c26a204_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  memset(0x8c4beb88,0,(int)0x2a0,ar7);
  uVar1 = FUN_8c26a1a4();
  return uVar1;
}

__asm__(".globl _FUN_8c26a204\n.set _FUN_8c26a204, _FUN_8c26a204_def\n");
//@unit 8c26a220
#include "../decls.h"
uint FUN_8c26a220_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x8c4beb88;
  for (uVar1 = 0x8c4beb88;
      (uVar3 = 0, uVar1 < 0x8c4beb88 + (int)0x2a0 &&
      (uVar3 = uVar2, *(int *)(uVar1 + 4) != 0)); uVar1 = uVar1 + 0x54) {
    uVar2 = uVar2 + 0x54;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c26a220\n.set _FUN_8c26a220, _FUN_8c26a220_def\n");
//@unit 8c26a246
#include "../decls.h"
undefined4 s_E1221_Illigal_parameter_NCH__26a254_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 a7;
  int iVar10;
  int *piVar11;
  undefined4 *puStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [3];
  
  puVar1 = (&debug_printf);
  iVar6 = ar4;
  if (((ar4 < 1) || (2 < ar4)) ||
     (puVar5 = (undefined4 *)FUN_8c26a220(ar4,ar5,ar6,ar7), puVar5 == (undefined4 *)0x0)) {
    (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
  }
  else {
    *puVar5 = (&DATA_8c278600);
    for (iVar10 = 0; puVar2 = (&FUN_8c26a1f2), iVar10 < ar4; iVar10 = iVar10 + 1) {
      puVar8 = puVar5 + iVar10 + 6;
      uVar9 = FUN_8c26a1ca(iVar6,ar5,ar6,ar7);
      *puVar8 = uVar9;
      if (puVar5[iVar10 + 6] == 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (iVar10 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
        return 0;
      }
      piVar11 = aiStack_28 + iVar10;
      iVar6 = puVar5[iVar10 + 6];
      iVar7 = get_field_4_26a1f8(iVar6,ar5,ar6,ar7);
      *piVar11 = iVar7;
    }
    puStack_40 = (undefined4 *)0x0;
    piVar11 = puVar5 + 0xe;
    piStack_3c = aiStack_28;
    if (0 < ar4) {
      do {
        ar7 = (int)0x4000;
        ar5 = *piStack_3c;
        iVar10 = (0x10 - ar5) * -0x4040 + 0x200000;
        ar6 = iVar10;
        iVar6 = FUN_8c268320(0x52535053,ar5,iVar10,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        }
        *piVar11 = iVar10;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1);
        piVar11 = piVar11 + 1;
        piStack_3c = piStack_3c + 1;
      } while ((int)puStack_40 < ar4);
    }
    puVar5[0x10] = (int)0x4000;
    for (puStack_40 = (undefined4 *)0x0; puVar3 = (&FUN_8c265784), (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      iVar6 = FUN_8c265704(&uStack_30,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        piStack_3c = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < (int)puStack_40) {
          do {
            iVar6 = (*(code *)puVar3)(*piStack_3c,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            piStack_3c = piStack_3c + 1;
          } while ((int)puStack_38 < (int)puStack_40);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 8] = uStack_30;
    }
    for (puStack_40 = (undefined4 *)0x0; (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      puVar8 = &uStack_30;
      iVar6 = FUN_8c265704(puVar8,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
        puStack_38 = puVar5 + 10;
        iStack_34 = 0;
        if (0 < (int)puStack_40) {
          do {
            uVar9 = *puStack_38;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            iStack_34 = iStack_34 + 1;
            puStack_38 = puStack_38 + 1;
          } while (iStack_34 < (int)puStack_40);
        }
        puStack_40 = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < ar4) {
          do {
            uVar9 = *puStack_40;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            puStack_40 = puStack_40 + 1;
          } while ((int)puStack_38 < ar4);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 10] = uStack_30;
    }
    if (ar4 == 1) {
      puVar8 = &uStack_2c;
      iVar6 = FUN_8c2675d8(puVar8,ar5,ar6,ar7,1,(int)(char)aiStack_28[0]);
    }
    else {
      puVar8 = &uStack_2c;
      iVar6 = FUN_8c2675d8(puVar8,ar5,ar6,ar7,ar4,(int)(char)aiStack_28[0]);
    }
    puVar4 = (&thunk_FUN_8c2678a4);
    if (iVar6 == 0) {
      puVar5[0xc] = uStack_2c;
      puVar5[3] = ar4;
      puVar5[2] = ar4;
      for (iVar6 = 0; puVar2 = (&FUN_8c267914), iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar4)(puVar5[0xc],iVar6,ar6,ar7);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,ar6,ar7);
        }
      }
      for (iVar6 = 0; iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        uVar9 = 0x7f;
        a7 = 0;
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar2)(puVar5[0xc],iVar6,0x7f,0);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,uVar9,a7);
        }
      }
      puVar5[0x12] = 0xffffffff;
      puVar5[0x11] = 0;
      puVar5[1] = 1;
      return puVar5;
    }
    (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
    piStack_3c = puVar5 + 8;
    iStack_34 = 0;
    if (0 < ar4) {
      do {
        uVar9 = *piStack_3c;
        (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
        }
        (*(code *)puVar2)(puVar5[(int)puStack_40 + 6],ar5,ar6,ar7);
        iStack_34 = iStack_34 + 1;
        piStack_3c = piStack_3c + 1;
      } while (iStack_34 < ar4);
    }
  }
  return 0;
}

__asm__(".globl _s_E1221_Illigal_parameter_NCH__26a254\n.set _s_E1221_Illigal_parameter_NCH__26a254, _s_E1221_Illigal_parameter_NCH__26a254_def\n");
//@unit 8c26a5de
#include "../decls.h"
undefined4
s_E1230_sdMemBlkDestroy_return_26a5e8_def
          (undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\x01') {
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      FUN_8c26a1f2(*(undefined4 *)(unaff_r14 + 0x18 + iVar2 * 4),ar5,ar6,ar7,in_PR);
      iVar1 = FUN_8c265784(*(undefined4 *)(unaff_r14 + 0x20 + iVar2 * 4),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      iVar1 = FUN_8c265784(*(undefined4 *)(iVar2 * 4 + unaff_r14 + 0x28),ar5,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    for (iVar2 = 0; iVar2 < *(int *)(unaff_r14 + 8); iVar2 = iVar2 + 1) {
      ar5 = iVar2;
      iVar1 = thunk_FUN_8c2678a4(*(undefined4 *)(unaff_r14 + 0x30),iVar2,ar6,ar7);
      if (iVar1 != 0) {
        debug_printf(iVar1,ar5,ar6,ar7);
      }
    }
    iVar2 = thunk_FUN_8c266ccc(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
    if (iVar2 != 0) {
      debug_printf(iVar2,ar5,ar6,ar7);
    }
    *(undefined4 *)(unaff_r14 + 8) = 0;
    *(undefined4 *)(unaff_r14 + 0xc) = 0;
    ain0 = memset(unaff_r14,0,0x54,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return ain0;
}

__asm__(".globl _s_E1230_sdMemBlkDestroy_return_26a5e8\n.set _s_E1230_sdMemBlkDestroy_return_26a5e8, _s_E1230_sdMemBlkDestroy_return_26a5e8_def\n");
//@unit 8c26a6d8
#include "../decls.h"
int s_E1241_sdSysFlushHostCmd_retu_26a6d8_def
              (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = FUN_8c2688b4(ar4,ar5,ar6,ar7);
  if ((ar4_00 != 0) && (ar4_00 != 0xb000003)) {
    ar4_00 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1241_sdSysFlushHostCmd_return_e_8c273678,in_PR);
  }
  return ar4_00;
}

__asm__(".globl _s_E1241_sdSysFlushHostCmd_retu_26a6d8\n.set _s_E1241_sdSysFlushHostCmd_retu_26a6d8, _s_E1241_sdSysFlushHostCmd_retu_26a6d8_def\n");
//@unit 8c26a6fc
#include "../decls.h"
undefined4
s_E1233_sdPstmPlay_return_erro_26a6fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar7_00;
  undefined4 s4;
  
  iVar2 = *(int *)(ar4 + 0x10);
  uVar1 = *(undefined4 *)(ar4 + 0x14);
  if (iVar2 == 0x10) {
    ar5 = 1;
  }
  else if (iVar2 == 8) {
    ar5 = 0;
  }
  else if (iVar2 == 4) {
    ar5 = 2;
  }
  ar7_00 = 0;
  *(int *)(ar4 + 0x10) = iVar2;
  s4 = uVar1;
  iVar2 = FUN_8c26784c(*(undefined4 *)(ar4 + 0x30),ar5,uVar1,0);
  if (iVar2 != 0) {
    debug_printf(iVar2,ar5,uVar1,ar7_00,s_E1233_sdPstmPlay_return_error_in_8c2736b4,s4);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(ar4,1,uVar1,ar7_00);
  return uVar1;
}

__asm__(".globl _s_E1233_sdPstmPlay_return_erro_26a6fe\n.set _s_E1233_sdPstmPlay_return_erro_26a6fe, _s_E1233_sdPstmPlay_return_erro_26a6fe_def\n");
//@unit 8c26a750
#include "../decls.h"
undefined4
s_E1234_sdPstmStop_return_erro_26a750_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int unaff_r14;
  undefined4 in_PR;
  
  ar4_00 = thunk_FUN_8c267f2c(*(undefined4 *)(unaff_r14 + 0x30),ar5,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5,ar6,ar7,s_E1234_sdPstmStop_return_error_in_8c2736e0,in_PR);
  }
  uVar1 = s_E1241_sdSysFlushHostCmd_retu_26a6d8(unaff_r14,0,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_E1234_sdPstmStop_return_erro_26a750\n.set _s_E1234_sdPstmStop_return_erro_26a750, _s_E1234_sdPstmStop_return_erro_26a750_def\n");
//@unit 8c26a772
#include "../decls.h"
int FUN_8c26a772_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x40),*(undefined4 *)(ar4 + 0x10));
  return iVar1 << 3;
}

__asm__(".globl _FUN_8c26a772\n.set _FUN_8c26a772, _FUN_8c26a772_def\n");
//@unit 8c26a776
#include "../decls.h"
int FUN_8c26a776_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  code *in_r3;
  
  iVar1 = (*in_r3)();
  return iVar1 << 3;
}

__asm__(".globl _FUN_8c26a776\n.set _FUN_8c26a776, _FUN_8c26a776_def\n");
//@unit 8c26a786
#include "../decls.h"
undefined4
s_E1240_sdPstmSetUseCh_return__26a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  undefined4 s4;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267d88(*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6,ar7,s_E1240_sdPstmSetUseCh_return_erro_8c27370c,s4);
  }
  return uVar1;
}

__asm__(".globl _s_E1240_sdPstmSetUseCh_return__26a788\n.set _s_E1240_sdPstmSetUseCh_return__26a788, _s_E1240_sdPstmSetUseCh_return__26a788_def\n");
//@unit 8c26a7b4
#include "../decls.h"
int s_E1236_sdPstmGetCurAdr_return_26a7b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  uint s4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  s4 = 1;
  uStack_c = ar5;
  FUN_8c266f38(*(undefined4 *)(ar4 + 0x30),0,&stack0xffffffec,ar7);
  if ((s4 & 1) == 0) {
    iVar1 = 0;
  }
  else {
    ar6_00 = &uStack_10;
    ar5_00 = uStack_c;
    iVar1 = thunk_FUN_8c266d28(*(undefined4 *)(ar4 + 0x30),uStack_c,ar6_00,ar7);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,ar6_00,ar7,s_E1236_sdPstmGetCurAdr_return_err_8c273744,s4);
    }
    iVar1 = libgcc_divide_helper_010468(uStack_10,*(undefined4 *)(ar4 + 0x10));
    iVar1 = iVar1 << 3;
  }
  return iVar1;
}

__asm__(".globl _s_E1236_sdPstmGetCurAdr_return_26a7b6\n.set _s_E1236_sdPstmGetCurAdr_return_26a7b6, _s_E1236_sdPstmGetCurAdr_return_26a7b6_def\n");
//@unit 8c26a80a
#include "../decls.h"
undefined4 FUN_8c26a80a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c26a80a\n.set _FUN_8c26a80a, _FUN_8c26a80a_def\n");
//@unit 8c26a812
#include "../decls.h"
undefined4 FUN_8c26a812_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c26a812\n.set _FUN_8c26a812, _FUN_8c26a812_def\n");
//@unit 8c26a860
#include "../decls.h"
int FUN_8c26a860_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int ar4_00;
  int ar5_00;
  int iVar2;
  int ar6_00;
  undefined4 uVar3;
  undefined4 in_PR;
  
  iVar2 = -0x7f;
  if (-0x3bf < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = libgcc_divide_helper_010468(ar5 * -0xff + 0x80,0xfffffc41);
    in_r0 = libgcc_divide_helper_010468(iVar1 * 10,0x12);
    iVar1 = in_r0;
    if (iVar2 <= in_r0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(ar4 + 0xc) <= iVar2) {
      return in_r0;
    }
    uVar3 = 0;
    ar5_00 = iVar2;
    ar6_00 = iVar1;
    ar4_00 = thunk_FUN_8c267e54(*(undefined4 *)(ar4 + 0x30),iVar2,iVar1,0);
    if (ar4_00 != 0) break;
    iVar2 = iVar2 + 1;
    in_r0 = 0;
  }
  uVar3 = debug_printf(ar4_00,ar5_00,ar6_00,uVar3,s_E1237_sdPstmSetVol_return_error_i_8c27377c,in_PR
                      );
  return uVar3;
}

__asm__(".globl _FUN_8c26a860\n.set _FUN_8c26a860, _FUN_8c26a860_def\n");
//@unit 8c26a870
#include "../decls.h"
int s_E1237_sdPstmSetVol_return_er_26a870_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int a4;
  int a5;
  int iVar2;
  int a6;
  undefined4 uVar3;
  int unaff_r12;
  
  iVar2 = -0x7f;
  if (ar4 < ar5) {
    if (-1 < ar5) {
      iVar1 = 0x7f;
      goto LAB_8c26a8aa;
    }
    iVar1 = libgcc_divide_helper_010468(ar5 * -0xff + 0x80,ar4);
    ain0 = libgcc_divide_helper_010468(iVar1 * 10,0x12);
    iVar1 = ain0;
    if (iVar2 <= ain0) goto LAB_8c26a8aa;
  }
  iVar1 = iVar2;
LAB_8c26a8aa:
  iVar2 = 0;
  while( true ) {
    if (*(int *)(unaff_r12 + 0xc) <= iVar2) {
      return ain0;
    }
    uVar3 = 0;
    a5 = iVar2;
    a6 = iVar1;
    a4 = thunk_FUN_8c267e54(*(undefined4 *)(unaff_r12 + 0x30),iVar2,iVar1,0);
    if (a4 != 0) break;
    iVar2 = iVar2 + 1;
    ain0 = 0;
  }
  uVar3 = debug_printf(a4,a5,a6,uVar3);
  return uVar3;
}

__asm__(".globl _s_E1237_sdPstmSetVol_return_er_26a870\n.set _s_E1237_sdPstmSetVol_return_er_26a870, _s_E1237_sdPstmSetVol_return_er_26a870_def\n");
//@unit 8c26a8e4
#include "../decls.h"
undefined4 FUN_8c26a8e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [2];
  char cStack_1e;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),0,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1e * -0x77e + 0x80,0xff);
  return uVar1;
}

__asm__(".globl _FUN_8c26a8e4\n.set _FUN_8c26a8e4, _FUN_8c26a8e4_def\n");
//@unit 8c26a914
#include "../decls.h"
undefined4 s_E1238_sdPstmSetPan_return_er_26a914_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  int ar4_00;
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 s4;
  
  ar6_00 = libgcc_divide_helper_010468(ar6 * 0x7f,0xf);
  ar7_00 = 0;
  s4 = ar5;
  ar4_00 = thunk_FUN_8c267b30(*(undefined4 *)(ar4 + 0x30),ar5,ar6_00,0);
  uVar1 = 0;
  if (ar4_00 != 0) {
    uVar1 = debug_printf(ar4_00,ar5,ar6_00,ar7_00,s_E1238_sdPstmSetPan_return_error_i_8c2737ac,s4);
  }
  return uVar1;
}

__asm__(".globl _s_E1238_sdPstmSetPan_return_er_26a914\n.set _s_E1238_sdPstmSetPan_return_er_26a914, _s_E1238_sdPstmSetPan_return_er_26a914_def\n");
//@unit 8c26a956
#include "../decls.h"
undefined4 FUN_8c26a956_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [3];
  char cStack_1d;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),ar5,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1d * 0xf,0x7f);
  return uVar1;
}

__asm__(".globl _FUN_8c26a956\n.set _FUN_8c26a956, _FUN_8c26a956_def\n");
//@unit 8c26a9b8
#include "../decls.h"
undefined4 s_E1245_sdPstmSetFxCh_return_e_26a9bc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  int a6;
  int iVar7;
  char in_T;
  
  puVar2 = (&FUN_8c267a98);
  puVar1 = (&debug_printf);
  if (in_T == '\x01') {
    if (ar6 < 0) {
      a6 = ar6 * 2 + ((int)(ar6 + (uint)(ar6 < 0)) >> 1);
    }
    else {
      a6 = 0x7f;
    }
  }
  else {
    a6 = -0x7f;
  }
  if (*(int *)(ar4 + 0x48) != unaff_r10) {
    for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
      ar7 = 0x7f;
      iVar5 = iVar7;
      iVar6 = unaff_r10;
      iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,unaff_r10,0x7f);
      if (iVar3 != 0) {
        (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = unaff_r10;
  }
  puVar2 = (&FUN_8c267b20);
  uVar4 = 0x48;
  for (iVar7 = 0; iVar7 < *(int *)(ar4 + 0xc); iVar7 = iVar7 + 1) {
    iVar5 = iVar7;
    iVar6 = a6;
    iVar3 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),iVar7,a6,ar7);
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = (*(code *)puVar1)(iVar3,iVar5,iVar6,ar7);
    }
  }
  return uVar4;
}

__asm__(".globl _s_E1245_sdPstmSetFxCh_return_e_26a9bc\n.set _s_E1245_sdPstmSetFxCh_return_e_26a9bc, _s_E1245_sdPstmSetFxCh_return_e_26a9bc_def\n");
//@unit 8c26aa48
#include "../decls.h"
undefined4
FUN_8c26aa48_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  *ar5 = 0;
  *ar6 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c26aa48\n.set _FUN_8c26aa48, _FUN_8c26aa48_def\n");
//@unit 8c26aa5c
#include "../decls.h"
int s_E1239_sdPstmSetPitch_return__26aa62_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  int a5;
  int a6;
  undefined4 a7;
  int a5_00;
  int unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    ar5 = ar4;
  }
  if (ar5 < -0x17) {
    ar5 = -0x18;
  }
  *(int *)(unaff_r14 + 0x4c) = ar5;
  iVar2 = ar5 << 8;
  if (0x62 < ar6) {
    ar6 = 99;
  }
  if (ar6 < -0x62) {
    ar6 = -99;
  }
  *(int *)(unaff_r14 + 0x50) = ar6;
  iVar1 = libgcc_divide_helper_010468(ar6 << 8,100);
  iVar2 = iVar2 + iVar1;
  for (a5_00 = 0; a5_00 < *(int *)(unaff_r14 + 0xc); a5_00 = a5_00 + 1) {
    a7 = 0;
    a5 = a5_00;
    a6 = iVar2;
    a4 = FUN_8c267d74(*(undefined4 *)(unaff_r14 + 0x30),a5_00,iVar2,0);
    iVar1 = 0;
    if (a4 != 0) {
      iVar1 = debug_printf(a4,a5,a6,a7);
    }
  }
  return iVar1;
}

__asm__(".globl _s_E1239_sdPstmSetPitch_return__26aa62\n.set _s_E1239_sdPstmSetPitch_return__26aa62, _s_E1239_sdPstmSetPitch_return__26aa62_def\n");
//@unit 8c26aad4
#include "../decls.h"
undefined4 FUN_8c26aad4_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *ar6 = *(undefined4 *)(ar4 + 0x50);
  return 0x50;
}

__asm__(".globl _FUN_8c26aad4\n.set _FUN_8c26aad4, _FUN_8c26aad4_def\n");
//@unit 8c26aaea
#include "../decls.h"
undefined4 s_E1247_sdPstmSetDrctLev_retur_26aaf2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0;
  int a4;
  int a5;
  int a6;
  int a6_00;
  int a5_00;
  char in_T;
  
  puVar2 = (&FUN_8c267a10);
  puVar1 = (&debug_printf);
  if (in_T == '\x01') {
    if (ar5 < 0) {
      a6_00 = ar5 * 3;
    }
    else {
      a6_00 = 0x7f;
    }
  }
  else {
    a6_00 = -0x7f;
  }
  for (a5_00 = 0; a5_00 < *(int *)(ar4 + 0xc); a5_00 = a5_00 + 1) {
    a5 = a5_00;
    a6 = a6_00;
    a4 = (*(code *)puVar2)(*(undefined4 *)(ar4 + 0x30),a5_00,a6_00,ar7);
    in_r0 = 0;
    if (a4 != 0) {
      in_r0 = (*(code *)puVar1)(a4,a5,a6,ar7);
    }
  }
  return in_r0;
}

__asm__(".globl _s_E1247_sdPstmSetDrctLev_retur_26aaf2\n.set _s_E1247_sdPstmSetDrctLev_retur_26aaf2, _s_E1247_sdPstmSetDrctLev_retur_26aaf2_def\n");
//@unit 8c26ab42
#include "../decls.h"
undefined4 ret_const_0_26ab42_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_26ab42\n.set _ret_const_0_26ab42, _ret_const_0_26ab42_def\n");
//@unit 8c26ab86
#include "../decls.h"
undefined4 FUN_8c26ab86_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 *ar7)

{
  undefined4 uVar1;
  int *unaff_r14;
  char in_T;
  
  if (in_T != '\0') {
    uVar1 = FUN_8c26aa48(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 1) {
    uVar1 = FUN_8c26aad4(ar4,unaff_r14,ar7,ar7);
    return uVar1;
  }
  if (ar5 == 2) {
    ar5 = ret_const_0_26ab42(ar4,2,ar6,ar7);
    *unaff_r14 = ar5;
  }
  else {
    *unaff_r14 = 0;
  }
  *ar7 = 0;
  return ar5;
}

__asm__(".globl _FUN_8c26ab86\n.set _FUN_8c26ab86, _FUN_8c26ab86_def\n");
//@unit 8c26abf0
#include "../decls.h"
undefined4 s_E1242_sdMemBlkSetPrm_return__26abf6_def(int ar4,int ar5,int ar6,undefined4 ar7,int s0)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = s0 * *(int *)(ar4 + 0x10);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  iVar4 = iVar4 >> 3;
  _DAT_8c4bf028 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = 0;
  iVar2 = ar5 * 4;
  iVar5 = iVar4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(iVar2 + ar4 + 0x20),ar7,iVar4,0,0);
  if (iVar1 == 0) {
    iVar5 = ar6 * *(int *)(ar4 + 0x10);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 7;
    }
    ar5_00 = (iVar5 >> 3) + *(int *)(ar4 + 0x38 + iVar2);
    _DAT_8c4bf02c = sh4_tmu_1f88e6(0,ar7,iVar4,uVar3);
    iVar5 = ar5_00;
    iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x20 + iVar2),ar5_00,iVar4,uVar3);
    if (iVar1 != 0) {
      debug_printf(iVar1,ar5_00,iVar4,uVar3,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,iVar5);
    }
    uVar3 = sh4_tmu_1f88e6(iVar1,ar5_00,iVar4,uVar3);
    _DAT_8c4bf030 = uVar3;
  }
  else {
    uVar3 = debug_printf(iVar1,ar7,iVar4,uVar3,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,iVar5);
  }
  return uVar3;
}

__asm__(".globl _s_E1242_sdMemBlkSetPrm_return__26abf6\n.set _s_E1242_sdMemBlkSetPrm_return__26abf6, _s_E1242_sdMemBlkSetPrm_return__26abf6_def\n");
//@unit 8c26aca8
#include "../decls.h"
undefined4 s_E1242_sdMemBlkSetPrm_return__26acaa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int s4;
  int ar5_00;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar3 = 0x20;
  s4 = ar5 * 4;
  iVar1 = FUN_8c265ea0(*(undefined4 *)(s4 + ar4 + 0x28),ar7,0x20,0,0);
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar7,uVar3,ar7_00,s_E1242_sdMemBlkSetPrm_return_erro_8c2738b0,s4);
    return uVar3;
  }
  iVar1 = ar6 * *(int *)(ar4 + 0x10);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  ar5_00 = *(int *)(ar4 + 0x38 + s4) + (iVar1 >> 3);
  iVar1 = FUN_8c265ff4(*(undefined4 *)(ar4 + 0x28 + s4),ar5_00,uVar3,ar7_00);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = debug_printf(iVar1,ar5_00,uVar3,ar7_00,s_E1243_sdMemBlkTransfer_return_er_8c2738e0,s4);
  }
  return uVar2;
}

__asm__(".globl _s_E1242_sdMemBlkSetPrm_return__26acaa\n.set _s_E1242_sdMemBlkSetPrm_return__26acaa, _s_E1242_sdMemBlkSetPrm_return__26acaa_def\n");
//@unit 8c26ad32
#include "../decls.h"
undefined4 FUN_8c26ad32_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    iVar2 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x40),*(undefined4 *)(ar4 + 0x10));
    uVar1 = s_E1242_sdMemBlkSetPrm_return__26acaa(ar4,ar5,iVar2 * 8,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26ad32\n.set _FUN_8c26ad32, _FUN_8c26ad32_def\n");
//@unit 8c26ada4
#include "../decls.h"
undefined4 s_E1244_sdMemBlkGetStat_return_26ada4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined1 *ar5_00;
  undefined4 in_stack_ffffffec;
  
  ar5_00 = &stack0xffffffec;
  FUN_8c265e08(ar4,ar5,ar6,ar7);
  ar4_00 = FUN_8c265a2c(*(undefined4 *)(ar5 * 4 + ar4 + 0x20),&stack0xffffffec,ar6,ar7);
  if (ar4_00 != 0) {
    debug_printf(ar4_00,ar5_00,ar6,ar7,s_E1244_sdMemBlkGetStat_return_err_8c273914,in_stack_ffffffec
                );
  }
  return in_stack_ffffffec;
}

__asm__(".globl _s_E1244_sdMemBlkGetStat_return_26ada4\n.set _s_E1244_sdMemBlkGetStat_return_26ada4, _s_E1244_sdMemBlkGetStat_return_26ada4_def\n");
//@unit 8c26ae04
#include "../decls.h"
undefined4 s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 ar6_00;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000000;
  undefined4 s4;
  
  uVar3 = 8;
  iVar2 = *(int *)(ar4 + 0x10);
  iVar1 = libgcc_divide_helper_010468(ar7 * iVar2,8);
  iVar1 = *(int *)(ar5 * 4 + ar4 + 0x38) + iVar1;
  ar6_00 = libgcc_divide_helper_010468(in_stack_00000000 * iVar2,uVar3);
  s4 = ar6;
  iVar1 = aica_ram_2668fc(iVar1,ar6,ar6_00,ar7);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = debug_printf(iVar1,ar6,ar6_00,ar7,s_E1227_sdMoveSndMemToWrkMem_retur_8c27394c,s4);
  }
  return uVar3;
}

__asm__(".globl _s_E1227_sdMoveSndMemToWrkMem_r_26ae04\n.set _s_E1227_sdMoveSndMemToWrkMem_r_26ae04, _s_E1227_sdMoveSndMemToWrkMem_r_26ae04_def\n");
//@unit 8c26ae54
#include "../decls.h"
int FUN_8c26ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a7;
  int iVar2;
  int a6;
  int iVar3;
  int iStack_34;
  
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  a7 = libgcc_divide_helper_010614(ar6,iVar1);
  if (0 < a7) {
    a6 = 0;
    s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,0x8c4bee28,0);
    iStack_34 = 0;
    iVar2 = iVar1 - a7;
    do {
      iVar3 = iVar1;
      if (iStack_34 == 0x3f) {
        iVar3 = iVar2;
      }
      s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iVar1 + -0x73b411d8,a7);
      s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,iVar1 + -0x73b411d8);
      a6 = a6 + iVar3;
      iStack_34 = iStack_34 + 1;
      a7 = a7 + iVar3;
    } while (iStack_34 < 0x40);
    a7 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,0x8c4bee28);
  }
  return a7;
}

__asm__(".globl _FUN_8c26ae54\n.set _FUN_8c26ae54, _FUN_8c26ae54_def\n");
//@unit 8c26af42
#include "../decls.h"
int FUN_8c26af42_def(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,int ain0)

{
  int d;
  int iVar1;
  
  if (ar5 == 0) {
    *ar6 = 0;
    return ain0;
  }
  *ar6 = 1;
  iVar1 = 0x40;
  d = 2;
  while ((*ar6 <= iVar1 && (ain0 = libgcc_divide_helper_010614(ar5,d), ain0 == 0))) {
    d = d * 2;
    *ar6 = *ar6 << 1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26af42\n.set _FUN_8c26af42, _FUN_8c26af42_def\n");
//@unit 8c26af7a
#include "../decls.h"
int FUN_8c26af7a_def(int ar4,undefined4 ar5,uint ar6,int ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_2c = 0x100;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  uStack_30 = -0x73b411d8;
  uStack_2c = uStack_2c + -0x73b411d8;
  uStack_40 = 0;
  iVar2 = libgcc_divide_helper_010468(0x40,ar7);
  iVar3 = iVar2;
  uStack_38 = ar6;
  for (; uStack_40 < ar7; uStack_40 = uStack_40 + 1) {
    if ((int)uStack_38 < 0) {
      uStack_28 = ~(~uStack_38 + 1 & 0x3f) + 1;
    }
    else {
      uStack_28 = uStack_38 & 0x3f;
    }
    iVar3 = s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_30,uStack_28 * iVar1 * 8);
    uStack_48 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = uStack_30;
        uStack_28 = (uStack_28 - ar6) + 0x40;
        if ((int)uStack_28 < 0) {
          uStack_28 = ~(~uStack_28 + 1 & 0x3f) + 1;
        }
        else {
          uStack_28 = uStack_28 & 0x3f;
        }
        iVar3 = uStack_28 * iVar1 * 8;
        s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,uStack_2c,iVar3);
        iVar3 = s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,iVar3,uStack_30);
        iVar4 = uStack_2c;
        uStack_30 = uStack_2c;
        uStack_2c = iVar5;
        uStack_48 = uStack_48 + 1;
      } while (uStack_48 < iVar2);
    }
    uStack_38 = uStack_38 + 1;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c26af7a\n.set _FUN_8c26af7a, _FUN_8c26af7a_def\n");
//@unit 8c26b092
#include "../decls.h"
undefined4 FUN_8c26b092_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int ar5_00;
  int iVar3;
  undefined4 in_stack_ffffffd8;
  undefined4 uStack_24;
  int *piStack_20;
  
  ar5_00 = ar5;
  piStack_20 = ar6;
  FUN_8c265ab0(&uStack_24,ar5,ar6,ar7);
  FUN_8c265f84(0,ar5_00,ar6,ar7);
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 << 3;
  piVar2 = (int *)libgcc_divide_helper_010468(ar5,iVar1);
  iVar3 = libgcc_divide_helper_010614(ar5,iVar1);
  iVar1 = libgcc_divide_helper_010614(iVar1 - iVar3,iVar1);
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0xc); iVar3 = iVar3 + 1) {
    *(int *)(ar4 + 0x44) = iVar1;
    ar6 = piVar2;
    if (0 < iVar1) {
      ar6 = (int *)((int)piVar2 + 1);
    }
    FUN_8c26af42(ar5,ar6,&stack0xffffffd8,ar7,in_stack_ffffffd8);
    ar7 = in_stack_ffffffd8;
    ar5_00 = iVar3;
    in_stack_ffffffd8 = ar7;
    FUN_8c26af7a(ar4,iVar3,ar6,ar7);
  }
  FUN_8c265f84(uStack_24,ar5_00,ar6,ar7);
  *piStack_20 = ar5 + *(int *)(ar4 + 0x44);
  return *(undefined4 *)(ar4 + 0x44);
}

__asm__(".globl _FUN_8c26b092\n.set _FUN_8c26b092, _FUN_8c26b092_def\n");
//@unit 8c26b132
#include "../decls.h"
int FUN_8c26b132_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar5_00;
  int iVar2;
  undefined1 *ar5_01;
  undefined1 *ar6_00;
  undefined1 *a5;
  undefined4 in_stack_ffffffe4;
  undefined4 uVar3;
  undefined4 auStack_18 [2];
  
  ar6_00 = &stack0xffffffe4;
  iVar1 = libgcc_divide_helper_010468(0x100,*(undefined4 *)(ar4 + 0x10));
  iVar1 = iVar1 * 8;
  ar5_00 = (undefined1 *)libgcc_divide_helper_010468(ar5,iVar1);
  if ((int)ar5_00 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = libgcc_divide_helper_010614(ar5,iVar1);
    *(int *)(ar4 + 0x44) = iVar1 - iVar2;
    ar5_01 = ar5_00;
    FUN_8c26af42(ar5,ar5_00,&stack0xffffffe4,ar7,in_stack_ffffffe4);
    FUN_8c265ab0(auStack_18,ar5_01,ar6_00,ar7);
    FUN_8c265f84(0,ar5_01,ar6_00,ar7);
    for (a5 = (undefined1 *)0x0; (int)a5 < *(int *)(ar4 + 0xc); a5 = a5 + 1) {
      ar5_01 = a5;
      ar6_00 = ar5_00;
      uVar3 = in_stack_ffffffe4;
      FUN_8c26af7a(ar4,a5,ar5_00,in_stack_ffffffe4);
      ar7 = in_stack_ffffffe4;
      in_stack_ffffffe4 = uVar3;
    }
    FUN_8c265f84(auStack_18[0],ar5_01,ar6_00,ar7);
    iVar1 = (int)ar5_00 * iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26b132\n.set _FUN_8c26b132, _FUN_8c26b132_def\n");
//@unit 8c26b1ca
#include "../decls.h"
undefined4 ret_const_8c2785e8_26b1ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x8c2785e8;
}

__asm__(".globl _ret_const_8c2785e8_26b1ca\n.set _ret_const_8c2785e8_26b1ca, _ret_const_8c2785e8_26b1ca_def\n");
//@unit 8c26b1e0
#include "../decls.h"
uint FUN_8c26b1e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}

__asm__(".globl _FUN_8c26b1e0\n.set _FUN_8c26b1e0, _FUN_8c26b1e0_def\n");
//@unit 8c26b1f8
#include "../decls.h"
uint FUN_8c26b1f8_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26b1f8\n.set _FUN_8c26b1f8, _FUN_8c26b1f8_def\n");
//@unit 8c26b212
#include "../decls.h"
undefined4 FUN_8c26b212_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c278690);
  if (*(int *)(&DATA_8c278690) == 0) {
    in_r0 = memset(0x8c4bf038,0,(int)0x480);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b212\n.set _FUN_8c26b212, _FUN_8c26b212_def\n");
//@unit 8c26b216
#include "../decls.h"
undefined4 FUN_8c26b216_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4bf038,0,(int)0x480,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b216\n.set _FUN_8c26b216, _FUN_8c26b216_def\n");
//@unit 8c26b234
#include "../decls.h"
undefined4 FUN_8c26b234_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DATA_8c278690);
  *(int *)(&DATA_8c278690) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = memset(0x8c4bf038,0,(int)0x480);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b234\n.set _FUN_8c26b234, _FUN_8c26b234_def\n");
//@unit 8c26b250
#include "../decls.h"
undefined4 FUN_8c26b250_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  undefined4 *ar4_00;
  
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < 0x20);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = &DAT_8c278660;
  *(undefined4 *)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40fb0) = ar5;
  *(undefined **)(iVar1 + -0x73b40fc0) = &DAT_8c273978;
  *(undefined **)(iVar1 + -0x73b40fac) = &DAT_8c26b20e;
  *(undefined4 **)(iVar1 + -0x73b40fa8) = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038,ar6_00);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b250\n.set _FUN_8c26b250, _FUN_8c26b250_def\n");
//@unit 8c26b254
#include "../decls.h"
undefined4 FUN_8c26b254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  int unaff_r14;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  ar6_00 = 0;
  do {
    if (*(int *)(ar6_00 * 0x24 + -0x73b40fc4) == 0) break;
    ar6_00 = ar6_00 + 1;
  } while (ar6_00 < unaff_r14);
  if (ar6_00 == 0x20) {
    return 0;
  }
  iVar1 = ar6_00 * 0x24;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40fc8);
  *(undefined4 *)(iVar1 + -0x73b40fc4) = 1;
  *ar4_00 = &DAT_8c278660;
  *(undefined4 *)(iVar1 + -0x73b40fb4) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40fb0) = ar5;
  *(undefined **)(iVar1 + -0x73b40fc0) = &DAT_8c273978;
  *(undefined **)(iVar1 + -0x73b40fac) = &DAT_8c26b20e;
  *(undefined4 **)(iVar1 + -0x73b40fa8) = ar4_00;
  FUN_8c26b2da(ar4_00,ar5,ar6_00,0x8c4bf038,in_PR);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b254\n.set _FUN_8c26b254, _FUN_8c26b254_def\n");
//@unit 8c26b2b6
#include "../decls.h"
undefined4 FUN_8c26b2b6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    in_r0 = memset(unaff_r14,0,0x24,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b2b6\n.set _FUN_8c26b2b6, _FUN_8c26b2b6_def\n");
//@unit 8c26b2da
#include "../decls.h"
undefined4 FUN_8c26b2da_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x18);
  *(undefined4 *)(ar4 + 0x10) = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c26b2da\n.set _FUN_8c26b2da, _FUN_8c26b2da_def\n");
//@unit 8c26b2e8
#include "../decls.h"
undefined4 FUN_8c26b2e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if ((ar5 != 0) && (*(int *)(ar4 + 0x1c) != 0)) {
    (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b2e8\n.set _FUN_8c26b2e8, _FUN_8c26b2e8_def\n");
//@unit 8c26b32e
#include "../decls.h"
undefined4 FUN_8c26b32e_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    ar7[1] = 0;
    *ar7 = 0;
  }
  else if (ar5 == 1) {
    if (*(int *)(ar4 + 0xc) < ar6) {
      ar6 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x14) + *(int *)(ar4 + 0x10);
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar7[1];
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x1c) != 0) {
      (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b32e\n.set _FUN_8c26b32e, _FUN_8c26b32e_def\n");
//@unit 8c26b3a0
#include "../decls.h"
undefined4 FUN_8c26b3a0_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
    if ((ar5 != 0) && (ar5 != 1)) {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b3a0\n.set _FUN_8c26b3a0, _FUN_8c26b3a0_def\n");
//@unit 8c26b3f8
#include "../decls.h"
undefined4 FUN_8c26b3f8_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return in_r0;
  }
  a6 = ar6;
  uVar1 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  else if (ar5 == 1) {
    iVar2 = *(int *)(ar4 + 0x10) - ar6[1];
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    *(int *)(ar4 + 0x10) = iVar2;
    a6 = *(int **)(ar4 + 0x18);
    piVar3 = (int *)(*(int *)(ar4 + 0xc) + ar6[1]);
    if ((int)a6 < (int)piVar3) {
      piVar3 = a6;
    }
    *(int **)(ar4 + 0xc) = piVar3;
    if (iVar2 == *ar6 - *(int *)(ar4 + 0x14)) goto LAB_8c26b478;
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(ar4 + 0x1c);
  }
  if (iVar2 != 0) {
    (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,ar7);
  }
LAB_8c26b478:
  uVar1 = FUN_8c26b1f8(ar4,uVar1,a6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b3f8\n.set _FUN_8c26b3f8, _FUN_8c26b3f8_def\n");
//@unit 8c26b490
#include "../decls.h"
uint FUN_8c26b490_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b1e0(ar4,ar5,ar6,ar7);
  iVar1 = 0;
  if (ar5 != 0) {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x1c) != 0) {
        (**(code **)(ar4 + 0x1c))(*(undefined4 *)(ar4 + 0x20),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b4d2;
    }
    iVar1 = *(int *)(ar4 + 0xc);
    iVar2 = ar6;
    if (ar6 <= iVar1) goto LAB_8c26b4d2;
  }
  iVar2 = iVar1;
LAB_8c26b4d2:
  *ar7 = iVar2;
  FUN_8c26b1f8(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}

__asm__(".globl _FUN_8c26b490\n.set _FUN_8c26b490, _FUN_8c26b490_def\n");
//@unit 8c26b4f4
#include "../decls.h"
uint FUN_8c26b4f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}

__asm__(".globl _FUN_8c26b4f4\n.set _FUN_8c26b4f4, _FUN_8c26b4f4_def\n");
//@unit 8c26b50c
#include "../decls.h"
uint FUN_8c26b50c_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26b50c\n.set _FUN_8c26b50c, _FUN_8c26b50c_def\n");
//@unit 8c26b526
#include "../decls.h"
undefined4 FUN_8c26b526_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c2786cc);
  if (*(int *)(&DATA_8c2786cc) == 0) {
    in_r0 = memset(0x8c4bf4b8,0,(int)0xc00);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b526\n.set _FUN_8c26b526, _FUN_8c26b526_def\n");
//@unit 8c26b52a
#include "../decls.h"
undefined4 FUN_8c26b52a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4bf4b8,0,(int)0xc00,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b52a\n.set _FUN_8c26b52a, _FUN_8c26b52a_def\n");
//@unit 8c26b548
#include "../decls.h"
undefined4 FUN_8c26b548_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DATA_8c2786cc);
  *(int *)(&DATA_8c2786cc) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = memset(0x8c4bf4b8,0,(int)0xc00);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b548\n.set _FUN_8c26b548, _FUN_8c26b548_def\n");
//@unit 8c26b564
#include "../decls.h"
undefined4 FUN_8c26b564_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ain0;
  int ar7_00;
  undefined4 *ar4_00;
  
  ain0 = 0;
  do {
    if (*(int *)(ain0 * 0x30 + -0x73b40b44) == 0) break;
    ain0 = ain0 + 1;
  } while (ain0 < 0x40);
  if (ain0 == 0x40) {
    return 0;
  }
  ar7_00 = ain0 * 0x30;
  ar4_00 = (undefined4 *)(ar7_00 + -0x73b40b48);
  *(undefined4 *)(ar7_00 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(ar7_00 + -0x73b40b2c) = ar4;
  *(undefined4 *)(ar7_00 + -0x73b40b28) = ar5;
  *(undefined4 *)(ar7_00 + -0x73b40b24) = ar6;
  *(undefined **)(ar7_00 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(ar7_00 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(ar7_00 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,ar7_00,ain0);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b564\n.set _FUN_8c26b564, _FUN_8c26b564_def\n");
//@unit 8c26b568
#include "../decls.h"
undefined4 FUN_8c26b568_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  undefined4 *ar4_00;
  undefined4 in_PR;
  
  iVar1 = 0;
  do {
    if (*(int *)(iVar1 * 0x30 + -0x73b40b44) == 0) break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain0);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  ar4_00 = (undefined4 *)(iVar1 + -0x73b40b48);
  *(undefined4 *)(iVar1 + -0x73b40b44) = 1;
  *ar4_00 = &DAT_8c27869c;
  *(undefined4 *)(iVar1 + -0x73b40b2c) = ar4;
  *(undefined4 *)(iVar1 + -0x73b40b28) = ar5;
  *(undefined4 *)(iVar1 + -0x73b40b24) = ar6;
  *(undefined **)(iVar1 + -0x73b40b40) = &DAT_8c273988;
  *(undefined **)(iVar1 + -0x73b40b20) = &DAT_8c26b522;
  *(undefined4 **)(iVar1 + -0x73b40b1c) = ar4_00;
  FUN_8c26b5ee(ar4_00,ar5,ar6,iVar1,in_PR);
  return ar4_00;
}

__asm__(".globl _FUN_8c26b568\n.set _FUN_8c26b568, _FUN_8c26b568_def\n");
//@unit 8c26b5c6
#include "../decls.h"
undefined4 FUN_8c26b5c6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = memset(ar4,0,0x30,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b5c6\n.set _FUN_8c26b5c6, _FUN_8c26b5c6_def\n");
//@unit 8c26b5ca
#include "../decls.h"
undefined4 FUN_8c26b5ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    in_r0 = memset(unaff_r14,0,0x30,ar7);
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b5ca\n.set _FUN_8c26b5ca, _FUN_8c26b5ca_def\n");
//@unit 8c26b5ee
#include "../decls.h"
undefined4 FUN_8c26b5ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = *(undefined4 *)(ar4 + 0x20);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c26b5ee\n.set _FUN_8c26b5ee, _FUN_8c26b5ee_def\n");
//@unit 8c26b5fc
#include "../decls.h"
undefined4 FUN_8c26b5fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b5fc\n.set _FUN_8c26b5fc, _FUN_8c26b5fc_def\n");
//@unit 8c26b600
#include "../decls.h"
undefined4 FUN_8c26b600_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    return *(undefined4 *)(ar4 + 0xc);
  }
  if (ar5 == 0) {
    return *(undefined4 *)(ar4 + 0x10);
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26b600\n.set _FUN_8c26b600, _FUN_8c26b600_def\n");
//@unit 8c26b64e
#include "../decls.h"
undefined4 FUN_8c26b64e_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  int *a7;
  
  a6 = ar6;
  a7 = ar7;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0x10) < iVar3) {
      iVar3 = *(int *)(ar4 + 0x10);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x14);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x14) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x14) = uVar2;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) - ar7[1];
  }
  else if (ar5 == 1) {
    iVar3 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    if (*(int *)(ar4 + 0xc) < iVar3) {
      iVar3 = *(int *)(ar4 + 0xc);
    }
    ar7[1] = iVar3;
    if (iVar3 < ar6) {
      ar6 = iVar3;
    }
    ar7[1] = ar6;
    *ar7 = *(int *)(ar4 + 0x1c) + *(int *)(ar4 + 0x18);
    uVar2 = libgcc_divide_helper_010614(*(int *)(ar4 + 0x18) + ar7[1],*(undefined4 *)(ar4 + 0x20));
    *(undefined4 *)(ar4 + 0x18) = uVar2;
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) - ar7[1];
  }
  else {
    ar7[1] = 0;
    *ar7 = 0;
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
    }
  }
  uVar1 = FUN_8c26b50c(ar4,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b64e\n.set _FUN_8c26b64e, _FUN_8c26b64e_def\n");
//@unit 8c26b720
#include "../decls.h"
undefined4 FUN_8c26b720_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *a6;
  int iVar2;
  
  if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
    if (ar5 == 1) {
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + ar6[1];
      iVar2 = *ar6 - *(int *)(ar4 + 0x1c);
      if (iVar2 < *(int *)(ar4 + 0x24)) {
        a6 = (int *)(*(int *)(ar4 + 0x24) - iVar2);
        if (ar6[1] < (int)a6) {
          a6 = (int *)(uint)ar6[1];
        }
        (*(code *)(&memmove))
                  (*(int *)(ar4 + 0x20) + iVar2 + *(int *)(ar4 + 0x1c),*ar6,a6,ar7);
      }
      iVar2 = (*ar6 - *(int *)(ar4 + 0x1c)) + ar6[1];
      if (*(int *)(ar4 + 0x20) < iVar2) {
        a6 = (int *)(iVar2 - *(int *)(ar4 + 0x20));
        if (ar6[1] < (int)a6) {
          a6 = (int *)(uint)ar6[1];
        }
        (*(code *)(&memmove))
                  (*(int *)(ar4 + 0x1c),*(int *)(ar4 + 0x1c) + (iVar2 - (int)a6),a6,ar7);
      }
    }
    else if (ar5 == 0) {
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
    }
    else {
      ar6[1] = 0;
      *ar6 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
      }
    }
    uVar1 = FUN_8c26b50c(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b720\n.set _FUN_8c26b720, _FUN_8c26b720_def\n");
//@unit 8c26b7f4
#include "../decls.h"
undefined4 FUN_8c26b7f4_def(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a6;
  
  if ((ar6[1] < 1) || (*ar6 == 0)) {
    return ain0;
  }
  a6 = ar6;
  uVar1 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    iVar3 = *(int *)(ar4 + 0x20);
    iVar2 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x14) + iVar3) - ar6[1],iVar3);
    iVar3 = libgcc_divide_helper_010614(*ar6 - *(int *)(ar4 + 0x1c),iVar3);
    if (iVar2 == iVar3) {
      *(int *)(ar4 + 0x14) = iVar2;
      *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(ar4 + 0x28);
  }
  else if (ar5 == 1) {
    iVar3 = *(int *)(ar4 + 0x20);
    iVar2 = libgcc_divide_helper_010614((*(int *)(ar4 + 0x18) + iVar3) - ar6[1],iVar3);
    iVar3 = libgcc_divide_helper_010614(*ar6 - *(int *)(ar4 + 0x1c),iVar3);
    if (iVar2 == iVar3) {
      *(int *)(ar4 + 0x18) = iVar2;
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + ar6[1];
      goto LAB_8c26b8b0;
    }
    iVar2 = *(int *)(ar4 + 0x28);
  }
  else {
    ar6[1] = 0;
    *ar6 = 0;
    iVar2 = *(int *)(ar4 + 0x28);
  }
  if (iVar2 != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
  }
LAB_8c26b8b0:
  uVar1 = FUN_8c26b50c(ar4,uVar1,a6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c26b7f4\n.set _FUN_8c26b7f4, _FUN_8c26b7f4_def\n");
//@unit 8c26b8c8
#include "../decls.h"
uint FUN_8c26b8c8_def(int ar4,int ar5,int ar6,int *ar7)

{
  undefined4 a5;
  int iVar1;
  int a6;
  int *a7;
  int iVar2;
  
  a6 = ar6;
  a7 = ar7;
  a5 = FUN_8c26b4f4(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    a6 = *(int *)(ar4 + 0x10);
    iVar1 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x14)) + *(int *)(ar4 + 0x24);
    if (a6 < iVar1) {
      iVar1 = a6;
    }
  }
  else {
    if (ar5 != 1) {
      iVar2 = 0;
      if (*(int *)(ar4 + 0x28) != 0) {
        (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,a7);
      }
      goto LAB_8c26b934;
    }
    a6 = (*(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x18)) + *(int *)(ar4 + 0x24);
    iVar1 = a6;
    if (*(int *)(ar4 + 0xc) < a6) {
      iVar1 = *(int *)(ar4 + 0xc);
    }
  }
  iVar2 = ar6;
  if (iVar1 < ar6) {
    iVar2 = iVar1;
  }
LAB_8c26b934:
  *ar7 = iVar2;
  FUN_8c26b50c(ar4,a5,a6,a7);
  return (uint)(iVar2 == ar6);
}

__asm__(".globl _FUN_8c26b8c8\n.set _FUN_8c26b8c8, _FUN_8c26b8c8_def\n");
//@unit 8c26b94e
#include "../decls.h"
undefined4 get_field_1c_26b94e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}

__asm__(".globl _get_field_1c_26b94e\n.set _get_field_1c_26b94e, _get_field_1c_26b94e_def\n");
//@unit 8c26b952
#include "../decls.h"
undefined4 get_field_20_26b952_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x20);
}

__asm__(".globl _get_field_20_26b952\n.set _get_field_20_26b952, _get_field_20_26b952_def\n");
//@unit 8c26b956
#include "../decls.h"
undefined4 get_field_24_26b956_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_26b956\n.set _get_field_24_26b956, _get_field_24_26b956_def\n");
//@unit 8c26b960
#include "../decls.h"
uint FUN_8c26b960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
}

__asm__(".globl _FUN_8c26b960\n.set _FUN_8c26b960, _FUN_8c26b960_def\n");
//@unit 8c26b978
#include "../decls.h"
uint FUN_8c26b978_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (ar5 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c26b978\n.set _FUN_8c26b978, _FUN_8c26b978_def\n");
//@unit 8c26b992
#include "../decls.h"
undefined4 FUN_8c26b992_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&DATA_8c278700);
  if (*(int *)(&DATA_8c278700) == 0) {
    in_r0 = memset(0x8c4c00b8,0,(int)0xc00);
  }
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b992\n.set _FUN_8c26b992, _FUN_8c26b992_def\n");
//@unit 8c26b996
#include "../decls.h"
undefined4 FUN_8c26b996_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int *unaff_r14;
  
  if (*unaff_r14 == 0) {
    in_r0 = memset(0x8c4c00b8,0,(int)0xc00,ar7);
  }
  *unaff_r14 = *unaff_r14 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c26b996\n.set _FUN_8c26b996, _FUN_8c26b996_def\n");
//@unit 8c26b9b4
#include "../decls.h"
undefined4 FUN_8c26b9b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DATA_8c278700);
  *(int *)(&DATA_8c278700) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = memset(0x8c4c00b8,0,(int)0xc00);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b9b4\n.set _FUN_8c26b9b4, _FUN_8c26b9b4_def\n");
//@unit 8c26b9d4
#include "../decls.h"
undefined4 FUN_8c26b9d4_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7,int ain1)

{
  int iVar1;
  undefined4 *a4;
  
  iVar1 = 0;
  do {
    if (*(char *)(iVar1 * 0x30 + -0x73b3ff44) == '\0') break;
    iVar1 = iVar1 + 1;
  } while (iVar1 < ain1);
  if (iVar1 == 0x40) {
    return 0;
  }
  iVar1 = iVar1 * 0x30;
  a4 = (undefined4 *)(iVar1 + -0x73b3ff48);
  *(undefined1 *)(iVar1 + -0x73b3ff44) = 1;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *a4 = &DAT_8c2786d0;
  *(undefined1 *)(iVar1 + -0x73b3ff43) = (undefined1)ar4;
  *(undefined **)(iVar1 + -0x73b3ff40) = &DAT_8c2739c8;
  *(undefined4 *)(iVar1 + -0x73b3ff3c) = ar5;
  *(uint *)(iVar1 + -0x73b3ff38) = ar6 >> 4;
  *(undefined **)(iVar1 + -0x73b3ff20) = &DAT_8c26b98e;
  *(undefined4 **)(iVar1 + -0x73b3ff1c) = a4;
  FUN_8c26ba62(a4,ar5,ar6 >> 4,iVar1);
  return a4;
}

__asm__(".globl _FUN_8c26b9d4\n.set _FUN_8c26b9d4, _FUN_8c26b9d4_def\n");
//@unit 8c26ba3e
#include "../decls.h"
undefined4 FUN_8c26ba3e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    memset(unaff_r14,0,0x30,ar7);
    in_r0 = 0;
    *(undefined1 *)(unaff_r14 + 4) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26ba3e\n.set _FUN_8c26ba3e, _FUN_8c26ba3e_def\n");
//@unit 8c26ba62
#include "../decls.h"
undefined4 * FUN_8c26ba62_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(ar4 + 0xc);
  *(int *)(ar4 + 0x14) = iVar5;
  for (iVar3 = 0; iVar3 < *(int *)(ar4 + 0x10) + -1; iVar3 = iVar3 + 1) {
    piVar1 = (int *)(iVar3 * 0x10 + iVar5);
    *piVar1 = (iVar3 + 1) * 0x10 + iVar5;
    piVar1[2] = 0;
    piVar1[3] = 0;
  }
  puVar2 = (undefined4 *)(iVar3 * 0x10 + iVar5);
  puVar4 = (undefined4 *)(ar4 + 0x18);
  *puVar2 = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  } while (puVar4 < (undefined4 *)(ar4 + 0x28));
  return puVar2;
}

__asm__(".globl _FUN_8c26ba62\n.set _FUN_8c26ba62, _FUN_8c26ba62_def\n");
//@unit 8c26bad4
#include "../decls.h"
undefined4 FUN_8c26bad4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  char in_T;
  
  if ((in_T != '\0') && (ar5 < 4)) {
    iVar2 = 0;
    piVar1 = (int *)(ar5 * 4 + ar4 + 0x18);
    while (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0) {
      iVar2 = iVar2 + piVar1[3];
    }
    return iVar2;
  }
  if (*(int *)(ar4 + 0x28) != 0) {
    (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c26bad4\n.set _FUN_8c26bad4, _FUN_8c26bad4_def\n");
//@unit 8c26bb16
#include "../decls.h"
undefined4 FUN_8c26bb16_def(int ar4,int ar5,undefined1 *ar6,undefined4 *ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar6_00;
  undefined4 *ar7_00;
  undefined4 *puVar3;
  undefined4 auStack_24 [2];
  undefined1 auStack_1c [4];
  int iStack_18;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      ain0 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
    *ar7 = 0;
    ar7[1] = 0;
    return ain0;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
  iVar2 = ar5 * 4;
  puVar3 = *(undefined4 **)(ar4 + 0x18 + iVar2);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_8c010794(8,auStack_1c,puVar3 + 2);
    if (iStack_18 <= (int)ar6) {
      FUN_8c010794(8,ar7,auStack_1c);
      *(undefined4 *)(iVar2 + ar4 + 0x18) = *puVar3;
      *puVar3 = *(undefined4 *)(ar4 + 0x14);
      *(undefined4 **)(ar4 + 0x14) = puVar3;
      goto LAB_8c26bbce;
    }
    if (*(char *)(ar4 + 5) == '\x01') {
      ar7_00 = auStack_24;
      ar6_00 = auStack_1c;
      FUN_8c26be30(auStack_1c,ar6,ar6_00,ar7_00);
      FUN_8c010794(8,ar7,auStack_1c);
      FUN_8c010794(8,puVar3 + 2,auStack_24);
      goto LAB_8c26bbce;
    }
  }
  *ar7 = 0;
  ar7[1] = 0;
LAB_8c26bbce:
  uVar1 = FUN_8c26b978(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c26bb16\n.set _FUN_8c26bb16, _FUN_8c26bb16_def\n");
//@unit 8c26bbe2
#include "../decls.h"
undefined4 FUN_8c26bbe2_def(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *a6;
  undefined4 ar7_00;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    
                    
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    ar7_00 = 0;
    piVar2 = (int *)(ar5 * 4 + ar4 + 0x18);
    piVar3 = (int *)0x0;
    while (*piVar2 != 0) {
      piVar2 = (int *)*piVar2;
      piVar3 = piVar2;
      a6 = piVar2;
    }
    if (((*(char *)(ar4 + 5) == '\x01') && (piVar3 != (int *)0x0)) &&
       (piVar3[2] + piVar3[3] == *ar6)) {
      piVar3[3] = piVar3[3] + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,0);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *piVar2 = (int)puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7_00);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26bbe2\n.set _FUN_8c26bbe2, _FUN_8c26bbe2_def\n");
//@unit 8c26bcaa
#include "../decls.h"
undefined4 FUN_8c26bcaa_def(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *a6;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    
                    
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    iVar2 = ar5 * 4;
    iVar3 = *(int *)(iVar2 + ar4 + 0x18);
    if (((*(char *)(ar4 + 5) == '\x01') && (iVar3 != 0)) && (*ar6 + ar6[1] == *(int *)(iVar3 + 8)))
    {
      *(int *)(iVar3 + 8) = *ar6;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *puVar4 = *(undefined4 *)(ar4 + 0x18 + iVar2);
        *(undefined4 **)(ar4 + 0x18 + iVar2) = puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26bcaa\n.set _FUN_8c26bcaa, _FUN_8c26bcaa_def\n");
//@unit 8c26bd86
#include "../decls.h"
undefined4 FUN_8c26bd86_def(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_10 [12];
  
  puVar2 = auStack_10;
  *ar7 = 0;
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
      (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,ar6,ar7);
    }
  }
  else {
    iVar1 = *(int *)(ar5 * 4 + ar4 + 0x18);
    if (iVar1 != 0) {
      FUN_8c010794(8,auStack_10,iVar1 + 8);
      *ar7 = *(undefined4 *)(puVar2 + 4);
      if (*(char *)(ar4 + 5) == '\x01') {
        if (ar6 <= *(int *)(puVar2 + 4)) {
          return 1;
        }
      }
      else if (*(int *)(puVar2 + 4) == ar6) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c26bd86\n.set _FUN_8c26bd86, _FUN_8c26bd86_def\n");
//@unit 8c26be30
#include "../decls.h"
undefined4 FUN_8c26be30_def(undefined4 ar4,int ar5,int *ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_8c010794(8,ar6,ar4);
  ar7[1] = ar6[1];
  if (ar5 < ar6[1]) {
    ar6[1] = ar5;
  }
  iVar2 = ar7[1];
  iVar3 = ar6[1];
  ar7[1] = iVar2 - iVar3;
  if (iVar2 - iVar3 == 0) {
    *ar7 = 0;
  }
  else {
    *ar7 = *ar6 + ar6[1];
  }
  return uVar1;
}

__asm__(".globl _FUN_8c26be30\n.set _FUN_8c26be30, _FUN_8c26be30_def\n");
