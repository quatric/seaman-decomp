//@unit 8c120078
#include "../decls.h"
undefined4 FUN_8c120078_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  if (*ar4 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(ar4 + 2) + iVar3 * 4);
      if ((*(int *)(iVar4 + 0x14) != 0) &&
         (cVar2 = (**(code **)(iVar4 + 0x14))(iVar4,uVar5), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*ar4);
  }
  puVar1 = (&FUN_8c11194c);
  iVar3 = 0;
  if (ar4[4] != 0) {
    do {
      iVar4 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 6) + iVar3 * 4));
      if (iVar4 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)ar4[4]);
  }
  return 0;
}

__asm__(".globl _FUN_8c120078\n.set _FUN_8c120078, _FUN_8c120078_def\n");
//@unit 8c12007c
#include "../decls.h"
undefined4 FUN_8c12007c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ushort *unaff_r14;
  
  iVar3 = 0;
  if (*unaff_r14 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(unaff_r14 + 2) + iVar3 * 4);
      if ((*(int *)(iVar4 + 0x14) != 0) &&
         (uVar2 = (**(code **)(iVar4 + 0x14))(iVar4,ar5,ar6,ar7), (uVar2 & 0xff) != 0)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*unaff_r14);
  }
  puVar1 = (&FUN_8c11194c);
  iVar3 = 0;
  if (unaff_r14[4] != 0) {
    do {
      iVar4 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(unaff_r14 + 6) + iVar3 * 4),ar5,ar6,ar7);
      if (iVar4 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)unaff_r14[4]);
  }
  return 0;
}

__asm__(".globl _FUN_8c12007c\n.set _FUN_8c12007c, _FUN_8c12007c_def\n");
//@unit 8c1200f4
#include "../decls.h"
undefined4 FUN_8c1200f4_def(ushort *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)ar4[1];
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*ar4)) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(ar4 + 2));
  }
  return 0;
}

__asm__(".globl _FUN_8c1200f4\n.set _FUN_8c1200f4, _FUN_8c1200f4_def\n");
//@unit 8c12011a
#include "../decls.h"
undefined4 FUN_8c12011a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)*(ushort *)(ar4 + 10);
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)(ar4 + 8))) {
    return *(undefined4 *)(iVar1 * 4 + *(int *)(ar4 + 0xc));
  }
  return 0;
}

__asm__(".globl _FUN_8c12011a\n.set _FUN_8c12011a, _FUN_8c12011a_def\n");
//@unit 8c120148
#include "../decls.h"
undefined4 FUN_8c120148_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  undefined4 a7;
  undefined4 uVar2;
  
  uVar2 = 0;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1200f4(ar4,(int)*ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c12011a(ar4,(int)*ar5,a6,a7);
    if (iVar1 != 0) {
      uVar2 = FUN_8c1113d0(iVar1,(int)ar5[1],ar6,ar7);
    }
  }
  else {
    uVar2 = (**(code **)(iVar1 + 0x1c))(iVar1,(int)ar5[1],ar6,ar7);
    if (0xf9 <= (short)(ushort)(byte)ar5[1]) {
      uVar2 = FUN_8c1207e8(iVar1,(int)ar5[1],ar6,ar7);
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c120148\n.set _FUN_8c120148, _FUN_8c120148_def\n");
//@unit 8c1201e6
#include "../decls.h"
undefined4
FUN_8c1201e6_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  uint uVar1;
  
  *(undefined4 *)(ar4 + 0x34) = ar7;
  *(undefined4 *)(ar4 + 0x38) = s12;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x1c) = *ar5;
  *(undefined4 *)(ar4 + 0x20) = ar5[1];
  *(undefined4 *)(ar4 + 0x24) = ar5[2];
  *(undefined4 *)(ar4 + 0x28) = ar5[3];
  *(undefined4 *)(ar4 + 0x2c) = ar5[4];
  *(undefined4 *)(ar4 + 0x30) = ar5[5];
  *(undefined2 *)(ar4 + 0x3c) = (undefined2)s16;
  *(undefined2 *)(ar4 + 0x3e) = (undefined2)s20;
  *(undefined4 *)(ar4 + 0x10) = *ar6;
  *(undefined4 *)(ar4 + 0x14) = ar6[1];
  *(undefined4 *)(ar4 + 0x18) = ar6[2];
  uVar1 = FUN_8c11fcc4(ar4,s0,s4,s8);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c120078(ar4,s0,s4,s8), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1201e6\n.set _FUN_8c1201e6, _FUN_8c1201e6_def\n");
//@unit 8c1201ea
#include "../decls.h"
undefined4
FUN_8c1201ea_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,
            undefined4 s4,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24)

{
  uint uVar1;
  int unaff_r14;
  
  *(undefined4 *)(unaff_r14 + 0x34) = ar7;
  *(undefined4 *)(unaff_r14 + 0x38) = s16;
  *(undefined4 *)(unaff_r14 + 0x40) = 0;
  *(undefined4 *)(unaff_r14 + 0x1c) = *ar5;
  *(undefined4 *)(unaff_r14 + 0x20) = ar5[1];
  *(undefined4 *)(unaff_r14 + 0x24) = ar5[2];
  *(undefined4 *)(unaff_r14 + 0x28) = ar5[3];
  *(undefined4 *)(unaff_r14 + 0x2c) = ar5[4];
  *(undefined4 *)(unaff_r14 + 0x30) = ar5[5];
  *(undefined2 *)(unaff_r14 + 0x3c) = (undefined2)s20;
  *(undefined2 *)(unaff_r14 + 0x3e) = (undefined2)s24;
  *(undefined4 *)(unaff_r14 + 0x10) = *ar6;
  *(undefined4 *)(unaff_r14 + 0x14) = ar6[1];
  *(undefined4 *)(unaff_r14 + 0x18) = ar6[2];
  uVar1 = FUN_8c11fcc4(unaff_r14,s4,s8,s12);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c120078(unaff_r14,s4,s8,s12), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1201ea\n.set _FUN_8c1201ea, _FUN_8c1201ea_def\n");
//@unit 8c12025e
#include "../decls.h"
undefined4 FUN_8c12025e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c11ffa8(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c12025e\n.set _FUN_8c12025e, _FUN_8c12025e_def\n");
//@unit 8c120284
#include "../decls.h"
undefined4 FUN_8c120284_def(ushort *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 a5;
  byte *a5_00;
  ushort uVar7;
  uint uVar8;
  int a4;
  int *piVar9;
  byte *pbVar10;
  
  puVar3 = (&FUN_8c1112e2);
  a5_00 = ar5;
  if (ar5 == (byte *)0x0) {
    uVar2 = *ar4;
    a5 = 0;
    do {
      uVar8 = 0;
      piVar9 = *(int **)(ar4 + 2);
      uVar7 = 0;
      if (uVar2 != 0) {
        do {
          uVar4 = (**(code **)(*piVar9 + 0x18))(*piVar9,a5,ar6,ar7);
          iVar6 = *piVar9;
          piVar9 = piVar9 + 1;
          uVar5 = (*(code *)puVar3)(iVar6,a5,ar6,ar7);
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 | uVar4 | uVar5;
        } while ((uVar7 & 0xff) < uVar2);
      }
    } while ((uVar8 & 0xff) != 0);
  }
  else {
    do {
      uVar2 = ar4[1];
      iVar6 = *(int *)(ar4 + 2);
      uVar8 = 0;
      bVar1 = *ar5;
      pbVar10 = ar5;
      while (bVar1 != 0) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        a4 = *(int *)((uint)bVar1 * 4 + iVar6 + (uint)uVar2 * -4);
        uVar4 = (**(code **)(a4 + 0x18))(a4,a5_00,ar6,ar7);
        uVar5 = (*(code *)puVar3)(a4,a5_00,ar6,ar7);
        uVar8 = uVar8 | uVar4 | uVar5;
        bVar1 = *pbVar10;
      }
    } while ((uVar8 & 0xff) != 0);
  }
  return 0;
}

__asm__(".globl _FUN_8c120284\n.set _FUN_8c120284, _FUN_8c120284_def\n");
//@unit 8c120348
#include "../decls.h"
undefined4 FUN_8c120348_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 a7;
  uint uVar9;
  int a4;
  
  iVar2 = ar4[1];
  a4 = *ar4;
  pcVar7 = *(char **)(*(int *)((uint)*(ushort *)(a4 + 0x3c) * 4 + *(int *)(a4 + 0x38)) +
                     (uint)*(ushort *)(a4 + 0x3e) * 4);
  iVar6 = *(int *)(pcVar7 + 4);
  uVar9 = 0;
  for (; (iVar6 != 0 && (*pcVar7 != (char)iVar2)); pcVar7 = pcVar7 + 8) {
    iVar6 = *(int *)(pcVar7 + 0xc);
  }
  piVar8 = *(int **)(pcVar7 + 4);
  if (piVar8 != (int *)0x0) {
    iVar6 = *piVar8;
    while ((iVar6 != 0 && ((uint)*(byte *)*piVar8 != (ar5 & 0xff)))) {
      piVar8 = piVar8 + 1;
      iVar6 = *piVar8;
    }
    iVar6 = *piVar8;
    if (iVar6 != 0) {
      uVar3 = ar6;
      a7 = ar7;
      if ((*(ushort *)(iVar6 + 2) != 0xffff) &&
         ((uint)*(ushort *)(iVar6 + 2) != (uint)*(ushort *)(a4 + 0x3e))) {
        *(undefined2 *)(a4 + 0x3e) = *(undefined2 *)(iVar6 + 2);
        uVar9 = (**(code **)(a4 + 0x1c))(a4,(int)*(short *)(a4 + 0x3e),ar6,ar7);
        if ((uVar9 & 0xff) != 0) {
          return uVar9;
        }
      }
      if (*(char *)(iVar6 + 1) == '\0') {
        cVar1 = *(char *)(iVar6 + 9);
        iVar5 = iVar6 + 8;
        while (cVar1 != '\0') {
          uVar4 = FUN_8c120148(a4,iVar5,ar6,ar7);
          uVar9 = uVar9 | (uVar4 & 0xff) == 0;
          cVar1 = *(char *)(iVar5 + 3);
          iVar5 = iVar5 + 2;
        }
      }
      else {
        uVar3 = FUN_8c1200f4(a4,(int)*(char *)(iVar6 + 1),uVar3,a7);
        iVar5 = FUN_8c1208fc(iVar6 + 8,uVar3,a4,a7);
        uVar9 = (uint)(iVar5 == 0);
      }
      if (*(int *)(iVar6 + 4) != 0) {
        uVar4 = (**(code **)(iVar6 + 4))(a4,(int)(char)iVar2,ar5,ar6);
        uVar9 = uVar9 | uVar4;
      }
      return uVar9;
    }
  }
  uVar3 = FUN_8c1204c4(ar4,5,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c120348\n.set _FUN_8c120348, _FUN_8c120348_def\n");
//@unit 8c1204c4
#include "../decls.h"
int FUN_8c1204c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = *ar4;
  if (*(int *)(a4 + 0x40) == 0) {
    *(uint *)(a4 + 0x40) = (uint)CONCAT12((char)ar4[1],(short)ar5);
  }
  if (*(int *)(a4 + 0x2c) != 0) {
    (**(code **)(a4 + 0x2c))(a4,*(undefined4 *)(a4 + 0x40),ar6,ar7);
  }
  return (int)(short)ar5;
}

__asm__(".globl _FUN_8c1204c4\n.set _FUN_8c1204c4, _FUN_8c1204c4_def\n");
//@unit 8c12050a
#include "../decls.h"
int FUN_8c12050a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  
  a4 = *ar4;
  if (*(int *)(a4 + 0x44) == 0) {
    *(uint *)(a4 + 0x44) = (uint)CONCAT12((char)ar4[1],(short)ar5);
  }
  if (*(int *)(a4 + 0x30) != 0) {
    (**(code **)(a4 + 0x30))(a4,*(undefined4 *)(a4 + 0x44),ar6,ar7);
  }
  return (int)(short)ar5;
}

__asm__(".globl _FUN_8c12050a\n.set _FUN_8c12050a, _FUN_8c12050a_def\n");
//@unit 8c120550
#include "../decls.h"
int FUN_8c120550_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = *(int *)(*ar4 + 0x34);
  for (psVar2 = *(short **)(iVar1 + (uint)*(byte *)(ar4 + 1) * 4);
      (*psVar2 != (short)ar5 && (*psVar2 != 0)); psVar2 = psVar2 + 4) {
  }
  if (*psVar2 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c120550\n.set _FUN_8c120550, _FUN_8c120550_def\n");
//@unit 8c120580
#include "../decls.h"
undefined4
FUN_8c120580_def(int ar4,undefined4 ar5,undefined4 ar6,uint ar7,int s0,int s4,int s8,undefined4 s12)

{
  int *a5;
  int iVar1;
  uint a7;
  int iStack_1c;
  undefined1 uStack_18;
  
  a7 = ar7;
  a5 = (int *)(**(code **)(ar4 + 0x14))(ar4,1,s12,ar7);
  iStack_1c = ar4;
  uStack_18 = (undefined1)ar5;
  if (a5 == (int *)0x0) {
    FUN_8c1204c4(&iStack_1c,2,s12,a7);
  }
  else {
    if ((byte)ar6 != 0) {
      s12 = 8;
      iVar1 = (**(code **)(ar4 + 0x14))(ar4,(uint)(byte)ar6,8,a7);
      a5[3] = iVar1;
    }
    if ((ar7 & 0xff) != 0) {
      s12 = 4;
      iVar1 = (**(code **)(ar4 + 0x14))(ar4,ar7 & 0xff,4,a7);
      a5[4] = iVar1;
    }
    if ((((byte)ar6 == 0) || (a5[3] != 0)) && (((ar7 & 0xff) == 0 || (a5[4] != 0)))) {
      *a5 = ar4;
      *(undefined1 *)(a5 + 1) = (undefined1)ar5;
      *(byte *)(a5 + 2) = (byte)ar6;
      *(char *)((int)a5 + 9) = (char)ar7;
      a5[5] = s4;
      a5[7] = s8;
      a5[6] = s0;
      a5[9] = s0;
      *(undefined1 *)(a5 + 8) = 1;
      return a5;
    }
    (**(code **)(ar4 + 0x18))(ar4,a5,s12,a7);
    FUN_8c1204c4(&iStack_1c,2,s12,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c120580\n.set _FUN_8c120580, _FUN_8c120580_def\n");
//@unit 8c120668
#include "../decls.h"
undefined4 FUN_8c120668_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((char)ar4[2] != '\0') {
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[3],ar6,ar7);
  }
  if (*(char *)((int)ar4 + 9) != '\0') {
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[4],ar6,ar7);
  }
                    
                    
  uVar1 = (**(code **)(*ar4 + 0x18))(*ar4,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c120668\n.set _FUN_8c120668, _FUN_8c120668_def\n");
//@unit 8c1206ba
#include "../decls.h"
uint FUN_8c1206ba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = (&FUN_8c1113d0);
  uVar4 = 0;
  uVar5 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar3 = (undefined4 *)(uVar5 * 8 + *(int *)(ar4 + 0xc));
      cVar2 = (*(code *)puVar1)(*puVar3,6,puVar3[1],0);
      uVar4 = uVar4 | cVar2 == '\0';
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(ar4 + 8));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1206ba\n.set _FUN_8c1206ba, _FUN_8c1206ba_def\n");
//@unit 8c1206cc
#include "../decls.h"
uint FUN_8c1206cc_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint in_r3;
  undefined4 *puVar3;
  uint unaff_r12;
  int unaff_r13;
  
  puVar1 = (&FUN_8c1113d0);
  if (in_r3 < *(byte *)(unaff_r13 + 8)) {
    do {
      puVar3 = (undefined4 *)(ar4 * 8 + *(int *)(unaff_r13 + 0xc));
      uVar2 = (*(code *)puVar1)(*puVar3,6,puVar3[1],0);
      unaff_r12 = unaff_r12 | (uVar2 & 0xff) == 0;
      ar4 = ar4 + 1;
    } while (ar4 < *(byte *)(unaff_r13 + 8));
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c1206cc\n.set _FUN_8c1206cc, _FUN_8c1206cc_def\n");
//@unit 8c12071a
#include "../decls.h"
uint FUN_8c12071a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = (&FUN_8c1113d0);
  if (ar5 == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 7;
  }
  uVar5 = 0;
  uVar6 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar4 = (undefined4 *)(uVar6 * 8 + *(int *)(ar4 + 0xc));
      cVar2 = (*(code *)puVar1)(*puVar4,uVar3,puVar4[1],ar5);
      uVar5 = uVar5 | cVar2 == '\0';
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(ar4 + 8));
  }
  return uVar5;
}

__asm__(".globl _FUN_8c12071a\n.set _FUN_8c12071a, _FUN_8c12071a_def\n");
//@unit 8c12072a
#include "../decls.h"
uint FUN_8c12072a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 a5;
  undefined4 unaff_r10;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char in_T;
  
  puVar1 = (&FUN_8c1113d0);
  if (in_T == '\x01') {
    a5 = 5;
  }
  else {
    a5 = 7;
  }
  uVar4 = 0;
  uVar5 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      puVar3 = (undefined4 *)(uVar5 * 8 + *(int *)(ar4 + 0xc));
      uVar2 = (*(code *)puVar1)(*puVar3,a5,puVar3[1],unaff_r10);
      uVar4 = uVar4 | (uVar2 & 0xff) == 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(ar4 + 8));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c12072a\n.set _FUN_8c12072a, _FUN_8c12072a_def\n");
//@unit 8c120798
#include "../decls.h"
undefined4 FUN_8c120798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = FUN_8c1206ba(ar4,ar5,ar6,ar7);
  puVar1 = (&DATA_8c1206b6);
  if ((uVar2 & 0xff) != 0) {
    return 1;
  }
  if (*(undefined **)(ar4 + 0x18) != (&DATA_8c1206b6)) {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x18);
    *(undefined **)(ar4 + 0x18) = puVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c120798\n.set _FUN_8c120798, _FUN_8c120798_def\n");
//@unit 8c1207c6
#include "../decls.h"
undefined4 FUN_8c1207c6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c12071a(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  *(undefined4 *)(ar4 + 0x18) = *(undefined4 *)(ar4 + 0x24);
  return 0;
}

