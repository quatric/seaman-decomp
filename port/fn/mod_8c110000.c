//@unit 8c110060
#include "../decls.h"
undefined4 FUN_8c110060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unaff_r14 + 0x48) == *(int *)(unaff_r14 + 0x7c)) {
      FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    }
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    if ((float)*(int *)(unaff_r14 + 0x8c) < *(float *)(unaff_r14 + 0x4c)) {
      *(undefined4 *)(unaff_r14 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
    if (*(int *)(unaff_r14 + 0x48) == 0) {
      *(undefined4 *)(unaff_r14 + 0x28) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(uint *)(unaff_r14 + 0x48) < *(uint *)(unaff_r14 + 0x7c)) {
      FUN_8c10fc96(unaff_r14,ar5,ar6,ar7);
    }
    FUN_8c10fe04(unaff_r14,ar5,ar6,ar7);
  }
  if (*(int *)(unaff_r14 + 0x28) != 1) {
    uVar2 = 0;
    do {
      if ((*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
         (*(int *)(*(int *)(*(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc)) + 0x40) +
                  *(int *)(uVar2 * 8 + *(int *)(unaff_r14 + 0xc) + 4) * 4) ==
          *(int *)(*(int *)(*(int *)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(unaff_r14 + 0x78));
  }
  return 1;
}

__asm__(".globl _FUN_8c110060\n.set _FUN_8c110060, _FUN_8c110060_def\n");
//@unit 8c110158
#include "../decls.h"
undefined4 FUN_8c110158_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,4,1,(&DATA_8c11005c),(&DATA_8c10fec4),(&FUN_8c10f8e6),
                     (int)0x94);
  return uVar1;
}

__asm__(".globl _FUN_8c110158\n.set _FUN_8c110158, _FUN_8c110158_def\n");
//@unit 8c11033c
#include "../decls.h"
int FUN_8c11033c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)0xc4;
  iVar2 = *ar4;
  uVar4 = 0;
  uVar3 = *(int *)(iVar1 + iVar2) * 8 +
          *(int *)(iVar1 + -0x38 + iVar2) * *(int *)(iVar1 + -0x3c + iVar2) * 2 +
          (*(int *)(iVar1 + -0x30 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x2c + iVar2) * 2 +
          (*(int *)(iVar1 + -0x28 + iVar2) + 1) * 2 + *(int *)(iVar1 + -0x24 + iVar2) * 4 +
          (int)0xd4;
  iVar2 = iVar2 + uVar3 + ((uVar3 * 2 ^ uVar3) & 3);
  if (ar5 != 0) {
    do {
      uVar3 = FUN_8c1104d2(ar4,iVar2,ar6,ar7);
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + uVar3 + ((uVar3 << 1 ^ uVar3) & 3);
    } while (uVar4 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11033c\n.set _FUN_8c11033c, _FUN_8c11033c_def\n");
//@unit 8c11034c
#include "../decls.h"
int FUN_8c11034c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  uint unaff_r10;
  int *unaff_r11;
  uint uVar3;
  
  iVar1 = *unaff_r11;
  uVar3 = 0;
  uVar2 = *(int *)(in_r0 + iVar1) * 8 +
          *(int *)(in_r0 + -0x38 + iVar1) * *(int *)(in_r0 + -0x3c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x2c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x24 + iVar1) * 4 +
          (int)0xd4;
  iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
  if (unaff_r10 != 0) {
    do {
      uVar2 = FUN_8c1104d2(unaff_r11,iVar1,ar6,ar7);
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
    } while (uVar3 < unaff_r10);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11034c\n.set _FUN_8c11034c, _FUN_8c11034c_def\n");
//@unit 8c1103ea
#include "../decls.h"
undefined4 FUN_8c1103ea_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)((int)0x88 + *ar4),ar6,ar7);
  return *(undefined4 *)(*(int *)(iVar2 + 0xb8) * 4 + iVar1);
}

__asm__(".globl _FUN_8c1103ea\n.set _FUN_8c1103ea, _FUN_8c1103ea_def\n");
//@unit 8c110414
#include "../decls.h"
int FUN_8c110414_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar1 = FUN_8c11033c(ar4,*(undefined4 *)(0x88 + iVar3),ar6,ar7);
  uVar2 = (iVar1 + *(int *)(*(int *)(0xb8 + iVar3) * 4 + iVar1) * 2) - iVar3;
  return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}

__asm__(".globl _FUN_8c110414\n.set _FUN_8c110414, _FUN_8c110414_def\n");
//@unit 8c110460
#include "../decls.h"
int FUN_8c110460_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  a5 = FUN_8c110414(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1104b2(ar4,a5,ar6,ar7);
  return iVar1 + a5;
}

__asm__(".globl _FUN_8c110460\n.set _FUN_8c110460, _FUN_8c110460_def\n");
//@unit 8c1104b2
#include "../decls.h"
int FUN_8c1104b2_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5[1] * 2 + 8 + (*(int *)((int)0xc8 + *ar4) + 1) * 2 + (*ar5 + 1) * 2;
}

__asm__(".globl _FUN_8c1104b2\n.set _FUN_8c1104b2, _FUN_8c1104b2_def\n");
//@unit 8c1104d2
#include "../decls.h"
uint FUN_8c1104d2_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = ar5[3];
  if (*(short *)((int)0xd0 + *ar4) == 0) {
    uVar1 = ar5[5];
  }
  else {
    uVar1 = ar5[5] + 1U >> 1;
  }
  uVar1 = *ar5 * ar5[1] * 4 + ar5[1] * ar5[2] * 4 + *ar5 * iVar2 * 4 + iVar2 * 4 + iVar2 * uVar1 +
          0x18;
  if (*(short *)((int)0xd2 + *ar4) != 0) {
    uVar1 = uVar1 + ((uVar1 * 2 ^ uVar1) & 3) + ar5[3] * ar5[3] * 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1104d2\n.set _FUN_8c1104d2, _FUN_8c1104d2_def\n");
//@unit 8c11066a
#include "../decls.h"
undefined4 FUN_8c11066a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove((&DATA_8c127b20),(int)0xd4);
  return uVar1;
}

__asm__(".globl _FUN_8c11066a\n.set _FUN_8c11066a, _FUN_8c11066a_def\n");
//@unit 8c110680
#include "../decls.h"
uint FUN_8c110680_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') ||
     (*(uint *)(ar4 + 0x48) < *(uint *)(ar4 + 0x2c))) {
    uVar4 = (*(undefined4 **)(ar4 + 0xc))[1];
    pfVar1 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar4,ar6,ar7);
    if (pfVar1 == (float *)0x0) {
      if (*(char *)(ar4 + 0x28) != '\0') {
        iVar3 = *(int *)(ar4 + 0x48);
        while (iVar3 != 0) {
          cVar6 = '\0';
          iVar3 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
          if (iVar3 == 0) break;
          if (cVar6 == '\0') {
            uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
          }
          else {
            uVar5 = *(undefined8 *)(ar4 + 0x44);
          }
          *(bool *)iVar3 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
          iVar3 = *(int *)(ar4 + 0x48) + -1;
          *(int *)(ar4 + 0x48) = iVar3;
        }
        if (*(int *)(ar4 + 0x48) == 0) {
          *(undefined1 *)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(ar4 + 0x28);
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),**(undefined4 **)(ar4 + 0x3c));
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x44);
      }
      *(float *)(ar4 + 0x44) = (float)((ulonglong)uVar5 >> 0x20) - (float)uVar5;
      pfVar2 = *(float **)(ar4 + 0x3c);
      *(float **)(ar4 + 0x3c) = pfVar2 + 1;
      *pfVar2 = *pfVar1;
      *(float *)(ar4 + 0x44) = *(float *)(ar4 + 0x44) + *pfVar1;
      if (*(int *)(ar4 + 0x3c) == *(int *)(ar4 + 0x40)) {
        *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x38);
      }
      if (*(int *)(ar4 + 0x48) == *(int *)(ar4 + 0x2c)) {
        cVar6 = '\0';
        uVar4 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar4,ar6,ar7);
        if (cVar6 == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x44),*(undefined4 *)(ar4 + 0x34));
        }
        else {
          uVar5 = *(undefined8 *)(ar4 + 0x44);
        }
        *(bool *)uVar4 = (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20);
      }
      else {
        *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar3 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar3 + 0x40)) == *(int *)(iVar3 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110680\n.set _FUN_8c110680, _FUN_8c110680_def\n");
//@unit 8c1107b0
#include "../decls.h"
undefined4 FUN_8c1107b0_def(int *ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  int a5;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    *(undefined1 *)(ar4 + 10) = 1;
  }
  else if (uVar1 == (int)0xf8) {
    *ar7 = ar4[0x12];
  }
  else {
    if (uVar1 != (int)0xff) {
      return 0;
    }
    a5 = ar4[0xe];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1107b0\n.set _FUN_8c1107b0, _FUN_8c1107b0_def\n");
//@unit 8c110818
#include "../decls.h"
undefined4 FUN_8c110818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char cVar2;
  
  iVar1 = *unaff_r14;
  FUN_8c120550(ar4,1,ar6,ar7);
  unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  cVar2 = '\0';
  unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 1;
  iVar1 = (**(code **)(iVar1 + 0x14))(iVar1,unaff_r14[0xc],4,ar7);
  unaff_r14[0xe] = iVar1;
  unaff_r14[0xf] = iVar1;
  unaff_r14[0x10] = unaff_r14[0xc] * 4 + unaff_r14[0xe];
  if (cVar2 == '\0') {
    unaff_r14[0x11] = 0;
  }
  else {
    unaff_r14[0x11] = 0;
    unaff_r14[0x12] = 0x41700000;
  }
  unaff_r14[0x12] = 0;
  return 0;
}

__asm__(".globl _FUN_8c110818\n.set _FUN_8c110818, _FUN_8c110818_def\n");
//@unit 8c1108b0
#include "../decls.h"
undefined4 FUN_8c1108b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c110680),(&DATA_8c110810),(&FUN_8c1107b0),0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c1108b0\n.set _FUN_8c1108b0, _FUN_8c1108b0_def\n");
//@unit 8c110908
#include "../decls.h"
undefined4 FUN_8c110908_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint ar5_00;
  int iVar6;
  undefined4 ar6_00;
  int unaff_r14;
  float extraout_fr3;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = '\0';
  bVar1 = *(byte *)(unaff_r14 + 8);
  iVar4 = *(int *)(unaff_r14 + 0xc);
  if (*(char *)(**(int **)(unaff_r14 + 0x10) + ain1) != '\x01') {
    ar6_00 = *(undefined4 *)(unaff_r14 + 0x28);
    ar5_00 = (uint)*(byte *)(unaff_r14 + 8);
    uVar9 = 0;
    uVar2 = FUN_8c112074(*(undefined4 *)(unaff_r14 + 0xc),ar5_00,ar6_00,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    if (cVar10 == '\0') {
      fVar8 = 1.0;
    }
    else {
      fVar8 = -NAN;
    }
    uVar2 = 0;
    fVar7 = extraout_fr3;
    if (*(char *)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (cVar10 == '\0') {
            fVar7 = **(float **)(*(int *)(unaff_r14 + 0x28) + uVar2 * 4);
          }
          cVar10 = '\0';
          uVar9 = CONCAT44((float)((ulonglong)uVar9 >> 0x20) + fVar8,(float)uVar9 + fVar7);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unaff_r14 + 8));
    }
    pfVar3 = (float *)FUN_8c111dfe(**(undefined4 **)(unaff_r14 + 0x10),ar5_00,ar6_00,ar7);
    *pfVar3 = (float)uVar9 / (float)((ulonglong)uVar9 >> 0x20);
  }
  piVar5 = *(int **)(unaff_r14 + 0xc);
  while( true ) {
    if ((int *)((uint)bVar1 * 8 + iVar4) <= piVar5) {
      return 1;
    }
    iVar6 = *piVar5;
    if ((*(int *)(*(int *)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
       (*(int *)(*(int *)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(iVar6 + 0x3c))) break;
    piVar5 = piVar5 + 2;
  }
  return 0;
}

__asm__(".globl _FUN_8c110908\n.set _FUN_8c110908, _FUN_8c110908_def\n");
//@unit 8c1109d2
#include "../decls.h"
undefined4 FUN_8c1109d2_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((ar5 & 0xff) == (int)0xff) {
    a5 = ar4[10];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1109d2\n.set _FUN_8c1109d2, _FUN_8c1109d2_def\n");
//@unit 8c110a30
#include "../decls.h"
undefined4 FUN_8c110a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(*(int *)(uint)ar4[4] + 0xc) = 4;
  iVar1 = (**(code **)(*ar4 + 0x10))(*ar4,(uint)*(byte *)(ar4 + 2) << 2,ar6,ar7);
  ar4[10] = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c110a30\n.set _FUN_8c110a30, _FUN_8c110a30_def\n");
//@unit 8c110a5c
#include "../decls.h"
undefined4 FUN_8c110a5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,3,1,(&DATA_8c110900),(&FUN_8c110a30),(&FUN_8c1109d2),0x2c);
  return uVar1;
}

__asm__(".globl _FUN_8c110a5c\n.set _FUN_8c110a5c, _FUN_8c110a5c_def\n");
//@unit 8c110a90
#include "../decls.h"
undefined8 * FUN_8c110a90_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  puVar1 = &DAT_8c110bd0;
  if (*(int *)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar6 * 4;
      *ar6 = 10.0;
      pfVar3 = *(float **)(*(int *)(ar4 + 0x2c) + iVar2);
      puVar1 = *(undefined8 **)(ar4 + 0x30);
      pfVar5 = pfVar3 + *(int *)(*(int *)(ar4 + 0x34) + iVar2);
      pfVar4 = (float *)(*(int *)((int)puVar1 + iVar2) * 4 + ar5);
      for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *ar6 = fVar7 * *pfVar3 + *ar6;
      }
      uVar6 = uVar6 + 1;
      ar6 = ar6 + 1;
    } while (uVar6 < *(uint *)(ar4 + 0x28));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c110a90\n.set _FUN_8c110a90, _FUN_8c110a90_def\n");
//@unit 8c110aea
#include "../decls.h"
uint FUN_8c110aea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar2 = (*(undefined4 **)(ar4 + 0xc))[1];
    iVar1 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar2,ar6,ar7);
    if (iVar1 != 0) {
      uVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar2,ar6,ar7);
      FUN_8c110a90(ar4,iVar1,uVar2,ar7);
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110aea\n.set _FUN_8c110aea, _FUN_8c110aea_def\n");
//@unit 8c110b58
#include "../decls.h"
undefined4 FUN_8c110b58_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int iVar2;
  
  if (ar4[0xb] != 0) {
    uVar1 = 0;
    iVar2 = *ar4;
    if (ar4[10] != 0) {
      do {
        (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0xb] + uVar1 * 4));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)ar4[10]);
    }
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xb]);
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xc]);
    in_r0 = (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd]);
    ar4[0xb] = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c110b58\n.set _FUN_8c110b58, _FUN_8c110b58_def\n");
//@unit 8c110b5c
#include "../decls.h"
undefined4 FUN_8c110b5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  if (unaff_r14[0xb] != 0) {
    uVar1 = 0;
    a4 = *unaff_r14;
    if (unaff_r14[10] != 0) {
      do {
        (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0xb] + uVar1 * 4),ar6,ar7);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)unaff_r14[10]);
    }
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xb],ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0xc],ar6,ar7);
    in_r0 = (**(code **)(a4 + 0x18))(a4,unaff_r14[0xd],ar6,ar7);
    unaff_r14[0xb] = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c110b5c\n.set _FUN_8c110b5c, _FUN_8c110b5c_def\n");
//@unit 8c110bec
#include "../decls.h"
uint FUN_8c110bec_def(undefined4 ar4,undefined4 ar5,int ar6,uint *ar7,int ain0)

{
  uint uVar1;
  int a6;
  uint *a7;
  uint uVar2;
  undefined4 unaff_r14;
  char in_T;
  undefined4 in_PR;
  
  uVar2 = 1;
  if (in_T == '\x01') {
    a6 = ar6;
    a7 = ar7;
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    uVar1 = (**(code **)(ar6 + 0x3c))(ar6,ar5,a6,a7);
    if (*ar7 < uVar1) {
      (**(code **)(ar6 + 0x6c))(ar6,ar5,a6,a7);
      uVar2 = FUN_8c110c80(unaff_r14,ar5,a6,a7);
      uVar2 = (uint)((uVar2 & 0xff) == 0);
      *ar7 = *ar7 + 1;
    }
  }
  else if (ain0 == 0xff) {
    FUN_8c110b58(unaff_r14,ar5,ar6,ar7,in_PR);
    FUN_8c120668(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c110bec\n.set _FUN_8c110bec, _FUN_8c110bec_def\n");
//@unit 8c110c80
#include "../decls.h"
undefined4 FUN_8c110c80_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  int a4;
  float fVar10;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  undefined8 in_dr4;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char cVar21;
  
  fVar13 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar16 = (float)((ulonglong)in_dr4 >> 0x20);
  a4 = *ar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  fVar18 = fVar13;
  FUN_8c120550(ar4,3,ar6,ar7);
  ar4[0xe] = (int)fVar16;
  uVar3 = ((int)fVar13 & 0xffffU) >> 1;
  uVar9 = uVar3 + 1;
  iVar5 = uVar9 * 4;
  iVar1 = a4;
  a5 = (float *)(**(code **)(a4 + 0x10))(a4,iVar5,ar6,ar7);
  if (a5 == (float *)0x0) {
LAB_8c1110d4:
    FUN_8c1204c4(ar4,100,ar6,ar7);
  }
  else {
    fVar10 = fVar18 / (float)uVar3;
    fVar19 = 1000.0;
    fVar17 = fVar18;
    if (1000.0 < fVar18) {
      fVar17 = 1000.0;
    }
    fVar20 = 0.0;
    pfVar6 = a5;
    if (0.0 < fVar17) {
      do {
        *pfVar6 = fVar20 / (fVar16 * 100.0);
        fVar20 = fVar20 + fVar10;
        pfVar6 = pfVar6 + 1;
      } while (fVar20 < fVar17);
    }
    fVar15 = fVar10 / 2.0 + fVar18;
    fVar17 = 5.0;
    for (; fVar20 < fVar15; fVar20 = fVar20 + fVar10) {
      cVar21 = '\0';
      fVar12 = fVar16 * 1000.0;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      if (cVar21 == '\0') {
        fVar12 = 0.69314694;
      }
      *pfVar6 = fVar17 * (fVar13 / fVar12) + 10.0;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar17;
    }
    if (fVar19 <= fVar18) {
      fVar13 = 4.4765625;
      thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7);
      dVar11 = (double)((fVar13 * fVar17) / 0.69314694 + 10.0) + -0.95;
      dVar14 = dVar11;
      if (2147483648.0 <= dVar11) {
        dVar11 = dVar11 - 4294967296.0;
        dVar14 = dVar11;
      }
    }
    else {
      dVar14 = (double)fVar18 / 100.0 + -0.95;
      dVar11 = 2147483648.0;
      if (2147483648.0 <= dVar14) {
        dVar11 = 4294967296.0;
        dVar14 = dVar14 - 4294967296.0;
      }
    }
    fVar13 = (float)((ulonglong)dVar11 >> 0x20);
    ar4[10] = (int)dVar14;
    FUN_8c120550(ar4,4,ar6,ar7);
    if (ar4[10] == ((int)fVar13 & 0xffffU)) {
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xb] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xc] = iVar1;
      iVar1 = (**(code **)(a4 + 0x14))(a4,ar4[10],4,ar7);
      ar4[0xd] = iVar1;
      ar6 = 4;
      pfVar6 = (float *)(uint)ar4[10];
      iVar1 = (**(code **)(a4 + 0x14))(a4,pfVar6,4,ar7);
      if ((((ar4[0xb] != 0) && (ar4[0xc] != 0)) && (ar4[0xd] != 0)) && (iVar1 != 0)) {
        uVar3 = 0;
        if (ar4[10] != 0) {
          do {
            iVar5 = uVar3 * 4;
            *(undefined4 *)(ar4[0xd] + iVar5) = 0;
            *(undefined4 *)(ar4[0xc] + iVar5) = 0xffffffff;
            fVar13 = (float)(int)(uVar3 + 1);
            if (fVar13 < 0.0) {
              fVar13 = fVar13 + 4.2949673e+09;
            }
            if (uVar3 < 10) {
              *(float *)(iVar1 + uVar3 * 4) = fVar13 * 100.0;
            }
            else {
              fVar18 = -2.0;
              thunk_FUN_8c014064(iVar5,pfVar6,ar6,ar7);
              *(float *)(iVar1 + uVar3 * 4) = fVar18 * fVar19;
            }
            uVar4 = 1;
            iVar5 = uVar3 * 4;
            if (1 < uVar9) {
              do {
                if ((a5[uVar4] <= fVar13 + -1.0) || (fVar13 + 1.0 <= a5[uVar4])) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = 1;
                }
                *(int *)(ar4[0xd] + iVar5) = *(int *)(ar4[0xd] + iVar5) + iVar7;
                if ((iVar7 != 0) && (*(int *)(ar4[0xc] + iVar5) == -1)) {
                  *(uint *)(ar4[0xc] + iVar5) = uVar4;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar9);
            }
            iVar7 = ar4[0xb];
            ar6 = 4;
            cVar21 = '\0';
            uVar2 = (**(code **)(a4 + 0x14))(a4,*(undefined4 *)(ar4[0xd] + iVar5),4,ar7);
            *(undefined4 *)(iVar7 + iVar5) = uVar2;
            if (*(int *)(ar4[0xb] + iVar5) == 0) goto LAB_8c1110d4;
            pfVar6 = *(float **)(ar4[0xb] + iVar5);
            uVar4 = 0;
            pfVar8 = pfVar6;
            if (*(int *)(ar4[0xd] + iVar5) != 0) {
              do {
                iVar7 = *(int *)(ar4[0xc] + iVar5) + uVar4;
                if (cVar21 == '\0') {
                  fVar18 = a5[iVar7];
                }
                else {
                  fVar18 = (float)((ulonglong)*(undefined8 *)(a5 + iVar7) >> 0x20);
                }
                cVar21 = '\0';
                pfVar6 = pfVar8 + 1;
                if (fVar13 <= fVar18) {
                  fVar18 = fVar13 - fVar18;
                }
                else {
                  fVar18 = fVar18 - fVar13;
                }
                uVar4 = uVar4 + 1;
                *pfVar8 = fVar18 + 1.0;
                pfVar8 = pfVar6;
              } while (uVar4 < *(uint *)(ar4[0xd] + iVar5));
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[10]);
        }
        (**(code **)(a4 + 0x18))(a4,iVar1,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
        return 0;
      }
      FUN_8c1204c4(ar4,100,ar6,ar7);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c110c80\n.set _FUN_8c110c80, _FUN_8c110c80_def\n");
//@unit 8c11116e
#include "../decls.h"
undefined4 FUN_8c11116e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float extraout_fr0;
  
  FUN_8c120550(ar4,4,ar6,ar7);
  *(short *)(**(int **)(ar4 + 0x10) + 0xc) = (short)((int)extraout_fr0 << 2);
  return 0;
}

__asm__(".globl _FUN_8c11116e\n.set _FUN_8c11116e, _FUN_8c11116e_def\n");
//@unit 8c1111a0
#include "../decls.h"
undefined4 FUN_8c1111a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c110aea),(&FUN_8c11116e),(&DATA_8c110be0),0x3c);
  return uVar1;
}

__asm__(".globl _FUN_8c1111a0\n.set _FUN_8c1111a0, _FUN_8c1111a0_def\n");
//@unit 8c111208
#include "../decls.h"
int FUN_8c111208_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  char cStack_24;
  
  cStack_24 = '\0';
  iVar4 = ar5 * 4;
  iVar1 = 0;
  a5 = ar4[0xe];
joined_r0x8c111238:
  do {
    if (a5 == 0) {
      return (int)cStack_24;
    }
    ar7_00 = *(int *)(*(int *)(a5 + 8) + iVar4);
    if (-1 < ar7_00) {
      iVar2 = ar7_00;
      if ((ar6 == 0) && (ar7_00 == 0)) {
        iVar2 = -1;
      }
      *(int *)(*(int *)(a5 + 8) + iVar4) = iVar2 - ar6;
      if (iVar2 - ar6 < 0) {
        iVar3 = *(int *)(a5 + 0xc);
        iVar2 = *(int *)(a5 + 4) + -1;
        *(int *)(a5 + 4) = iVar2;
        if (iVar2 == 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        }
        cStack_24 = '\x01';
        iVar2 = *ar4;
        FUN_8c1209ec(iVar3,*(undefined4 *)(ar4[0xd] + iVar4),iVar2,ar7_00);
        if (*(int *)(a5 + 4) == 0) {
          iVar3 = *(int *)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar3;
          }
          (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)(a5 + 8),iVar2,ar7_00);
          (**(code **)(*ar4 + 0x18))(*ar4,a5,iVar2,ar7_00);
          a5 = iVar3;
          goto joined_r0x8c111238;
        }
      }
    }
    iVar1 = a5;
    a5 = *(int *)(a5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c111208\n.set _FUN_8c111208, _FUN_8c111208_def\n");
//@unit 8c1112e2
#include "../decls.h"
uint FUN_8c1112e2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(ar4 + 0xc);
  uVar2 = 0;
  uVar3 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      if ((*(int *)(*piVar4 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar4,piVar4[1],0,ar7);
        uVar2 = uVar2 | uVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < *(byte *)(ar4 + 8));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1112e2\n.set _FUN_8c1112e2, _FUN_8c1112e2_def\n");
//@unit 8c1112ee
#include "../decls.h"
uint FUN_8c1112ee_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int unaff_r12;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(unaff_r12 + 0xc);
  uVar2 = ar4;
  if (ar4 < *(byte *)(unaff_r12 + 8)) {
    do {
      if ((*(int *)(*piVar3 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar3,piVar3[1],0,ar7);
        ar4 = ar4 | uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(unaff_r12 + 8));
  }
  return ar4;
}

__asm__(".globl _FUN_8c1112ee\n.set _FUN_8c1112ee, _FUN_8c1112ee_def\n");
//@unit 8c111342
#include "../decls.h"
int FUN_8c111342_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(int *)(in_r0 + *(int *)(ar4 + 0x40)) != *(int *)(ar4 + 0x3c)) {
        in_r0 = *(int *)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(int *)(ar4 + 0x24) == *(int *)(in_r0 + iVar1)) {
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          break;
        }
        if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) &&
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) ||
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if (uVar2 == *(uint *)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(ar4 + 0x30) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c111342\n.set _FUN_8c111342, _FUN_8c111342_def\n");
//@unit 8c1113d0
#include "../decls.h"
uint FUN_8c1113d0_def(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  bool bVar1;
  int *piVar2;
  int *extraout_r2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 in_stack_ffffffdc;
  
  uVar7 = 1;
  uVar10 = 1;
  iVar8 = ar6 * 4;
  if ((char)ar5 == '\x01') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else if ((char)ar5 == '\x02') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,(uint)*(ushort *)((int)ar4 + 0xe),1,ar7);
  }
  else if ((char)ar5 == '\x03') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = FUN_8c1117e4(ar4,ar6,1,ar7);
  }
  else if ((char)ar5 == '\x04') {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(ar4[0xb] + iVar8) = ar4[9];
        *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar4;
      } while (uVar4 < (uint)ar4[5]);
    }
    iVar8 = ar4[0xe];
    while (iVar8 != 0) {
      if (*(int *)(iVar8 + 0xc) != ar6) {
        uVar3 = FUN_8c120948(*(undefined4 *)(iVar8 + 0xc),*ar4,uVar7,ar7);
        uVar10 = uVar10 | uVar3;
      }
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    ar4[0xe] = 0;
  }
  else if ((char)ar5 == '\x05') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if ((char)ar5 == '\x06') {
    if ((*(int *)(ar4[0xb] + iVar8) != 0) && (ar4[0xe] == 0)) {
      iVar5 = *(int *)(ar4[0xb] + iVar8);
      *(int *)(ar4[0xb] + iVar8) = 0;
      iVar9 = ar4[6];
      ar4[6] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar5 == ar4[10]) {
        FUN_8c111342(ar4,iVar5,1,ar7,in_stack_ffffffdc);
      }
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
    }
  }
  else if ((char)ar5 == '\a') {
    if (*(int *)(ar4[0xb] + iVar8) == 0) {
      *(int *)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(ar4[0x10] + iVar8) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar10 = FUN_8c11189a(ar4,ar6,ar7,ar7);
  }
  else if ((char)ar5 == -8) {
    if ((*(char *)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar9 = ar4[0xe];
      iVar8 = 0;
      while (iVar5 = iVar9, iVar5 != 0) {
        if (*(int *)(iVar5 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar8 = iVar5;
        iVar9 = *(int *)(iVar5 + 0x10);
      }
      if (!bVar1) {
        *(int *)(ar6 + 4) = *(int *)(ar6 + 4) + 1;
        iVar9 = ar7;
        iVar5 = (**(code **)(*ar4 + 0x10))(*ar4,0x14,1,ar7);
        uVar7 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[5] << 2,uVar7,iVar9);
        uVar6 = 0x80000000;
        *(undefined4 *)(iVar5 + 8) = uVar7;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(*(int *)(iVar5 + 8) + uVar3 * 4) = uVar6;
            }
            else if ((*(int *)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(*(int *)(iVar5 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(ar4[0xb] + uVar3 * 4)) {
                iVar9 = libgcc_divide_helper_010468
                                  ((ar4[9] + ar4[4]) - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
                piVar2 = extraout_r2;
              }
              else {
                piVar2 = (int *)(*(int *)(iVar5 + 8) + uVar3 * 4);
                iVar9 = libgcc_divide_helper_010468
                                  (ar4[9] - *(int *)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(ar4 + 3));
              }
              *piVar2 = iVar9 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(iVar5 + 4) = ar4[6];
        *(int *)(iVar5 + 0xc) = ar6;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        if (iVar8 == 0) {
          ar4[0xe] = iVar5;
        }
        else {
          *(int *)(iVar8 + 0x10) = iVar5;
        }
      }
    }
  }
  else if ((char)ar5 == -1) {
    iVar8 = ar4[0xe];
    if (ar4[7] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[7],1,ar7);
    }
    if (ar4[0xb] != 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xb],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xd],uVar7,ar7);
      (**(code **)(*ar4 + 0x18))(*ar4,ar4[0x10],uVar7,ar7);
    }
    while (iVar8 != 0) {
      iVar9 = *(int *)(iVar8 + 0x10);
      (**(code **)(*ar4 + 0x18))(*ar4,iVar8,uVar7,ar7);
      iVar8 = iVar9;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4,uVar7,ar7);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1113d0\n.set _FUN_8c1113d0, _FUN_8c1113d0_def\n");
//@unit 8c1117e4
#include "../decls.h"
undefined4 FUN_8c1117e4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(int *)(ar4 + 0x28) - *(uint *)(ar4 + 0x24),(uint)*(ushort *)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(int *)(ar4 + 0x24) - *(int *)(ar4 + 0x28),(uint)*(ushort *)(ar4 + 0xc));
    uVar3 = *(int *)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(ushort *)(ar4 + 0xc);
  uVar3 = *(int *)(ar4 + 0x28) - iVar1;
  *(uint *)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(uint *)(ar4 + 0x1c)) {
    *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + *(int *)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(int *)(ar4 + 0x28) == *(int *)(ar4 + 0x24)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(int *)(*(int *)(ar4 + 0x2c) + iVar2) = *(int *)(*(int *)(ar4 + 0x2c) + iVar2) - iVar1;
        *(int *)(*(int *)(ar4 + 0x40) + iVar2) = *(int *)(*(int *)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(uint *)(*(int *)(ar4 + 0x2c) + iVar2) < *(uint *)(ar4 + 0x1c)) {
          *(int *)(*(int *)(ar4 + 0x2c) + iVar2) =
               *(int *)(*(int *)(ar4 + 0x2c) + iVar2) + *(int *)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x14));
  }
  return 1;
}

__asm__(".globl _FUN_8c1117e4\n.set _FUN_8c1117e4, _FUN_8c1117e4_def\n");
//@unit 8c11189a
#include "../decls.h"
undefined4 FUN_8c11189a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int *ain0;
  int iVar3;
  uint ar6_00;
  
  if (ar6 != 0) {
    iVar3 = ar5 * 4;
    ar6_00 = ar6 * (uint)*(ushort *)(ar4 + 0xc);
    uVar2 = *(int *)(ar4 + 0x24) - *(int *)(*(int *)(ar4 + 0x2c) + iVar3);
    if (0x7fffffff < uVar2) {
      uVar2 = uVar2 + *(int *)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(*(int *)(ar4 + 0x40) + iVar3) == *(int *)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(ar4 + 0x10);
    }
    if (uVar2 < ar6_00) {
      return 0;
    }
    if (ar6_00 == uVar2) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    ain0 = (int *)(*(int *)(ar4 + 0x2c) + iVar3);
    iVar1 = *(int *)(ar4 + 0x1c);
    uVar2 = (*ain0 - iVar1) - ar6_00;
    if (0x7fffffff < uVar2) {
      iVar1 = *(int *)(ar4 + 0x20);
    }
    *ain0 = iVar1 + uVar2;
    *(int *)(*(int *)(ar4 + 0x40) + iVar3) = *(int *)(*(int *)(ar4 + 0x40) + iVar3) - ar6;
    if (*(int *)(ar4 + 0x14) == 1) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar3);
    }
    else {
      FUN_8c111342(ar4,uVar2,ar6_00,ar6,ain0);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11189a\n.set _FUN_8c11189a, _FUN_8c11189a_def\n");
//@unit 8c11194c
#include "../decls.h"
int * FUN_8c11194c_def(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int a5;
  undefined8 in_dr0;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  FUN_8c120550(ar4,1,ar6,ar7);
  if (cVar8 == '\0') {
    fVar5 = 2.1474836e+09;
  }
  else {
    fVar5 = -NAN;
  }
  fVar4 = fVar3;
  if (fVar5 < fVar3) {
    fVar4 = fVar3 + -4.2949673e+09;
  }
  a5 = 2;
  iVar6 = (int)fVar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  uVar7 = (uint)fVar3;
  if ((uVar7 & 0xffff) == 0xffff) {
    uVar7 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    a5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
  }
  if ((uVar7 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    ar6 = uVar7 & 0xffff;
    a5 = iVar6;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,iVar6,ar6,ar7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
      FUN_8c1204c4(ar4,2,ar6,ar7);
      return (int *)0;
    }
  }
  ar4[2] = iVar6;
  iVar6 = (uVar7 & 0xffff) * iVar6;
  *(short *)(ar4 + 3) = (short)uVar7;
  ar4[4] = iVar6;
  ar4[8] = ar4[7] + iVar6;
  FUN_8c112234(ar4,a5,ar6,ar7);
  FUN_8c120550(ar4,3,ar6,ar7);
  if (((int)fVar3 & 0xffU) == 0) {
    ar4[6] = 0;
    uVar7 = 0;
    if (ar4[5] != 0) {
      do {
        uVar2 = uVar7 + 1;
        *(undefined4 *)(uVar7 * 4 + ar4[0xb]) = 0;
        uVar7 = uVar2;
      } while (uVar2 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  FUN_8c120550(ar4,4,ar6,ar7);
  *(ushort *)((int)ar4 + 0xe) = (ushort)(int)fVar3 & 0xff;
  FUN_8c120550(ar4,5,ar6,ar7);
  *(char *)((int)ar4 + 0x31) = (char)(int)fVar3;
  return ar4;
}

__asm__(".globl _FUN_8c11194c\n.set _FUN_8c11194c, _FUN_8c11194c_def\n");
//@unit 8c111adc
#include "../decls.h"
undefined4 FUN_8c111adc_def(int *ar4,int ar5,uint ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint a6;
  uint a7;
  int a5;
  undefined8 in_dr0;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  short in_stack_00000000;
  char in_stack_00000004;
  
  fVar4 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  a6 = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    FUN_8c120550(ar4,1,ar6,ar7);
    if (cVar7 == '\0') {
      fVar6 = 2.1474836e+09;
    }
    else {
      fVar6 = -NAN;
    }
    fVar5 = fVar4;
    if (fVar6 < fVar4) {
      fVar5 = fVar4 + -4.2949673e+09;
    }
    a5 = (int)fVar5;
  }
  if (ar6 == 0) {
    ar5 = 2;
    FUN_8c120550(ar4,2,a6,a7);
    ar6 = (uint)fVar4;
  }
  if (ar4[7] != 0) {
    ar5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,ar5,a6,a7);
  }
  if ((ar6 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    a6 = ar6 & 0xffff;
    ar5 = a5;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,a5,a6,a7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      FUN_8c1204c4(ar4,2,a6,a7);
      return 0;
    }
  }
  ar4[2] = a5;
  *(short *)(ar4 + 3) = (short)ar6;
  ar4[4] = (ar6 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  FUN_8c112234(ar4,ar5,a6,a7);
  if ((ar7 & 0xff) == 0xff) {
    FUN_8c120550(ar4,3,a6,a7);
    ar7 = (uint)fVar4;
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar2 = 0;
    if (ar4[5] != 0) {
      do {
        uVar3 = uVar2 + 1;
        *(undefined4 *)(uVar2 * 4 + ar4[0xb]) = 0;
        uVar2 = uVar3;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if (in_stack_00000000 == -1) {
    FUN_8c120550(ar4,4,a6,a7);
    in_stack_00000000 = (short)(int)fVar4;
  }
  *(short *)((int)ar4 + 0xe) = in_stack_00000000;
  if (in_stack_00000004 == -1) {
    FUN_8c120550(ar4,5,a6,a7);
    *(char *)((int)ar4 + 0x31) = (char)(int)fVar4;
  }
  else {
    *(char *)((int)ar4 + 0x31) = in_stack_00000004;
  }
  return ar4;
}

__asm__(".globl _FUN_8c111adc\n.set _FUN_8c111adc, _FUN_8c111adc_def\n");
//@unit 8c111cdc
#include "../decls.h"
undefined4 FUN_8c111cdc_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (&memmove);
  iVar5 = ar6 * *(ushort *)(ar4 + 0xc);
  if ((*(char *)(ar4 + 0x30) == '\0') && (ar6 <= *(uint *)(ar4 + 8))) {
    if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
      if (*(uint *)(ar4 + 0x28) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) goto LAB_8c111d40;
      memmove(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
      *(int *)(ar4 + 0x24) = *(int *)(ar4 + 0x24) + iVar5;
    }
    else {
      if (*(uint *)(ar4 + 0x28) < (uint)((*(int *)(ar4 + 0x24) + iVar5) - *(int *)(ar4 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(ar4 + 0x20) < (uint)(*(int *)(ar4 + 0x24) + iVar5)) {
        iVar4 = *(int *)(ar4 + 0x20) - *(int *)(ar4 + 0x24);
        memmove(ar5,iVar4);
        (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x1c),ar5 + iVar4,iVar5 - iVar4);
        *(int *)(ar4 + 0x24) = (iVar5 - iVar4) + *(int *)(ar4 + 0x1c);
      }
      else {
        memmove(*(undefined4 *)(ar4 + 0x24),ar5,iVar5);
        iVar5 = *(int *)(ar4 + 0x24) + iVar5;
        *(int *)(ar4 + 0x24) = iVar5;
        if (iVar5 == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(ar4 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
          *(uint *)(*(int *)(ar4 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(ar4 + 0x40) + uVar3 * 4) + ar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x14));
    }
    if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + ar6;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cdc\n.set _FUN_8c111cdc, _FUN_8c111cdc_def\n");
//@unit 8c111cec
#include "../decls.h"
undefined4 FUN_8c111cec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10;
  uint unaff_r11;
  int a6;
  int unaff_r14;
  int iVar4;
  
  puVar1 = (&memmove);
  iVar4 = unaff_r11 * *(ushort *)(unaff_r14 + 0xc);
  if ((*(char *)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(uint *)(unaff_r14 + 8))) {
    if (*(uint *)(unaff_r14 + 0x24) < *(uint *)(unaff_r14 + 0x28)) {
      if (*(uint *)(unaff_r14 + 0x28) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4))
      goto LAB_8c111d40;
      memmove(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
      *(int *)(unaff_r14 + 0x24) = *(int *)(unaff_r14 + 0x24) + iVar4;
    }
    else {
      if (*(uint *)(unaff_r14 + 0x28) <
          (uint)((*(int *)(unaff_r14 + 0x24) + iVar4) - *(int *)(unaff_r14 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unaff_r14 + 0x20) < (uint)(*(int *)(unaff_r14 + 0x24) + iVar4)) {
        a6 = *(int *)(unaff_r14 + 0x20) - *(int *)(unaff_r14 + 0x24);
        memmove(*(int *)(unaff_r14 + 0x24),unaff_r10,a6,ar7);
        (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x1c),unaff_r10 + a6,iVar4 - a6,ar7);
        *(int *)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unaff_r14 + 0x1c);
      }
      else {
        memmove(*(undefined4 *)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7);
        iVar4 = *(int *)(unaff_r14 + 0x24) + iVar4;
        *(int *)(unaff_r14 + 0x24) = iVar4;
        if (iVar4 == *(int *)(unaff_r14 + 0x20)) {
          *(undefined4 *)(unaff_r14 + 0x24) = *(undefined4 *)(unaff_r14 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unaff_r14 + 0x14) != 0) {
      do {
        if (*(int *)(uVar3 * 4 + *(int *)(unaff_r14 + 0x2c)) == 0) {
          *(uint *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) =
               *(int *)(*(int *)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unaff_r14 + 0x14));
    }
    if ((*(int *)(unaff_r14 + 0x24) == *(int *)(unaff_r14 + 0x28)) &&
       (*(int *)(unaff_r14 + 0x18) != 0)) {
      *(undefined1 *)(unaff_r14 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unaff_r14 + 0x3c) = *(int *)(unaff_r14 + 0x3c) + unaff_r11;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cec\n.set _FUN_8c111cec, _FUN_8c111cec_def\n");
//@unit 8c111dfe
#include "../decls.h"
undefined4 FUN_8c111dfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(int *)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(ushort *)(ar4 + 0xc);
  *(int *)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(int *)(ar4 + 0x20)) {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar2 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
        *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) = *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  *(int *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + 1;
  return iVar3;
}

__asm__(".globl _FUN_8c111dfe\n.set _FUN_8c111dfe, _FUN_8c111dfe_def\n");
//@unit 8c111e72
#include "../decls.h"
undefined4 FUN_8c111e72_def(int ar4,int ar5,int ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  uint ar5_00;
  int iVar5;
  
  iVar4 = ar5 * 4;
  ar5_00 = *(uint *)(*(int *)(ar4 + 0x2c) + iVar4);
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (ar5_00 != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
  }
  else if (ar7 <= *(uint *)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(ar4 + 0xc);
    uVar1 = ar5_00;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (ar5_00 < *(uint *)(ar4 + 0x24)) {
      if (iVar5 + ar5_00 <= *(uint *)(ar4 + 0x24)) {
        memmove(ar6,ar5_00,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(ar4 + 0x28) == ar5_00) {
          FUN_8c111342(ar4,uVar1,iVar2,uVar3,ar5);
        }
        if (*(int *)(ar4 + 0x38) != 0) {
          FUN_8c111208(ar4,ar5,ar7,uVar3);
        }
        return 1;
      }
    }
    else if ((ar5_00 + iVar5) - *(int *)(ar4 + 0x10) <= *(uint *)(ar4 + 0x24)) {
      if (*(uint *)(ar4 + 0x20) < iVar5 + ar5_00) {
        ar6_00 = *(int *)(ar4 + 0x20) - ar5_00;
        memmove(ar6,ar5_00,ar6_00,ar7);
        iVar5 = iVar5 - ar6_00;
        uVar1 = *(uint *)(ar4 + 0x1c);
        iVar2 = iVar5;
        memmove(ar6 + ar6_00,uVar1,iVar5,uVar3);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(ar4 + 0x1c);
      }
      else {
        memmove(ar6,ar5_00,iVar5,ar7);
        *(int *)(*(int *)(ar4 + 0x2c) + iVar4) = *(int *)(*(int *)(ar4 + 0x2c) + iVar4) + iVar5;
        if (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) == *(int *)(ar4 + 0x20)) {
          *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
        }
      }
      goto LAB_8c111f76;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c111e72\n.set _FUN_8c111e72, _FUN_8c111e72_def\n");
//@unit 8c111fbe
#include "../decls.h"
int FUN_8c111fbe_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = ar5 * 4;
  if (*(int *)(*(int *)(ar4 + 0x40) + iVar4) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (*(int *)(*(int *)(ar4 + 0x2c) + iVar4) != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(ar4 + 0x2c) + iVar4);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(ar4 + 0xc);
    if (*(uint *)(ar4 + 0x20) <= *(uint *)(*(int *)(ar4 + 0x2c) + iVar4)) {
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(ar4 + 0x1c);
    }
    *(int *)(*(int *)(ar4 + 0x40) + iVar4) = *(int *)(*(int *)(ar4 + 0x40) + iVar4) + 1;
    if (iVar1 == *(int *)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(*(int *)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(*(int *)(ar4 + 0x40) + ar7) != *(int *)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(ar4 + 0x14)) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar4);
        *(undefined1 *)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(ar4 + 0x38) != 0) {
      FUN_8c111208(ar4,ar5,1,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fbe\n.set _FUN_8c111fbe, _FUN_8c111fbe_def\n");
//@unit 8c111fc6
#include "../decls.h"
int FUN_8c111fc6_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_r14;
  
  if (*(int *)(*(int *)(in_r0 + ar4) + unaff_r14) == *(int *)(ar4 + 0x3c)) {
    if ((*(int *)(ar4 + 0x38) != 0) && (*(int *)(*(int *)(ar4 + 0x2c) + unaff_r14) != 0)) {
      FUN_8c111208(ar4,ar5,0,ar7);
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(*(int *)(ar4 + 0x2c) + unaff_r14);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(ar4 + 0xc);
    if (*(uint *)(ar4 + 0x20) <= *(uint *)(*(int *)(ar4 + 0x2c) + unaff_r14)) {
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + unaff_r14) = *(undefined4 *)(ar4 + 0x1c);
    }
    *(int *)(*(int *)(ar4 + 0x40) + unaff_r14) = *(int *)(*(int *)(ar4 + 0x40) + unaff_r14) + 1;
    if (iVar1 == *(int *)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(*(int *)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(*(int *)(ar4 + 0x40) + ar7) != *(int *)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(ar4 + 0x14)) {
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + unaff_r14);
        *(undefined1 *)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(ar4 + 0x38) != 0) {
      FUN_8c111208(ar4,ar5,1,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fc6\n.set _FUN_8c111fc6, _FUN_8c111fc6_def\n");
//@unit 8c112074
#include "../decls.h"
uint FUN_8c112074_def(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a6;
  int *piVar4;
  bool bVar5;
  
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (a6 = ar4; a6 < piVar4; a6 = a6 + 2) {
    if (*(int *)(*(int *)(*a6 + 0x2c) + a6[1] * 4) != 0) {
      bVar5 = *(int *)(*(int *)(*a6 + 0x40) + a6[1] * 4) == *(int *)(*a6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = a6;
    a6 = piVar1 + 2;
    if (piVar4 <= a6) break;
  } while ((*(int *)(*(int *)(*a6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(*(int *)(*a6 + 0x40) + piVar1[3] * 4) == *(int *)(*a6 + 0x3c))));
  if (a6 == piVar4) {
    if (bVar5 == false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        uVar3 = FUN_8c111fbe(*ar4,ar4[1],a6,ar7);
        *ar6 = uVar3;
        ar6 = ar6 + 1;
      }
    }
    else {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,ar7);
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c112074\n.set _FUN_8c112074, _FUN_8c112074_def\n");
//@unit 8c112170
#include "../decls.h"
uint FUN_8c112170_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (piVar3 = ar4; piVar3 < piVar4; piVar3 = piVar3 + 2) {
    if (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0) {
      bVar5 = *(int *)(*(int *)(*piVar3 + 0x40) + piVar3[1] * 4) == *(int *)(*piVar3 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = piVar3;
    piVar3 = piVar1 + 2;
    if (piVar4 <= piVar3) break;
  } while ((*(int *)(*(int *)(*piVar3 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(*(int *)(*piVar3 + 0x40) + piVar1[3] * 4) == *(int *)(*piVar3 + 0x3c))
          ));
  if (piVar3 == piVar4) {
    if (bVar5 != false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,uVar6);
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c112170\n.set _FUN_8c112170, _FUN_8c112170_def\n");
//@unit 8c11217e
#include "../decls.h"
uint FUN_8c11217e_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int unaff_r13;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(unaff_r13 + (int)ar6);
  bVar4 = true;
  for (; ar6 < piVar3; ar6 = ar6 + 2) {
    if (*(int *)(*(int *)(*ar6 + 0x2c) + ar6[1] * 4) != 0) {
      bVar4 = *(int *)(*(int *)(*ar6 + 0x40) + ar6[1] * 4) == *(int *)(*ar6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = ar6;
    ar6 = piVar1 + 2;
    if (piVar3 <= ar6) break;
  } while ((*(int *)(*(int *)(*ar6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar4 == (*(int *)(*(int *)(*ar6 + 0x40) + piVar1[3] * 4) == *(int *)(*ar6 + 0x3c))));
  if (ar6 == piVar3) {
    if (bVar4 != false) {
      for (; ar4 < piVar3; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,ar7);
        }
      }
    }
    uVar2 = (uint)(bVar4 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11217e\n.set _FUN_8c11217e, _FUN_8c11217e_def\n");
//@unit 8c112234
#include "../decls.h"
undefined4 FUN_8c112234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar2) = *(undefined4 *)(ar4 + 0x1c);
      *(undefined4 *)(*(int *)(ar4 + 0x40) + iVar2) = 0;
    } while (uVar1 < *(uint *)(ar4 + 0x14));
  }
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined1 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0x30;
}

__asm__(".globl _FUN_8c112234\n.set _FUN_8c112234, _FUN_8c112234_def\n");
//@unit 8c1122ac
#include "../decls.h"
int * FUN_8c1122ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a6;
  int iStack_18;
  undefined1 uStack_14;
  
  a6 = 0x44;
  piVar1 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x44,ar7);
  if (piVar1 == (int *)0x0) {
    iStack_18 = ar4;
    uStack_14 = (undefined1)ar5;
    FUN_8c1204c4(&iStack_18,2,a6,ar7);
    piVar1 = (int *)0x0;
  }
  else {
    iVar2 = (**(code **)(ar4 + 0x10))(ar4,ar6 << 2,a6,ar7);
    piVar1[0xb] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0xd] = iVar2;
    iVar2 = (**(code **)(ar4 + 0x14))(ar4,ar6,4,ar7);
    piVar1[0x10] = iVar2;
    piVar1[5] = ar6;
    *(undefined1 *)(piVar1 + 1) = (undefined1)ar5;
    *piVar1 = ar4;
    piVar1[2] = 1;
  }
  return piVar1;
}

__asm__(".globl _FUN_8c1122ac\n.set _FUN_8c1122ac, _FUN_8c1122ac_def\n");
//@unit 8c112350
#include "../decls.h"
undefined4 FUN_8c112350_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(ar4 + 0x14))(ar4,1,0x18,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c112350\n.set _FUN_8c112350, _FUN_8c112350_def\n");
//@unit 8c11237a
#include "../decls.h"
undefined4 FUN_8c11237a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*(char *)(ar4 + 0x14) != '\0') && (*(int *)(ar4 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(ar4 + 0xc));
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c11237a\n.set _FUN_8c11237a, _FUN_8c11237a_def\n");
//@unit 8c112380
#include "../decls.h"
undefined4 FUN_8c112380_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(unaff_r14 + 0xc),ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c112380\n.set _FUN_8c112380, _FUN_8c112380_def\n");
//@unit 8c1123b0
#include "../decls.h"
undefined4 FUN_8c1123b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(ar4 + 0x14))(ar4,1,0x18,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1123b0\n.set _FUN_8c1123b0, _FUN_8c1123b0_def\n");
//@unit 8c1123da
#include "../decls.h"
undefined4 FUN_8c1123da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*(char *)(ar4 + 0x14) != '\0') && (*(int *)(ar4 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(ar4 + 0xc));
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c1123da\n.set _FUN_8c1123da, _FUN_8c1123da_def\n");
//@unit 8c1123e0
#include "../decls.h"
undefined4 FUN_8c1123e0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') && (*(int *)(unaff_r14 + 0xc) != 0)) {
    (**(code **)(ar5 + 0x18))(ar5,*(undefined4 *)(unaff_r14 + 0xc),ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(ar5 + 0x18))(ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c1123e0\n.set _FUN_8c1123e0, _FUN_8c1123e0_def\n");
//@unit 8c112410
#include "../decls.h"
int * FUN_8c112410_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint in_fr5;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = uVar5;
  iVar1 = (**(code **)(ar7 + 0x10))(ar7,uVar5 * 4);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    uVar3 = 0;
    ar4[4] = uVar5 * 4 + ar4[3];
    puVar2 = (ulonglong *)(uint)ar4[3];
    if (cVar6 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0x8c1129e400000000;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (cVar6 == '\0') {
          *(int *)puVar2 = (int)(uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (ulonglong *)((int)puVar2 + 4);
      } while (uVar3 < uVar5);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c112410\n.set _FUN_8c112410, _FUN_8c112410_def\n");
//@unit 8c11241e
#include "../decls.h"
undefined4 * FUN_8c11241e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint unaff_r12;
  int unaff_r13;
  undefined4 *unaff_r14;
  undefined4 in_fr5;
  undefined8 uVar4;
  char in_FPSCR_SZ = 0;
  
  *unaff_r14 = ar5;
  unaff_r14[1] = ar6;
  unaff_r14[2] = unaff_r12;
  iVar1 = (**(code **)(unaff_r13 + 0x10))(unaff_r13,unaff_r12 << 2,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r13 + 0x18))(unaff_r13,unaff_r14,ar6,ar7);
    unaff_r14 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    uVar3 = 0;
    unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
    puVar2 = (undefined8 *)unaff_r14[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44(_DAT_8c1125e0,in_fr5);
    }
    else {
      uVar4 = CONCAT44((&FUN_8c1129e4),_DAT_8c1125e0);
    }
    if (unaff_r12 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)((int)puVar2 + 4);
      } while (uVar3 < unaff_r12);
    }
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c11241e\n.set _FUN_8c11241e, _FUN_8c11241e_def\n");
//@unit 8c112482
#include "../decls.h"
int * FUN_8c112482_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined4 a6;
  int a7;
  int a5;
  
  a5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  a6 = 4;
  ar4[2] = a5;
  a7 = ar7;
  iVar1 = (**(code **)(ar7 + 0x14))(ar7,a5,4,ar7);
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(ar7 + 0x18))(ar7,ar4,a6,a7);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    ar4[4] = a5 * 4 + ar4[3];
  }
  return ar4;
}

__asm__(".globl _FUN_8c112482\n.set _FUN_8c112482, _FUN_8c112482_def\n");
//@unit 8c1124de
#include "../decls.h"
int * FUN_8c1124de_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = *ar5 * ar5[1];
  iVar2 = (**(code **)(ar6 + 0x10))(ar6,*ar4 * ar4[1] * 4);
  ar4[3] = iVar2;
  if (iVar2 == 0) {
    (**(code **)(ar6 + 0x18))(ar6,ar4);
    ar4 = (int *)0x0;
  }
  else {
    *(undefined1 *)(ar4 + 5) = 1;
    puVar1 = (&FUN_8c1129e4);
    ar4[4] = *ar4 * ar4[1] * 4 + ar4[3];
    (*(code *)puVar1)(ar4,ar5);
  }
  return ar4;
}

__asm__(".globl _FUN_8c1124de\n.set _FUN_8c1124de, _FUN_8c1124de_def\n");
//@unit 8c1124ea
#include "../decls.h"
int * FUN_8c1124ea_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  int *unaff_r13;
  int *unaff_r14;
  undefined4 in_PR;
  
  *unaff_r14 = *unaff_r13;
  unaff_r14[1] = unaff_r13[1];
  unaff_r14[2] = *unaff_r13 * unaff_r13[1];
  iVar1 = (**(code **)(unaff_r12 + 0x10))(unaff_r12,*unaff_r14 * unaff_r14[1] * 4,ar6,ar7);
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (**(code **)(unaff_r12 + 0x18))(unaff_r12,unaff_r14,ar6,ar7);
    unaff_r14 = (int *)0x0;
  }
  else {
    *(undefined1 *)(unaff_r14 + 5) = 1;
    unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
    FUN_8c1129e4(unaff_r14,unaff_r13,ar6,ar7,in_PR);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c1124ea\n.set _FUN_8c1124ea, _FUN_8c1124ea_def\n");
//@unit 8c1125e8
#include "../decls.h"
undefined4 FUN_8c1125e8_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *ar4;
  iVar2 = ar4[1];
  iVar1 = ar4[3];
  puVar5 = (undefined4 *)(ar5 * iVar4 * 4 + iVar1);
  for (puVar3 = puVar5 + iVar4; puVar3 < (undefined4 *)(iVar4 * iVar2 * 4 + iVar1);
      puVar3 = puVar3 + 1) {
    *puVar5 = *puVar3;
    puVar5 = puVar5 + 1;
  }
  ar4[1] = ar4[1] + -1;
  ar4[2] = ar4[2] + -1;
  ar4[4] = ar4[4] + *ar4 * -4;
  return in_r0;
}

__asm__(".globl _FUN_8c1125e8\n.set _FUN_8c1125e8, _FUN_8c1125e8_def\n");
//@unit 8c112642
#include "../decls.h"
undefined4 FUN_8c112642_def(int *ar4,int ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = ar5 * ar6;
  ar4[3] = ar7;
  ar4[4] = ar7 + ar4[2] * 4;
  return in_r0;
}

__asm__(".globl _FUN_8c112642\n.set _FUN_8c112642, _FUN_8c112642_def\n");
//@unit 8c112658
#include "../decls.h"
undefined4 FUN_8c112658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = *(float **)(ar4 + 0xc);
  uVar1 = 1;
  fVar3 = *pfVar2;
  if (1 < *(uint *)(ar4 + 8)) {
    do {
      pfVar2 = pfVar2 + 1;
      uVar1 = uVar1 + 1;
      if (fVar3 < *pfVar2) {
        fVar3 = *pfVar2;
      }
    } while (uVar1 < *(uint *)(ar4 + 8));
  }
  return ain0;
}

__asm__(".globl _FUN_8c112658\n.set _FUN_8c112658, _FUN_8c112658_def\n");
//@unit 8c112680
#include "../decls.h"
undefined8 * FUN_8c112680_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  float *a5;
  uint uVar5;
  float *pfVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  
  uVar5 = 0;
  puVar2 = &DAT_8c112824;
  iVar4 = ar4[1];
  iVar3 = *ar4;
  a5 = (float *)(uint)ar4[3];
  pfVar6 = a5;
  if (iVar3 * iVar4 != 0) {
    do {
      uVar7 = 0x4000000000000000;
      thunk_FUN_8c013cd8(ar4,a5,ar6,ar7);
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      thunk_FUN_8c013dfc(ar4,a5,ar6,ar7);
      uVar5 = uVar5 + 1;
      cVar1 = (char)((((uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar12 << 0x14) &
                     0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar8 = (double)CONCAT44(0x3fe00000,(int)uVar7);
      }
      else {
        dVar8 = -1.5698269832574723e-250;
      }
      puVar2 = (undefined8 *)&DAT_8c112830;
      if (cVar1 == '\0') {
        dVar8 = (double)((ulonglong)dVar8 & 0xffffffff00000000);
      }
      if (cVar1 == '\0') {
        fVar9 = *pfVar6;
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20);
      }
      *pfVar6 = fVar9 - (float)((double)(float)((ulonglong)uVar7 >> 0x20) * dVar8);
      pfVar6 = pfVar6 + 1;
    } while (uVar5 < (uint)(iVar3 * iVar4));
  }
  return puVar2;
}

__asm__(".globl _FUN_8c112680\n.set _FUN_8c112680, _FUN_8c112680_def\n");
//@unit 8c112734
#include "../decls.h"
undefined4 FUN_8c112734_def(float *ar4,float *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  float fVar2;
  float *ain0;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *ar5_00;
  float ar6_00;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar15;
  undefined8 in_xd2;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar14;
  
  fVar3 = ar4[1];
  fVar2 = *ar4;
  ar6_00 = (float)(ar6 + 1);
  fVar4 = ar4[3];
  ain0 = (float *)((int)ar5[2] * 4 + (int)ar5[3]);
  pfVar5 = ar4;
  ar5_00 = ar5;
  fVar8 = ar6_00;
  if ((uint)ar6_00 < (uint)ar4[1]) {
    do {
      pfVar7 = (float *)((int)fVar8 * (int)*ar4 * 4 + (int)ar4[3]);
      pfVar9 = pfVar7 + (int)fVar8;
      fVar15 = *pfVar9;
      pfVar6 = pfVar7 + -(int)*ar4;
      fVar13 = pfVar9[-1];
      uVar14 = CONCAT44(fVar15,fVar13);
      fVar11 = fVar13;
      if (fVar13 <= 0.0) {
        fVar11 = -fVar13;
      }
      fVar10 = fVar15;
      if (fVar15 <= 0.0) {
        fVar10 = -fVar15;
      }
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      if (fVar10 <= fVar11) {
        fVar13 = -fVar15 / fVar13;
        fVar11 = fVar13;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar15 = 1.0;
        }
        else {
          fVar15 = 0.0;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar15 / fVar13,fVar15 / fVar13);
        }
        fVar13 = (float)((ulonglong)uVar12 >> 0x20);
        fVar11 = (float)uVar12 * fVar11;
      }
      else {
        fVar15 = -fVar13 / fVar15;
        fVar13 = fVar15;
        FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7,ain0);
        cVar1 = (char)((((uint)bVar16 << 0x12 | (uint)bVar17 << 0x13 | (uint)bVar18 << 0x14) &
                       0x100000) >> 0x14);
        if (cVar1 == '\0') {
          fVar11 = 1.0;
        }
        else {
          fVar11 = -INFINITY;
        }
        uVar12 = in_xd2;
        if (cVar1 == '\0') {
          uVar12 = CONCAT44(fVar11 / fVar15,fVar11 / fVar15);
        }
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulonglong)uVar12 >> 0x20) * fVar13;
      }
      fVar15 = 1.4013e-45;
      if (1 < (uint)fVar8) {
        do {
          fVar10 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          fVar15 = (float)((int)fVar15 + 1);
          *pfVar6 = fVar10;
          pfVar6 = pfVar6 + 1;
        } while ((uint)fVar15 < (uint)fVar8);
      }
      *pfVar6 = (float)uVar14 * fVar13 - (float)((ulonglong)uVar14 >> 0x20) * fVar11;
      for (pfVar5 = pfVar9 + -1 + (int)*ar4;
          pfVar5 < (float *)((int)fVar2 * (int)fVar3 * 4 + (int)fVar4); pfVar5 = pfVar5 + (int)*ar4)
      {
        fVar15 = *pfVar5;
        *pfVar5 = (float)*(undefined8 *)pfVar5 * fVar13 -
                  (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20) * fVar11;
        pfVar5[1] = fVar11 * fVar15 + pfVar5[1] * fVar13;
      }
      for (pfVar5 = (float *)((int)fVar8 * 4 + (int)ar5[3]); pfVar5 < ain0;
          pfVar5 = pfVar5 + (int)*ar5) {
        ar5_00 = pfVar5 + -1;
        fVar15 = *ar5_00;
        *ar5_00 = fVar15 * fVar13 - *pfVar5 * fVar11;
        *pfVar5 = fVar11 * fVar15 + *pfVar5 * fVar13;
      }
      fVar8 = (float)((int)fVar8 + 1);
    } while ((uint)fVar8 < (uint)ar4[1]);
  }
  ar4[1] = (float)((int)ar4[1] + -1);
  return 0;
}

__asm__(".globl _FUN_8c112734\n.set _FUN_8c112734, _FUN_8c112734_def\n");
//@unit 8c112958
#include "../decls.h"
undefined4 FUN_8c112958_def(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  
  pfVar8 = (float *)(uint)ar4[3];
  pfVar5 = *(float **)(ar5 + 0xc);
  uVar4 = 0;
  pfVar3 = *(float **)(ar6 + 0xc);
  while (bVar12 = uVar4 < ar4[1], uVar4 = uVar4 + 1, bVar12) {
    fVar11 = *pfVar3;
    pfVar7 = pfVar3 + 1;
    pfVar8 = pfVar8 + uVar4;
    pfVar1 = pfVar7;
    uVar2 = uVar4;
    pfVar6 = pfVar8;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar9 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar10 = *pfVar1;
        pfVar1 = pfVar1 + 1;
        fVar11 = fVar9 * fVar10 + fVar11;
      } while (uVar2 < *ar4);
    }
    fVar9 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *pfVar3 = *pfVar3 - fVar11 * fVar9;
    uVar2 = uVar4;
    pfVar3 = pfVar7;
    if (uVar4 < *ar4) {
      do {
        uVar2 = uVar2 + 1;
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        *pfVar7 = *pfVar7 - fVar11 * fVar9 * fVar10;
        pfVar7 = pfVar7 + 1;
      } while (uVar2 < *ar4);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c112958\n.set _FUN_8c112958, _FUN_8c112958_def\n");
//@unit 8c1129e4
#include "../decls.h"
undefined4 FUN_8c1129e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(ar4 + 8);
  puVar4 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  puVar2 = *(undefined4 **)(ar5 + 0xc);
  if (uVar3 != 0) {
    do {
      uVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      uVar1 = uVar1 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar4 + 1;
    } while (uVar1 < uVar3);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1129e4\n.set _FUN_8c1129e4, _FUN_8c1129e4_def\n");
//@unit 8c112a02
#include "../decls.h"
undefined4 FUN_8c112a02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_fr4;
  
  uVar2 = *(uint *)(ar4 + 8);
  puVar3 = *(undefined4 **)(ar4 + 0xc);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      uVar1 = uVar1 + 1;
      *puVar3 = in_fr4;
      puVar3 = puVar3 + 1;
    } while (uVar1 < uVar2);
  }
  return ain0;
}

__asm__(".globl _FUN_8c112a02\n.set _FUN_8c112a02, _FUN_8c112a02_def\n");
//@unit 8c112a20
#include "../decls.h"
undefined4 FUN_8c112a20_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float extraout_fr0;
  
  FUN_8c120550(ar4,0x10,ar6,ar7);
  *(uint *)(ar4 + 0x138) = ar5;
  *(uint *)(ar4 + 0x140) = ar5;
  uVar1 = (int)extraout_fr0 & 0xffff;
  if (*(char *)(ar4 + 0xf9) == '\0') {
    if (uVar1 < ar5) {
      uVar1 = ar5;
    }
    *(uint *)(ar4 + 0x13c) = uVar1;
  }
  else {
    *(undefined4 *)(ar4 + 0x13c) = 1;
  }
  if ((ar5 < 2) && (*(char *)(ar4 + 0xf8) == '\0')) {
    if (*(code **)(ar4 + 0x130) == FUN_8c117bac) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c117bac;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xb0) != 0) {
      return 0;
    }
    uVar1 = FUN_8c115732(ar4,1,ar6,ar7);
  }
  else {
    if (*(code **)(ar4 + 0x130) == FUN_8c11617a) {
      return 0;
    }
    *(code **)(ar4 + 0x130) = FUN_8c11617a;
    *(undefined4 *)(ar4 + 0x134) = *(undefined4 *)(ar4 + 0x130);
    if (*(int *)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(ar4 + 0xa8) != 0) {
      return 0;
    }
    uVar1 = FUN_8c1155a0(ar4,1,ar6,ar7);
  }
  if ((uVar1 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a20\n.set _FUN_8c112a20, _FUN_8c112a20_def\n");
//@unit 8c112a28
#include "../decls.h"
undefined4 FUN_8c112a28_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  FUN_8c120550(ar4,0x10,ar6,ar7);
  iVar1 = (int)0x138;
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          0xffe7ffff;
  *(uint *)(iVar1 + unaff_r14) = ar5;
  *(uint *)(iVar1 + 8 + unaff_r14) = ar5;
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(iVar1 + -0x3f + unaff_r14) == '\0') {
    if (uVar2 < ar5) {
      uVar2 = ar5;
    }
    *(uint *)(0x13c + unaff_r14) = uVar2;
  }
  else {
    *(undefined4 *)(0x13c + unaff_r14) = 1;
  }
  if ((ar5 < 2) && (*(char *)(0xf8 + unaff_r14) == '\0')) {
    iVar1 = (int)0x130;
    if (*(undefined **)(iVar1 + unaff_r14) == (&FUN_8c117bac)) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = (&FUN_8c117bac);
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(0xb0 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = FUN_8c115732(unaff_r14,1,ar6,ar7);
  }
  else {
    iVar1 = (int)0x130;
    if (*(undefined **)(iVar1 + unaff_r14) == (&FUN_8c11617a)) {
      return 0;
    }
    *(undefined **)(iVar1 + unaff_r14) = (&FUN_8c11617a);
    *(undefined4 *)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(iVar1 + unaff_r14);
    if (*(int *)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(0xa8 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = FUN_8c1155a0(unaff_r14,1,ar6,ar7);
  }
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a28\n.set _FUN_8c112a28, _FUN_8c112a28_def\n");
//@unit 8c112b1c
#include "../decls.h"
int FUN_8c112b1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(0x1be + ar4) = (undefined2)ar5;
  uVar1 = 0x80;
  iVar2 = (int)0xc0;
  if (*(int *)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(int *)(ar4 + 0x38) != 0) {
      do {
        if ((*(ushort *)(uVar3 * 2 + *(int *)(0xc0 + ar4)) & uVar1) == 0) {
          iVar2 = *(int *)(0x1c0 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(int *)(0x1c0 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x38));
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c112b1c\n.set _FUN_8c112b1c, _FUN_8c112b1c_def\n");
//@unit 8c112b6e
#include "../decls.h"
undefined4 FUN_8c112b6e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int ar6_00;
  uint uVar5;
  int iVar6;
  int a4;
  
  iVar6 = ar4[0x17];
  a4 = *ar4;
  iVar2 = (**(code **)(a4 + 0x10))(a4,(iVar6 + 1) * 4,ar6,ar7);
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6_00 = iVar6 << 2;
      memmove(iVar2,ar4[0x16],ar6_00,ar7);
      (**(code **)(a4 + 0x18))(a4,ar4[0x16],ar6_00,ar7);
    }
    ar4[0x16] = iVar2;
    ar6 = 0x20;
    iVar2 = (**(code **)(a4 + 0x14))
                      (a4,(uint)(*(ushort *)((int)0x1e4 + (int)ar4) >> 5),0x20,ar7);
    if (iVar2 != 0) {
      if (ar5 != 0) {
        uVar1 = *(ushort *)((int)0x1e4 + (int)ar4);
        *(int *)(ar5 + 0x18) = iVar2;
        uVar5 = (uint)(uVar1 >> 5);
        uVar3 = 0;
        uVar4 = uVar3;
        if (uVar5 != 1) {
          do {
            uVar3 = uVar4 + 1;
            *(uint *)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
            uVar4 = uVar3;
          } while (uVar3 < uVar5 - 1);
        }
        *(undefined4 *)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
      }
      *(int *)(ar4[0x16] + iVar6 * 4) = iVar2;
      ar4[0x17] = iVar6 + 1;
      return iVar2;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c112b6e\n.set _FUN_8c112b6e, _FUN_8c112b6e_def\n");
//@unit 8c112c90
#include "../decls.h"
undefined4 FUN_8c112c90_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (ar4[0x17] != 0) {
    do {
      (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)(ar4[0x16] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)ar4[0x17]);
  }
  if (ar4[0x16] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x16]);
  }
  ar4[0x16] = 0;
  ar4[0x17] = 0;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c90\n.set _FUN_8c112c90, _FUN_8c112c90_def\n");
//@unit 8c112c9e
#include "../decls.h"
undefined4 FUN_8c112c9e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(unaff_r14[0x16] + uVar1 * 4),ar6,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)unaff_r14[0x17]);
  }
  if (unaff_r14[0x16] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x16],ar6,ar7);
  }
  unaff_r14[0x16] = unaff_r11;
  unaff_r14[0x17] = unaff_r11;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c9e\n.set _FUN_8c112c9e, _FUN_8c112c9e_def\n");
//@unit 8c112d00
#include "../decls.h"
undefined4 FUN_8c112d00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar5 = (uint)(*(ushort *)(0x1e4 + ar4) >> 5);
  uVar6 = 0;
  if (*(int *)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(int *)(*(int *)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(uint *)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(uint *)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(ar4 + 0x54) = **(undefined4 **)(ar4 + 0x58);
  return 0;
}

__asm__(".globl _FUN_8c112d00\n.set _FUN_8c112d00, _FUN_8c112d00_def\n");
//@unit 8c112d82
#include "../decls.h"
undefined4 FUN_8c112d82_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x22];
  iVar6 = *ar4;
  iVar1 = (**(code **)(iVar6 + 0x10))(iVar6,(iVar5 + 1) * 4,ar6,ar7);
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      memmove(iVar1,ar4[0x21],ar6,ar7);
      (**(code **)(iVar6 + 0x18))(iVar6,ar4[0x21],ar6,ar7);
    }
    ar4[0x21] = iVar1;
    iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
    iVar1 = (*extraout_r3)(iVar6,iVar1 * 0x18,ar6,ar7);
    if (iVar1 != 0) {
      iVar6 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
      if (ar5 == 0) {
        ar4[0x23] = iVar1;
        ar4[0x20] = 0;
      }
      else {
        *(int *)(ar5 + 0x10) = iVar1;
      }
      uVar4 = 0;
      if (iVar6 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar1 + 0x10) = iVar3 * 0x18 + iVar1;
        } while (uVar4 < iVar6 - 1U);
      }
      *(undefined4 *)(uVar4 * 0x18 + iVar1 + 0x10) = 0;
      *(int *)(ar4[0x21] + iVar5 * 4) = iVar1;
      ar4[0x22] = iVar5 + 1;
      return iVar1;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c112d82\n.set _FUN_8c112d82, _FUN_8c112d82_def\n");
//@unit 8c112ec6
#include "../decls.h"
int FUN_8c112ec6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)((int)0x88 + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x84 + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x88 + (int)ar4));
  }
  if (*(int *)((int)0x84 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x84 + (int)ar4));
  }
  iVar2 = (int)0x84;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c112ec6\n.set _FUN_8c112ec6, _FUN_8c112ec6_def\n");
//@unit 8c112ed4
#include "../decls.h"
int FUN_8c112ed4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x84 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x88 + (int)unaff_r14));
  }
  if (*(int *)((int)0x84 + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x84 + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)0x84;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}

__asm__(".globl _FUN_8c112ed4\n.set _FUN_8c112ed4, _FUN_8c112ed4_def\n");
//@unit 8c112f40
#include "../decls.h"
undefined4 FUN_8c112f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar7 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(uint *)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x10) = uVar6;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = uVar6;
  return 0;
}

__asm__(".globl _FUN_8c112f40\n.set _FUN_8c112f40, _FUN_8c112f40_def\n");
//@unit 8c112f48
#include "../decls.h"
undefined4 FUN_8c112f48_def(int ar4,uint ar5,undefined4 ar6,uint ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar6 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar6 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 0x10) = iVar5;
      }
      uVar4 = ar7;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar6 = uVar6 + 1;
      ar5 = uVar4 * 0x18 + iVar5;
    } while (uVar6 < *(uint *)(ar4 + 0x88));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 0x10) = ar7;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = ar7;
  return 0;
}

__asm__(".globl _FUN_8c112f48\n.set _FUN_8c112f48, _FUN_8c112f48_def\n");
//@unit 8c112fd8
#include "../decls.h"
undefined4 FUN_8c112fd8_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x44];
  iVar6 = *ar4;
  iVar1 = (**(code **)(iVar6 + 0x10))(iVar6,(iVar5 + 1) * 4,ar6,ar7);
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      memmove(iVar1,ar4[0x43],ar6,ar7);
      (**(code **)(iVar6 + 0x18))(iVar6,ar4[0x43],ar6,ar7);
    }
    ar4[0x43] = iVar1;
    iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
    iVar1 = (*extraout_r3)(iVar6,iVar1 * 0x18,ar6,ar7);
    if (iVar1 != 0) {
      if (ar5 != 0) {
        iVar6 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0x18);
        *(int *)(ar5 + 4) = iVar1;
        uVar4 = 0;
        if (iVar6 != 1) {
          do {
            iVar3 = uVar4 + 1;
            iVar2 = uVar4 * 0x18;
            uVar4 = uVar4 + 1;
            *(int *)(iVar2 + iVar1 + 4) = iVar3 * 0x18 + iVar1;
          } while (uVar4 < iVar6 - 1U);
        }
        *(undefined4 *)(uVar4 * 0x18 + iVar1 + 4) = 0;
      }
      *(int *)(ar4[0x43] + iVar5 * 4) = iVar1;
      ar4[0x44] = iVar5 + 1;
      return iVar1;
    }
  }
  FUN_8c1204c4(ar4,2,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c112fd8\n.set _FUN_8c112fd8, _FUN_8c112fd8_def\n");
//@unit 8c113124
#include "../decls.h"
int FUN_8c113124_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)((int)0x110 + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x10c + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x110 + (int)ar4));
  }
  if (*(int *)((int)0x10c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x10c + (int)ar4));
  }
  iVar2 = (int)0x10c;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c113124\n.set _FUN_8c113124, _FUN_8c113124_def\n");
//@unit 8c113132
#include "../decls.h"
int FUN_8c113132_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x10c + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)0x110 + (int)unaff_r14));
  }
  if (*(int *)((int)0x10c + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x10c + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)0x10c;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}

__asm__(".globl _FUN_8c113132\n.set _FUN_8c113132, _FUN_8c113132_def\n");
//@unit 8c11318e
#include "../decls.h"
undefined4 FUN_8c11318e_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(ar4 + 0x47);
  iVar9 = *ar4;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(iVar9 + 0x10))(iVar9,(uVar8 + 1) * 4,0);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,ar4[0x46],ar6,ar7);
      (**(code **)(iVar9 + 0x18))(iVar9,ar4[0x46]);
    }
    ar4[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(iVar9,iVar3 * 0xc);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (ar5 != (int *)0x0) {
        *ar5 = (int)piVar4;
        piVar4[1] = (int)ar5;
      }
      uVar10 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar10 = uVar10 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar10 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(ar4[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(ar4 + 0x47) = uVar1 + 1;
      if (ar4[0x49] == 0) {
        ar4[0x49] = (int)piVar4;
      }
      ar4[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(ar4,2,ar6,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11318e\n.set _FUN_8c11318e, _FUN_8c11318e_def\n");
//@unit 8c11319e
#include "../decls.h"
undefined4 FUN_8c11319e_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,int ain0)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3;
  int *piVar6;
  uint uVar7;
  int *unaff_r10;
  uint uVar8;
  int a4;
  uint uVar9;
  int *unaff_r14;
  
  uVar1 = *(ushort *)(ain0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar8 = (uint)uVar1;
  iVar3 = (**(code **)(a4 + 0x10))(a4,(uVar8 + 1) * 4,ar6,ar7);
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      memmove(iVar3,unaff_r14[0x46],ar6,ar7);
      (**(code **)(a4 + 0x18))(a4,unaff_r14[0x46],ar6,ar7);
    }
    unaff_r14[0x46] = iVar3;
    iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
    piVar4 = (int *)(*extraout_r3)(a4,iVar3 * 0xc,ar6,ar7);
    if (piVar4 != (int *)0x0) {
      iVar3 = libgcc_divide_helper_01051c((uint)*(ushort *)(unaff_r14 + 0x79),0xc);
      uVar7 = iVar3 - 1;
      if (unaff_r10 != (int *)0x0) {
        *unaff_r10 = (int)piVar4;
        piVar4[1] = (int)unaff_r10;
      }
      uVar9 = 0;
      piVar6 = piVar4;
      piVar2 = piVar4;
      if (uVar7 != 0) {
        do {
          uVar9 = uVar9 + 1;
          *piVar6 = (int)(piVar2 + 3);
          piVar2[4] = (int)piVar6;
          piVar6 = piVar6 + 3;
          piVar2 = piVar2 + 3;
        } while (uVar9 < uVar7);
      }
      piVar4[uVar7 * 3] = 0;
      *(int **)(unaff_r14[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(unaff_r14 + 0x47) = uVar1 + 1;
      if (unaff_r14[0x49] == 0) {
        unaff_r14[0x49] = (int)piVar4;
      }
      unaff_r14[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = FUN_8c1204c4(unaff_r14,2,ar6,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11319e\n.set _FUN_8c11319e, _FUN_8c11319e_def\n");
//@unit 8c1132cc
#include "../decls.h"
int FUN_8c1132cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(short *)((int)0x11c + (int)ar4) != 0) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x118 + (int)ar4) + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)0x11c + (int)ar4));
  }
  if (*(int *)((int)0x118 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x118 + (int)ar4));
  }
  iVar2 = (int)0x118;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(iVar2 + 4 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + 8 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + 0xc + (int)ar4) = 0;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132cc\n.set _FUN_8c1132cc, _FUN_8c1132cc_def\n");
//@unit 8c1132da
#include "../decls.h"
int FUN_8c1132da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint unaff_r11;
  uint uVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(ushort *)(in_r0 + (int)unaff_r14)) {
    do {
      (**(code **)(iVar2 + 0x18))
                (iVar2,*(undefined4 *)(*(int *)((int)0x118 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)((int)0x11c + (int)unaff_r14));
  }
  if (*(int *)((int)0x118 + (int)unaff_r14) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x118 + (int)unaff_r14),ar6,ar7);
  }
  iVar2 = (int)0x118;
  *(uint *)(iVar2 + (int)unaff_r14) = unaff_r11;
  *(short *)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
  *(uint *)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
  *(uint *)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132da\n.set _FUN_8c1132da, _FUN_8c1132da_def\n");
//@unit 8c113354
#include "../decls.h"
uint * FUN_8c113354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar8 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar7 = *(int *)(*(int *)(ar4 + 0x10c) + uVar8 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(uint *)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 4) = uVar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c113354\n.set _FUN_8c113354, _FUN_8c113354_def\n");
//@unit 8c11335c
#include "../decls.h"
uint * FUN_8c11335c_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar7 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x110)) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 0x10c) + uVar7 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(uint *)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 4) = ar6;
  }
  puVar5 = (uint *)**(undefined4 **)(ar4 + 0x10c);
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(uint *)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c11335c\n.set _FUN_8c11335c, _FUN_8c11335c_def\n");
//@unit 8c1133f6
#include "../decls.h"
undefined4 FUN_8c1133f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_8c113124(ar4,ar5,ar6,ar7);
  uVar2 = 0;
  iVar1 = FUN_8c112fd8(ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c112c90(ar4,uVar2,ar6,ar7);
    uVar2 = 0;
    iVar1 = FUN_8c112b6e(ar4,0,ar6,ar7);
    if (iVar1 != 0) {
      FUN_8c112ec6(ar4,uVar2,ar6,ar7);
      iVar1 = FUN_8c112d82(ar4,0,ar6,ar7);
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c1133f6\n.set _FUN_8c1133f6, _FUN_8c1133f6_def\n");
//@unit 8c11346c
#include "../decls.h"
uint FUN_8c11346c_def(int ar4,ushort *ar5,int ar6,int *ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uStack_20;
  
  if (*(int *)(ar4 + 0x30) == 1) {
    iVar11 = *(int *)(ar4 + 0x54);
    uStack_20 = 0;
    uVar3 = (uint)*(ushort *)(0xe4 + ar4);
    if (*(short *)(ar4 + 0x50) != 0) {
      do {
        puVar6 = *(ushort **)(iVar11 + 0xc);
        uVar1 = *puVar6 >> 2;
        if (*(char *)(ar6 + (uint)uVar1) == '\0') {
          uVar3 = uVar3 + 1;
          *(undefined1 *)(ar6 + (uint)uVar1) = 1;
          ar5[uVar3] = uVar1;
        }
        puVar8 = puVar6 + 1;
        if ((*puVar6 & 1) == 0) {
          uVar1 = *puVar8;
          ar7 = (int *)(uint)(uVar1 >> 2);
          if (*(char *)(ar6 + (int)ar7) == '\0') {
            uVar3 = uVar3 + 1;
            *(char *)(ar6 + (int)ar7) = '\x01';
            ar5[uVar3] = uVar1 >> 2;
          }
          if ((*puVar8 & 1) != 0) {
            puVar7 = (uint *)(*(int *)(puVar6 + 2) * 4 + *(int *)(0x98 + ar4));
            piVar10 = (int *)puVar7[1];
            ar7 = (int *)*puVar7;
            while (ar7 < piVar10) {
              piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
              iVar2 = *ar7;
              ar7 = ar7 + 1;
              piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
              while (piVar9 < piVar4) {
                iVar2 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
                if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                  uVar3 = uVar3 + 1;
                  *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                  ar5[uVar3] = uVar1;
                }
              }
            }
          }
        }
        else {
          puVar7 = (uint *)(*(int *)puVar8 * 4 + *(int *)(0x98 + ar4));
          piVar10 = (int *)puVar7[1];
          ar7 = (int *)*puVar7;
          while (ar7 < piVar10) {
            piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
            iVar2 = *ar7;
            ar7 = ar7 + 1;
            piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
            while (piVar9 < piVar4) {
              iVar2 = *piVar9;
              piVar9 = piVar9 + 1;
              uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
              if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                uVar3 = uVar3 + 1;
                *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                ar5[uVar3] = uVar1;
              }
            }
          }
        }
        uStack_20 = uStack_20 + 1;
        iVar11 = *(int *)(iVar11 + 0x18);
      } while (uStack_20 < *(ushort *)(ar4 + 0x50));
    }
    uVar5 = (uint)(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1);
    if (uVar5 - uVar3 < (uint)*(ushort *)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    if (uVar3 == uVar5) {
      memset(ar6,0,(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1) + 1,ar7);
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    *ar5 = (ushort)uVar3;
  }
  else if (*(int *)(ar4 + 0x30) == 0) {
    if (*(ushort *)(ar4 + 0x50) < *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 2) {
      *(undefined4 *)(ar4 + 0x30) = 1;
    }
    uVar1 = *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1;
    uVar3 = (uint)uVar1;
    *ar5 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11346c\n.set _FUN_8c11346c, _FUN_8c11346c_def\n");
//@unit 8c11372e
#include "../decls.h"
undefined4 FUN_8c11372e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uStack_2c;
  uint uStack_28;
  
  iVar9 = 0;
  *(undefined4 *)((int)0x1ac + (int)ar4) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0xd) = 0;
  iVar2 = (int)0x150;
  *(undefined4 *)(iVar2 + (int)ar4) = 0;
  *(undefined4 *)(iVar2 + -0x24 + (int)ar4) = 0xffffffff;
  iVar2 = (int)0x1c4;
  *(undefined2 *)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(iVar2 + -0x2a + (int)ar4) = 0;
  ar4[0xc] = 1;
  *(undefined4 *)(iVar2 + -0x28 + (int)ar4) = 0;
  if (*(char *)(iVar2 + -0x70 + (int)ar4) != '\0') {
    *(undefined1 *)((int)0x154 + (int)ar4) = 0;
    uVar3 = FUN_8c1133f6(ar4,ar5,ar6,ar7);
    if ((uVar3 & 0xff) != 0) {
      return 1;
    }
  }
  piVar4 = (int *)FUN_8c113354(ar4,ar5,ar6,ar7);
  piVar4[1] = 0;
  uVar3 = FUN_8c112d00(ar4,ar5,ar6,ar7);
  if ((uVar3 & 0xff) == 0) {
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      FUN_8c1157c0(ar4,ar5,ar6,ar7);
    }
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c117bac)) {
      FUN_8c115778(ar4,ar5,ar6,ar7);
    }
    iVar2 = 0;
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      iVar11 = ar4[0x15];
      uStack_2c = 0;
      if (*(int *)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)0x148 + (int)ar4) + uStack_2c * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x10) = 0;
              iVar9 = (int)0xac;
              *(int *)(iVar11 + 0x14) = *(int *)((int)0xa4 + (int)ar4) + -4;
              *(uint *)(iVar11 + 0x1c) = *(int *)(iVar9 + (int)ar4) + uStack_2c * 4;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar8 = FUN_8c112b6e(ar4,iVar11,ar6,ar7);
              }
              else {
                iVar8 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar8;
            }
          }
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < *(uint *)((int)0x144 + (int)ar4));
      }
    }
    else if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c119320)) {
      iVar6 = *(int *)((int)0x1b4 + (int)ar4);
      iVar8 = ar4[0x10];
      uVar3 = 0;
      iVar11 = ar4[0x15];
      if (ar4[0x10] != 0) {
        do {
          iVar9 = iVar11;
          *(uint *)(iVar9 + 0xc) = uVar3 * 2 + ar4[0x12];
          *(undefined4 *)(iVar9 + 0x10) = 0;
          uVar1 = 0x77ff;
          if (uVar3 == iVar8 - iVar6) {
            uVar1 = 0;
          }
          *(undefined2 *)(iVar9 + 2) = uVar1;
          *(int **)(iVar9 + 8) = piVar4;
          *(int **)(iVar9 + 4) = piVar4;
          *(undefined4 *)(iVar9 + 0x14) = 0;
          if (*(int *)(iVar9 + 0x18) == 0) {
            iVar11 = FUN_8c112b6e(ar4,iVar9,ar6,ar7);
          }
          else {
            iVar11 = *(int *)(iVar9 + 0x18);
          }
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar3 < (uint)ar4[0x10]);
      }
      *piVar4 = iVar2;
    }
    else {
      iVar11 = ar4[0x15];
      if (ar4[0x13] == 0) {
        iVar8 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0x10] << 2,ar6,ar7);
        ar4[0x13] = iVar8;
        if (ar4[0x13] == 0) {
          FUN_8c1204c4(ar4,2,ar6,ar7);
          return 1;
        }
      }
      iVar8 = ar4[0x10] << 2;
      memset(ar4[0x13],0,iVar8,ar7);
      uStack_28 = 0;
      if (*(int *)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(*(int *)((int)0x148 + (int)ar4) + uStack_28 * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(*(int *)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = *(int **)((uVar7 + 1) * 4 + ar4[0x11]);
            for (piVar10 = *(int **)(uVar7 * 4 + ar4[0x11]); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined4 *)(iVar11 + 0x10) = 0;
              *(undefined2 *)(iVar11 + 2) = 0;
              *(int **)(iVar11 + 8) = piVar4;
              *(undefined4 *)(iVar11 + 0x14) = 0;
              *(int *)(ar4[0x13] + *piVar10 * 4) = iVar11;
              if (*(int *)(iVar11 + 0x18) == 0) {
                iVar6 = FUN_8c112b6e(ar4,iVar11,iVar8,ar7);
              }
              else {
                iVar6 = *(int *)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar6;
            }
          }
          uStack_28 = uStack_28 + 1;
        } while (uStack_28 < *(uint *)((int)0x144 + (int)ar4));
      }
    }
    iVar11 = 0;
    iVar8 = 0;
    *piVar4 = *piVar4 + iVar2;
    ar4[0x18] = iVar9;
    *(short *)(ar4 + 0x14) = (short)iVar2;
    iVar9 = (int)0x160;
    *(undefined2 *)(iVar9 + -2 + (int)ar4) = *(undefined2 *)(iVar9 + (int)ar4);
    *(undefined1 *)(iVar9 + -4 + (int)ar4) = 0;
    do {
      iVar9 = (int)0x184;
      iVar8 = iVar8 + 1;
      *(undefined4 *)((int)ar4 + iVar11 + 0x170) = 0;
      *(undefined4 *)((int)ar4 + iVar11 + iVar9) = 0;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 5);
    *(undefined1 *)((int)0x198 + (int)ar4) = 0;
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11372e\n.set _FUN_8c11372e, _FUN_8c11372e_def\n");
//@unit 8c113ac8
#include "../decls.h"
int FUN_8c113ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  
  iVar1 = (int)0x9c;
  uVar8 = 0;
  uVar5 = (uint)0x80;
  puVar11 = *(uint **)(iVar1 + ar4);
  piVar6 = *(int **)(iVar1 + -4 + ar4);
  iVar1 = iVar1 + -0xc;
  puVar9 = *(uint **)(iVar1 + ar4);
  puVar10 = puVar9;
  if (*(int *)(ar4 + 0x38) != 0) {
    do {
      *piVar6 = (int)puVar11;
      piVar6 = piVar6 + 1;
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar12 = *puVar10;
      puVar7 = puVar9 + uVar4;
joined_r0x8c113afe:
      if (uVar4 < uVar12) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        iVar1 = *(int *)(0xc0 + ar4);
        uVar4 = uVar4 + 1;
        if ((*(ushort *)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(int *)(0x94 + ar4);
  uVar2 = -(uVar3 & 7);
  if ((int)uVar2 < 0) {
    uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = uVar5 << (uVar2 & 0x1f);
  }
  if ((*(byte *)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
LAB_8c113b32:
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
  }
  goto joined_r0x8c113afe;
}

__asm__(".globl _FUN_8c113ac8\n.set _FUN_8c113ac8, _FUN_8c113ac8_def\n");
//@unit 8c113b54
#include "../decls.h"
int FUN_8c113b54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = *(undefined4 **)(iVar1 + ar4);
  *puVar3 = *(undefined4 *)(ar4 + 0x38);
  puVar3[1] = *(undefined4 *)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(undefined4 *)(ar4 + 0x44);
  puVar3[3] = *(undefined4 *)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(undefined4 *)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(undefined4 *)(iVar1 + ar4);
  puVar3[6] = *(undefined4 *)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[8] = *(undefined4 *)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(undefined4 *)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(undefined4 *)(iVar2 + ar4);
  puVar3[0xb] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(undefined4 *)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(undefined4 *)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(undefined4 *)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c113b54\n.set _FUN_8c113b54, _FUN_8c113b54_def\n");
//@unit 8c113bcc
#include "../decls.h"
int FUN_8c113bcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)0xfc;
  puVar2 = *(undefined4 **)(iVar1 + ar4);
  *(undefined4 *)(ar4 + 0x38) = *puVar2;
  *(undefined4 *)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(undefined4 *)(ar4 + 0x44) = puVar2[2];
  *(undefined4 *)(ar4 + 0x48) = puVar2[3];
  *(undefined4 *)(ar4 + 0xc0) = puVar2[4];
  *(undefined4 *)(0x1c0 + ar4) = puVar2[5];
  iVar1 = (int)0x98;
  *(undefined4 *)(iVar1 + ar4) = puVar2[6];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)0x148;
  *(undefined4 *)(iVar1 + ar4) = puVar2[8];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)0xa8;
  *(undefined4 *)(iVar1 + ar4) = puVar2[10];
  *(undefined4 *)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(undefined4 *)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(undefined4 *)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(undefined4 *)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(int *)(iVar1 + -4 + ar4) =
       (*(int *)(ar4 + 0x38) + *(int *)(iVar1 + 0x10 + ar4) + 1) * 4 + *(int *)(iVar1 + -8 + ar4);
  *(undefined4 *)(iVar1 + 0x60 + ar4) = *(undefined4 *)(ar4 + 0x38);
  return iVar1 + 0x60;
}

__asm__(".globl _FUN_8c113bcc\n.set _FUN_8c113bcc, _FUN_8c113bcc_def\n");
//@unit 8c113c46
#include "../decls.h"
int FUN_8c113c46_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
  (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xc0 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1c0 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x98 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x9c + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x148 + (int)ar4));
  (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x100 + (int)ar4));
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa0 + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xac + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa8 + (int)ar4));
  }
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c117bac)) {
                    
                    
    uVar1 = (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xb0 + (int)ar4));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c46\n.set _FUN_8c113c46, _FUN_8c113c46_def\n");
//@unit 8c113c4e
#include "../decls.h"
int FUN_8c113c4e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x11],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xc0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1c0 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x98 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x9c + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x148 + (int)unaff_r13),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x100 + (int)unaff_r13),ar6,ar7);
  if (*(undefined **)((int)0x130 + (int)unaff_r13) == (&FUN_8c11617a)) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa0 + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r13),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa8 + (int)unaff_r13),ar6,ar7);
  }
  if (*(undefined **)((int)0x130 + (int)unaff_r13) == (&FUN_8c117bac)) {
                    
                    
    uVar1 = (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r13));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c4e\n.set _FUN_8c113c4e, _FUN_8c113c4e_def\n");
//@unit 8c113d68
#include "../decls.h"
int FUN_8c113d68_def(int *ar4,int *ar5,int *ar6,undefined4 ar7,ushort *s0,ushort *s4,int s8)

{
  short sVar1;
  int in_r0;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short sStack_1a;
  
  puVar3 = (ushort *)*ar6;
  piVar4 = (int *)*ar4;
  psVar6 = (short *)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (short *)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    sStack_1a = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)sStack_1a;
    *(undefined4 *)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0;
}

__asm__(".globl _FUN_8c113d68\n.set _FUN_8c113d68, _FUN_8c113d68_def\n");
//@unit 8c113dfa
#include "../decls.h"
int FUN_8c113dfa_def(int *ar4,int *ar5,int *ar6,int ar7,undefined4 s0)

{
  ushort uVar1;
  int a6;
  int a4;
  undefined4 *puVar2;
  
  uVar1 = *(ushort *)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  memmove(a4,*ar4 * 2 + ar7,a6,ar7);
  puVar2 = (undefined4 *)(a4 + a6);
  *(ushort *)((int)puVar2 + -2) = *(ushort *)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)(*(uint*)((uchar*)&s0+2));
}

__asm__(".globl _FUN_8c113dfa\n.set _FUN_8c113dfa, _FUN_8c113dfa_def\n");
//@unit 8c113e64
#include "../decls.h"
int FUN_8c113e64_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = (uint *)(*(int *)(*(int *)(ar4 + 0x44) + ar5 * 4) + 4);
  iVar4 = ar6 - *(int *)(ar4 + 0x48);
  uVar1 = *puVar3;
  while (uVar1 < (uint)((int)(iVar4 + (uint)(iVar4 < 0)) >> 1)) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = *puVar3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c113e64\n.set _FUN_8c113e64, _FUN_8c113e64_def\n");
//@unit 8c113e98
#include "../decls.h"
undefined4 FUN_8c113e98_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  short *psVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  int *ar7_00;
  int *piVar20;
  int a4;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar24;
  uint *puStack_8c;
  short *psStack_88;
  int *piStack_84;
  int *piStack_7c;
  int *piStack_74;
  int *piStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  int iStack_60;
  ushort *puStack_5c;
  int *piStack_58;
  uint *puStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  short *psStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  puStack_5c = (ushort *)(uint)ar4[0x41];
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)(uint)ar4[0x11];
  puStack_54 = (uint *)*piVar20;
  a4 = *ar4;
  iStack_34 = 0;
  iStack_40 = 0;
  iStack_38 = ar4[0x3b];
  iVar12 = ar4[0x3c];
  iStack_4c = 0;
  iStack_60 = 0;
  piStack_30 = (int *)(uint)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar17 = ar5; iVar17 != 0; iVar17 = *(int *)(iVar17 + 0x10)) {
    iStack_34 = iStack_34 + 1;
    for (piVar16 = *(int **)(iVar17 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[4]) {
      iVar13 = piVar20[*piVar16 + 1] - piVar20[*piVar16];
      if (iVar13 < 0) {
        iVar13 = iVar13 + 3;
      }
      uVar14 = iVar13 >> 2;
      iVar21 = iVar21 + uVar14;
      if (uVar22 < uVar14) {
        uVar22 = uVar14;
      }
    }
  }
  iVar13 = (**(code **)(a4 + 0x10))(a4,(iVar21 + 1) * 0xc,0,ar7);
  iVar21 = (**(code **)(a4 + 0x10))(a4,iVar21 * uVar22 * 6,iVar17,ar7);
  *(undefined2 *)(iVar13 + 8) = 0xffff;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(iVar13 + 8); uVar5 != 0xffff;
          uVar5 = *(ushort *)((uint)uVar5 * 6 + iVar21 + 2)) {
        iStack_40 = iStack_40 + 1;
      }
      piVar10 = (int *)(uVar8 - 1);
      piStack_50 = (int *)(iVar13 + 0xc);
      iStack_6c = (uint)uVar7 - iStack_40;
      piVar15 = piStack_50;
      piVar16 = piStack_50;
      piVar20 = piVar10;
      piStack_84 = piVar10;
      for (piVar24 = (int *)0x1; piVar24 <= piVar10; piVar24 = (int *)((int)piVar24 + 1)) {
        uVar22 = (uint)*(ushort *)(piVar16 + 2);
        if (uVar22 != 0) {
          iStack_4c = iStack_4c + (uint)puStack_5c[piVar15[1] * 6 + 2];
          uVar7 = puStack_5c[piVar15[1] * 6 + 4];
          while (uVar22 != 0xffff) {
            uVar8 = puStack_5c
                    [*(int *)((uint)*(ushort *)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                    uVar7 * (short)ar4[0x3d];
            puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
            iVar17 = (uint)*(ushort *)((uint)puVar19[1] * 2 + iVar12) -
                     (uint)*(ushort *)((uint)*puVar19 * 2 + iVar12);
            if (iVar17 == 0) {
              uVar8 = 0xffff;
            }
            else {
              iStack_4c = iStack_4c + iVar17;
              piStack_84 = (int *)((int)piStack_84 + 1);
              iStack_6c = iStack_6c + 1;
              puVar19 = (ushort *)((uint)uVar8 * 2 + iVar12);
              piVar20 = (int *)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
            }
            iVar17 = uVar22 * 6 + iVar21;
            *(ushort *)(iVar17 + 4) = uVar8;
            uVar22 = (uint)*(ushort *)(iVar17 + 2);
          }
        }
        piVar16 = piVar16 + 3;
        piVar15 = piVar15 + 3;
      }
      piStack_64 = piVar10;
      piStack_74 = (int *)(**(code **)(a4 + 0x10))(a4,((int)piStack_84 + 1U) * 4,piVar15,piVar16);
      piStack_2c = piStack_74;
      puStack_54 = (uint *)(**(code **)(a4 + 0x10))(a4,iStack_6c << 2,piVar15,piVar16);
      puVar19 = (ushort *)0x2;
      psStack_88 = (short *)(**(code **)(a4 + 0x14))(a4,piStack_84,2,piVar16);
      psStack_44 = psStack_88;
      iVar17 = (**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 1,puVar19,piVar16);
      ar4[0x70] = iVar17;
      piStack_70 = (int *)(**(code **)(a4 + 0x10))
                                    (a4,((int)piStack_84 + (int)piVar20 + 2) * 4,puVar19,piVar16);
      piStack_68 = piStack_70 + (int)piStack_84 + 1;
      piStack_58 = piStack_70;
      iStack_48 = (**(code **)(a4 + 0x10))(a4,((int)piVar20 * 2 + iStack_4c) * 2,puVar19,piVar16);
      iStack_24 = iStack_48;
      piVar20 = (int *)(**(code **)(a4 + 0x10))(a4,iStack_40 << 2,puVar19,piVar16);
      piStack_28 = piVar20;
      piVar15 = (int *)(**(code **)(a4 + 0x10))(a4,(int)piStack_84 << 3,puVar19,piVar16);
      ar4[0x40] = (int)piVar15;
      iStack_60 = 0;
      uVar7 = *(ushort *)(iVar13 + 8);
      while (uVar7 != 0xffff) {
        puVar19 = (ushort *)((uint)uVar7 * 6 + iVar21);
        piVar16 = (int *)(uint)*puVar19;
        *piVar20 = (int)piVar16 + -1;
        psStack_88[(int)piVar16 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar7 = puVar19[1];
      }
      puStack_8c = puStack_54;
      piVar20 = piStack_50;
      for (piStack_3c = (int *)0x1; piStack_3c <= piVar10; piStack_3c = (int *)((int)piStack_3c + 1)
          ) {
        iStack_4c = CONCAT22((*(uint*)((uchar*)&iStack_4c+2)),*(undefined2 *)(ar4[0x30] + *piVar20 * 2));
        uVar7 = *(ushort *)(piVar20 + 2);
        *piVar15 = *piVar20;
        uVar22 = (uint)uVar7;
        piVar15[1] = piVar20[1];
        piVar15 = piVar15 + 2;
        *piStack_74 = (int)puStack_8c;
        *piStack_68 = iStack_60;
        *piStack_70 = (int)piStack_68;
        puVar19 = (ushort *)&iStack_48;
        piVar16 = piStack_30;
        piStack_68 = piStack_68 + 1;
        FUN_8c113dfa(puStack_5c + piVar20[1] * 6,&iStack_60,puVar19,piStack_30);
        if (uVar22 != 0) {
          if (uVar22 == 0xffff) {
            *psStack_88 = 2;
          }
          else if (*psStack_88 != 1) {
            *psStack_88 = (short)iStack_4c;
          }
          psStack_88 = psStack_88 + 1;
          piVar24 = piStack_64;
          for (; piStack_64 = piVar24, uVar22 != 0xffff;
              uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            if (*(short *)(uVar22 * 6 + iVar21 + 4) == -1) {
              *puStack_8c = *(ushort *)(uVar22 * 6 + iVar21) - 1;
            }
            else {
              piStack_64 = (int *)((int)piVar24 + 1);
              *puStack_8c = (uint)piVar24;
            }
            puStack_8c = puStack_8c + 1;
            piVar24 = piStack_64;
          }
        }
        piVar20 = piVar20 + 3;
        piStack_74 = piStack_74 + 1;
        piStack_70 = piStack_70 + 1;
      }
      *piStack_74 = (int)puStack_8c;
      *piStack_70 = (int)piStack_68;
      piVar24 = piStack_50;
      piStack_74 = piStack_74 + 1;
      piStack_70 = piStack_70 + 1;
      piStack_64 = piVar10;
      for (piStack_7c = (int *)0x1; piStack_7c <= piVar10; piStack_7c = (int *)((int)piStack_7c + 1)
          ) {
        uVar22 = (uint)*(ushort *)(piVar24 + 2);
        puVar1 = puStack_8c;
        piVar2 = piStack_74;
        piVar3 = piStack_70;
        ar7_00 = piStack_64;
        if (uVar22 != 0) {
          for (; puStack_8c = puVar1, piStack_74 = piVar2, piStack_70 = piVar3, piStack_64 = ar7_00,
              uVar22 != 0xffff; uVar22 = (uint)*(ushort *)(uVar22 * 6 + iVar21 + 2)) {
            uVar7 = *(ushort *)(uVar22 * 6 + iVar21 + 4);
            piVar20 = (int *)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
            if (uVar7 != 0xffff) {
              *piVar15 = -1;
              piVar15[1] = -1;
              piVar15 = piVar15 + 2;
              puStack_5c = (ushort *)((uint)uVar7 * 2 + iVar12);
              puVar19 = (ushort *)&iStack_48;
              piStack_64 = (int *)((int)ar7_00 + 1);
              FUN_8c113d68(&piStack_68,&iStack_60,puVar19,ar7_00,(uint)*puStack_5c * 2 + iVar12,
                           (uint)puStack_5c[1] * 2 + iVar12,iStack_38,piVar20);
              piStack_70 = piVar3 + 1;
              *piVar3 = (int)piStack_68;
              puStack_8c = puVar1 + 1;
              *puVar1 = *(ushort *)(uVar22 * 6 + iVar21) - 1;
              piStack_74 = piVar2 + 1;
              *piVar2 = (int)puStack_8c;
              piVar16 = ar7_00;
            }
            puVar1 = puStack_8c;
            piVar2 = piStack_74;
            piVar3 = piStack_70;
            ar7_00 = piStack_64;
          }
        }
        piVar24 = piVar24 + 3;
      }
      *piStack_68 = iStack_60;
      uVar22 = ar4[0x56];
      if (uVar22 < (uint)(iStack_34 * 0x14)) {
        uVar22 = iStack_34 * 0x14;
      }
      ar4[0x56] = uVar22;
      ar4[0x42] = (int)piVar10;
      ar4[0x51] = iStack_40;
      ar4[0xe] = (int)piStack_84;
      ar4[0x11] = (int)piStack_58;
      ar4[0x12] = iStack_24;
      ar4[0x30] = (int)psStack_44;
      ar4[0x26] = (int)piStack_2c;
      ar4[0x27] = (int)puStack_54;
      ar4[0x2d] = iStack_6c;
      piStack_68 = piStack_68 + 1;
      FUN_8c112b1c(ar4,(int)*(short *)((int)ar4 + 0x1be),puVar19,piVar16);
      ar4[0x52] = (int)piStack_28;
      (**(code **)(a4 + 0x18))(a4,iVar13,puVar19,piVar16);
      (**(code **)(a4 + 0x18))(a4,iVar21,puVar19,piVar16);
      if ((((code *)(uint)ar4[0x4c] == FUN_8c11617a) &&
          (uVar22 = FUN_8c1155a0(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)) ||
         (((code *)(uint)ar4[0x4c] == FUN_8c117bac &&
          (uVar22 = FUN_8c115732(ar4,iVar21,puVar19,piVar16), (uVar22 & 0xff) != 0)))) {
        uVar11 = 1;
      }
      else {
        *(undefined1 *)(ar4 + 0x1f) = 1;
        uVar11 = 0;
      }
      return uVar11;
    }
    piStack_70 = (int *)0x0;
    piStack_84 = (int *)0x0;
    piVar16 = *(int **)(ar5 + 0xc);
    uVar22 = 0;
    if (piVar16 != (int *)0x0) {
      do {
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        while (uVar14 = (uint)uVar5, uVar14 != 0xffff) {
          if ((int *)*(int *)((uint)*(ushort *)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) ==
              piStack_70) {
            uVar22 = (uint)*(ushort *)(uVar14 * 6 + iVar21);
            piVar16 = (int *)piVar16[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(uVar14 * 6 + iVar21 + 2);
        }
        if (uVar22 == 0) {
          ar7 = 1;
        }
        else {
          iVar17 = piVar20[*(int *)(uVar22 * 0xc + iVar13) + 1] -
                   piVar20[*(int *)(uVar22 * 0xc + iVar13)];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          ar7 = iVar17 >> 2;
        }
LAB_8c11405a:
      } while (uVar14 != 0xffff);
      uVar5 = *(ushort *)(uVar22 * 0xc + iVar13 + 8);
      uVar14 = ar7;
      while( true ) {
        iVar17 = piVar20[(int)piStack_84 + 1] - piVar20[(int)piStack_84];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        ar7 = iVar17 >> 2;
        psStack_44 = (short *)(ar7 - 1);
        piStack_58 = (int *)(uint)uVar8;
        uVar18 = 0;
        uVar4 = uVar7;
        if (ar7 != 0) {
          do {
            psVar9 = (short *)((uint)uVar4 * 6 + iVar21);
            uVar7 = uVar5;
            for (piStack_7c = (int *)0x0; piStack_7c < uVar14;
                piStack_7c = (int *)((int)piStack_7c + 1)) {
              *psVar9 = uVar8 + (short)uVar18;
              uVar6 = uVar7;
              if (uVar5 == 0xffff) {
                uVar6 = 0xffff;
              }
              psVar9[1] = uVar6;
              uVar7 = uVar7 + 1;
              psVar9 = psVar9 + 3;
            }
            if ((short *)uVar18 == psStack_44) {
              for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                *(ushort *)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
              }
            }
            uVar7 = uVar4 + (short)uVar14;
            piVar15 = (int *)(((int)piStack_58 + uVar18) * 0xc + iVar13);
            piVar15[1] = (int)piStack_70 + uVar18;
            uVar18 = uVar18 + 1;
            *piVar15 = (int)piStack_84;
            uVar5 = uVar4;
            uVar4 = uVar7;
          } while (uVar18 < ar7);
        }
        (*(uint*)((uchar*)&psStack_88+0)) = (short)ar7;
        uVar8 = (short)psStack_88 + uVar8;
        piVar16 = (int *)piVar16[4];
        if (piVar16 == (int *)0x0) break;
        piStack_84 = (int *)*piVar16;
        iVar17 = piVar20[(int)piStack_84] - (int)puStack_54;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        piStack_70 = (int *)(iVar17 >> 2);
        uVar5 = 0xffff;
        uVar22 = (uint)piStack_58;
        uVar14 = ar7;
      }
      uVar14 = 0;
      uVar22 = (uint)piStack_58;
      if (ar7 != 0) {
        do {
          iVar17 = uVar22 * 0xc;
          uVar22 = uVar22 + 1;
          uVar14 = uVar14 + 1;
          *(undefined2 *)(iVar17 + iVar13 + 8) = 0xffff;
        } while (uVar14 < ar7);
      }
    }
    ar5 = *(int *)(ar5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c113e98\n.set _FUN_8c113e98, _FUN_8c113e98_def\n");
//@unit 8c114774
#include "../decls.h"
undefined4 FUN_8c114774_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *ar4_00;
  int *a6;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int a5;
  int ar6_00;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int a4;
  
  a4 = *ar4;
  iVar8 = 0;
  puVar7 = *(undefined4 **)((int)0x98 + (int)ar4);
  ar4_00 = (ushort *)(**(code **)(a4 + 0x14))(a4,ar4[0xe] << 1,1,ar7);
  ar6_00 = ar4[0xe] << 1;
  memmove(ar4_00,*(undefined4 *)((int)0xc0 + (int)ar4),ar6_00,ar7);
  uVar1 = *ar4_00;
  while ((uVar1 & 1) == 0) {
    iVar8 = iVar8 + 1;
    uVar1 = ar4_00[iVar8];
  }
  ar4_00[iVar8] = ar4_00[iVar8] & (ushort)0xfffe;
  iVar3 = iVar8 * 4;
  uVar4 = *(undefined4 *)(*(int *)((int)0x98 + (int)ar4) + iVar3);
  uVar9 = *(int *)((iVar8 + 1) * 4 + *(int *)((int)0x90 + (int)ar4)) -
          *(int *)(iVar3 + *(int *)((int)0x90 + (int)ar4));
  a5 = uVar9 * 4;
  a6 = (int *)(**(code **)(a4 + 0x10))(a4,a5,ar6_00,ar7);
  *a6 = iVar8;
  uVar5 = 0;
  do {
    uVar5 = uVar5 + 1;
    *puVar7 = uVar4;
    puVar7 = puVar7 + 1;
  } while (uVar5 <= (uint)ar4[0xe]);
  uVar5 = 0;
  if (uVar9 != 0) {
    do {
      a5 = *(int *)((*(int *)(iVar3 + *(int *)((int)0x90 + (int)ar4)) + uVar5) * 4 +
                   *(int *)((int)0x90 + (int)ar4));
      ar4_00[a5] = ar4_00[a5] | 3;
      uVar6 = uVar5 + 1;
      a6[uVar5] = a5;
      uVar5 = uVar6;
    } while (uVar6 < uVar9);
  }
  puVar2 = (&FUN_8c11617a);
  iVar8 = (int)0x144;
  *(uint *)(iVar8 + (int)ar4) = uVar9;
  *(int **)(iVar8 + 4 + (int)ar4) = a6;
  iVar8 = (int)0xc0;
  *(ushort **)(iVar8 + (int)ar4) = ar4_00;
  *(undefined4 *)(iVar8 + -0xc + (int)ar4) = 0;
  if ((*(undefined **)(iVar8 + 0x70 + (int)ar4) == puVar2) &&
     (uVar5 = FUN_8c1155a0(ar4,a5,a6,ar7), (uVar5 & 0xff) != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c114774\n.set _FUN_8c114774, _FUN_8c114774_def\n");
//@unit 8c1148c4
#include "../decls.h"
int FUN_8c1148c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x148 + (int)ar4),ar6,ar7);
  (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xc0 + (int)ar4),ar6,ar7);
  if (*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) {
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xa8 + (int)ar4),ar6,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xac + (int)ar4),ar6,ar7);
                    
                    
    uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0xa0 + (int)ar4));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c1148c4\n.set _FUN_8c1148c4, _FUN_8c1148c4_def\n");
//@unit 8c11495c
#include "../decls.h"
undefined4 FUN_8c11495c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10;
  int iVar3;
  int *unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  float extraout_fr0_05;
  int extraout_fr0_06;
  float extraout_fr0_07;
  float extraout_fr0_08;
  float extraout_fr0_09;
  float in_fr3;
  float fVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = *unaff_r14;
  *(undefined4 *)(ain0 + (int)unaff_r14) = unaff_r10;
  FUN_8c120550(unaff_r14,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_fr3 = 2.1474836e+09;
  }
  fVar4 = extraout_fr0;
  if (in_fr3 < extraout_fr0) {
    fVar4 = extraout_fr0 + -4.2949673e+09;
  }
  unaff_r14[0x53] = (int)fVar4;
  FUN_8c120550(unaff_r14,0x16,ar6,ar7);
  *(char *)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
  if (*(char *)((int)unaff_r14 + 0x1e6) == '\0') {
    *(char *)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  FUN_8c120550(unaff_r14,0x10,ar6,ar7);
  uVar1 = FUN_8c112a20(unaff_r14,(int)extraout_fr0_01 & 0xffff,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    *(char *)(unaff_r14 + 0x55) = (char)unaff_r10;
    FUN_8c120550(unaff_r14,0x11,ar6,ar7);
    *(short *)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
    if (*(ushort *)(unaff_r14 + 0x79) < 0xfde9) {
      if (*(ushort *)(unaff_r14 + 0x79) < 200) {
        *(undefined2 *)(unaff_r14 + 0x79) = 200;
      }
    }
    else {
      *(undefined2 *)(unaff_r14 + 0x79) = 65000;
    }
    FUN_8c120550(unaff_r14,8,ar6,ar7);
    cVar5 = '\0';
    unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
    FUN_8c120550(unaff_r14,5,ar6,ar7);
    if (cVar5 == '\0') {
      fVar4 = 128.0;
    }
    fVar4 = extraout_fr0_04 * fVar4;
    if (2.1474836e+09 < fVar4) {
      fVar4 = fVar4 + -4.2949673e+09;
    }
    unaff_r14[0x5b] = (int)fVar4;
    FUN_8c120550(unaff_r14,6,ar6,ar7);
    cVar5 = '\0';
    *(short *)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
    FUN_8c120550(unaff_r14,7,ar6,ar7);
    if (cVar5 == '\0') {
      unaff_r14[0x59] = extraout_fr0_06;
    }
    else {
      *(ulonglong *)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06,extraout_fr1);
    }
    FUN_8c120550(unaff_r14,10,ar6,ar7);
    *(short *)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
    FUN_8c120550(unaff_r14,0xf,ar6,ar7);
    *(short *)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
    iVar3 = (**(code **)(iVar3 + 0x10))(iVar3,0x3c,ar6,ar7);
    unaff_r14[0x3f] = iVar3;
    unaff_r14[0x20] = 0;
    unaff_r14[0x13] = 0;
    FUN_8c120550(unaff_r14,0x18,ar6,ar7);
    *(short *)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11495c\n.set _FUN_8c11495c, _FUN_8c11495c_def\n");
//@unit 8c114bd8
#include "../decls.h"
undefined4 FUN_8c114bd8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float extraout_fr0;
  
  uVar1 = (**(code **)(ar5 + 0x2c))(ar5);
  *(undefined2 *)(ar4 + 0xdc) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x30))(ar5);
  *(undefined2 *)(ar4 + 0xde) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0xe0) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x38))(ar5);
  *(undefined2 *)(ar4 + 0xe2) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x34))(ar5);
  *(undefined2 *)(ar4 + 0x1c6) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x20))(ar5);
  *(undefined2 *)(ar4 + 0xe4) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x44))(ar5);
  *(undefined4 *)(ar4 + 0xf4) = uVar2;
  uVar1 = (**(code **)(ar5 + 0x48))(ar5);
  *(undefined2 *)(ar4 + 0xe6) = uVar1;
  uVar2 = (**(code **)(ar5 + 0x88))(ar5);
  *(undefined4 *)(ar4 + 0xe8) = uVar2;
  FUN_8c120550(ar4,0x15,ar6,ar7);
  *(char *)(ar4 + 0xf8) = (char)(int)extraout_fr0;
  if (*(char *)(ar4 + 0xf8) != '\0') {
    uVar2 = (**(code **)(ar5 + 0x8c))(ar5);
    uVar3 = (**(code **)(ar5 + 0xcc))(uVar2);
    *(undefined4 *)(ar4 + 0xec) = uVar3;
    uVar2 = (**(code **)(ar5 + 0xd0))(uVar2);
    *(undefined4 *)(ar4 + 0xf0) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114bd8\n.set _FUN_8c114bd8, _FUN_8c114bd8_def\n");
//@unit 8c114be0
#include "../decls.h"
undefined4 FUN_8c114be0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a5;
  int unaff_r13;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  undefined1 uVar5;
  byte in_FPSCR_CAUSE;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte in_FPSCR_DN;
  byte bVar9;
  byte bVar10;
  byte in_FPSCR_PR;
  
  uVar2 = (**(code **)(unaff_r14 + 0x2c))(ar5,ar5,ar6,ar7);
  *(short *)(0xdc + unaff_r13) = (short)uVar2;
  bVar6 = 0;
  bVar8 = 0;
  bVar10 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x30))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0xde + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar6 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar10 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0xe0 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x38))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0xe2 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x34))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0x1c6 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x20))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0xe4 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x44))(unaff_r14,ar5,ar6,ar7);
  *(undefined4 *)(0xf4 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(unaff_r14 + 0x48))(unaff_r14,ar5,ar6,ar7);
  *(short *)(0xe6 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (**(code **)(0x88 + unaff_r14))(unaff_r14,ar5,ar6,ar7);
  puVar1 = (&FUN_8c120550);
  a5 = 0x15;
  *(undefined4 *)(0xe8 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  (*(code *)puVar1)(unaff_r13,0x15,ar6,ar7);
  iVar3 = (int)0xf8;
  if ((char)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
             0x80000) >> 0x13) == '\0') {
    uVar5 = (undefined1)(int)extraout_fr0;
  }
  else {
    uVar5 = (undefined1)(int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(undefined1 *)(iVar3 + unaff_r13) = uVar5;
  if (*(char *)(iVar3 + unaff_r13) != '\0') {
    uVar2 = (**(code **)(0x8c + unaff_r14))(unaff_r14,a5,ar6,ar7);
    uVar4 = (**(code **)(0xcc + unaff_r14))(uVar2,a5,ar6,ar7);
    *(undefined4 *)(0xec + unaff_r13) = uVar4;
    uVar2 = (**(code **)(0xd0 + unaff_r14))(uVar2,a5,ar6,ar7);
    *(undefined4 *)(0xf0 + unaff_r13) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114be0\n.set _FUN_8c114be0, _FUN_8c114be0_def\n");
//@unit 8c114d30
#include "../decls.h"
int FUN_8c114d30_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  int *piVar12;
  ushort *puVar13;
  int iStack_28;
  int *piStack_24;
  uint uStack_20;
  
  piVar7 = *(int **)(0x104 + ar4);
  iVar2 = (int)0xc8;
  piStack_24 = (int *)(*(int *)(ar4 + 0x38) * 4 + *(int *)(ar4 + 0x44) + 4);
  iVar3 = iVar2 + 0x20;
  iVar9 = *(int *)(iVar3 + ar4);
  piVar12 = (int *)(*(int *)(iVar2 + ar4) * 4 + *(int *)(iVar2 + 8 + ar4));
  uStack_20 = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      iStack_28 = 0;
      puVar13 = (ushort *)(*piVar12 * 2 + *(int *)(0xcc + ar4));
      iVar2 = *(int *)(0xcc + ar4) + *piVar8 * 2;
      puVar10 = (ushort *)(iVar2 + -2);
      *(undefined2 *)((int)piVar7 + 6) =
           *(undefined2 *)(*(int *)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(undefined2 *)(piVar7 + 2) =
           *(undefined2 *)((*(int *)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (ushort *)(iVar2 + -4);
        piVar4 = (int *)((uint)uVar1 * 4 + iVar9);
        iStack_28 = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = piStack_24 + 1;
      *piVar7 = *piStack_24 + iStack_28;
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (int *)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      uStack_20 = uStack_20 + 1;
      piStack_24 = piVar4;
    } while (uStack_20 < ar5);
  }
  iVar2 = 0xfffe;
  uVar11 = 0;
  iVar9 = *piStack_24;
  if (ar6 != 0) {
    do {
      piStack_24 = piStack_24 + 1;
      iVar3 = (int)0xe6;
      iVar6 = *piStack_24;
      *piVar7 = iVar9;
      *(undefined2 *)(piVar7 + 2) = *(undefined2 *)(iVar3 + ar4);
      *(undefined2 *)((int)piVar7 + 6) = *(undefined2 *)(0xe6 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(short *)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c114d30\n.set _FUN_8c114d30, _FUN_8c114d30_def\n");
//@unit 8c114e80
#include "../decls.h"
undefined4 FUN_8c114e80_def(int *ar4,int ar5,undefined4 ar6,short *ar7)

{
  ushort uVar1;
  short sVar2;
  undefined4 *puVar3;
  bool bVar4;
  ushort uVar5;
  int iVar6;
  int *a6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  ushort *puVar14;
  ushort *puVar15;
  int *a5;
  int *piVar16;
  int *piVar17;
  int *a7;
  int iVar18;
  short *psVar19;
  short *psVar20;
  int a4;
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar21;
  bool bVar22;
  undefined4 uStack_54;
  int *piStack_50;
  int *piStack_4c;
  undefined4 *puStack_44;
  ushort *puStack_40;
  int *piStack_2c;
  
  a4 = *ar4;
  iVar18 = ar4[0x3a];
  uVar5 = (short)ar4[0x37] << 2 | 1;
  iVar12 = ar5;
  iVar6 = (**(code **)(ar5 + 0x10))(ar5,ar5,ar6,ar7);
  a6 = (int *)(**(code **)(ar5 + 0x14))(ar5,iVar12,ar6,ar7);
  iVar7 = (**(code **)(ar5 + 0x1c))(ar5,iVar12,ar6,ar7);
  ar4[0x51] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  ar4[0x32] = iVar7;
  iVar7 = (**(code **)(ar5 + 8))(ar5,iVar12,ar6,ar7);
  iVar8 = (**(code **)(ar5 + 0xc))(ar5,iVar12,ar6,ar7);
  ar4[0xe] = iVar8 + iVar7;
  ar4[0xf] = ((iVar8 + iVar7) - 1U >> 3) + 1;
  ar4[0x2f] = iVar6 + (int)a6;
  ar4[0x42] = ar4[0xe];
  uVar9 = FUN_8c1133f6(ar4,iVar12,ar6,ar7);
  if ((uVar9 & 0xff) != 0) {
    return 1;
  }
  puVar10 = (ushort *)(**(code **)(ar5 + 0x34))(ar5,iVar12,ar6,ar7);
  ar4[0x33] = (int)puVar10;
  iVar7 = (**(code **)(ar5 + 0x38))(ar5,iVar12,ar6,ar7);
  ar4[0x34] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x3c))(ar5,iVar12,ar6,ar7);
  ar4[0x35] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x40))(ar5,iVar12,ar6,ar7);
  ar4[0x36] = iVar7;
  iVar7 = (**(code **)(ar5 + 0x28))(ar5,iVar12,ar6,ar7);
  piVar11 = (int *)(**(code **)(ar5 + 0x24))(ar5,iVar12,ar6,ar7);
  piVar17 = (int *)0x0;
  if (piVar11 != (int *)0x0) {
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      piVar17 = (int *)((int)piVar17 + 1);
      iVar7 = iVar7 + (*(int *)((uVar1 + 1) * 4 + iVar18) - *(int *)((uint)uVar1 * 4 + iVar18));
    } while (piVar17 < piVar11);
  }
  ar4[0x10] = iVar7 + (int)piVar11 * -2 + ar4[0x2f] * 3;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x51] << 2,piVar17,ar7);
  ar4[0x52] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xe] << 1,piVar17,ar7);
  ar4[0x70] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + ar4[0x2f] + 2) * 4,piVar17,ar7);
  ar4[0x11] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x10] << 1,piVar17,ar7);
  ar4[0x12] = iVar12;
  if ((((ar4[0x52] != 0) && (ar4[0x70] != 0)) && (ar4[0x11] != 0)) && (ar4[0x12] != 0)) {
    iVar12 = 0;
    puVar10 = (ushort *)(uint)ar4[0x12];
    uStack_54 = -1;
    bVar4 = false;
    puVar14 = (ushort *)(uint)ar4[0x33];
    a5 = (int *)(uint)ar4[0x34];
    a7 = a5 + *a5;
    puVar3 = (undefined4 *)(uint)ar4[0x11];
    piVar16 = (undefined4 *)(uint)ar4[0x11] + ar4[0xe] + 1;
    puStack_40 = puVar14;
    piStack_50 = a5;
    piStack_2c = a7;
    iVar7 = uStack_54;
    for (puVar15 = puVar14; uStack_54 = iVar7, piStack_4c = piVar16, puStack_44 = puVar3,
        puVar15 < puVar14 + (int)piVar11; puVar15 = puVar15 + 1) {
      if (puVar15 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          (*(uint*)((uchar*)&uStack_54+0)) = (ushort)iVar7;
          *puVar10 = (ushort)uStack_54;
          (*(uint*)((uchar*)&uStack_54+2)) = (ushort)((uint)iVar7 >> 0x10);
          puVar10[1] = (*(uint*)((uchar*)&uStack_54+2));
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = a7 == piStack_2c;
        a7 = a7 + 1;
        if (bVar22) {
          piStack_50 = piStack_50 + 1;
          uStack_54 = iVar7 + 1;
          piStack_2c = (int *)(*piStack_50 * 4 + ar4[0x34]);
          puStack_44 = puVar3 + 1;
          *puVar3 = piVar16;
        }
        puStack_40 = puVar14 + *a7;
        piStack_4c = piVar16 + 1;
        *piVar16 = iVar12;
      }
      piVar16 = (int *)((uint)*puVar15 * 4 + iVar18);
      piVar17 = (int *)(piVar16[1] * 2 + iVar18);
      for (a5 = (int *)(*piVar16 * 2 + iVar18 + 4); a5 < piVar17; a5 = (int *)((int)a5 + 2)) {
        iVar12 = iVar12 + 1;
        *puVar10 = (short)*a5 << 2;
        puVar10 = puVar10 + 1;
      }
      puVar3 = puStack_44;
      piVar16 = piStack_4c;
      iVar7 = uStack_54;
    }
    psVar19 = (short *)(uint)ar4[0x35];
    iVar7 = (**(code **)(ar5 + 0x28))(ar5,a5,piVar17,a7);
    ar7 = psVar19 + iVar7;
    piVar11 = (int *)(uint)ar4[0x36];
    piVar16 = piVar11 + *piVar11;
    piVar17 = piVar16;
    psVar20 = psVar19;
    puStack_40 = (ushort *)psVar19;
    do {
      if ((ushort *)psVar20 == puStack_40) {
        if (bVar4) {
          if (*(char *)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          *puVar10 = (ushort)uStack_54;
          puVar10[1] = (*(uint*)((uchar*)&uStack_54+2));
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = piVar16 == piVar17;
        piVar16 = piVar16 + 1;
        if (bVar22) {
          piVar11 = piVar11 + 1;
          uStack_54 = uStack_54 + 1;
          piVar17 = (int *)(*piVar11 * 4 + ar4[0x36]);
          *puStack_44 = piStack_4c;
          puStack_44 = puStack_44 + 1;
        }
        puStack_40 = (ushort *)(psVar19 + *piVar16);
        *piStack_4c = iVar12;
        piStack_4c = piStack_4c + 1;
        if (psVar20 == ar7) goto LAB_8c115274;
      }
      sVar2 = *psVar20;
      psVar20 = psVar20 + 1;
      iVar12 = iVar12 + 1;
      *puVar10 = sVar2 << 2;
      puVar10 = puVar10 + 1;
    } while( true );
  }
LAB_8c115402:
  uVar13 = FUN_8c1204c4(ar4,0x71,piVar17,ar7);
  return uVar13;
LAB_8c115274:
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0x2f] * 0xc,piVar17,ar7);
  ar4[0x41] = iVar12;
  FUN_8c114d30(ar4,iVar6,a6,ar7);
  iVar12 = (**(code **)(ar5 + 0x48))(ar5,iVar6,a6,ar7);
  ar4[0x24] = iVar12;
  iVar12 = (**(code **)(ar5 + 0x44))(ar5,iVar6,a6,ar7);
  ar4[0x30] = iVar12;
  *(undefined1 *)(ar4 + 0x31) = 0;
  uVar13 = (**(code **)(ar5 + 0x30))(ar5,iVar6,a6,ar7);
  *(char *)((int)ar4 + 0xf9) = (char)uVar13;
  if (*(char *)((int)ar4 + 0xf9) == '\0') {
    FUN_8c120550(ar4,0xf,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0;
  }
  else {
    FUN_8c120550(ar4,0x17,a6,ar7);
    piVar17 = a6;
    fVar21 = extraout_fr0_00;
  }
  FUN_8c112b1c(ar4,(int)fVar21,piVar17,ar7);
  iVar12 = 0;
  uVar9 = 0;
  if (ar4[0xe] != 0) {
    do {
      if ((*(ushort *)(uVar9 * 2 + ar4[0x30]) & 1) != 0) {
        iVar6 = iVar12 * 4;
        iVar12 = iVar12 + 1;
        *(uint *)(ar4[0x52] + iVar6) = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)ar4[0xe]);
  }
  iVar12 = (**(code **)(a4 + 0x10))(a4,(ar4[0xe] + 1) * 4,piVar17,ar7);
  ar4[0x26] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))(a4,ar4[0xf],piVar17,ar7);
  ar4[0x25] = iVar12;
  iVar12 = (**(code **)(a4 + 0x10))
                     (a4,(((int *)(uint)ar4[0x24])[ar4[0xe]] - *(int *)(uint)ar4[0x24]) * 4,piVar17,ar7);
  ar4[0x27] = iVar12;
  if (((ar4[0x26] != 0) && (ar4[0x25] != 0)) && (ar4[0x27] != 0)) {
    uVar9 = 0;
    if (ar4[0xf] != 1) {
      do {
        *(undefined1 *)(ar4[0x25] + uVar9) = 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < ar4[0xf] - 1U);
    }
    uVar13 = 7;
    iVar6 = 0xff << (8 - (ar4[0xe] & 7U) & 7);
    *(char *)(ar4[0x25] + uVar9) = (char)iVar6;
    FUN_8c113ac8(ar4,iVar6,7,ar7);
    iVar12 = ((int *)(uint)ar4[0x26])[ar4[0xe]] - *(int *)(uint)ar4[0x26];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    ar4[0x2d] = iVar12 >> 2;
    if ((((code *)(uint)ar4[0x4c] != FUN_8c11617a) ||
        (uVar9 = FUN_8c1155a0(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)) &&
       (((code *)(uint)ar4[0x4c] != FUN_8c117bac ||
        (uVar9 = FUN_8c115732(ar4,iVar6,uVar13,ar7), (uVar9 & 0xff) == 0)))) {
      iVar12 = ar4[0x50];
      uVar9 = FUN_8c112a20(ar4,iVar12,uVar13,ar7);
      if (((uVar9 & 0xff) == 0) &&
         (uVar9 = FUN_8c11372e(ar4,iVar12,uVar13,ar7), (uVar9 & 0xff) == 0)) {
        if (*(char *)((int)ar4 + 0xf9) == '\0') {
          if ((char)ar4[0x3e] == '\0') {
            ar4[0x69] = (int)FUN_8c11abf0;
            *(undefined1 *)(ar4 + 0x76) = 1;
          }
          else {
            ar4[0x69] = (int)FUN_8c11ac4c;
            *(undefined1 *)(ar4 + 0x76) = 0;
            FUN_8c113b54(ar4,iVar12,uVar13,ar7);
          }
        }
        else {
          ar4[0x69] = (int)FUN_8c11ad68;
          *(undefined1 *)(ar4 + 0x76) = 1;
          FUN_8c113b54(ar4,iVar12,uVar13,ar7);
        }
        return 0;
      }
    }
    return 1;
  }
  goto LAB_8c115402;
}

__asm__(".globl _FUN_8c114e80\n.set _FUN_8c114e80, _FUN_8c114e80_def\n");
//@unit 8c1155a0
#include "../decls.h"
undefined4 FUN_8c1155a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *ar4;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + 1) * 4);
  puVar1 = (&FUN_8c1204c4);
  *(undefined4 *)((int)0xa8 + (int)ar4) = uVar2;
  if (*(int *)((int)0xa8 + (int)ar4) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)0x144 + (int)ar4) +
                             *(int *)((int)0xb4 + (int)ar4)) * 4);
    *(undefined4 *)((int)0xac + (int)ar4) = uVar2;
    if (*(int *)((int)0xac + (int)ar4) != 0) {
      if (*(int *)((int)0x124 + (int)ar4) == 0) {
        FUN_8c11318e(ar4,0);
      }
      piVar7 = *(int **)((int)0x9c + (int)ar4);
      piVar5 = piVar7 + *(int *)(0x9c + 0x18 + (int)ar4);
      iVar3 = 0;
      for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
        iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(iVar4 + (int)ar4) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + *(int *)(iVar4 + (int)ar4) + 1) * 4);
      *(undefined4 *)((int)0xa0 + (int)ar4) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(iVar8 + -0x14 + (int)ar4) =
           (ar4[0xe] + *(int *)(iVar8 + (int)ar4) + 1) * 4 + *(int *)(iVar8 + -0x18 + (int)ar4);
      if (*(int *)(iVar8 + -0x18 + (int)ar4) != 0) {
        uVar6 = 0;
        iVar8 = ar4[0xe] * 4 + *(int *)((int)0xa0 + (int)ar4);
        if (ar4[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(*(int *)((int)0xa0 + (int)ar4) + uVar6 * 4) = iVar8;
            for (piVar7 = *(int **)(*(int *)(iVar3 + (int)ar4) + uVar6 * 4);
                piVar7 < *(int **)((uVar6 + 1) * 4 + *(int *)(iVar3 + (int)ar4));
                piVar7 = piVar7 + 1) {
              iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)ar4[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(ar4,0x71);
  return uVar2;
}

__asm__(".globl _FUN_8c1155a0\n.set _FUN_8c1155a0, _FUN_8c1155a0_def\n");
//@unit 8c1155a4
#include "../decls.h"
undefined4 FUN_8c1155a4_def(undefined4 ar4,undefined4 ar5,int *ar6,int ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_r14;
  
  iVar8 = *unaff_r14;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(unaff_r14[0xe] + 1) * 4,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  *(undefined4 *)((int)0xa8 + (int)unaff_r14) = uVar2;
  if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)0x144 + (int)unaff_r14) +
                             *(int *)((int)0xb4 + (int)unaff_r14)) * 4,ar6,ar7);
    *(undefined4 *)((int)0xac + (int)unaff_r14) = uVar2;
    if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
      if (*(int *)((int)0x124 + (int)unaff_r14) == 0) {
        FUN_8c11318e(unaff_r14,0,ar6,ar7);
      }
      ar6 = *(int **)((int)0x9c + (int)unaff_r14);
      piVar6 = ar6 + *(int *)(0x9c + 0x18 + (int)unaff_r14);
      iVar3 = 0;
      for (piVar5 = ar6; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        ar7 = *piVar5;
        ar6 = (int *)unaff_r14[0x11];
        iVar4 = ar6[ar7 + 1] - ar6[ar7];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(iVar4 + (int)unaff_r14) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))
                        (iVar8,(unaff_r14[0xe] + *(int *)(iVar4 + (int)unaff_r14) + 1) * 4,ar6,ar7);
      *(undefined4 *)((int)0xa0 + (int)unaff_r14) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(iVar8 + -0x14 + (int)unaff_r14) =
           (unaff_r14[0xe] + *(int *)(iVar8 + (int)unaff_r14) + 1) * 4 +
           *(int *)(iVar8 + -0x18 + (int)unaff_r14);
      if (*(int *)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
        uVar7 = 0;
        iVar8 = unaff_r14[0xe] * 4 + *(int *)((int)0xa0 + (int)unaff_r14);
        if (unaff_r14[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(*(int *)((int)0xa0 + (int)unaff_r14) + uVar7 * 4) = iVar8;
            for (piVar5 = *(int **)(*(int *)(iVar3 + (int)unaff_r14) + uVar7 * 4);
                piVar5 < *(int **)((uVar7 + 1) * 4 + *(int *)(iVar3 + (int)unaff_r14));
                piVar5 = piVar5 + 1) {
              iVar4 = *(int *)((*piVar5 + 1) * 4 + unaff_r14[0x11]) -
                      *(int *)(*piVar5 * 4 + unaff_r14[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)unaff_r14[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(unaff_r14,0x71,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1155a4\n.set _FUN_8c1155a4, _FUN_8c1155a4_def\n");
//@unit 8c115732
#include "../decls.h"
undefined4 FUN_8c115732_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0xe] << 3,ar6,ar7);
  *(undefined4 *)((int)0xb0 + (int)ar4) = uVar1;
  if (*(int *)((int)0xb0 + (int)ar4) == 0) {
    uVar1 = FUN_8c1204c4(ar4,0x71);
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c115732\n.set _FUN_8c115732, _FUN_8c115732_def\n");
//@unit 8c115778
#include "../decls.h"
int FUN_8c115778_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(0x1ac + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(undefined2 *)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(uint *)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(0xb0 + ar4);
      *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(int *)(ar4 + 0x38) << 1));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115778\n.set _FUN_8c115778, _FUN_8c115778_def\n");
//@unit 8c1157c0
#include "../decls.h"
int FUN_8c1157c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(0x1ac + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined2 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined2 *)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(iVar1 + *(int *)(0xa8 + ar4)) = 0;
  } while (uVar2 <= *(uint *)(ar4 + 0x38));
  uVar2 = 0;
  if (*(int *)(0x144 + ar4) + *(int *)(0xb4 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(0xac + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(int *)(0x144 + ar4) + *(int *)(0xb4 + ar4)));
  }
  iVar1 = 0xa0 + 0x18;
  puVar3 = (undefined4 *)**(undefined4 **)(0xa0 + ar4);
  uVar2 = 0;
  if (*(int *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)0xb8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1157c0\n.set _FUN_8c1157c0, _FUN_8c1157c0_def\n");
//@unit 8c11584e
#include "../decls.h"
undefined4 * FUN_8c11584e_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*ar4 + 0x10))(*ar4,0x14,ar6,ar7);
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(iVar4 + (int)ar4);
    puVar1 = (&FUN_8c119320);
    puVar3[1] = *(undefined4 *)(iVar4 + 0x70 + (int)ar4);
    puVar2 = (&DATA_8c11920c);
    *(undefined **)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&DATA_8c113680);
    *(undefined **)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(iVar4 + (int)ar4) = *ar5;
  puVar1 = (&FUN_8c11346c);
  *(undefined4 *)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = (&FUN_8c11af3a);
  *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c11584e\n.set _FUN_8c11584e, _FUN_8c11584e_def\n");
//@unit 8c1158e0
#include "../decls.h"
undefined4 * FUN_8c1158e0_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*ar4 + 0x10))(*ar4,0x14,ar6,ar7);
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(iVar4 + (int)ar4);
    puVar3[1] = *(undefined4 *)(iVar4 + 0x70 + (int)ar4);
    puVar3[2] = *(undefined4 *)(iVar4 + 0x74 + (int)ar4);
    puVar3[3] = ar4[6];
    puVar1 = (&FUN_8c1197d8);
    puVar3[4] = *(undefined4 *)(iVar4 + -0xc + (int)ar4);
    puVar2 = (&FUN_8c119706);
    *(undefined **)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&DATA_8c1136d2);
    *(undefined **)(iVar4 + 0x70 + (int)ar4) = puVar2;
    puVar2 = (&FUN_8c11af7e);
    *(undefined **)(iVar4 + 0x74 + (int)ar4) = puVar1;
    ar4[6] = (int)puVar2;
    *(undefined4 *)(iVar4 + -0xc + (int)ar4) = 0;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(iVar4 + (int)ar4) = *ar5;
  *(undefined4 *)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  *(undefined4 *)(iVar4 + 0x74 + (int)ar4) = ar5[2];
  ar4[6] = ar5[3];
  *(undefined4 *)(iVar4 + -0xc + (int)ar4) = ar5[4];
  (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c1158e0\n.set _FUN_8c1158e0, _FUN_8c1158e0_def\n");
//@unit 8c11596e
#include "../decls.h"
undefined4 FUN_8c11596e_def(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = (&FUN_8c1133f6);
  uVar7 = *ar5;
  uVar10 = ar5[1];
  iVar9 = *ar4;
  uVar6 = ar5[2];
  uVar8 = ar5[3];
  *(uint *)((int)0x1b4 + (int)ar4) = uVar10;
  ar4[0xe] = uVar7 + 2;
  cVar2 = (*(code *)puVar1)(ar4);
  if (cVar2 == '\0') {
    iVar4 = (uVar10 - 1) * 2 + uVar7 + 2;
    ar4[0x10] = iVar4;
    iVar4 = (**(code **)(iVar9 + 0x10))(iVar9,iVar4 * 2);
    ar4[0x12] = iVar4;
    if (ar4[0x12] == 0) {
      uVar3 = FUN_8c1204c4(ar4,2);
      return uVar3;
    }
    if (ar4[0x13] != 0) {
      (**(code **)(iVar9 + 0x18))(iVar9,ar4[0x13]);
      ar4[0x13] = 0;
    }
    iVar9 = 0;
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        iVar4 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar6);
        iVar9 = iVar9 + 1;
      } while (uVar5 < uVar7);
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        iVar4 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar8);
        iVar9 = iVar9 + 1;
      } while (uVar6 < uVar10);
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(iVar4 + uVar8);
          iVar9 = iVar9 + 1;
        } while (uVar6 < uVar10);
      }
    }
    cVar2 = FUN_8c11372e(ar4);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11596e\n.set _FUN_8c11596e, _FUN_8c11596e_def\n");
//@unit 8c115980
#include "../decls.h"
undefined4 FUN_8c115980_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_r14;
  
  puVar1 = (&FUN_8c1133f6);
  uVar6 = *ar5;
  uVar9 = ar5[1];
  iVar8 = *unaff_r14;
  uVar5 = ar5[2];
  uVar7 = ar5[3];
  *(uint *)(in_r0 + (int)unaff_r14) = uVar9;
  unaff_r14[0xe] = uVar6 + 2;
  uVar2 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    iVar4 = (uVar9 - 1) * 2 + uVar6 + 2;
    unaff_r14[0x10] = iVar4;
    iVar4 = (**(code **)(iVar8 + 0x10))(iVar8,iVar4 * 2,ar6,ar7);
    unaff_r14[0x12] = iVar4;
    if (unaff_r14[0x12] == 0) {
      uVar3 = FUN_8c1204c4(2);
      return uVar3;
    }
    if (unaff_r14[0x13] != 0) {
      (**(code **)(iVar8 + 0x18))(iVar8,unaff_r14[0x13],ar6,ar7);
      unaff_r14[0x13] = 0;
    }
    iVar8 = 0;
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar5);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar6);
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar7);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar9);
      uVar2 = 0;
      if (uVar9 != 0) {
        do {
          iVar4 = uVar2 * 2;
          uVar2 = uVar2 + 1;
          *(undefined2 *)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(iVar4 + uVar7);
          iVar8 = iVar8 + 1;
        } while (uVar2 < uVar9);
      }
    }
    uVar2 = FUN_8c11372e(unaff_r14,uVar2,ar6,ar7);
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115980\n.set _FUN_8c115980, _FUN_8c115980_def\n");
//@unit 8c115ac8
#include "../decls.h"
undefined4 FUN_8c115ac8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int ar5_00;
  int iVar10;
  uint uStack_38;
  int iStack_34;
  ushort *puStack_30;
  ushort *puStack_24;
  
  uVar8 = *ar5;
  puStack_24 = (ushort *)(uint)ar5[2];
  puStack_30 = (ushort *)(uint)ar5[3];
  uVar9 = ar5[1];
  *(undefined2 *)(ar4 + 0x50) = 0;
  iVar4 = (int)0x12c;
  *(undefined4 *)(iVar4 + ar4) = 0xffffffff;
  *(undefined2 *)(iVar4 + 0x6e + ar4) = 0;
  *(undefined4 *)(iVar4 + 0x80 + ar4) = 0;
  *(uint *)(iVar4 + 0x88 + ar4) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)(0x1b8 + ar4) = 0;
  }
  else {
    *(uint *)(0x1b8 + ar4) = (uint)*puStack_30;
  }
  uVar5 = FUN_8c1133f6(ar4,ar5,ar6,ar7);
  if ((uVar5 & 0xff) == 0) {
    piVar6 = (int *)FUN_8c113354(ar4,ar5,ar6,ar7);
    puVar2 = (&FUN_8c112d00);
    piVar6[1] = 0;
    piVar6[4] = 0;
    *piVar6 = 0;
    uVar5 = (*(code *)puVar2)(ar4,ar5,ar6,ar7);
    uVar1 = 0x77ff;
    if ((uVar5 & 0xff) == 0) {
      ar5_00 = 0;
      iStack_34 = 0;
      iVar10 = *(int *)(ar4 + 0x54);
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)puStack_30[uStack_38];
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          uVar3 = uVar1;
          if (uStack_38 == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar3;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
        } while (uStack_38 < uVar9);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      if (uVar8 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_24;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar10 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar10 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_24 = puStack_24 + 1;
        } while (uStack_38 < uVar8);
      }
      uStack_38 = 0;
      iVar4 = ar5_00;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar7;
          *(uint *)(ar5_00 + 0xc) = (uint)*puStack_30;
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(ar5_00 + 2) = uVar1;
          *(int **)(ar5_00 + 8) = piVar6;
          *(int **)(ar5_00 + 4) = piVar6;
          if (*(int *)(ar5_00 + 0x18) == 0) {
            iVar7 = FUN_8c112b6e(ar4,ar5_00,ar6,ar7);
          }
          else {
            iVar7 = *(int *)(ar5_00 + 0x18);
          }
          iStack_34 = iStack_34 + 1;
          uStack_38 = uStack_38 + 1;
          iVar4 = ar5_00;
          puStack_30 = puStack_30 + 1;
        } while (uStack_38 < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(ar5_00 + 0x10) = ar5_00;
      }
      else {
        *(int *)(ar5_00 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(*(int *)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = iStack_34;
      *(int *)(ar4 + 0x60) = ar5_00;
      *(short *)(ar4 + 0x50) = (short)iStack_34;
      *(undefined1 *)(0x1d8 + ar4) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115ac8\n.set _FUN_8c115ac8, _FUN_8c115ac8_def\n");
//@unit 8c115cec
#include "../decls.h"
int FUN_8c115cec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  if (ar4[0x11] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11]);
    ar4[0x11] = 0;
  }
  if (ar4[0x12] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x12]);
    ar4[0x12] = 0;
  }
  if (ar4[0x13] != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x13]);
    ar4[0x13] = 0;
  }
  if (*(int *)((int)0x148 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x148 + (int)ar4));
    *(undefined4 *)((int)0x148 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x1c0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1c0 + (int)ar4));
    *(undefined4 *)((int)0x1c0 + (int)ar4) = 0;
  }
  if ((*(char *)((int)0xc4 + (int)ar4) != '\0') &&
     (*(int *)((int)0xc0 + (int)ar4) != 0)) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xc0 + (int)ar4));
    *(undefined4 *)((int)0xc0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x98 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x98 + (int)ar4));
    *(undefined4 *)((int)0x98 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x94 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x94 + (int)ar4));
    *(undefined4 *)((int)0x94 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x9c + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x9c + (int)ar4));
    *(undefined4 *)((int)0x9c + (int)ar4) = 0;
  }
  if (*(int *)((int)0xa8 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa8 + (int)ar4));
    *(undefined4 *)((int)0xa8 + (int)ar4) = 0;
  }
  if (*(int *)((int)0xac + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xac + (int)ar4));
    *(undefined4 *)((int)0xac + (int)ar4) = 0;
  }
  if (*(int *)((int)0xa0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xa0 + (int)ar4));
    *(undefined4 *)((int)0xa0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0xb0 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0xb0 + (int)ar4));
    *(undefined4 *)((int)0xb0 + (int)ar4) = 0;
  }
  if (*(int *)((int)0x104 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x104 + (int)ar4));
    *(undefined4 *)((int)0x104 + (int)ar4) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)ar4) != 0) {
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1cc + (int)ar4));
    (**(code **)(iVar2 + 0x18))(iVar2,*(undefined4 *)((int)0x1d0 + (int)ar4));
    iVar1 = (int)0x1d4;
    *(undefined4 *)(iVar1 + (int)ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cec\n.set _FUN_8c115cec, _FUN_8c115cec_def\n");
//@unit 8c115cf4
#include "../decls.h"
int FUN_8c115cf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int a4;
  int *unaff_r14;
  
  a4 = *unaff_r14;
  if (*(int *)(in_r0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)(in_r0 + (int)unaff_r14),ar6,ar7);
    unaff_r14[0x11] = 0;
  }
  if (unaff_r14[0x12] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x12],ar6,ar7);
    unaff_r14[0x12] = 0;
  }
  if (unaff_r14[0x13] != 0) {
    (**(code **)(a4 + 0x18))(a4,unaff_r14[0x13],ar6,ar7);
    unaff_r14[0x13] = 0;
  }
  if (*(int *)((int)0x148 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x148 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x148 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x1c0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1c0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x1c0 + (int)unaff_r14) = 0;
  }
  if ((*(char *)((int)0xc4 + (int)unaff_r14) != '\0') &&
     (*(int *)((int)0xc0 + (int)unaff_r14) != 0)) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xc0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xc0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x98 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x98 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x98 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x94 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x94 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x94 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x9c + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x9c + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x9c + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa8 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xa8 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xac + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xa0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xa0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xa0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0xb0 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0xb0 + (int)unaff_r14) = 0;
  }
  if (*(int *)((int)0x104 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x104 + (int)unaff_r14),ar6,ar7);
    *(undefined4 *)((int)0x104 + (int)unaff_r14) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)unaff_r14) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1cc + (int)unaff_r14),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x1d0 + (int)unaff_r14),ar6,ar7);
    iVar1 = (int)0x1d4;
    *(undefined4 *)(iVar1 + (int)unaff_r14) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cf4\n.set _FUN_8c115cf4, _FUN_8c115cf4_def\n");
//@unit 8c115ed8
#include "../decls.h"
int FUN_8c115ed8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(uint)ar5[1];
  piVar3 = (int *)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (int *)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(int *)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(int *)(iVar4 + ar4);
  *(int **)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl _FUN_8c115ed8\n.set _FUN_8c115ed8, _FUN_8c115ed8_def\n");
//@unit 8c115f18
#include "../decls.h"
int FUN_8c115f18_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *ar5_00;
  int *piVar5;
  
  ar5_00 = (int *)**(int **)(0x124 + ar4);
  if (ar5_00 == *(int **)(0x124 + -4 + ar4)) {
    FUN_8c11318e(ar4,ar5_00,ar6,ar7);
  }
  iVar2 = (int)0x124;
  ar5_00[2] = ar5;
  if (ar5_00 != *(int **)(iVar2 + ar4)) {
    do {
      piVar4 = (int *)ar5_00[2];
      ar5_00 = (int *)ar5_00[1];
      iVar2 = *piVar4;
      while (iVar2 == 0) {
        piVar5 = (int *)piVar4[1];
        piVar3 = piVar4;
        if (piVar5 != (int *)0x0) {
          iVar2 = *piVar5 + -1;
          *piVar5 = iVar2;
          while (piVar1 = piVar5, iVar2 == 0) {
            piVar3 = (int *)piVar1[2];
            if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, *piVar3 = iVar2 + -1, iVar2 + -1 == 0))
            {
              ar5_00 = (int *)*ar5_00;
              if (ar5_00 == (int *)*(int *)(0x120 + ar4)) {
                FUN_8c11318e(ar4,ar5_00,ar6,ar7);
              }
              ar5_00[2] = piVar1[2];
            }
            piVar5 = (int *)piVar1[1];
            piVar3 = piVar1;
            if (piVar5 == (int *)0x0) break;
            iVar2 = *piVar5 + -1;
            *piVar5 = iVar2;
          }
        }
        iVar2 = (int)0x114;
        piVar3[1] = *(int *)(iVar2 + ar4);
        *(int **)(iVar2 + ar4) = piVar4;
        piVar4 = (int *)piVar4[2];
        if (piVar4 == (int *)0x0) break;
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4;
      }
      iVar2 = (int)0x124;
    } while (ar5_00 != *(int **)(iVar2 + ar4));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c115f18\n.set _FUN_8c115f18, _FUN_8c115f18_def\n");
//@unit 8c115fec
#include "../decls.h"
undefined4 FUN_8c115fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint d;
  
  iVar4 = 0;
  if (*(char *)(ar4 + 0x15c) == '\0') {
    if ((10 < *(uint *)(ar4 + 300)) || (*(uint *)(ar4 + 0x158) >> 2 < (uint)*(ushort *)(ar4 + 0x50))
       ) {
      *(undefined1 *)(ar4 + 0x15c) = 1;
    }
  }
  else {
    d = 1;
    iVar3 = 0;
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 + *(int *)(ar4 + 0x170 + iVar3);
      d = d + *(int *)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = libgcc_divide_helper_01051c(uVar5 * 0x80,d);
    }
    else {
      uVar2 = libgcc_divide_helper_01051c(uVar5,d >> 7);
    }
    *(undefined4 *)(ar4 + 0x168) = uVar2;
    iVar3 = *(int *)(ar4 + 0x158) - (uint)*(ushort *)(ar4 + 0x50);
    iVar6 = iVar3 * *(int *)(ar4 + 0x16c) * *(int *)(ar4 + 0x168);
    if (iVar3 < 1) {
      iVar3 = -0x1fffc000;
      if ((iVar6 < 1) && (iVar3 = iVar6, iVar6 < -0x1fffc000)) {
        iVar3 = -0x1fffc000;
      }
    }
    else {
      iVar3 = 0x1fffc000;
      if ((-1 < iVar6) && (iVar3 = iVar6, 0x1fffc000 < iVar6)) {
        iVar3 = 0x1fffc000;
      }
    }
    uVar1 = *(ushort *)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(ushort *)(ar4 + 0x160) < iVar3) {
      *(undefined2 *)(ar4 + 0x15e) = *(undefined2 *)(ar4 + 0x160);
    }
    else {
      *(short *)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = libgcc_divide_helper_010468((uint)uVar1,3);
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = libgcc_divide_helper_010468((uint)uVar1,uVar2);
      *(short *)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(ar4 + 0x198) + 1;
    *(uint *)(ar4 + 0x170 + iVar6) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x15e) >> 3;
    *(uint *)(iVar6 + ar4 + 0x184) =
         (uint)*(ushort *)(ar4 + 0x50) * (uint)*(ushort *)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c115fec\n.set _FUN_8c115fec, _FUN_8c115fec_def\n");
//@unit 8c11617a
#include "../decls.h"
undefined4 FUN_8c11617a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iStack_8;
  
  iVar2 = (int)(int)0xffffff70;
  *(undefined4 *)((int)&iStack_8 + 0x8c + iVar2) = ar4;
  *(undefined4 *)((int)&iStack_8 + 0x88 + iVar2) = ar5;
  (&stack0x0000000f)[iVar2] =
       *(undefined1 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x7c);
  if (0xea60 < (int)(uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50))
  {
    return 0xffffffff;
  }
  *(int *)(&stack0x00000030 + iVar2) = (int)0x7fff;
  *(int *)(&stack0x0000002c + iVar2) =
       (int)*(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2));
  *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
  iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
  *(int *)(0x1ac + iVar6) =
       *(int *)(0x1ac + iVar6) + *(int *)(&stack0x0000002c + iVar2);
  *(undefined4 *)(&stack0x00000034 + iVar2) = 0;
  while (*(uint *)(&stack0x00000034 + iVar2) <
         (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50)) {
    iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
    *(int *)(&stack0x00000008 + iVar2) = iVar6;
    if (iVar6 < 0x77ff) {
      *(uint *)(&stack0x00000004 + iVar2) =
           (uint)(**(ushort **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) >> 2);
      iVar4 = *(int *)(&stack0x00000008 + iVar2);
      *(int *)(&stack0x00000008 + iVar2) = iVar4 - *(int *)(&stack0x0000002c + iVar2);
      iVar6 = (int)0x88;
      **(undefined2 **)((int)&iStack_8 + 0x84 + iVar2) =
           (short)(iVar4 - *(int *)(&stack0x0000002c + iVar2));
      *(int *)(&stack0x00000008 + iVar2) =
           *(int *)(&stack0x00000008 + iVar2) +
           (int)*(short *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) +
                          *(int *)(&stack0x00000004 + iVar2) * 2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) =
           *(undefined2 *)(&stack0x00000008 + iVar2);
    }
    else {
      **(undefined2 **)((int)&iStack_8 + 0x84 + iVar2) =
           (short)*(undefined4 *)(&stack0x00000008 + iVar2);
    }
    if (*(int *)(&stack0x00000008 + iVar2) <= *(int *)(&stack0x00000030 + iVar2)) {
      if (*(int *)(&stack0x00000008 + iVar2) == *(int *)(&stack0x00000030 + iVar2)) {
        *(undefined4 *)(&stack0x00000004 + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
        while ((**(ushort **)(&stack0x00000004 + iVar2) & 1) == 0) {
          *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 2;
        }
        *(undefined2 *)(&stack0x00000000 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 2);
        *(undefined2 *)(&stack0x00000002 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 4);
        if ((*(ushort *)
              (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xc0) +
              *(int *)(&stack0x00000000 + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        }
      }
      else {
        *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
      }
      *(undefined4 *)(&stack0x00000030 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
    }
    iVar6 = (int)0x84;
    piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
    *piVar7 = *piVar7 + 1;
    iVar4 = *(int *)((int)&iStack_8 + iVar6 + iVar2);
    iVar6 = (int)0x84;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x18);
    *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x00000034 + iVar2) + 1;
  }
  *(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
       (short)*(undefined4 *)(&stack0x00000030 + iVar2);
  FUN_8c115fec(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),ar5,ar6,ar7);
  iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
  *(short *)(&stack0x0000002a + iVar2) =
       *(short *)(0x19a + -0x3c + iVar6) + *(short *)(0x19a + iVar6) +
       *(short *)((int)0x1a0 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
  *(uint *)(&stack0x00000048 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50);
  *(uint *)(&stack0x00000044 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100);
  *(uint *)(&stack0x00000040 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70);
  *(undefined4 *)(&stack0x00000074 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60);
  *(undefined4 *)(&stack0x00000070 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c);
  *(undefined4 *)(&stack0x0000006c + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78);
  *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
  iVar6 = 0;
  *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
  do {
    *(int *)(&stack0x00000034 + iVar2) = iVar6;
    if ((uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) <=
        *(uint *)(&stack0x00000034 + iVar2)) {
      *(undefined4 *)(&stack0x0000003c + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x0000003c + iVar2)) {
        iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
        *(int *)(&stack0x00000008 + iVar2) = iVar6;
        if (*(short *)(&stack0x0000002a + iVar2) < iVar6) {
          if ((*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) != 0) &&
             (piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),
             iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 < 1)) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
            ;
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
          else {
            **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c) = 0;
          }
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000070 + iVar2))
          {
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          *(int *)(&stack0x0000004c + iVar2) = iVar6;
          *(undefined2 *)(&stack0x00000024 + iVar2) = *(undefined2 *)(iVar6 + 2);
          *(undefined2 *)(&stack0x00000026 + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          iVar6 = (int)0xa8;
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000008 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          iVar6 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + iVar6) +
                          *(int *)(&stack0x00000024 + iVar2) * 4);
          *(int *)(&stack0x00000060 + iVar2) = iVar6;
          if (iVar6 == 0) {
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000068 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
            if (*(int *)(&stack0x0000006c + iVar2) != 0) {
              *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000068 + iVar2);
            }
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x0000006c + iVar2);
            if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x0000006c + iVar2);
            }
          }
          else if (*(int *)(&stack0x00000008 + iVar2) < (int)*(short *)(iVar6 + 2)) {
            *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8);
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8);
            *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
            ;
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x7fff;
          iVar6 = (int)0x84;
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(&stack0x00000040 + iVar2);
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x00000038 + iVar2)) {
        *(int *)(&stack0x00000008 + iVar2) =
             (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
        *(undefined2 *)(&stack0x00000024 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 2);
        *(undefined2 *)(&stack0x00000026 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(&stack0x0000002a + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
           *(int *)(&stack0x00000024 + iVar2) * 4) = 0;
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x0000006c + iVar2))
          {
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          *(undefined4 *)(&stack0x0000001c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          *(undefined4 *)(&stack0x00000018 + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                (*(int *)(&stack0x00000024 + iVar2) + 1) * 4);
          *(undefined4 *)(&stack0x0000005c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa0) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          while (*(uint *)(&stack0x0000001c + iVar2) < *(uint *)(&stack0x00000018 + iVar2)) {
            iVar6 = **(int **)(&stack0x0000001c + iVar2);
            *(int *)(&stack0x00000020 + iVar2) = iVar6;
            *(short *)(&stack0x0000000c + iVar2) =
                 *(short *)(&stack0x00000008 + iVar2) +
                 *(short *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) +
                                    (int)0x1c0) + iVar6 * 2);
            *(undefined4 *)(&stack0x00000014 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                  *(int *)(&stack0x00000020 + iVar2) * 4);
            *(undefined4 *)(&stack0x00000010 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                  (*(int *)(&stack0x00000020 + iVar2) + 1) * 4);
            while (*(uint *)(&stack0x00000014 + iVar2) < *(uint *)(&stack0x00000010 + iVar2)) {
              puVar5 = (ushort *)
                       (**(int **)(&stack0x00000014 + iVar2) * 2 +
                       *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x48));
              *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
              *(undefined4 *)(&stack0x00000060 + iVar2) =
                   **(undefined4 **)(&stack0x0000005c + iVar2);
              *(short *)(&stack0x00000028 + iVar2) =
                   *(short *)(&stack0x0000000c + iVar2) +
                   *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) +
                             (uint)(*puVar5 >> 2) * 2);
              if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
                if (*(int *)(&stack0x00000060 + iVar2) == 0) {
                  if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)(&FUN_8c112b6e))
                                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                       *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
                    *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(&stack0x00000074 + iVar2) =
                         *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                  }
                  *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                       *(undefined4 *)(&stack0x0000004c + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = 0;
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                  *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                  **(undefined4 **)(&stack0x0000005c + iVar2) =
                       *(undefined4 *)(&stack0x00000074 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                       *(undefined4 *)(&stack0x0000005c + iVar2);
                  iVar4 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                  iVar6 = *(int *)(&stack0x0000001c + iVar2) -
                          *(int *)((int)0x9c +
                                  *(int *)((int)&iStack_8 + 0x8c + iVar2));
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 3;
                  }
                  *(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                       *(int *)(0x144 + iVar4) * 4 + *(int *)(0xac + iVar4) +
                       (iVar6 >> 2) * 4;
                }
                else if (*(short *)(&stack0x00000028 + iVar2) <
                         *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                  *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  iVar6 = **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) + -1;
                  **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) = iVar6;
                  if (iVar6 < 1) {
                    (*(code *)(&FUN_8c115f18))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8),ar6,ar7);
                  }
                  *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                }
              }
              *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 4;
              *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000005c + iVar2) + 4;
            }
            *(int *)(&stack0x0000001c + iVar2) = *(int *)(&stack0x0000001c + iVar2) + 4;
          }
          iVar6 = **(int **)(&stack0x00000058 + iVar2) + -1;
          **(int **)(&stack0x00000058 + iVar2) = iVar6;
          if (iVar6 < 1) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(&stack0x00000058 + iVar2),ar6,ar7);
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x77ff;
          iVar6 = (int)0x84;
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60) =
           *(undefined4 *)(&stack0x00000074 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c) =
           *(undefined4 *)(&stack0x00000070 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78) =
           *(undefined4 *)(&stack0x0000006c + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) =
           *(undefined2 *)(&stack0x00000048 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100) =
           *(undefined2 *)(&stack0x00000044 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70) =
           *(undefined2 *)(&stack0x00000040 + iVar2);
      return 0;
    }
    *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + 0x84 + iVar2);
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
    puVar5 = *(ushort **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
    *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
    uVar1 = *puVar5;
    *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    }
    if ((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) {
      iVar6 = *(int *)(&stack0x0000004c + iVar2);
      *(ushort **)(&stack0x0000004c + iVar2) = (ushort *)(iVar6 + 2);
      uVar1 = *(ushort *)(iVar6 + 2);
      *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
      uVar9 = (uint)(uVar1 >> 2);
      *(uint *)(&stack0xfffffffc + iVar2) = uVar9;
      *(short *)(&stack0x00000028 + iVar2) =
           *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + uVar9 * 2) +
           (short)*(undefined4 *)(&stack0x00000000 + iVar2);
      if (((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar6;
              if (*(int *)(iVar6 + 4) == 0) {
                iVar4 = (int)0x114;
                iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar4 + iVar6) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000028 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            iVar6 = (int)0x84;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000074 + iVar2);
          }
        }
        else if (*(short *)(&stack0x00000028 + iVar2) <
                 *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7)
          ;
        }
        if (*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <=
            *(short *)(&stack0x0000002a + iVar2)) {
          iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
          *(int *)(&stack0x00000064 + iVar2) = iVar6;
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
          goto LAB_8c1173e8;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
             *(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
           (*(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) == 0)
          goto LAB_8c116732;
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
            iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
            *(int *)(&stack0x00000064 + iVar2) = iVar6;
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
            goto LAB_8c1173e8;
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,
                         ar7);
          }
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
LAB_8c116732:
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,
                         ar7);
          }
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) + 0x14)
                 = 0;
          }
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        goto LAB_8c1173cc;
      }
      iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)(&FUN_8c112b6e))
                            (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000074 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000028 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
        iVar6 = (int)0x84;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
        **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)(&FUN_8c112b6e))
                            (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000068 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
        if (*(int *)(&stack0x00000070 + iVar2) != 0) {
          *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0x00000068 + iVar2);
        }
        *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
        if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) =
             *(undefined4 *)(&stack0x00000070 + iVar2);
      }
      else {
        if (*(short *)(&stack0x00000028 + iVar2) <
            *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        iVar6 = *(int *)(&stack0x00000060 + iVar2);
        *(int *)((int)&iStack_8 + 0x80 + iVar2) = iVar6;
        iVar6 = *(int *)(iVar6 + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)(&FUN_8c112b6e))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        else if (*(int *)(&stack0x00000000 + iVar2) <
                 (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
               (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
               **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7);
      }
      if (*(short *)(&stack0x0000002a + iVar2) <
          *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2)) {
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
          ;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
             *(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
           (*(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
        }
        if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
          *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        }
        else {
          *(undefined4 *)((int)&iStack_8 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          if (*(int *)(&stack0x00000064 + iVar2) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          else {
            *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar2);
        }
        goto LAB_8c1173cc;
      }
      iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
      *(int *)(&stack0x00000064 + iVar2) = iVar6;
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
    }
    else {
      if ((&stack0x0000000f)[iVar2] == '\0') {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
      }
      else {
        iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
      }
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x0000002a + iVar2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)(&FUN_8c112b6e))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          else {
            iVar6 = (int)0x84;
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
        }
      }
      else if (*(int *)(&stack0x00000000 + iVar2) <
               (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
        *(int *)(&stack0x00000054 + iVar2) = iVar6;
        if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
             (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
             **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)(&FUN_8c115f18))
                  (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7);
      }
      if ((*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <=
           *(short *)(&stack0x0000002a + iVar2)) ||
         (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0)) {
        iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
        *(int *)(&stack0x00000064 + iVar2) = iVar6;
        *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
        goto LAB_8c1173e8;
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)(&FUN_8c115f18))
                  (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7);
      }
      if ((&stack0x0000000f)[iVar2] == '\0') {
        puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
LAB_8c11734a:
        *puVar8 = 0;
      }
      else {
        if ((*(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
             *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14)) &&
           (*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
            *(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)))) {
          puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14);
          goto LAB_8c11734a;
        }
        if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
        }
      }
      if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
      }
      else {
        *(undefined4 *)(&stack0xfffffffc + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        else {
          *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
             *(undefined4 *)(&stack0xfffffffc + iVar2);
      }
LAB_8c1173cc:
      *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
    }
LAB_8c1173e8:
    iVar6 = *(int *)(&stack0x00000034 + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c11617a\n.set _FUN_8c11617a, _FUN_8c11617a_def\n");
//@unit 8c117bac
#include "../decls.h"
undefined4 FUN_8c117bac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  ushort *puVar8;
  int iStack_8;
  
  iVar2 = (int)(int)0xffffff74;
  *(undefined4 *)((int)&iStack_8 + 0x88 + iVar2) = ar4;
  *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = ar5;
  (&stack0x0000000f)[iVar2] =
       *(undefined1 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x7c);
  if (0xea60 < *(ushort *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50)) {
    return 0xffffffff;
  }
  *(int *)(&stack0x00000038 + iVar2) = (int)0x7fff;
  *(undefined2 *)(&stack0x00000036 + iVar2) =
       *(undefined2 *)((int)0x19a + *(int *)((int)&iStack_8 + 0x88 + iVar2));
  *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54);
  iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
  *(int *)(0x1ac + iVar4) =
       *(int *)(0x1ac + iVar4) + (int)*(short *)(&stack0x00000036 + iVar2);
  iVar4 = 0;
  while (*(int *)(&stack0x0000003c + iVar2) = iVar4,
        *(uint *)(&stack0x0000003c + iVar2) <
        (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50)) {
    *(uint *)(&stack0x00000008 + iVar2) =
         (uint)(**(ushort **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) >> 2);
    iVar4 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2);
    *(int *)(&stack0x00000004 + iVar2) = iVar4;
    if (iVar4 < 0x77ff) {
      iVar7 = *(int *)(&stack0x00000004 + iVar2);
      *(int *)(&stack0x00000004 + iVar2) = iVar7 - *(short *)(&stack0x00000036 + iVar2);
      iVar4 = (int)0x84;
      **(undefined2 **)((int)&iStack_8 + 0x80 + iVar2) =
           (short)(iVar7 - *(short *)(&stack0x00000036 + iVar2));
      *(int *)(&stack0x00000004 + iVar2) =
           *(int *)(&stack0x00000004 + iVar2) +
           (int)*(short *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) +
                          *(int *)(&stack0x00000008 + iVar2) * 2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2) =
           *(undefined2 *)(&stack0x00000004 + iVar2);
    }
    else {
      **(undefined2 **)((int)&iStack_8 + 0x80 + iVar2) =
           (short)*(undefined4 *)(&stack0x00000004 + iVar2);
    }
    if (*(int *)(&stack0x00000004 + iVar2) <= *(int *)(&stack0x00000038 + iVar2)) {
      if (*(int *)(&stack0x00000004 + iVar2) == *(int *)(&stack0x00000038 + iVar2)) {
        *(undefined4 *)(&stack0x00000000 + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
        while ((**(ushort **)(&stack0x00000000 + iVar2) & 1) == 0) {
          *(int *)(&stack0x00000000 + iVar2) = *(int *)(&stack0x00000000 + iVar2) + 2;
        }
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000000 + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000000 + iVar2) + 4);
        if ((*(ushort *)
              (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xc0) +
              *(int *)(&stack0xfffffffc + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
               *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
        }
      }
      else {
        *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
             *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
      }
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(&stack0x00000004 + iVar2);
    }
    iVar4 = (int)0x80;
    piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
    *piVar5 = *piVar5 + 1;
    iVar7 = *(int *)((int)&iStack_8 + iVar4 + iVar2);
    iVar4 = (int)0x80;
    *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar7 + 8);
    *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + iVar4 + iVar2) + 0x18);
    iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
  }
  *(undefined2 *)((int)0x19a + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
       *(undefined2 *)(&stack0x00000038 + iVar2);
  FUN_8c115fec(*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),ar5,ar6,ar7);
  iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
  *(short *)(&stack0x00000034 + iVar2) =
       *(short *)(0x19a + -0x3c + iVar4) + *(short *)(0x19a + iVar4) +
       *(short *)((int)0x1a0 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
  *(uint *)(&stack0x00000048 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50);
  *(uint *)(&stack0x00000044 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 100);
  *(undefined4 *)(&stack0x00000074 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x60);
  *(undefined4 *)(&stack0x00000070 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x6c);
  *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54);
  iVar4 = 0;
  *(undefined4 *)(&stack0x00000068 + iVar2) = 0;
  do {
    *(int *)(&stack0x0000003c + iVar2) = iVar4;
    if ((uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50) <=
        *(uint *)(&stack0x0000003c + iVar2)) {
      *(undefined4 *)(&stack0x00000040 + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
      *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68);
      *(undefined4 *)(&stack0x00000068 + iVar2) = 0;
      *(undefined4 *)(&stack0x0000003c + iVar2) = 0;
      while (*(uint *)(&stack0x0000003c + iVar2) < *(uint *)(&stack0x00000040 + iVar2)) {
        *(int *)(&stack0x00000008 + iVar2) =
             (int)*(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2);
        *(undefined2 *)(&stack0x0000002c + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) + 2);
        *(undefined2 *)(&stack0x0000002e + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(&stack0x00000034 + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
           (*(int *)(&stack0x0000002c + iVar2) * 2 + 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000070 + iVar2))
          {
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
            if (*(int *)((int)&iStack_8 + 0x80 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
        }
        else {
          (&stack0x00000007)[iVar2] = 0;
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
          *(undefined4 *)(&stack0x00000020 + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0x98) +
                *(int *)(&stack0x0000002c + iVar2) * 4);
          *(undefined4 *)(&stack0x0000001c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0x98) +
                (*(int *)(&stack0x0000002c + iVar2) + 1) * 4);
          while (*(uint *)(&stack0x00000020 + iVar2) < *(uint *)(&stack0x0000001c + iVar2)) {
            iVar4 = **(int **)(&stack0x00000020 + iVar2);
            *(int *)(&stack0x00000028 + iVar2) = iVar4;
            *(short *)(&stack0x00000032 + iVar2) =
                 (short)*(undefined4 *)(&stack0x00000008 + iVar2) +
                 *(short *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) +
                                    (int)0x1c0) + iVar4 * 2);
            *(undefined4 *)(&stack0x00000018 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x44) +
                  *(int *)(&stack0x00000028 + iVar2) * 4);
            *(undefined4 *)(&stack0x00000014 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x44) +
                  (*(int *)(&stack0x00000028 + iVar2) + 1) * 4);
            while (*(uint *)(&stack0x00000018 + iVar2) < *(uint *)(&stack0x00000014 + iVar2)) {
              iVar4 = **(int **)(&stack0x00000018 + iVar2);
              *(int *)(&stack0x00000010 + iVar2) = iVar4;
              puVar8 = (ushort *)
                       (iVar4 * 2 + *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x48)
                       );
              *(ushort **)(&stack0x0000004c + iVar2) = puVar8;
              *(short *)(&stack0x00000030 + iVar2) =
                   *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) +
                             (uint)(*puVar8 >> 2) * 2) + *(short *)(&stack0x00000032 + iVar2);
              if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
                iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                                *(int *)(&stack0x00000010 + iVar2) * 4);
                *(int *)(&stack0x00000064 + iVar2) = iVar4;
                if (iVar4 == 0) {
                  if ((&stack0x00000007)[iVar2] == '\0') {
                    iVar4 = *(int *)((int)0x114 +
                                    *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar4;
                    if (*(int *)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                      uVar3 = (*(code *)(&FUN_8c112fd8))
                                        (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                      *(undefined4 *)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)
                       ((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                           *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                    **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                         *(undefined4 *)
                          ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                         *(int *)(&stack0x00000008 + iVar2) +
                         *(int *)((int)0x1ac +
                                 *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(undefined4 *)(&stack0x00000058 + iVar2) =
                         *(undefined4 *)(&stack0x00000050 + iVar2);
                    (&stack0x00000007)[iVar2] = 1;
                  }
                  if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)(&FUN_8c112b6e))
                                      (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                                       *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
                    *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(&stack0x00000074 + iVar2) =
                         *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                  }
                  *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000030 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                       *(undefined4 *)(&stack0x0000004c + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                  *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                  *(undefined4 *)
                   (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                   *(int *)(&stack0x00000010 + iVar2) * 4) =
                       *(undefined4 *)(&stack0x00000074 + iVar2);
                }
                else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
                  *(undefined2 *)(*(int *)(&stack0x00000064 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000030 + iVar2);
                  if ((&stack0x00000007)[iVar2] == '\0') {
                    iVar4 = *(int *)((int)0x114 +
                                    *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(int *)(&stack0x00000050 + iVar2) = iVar4;
                    if (*(int *)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                      uVar3 = (*(code *)(&FUN_8c112fd8))
                                        (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                      *(undefined4 *)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)
                       ((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                           *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
                    }
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
                    **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
                    *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                         *(undefined4 *)
                          ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                         *(int *)(&stack0x00000008 + iVar2) +
                         *(int *)((int)0x1ac +
                                 *(int *)((int)&iStack_8 + 0x88 + iVar2));
                    *(undefined4 *)(&stack0x00000058 + iVar2) =
                         *(undefined4 *)(&stack0x00000050 + iVar2);
                    (&stack0x00000007)[iVar2] = 1;
                  }
                  iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
                  *(int *)(&stack0x00000054 + iVar2) = iVar4;
                  if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
                    *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 8) =
                         *(undefined4 *)(&stack0x00000058 + iVar2);
                    **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                    iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
                    **(int **)(&stack0x00000054 + iVar2) = iVar4;
                    if (iVar4 < 1) {
                      (*(code *)(&FUN_8c115ed8))
                                (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                                 *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
                    }
                  }
                }
              }
              *(int *)(&stack0x00000018 + iVar2) = *(int *)(&stack0x00000018 + iVar2) + 4;
            }
            *(int *)(&stack0x00000020 + iVar2) = *(int *)(&stack0x00000020 + iVar2) + 4;
          }
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)(&FUN_8c115ed8))
                      (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8),ar6,ar7)
            ;
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2) = 0x77ff;
          iVar4 = (int)0x80;
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000068 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar4 + iVar2);
          *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
        }
        *(int *)(&stack0x0000003c + iVar2) = *(int *)(&stack0x0000003c + iVar2) + 1;
      }
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x60) =
           *(undefined4 *)(&stack0x00000074 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x6c) =
           *(undefined4 *)(&stack0x00000070 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x50) =
           *(undefined2 *)(&stack0x00000048 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 100) =
           *(undefined2 *)(&stack0x00000044 + iVar2);
      return 0;
    }
    *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + 0x80 + iVar2);
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
    puVar8 = *(ushort **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
    *(ushort **)(&stack0x0000004c + iVar2) = puVar8;
    uVar1 = *puVar8;
    *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    }
    if ((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) {
      iVar4 = *(int *)(&stack0x0000004c + iVar2);
      *(ushort **)(&stack0x0000004c + iVar2) = (ushort *)(iVar4 + 2);
      uVar1 = *(ushort *)(iVar4 + 2);
      *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
      if (((uVar1 & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
        iVar4 = *(int *)(&stack0x0000004c + iVar2) -
                *(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x48);
        *(int *)(&stack0x00000010 + iVar2) = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
        sVar6 = *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) +
                          (*(uint *)(&stack0x00000008 + iVar2) >> 2) * 2) +
                (short)*(undefined4 *)(&stack0x00000000 + iVar2);
        *(short *)(&stack0x00000030 + iVar2) = sVar6;
        if (sVar6 <= *(short *)(&stack0x00000034 + iVar2)) {
          iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
                          *(int *)(&stack0x00000010 + iVar2) * 4);
          *(int *)(&stack0x00000064 + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x4c) +
             *(int *)(&stack0x00000010 + iVar2) * 4) = *(undefined4 *)(&stack0x00000074 + iVar2);
          }
          else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            *(undefined2 *)(*(int *)(&stack0x00000064 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x00000064 + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
              **(int **)(&stack0x00000054 + iVar2) = iVar4;
              if (iVar4 < 1) {
                (*(code *)(&FUN_8c115ed8))
                          (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)(&FUN_8c115ed8))
                    (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4),ar6,ar7);
        }
        if (*(short *)(&stack0x00000034 + iVar2) <
            *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)(&FUN_8c115ed8))
                      (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8),ar6,ar7)
            ;
          }
          iVar7 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
          iVar4 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) -
                  *(int *)(iVar7 + 0x48);
          *(undefined4 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0xfffffffc + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)(&stack0xfffffffc + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0xfffffffc + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          goto LAB_8c118c66;
        }
        iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
        *(int *)(&stack0x00000068 + iVar2) = iVar4;
        *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) = *(undefined4 *)(iVar4 + 0x18);
      }
      else {
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
        *(short *)(&stack0x00000030 + iVar2) =
             *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) +
                       (*(uint *)(&stack0x00000008 + iVar2) >> 2) * 2) +
             (short)*(undefined4 *)(&stack0x00000000 + iVar2);
        *(int *)(&stack0x00000024 + iVar2) = *(int *)(&stack0xfffffffc + iVar2) * 2;
        iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) +
                                 (int)0xb0) + *(int *)(&stack0xfffffffc + iVar2) * 8);
        *(int *)(&stack0x00000060 + iVar2) = iVar4;
        if (*(short *)(&stack0x00000030 + iVar2) <= *(short *)(&stack0x00000034 + iVar2)) {
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
              *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000074 + iVar2);
          }
          else if (*(short *)(&stack0x00000030 + iVar2) < *(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
              *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
            }
            *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000030 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1;
              **(int **)(&stack0x00000054 + iVar2) = iVar4;
              if (iVar4 < 1) {
                (*(code *)(&FUN_8c115ed8))
                          (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
          iVar7 = *(int *)(&stack0x00000024 + iVar2);
          iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
          *(int *)(&stack0x00000024 + iVar2) = iVar7 + 1;
          iVar4 = *(int *)(*(int *)(iVar4 + 0xb0) + (iVar7 + 1) * 4);
          *(int *)(&stack0x0000005c + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x0000006c + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x0000006c + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x0000006c + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000000 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
            if (*(int *)(&stack0x00000070 + iVar2) != 0) {
              *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x0000006c + iVar2);
            }
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x0000006c + iVar2);
            if (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000070 + iVar2);
            }
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar4;
              if (*(int *)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            *(undefined2 *)(*(int *)(&stack0x0000005c + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000000 + iVar2);
            iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
            *(int *)(&stack0x00000054 + iVar2) = iVar4;
            if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
              *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 8) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
                 (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
                 **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
                (*(code *)(&FUN_8c115ed8))
                          (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
              }
            }
          }
        }
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)(&FUN_8c115ed8))
                    (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4),ar6,ar7);
        }
        if (*(short *)(&stack0x00000034 + iVar2) <
            *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
          piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (*(code *)(&FUN_8c115ed8))
                      (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8),ar6,ar7)
            ;
          }
          iVar7 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
          iVar4 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) -
                  *(int *)(iVar7 + 0x48);
          *(undefined4 *)(*(int *)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          else {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
            if (*(int *)(&stack0x00000068 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
LAB_8c118c66:
          *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
        }
        else {
          iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
          *(int *)(&stack0x00000068 + iVar2) = iVar4;
          *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) = *(undefined4 *)(iVar4 + 0x18);
        }
      }
    }
    else {
      if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x00000034 + iVar2)) {
        *(undefined2 *)(&stack0xfffffffc + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
        *(undefined2 *)(&stack0xfffffffe + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
        iVar4 = *(int *)(&stack0xfffffffc + iVar2) * 2 + 1;
        *(int *)(&stack0x00000024 + iVar2) = iVar4;
        iVar4 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) +
                                 (int)0xb0) + iVar4 * 4);
        *(int *)(&stack0x0000005c + iVar2) = iVar4;
        if (iVar4 == 0) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar4;
            if (*(int *)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)(&FUN_8c112b6e))
                              (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x0000006c + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x0000006c + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x0000006c + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x0000006c + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x0000006c + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        else if (*(int *)(&stack0x00000000 + iVar2) < (int)*(short *)(iVar4 + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar4 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar4;
            if (*(int *)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar4,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x88 + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x88 + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined2 *)(*(int *)(&stack0x0000005c + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          iVar4 = *(int *)(*(int *)(&stack0x0000005c + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar4;
          if (iVar4 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x0000005c + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
               (iVar4 = **(int **)(&stack0x00000054 + iVar2) + -1,
               **(int **)(&stack0x00000054 + iVar2) = iVar4, iVar4 < 1)) {
              (*(code *)(&FUN_8c115ed8))
                        (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                         *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
      }
      piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4);
      iVar4 = *piVar5 + -1;
      *piVar5 = iVar4;
      if (iVar4 < 1) {
        (*(code *)(&FUN_8c115ed8))
                  (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 4),ar6,ar7);
      }
      if (*(short *)(&stack0x00000034 + iVar2) <
          *(short *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 2)) {
        piVar5 = *(int **)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8);
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (*(code *)(&FUN_8c115ed8))
                    (*(undefined4 *)((int)&iStack_8 + 0x88 + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 8),ar6,ar7);
        }
        if ((&stack0x0000000f)[iVar2] == '\0') {
          *(undefined2 *)(&stack0xfffffffc + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 2);
          *(undefined2 *)(&stack0xfffffffe + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(&stack0xfffffffc + iVar2) * 8) = 0;
        }
        else {
          iVar4 = *(int *)((int)&iStack_8 + 0x88 + iVar2);
          iVar7 = *(int *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0xc) -
                  *(int *)(iVar4 + 0x48);
          *(undefined4 *)(*(int *)(iVar4 + 0x4c) + ((int)(iVar7 + (uint)(iVar7 < 0)) >> 1) * 4) = 0;
        }
        if (*(int *)((int)&iStack_8 + 0x80 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
          *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
        }
        else {
          *(undefined4 *)(&stack0xfffffffc + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
          if (*(int *)(&stack0x00000068 + iVar2) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + 0x54) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          else {
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0xfffffffc + iVar2);
          }
          *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        goto LAB_8c118c66;
      }
      iVar4 = *(int *)((int)&iStack_8 + 0x80 + iVar2);
      *(int *)(&stack0x00000068 + iVar2) = iVar4;
      *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) = *(undefined4 *)(iVar4 + 0x18);
    }
    iVar4 = *(int *)(&stack0x0000003c + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c117bac\n.set _FUN_8c117bac, _FUN_8c117bac_def\n");
//@unit 8c11919e
#include "../decls.h"
undefined4 FUN_8c11919e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_14 = FUN_8c11a634(ar4,&uStack_1c,ar6,ar7);
  uStack_18 = uStack_1c;
  uStack_10 = *(undefined4 *)(0x1ac + ar4);
  iStack_c = *(int *)(0x12c + ar4) + 1;
  uVar1 = FUN_8c120348(ar4,0xc,&uStack_18,3);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11919e\n.set _FUN_8c11919e, _FUN_8c11919e_def\n");
//@unit 8c119218
#include "../decls.h"
uint FUN_8c119218_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint *ar6_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a6;
  undefined4 a7;
  int a4;
  int iVar4;
  int *unaff_r14;
  bool bVar5;
  
  iVar4 = *(int *)(in_r0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar2 = ar5;
  if (ar5 < (unaff_r14[0x10] - *(int *)((int)0x1b4 + (int)unaff_r14)) - 1U) {
    do {
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)(iVar4 + 0x18);
    } while (uVar2 < (unaff_r14[0x10] - *(int *)((int)0x1b4 + (int)unaff_r14)) - 1U);
  }
  uVar2 = unaff_r14[0x10] + *(int *)((int)0x1b4 + (int)unaff_r14) * -2;
  for (iVar3 = *(int *)(iVar4 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
    if ((*(int *)(iVar3 + 0x10) != 0) &&
       (iVar1 = *(int *)(iVar3 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      ar5 = ar5 + 1;
    }
  }
  ar6_00 = (uint *)(**(code **)(a4 + 0x10))(a4,(ar5 - 1) * 2 + 8,ar6,ar7);
  *ar6_00 = ar5;
  iVar3 = ar5 - 1;
  for (iVar4 = *(int *)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
    if ((*(int *)(iVar4 + 0x10) != 0) &&
       (iVar1 = *(int *)(iVar4 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + -1;
      *(undefined2 *)((int)ar6_00 + iVar1 + 4) = **(undefined2 **)(iVar4 + 0x10);
    }
  }
  a7 = 1;
  a6 = ar6_00;
  uVar2 = FUN_8c120348(unaff_r14,0xc,ar6_00,1);
  bVar5 = (uVar2 & 0xff) == 0;
  if (bVar5) {
    (**(code **)(a4 + 0x18))(a4,ar6_00,a6,a7);
  }
  return (uint)!bVar5;
}

__asm__(".globl _FUN_8c119218\n.set _FUN_8c119218, _FUN_8c119218_def\n");
//@unit 8c119320
#include "../decls.h"
undefined4 FUN_8c119320_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  short *ar7_00;
  short *psVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined2 *puVar11;
  short *psVar12;
  short *psVar13;
  uint uStack_30;
  short sStack_2c;
  short *psStack_24;
  
  iVar5 = (int)0x77ff;
  uVar7 = 0;
  iVar9 = (int)0x7fff;
  sVar6 = *(short *)(0x19a + ar4);
  iVar1 = 0x19a + 0x12;
  *(int *)(iVar1 + ar4) = *(int *)(iVar1 + ar4) + (int)sVar6;
  puVar11 = *(undefined2 **)(ar4 + 0x54);
  uVar8 = (uint)*(ushort *)(ar4 + 0x50);
  if (uVar8 != 0) {
    do {
      iVar1 = (int)(short)puVar11[1];
      if (iVar1 < iVar5) {
        iVar1 = iVar1 + (short)(*(short *)(ar5 + (uint)**(ushort **)(puVar11 + 6) * 2) - sVar6);
      }
      *puVar11 = (short)iVar1;
      puVar11[1] = (short)iVar1;
      if (iVar1 <= iVar9) {
        *(undefined2 **)(0x19c + ar4) = puVar11;
        iVar9 = iVar1;
      }
      iVar1 = **(int **)(puVar11 + 2) + -1;
      **(int **)(puVar11 + 2) = iVar1;
      if (iVar1 < 1) {
        FUN_8c115ed8(ar4,*(undefined4 *)(puVar11 + 2),ar6,ar7);
      }
      uVar7 = uVar7 + 1;
      **(int **)(puVar11 + 4) = **(int **)(puVar11 + 4) + 1;
      *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar11 + 4);
      puVar11 = *(undefined2 **)(puVar11 + 0xc);
    } while (uVar7 < uVar8);
  }
  uVar7 = 1;
  *(short *)(0x19a + ar4) = (short)iVar9;
  ar7_00 = *(short **)(ar4 + 0x54);
  iVar9 = (int)ar7_00[1];
  psVar4 = *(short **)(ar7_00 + 0xc);
  if (1 < uVar8 + *(int *)(0x1b4 + ar4) * -2) {
    do {
      if ((int)*psVar4 < (int)(short)iVar9) {
        iVar9 = (int)*psVar4;
        ar7_00 = psVar4;
      }
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < uVar8 + *(int *)(0x1b4 + ar4) * -2);
  }
  sStack_2c = *(short *)(0x1e8 + ar4) + (short)iVar9;
  if (uVar7 < (uVar8 - *(int *)(0x1b4 + ar4)) - 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < (uVar8 - *(int *)(0x1b4 + ar4)) - 1);
  }
  psVar12 = ar7_00;
  if (*psVar4 < sStack_2c) {
    sStack_2c = *psVar4;
    psVar12 = psVar4;
  }
  for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
    psVar4 = *(short **)(psVar4 + 0xc);
  }
  iVar1 = iVar9;
  psStack_24 = ar7_00;
  if ((int)*psVar4 < (int)(short)iVar9) {
    iVar1 = (int)*psVar4;
    psStack_24 = psVar4;
  }
  psVar4 = *(short **)(ar4 + 0x54);
  uStack_30 = 0;
  sVar6 = (short)iVar1 + *(short *)(0x1e8 + ar4);
  piVar3 = *(int **)(psStack_24 + 2);
  piVar10 = *(int **)(0x114 + ar4);
  if (piVar10[1] == 0) {
    uVar2 = FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00);
    *(undefined4 *)(0x114 + ar4) = uVar2;
  }
  else {
    *(int *)(0x114 + ar4) = piVar10[1];
  }
  iVar1 = (int)0x12c;
  piVar10[1] = (int)piVar3;
  *piVar3 = *piVar3 + 1;
  piVar10[4] = *(int *)(psStack_24 + 6);
  iVar5 = (int)0x1ac;
  *piVar10 = 0;
  piVar10[5] = *(int *)(iVar1 + ar4) + 1;
  piVar10[3] = (int)psVar4[1] + *(int *)(iVar5 + ar4);
  iVar1 = (int)0x1b4;
  *piVar10 = *piVar10 + 1;
  if (uVar8 + *(int *)(iVar1 + ar4) * -2 != 0) {
    do {
      if (sVar6 < psVar4[1]) {
        psVar4[1] = sVar6;
        piVar3 = *(int **)(psVar4 + 4);
        *(int **)(psVar4 + 4) = piVar10;
        *piVar10 = *piVar10 + 1;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00);
        }
      }
      psVar4 = *(short **)(psVar4 + 0xc);
      uStack_30 = uStack_30 + 1;
    } while (uStack_30 < uVar8 + *(int *)(0x1b4 + ar4) * -2);
  }
  iVar1 = *piVar10;
  *piVar10 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00);
  }
  if (sStack_2c < psVar4[1]) {
    psVar4[1] = sStack_2c;
    piVar10 = *(int **)(0x114 + ar4);
    piVar3 = *(int **)(psVar12 + 2);
    if (piVar10[1] == 0) {
      uVar2 = FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00);
      *(undefined4 *)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(0x114 + ar4) = piVar10[1];
    }
    iVar1 = (int)0x12c;
    piVar10[1] = (int)piVar3;
    *piVar3 = *piVar3 + 1;
    piVar10[4] = *(int *)(psVar12 + 6);
    *piVar10 = 0;
    piVar10[5] = *(int *)(iVar1 + ar4) + 1;
    piVar10[3] = (int)psVar4[1] + *(int *)(0x1ac + ar4);
    piVar3 = *(int **)(psVar4 + 4);
    *(int **)(psVar4 + 4) = piVar10;
    *piVar10 = *piVar10 + 1;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00);
    }
  }
  psVar12 = *(short **)(psVar4 + 0xc);
  uVar7 = 0;
  psVar13 = psVar12;
  if (*(int *)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar4 < psVar13[1]) {
        psVar13[1] = *psVar4;
        piVar10 = *(int **)(psVar13 + 4);
        piVar3 = *(int **)(psVar4 + 2);
        if (piVar10 != piVar3) {
          *(int **)(psVar13 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00);
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = *(short **)(psVar13 + 0xc);
      psVar4 = psVar13;
      psVar13 = psVar12;
    } while (uVar7 < *(int *)(0x1b4 + ar4) - 1U);
  }
  uVar7 = 0;
  psVar4 = psVar12;
  if (*(int *)(0x1b4 + ar4) != 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < *(int *)(0x1b4 + ar4) - 1U);
  }
  if (*psVar4 < psVar12[1]) {
    psVar12[1] = *psVar4;
    piVar10 = *(int **)(psVar12 + 4);
    piVar3 = *(int **)(psVar4 + 2);
    if (piVar10 != piVar3) {
      *(int **)(psVar12 + 4) = piVar3;
      *piVar3 = *piVar3 + 1;
      iVar1 = *piVar10;
      *piVar10 = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00);
      }
    }
  }
  uVar7 = 0;
  psVar4 = *(short **)(psVar12 + 0xc);
  if (*(int *)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar12 < psVar4[1]) {
        psVar4[1] = *psVar12;
        piVar10 = *(int **)(psVar4 + 4);
        piVar3 = *(int **)(psVar12 + 2);
        if (piVar10 != piVar3) {
          *(int **)(psVar4 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00);
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = psVar4;
      psVar4 = *(short **)(psVar4 + 0xc);
    } while (uVar7 < *(int *)(0x1b4 + ar4) - 1U);
  }
  return 0;
}

__asm__(".globl _FUN_8c119320\n.set _FUN_8c119320, _FUN_8c119320_def\n");
//@unit 8c119706
#include "../decls.h"
undefined4 FUN_8c119706_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_10 = FUN_8c11b5a0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x1b4) == 0) {
    iStack_18 = 0;
    iStack_14 = *(int *)(ar4 + 300) + 1;
    iStack_24 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  }
  else {
    iStack_14 = *(int *)(iStack_10 + 0x14);
    iVar3 = iStack_10;
    for (iVar2 = iStack_10; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      if ((*(uint *)(ar4 + 0x1b8) == (*(uint *)(iVar2 + 0x10) & 0xffff)) &&
         (*(int *)(iVar2 + 4) != 0)) {
        iVar3 = iVar2;
      }
    }
    iStack_18 = *(int *)(iVar3 + 0x14);
    iStack_24 = *(int *)(iStack_10 + 0xc) - *(int *)(iVar3 + 0xc);
  }
  iStack_20 = iStack_14 - iStack_18;
  fStack_1c = (float)iStack_24;
  if (iStack_24 < 0) {
    fStack_1c = fStack_1c + 4.2949673e+09;
  }
  fVar4 = (float)iStack_20;
  if (iStack_20 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fStack_1c = fStack_1c / fVar4;
  iStack_28 = (int)*(short *)(ar4 + 0x1b0) + *(int *)(ar4 + 0x1ac);
  uVar1 = FUN_8c120348(ar4,0xc,&iStack_28,2);
  return uVar1;
}

__asm__(".globl _FUN_8c119706\n.set _FUN_8c119706, _FUN_8c119706_def\n");
//@unit 8c1197d8
#include "../decls.h"
undefined4 FUN_8c1197d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short *psVar8;
  int ar6_00;
  int ar7_00;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  int *piVar12;
  uint uStack_30;
  
  sVar7 = 0x77ff;
  ar6_00 = (int)0x77ff;
  psVar11 = (short *)0x0;
  ar7_00 = (int)0x7fff;
  psVar8 = *(short **)(ar4 + 0x54);
  sVar1 = *(short *)(0x19a + ar4);
  iVar2 = 0x19a + 0x12;
  *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < ar6_00) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(ar5 + *(int *)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)ar7_00) {
        ar7_00 = iVar2;
      }
      **(int **)(psVar8 + 4) = **(int **)(psVar8 + 4) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(psVar8 + 2) = *(undefined4 *)(psVar8 + 4);
      psVar8 = *(short **)(psVar8 + 0xc);
    } while (uVar10 < uVar6);
  }
  *(short *)(0x19a + ar4) = (short)ar7_00;
  uVar10 = *(uint *)(0x1b4 + ar4);
  uStack_30 = 0;
  psVar8 = *(short **)(ar4 + 0x54);
  if (uVar6 != 0) {
    do {
      psVar11 = psVar8;
      iVar2 = *(int *)(psVar11 + 8);
      sVar1 = *psVar11;
      sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
      piVar12 = *(int **)(psVar11 + 2);
      piVar9 = piVar12;
      if (sVar7 < *(short *)(iVar2 + 2)) {
        *(short *)(iVar2 + 2) = sVar7;
        piVar9 = *(int **)(0x114 + ar4);
        if (piVar9[1] == 0) {
          uVar3 = FUN_8c112fd8(ar4,piVar9,ar6_00,ar7_00);
          *(undefined4 *)(0x114 + ar4) = uVar3;
        }
        else {
          *(int *)(0x114 + ar4) = piVar9[1];
        }
        iVar4 = (int)0x12c;
        piVar9[1] = (int)piVar12;
        *piVar12 = *piVar12 + 1;
        piVar9[4] = *(int *)(psVar11 + 6);
        *piVar9 = 0;
        iVar5 = (int)0x1ac;
        piVar9[5] = *(int *)(iVar4 + ar4);
        piVar9[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
        piVar12 = *(int **)(iVar2 + 8);
        if (piVar12 != piVar9) {
          *(int **)(iVar2 + 8) = piVar9;
          *piVar9 = *piVar9 + 1;
          iVar2 = *piVar12;
          *piVar12 = iVar2 + -1;
          if (iVar2 + -1 < 1) {
            FUN_8c115ed8(ar4,piVar12,ar6_00,ar7_00);
          }
        }
      }
      if ((1 < uVar10) && (uVar10 - 1 == uStack_30)) {
        iVar2 = *(int *)(ar4 + 0x54);
        sVar7 = *(short *)(ar5 + *(int *)(iVar2 + 0xc) * 2) + sVar1;
        if (sVar7 < *(short *)(iVar2 + 2)) {
          *(short *)(iVar2 + 2) = sVar7;
          piVar12 = piVar9;
          if (piVar9 == *(int **)(psVar11 + 2)) {
            piVar12 = *(int **)(0x114 + ar4);
            if (piVar12[1] == 0) {
              uVar3 = FUN_8c112fd8(ar4,piVar12,ar6_00,ar7_00);
              *(undefined4 *)(0x114 + ar4) = uVar3;
            }
            else {
              *(int *)(0x114 + ar4) = piVar12[1];
            }
            iVar4 = (int)0x12c;
            piVar12[1] = (int)piVar9;
            *piVar9 = *piVar9 + 1;
            piVar12[4] = *(int *)(psVar11 + 6);
            *piVar12 = 0;
            iVar5 = (int)0x1ac;
            piVar12[5] = *(int *)(iVar4 + ar4);
            piVar12[3] = (int)sVar1 + *(int *)(iVar5 + ar4);
          }
          piVar9 = *(int **)(iVar2 + 8);
          if (piVar9 != piVar12) {
            *(int **)(iVar2 + 8) = piVar12;
            *piVar12 = *piVar12 + 1;
            iVar2 = *piVar9;
            *piVar9 = iVar2 + -1;
            if (iVar2 + -1 < 1) {
              FUN_8c115ed8(ar4,piVar9,ar6_00,ar7_00);
            }
          }
        }
      }
      iVar2 = **(int **)(psVar11 + 2) + -1;
      **(int **)(psVar11 + 2) = iVar2;
      if (iVar2 < 1) {
        FUN_8c115ed8(ar4,*(undefined4 *)(psVar11 + 2),ar6_00,ar7_00);
      }
      uStack_30 = uStack_30 + 1;
      psVar8 = *(short **)(psVar11 + 0xc);
    } while (uStack_30 < uVar6);
  }
  *(short *)(0x1b0 + ar4) = psVar11[1];
  return 0;
}

__asm__(".globl _FUN_8c1197d8\n.set _FUN_8c1197d8, _FUN_8c1197d8_def\n");
//@unit 8c119a18
#include "../decls.h"
int FUN_8c119a18_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  float extraout_fr0;
  float extraout_fr0_00;
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  
  cVar4 = '\0';
  fVar1 = (float)ar5;
  if (ar5 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)ar6;
  if (ar6 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)ar4;
  if (ar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = (fVar1 - fVar2) / fVar3;
  fVar1 = 0.08544444;
  if (-26.0 <= fVar3) {
    if (78.0 < fVar3) {
      fVar1 = -4.4671087;
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (cVar4 == '\0') {
        fVar1 = 1.0;
      }
      fVar1 = 10000.0 / (extraout_fr0_00 + fVar1);
    }
    else {
      fVar1 = (91.0 - fVar3) * 76.899994;
    }
  }
  else {
    thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
    if (cVar4 == '\0') {
      fVar1 = 1.0;
    }
    fVar1 = 10000.0 / (extraout_fr0 + fVar1);
  }
  if (2.1474836e+09 <= fVar1) {
    fVar1 = fVar1 - 4.2949673e+09;
  }
  return (int)fVar1;
}

__asm__(".globl _FUN_8c119a18\n.set _FUN_8c119a18, _FUN_8c119a18_def\n");
//@unit 8c119a1e
#include "../decls.h"
int FUN_8c119a1e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  double in_dr0;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr5;
  float fVar8;
  double dVar7;
  float fVar9;
  double in_dr14;
  double in_xd2;
  double in_xd14;
  char in_T;
  bool bVar10;
  int in_FPUL;
  int iVar11;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  fVar4 = (float)in_FPUL;
  if (in_T != '\x01') {
    if (in_FPSCR_PR == 0) {
      fVar4 = fVar4 + 0x4f800000;
    }
    else {
      fVar4 = SUB84((double)CONCAT44(0x4f800000,fVar4) + (double)CONCAT44(0x4f800000,fVar4),0);
    }
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar6,fVar4);
  }
  else {
    dVar5 = (double)ar6;
  }
  if (ar6 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_PR == 0) {
    fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)ar4,fVar4);
  }
  else {
    dVar5 = (double)ar4;
  }
  if (ar4 < 0) {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == 0) {
    in_xd2 = (double)CONCAT44(SUB84(dVar5,0),in_fr5);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(in_xd2,0));
  }
  else {
    dVar5 = in_xd2 / dVar5;
  }
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44(DAT_8c119ab4,DAT_8c119ab0);
  }
  else {
    dVar6 = (double)CONCAT44(DAT_8c119ab8,DAT_8c119ab4);
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  fVar8 = (float)((ulonglong)dVar5 >> 0x20);
  if (in_FPSCR_PR == 0) {
    bVar10 = fVar8 < fVar4;
  }
  else {
    bVar10 = dVar5 < dVar6;
  }
  dVar7 = dVar5;
  if (in_FPSCR_SZ == 0) {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),fVar8);
    dVar7 = in_xd14;
  }
  if (in_FPSCR_PR == 0) {
    fVar9 = SUB84(in_dr14,0) * SUB84(dVar6,0);
  }
  else {
    fVar9 = SUB84(in_dr14 * dVar6,0);
  }
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (bVar10) {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,DAT_8c119ab8);
      dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
    }
    if (in_FPSCR_PR == 0) {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(in_dr0,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
    thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
    if (in_FPSCR_SZ == 0) {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119ac0);
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0));
    }
    else {
      dVar5 = in_dr0 + dVar6;
    }
    if (in_FPSCR_SZ == 0) {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119ac4);
    }
    if (in_FPSCR_PR == 0) {
      fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar7 / dVar5,0);
    }
  }
  else {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = (double)CONCAT44(uVar3,(undefined4)DAT_8c119ac8);
    }
    if (in_FPSCR_PR == 0) {
      bVar10 = SUB84(in_dr0,0) < fVar8;
    }
    else {
      bVar10 = in_dr0 < dVar5;
    }
    if (bVar10) {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(fVar4,_DAT_8c119be0);
        dVar7 = (double)CONCAT44(fVar9,SUB84(dVar5,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar6,0),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar6;
      }
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),DAT_8c119be8);
      }
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar5 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) + SUB84(dVar6,0),SUB84(in_dr0,0)
                                );
      }
      else {
        dVar5 = in_dr0 + dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),DAT_8c119bf0);
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar5,0);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(DAT_8c119ad0,(*(uint*)((uchar*)&DAT_8c119ac8+4)));
      }
      else {
        dVar6 = (double)CONCAT44((*(uint *)0x8c119ad4),DAT_8c119ad0);
      }
      if (in_FPSCR_PR == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),SUB84(dVar6,0) - fVar8);
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      if (in_FPSCR_SZ == 0) {
        dVar5 = (double)CONCAT44(fVar8,SUB84(dVar6,0));
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar6,0);
      }
    }
  }
  fVar8 = SUB84(dVar6,0);
  if (in_FPSCR_SZ == 0) {
    fVar8 = fVar4;
  }
  cVar1 = (char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  dVar5 = (double)CONCAT44(0x4f000000,fVar8);
  if (cVar1 != '\0' || 0x4f000000 <= fVar8) {
    if (cVar1 == '\0') {
      dVar5 = (double)CONCAT44(0x4f000000 + 0x4f000000,fVar8 - (0x4f000000 + 0x4f000000)
                              );
    }
    else {
      dVar5 = (dVar5 + dVar5) - (dVar5 + dVar5);
    }
  }
  if (cVar1 == '\0') {
    iVar11 = (int)SUB84(dVar5,0);
  }
  else {
    iVar11 = (int)dVar5;
  }
  return iVar11;
}

__asm__(".globl _FUN_8c119a1e\n.set _FUN_8c119a1e, _FUN_8c119a1e_def\n");
//@unit 8c119b16
#include "../decls.h"
undefined4 FUN_8c119b16_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  undefined8 in_dr0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
  if (ar6 != ar7) {
    cVar7 = '\0';
    fVar2 = (float)ar5;
    if (ar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar6 * 4);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = *(int *)(*(int *)(ar4 + 0x1cc) + ar7 * 4);
    fVar4 = (float)iVar1;
    if (iVar1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar5 = (float)(ar6 - ar7);
    if (ar6 - ar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar5 = ((fVar2 - fVar3) + fVar4) / fVar5;
    fVar2 = 0.08544444;
    if (-26.0 <= fVar5) {
      if (78.0 < fVar5) {
        fVar2 = -4.4671087;
        thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
        if (cVar7 == '\0') {
          fVar2 = 1.0;
        }
        fVar6 = 10000.0 / (fVar6 + fVar2);
      }
      else {
        fVar6 = (91.0 - fVar5) * 76.899994;
      }
    }
    else {
      thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
      if (cVar7 == '\0') {
        fVar2 = 1.0;
      }
      fVar6 = 10000.0 / (fVar6 + fVar2);
    }
    fVar6 = fVar6 + 0.5;
    if (2.1474836e+09 <= fVar6) {
      fVar6 = fVar6 - 4.2949673e+09;
    }
    return (int)fVar6;
  }
  return 0;
}

__asm__(".globl _FUN_8c119b16\n.set _FUN_8c119b16, _FUN_8c119b16_def\n");
//@unit 8c119c68
#include "../decls.h"
int * FUN_8c119c68_def(int ar4,int ar5,uint *ar6,uint *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *ar5_00;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_84;
  uint *puStack_80;
  uint *puStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char cStack_6c;
  int iStack_68;
  int iStack_64;
  uint *puStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  cStack_6c = (char)ar6;
  puStack_48 = ar7;
  ar5_00 = *(int **)(0x8c + ar4);
  piStack_78 = (int *)0x0;
  puStack_60 = (uint *)0x1;
  iStack_50 = 0;
  iStack_54 = 0;
  puStack_4c = (uint *)**(uint **)((int)&uStack_84 + (int)0x84);
  iStack_3c = 0;
  iStack_40 = 1;
  puVar6 = (undefined4 *)0x0;
  if (*(int *)(ar5 + 8) != 0) {
    uStack_34 = *(undefined4 *)(ar5 + 8);
    puVar6 = &uStack_38;
    uStack_28 = *(undefined4 *)(ar5 + 0xc);
    uStack_38 = 1;
    puStack_7c = *(uint **)(0x12c + ar4);
    iStack_68 = (int)*(short *)(ar5 + 2) + *(int *)(0x1ac + ar4);
  }
  uStack_44 = (uint)((char)ar6 == '\0');
  if (puVar6 != (undefined4 *)0x0) {
    iVar4 = puVar6[4];
    while (iVar4 != 0) {
      uVar1 = (uint)uStack_84 >> 0x10;
      uStack_84 = CONCAT22((short)uVar1,*(undefined2 *)(puVar6[4] + 2));
      uStack_84 = CONCAT22(*(undefined2 *)(puVar6[4] + 4),*(undefined2 *)(puVar6[4] + 2));
      puVar9 = (undefined4 *)puVar6[1];
      puVar7 = (undefined4 *)0x0;
      if (((uStack_44 != 0) && (puVar9[4] != 0)) &&
         (uStack_70 = CONCAT22(*(undefined2 *)(puVar9[4] + 4),*(undefined2 *)(puVar9[4] + 2)),
         *(uint *)(0x108 + ar4) <= uStack_70)) {
        iStack_3c = 1;
        puVar8 = (undefined4 *)puVar9[1];
        if ((*(ushort *)puVar8[4] & 2) == 0) {
          uStack_74 = CONCAT22(*(undefined2 *)(puVar8[4] + 4),*(undefined2 *)(puVar8[4] + 2));
          iVar5 = *(int *)(0x104 + ar4);
          iVar4 = *(int *)(0x104 + -4 + ar4);
          uStack_58 = (uint)*(ushort *)(*(int *)(uStack_74 * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
          if (*(short *)(iVar5 + *(int *)(uStack_84 * 8 + iVar4 + 4) * 0xc + 8) == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            puVar7 = puVar8;
            if (uStack_58 == 0) {
              puVar7 = (undefined4 *)puVar8[1];
              puVar9 = puVar8;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)puVar8[1];
          puVar9 = puVar8;
        }
      }
      iStack_64 = puVar9[3];
      puStack_80 = (uint *)puVar9[5];
      iStack_5c = iStack_68 - puVar9[3];
      if (iStack_40 != 0) {
        if (puStack_4c < puStack_80) {
          puStack_4c = puStack_80;
          **(int **)((int)&uStack_84 + (int)0x8c) = iStack_5c;
        }
        if (cStack_6c == '\0') {
          iStack_54 = iStack_68 -
                      (uint)*(ushort *)(0x1da + ar4) *
                      (int)*(short *)(0x1da + -0x1c + ar4);
          puStack_60 = puStack_7c;
          iStack_50 = *(int *)(*(int *)(0x1d0 + ar4) + (int)puStack_7c * 4);
        }
        iStack_40 = 0;
      }
      if (ar5_00[4] == 0) {
        piVar3 = (int *)FUN_8c112d82(ar4,ar5_00,ar6,ar7);
      }
      else {
        piVar3 = (int *)ar5_00[4];
      }
      ar5_00[4] = (int)piStack_78;
      piStack_78 = ar5_00;
      ar5_00[3] = 0;
      *ar5_00 = uStack_84;
      if (cStack_6c == '\0') {
        if (*(ushort *)puVar6[4] >> 2 == *(ushort *)(0xe2 + ar4)) {
          puStack_60 = (uint *)((int)puStack_60 - ((int)puStack_7c - (int)puStack_80));
          iStack_54 = iStack_54 - iStack_5c;
          iStack_50 = iStack_50 -
                      (*(int *)((int)puStack_7c * 4 + *(int *)(0x1d0 + ar4)) -
                      *(int *)((int)puStack_80 * 4 + *(int *)(0x1d0 + ar4)));
        }
        if ((*(ushort *)(uStack_84 * 2 + *(int *)(0xc0 + ar4)) & 0x80) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(0x1be + ar4);
        }
        *(undefined2 *)(ar5_00 + 5) = (*(uint*)((uchar*)&puStack_7c+0));
        iVar4 = (iStack_68 - iVar4) - iStack_64;
        ar5_00[2] = iVar4;
        ar7 = puStack_80;
        iVar4 = FUN_8c119b16(ar4,iVar4,puStack_7c,puStack_80);
        ar5_00[1] = iVar4;
        ar6 = puStack_7c;
      }
      else {
        ar6 = (uint *)puVar6[4];
        uVar2 = FUN_8c113e64(ar4,uStack_84,ar6,ar7);
        *(short *)((int)ar5_00 + 0x16) = (short)uVar2;
      }
      if (iStack_3c != 0) {
        if (puVar7 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)puVar9[1];
          if (uStack_58 == 0) {
            puStack_80 = (uint *)puVar9[5];
            iStack_64 = puVar9[3];
          }
        }
        else if (puVar7[4] != 0) {
          if ((*(ushort *)puVar7[4] & 2) != 0) {
            puStack_80 = (uint *)puVar7[5];
            iStack_64 = puVar7[3];
            puVar9 = puVar7;
          }
          puVar9 = (undefined4 *)puVar9[1];
        }
        iStack_3c = 0;
      }
      puStack_7c = puStack_80;
      iStack_68 = iStack_64;
      ar5_00 = piVar3;
      if (puVar9 == (undefined4 *)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (piStack_78 == (int *)0x0) {
    piVar10 = (int *)0x0;
    piVar3 = ar5_00;
  }
  else {
    if (ar5_00[4] == 0) {
      piVar3 = (int *)FUN_8c112d82(ar4,ar5_00,ar6,ar7);
    }
    else {
      piVar3 = (int *)ar5_00[4];
    }
    ar5_00[3] = (int)piStack_78;
    if ((uint)*(ushort *)(piStack_78 + 5) < *puStack_48) {
      *puStack_48 = (uint)*(ushort *)(piStack_78 + 5);
      **(int **)((int)&uStack_84 + (int)0x88) = piStack_78[2];
    }
    piVar10 = ar5_00;
    if (cStack_6c == '\0') {
      ar5_00[2] = iStack_54;
      ar5_00[1] = iStack_50;
      *(short *)(ar5_00 + 5) = (short)puStack_60;
    }
  }
  *(int **)(0x8c + ar4) = piVar3;
  **(uint **)((int)&uStack_84 + (int)0x84) = (uint)puStack_4c;
  return piVar10;
}

__asm__(".globl _FUN_8c119c68\n.set _FUN_8c119c68, _FUN_8c119c68_def\n");
//@unit 8c11a014
#include "../decls.h"
undefined4 * FUN_8c11a014_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(0x114 + ar4);
  puVar1 = (undefined4 *)0x0;
  for (; ar5 != 0; ar5 = *(int *)(ar5 + 8)) {
    puVar5 = *(undefined4 **)(0x114 + ar4);
    if (puVar5[1] == 0) {
      uVar2 = FUN_8c112fd8(ar4,puVar5);
      *(undefined4 *)(0x114 + ar4) = uVar2;
    }
    else {
      *(undefined4 *)(0x114 + ar4) = puVar5[1];
    }
    puVar5[4] = *(undefined4 *)(ar5 + 0x10);
    *puVar5 = 1;
    puVar5[3] = *(undefined4 *)(ar5 + 0xc);
    puVar5[5] = *(undefined4 *)(ar5 + 0x14);
    piVar3 = *(int **)(ar5 + 4);
    puVar5[1] = piVar3;
    *piVar3 = *piVar3 + 1;
    puVar5[2] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = puVar5;
    }
    puVar1 = puVar5;
  }
  *puVar4 = 0;
  return puVar4;
}

__asm__(".globl _FUN_8c11a014\n.set _FUN_8c11a014, _FUN_8c11a014_def\n");
//@unit 8c11a02c
#include "../decls.h"
undefined4 * FUN_8c11a02c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_r10;
  undefined4 *unaff_r11;
  int unaff_r12;
  int unaff_r13;
  undefined4 *ar5_00;
  char in_T;
  
  puVar3 = *(undefined4 **)(in_r0 + unaff_r12);
  if (in_T != '\x01') {
    do {
      ar5_00 = *(undefined4 **)(0x114 + unaff_r12);
      if (ar5_00[1] == 0) {
        uVar1 = FUN_8c112fd8(unaff_r12,ar5_00,ar6,ar7);
        *(undefined4 *)(0x114 + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(0x114 + unaff_r12) = ar5_00[1];
      }
      ar5_00[4] = *(undefined4 *)(unaff_r13 + 0x10);
      *ar5_00 = 1;
      ar5_00[3] = *(undefined4 *)(unaff_r13 + 0xc);
      ar5_00[5] = *(undefined4 *)(unaff_r13 + 0x14);
      piVar2 = *(int **)(unaff_r13 + 4);
      ar5_00[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      ar5_00[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)0x0) {
        unaff_r11[2] = ar5_00;
      }
      unaff_r13 = *(int *)(unaff_r13 + 8);
      unaff_r11 = ar5_00;
    } while (unaff_r13 != 0);
  }
  *puVar3 = unaff_r10;
  return puVar3;
}

__asm__(".globl _FUN_8c11a02c\n.set _FUN_8c11a02c, _FUN_8c11a02c_def\n");
//@unit 8c11a09e
#include "../decls.h"
undefined4 * FUN_8c11a09e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (undefined4 *)(uint)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (undefined4 *)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c11a09e\n.set _FUN_8c11a09e, _FUN_8c11a09e_def\n");
//@unit 8c11a0e8
#include "../decls.h"
int * FUN_8c11a0e8_def(int ar4,int *ar5,uint ar6,uint ar7)

{
  int *a5;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *a5_00;
  char cVar6;
  int *piVar7;
  int *ar5_00;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_44;
  int *piStack_40;
  int *piStack_38;
  int iStack_30;
  int *piStack_2c;
  uint uStack_28;
  int iStack_24;
  
  cVar6 = (char)ar6;
  piVar8 = *(int **)(0x8c + ar4);
  piStack_38 = (int *)0x0;
  piVar9 = (int *)(uint)ar5[2];
  piStack_40 = (int *)0x0;
  ar5_00 = *(int **)(0x124 + ar4);
  iStack_24 = 0;
  iStack_30 = 1;
  uStack_28 = 0;
  piStack_2c = (int *)0x0;
  a5_00 = ar5;
  if (piVar9 != (int *)0x0) {
    if (cVar6 == '\0') {
      piStack_2c = (int *)(((int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4)) -
                          (uint)*(ushort *)(0x1da + ar4) *
                          (int)*(short *)(0x1be + ar4));
      iStack_30 = *(int *)(0x12c + ar4);
      uStack_28 = *(uint *)(*(int *)(0x1d0 + ar4) + iStack_30 * 4);
    }
    if (piVar8[4] == 0) {
      piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    uStack_44 = (int *)CONCAT22(*(undefined2 *)(ar5[3] + 4),*(undefined2 *)(ar5[3] + 2));
    piVar8[4] = 0;
    piVar8[3] = 0;
    if (cVar6 == '\0') {
      iVar3 = (int)0xc0;
      *(undefined2 *)(piVar8 + 5) = *(undefined2 *)(0x12c + ar4);
      if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(iVar3 + ar4)) & 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(0x1be + ar4);
      }
      piVar8[2] = (((int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4)) - piVar9[3]) -
                  iVar3;
      a5_00 = (int *)piVar8[2];
      ar6 = (uint)*(ushort *)(piVar8 + 5);
      ar7 = piVar9[5] & 0xffff;
      iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
      piVar8[1] = iVar3;
    }
    else {
      ar6 = ar5[3];
      a5_00 = uStack_44;
      uVar2 = FUN_8c113e64(ar4,uStack_44,ar6,ar7);
      *(short *)((int)piVar8 + 0x16) = (short)uVar2;
    }
    *piVar8 = (int)uStack_44;
    piVar7 = piVar8;
    piStack_38 = piVar8;
    while (piVar1 = piStack_40, piVar8 = piVar4, a5 = piVar9, a5 != (int *)0x0) {
      piVar4 = piVar8;
      if (a5[4] == 0) {
        piVar9 = (int *)0x0;
        piStack_40 = piVar1;
      }
      else {
        piVar9 = (int *)a5[1];
        piStack_40 = piVar7;
        if ((*(ushort *)a5[4] & 2) == 0) {
          if (piVar8[4] == 0) {
            piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
          }
          else {
            piVar4 = (int *)piVar8[4];
          }
          uStack_44 = (int *)CONCAT22(*(undefined2 *)(a5[4] + 4),*(undefined2 *)(a5[4] + 2));
          piVar8[4] = (int)piStack_38;
          piVar8[3] = 0;
          if (cVar6 == '\0') {
            ar6 = a5[5];
            ar7 = piVar9[5];
            if (*(ushort *)a5[4] >> 2 == *(ushort *)(0xe2 + ar4)) {
              iStack_30 = iStack_30 - (ar6 - ar7);
              piStack_2c = (int *)((int)piStack_2c - (a5[3] - *(int *)(a5[1] + 0xc)));
              uStack_28 = uStack_28 -
                          (*(int *)(ar6 * 4 + *(int *)(0x1d0 + ar4)) -
                          *(int *)(ar7 * 4 + *(int *)(0x1d0 + ar4)));
            }
            if ((*(ushort *)((int)uStack_44 * 2 + *(int *)(0xc0 + ar4)) & 0x80) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)*(short *)(0x1be + ar4);
            }
            *(short *)(piVar8 + 5) = (short)ar6;
            a5_00 = (int *)((a5[3] - piVar9[3]) - iVar3);
            piVar8[2] = (int)a5_00;
            iVar3 = FUN_8c119b16(ar4,a5_00,ar6,ar7);
            piVar8[1] = iVar3;
          }
          else {
            ar6 = a5[4];
            a5_00 = uStack_44;
            uVar2 = FUN_8c113e64(ar4,uStack_44,ar6,ar7);
            *(short *)((int)piVar8 + 0x16) = (short)uVar2;
          }
          *piVar8 = (int)uStack_44;
          piVar7 = a5;
          if ((a5 != (int *)(uint)ar5[2]) && (1 < *a5)) {
            a5_00 = a5;
            piVar7 = (int *)FUN_8c11a014(ar4,a5,ar6,ar7);
          }
          ar5_00 = (int *)*ar5_00;
          if (ar5_00 == *(int **)(0x120 + ar4)) {
            a5_00 = ar5_00;
            FUN_8c11318e(ar4,ar5_00,ar6,ar7);
          }
          ar5_00[2] = (int)piVar7;
          piStack_38 = piVar8;
          piStack_40 = piVar7;
          if ((piVar7 != a5) && (piVar1 != (int *)0x0)) {
            *piVar7 = *piVar7 + 1;
            iVar3 = *(int *)piVar1[1] + -1;
            *(int *)piVar1[1] = iVar3;
            if (iVar3 < 1) {
              a5_00 = (int *)piVar1[1];
              FUN_8c115f18(ar4,a5_00,ar6,ar7);
            }
            piVar1[1] = (int)piVar7;
          }
        }
      }
    }
  }
  piVar9 = *(int **)(0x124 + ar4);
  iVar3 = (int)0x124;
  *(int *)(iVar3 + ar4) = *ar5_00;
  if (*(int *)(iVar3 + ar4) == *(int *)(iVar3 + -4 + ar4)) {
    a5_00 = *(int **)(0x124 + ar4);
    FUN_8c11318e(ar4,a5_00,ar6,ar7);
  }
  if (piStack_38 == (int *)0x0) {
    piStack_40 = (int *)0x0;
    piVar4 = piVar8;
  }
  else {
    if (piVar8[4] == 0) {
      a5_00 = piVar8;
      piVar4 = (int *)FUN_8c112d82(ar4,piVar8,ar6,ar7);
    }
    else {
      piVar4 = (int *)piVar8[4];
    }
    piVar8[3] = (int)piStack_38;
    piStack_40 = piVar8;
    if (cVar6 == '\0') {
      piVar8[2] = (int)*(short *)((int)ar5 + 2) + *(int *)(0x1ac + ar4);
      iVar3 = FUN_8c119a18(iStack_30,piStack_2c,uStack_28,ar7);
      piVar8[1] = iVar3;
      a5_00 = piStack_2c;
      ar6 = uStack_28;
    }
  }
  piVar8 = (int *)0x0;
  for (; ar5_00 != piVar9; ar5_00 = (int *)ar5_00[1]) {
    piVar7 = (int *)ar5_00[2];
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
      if (piVar7[2] != 0) {
        piVar8 = (int *)FUN_8c11a09e(piVar7[2],a5_00,ar6,ar7);
        iStack_24 = piVar8[3] - piVar7[3];
        *piVar8 = *piVar7 + -1;
        piVar7[2] = 0;
      }
    }
    else {
      iVar3 = FUN_8c11a014(ar4,piVar7,ar6,ar7);
      *piVar8 = *piVar8 + 1;
      iVar5 = **(int **)(iVar3 + 4) + -1;
      **(int **)(iVar3 + 4) = iVar5;
      a5_00 = piVar7;
      if (iVar5 < 1) {
        a5_00 = *(int **)(iVar3 + 4);
        FUN_8c115f18(ar4,a5_00,ar6,ar7);
      }
      *(int **)(iVar3 + 4) = piVar8;
      iVar5 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iStack_24;
      piVar8 = (int *)FUN_8c11a09e(iVar3,a5_00,ar6,ar7);
      iStack_24 = piVar8[3] - iVar5;
    }
  }
  if (piVar8 == (int *)0x0) {
    if (ar5[2] != 0) {
      iVar3 = *(int *)(uint)ar5[2] + -1;
      *(int *)(uint)ar5[2] = iVar3;
      if (iVar3 < 1) {
        FUN_8c115f18(ar4,ar5[2],ar6,ar7);
      }
      ar5[2] = 0;
    }
    *(undefined2 *)((int)ar5 + 2) = 0x7fff;
  }
  else {
    *piVar8 = *piVar8 + 1;
    iVar3 = *(int *)(uint)ar5[2] + -1;
    *(int *)(uint)ar5[2] = iVar3;
    if (iVar3 < 1) {
      FUN_8c115f18(ar4,ar5[2],ar6,ar7);
    }
    ar5[2] = (int)piVar8;
    *(short *)((int)ar5 + 2) = (short)iStack_24 + *(short *)((int)ar5 + 2);
  }
  *(int **)(0x124 + ar4) = piVar9;
  *(int **)(0x8c + ar4) = piVar4;
  return piStack_40;
}

__asm__(".globl _FUN_8c11a0e8\n.set _FUN_8c11a0e8, _FUN_8c11a0e8_def\n");
//@unit 8c11a588
#include "../decls.h"
int FUN_8c11a588_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_c;
  
  if (ar6 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((**(ushort **)(iVar1 + 0x10) & 1) != 0) &&
           (uStack_c = CONCAT22(*(undefined2 *)(*(int *)(iVar1 + 0x10) + 4),
                                *(undefined2 *)(*(int *)(iVar1 + 0x10) + 2)),
           (*(ushort *)(*(int *)(0xc0 + ar4) + uStack_c * 2) & 0x80) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11a588\n.set _FUN_8c11a588, _FUN_8c11a588_def\n");
//@unit 8c11a634
#include "../decls.h"
int FUN_8c11a634_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *a7;
  int ar5_00;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  iVar3 = ar4[0x15];
  ar5_00 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((**(ushort **)(iVar3 + 0xc) & 1) != 0) &&
         (uStack_28 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2)),
         (*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_28 * 2) & 2) != 0)) {
        ar5_00 = ar5_00 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x14));
  }
  if (ar5_00 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar5_00 << 2,ar6,ar7);
    *ar5 = uVar1;
    iVar3 = ar4[0x15];
    piStack_24 = (int *)*ar5;
    if (*(undefined **)((int)0x134 + (int)ar4) == (&FUN_8c11617a)) {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              FUN_8c115f18(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_30 = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_30 * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                FUN_8c115f18(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    else {
      uStack_34 = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((**(ushort **)(iVar3 + 0xc) & 1) == 0) {
            iVar2 = **(int **)(iVar3 + 8) + -1;
            **(int **)(iVar3 + 8) = iVar2;
            if (iVar2 < 1) {
              FUN_8c115ed8(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
            }
            *(undefined4 *)(iVar3 + 8) = 0;
          }
          else {
            uStack_2c = CONCAT22(*(undefined2 *)(*(int *)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(*(int *)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(*(int *)((int)0xc0 + (int)ar4) + uStack_2c * 2) & 2) == 0) {
              iVar2 = **(int **)(iVar3 + 8) + -1;
              **(int **)(iVar3 + 8) = iVar2;
              if (iVar2 < 1) {
                FUN_8c115ed8(ar4,*(undefined4 *)(iVar3 + 8),ar6,ar7);
              }
              *(undefined4 *)(iVar3 + 8) = 0;
            }
            else {
              *piStack_24 = iVar3;
              piStack_24 = piStack_24 + 1;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x18);
          uStack_34 = uStack_34 + 1;
        } while (uStack_34 < *(ushort *)(ar4 + 0x14));
      }
    }
    a7 = (&DATA_8c11a5f6);
    FUN_8c0140b4(*ar5,ar5_00,4,(&DATA_8c11a5f6));
    uVar1 = FUN_8c11a588(ar4,*ar5,ar5_00,a7);
    *(short *)((int)0x1da + (int)ar4) = (short)uVar1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11a634\n.set _FUN_8c11a634, _FUN_8c11a634_def\n");
//@unit 8c11a88c
#include "../decls.h"
int FUN_8c11a88c_def(int *ar4,short *ar5,short *ar6,undefined4 ar7)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int *a7;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar4 = FUN_8c11a634(ar4,&piStack_38,ar6,ar7);
  if (uVar4 == 0) {
    iVar6 = (int)0x80;
    *(undefined4 *)(iVar6 + (int)ar4) = 0;
  }
  else {
    iStack_30 = -1;
    uVar10 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    sVar2 = *(short *)(*piStack_38 + 2);
    a7 = (int *)(int)sVar2;
    iVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 + 1;
        ar6 = (short *)(*(int *)((int)piStack_38 + iVar7) + 2);
        *ar6 = *ar6 - sVar2;
        iVar7 = iVar7 + 4;
      } while (uVar10 < uVar4);
    }
    if ((*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) &&
       ((*(char *)((int)0xf8 + (int)ar4) == '\0' || (((uint)ar5 & 0xff) != 0)))) {
      uVar10 = 1;
      ar6 = ar5;
      iVar7 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
      iVar6 = iVar7;
      if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(uint *)((int)0x138 + (int)ar4))) {
        do {
          uVar8 = 1;
          iVar6 = *piStack_38;
          sVar2 = *(short *)(iVar6 + 2);
          if (1 < uVar4) {
            sVar3 = *(short *)(piStack_38[1] + 2);
            while (sVar3 < sVar2) {
              iVar9 = uVar8 - 1;
              piVar1 = piStack_38 + uVar8;
              uVar8 = uVar8 + 1;
              piStack_38[iVar9] = *piVar1;
              if (uVar4 <= uVar8) break;
              sVar3 = *(short *)(piStack_38[uVar8] + 2);
            }
          }
          piStack_38[uVar8 - 1] = iVar6;
          ar6 = ar5;
          iVar6 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
          *(int *)(iVar5 + 0x10) = iVar6;
          uVar10 = uVar10 + 1;
        } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(uint *)((int)0x138 + (int)ar4)));
      }
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = *(uint *)((int)0x138 + (int)ar4);
      if (uVar4 <= *(uint *)((int)0x138 + (int)ar4)) {
        uVar10 = uVar4;
      }
      iVar6 = uVar10 << 2;
      iVar7 = 0;
      while (uVar10 != 0) {
        iVar6 = iVar6 + -4;
        uVar10 = uVar10 - 1;
        a7 = &iStack_30;
        ar6 = ar5;
        iVar5 = FUN_8c119c68(ar4,*(undefined4 *)((int)piStack_38 + iVar6),ar5,a7);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x10) = iVar7;
          iVar7 = iVar5;
        }
      }
    }
    *(int *)((int)0x80 + (int)ar4) = iVar7;
    iStack_24 = *ar4;
    iVar6 = (**(code **)(iStack_24 + 0x18))(iStack_24,piStack_38,ar6,a7);
    if ((iVar7 != 0) && (((uint)ar5 & 0xff) == 0)) {
      iVar11 = iStack_28 + iStack_2c;
      iVar9 = *(int *)((int)0x1d0 + (int)ar4);
      iVar12 = (iStack_30 + *(int *)((int)0x12c + (int)ar4)) - iStack_34;
      iVar13 = *(int *)(*(int *)((int)0x12c + (int)ar4) * 4 + iVar9);
      iVar5 = *(int *)(iStack_34 * 4 + iVar9);
      iVar6 = iStack_30 * 4;
      iVar9 = *(int *)(iVar6 + iVar9);
      for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
        iVar6 = (*(code *)(&FUN_8c119a18))
                          ((uint)*(ushort *)(iVar7 + 0x14) - iVar12,*(int *)(iVar7 + 8) - iVar11,
                           *(int *)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9),a7);
        *(int *)(iVar7 + 4) = iVar6;
      }
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c11a88c\n.set _FUN_8c11a88c, _FUN_8c11a88c_def\n");
//@unit 8c11aaa8
#include "../decls.h"
undefined4 FUN_8c11aaa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(0x19c + ar4);
  if (iVar5 != 0) {
    puVar3 = *(ushort **)(iVar5 + 0xc);
    if (*(undefined **)(0x134 + ar4) == (&FUN_8c119320)) {
      iVar2 = (int)puVar3 - *(int *)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(uint *)(ar4 + 0x38)) ||
         (*(int *)(0x1b4 + ar4) + *(uint *)(ar4 + 0x38) <= uVar4)) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(int *)(puVar3 + 1);
      if (((*(ushort *)(iVar2 * 2 + *(int *)(0xc0 + ar4)) & 2) == 0) ||
         (iVar2 != *(int *)(0x150 + ar4))) {
        *(undefined2 *)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(ar4 + 0x34) = *(short *)(ar4 + 0x34) + 1;
      }
      *(int *)(0x150 + ar4) = iVar2;
    }
    if (*(uint *)(0x14c + ar4) < (uint)*(ushort *)(ar4 + 0x34)) {
      if (*(undefined **)(0x134 + ar4) == (&FUN_8c119320)) {
        iVar5 = *(int *)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(int *)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(int *)(iVar5 + 0x10) - *(int *)(ar4 + 0x48);
            iVar5 = *(int *)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(int *)(ar4 + 0x40) + *(int *)(0x1b4 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(int *)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(undefined2 *)(ar4 + 0x34) = 0;
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11aaa8\n.set _FUN_8c11aaa8, _FUN_8c11aaa8_def\n");
//@unit 8c11abc6
#include "../decls.h"
undefined4 FUN_8c11abc6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(0x80 + ar4) == 0) {
    ar5 = 0;
    uVar1 = 10;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(0x80 + ar4);
    uVar1 = 9;
  }
  uVar1 = FUN_8c120348(ar4,uVar1,uVar2,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c11abc6\n.set _FUN_8c11abc6, _FUN_8c11abc6_def\n");
//@unit 8c11abf0
#include "../decls.h"
undefined4 FUN_8c11abf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c112f40(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    FUN_8c11a88c(ar4,0,ar6,ar7);
    uVar1 = FUN_8c11abc6(ar4,0,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11abf0\n.set _FUN_8c11abf0, _FUN_8c11abf0_def\n");
//@unit 8c11ac4c
#include "../decls.h"
undefined4 FUN_8c11ac4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_8c112f40(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    *(undefined4 *)(0x13c + -4 + ar4) = *(undefined4 *)(0x13c + ar4);
    FUN_8c11a88c(ar4,1,ar6,ar7);
    if (*(int *)(0x80 + ar4) == 0) {
      uVar3 = FUN_8c11abc6(ar4,0,ar6,ar7);
      return uVar3;
    }
    *(undefined4 *)(0x140 + -8 + ar4) = *(undefined4 *)(0x140 + ar4);
    uVar1 = FUN_8c113e98(ar4,*(undefined4 *)(0x80 + ar4),ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)0x1a4;
      *(undefined **)(iVar2 + ar4) = (&DATA_8c11acde);
      *(undefined1 *)(iVar2 + 0x34 + ar4) = 1;
      uVar3 = FUN_8c120348(ar4,0xd,0);
      return uVar3;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ac4c\n.set _FUN_8c11ac4c, _FUN_8c11ac4c_def\n");
//@unit 8c11ace2
#include "../decls.h"
undefined4 FUN_8c11ace2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  int unaff_r14;
  
  FUN_8c11a88c(ar4,0,ar6,ar7);
  *(undefined **)(0x1a4 + unaff_r14) = (&FUN_8c11ac4c);
  a5 = *(undefined4 *)(0x100 + unaff_r14);
  uVar1 = FUN_8c11abc6(unaff_r14,a5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  FUN_8c113c46(unaff_r14,a5,ar6,ar7);
  FUN_8c113bcc(unaff_r14,a5,ar6,ar7);
  *(undefined1 *)(unaff_r14 + 0x7c) = 0;
  *(undefined1 *)(0x1d8 + unaff_r14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c11ace2\n.set _FUN_8c11ace2, _FUN_8c11ace2_def\n");
//@unit 8c11ad68
#include "../decls.h"
undefined4 FUN_8c11ad68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_8c112f40(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
    *(undefined4 *)(0x13c + -4 + ar4) = *(undefined4 *)(0x13c + ar4);
    FUN_8c11a88c(ar4,0,ar6,ar7);
    *(undefined4 *)(0x140 + -8 + ar4) = *(undefined4 *)(0x140 + ar4);
    uVar1 = FUN_8c114774(ar4,uVar3,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)0x1a4;
      *(undefined **)(iVar2 + ar4) = (&FUN_8c11adde);
      *(undefined1 *)(iVar2 + 0x34 + ar4) = 0;
      uVar3 = FUN_8c120348(ar4,0xe,*(undefined4 *)(0x80 + ar4),0);
      return uVar3;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ad68\n.set _FUN_8c11ad68, _FUN_8c11ad68_def\n");
//@unit 8c11adde
#include "../decls.h"
undefined4 FUN_8c11adde_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  
  puStack_10 = ar5;
  puStack_c = ar6;
  if (ar5 == (undefined4 *)0x0) {
    FUN_8c1148c4(ar4,0,ar6,ar7);
    FUN_8c113bcc(ar4,ar5,ar6,ar7);
    FUN_8c113ac8(ar4,ar5,ar6,ar7);
    *(undefined **)(0x1a4 + ar4) = (&FUN_8c11ad68);
  }
  else {
    uVar1 = FUN_8c11a634(ar4,&uStack_14,ar6,ar7);
    *puStack_10 = uStack_14;
    *puStack_c = uVar1;
  }
  *(undefined1 *)(0x1d8 + ar4) = 1;
  return 0;
}

__asm__(".globl _FUN_8c11adde\n.set _FUN_8c11adde, _FUN_8c11adde_def\n");
//@unit 8c11ae6c
#include "../decls.h"
int FUN_8c11ae6c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar4_00;
  undefined4 *ar4_01;
  int iVar1;
  int iVar2;
  
  ar4_00 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7)
  ;
  ar4_01 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7)
  ;
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)ar4) == 0) {
    *ar4_00 = 0;
    *ar4_01 = 0;
  }
  else {
    iVar2 = (*(int *)(iVar1 + (int)ar4) + 1) * 4;
    memmove(ar4_00,*(undefined4 *)(iVar1 + -8 + (int)ar4),iVar2,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x1cc + (int)ar4),iVar2,ar7);
    iVar1 = (*(int *)((int)0x1d4 + (int)ar4) + 1) * 4;
    memmove(ar4_01,*(undefined4 *)(0x1d4 + -4 + (int)ar4),iVar1,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x1d0 + (int)ar4),iVar1,ar7);
  }
  iVar1 = (int)0x1cc;
  iVar2 = (int)0x96;
  *(undefined4 **)(iVar1 + (int)ar4) = ar4_00;
  *(undefined4 **)(iVar1 + 4 + (int)ar4) = ar4_01;
  iVar1 = iVar1 + 8;
  *(int *)(iVar1 + (int)ar4) = *(int *)(iVar1 + (int)ar4) + iVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c11ae6c\n.set _FUN_8c11ae6c, _FUN_8c11ae6c_def\n");
//@unit 8c11af3a
#include "../decls.h"
undefined4 FUN_8c11af3a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&FUN_8c111fbe);
  iVar2 = (*(code *)(&FUN_8c111fbe))
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  while (iVar2 != 0) {
    iVar2 = (*(code *)puVar1)(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7)
    ;
  }
  return 0;
}

__asm__(".globl _FUN_8c11af3a\n.set _FUN_8c11af3a, _FUN_8c11af3a_def\n");
//@unit 8c11af7e
#include "../decls.h"
undefined4 FUN_8c11af7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (*(code *)(&FUN_8c111fbe))
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  if (iVar1 != 0) {
    if (*(undefined **)(ar4 + 0x18) == (&FUN_8c11af3a)) {
      return 0;
    }
    iVar2 = (int)0x12c;
    *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + 1;
    iVar4 = iVar1;
    iVar2 = (**(code **)(iVar2 + 8 + ar4))(ar4,iVar1,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c1204c4(ar4,0x77,ar6,ar7);
      ar7 = 0;
      ar6 = 0;
      *(undefined **)(ar4 + 0x18) = (&FUN_8c11af3a);
      iVar4 = 0xb;
      uVar3 = FUN_8c120348(ar4,0xb,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    if (*(char *)(0x1d8 + ar4) != '\0') {
      if (*(uint *)(0x1d4 + ar4) <= *(uint *)(0x12c + ar4)) {
        FUN_8c11ae6c(ar4,iVar4,ar6,ar7);
      }
      *(int *)((*(int *)(0x12c + ar4) + 1) * 4 + *(int *)(0x1cc + ar4)) =
           (int)*(short *)((uint)*(ushort *)(0xde + ar4) * 2 + iVar1) +
           *(int *)(*(int *)(0x12c + ar4) * 4 + *(int *)(0x1cc + ar4));
      iVar4 = *(int *)(0x1d0 + ar4);
      *(int *)((*(int *)(0x12c + ar4) + 1) * 4 + iVar4) =
           (int)*(short *)(iVar1 + (uint)*(ushort *)(0xe0 + ar4) * 2) +
           *(int *)(*(int *)(0x12c + ar4) * 4 + iVar4);
    }
    iVar1 = FUN_8c111dfe(*(undefined4 *)(ar4 + 0x2c),iVar4,ar6,ar7);
    iVar4 = iVar1 + (uint)*(ushort *)(*(int *)(ar4 + 0x28) + 0xc);
    uVar3 = (**(code **)(0x1a8 + ar4))(ar4,iVar1,iVar4,ar7);
    if ((uVar3 & 0xffff) == 0) {
      return 1;
    }
    if ((*(int *)(0x128 + ar4) != 0) &&
       (uVar3 = FUN_8c11aaa8(ar4,iVar1,iVar4,ar7), (uVar3 & 0xff) != 0)) {
      *(undefined **)(ar4 + 0x18) = (&FUN_8c11af3a);
      uVar3 = FUN_8c120348(ar4,8,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c11af7e\n.set _FUN_8c11af7e, _FUN_8c11af7e_def\n");
//@unit 8c11b13e
#include "../decls.h"
undefined4 FUN_8c11b13e_def(int *ar4,uint ar5,uint *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint ar5_00;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 ar6_00;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  puVar1 = (&memset);
  uVar11 = ar5 & 0xff;
  if (uVar11 == 4) {
    iVar2 = (int)0x1a4;
    ar4[6] = (int)(&FUN_8c11af3a);
    uVar11 = (**(code **)(iVar2 + (int)ar4))(ar4,ar6,ar7,ar7);
  }
  else {
    if ((uVar11 == 0x21) || (uVar11 == 3)) {
      if ((uVar11 == 3) &&
         (uVar11 = FUN_8c11372e(ar4,ar5,ar6,ar7), (uVar11 & 0xff) != 0)) {
        return 0;
      }
      uVar8 = 0;
      FUN_8c111fbe(ar4[0xb],0,ar6,ar7);
      iVar2 = FUN_8c111dfe(ar4[0xb],uVar8,ar6,ar7);
      iVar12 = (uint)*(ushort *)(ar4[10] + 0xc) + iVar2;
      (*(code *)puVar1)(iVar12,0,(uint)(*(ushort *)(ar4[10] + 0xc) >> 1),ar7);
      (*(code *)puVar1)(iVar12,1,(uint)*(ushort *)((int)0xe4 + (int)ar4),ar7);
      uVar11 = (**(code **)((int)0x1a8 + (int)ar4))(ar4,iVar2,iVar12,ar7);
      if ((uVar11 & 0xffff) == 0) {
        return 0;
      }
      ar4[6] = (int)(&FUN_8c11af7e);
      return 1;
    }
    if (uVar11 == 5) {
      ar4[6] = (int)(&FUN_8c11af3a);
      return 1;
    }
    if (uVar11 != 0x22) {
      if (uVar11 == 0x23) {
        puVar9 = ar6;
        FUN_8c115cec(ar4,ar5,ar6,ar7);
        uVar11 = FUN_8c114e80(ar4,ar6,puVar9,ar7);
      }
      else if (uVar11 == 0x1c) {
        memset(*(undefined4 *)((int)0x94 + (int)ar4),0,ar4[0xf],ar7)
        ;
        piVar7 = (int *)0x0;
        ar6_00 = 7;
        uVar8 = 0x80;
        if (ar7 != (int *)0x0) {
          do {
            uVar10 = *ar6;
            ar6 = ar6 + 1;
            piVar7 = (int *)((int)piVar7 + 1);
            uVar11 = -(uVar10 & 7);
            if ((int)uVar11 < 0) {
              bVar3 = (byte)(0x80 >> (~uVar11 & 0x1f) + 1);
            }
            else {
              bVar3 = (byte)(0x80 << (uVar11 & 0x1f));
            }
            uVar10 = uVar10 >> 3;
            *(byte *)(*(int *)((int)0x94 + (int)ar4) + uVar10) =
                 *(byte *)(*(int *)((int)0x94 + (int)ar4) + uVar10) | bVar3;
          } while (piVar7 < ar7);
        }
        FUN_8c113ac8(ar4,0x80,7,ar6);
        uVar11 = FUN_8c11372e(ar4,uVar8,ar6_00,ar6);
      }
      else {
        if (uVar11 == 0x1d) {
          *ar6 = *(uint *)((int)0x94 + (int)ar4);
          *ar7 = ar4[0xf];
          return 1;
        }
        if (uVar11 == 0x11) {
          return 1;
        }
        if (uVar11 == 0x1a) {
          uVar11 = *ar6;
          uVar10 = ar6[2];
          uVar4 = ar6[3];
          uVar5 = ar6[4];
          ar5_00 = ar6[5];
          uVar6 = ar6[7];
          if (*(uint *)((int)0x158 + (int)ar4) != uVar11) {
            iVar2 = (int)0x154;
            *(undefined1 *)(iVar2 + (int)ar4) = 1;
            *(uint *)(iVar2 + 4 + (int)ar4) = uVar11;
          }
          *(uint *)((int)0x14c + (int)ar4) = uVar5;
          uVar11 = FUN_8c112a20(ar4,uVar10,ar6,ar7);
          if ((uVar11 & 0xff) == 0) {
            if ((int)*(short *)((int)0x1be + (int)ar4) != ar5_00) {
              FUN_8c112b1c(ar4,ar5_00,ar6,ar7);
            }
            if (uVar4 == 0) {
              *(undefined4 *)((int)0x128 + (int)ar4) = 0;
            }
            else {
              *(undefined4 *)((int)0x128 + (int)ar4) = 1;
            }
            *(short *)((int)0x1e8 + (int)ar4) = (short)uVar6;
            return 1;
          }
          return 0;
        }
        if (uVar11 == 0x1b) {
          iVar2 = (int)0x158;
          *ar6 = *(uint *)(iVar2 + (int)ar4);
          ar6[4] = *(uint *)(iVar2 + -0xc + (int)ar4);
          iVar12 = (int)0x1be;
          ar6[2] = *(uint *)(iVar2 + -0x20 + (int)ar4);
          iVar2 = (int)0x128;
          ar6[5] = (int)*(short *)(iVar12 + (int)ar4);
          iVar12 = (int)0x1e8;
          ar6[3] = (uint)(*(int *)(iVar2 + (int)ar4) != 0);
          ar6[7] = (int)*(short *)(iVar12 + (int)ar4);
          return 1;
        }
        if (uVar11 == 0x15) {
          if (ar7 != (int *)0x1) {
            FUN_8c11584e(ar4,ar6,ar6,ar7);
            return 1;
          }
          uVar11 = FUN_8c11584e(ar4,0,ar6,1);
LAB_8c11b488:
          *ar6 = uVar11;
          return 1;
        }
        if (uVar11 == 0x17) {
          puVar9 = ar6;
          FUN_8c115cec(ar4,ar5,ar6,ar7);
          uVar11 = FUN_8c11596e(ar4,ar6,puVar9,ar7);
        }
        else {
          if (uVar11 == 0x18) {
            if (ar7 != (int *)0x1) {
              FUN_8c1158e0(ar4,ar6,ar6,ar7);
              return 1;
            }
            uVar11 = FUN_8c1158e0(ar4,0,ar6,1);
            goto LAB_8c11b488;
          }
          if (uVar11 != 0x19) {
            if (uVar11 == 0x1e) {
              FUN_8c111fbe(*(undefined4 *)(uint)ar4[4],0,ar6,ar7);
              *(undefined **)((int)0x1a4 + (int)ar4) = (&FUN_8c11919e);
              return 1;
            }
            if (uVar11 == (int)0xff) {
              FUN_8c115cec(ar4,ar5,ar6,ar7);
              FUN_8c112c90(ar4,ar5,ar6,ar7);
              FUN_8c112ec6(ar4,ar5,ar6,ar7);
              FUN_8c113124(ar4,ar5,ar6,ar7);
              FUN_8c1132cc(ar4,ar5,ar6,ar7);
              if (*(int *)((int)0xfc + (int)ar4) != 0) {
                (**(code **)(*ar4 + 0x18))
                          (*ar4,*(undefined4 *)((int)0xfc + (int)ar4),ar6,ar7);
              }
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[3],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4[4],ar6,ar7);
              (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
              return 1;
            }
            return 0;
          }
          uVar11 = FUN_8c115ac8(ar4,ar6,ar6,ar7);
        }
      }
      if ((uVar11 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    uVar11 = FUN_8c114bd8(ar4,ar6,ar6,ar7);
  }
  if ((uVar11 & 0xff) != 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11b13e\n.set _FUN_8c11b13e, _FUN_8c11b13e_def\n");
//@unit 8c11b5a0
#include "../decls.h"
int * FUN_8c11b5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *ar5_00;
  
  iVar6 = *(int *)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(ar4 + 0x50));
  }
  piVar5 = *(int **)(iVar6 + 8);
  ar5_00 = piVar5;
  if (*(int *)(0x1b4 + ar4) == 0) {
    sVar1 = *(short *)(0x1b0 + ar4);
    ar5_00 = *(int **)(0x114 + ar4);
    if (ar5_00[1] == 0) {
      uVar2 = FUN_8c112fd8(ar4,ar5_00,ar6,ar7);
      *(undefined4 *)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(0x114 + ar4) = ar5_00[1];
    }
    iVar3 = (int)0x12c;
    ar5_00[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    ar5_00[4] = *(int *)(iVar6 + 0xc);
    *ar5_00 = 0;
    iVar6 = (int)0x1ac;
    ar5_00[5] = *(int *)(iVar3 + ar4);
    ar5_00[3] = (int)sVar1 + *(int *)(iVar6 + ar4);
    ar5_00[5] = ar5_00[5] + 1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11b5a0\n.set _FUN_8c11b5a0, _FUN_8c11b5a0_def\n");
//@unit 8c11b666
#include "../decls.h"
int FUN_8c11b666_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,ar7,ar7,(&FUN_8c11af7e),(&DATA_8c11494a),(&FUN_8c11b13e),
                     (int)0x1ec);
  if (iVar1 != 0) {
    iVar2 = (int)0x1a8;
    *(undefined **)(iVar2 + iVar1) = (&FUN_8c11346c);
    *(undefined4 *)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11b666\n.set _FUN_8c11b666, _FUN_8c11b666_def\n");
//@unit 8c11b6b8
#include "../decls.h"
undefined4 FUN_8c11b6b8_def(int ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
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
  float in_fr4;
  
  uVar5 = 1;
  uVar7 = 0x1c;
  piVar1 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,0x1c,ar7);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_8c112350(ar4,uVar5,uVar7,ar7);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      uVar8 = (uint)*(ushort *)((int)ar6 + 6);
      uVar5 = *ar6;
      uVar6 = (uint)*(ushort *)(ar6 + 1);
      FUN_8c112642(*piVar1,uVar6,uVar8,uVar5,ar5);
      iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        uVar8 = (uint)*(ushort *)((int)ar6 + 0xe);
        uVar5 = ar6[2];
        uVar6 = (uint)*(ushort *)(ar6 + 3);
        FUN_8c112642(piVar1[1],uVar6,uVar8,uVar5);
        iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
        piVar1[3] = iVar2;
        if (iVar2 != 0) {
          uVar8 = (uint)*(ushort *)((int)ar6 + 0x16);
          uVar5 = ar6[4];
          uVar6 = (uint)*(ushort *)(ar6 + 5);
          FUN_8c112642(piVar1[3],uVar6,uVar8,uVar5);
          fVar9 = (float)(ar5 + -1);
          if (ar5 + -1 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
          }
          fVar9 = fVar9 / in_fr4 + 0.5;
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 4.2949673e+09;
          }
          iVar2 = FUN_8c112350(ar4,uVar6,uVar8,uVar5);
          piVar1[4] = iVar2;
          if (iVar2 != 0) {
            uVar7 = 0;
            uVar5 = 1;
            FUN_8c112642(piVar1[4],ar5,1,0);
            iVar2 = FUN_8c112350(ar4,ar5,uVar5,uVar7);
            piVar1[5] = iVar2;
            if (iVar2 != 0) {
              uVar5 = 1;
              ar5_00 = (int)fVar9 + 2;
              iVar2 = ar5_00;
              iVar4 = ar4;
              iVar3 = FUN_8c112410(piVar1[5],ar5_00,1,ar4);
              if (iVar3 != 0) {
                iVar2 = FUN_8c1123b0(ar4,iVar2,uVar5,iVar4);
                piVar1[6] = iVar2;
                if (iVar2 != 0) {
                  uVar5 = 1;
                  iVar2 = ar4;
                  iVar4 = FUN_8c112482(piVar1[6],1,ar5_00,ar4);
                  if (iVar4 != 0) {
                    iVar4 = FUN_8c112350(ar4,uVar5,ar5_00,iVar2);
                    piVar1[2] = iVar4;
                    if ((iVar4 != 0) &&
                       (iVar2 = FUN_8c1124de(piVar1[2],piVar1[1],ar4,iVar2), iVar2 != 0)) {
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
//@unit 8c11b884
#include "../decls.h"
undefined4 FUN_8c11b884_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&FUN_8c11237a);
  FUN_8c11237a(*ar4);
  (*(code *)puVar1)(ar4[1],ar5);
  (*(code *)puVar1)(ar4[3],ar5);
  (*(code *)puVar1)(ar4[4],ar5);
  (*(code *)puVar1)(ar4[5],ar5);
  FUN_8c1123da(ar4[6],ar5);
  (*(code *)puVar1)(ar4[2],ar5);
                    
                    
  uVar2 = (**(code **)(ar5 + 0x18))(ar5,ar4);
  return uVar2;
}

__asm__(".globl _FUN_8c11b884\n.set _FUN_8c11b884, _FUN_8c11b884_def\n");
//@unit 8c11b88c
#include "../decls.h"
undefined4 FUN_8c11b88c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  puVar1 = (&FUN_8c11237a);
  FUN_8c11237a(*unaff_r13,ar5,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[1],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[3],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[4],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[5],unaff_r14,ar6,ar7);
  FUN_8c1123da(unaff_r13[6],unaff_r14,ar6,ar7);
  (*(code *)puVar1)(unaff_r13[2],unaff_r14,ar6,ar7);
                    
                    
  uVar2 = (**(code **)(unaff_r14 + 0x18))();
  return uVar2;
}

__asm__(".globl _FUN_8c11b88c\n.set _FUN_8c11b88c, _FUN_8c11b88c_def\n");
//@unit 8c11b93c
#include "../decls.h"
undefined4 FUN_8c11b93c_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ain0;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint *ar7_00;
  undefined4 *puVar7;
  uint uVar8;
  float *pfVar9;
  int *piVar10;
  int ar4_00;
  int *piVar11;
  int *ar4_01;
  int *ar4_02;
  float fVar12;
  ulonglong in_dr2;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_xd2;
  char cVar16;
  
  uVar3 = ar4[1];
  piVar10 = (int *)*ar4;
  ain0 = ar4[3];
  ar4_02 = (int *)(uint)ar4[2];
  ar4_00 = ar4[6];
  piVar11 = (int *)(uint)ar4[5];
  ar4_01 = (int *)(uint)ar4[4];
  FUN_8c1129e4(ar4_02,uVar3,ar6,ar7,ain0);
  ar4_01[3] = ar5;
  ar4_01[4] = ar4_01[2] * 4 + ar5;
  FUN_8c112658(ar4_01,uVar3,ar6,ar7,ain0);
  FUN_8c112680(ar4_01,uVar3,ar6,ar7);
  cVar16 = '\0';
  iVar2 = FUN_8c112958(ar4_02,ain0,ar4_01,ar7);
  if (iVar2 == 0) {
    iVar2 = *(int *)(ar4_00 + 4);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(*(int *)(ar4_00 + 0xc) + iVar2 * 4) = iVar2;
    }
    do {
      uVar8 = ar4_02[1];
      pfVar5 = (float *)(*piVar11 * 4 + piVar11[3]);
      pfVar6 = (float *)(*ar4_02 * uVar8 * 4 + ar4_02[3]);
      ar7_00 = (uint *)(*ar4_01 * 4 + ar4_01[3] + (*ar4_01 - uVar8) * -4);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        ar7_00 = ar7_00 + -1;
        if (cVar16 == '\0') {
          in_dr2 = (ulonglong)*ar7_00;
        }
        else {
          in_xd2 = *(undefined8 *)ar7_00;
        }
        pfVar4 = (float *)((uVar8 - 1) * *ar4_02 * 4 + ar4_02[3] + uVar8 * 4 + -4);
        if (cVar16 == '\0') {
          fVar15 = *pfVar4;
          pfVar5 = pfVar5 + -1;
          *pfVar5 = (float)in_dr2;
        }
        else {
          fVar15 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
          pfVar5 = pfVar5 + -2;
          *(undefined8 *)pfVar5 = in_xd2;
        }
        pfVar9 = pfVar5;
        for (pfVar4 = pfVar4 + *ar4_02; fVar12 = (float)in_dr2, pfVar4 < pfVar6;
            pfVar4 = pfVar4 + *ar4_02) {
          pfVar9 = pfVar9 + 1;
          if (cVar16 == '\0') {
            uVar13 = CONCAT44(*pfVar4,*pfVar9);
          }
          else {
            in_xd2 = *(undefined8 *)pfVar9;
            uVar13 = *(undefined8 *)pfVar4;
          }
          cVar16 = '\0';
          fVar14 = (float)((ulonglong)uVar13 >> 0x20) * (float)uVar13;
          fVar12 = *pfVar5 - fVar14;
          in_dr2 = CONCAT44(fVar14,fVar12);
          *pfVar5 = fVar12;
        }
        if (cVar16 == '\0') {
          fVar12 = *pfVar5;
        }
        else {
          in_xd2 = *(undefined8 *)pfVar5;
        }
        cVar16 = '\0';
        *pfVar5 = fVar12 / fVar15;
        in_dr2 = 0;
        if ((0.0 < *pfVar5) && (2 < uVar8)) break;
        cVar16 = '\0';
      }
      if (uVar8 != 0) {
        pfVar5 = (float *)(uVar8 - 1);
        pfVar6 = pfVar5;
        iVar2 = FUN_8c112734(ar4_02,ar4_01,pfVar5,ar7_00);
        if (iVar2 != 0) goto LAB_8c11ba88;
        *piVar11 = *piVar11 + -1;
        cVar16 = '\0';
        FUN_8c1125e8(ar4_00,pfVar5,pfVar6,ar7_00,ain0);
      }
    } while (2 < uVar8);
    cVar16 = '\0';
    FUN_8c112a02(ar4_01,pfVar5,pfVar6,ar7_00,ain0);
    pfVar5 = (float *)piVar11[3];
    pfVar6 = pfVar5 + *piVar11;
    piVar1 = *(int **)(ar4_00 + 0xc);
    for (; pfVar5 < pfVar6; pfVar5 = pfVar5 + 1) {
      pfVar4 = (float *)ar4_01[3];
      puVar7 = (undefined4 *)(*piVar10 * *piVar1 * 4 + piVar10[3]);
      uVar8 = 0;
      if (ar4_01[2] != 0) {
        do {
          uVar8 = uVar8 + 1;
          if (cVar16 == '\0') {
            fVar15 = *pfVar5;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            uVar13 = CONCAT44(*pfVar4,uVar3);
          }
          else {
            fVar15 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
            puVar7 = puVar7 + 2;
            uVar13 = *(undefined8 *)pfVar4;
          }
          cVar16 = '\0';
          *pfVar4 = fVar15 * (float)uVar13 + (float)((ulonglong)uVar13 >> 0x20);
          pfVar4 = pfVar4 + 1;
        } while (uVar8 < (uint)ar4_01[2]);
      }
      piVar1 = piVar1 + 1;
    }
    iVar2 = piVar10[1];
    uVar3 = 0;
    ar4_02[1] = iVar2;
    *piVar11 = iVar2;
    *(int *)(ar4_00 + 4) = iVar2;
  }
  else {
LAB_8c11ba88:
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11b93c\n.set _FUN_8c11b93c, _FUN_8c11b93c_def\n");
//@unit 8c11bb54
#include "../decls.h"
undefined4 FUN_8c11bb54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(ar4 + 0x38);
  iVar2 = *(int *)(ar4 + 0x54);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x38) + iVar2 * 4));
  }
  puVar1 = *(undefined4 **)(ar4 + 0x34);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(*(int *)(ar4 + 0x34) + iVar2 * 4));
  }
  *(undefined2 *)(ar4 + 0x28) = 0;
  return 0x28;
}

__asm__(".globl _FUN_8c11bb54\n.set _FUN_8c11bb54, _FUN_8c11bb54_def\n");
//@unit 8c11bb94
#include "../decls.h"
undefined4 FUN_8c11bb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int ar7_00;
  
  ar5_00 = *(undefined4 **)(ar4 + 0x2c);
  ar7_00 = *(int *)(ar4 + 0x54);
  if (ar5_00 < ar5_00 + ar7_00 + *(int *)(ar4 + 0x54)) {
    do {
      *ar5_00 = 0x3f800000;
      ar5_00 = ar5_00 + 1;
    } while (ar5_00 < (undefined4 *)(*(int *)(ar4 + 0x2c) + ar7_00 * 4 + *(int *)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(ar4 + 0x2a) = 0;
  uVar1 = FUN_8c11bb54(ar4,ar5_00,ar7_00 * 4,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c11bb94\n.set _FUN_8c11bb94, _FUN_8c11bb94_def\n");
//@unit 8c11bbd4
#include "../decls.h"
undefined4 FUN_8c11bbd4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int ar6_00;
  int iVar6;
  undefined4 *ar5_00;
  int *piVar7;
  longlong in_dr0;
  float fVar8;
  float in_fr15;
  char cVar9;
  
  puVar3 = ar5 + 2;
  uVar5 = *(uint *)(ar4 + 0x54);
  *(short *)(ar4 + 0x28) = (short)*ar5;
  ar6_00 = uVar5 * 4;
  *(short *)(ar4 + 0x2a) = (short)ar5[1];
  memmove(*(undefined4 *)(ar4 + 0x2c),puVar3,ar6_00,ar7);
  memmove(*(undefined4 *)(ar4 + 0x34),puVar3 + uVar5,ar6_00,ar7);
  ar5_00 = puVar3 + uVar5 + uVar5;
  cVar9 = '\0';
  puVar3 = ar5_00;
  memmove(*(undefined4 *)(ar4 + 0x38),ar5_00,ar6_00,ar7);
  uVar2 = 0;
  piVar7 = ar5_00 + uVar5;
  uVar4 = 0;
  iVar6 = 0;
  if (cVar9 == '\0') {
    in_fr15 = 0.5;
  }
  if (uVar5 != 0) {
    do {
      fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar1 = *(int *)(ar4 + 0x30);
      thunk_FUN_8c013dfc(uVar2,puVar3,ar6_00,ar7);
      uVar4 = uVar4 + 1;
      in_dr0 = (ulonglong)(uint)(fVar8 * in_fr15) << 0x20;
      *(float *)(iVar1 + iVar6) = fVar8 * in_fr15;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar5);
  }
  *(int *)(ar4 + 0x44) = *piVar7 * 4 + *(int *)(ar4 + 0x3c);
  *(int *)(ar4 + 0x48) = piVar7[1] * 4 + *(int *)(ar4 + 0x3c);
  uVar2 = memmove(*(undefined4 *)(ar4 + 0x3c),piVar7 + 2,uVar5 * (*(ushort *)(ar4 + 0x4c) + 1) * 4,
                  ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11bbd4\n.set _FUN_8c11bbd4, _FUN_8c11bbd4_def\n");
//@unit 8c11bbec
#include "../decls.h"
undefined4 FUN_8c11bbec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_r0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int a5;
  int a6;
  uint uVar6;
  int iVar7;
  int unaff_r13;
  int a5_00;
  int *piVar8;
  int unaff_r14;
  undefined1 *puVar9;
  double in_dr0;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar10;
  byte in_FPSCR_DN;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte in_FPSCR_SZ;
  byte bVar13;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  
  puVar1 = (&memmove);
  if (in_FPSCR_SZ == 0) {
    puVar9 = auStack_8;
  }
  else {
    puVar9 = auStack_c;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  uVar6 = *(uint *)(in_r0 + unaff_r14);
  *(short *)(unaff_r14 + 0x28) = (short)*ar4;
  iVar7 = uVar6 * 4;
  *(short *)(unaff_r14 + 0x2a) = (short)ar4[1];
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x2c),ar5,iVar7,ar7);
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x34),unaff_r13 + iVar7,iVar7,ar7);
  a5_00 = unaff_r13 + iVar7 + iVar7;
  uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  a5 = a5_00;
  a6 = iVar7;
  (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x38),a5_00,iVar7,ar7);
  puVar2 = (&thunk_FUN_8c013dfc);
  uVar5 = 0;
  piVar8 = (int *)(a5_00 + iVar7);
  uVar3 = 0;
  iVar7 = 0;
  if (bVar13 == 0) {
    in_fr15 = (float)DAT_8c11bdfc;
  }
  if (uVar6 != 0) {
    do {
      *(int *)(puVar9 + -8) = *(int *)(unaff_r14 + 0x30) + iVar7;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      (*(code *)puVar2)(uVar5,a5,a6,ar7);
      uVar3 = uVar3 + 1;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar12 == 0) {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar13 == 0) {
        *(int *)*(double **)(puVar9 + -8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        **(double **)(puVar9 + -8) = in_dr0;
      }
      iVar7 = iVar7 + 4;
    } while (uVar3 < uVar6);
  }
  *(int *)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unaff_r14 + 0x3c);
  *(int *)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unaff_r14 + 0x3c);
  uVar5 = (*(code *)puVar1)(*(undefined4 *)(unaff_r14 + 0x3c),piVar8 + 2,
                            uVar6 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c11bbec\n.set _FUN_8c11bbec, _FUN_8c11bbec_def\n");
//@unit 8c11bcb8
#include "../decls.h"
undefined4 FUN_8c11bcb8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = (&memmove);
  puVar5 = ar5 + 2;
  iVar3 = *(int *)(ar4 + 0x54);
  iVar4 = iVar3 * 4;
  *ar5 = (uint)*(ushort *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x2a);
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x2c),iVar4);
  puVar5 = puVar5 + iVar3;
  (*(code *)puVar1)(puVar5,*(undefined4 *)(ar4 + 0x34),iVar4);
  (*(code *)puVar1)(puVar5 + iVar3,*(undefined4 *)(ar4 + 0x38),iVar4);
  iVar4 = *(int *)(ar4 + 0x44) - *(int *)(ar4 + 0x3c);
  puVar5 = puVar5 + iVar3 + iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  *puVar5 = iVar4 >> 2;
  iVar4 = *(int *)(ar4 + 0x48) - *(int *)(ar4 + 0x3c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  puVar5[1] = iVar4 >> 2;
  uVar2 = (*(code *)puVar1)(puVar5 + 2,*(undefined4 *)(ar4 + 0x3c),
                            iVar3 * (*(ushort *)(ar4 + 0x4c) + 1) * 4);
  return uVar2;
}

__asm__(".globl _FUN_8c11bcb8\n.set _FUN_8c11bcb8, _FUN_8c11bcb8_def\n");
//@unit 8c11bccc
#include "../decls.h"
undefined4 FUN_8c11bccc_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int unaff_r13;
  int a4;
  int *piVar5;
  int unaff_r14;
  
  puVar1 = (&memmove);
  iVar4 = *(int *)(in_r0 + unaff_r14);
  ar6_00 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unaff_r14 + 0x2a);
  (*(code *)puVar1)(unaff_r13,*(undefined4 *)(unaff_r14 + 0x2c),ar6_00,ar7);
  (*(code *)puVar1)(unaff_r13 + ar6_00,*(undefined4 *)(unaff_r14 + 0x34),ar6_00,ar7);
  a4 = unaff_r13 + ar6_00 + ar6_00;
  (*(code *)puVar1)(a4,*(undefined4 *)(unaff_r14 + 0x38),ar6_00,ar7);
  iVar3 = *(int *)(unaff_r14 + 0x44) - *(int *)(unaff_r14 + 0x3c);
  piVar5 = (int *)(a4 + ar6_00);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *piVar5 = iVar3 >> 2;
  iVar3 = *(int *)(unaff_r14 + 0x48) - *(int *)(unaff_r14 + 0x3c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  piVar5[1] = iVar3 >> 2;
  uVar2 = (*(code *)puVar1)(piVar5 + 2,*(undefined4 *)(unaff_r14 + 0x3c),
                            iVar4 * (*(ushort *)(unaff_r14 + 0x4c) + 1) * 4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11bccc\n.set _FUN_8c11bccc, _FUN_8c11bccc_def\n");
//@unit 8c11bd6c
#include "../decls.h"
undefined4 FUN_8c11bd6c_def(int ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int a4;
  uint a4_00;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  ushort uVar11;
  float *pfVar12;
  int ar4_00;
  float *pfVar13;
  float *pfVar14;
  undefined4 uVar15;
  undefined8 in_dr0;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong in_dr4;
  longlong lVar19;
  float fVar20;
  float in_fr15;
  float fVar21;
  char cVar22;
  undefined8 *in_stack_00000000;
  ushort uStack_48;
  
  cVar22 = '\0';
  iVar5 = *(int *)(ar4 + 0x54);
  ar4_00 = *(int *)(ar4 + 0x44);
  pfVar6 = *(float **)(ar4 + 0x40);
  pfVar4 = *(float **)(ar4 + 0x3c);
  uVar1 = *(ushort *)(ar4 + 0x4c);
  uStack_48 = *(ushort *)(ar4 + 0x2a);
  uVar11 = *(ushort *)(ar4 + 0x28);
  fVar21 = *(float *)(ar4 + 0x5c);
  lVar19 = (ulonglong)*(uint *)(ar4 + 0x60) << 0x20;
  pfVar12 = *(float **)(ar4 + 0x2c);
  pfVar14 = (float *)(iVar5 * 4);
  a4 = ar4_00;
  pfVar9 = ar6;
  pfVar10 = pfVar14;
  pfVar8 = ar7;
  memmove(ar4_00,ar6,pfVar14,ar7);
  fVar17 = (float)((ulonglong)lVar19 >> 0x20);
  fVar20 = (float)in_dr4;
  pfVar13 = (float *)(ar4_00 + (int)pfVar14);
  if ((float *)(ar4_00 + (int)pfVar14) == pfVar6) {
    pfVar13 = pfVar4;
  }
  if (cVar22 == '\0') {
    in_fr15 = 0.5;
  }
  if ((char)ar5 == '\0') {
    if (uStack_48 == 0) {
      pfVar6 = *(float **)(ar4 + 0x30);
      pfVar7 = ar6;
      for (pfVar4 = pfVar12; pfVar4 < (float *)((int)pfVar14 + (int)pfVar12); pfVar4 = pfVar4 + 1) {
        if (cVar22 == '\0') {
          *pfVar4 = *pfVar7;
          in_dr4 = in_dr4 & 0xffffffff;
        }
        else {
          *(ulonglong *)pfVar4 = *(ulonglong *)pfVar7;
          in_dr4 = *(ulonglong *)pfVar7;
        }
        thunk_FUN_8c013dfc(a4,pfVar9,pfVar10,pfVar8);
        fVar17 = (float)((ulonglong)lVar19 >> 0x20);
        fVar20 = (float)in_dr4;
        cVar22 = '\0';
        fVar16 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
        in_dr0 = CONCAT44(fVar16,(int)in_dr0);
        *pfVar6 = fVar16;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    if ((uint)uVar11 <= (uint)uVar1) {
      uVar11 = uVar11 + 1;
    }
    a4_00 = uVar1 + 1;
    if (uVar11 == a4_00) {
      if ((float)uStack_48 < fVar17) {
        uStack_48 = uStack_48 + 1;
        fVar17 = (float)uStack_48;
      }
      lVar19 = (ulonglong)(uint)(1.0 / fVar17) << 0x20;
      pfVar6 = *(float **)(ar4 + 0x30);
      pfVar7 = pfVar13;
      for (pfVar4 = pfVar12; cVar22 = '\0', pfVar4 < (float *)((int)pfVar14 + (int)pfVar12);
          pfVar4 = pfVar4 + 1) {
        fVar20 = *pfVar4;
        fVar17 = *pfVar7 - fVar20;
        if (fVar20 < fVar17) {
          fVar17 = *pfVar4;
        }
        uVar15 = (undefined4)in_dr0;
        *pfVar4 = fVar17 * (float)((ulonglong)lVar19 >> 0x20) + *pfVar4;
        thunk_FUN_8c013dfc(a4_00,pfVar9,pfVar10,pfVar8);
        in_dr0 = CONCAT44(fVar17 * in_fr15,uVar15);
        *pfVar6 = fVar17 * in_fr15;
        pfVar6 = pfVar6 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
  }
  else {
    uVar11 = 0;
  }
  if (cVar22 == '\0') {
    lVar19 = CONCAT44(0x3f800000,fVar20);
  }
  else {
    lVar19 = 0x358637bd3f800000;
  }
  if (uStack_48 != 0) {
    fVar17 = (float)((ulonglong)lVar19 >> 0x20);
    if (cVar22 == '\0') {
      lVar19 = (ulonglong)(uint)fVar17 << 0x20;
    }
    pfVar8 = *(float **)(ar4 + 0x34);
    pfVar4 = (float *)((int)pfVar14 + (int)pfVar8);
    uVar3 = (ulonglong)lVar19 >> 0x20;
    fVar20 = *(float *)(ar4 + 0x68);
    pfVar10 = *(float **)(ar4 + 0x50);
    pfVar9 = *(float **)(ar4 + 0x38);
    for (; pfVar8 < pfVar4; pfVar8 = pfVar8 + 1) {
      fVar16 = *pfVar10;
      in_dr0 = CONCAT44(fVar16,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      fVar18 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar8 = fVar21 * (fVar16 * fVar18 + fVar17);
    }
    pfVar10 = *(float **)(ar4 + 0x38);
    pfVar9 = (float *)((int)pfVar14 + (int)pfVar10);
    lVar19 = CONCAT44(fVar17,0x358637bd);
    pfVar8 = ar6;
    for (; pfVar10 < pfVar9; pfVar10 = pfVar10 + 1) {
      fVar16 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar17 = *pfVar12;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar12 = pfVar12 + 1;
      *pfVar10 = (fVar16 + 1e-06) / (fVar17 * fVar20 + 1e-06);
    }
    pfVar12 = *(float **)(ar4 + 0x34);
    pfVar9 = (float *)((int)pfVar14 + (int)pfVar12);
    pfVar10 = *(float **)(ar4 + 0x38);
    for (; cVar22 = '\0', pfVar12 < pfVar9; pfVar12 = pfVar12 + 1) {
      fVar17 = *pfVar10;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      *pfVar12 = fVar17 * ((float)uVar3 - fVar21) + *pfVar12;
    }
  }
  if (uStack_48 == 0) {
    pfVar12 = *(float **)(ar4 + 0x50);
    pfVar14 = (float *)((int)pfVar14 + (int)pfVar12);
    for (; pfVar12 < pfVar14; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        *pfVar12 = (float)((ulonglong)lVar19 >> 0x20);
      }
      else {
        *(longlong *)pfVar12 = lVar19;
      }
    }
  }
  else {
    pfVar12 = *(float **)(ar4 + 0x34);
    if (cVar22 == '\0') {
      fVar17 = *(float *)(ar4 + 0x6c);
    }
    else {
      fVar17 = (float)((ulonglong)*(undefined8 *)(ar4 + 0x6c) >> 0x20);
    }
    pfVar10 = (float *)((int)pfVar14 + (int)pfVar12);
    pfVar14 = *(float **)(ar4 + 0x50);
    for (; pfVar12 < pfVar10; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*pfVar12);
      }
      fVar20 = (float)((ulonglong)lVar19 >> 0x20);
      if ((float)lVar19 <= fVar20) {
        fVar21 = 0.0;
      }
      else {
        fVar21 = fVar20 - fVar20 / (float)lVar19;
      }
      cVar22 = '\0';
      fVar21 = fVar21 * fVar21;
      lVar19 = CONCAT44(fVar20,fVar21);
      fVar20 = fVar17;
      if (fVar17 < fVar21) {
        fVar20 = fVar21;
      }
      *pfVar14 = fVar20;
      pfVar14 = pfVar14 + 1;
    }
  }
  uVar2 = *(ushort *)(ar4 + 0x58);
  for (pfVar9 = ar7; pfVar9 < ar7 + uVar2; pfVar9 = pfVar9 + 1) {
    thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
    fVar17 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  for (; pfVar9 < ar7 + iVar5; pfVar9 = pfVar9 + 1) {
    thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
    fVar17 = (float)((ulonglong)in_dr0 >> 0x20) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  cVar22 = '\0';
  thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8);
  if (cVar22 == '\0') {
    *(int *)in_stack_00000000 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *in_stack_00000000 = in_dr0;
  }
  *(ushort *)(ar4 + 0x4c) = uVar1;
  *(ushort *)(ar4 + 0x2a) = uStack_48;
  *(ushort *)(ar4 + 0x28) = uVar11;
  *(float **)(ar4 + 0x44) = pfVar13;
  return 0x44;
}

__asm__(".globl _FUN_8c11bd6c\n.set _FUN_8c11bd6c, _FUN_8c11bd6c_def\n");
//@unit 8c11c0e4
#include "../decls.h"
undefined4 FUN_8c11c0e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 a7;
  int *piVar5;
  undefined4 uVar6;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (uVar2 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7), (uVar2 & 0xff) != 0
     )) {
    pcVar3 = (char *)(*(code *)(&FUN_8c111fbe))
                               (*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),
                                *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc),ar6,ar7);
    uVar6 = (*(undefined4 **)(ar4 + 0xc))[1];
    uVar4 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar6,ar6,ar7);
    puVar1 = (&FUN_8c111dfe);
    FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar6,ar6,ar7);
    a7 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar6,ar6,ar7);
    uVar6 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 8),uVar6,ar6,ar7);
    FUN_8c11bd6c(ar4,(int)*pcVar3,uVar4,a7);
    memmove(uVar6,*(undefined4 *)(ar4 + 0x30),*(int *)(ar4 + 0x54) << 2,a7);
  }
  piVar5 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar5[1] * 4 + *(int *)(*piVar5 + 0x40)) == *(int *)(*piVar5 + 0x3c)) ||
     (*(int *)(*(int *)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(piVar5[2] + 0x3c))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11c0e4\n.set _FUN_8c11c0e4, _FUN_8c11c0e4_def\n");
//@unit 8c11c1d8
#include "../decls.h"
undefined4 FUN_8c11c1d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,ar4[0xf]);
  return uVar1;
}

__asm__(".globl _FUN_8c11c1d8\n.set _FUN_8c11c1d8, _FUN_8c11c1d8_def\n");
//@unit 8c11c210
#include "../decls.h"
undefined4 FUN_8c11c210_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    if (ar6 != 0) {
      FUN_8c11bcb8(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
  }
  else if (in_r0 == 2) {
    if (ar6 == 0) {
      FUN_8c11bb94(unaff_r14,ar5,0,ar7);
    }
    else {
      FUN_8c11bbd4(unaff_r14,*ar7 + ar6,ar6,ar7);
      *ar7 = *ar7 + ((*(ushort *)(unaff_r14 + 0x4c) + 4) * *(int *)(unaff_r14 + 0x54) + 4) * 4;
    }
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    FUN_8c11c1d8(unaff_r14,ar5,ar6,ar7);
    FUN_8c120668(unaff_r14,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c11c210\n.set _FUN_8c11c210, _FUN_8c11c210_def\n");
//@unit 8c11c2b8
#include "../decls.h"
undefined4 FUN_8c11c2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r14;
  undefined4 extraout_fr1;
  undefined4 extraout_fr1_00;
  undefined4 extraout_fr1_01;
  undefined4 extraout_fr1_02;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  int extraout_fr0_02;
  int extraout_fr0_03;
  int extraout_fr0_04;
  int extraout_fr0_05;
  int a5;
  char cVar7;
  
  iVar5 = *unaff_r14;
  FUN_8c120550(ar4,8,ar6,ar7);
  uVar6 = (int)extraout_fr0 & 0xffff;
  unaff_r14[0x15] = uVar6;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = 4;
  uVar1 = (undefined2)(uVar6 << 2);
  *(undefined2 *)(*(int *)(unaff_r14[4] + 4) + 0xc) = uVar1;
  *(undefined2 *)(*(int *)(unaff_r14[4] + 8) + 0xc) = uVar1;
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  *(short *)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  cVar7 = '\0';
  *(short *)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_00);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_01);
  }
  cVar7 = '\0';
  FUN_8c120550(unaff_r14,7,ar6,ar7);
  if (cVar7 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_02);
  }
  uVar4 = 4;
  a5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 6);
  iVar5 = (**(code **)(iVar5 + 0x14))(iVar5,a5,4,ar7);
  unaff_r14[0xf] = iVar5;
  unaff_r14[0x11] = iVar5;
  iVar3 = uVar6 * 4;
  iVar5 = uVar6 * (*(ushort *)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar5;
  unaff_r14[0xb] = iVar5;
  iVar2 = iVar5 + iVar3 + iVar3;
  unaff_r14[0xc] = iVar5 + iVar3;
  iVar5 = iVar2 + iVar3;
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] = iVar5;
  unaff_r14[0x14] = iVar3 + iVar5;
  if (unaff_r14[0xf] != 0) {
    FUN_8c11bb94(unaff_r14,a5,uVar4,ar7);
    return 0;
  }
  uVar4 = FUN_8c1204c4(unaff_r14,0x66,uVar4,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c11c2b8\n.set _FUN_8c11c2b8, _FUN_8c11c2b8_def\n");
//@unit 8c11c412
#include "../decls.h"
undefined4 FUN_8c11c412_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,3,(&FUN_8c11c0e4),(&DATA_8c11c2b0),(&DATA_8c11c204),0x70);
  return uVar1;
}

__asm__(".globl _FUN_8c11c412\n.set _FUN_8c11c412, _FUN_8c11c412_def\n");
//@unit 8c11c47c
#include "../decls.h"
undefined4 FUN_8c11c47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined2 in_r3;
  byte unaff_r12;
  int unaff_r14;
  
  *(undefined2 *)(in_r0 + unaff_r14) = in_r3;
  *(ushort *)(unaff_r14 + 0x58) = (ushort)(byte)ar6;
  if (unaff_r12 == 0) {
LAB_8c11c4a6:
    if ((byte)ar6 != 0) {
      uVar1 = FUN_8c11c972(ar4,(uint)(byte)ar6,4,ar7);
      *(undefined4 *)(unaff_r14 + 0x5c) = uVar1;
      if (*(int *)(unaff_r14 + 0x5c) == 0) goto LAB_8c11c4ca;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_8c11c972(ar4,(uint)unaff_r12,8,ar7);
    *(undefined4 *)(unaff_r14 + 0x54) = uVar1;
    if (*(int *)(unaff_r14 + 0x54) != 0) goto LAB_8c11c4a6;
LAB_8c11c4ca:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c47c\n.set _FUN_8c11c47c, _FUN_8c11c47c_def\n");
//@unit 8c11c5e4
#include "../decls.h"
undefined4 * FUN_8c11c5e4_def(int ar4,undefined4 *ar5,int ar6,int ar7,undefined4 s0)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int a6;
  int a7;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  
  iVar7 = 0;
  iVar5 = **(int **)(0x230 + ar4);
  a6 = ar6;
  a7 = ar7;
  piVar1 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))(0xc,0xf4 + ar4,ar6,ar7)
  ;
  *ar5 = piVar1;
  puVar2 = (undefined4 *)(int)0x13c;
  if (*(uint *)(ar4 + 0x78) < *(uint *)((int)puVar2 + ar4)) {
    piVar1[2] = 2;
  }
  else {
    piVar1[2] = 0;
  }
  if (ar6 == 0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  else {
    bVar10 = true;
    iVar9 = ar6;
    while (bVar10) {
      iVar9 = *(int *)(iVar9 + 0x10);
      bVar10 = iVar9 != 0;
      iVar7 = iVar7 + 1;
    }
    piVar3 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))
                              (iVar7 * 0x18,0xf4 + ar4,a6,a7);
    *piVar1 = iVar7;
    piVar1[1] = (int)piVar3;
    puVar2 = (undefined4 *)(uint)(ar7 == 0);
    for (; ar6 != 0; ar6 = *(int *)(ar6 + 0x10)) {
      piVar1 = *(int **)(ar6 + 0xc);
      iVar7 = 0;
      uVar6 = iVar5 * 0x6e;
      if ((char)s0 == '\0') {
        uVar6 = 0;
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if (((undefined4 *)(uint)(ar7 == 0) != (undefined4 *)0x0) ||
           (*(int *)(*piVar1 * 8 + ar7) != -1)) {
          iVar7 = iVar7 + 1;
        }
      }
      puVar2 = (undefined4 *)
               (**(code **)(*(int *)(0xfc + ar4) + 0x14))
                         (iVar7 << 4,0xf4 + ar4,a6,a7);
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(ar6 + 4);
      piVar3[2] = *(int *)(ar6 + 8);
      piVar3[3] = -1;
      piVar3[5] = (int)puVar2;
      puVar8 = puVar2;
      for (piVar1 = *(int **)(ar6 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if ((char)s0 == '\0') {
          uVar11 = (uint)*(ushort *)(piVar1 + 5);
        }
        else {
          uVar11 = ((uint)*(ushort *)(piVar1 + 5) + iVar5) * 0x6e;
        }
        if ((ar7 == 0) ||
           (puVar2 = *(undefined4 **)(*piVar1 * 8 + ar7), puVar2 != (undefined4 *)0xffffffff)) {
          piVar4 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))
                                    (0xc,0xf4 + ar4,a6,a7);
          puVar2 = (undefined4 *)piVar3[3];
          if (puVar2 == (undefined4 *)0xffffffff) {
            piVar3[3] = uVar6;
          }
          *puVar8 = 1;
          puVar8[1] = uVar6;
          puVar8[2] = uVar11;
          puVar8[3] = piVar4;
          *piVar4 = piVar1[1];
          piVar4[1] = piVar1[2];
          if (ar7 == 0) {
            piVar4[2] = *piVar1;
          }
          else {
            piVar4[2] = *(int *)(*piVar1 * 8 + ar7);
          }
          puVar8 = puVar8 + 4;
        }
        uVar6 = uVar11;
      }
      piVar3[4] = uVar6;
      piVar3 = piVar3 + 6;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c11c5e4\n.set _FUN_8c11c5e4, _FUN_8c11c5e4_def\n");
//@unit 8c11c7b8
#include "../decls.h"
undefined4 FUN_8c11c7b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(uint)ar5[1];
  iVar2 = 0;
  if (0 < *ar5) {
    do {
      iVar3 = piVar5[5];
      iVar4 = 0;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(0xfc + ar4) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),0xf4 + ar4);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(0xfc + ar4) + 0x18))(piVar5[5],0xf4 + ar4);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *ar5);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(0xfc + ar4) + 0x18))(ar5[1],0xf4 + ar4);
  }
                    
                    
  uVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x18))(ar5,0xf4 + ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c11c7b8\n.set _FUN_8c11c7b8, _FUN_8c11c7b8_def\n");
//@unit 8c11c7cc
#include "../decls.h"
undefined4 FUN_8c11c7cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r8;
  int iVar2;
  int *unaff_r10;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_r14;
  
  piVar5 = (int *)unaff_r10[1];
  iVar2 = unaff_r8;
  if (0 < *unaff_r10) {
    do {
      iVar3 = piVar5[5];
      iVar4 = unaff_r8;
      if (0 < *piVar5) {
        do {
          (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
                    (*(undefined4 *)(iVar3 + 0xc),0xf4 + unaff_r14,ar6,ar7);
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
                (piVar5[5],0xf4 + unaff_r14,ar6,ar7);
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *unaff_r10);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))
              (unaff_r10[1],0xf4 + unaff_r14,ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x18))(0xf4 + unaff_r14);
  return uVar1;
}

__asm__(".globl _FUN_8c11c7cc\n.set _FUN_8c11c7cc, _FUN_8c11c7cc_def\n");
//@unit 8c11c86c
#include "../decls.h"
int FUN_8c11c86c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = ar7;
  FUN_8c11c5e4(ar4,&uStack_10,ar7,s0);
  uVar1 = (**(code **)(0xc4 + ar4))(uStack_10,0xf4 + ar4,ar7,s0);
  uStack_c = CONCAT31((*(uint*)((uchar*)&uStack_c+1)),(char)uVar1);
  FUN_8c11c7b8(ar4,uStack_10,ar7,s0);
  return (int)(char)uStack_c;
}

__asm__(".globl _FUN_8c11c86c\n.set _FUN_8c11c86c, _FUN_8c11c86c_def\n");
//@unit 8c11c914
#include "../decls.h"
int FUN_8c11c914_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(ar5 * ar6,ar7,ar6,ar7);
  if (ar4_00 != 0) {
    memset(ar4_00,0,ar5 * ar6,ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11c914\n.set _FUN_8c11c914, _FUN_8c11c914_def\n");
//@unit 8c11c972
#include "../decls.h"
undefined4 FUN_8c11c972_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c11c914(*(undefined4 *)(0xfc + ar4),ar5,ar6,0xf4 + ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c11c972\n.set _FUN_8c11c972, _FUN_8c11c972_def\n");
//@unit 8c11c99a
#include "../decls.h"
undefined4 FUN_8c11c99a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(short *)(ar4 + 0x3e) != (short)ar5) {
    *(short *)(ar4 + 0x3e) = (short)ar5;
    if (*(int *)(0xc8 + ar4) != 0) {
      uVar1 = (**(code **)(0xc8 + ar4))((short)ar5,0xf4 + ar4);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c99a\n.set _FUN_8c11c99a, _FUN_8c11c99a_def\n");
//@unit 8c11c9a0
#include "../decls.h"
undefined4 FUN_8c11c9a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  int unaff_r14;
  
  uVar1 = 0;
  if ((uint)*(ushort *)(in_r0 + unaff_r14) != (uint)(ushort)ar5) {
    *(ushort *)(in_r0 + unaff_r14) = (ushort)ar5;
    if (*(int *)(0xc8 + unaff_r14) != 0) {
      uVar1 = (**(code **)(0xc8 + unaff_r14))
                        ((uint)(ushort)ar5,0xf4 + unaff_r14,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c9a0\n.set _FUN_8c11c9a0, _FUN_8c11c9a0_def\n");
//@unit 8c11c9d2
#include "../decls.h"
undefined4 FUN_8c11c9d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(ar4 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (**(code **)(ar4 + 0x1c))(ar4 + 8);
  if (*(int *)(ar4 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(ar4,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d2\n.set _FUN_8c11c9d2, _FUN_8c11c9d2_def\n");
//@unit 8c11c9d6
#include "../decls.h"
undefined4 FUN_8c11c9d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unaff_r14 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (**(code **)(unaff_r14 + 0x1c))(unaff_r14 + 8,ar5,ar6,ar7);
  if (*(int *)(unaff_r14 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(unaff_r14,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d6\n.set _FUN_8c11c9d6, _FUN_8c11c9d6_def\n");
//@unit 8c11ca24
#include "../decls.h"
undefined4 FUN_8c11ca24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + ar4) == 0x218df4f5) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(0xfc + ar4),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x1c))(0xf4 + ar4);
    if ((*(int *)(0xe8 + ar4) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x20))(0xf4 + ar4),
       *(int *)(0xec + ar4) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(0xfc + ar4);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(0xfc + ar4);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11ca24\n.set _FUN_8c11ca24, _FUN_8c11ca24_def\n");
//@unit 8c11ca28
#include "../decls.h"
undefined4 FUN_8c11ca28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + unaff_r14) == 0x218df4f5) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(0xfc + unaff_r14),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x1c))
                      (0xf4 + unaff_r14,ar5,ar6,ar7);
    if ((*(int *)(0xe8 + unaff_r14) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x20))
                          (0xf4 + unaff_r14,ar5,ar6,ar7),
       *(int *)(0xec + unaff_r14) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(0xfc + unaff_r14);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(0xfc + unaff_r14);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11ca28\n.set _FUN_8c11ca28, _FUN_8c11ca28_def\n");
//@unit 8c11cad4
#include "../decls.h"
undefined4 FUN_8c11cad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(ar4 + 0x18) == 0x2d79b6f5) {
    ar4_00 = *(int *)(ar4 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
    if ((*(int *)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(ar4 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0xf,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cad4\n.set _FUN_8c11cad4, _FUN_8c11cad4_def\n");
//@unit 8c11cada
#include "../decls.h"
undefined4 FUN_8c11cada_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r13;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unaff_r13 + 0x18) == 0x2d79b6f5) {
    ar4_00 = *(int *)(unaff_r13 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8,ar5,ar6,ar7);
    if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8,ar5,ar6,ar7),
       *(int *)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0xf,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cada\n.set _FUN_8c11cada, _FUN_8c11cada_def\n");
//@unit 8c11cb54
#include "../decls.h"
undefined4 FUN_8c11cb54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(ar4 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(ar4 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
    if ((*(int *)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(ar4 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0x11,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cb54\n.set _FUN_8c11cb54, _FUN_8c11cb54_def\n");
//@unit 8c11cb5a
#include "../decls.h"
undefined4 FUN_8c11cb5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r13;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unaff_r13 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(unaff_r13 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8,ar5,ar6,ar7);
    if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8,ar5,ar6,ar7),
       *(int *)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0x11,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cb5a\n.set _FUN_8c11cb5a, _FUN_8c11cb5a_def\n");
//@unit 8c11cbbc
#include "../decls.h"
uint FUN_8c11cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = (&DATA_8c127c23);
  if ((byte)ar6 != 0) {
    puVar2 = (&DATA_8c127c20);
  }
  uVar1 = FUN_8c120348(ar4 + 0x48,(int)(char)puVar2[ar5],ar5,(uint)(byte)ar6);
  bVar3 = (uVar1 & 0xff) == 0;
  if (bVar3) {
    *(byte *)(ar5 + 0xe4 + ar4) = (byte)ar6;
  }
  return (uint)!bVar3;
}

__asm__(".globl _FUN_8c11cbbc\n.set _FUN_8c11cbbc, _FUN_8c11cbbc_def\n");
//@unit 8c11cc2c
#include "../decls.h"
undefined4 FUN_8c11cc2c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int a4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(0x108 + ar4) != 0) {
    a4 = *(int *)(0x108 + ar4);
    uVar4 = ar5;
    uVar1 = (**(code **)(a4 + 0x3c))(a4,ar5,ar6,ar7);
    puVar2 = (uint *)(**(code **)(*(int *)(0x108 + ar4) + 0x6c))
                               (*(int *)(0x108 + ar4),uVar4,ar6,ar7);
    uVar4 = 0;
    puVar3 = puVar2;
    if (uVar1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 | *puVar3;
        puVar3 = puVar3 + 2;
      } while (uVar4 < uVar1);
    }
    if (((ar5 & uVar5) == 0) || ((ar5 != 0xffffffff && ((~uVar5 & ar5) != 0)))) {
      return 1;
    }
    uVar5 = 0;
    do {
      uVar4 = (uint)((puVar2[uVar5 * 2] & ar5) != 0);
      if ((uVar4 != *(byte *)(0xe4 + ar4 + uVar5)) &&
         (uVar4 = FUN_8c11cbbc(ar4,uVar5,uVar4,ar7), (uVar4 & 0xff) != 0)) {
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  return 0;
}

__asm__(".globl _FUN_8c11cc2c\n.set _FUN_8c11cc2c, _FUN_8c11cc2c_def\n");
//@unit 8c11cd02
#include "../decls.h"
undefined4 FUN_8c11cd02_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
  if (*ar4 == 0) {
    *ar4 = ar5;
  }
  (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c11cd02\n.set _FUN_8c11cd02, _FUN_8c11cd02_def\n");
//@unit 8c11cd44
#include "../decls.h"
undefined4 FUN_8c11cd44_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80000000;
  iVar2 = ar5;
  if ((ar5 == 0) || (iVar1 = FUN_8c11ca24(ar5,ar5,ar6,ar7), iVar1 != 0)) {
    iVar2 = FUN_8c11c9d2(ar4,iVar2,ar6,ar7);
    if (iVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,uVar3);
      uVar3 = *ar4;
      *ar4 = 0;
      (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2);
    }
  }
  else {
    uVar3 = *(undefined4 *)(ar5 + 0x40);
    *(undefined4 *)(ar5 + 0x40) = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11cd44\n.set _FUN_8c11cd44, _FUN_8c11cd44_def\n");
//@unit 8c11cd4e
#include "../decls.h"
undefined4 FUN_8c11cd4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  undefined4 uVar2;
  int unaff_r13;
  
  if ((unaff_r12 == 0) || (iVar1 = FUN_8c11ca24(unaff_r12,ar5,ar6,ar7), iVar1 != 0)) {
    iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
      uVar2 = *ar4;
      *ar4 = 0;
      (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
    }
  }
  else {
    uVar2 = *(undefined4 *)(unaff_r13 + 0x40);
    *(undefined4 *)(unaff_r13 + 0x40) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11cd4e\n.set _FUN_8c11cd4e, _FUN_8c11cd4e_def\n");
//@unit 8c11cdb6
#include "../decls.h"
undefined4 FUN_8c11cdb6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *a5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  a5 = &uStack_14;
  if (ar4 != (undefined4 *)0x0) {
    uStack_10 = 0;
    uStack_14 = ar5;
    puVar1 = (undefined4 *)(*(code *)*ar4)(0x3c,&uStack_14,ar6,ar7);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[5] = *ar4;
      puVar1[6] = ar4[1];
      puVar1[7] = ar4[3];
      puVar1[8] = ar4[4];
      puVar1[9] = ar4[5];
      puVar1[10] = ar4[6];
      puVar1[0xb] = ar4[7];
      uVar2 = 0x1b9813f5;
      puVar1[0xc] = ar4[8];
      puVar1[0xe] = uVar2;
      puVar1[2] = uStack_14;
      puVar1[3] = uStack_10;
      uVar2 = (*(code *)puVar1[9])(&uStack_14,a5,ar6,ar7);
      puVar1[4] = uVar2;
      uVar2 = (*(code *)puVar1[7])(&uStack_14,a5,ar6,ar7);
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11cdb6\n.set _FUN_8c11cdb6, _FUN_8c11cdb6_def\n");
//@unit 8c11ce44
#include "../decls.h"
undefined4 FUN_8c11ce44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x10),ar4 + 8,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = 0;
  (**(code **)(ar4 + 0x18))(ar4,ar4 + 8,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c11ce44\n.set _FUN_8c11ce44, _FUN_8c11ce44_def\n");
//@unit 8c11ce88
#include "../decls.h"
undefined4 FUN_8c11ce88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)0x8c127c14;
}

__asm__(".globl _FUN_8c11ce88\n.set _FUN_8c11ce88, _FUN_8c11ce88_def\n");
//@unit 8c11ce8e
#include "../decls.h"
undefined4 FUN_8c11ce8e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *s8;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  undefined *a7;
  undefined4 extraout_fr3;
  undefined8 in_xd2;
  byte in_FPSCR_DN;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_SZ;
  char cVar14;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_28 = *(undefined4 *)(&DATA_8c127c28);
  uStack_24 = *(undefined4 *)((&DATA_8c127c28) + 4);
  uStack_20 = *(undefined4 *)((&DATA_8c127c28) + 8);
  uStack_1c = *(undefined4 *)((&DATA_8c127c28) + 0xc);
  uStack_18 = *(undefined4 *)((&DATA_8c127c28) + 0x10);
  uStack_14 = *(undefined4 *)((&DATA_8c127c28) + 0x14);
  uStack_34 = *(undefined4 *)(&DATA_8c127c40);
  uStack_30 = *(undefined4 *)((&DATA_8c127c40) + 4);
  uStack_2c = *(undefined4 *)((&DATA_8c127c40) + 8);
  uVar4 = ar6;
  iVar2 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      FUN_8c11cd02(ar4,0x13,uVar4,ar7);
    }
    else {
      iVar7 = (int)0x2b4;
      iVar8 = ar4 + 8;
      bVar9 = 0;
      bVar11 = 0;
      bVar13 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                       (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
      iVar2 = FUN_8c11c914(ar4,1,iVar7,iVar8);
      if (iVar2 == 0) {
        FUN_8c11cd02(ar4,2,iVar7,iVar8);
      }
      else {
        iVar7 = (int)0xc4;
        *(int *)(iVar2 + 0x48) = iVar2;
        puVar5 = (undefined4 *)(iVar7 + iVar2);
        *(undefined1 *)(iVar2 + 0x4c) = 0;
        *puVar5 = *ar5;
        puVar5[1] = ar5[1];
        puVar5[2] = ar5[2];
        puVar5[3] = ar5[3];
        puVar5[4] = ar5[4];
        puVar5[5] = ar5[5];
        puVar1 = (&DATA_8c1274a4);
        *(undefined4 *)(0xf4 + iVar2) = *(undefined4 *)(ar4 + 8);
        s8 = (&DATA_8c127aba);
        *(int *)(0xfc + iVar2) = ar4;
        ar6_00 = &uStack_34;
        puVar5 = &uStack_28;
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        0xffe7ffff & 0x100000) >> 0x14);
        a7 = (&DATA_8c1278b0);
        uVar3 = (*(code *)(&FUN_8c1201e6))
                          (iVar2,puVar5,ar6_00,(&DATA_8c1278b0),(&DATA_8c12799c),(&DATA_8c127a74),s8
                           ,puVar1,0,0);
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x1c))(ar4 + 8,puVar5,ar6_00,a7);
          *(undefined4 *)(0xe8 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,puVar5,ar6_00,a7);
          *(undefined4 *)(0xec + iVar2) = uVar4;
          *(undefined4 *)(iVar2 + 0x60) = 0;
          *(undefined4 *)(iVar2 + 100) = **(undefined4 **)(iVar2 + 0x5c);
          *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          *(undefined4 *)(iVar2 + 0x70) = **(undefined4 **)(iVar2 + 0x54);
          puVar1 = (&DATA_8c11c8be);
          *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(*(int *)(iVar2 + 0x54) + 4);
          iVar7 = (int)0x100;
          *(undefined4 *)(iVar7 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 4 + iVar2) = 0;
          *(undefined1 *)(0x234 + iVar2) = 0;
          uVar3 = 0xffe7ffff;
          iVar7 = (int)0xe0;
          *(undefined **)(iVar7 + iVar2) = puVar1;
          *(undefined2 *)(iVar7 + 100 + iVar2) = 0;
          *(undefined4 *)(iVar7 + 0x68 + iVar2) = 4;
          cVar14 = (char)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                           uVar3 & 0x100000) >> 0x14);
          uVar4 = (**(code **)(ar4 + 0x14))(0x28,ar4 + 8,ar6_00,a7);
          *(undefined4 *)(0x2b0 + iVar2) = uVar4;
          if (*(int *)(0x2b0 + iVar2) == 0) {
            FUN_8c11cd02(ar4,2,ar6_00,a7);
          }
          else {
            iVar7 = (int)0x22c;
            **(undefined4 **)(0x2b0 + iVar2) = 0;
            puVar1 = (&FUN_8c120348);
            a7 = (undefined *)0x0;
            uVar4 = _DAT_8c11d120;
            if (cVar14 != '\0') {
              in_xd2 = CONCAT44((&FUN_8c120348),_DAT_8c11d120);
              uVar4 = extraout_fr3;
            }
            ar6_00 = (undefined4 *)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(0x2a0 + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(0x2a0 + iVar2) = in_xd2;
            }
            uVar3 = (*(code *)puVar1)(iVar2 + 0x48,4,ar6_00,0);
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)0x0;
              ar6_00 = (undefined4 *)(0x230 + iVar2);
              uVar4 = 0x29;
              uVar3 = FUN_8c120348(iVar2 + 0x48,0x29,ar6_00,0);
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = FUN_8c11d8fc(iVar2,uVar4,ar6_00,a7), uVar4 = 0x218df4f5,
                 (uVar3 & 0xff) == 0)) {
                iVar7 = (int)0xf8;
                iVar8 = (int)0xe4;
                uVar3 = 0;
                *(undefined4 *)(iVar7 + iVar2) = ar6;
                puVar6 = (undefined1 *)(iVar8 + iVar2);
                *(undefined4 *)(iVar7 + -8 + iVar2) = uVar4;
                do {
                  *puVar6 = 1;
                  puVar6[1] = 1;
                  uVar3 = uVar3 + 3;
                  puVar6[2] = 1;
                  puVar6 = puVar6 + 3;
                } while (uVar3 < 3);
                return iVar2;
              }
            }
          }
        }
        else {
          FUN_8c11cd02(*(undefined4 *)(0xfc + iVar2),*(undefined4 *)(iVar2 + 0x40),ar6_00,a7
                      );
        }
        (**(code **)(ar4 + 0x18))(iVar2,ar4 + 8,ar6_00,a7);
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11ce8e\n.set _FUN_8c11ce8e, _FUN_8c11ce8e_def\n");
//@unit 8c11d14c
#include "../decls.h"
undefined4 FUN_8c11d14c_def(int ar4,undefined4 *ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 a6;
  int *a7;
  int iStack_20;
  undefined4 *puStack_1c;
  int *piStack_18;
  int iStack_14;
  
  a7 = &iStack_20;
  a6 = 0;
  iStack_20 = 0;
  iStack_14 = *(int *)(0xfc + ar4);
  puStack_1c = ar5;
  piStack_18 = ar6;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x27,0,&iStack_20);
  if ((uVar1 & 0xff) == 0) {
    iStack_20 = iStack_20 + 0x88;
    puVar2 = (undefined4 *)(**(code **)(iStack_14 + 0x14))(iStack_20,0xf4 + ar4,a6,a7);
    iVar3 = (int)0x100;
    puVar2[1] = iStack_20;
    *puVar2 = 4;
    memmove(puVar2 + 2,**(int **)(iVar3 + ar4) + 8,(int)0x80,a7);
    iStack_20 = 0;
    uVar1 = (*(code *)(&FUN_8c120348))
                      (ar4 + 0x48,0x27,(int)(puVar2 + 2) + (int)0x80,&iStack_20);
    if ((uVar1 & 0xff) == 0) {
      *piStack_18 = iStack_20 + 0x88;
      *puStack_1c = puVar2;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d14c\n.set _FUN_8c11d14c, _FUN_8c11d14c_def\n");
//@unit 8c11d200
#include "../decls.h"
undefined4 FUN_8c11d200_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    iVar3 = *(int *)(0xfc + ar4);
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,7);
      return uVar4 & 0xff;
    }
    iVar5 = (int)0x100;
    if (*(int *)(iVar5 + ar4) != 0) {
      iVar7 = (int)0xf4;
      *(int *)(*(int *)(iVar5 + ar4) + 4) = *(int *)(*(int *)(iVar5 + ar4) + 4) + -1;
      (**(code **)(iVar3 + 0x18))(*(undefined4 *)(iVar5 + 8 + ar4),iVar7 + ar4);
      *(undefined4 *)(0x108 + ar4) = 0;
    }
    iVar5 = 0;
    if (*(int *)(0x104 + ar4) != 0) {
      iVar7 = *(int *)(0x104 + ar4);
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -1;
    }
    piVar6 = (int *)(0x118 + ar4);
    piVar8 = piVar6;
    do {
      if (*piVar6 != 0) {
        (**(code **)(iVar3 + 0x18))(*piVar8,0xf4 + ar4);
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 3);
    if (**(int **)(0x2b0 + ar4) != 0) {
      (**(code **)(iVar3 + 0x18))(**(undefined4 **)(0x2b0 + ar4),0xf4 + ar4);
    }
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(0x2b0 + ar4),0xf4 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x54),0xf4 + ar4);
    (**(code **)(iVar3 + 0x18))(*(undefined4 *)(ar4 + 0x5c),0xf4 + ar4);
    cVar2 = FUN_8c12025e(ar4);
    if (cVar2 == '\0') {
      iVar5 = (int)0xf4;
      *(undefined4 *)(0xf0 + ar4) = 0;
      (**(code **)(iVar3 + 0x18))(ar4,iVar5 + ar4);
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d200\n.set _FUN_8c11d200, _FUN_8c11d200_def\n");
//@unit 8c11d20e
#include "../decls.h"
undefined4 FUN_8c11d20e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9;
  int *piVar7;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = *(int *)(0xfc + ar4);
    sVar1 = *(short *)(unaff_r9 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar3 = FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar4 = (int)0x100;
    if (*(int *)(iVar4 + ar4) != 0) {
      iVar6 = (int)0xf4;
      *(int *)(*(int *)(iVar4 + ar4) + 4) = *(int *)(*(int *)(iVar4 + ar4) + 4) + -1;
      (**(code **)(iVar2 + 0x18))(*(undefined4 *)(iVar4 + 8 + ar4),iVar6 + ar4,ar6,ar7);
      *(undefined4 *)(0x108 + ar4) = 0;
    }
    iVar4 = 0;
    if (*(int *)(0x104 + ar4) != 0) {
      iVar6 = *(int *)(0x104 + ar4);
      *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + -1;
    }
    piVar5 = (int *)(0x118 + ar4);
    piVar7 = piVar5;
    do {
      if (*piVar5 != 0) {
        (**(code **)(iVar2 + 0x18))(*piVar7,0xf4 + ar4,ar6,ar7);
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 3);
    if (**(int **)(0x2b0 + ar4) != 0) {
      (**(code **)(iVar2 + 0x18))(**(undefined4 **)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7);
    }
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7);
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x54),0xf4 + ar4,ar6,ar7);
    iVar4 = 0xf4 + ar4;
    (**(code **)(iVar2 + 0x18))(*(undefined4 *)(ar4 + 0x5c),iVar4,ar6,ar7);
    uVar3 = FUN_8c12025e(unaff_r9,iVar4,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      iVar4 = (int)0xf4;
      *(undefined4 *)(0xf0 + ar4) = 0;
      (**(code **)(iVar2 + 0x18))(ar4,iVar4 + ar4,ar6,ar7);
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d20e\n.set _FUN_8c11d20e, _FUN_8c11d20e_def\n");
//@unit 8c11d370
#include "../decls.h"
uint FUN_8c11d370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar3 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar3 = (int)0x118;
      *(undefined4 *)(iVar3 + 0xc + ar4) = *(undefined4 *)(iVar3 + ar4);
      *(undefined4 *)(iVar3 + 0x24 + ar4) = 0;
      *(undefined4 *)(iVar3 + 0x28 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x2c + ar4) = 0;
      puVar1 = (&FUN_8c120348);
      iVar3 = (int)0x22a;
      *(undefined2 *)(iVar3 + ar4) = 0;
      *(undefined2 *)(iVar3 + 0x1a + ar4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(0x10c + ar4) = 3;
      cVar2 = (*(code *)puVar1)(ar4 + 0x48,1,0);
      if ((cVar2 == '\0') && (*(int *)(0x88 + ar4) == 0)) {
        FUN_8c120348(ar4 + 0x48,2,0);
      }
      uVar4 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,7);
      uVar4 = uVar4 & 0xff;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11d370\n.set _FUN_8c11d370, _FUN_8c11d370_def\n");
//@unit 8c11d374
#include "../decls.h"
uint FUN_8c11d374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r14;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if (*(short *)(ar4 + 0x3e) == 2) {
      iVar2 = (int)0x118;
      *(undefined4 *)(iVar2 + 0xc + unaff_r14) = *(undefined4 *)(iVar2 + unaff_r14);
      *(undefined4 *)(iVar2 + 0x24 + unaff_r14) = 0;
      *(undefined4 *)(iVar2 + 0x28 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x2c + unaff_r14) = 0;
      puVar1 = (&FUN_8c120348);
      iVar2 = (int)0x22a;
      *(undefined2 *)(iVar2 + unaff_r14) = 0;
      *(undefined2 *)(iVar2 + 0x1a + unaff_r14) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(0x10c + unaff_r14) = 3;
      uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,1,0,0);
      if (((uVar3 & 0xff) == 0) && (*(int *)(0x88 + unaff_r14) == 0)) {
        FUN_8c120348(unaff_r14 + 0x48,2,0,0);
      }
      uVar3 = *(uint *)(ar4 + 0x40);
    }
    else {
      uVar3 = FUN_8c1204c4(unaff_r14 + 0x48,7,ar6,ar7);
      uVar3 = uVar3 & 0xff;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d374\n.set _FUN_8c11d374, _FUN_8c11d374_def\n");
//@unit 8c11d432
#include "../decls.h"
uint FUN_8c11d432_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 *puStack_c;
  
  if (ar5 == 0) {
    ar5_00 = 6;
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0x54);
    ar6_00 = puStack_c[1];
    ar5_00 = 5;
  }
  uVar1 = FUN_8c1113d0(*puStack_c,ar5_00,ar6_00,0);
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c11d432\n.set _FUN_8c11d432, _FUN_8c11d432_def\n");
//@unit 8c11d488
#include "../decls.h"
undefined4 FUN_8c11d488_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ushort uVar1;
  int ar5_00;
  int ar4_00;
  undefined4 uVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar4_01;
  uint uVar6;
  int ar5_01;
  int ar4_02;
  int iVar7;
  
  ar4_01 = *(int *)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)0x7d0;
  iVar4 = *(int *)(0xfc + ar4);
  do {
    ar5_00 = FUN_8c111fbe(ar4_01,*(undefined4 *)(ar4 + 0x74),ar6,ar7);
    if (ar5_00 == 0) {
      return 0;
    }
    ar4_02 = *(int *)(0x124 + ar4 + iVar7);
    uVar6 = ar4_02 + (uint)*(ushort *)(ar4_01 + 0xc);
    if (*(uint *)(0x130 + ar4 + iVar7) < uVar6) {
      ar5_01 = *(int *)(0x118 + ar4 + iVar7);
      ar6_00 = *(int *)(0x130 + ar4 + iVar7) - ar5_01;
      ar4_00 = (**(code **)(iVar4 + 0x14))(ar6_00 + iVar5,0xf4 + ar4,ar6,ar7);
      if (ar4_00 == 0) {
        uVar2 = FUN_8c1204c4(ar4 + 0x48,2);
        return uVar2;
      }
      if (ar5_01 != 0) {
        iVar3 = ar6_00;
        memmove(ar4_00,ar5_01,ar6_00,ar7);
        (**(code **)(iVar4 + 0x18))(ar5_01,0xf4 + ar4,iVar3,ar7);
      }
      iVar3 = (int)0x130;
      ar4_02 = (ar4_02 - ar5_01) + ar4_00;
      uVar1 = *(ushort *)(ar4_01 + 0xc);
      *(int *)(0x118 + ar4 + iVar7) = ar4_00;
      *(int *)(iVar3 + ar4 + iVar7) = ar4_00 + ar6_00 + iVar5;
      uVar6 = ar4_02 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(ar4_01 + 0xc);
    memmove(ar4_02,ar5_00,ar6,ar7);
    *(uint *)(0x124 + ar4 + iVar7) = uVar6;
  } while( true );
}

__asm__(".globl _FUN_8c11d488\n.set _FUN_8c11d488, _FUN_8c11d488_def\n");
//@unit 8c11d5d4
#include "../decls.h"
undefined4 FUN_8c11d5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  uint a5;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar7_00;
  
  sVar1 = *(short *)(ar4 + 0x3e);
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
      return 0;
    }
    ar7_00 = 0;
    uVar5 = 0;
    uVar3 = FUN_8c120348(ar4 + 0x48,3,0,0);
    if (((uVar3 & 0xff) == 0) &&
       (uVar3 = FUN_8c120284(ar4,0,uVar5,ar7_00), (uVar3 & 0xff) == 0)) {
      a5 = (uint)*(ushort *)(0x244 + ar4);
      uVar3 = FUN_8c11d488(ar4,a5,uVar5,ar7_00);
      if (((uVar3 & 0xff) == 0) &&
         (((*(short *)(0x144 + ar4) == 0 ||
           (((*(short *)(0x144 + ar4) != 1 ||
             (uVar3 = FUN_8c11eb8c(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)) &&
            ((*(short *)(0x144 + ar4) != 2 ||
             (uVar3 = FUN_8c11ec7c(ar4,a5,uVar5,ar7_00), (uVar3 & 0xff) == 0)))))) &&
          (*(int *)(0x148 + ar4) != 4)))) {
        iVar2 = (int)0x148;
        iVar4 = (int)0xf4;
        a4 = *(undefined4 *)(iVar2 + ar4);
        *(undefined4 *)(iVar2 + ar4) = 4;
        uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,uVar5,ar7_00);
        if ((uVar3 & 0xff) != 0) goto LAB_8c11d6c2;
      }
    }
    uVar5 = *(undefined4 *)(ar4 + 0x40);
  }
  else {
LAB_8c11d6c2:
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11d5d4\n.set _FUN_8c11d5d4, _FUN_8c11d5d4_def\n");
//@unit 8c11d6f0
#include "../decls.h"
uint FUN_8c11d6f0_def(int ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 a5;
  uint uVar6;
  undefined4 auStack_64 [2];
  code *pcStack_5c;
  code *pcStack_58;
  
  puVar5 = ar5;
  uVar3 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  if (iVar2 == 0) {
    if ((ar5 == (uint *)0x0) && (ar6 != 0)) {
      a5 = 0x13;
override_prt_8c11d780_7a4d7f16:
      uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,uVar3,ar7);
    }
    else {
      FUN_8c10ca2e(auStack_64,puVar5,uVar3,ar7);
      auStack_64[0] = **(undefined4 **)(0x104 + ar4);
      iVar2 = (*pcStack_5c)(auStack_64,puVar5,uVar3,ar7);
      iVar4 = (*pcStack_58)(auStack_64,puVar5,uVar3,ar7);
      uVar6 = 0;
      uVar3 = iVar2 + iVar4;
      puVar5 = ar5;
      if (ar6 != 0) {
        do {
          if (uVar3 <= *puVar5) {
            a5 = 0x19;
            goto override_prt_8c11d780_7a4d7f16;
          }
          uVar6 = uVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 < ar6);
      }
      uVar3 = FUN_8c120348(ar4 + 0x48,0x19,ar5,ar6);
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d6f0\n.set _FUN_8c11d6f0, _FUN_8c11d6f0_def\n");
//@unit 8c11d7b8
#include "../decls.h"
undefined4 FUN_8c11d7b8_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *a7;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int iStack_1c;
  
  a7 = &uStack_2c;
  iVar7 = 0;
  iVar8 = 0;
  piStack_24 = ar5;
  piStack_20 = ar6;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c120348);
  if (iVar3 == 0) {
    if ((piStack_24 == (int *)0x0) || (piStack_20 == (int *)0x0)) {
      uVar4 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
      return uVar4 & 0xff;
    }
    iStack_1c = *(int *)(0xfc + ar4);
    *(undefined4 *)(ar4 + 0x40) = 0;
    piVar6 = &iStack_28;
    uVar4 = (*(code *)puVar2)(ar4 + 0x48,0x1a,piVar6,&uStack_2c);
    puVar2 = (&FUN_8c1204c4);
    if ((uVar4 & 0xff) == 0) {
      uVar9 = (uint)0x80;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          piVar6 = (int *)(int)(char)*(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)*(byte *)(iStack_28 + uVar4) & uVar5 & 0xff) != 0) {
              iVar8 = iVar8 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      if (iVar8 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(**(code **)(iStack_1c + 0x14))(iVar8 << 2,0xf4 + ar4,piVar6,a7);
      }
      *piStack_20 = iVar8;
      *piStack_24 = (int)piVar6;
      uVar4 = 0;
      if (uStack_2c != 0) {
        do {
          bVar1 = *(byte *)(iStack_28 + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)bVar1 & uVar5 & 0xff) != 0) {
              *piVar6 = iVar7;
              piVar6 = piVar6 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
            iVar7 = iVar7 + 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uStack_2c);
      }
      return 0;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    (*(code *)puVar2)(ar4 + 0x48,7,piVar6,a7);
  }
  return 1;
}

__asm__(".globl _FUN_8c11d7b8\n.set _FUN_8c11d7b8, _FUN_8c11d7b8_def\n");
//@unit 8c11d8fc
#include "../decls.h"
undefined4 FUN_8c11d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(ar4 + 0x78) = 0;
  cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x46,ar4 + 0x7c,0);
  if ((((cVar2 == '\0') &&
       (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x47,0x88 + ar4,0), cVar2 == '\0')) &&
      (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x48,0x9c + ar4,0), cVar2 == '\0')) &&
     (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x49,0xa0 + ar4,0), cVar2 == '\0')) {
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,0x4a,0xa4 + ar4,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d8fc\n.set _FUN_8c11d8fc, _FUN_8c11d8fc_def\n");
//@unit 8c11d904
#include "../decls.h"
undefined4 FUN_8c11d904_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r14;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x46,ar6 + 0x7c,0);
  if (((((uVar2 & 0xff) == 0) &&
       (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x47,0x88 + unaff_r14,0),
       (uVar2 & 0xff) == 0)) &&
      (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x48,0x9c + unaff_r14,0),
      (uVar2 & 0xff) == 0)) &&
     (uVar2 = (*(code *)puVar1)(unaff_r14 + 0x48,0x49,0xa0 + unaff_r14,0),
     (uVar2 & 0xff) == 0)) {
    uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x4a,0xa4 + unaff_r14,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d904\n.set _FUN_8c11d904, _FUN_8c11d904_def\n");
//@unit 8c11d996
#include "../decls.h"
uint FUN_8c11d996_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (int *)0x0) || (ar6 == (undefined4 *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6_00,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(ar4 + 0xfc) + 0x14))(0x38,ar4 + 0xf4);
      if (puVar3 == (undefined4 *)0x0) {
        *ar5 = 0;
        *ar6 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(ar4 + 0xfc),2,ar6_00,ar7);
        return uVar4;
      }
      *ar6 = 0x38;
      *ar5 = (int)puVar3;
      uVar4 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(ar4 + 0x88);
      puVar3[2] = *(int *)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(ar4 + 0x94);
      puVar3[8] = *(int *)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11d996\n.set _FUN_8c11d996, _FUN_8c11d996_def\n");
//@unit 8c11d9a0
#include "../decls.h"
uint FUN_8c11d9a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_r12;
  undefined4 *unaff_r13;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((unaff_r12 == (int *)0x0) || (unaff_r13 == (undefined4 *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(ar4 + 0xfc) + 0x14))(0x38,ar4 + 0xf4,ar6,ar7);
      if (puVar3 == (undefined4 *)0x0) {
        *unaff_r12 = 0;
        *unaff_r13 = 0;
        uVar4 = FUN_8c11cd02(*(undefined4 *)(ar4 + 0xfc),2,ar6,ar7);
        return uVar4;
      }
      *unaff_r13 = 0x38;
      *unaff_r12 = (int)puVar3;
      uVar4 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(ar4 + 0x88);
      puVar3[2] = *(int *)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(ar4 + 0x94);
      puVar3[8] = *(int *)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(ar4 + 0xbc);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11d9a0\n.set _FUN_8c11d9a0, _FUN_8c11d9a0_def\n");
//@unit 8c11daa4
#include "../decls.h"
uint FUN_8c11daa4_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 d;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  if (ar5 == (undefined4 *)0x0) {
    uVar4 = 0x13;
  }
  else if (ar6 == 0x38) {
    sVar1 = *(short *)(ar4 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      iVar2 = FUN_8c11cc2c(ar4,ar5[0xd],a6,ar7);
      if (iVar2 == 0) {
        d = 10;
        *(int *)(ar4 + 0x78) = ar5[3] * 100;
        *(undefined4 *)(ar4 + 0x7c) = ar5[9];
        *(undefined4 *)(ar4 + 0x80) = ar5[0xc];
        *(undefined4 *)(ar4 + 0x84) = 0;
        *(undefined4 *)(ar4 + 0x88) = ar5[1];
        *(undefined4 *)(ar4 + 0x8c) = *ar5;
        uVar4 = libgcc_divide_helper_01051c(ar5[2],10);
        *(undefined4 *)(ar4 + 0x90) = uVar4;
        *(undefined4 *)(ar4 + 0x94) = ar5[7];
        uVar4 = libgcc_divide_helper_01051c(ar5[8],d);
        *(undefined4 *)(ar4 + 0x98) = uVar4;
        *(undefined4 *)(ar4 + 0x9c) = ar5[0xd];
        *(short *)(ar4 + 0xa0) = 0x32 - (short)ar5[6];
        *(short *)(ar4 + 0xa2) = 0x32 - (short)ar5[5];
        *(undefined4 *)(ar4 + 0xa4) = ar5[4];
        *(undefined4 *)(ar4 + 0xac) = ar5[10];
        *(undefined4 *)(ar4 + 0xb0) = *ar5;
        *(undefined4 *)(ar4 + 0xb4) = ar5[2] << 1;
        *(undefined4 *)(ar4 + 0xbc) = ar5[0xb];
        uVar3 = FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
        goto LAB_8c11dc70;
      }
      uVar4 = 0x14;
    }
    else {
      uVar4 = 7;
    }
  }
  else {
    uVar4 = 0x17;
  }
  uVar3 = FUN_8c1204c4(ar4 + 0x48,uVar4,a6,ar7);
LAB_8c11dc70:
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11daa4\n.set _FUN_8c11daa4, _FUN_8c11daa4_def\n");
//@unit 8c11dc7e
#include "../decls.h"
undefined4 FUN_8c11dc7e_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar6 == (int *)0x0) {
    ar5_00 = 0x13;
LAB_8c11dd8c:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,ar5_00,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  switch((uint)ar5) {
  case 1:
    *ar6 = *(int *)(ar4 + 0x8c);
    return 0;
  case 2:
    iVar1 = 0x88;
    goto LAB_8c11dd50;
  case 3:
    iVar1 = 0xbc;
    goto LAB_8c11dd6a;
  case 4:
    iVar1 = *(int *)(ar4 + 0x90) * 10;
    break;
  case 5:
    iVar1 = libgcc_divide_helper_01051c(*(undefined4 *)(ar4 + 0x78),100);
    *ar6 = iVar1;
    return 0;
  case 6:
    iVar1 = 0xa4;
    goto LAB_8c11dd6a;
  case 7:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa2);
    break;
  case 8:
    iVar1 = 0x32 - *(short *)(ar4 + 0xa0);
    goto LAB_8c11dd7a;
  case 9:
    iVar1 = 0x94;
LAB_8c11dd50:
    iVar1 = *(int *)(iVar1 + ar4);
    break;
  case 10:
    iVar1 = *(int *)(ar4 + 0x98) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar1 = *(int *)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar1 = *(int *)(ar4 + 0x80);
    break;
  case 0xd:
    iVar1 = 0xac;
LAB_8c11dd6a:
    iVar1 = *(int *)(iVar1 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar1;
    return 0;
  case 0xe:
    iVar1 = *(int *)(ar4 + 0x9c);
    goto LAB_8c11dd7a;
  default:
    ar5_00 = 10;
    goto LAB_8c11dd8c;
  }
  *ar6 = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c11dc7e\n.set _FUN_8c11dc7e, _FUN_8c11dc7e_def\n");
//@unit 8c11dda2
#include "../decls.h"
undefined4 FUN_8c11dda2_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  sVar3 = *(short *)(ar4 + 0x3e);
  if ((((sVar3 != 0) && (sVar3 != 1)) && (sVar3 != 2)) && (sVar3 != 5)) {
    uVar4 = 7;
override_prt_8c11e12a_7a4d7f16:
    uVar2 = FUN_8c1204c4(ar4 + 0x48,uVar4,ar6_00,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  ar6_00 = 10;
  uVar4 = libgcc_divide_helper_01051c(ar6,10);
  sVar3 = 0x32 - (short)ar6;
  switch((uint)ar5) {
  case 1:
    *(int *)(ar4 + 0x8c) = ar6;
    *(int *)(ar4 + 0xb0) = ar6;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 2:
    *(int *)(ar4 + 0x88) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 3:
    *(int *)(ar4 + 0xbc) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 4:
    *(undefined4 *)(ar4 + 0x90) = uVar4;
    uVar4 = libgcc_divide_helper_01051c(ar6 << 1,ar6_00);
    *(undefined4 *)(ar4 + 0xb4) = uVar4;
    uVar2 = FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    if ((uVar2 & 0xff) == 0) {
      FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    }
    break;
  case 5:
    *(int *)(ar4 + 0x78) = ar6 * 100;
    break;
  case 6:
    *(int *)(ar4 + 0xa4) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 7:
    *(short *)(ar4 + 0xa2) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 8:
    *(short *)(ar4 + 0xa0) = sVar3;
    FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0);
    break;
  case 9:
    *(int *)(ar4 + 0x94) = ar6;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 10:
    *(undefined4 *)(ar4 + 0x98) = uVar4;
    FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0);
    break;
  case 0xb:
    *(int *)(ar4 + 0x7c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xc:
    *(int *)(ar4 + 0x80) = ar6;
    FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0);
    break;
  case 0xd:
    *(int *)(ar4 + 0xac) = ar6;
    FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0);
    break;
  case 0xe:
    iVar1 = FUN_8c11cc2c(ar4,ar6,ar6_00,ar7);
    if (iVar1 != 0) {
      uVar4 = 0x14;
      goto override_prt_8c11e12a_7a4d7f16;
    }
    *(int *)(ar4 + 0x9c) = ar6;
    FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0);
    break;
  default:
    uVar4 = 10;
    goto override_prt_8c11e12a_7a4d7f16;
  }
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11dda2\n.set _FUN_8c11dda2, _FUN_8c11dda2_def\n");
//@unit 8c11e146
#include "../decls.h"
undefined4 FUN_8c11e146_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  FUN_8c120348(ar4 + 0x48,0x35,ar5 & 0xffff,0);
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e146\n.set _FUN_8c11e146, _FUN_8c11e146_def\n");
//@unit 8c11e190
#include "../decls.h"
undefined4 FUN_8c11e190_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + ar4),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(ar4 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e190\n.set _FUN_8c11e190, _FUN_8c11e190_def\n");
//@unit 8c11e194
#include "../decls.h"
undefined4 FUN_8c11e194_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + unaff_r14),0xb);
    return uVar1;
  }
  if (ar5 == (uint *)0x0) {
    uVar2 = FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(unaff_r14 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e194\n.set _FUN_8c11e194, _FUN_8c11e194_def\n");
//@unit 8c11e214
#include "../decls.h"
undefined4 FUN_8c11e214_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + ar4),0xb);
    return uVar1;
  }
  if (ar5 == (undefined2 *)0x0) {
    uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13);
    return uVar2 & 0xff;
  }
  *ar5 = **(undefined2 **)(0x22c + ar4);
  return 0;
}

__asm__(".globl _FUN_8c11e214\n.set _FUN_8c11e214, _FUN_8c11e214_def\n");
//@unit 8c11e218
#include "../decls.h"
undefined4 FUN_8c11e218_def(undefined4 ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = FUN_8c11cd02(*(undefined4 *)(0xfc + unaff_r14),0xb);
    return uVar1;
  }
  if (ar5 == (undefined2 *)0x0) {
    uVar2 = FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *ar5 = **(undefined2 **)(0x22c + unaff_r14);
  return 0;
}

__asm__(".globl _FUN_8c11e218\n.set _FUN_8c11e218, _FUN_8c11e218_def\n");
//@unit 8c11e274
#include "../decls.h"
undefined4 FUN_8c11e274_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  if (ar5 == 0) {
    uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7);
    return uVar2 & 0xff;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  FUN_8c120348(ar4 + 0x48,5,ar5,0);
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e274\n.set _FUN_8c11e274, _FUN_8c11e274_def\n");
//@unit 8c11e2de
#include "../decls.h"
undefined4 FUN_8c11e2de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar6;
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == 0) {
      FUN_8c11cd02(ar4,0x13,iVar5,ar7);
    }
    else {
      iVar1 = ar5;
      if (ar6 == 0) {
        iVar1 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,iVar5,ar7);
        if (iVar1 == 0) {
          FUN_8c11cd02(ar4,0x71,iVar5,ar7);
          return 0;
        }
        iVar5 = *(int *)(ar5 + 4);
        memmove(iVar1,ar5,iVar5,ar7);
      }
      iVar4 = ar4 + 8;
      piVar2 = (int *)(**(code **)(ar4 + 0x14))(0x1c,iVar4,iVar5,ar7);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = 0;
        piVar2[2] = (uint)(ar6 == 0);
        iVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar4,iVar5,ar7);
        piVar2[3] = iVar3;
        iVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar4,iVar5,ar7);
        iVar5 = 0x2d79b6f5;
        piVar2[4] = iVar4;
        piVar2[6] = iVar5;
        *piVar2 = iVar1;
        piVar2[5] = ar4;
        return piVar2;
      }
      FUN_8c11cd02(ar4,0x71,iVar5,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e2de\n.set _FUN_8c11e2de, _FUN_8c11e2de_def\n");
//@unit 8c11e3ea
#include "../decls.h"
uint FUN_8c11e3ea_def(int ar4,int ar5,undefined4 *ar6,undefined4 *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 *a6;
  undefined4 *ar7_00;
  
  a6 = ar6;
  ar7_00 = ar7;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)0x0) || (ar7 == (undefined4 *)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(ar4 + 0x3e) == 2) || (*(short *)(ar4 + 0x3e) == 1)) {
        uVar3 = FUN_8c11d14c(ar4,ar6,ar7,ar7_00);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        goto LAB_8c11e476;
      }
      a5 = 7;
      *ar6 = 0;
      *ar7 = 0;
    }
    else {
      a5 = 0xd;
      *ar6 = 0;
      *ar7 = 0;
    }
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,a5,a6,ar7_00);
    uVar3 = uVar3 & 0xff;
  }
  else {
LAB_8c11e476:
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11e3ea\n.set _FUN_8c11e3ea, _FUN_8c11e3ea_def\n");
//@unit 8c11e48a
#include "../decls.h"
uint FUN_8c11e48a_def(int ar4,undefined4 *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *a6;
  
  a6 = ar6;
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((ar5 == (undefined4 *)0x0) || (ar6 == (uint *)0x0)) {
      uVar2 = FUN_8c1204c4(ar4 + 0x48,0x13,a6,ar7);
      uVar2 = uVar2 & 0xff;
    }
    else {
      iVar1 = *(int *)(0xfc + ar4);
      uVar2 = (uint)(*(int *)(0x100 + ar4) != 0);
      *ar6 = uVar2;
      if (uVar2 == 0) {
        *ar5 = 0;
      }
      else {
        puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x14))(8,0xf4 + ar4,a6,ar7);
        *ar5 = puVar3;
        if (*(int *)(0x100 + ar4) != 0) {
          *puVar3 = *(undefined4 *)(0x100 + ar4);
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e48a\n.set _FUN_8c11e48a, _FUN_8c11e48a_def\n");
//@unit 8c11e534
#include "../decls.h"
undefined4 FUN_8c11e534_def(int *ar4,int *ar5,int ar6,undefined1 *ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int *ar5_00;
  undefined4 uVar5;
  int iVar6;
  uint *ar7_00;
  int iVar7;
  uint uStack_2c;
  int *piStack_28;
  undefined4 auStack_24 [2];
  
  ar7_00 = &uStack_2c;
  iVar7 = *(int *)((int)0xfc + (int)ar4);
  uStack_2c = 0;
  ar5_00 = ar5;
  piStack_28 = ar4;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  sVar1 = *(short *)((int)piStack_28 + 0x3e);
  if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
    if (ar5 == (int *)0x0) {
      iVar3 = (int)0x100;
      if (*(int *)(iVar3 + (int)ar4) == 0) {
        return 0;
      }
      iVar6 = (int)0xf4;
      *(int *)(*(int *)(iVar3 + (int)ar4) + 4) = *(int *)(*(int *)(iVar3 + (int)ar4) + 4) + -1;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      (**(code **)(iVar7 + 0x18))(*(undefined4 *)(iVar3 + 8 + (int)ar4),iVar6 + (int)ar4,ar6,ar7);
      iVar3 = (int)0x108;
      *(undefined4 *)(iVar3 + (int)ar4) = 0;
      if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) &&
         (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0)) {
        return 1;
      }
      uVar4 = FUN_8c11c99a(ar4,0,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    iVar3 = FUN_8c11cad4(ar5,ar5_00,ar6,ar7);
    if (iVar3 != 0) {
      return 1;
    }
    if (*(int *)*ar5 == 4) {
      auStack_24[0] = 0;
      if (*(int *)(*ar5 + 4) == 8) {
        iVar3 = 0;
LAB_8c11e7c4:
        uVar4 = FUN_8c120348(ar4 + 0x12,0x26,iVar3,auStack_24);
        if ((uVar4 & 0xff) != 0) {
          return 1;
        }
        return 0;
      }
      iVar3 = *ar5 + 8;
      piStack_28 = *(int **)((int)0x100 + (int)ar4);
      if (piStack_28 != (int *)0x0) {
        ar6 = (int)0x80;
        iVar7 = FUN_8c013ec0(iVar3,*piStack_28 + 8,ar6,ar7);
        if (iVar7 == 0) {
          iVar3 = iVar3 + 0x80;
          goto LAB_8c11e7c4;
        }
      }
      uVar5 = FUN_8c11cd02(*(undefined4 *)((int)0xfc + (int)ar4),0xc,ar6,ar7)
      ;
      return uVar5;
    }
    if (*(int *)*ar5 != 10) {
      uVar4 = (*(code *)puVar2)(ar4 + 0x12,0xd,ar6,ar7);
      goto LAB_8c11e7fa;
    }
    if (*(int *)((int)0x100 + (int)ar4) == 0) {
      iVar3 = (int)0xf4 + (int)ar4;
      uVar5 = (**(code **)(iVar7 + 0x14))((int)0xd4,iVar3,ar6,ar7);
      *(undefined4 *)((int)0x108 + (int)ar4) = uVar5;
      if (*(int *)((int)0x108 + (int)ar4) == 0) {
        return 1;
      }
      FUN_8c11066a(*(undefined4 *)((int)0x108 + (int)ar4),iVar3,ar6,ar7);
    }
    else {
      iVar3 = *(int *)((int)0x100 + (int)ar4);
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
    }
    iVar3 = (int)0x108;
    **(int **)(iVar3 + (int)ar4) = *ar5;
    if ((*(int *)(iVar3 + -4 + (int)ar4) != 0) && (iVar3 = FUN_8c11ea3c(ar4,0,ar6,ar7), iVar3 != 0))
    {
      return 1;
    }
    ar6 = *(int *)((int)0x108 + (int)ar4);
    uVar4 = FUN_8c120348(ar4 + 0x12,0x25,ar6,&uStack_2c);
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
    uVar5 = *(undefined4 *)((int)0x9c + (int)ar4);
    iVar3 = FUN_8c11cc2c(ar4,uVar5,ar6,ar7_00);
    if (iVar3 == 0) {
      piStack_28 = *(int **)((int)0x108 + (int)ar4);
      uVar4 = (**(code **)((int)piStack_28 + 8))(piStack_28,uVar5,ar6,ar7_00);
      uStack_2c = 0;
      if ((uVar4 & 0xffff) != 0) {
        do {
          uVar5 = (**(code **)((int)0x84 + *(int *)((int)0x108 + (int)ar4)))
                            (*(int *)((int)0x108 + (int)ar4),uStack_2c,ar6,ar7_00);
          iVar3 = (int)0x28c;
          iVar7 = uStack_2c * 4;
          iVar6 = *(int *)((int)0x108 + (int)ar4);
          uVar5 = (**(code **)(0x108 + -0x44 + iVar6))(iVar6,uVar5,ar6,ar7_00);
          *(undefined4 *)((int)ar4 + iVar7 + iVar3) = uVar5;
          uStack_2c = uStack_2c + 1;
        } while (uStack_2c < (uVar4 & 0xffff));
      }
      *(int **)((int)0x100 + (int)ar4) = ar5;
      ar5[1] = ar5[1] + 1;
      return 0;
    }
    uVar5 = 0x14;
  }
  else {
    uVar5 = 7;
    ar7_00 = (uint *)ar7;
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x12,uVar5,ar6,ar7_00);
LAB_8c11e7fa:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11e534\n.set _FUN_8c11e534, _FUN_8c11e534_def\n");
//@unit 8c11e82c
#include "../decls.h"
undefined4 FUN_8c11e82c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c11cad4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = FUN_8c11cd02(iVar1,9);
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (**(code **)(iVar1 + 0x18))(*ar4,iVar1 + 8,ar6,ar7);
    }
    (**(code **)(iVar1 + 0x18))(ar4,iVar1 + 8,ar6,ar7);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e82c\n.set _FUN_8c11e82c, _FUN_8c11e82c_def\n");
//@unit 8c11e896
#include "../decls.h"
int FUN_8c11e896_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = (**(code **)(ar4 + 0x14))(*(undefined4 *)(ar5 + 4),ar4 + 8,ar6,ar7);
  if (ar4_00 != 0) {
    memmove(ar4_00,ar5,*(undefined4 *)(ar5 + 4),ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11e896\n.set _FUN_8c11e896, _FUN_8c11e896_def\n");
//@unit 8c11e8d6
#include "../decls.h"
undefined4 FUN_8c11e8d6_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (ar5 == (int *)0x0) {
      FUN_8c11cd02(ar4,0x13,a6,ar7);
    }
    else if (*ar5 == 2) {
      if ((ar6 != 0) || (ar5 = (int *)FUN_8c11e896(ar4,ar5,a6,ar7), ar5 != (int *)0x0)) {
        iVar1 = ar4 + 8;
        puVar2 = (undefined4 *)(**(code **)(ar4 + 0x14))(0x1c,iVar1,a6,ar7);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[1] = 0;
          puVar2[2] = (uint)(ar6 == 0);
          uVar3 = (**(code **)(ar4 + 0x1c))(ar4 + 8,iVar1,a6,ar7);
          puVar2[3] = uVar3;
          uVar4 = (**(code **)(ar4 + 0x20))(ar4 + 8,iVar1,a6,ar7);
          uVar3 = 0x2783d5f5;
          puVar2[4] = uVar4;
          puVar2[6] = uVar3;
          *puVar2 = ar5;
          puVar2[5] = ar4;
          return puVar2;
        }
        FUN_8c11cd02(ar4,0x71,a6,ar7);
      }
    }
    else {
      FUN_8c11cd02(ar4,0xd,a6,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e8d6\n.set _FUN_8c11e8d6, _FUN_8c11e8d6_def\n");
//@unit 8c11e9b4
#include "../decls.h"
undefined4 FUN_8c11e9b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c11cb54(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = FUN_8c11cd02(iVar1,5);
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (**(code **)(iVar1 + 0x18))(*ar4,iVar1 + 8,ar6,ar7);
    }
    (**(code **)(iVar1 + 0x18))(ar4,iVar1 + 8,ar6,ar7);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e9b4\n.set _FUN_8c11e9b4, _FUN_8c11e9b4_def\n");
//@unit 8c11ea3c
#include "../decls.h"
undefined4 FUN_8c11ea3c_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  int *ar5_01;
  int aiStack_5c [20];
  undefined4 uStack_c;
  
  uStack_c = 0;
  ar5_01 = ar5;
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    if ((*(short *)(ar4 + 0x3e) != 2) && (*(short *)(ar4 + 0x3e) != 1)) {
      ar5_00 = 7;
      uVar4 = *(undefined4 *)(0xfc + ar4);
LAB_8c11eaae:
      uVar4 = FUN_8c11cd02(uVar4,ar5_00,ar6,ar7);
      return uVar4;
    }
    *(undefined4 *)(ar4 + 0x40) = 0;
    if (ar5 != (int *)0x0) {
      ar6 = (int)0x80;
      ar5_01 = (int *)(**(int **)(0x100 + ar4) + 8);
      iVar2 = FUN_8c013ec0(*ar5 + 8,ar5_01,ar6,ar7);
      if (iVar2 != 0) {
        ar5_00 = 0xc;
        uVar4 = *(undefined4 *)(0xfc + ar4);
        goto LAB_8c11eaae;
      }
    }
    iVar2 = (int)0x104;
    if (*(int *)(iVar2 + ar4) != 0) {
      *(int *)(*(int *)(iVar2 + ar4) + 4) = *(int *)(*(int *)(iVar2 + ar4) + 4) + -1;
    }
    puVar1 = (&FUN_8c11c99a);
    if (ar5 == (int *)0x0) {
      *(undefined4 *)(iVar2 + ar4) = 0;
      uVar3 = (*(code *)puVar1)(ar4,1,ar6,ar7);
      return uVar3 & 0xff;
    }
    iVar2 = FUN_8c11cb54(ar5,ar5_01,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c10ca2e(aiStack_5c,ar5_01,ar6,ar7);
      aiStack_5c[0] = *ar5;
      uVar3 = FUN_8c120348(ar4 + 0x48,0x24,aiStack_5c,0);
      if ((uVar3 & 0xff) == 0) {
        iVar2 = (int)0x104;
        ar5[1] = ar5[1] + 1;
        *(int **)(iVar2 + ar4) = ar5;
        return *(undefined4 *)(ar4 + 0x40);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ea3c\n.set _FUN_8c11ea3c, _FUN_8c11ea3c_def\n");
//@unit 8c11eb6c
#include "../decls.h"
undefined4 FUN_8c11eb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  return *(undefined4 *)(0x104 + ar4);
}

__asm__(".globl _FUN_8c11eb6c\n.set _FUN_8c11eb6c, _FUN_8c11eb6c_def\n");
//@unit 8c11eb8c
#include "../decls.h"
undefined4 FUN_8c11eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  undefined4 auStack_c [2];
  
  uVar4 = 0;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
  if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dc7e(ar4,1,auStack_c,uVar4), iVar2 == 0)) {
    ar6_00 = 0;
    uVar3 = 1;
    iVar2 = FUN_8c11dda2(ar4,1,0,uVar4);
    if ((iVar2 == 0) &&
       (uVar1 = FUN_8c12212e(ar4,uVar3,ar6_00,uVar4), (uVar1 & 0xff) == 0)) {
      uVar3 = 0;
      uVar1 = FUN_8c122230(ar4,(&DATA_8c127c1d),0,uVar4);
      if (((uVar1 & 0xff) == 0) &&
         (uVar1 = FUN_8c1222b4(ar4,(&DATA_8c127c1d),uVar3,uVar4), (uVar1 & 0xff) == 0
         )) {
        uVar4 = 0;
        uVar1 = FUN_8c120348(ar4 + 0x48,0x15,0,0);
        if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dda2(ar4,1,auStack_c[0],uVar4), iVar2 == 0)) {
          *(undefined2 *)(0x144 + ar4) = 0;
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11eb8c\n.set _FUN_8c11eb8c, _FUN_8c11eb8c_def\n");
//@unit 8c11ec7c
#include "../decls.h"
undefined4 FUN_8c11ec7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint *puVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int a5;
  int *ar6_00;
  uint *ar7_00;
  undefined4 ar7_01;
  int iVar9;
  int iVar10;
  float fVar12;
  undefined8 uVar11;
  undefined8 in_dr12;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_dr14;
  code *pcVar15;
  char cVar16;
  uint uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  int iStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  iVar10 = *(int *)(ar4 + 0xfc);
  uStack_40 = 0x1e;
  if (*(int *)(ar4 + 0x14c) == 0) {
LAB_8c11f120:
    uVar5 = 0;
  }
  else {
    iStack_34 = ar4;
    a4 = (**(code **)(iVar10 + 0x14))(0x78,ar4 + 0xf4,ar6,ar7);
    fVar14 = (float)in_dr14;
    if (a4 == 0) {
      uVar5 = FUN_8c11cd02(iVar10,1,ar6,ar7);
      return uVar5;
    }
    iVar8 = *(int *)(ar4 + 0x14c);
    iVar9 = *(int *)(iVar8 + 0xc);
    puStack_4c = *(uint **)(iVar8 + 0x10);
    uVar1 = *(ushort *)(iVar9 + 0x14);
    *(undefined4 *)(iVar8 + 0x10) = 0;
    FUN_8c11c5e4(ar4,&iStack_48,*(undefined4 *)(ar4 + 0x14c),0,0);
    ar7_00 = (uint *)0x0;
    *(uint **)(*(int *)(ar4 + 0x14c) + 0x10) = puStack_4c;
    puStack_4c = *(uint **)(*(int *)(iStack_48 + 4) + 0x14);
    uVar3 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
    if (((uVar3 & 0xff) == 0) && (iVar8 = FUN_8c11dc7e(ar4,1,&uStack_38,ar7_00), iVar8 == 0)) {
      ar6_00 = (int *)0x0;
      iVar8 = FUN_8c11dda2(ar4,1,0,ar7_00);
      if (iVar8 == 0) {
        iVar8 = 0;
        cVar16 = '\0';
        uVar3 = FUN_8c11d432(ar4,0,ar6_00,ar7_00);
        if ((uVar3 & 0xff) == 0) {
          uVar3 = (uint)uVar1;
          if (cVar16 == '\0') {
            uVar13 = 0x445925b1;
            pcVar15 = (code *)0x3a83126e;
          }
          else {
            uVar13 = 0x445925b100000000;
            fVar14 = 0.0009999999;
            pcVar15 = FUN_8c12212e;
          }
          while( true ) {
            puStack_4c = puStack_4c + 4;
            iVar9 = *(int *)(iVar9 + 0x10);
            if (*(int *)(iVar9 + 0x10) == 0) break;
            uStack_44 = (uint)*(ushort *)(iVar9 + 0x14);
            uVar4 = FUN_8c12212e(ar4,iVar8,ar6_00,ar7_00);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c12215c(ar4,&DAT_8c127c1d,0,uVar3,uStack_44), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            ar6_00 = &iStack_54;
            ar7_00 = &uStack_58;
            uVar4 = FUN_8c120348(ar4 + 0x48,0x20,ar6_00,&uStack_58);
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = FUN_8c120284(iStack_34,&DAT_8c127c1d,ar6_00,ar7_00), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            iVar8 = ar4 + 0xf4;
            (**(code **)(iVar10 + 0x18))(puStack_4c[3],iVar8,ar6_00,ar7_00);
            puVar2 = puStack_4c;
            *puStack_4c = uStack_58;
            if (uStack_58 != 0) {
              a5 = ar4 + 0xf4;
              iVar8 = uStack_58 * 0xc;
              cVar16 = '\0';
              uVar3 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              puVar2[3] = uVar3;
              if (uStack_40 < uStack_58) {
                uStack_40 = uStack_58;
                (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,ar6_00,ar7_00);
                iVar8 = uStack_40 << 2;
                a5 = ar4 + 0xf4;
                cVar16 = '\0';
                a4 = (**(code **)(iVar10 + 0x14))(iVar8,a5,ar6_00,ar7_00);
              }
              if (cVar16 == '\0') {
                fVar14 = (float)((ulonglong)uVar13 >> 0x20);
              }
              uVar4 = 0;
              if (uStack_58 != 0) {
                do {
                  iStack_3c = uVar4 * 4;
                  pfVar7 = (float *)(iStack_3c + a4);
                  uVar11 = 0x408f400000000000;
                  cVar16 = '\0';
                  thunk_FUN_8c013cd8(iVar8,a5,ar6_00,ar7_00);
                  uVar4 = uVar4 + 1;
                  fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                  if (cVar16 == '\0') {
                    *pfVar7 = fVar12;
                  }
                  else {
                    *(undefined8 *)pfVar7 = uVar11;
                  }
                  fVar14 = fVar14 + fVar12;
                } while (uVar4 < uStack_58);
                uVar4 = 0;
                if (uStack_58 != 0) {
                  do {
                    fVar12 = (float)((ulonglong)uVar11 >> 0x20);
                    if (*(float *)(uVar4 * 4 + a4) / fVar14 <= (float)(uint)pcVar15) {
                      *(undefined4 *)(uVar4 * 0xc + uVar3) = 6000;
                    }
                    else {
                      piVar6 = (int *)(uVar4 * 0xc + uVar3);
                      thunk_FUN_8c013dfc(iVar8,a5,ar6_00,ar7_00);
                      uVar11 = 0x3fe0000000000000;
                      *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                    }
                    iVar8 = uVar4 * 4;
                    a5 = uVar4 * 0xc + uVar3;
                    *(int *)(a5 + 4) = (int)*(short *)(*(int *)(iStack_54 + iVar8) + 2);
                    uStack_50 = CONCAT22(*(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 4),
                                         *(undefined2 *)
                                          (*(int *)(*(int *)(iStack_54 + iVar8) + 0xc) + 2));
                    uVar4 = uVar4 + 1;
                    *(undefined4 *)(a5 + 8) = uStack_50;
                  } while (uVar4 < uStack_58);
                }
              }
              iVar8 = ar4 + 0xf4;
              (**(code **)(iVar10 + 0x18))(iStack_54,iVar8,ar6_00,ar7_00);
              uVar3 = uStack_44;
            }
          }
          ar7_01 = 0;
          uVar5 = 0;
          uVar3 = FUN_8c120348(ar4 + 0x48,0x20,0,0);
          if (((uVar3 & 0xff) == 0) &&
             (uVar3 = FUN_8c11d432(ar4,1,uVar5,ar7_01), (uVar3 & 0xff) == 0)) {
            uVar3 = (**(code **)(ar4 + 0xc4))(iStack_48,ar4 + 0xf4,uVar5,ar7_01);
            FUN_8c11c7b8(ar4,iStack_48,uVar5,ar7_01);
            if ((uVar3 & 0xff) != 0) {
              return uVar3;
            }
            (**(code **)(iVar10 + 0x18))(a4,ar4 + 0xf4,uVar5,ar7_01);
            uVar3 = FUN_8c11c99a(ar4,2,uVar5,ar7_01);
            if ((uVar3 & 0xff) == 0) {
              uVar5 = 0;
              uVar3 = FUN_8c120348(ar4 + 0x48,0x15,0,0);
              if (((uVar3 & 0xff) == 0) &&
                 (iVar10 = FUN_8c11dda2(ar4,1,uStack_38,uVar5), iVar10 == 0)) {
                *(undefined2 *)(ar4 + 0x144) = 0;
                goto LAB_8c11f120;
              }
            }
          }
        }
      }
    }
LAB_8c11f0fa:
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11ec7c\n.set _FUN_8c11ec7c, _FUN_8c11ec7c_def\n");
//@unit 8c11f13e
#include "../decls.h"
undefined4 FUN_8c11f13e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c120348);
  *(int *)(0x10c + ar4) = ar5;
  puVar3 = (&DATA_8c127c1d);
  puVar2 = (&DATA_8c127c18);
  if (ar5 == 0) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 100);
    *(undefined4 *)(0x114 + ar4) = 0;
    if ((*(int *)(0x88 + ar4) == 0) || (*(char *)(0x234 + ar4) != '\0')) {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x34,0);
    }
    else {
      cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x33,0);
    }
  }
  else if (ar5 == 1) {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x68);
    *(undefined **)(0x114 + ar4) = puVar2;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2b,0);
  }
  else {
    if (ar5 != 2) {
      return 0x18;
    }
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined **)(0x114 + ar4) = puVar3;
    cVar4 = (*(code *)puVar1)(ar4 + 0x48,0x2c,0);
  }
  if ((cVar4 == '\0') &&
     (((*(int *)(0x88 + ar4) == 0 || (ar5 == 0)) ||
      (cVar4 = (*(code *)puVar1)(ar4 + 0x48,2,0), cVar4 == '\0')))) {
    *(uint *)(0x110 + ar4) = (uint)*(ushort *)(*(int *)(ar4 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f13e\n.set _FUN_8c11f13e, _FUN_8c11f13e_def\n");
//@unit 8c11f14a
#include "../decls.h"
undefined4 FUN_8c11f14a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_r0;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r12;
  int unaff_r14;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(in_r0 + unaff_r14) = ar5;
  puVar3 = (&DATA_8c127c1d);
  puVar2 = (&DATA_8c127c18);
  if (unaff_r12 == 0) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 100);
    *(undefined4 *)(0x114 + unaff_r14) = 0;
    if ((*(int *)(0x88 + unaff_r14) == 0) || (*(char *)(0x234 + unaff_r14) != '\0'))
    {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x34,0,0);
    }
    else {
      uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x33,0,0);
    }
  }
  else if (unaff_r12 == 1) {
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x68);
    *(undefined **)(0x114 + unaff_r14) = puVar2;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2b,0,0);
  }
  else {
    if (unaff_r12 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unaff_r14 + 0x60) = *(undefined4 *)(unaff_r14 + 0x6c);
    *(undefined **)(0x114 + unaff_r14) = puVar3;
    uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,0x2c,0,0);
  }
  if (((uVar4 & 0xff) == 0) &&
     (((*(int *)(0x88 + unaff_r14) == 0 || (unaff_r12 == 0)) ||
      (uVar4 = (*(code *)puVar1)(unaff_r14 + 0x48,2,0,0), (uVar4 & 0xff) == 0)))) {
    *(uint *)(0x110 + unaff_r14) = (uint)*(ushort *)(*(int *)(unaff_r14 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f14a\n.set _FUN_8c11f14a, _FUN_8c11f14a_def\n");
//@unit 8c11f258
#include "../decls.h"
uint FUN_8c11f258_def(int ar4,uint ar5,undefined1 *ar6,int ar7)

{
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
  iVar5 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar5 == 0) {
    if (ar6 == (undefined1 *)0x0) {
      uVar11 = 0x13;
    }
    else {
      sVar2 = *(short *)(ar4 + 0x3e);
      uVar8 = (uint)sVar2;
      if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
        if (*(int *)(0x10c + ar4) == 3) {
          uVar6 = FUN_8c11f13e(ar4,ar5,puVar10,iVar9);
          uVar8 = ar5;
          if ((uVar6 & 0xff) != 0) {
            return uVar6 & 0xff;
          }
        }
        else if (ar5 != *(uint *)(0x10c + ar4)) {
          uVar11 = 1;
          goto override_prt_8c11f2f4_7a4d7f16;
        }
        puVar4 = (&FUN_8c120284);
        *(undefined4 *)(ar4 + 0x40) = 0;
        uVar13 = *(uint *)(0x110 + ar4);
        for (uVar6 = ar7 + (uint)*(ushort *)(0x22a + ar4); uVar13 <= uVar6;
            uVar6 = uVar6 - uVar13) {
          if (*(short *)(0x22a + ar4) == 0) {
            puVar10 = (undefined1 *)0x1;
            uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x60),ar6,1,iVar9);
            if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            if (*(int *)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x70),ar6,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
            ar6 = ar6 + uVar13;
          }
          else {
            iVar5 = FUN_8c111dfe(*(undefined4 *)(ar4 + 0x60),uVar8,puVar10,iVar9);
            (*(code *)(&memmove))
                      (iVar5,0x150 + ar4,(uint)*(ushort *)(0x22a + ar4),iVar9);
            puVar10 = (undefined1 *)(uVar13 - *(ushort *)(0x22a + ar4));
            (*(code *)(&memmove))
                      (iVar5 + (uint)*(ushort *)(0x22a + ar4),ar6,puVar10,iVar9);
            uVar3 = *(ushort *)(0x22a + ar4);
            *(undefined2 *)(0x22a + ar4) = 0;
            ar6 = ar6 + (uVar13 - uVar3);
            if (*(int *)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)0x1;
              uVar8 = FUN_8c111cdc(*(undefined4 *)(ar4 + 0x70),iVar5,1,iVar9);
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
          }
          iVar5 = (int)0x13c;
          *(int *)(iVar5 + ar4) = *(int *)(iVar5 + ar4) + 1;
          uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(iVar5 + -0x28 + ar4),puVar10,iVar9);
          if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
          uVar8 = (uint)*(ushort *)(0x244 + ar4);
          uVar7 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
          if ((uVar7 & 0xff) != 0) goto LAB_8c11f504;
          if (*(int *)(0x140 + ar4) != 0) {
            uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(0x114 + ar4),puVar10,iVar9);
            if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
            uVar8 = (uint)*(ushort *)(0x244 + ar4);
            uVar6 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
joined_r0x8c11f48c:
            if ((uVar6 & 0xff) != 0) {
LAB_8c11f504:
              return *(undefined4 *)(ar4 + 0x40);
            }
            uVar6 = 0;
            break;
          }
          if ((*(uint *)(ar4 + 0x78) != 0) &&
             (*(uint *)(ar4 + 0x78) < *(uint *)(0x13c + ar4))) {
            iVar9 = 0;
            puVar10 = (undefined1 *)0x0;
            uVar8 = FUN_8c120348(ar4 + 0x48,3,0,0);
            if (((uVar8 & 0xff) == 0) &&
               (uVar8 = (*(code *)puVar4)(ar4,*(undefined4 *)(0x114 + ar4),puVar10,iVar9),
               (uVar8 & 0xff) == 0)) {
              uVar8 = (uint)*(ushort *)(0x244 + ar4);
              uVar6 = FUN_8c11d488(ar4,uVar8,puVar10,iVar9);
              goto joined_r0x8c11f48c;
            }
            goto LAB_8c11f5ba;
          }
        }
        if ((*(short *)(0x144 + ar4) != 0) &&
           (((*(short *)(0x144 + ar4) == 1 &&
             (uVar13 = FUN_8c11eb8c(ar4,uVar8,puVar10,iVar9), (uVar13 & 0xff) != 0)) ||
            ((*(short *)(0x144 + ar4) == 2 &&
             (uVar8 = FUN_8c11ec7c(ar4,uVar8,puVar10,iVar9), (uVar8 & 0xff) != 0)))))) {
LAB_8c11f5ba:
          return *(undefined4 *)(ar4 + 0x40);
        }
        if (*(int *)(0x148 + ar4) == 4) {
          iVar9 = (int)0x22a;
          uVar8 = (uint)*(ushort *)(iVar9 + ar4);
          puVar10 = (undefined1 *)(0x150 + ar4 + uVar8);
          for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
            uVar1 = *ar6;
            ar6 = ar6 + 1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + 1;
          }
          *(short *)(iVar9 + ar4) = (short)uVar6;
          goto LAB_8c11f5ba;
        }
        iVar5 = (int)0x148;
        iVar12 = (int)0xf4;
        uVar11 = *(undefined4 *)(iVar5 + ar4);
        *(undefined4 *)(iVar5 + ar4) = 4;
        uVar8 = (**(code **)(iVar5 + -0x7c + ar4))(uVar11,iVar12 + ar4,puVar10,iVar9);
        if ((uVar8 & 0xff) == 0) goto LAB_8c11f5ba;
        goto LAB_8c11f57e;
      }
      uVar11 = 7;
    }
override_prt_8c11f2f4_7a4d7f16:
    uVar8 = FUN_8c1204c4(ar4 + 0x48,uVar11,puVar10,iVar9);
    uVar8 = uVar8 & 0xff;
  }
  else {
LAB_8c11f57e:
    uVar8 = 1;
  }
  return uVar8;
}

__asm__(".globl _FUN_8c11f258\n.set _FUN_8c11f258, _FUN_8c11f258_def\n");
//@unit 8c11f5d2
#include "../decls.h"
undefined4 FUN_8c11f5d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  int iVar4;
  
  iVar2 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar2 != 0) {
    return 1;
  }
  sVar1 = *(short *)(ar4 + 0x3e);
  if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
    uVar3 = FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7);
    return uVar3 & 0xff;
  }
  uVar3 = FUN_8c121cc0(ar4,ar5,ar6,ar7);
  if (*(int *)(0x148 + ar4) != 4) {
    iVar2 = (int)0x148;
    iVar4 = (int)0xf4;
    a4 = *(undefined4 *)(iVar2 + ar4);
    *(undefined4 *)(iVar2 + ar4) = 4;
    uVar3 = (**(code **)(iVar2 + -0x7c + ar4))(a4,iVar4 + ar4,ar6,ar7);
  }
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11f5d2\n.set _FUN_8c11f5d2, _FUN_8c11f5d2_def\n");
//@unit 8c11f66a
#include "../decls.h"
uint FUN_8c11f66a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 a5;
  
  iVar5 = ar6;
  iVar3 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  if ((ar5 == 0) || (ar6 == 0)) {
    a5 = 0x13;
  }
  else {
    sVar1 = *(short *)(ar4 + 0x3e);
    if ((sVar1 == 1) || (sVar1 == 2)) {
      iVar3 = (**(code **)(*(int *)(0x108 + ar4) + 0x50))
                        (*(int *)(0x108 + ar4),(int)sVar1,iVar5,ar7);
      if (iVar3 == 0) {
        a5 = 0x15;
      }
      else {
        if (*(int *)(0x88 + ar4) == 0) {
          if ((*(int *)(0x104 + ar4) != 0) &&
             (iVar5 = FUN_8c11ea3c(ar4,0,iVar5,ar7), iVar5 != 0)) {
            return *(undefined4 *)(ar4 + 0x40);
          }
          iVar5 = 0;
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 3;
            iVar6 = (int)0x118;
            *(undefined4 *)(0x124 + ar4 + iVar5) =
                 *(undefined4 *)(0x118 + ar4 + iVar5);
            iVar7 = (int)0x118;
            *(undefined4 *)(0x124 + ar4 + iVar5 + 4) =
                 *(undefined4 *)(iVar6 + ar4 + iVar5 + 4);
            *(undefined4 *)(0x124 + ar4 + iVar5 + 8) =
                 *(undefined4 *)(iVar7 + ar4 + iVar5 + 8);
            iVar5 = iVar5 + 0xc;
          } while (iVar3 < 3);
          *(undefined4 *)(0x148 + ar4) = 4;
          uVar4 = FUN_8c121d36(ar4,3,ar5,ar6);
          goto LAB_8c11f79a;
        }
        a5 = 0x16;
      }
    }
    else {
      a5 = 7;
    }
  }
  uVar4 = (*(code *)puVar2)(ar4 + 0x48,a5,iVar5,ar7);
LAB_8c11f79a:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11f66a\n.set _FUN_8c11f66a, _FUN_8c11f66a_def\n");
//@unit 8c11f7bc
#include "../decls.h"
int FUN_8c11f7bc_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = *(int *)(0xfc + ar4);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(ar5 * 0xc + *(int *)(iVar1 + ar4) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    piVar2 = (int *)(0x268 + ar4);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + ar4) != 0) {
      (**(code **)(iVar5 + 0x18))(**(undefined4 **)(iVar1 + ar4),0xf4 + ar4,0);
    }
    piVar2 = *(int **)(0x2b0 + ar4);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,0xf4 + ar4);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (ar7 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; ar7 != 0; ar7 = *(int *)(ar7 + 4)) {
      *puVar3 = (short)*(undefined4 *)(ar7 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7bc\n.set _FUN_8c11f7bc, _FUN_8c11f7bc_def\n");
//@unit 8c11f7d6
#include "../decls.h"
int FUN_8c11f7d6_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 a6;
  int iVar5;
  int unaff_r11;
  int *piVar6;
  int iVar7;
  int unaff_r13;
  int unaff_r14;
  
  iVar5 = *(int *)(in_r0 + unaff_r13);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(unaff_r11 * 4 + *(int *)(iVar1 + unaff_r13) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    a6 = 3;
    piVar2 = (int *)(0x268 + unaff_r13);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + unaff_r13) != 0) {
      (**(code **)(iVar5 + 0x18))
                (**(undefined4 **)(iVar1 + unaff_r13),0xf4 + unaff_r13,3,ar7);
    }
    piVar2 = *(int **)(0x2b0 + unaff_r13);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,0xf4 + unaff_r13,a6,ar7);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (unaff_r14 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; unaff_r14 != 0; unaff_r14 = *(int *)(unaff_r14 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unaff_r14 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7d6\n.set _FUN_8c11f7d6, _FUN_8c11f7d6_def\n");
//@unit 8c11f898
#include "../decls.h"
uint FUN_8c11f898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = *(float **)(ar4 + 0x2c);
  fVar3 = *pfVar1;
  fVar2 = fVar3;
  while (pfVar1 = pfVar1 + 1, pfVar1 < *(float **)(ar4 + 0x30)) {
    if (*pfVar1 < fVar2) {
      fVar2 = *pfVar1;
    }
    if (fVar3 < *pfVar1) {
      fVar3 = *pfVar1;
    }
  }
  return (uint)(fVar3 - fVar2 < *(float *)(ar4 + 0x38));
}

__asm__(".globl _FUN_8c11f898\n.set _FUN_8c11f898, _FUN_8c11f898_def\n");
//@unit 8c11f8de
#include "../decls.h"
undefined4 FUN_8c11f8de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 ar5_00;
  float in_fr3;
  float fVar5;
  undefined4 in_PR;
  char cVar6;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar1 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6
                                   ,ar7);
    if (cVar6 == '\0') {
      fStack_c = *pfVar2;
      uStack_8 = in_PR;
      in_fr3 = fStack_c;
    }
    else {
      fStack_c = (float)*(undefined8 *)pfVar2;
      uStack_8 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    ar5_00 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc);
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),ar5_00,ar6,ar7);
    if (cVar6 == '\0') {
      fStack_10 = *pfVar2;
      in_fr3 = fStack_10;
    }
    else {
      fStack_10 = (float)*(undefined8 *)pfVar2;
      fStack_c = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x34);
    *(float **)(ar4 + 0x34) = pfVar3 + 1;
    if (cVar6 == '\0') {
      *pfVar3 = fStack_c;
      in_fr3 = fStack_c;
    }
    else {
      *(ulonglong *)(pfVar3 + -1) = CONCAT44(uStack_8,fStack_c);
    }
    if (*(int *)(ar4 + 0x34) == *(int *)(ar4 + 0x30)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x2c);
    }
    cVar6 = '\0';
    uVar1 = FUN_8c11f898(ar4,ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x44);
    if (cVar6 == '\0') {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
      pfVar3 = pfVar3 + 2;
    }
    *(float **)(ar4 + 0x44) = pfVar3;
    if (cVar6 == '\0') {
      pfVar3[-1] = fStack_10;
      in_fr3 = fStack_10;
    }
    else {
      *(ulonglong *)(pfVar3 + -2) = CONCAT44(fStack_c,fStack_10);
    }
    if (*(int *)(ar4 + 0x44) == *(int *)(ar4 + 0x40)) {
      *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar4 + 0x3c);
    }
    if (cVar6 == '\0') {
      in_fr3 = 0.0;
    }
    if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
      fVar5 = fVar5 * 0.099999994;
    }
    *pfVar2 = fVar5;
  }
  piVar4 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar4[1] * 4 + *(int *)(*piVar4 + 0x40)) != *(int *)(*piVar4 + 0x3c)) &&
     (*(int *)(*(int *)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(piVar4[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11f8de\n.set _FUN_8c11f8de, _FUN_8c11f8de_def\n");
//@unit 8c11fa1e
#include "../decls.h"
uint FUN_8c11fa1e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int in_r1;
  int a5;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  if (in_r0 == in_r1) {
    (**(code **)(a4 + 0x18))(a4,unaff_r13[0xb],ar6,ar7);
    a5 = unaff_r13[0xf];
    (**(code **)(a4 + 0x18))(a4,a5,ar6,ar7);
    FUN_8c120668(unaff_r13,a5,ar6,ar7);
  }
  return (uint)(in_r0 == in_r1);
}

__asm__(".globl _FUN_8c11fa1e\n.set _FUN_8c11fa1e, _FUN_8c11fa1e_def\n");
//@unit 8c11fa64
#include "../decls.h"
undefined4 FUN_8c11fa64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int a4;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  uint in_fr5;
  ulonglong uVar4;
  char cVar5;
  
  a4 = *unaff_r14;
  *(undefined2 *)(*(int *)unaff_r14[4] + 0xc) = (undefined2)ain0;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  unaff_r14[10] = (int)extraout_fr0 & 0xff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10] * 2 + 1,4,ar7);
  unaff_r14[0xb] = iVar1;
  uVar3 = 4;
  cVar5 = '\0';
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[10],4,ar7);
  unaff_r14[0xf] = iVar1;
  if ((unaff_r14[0xb] != 0) && (unaff_r14[0xf] != 0)) {
    uVar2 = 0;
    if (cVar5 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0xd2084f2200000000;
    }
    if (unaff_r14[10] * 2 != -1) {
      do {
        iVar1 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        if (cVar5 == '\0') {
          *(int *)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
        }
        else {
          *(ulonglong *)(unaff_r14[0xb] + iVar1) = uVar4;
        }
      } while (uVar2 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = FUN_8c1204c4(unaff_r14,2,uVar3,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c11fa64\n.set _FUN_8c11fa64, _FUN_8c11fa64_def\n");
//@unit 8c11fb64
#include "../decls.h"
undefined4 FUN_8c11fb64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,1,(&FUN_8c11f8de),(&DATA_8c11fa5e),(&DATA_8c11fa14),0x48);
  return uVar1;
}

__asm__(".globl _FUN_8c11fb64\n.set _FUN_8c11fb64, _FUN_8c11fb64_def\n");
//@unit 8c11fb98
#include "../decls.h"
undefined4 thunk_FUN_8c013dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c013dfc)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013dfc\n.set _thunk_FUN_8c013dfc, _thunk_FUN_8c013dfc_def\n");
//@unit 8c11fb9e
#include "../decls.h"
undefined4 thunk_FUN_8c013cd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c013cd8)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013cd8\n.set _thunk_FUN_8c013cd8, _thunk_FUN_8c013cd8_def\n");
//@unit 8c11fba4
#include "../decls.h"
undefined4 thunk_FUN_8c013d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c013d28)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013d28\n.set _thunk_FUN_8c013d28, _thunk_FUN_8c013d28_def\n");
//@unit 8c11fbaa
#include "../decls.h"
undefined4 thunk_FUN_8c013be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c013be8();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013be8\n.set _thunk_FUN_8c013be8, _thunk_FUN_8c013be8_def\n");
//@unit 8c11fbb0
#include "../decls.h"
undefined4 thunk_FUN_8c014064_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c014064)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c014064\n.set _thunk_FUN_8c014064, _thunk_FUN_8c014064_def\n");
//@unit 8c11fbb6
#include "../decls.h"
undefined4 FUN_8c11fbb6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _FUN_8c11fbb6\n.set _FUN_8c11fbb6, _FUN_8c11fbb6_def\n");
//@unit 8c11fbbc
#include "../decls.h"
undefined4 thunk_FUN_8c0142e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c0142e4)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c0142e4\n.set _thunk_FUN_8c0142e4, _thunk_FUN_8c0142e4_def\n");
//@unit 8c11fbc2
#include "../decls.h"
undefined4 thunk_FUN_8c013c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c013c88)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013c88\n.set _thunk_FUN_8c013c88, _thunk_FUN_8c013c88_def\n");
//@unit 8c11fbe4
#include "../decls.h"
undefined4 FUN_8c11fbe4_def(int ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  char cVar2;
  
  *(int *)(*(int *)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x24))(ar4,ar6,ar7,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 8) != '\0') {
      do {
        if (*(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc)) == 0) {
          *(int *)(*(int *)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(int *)(cVar2 * 8 + *(int *)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 8));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fbe4\n.set _FUN_8c11fbe4, _FUN_8c11fbe4_def\n");
//@unit 8c11fc5e
#include "../decls.h"
undefined4 FUN_8c11fc5e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (**(code **)(ar4 + 0x28))(ar4,ar6,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(ar5 + 9) != '\0') {
      do {
        if (*(int *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) == 0) {
          *(undefined4 *)(cVar2 * 4 + *(int *)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(ar5 + 9));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fc5e\n.set _FUN_8c11fc5e, _FUN_8c11fc5e_def\n");
//@unit 8c11fcc4
#include "../decls.h"
undefined4 FUN_8c11fcc4_def(ushort *ar4,byte *ar5,byte *ar6,byte *ar7)

{
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
  iVar5 = (**(code **)(ar4 + 8))(ar4,iVar13 << 2,ar6,ar7);
  *(int *)(ar4 + 2) = iVar5;
  if (iVar5 != 0) {
    iVar5 = (**(code **)(ar4 + 8))(ar4,iVar12 << 2,pbVar9,pbVar8);
    *(int *)(ar4 + 6) = iVar5;
    if (iVar5 != 0) {
      a6 = (byte *)0x1;
      a5 = (char *)(**(code **)(ar4 + 10))(ar4,iVar13 * 2 + iVar12,1,pbVar8);
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
        if (*(int *)(pbVar9 + 4) == 0) {
          if (*pbVar9 == 0) {
            a6 = (byte *)(int)*a5;
            uVar10 = (**(code **)(ar4 + 0x10))(ar4,(int)*pcVar7,a6,pbVar8);
            if ((uVar10 & 0xff) != 0) {
              return 1;
            }
          }
        }
        else {
          ar5 = (byte *)(**(code **)(pbVar9 + 4))(ar4,(int)(char)*pbVar9,a6,pbVar8);
          if (ar5 == (byte *)0x0) {
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
          *(byte **)(*(int *)(ar4 + 2) + (uint)uVar4 * 4) = ar5;
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
          uVar11 = *(undefined4 *)(*(int *)(ar4 + 2) + ((uint)ar6[1] - (uint)ar4[1]) * 4);
        }
        if ((uVar10 & 0xff) != (uint)*ar6) {
          ar5 = (byte *)(*(code *)(&FUN_8c1122ac))
                                  (ar4,(int)(char)*ar6,
                                   (uint)(byte)pcVar7[((uint)*ar6 - (uint)ar4[5]) + iVar13],pbVar8);
          if (ar5 == (byte *)0x0) {
            return 1;
          }
          uVar4 = ar4[4];
          ar4[4] = uVar4 + 1;
          *(byte **)((uint)uVar4 * 4 + *(int *)(ar4 + 6)) = ar5;
          uVar10 = (uint)(char)*ar6;
        }
        a6 = ar5;
        uVar6 = FUN_8c11fc5e(ar4,uVar11,ar5,pbVar8);
        if ((uVar6 & 0xff) != 0) {
          return 1;
        }
      }
      bVar1 = *ar7;
      while( true ) {
        if (bVar1 == uVar14) {
          (**(code **)(ar4 + 0xc))(ar4,a5,a6,pbVar8);
          return 0;
        }
        uVar4 = ar4[5];
        bVar1 = *ar7;
        if (ar7[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(*(int *)(ar4 + 2) + ((uint)ar7[1] - (uint)ar4[1]) * 4);
        }
        uVar10 = (int)(char)bVar1 - (int)(short)uVar4 & 0xff;
        cVar2 = pcVar7[uVar10 + iVar13];
        pcVar7[uVar10 + iVar13] = cVar2 - 1U;
        pbVar8 = (byte *)(uint)(byte)(cVar2 - 1U);
        a6 = *(byte **)(*(int *)(ar4 + 6) + ((int)(char)bVar1 - (int)(short)uVar4 & 0xffU) * 4);
        uVar10 = FUN_8c11fbe4(ar4,uVar11,a6,pbVar8);
        if ((uVar10 & 0xff) != 0) break;
        ar7 = ar7 + 2;
        bVar1 = *ar7;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11fcc4\n.set _FUN_8c11fcc4, _FUN_8c11fcc4_def\n");
//@unit 8c11ffa8
#include "../decls.h"
uint FUN_8c11ffa8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar5 = (int)0xff;
  iVar4 = 0;
  if (*ar4 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(ar4 + 2) + iVar4 * 4);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1c) != 0)) {
        cVar2 = (**(code **)(iVar6 + 0x1c))(iVar6,iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*ar4);
  }
  puVar1 = (&FUN_8c1113d0);
  iVar4 = 0;
  if (ar4[4] != 0) {
    do {
      if (*(int *)(*(int *)(ar4 + 6) + iVar4 * 4) != 0) {
        cVar2 = (*(code *)puVar1)(iVar5,0);
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)ar4[4]);
  }
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 2));
  (**(code **)(ar4 + 0xc))(ar4,*(undefined4 *)(ar4 + 6));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffa8\n.set _FUN_8c11ffa8, _FUN_8c11ffa8_def\n");
//@unit 8c11ffb8
#include "../decls.h"
uint FUN_8c11ffb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint unaff_r9;
  uint uVar3;
  uint uVar4;
  int a5;
  int iVar5;
  ushort *unaff_r14;
  
  a5 = (int)0xff;
  uVar3 = unaff_r9;
  uVar4 = unaff_r9;
  if (*unaff_r14 != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 2) + uVar4 * 4);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x1c) != 0)) {
        ar7 = 0;
        ar6 = 0;
        uVar2 = (**(code **)(iVar5 + 0x1c))(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar2 & 0xff) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)*unaff_r14);
  }
  puVar1 = (&FUN_8c1113d0);
  if (unaff_r14[4] != 0) {
    do {
      iVar5 = *(int *)(*(int *)(unaff_r14 + 6) + unaff_r9 * 4);
      if (iVar5 != 0) {
        ar7 = 0;
        ar6 = 0;
        uVar4 = (*(code *)puVar1)(iVar5,a5,0,0);
        uVar3 = uVar3 | (uVar4 & 0xff) == 0;
      }
      unaff_r9 = unaff_r9 + 1;
    } while ((int)unaff_r9 < (int)(uint)unaff_r14[4]);
  }
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 2),ar6,ar7);
  (**(code **)(unaff_r14 + 0xc))(unaff_r14,*(undefined4 *)(unaff_r14 + 6),ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c11ffb8\n.set _FUN_8c11ffb8, _FUN_8c11ffb8_def\n");