__asm__(".globl _FUN_8c1207c6\n.set _FUN_8c1207c6, _FUN_8c1207c6_def\n");
//@unit 8c1207e8
#include "../decls.h"
uint FUN_8c1207e8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ar5 & 0xff;
  uVar2 = 1;
  if (uVar1 == (int)0xf9) {
LAB_8c12085e:
    if (*(char *)(ar4 + 0x20) != '\0') {
      uVar1 = FUN_8c1207c6(ar4,ar6,1,1);
      uVar2 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (uVar1 == (int)0xfa) {
LAB_8c120846:
      uVar1 = FUN_8c120798(ar4,ar5,1,1);
    }
    else {
      if (uVar1 == (int)0xfb) {
        ar6 = 0;
        *(undefined1 *)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (uVar1 == (int)0xfc) {
        *(undefined1 *)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (uVar1 == (int)0xfd) {
        uVar1 = FUN_8c12071a(ar4,ar6,1,1);
      }
      else {
        if (uVar1 != (int)0xfe) {
          return 0;
        }
        uVar1 = FUN_8c1206ba(ar4,ar5,1,1);
      }
    }
    uVar2 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1207e8\n.set _FUN_8c1207e8, _FUN_8c1207e8_def\n");
//@unit 8c1207f0
#include "../decls.h"
uint FUN_8c1207f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int in_r1;
  uint uVar1;
  undefined4 unaff_r14;
  
  uVar1 = 1;
  if (in_r0 == in_r1) {
LAB_8c12085e:
    if (*(char *)(ar4 + 0x20) != '\0') {
      uVar1 = FUN_8c1207c6(ar4,unaff_r14,1,1);
      uVar1 = (uint)((uVar1 & 0xff) == 0);
    }
  }
  else {
    if (in_r0 == 0xfa) {
LAB_8c120846:
      uVar1 = FUN_8c120798(ar4,ar5,1,1);
    }
    else {
      if (in_r0 == 0xfb) {
        unaff_r14 = 0;
        *(undefined1 *)(ar4 + 0x20) = 1;
        goto LAB_8c12085e;
      }
      if (in_r0 == 0xfc) {
        *(undefined1 *)(ar4 + 0x20) = 0;
        goto LAB_8c120846;
      }
      if (in_r0 == 0xfd) {
        uVar1 = FUN_8c12071a(ar4,unaff_r14,1,1);
      }
      else {
        if (in_r0 != 0xfe) {
          return 0;
        }
        uVar1 = FUN_8c1206ba(ar4,ar5,1,1);
      }
    }
    uVar1 = (uint)((uVar1 & 0xff) == 0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1207f0\n.set _FUN_8c1207f0, _FUN_8c1207f0_def\n");
//@unit 8c120890
#include "../decls.h"
uint * FUN_8c120890_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = 0;
  cVar1 = *(char *)(ar4 + 1);
  iVar2 = ar4;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    cVar1 = *(char *)(iVar2 + 3);
    iVar2 = iVar2 + 2;
  }
  puVar3 = (uint *)(**(code **)(ar5 + 0x10))(ar5,((uVar4 & 0xffff) - 1) * 2 + 0xc,ar6,ar7);
  if (puVar3 != (uint *)0x0) {
    memmove(puVar3 + 2,ar4,(uVar4 & 0xffff) << 1,ar7);
    *puVar3 = uVar4 & 0xffff;
    puVar3[1] = 0;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c120890\n.set _FUN_8c120890, _FUN_8c120890_def\n");
//@unit 8c1208fc
#include "../decls.h"
undefined4 FUN_8c1208fc_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 a4;
  uint uVar1;
  int a6;
  undefined4 a7;
  
  a4 = FUN_8c120890(ar4,ar6,ar6,ar7);
  a7 = 0;
  a6 = ar6;
  uVar1 = FUN_8c1209ec(a4,ar5,ar6,0);
  if ((uVar1 & 0xff) != 0) {
    (**(code **)(ar6 + 0x18))(ar6,a4,a6,a7);
    a4 = 0;
  }
  return a4;
}

__asm__(".globl _FUN_8c1208fc\n.set _FUN_8c1208fc, _FUN_8c1208fc_def\n");
//@unit 8c120948
#include "../decls.h"
uint FUN_8c120948_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c120148);
  uVar5 = 1;
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *ar4) {
    do {
      cVar2 = (*(code *)puVar1)(ar5,(int)ar4 + iVar4 * 2 + 8,0,uVar5);
      iVar4 = iVar4 + 1;
      uVar3 = (uint)(cVar2 == '\0');
    } while (iVar4 < *ar4);
  }
  *ar4 = 0;
  if (ar4[1] == 0) {
    (**(code **)(ar5 + 0x18))(ar5,ar4);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c120948\n.set _FUN_8c120948, _FUN_8c120948_def\n");
//@unit 8c12095c
#include "../decls.h"
uint FUN_8c12095c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int unaff_r10;
  int unaff_r11;
  uint unaff_r12;
  int iVar3;
  int *unaff_r14;
  
  puVar1 = (&FUN_8c120148);
  iVar3 = unaff_r10;
  if (0 < *unaff_r14) {
    do {
      ar7 = 0;
      ar6 = 0;
      uVar2 = (*(code *)puVar1)(unaff_r11,(int)unaff_r14 + iVar3 * 2 + 8,0,0);
      iVar3 = iVar3 + 1;
      unaff_r12 = (uint)((uVar2 & 0xff) == 0);
    } while (iVar3 < *unaff_r14);
  }
  *unaff_r14 = unaff_r10;
  if (unaff_r14[1] == 0) {
    (**(code **)(unaff_r11 + 0x18))(unaff_r11,unaff_r14,ar6,ar7);
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c12095c\n.set _FUN_8c12095c, _FUN_8c12095c_def\n");
//@unit 8c1209be
#include "../decls.h"
int FUN_8c1209be_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined1 *puVar1;
  
  if (ar5 < *ar4 + -1) {
    do {
      puVar1 = (undefined1 *)((int)ar4 + ar5 * 2 + 8);
      ar5 = ar5 + 1;
      *puVar1 = puVar1[2];
      in_r0 = (int)(char)puVar1[3];
      puVar1[1] = puVar1[3];
    } while (ar5 < *ar4 + -1);
  }
  *ar4 = *ar4 + -1;
  return in_r0;
}

__asm__(".globl _FUN_8c1209be\n.set _FUN_8c1209be, _FUN_8c1209be_def\n");
//@unit 8c1209ec
#include "../decls.h"
uint FUN_8c1209ec_def(int *ar4,int ar5,int *ar6,int *ar7)

{
  char cVar1;
  uint uVar2;
  int *ar6_00;
  int *ar7_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffd8;
  int *piVar7;
  
  piVar3 = (int *)&stack0xffffffd8;
  uVar4 = 0;
  ar4[1] = ar4[1] + 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar5 != 0) {
    cVar1 = *(char *)(ar5 + 4);
    iVar5 = 0;
    if (0 < *ar4) {
      do {
        if (cVar1 == *(char *)((int)ar4 + iVar5 * 2 + 8)) {
          ar7_00 = (int *)0x0;
          ar6_00 = ar7;
          uVar2 = (**(code **)(ar5 + 0x1c))(ar5,(int)*(char *)((int)ar4 + iVar5 * 2 + 9),ar7,0);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          FUN_8c1209be(ar4,iVar5,ar6_00,ar7_00,in_stack_ffffffd8);
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < *ar4);
    }
    if (*ar4 != 0) {
      iVar5 = 0;
      ar6_00 = ar4;
      (**(code **)(ar5 + 0x1c))(ar5,0xf8,ar4,&stack0xffffffd8);
      ar7_00 = piVar3;
      if (-1 < iVar5) {
        piVar3 = (int *)(iVar5 + (int)ar7);
        for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(ar5 + 9); iVar6 = iVar6 + 1) {
          ar6_00 = ar4;
          piVar7 = piVar3;
          uVar2 = FUN_8c1113d0(*(undefined4 *)(iVar6 * 4 + *(int *)(ar5 + 0x10)),0xf8,ar4,piVar3);
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          ar7_00 = piVar3;
          piVar3 = piVar7;
        }
      }
    }
  }
  iVar5 = ar4[1];
  ar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    (*(code *)(uint)ar6[6])(ar6,ar4,ar6_00,ar7_00);
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1209ec\n.set _FUN_8c1209ec, _FUN_8c1209ec_def\n");
//@unit 8c120b1a
#include "../decls.h"
uint FUN_8c120b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1113d0(ar5,(int)0xf8,ar4,ar6);
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c120b1a\n.set _FUN_8c120b1a, _FUN_8c120b1a_def\n");
//@unit 8c120b48
#include "../decls.h"
uint FUN_8c120b48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  int *piVar7;
  uint d;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  float *pfVar12;
  double in_dr2;
  float fVar13;
  uint in_fr5;
  ulonglong uVar14;
  double dVar15;
  byte in_FPSCR_DN;
  byte bVar16;
  byte bVar17;
  float *pfStack_30;
  int iStack_2c;
  
  bVar17 = 0;
  bVar16 = 0;
  uVar6 = 0;
  piVar7 = *(int **)(ar4 + 0x284);
  iStack_2c = 0;
  d = (uint)*(ushort *)(ar4 + 0x288);
  uVar3 = 0x8c120c6c;
  dVar15 = 0.5;
  uVar14 = (ulonglong)in_fr5;
  for (; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[4]) {
    uVar4 = libgcc_divide_helper_01051c(piVar7[1],d);
    uVar3 = uVar4;
    uVar9 = uVar6;
    if (d != 0) {
      do {
        pfStack_30 = *(float **)(ar4 + 0x28c + iStack_2c * 4);
        pfVar12 = *(float **)(ar4 + 0x29c);
        uVar3 = uVar6;
        if (uVar4 != 0) {
          do {
            iVar10 = *piVar7;
            if (bVar17 == 0) {
              *pfVar12 = (float)(uVar14 >> 0x20);
            }
            else {
              *(ulonglong *)pfVar12 = uVar14;
            }
            puVar11 = (ushort *)(iVar10 + uVar9 * 2);
            uVar8 = uVar6;
            if (uVar4 != 0) {
              do {
                uVar8 = uVar8 + 1;
                pfVar5 = pfStack_30 + 1;
                in_FPSCR_DN = 0;
                bVar16 = 0;
                bVar17 = 0;
                fVar13 = (float)*puVar11 * *pfStack_30 + *pfVar12;
                in_dr2 = (double)CONCAT44(fVar13,*pfStack_30);
                *pfVar12 = fVar13;
                puVar11 = puVar11 + d;
                pfStack_30 = pfVar5;
              } while (uVar8 < uVar4);
            }
            uVar3 = uVar3 + 1;
            pfVar12 = pfVar12 + 1;
          } while (uVar3 < uVar4);
        }
        iVar10 = uVar9 * 2;
        pfVar12 = *(float **)(ar4 + 0x29c);
        puVar11 = (ushort *)(*piVar7 + iVar10);
        uVar8 = uVar6;
        uVar3 = uVar6;
        if (uVar4 != 0) {
          do {
            fVar13 = SUB84(in_dr2,0);
            uVar1 = (uint)in_FPSCR_DN;
            uVar2 = (uint)bVar16;
            uVar3 = uVar3 + 1;
            if (bVar17 == 0) {
              fVar13 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              pfVar12 = pfVar12 + 2;
            }
            in_FPSCR_DN = 0;
            bVar16 = 0;
            bVar17 = (byte)(((uVar1 << 0x12 | uVar2 << 0x13 | (uint)bVar17 << 0x14) & 0x100000) >>
                           0x14);
            in_dr2 = (double)fVar13 + dVar15;
            *puVar11 = (ushort)(int)in_dr2;
            uVar8 = uVar8 + *puVar11;
            puVar11 = puVar11 + d;
          } while (uVar3 < uVar4);
        }
        uVar9 = uVar9 + 1;
        uVar3 = piVar7[2];
        *(short *)(uVar3 + iVar10) = (short)uVar8;
      } while (uVar9 < d);
    }
    iStack_2c = iStack_2c + 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c120b48\n.set _FUN_8c120b48, _FUN_8c120b48_def\n");
//@unit 8c120c7c
#include "../decls.h"
undefined4 * FUN_8c120c7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint d;
  ushort *ar4_00;
  uint ar5_00;
  float *ar6_00;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uStack_38;
  
  d = (uint)*(ushort *)(ar4 + 0x288);
  fVar12 = *(float *)(ar4 + 0x2a4);
  puVar2 = (undefined4 *)0x2a0;
  fVar13 = *(float *)(ar4 + 0x2a0);
  for (piVar8 = *(int **)(ar4 + 0x284); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[4]) {
    uVar3 = libgcc_divide_helper_01051c(piVar8[1],d);
    fVar10 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar10 = fVar10 + 4.2949673e+09;
    }
    puVar2 = &DAT_8c120dd8;
    uStack_38 = 0;
    fVar11 = fVar13 * fVar10 + 1.0;
    puVar4 = (undefined2 *)*piVar8;
    iVar7 = 0;
    fVar10 = fVar13;
    if (d != 0) {
      do {
        uVar1 = *(ushort *)(piVar8[2] + iVar7);
        ar4_00 = (ushort *)(*piVar8 + iVar7);
        ar6_00 = *(float **)(ar4 + 0x2a8);
        ar5_00 = 0;
        if (uVar3 != 0) {
          do {
            ar5_00 = ar5_00 + 1;
            *ar6_00 = ((float)*ar4_00 / (float)uVar1 + fVar13) / fVar11;
            ar4_00 = ar4_00 + d;
            ar6_00 = ar6_00 + 1;
          } while (ar5_00 < uVar3);
        }
        puVar2 = (undefined4 *)0x2a8;
        uVar6 = 0;
        puVar5 = puVar4;
        fVar9 = fVar10;
        if (uVar3 != 0) {
          do {
            thunk_FUN_8c013dfc(ar4_00,ar5_00,ar6_00,ar7);
            uVar6 = uVar6 + 1;
            fVar9 = -fVar10;
            puVar2 = (undefined4 *)&DAT_8c120ddc;
            fVar10 = 1.75;
            *puVar5 = (short)(int)((fVar9 * 255.0) / fVar12 + 0.5);
            puVar5 = puVar5 + d;
            fVar9 = 1.75;
          } while (uVar6 < uVar3);
        }
        fVar10 = fVar9;
        puVar4 = puVar4 + 1;
        uStack_38 = uStack_38 + 1;
        iVar7 = iVar7 + 2;
      } while (uStack_38 < d);
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c120c7c\n.set _FUN_8c120c7c, _FUN_8c120c7c_def\n");
//@unit 8c120e12
#include "../decls.h"
int FUN_8c120e12_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ushort uStack_28;
  
  piVar12 = *(int **)(0x284 + ar4);
  uVar11 = (uint)*(ushort *)(0x284 + 4 + ar4);
  uVar1 = (**(code **)(*(int *)(0x108 + ar4) + 8))(*(int *)(0x108 + ar4),ar5,ar6,ar7);
  uStack_28 = 0;
  iVar2 = *(int *)(0x2b0 + ar4);
  puVar4 = *(ushort **)(iVar2 + (ar6 * 3 + ar5) * 4);
  for (; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[4]) {
    iVar5 = *piVar12;
    uVar10 = 0;
    iVar7 = 0;
    iVar2 = piVar12[2];
    iVar8 = *puVar4 - 1;
    pbVar9 = (byte *)(*(int *)(0x118 + ar4 + ar5 * 4) + (uVar1 & 0xffff) * iVar8 +
                     (uint)uStack_28);
    puVar6 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar6 = puVar6 + 1;
        if ((int)(uint)*puVar6 <= iVar8) {
          do {
            iVar8 = iVar8 + -1;
            psVar3 = (short *)(*pbVar9 * uVar11 * 2 + iVar7 + iVar5);
            *psVar3 = *psVar3 + 0x32;
            *(short *)(iVar2 + iVar7) = *(short *)(iVar2 + iVar7) + 0x32;
            pbVar9 = pbVar9 + -(uVar1 & 0xffff);
          } while ((int)(uint)*puVar6 <= iVar8);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 2;
      } while (uVar10 < uVar11);
    }
    iVar2 = (short)uStack_28 + 1;
    uStack_28 = (ushort)iVar2;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c120e12\n.set _FUN_8c120e12, _FUN_8c120e12_def\n");
//@unit 8c120f04
#include "../decls.h"
undefined4 FUN_8c120f04_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint a5;
  int a4;
  int a4_00;
  float fVar6;
  float in_fr13;
  undefined8 in_dr14;
  ulonglong uVar7;
  undefined8 in_xd14;
  int iVar8;
  char cVar9;
  uint uStack_34;
  int *piStack_30;
  
  cVar9 = '\0';
  a4 = *(int *)(ar4 + 0xfc);
  a4_00 = *(int *)(ar4 + 0x108);
  *(undefined4 *)(ar4 + 0x284) = 0;
  piStack_30 = (int *)(ar4 + 0x284);
  *(undefined2 *)(ar4 + 0x2ac) = 0;
  uVar1 = (**(code **)(a4_00 + 8))(a4_00,ar5,ar6,ar7);
  uVar2 = (undefined4)in_dr14;
  uStack_34 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = uStack_34;
      uVar2 = (**(code **)(a4_00 + 0x84))(a4_00,uStack_34,ar6,ar7);
      uVar3 = (**(code **)(a4_00 + 0x60))(uVar2,uVar3,ar6,ar7);
      if (*(ushort *)(ar4 + 0x2ac) < uVar3) {
        *(short *)(ar4 + 0x2ac) = (short)uVar3;
      }
      piVar4 = (int *)(**(code **)(a4 + 0x14))(0x14,ar4 + 0xf4,ar6,ar7);
      if (piVar4 == (int *)0x0) goto LAB_8c121104;
      *piVar4 = 0;
      piVar4[2] = 0;
      *piStack_30 = (int)piVar4;
      iVar8 = uVar3 * *(ushort *)(ar4 + 0x288);
      iVar5 = FUN_8c11c914(a4,iVar8 * 2,1,ar4 + 0xf4);
      *piVar4 = iVar5;
      if (iVar5 == 0) goto LAB_8c121104;
      ar6 = 1;
      piVar4[1] = iVar8;
      ar7 = ar4 + 0xf4;
      cVar9 = '\0';
      iVar5 = FUN_8c11c914(a4,(uint)*(ushort *)(ar4 + 0x288) << 1,1,ar7);
      uVar2 = (undefined4)in_dr14;
      piVar4[2] = iVar5;
      if (iVar5 == 0) goto LAB_8c121104;
      piVar4[3] = (uint)*(ushort *)(ar4 + 0x288);
      piStack_30 = piVar4 + 4;
      piVar4[4] = 0;
      uStack_34 = uStack_34 + 1;
    } while (uStack_34 < uVar1);
  }
  uVar3 = 0;
  if (cVar9 == '\0') {
    uVar2 = 0;
  }
  else {
    in_xd14 = 0x3f80000000000000;
  }
  if (cVar9 == '\0') {
    uVar7 = CONCAT44(0x3f800000,uVar2);
  }
  else {
    uVar7 = 0x4f8000003f800000;
  }
  uVar2 = (undefined4)uVar7;
  if (uVar1 != 0) {
    do {
      a5 = uVar3;
      uVar2 = (**(code **)(a4_00 + 0x84))(a4_00,uVar3,ar6,ar7);
      cVar9 = '\0';
      (**(code **)(a4_00 + 0x60))(uVar2,a5,ar6,ar7);
      if (cVar9 == '\0') {
        in_fr13 = *(float *)(ar4 + 0x2a0);
      }
      fVar6 = in_fr13;
      thunk_FUN_8c013dfc(uVar2,a5,ar6,ar7);
      cVar9 = '\0';
      uVar3 = uVar3 + 1;
      if ((float)uVar7 < -fVar6) {
        uVar7 = (ulonglong)(uint)-fVar6;
      }
      uVar2 = (undefined4)uVar7;
    } while (uVar3 < uVar1);
  }
  if (cVar9 == '\0') {
    *(undefined4 *)(ar4 + 0x2a4) = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x2a4) = in_xd14;
  }
  uVar2 = (**(code **)(a4 + 0x14))((uint)*(ushort *)(ar4 + 0x2ac) << 2,ar4 + 0xf4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x2a8) = uVar2;
  uVar2 = FUN_8c11c914(a4,(uint)*(ushort *)(ar4 + 0x2ac),4,ar4 + 0xf4);
  *(undefined4 *)(ar4 + 0x29c) = uVar2;
  if ((*(int *)(ar4 + 0x2a8) == 0) || (*(int *)(ar4 + 0x29c) == 0)) {
LAB_8c121104:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c120f04\n.set _FUN_8c120f04, _FUN_8c120f04_def\n");
//@unit 8c121124
#include "../decls.h"
undefined4 FUN_8c121124_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(0xfc + ar4);
  puVar1 = *(undefined4 **)(0x284 + ar4);
  while (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)puVar1[4];
    (**(code **)(iVar4 + 0x18))(*puVar1,0xf4 + ar4);
    (**(code **)(iVar4 + 0x18))(puVar1[2],0xf4 + ar4);
    (**(code **)(iVar4 + 0x18))(puVar1,0xf4 + ar4);
    puVar1 = puVar3;
  }
  (**(code **)(iVar4 + 0x18))(*(undefined4 *)(0x2a8 + ar4),0xf4 + ar4);
                    
                    
  uVar2 = (**(code **)(iVar4 + 0x18))(*(undefined4 *)(0x29c + ar4),0xf4 + ar4);
  return uVar2;
}

__asm__(".globl _FUN_8c121124\n.set _FUN_8c121124, _FUN_8c121124_def\n");
//@unit 8c12112c
#include "../decls.h"
undefined4 FUN_8c12112c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *a4;
  int in_r0;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r13;
  
  iVar3 = *(int *)(in_r0 + unaff_r13);
  a4 = *(undefined4 **)(0x284 + unaff_r13);
  while (a4 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)a4[4];
    (**(code **)(iVar3 + 0x18))(*a4,0xf4 + unaff_r13,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(a4[2],0xf4 + unaff_r13,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(a4,0xf4 + unaff_r13,ar6,ar7);
    a4 = puVar2;
  }
  (**(code **)(iVar3 + 0x18))
            (*(undefined4 *)(0x2a8 + unaff_r13),0xf4 + unaff_r13,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(iVar3 + 0x18))
                    (*(undefined4 *)(0x29c + unaff_r13),0xf4 + unaff_r13);
  return uVar1;
}

__asm__(".globl _FUN_8c12112c\n.set _FUN_8c12112c, _FUN_8c12112c_def\n");
//@unit 8c1211ac
#include "../decls.h"
int FUN_8c1211ac_def(byte *ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + *(int *)((&DATA_8c1293e4) + (uint)*ar4 * 4);
      ar4 = ar4 + ar6;
    } while (uVar1 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1211ac\n.set _FUN_8c1211ac, _FUN_8c1211ac_def\n");
//@unit 8c1211f0
#include "../decls.h"
undefined * FUN_8c1211f0_def(int *ar4,byte *ar5,int ar6,ushort *ar7,uint s0,uint s4)

{
  byte bVar1;
  ushort uVar2;
  undefined *in_r0;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = *(int *)(&DATA_8c1293e0);
  uVar3 = 0;
  if (s4 != 0) {
    do {
      bVar1 = *ar5;
      ar5 = ar5 + ar6;
      uVar7 = (uint)bVar1;
      iVar5 = iVar5 + uVar7 * -2;
      uVar6 = 0;
      piVar4 = ar4;
      if (s0 != 0) {
        do {
          in_r0 = (&DATA_8c1293e4);
          uVar2 = *ar7;
          ar7 = ar7 + 1;
          uVar6 = uVar6 + 1;
          *piVar4 = *piVar4 + *(int *)((&DATA_8c1293e4) +
                                      ((int)*(short *)((uint)uVar2 * 2 + iVar5) + uVar7) * 4);
          piVar4 = piVar4 + 1;
        } while (uVar6 < s0);
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + uVar7 * 2;
    } while (uVar3 < s4);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1211f0\n.set _FUN_8c1211f0, _FUN_8c1211f0_def\n");
//@unit 8c121260
#include "../decls.h"
int FUN_8c121260_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ar7 + 1U >> 1;
  iVar3 = 0;
  if (ar5 == 0) {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((uint)*ar4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  else {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(int *)((&DATA_8c1293e4) + ((uint)*ar4 << 4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c121260\n.set _FUN_8c121260, _FUN_8c121260_def\n");
//@unit 8c1212d4
#include "../decls.h"
int FUN_8c1212d4_def(int *ar4,byte *ar5,int ar6,int ar7,ushort *s0,uint s4,uint s8)

{
  byte bVar1;
  undefined *puVar2;
  int in_r0;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piStack_24;
  int *piStack_20;
  
  puVar2 = (&DATA_8c1293e4);
  uVar5 = ar7 + 1U >> 1;
  uVar6 = (uint)0xf0;
  iVar8 = *(int *)(&DATA_8c1293e0);
  if (ar6 == 0) {
    piStack_24 = (int *)0x0;
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = bVar1 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        piStack_20 = ar4;
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(short *)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *piStack_20 = *piStack_20 + *(int *)(puVar2 + in_r0);
            s0 = puVar3;
            piStack_20 = piStack_20 + 1;
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        piStack_24 = (int *)((int)piStack_24 + 1);
      } while (piStack_24 < s8);
    }
  }
  else {
    piStack_20 = (int *)0x0;
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = (uint)bVar1 << 4 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        piStack_24 = ar4;
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(short *)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *piStack_24 = *piStack_24 + *(int *)(puVar2 + in_r0);
            s0 = puVar3;
            piStack_24 = piStack_24 + 1;
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        piStack_20 = (int *)((int)piStack_20 + 1);
      } while (piStack_20 < s8);
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1212d4\n.set _FUN_8c1212d4, _FUN_8c1212d4_def\n");
//@unit 8c1213d0
#include "../decls.h"
undefined4 FUN_8c1213d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *ar4_00;
  int iVar7;
  undefined4 *a6;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ar4_01;
  uint *ar4_02;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *ar7_00;
  uint ain0;
  uint uVar14;
  uint uVar15;
  int a4;
  undefined4 *puStack_5c;
  uint uStack_58;
  uint uStack_50;
  
  ar4_01 = *(int *)(ar4 + 0xfc);
  a4 = *(int *)(ar4 + 0x108);
  iVar6 = ar5;
  uVar1 = (**(code **)(a4 + 8))(a4,ar5,ar6,ar7);
  iVar2 = (**(code **)(a4 + 0x70))(a4,iVar6,ar6,ar7);
  iVar10 = *(int *)(ar5 * 8 + ar4 + 0x26c);
  ain0 = (uint)*(ushort *)(ar4 + 0x288);
  iVar3 = (**(code **)(a4 + 0x20))(a4,iVar6,ar6,ar7);
  iVar4 = (**(code **)(a4 + 0x9c))(a4,iVar6,ar6,ar7);
  uVar5 = (**(code **)(a4 + 0x50))(a4,iVar6,ar6,ar7);
  iVar6 = (**(code **)(a4 + 0x94))(a4,iVar6,ar6,ar7);
  ar7_00 = (undefined4 *)(ar4 + 0xf4);
  ar4_00 = (undefined4 *)FUN_8c11c914(ar4_01,ain0 << 1,4,ar7_00);
  puVar13 = (undefined4 *)(ain0 * 4);
  ar4_02 = (uint *)((int)puVar13 + (int)ar4_00);
  memset(ar4_02,0xff,puVar13,ar7_00);
  uStack_50 = 0;
  puVar11 = (undefined4 *)((ain0 - 1) * 2 + iVar10);
  if (uVar5 != 0) {
    do {
      uVar14 = 0;
      uStack_58 = 0;
      puStack_5c = *(undefined4 **)(ar4 + 0x284);
      iVar10 = uVar1 * ((uint)*(ushort *)(iVar6 + uStack_50 * 2) - iVar3);
      if (uVar1 != 0) {
        do {
          uVar15 = uVar14;
          uVar9 = (**(code **)(a4 + 0x84))(a4,uVar14,puVar13,ar7_00);
          iVar7 = (**(code **)(a4 + 0xc0))(uVar9,uVar15,puVar13,ar7_00);
          a6 = (undefined4 *)(**(code **)(a4 + 0x68))(uVar9,uVar15,puVar13,ar7_00);
          uVar9 = (**(code **)(a4 + 0x60))(uVar9,uVar15,puVar13,ar7_00);
          if (iVar4 == 0) {
            iVar7 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2) + iVar7;
            iVar8 = FUN_8c1211ac(iVar7,uVar9,a6,ar7_00);
            ar7_00 = (undefined4 *)*puStack_5c;
            FUN_8c1211f0(ar4_00,iVar7,a6,ar7_00,ain0,uVar9,iVar7);
          }
          else {
            uVar15 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2);
            puVar13 = (undefined4 *)(uVar15 & 1);
            iVar7 = ((int)uVar15 >> 1) + iVar7;
            iVar8 = FUN_8c121260(iVar7,puVar13,uVar9,a6);
            ar7_00 = a6;
            FUN_8c1212d4(ar4_00,iVar7,puVar13,a6,*puStack_5c,ain0,uVar9,puVar13);
            a6 = puVar13;
          }
          uStack_58 = uStack_58 + iVar8;
          uVar14 = uVar14 + 1;
          puStack_5c = (undefined4 *)puStack_5c[4];
          puVar13 = a6;
        } while (uVar14 < uVar1);
      }
      uVar14 = 0;
      puVar12 = ar4_02;
      puVar13 = puVar11;
      ar7_00 = ar4_00;
      if (ain0 != 0) {
        do {
          uVar15 = ar4_00[uVar14] - (uStack_58 >> 1);
          if (uVar15 < ar4_02[uVar14]) {
            *puVar12 = uVar15;
            *(undefined2 *)puVar13 = *(undefined2 *)(uStack_50 * 2 + iVar6);
          }
          uVar14 = uVar14 + 1;
          *ar7_00 = 0;
          puVar13 = (undefined4 *)((int)puVar13 + -2);
          ar7_00 = ar7_00 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar14 < ain0);
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < uVar5);
  }
                    
                    
  uVar9 = (**(code **)(ar4_01 + 0x18))(ar4_00,ar4 + 0xf4);
  return uVar9;
}

__asm__(".globl _FUN_8c1213d0\n.set _FUN_8c1213d0, _FUN_8c1213d0_def\n");
//@unit 8c121690
#include "../decls.h"
undefined4 FUN_8c121690_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  uint ar5_01;
  
  ar5_01 = 0;
  ar5_00 = ar5;
  if (*(int *)(0x240 + ar4) != 0) {
    do {
      ar5_00 = ar5_01;
      ar6 = ar5;
      FUN_8c120e12(ar4,ar5_01,ar5,ar7);
      ar5_01 = ar5_01 + 1;
    } while (ar5_01 < *(uint *)(0x240 + ar4));
  }
  if (*(int *)(0x28c + ar4) != 0) {
    FUN_8c120b48(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c120c7c(ar4,ar5,ar6,ar7);
  FUN_8c1213d0(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c121124(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c121690\n.set _FUN_8c121690, _FUN_8c121690_def\n");
//@unit 8c12169e
#include "../decls.h"
undefined4 FUN_8c12169e_def(undefined4 ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  uint in_r2;
  uint a5;
  uint unaff_r13;
  int unaff_r14;
  
  a5 = ar5;
  if (in_r2 < *(uint *)(in_r0 + unaff_r14)) {
    do {
      a5 = unaff_r13;
      ar6 = ar5;
      FUN_8c120e12(unaff_r14,unaff_r13,ar5,ar7);
      unaff_r13 = unaff_r13 + 1;
    } while (unaff_r13 < *(uint *)(0x240 + unaff_r14));
  }
  if (*(int *)(0x28c + unaff_r14) != 0) {
    FUN_8c120b48(unaff_r14,a5,ar6,ar7);
  }
  FUN_8c120c7c(unaff_r14,ar5,ar6,ar7);
  FUN_8c1213d0(unaff_r14,ar5,ar6,ar7);
  uVar1 = FUN_8c121124(unaff_r14,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c12169e\n.set _FUN_8c12169e, _FUN_8c12169e_def\n");
//@unit 8c121710
#include "../decls.h"
undefined4 FUN_8c121710_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined1 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 0x45) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c121710\n.set _FUN_8c121710, _FUN_8c121710_def\n");
//@unit 8c12172e
#include "../decls.h"
uint FUN_8c12172e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  undefined8 in_dr4;
  float fVar3;
  float fVar4;
  undefined8 in_dr6;
  float fVar5;
  bool bVar6;
  
  fVar5 = (float)((ulonglong)in_dr6 >> 0x20);
  fVar4 = fVar5 + *(float *)(ar4 + 0x60);
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar2 = (float)in_dr4 + -4.0;
  if (fVar2 < fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 < fVar4) {
    fVar4 = (fVar4 - fVar2) * 0.5 + fVar2;
  }
  if (fVar4 < *(float *)(ar4 + 100)) {
    fVar4 = *(float *)(ar4 + 100);
  }
  if (*(uint *)(ar4 + 0x38) < *(uint *)(ar4 + 0x54)) {
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
  }
  if (fVar5 <= fVar3) {
    *(undefined4 *)(ar4 + 0x2c) = 0;
  }
  else {
    *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
  }
  if (*(uint *)(ar4 + 0x58) < *(uint *)(ar4 + 0x2c)) {
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x58) + -1;
  }
  if (fVar4 <= fVar3) {
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = 0;
  }
  if (*(int *)(ar4 + 0x34) == 4) {
    *(undefined1 *)(ar4 + 0x45) = 1;
    *(undefined4 *)(ar4 + 0x48) = 0;
  }
  else if ((*(char *)(ar4 + 0x45) != '\0') &&
          (uVar1 = *(uint *)(ar4 + 0x48), *(uint *)(ar4 + 0x48) = uVar1 + 1,
          *(uint *)(ar4 + 0x58) < uVar1)) {
    *(undefined1 *)(ar4 + 0x45) = 0;
    FUN_8c120348(ar4,0xc,(uint)*(byte *)(ar4 + 4),4);
  }
  bVar6 = *(uint *)(ar4 + 0x50) < *(uint *)(ar4 + 0x34);
  if (bVar6) {
    *(undefined1 *)(ar4 + 0x44) = 1;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined1 *)(ar4 + 0x45) = 0;
  }
  return (uint)bVar6;
}

__asm__(".globl _FUN_8c12172e\n.set _FUN_8c12172e, _FUN_8c12172e_def\n");
//@unit 8c121736
#include "../decls.h"
uint FUN_8c121736_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  uint uVar3;
  uint uVar4;
  int unaff_r14;
  undefined *puVar5;
  double in_dr2;
  float fVar6;
  double in_dr4;
  float fVar8;
  double in_dr6;
  double dVar9;
  bool bVar10;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  char cVar2;
  double dVar7;
  
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(in_r0 + unaff_r14));
  }
  if (in_FPSCR_PR == 0) {
    dVar9 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(in_dr6,0) + SUB84(in_dr2,0));
  }
  else {
    dVar9 = in_dr6 + in_dr2;
  }
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),DAT_8c12195c);
  }
  fVar8 = (float)((ulonglong)dVar9 >> 0x20);
  if (in_FPSCR_PR == 0) {
    fVar6 = SUB84(in_dr4,0) + SUB84(in_dr2,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),fVar6);
    bVar10 = fVar6 < fVar8;
  }
  else {
    dVar7 = in_dr4 + in_dr2;
    bVar10 = dVar7 < dVar9;
  }
  if ((bVar10) && (in_FPSCR_SZ == 0)) {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar8);
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  cVar1 = (char)uVar4;
  uVar3 = (uVar3 & 0x100000) >> 0x14;
  cVar2 = (char)uVar3;
  fVar6 = SUB84(dVar7,0);
  if (cVar1 == '\0') {
    bVar10 = fVar6 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    if (cVar2 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar9,0));
    }
    if (cVar1 == '\0') {
      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) - fVar6);
    }
    else {
      in_dr2 = in_dr2 - dVar7;
    }
    puVar5 = (&FUN_8c120348);
    if (cVar2 == '\0') {
      dVar9 = (double)CONCAT44(fVar8,fVar6);
      puVar5 = DAT_8c121964;
    }
    if (cVar1 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               (float)(uint)puVar5 * SUB84(in_dr2,0) + SUB84(dVar9,0));
    }
  }
  if (cVar2 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unaff_r14 + 100));
  }
  uVar3 = (uVar4 << 0x13 | uVar3 << 0x14) & 0xffe7ffff;
  uVar4 = (uVar3 & 0x80000) >> 0x13;
  if ((char)uVar4 == '\0') {
    bVar10 = SUB84(dVar9,0) < SUB84(in_dr2,0);
  }
  else {
    bVar10 = dVar9 < in_dr2;
  }
  if ((bVar10) && ((char)(uVar3 >> 0x14) == '\0')) {
    dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(unaff_r14 + 100));
  }
  if (*(uint *)(unaff_r14 + 0x38) < *(uint *)(unaff_r14 + 0x54)) {
    *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x38) + 1;
  }
  uVar4 = (uVar4 << 0x13 & 0xffe7ffff) >> 0x13;
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if ((char)uVar4 == '\0') {
    bVar10 = fVar8 < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(int *)(unaff_r14 + 0x2c) = *(int *)(unaff_r14 + 0x2c) + 1;
  }
  else {
    *(undefined4 *)(unaff_r14 + 0x2c) = 0;
  }
  if (*(uint *)(unaff_r14 + 0x58) < *(uint *)(unaff_r14 + 0x2c)) {
    *(int *)(unaff_r14 + 0x38) = *(int *)(unaff_r14 + 0x58) + -1;
  }
  if ((char)((uVar4 << 0x13 & 0xffe7ffff) >> 0x13) == '\0') {
    bVar10 = fVar8 < SUB84(dVar9,0);
  }
  else {
    bVar10 = dVar7 < dVar9;
  }
  if (bVar10) {
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
  }
  else {
    *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + 1;
  }
  if (*(int *)(unaff_r14 + 0x34) == 4) {
    *(undefined1 *)(unaff_r14 + 0x45) = 1;
    *(undefined4 *)(unaff_r14 + 0x48) = 0;
  }
  else if ((*(char *)(unaff_r14 + 0x45) != '\0') &&
          (uVar4 = *(uint *)(unaff_r14 + 0x48), *(uint *)(unaff_r14 + 0x48) = uVar4 + 1,
          *(uint *)(unaff_r14 + 0x58) < uVar4)) {
    *(undefined1 *)(unaff_r14 + 0x45) = 0;
    FUN_8c120348(unaff_r14,0xc,(uint)*(byte *)(unaff_r14 + 4),4);
  }
  bVar10 = *(uint *)(unaff_r14 + 0x50) < *(uint *)(unaff_r14 + 0x34);
  if (bVar10) {
    *(undefined1 *)(unaff_r14 + 0x44) = 1;
    *(undefined4 *)(unaff_r14 + 0x34) = 0;
    *(undefined1 *)(unaff_r14 + 0x45) = 0;
  }
  return (uint)bVar10;
}

__asm__(".globl _FUN_8c121736\n.set _FUN_8c121736, _FUN_8c121736_def\n");
//@unit 8c12182e
#include "../decls.h"
undefined4 FUN_8c12182e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr4;
  float fVar2;
  
  fVar2 = (float)((ulonglong)in_dr4 >> 0x20);
  if ((float)in_dr4 <= fVar2) {
    iVar1 = *(int *)(ar4 + 0x30) + 1;
    *(int *)(ar4 + 0x30) = iVar1;
    if (iVar1 == 6) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
    }
  }
  else {
    *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
    *(undefined4 *)(ar4 + 0x30) = 0;
  }
  if ((float)in_dr4 + *(float *)(ar4 + 0x60) <= fVar2) {
    *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = 0;
  }
  if (*(uint *)(ar4 + 0x50) < *(uint *)(ar4 + 0x34)) {
    *(undefined1 *)(ar4 + 0x44) = 1;
  }
  if ((*(uint *)(ar4 + 0x5c) < *(uint *)(ar4 + 0x2c)) && (*(char *)(ar4 + 0x44) != '\0')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c12182e\n.set _FUN_8c12182e, _FUN_8c12182e_def\n");
//@unit 8c121896
#include "../decls.h"
undefined4 FUN_8c121896_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  uVar2 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  (*(code *)(&FUN_8c111fbe))
            (*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),*(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc),ar6
             ,ar7);
  uVar4 = (*(undefined4 **)(ar4 + 0xc))[1];
  FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar4,ar6,ar7);
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + 1;
  if (*(int *)(ar4 + 0x28) == 0) {
    uVar2 = FUN_8c12172e(ar4,uVar4,ar6,ar7);
    puVar1 = (&FUN_8c120348);
    if ((uVar2 & 0xff) != 0) {
      ar7_00 = 0;
      uVar4 = 10;
      *(int *)(ar4 + 0x3c) = *(int *)(ar4 + 0x40) - *(int *)(ar4 + 0x38);
      ar6_00 = *(undefined4 *)(ar4 + 0x38);
      uVar2 = (*(code *)puVar1)(ar4,10,ar6_00,0);
      if ((uVar2 & 0xff) != 0) {
        return 1;
      }
      if (*(char *)(ar4 + 0x4d) == '\0') {
        uVar2 = FUN_8c120798(ar4,uVar4,ar6_00,ar7_00);
        if ((uVar2 & 0xff) != 0) {
          return 1;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x28) = 1;
      }
    }
  }
  else if ((*(int *)(ar4 + 0x28) == 1) &&
          (uVar2 = FUN_8c12182e(ar4,uVar4,ar6,ar7), (uVar2 & 0xff) != 0)) {
    uVar2 = FUN_8c120348(ar4,0xb,*(undefined4 *)(ar4 + 0x40),0);
    if ((uVar2 & 0xff) != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x28) = 2;
  }
  piVar3 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar3[1] * 4 + *(int *)(*piVar3 + 0x40)) != *(int *)(*piVar3 + 0x3c)) &&
     (*(int *)(*(int *)(piVar3[2] + 0x40) + piVar3[3] * 4) != *(int *)(piVar3[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c121896\n.set _FUN_8c121896, _FUN_8c121896_def\n");
//@unit 8c1219f4
#include "../decls.h"
undefined4 FUN_8c1219f4_def(int ar4,uint ar5,uint *ar6,undefined4 ar7,float *ain0)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *ain0;
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    FUN_8c121710(ar4,ar5,ar6,ar7);
    if (*(char *)(ar4 + 0x4c) == '\0') {
      if (*(char *)(ar4 + 0x4d) == '\0') {
        *(undefined4 *)(ar4 + 0x28) = 2;
        uVar1 = FUN_8c120798(ar4,ar5,ar6,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x28) = 1;
        uVar1 = FUN_8c1207c6(ar4,0,ar6,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x28) = 0;
      uVar1 = FUN_8c1207c6(ar4,0,ar6,ar7);
    }
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
  }
  else if (uVar1 == 2) {
    *(char *)(ar4 + 0x4c) = (char)*ar6;
    *(char *)(ar4 + 0x4d) = (char)ar6[1];
    *(uint *)(ar4 + 0x5c) = ar6[2];
    fVar2 = (float)(int)ar6[3];
    if ((int)ar6[3] < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(ar4 + 0x60) = fVar2 * fVar3;
    *(uint *)(ar4 + 0x50) = ar6[4];
  }
  else if (uVar1 == 3) {
    *ar6 = (uint)*(byte *)(ar4 + 0x4c);
    ar6[1] = (uint)*(byte *)(ar4 + 0x4d);
    ar6[2] = *(uint *)(ar4 + 0x5c);
    fVar3 = *(float *)(ar4 + 0x60) / fVar3;
    if (2.1474836e+09 < fVar3) {
      fVar3 = fVar3 + -4.2949673e+09;
    }
    ar6[3] = (int)fVar3;
    ar6[4] = *(uint *)(ar4 + 0x50);
  }
  else if (uVar1 == 4) {
    *ar6 = ar4 + 0x3c;
  }
  else {
    if (uVar1 != 0xff) {
      return 0;
    }
    FUN_8c120668(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1219f4\n.set _FUN_8c1219f4, _FUN_8c1219f4_def\n");
//@unit 8c121b40
#include "../decls.h"
undefined4 FUN_8c121b40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,float *ain0)

{
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  undefined4 extraout_fr0_03;
  float extraout_fr0_04;
  float fVar1;
  float fVar2;
  char cVar3;
  
  fVar2 = *ain0;
  FUN_8c120550(ar4,1,ar6,ar7);
  fVar1 = extraout_fr0;
  if (fVar2 < extraout_fr0) {
    fVar1 = extraout_fr0 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x50) = (int)fVar1;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  fVar1 = extraout_fr0_00;
  if (fVar2 < extraout_fr0_00) {
    fVar1 = extraout_fr0_00 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x58) = (int)fVar1;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  *(float *)(unaff_r14 + 0x60) = (float)(int)(short)(int)extraout_fr0_01 * 0.002302585;
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  cVar3 = '\0';
  *(uint *)(unaff_r14 + 0x5c) = (int)extraout_fr0_02 & 0xffff;
  FUN_8c120550(unaff_r14,5,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(unaff_r14 + 100) = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unaff_r14 + 100) = CONCAT44(extraout_fr0_03,extraout_fr1);
  }
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  fVar1 = extraout_fr0_04;
  if (fVar2 < extraout_fr0_04) {
    fVar1 = extraout_fr0_04 + -4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x54) = (int)fVar1;
  *(undefined1 *)(unaff_r14 + 0x4c) = 1;
  *(undefined1 *)(unaff_r14 + 0x4d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c121b40\n.set _FUN_8c121b40, _FUN_8c121b40_def\n");
//@unit 8c121c50
#include "../decls.h"
undefined4 FUN_8c121c50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,2,0,(&FUN_8c121896),(&DATA_8c121b38),(&DATA_8c1219f2),0x68);
  return uVar1;
}

__asm__(".globl _FUN_8c121c50\n.set _FUN_8c121c50, _FUN_8c121c50_def\n");
//@unit 8c121cc0
#include "../decls.h"
undefined4 FUN_8c121cc0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar5 == 1) {
    if ((uint)*(ushort *)(0x244 + ar4) == *(int *)(0x244 + -4 + ar4) - 1U) {
      uVar1 = 0x16;
    }
    else {
      uVar1 = 10;
    }
    uVar1 = FUN_8c120348(ar4 + 0x48,uVar1,0,0);
  }
  else {
    if (ar5 == 2) {
      uVar1 = 0xc;
    }
    else {
      if (ar5 != 3) {
        uVar1 = FUN_8c1204c4(ar4 + 0x48,3,ar6,ar7);
        return uVar1;
      }
      uVar1 = 0xb;
    }
    uVar1 = FUN_8c120348(ar4 + 0x48,uVar1,0,0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121cc0\n.set _FUN_8c121cc0, _FUN_8c121cc0_def\n");
//@unit 8c121d36
#include "../decls.h"
uint FUN_8c121d36_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)0x238;
  *(undefined4 *)(iVar1 + ar4) = ar6;
  *(undefined4 *)(iVar1 + 4 + ar4) = ar7;
  *(undefined4 *)(iVar1 + 8 + ar4) = ar5;
  uVar2 = FUN_8c121f72(ar4,ar5,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = (**(code **)(0xe0 + ar4))(ar4,0,0,0,0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c121d36\n.set _FUN_8c121d36, _FUN_8c121d36_def\n");
//@unit 8c121d3c
#include "../decls.h"
uint FUN_8c121d3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  int unaff_r14;
  
  *(undefined4 *)(in_r0 + unaff_r14) = ar6;
  *(undefined4 *)(in_r0 + 4 + unaff_r14) = ar7;
  *(undefined4 *)(in_r0 + 8 + unaff_r14) = ar5;
  uVar1 = FUN_8c121f72(unaff_r14,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    uVar1 = (**(code **)(0xe0 + unaff_r14))(unaff_r14,0,0,0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121d3c\n.set _FUN_8c121d3c, _FUN_8c121d3c_def\n");
//@unit 8c121d8a
#include "../decls.h"
undefined4 FUN_8c121d8a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  
  *(undefined4 *)(in_r0 + ar4) = ar5;
  *(undefined4 *)(in_r0 + 4 + ar4) = ar5;
  if ((*(char *)(in_r0 + -4 + ar4) != '\0') &&
     (uVar1 = FUN_8c122060(ar4,ar5,ar6,ar7), (uVar1 & 0xff) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c121d8a\n.set _FUN_8c121d8a, _FUN_8c121d8a_def\n");
//@unit 8c121dc8
#include "../decls.h"
undefined4 FUN_8c121dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(0xfc + ar4);
  iVar1 = (int)0x244;
  iVar3 = (uint)*(ushort *)(0x244 + ar4) * 4;
  iVar4 = (int)0xf4;
  *(undefined4 *)(0x124 + ar4 + iVar3) = *(undefined4 *)(0x118 + ar4 + iVar3);
  (**(code **)(iVar2 + 0x18))
            (*(undefined4 *)((uint)*(ushort *)(iVar1 + ar4) * 8 + 0x268 + ar4 + 4),
             iVar4 + ar4,ar6,ar7);
  iVar1 = (int)0x148;
  *(undefined4 *)((uint)*(ushort *)(0x244 + ar4) * 8 + 0x268 + ar4 + 4) = 0;
  *(undefined4 *)(iVar1 + ar4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c121dc8\n.set _FUN_8c121dc8, _FUN_8c121dc8_def\n");
//@unit 8c121e40
#include "../decls.h"
undefined4 FUN_8c121e40_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7,int s0)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *a7;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(0xfc + ar4);
  iVar4 = *ar7;
  if (s0 == 1) {
    iVar3 = (int)0x268;
    iVar5 = (uint)*(ushort *)(0x244 + ar4) * 8;
    *(int *)(0x268 + ar4 + iVar5) = iVar4;
    a7 = ar7;
    if (*(int *)(iVar3 + ar4 + iVar5 + 4) != 0) {
      (**(code **)(iVar6 + 0x18))
                (*(undefined4 *)(0x268 + ar4 + iVar5 + 4),0xf4 + ar4,ar6,ar7);
    }
    iVar3 = (int)0x268;
    iVar4 = iVar4 << 1;
    uVar2 = (**(code **)(iVar6 + 0x14))(iVar4,0xf4 + ar4,ar6,a7);
    puVar1 = (&memmove);
    iVar6 = (int)0x268;
    *(undefined4 *)(iVar3 + ar4 + iVar5 + 4) = uVar2;
    (*(code *)puVar1)(*(undefined4 *)(iVar6 + ar4 + iVar5 + 4),ar7 + 1,iVar4,a7);
    *(undefined4 *)(0x148 + ar4) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c121e40\n.set _FUN_8c121e40, _FUN_8c121e40_def\n");
//@unit 8c121ef0
#include "../decls.h"
undefined4 FUN_8c121ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7,int s0)

{
  undefined4 *puVar1;
  
  if (s0 != 2) {
    return 1;
  }
  puVar1 = (undefined4 *)(0x24c + ar4);
  *puVar1 = *ar7;
  puVar1[1] = ar7[1];
  puVar1[2] = ar7[2];
  puVar1[3] = ar7[3];
  puVar1[4] = ar7[4];
  puVar1[5] = ar7[5];
  puVar1[6] = ar7[6];
  return 0;
}

__asm__(".globl _FUN_8c121ef0\n.set _FUN_8c121ef0, _FUN_8c121ef0_def\n");
//@unit 8c121f38
#include "../decls.h"
undefined4 FUN_8c121f38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  undefined4 uVar1;
  
  if (s0 == 1) {
    uVar1 = FUN_8c121e40(ar4,ar5,ar6,ar7);
  }
  else {
    if (s0 != 2) {
      return 1;
    }
    uVar1 = FUN_8c121ef0(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121f38\n.set _FUN_8c121f38, _FUN_8c121f38_def\n");
//@unit 8c121f72
#include "../decls.h"
undefined4 FUN_8c121f72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 a5;
  int ar6_00;
  undefined4 uVar3;
  int a4;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  uVar3 = 1;
  a4 = *(int *)(0x108 + ar4);
  ar6_00 = 0x248 + ar4;
  uVar1 = FUN_8c120348(ar4 + 0x48,0xe,ar6_00,1);
  if ((uVar1 & 0xff) == 0) {
    iVar2 = (int)0x234;
    a5 = 0;
    *(undefined1 *)(iVar2 + ar4) = 1;
    *(undefined2 *)(iVar2 + 0x10 + ar4) = 0;
    *(undefined **)(0xdc + ar4) = (&FUN_8c121e40);
    iVar2 = (int)0x240;
    uVar1 = 0;
    if (*(int *)(iVar2 + ar4) != 0) {
      do {
        *(undefined4 *)(uVar1 * 8 + 0x268 + ar4 + 4) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(iVar2 + ar4));
    }
    iVar2 = (**(code **)(a4 + 0x50))(a4,0,ar6_00,uVar3);
    uStack_18 = (**(code **)(0x94 + a4))(a4,a5,ar6_00,uVar3);
    iStack_1c = 1;
    iStack_20 = iVar2;
    uVar3 = (**(code **)(a4 + 0x2c))(a4,a5,ar6_00,uVar3);
    iStack_14 = (int)0x280;
    *(short *)(0x280 + ar4) = (short)uVar3;
    iStack_14 = iStack_14 + ar4;
    uVar1 = FUN_8c120348(ar4 + 0x48,0xf,&iStack_20,(iStack_1c + iVar2) * 2 + 0x10);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c121f72\n.set _FUN_8c121f72, _FUN_8c121f72_def\n");
//@unit 8c122060
#include "../decls.h"
undefined4 FUN_8c122060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(0xfc + ar4);
  uVar5 = 0;
  if (*(int *)(0x240 + ar4) != 0) {
    do {
      if (*(int *)(uVar5 * 8 + 0x268 + ar4 + 4) != 0) {
        (**(code **)(iVar4 + 0x18))
                  (*(undefined4 *)(uVar5 * 8 + 0x268 + ar4 + 4),0xf4 + ar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(0x240 + ar4));
  }
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(0x148 + ar4) = 3;
  cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x23,0);
  if (((cVar2 == '\0') && (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x15,0), cVar2 == '\0')) &&
     (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x10,*(undefined4 *)(0x248 + ar4),2),
     puVar1 = (&FUN_8c121f38), cVar2 == '\0')) {
    *(undefined1 *)(0x234 + ar4) = 0;
    *(undefined **)(0xdc + ar4) = puVar1;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c122060\n.set _FUN_8c122060, _FUN_8c122060_def\n");
//@unit 8c122070
#include "../decls.h"
uint FUN_8c122070_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint in_r2;
  int iVar2;
  uint unaff_r12;
  uint uVar3;
  int unaff_r14;
  
  iVar2 = *(int *)(in_r0 + unaff_r14);
  uVar3 = unaff_r12;
  if (in_r2 < *(uint *)(0x240 + unaff_r14)) {
    do {
      if (*(int *)(uVar3 * 8 + 0x268 + unaff_r14 + 4) != 0) {
        (**(code **)(iVar2 + 0x18))
                  (*(undefined4 *)(uVar3 * 8 + 0x268 + unaff_r14 + 4),
                   0xf4 + unaff_r14,ar6,ar7);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(0x240 + unaff_r14));
  }
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(0x148 + unaff_r14) = 3;
  uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x23,0,0);
  if ((((uVar3 & 0xff) == 0) &&
      (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x15,0,0), (uVar3 & 0xff) == 0)) &&
     (uVar3 = (*(code *)puVar1)(unaff_r14 + 0x48,0x10,*(undefined4 *)(0x248 + unaff_r14),2),
     puVar1 = (&FUN_8c121f38), (uVar3 & 0xff) == 0)) {
    *(char *)(0x234 + unaff_r14) = (char)unaff_r12;
    *(undefined **)(0xdc + unaff_r14) = puVar1;
  }
  else {
    unaff_r12 = 1;
  }
  return unaff_r12;
}

__asm__(".globl _FUN_8c122070\n.set _FUN_8c122070, _FUN_8c122070_def\n");
//@unit 8c12212e
#include "../decls.h"
undefined4 FUN_8c12212e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c120348(ar4 + 0x48,0x1f,0);
  return uVar1;
}

__asm__(".globl _FUN_8c12212e\n.set _FUN_8c12212e, _FUN_8c12212e_def\n");
//@unit 8c12215c
#include "../decls.h"
undefined4 FUN_8c12215c_def(int ar4,undefined4 ar5,int ar6,int ar7,int s0)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint a5;
  
  puVar3 = (&FUN_8c111cdc);
  puVar2 = (&FUN_8c1204c4);
  puVar1 = (&FUN_8c120284);
  iVar8 = ar6 * 4;
  uVar6 = (uint)*(ushort *)(*(int *)(ar4 + 0x6c) + 0xc);
  iVar5 = *(int *)(0x118 + ar4 + iVar8);
  a5 = ar7 * uVar6 + iVar5;
  uVar6 = uVar6 * s0 + iVar5;
  if (*(uint *)(0x124 + ar4 + iVar8) < a5) {
    a5 = *(uint *)(0x124 + ar4 + iVar8);
  }
  if (*(uint *)(0x124 + ar4 + iVar8) < uVar6) {
    uVar6 = *(uint *)(0x124 + ar4 + iVar8);
  }
  while( true ) {
    if (uVar6 <= a5) {
      return 0;
    }
    uVar7 = 1;
    uVar4 = (*(code *)puVar3)(*(undefined4 *)(ar4 + 0x6c),a5,1,ar7);
    if ((uVar4 & 0xff) == 0) break;
    a5 = a5 + *(ushort *)(*(int *)(ar4 + 0x6c) + 0xc);
    uVar4 = (*(code *)puVar1)(ar4,ar5,uVar7,ar7);
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
  }
  uVar7 = (*(code *)puVar2)(ar4 + 0x48,1,uVar7,ar7);
  return uVar7;
}

__asm__(".globl _FUN_8c12215c\n.set _FUN_8c12215c, _FUN_8c12215c_def\n");
//@unit 8c122230
#include "../decls.h"
undefined4 FUN_8c122230_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(ar4 + 0x124 + ar6 * 4);
  iVar4 = *(int *)(ar6 * 4 + ar4 + 0x118);
  uVar1 = FUN_8c11d432(ar4,0,ar6,ar7);
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  libgcc_divide_helper_01051c(iVar3 - iVar4,(uint)*(ushort *)(*(int *)(ar4 + 0x6c) + 0xc));
  uVar2 = FUN_8c12215c(ar4,ar5,ar6,0);
  return uVar2;
}

__asm__(".globl _FUN_8c122230\n.set _FUN_8c122230, _FUN_8c122230_def\n");
//@unit 8c1222b4
#include "../decls.h"
undefined4 FUN_8c1222b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar2 = 0;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x20,0,0);
  if (((uVar1 & 0xff) == 0) &&
     (uVar1 = FUN_8c120284(ar4,ar5,uVar2,ar7_00), (uVar1 & 0xff) == 0)) {
    uVar2 = FUN_8c11d432(ar4,1);
    return uVar2;
  }
  return 1;
}

__asm__(".globl _FUN_8c1222b4\n.set _FUN_8c1222b4, _FUN_8c1222b4_def\n");
//@unit 8c122312
#include "../decls.h"
undefined4 FUN_8c122312_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c122358(ar4,ar5,ar6,ar7);
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_8c122060(ar4,ar5,ar6,ar7), (uVar1 & 0xff) == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c122312\n.set _FUN_8c122312, _FUN_8c122312_def\n");
//@unit 8c122358
#include "../decls.h"
undefined4 FUN_8c122358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *a5;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *a6;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar1 = (&FUN_8c120348);
  iVar6 = *(int *)(0x108 + ar4);
  uStack_3c = 0x7fffffff;
  uStack_38 = 0;
  iStack_34 = *(int *)(0xfc + ar4);
  uVar2 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
  if (((uVar2 & 0xff) == 0) && (uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x22,0,0), (uVar2 & 0xff) == 0)
     ) {
    uVar10 = 1;
    uVar2 = 0x12;
    puVar8 = &uStack_40;
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,0x12,puVar8,1);
    a5 = (&DATA_8c1297e8);
    if ((uVar3 & 0xff) == 0) {
      *(undefined **)(0xdc + ar4) = (&FUN_8c121ef0);
      uVar3 = 0;
      if (*(int *)(0x240 + ar4) != 0) {
        do {
          uVar11 = 0;
          iStack_30 = *(int *)(0x268 + ar4 + uVar3 * 8);
          uStack_28 = *(undefined4 *)(uVar3 * 8 + 0x268 + ar4 + 4);
          iStack_2c = 1;
          uVar5 = (**(code **)(iVar6 + 0x2c))(iVar6,uVar2,puVar8,uVar10);
          iStack_24 = 0x280 + ar4;
          *(short *)(0x280 + ar4) = (short)uVar5;
          iVar4 = iStack_30 + iStack_2c;
          a6 = (undefined4 *)0x0;
          if (*(int *)(0x240 + ar4) != 0) {
            do {
              uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x13,&iStack_30,iVar4 * 2 + 0x10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = 0;
              uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x21,0,0);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              puVar8 = a6;
              uVar2 = FUN_8c122230(ar4,a5,a6,uVar10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar2 = FUN_8c1222b4(ar4,a5,puVar8,uVar10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = *(undefined4 *)(0x24c + 0x18 + ar4);
              uVar11 = uVar11 + *(int *)(0x24c + ar4);
              uVar2 = uVar3;
              puVar8 = a6;
              FUN_8c11f7bc(ar4,uVar3,a6,uVar10);
              a6 = (undefined4 *)((int)a6 + 1);
            } while (a6 < *(undefined4 **)(0x240 + ar4));
          }
          if (uVar11 < uStack_3c) {
            uStack_3c = uVar11;
            uStack_38 = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(0x240 + ar4));
      }
      uVar10 = 2;
      uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x14,uStack_40,2);
      if ((uVar2 & 0xff) == 0) {
        iVar9 = (int)0xf4;
        *(undefined **)(0xdc + ar4) = (&FUN_8c121f38);
        iVar9 = iVar9 + ar4;
        iVar6 = (int)0x288;
        iVar7 = uStack_38 * 8;
        *(short *)(iVar6 + ar4) = (short)*(undefined4 *)(iVar7 + 0x268 + ar4);
        iVar4 = (int)0x238;
        **(int **)(iVar6 + -0x4c + ar4) = *(int *)(0x268 + ar4 + iVar7) << 1;
        puVar8 = *(undefined4 **)(iVar4 + ar4);
        uVar5 = (**(code **)(iStack_34 + 0x14))
                          (**(undefined4 **)(0x23c + ar4),iVar9,uStack_40,uVar10);
        *puVar8 = uVar5;
        iVar6 = FUN_8c120f04(ar4,iVar9,uStack_40,uVar10);
        if (iVar6 == 0) {
          FUN_8c121690(ar4,uStack_38,uStack_40,uVar10);
          (*(code *)(&memmove))
                    (**(undefined4 **)(0x238 + ar4),
                     *(undefined4 *)(0x268 + ar4 + iVar7 + 4),
                     **(undefined4 **)(0x23c + ar4),uVar10);
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c122358\n.set _FUN_8c122358, _FUN_8c122358_def\n");
//@unit 8c1225fc
#include "../decls.h"
undefined4 FUN_8c1225fc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11f5d2(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1225fc\n.set _FUN_8c1225fc, _FUN_8c1225fc_def\n");
//@unit 8c122604
#include "../decls.h"
undefined4 FUN_8c122604_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11f5d2(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c122604\n.set _FUN_8c122604, _FUN_8c122604_def\n");
//@unit 8c122630
#include "../decls.h"
undefined4 FUN_8c122630_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11f66a(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c122630\n.set _FUN_8c122630, _FUN_8c122630_def\n");
//@unit 8c122638
#include "../decls.h"
undefined4 FUN_8c122638_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11f66a(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c122638\n.set _FUN_8c122638, _FUN_8c122638_def\n");
//@unit 8c122664
#include "../decls.h"
int FUN_8c122664_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7,int s0,int *s4,
                undefined4 *s8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *ar6_00;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  int *ar5_00;
  int *piVar10;
  int ar5_01;
  int *piStack_64;
  uint uStack_60;
  int *piStack_5c;
  int *piStack_58;
  int iStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_3c = (int *)*ar4;
  ar5_01 = *piStack_3c;
  piStack_5c = (int *)(0xb4 + ar5_01);
  piStack_48 = (int *)((int)piStack_5c + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc);
  piStack_58 = (int *)((*(int *)(0x88 + ar5_01) + 1) * 4 + (int)piStack_48);
  piStack_4c = (int *)((int)piStack_58 + (*(int *)(0x90 + ar5_01) + 1) * 4);
  uStack_60 = (int)piStack_4c + *(int *)(0xa8 + ar5_01) * 2 + 3 & 0xfffffffc;
  iVar5 = *(int *)(0x8c + ar5_01) + *(int *)(0x88 + ar5_01);
  piStack_44 = (int *)(uStack_60 + (*(int *)(0x8c + ar5_01) + 1) * 4);
  iVar7 = iVar5 + 1;
  iStack_34 = 0;
  ar5_00 = piStack_44 + *(int *)(0x94 + ar5_01) + 1;
  piVar10 = (int *)((int)ar5_00 + iVar5 * 2 + 3 & 0xfffffffc);
  iStack_30 = 0;
  iStack_40 = *ar5;
  uStack_28 = *(undefined4 *)(iStack_40 + 4);
  uStack_24 = 0;
  iVar5 = 0;
  if (piStack_3c[1] == 0) {
    piVar8 = &iStack_54;
    piStack_50 = ar5;
    iStack_38 = ar6;
    uStack_2c = ar7;
    iVar1 = FUN_8c10ca58(ar5,ar6,piVar8,&piStack_64);
    if (iVar1 == 0) {
      piVar6 = (int *)0x0;
      if (piStack_64 != (int *)0x0) {
        do {
          uVar2 = 0;
          if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
LAB_8c122778:
            if ((uint)(*(ushort *)(uVar2 * 2 + (int)ar5_00) >> 8) !=
                *(uint *)(iStack_54 + (int)piVar6 * 4)) goto LAB_8c12282a;
            uVar4 = 0;
            if (*(int *)(0x98 + ar5_01) != 0) {
              do {
                iVar1 = iVar7 + uVar4;
                uVar4 = uVar4 + 1;
                if (piVar10[iVar1] == uVar2) {
                  iVar5 = iVar5 + 1;
                }
              } while (uVar4 < *(uint *)(0x98 + ar5_01));
            }
            piVar8 = piVar10 + uVar2 + 1;
            uVar4 = piVar10[uVar2] - *piVar10;
            if (uVar4 < (uint)(*piVar8 - *piVar10)) {
              do {
                iVar1 = iVar7 + uVar4;
                uVar4 = uVar4 + 1;
                if (piVar10[iVar1] == uVar2) {
                  iVar5 = iVar5 + 1;
                }
              } while (uVar4 < (uint)(*piVar8 - *piVar10));
            }
            iVar5 = iVar5 + (piVar10[uVar2 + 1] - piVar10[uVar2]);
            if ((*(ushort *)(uVar2 * 2 + (int)ar5_00) & 1) != 0) {
              iStack_34 = iStack_34 + 1;
            }
            if ((*(ushort *)(uVar2 * 2 + (int)ar5_00) & 2) != 0) {
              iStack_30 = iStack_30 + 1;
            }
          }
LAB_8c12283a:
          piVar6 = (int *)((int)piVar6 + 1);
        } while (piVar6 < piStack_64);
      }
      iVar1 = (int)0xa8;
      uVar2 = *(int *)(iVar1 + -0x20 + ar5_01) + *(int *)(iVar1 + -0x1c + ar5_01);
      iStack_38 = (s0 + 0xe) * (int)piStack_64 + *(int *)(ar5_01 + 4) + iVar5 * 4 +
                  ((*(uint *)(iVar1 + ar5_01) & 1) + (uVar2 & 1)) * -2 +
                  ((((uint)(s0 * (int)piStack_64) >> 1) + *(uint *)(iVar1 + ar5_01) & 1) +
                  (uVar2 + (int)piStack_64 & 1)) * 2;
      iVar5 = (**(code **)(iStack_40 + 8))(iStack_38,&uStack_28,piVar8,piVar6);
      piStack_50 = (int *)iVar5;
      if (iVar5 == 0) {
        (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,piVar8,piVar6);
LAB_8c122b8e:
        iVar1 = 1;
      }
      else {
        memmove(iVar5,ar5_01,(int)0xb4,piVar6);
        iVar1 = (int)0xb4;
        (*(code *)(&memmove))
                  (iVar5 + iVar1,piStack_5c,*(int *)(0xa4 + ar5_01) << 1,piVar6);
        uVar2 = iVar5 + iVar1 + *(int *)(0xa4 + ar5_01) * 2 + 3U & 0xfffffffc;
        (*(code *)(&memmove))
                  (uVar2,piStack_48,(*(int *)(0xa4 + -0x1c + ar5_01) + 1) * 4,piVar6);
        iVar5 = uVar2 + (*(int *)(0x88 + ar5_01) + 1) * 4;
        (*(code *)(&memmove))
                  (iVar5,piStack_58,(*(int *)(0x88 + 8 + ar5_01) + 1) * 4,piVar6);
        iVar5 = iVar5 + (*(int *)(0x90 + ar5_01) + 1) * 4;
        (*(code *)(&memmove))
                  (iVar5,piStack_4c,*(int *)(0x90 + 0x18 + ar5_01) << 1,piVar6);
        piStack_5c = (int *)0x0;
        iVar5 = iVar5 + *(int *)(0xa8 + ar5_01) * 2;
        if (piStack_64 != (int *)0x0) {
          do {
            memmove(iVar5,uStack_2c,s0,piVar6);
            piStack_5c = (int *)((int)piStack_5c + 1);
            iVar5 = iVar5 + s0;
          } while (piStack_5c < piStack_64);
        }
        piVar8 = (int *)(iVar5 + 3U & 0xfffffffc);
        uVar2 = 0;
        if (*(int *)(0x8c + ar5_01) != 0) {
          do {
            iVar1 = uVar2 * 4;
            uVar2 = uVar2 + 1;
            iVar5 = (int)0x8c;
            *piVar8 = *(int *)(uStack_60 + iVar1) + (int)piStack_64;
            piVar8 = piVar8 + 1;
          } while (uVar2 < *(uint *)(iVar5 + ar5_01));
        }
        uVar2 = 0;
        if (piStack_64 != (int *)0xffffffff) {
          do {
            iVar5 = uVar2 + *(int *)(0x8c + 8 + ar5_01) + *(int *)(0x8c + ar5_01);
            uVar2 = uVar2 + 1;
            *piVar8 = (int)piStack_64 + iVar5 + 1;
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)piStack_64 + 1U);
        }
        (*(code *)(&memmove))
                  (piVar8,piStack_44,*(int *)(0x94 + ar5_01) << 2,piVar6);
        piVar8 = piVar8 + *(int *)(0x94 + ar5_01);
        uVar2 = 0;
        if (piStack_64 != (int *)0xffffffff) {
          do {
            uVar4 = s0 * uVar2;
            uVar2 = uVar2 + 1;
            *piVar8 = (uVar4 >> 1) + *(int *)(0xa8 + ar5_01);
            piVar8 = piVar8 + 1;
          } while (uVar2 < (int)piStack_64 + 1U);
        }
        ar6_00 = (int *)((*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) *
                        2);
        memmove(piVar8,ar5_00,ar6_00,piVar6);
        piVar6 = 0xffbf;
        puVar9 = (ushort *)
                 ((int)piVar8 +
                 (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) * 2);
        piVar8 = (int *)0x0;
        if (piStack_64 != (int *)0x0) {
          do {
            uVar2 = 0;
            ar6_00 = (int *)((int)piVar8 * 4);
            if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(uVar2 * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(iStack_54 + (int)ar6_00)) {
                  *puVar9 = *(ushort *)(uVar2 * 2 + (int)ar5_00) & (ushort)piVar6;
                  puVar9 = puVar9 + 1;
                  break;
                }
                uVar2 = uVar2 + 1;
              } while (uVar2 < (uint)(*(int *)(0x8c + -4 + ar5_01) +
                                     *(int *)(0x8c + ar5_01)));
            }
            piVar8 = (int *)((int)piVar8 + 1);
          } while (piVar8 < piStack_64);
        }
        piVar8 = (int *)((int)puVar9 + 3U & 0xfffffffc);
        iVar5 = (int)0x8c;
        *piVar8 = *piVar10 + (int)piStack_64;
        piVar8 = piVar8 + 1;
        piStack_48 = piVar8 + *(int *)(iVar5 + -4 + ar5_01) + *(int *)(iVar5 + ar5_01) +
                              (int)piStack_64;
        uStack_60 = 0;
        iVar5 = 0;
        if (*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01) != 0) {
          do {
            if (piVar10[uStack_60 + 1] != piVar10[uStack_60]) {
              piStack_4c = piVar10 + uStack_60;
              piStack_58 = (int *)(**(code **)(iStack_40 + 8))
                                            ((piVar10[uStack_60 + 1] - *piStack_4c) * 4,&uStack_28,
                                             ar6_00,piVar6);
              if (piStack_58 == (int *)0x0) {
                (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,ar6_00,piVar6);
                (**(code **)(iStack_40 + 0xc))(piStack_50,&uStack_28,ar6_00,piVar6);
                goto LAB_8c122b8e;
              }
              ar6_00 = piVar10 + uStack_60 + 1;
              uVar2 = *piStack_4c - *piVar10;
              iVar1 = 0;
              if (uVar2 < (uint)(*ar6_00 - *piVar10)) {
                do {
                  piVar6 = piVar10 + iVar7 + uVar2;
                  iVar3 = uVar2 + iVar5;
                  uVar2 = uVar2 + 1;
                  piStack_48[iVar3] = *piVar6;
                  *(uint *)((int)piStack_58 + iVar1 * 4) =
                       (uint)(*(ushort *)(*piVar6 * 2 + (int)ar5_00) >> 8);
                  iVar1 = iVar1 + 1;
                } while (uVar2 < (uint)(*ar6_00 - *piVar10));
              }
              piStack_5c = (int *)0x0;
              piStack_44 = piVar10 + uStack_60 + 1;
              if (piStack_64 != (int *)0x0) {
                do {
                  ar6_00 = *(int **)(iStack_54 + (int)piStack_5c * 4);
                  iVar1 = (*(code *)(&FUN_8c10cb4c))
                                    (piStack_58,*piStack_44 - *piStack_4c,ar6_00,piVar6);
                  if (iVar1 != 0) {
                    iVar1 = (*piStack_44 - *piVar10) + iVar5;
                    iVar5 = iVar5 + 1;
                    piStack_48[iVar1] =
                         *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) +
                         (int)piStack_5c;
                  }
                  piStack_5c = (int *)((int)piStack_5c + 1);
                } while (piStack_5c < piStack_64);
              }
              (**(code **)(iStack_40 + 0xc))(piStack_58,&uStack_28,ar6_00,piVar6);
            }
            iVar1 = (int)0x8c;
            *piVar8 = (int)piStack_64 + iVar5 + piVar10[uStack_60 + 1];
            uStack_60 = uStack_60 + 1;
            piVar8 = piVar8 + 1;
          } while (uStack_60 < (uint)(*(int *)(iVar1 + -4 + ar5_01) + *(int *)(iVar1 + ar5_01)));
        }
        piStack_58 = (int *)0x0;
        if (piStack_64 != (int *)0x0) {
          do {
            iVar1 = (int)0x88;
            *piVar8 = piVar8[-1];
            uStack_60 = 0;
            if (*(int *)(iVar1 + ar5_01) != 0) {
              do {
                if ((uint)(*(ushort *)(uStack_60 * 2 + (int)ar5_00) >> 8) ==
                    *(uint *)(iStack_54 + (int)piStack_58 * 4)) {
                  piStack_5c = piVar10 + uStack_60 + 1;
                  piStack_4c = piVar10 + uStack_60;
                  piStack_44 = (int *)*piStack_4c;
                  ar6_00 = (int *)((*piStack_5c - (int)piStack_44) * 4);
                  (*(code *)(&memmove))
                            (piStack_48 + *(int *)(0x98 + ar5_01) + iVar5,
                             piVar10 + (int)piStack_44 + (iVar7 - *piVar10),ar6_00,piVar6);
                  iVar1 = *piStack_4c;
                  iVar3 = *piStack_5c;
                  *piVar8 = *piVar8 + (iVar3 - iVar1);
                  iVar5 = iVar5 + (iVar3 - iVar1);
                  uVar2 = *piStack_4c - *piVar10;
                  iVar1 = iVar5;
                  if (uVar2 < (uint)(*piStack_5c - *piVar10)) {
                    do {
                      iVar3 = iVar7 + uVar2;
                      uVar2 = uVar2 + 1;
                      iVar5 = iVar1;
                      if (piVar10[iVar3] == uStack_60) {
                        iVar5 = iVar1 + 1;
                        piStack_48[iVar1 + *(int *)(0x98 + ar5_01)] =
                             *(int *)(0x88 + ar5_01) + *(int *)(0x8c + ar5_01) +
                             (int)piStack_58;
                        *piVar8 = *piVar8 + 1;
                      }
                      iVar1 = iVar5;
                    } while (uVar2 < (uint)(*piStack_5c - *piVar10));
                  }
                  break;
                }
                uStack_60 = uStack_60 + 1;
              } while (uStack_60 < *(uint *)(0x88 + ar5_01));
            }
            piStack_58 = (int *)((int)piStack_58 + 1);
            piVar8 = piVar8 + 1;
          } while (piStack_58 < piStack_64);
        }
        (**(code **)(iStack_40 + 0xc))(iStack_54,&uStack_28,ar6_00,piVar6);
        iVar7 = (int)0x8c;
        *(int *)((int)piStack_50 + 4) = iStack_38;
        *(int *)(iVar7 + (int)piStack_50) = *(int *)(iVar7 + (int)piStack_50) + (int)piStack_64;
        *(int *)(iVar7 + 8 + (int)piStack_50) =
             *(int *)(iVar7 + 8 + (int)piStack_50) + (int)piStack_64;
        *(int *)(iVar7 + 0xc + (int)piStack_50) = *(int *)(iVar7 + 0xc + (int)piStack_50) + iVar5;
        *(int *)(iVar7 + 0x10 + (int)piStack_50) =
             *(int *)(iVar7 + 0x10 + (int)piStack_50) + iStack_34;
        *(int *)(iVar7 + 0x14 + (int)piStack_50) =
             *(int *)(iVar7 + 0x14 + (int)piStack_50) + iStack_30;
        iVar5 = 0x80000000;
        *(uint *)(iVar7 + 0x1c + (int)piStack_50) =
             *(int *)(iVar7 + 0x1c + (int)piStack_50) + ((uint)(s0 * (int)piStack_64) >> 1);
        *s4 = *(int *)(0x8c + ar5_01) + iVar5;
        *s8 = piStack_64;
        if (piStack_3c[2] != 0) {
          (**(code **)(iStack_40 + 0xc))(*piStack_3c,&uStack_28,ar6_00,piVar6);
        }
        iVar1 = 0;
        *piStack_3c = (int)piStack_50;
        piStack_3c[2] = 1;
      }
    }
  }
  else {
    iVar1 = 5;
  }
  return iVar1;
LAB_8c12282a:
  uVar2 = uVar2 + 1;
  if ((uint)(*(int *)(0x8c + -4 + ar5_01) + *(int *)(0x8c + ar5_01)) <= uVar2)
  goto LAB_8c12283a;
  goto LAB_8c122778;
}

__asm__(".globl _FUN_8c122664\n.set _FUN_8c122664, _FUN_8c122664_def\n");
//@unit 8c122e7c
#include "../decls.h"
int FUN_8c122e7c_def(undefined4 *ar4,int *ar5,undefined4 ar6,uint ar7,int s0)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  ushort *a6;
  undefined4 *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  int *piVar20;
  int ar5_00;
  int *piStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  int *piStack_48;
  int iStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_48 = (int *)*ar4;
  ar5_00 = *piStack_48;
  piStack_40 = (int *)(0xb4 + ar5_00);
  uStack_30 = (int)piStack_40 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
  iVar9 = *(int *)(0x88 + ar5_00);
  piStack_34 = (int *)((iVar9 + 1) * 4 + uStack_30);
  puStack_4c = (undefined4 *)((int)piStack_34 + (*(int *)(0x90 + ar5_00) + 1) * 4);
  iVar6 = *(int *)(0xa8 + -0x1c + ar5_00);
  iVar11 = (*(int *)(0xa8 + ar5_00) * 2 + (int)puStack_4c + 3U & 0xfffffffc) +
           (iVar6 + 1) * 4;
  iVar6 = iVar6 + iVar9;
  iStack_44 = (*(int *)(0x94 + ar5_00) + 1) * 4 + iVar11;
  iVar18 = iVar6 + 1;
  piVar20 = (int *)(iVar6 * 2 + iStack_44 + 3U & 0xfffffffc);
  iStack_5c = 0;
  iStack_50 = *ar5;
  puVar17 = (undefined4 *)(iVar9 + ar7 + 0x80000000);
  uStack_28 = *(undefined4 *)(iStack_50 + 4);
  uStack_24 = 0;
  if ((ar7 < 0x80000000) || (*(uint *)(0x8c + ar5_00) <= ar7 + 0x80000000)) {
LAB_8c123014:
    iVar9 = (int)0x8c;
  }
  else {
    iVar6 = ar7 - 0x80000000;
    if (piStack_48[1] == 0) {
      puVar13 = &uStack_38;
      iVar9 = FUN_8c10ca58(ar5,ar6,&uStack_54,puVar13);
      if (iVar9 == 0) {
        puVar19 = (undefined4 *)(s0 + (int)puVar17);
        puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar12 = (uint)(*puVar4 >> 8);
          iVar9 = FUN_8c10cb4c(uStack_54,uStack_38,uVar12,puVar13);
          if (iVar9 == 0) {
            (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,uVar12,puVar13);
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          if ((*puVar4 & 0x40) != 0) {
            (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,0x40,puVar13);
            goto LAB_8c123014;
          }
          puVar4 = puVar4 + 1;
        }
        (**(code **)(iStack_50 + 0xc))(uStack_54,&uStack_28,0x40,puVar13);
        iStack_2c = iVar6 * 4;
        uVar12 = 0;
        iVar9 = (*(int *)(iVar11 + (iVar6 + 1) * 4) - *(int *)(iVar11 + iStack_2c)) * 2;
        if (*(int *)(0x98 + ar5_00) != 0) {
          do {
            if ((puVar17 <= (undefined4 *)piVar20[iVar18 + uVar12]) &&
               ((undefined4 *)piVar20[iVar18 + uVar12] < puVar19)) {
              iStack_5c = iStack_5c + 1;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(0x98 + ar5_00));
        }
        puVar10 = (uint *)(piVar20 + (int)puVar17 + 1);
        puVar1 = (uint *)(piVar20 + (int)puVar17);
        for (puVar5 = puVar17; puVar5 < puVar19; puVar5 = (undefined4 *)((int)puVar5 + 1)) {
          uVar12 = *puVar1;
          if (uVar12 < *puVar10) {
            do {
              puVar13 = (undefined4 *)piVar20[uVar12];
              if ((puVar13 < puVar17) || (puVar19 <= puVar13)) {
                iStack_5c = iStack_5c + 1;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *puVar10);
          }
          puVar10 = puVar10 + 1;
          puVar1 = puVar1 + 1;
        }
        iVar2 = (int)0xa8;
        uVar12 = (uint)(s0 * iVar9) >> 1;
        uVar7 = *(int *)(iVar2 + -0x20 + ar5_00) + *(int *)(iVar2 + -0x1c + ar5_00);
        iStack_3c = (*(int *)(ar5_00 + 4) - (iVar9 + 0xe) * s0) + iStack_5c * -4 +
                    ((*(uint *)(iVar2 + ar5_00) & 1) + (uVar7 & 1)) * -2 +
                    ((*(uint *)(iVar2 + ar5_00) - uVar12 & 1) + (uVar7 - s0 & 1)) * 2;
        iVar2 = (**(code **)(iStack_50 + 8))(iStack_3c,&uStack_28,puVar5,puVar13);
        if (iVar2 == 0) {
          iVar9 = 1;
        }
        else {
          memmove(iVar2,ar5_00,(int)0xb4,puVar13);
          iVar9 = (int)0xb4;
          (*(code *)(&memmove))
                    (iVar2 + iVar9,piStack_40,*(int *)(0xa4 + ar5_00) << 1,puVar13);
          uVar7 = iVar2 + iVar9 + *(int *)(0xa4 + ar5_00) * 2 + 3U & 0xfffffffc;
          (*(code *)(&memmove))
                    (uVar7,uStack_30,(*(int *)(0x88 + ar5_00) + 1) * 4,puVar13);
          iVar9 = uVar7 + (*(int *)(0x88 + ar5_00) + 1) * 4;
          (*(code *)(&memmove))
                    (iVar9,piStack_34,(*(int *)(0x90 + ar5_00) + 1) * 4,puVar13);
          iVar9 = iVar9 + (*(int *)(0x90 + ar5_00) + 1) * 4;
          piStack_40 = (int *)(iStack_2c + iVar11);
          memmove(iVar9,puStack_4c,*piStack_40 << 1,puVar13);
          iVar9 = iVar9 + *piStack_40 * 2;
          piStack_34 = (int *)((iVar6 + s0) * 4 + iVar11);
          uStack_30 = *piStack_34;
          piStack_40 = (int *)(iVar6 + s0);
          (*(code *)(&memmove))
                    (iVar9,uStack_30 * 2 + (int)puStack_4c,
                     (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) - uStack_30) * 2,
                     puVar13);
          uVar7 = 0;
          iVar6 = (int)0x8c;
          piVar15 = (int *)(iVar9 + (*(int *)(iVar11 + *(int *)(0x94 + ar5_00) * 4) -
                                    *piStack_34) * 2 + 3U & 0xfffffffc);
          if (*(int *)(iVar6 + ar5_00) - s0 != -1) {
            do {
              iVar9 = (*(int *)(iVar6 + ar5_00) - s0) + uVar7;
              uVar7 = uVar7 + 1;
              *piVar15 = iVar9 + 1;
              piVar15 = piVar15 + 1;
            } while (uVar7 < (*(int *)(iVar6 + ar5_00) - s0) + 1U);
          }
          memmove(piVar15,iVar11,iStack_2c,puVar13);
          piVar15 = (int *)((int)piVar15 + iStack_2c);
          piVar8 = piStack_40;
          if (piStack_40 < *(int *)(0x94 + ar5_00) + 1U) {
            do {
              iVar9 = (int)piVar8 * 4;
              piVar8 = (int *)((int)piVar8 + 1);
              iVar6 = (int)0x94;
              *piVar15 = *(int *)(iVar11 + iVar9) - uVar12;
              piVar15 = piVar15 + 1;
            } while (piVar8 < *(int *)(iVar6 + ar5_00) + 1U);
          }
          iVar11 = (int)puVar17 * 2;
          memmove(piVar15,iStack_44,iVar11,puVar13);
          (*(code *)(&memmove))
                    ((int)piVar15 + iVar11,s0 * 2 + iVar11 + iStack_44,
                     (((*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00)) -
                      (int)puVar17) - s0) * 2,puVar13);
          iVar9 = (int)0x8c;
          iVar6 = 0;
          piVar8 = piVar20 + 1;
          piVar14 = (int *)((int)piVar15 + iVar11 +
                            (((*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) -
                             (int)puVar17) - s0) * 2 + 3U & 0xfffffffc);
          *piVar14 = *piVar20 - s0;
          piVar14 = piVar14 + 1;
          iVar9 = (*(int *)(iVar9 + -4 + ar5_00) + *(int *)(iVar9 + ar5_00)) - s0;
          puStack_4c = (undefined4 *)0x0;
          piVar15 = piVar14;
          piStack_64 = piVar20;
          piStack_60 = piVar8;
          if (puVar17 != (undefined4 *)0x0) {
            do {
              uVar7 = *piStack_64 - *piVar20;
              if (uVar7 < (uint)(*piVar8 - *piVar20)) {
                do {
                  if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar17) {
                    iVar11 = piVar20[iVar18 + uVar7];
LAB_8c1233aa:
                    piVar14[iVar9 + (uVar7 - iVar6)] = iVar11;
                  }
                  else {
                    if (puVar19 <= (undefined4 *)piVar20[iVar18 + uVar7]) {
                      iVar11 = piVar20[iVar18 + uVar7] - s0;
                      goto LAB_8c1233aa;
                    }
                    iVar6 = iVar6 + 1;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(*piVar8 - *piVar20));
              }
              piVar8 = piVar8 + 1;
              *piVar15 = (*piStack_60 - s0) - iVar6;
              piVar15 = piVar15 + 1;
              puStack_4c = (undefined4 *)((int)puStack_4c + 1);
              piStack_60 = piStack_60 + 1;
              piStack_64 = piStack_64 + 1;
            } while (puStack_4c < puVar17);
          }
          piVar8 = piVar20 + (int)puVar17 + 1;
          piVar16 = piVar20 + (int)puVar17;
          for (puVar13 = puVar17; puVar13 < puVar19; puVar13 = (undefined4 *)((int)puVar13 + 1)) {
            iVar3 = *piVar16;
            piVar16 = piVar16 + 1;
            iVar11 = *piVar8;
            piVar8 = piVar8 + 1;
            iVar6 = iVar6 + (iVar11 - iVar3);
          }
          puVar13 = puVar19;
          if (puVar19 < (undefined4 *)
                        (*(int *)(0x8c + -4 + ar5_00) + *(int *)(0x8c + ar5_00))) {
            do {
              uVar7 = piVar20[(int)puVar13] - *piVar20;
              if (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20)) {
                do {
                  if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar17) {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7];
                  }
                  else if ((undefined4 *)piVar20[iVar18 + uVar7] < puVar19) {
                    iVar6 = iVar6 + 1;
                  }
                  else {
                    piVar14[iVar9 + (uVar7 - iVar6)] = piVar20[iVar18 + uVar7] - s0;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)(piVar20[(int)puVar13 + 1] - *piVar20));
              }
              iVar11 = (int)puVar13 + 1;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
              iVar3 = (int)0x8c;
              *piVar15 = (piVar20[iVar11] - s0) - iVar6;
              piVar15 = piVar15 + 1;
            } while (puVar13 < (undefined4 *)
                               (*(int *)(iVar3 + -4 + ar5_00) + *(int *)(iVar3 + ar5_00)));
          }
          iVar9 = (int)0x8c;
          *(int *)(iVar2 + 4) = iStack_3c;
          *(int *)(iVar9 + iVar2) = *(int *)(iVar9 + iVar2) - s0;
          *(int *)(iVar9 + 8 + iVar2) = *(int *)(iVar9 + 8 + iVar2) - s0;
          *(int *)(iVar9 + 0xc + iVar2) = *(int *)(iVar9 + 0xc + iVar2) - iVar6;
          puVar4 = (ushort *)((int)puVar17 * 2 + iStack_44);
          a6 = puVar4;
          while (puVar17 < puVar19) {
            if ((*a6 & 1) != 0) {
              *(int *)(0x9c + iVar2) = *(int *)(0x9c + iVar2) + -1;
            }
            puVar17 = (undefined4 *)((int)puVar17 + 1);
            if ((*puVar4 & 2) != 0) {
              *(int *)(0xa0 + iVar2) = *(int *)(0xa0 + iVar2) + -1;
            }
            puVar4 = puVar4 + 1;
            a6 = a6 + 1;
          }
          *(uint *)(0xa8 + iVar2) = *(int *)(0xa8 + iVar2) - uVar12;
          if (piStack_48[2] != 0) {
            (**(code **)(iStack_50 + 0xc))(*piStack_48,&uStack_28,a6,2);
          }
          iVar9 = 0;
          *piStack_48 = iVar2;
          piStack_48[2] = 1;
        }
      }
    }
    else {
      iVar9 = 5;
    }
  }
  return iVar9;
}

__asm__(".globl _FUN_8c122e7c\n.set _FUN_8c122e7c, _FUN_8c122e7c_def\n");
//@unit 8c12356c
#include "../decls.h"
int FUN_8c12356c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x4d4;
  *(undefined2 *)(iVar1 + ar4) = 0;
  *(undefined2 *)(iVar1 + 2 + ar4) = 0;
  *(undefined2 *)(iVar1 + -0x14 + ar4) = 0;
  return iVar1 + -0x14;
}

__asm__(".globl _FUN_8c12356c\n.set _FUN_8c12356c, _FUN_8c12356c_def\n");
//@unit 8c12357c
#include "../decls.h"
undefined4 FUN_8c12357c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c120348(ar4,0xc,*(undefined1 *)(ar4 + 4),ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c12357c\n.set _FUN_8c12357c, _FUN_8c12357c_def\n");
//@unit 8c123594
#include "../decls.h"
undefined4 FUN_8c123594_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(char *)(0x4bc + ar4) == '\0') {
    if (((short)ar5 == 0) || (*(short *)(0x4b8 + ar4) == (short)ar5)) {
      return (int)*(short *)(0x4b8 + ar4);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + ar4) = 1;
    *(undefined2 *)(iVar1 + 2 + ar4) = 0x32;
    *(undefined2 *)(iVar1 + -4 + ar4) = 0;
    FUN_8c120348(ar4,0xb,(short)ar5,0);
  }
  return 0;
}

__asm__(".globl _FUN_8c123594\n.set _FUN_8c123594, _FUN_8c123594_def\n");
//@unit 8c12359a
#include "../decls.h"
undefined4 FUN_8c12359a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int unaff_r14;
  
  if (*(char *)(in_r0 + unaff_r14) == '\0') {
    if (((ushort)ar5 == 0) || (*(ushort *)(0x4b8 + unaff_r14) == (ushort)ar5)) {
      return (int)*(short *)(0x4b8 + unaff_r14);
    }
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + unaff_r14) = 1;
    *(undefined2 *)(iVar1 + 2 + unaff_r14) = 0x32;
    *(undefined2 *)(iVar1 + -4 + unaff_r14) = 0;
    FUN_8c120348(unaff_r14,0xb,(uint)(ushort)ar5,0);
  }
  return 0;
}

__asm__(".globl _FUN_8c12359a\n.set _FUN_8c12359a, _FUN_8c12359a_def\n");
//@unit 8c1235fc
#include "../decls.h"
undefined4 FUN_8c1235fc_def(int ar4,undefined4 ar5,uint ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  fVar7 = (*(float *)(ar4 + 0x2c) + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c)) -
          *(float *)(ar4 + 0x4b0);
  iVar4 = 0;
  uVar1 = FUN_8c123594(ar4,0,ar6,ar7);
  uVar5 = uVar1 & 0xffff;
  if (uVar5 != 0) {
    fVar6 = (float)uVar5;
    *(short *)(ar4 + 0x4ba) = (short)uVar1;
    *(undefined4 *)(ar4 + 0x4cc) = 0;
    uVar1 = uVar5;
    if (0.19999999 < ABS(fVar7)) {
      iVar8 = (int)(fVar6 * (-(*(float *)(ar4 + 0x4c4) * fVar7 * 0.049999997) + 1.0));
      if (0xffff < iVar8) {
        iVar8 = 0xffff;
      }
      iVar4 = iVar8;
      if (*(short *)(ar4 + 0x4c0) != 0) {
        ar6 = (uint)*(ushort *)(ar4 + 0x4c0);
        ar7 = (uint)*(ushort *)(ar4 + 0x4c2);
        iVar3 = ar6 - ar7;
        iVar2 = iVar3;
        if (iVar3 < iVar8) {
          iVar2 = iVar8;
        }
        iVar4 = ar7 + ar6;
        if ((iVar2 < iVar4) && (iVar4 = iVar8, iVar8 <= iVar3)) {
          iVar4 = iVar3;
        }
      }
      uVar1 = FUN_8c123594(ar4,iVar4,ar6,ar7);
      uVar1 = uVar1 & 0xffff;
      if (uVar1 == 0) {
        *(undefined4 *)(ar4 + 0x4cc) = 1;
        return 0;
      }
    }
    if (*(short *)(ar4 + 0x4c0) == 0) {
      iVar4 = FUN_8c013dec(uVar1 - uVar5,iVar4,ar6,ar7);
      if ((int)(fVar6 * 0.01) < iVar4) {
        *(undefined2 *)(ar4 + 0x4b4) = 0;
      }
      if (10 < *(ushort *)(ar4 + 0x4b4)) {
        *(short *)(ar4 + 0x4c0) = (short)uVar1;
        *(undefined2 *)(ar4 + 0x4b4) = 0;
        fVar7 = *(float *)(ar4 + 0x2c) + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
        if ((((*(ushort *)(ar4 + 0x4c0) == 0xffff) && (fVar7 < *(float *)(ar4 + 0x4b0) + -2.763102))
            || ((*(ushort *)(ar4 + 0x4c0) < 0x199b && (*(float *)(ar4 + 0x4b0) + 1.381551 < fVar7)))
            ) && (uVar1 = FUN_8c12357c(ar4,5,ar6,ar7), (uVar1 & 0xff) != 0)) {
          return 1;
        }
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x4b4) = 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1235fc\n.set _FUN_8c1235fc, _FUN_8c1235fc_def\n");
//@unit 8c123602
#include "../decls.h"
undefined4 FUN_8c123602_def(undefined4 ar4,undefined4 ar5,uint ar6,uint ar7)

{
  char cVar1;
  int in_r0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r14;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar12;
  double dVar11;
  float fVar13;
  undefined4 in_fr5;
  float fVar14;
  undefined8 in_dr12;
  undefined8 in_dr14;
  double in_xd2;
  double in_xd14;
  bool bVar15;
  undefined4 in_PR;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  byte in_FPSCR_CAUSE;
  byte bVar20;
  byte in_FPSCR_DN;
  byte bVar21;
  byte in_FPSCR_PR;
  byte bVar22;
  byte in_FPSCR_SZ;
  byte bVar23;
  undefined1 auStack_30 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (in_FPSCR_SZ == 0) {
    uStack_18 = (double)CONCAT44((int)in_dr14,(undefined4)uStack_18);
                    
    (*(uint*)((uchar*)&uStack_18+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = &uStack_20;
    uStack_20 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar8 = (undefined8 *)auStack_30;
    uStack_18 = in_xd14;
    uStack_20 = in_dr14;
  }
  *(undefined4 *)((int)puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    dVar10 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),*(undefined4 *)(in_r0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(in_r0 + unaff_r14);
    dVar10 = *(double *)(unaff_r14 + 0x2c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
  }
  else {
    in_xd2 = *(double *)(unaff_r14 + 0x3c);
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (in_FPSCR_SZ == 0) {
    uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar10 = (double)CONCAT44(uVar12,(int)in_dr14);
    dVar11 = (double)CONCAT44(uVar12,*(undefined4 *)(0x4b0 + unaff_r14));
  }
  else {
    in_xd2 = *(double *)(0x4b0 + unaff_r14);
    dVar11 = dVar10;
  }
  if (in_FPSCR_PR == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) - SUB84(dVar11,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 - dVar11;
  }
  uVar6 = 0;
  uVar2 = FUN_8c123594(ar4,0,ar6,ar7);
  uVar16 = 0x80000;
  uVar17 = 0xffff;
  uVar7 = uVar2 & 0xffff;
  if (uVar7 == 0) {
    return 0;
  }
  uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  uVar18 = (uVar4 & 0x100000) >> 0x14;
  iVar3 = (int)0x4ba;
  fVar13 = (float)((ulonglong)dVar10 >> 0x20);
  *(short *)(iVar3 + unaff_r14) = (short)uVar2;
  *(undefined4 *)(iVar3 + 0x12 + unaff_r14) = 0;
  if ((char)uVar18 == '\0') {
    dVar10 = (double)CONCAT44(fVar13,(float)uVar7);
    in_xd2 = in_xd14;
  }
  uVar16 = uVar4 & 0x80000 | uVar18 << 0x14 | uVar16 & 0x3fffff;
  bVar20 = 0;
  bVar21 = 0;
  uVar2 = (uVar16 & 0x80000) >> 0x13;
  bVar22 = (byte)uVar2;
  uVar16 = (uVar16 & 0x100000) >> 0x14;
  bVar23 = (byte)uVar16;
  dVar11 = (double)fVar13;
  if (bVar23 == 0) {
    dVar9 = (double)CONCAT44(DAT_8c1236fc,DAT_8c123700);
  }
  else {
    dVar9 = (double)CONCAT44(DAT_8c123700,DAT_8c1236fc);
  }
  if (bVar22 == 0) {
    fVar13 = ABS((float)((ulonglong)dVar11 >> 0x20));
    dVar11 = (double)CONCAT44(fVar13,SUB84(dVar11,0));
    bVar15 = (float)((ulonglong)dVar9 >> 0x20) < fVar13;
  }
  else {
    dVar11 = ABS(dVar11);
    fVar13 = (float)((ulonglong)dVar11 >> 0x20);
    bVar15 = dVar9 < dVar11;
  }
  uVar18 = uVar7;
  if (bVar15) {
    uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    if (bVar23 == 0) {
      dVar11 = (double)CONCAT44(fVar13,*(undefined4 *)(0x4c4 + unaff_r14));
    }
    uVar2 = (uVar16 & 0x80000) >> 0x13;
    cVar1 = (char)uVar2;
    uVar16 = uVar16 >> 0x14;
    if (cVar1 == '\0') {
      fVar13 = SUB84(dVar11,0) * (float)((ulonglong)dVar10 >> 0x20);
    }
    else {
      fVar13 = SUB84(dVar11 * dVar10,0);
    }
    if ((char)uVar16 == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c123704,fVar13);
      in_xd2 = (double)CONCAT44(SUB84(dVar10,0),DAT_8c123708);
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c123708,DAT_8c123704);
    }
    if (cVar1 == '\0') {
      fVar13 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar13,SUB84(dVar11,0) * fVar13);
    }
    else {
      dVar11 = dVar11 * dVar11;
    }
    uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
    if (cVar1 == '\0') {
      fVar13 = -SUB84(dVar11,0) + SUB84(in_xd2,0);
      dVar11 = (double)CONCAT44(uVar12,fVar13);
      fVar13 = (float)((ulonglong)in_xd2 >> 0x20) * fVar13;
      dVar9 = (double)CONCAT44(fVar13,SUB84(in_xd2,0));
      uVar18 = (uint)fVar13;
    }
    else {
      dVar11 = (double)CONCAT44(uVar12,-SUB84(dVar11,0)) + in_xd2;
      dVar9 = in_xd2 * dVar11;
      uVar18 = (uint)dVar9;
    }
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
    }
    iVar3 = (int)0x4c0;
    uVar6 = uVar18;
    if (*(short *)(iVar3 + unaff_r14) != 0) {
      ar6 = (uint)*(ushort *)(iVar3 + unaff_r14);
      ar7 = (uint)*(ushort *)(iVar3 + 2 + unaff_r14);
      uVar5 = ar6 - ar7;
      uVar4 = uVar5;
      if ((int)uVar5 < (int)uVar18) {
        uVar4 = uVar18;
      }
      uVar6 = ar7 + ar6;
      if (((int)uVar4 < (int)uVar6) && (uVar6 = uVar18, (int)uVar18 <= (int)uVar5)) {
        uVar6 = uVar5;
      }
    }
    uVar16 = (uVar2 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = (byte)((uVar16 & 0x80000) >> 0x13);
    bVar23 = (byte)(uVar16 >> 0x14);
    uVar18 = FUN_8c123594(unaff_r14,uVar6,ar6,ar7);
    uVar18 = uVar18 & 0xffff;
    if (uVar18 == 0) {
      *(undefined4 *)(0x4cc + unaff_r14) = 1;
      return 0;
    }
  }
  fVar13 = SUB84(dVar9,0);
  uVar12 = (undefined4)((ulonglong)dVar11 >> 0x20);
  if (*(short *)(0x4c0 + unaff_r14) != 0) {
    *(undefined2 *)(0x4b4 + unaff_r14) = 0;
    return 0;
  }
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  bVar20 = 0;
  bVar21 = 0;
  bVar22 = (byte)((uVar16 & 0x80000) >> 0x13);
  bVar23 = (byte)((uVar16 & 0x100000) >> 0x14);
  iVar3 = FUN_8c013dec(uVar18 - uVar7,uVar6,ar6,ar7);
  uVar16 = ((uint)bVar20 << 0xc | (uint)bVar21 << 0x12 | (uint)bVar22 << 0x13 | (uint)bVar23 << 0x14
           ) & 0xffe7ffff;
  dVar11 = (double)CONCAT44(uVar12,0x3c23d70a);
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  uVar16 = (uVar16 & 0x100000) >> 0x14;
  cVar1 = (char)uVar16;
  if ((char)uVar6 == '\0') {
    iVar19 = (int)(SUB84(dVar10,0) * 0x3c23d70a);
  }
  else {
    iVar19 = (int)(dVar10 * dVar11);
  }
  if (iVar19 < iVar3) {
    *(undefined2 *)(0x4b4 + unaff_r14) = 0;
  }
  if (*(ushort *)(0x4b4 + unaff_r14) < 0xb) {
    return 0;
  }
  iVar3 = (int)0x4c0;
  *(short *)(iVar3 + unaff_r14) = (short)uVar18;
  *(undefined2 *)(iVar3 + -0xc + unaff_r14) = 0;
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x38);
  }
  uVar16 = (uVar6 << 0x13 | uVar16 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar10 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),SUB84(dVar11,0));
  }
  else {
    dVar10 = *(double *)(unaff_r14 + 0x2c);
  }
  uVar6 = (uVar16 & 0x80000) >> 0x13;
  bVar20 = (byte)uVar6;
  uVar16 = uVar16 >> 0x14;
  bVar21 = (byte)uVar16;
  if (bVar20 == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 + dVar10;
  }
  if (bVar21 == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
  }
  dVar11 = dVar10;
  if (bVar21 == 0) {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),in_fr5);
  }
  if (bVar20 == 0) {
    fVar14 = (float)((ulonglong)dVar11 >> 0x20) + SUB84(dVar10,0);
  }
  else {
    fVar14 = (float)((ulonglong)(dVar11 + dVar10) >> 0x20);
  }
  if (*(ushort *)(0x4c0 + unaff_r14) == uVar17) {
    uVar17 = uVar6 << 0x13 | uVar16 << 0x14 | 0x80000 & 0x3fffff;
    bVar20 = (byte)((uVar17 & 0x80000) >> 0x13);
    bVar21 = (byte)((uVar17 & 0x100000) >> 0x14);
    if (bVar21 == 0) {
      fVar13 = *(float *)(0x4b0 + unaff_r14);
    }
    dVar10 = (double)fVar13;
    if (bVar21 == 0) {
      dVar11 = (double)CONCAT44(DAT_8c123810,DAT_8c123814);
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c123814,DAT_8c123810);
    }
    if (bVar20 == 0) {
      fVar13 = (float)((ulonglong)dVar10 >> 0x20) + (float)((ulonglong)dVar11 >> 0x20);
      dVar10 = (double)CONCAT44(fVar13,SUB84(dVar10,0));
      bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < fVar13;
    }
    else {
      dVar10 = dVar10 + dVar11;
      bVar15 = (double)fVar14 < dVar10;
    }
    fVar13 = SUB84(dVar10,0);
    if (bVar15) goto LAB_8c1237c2;
  }
  if ((int)0x199b <= (int)(uint)*(ushort *)(0x4c0 + unaff_r14)) {
    return 0;
  }
  uVar17 = (uint)bVar20 << 0x13 | (uint)bVar21 << 0x14 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar17 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    fVar13 = *(float *)(0x4b0 + unaff_r14);
  }
  if (cVar1 == '\0') {
    dVar10 = (double)CONCAT44(DAT_8c123818,DAT_8c123814);
  }
  else {
    dVar10 = (double)CONCAT44(0,DAT_8c123818);
  }
  if ((char)((uVar17 & 0x80000) >> 0x13) == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar13 >> 0x20) + (float)((ulonglong)dVar10 >> 0x20) <
             (float)((ulonglong)(double)fVar14 >> 0x20);
  }
  else {
    bVar15 = (double)fVar13 + dVar10 < (double)fVar14;
  }
  if (!bVar15) {
    return 0;
  }
LAB_8c1237c2:
  uVar17 = FUN_8c12357c(unaff_r14,5,ar6,ar7);
  if ((uVar17 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c123602\n.set _FUN_8c123602, _FUN_8c123602_def\n");
//@unit 8c12381c
#include "../decls.h"
int FUN_8c12381c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x4b8;
  if ((*(short *)(ar4 + 0x4b8) != 0) && (iVar1 = *(int *)(ar4 + 0x4cc), iVar1 == 1)) {
    *(undefined4 *)(ar4 + 0x4cc) = 0;
    if (*(short *)(ar4 + 0x4c0) == 0) {
      iVar1 = FUN_8c013adc((uint)*(ushort *)(ar4 + 0x4b8) - (uint)*(ushort *)(ar4 + 0x4ba),ar5,ar6,
                           ar7);
      if ((int)((int)((float)*(ushort *)(ar4 + 0x4ba) * 0.01) & 0xffffU) < iVar1) {
        *(undefined2 *)(ar4 + 0x4b4) = 0;
      }
      iVar1 = 0x4b4;
      if (10 < *(ushort *)(ar4 + 0x4b4)) {
        *(undefined2 *)(ar4 + 0x4c0) = *(undefined2 *)(ar4 + 0x4b8);
        iVar1 = 0x4b4;
        *(undefined2 *)(ar4 + 0x4b4) = 0;
      }
    }
    else {
      iVar1 = 0x4b4;
      *(undefined2 *)(ar4 + 0x4b4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c12381c\n.set _FUN_8c12381c, _FUN_8c12381c_def\n");
//@unit 8c123822
#include "../decls.h"
int FUN_8c123822_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int unaff_r14;
  double dVar2;
  uint uVar3;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  if ((*(short *)(in_r0 + unaff_r14) != 0) &&
     (in_r0 = *(int *)(0x4cc + unaff_r14), in_r0 == 1)) {
    iVar1 = (int)0x4cc;
    *(undefined4 *)(iVar1 + unaff_r14) = 0;
    if (*(short *)(iVar1 + -0xc + unaff_r14) == 0) {
      iVar1 = (*(code *)(&FUN_8c013adc))
                        ((uint)*(ushort *)(0x4b8 + unaff_r14) -
                         (uint)*(ushort *)(0x4b8 + 2 + unaff_r14),ar5,ar6,ar7);
      dVar2 = (double)CONCAT44(0x3c23d70a,(float)*(ushort *)(0x4ba + unaff_r14));
      if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13) == '\0') {
        uVar3 = (uint)((float)*(ushort *)(0x4ba + unaff_r14) * 0x3c23d70a);
      }
      else {
        uVar3 = (uint)(dVar2 * dVar2);
      }
      if ((int)(uVar3 & 0xffff) < iVar1) {
        *(undefined2 *)(0x4b4 + unaff_r14) = 0;
      }
      in_r0 = (int)0x4b4;
      if (10 < *(ushort *)(in_r0 + unaff_r14)) {
        iVar1 = (int)0x4b8;
        *(undefined2 *)(iVar1 + 8 + unaff_r14) = *(undefined2 *)(iVar1 + unaff_r14);
        in_r0 = iVar1 + -4;
        *(undefined2 *)(in_r0 + unaff_r14) = 0;
      }
    }
    else {
      in_r0 = (int)0x4b4;
      *(undefined2 *)(in_r0 + unaff_r14) = 0;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c123822\n.set _FUN_8c123822, _FUN_8c123822_def\n");
//@unit 8c1238a6
#include "../decls.h"
undefined4 FUN_8c1238a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  uint ar5_00;
  
  if ((*(char *)(0x4bc + ar4) != '\0') &&
     (sVar2 = *(short *)(0x4be + ar4) + -1, *(short *)(0x4be + ar4) = sVar2,
     sVar2 == 0)) {
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + ar4) = 0;
    *(undefined4 *)(iVar1 + 0x10 + ar4) = 0;
    *(undefined2 *)(iVar1 + -8 + ar4) = 0;
  }
  if (*(short *)(0x4c0 + ar4) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  ar5_00 = (uint)*(ushort *)(0x4b4 + ar4);
  if ((uVar3 <= ar5_00) && (ar5_00 != *(ushort *)(0x4b6 + ar4))) {
    if (*(int *)(0x4cc + ar4) == 0) {
      uVar3 = FUN_8c1235fc(ar4,ar5_00,ar6,ar7);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    else {
      FUN_8c12381c(ar4,ar5_00,ar6,ar7);
    }
  }
  *(undefined2 *)(0x4b4 + 2 + ar4) = *(undefined2 *)(0x4b4 + ar4);
  return 0;
}

__asm__(".globl _FUN_8c1238a6\n.set _FUN_8c1238a6, _FUN_8c1238a6_def\n");
//@unit 8c1238ac
#include "../decls.h"
undefined4 FUN_8c1238ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  short sVar2;
  uint uVar3;
  uint a5;
  int unaff_r14;
  
  if ((*(char *)(in_r0 + unaff_r14) != '\0') &&
     (sVar2 = *(short *)(0x4be + unaff_r14) + -1,
     *(short *)(0x4be + unaff_r14) = sVar2, sVar2 == 0)) {
    iVar1 = (int)0x4bc;
    *(undefined1 *)(iVar1 + unaff_r14) = 0;
    *(undefined4 *)(iVar1 + 0x10 + unaff_r14) = 0;
    *(undefined2 *)(iVar1 + -8 + unaff_r14) = 0;
  }
  if (*(short *)(0x4c0 + unaff_r14) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  a5 = (uint)*(ushort *)(0x4b4 + unaff_r14);
  if ((uVar3 <= a5) && (a5 != *(ushort *)(0x4b6 + unaff_r14))) {
    if (*(int *)(0x4cc + unaff_r14) == 0) {
      uVar3 = FUN_8c1235fc(unaff_r14,a5,ar6,ar7);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    else {
      FUN_8c12381c(unaff_r14,a5,ar6,ar7);
    }
  }
  *(undefined2 *)(0x4b4 + 2 + unaff_r14) = *(undefined2 *)(0x4b4 + unaff_r14);
  return 0;
}

__asm__(".globl _FUN_8c1238ac\n.set _FUN_8c1238ac, _FUN_8c1238ac_def\n");
//@unit 8c12394c
#include "../decls.h"
undefined4 FUN_8c12394c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  
  if (*(char *)(ar4 + 0x4ac) != (char)ar5) {
    *(char *)(ar4 + 0x4ac) = (char)ar5;
    if ((char)ar5 == '\0') {
      fVar2 = *(float *)(ar4 + 0x2c) + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
    }
    else {
      *(undefined2 *)(ar4 + 0x4b8) = 0;
      ar7_00 = 0;
      ar6_00 = 0;
      *(undefined1 *)(ar4 + 0x4bc) = 0;
      ar5_00 = 10;
      uVar1 = FUN_8c120348(ar4,10,0,0);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      cVar4 = '\0';
      FUN_8c12356c(ar4,ar5_00,ar6_00,ar7_00);
      if (cVar4 == '\0') {
        uVar3 = CONCAT44(*(undefined4 *)(ar4 + 0x38),*(undefined4 *)(ar4 + 0x3c));
      }
      else {
        uVar3 = *(undefined8 *)(ar4 + 0x38);
      }
      fVar2 = *(float *)(ar4 + 0x2c) - ((float)((ulonglong)uVar3 >> 0x20) + (float)uVar3);
    }
    *(float *)(ar4 + 0x2c) = fVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c12394c\n.set _FUN_8c12394c, _FUN_8c12394c_def\n");
//@unit 8c123954
#include "../decls.h"
undefined4 FUN_8c123954_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int in_r0;
  int iVar3;
  uint in_r2;
  uint uVar4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  int unaff_r14;
  undefined4 in_fr3;
  float fVar5;
  double dVar6;
  undefined8 in_xd2;
  byte in_FPSCR_CAUSE;
  byte bVar7;
  byte in_FPSCR_DN;
  byte bVar8;
  byte in_FPSCR_PR;
  byte bVar9;
  byte in_FPSCR_SZ;
  byte bVar10;
  char cVar11;
  
  if (*(byte *)(in_r0 + unaff_r14) != in_r2) {
    *(char *)(in_r0 + unaff_r14) = (char)ar5;
    if ((char)ar5 == '\0') {
      if (in_FPSCR_SZ == 0) {
        in_fr3 = *(undefined4 *)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
    }
    else {
      iVar3 = (int)0x4b8;
      *(undefined2 *)(iVar3 + unaff_r14) = 0;
      puVar2 = (&FUN_8c120348);
      uVar4 = 0xffe7ffff;
      a7 = 0;
      a6 = 0;
      *(undefined1 *)(iVar3 + 4 + unaff_r14) = 0;
      a5 = 10;
      uVar4 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & uVar4;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      uVar4 = (*(code *)puVar2)(unaff_r14,10,0,0);
      if ((uVar4 & 0xff) != 0) {
        return 1;
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      bVar7 = 0;
      bVar8 = 0;
      bVar9 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar10 = (byte)((uVar4 & 0x100000) >> 0x14);
      FUN_8c12356c(unaff_r14,a5,a6,a7);
      if (bVar10 == 0) {
        in_fr3 = *(undefined4 *)(unaff_r14 + 0x3c);
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x3c);
      }
      uVar4 = ((uint)bVar7 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14
              ) & 0xffe7ffff;
      if (bVar10 == 0) {
        dVar6 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),in_fr3);
      }
      else {
        dVar6 = *(double *)(unaff_r14 + 0x38);
      }
      cVar1 = (char)((uVar4 & 0x80000) >> 0x13);
      cVar11 = (char)((uVar4 & 0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + SUB84(dVar6,0),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
      }
      else {
        in_xd2 = *(undefined8 *)(unaff_r14 + 0x2c);
      }
      if (cVar1 == '\0') {
        fVar5 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar5 = SUB84(dVar6 - dVar6,0);
      }
    }
    if (cVar11 == '\0') {
      *(float *)(unaff_r14 + 0x2c) = fVar5;
    }
    else {
      *(undefined8 *)(unaff_r14 + 0x2c) = in_xd2;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c123954\n.set _FUN_8c123954, _FUN_8c123954_def\n");
//@unit 8c1239f0
#include "../decls.h"
undefined4 FUN_8c1239f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float fVar2;
  undefined8 in_dr4;
  float fVar3;
  float in_PR;
  byte in_FPSCR_DN;
  char cVar4;
  
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  if (((*(char *)(ar4 + 0x4ac) != '\0') && (*(short *)(ar4 + 0x4c0) != 0)) ||
     (*(char *)(ar4 + 0x4ac) == '\0')) {
    cVar4 = (char)((in_FPSCR_DN & 4) >> 2);
    if (cVar4 == '\0') {
      fVar2 = 5.7564626;
    }
    else {
      fVar2 = 0.0;
    }
    if ((*(float *)(ar4 + 0x494) < fVar2) &&
       (3 < (int)((uint)*(ushort *)(ar4 + 0x4d4) - (uint)*(ushort *)(ar4 + 0x4d6)))) {
      cVar4 = '\0';
      uVar1 = FUN_8c12357c(ar4,0,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
    }
    fVar2 = fVar3;
    if (cVar4 == '\0') {
      fVar2 = *(float *)(ar4 + 0x4a8);
      in_PR = fVar3;
    }
    if ((in_PR - fVar2 <= 0.69077545) || (*(short *)(ar4 + 0x4d6) == *(short *)(ar4 + 0x4d4))) {
      fVar3 = *(float *)(ar4 + 0x2c);
      if (*(char *)(ar4 + 0x4ac) != '\0') {
        fVar3 = fVar3 + *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
      }
      if ((fVar3 - *(float *)(ar4 + 0x4a8) < -6.9077544) &&
         (3 < (int)((uint)*(ushort *)(ar4 + 0x4d4) - (uint)*(ushort *)(ar4 + 0x4d6)))) {
        uVar1 = FUN_8c12357c(ar4,2,ar6,ar7);
        if ((uVar1 & 0xff) != 0) {
          return 1;
        }
        *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
      }
    }
    else {
      *(undefined2 *)(ar4 + 0x4d6) = *(undefined2 *)(ar4 + 0x4d4);
      uVar1 = FUN_8c12357c(ar4,1,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
    }
  }
  if ((((*(char *)(ar4 + 0x4ac) != '\0') && (*(int *)(ar4 + 0x4dc) != 0)) &&
      (*(uint *)(ar4 + 0x4dc) < *(uint *)(ar4 + 0x4d0))) && (*(short *)(ar4 + 0x4d4) == 0)) {
    uVar1 = FUN_8c12357c(ar4,3,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    if ((*(char *)(ar4 + 0x4c9) == '\0') && (*(char *)(ar4 + 0x4ac) != '\0')) {
      *(undefined1 *)(ar4 + 0x4c9) = 1;
      uVar1 = FUN_8c123594(ar4,0xbfff,ar6,ar7);
      if ((uVar1 & 0xffff) != 0) {
        return 1;
      }
    }
    *(undefined4 *)(ar4 + 0x4d0) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c1239f0\n.set _FUN_8c1239f0, _FUN_8c1239f0_def\n");
//@unit 8c123bac
#include "../decls.h"
undefined4 FUN_8c123bac_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *ar5 = *(undefined1 *)(ar4 + 0x28);
  *(undefined4 *)(ar5 + 4) = *(undefined4 *)(ar4 + 0x2c);
  *(undefined4 *)(ar5 + 8) = *(undefined4 *)(ar4 + 0x30);
  *(undefined4 *)(ar5 + 0xc) = *(undefined4 *)(ar4 + 0x34);
  *(undefined4 *)(ar5 + 0x10) = *(undefined4 *)(ar4 + 0x38);
  *(undefined4 *)(ar5 + 0x14) = *(undefined4 *)(ar4 + 0x3c);
  *(undefined4 *)(ar5 + 0x18) = *(undefined4 *)(ar4 + 0x40);
  *(undefined2 *)(ar5 + 0x1c) = *(undefined2 *)(ar4 + 0x44);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined2 *)(ar5 + 0x1e) = *(undefined2 *)(ar4 + 0x46);
  *(undefined2 *)(ar5 + 0x20) = *(undefined2 *)(ar4 + 0x48);
  *(undefined2 *)(ar5 + 0x22) = *(undefined2 *)(ar4 + 0x4a);
  *(undefined4 *)(ar5 + 0x24) = *(undefined4 *)(ar4 + 0x4c);
  *(undefined4 *)(ar5 + 0x28) = *(undefined4 *)(ar4 + 0x50);
  do {
    *(undefined4 *)(ar5 + iVar1 + 0x2c) = *(undefined4 *)(ar4 + 0x54 + iVar1);
    iVar2 = iVar2 + 2;
    *(undefined4 *)(ar5 + iVar1 + 0x30) = *(undefined4 *)(ar4 + iVar1 + 0x58);
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x14);
  iVar1 = *(int *)(ar4 + 0xa8) - (ar4 + 0x54);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  iVar2 = 0;
  iVar3 = 0;
  *(short *)(ar5 + 0x7c) = (short)(iVar1 >> 2);
  do {
    *(undefined2 *)(ar5 + iVar2 + 0x7e) = *(undefined2 *)(ar4 + 0xac + iVar2);
    *(undefined2 *)(ar5 + iVar2 + 0x80) = *(undefined2 *)(ar4 + iVar2 + 0xae);
    iVar3 = iVar3 + 3;
    *(undefined2 *)(ar5 + iVar2 + 0x82) = *(undefined2 *)(ar4 + iVar2 + 0xb0);
    iVar2 = iVar2 + 6;
  } while (iVar3 < 0x96);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined4 *)(ar5 + 0x1ac) = *(undefined4 *)(ar4 + 0x430);
  do {
    iVar2 = iVar2 + 2;
    *(undefined2 *)(ar5 + iVar1 + 0x1b0) = *(undefined2 *)(ar4 + 0x434 + iVar1);
    *(undefined2 *)(ar5 + iVar1 + 0x1b2) = *(undefined2 *)(ar4 + iVar1 + 0x436);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x28);
  iVar1 = *(int *)(ar4 + 0x488) - (ar4 + 0x434);
  *(short *)(ar5 + 0x200) = (short)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1);
  return 0x200;
}

__asm__(".globl _FUN_8c123bac\n.set _FUN_8c123bac, _FUN_8c123bac_def\n");
//@unit 8c123d00
#include "../decls.h"
undefined4 FUN_8c123d00_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(ar4 + 0x28) = *ar5;
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar5 + 4);
  *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar5 + 8);
  *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar5 + 0xc);
  *(undefined4 *)(ar4 + 0x38) = *(undefined4 *)(ar5 + 0x10);
  *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar5 + 0x14);
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar5 + 0x18);
  *(undefined2 *)(ar4 + 0x44) = *(undefined2 *)(ar5 + 0x1c);
  *(undefined2 *)(ar4 + 0x46) = *(undefined2 *)(ar5 + 0x1e);
  *(undefined2 *)(ar4 + 0x48) = *(undefined2 *)(ar5 + 0x20);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined2 *)(ar4 + 0x4a) = *(undefined2 *)(ar5 + 0x22);
  *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(ar5 + 0x24);
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar5 + 0x28);
  do {
    *(undefined4 *)(ar4 + 0x54 + iVar1) = *(undefined4 *)(ar5 + iVar1 + 0x2c);
    iVar2 = iVar2 + 2;
    *(undefined4 *)(ar4 + iVar1 + 0x58) = *(undefined4 *)(ar5 + iVar1 + 0x30);
    iVar1 = iVar1 + 8;
  } while (iVar2 < 0x14);
  iVar1 = 0;
  iVar2 = 0;
  *(uint *)(ar4 + 0xa8) = (uint)*(ushort *)(ar5 + 0x7c) * 4 + ar4 + 0x54;
  do {
    *(undefined2 *)(ar4 + 0xac + iVar1) = *(undefined2 *)(ar5 + iVar1 + 0x7e);
    *(undefined2 *)(ar4 + iVar1 + 0xae) = *(undefined2 *)(ar5 + iVar1 + 0x80);
    iVar2 = iVar2 + 3;
    *(undefined2 *)(ar4 + iVar1 + 0xb0) = *(undefined2 *)(ar5 + iVar1 + 0x82);
    iVar1 = iVar1 + 6;
  } while (iVar2 < 0x96);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined4 *)(ar4 + 0x430) = *(undefined4 *)(ar5 + 0x1ac);
  do {
    iVar2 = iVar2 + 2;
    *(undefined2 *)(ar4 + 0x434 + iVar1) = *(undefined2 *)(ar5 + iVar1 + 0x1b0);
    *(undefined2 *)(ar4 + iVar1 + 0x436) = *(undefined2 *)(ar5 + iVar1 + 0x1b2);
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x28);
  *(uint *)(ar4 + 0x488) = (uint)*(ushort *)(ar5 + 0x200) * 2 + ar4 + 0x434;
  return 0x488;
}

__asm__(".globl _FUN_8c123d00\n.set _FUN_8c123d00, _FUN_8c123d00_def\n");
//@unit 8c123e4c
#include "../decls.h"
undefined4 FUN_8c123e4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint ar5_00;
  float extraout_fr0;
  
  *(undefined1 *)(ar4 + 0x28) = 0;
  FUN_8c120550(ar4,6,ar6,ar7);
  ar5_00 = 0;
  puVar2 = (undefined4 *)(ar4 + 0x54);
  *(short *)(ar4 + 0x48) = (short)(int)extraout_fr0;
  do {
    *puVar2 = 0x4effffff;
    ar5_00 = ar5_00 + 2;
    puVar2[1] = 0x4effffff;
    puVar2 = puVar2 + 2;
  } while (ar5_00 < 0x14);
  *(int *)(ar4 + 0xa8) = ar4 + 0x54;
  uVar1 = FUN_8c12356c(ar4,ar5_00,0x14,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c123e4c\n.set _FUN_8c123e4c, _FUN_8c123e4c_def\n");
//@unit 8c123e54
#include "../decls.h"
undefined4 FUN_8c123e54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  undefined4 uVar2;
  uint uVar3;
  undefined1 in_r3;
  undefined8 *puVar4;
  uint ar5_00;
  int unaff_r14;
  undefined4 extraout_fr1;
  float extraout_fr0;
  undefined4 in_fr5;
  undefined8 uVar5;
  undefined2 uVar6;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  *(undefined1 *)(in_r0 + unaff_r14) = in_r3;
  uVar2 = _DAT_8c123ef4;
  if (in_FPSCR_SZ == 0) {
    uVar2 = in_fr5;
  }
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  cVar1 = (char)((uVar3 & 0x100000) >> 0x14);
  ar5_00 = 0;
  puVar4 = (undefined8 *)(unaff_r14 + 0x54);
  if ((char)((uVar3 & 0x80000) >> 0x13) == '\0') {
    uVar6 = (undefined2)(int)extraout_fr0;
  }
  else {
    uVar6 = (undefined2)(int)(double)CONCAT44(extraout_fr0,extraout_fr1);
  }
  *(undefined2 *)(unaff_r14 + 0x48) = uVar6;
  if (cVar1 == '\0') {
    uVar5 = CONCAT44(DAT_8c123f00,uVar2);
  }
  else {
    uVar5 = CONCAT44(DAT_8c123f04,DAT_8c123f00);
  }
  do {
    uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (cVar1 == '\0') {
      *(undefined4 *)puVar4 = uVar2;
    }
    else {
      *puVar4 = uVar5;
    }
    ar5_00 = ar5_00 + 2;
    if (cVar1 == '\0') {
      *(undefined4 *)((int)puVar4 + 4) = uVar2;
    }
    else {
      *(undefined8 *)((int)puVar4 + 4) = uVar5;
    }
    puVar4 = puVar4 + 1;
  } while (ar5_00 < 0x14);
  *(int *)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
  uVar2 = FUN_8c12356c(unaff_r14,ar5_00,0x14,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c123e54\n.set _FUN_8c123e54, _FUN_8c123e54_def\n");
//@unit 8c123ea6
#include "../decls.h"
undefined4 FUN_8c123ea6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  short *psVar4;
  float *pfVar5;
  short sVar6;
  int iVar7;
  int ar5_00;
  short sVar8;
  float *ar6_00;
  int iVar9;
  float *ar7_00;
  undefined8 in_dr0;
  float fVar10;
  undefined8 in_dr4;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 in_xd14;
  char cVar15;
  
  fVar12 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar15 = '\0';
  *(undefined4 *)(ar4 + 0x4a4) = 0x3c23d70a;
  fVar10 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar14 = CONCAT44(0x3f800000,fVar10);
  iVar7 = ar4;
  if (*(char *)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(ar4 + 0x38) = 0x3f800000;
    *(float *)(ar4 + 0x3c) = fVar10;
    if (*(char *)(ar4 + 0x4ac) == '\0') {
      *(float *)(ar4 + 0x2c) = fVar10 + *(float *)(ar4 + 0x4a0) + 1.0;
    }
    else {
      *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x4a0);
    }
    *(undefined4 *)(ar4 + 0x494) = 0x40400000;
    fVar10 = *(float *)(ar4 + 0x38) * 1.5 + *(float *)(ar4 + 0x3c);
    *(float *)(ar4 + 0x34) = fVar10;
    fVar12 = 1.8939124;
    *(float *)(ar4 + 0x30) = fVar10 + 1.1513;
    ar6 = 300;
    *(undefined4 *)(ar4 + 0x40) = 0xe0ad78eb;
    *(undefined2 *)(ar4 + 0x4b4) = 0;
    *(undefined1 *)(ar4 + 0x28) = 1;
    iVar7 = ar4 + 0xac;
    ar5 = 0;
    cVar15 = '\0';
    memset(iVar7,0,300,ar7);
    *(undefined4 *)(ar4 + 0x430) = 0;
  }
  fVar10 = (float)in_dr4;
  if (*(short *)(ar4 + 0x48) < 1) {
    if (*(uint *)(ar4 + 0x430) < 0x28) {
      *(int *)(ar4 + 0x430) = *(int *)(ar4 + 0x430) + 1;
      thunk_FUN_8c013be8(iVar7,ar5,ar6,ar7);
      cVar15 = '\0';
      sVar8 = (short)(int)fVar12;
    }
    else {
      sVar8 = 5;
      psVar4 = (short *)(**(short **)(ar4 + 0x488) * 2 + ar4 + 0xac);
      *psVar4 = *psVar4 + -1;
    }
    fVar12 = (float)uVar14;
    if (cVar15 == '\0') {
      fVar10 = 0.5;
      in_xd14 = CONCAT44(fVar12,0xc1280000);
    }
    sVar6 = (short)(int)((((float)((ulonglong)in_xd14 >> 0x20) + (float)in_xd14) * 149.0) / 20.5 +
                        fVar10);
    if (sVar6 < 0) {
      sVar6 = 0;
    }
    if (0x95 < sVar6) {
      sVar6 = 0x95;
    }
    psVar4 = (short *)(sVar6 * 2 + ar4 + 0xac);
    *psVar4 = *psVar4 + 1;
    psVar4 = *(short **)(ar4 + 0x488);
    *(short **)(ar4 + 0x488) = psVar4 + 1;
    *psVar4 = sVar6;
    if (*(int *)(ar4 + 0x488) == *(int *)(ar4 + 0x484)) {
      *(int *)(ar4 + 0x488) = ar4 + 0x434;
    }
    sVar6 = 0;
    psVar4 = (short *)(ar4 + 0xac);
    do {
      sVar1 = *psVar4;
      psVar4 = psVar4 + 1;
      iVar7 = (int)sVar8;
      sVar6 = sVar6 + sVar1;
    } while (sVar6 < iVar7);
    iVar9 = (int)psVar4 - (ar4 + 0xac);
    psVar4 = (short *)(ar4 + 0x1d6);
    ar5_00 = 0;
    ar7_00 = (float *)((((int)(iVar9 + (uint)(iVar9 < 0)) >> 1) + 0xffffU & 0xffff) * 4 +
                      ar4 + 0x1d8);
    do {
      ar5_00 = ar5_00 + *psVar4;
      psVar4 = psVar4 + -1;
    } while ((short)ar5_00 < iVar7);
    iVar9 = (int)psVar4 - (ar4 + 0xac);
    ar6_00 = (float *)((((int)(iVar9 + (uint)(iVar9 < 0)) >> 1) + 1U & 0xffff) * 4 + ar4 + 0x1d8);
    fVar11 = *ar6_00;
    fVar13 = *ar7_00 - *(float *)(ar4 + 0x3c);
    if (fVar10 < fVar13) {
      fVar13 = fVar10;
    }
    if (fVar13 <= 0.0) {
      fVar10 = 0.049999997;
    }
    else {
      fVar10 = 0.01;
    }
    *(float *)(ar4 + 0x3c) = *(float *)(ar4 + 0x3c) + fVar13 * fVar10 + 0.0;
    pfVar5 = *(float **)(ar4 + 0xa8);
    fVar10 = **(float **)(ar4 + 0xa8);
    *(float **)(ar4 + 0xa8) = pfVar5 + 1;
    *pfVar5 = fVar12;
    if (*(uint *)(ar4 + 0xa4) <= *(uint *)(ar4 + 0xa8)) {
      *(int *)(ar4 + 0xa8) = ar4 + 0x54;
    }
    if (fVar10 - *(float *)(ar4 + 0x3c) < *(float *)(ar4 + 0x38) + 0.5) {
      fVar10 = (fVar11 - *(float *)(ar4 + 0x3c)) - *(float *)(ar4 + 0x38);
      if (0.099999994 < fVar10) {
        fVar10 = 0.099999994;
      }
      if (fVar10 <= 0.0) {
        fVar13 = 0.19999999;
      }
      else {
        fVar13 = 0.02;
      }
      *(float *)(ar4 + 0x38) = *(float *)(ar4 + 0x38) + fVar10 * fVar13 + 0.0;
      if (*(float *)(ar4 + 0x38) < 0.46) {
        *(undefined4 *)(ar4 + 0x38) = 0x3eeb851e;
      }
    }
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x38) * 1.5 + *(float *)(ar4 + 0x3c);
    if (*(char *)(ar4 + 0x4ac) == '\0') {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3c);
    }
    fVar13 = *(float *)(ar4 + 0x40) -
             ((*(float *)(ar4 + 0x2c) + fVar10) - *(float *)(ar4 + 0x34)) * 0.01;
    *(float *)(ar4 + 0x40) = fVar13;
    if (fVar13 < fVar11) {
      *(float *)(ar4 + 0x40) = fVar11 - fVar10;
    }
    *(float *)(ar4 + 0x30) = *(float *)(ar4 + 0x34) + 1.1513;
    fVar11 = *(float *)(ar4 + 0x498) + *(float *)(ar4 + 0x4a8) + -1007.0;
    *(float *)(ar4 + 0x50) = fVar11;
    fVar13 = 1.8939124;
    if (*(float *)(ar4 + 0x30) < fVar11) {
      *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x50);
    }
    if (fVar12 <= *(float *)(ar4 + 0x30)) {
      *(undefined2 *)(ar4 + 0x44) = 0;
    }
    else {
      *(short *)(ar4 + 0x44) = *(short *)(ar4 + 0x44) + 1;
    }
    if (*(short *)(ar4 + 0x48e) < *(short *)(ar4 + 0x44)) {
      if (*(short *)(ar4 + 0x46) == 0) {
        *(float *)(ar4 + 0x40) = *(float *)(ar4 + 0x34) - fVar10;
      }
      *(undefined2 *)(ar4 + 0x46) = *(undefined2 *)(ar4 + 0x490);
    }
    sVar8 = *(short *)(ar4 + 0x46);
    *(short *)(ar4 + 0x46) = sVar8 + -1;
    if (sVar8 < 1) {
      *(undefined2 *)(ar4 + 0x46) = 0;
      *(undefined2 *)(ar4 + 0x4a) = 0;
    }
    else {
      uVar3 = *(short *)(ar4 + 0x4a) + 1;
      *(ushort *)(ar4 + 0x4a) = uVar3;
      if ((((uint)uVar3 == (int)*(short *)(ar4 + 0x492)) || (*(short *)(ar4 + 0x46) == 0)) ||
         (fVar13 = 1.8939124, *(float *)(ar4 + 0x2c) + 1.0 < *(float *)(ar4 + 0x40))) {
        *(undefined2 *)(ar4 + 0x4a) = 0;
        fVar11 = *(float *)(ar4 + 0x40) - *(float *)(ar4 + 0x2c);
        if (fVar11 <= 0.0) {
          fVar13 = 0.049999997;
        }
        else {
          fVar13 = 0.29999998;
        }
        *(float *)(ar4 + 0x2c) = fVar13 * fVar11 + *(float *)(ar4 + 0x2c);
        *(short *)(ar4 + 0x4b4) = *(short *)(ar4 + 0x4b4) + 1;
      }
    }
    fVar11 = 0.0;
    *(float *)(ar4 + 0x494) = (*(float *)(ar4 + 0x2c) + fVar10) - *(float *)(ar4 + 0x34);
    if (fVar12 <= *(float *)(ar4 + 0x34)) {
      fVar12 = 0.0;
    }
    else {
      uVar14 = uVar14 & 0xffffffff00000000;
      fVar11 = 0.0;
      thunk_FUN_8c013cd8(iVar7,ar5_00,ar6_00,ar7_00);
      fVar12 = (float)(uVar14 >> 0x20);
      fVar12 = fVar12 / (fVar13 + fVar12);
    }
    if ((0.0 <= fVar12) && (fVar11 = fVar12, 1.0 < fVar12)) {
      fVar11 = (float)(uVar14 >> 0x20);
    }
    *(float *)(ar4 + 0x4a4) = fVar11;
    uVar2 = 0x4c;
    *(float *)(ar4 + 0x4c) = *(float *)(ar4 + 0x4c) + *(float *)(ar4 + 0x4a4);
  }
  else {
    if (*(short *)(ar4 + 0x48) != 0) {
      *(undefined1 *)(ar4 + 0x28) = 0;
    }
    uVar2 = 0x48;
    *(short *)(ar4 + 0x48) = *(short *)(ar4 + 0x48) + -1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c123ea6\n.set _FUN_8c123ea6, _FUN_8c123ea6_def\n");
//@unit 8c123eae
#include "../decls.h"
undefined4 FUN_8c123eae_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  double *in_r0;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  short *psVar8;
  float *pfVar9;
  short sVar10;
  int ar5_00;
  short sVar11;
  double *ar6_00;
  int iVar12;
  double *ar7_00;
  double *pdVar13;
  int unaff_r14;
  undefined8 *puVar14;
  double in_dr0;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double in_dr2;
  ulonglong uVar20;
  double dVar21;
  undefined4 uVar22;
  float fVar23;
  double in_dr4;
  double dVar24;
  float fVar25;
  undefined4 in_fr7;
  double dVar26;
  double dVar27;
  undefined8 in_dr12;
  undefined8 in_dr14;
  float fVar29;
  double dVar28;
  double in_xd0;
  double in_xd2;
  double dVar30;
  double dVar31;
  double in_xd4;
  double in_xd12;
  double in_xd14;
  bool bVar32;
  undefined4 in_PR;
  byte in_FPSCR_CAUSE;
  byte bVar33;
  byte in_FPSCR_DN;
  byte bVar34;
  byte in_FPSCR_PR;
  byte bVar35;
  byte in_FPSCR_SZ;
  byte bVar36;
  undefined1 auStack_24 [16];
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if (in_FPSCR_SZ == 0) {
    uStack_c = (double)CONCAT44((int)in_dr14,(undefined4)uStack_c);
                    
    (*(uint*)((uchar*)&uStack_c+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar14 = &uStack_14;
    uStack_14 = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar14 = (undefined8 *)auStack_24;
    uStack_c = in_xd14;
    uStack_14 = in_dr14;
  }
  *(undefined4 *)((int)puVar14 + -4) = in_PR;
  if (in_FPSCR_SZ == 0) {
    in_dr2 = (double)(ulonglong)*(uint *)in_r0;
  }
  else {
    in_xd2 = *in_r0;
  }
  if (in_FPSCR_SZ == 0) {
    *(int *)(0x4a4 + unaff_r14) = SUB84(in_dr2,0);
    dVar28 = (double)CONCAT44(DAT_8c123f08,(int)((ulonglong)in_dr4 >> 0x20));
  }
  else {
    *(double *)(0x4a4 + unaff_r14) = in_xd2;
    dVar28 = (double)CONCAT44((*(uint *)0x8c123f0c),DAT_8c123f08);
    in_xd14 = in_dr4;
  }
  if (*(char *)(unaff_r14 + 0x28) == '\0') {
    fVar29 = (float)((ulonglong)dVar28 >> 0x20);
    if (in_FPSCR_SZ == 0) {
      *(float *)(unaff_r14 + 0x38) = fVar29;
      *(int *)(unaff_r14 + 0x3c) = SUB84(dVar28,0);
    }
    else {
      *(double *)(unaff_r14 + 0x38) = dVar28;
      *(double *)(unaff_r14 + 0x3c) = in_xd14;
    }
    if (*(char *)(0x4ac + unaff_r14) == '\0') {
      if (in_FPSCR_SZ == 0) {
        dVar21 = (double)CONCAT44(SUB84(dVar28,0),*(undefined4 *)(0x4a0 + unaff_r14));
      }
      else {
        in_xd2 = *(double *)(0x4a0 + unaff_r14);
        dVar21 = in_xd14;
      }
      if (in_FPSCR_PR == 0) {
        in_dr2 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0) + fVar29,
                                  SUB84(dVar21,0));
      }
      else {
        in_dr2 = dVar21 + dVar21 + dVar28;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)(unaff_r14 + 0x2c) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unaff_r14 + 0x2c) = in_dr2;
      }
    }
    else if (in_FPSCR_SZ == 0) {
      uVar15 = *(uint *)(0x4a0 + unaff_r14);
      in_dr2 = (double)(ulonglong)uVar15;
      *(uint *)(unaff_r14 + 0x2c) = uVar15;
    }
    else {
      in_xd2 = *(double *)(0x4a0 + unaff_r14);
      *(double *)(unaff_r14 + 0x2c) = in_xd2;
    }
    fVar29 = 0xffe7ffff;
    uVar16 = DAT_8c123ff0;
    if (in_FPSCR_SZ != 0) {
      in_xd2 = (double)CONCAT44(DAT_8c123ff4,DAT_8c123ff0);
      uVar16 = SUB84(in_dr2,0);
    }
    if (in_FPSCR_SZ == 0) {
      *(undefined4 *)(0x494 + unaff_r14) = uVar16;
      uVar16 = *(undefined4 *)(unaff_r14 + 0x3c);
      fVar17 = DAT_8c123ff4;
    }
    else {
      *(double *)(0x494 + unaff_r14) = in_xd2;
      in_xd2 = *(double *)(unaff_r14 + 0x3c);
      fVar17 = 0xffe7ffff;
    }
    uVar15 = 0x80000;
    uVar7 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & (uint)fVar29;
    if (in_FPSCR_SZ == 0) {
      uVar20 = CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),uVar16);
    }
    else {
      uVar20 = *(ulonglong *)(unaff_r14 + 0x38);
    }
    uVar3 = (uVar7 & 0x80000) >> 0x13;
    uVar7 = (uVar7 & 0x100000) >> 0x14;
    if ((char)uVar3 == '\0') {
      uVar20 = (ulonglong)(uint)(fVar17 * (float)(uVar20 >> 0x20) + (float)uVar20);
    }
    if ((char)uVar7 == '\0') {
      *(float *)(unaff_r14 + 0x34) = (float)uVar20;
    }
    else {
      *(double *)(unaff_r14 + 0x34) = in_xd2;
    }
    uVar15 = uVar3 << 0x13 | uVar7 << 0x14 | uVar15 & 0x3fffff;
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = (uVar15 & 0x100000) >> 0x14;
    cVar1 = (char)uVar15;
    dVar21 = (double)(float)uVar20;
    if (cVar1 == '\0') {
      in_dr0 = (double)CONCAT44(DAT_8c124000,DAT_8c124004);
    }
    else {
      in_dr0 = (double)CONCAT44(DAT_8c124004,DAT_8c124000);
      in_xd0 = (double)CONCAT44(DAT_8c124008,DAT_8c124004);
    }
    if ((char)uVar7 == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) +
                                (float)((ulonglong)in_dr0 >> 0x20),SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 + in_dr0;
    }
    if (cVar1 == '\0') {
      *(float *)(unaff_r14 + 0x30) = (float)dVar21;
    }
    else {
      *(double *)(unaff_r14 + 0x30) = in_xd2;
    }
    ar6 = (int)0x12c;
    fVar29 = DAT_8c124008;
    if (cVar1 != '\0') {
      in_xd2 = (double)CONCAT44((&memset),DAT_8c124008);
      fVar29 = (float)dVar21;
    }
    if (cVar1 == '\0') {
      *(float *)(unaff_r14 + 0x40) = fVar29;
    }
    else {
      *(double *)(unaff_r14 + 0x40) = in_xd2;
    }
    fVar29 = 0xffe7ffff;
    *(undefined2 *)(0x4b4 + unaff_r14) = 0;
    *(undefined1 *)(unaff_r14 + 0x28) = 1;
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & (uint)fVar29;
    ar4 = ar6 + -0x80 + unaff_r14;
    ar5 = 0;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar15 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)(uVar15 >> 0x14);
    memset(ar4,0,ar6,ar7);
    *(undefined4 *)(0x430 + unaff_r14) = 0;
  }
  fVar29 = (float)in_dr12;
  if (0 < *(short *)(unaff_r14 + 0x48)) {
    if (*(short *)(unaff_r14 + 0x48) != 0) {
      *(undefined1 *)(unaff_r14 + 0x28) = 0;
    }
    *(short *)(unaff_r14 + 0x48) = *(short *)(unaff_r14 + 0x48) + -1;
    return 0x48;
  }
  iVar5 = (int)0x430;
  if (*(uint *)(iVar5 + unaff_r14) < 0x28) {
    *(int *)(iVar5 + unaff_r14) = *(int *)(iVar5 + unaff_r14) + 1;
    uVar15 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
             (uint)in_FPSCR_SZ << 0x14) & (uint)0xffe7ffff;
    bVar33 = 0;
    bVar34 = 0;
    bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar36 = (byte)((uVar15 & 0x100000) >> 0x14);
    fVar17 = (float)*(int *)(iVar5 + unaff_r14);
    if (*(int *)(iVar5 + unaff_r14) < 0) {
      if (bVar36 == 0) {
        dVar21 = (double)CONCAT44(DAT_8c124010,fVar17);
      }
      else {
        dVar21 = (double)CONCAT44(DAT_8c124014,DAT_8c124010);
      }
      if (bVar35 == 0) {
        fVar17 = SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20);
      }
      else {
        fVar17 = SUB84(dVar21 + dVar21,0);
      }
    }
    if (bVar36 == 0) {
      dVar21 = (double)CONCAT44(DAT_8c124014,fVar17);
      dVar31 = (double)CONCAT44(fVar17,SUB84(in_dr4,0));
    }
    else {
      dVar21 = (double)CONCAT44((&thunk_FUN_8c013be8),DAT_8c124014);
      dVar31 = in_xd2;
    }
    if (bVar35 == 0) {
      in_dr4 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) *
                                (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar31,0));
    }
    else {
      in_dr4 = dVar31 * dVar21;
    }
    thunk_FUN_8c013be8(ar4,ar5,ar6,ar7);
    uVar15 = ((uint)bVar33 << 0xc | (uint)bVar34 << 0x12 | (uint)bVar35 << 0x13 |
             (uint)bVar36 << 0x14) & (uint)0xffe7ffff;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar15 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar15 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      sVar11 = (short)(int)in_dr0;
    }
  }
  else {
    sVar11 = 5;
    psVar8 = (short *)(**(short **)(0x488 + unaff_r14) * 2 + 0xac + unaff_r14);
    *psVar8 = *psVar8 + -1;
  }
  if (in_FPSCR_SZ == 0) {
    in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),DAT_8c124134);
  }
  else {
    in_xd4 = (double)CONCAT44(DAT_8c124138,DAT_8c124134);
  }
  uVar15 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
           (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  fVar17 = SUB84(dVar28,0);
  if (in_FPSCR_SZ == 0) {
    dVar21 = (double)CONCAT44(fVar17,DAT_8c124138);
  }
  else {
    in_xd2 = (double)CONCAT44(0xffe7ffff,DAT_8c124138);
    dVar21 = in_xd14;
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  cVar2 = (char)uVar15;
  if (cVar1 == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  if (cVar2 == '\0') {
    dVar31 = (double)CONCAT44(DAT_8c124144,DAT_8c124140);
  }
  else {
    in_xd0 = (double)CONCAT44(DAT_8c124144,DAT_8c124140);
    dVar31 = (double)CONCAT44(0xffff,DAT_8c124144);
  }
  if (cVar1 == '\0') {
    dVar21 = (double)CONCAT44(((float)((ulonglong)dVar21 >> 0x20) * SUB84(dVar31,0)) /
                              (float)((ulonglong)dVar31 >> 0x20),SUB84(dVar21,0));
  }
  else {
    dVar21 = (dVar21 * dVar31) / dVar31;
  }
  dVar30 = dVar21;
  if (cVar2 == '\0') {
    uVar16 = (undefined4)((ulonglong)dVar21 >> 0x20);
    dVar21 = (double)CONCAT44(uVar16,uVar16);
    dVar30 = in_xd2;
  }
  if (cVar1 == '\0') {
    fVar18 = SUB84(dVar21,0) + SUB84(in_dr4,0);
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),fVar18);
    sVar10 = (short)(int)fVar18;
  }
  else {
    dVar21 = dVar21 + in_dr4;
    sVar10 = (short)(int)dVar21;
  }
  if (sVar10 < 0) {
    sVar10 = 0;
  }
  if (0x95 < sVar10) {
    sVar10 = 0x95;
  }
  iVar5 = (int)0x488;
  psVar8 = (short *)(sVar10 * 2 + 0xac + unaff_r14);
  *psVar8 = *psVar8 + 1;
  psVar8 = *(short **)(iVar5 + unaff_r14);
  *(short **)(iVar5 + unaff_r14) = psVar8 + 1;
  *psVar8 = sVar10;
  if (*(int *)(iVar5 + unaff_r14) == *(int *)(iVar5 + -4 + unaff_r14)) {
    *(int *)(0x488 + unaff_r14) = 0x434 + unaff_r14;
  }
  sVar10 = 0;
  psVar8 = (short *)(0xac + unaff_r14);
  do {
    sVar4 = *psVar8;
    psVar8 = psVar8 + 1;
    iVar5 = (int)sVar11;
    sVar10 = sVar10 + sVar4;
  } while (sVar10 < iVar5);
  iVar12 = (int)psVar8 - (0xac + unaff_r14);
  psVar8 = (short *)((int)0x12a + 0xac + unaff_r14);
  ar5_00 = 0;
  ar7_00 = (double *)
           ((((int)(iVar12 + (uint)(iVar12 < 0)) >> 1) + 0xffff & 0xffffU) * 4 +
           0x1d8 + unaff_r14);
  if (cVar2 == '\0') {
    dVar26 = (double)CONCAT44(*(undefined4 *)ar7_00,in_fr7);
  }
  else {
    dVar26 = *ar7_00;
  }
  do {
    ar5_00 = ar5_00 + *psVar8;
    psVar8 = psVar8 + -1;
  } while ((short)ar5_00 < iVar5);
  if (cVar2 == '\0') {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
  }
  else {
    dVar30 = *(double *)(unaff_r14 + 0x3c);
  }
  iVar12 = (int)psVar8 - (0xac + unaff_r14);
  ar6_00 = (double *)
           ((((int)(iVar12 + (uint)(iVar12 < 0)) >> 1) + 1U & 0xffff) * 4 + 0x1d8 + unaff_r14
           );
  if (cVar2 == '\0') {
    dVar24 = (double)CONCAT44(*(undefined4 *)ar6_00,SUB84(in_dr4,0));
  }
  else {
    dVar24 = *ar6_00;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = uVar15 >> 0x14;
  if ((char)uVar7 == '\0') {
    fVar18 = (float)((ulonglong)dVar26 >> 0x20) - SUB84(dVar21,0);
    dVar26 = (double)CONCAT44(fVar18,SUB84(dVar26,0));
    bVar32 = SUB84(dVar24,0) < fVar18;
  }
  else {
    dVar26 = dVar26 - dVar21;
    bVar32 = dVar24 < dVar26;
  }
  dVar27 = dVar26;
  if ((bVar32) && (dVar27 = in_xd4, (char)uVar15 == '\0')) {
    dVar27 = (double)CONCAT44(SUB84(dVar24,0),SUB84(dVar26,0));
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  dVar21 = (double)CONCAT44(0x0,SUB84(dVar21,0));
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar18 = (float)((ulonglong)dVar27 >> 0x20);
  if (cVar1 == '\0') {
    bVar32 = 0x0 < fVar18;
  }
  else {
    bVar32 = dVar21 < dVar27;
  }
  pdVar13 = (double *)(unaff_r14 + 0x3c);
  if (bVar32) {
    if (cVar2 == '\0') {
      dVar21 = (double)CONCAT44(0x0,DAT_8c124150);
    }
    else {
      dVar30 = (double)CONCAT44((*(uint *)0x8c124154),DAT_8c124150);
    }
  }
  else if (cVar2 == '\0') {
    dVar21 = (double)CONCAT44(0x0,(undefined4)DAT_8c124278);
  }
  else {
    dVar30 = (double)CONCAT44(0xffe7ffff,(undefined4)DAT_8c124278);
  }
  dVar26 = dVar27;
  if (cVar2 == '\0') {
    dVar26 = (double)CONCAT44(fVar18,SUB84(dVar31,0));
  }
  if (cVar1 == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) * SUB84(dVar21,0) +
                              (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar21,0));
  }
  iVar12 = (int)0xa8;
  dVar31 = dVar21;
  if (cVar2 == '\0') {
    dVar21 = (double)((ulonglong)dVar21 >> 0x20);
    dVar31 = dVar30;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar21 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar21,0));
  }
  else {
    dVar21 = *pdVar13;
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = uVar15 >> 0x14;
  cVar1 = (char)uVar15;
  if ((char)uVar7 == '\0') {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  uVar16 = (undefined4)((ulonglong)dVar21 >> 0x20);
  if (cVar1 == '\0') {
    *(undefined4 *)pdVar13 = uVar16;
  }
  else {
    *pdVar13 = dVar21;
  }
  pfVar9 = *(float **)(iVar12 + unaff_r14);
  if (cVar1 == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),
                              *(undefined4 *)*(double **)(iVar12 + unaff_r14));
  }
  else {
    in_xd4 = **(double **)(iVar12 + unaff_r14);
  }
  *(float **)(iVar12 + unaff_r14) = pfVar9 + 1;
  if (cVar1 == '\0') {
    *pfVar9 = fVar17;
  }
  else {
    *(double *)(pfVar9 + -1) = in_xd14;
  }
  if (*(uint *)(iVar12 + -4 + unaff_r14) <= *(uint *)(iVar12 + unaff_r14)) {
    *(int *)(0xa8 + unaff_r14) = unaff_r14 + 0x54;
  }
  if (cVar1 == '\0') {
    dVar21 = (double)CONCAT44(uVar16,*(undefined4 *)(unaff_r14 + 0x3c));
  }
  else {
    dVar31 = *(double *)(unaff_r14 + 0x3c);
  }
  uVar7 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar15 = (uVar7 & 0x80000) >> 0x13;
  if ((char)uVar15 == '\0') {
    dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) - SUB84(dVar21,0));
  }
  else {
    dVar24 = dVar24 - dVar21;
  }
  uVar15 = uVar15 << 0x13 | uVar7 & 0xfff00000 | 0x80000 & 0x3fffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  bVar33 = (byte)uVar7;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  bVar34 = (byte)uVar15;
  dVar21 = (double)SUB84(dVar24,0);
  if (bVar34 == 0) {
    *(int *)((int)puVar14 + -8) = (int)((ulonglong)dVar21 >> 0x20);
    pdVar13 = (double *)((int)puVar14 + -0xc);
    *(int *)((int)puVar14 + -0xc) = SUB84(dVar21,0);
    dVar26 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x38);
    dVar21 = (double)CONCAT44(DAT_8c124284,SUB84(dVar21,0));
  }
  else {
    *(double *)((int)puVar14 + -0xc) = dVar21;
    pdVar13 = (double *)((int)puVar14 + -0x14);
    *(double *)((int)puVar14 + -0x14) = dVar31;
    in_xd0 = *(double *)(unaff_r14 + 0x38);
    dVar21 = (double)CONCAT44(0x0,DAT_8c124284);
  }
  dVar30 = (double)SUB84(dVar26,0);
  if (bVar34 == 0) {
    dVar21 = (double)CONCAT44((int)((ulonglong)dVar21 >> 0x20),0x0);
  }
  else {
    dVar31 = (double)CONCAT44(_DAT_8c12428c,0x0);
  }
  if (bVar33 == 0) {
    dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) +
                              (float)((ulonglong)dVar21 >> 0x20),SUB84(dVar30,0));
  }
  else {
    dVar30 = dVar30 + dVar21;
  }
  if (bVar34 != 0) {
    dVar31 = *pdVar13;
    pdVar13 = pdVar13 + 1;
  }
  dVar21 = *pdVar13;
  if (bVar33 == 0) {
    bVar32 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)dVar30 >> 0x20);
  }
  else {
    bVar32 = dVar21 < dVar30;
  }
  if (bVar32) {
    if (bVar34 == 0) {
      dVar21 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x3c);
    }
    else {
      dVar31 = *(double *)(unaff_r14 + 0x3c);
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
    dVar30 = dVar24;
    if (bVar34 == 0) {
      dVar30 = (double)CONCAT44(uVar16,SUB84(dVar21,0));
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) - SUB84(dVar30,0),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar30;
    }
    if (cVar2 == '\0') {
      uVar22 = (undefined4)((ulonglong)dVar30 >> 0x20);
      dVar27 = (double)CONCAT44(_DAT_8c12428c,SUB84(dVar27,0));
      dVar24 = (double)CONCAT44(uVar16,uVar22);
      dVar30 = in_xd4;
      dVar21 = (double)CONCAT44(uVar22,*(undefined4 *)(unaff_r14 + 0x38));
      dVar26 = dVar31;
    }
    else {
      dVar26 = *(double *)(unaff_r14 + 0x38);
      dVar27 = (double)CONCAT44(_DAT_8c124290,_DAT_8c12428c);
      dVar21 = dVar30;
    }
    fVar18 = (float)((ulonglong)dVar27 >> 0x20);
    if (cVar1 == '\0') {
      fVar23 = SUB84(dVar24,0) - SUB84(dVar21,0);
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar23);
      bVar32 = fVar18 < fVar23;
    }
    else {
      dVar24 = dVar24 - dVar21;
      bVar32 = dVar27 < dVar24;
    }
    dVar31 = dVar30;
    if ((bVar32) && (dVar31 = dVar27, cVar2 == '\0')) {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),fVar18);
      dVar31 = dVar30;
    }
    fVar18 = (float)((ulonglong)dVar31 >> 0x20);
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    dVar21 = (double)CONCAT44(0x0,SUB84(dVar21,0));
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    cVar1 = (char)uVar7;
    uVar15 = uVar15 >> 0x14;
    cVar2 = (char)uVar15;
    if (cVar1 == '\0') {
      bVar32 = 0x0 < SUB84(dVar24,0);
    }
    else {
      bVar32 = dVar21 < dVar24;
    }
    pdVar13 = (double *)(unaff_r14 + 0x38);
    if (bVar32) {
      if (cVar2 == '\0') {
        dVar21 = (double)CONCAT44(0x0,_DAT_8c124290);
      }
      else {
        dVar26 = (double)CONCAT44(_DAT_8c124294,_DAT_8c124290);
      }
    }
    else if (cVar2 == '\0') {
      dVar21 = (double)CONCAT44(0x0,_DAT_8c124294);
    }
    else {
      dVar26 = (double)CONCAT44(DAT_8c124298,_DAT_8c124294);
    }
    if (cVar2 == '\0') {
      fVar18 = SUB84(dVar24,0);
    }
    if (cVar1 == '\0') {
      dVar21 = (double)CONCAT44(fVar18 * SUB84(dVar21,0) + (float)((ulonglong)dVar21 >> 0x20),
                                SUB84(dVar21,0));
    }
    dVar31 = dVar21;
    if (cVar2 == '\0') {
      dVar21 = (double)((ulonglong)dVar21 >> 0x20);
      dVar31 = dVar26;
    }
    uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
    if (cVar2 == '\0') {
      dVar21 = (double)CONCAT44(*(undefined4 *)pdVar13,SUB84(dVar21,0));
    }
    else {
      dVar21 = *pdVar13;
    }
    uVar7 = (uVar15 & 0x80000) >> 0x13;
    uVar15 = uVar15 >> 0x14;
    if ((char)uVar7 == '\0') {
      dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + SUB84(dVar21,0),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 + dVar21;
    }
    if ((char)uVar15 == '\0') {
      *(int *)pdVar13 = (int)((ulonglong)dVar21 >> 0x20);
      dVar21 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x38);
    }
    else {
      *pdVar13 = dVar21;
      dVar31 = *(double *)(unaff_r14 + 0x38);
    }
    uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
    bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar34 = (byte)((uVar15 & 0x100000) >> 0x14);
    dVar21 = (double)SUB84(dVar21,0);
    if (bVar34 == 0) {
      dVar30 = (double)CONCAT44(DAT_8c124298,DAT_8c12429c);
    }
    else {
      dVar30 = (double)CONCAT44(DAT_8c12429c,DAT_8c124298);
      in_xd0 = (double)CONCAT44(DAT_8c1242a0,DAT_8c12429c);
    }
    if (bVar33 == 0) {
      bVar32 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)dVar30 >> 0x20);
    }
    else {
      bVar32 = dVar21 < dVar30;
    }
    if (bVar32) {
      if (bVar34 == 0) {
        dVar21 = (double)(ulonglong)DAT_8c1242a0;
        *(uint *)(unaff_r14 + 0x38) = DAT_8c1242a0;
      }
      else {
        dVar31 = (double)CONCAT44(DAT_8c1242a4,DAT_8c1242a0);
        *(double *)(unaff_r14 + 0x38) = dVar31;
      }
    }
  }
  uVar16 = SUB84(dVar21,0);
  if (bVar34 == 0) {
    uVar16 = *(undefined4 *)(unaff_r14 + 0x3c);
  }
  else {
    dVar31 = *(double *)(unaff_r14 + 0x3c);
  }
  if (bVar34 == 0) {
    dVar21 = (double)CONCAT44(DAT_8c1242a4,SUB84(dVar30,0));
    dVar30 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x38),uVar16);
  }
  else {
    dVar21 = (double)CONCAT44((*(uint *)0x8c1242a8),DAT_8c1242a4);
    dVar30 = *(double *)(unaff_r14 + 0x38);
  }
  uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar18 = (float)((ulonglong)dVar21 >> 0x20);
  if (cVar1 == '\0') {
    fVar23 = (float)((ulonglong)dVar30 >> 0x20);
    dVar30 = (double)CONCAT44(fVar23,fVar18 * fVar23 + SUB84(dVar30,0));
  }
  if (cVar2 == '\0') {
    *(int *)(unaff_r14 + 0x34) = SUB84(dVar30,0);
    fVar29 = 0x0;
  }
  else {
    *(double *)(unaff_r14 + 0x34) = dVar31;
    in_xd12 = (double)CONCAT44(_DAT_8c12428c,0x0);
  }
  uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
  if (*(char *)(0x4ac + unaff_r14) == '\0') {
    if (cVar2 == '\0') {
      dVar24 = (double)CONCAT44(uVar16,fVar29);
    }
  }
  else {
    if (cVar2 == '\0') {
      dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(unaff_r14 + 0x3c));
      dVar24 = (double)CONCAT44(uVar16,*(undefined4 *)(unaff_r14 + 0x38));
    }
    else {
      dVar31 = *(double *)(unaff_r14 + 0x3c);
    }
    if (cVar1 == '\0') {
      dVar24 = (double)CONCAT44((int)((ulonglong)dVar24 >> 0x20),SUB84(dVar24,0) + SUB84(dVar30,0));
    }
    else {
      dVar24 = dVar24 + dVar30;
    }
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
  }
  else {
    dVar31 = *(double *)(unaff_r14 + 0x2c);
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  fVar23 = SUB84(dVar24,0);
  if (cVar1 == '\0') {
    fVar19 = SUB84(dVar30,0) + fVar23;
  }
  else {
    fVar19 = SUB84(dVar30 + dVar24,0);
  }
  fVar25 = (float)((ulonglong)dVar24 >> 0x20);
  if (cVar2 == '\0') {
    dVar30 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x34),fVar19);
    dVar21 = (double)CONCAT44(fVar18,*(undefined4 *)(unaff_r14 + 0x40));
    dVar26 = (double)CONCAT44(fVar25,SUB84(dVar27,0));
  }
  else {
    dVar30 = *(double *)(unaff_r14 + 0x34);
    in_xd0 = *(double *)(unaff_r14 + 0x40);
    dVar26 = dVar24;
  }
  if (cVar1 == '\0') {
    fVar18 = SUB84(dVar30,0) - (float)((ulonglong)dVar30 >> 0x20);
  }
  else {
    fVar18 = SUB84(dVar30 - dVar30,0);
  }
  if (cVar1 == '\0') {
    dVar30 = (double)CONCAT44(0x3c23d70a,fVar18 * 0x3c23d70a);
    fVar18 = SUB84(dVar21,0) - fVar18 * 0x3c23d70a;
  }
  else {
    dVar30 = (double)CONCAT44(0x3c23d70a,fVar18) * (double)CONCAT44(0x3c23d70a,fVar18);
    fVar18 = SUB84(dVar21 - dVar30,0);
  }
  dVar21 = in_xd0;
  if (cVar2 == '\0') {
    dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),fVar18);
    dVar21 = dVar31;
  }
  if (cVar1 == '\0') {
    bVar32 = SUB84(dVar30,0) < fVar25;
  }
  else {
    bVar32 = dVar30 < dVar24;
  }
  if (cVar2 == '\0') {
    *(float *)(unaff_r14 + 0x40) = fVar18;
  }
  else {
    *(double *)(unaff_r14 + 0x40) = in_xd0;
  }
  if (cVar1 == '\0') {
    dVar26 = (double)CONCAT44((float)((ulonglong)dVar26 >> 0x20) - fVar23,SUB84(dVar26,0));
  }
  else {
    dVar26 = dVar26 - dVar24;
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      *(int *)(unaff_r14 + 0x40) = (int)((ulonglong)dVar26 >> 0x20);
    }
    else {
      *(double *)(unaff_r14 + 0x40) = dVar26;
    }
  }
  if (cVar2 == '\0') {
    dVar30 = (double)(ulonglong)*(uint *)(unaff_r14 + 0x34);
  }
  else {
    dVar21 = *(double *)(unaff_r14 + 0x34);
  }
  uVar15 = uVar7 << 0x13 | uVar15 << 0x14 | 0x80000 & 0x3fffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  uVar15 = (uVar15 & 0x100000) >> 0x14;
  cVar1 = (char)uVar15;
  dVar31 = (double)SUB84(dVar30,0);
  if (cVar1 == '\0') {
    dVar30 = (double)CONCAT44(DAT_8c124354,DAT_8c124358);
  }
  else {
    dVar30 = (double)CONCAT44(DAT_8c124358,DAT_8c124354);
  }
  fVar18 = (float)((ulonglong)dVar30 >> 0x20);
  if ((char)uVar7 == '\0') {
    dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + fVar18,SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar30;
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    *(float *)(unaff_r14 + 0x30) = (float)dVar31;
  }
  else {
    *(double *)(unaff_r14 + 0x30) = dVar21;
  }
  iVar12 = (int)0x4a8;
  if (cVar1 == '\0') {
    dVar31 = (double)CONCAT44(*(undefined4 *)(iVar12 + -0x10 + unaff_r14),
                              *(undefined4 *)(iVar12 + unaff_r14));
  }
  else {
    dVar21 = *(double *)(iVar12 + unaff_r14);
    dVar31 = *(double *)(iVar12 + -0x10 + unaff_r14);
  }
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  cVar1 = (char)uVar7;
  uVar15 = uVar15 >> 0x14;
  cVar2 = (char)uVar15;
  if (cVar1 == '\0') {
    dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar31;
  }
  if (cVar2 == '\0') {
    dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),_DAT_8c12435c);
  }
  else {
    dVar21 = (double)CONCAT44((*(uint *)0x8c124360),_DAT_8c12435c);
  }
  if (cVar1 == '\0') {
    dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 + dVar31;
  }
  fVar19 = (float)((ulonglong)dVar31 >> 0x20);
  if (cVar2 == '\0') {
    *(float *)(unaff_r14 + 0x50) = fVar19;
    dVar30 = (double)CONCAT44(fVar18,*(undefined4 *)(unaff_r14 + 0x30));
  }
  else {
    *(double *)(unaff_r14 + 0x50) = dVar31;
  }
  if (cVar1 == '\0') {
    bVar32 = SUB84(dVar30,0) < fVar19;
  }
  else {
    bVar32 = dVar30 < dVar31;
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      dVar31 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x50),SUB84(dVar31,0));
      *(undefined4 *)(unaff_r14 + 0x30) = *(undefined4 *)(unaff_r14 + 0x50);
    }
    else {
      dVar31 = *(double *)(unaff_r14 + 0x50);
      *(double *)(unaff_r14 + 0x30) = dVar31;
    }
  }
  if (cVar2 == '\0') {
    dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(unaff_r14 + 0x30));
  }
  else {
    dVar21 = *(double *)(unaff_r14 + 0x30);
  }
  uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
  uVar7 = (uVar15 & 0x80000) >> 0x13;
  bVar33 = (byte)uVar7;
  uVar15 = uVar15 >> 0x14;
  bVar34 = (byte)uVar15;
  if (bVar33 == 0) {
    bVar32 = SUB84(dVar31,0) < fVar17;
  }
  else {
    bVar32 = dVar31 < dVar28;
  }
  if (bVar32) {
    *(short *)(unaff_r14 + 0x44) = *(short *)(unaff_r14 + 0x44) + 1;
  }
  else {
    *(undefined2 *)(unaff_r14 + 0x44) = 0;
  }
  if (*(short *)(0x48e + unaff_r14) < *(short *)(unaff_r14 + 0x44)) {
    if (*(short *)(unaff_r14 + 0x46) == 0) {
      if (bVar34 == 0) {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(unaff_r14 + 0x34)
                                 );
      }
      else {
        dVar21 = *(double *)(unaff_r14 + 0x34);
      }
      uVar15 = (uVar7 << 0x13 | uVar15 << 0x14) & 0xffe7ffff;
      bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
      bVar34 = (byte)(uVar15 >> 0x14);
      if (bVar33 == 0) {
        dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0) - fVar23);
      }
      else {
        dVar31 = dVar31 - dVar24;
      }
      if (bVar34 == 0) {
        *(int *)(unaff_r14 + 0x40) = SUB84(dVar31,0);
      }
      else {
        *(double *)(unaff_r14 + 0x40) = dVar21;
      }
    }
    *(undefined2 *)(unaff_r14 + 0x46) = *(undefined2 *)(0x490 + unaff_r14);
  }
  sVar11 = *(short *)(unaff_r14 + 0x46);
  *(short *)(unaff_r14 + 0x46) = sVar11 + -1;
  if (sVar11 < 1) {
    *(undefined2 *)(unaff_r14 + 0x46) = 0;
    *(undefined2 *)(unaff_r14 + 0x4a) = 0;
  }
  else {
    uVar6 = *(short *)(unaff_r14 + 0x4a) + 1;
    *(ushort *)(unaff_r14 + 0x4a) = uVar6;
    if (((uint)uVar6 != (int)*(short *)(0x492 + unaff_r14)) &&
       (*(short *)(unaff_r14 + 0x46) != 0)) {
      if (bVar34 == 0) {
        dVar31 = (double)(ulonglong)(uint)DAT_8c124474;
      }
      uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
      if (bVar34 == 0) {
        dVar31 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),SUB84(dVar31,0));
      }
      else {
        dVar31 = *(double *)(unaff_r14 + 0x2c);
      }
      bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
      bVar34 = (byte)(uVar15 >> 0x14);
      if (bVar33 == 0) {
        dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) + SUB84(dVar31,0),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      if (bVar34 == 0) {
        dVar30 = (double)CONCAT44((int)((ulonglong)dVar30 >> 0x20),*(undefined4 *)(unaff_r14 + 0x40)
                                 );
      }
      if (bVar33 == 0) {
        bVar32 = (float)((ulonglong)dVar31 >> 0x20) < SUB84(dVar30,0);
      }
      else {
        bVar32 = dVar31 < dVar30;
      }
      if (!bVar32) goto LAB_8c12441c;
    }
    if (bVar34 == 0) {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),*(undefined4 *)(unaff_r14 + 0x2c));
    }
    uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
    if (bVar34 == 0) {
      dVar24 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x40),fVar23);
    }
    else {
      dVar24 = *(double *)(unaff_r14 + 0x40);
    }
    bVar33 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar34 = (byte)(uVar15 >> 0x14);
    *(undefined2 *)(unaff_r14 + 0x4a) = 0;
    if (bVar33 == 0) {
      dVar24 = (double)CONCAT44((float)((ulonglong)dVar24 >> 0x20) - SUB84(dVar31,0),SUB84(dVar24,0)
                               );
    }
    else {
      dVar24 = dVar24 - dVar31;
    }
    if (bVar34 == 0) {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),(*(uint*)((uchar*)&DAT_8c124474+4)));
    }
    fVar18 = (float)((ulonglong)dVar24 >> 0x20);
    if (bVar33 == 0) {
      bVar32 = SUB84(dVar31,0) < fVar18;
    }
    else {
      bVar32 = dVar31 < dVar24;
    }
    fVar23 = 0x3d4ccccc;
    if (bVar32) {
      fVar23 = 0x3e999999;
    }
    dVar30 = (double)CONCAT44(fVar23,SUB84(dVar30,0));
    if (bVar34 == 0) {
      dVar31 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),SUB84(dVar31,0));
    }
    else {
      dVar31 = *(double *)(unaff_r14 + 0x2c);
    }
    if (bVar33 == 0) {
      dVar31 = (double)CONCAT44(fVar23 * fVar18 + (float)((ulonglong)dVar31 >> 0x20),SUB84(dVar31,0)
                               );
    }
    if (bVar34 == 0) {
      *(int *)(unaff_r14 + 0x2c) = (int)((ulonglong)dVar31 >> 0x20);
    }
    else {
      *(double *)(unaff_r14 + 0x2c) = dVar31;
    }
    *(short *)(0x4b4 + unaff_r14) = *(short *)(0x4b4 + unaff_r14) + 1;
  }
LAB_8c12441c:
  uVar16 = SUB84(dVar31,0);
  if (bVar34 == 0) {
    dVar21 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x2c),fVar29);
  }
  else {
    dVar21 = *(double *)(unaff_r14 + 0x2c);
  }
  uVar15 = ((uint)bVar33 << 0x13 | (uint)bVar34 << 0x14) & 0xffe7ffff;
  bVar33 = 0;
  bVar34 = 0;
  bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
  bVar36 = (byte)(uVar15 >> 0x14);
  fVar29 = SUB84(dVar24,0);
  if (bVar35 == 0) {
    dVar21 = (double)CONCAT44((float)((ulonglong)dVar21 >> 0x20) + fVar29,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar24;
  }
  if (bVar36 == 0) {
    uVar16 = *(undefined4 *)(unaff_r14 + 0x34);
  }
  fVar18 = (float)((ulonglong)dVar21 >> 0x20);
  dVar31 = dVar21;
  if (bVar36 == 0) {
    dVar31 = (double)CONCAT44(fVar18,uVar16);
  }
  if (bVar35 == 0) {
    dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) - SUB84(dVar31,0),SUB84(dVar31,0));
  }
  else {
    dVar31 = dVar31 - dVar31;
  }
  uVar16 = (undefined4)((ulonglong)dVar31 >> 0x20);
  if (bVar36 == 0) {
    *(undefined4 *)(0x494 + unaff_r14) = uVar16;
    dVar31 = (double)CONCAT44(uVar16,*(undefined4 *)(unaff_r14 + 0x34));
  }
  else {
    *(double *)(0x494 + unaff_r14) = dVar31;
  }
  if (bVar35 == 0) {
    bVar32 = SUB84(dVar31,0) < fVar17;
  }
  else {
    bVar32 = dVar31 < dVar28;
  }
  if (bVar32) {
    if (bVar35 == 0) {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),fVar17 - fVar18);
    }
    else {
      dVar28 = dVar28 - dVar21;
    }
    if (bVar36 == 0) {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),
                                *(undefined4 *)(0x49c + unaff_r14));
    }
    if (bVar35 == 0) {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) + SUB84(dVar31,0));
    }
    else {
      dVar28 = dVar28 + dVar31;
    }
    if (bVar36 == 0) {
      dVar31 = (double)CONCAT44((int)((ulonglong)dVar31 >> 0x20),DAT_8c124484);
    }
    if (bVar35 == 0) {
      dVar28 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar28,0) * SUB84(dVar31,0));
    }
    else {
      dVar28 = dVar28 * dVar31;
    }
    if (bVar36 == 0) {
      in_xd14 = (double)CONCAT44(SUB84(dVar28,0),fVar29);
    }
    if (bVar35 == 0) {
      uVar16 = SUB84(in_xd14,0);
    }
    else {
      uVar16 = SUB84(-in_xd14,0);
    }
    thunk_FUN_8c013cd8(iVar5,ar5_00,ar6_00,ar7_00);
    uVar15 = ((uint)bVar33 << 0xc | (uint)bVar34 << 0x12 | (uint)bVar35 << 0x13 |
             (uint)bVar36 << 0x14) & 0xffe7ffff;
    bVar35 = (byte)((uVar15 & 0x80000) >> 0x13);
    bVar36 = (byte)((uVar15 & 0x100000) >> 0x14);
    fVar29 = (float)((ulonglong)dVar28 >> 0x20);
    if (bVar35 == 0) {
      dVar30 = (double)CONCAT44((float)((ulonglong)dVar30 >> 0x20) + fVar29,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 + dVar28;
    }
    dVar31 = dVar28;
    if (bVar36 == 0) {
      dVar31 = (double)CONCAT44(fVar29,uVar16);
    }
    if (bVar35 == 0) {
      dVar31 = (double)CONCAT44((float)((ulonglong)dVar31 >> 0x20) /
                                (float)((ulonglong)dVar30 >> 0x20),SUB84(dVar31,0));
    }
    else {
      dVar31 = dVar31 / dVar30;
    }
  }
  else {
    dVar31 = in_xd12;
    if (bVar36 == 0) {
      dVar31 = (double)CONCAT44(SUB84(dVar21,0),fVar29);
    }
  }
  fVar17 = (float)((ulonglong)dVar31 >> 0x20);
  uVar7 = (uint)bVar35 << 0x13 | (uint)bVar36 << 0x14 | 0x80000 & 0x3fffff;
  uVar15 = (uVar7 & 0x80000) >> 0x13;
  cVar1 = (char)uVar15;
  uVar7 = (uVar7 & 0x100000) >> 0x14;
  cVar2 = (char)uVar7;
  fVar29 = _DAT_8c1244f0;
  if (cVar2 == '\0') {
    fVar29 = DAT_8c1244ec;
  }
  if (cVar1 == '\0') {
    bVar32 = (float)((ulonglong)(double)fVar17 >> 0x20) < fVar29;
  }
  else {
    bVar32 = (double)fVar17 < (double)CONCAT44(fVar29,DAT_8c1244ec);
  }
  if (bVar32) {
    if (cVar2 == '\0') {
      in_xd12 = (double)CONCAT44(SUB84(dVar21,0),SUB84(dVar31,0));
    }
  }
  else {
    if (cVar2 == '\0') {
      dVar21 = (double)CONCAT44(_DAT_8c1244f0,DAT_8c1244ec);
    }
    else {
      dVar21 = (double)CONCAT44(0xffe7ffff,_DAT_8c1244f0);
    }
    if (cVar1 == '\0') {
      bVar32 = (float)((ulonglong)dVar21 >> 0x20) < (float)((ulonglong)(double)fVar17 >> 0x20);
    }
    else {
      bVar32 = dVar21 < (double)fVar17;
    }
    in_xd12 = dVar31;
    if ((bVar32) && (in_xd12 = dVar28, cVar2 == '\0')) {
      in_xd12 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),SUB84(dVar31,0));
    }
  }
  uVar16 = SUB84((double)fVar17,0);
  iVar5 = (int)0x4a4;
  if (cVar2 == '\0') {
    *(int *)(0x4a4 + unaff_r14) = (int)((ulonglong)in_xd12 >> 0x20);
  }
  else {
    *(double *)(0x4a4 + unaff_r14) = in_xd12;
  }
  if (cVar2 == '\0') {
    uVar16 = *(undefined4 *)(iVar5 + unaff_r14);
  }
  uVar15 = (uVar15 << 0x13 | uVar7 << 0x14) & 0xffe7ffff;
  if (cVar2 == '\0') {
    dVar28 = (double)CONCAT44(*(undefined4 *)(unaff_r14 + 0x4c),uVar16);
  }
  else {
    dVar28 = *(double *)(unaff_r14 + 0x4c);
  }
  if ((char)((uVar15 & 0x80000) >> 0x13) == '\0') {
    dVar28 = (double)CONCAT44((float)((ulonglong)dVar28 >> 0x20) + SUB84(dVar28,0),SUB84(dVar28,0));
  }
  else {
    dVar28 = dVar28 + dVar28;
  }
  if ((char)(uVar15 >> 0x14) == '\0') {
    *(int *)(unaff_r14 + 0x4c) = (int)((ulonglong)dVar28 >> 0x20);
  }
  else {
    *(double *)(unaff_r14 + 0x4c) = dVar28;
  }
  return 0x4c;
}

__asm__(".globl _FUN_8c123eae\n.set _FUN_8c123eae, _FUN_8c123eae_def\n");
//@unit 8c1244f8
#include "../decls.h"
uint FUN_8c1244f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  char cVar5;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     ((*(char *)(ar4 + 0x48c) == '\0' || (*(char *)((*(int **)(ar4 + 0x10))[1] + 0x30) != '\x01'))))
  {
    ar5_00 = (*(undefined4 **)(ar4 + 0xc))[1];
    puVar1 = (undefined8 *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),ar5_00,ar6,ar7);
    if (puVar1 != (undefined8 *)0x0) {
      *(int *)(ar4 + 0x4d0) = *(int *)(ar4 + 0x4d0) + 1;
      FUN_8c123ea6(ar4,ar5_00,ar6,ar7);
      cVar5 = '\0';
      puVar2 = (undefined8 *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
      if (cVar5 == '\0') {
        *(undefined4 *)puVar2 = *(undefined4 *)(ar4 + 0x4a4);
      }
      else {
        *puVar2 = *(undefined8 *)(ar4 + 0x4a4);
      }
      if (*(char *)(ar4 + 0x48c) != '\0') {
        cVar5 = '\0';
        puVar2 = (undefined8 *)
                 FUN_8c111dfe(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),ar5_00,ar6,ar7);
        if (cVar5 == '\0') {
          *(undefined4 *)puVar2 = *(undefined4 *)(ar4 + 0x2c);
          *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)(ar4 + 0x30);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(ar4 + 0x34);
          *(undefined4 *)((int)puVar2 + 0xc) = *(undefined4 *)(ar4 + 0x3c);
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(ar4 + 0x38);
          *(undefined4 *)((int)puVar2 + 0x14) = *(undefined4 *)puVar1;
        }
        else {
          *puVar2 = *(undefined8 *)(ar4 + 0x2c);
          *(undefined8 *)((int)puVar2 + 4) = *(undefined8 *)(ar4 + 0x30);
          puVar2[1] = *(undefined8 *)(ar4 + 0x34);
          *(undefined8 *)((int)puVar2 + 0xc) = *(undefined8 *)(ar4 + 0x3c);
          puVar2[2] = *(undefined8 *)(ar4 + 0x38);
          *(undefined8 *)((int)puVar2 + 0x14) = *puVar1;
        }
      }
      if (((*(char *)(ar4 + 0x4ac) != '\0') &&
          (uVar3 = FUN_8c1238a6(ar4,ar5_00,ar6,ar7), (uVar3 & 0xff) != 0)) ||
         ((*(char *)(ar4 + 0x4d8) != '\0' &&
          (uVar3 = FUN_8c1239f0(ar4,ar5_00,ar6,ar7), (uVar3 & 0xff) != 0)))) {
        return 1;
      }
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c1244f8\n.set _FUN_8c1244f8, _FUN_8c1244f8_def\n");
//@unit 8c12462c
#include "../decls.h"
undefined4 FUN_8c12462c_def(undefined4 ar4,undefined4 ar5,uint *ar6,int *ar7,int ain0)

{
  uint uVar1;
  uint a5;
  uint *ar6_00;
  int unaff_r14;
  float fVar2;
  char in_T;
  byte in_FPSCR_DN;
  
  if (in_T == '\x01') {
    if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
      fVar2 = 100.0;
    }
    else {
      fVar2 = 0.0;
    }
    *(short *)ar6 = (short)(int)(*(float *)(unaff_r14 + 0x494) * 4.3429446 * fVar2);
  }
  else if (ain0 == 2) {
    *(undefined1 *)(unaff_r14 + 0x4bc) = 0;
    *(short *)(unaff_r14 + 0x4b8) = (short)ar6;
  }
  else if (ain0 == 3) {
    a5 = *ar6;
    ar6_00 = ar6;
    uVar1 = FUN_8c12394c(unaff_r14,a5,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    if ((uint)*(byte *)(unaff_r14 + 0x4c8) != (ar6[1] & 0xff)) {
      *(char *)(unaff_r14 + 0x4c8) = (char)ar6[1];
      if (ar6[1] == 0) {
        *(undefined2 *)(unaff_r14 + 0x4c2) = 0x1eb8;
      }
      else {
        *(undefined2 *)(unaff_r14 + 0x4c2) = 0x3333;
      }
      FUN_8c12356c(unaff_r14,a5,ar6_00,ar7);
    }
    *(uint *)(unaff_r14 + 0x4dc) = ar6[2] * 100;
  }
  else if (ain0 == 4) {
    *ar6 = (uint)*(byte *)(unaff_r14 + 0x4ac);
    ar6[1] = (uint)*(byte *)(unaff_r14 + 0x4c8);
    fVar2 = (float)*(int *)(unaff_r14 + 0x4dc);
    if (*(int *)(unaff_r14 + 0x4dc) < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = fVar2 / 100.0;
    if (2.1474836e+09 < fVar2) {
      fVar2 = fVar2 + -4.2949673e+09;
    }
    ar6[2] = (int)fVar2;
  }
  else {
    if (ain0 == 5) {
      if (ar6 == (uint *)0x0) {
        FUN_8c123e4c(unaff_r14,ar5,0,ar7);
        return 1;
      }
      FUN_8c123d00(unaff_r14,*ar7 + (int)ar6,ar6,ar7);
    }
    else {
      if (ain0 != 6) {
        if (ain0 == 7) {
          *(short *)(unaff_r14 + 0x4d4) = *(short *)(unaff_r14 + 0x4d4) + 1;
          return 1;
        }
        if (ain0 == 0xff) {
          FUN_8c120668(unaff_r14,ar5,ar6,ar7);
          return 1;
        }
        return 0;
      }
      if (ar6 != (uint *)0x0) {
        FUN_8c123bac(unaff_r14,*ar7 + (int)ar6,ar6,ar7);
      }
    }
    *ar7 = *ar7 + 0x204;
  }
  return 1;
}

__asm__(".globl _FUN_8c12462c\n.set _FUN_8c12462c, _FUN_8c12462c_def\n");
//@unit 8c1247d4
#include "../decls.h"
undefined4 FUN_8c1247d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r14;
  undefined8 in_dr0;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  char cVar9;
  
  *(undefined2 *)(**(int **)(unaff_r14 + 0x10) + 0xc) = (undefined2)ain0;
  if (*(char *)(unaff_r14 + 0x48c) != '\0') {
    *(undefined2 *)(*(int *)(*(int *)(unaff_r14 + 0x10) + 4) + 0xc) = 0x18;
  }
  iVar1 = 0;
  do {
    *(float *)(iVar1 * 4 + unaff_r14 + 0x1d8) = ((float)iVar1 * 20.5) / 149.0 + 10.5;
    iVar2 = iVar1 + 2;
    *(float *)((iVar1 + 1) * 4 + unaff_r14 + 0x1d8) = ((float)(iVar1 + 1) * 20.5) / 149.0 + 10.5;
    iVar1 = iVar1 + 3;
    fVar5 = ((float)iVar2 * 20.5) / 149.0 + 10.5;
    *(float *)(iVar2 * 4 + unaff_r14 + 0x1d8) = fVar5;
  } while (iVar1 < 0x96);
  *(int *)(unaff_r14 + 0x484) = unaff_r14 + 0x484;
  *(int *)(unaff_r14 + 0x488) = unaff_r14 + 0x434;
  uVar8 = 0;
  cVar9 = '\0';
  FUN_8c120550(unaff_r14,0x2b,ar6,ar7);
  if (cVar9 == '\0') {
    *(int *)(unaff_r14 + 0x4a8) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(undefined8 *)(unaff_r14 + 0x4a8) = in_dr0;
  }
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  *(short *)(unaff_r14 + 0x48) = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(unaff_r14,8,ar6,ar7);
  *(short *)(unaff_r14 + 0x490) = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(unaff_r14,9,ar6,ar7);
  *(short *)(unaff_r14 + 0x492) = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(unaff_r14,10,ar6,ar7);
  cVar9 = '\0';
  *(short *)(unaff_r14 + 0x48e) = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(unaff_r14,0xb,ar6,ar7);
  if (cVar9 == '\0') {
    fVar5 = 4.3429;
  }
  uVar4 = (undefined4)in_dr0;
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20) / fVar5;
  *(float *)(unaff_r14 + 0x49c) = fVar5;
  FUN_8c120550(unaff_r14,0xd,ar6,ar7);
  cVar9 = '\0';
  *(float *)(unaff_r14 + 0x498) = (float)(int)(short)(int)fVar5 * 0.002302585;
  fVar6 = 5.0;
  FUN_8c120550(unaff_r14,0x24,ar6,ar7);
  if (cVar9 == '\0') {
    fVar6 = 4.3429;
  }
  cVar9 = '\0';
  fVar5 = fVar5 / fVar6 + -1.0;
  uVar7 = CONCAT44(fVar5,uVar4);
  *(float *)(unaff_r14 + 0x4a0) = fVar5;
  FUN_8c120550(unaff_r14,0x1b,ar6,ar7);
  fVar5 = (float)((ulonglong)uVar7 >> 0x20);
  if (cVar9 == '\0') {
    *(float *)(unaff_r14 + 0x50) = fVar5;
    uVar7 = CONCAT44(*(undefined4 *)(unaff_r14 + 0x50),0x408af967);
  }
  else {
    *(undefined8 *)(unaff_r14 + 0x50) = uVar7;
    uVar7 = *(undefined8 *)(unaff_r14 + 0x50);
  }
  iVar1 = 0;
  fVar6 = (float)uVar7;
  uVar4 = 0x14;
  puVar3 = (undefined4 *)(unaff_r14 + 0x54);
  *(float *)(unaff_r14 + 0x50) =
       (float)((ulonglong)uVar7 >> 0x20) / fVar6 + *(float *)(unaff_r14 + 0x4a8);
  *(int *)(unaff_r14 + 0xa4) = unaff_r14 + 0xa4;
  do {
    *puVar3 = 0x4effffff;
    iVar1 = iVar1 + 2;
    puVar3[1] = 0x4effffff;
    puVar3 = puVar3 + 2;
  } while (iVar1 < 0x14);
  *(int *)(unaff_r14 + 0xa8) = unaff_r14 + 0x54;
  *(undefined4 *)(unaff_r14 + 0x4c) = uVar8;
  *(undefined1 *)(unaff_r14 + 0x4c9) = 0;
  cVar9 = '\0';
  FUN_8c120550(unaff_r14,0x29,0x14,ar7);
  if (cVar9 == '\0') {
    fVar6 = 100.0;
  }
  fVar5 = fVar5 / fVar6;
  *(float *)(unaff_r14 + 0x4c4) = fVar5;
  FUN_8c120550(unaff_r14,0x28,uVar4,ar7);
  if (2.1474836e+09 <= fVar5) {
    fVar5 = fVar5 - 4.2949673e+09;
  }
  *(int *)(unaff_r14 + 0x4dc) = (int)fVar5 * 100;
  *(float *)(unaff_r14 + 0x4b0) = *(float *)(unaff_r14 + 0x4a8) + -1.842068;
  *(undefined2 *)(unaff_r14 + 0x4c0) = 0;
  FUN_8c120550(unaff_r14,0x27,uVar4,ar7);
  *(char *)(unaff_r14 + 0x4c8) = (char)(int)fVar5;
  if (*(char *)(unaff_r14 + 0x4c8) == '\0') {
    *(undefined2 *)(unaff_r14 + 0x4c2) = 0x1eb8;
  }
  else {
    *(undefined2 *)(unaff_r14 + 0x4c2) = 0x3333;
  }
  FUN_8c120550(unaff_r14,0x2a,uVar4,ar7);
  *(char *)(unaff_r14 + 0x4d8) = (char)(int)fVar5;
  return 0;
}

__asm__(".globl _FUN_8c1247d4\n.set _FUN_8c1247d4, _FUN_8c1247d4_def\n");
//@unit 8c124b0c
#include "../decls.h"
int FUN_8c124b0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  float extraout_fr0;
  undefined4 uStack_10;
  char cStack_c;
  
  uStack_10 = ar4;
  cStack_c = (char)ar5;
  FUN_8c120550(&uStack_10,0x25,ar6,ar7);
  if (((int)extraout_fr0 & 0xffU) == 0) {
    ar7_00 = 1;
  }
  else {
    ar7_00 = 2;
  }
  iVar1 = FUN_8c120580(ar4,(int)(char)ar5,1,ar7_00,FUN_8c1244f8,&LAB_8c1247cc,&LAB_8c124620,0x4e0);
  *(char *)(iVar1 + 0x48c) = (char)(int)extraout_fr0;
  return iVar1;
}

__asm__(".globl _FUN_8c124b0c\n.set _FUN_8c124b0c, _FUN_8c124b0c_def\n");
//@unit 8c124ba0
#include "../decls.h"
uint FUN_8c124ba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  unaff_r14[10] = unaff_r14[3];
  unaff_r14[0xb] = *(int *)unaff_r14[4];
  iVar1 = (**(code **)(*unaff_r14 + 0x10))
                    (*unaff_r14,(uint)*(ushort *)(*(int *)unaff_r14[10] + 0xc) << 1,ar6,ar7);
  unaff_r14[0xe] = iVar1;
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c124ba0\n.set _FUN_8c124ba0, _FUN_8c124ba0_def\n");
//@unit 8c124bd0
#include "../decls.h"
undefined4 FUN_8c124bd0_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  
  iVar7 = *ar4;
  uVar3 = (**(code **)(ar5 + 8))(ar5);
  FUN_8c124f2a(iVar7,ar4,ar6,ar7);
  iVar7 = (**(code **)(iVar7 + 0x10))(iVar7,uVar3 * 0x14);
  ar4[0xc] = iVar7;
  if (iVar7 == 0) {
    uVar4 = FUN_8c1204c4(ar4,2);
    return uVar4;
  }
  uVar6 = 0;
  *(short *)(ar4 + 0xd) = (short)uVar3;
  puVar8 = (undefined1 *)(uint)ar4[0xc];
  if (uVar3 != 0) {
    do {
      uVar4 = (**(code **)(0x84 + ar5))(ar5,uVar6);
      uVar1 = (**(code **)(ar5 + 0x54))(uVar4);
      *puVar8 = uVar1;
      uVar1 = (**(code **)(ar5 + 0x58))(uVar4);
      puVar8[1] = uVar1;
      uVar1 = (**(code **)(ar5 + 0x5c))(uVar4);
      puVar8[2] = uVar1;
      uVar1 = (**(code **)(ar5 + 0x60))(uVar4);
      puVar8[3] = uVar1;
      uVar2 = (**(code **)(ar5 + 100))(uVar4);
      *(ushort *)(puVar8 + 4) = uVar2 & 0xff;
      uVar5 = (**(code **)(0xb4 + ar5))(uVar4);
      *(undefined4 *)(puVar8 + 8) = uVar5;
      uVar5 = (**(code **)(0xb8 + ar5))(uVar4);
      *(undefined4 *)(puVar8 + 0xc) = uVar5;
      uVar4 = (**(code **)(0xbc + ar5))(uVar4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(puVar8 + 0x10) = uVar4;
      puVar8 = puVar8 + 0x14;
    } while (uVar6 < uVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd0\n.set _FUN_8c124bd0, _FUN_8c124bd0_def\n");
//@unit 8c124bd8
#include "../decls.h"
undefined4 FUN_8c124bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint a5;
  uint a5_00;
  int iVar4;
  int *unaff_r13;
  undefined1 *puVar5;
  int unaff_r14;
  
  iVar4 = *unaff_r13;
  uVar1 = (**(code **)(unaff_r14 + 8))(ar5,ar5,ar6,ar7);
  FUN_8c124f2a(iVar4,unaff_r13,ar6,ar7);
  iVar4 = (**(code **)(iVar4 + 0x10))(iVar4,uVar1 * 0x14,ar6,ar7);
  unaff_r13[0xc] = iVar4;
  if (iVar4 == 0) {
    uVar2 = FUN_8c1204c4(2);
    return uVar2;
  }
  a5_00 = 0;
  *(short *)(unaff_r13 + 0xd) = (short)uVar1;
  puVar5 = (undefined1 *)unaff_r13[0xc];
  if (uVar1 != 0) {
    do {
      a5 = a5_00;
      uVar2 = (**(code **)(0x84 + unaff_r14))(unaff_r14,a5_00,ar6,ar7);
      uVar3 = (**(code **)(unaff_r14 + 0x54))(uVar2,a5,ar6,ar7);
      *puVar5 = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x58))(uVar2,a5,ar6,ar7);
      puVar5[1] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x5c))(uVar2,a5,ar6,ar7);
      puVar5[2] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 0x60))(uVar2,a5,ar6,ar7);
      puVar5[3] = (char)uVar3;
      uVar3 = (**(code **)(unaff_r14 + 100))(uVar2,a5,ar6,ar7);
      *(ushort *)(puVar5 + 4) = (ushort)uVar3 & 0xff;
      uVar3 = (**(code **)(0xb4 + unaff_r14))(uVar2,a5,ar6,ar7);
      *(undefined4 *)(puVar5 + 8) = uVar3;
      uVar3 = (**(code **)(0xb8 + unaff_r14))(uVar2,a5,ar6,ar7);
      *(undefined4 *)(puVar5 + 0xc) = uVar3;
      uVar2 = (**(code **)(0xbc + unaff_r14))(uVar2,a5,ar6,ar7);
      a5_00 = a5_00 + 1;
      *(undefined4 *)(puVar5 + 0x10) = uVar2;
      puVar5 = puVar5 + 0x14;
    } while (a5_00 < uVar1);
  }
  return 0;
}

__asm__(".globl _FUN_8c124bd8\n.set _FUN_8c124bd8, _FUN_8c124bd8_def\n");
//@unit 8c124d10
#include "../decls.h"
float FUN_8c124d10_def(byte *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  fVar7 = 0.0;
  fVar3 = 0.0;
  uVar10 = 0x7f7fffff7f7fffff;
  if (ar4[1] != 0) {
    do {
      iVar2 = 1;
      pfVar1 = (float *)((int)fVar3 * (uint)*ar4 * 4 + *(int *)(ar4 + 8));
      fVar9 = (*ar5 - *pfVar1) * (*ar5 - *pfVar1);
      fVar8 = (float)((ulonglong)uVar10 >> 0x20);
      pfVar5 = ar5;
      if (1 < *ar4) {
        do {
          pfVar5 = pfVar5 + 1;
          pfVar1 = pfVar1 + 1;
          fVar9 = (*pfVar5 - *pfVar1) * (*pfVar5 - *pfVar1) + fVar9;
          if (fVar8 < fVar9) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)*ar4);
      }
      if (fVar9 < fVar8) {
        uVar10 = CONCAT44(fVar9,(int)uVar10);
        fVar7 = fVar3;
      }
      fVar3 = (float)((int)fVar3 + 1);
    } while ((int)fVar3 < (int)(uint)ar4[1]);
  }
  fVar3 = (float)uVar10;
  piVar6 = (int *)((uint)ar4[2] * ((uint)fVar7 & 0xff) * 4 + *(int *)(ar4 + 0xc));
  iVar2 = 0;
  if (ar4[2] != 0) {
    do {
      iVar4 = *piVar6;
      piVar6 = piVar6 + 1;
      pfVar5 = (float *)(iVar4 * 4 + *(int *)(ar4 + 0x10));
      iVar4 = 1;
      pfVar1 = pfVar5 + 1;
      fVar9 = *ar5 - *pfVar5;
      fVar9 = fVar9 * fVar9;
      pfVar5 = ar5;
      if (1 < *ar4) {
        do {
          pfVar5 = pfVar5 + 1;
          fVar8 = *pfVar1;
          pfVar1 = pfVar1 + 1;
          fVar9 = (*pfVar5 - fVar8) * (*pfVar5 - fVar8) + fVar9;
          if (fVar3 < fVar9) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*ar4);
      }
      iVar2 = iVar2 + 1;
      if (fVar9 < fVar3) {
        fVar7 = *pfVar1;
        fVar3 = fVar9;
      }
    } while (iVar2 < (int)(uint)ar4[2]);
  }
  return fVar7;
}

__asm__(".globl _FUN_8c124d10\n.set _FUN_8c124d10, _FUN_8c124d10_def\n");
//@unit 8c124e28
#include "../decls.h"
uint FUN_8c124e28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int a4;
  
  if (*(char *)(*(int *)(ar4 + 0x2c) + 0x30) == '\0') {
    uVar3 = (*(undefined4 **)(ar4 + 0x28))[1];
    iVar1 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0x28),uVar3,ar6,ar7);
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)FUN_8c111dfe(*(undefined4 *)(ar4 + 0x2c),uVar3,ar6,ar7);
      a4 = *(int *)(ar4 + 0x30);
      iVar4 = 0;
      if (*(short *)(ar4 + 0x34) != 0) {
        do {
          uVar3 = FUN_8c124d10(a4,(uint)*(ushort *)(a4 + 4) * 4 + iVar1,ar6,ar7);
          *puVar2 = (char)uVar3;
          iVar4 = iVar4 + 1;
          a4 = a4 + 0x14;
          puVar2 = puVar2 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(ar4 + 0x34));
      }
    }
  }
  iVar1 = **(int **)(ar4 + 0x28);
  return *(int *)((*(int **)(ar4 + 0x28))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124e28\n.set _FUN_8c124e28, _FUN_8c124e28_def\n");
//@unit 8c124edc
#include "../decls.h"
undefined4 FUN_8c124edc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((ar5 & 0xff) == 1) {
    uVar1 = FUN_8c124bd0(ar4,ar6,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      *(undefined **)(ar4 + 0x18) = (&FUN_8c124e28);
    }
    else {
      *(undefined **)(ar4 + 0x18) = (&DATA_8c124e24);
    }
  }
  else {
    if ((ar5 & 0xff) != (int)0xff) {
      return 0;
    }
    FUN_8c124f54(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c124edc\n.set _FUN_8c124edc, _FUN_8c124edc_def\n");
//@unit 8c124f2a
#include "../decls.h"
undefined4 FUN_8c124f2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(short *)(ar5 + 0x34) != 0) {
    (**(code **)(ar4 + 0x18))(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
    *(undefined2 *)(ar5 + 0x34) = 0;
  }
  return 0x34;
}

__asm__(".globl _FUN_8c124f2a\n.set _FUN_8c124f2a, _FUN_8c124f2a_def\n");
//@unit 8c124f54
#include "../decls.h"
undefined4 FUN_8c124f54_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = *ar4;
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[3]);
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[4]);
  (**(code **)(ar4_00 + 0x18))(ar4_00,ar4[0xe]);
  FUN_8c124f2a(ar4_00,ar4,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(ar4_00 + 0x18))(ar4_00,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c124f54\n.set _FUN_8c124f54, _FUN_8c124f54_def\n");
//@unit 8c124f5a
#include "../decls.h"
undefined4 FUN_8c124f5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,unaff_r13[3],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[4],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0xe],ar6,ar7);
  FUN_8c124f2a(a4,unaff_r13,ar6,ar7);
                    
                    
  uVar1 = (**(code **)(a4 + 0x18))(a4);
  return uVar1;
}

__asm__(".globl _FUN_8c124f5a\n.set _FUN_8c124f5a, _FUN_8c124f5a_def\n");
//@unit 8c124faa
#include "../decls.h"
undefined4 FUN_8c124faa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&DATA_8c124e24),(&DATA_8c124b9c),(&FUN_8c124edc),0x40);
  return uVar1;
}

__asm__(".globl _FUN_8c124faa\n.set _FUN_8c124faa, _FUN_8c124faa_def\n");
//@unit 8c124fe8
#include "../decls.h"
uint FUN_8c124fe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  undefined8 in_dr4;
  float fVar9;
  char cVar10;
  short *psStack_1c;
  
  cVar10 = '\0';
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (psStack_1c = (short *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),
                                         *(undefined4 *)(*(int *)(ar4 + 0xc) + 4),ar6,ar7),
     psStack_1c != (short *)0x0)) {
    pfVar7 = *(float **)(ar4 + 0x2c);
    puVar6 = *(undefined8 **)(ar4 + 0x44);
    uVar1 = *(ushort *)(ar4 + 0x36);
    if (cVar10 == '\0') {
      in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(ar4 + 0x3c));
    }
    uVar5 = (uint)uVar1;
    iVar4 = 0;
    if (uVar5 != 0) {
      do {
        iVar4 = iVar4 + 1;
        cVar10 = '\0';
        fVar9 = (float)(int)*psStack_1c;
        *pfVar7 = fVar9 - (float)in_dr4;
        pfVar7 = pfVar7 + 1;
        in_dr4 = CONCAT44(fVar9,fVar9);
        psStack_1c = psStack_1c + 1;
      } while (iVar4 < (int)uVar5);
    }
    if (cVar10 == '\0') {
      *(int *)(ar4 + 0x3c) = (int)((ulonglong)in_dr4 >> 0x20);
    }
    else {
      *(undefined8 *)(ar4 + 0x3c) = in_dr4;
    }
    if (pfVar7 == *(float **)(ar4 + 0x30)) {
      pfVar7 = *(float **)(ar4 + 0x28);
    }
    iVar4 = (uint)uVar1 * 4;
    if (*(char *)(ar4 + 0x40) == '\0') {
      cVar10 = '\0';
      pfVar2 = (float *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),(int)(short)uVar1,ar6,ar7);
      *(float **)(ar4 + 0x2c) = pfVar7;
      puVar3 = (undefined8 *)((uint)*(ushort *)(ar4 + 0x38) * 4 + (int)puVar6);
      pfVar7 = pfVar7 + (uVar5 - *(ushort *)(ar4 + 0x38));
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      puVar3 = (undefined8 *)(iVar4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      puVar3 = (undefined8 *)((uint)*(ushort *)(ar4 + 0x38) * 4 + (int)puVar6);
      while (puVar6 < puVar3) {
        if (cVar10 == '\0') {
          fVar9 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          uVar8 = CONCAT44(*(undefined4 *)puVar6,fVar9);
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
        else {
          pfVar7 = pfVar7 + 2;
          uVar8 = *puVar6;
          puVar6 = puVar6 + 1;
        }
        cVar10 = '\0';
        *pfVar2 = (float)((ulonglong)uVar8 >> 0x20) * (float)uVar8;
        pfVar2 = pfVar2 + 1;
      }
    }
    else {
      puVar6 = *(undefined8 **)(ar4 + 0x2c);
      if (cVar10 == '\0') {
        *(undefined4 *)puVar6 = 0;
      }
      else {
        *puVar6 = 0x8c013ef400000000;
      }
      memmove(pfVar7,puVar6,iVar4,ar7);
      pfVar7 = pfVar7 + uVar1;
      if (pfVar7 == *(float **)(ar4 + 0x30)) {
        pfVar7 = *(float **)(ar4 + 0x28);
      }
      *(undefined1 *)(ar4 + 0x40) = 0;
      *(float **)(ar4 + 0x2c) = pfVar7;
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c124fe8\n.set _FUN_8c124fe8, _FUN_8c124fe8_def\n");
//@unit 8c12516c
#include "../decls.h"
undefined4 FUN_8c12516c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((char)ar5 == '\x01') {
    ar4[0xf] = 0;
    *(undefined1 *)(ar4 + 0x10) = 1;
  }
  else {
    if ((char)ar5 != -1) {
      return 0;
    }
    (**(code **)(*ar4 + 0x18))(*ar4,ar4[10],ar6,ar7);
    a5 = ar4[0x11];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c12516c\n.set _FUN_8c12516c, _FUN_8c12516c_def\n");
//@unit 8c1251e4
#include "../decls.h"
undefined4 FUN_8c1251e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  int a4;
  int *unaff_r14;
  undefined8 in_dr0;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  a4 = *unaff_r14;
  FUN_8c120550(ar4,1,ar6,ar7);
  uVar7 = (uint)fVar5;
  *(short *)((int)unaff_r14 + 0x36) = (short)uVar7;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  uVar8 = (uint)fVar5;
  uVar4 = uVar8 & 0xffff;
  *(short *)(unaff_r14 + 0xd) = (short)uVar8;
  iVar3 = uVar4 - (uVar7 & 0xffff);
  *(short *)(unaff_r14 + 0xe) = (short)((int)(iVar3 + (uint)(iVar3 < 0)) >> 1);
  if (((uVar7 & 0xffff) <= uVar4) && (uVar4 <= (uVar7 & 0xffff) * 3)) {
    *(short *)(*(int *)unaff_r14[4] + 0xc) = (short)(uVar8 << 2);
    *(undefined2 *)((int)unaff_r14 + 0x3a) = 3;
    iVar3 = (**(code **)(a4 + 0x14))(a4,(uint)*(ushort *)((int)unaff_r14 + 0x36) * 3,4,ar7);
    unaff_r14[10] = iVar3;
    a6 = 4;
    uVar8 = uVar8 & 0xffff;
    cVar9 = '\0';
    iVar3 = (**(code **)(a4 + 0x14))(a4,uVar8,4,ar7);
    unaff_r14[0x11] = iVar3;
    if ((unaff_r14[10] != 0) && (unaff_r14[0x11] != 0)) {
      unaff_r14[0xb] = unaff_r14[10];
      unaff_r14[0xc] = (uVar7 & 0xffff) * 0xc + unaff_r14[10];
      iVar3 = 0;
      if (cVar9 == '\0') {
        uVar6 = 0x3f0a3d703eeb851e;
      }
      else {
        uVar6 = 0x3eeb851e3f0a3d70;
      }
      if (uVar4 != 0) {
        do {
          iVar1 = unaff_r14[0x11];
          iVar2 = iVar3 * 4;
          fVar5 = (float)((ulonglong)(double)(int)(uVar4 - 1) >> 0x20);
          thunk_FUN_8c013c88(a4,uVar8,a6,ar7);
          iVar3 = iVar3 + 1;
          cVar9 = '\0';
          *(float *)(iVar1 + iVar2) = -(fVar5 * (float)uVar6) + (float)((ulonglong)uVar6 >> 0x20);
        } while (iVar3 < (int)uVar4);
      }
      if (cVar9 == '\0') {
        unaff_r14[0xf] = 0;
      }
      else {
        unaff_r14[0xf] = 0;
        unaff_r14[0x10] = -0x73edae94;
      }
      *(undefined1 *)(unaff_r14 + 0x10) = 1;
      return 0;
    }
    FUN_8c1204c4(unaff_r14,2,a6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1251e4\n.set _FUN_8c1251e4, _FUN_8c1251e4_def\n");
//@unit 8c12538e
#include "../decls.h"
undefined4 FUN_8c12538e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c124fe8),(&DATA_8c1251dc),(&FUN_8c12516c),0x48);
  return uVar1;
}

__asm__(".globl _FUN_8c12538e\n.set _FUN_8c12538e, _FUN_8c12538e_def\n");
