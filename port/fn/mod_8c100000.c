//@unit 8c100030
#include "../decls.h"
undefined4 get_field_a528_100030_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa528 + ar4);
}

__asm__(".globl _get_field_a528_100030\n.set _get_field_a528_100030, _get_field_a528_100030_def\n");
//@unit 8c10003c
#include "../decls.h"
undefined4 FUN_8c10003c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ed88(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_8c01ee54(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
       iVar1 == 0)) &&
      (iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) &&
     ((iVar1 = (*(code *)(&input_is_mask_set_200_01eff8))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0 &&
      (iVar1 = FUN_8c01eb50(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10003c\n.set _FUN_8c10003c, _FUN_8c10003c_def\n");
//@unit 8c1000c8
#include "../decls.h"
undefined4 FUN_8c1000c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01eb94(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((((iVar1 == 1) &&
       (iVar1 = FUN_8c01ed88(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
       iVar1 == 0)) &&
      (iVar1 = FUN_8c01ee54(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
      iVar1 == 0)) &&
     ((iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0 &&
      (iVar1 = (*(code *)(&input_is_mask_set_200_01eff8))
                         (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1000c8\n.set _FUN_8c1000c8, _FUN_8c1000c8_def\n");
//@unit 8c100154
#include "../decls.h"
undefined4 FUN_8c100154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c01ec20(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) &&
       (uVar2 = FUN_8c1001d4(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
       (ushort)uVar2 < 0x1e)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_8c01ec20(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100154\n.set _FUN_8c100154, _FUN_8c100154_def\n");
//@unit 8c1001d4
#include "../decls.h"
int FUN_8c1001d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(0xa546 + ar4);
}

__asm__(".globl _FUN_8c1001d4\n.set _FUN_8c1001d4, _FUN_8c1001d4_def\n");
//@unit 8c1001e0
#include "../decls.h"
undefined4 FUN_8c1001e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ef68(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_8c01ecb0(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1001e0\n.set _FUN_8c1001e0, _FUN_8c1001e0_def\n");
//@unit 8c10022c
#include "../decls.h"
undefined4 FUN_8c10022c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c01ecf8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = (*(code *)(&input_is_mask_set_20000_01ebd8))
                      (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
      if ((iVar1 == 0) && (*(int *)(0x188 + ar4) != 3)) {
        FUN_8c0c51a0(ar4,1,ar6,ar7);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10022c\n.set _FUN_8c10022c, _FUN_8c10022c_def\n");
//@unit 8c1002a8
#include "../decls.h"
undefined4 FUN_8c1002a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
  if (iVar1 == 1) {
    iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,0);
      FUN_8c0c51a0(ar4,2,ar6,ar7);
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1002a8\n.set _FUN_8c1002a8, _FUN_8c1002a8_def\n");
//@unit 8c10031c
#include "../decls.h"
undefined4 FUN_8c10031c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = input_is_mask_set_10000_01ec68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(ar4 + 0x188) == 2)) {
      FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,1);
      FUN_8c0c51a0(ar4,3,ar6,ar7);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10031c\n.set _FUN_8c10031c, _FUN_8c10031c_def\n");
//@unit 8c1003b0
#include "../decls.h"
int FUN_8c1003b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(undefined4 *)0x8c441430 == '\0') {
    *(undefined4 *)0x8c44142c = 0;
    *(undefined4 *)0x8c441430 = '\x01';
  }
  iVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                      (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if ((iVar1 == 1) && (*(int *)(0x188 + ar4) == 2)) {
      iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                        (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)0x8c44142c = 0;
      }
      else {
        *(undefined4 *)0x8c44142c = 1;
      }
    }
    if ((*(undefined4 *)0x8c44142c == 1) &&
       (iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                          (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *(undefined4 *)0x8c44142c = 0;
      FUN_8c0c51a0(ar4,2,ar6,ar7);
    }
    else if ((*(undefined4 *)0x8c44142c == 1) &&
            (iVar1 = (*(code *)(&input_is_mask_set_400_01ef20))
                               (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7), iVar1 == 0)) {
      *(undefined4 *)0x8c44142c = 0;
      FUN_8c0c51a0(ar4,0,ar6,ar7);
    }
    return *(undefined4 *)0x8c44142c;
  }
  *(undefined4 *)0x8c44142c = 0;
  return 0;
}

__asm__(".globl _FUN_8c1003b0\n.set _FUN_8c1003b0, _FUN_8c1003b0_def\n");
//@unit 8c1004b4
#include "../decls.h"
undefined4 * FUN_8c1004b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x188) == 6) {
    FUN_8c0c51a0(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x140),*(undefined4 *)(ar4 + 0x130));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x130);
    dVar2 = *(double *)(ar4 + 0x140);
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x130) = fVar1;
    fVar1 = *(float *)(ar4 + 0x130);
    fVar3 = 50.0;
  }
  else {
    *(undefined8 *)(ar4 + 0x130) = in_xd0;
    fVar1 = 50.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar1 <= fVar3) {
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x130) = 0x42480000;
    }
    else {
      *(undefined8 *)(ar4 + 0x130) = 0x4f222fe642480000;
    }
  }
  return &DAT_8c100528;
}

__asm__(".globl _FUN_8c1004b4\n.set _FUN_8c1004b4, _FUN_8c1004b4_def\n");
//@unit 8c10052c
#include "../decls.h"
undefined4 * FUN_8c10052c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x188) == 6) {
    FUN_8c0c51a0(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x140),*(undefined4 *)(ar4 + 0x130));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x130);
    dVar2 = *(double *)(ar4 + 0x140);
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 0x130) = fVar1;
    fVar1 = *(float *)(ar4 + 0x130);
    fVar3 = 430.0;
  }
  else {
    *(undefined8 *)(ar4 + 0x130) = in_xd0;
    fVar1 = 430.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x130) = 0x43d70000;
    }
    else {
      *(undefined8 *)(ar4 + 0x130) = 0x4f222fe643d70000;
    }
  }
  return &DAT_8c1005a0;
}

__asm__(".globl _FUN_8c10052c\n.set _FUN_8c10052c, _FUN_8c10052c_def\n");
//@unit 8c1005a4
#include "../decls.h"
undefined4 * FUN_8c1005a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x188) == 6) {
    FUN_8c0c51a0(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x13c),*(undefined4 *)(ar4 + 300));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 300);
    dVar2 = *(double *)(ar4 + 0x13c);
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 300) = fVar1;
    fVar1 = *(float *)(ar4 + 300);
    fVar3 = 615.0;
  }
  else {
    *(undefined8 *)(ar4 + 300) = in_xd0;
    fVar1 = 615.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 300) = 0x4419c000;
    }
    else {
      *(undefined8 *)(ar4 + 300) = 0x4f222fe64419c000;
    }
  }
  return &DAT_8c100618;
}

__asm__(".globl _FUN_8c1005a4\n.set _FUN_8c1005a4, _FUN_8c1005a4_def\n");
//@unit 8c10061c
#include "../decls.h"
undefined4 * FUN_8c10061c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(ar4 + 0x188) == 6) {
    FUN_8c0c51a0(ar4,0,ar6,ar7);
  }
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x13c),*(undefined4 *)(ar4 + 300));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 300);
    dVar2 = *(double *)(ar4 + 0x13c);
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) + (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(ar4 + 300) = fVar1;
    fVar1 = *(float *)(ar4 + 300);
    fVar3 = 25.0;
  }
  else {
    *(undefined8 *)(ar4 + 300) = in_xd0;
    fVar1 = 25.0;
    fVar3 = NAN;
  }
  if (cVar4 != '\0' || fVar1 <= fVar3) {
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 300) = 0x41c80000;
    }
    else {
      *(undefined8 *)(ar4 + 300) = 0x7ffc4f2241c80000;
    }
  }
  return &DAT_8c100690;
}

__asm__(".globl _FUN_8c10061c\n.set _FUN_8c10061c, _FUN_8c10061c_def\n");
//@unit 8c100694
#include "../decls.h"
undefined4 FUN_8c100694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c015cd4(ar4 + 0x15c,u____8c1421cc,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c100694\n.set _FUN_8c100694, _FUN_8c100694_def\n");
//@unit 8c1006bc
#include "../decls.h"
undefined4 FUN_8c1006bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c10168c(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1006bc\n.set _FUN_8c1006bc, _FUN_8c1006bc_def\n");
//@unit 8c1006d8
#include "../decls.h"
undefined4 FUN_8c1006d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(ar4 + 0x140)) ||
     (iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1006d8\n.set _FUN_8c1006d8, _FUN_8c1006d8_def\n");
//@unit 8c100724
#include "../decls.h"
undefined4 FUN_8c100724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x140) <= 0.3) ||
     (iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100724\n.set _FUN_8c100724, _FUN_8c100724_def\n");
//@unit 8c100770
#include "../decls.h"
undefined4 FUN_8c100770_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x13c) <= 0.3) ||
     (iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100770\n.set _FUN_8c100770, _FUN_8c100770_def\n");
//@unit 8c1007bc
#include "../decls.h"
undefined4 FUN_8c1007bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(ar4 + 0x13c)) ||
     (iVar1 = input_is_mask_set_400_01ef20(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1007bc\n.set _FUN_8c1007bc, _FUN_8c1007bc_def\n");
//@unit 8c100808
#include "../decls.h"
undefined4 FUN_8c100808_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (-0.5 <= *(float *)(ar4 + 0x140)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100808\n.set _FUN_8c100808, _FUN_8c100808_def\n");
//@unit 8c10082c
#include "../decls.h"
undefined4 FUN_8c10082c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x140) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10082c\n.set _FUN_8c10082c, _FUN_8c10082c_def\n");
//@unit 8c100850
#include "../decls.h"
undefined4 FUN_8c100850_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x13c) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100850\n.set _FUN_8c100850, _FUN_8c100850_def\n");
//@unit 8c100874
#include "../decls.h"
undefined4 FUN_8c100874_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (-0.5 <= *(float *)(ar4 + 0x13c)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100874\n.set _FUN_8c100874, _FUN_8c100874_def\n");
//@unit 8c100898
#include "../decls.h"
undefined4 FUN_8c100898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x140) < -0.3) ||
     (iVar1 = input_is_mask_set_10_01f2b4(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100898\n.set _FUN_8c100898, _FUN_8c100898_def\n");
//@unit 8c1008e4
#include "../decls.h"
undefined4 FUN_8c1008e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((0.3 < *(float *)(ar4 + 0x140)) ||
     (iVar1 = input_is_mask_set_20_01f22c(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1008e4\n.set _FUN_8c1008e4, _FUN_8c1008e4_def\n");
//@unit 8c100930
#include "../decls.h"
undefined4 FUN_8c100930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((0.3 < *(float *)(ar4 + 0x13c)) ||
     (iVar1 = input_is_mask_set_80_01f088(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100930\n.set _FUN_8c100930, _FUN_8c100930_def\n");
//@unit 8c10097c
#include "../decls.h"
undefined4 FUN_8c10097c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x13c) < -0.3) ||
     (iVar1 = input_is_mask_set_40_01f160(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10097c\n.set _FUN_8c10097c, _FUN_8c10097c_def\n");
//@unit 8c1009c8
#include "../decls.h"
undefined4 FUN_8c1009c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x150) <= -0.3) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1009c8\n.set _FUN_8c1009c8, _FUN_8c1009c8_def\n");
//@unit 8c1009ec
#include "../decls.h"
undefined4 FUN_8c1009ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0.3 <= *(float *)(ar4 + 0x150)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1009ec\n.set _FUN_8c1009ec, _FUN_8c1009ec_def\n");
//@unit 8c100a10
#include "../decls.h"
undefined4 FUN_8c100a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0.3 <= *(float *)(ar4 + 0x14c)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a10\n.set _FUN_8c100a10, _FUN_8c100a10_def\n");
//@unit 8c100a34
#include "../decls.h"
undefined4 FUN_8c100a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 0x14c) <= -0.3) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a34\n.set _FUN_8c100a34, _FUN_8c100a34_def\n");
//@unit 8c100a58
#include "../decls.h"
undefined4 FUN_8c100a58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((-0.4 <= *(float *)(ar4 + 0x140)) ||
      (iVar1 = FUN_8c01ee54(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100a58\n.set _FUN_8c100a58, _FUN_8c100a58_def\n");
//@unit 8c100abc
#include "../decls.h"
undefined4 FUN_8c100abc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(float *)(ar4 + 0x140) <= 0.4) ||
      (iVar1 = FUN_8c01ee54(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100abc\n.set _FUN_8c100abc, _FUN_8c100abc_def\n");
//@unit 8c100b20
#include "../decls.h"
undefined4 FUN_8c100b20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((-0.3 <= *(float *)(ar4 + 0x140)) ||
      (iVar1 = FUN_8c01ee98(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100b20\n.set _FUN_8c100b20, _FUN_8c100b20_def\n");
//@unit 8c100b84
#include "../decls.h"
undefined4 FUN_8c100b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(float *)(ar4 + 0x140) <= 0.3) ||
      (iVar1 = FUN_8c01ee98(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100b84\n.set _FUN_8c100b84, _FUN_8c100b84_def\n");
//@unit 8c100be8
#include "../decls.h"
undefined4 FUN_8c100be8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x13c) <= 0.3) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100be8\n.set _FUN_8c100be8, _FUN_8c100be8_def\n");
//@unit 8c100c34
#include "../decls.h"
undefined4 FUN_8c100c34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(ar4 + 0x13c)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100c34\n.set _FUN_8c100c34, _FUN_8c100c34_def\n");
//@unit 8c100c80
#include "../decls.h"
uint FUN_8c100c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01f56c(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}

__asm__(".globl _FUN_8c100c80\n.set _FUN_8c100c80, _FUN_8c100c80_def\n");
//@unit 8c100cb4
#include "../decls.h"
uint FUN_8c100cb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01f544(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  return (uint)(iVar1 == 1);
}

__asm__(".globl _FUN_8c100cb4\n.set _FUN_8c100cb4, _FUN_8c100cb4_def\n");
//@unit 8c100ce8
#include "../decls.h"
undefined4 FUN_8c100ce8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&input_is_mask_set_10000_01ec68))
                    (*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c101358(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(0x594 + ar4) = 0xf;
    }
    *(int *)(0x594 + ar4) = *(int *)(0x594 + ar4) + -1;
    if (0 < *(int *)(0x594 + ar4)) {
      return 1;
    }
  }
  *(undefined4 *)(0x594 + ar4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c100ce8\n.set _FUN_8c100ce8, _FUN_8c100ce8_def\n");
//@unit 8c100d5c
#include "../decls.h"
undefined4 FUN_8c100d5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(int *)(0x590 + ar4) == 0) {
    iVar1 = FUN_8c101510(ar4,5,ar6,ar7);
    if (((iVar1 == 1) || (iVar1 = FUN_8c101510(ar4,10,ar6,ar7), iVar1 == 1)) ||
       (iVar1 = FUN_8c101510(ar4,0xf,ar6,ar7), iVar1 == 1)) {
      *(undefined4 *)(0x590 + ar4) = 1;
    }
  }
  else {
    if ((((*(char *)(0x190 + ar4 + (uint)*(byte *)(0x598 + ar4) * 4) != '\0') ||
         (*(char *)(0x190 + ar4 + (*(byte *)(0x598 + ar4) - 1) * 4) != '\0')) ||
        (*(char *)(0x191 + ar4 + (uint)*(byte *)(0x598 + ar4) * 4) != '\0')) ||
       (*(char *)(0x191 + ar4 + (*(byte *)(0x598 + ar4) - 1) * 4) != '\0')) {
      return 1;
    }
    *(undefined4 *)(0x590 + ar4) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c100d5c\n.set _FUN_8c100d5c, _FUN_8c100d5c_def\n");
//@unit 8c100e4c
#include "../decls.h"
undefined4 FUN_8c100e4c_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *ar5_00;
  byte bVar3;
  undefined4 in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)ar5 = 0;
  ar5_00 = ar5;
  iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x59c) = 0;
    uVar2 = 0;
  }
  else {
    if ((9 < *(int *)(ar4 + 0x59c)) &&
       (*(int *)(ar4 + 0x59c) = *(int *)(ar4 + 0x59c) + 1, 0x27 < *(int *)(ar4 + 0x59c))) {
      *(undefined4 *)(ar4 + 0x59c) = 0;
    }
    iVar1 = FUN_8c01ed40(0x8c3dd7dc,ar5_00,ar6,ar7);
    if ((iVar1 == 1) ||
       (iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7), iVar1 == 1)) {
      if (*(int *)(ar4 + 0x59c) < 2) {
        *(undefined4 *)(ar4 + 0x59c) = 0;
        uVar2 = 0;
      }
      else {
        if (*(int *)(ar4 + 0x59c) == 2) {
          if (cVar4 == '\0') {
            *(undefined4 *)ar5 = 0x3f000000;
          }
          else {
            *ar5 = 0x3f3333333f000000;
          }
        }
        else if (*(int *)(ar4 + 0x59c) == 3) {
          if (cVar4 == '\0') {
            *(undefined4 *)ar5 = 0x3f333333;
          }
          else {
            *ar5 = 0x8c0c51a03f333333;
          }
        }
        else if (cVar4 == '\0') {
          *(undefined4 *)ar5 = 0x3f800000;
        }
        else {
          *ar5 = CONCAT44(0x3f800000,in_fr1);
        }
        FUN_8c0c51a0(ar4,5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x59c) = 10;
        uVar2 = 2;
      }
    }
    else {
      iVar1 = FUN_8c01ecf8(0x8c3dd7dc,ar5_00,ar6,ar7);
      if ((iVar1 == 1) &&
         (iVar1 = input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7), iVar1 != 1)) {
        *(undefined4 *)(ar4 + 0x59c) = 1;
        uVar2 = 0;
      }
      else if (*(int *)(ar4 + 0x59c) < 1) {
        uVar2 = 0;
      }
      else {
        for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
          if (*(char *)(ar4 + (uint)(byte)(*(char *)(ar4 + 0x598) - bVar3) * 4 + 0x193) == '\0') {
            if (bVar3 < 0x3c) {
              return 0;
            }
            if (0x3b < bVar3) {
              FUN_8c0c51a0(ar4,4,ar6,ar7);
              *(undefined4 *)(ar4 + 0x59c) = 2;
            }
            if (0x59 < bVar3) {
              *(undefined4 *)(ar4 + 0x59c) = 3;
            }
            return 1;
          }
        }
        *(undefined4 *)(ar4 + 0x59c) = 4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100e4c\n.set _FUN_8c100e4c, _FUN_8c100e4c_def\n");
//@unit 8c101004
#include "../decls.h"
int FUN_8c101004_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(int *)(0x88 + ar4) != -1) {
      ar5 = *(undefined4 *)(0x88 + ar4);
      iVar2 = FUN_8c021f18(0x8c2b59d0,ar5,ar6,ar7);
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(undefined4 *)(0x88 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = FUN_8c01ecf8(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
  if (iVar2 == 1) {
    iVar2 = FUN_8c01ef68(*(undefined4 *)(0xcc + ar4),ar5,ar6,ar7);
    if (iVar2 == 1) {
      FUN_8c1017f4(ar4,ar5,ar6,ar7);
      *(undefined1 *)(0xb8 + ar4) = 1;
      *(int *)(0xc4 + ar4) = *(int *)(0xc4 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(0xb8 + ar4) = 0;
LAB_8c1010c2:
  FUN_8c1019f8(ar4,ar5,ar6,ar7);
  if (*(int *)(0xb0 + ar4) == 1) {
    iVar2 = FUN_8c101a4c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = (int)*(char *)(ar4 + 0x28);
    if (iVar2 == 4) {
      FUN_8c101a4c(ar4,ar5,ar6,ar7);
      iVar2 = FUN_8c101da0(ar4,ar5,ar6,ar7);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c101004\n.set _FUN_8c101004, _FUN_8c101004_def\n");
//@unit 8c10113c
#include "../decls.h"
undefined4 get_field_b0_10113c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xb0 + ar4);
}

__asm__(".globl _get_field_b0_10113c\n.set _get_field_b0_10113c, _get_field_b0_10113c_def\n");
//@unit 8c101148
#include "../decls.h"
int FUN_8c101148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xb4;
  *(undefined4 *)(0xb4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c101148\n.set _FUN_8c101148, _FUN_8c101148_def\n");
//@unit 8c101154
#include "../decls.h"
undefined4 FUN_8c101154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0xb0 + ar4) == 1) && (*(int *)(0xb4 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c101154\n.set _FUN_8c101154, _FUN_8c101154_def\n");
//@unit 8c101178
#include "../decls.h"
uint get_field_b8_101178_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(byte *)(0xb8 + ar4);
}

__asm__(".globl _get_field_b8_101178\n.set _get_field_b8_101178, _get_field_b8_101178_def\n");
//@unit 8c101188
#include "../decls.h"
int FUN_8c101188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0xb0 + ar4);
  if (iVar1 == 1) {
    iVar1 = FUN_8c101e1c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c101188\n.set _FUN_8c101188, _FUN_8c101188_def\n");
//@unit 8c1011b0
#include "../decls.h"
undefined4 FUN_8c1011b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    ((uint)*(ushort *)(0x18e + ar4),0x1e,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1011b0\n.set _FUN_8c1011b0, _FUN_8c1011b0_def\n");
//@unit 8c1011e0
#include "../decls.h"
undefined4 FUN_8c1011e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c101250(ar4,ar5,ar6,ar7);
  ret_const_1_0ffb90(ar4 + 0xd8,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c1011e0\n.set _FUN_8c1011e0, _FUN_8c1011e0_def\n");
//@unit 8c101210
#include "../decls.h"
undefined4 * FUN_8c101210_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x188) == 6) {
    *ar5 = DAT_8c1266e0;
    *ar6 = DAT_8c1266e0;
    return &DAT_8c1266e0;
  }
  *ar5 = *(undefined4 *)(ar4 + 300);
  *ar6 = *(undefined4 *)(ar4 + 0x130);
  return (undefined4 *)0x130;
}

__asm__(".globl _FUN_8c101210\n.set _FUN_8c101210, _FUN_8c101210_def\n");
//@unit 8c101250
#include "../decls.h"
undefined4 FUN_8c101250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xd0) = 0;
  *(undefined4 *)(ar4 + 300) = 0x43a00000;
  *(undefined4 *)(ar4 + 0x130) = 0x43700000;
  *(undefined4 *)(ar4 + 0x140) = 0;
  *(undefined4 *)(ar4 + 0x13c) = 0;
  *(undefined4 *)(ar4 + 0x150) = 0;
  *(undefined4 *)(ar4 + 0x14c) = 0;
  *(undefined4 *)(ar4 + 0x188) = 0;
  uVar1 = *(undefined4 *)(ar4 + 0x188);
  FUN_8c0fffec(ar4 + 0x15c,uVar1,ar6,ar7,0);
  *(undefined2 *)(ar4 + 0x18c) = 0x78;
  *(undefined4 *)(ar4 + 0xd4) = 0;
  *(undefined4 *)(ar4 + 0x128) = 0xffffffff;
  *(undefined2 *)(ar4 + 0x18e) = 0;
  FUN_8c10169c(ar4,uVar1,ar6,ar7);
  FUN_8c101784(ar4,uVar1,ar6,ar7);
  uVar1 = FUN_8c10168c(ar4,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c101250\n.set _FUN_8c101250, _FUN_8c101250_def\n");
//@unit 8c101358
#include "../decls.h"
undefined4 FUN_8c101358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  cVar4 = *(char *)(0x598 + ar4) + -0x50;
  do {
    if (cVar4 == *(char *)(0x598 + ar4)) {
      return 0;
    }
    bVar1 = false;
    for (bVar5 = 0; bVar5 < 10; bVar5 = bVar5 + 1) {
      if (*(char *)(0x192 + ar4 + (uint)(byte)(cVar4 + bVar5) * 4) == '\x01') {
        bVar1 = true;
        break;
      }
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      iVar3 = 0;
    }
    if (4 < iVar2) {
      return 1;
    }
    cVar4 = cVar4 + '\n';
  } while( true );
}

__asm__(".globl _FUN_8c101358\n.set _FUN_8c101358, _FUN_8c101358_def\n");
//@unit 8c1013f4
#include "../decls.h"
int FUN_8c1013f4_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 0) {
    if (ar6 == 0) {
      *ar5 = 1;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (ar6 == 0) {
        *ar5 = 1;
        return 1;
      }
      if (ar6 == 1) {
        *ar5 = 2;
        return 2;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 == 2) {
      if (ar6 == 1) {
        *ar5 = 2;
        return 2;
      }
      if (ar6 == 2) {
        *ar5 = 3;
        return 3;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return iVar1;
    }
    if (ar6 == 2) {
      *ar5 = 3;
      return 3;
    }
    if (ar6 == 3) {
      *ar5 = 4;
      return 4;
    }
    *ar5 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c1013f4\n.set _FUN_8c1013f4, _FUN_8c1013f4_def\n");
//@unit 8c101480
#include "../decls.h"
int FUN_8c101480_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 0) {
    if (ar6 == 3) {
      *ar5 = 1;
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      if (ar6 == 3) {
        *ar5 = 1;
        return 1;
      }
      if (ar6 == 2) {
        *ar5 = 2;
        return 2;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 == 2) {
      if (ar6 == 2) {
        *ar5 = 2;
        return 2;
      }
      if (ar6 == 1) {
        *ar5 = 3;
        return 3;
      }
      *ar5 = 0;
      return 0;
    }
    if (iVar1 != 3) {
      return iVar1;
    }
    if (ar6 == 1) {
      *ar5 = 3;
      return 3;
    }
    if (ar6 == 0) {
      *ar5 = 4;
      return 4;
    }
    ar6 = 0;
    *ar5 = 0;
  }
  return ar6;
}

__asm__(".globl _FUN_8c101480\n.set _FUN_8c101480, _FUN_8c101480_def\n");
//@unit 8c101510
#include "../decls.h"
undefined4 FUN_8c101510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 ar6_00;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int aiStack_24 [2];
  
  aiStack_24[0] = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  bVar5 = *(char *)(0x598 + ar4) + (char)ar5 * -8;
  do {
    if (bVar5 == *(byte *)(0x598 + ar4)) {
      return 0;
    }
    cVar1 = *(char *)(0x190 + ar4 + (uint)bVar5 * 4);
    cVar2 = *(char *)(0x191 + ar4 + (uint)bVar5 * 4);
    cVar3 = *(char *)(0x190 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    cVar4 = *(char *)(0x191 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
      ar6_00 = 0;
LAB_8c1015f0:
      FUN_8c1013f4(ar4,aiStack_24,ar6_00,ar7);
      if (aiStack_24[0] == 4) {
        iStack_28 = iStack_28 + 1;
        aiStack_24[0] = 0;
        if (1 < iStack_28) {
          return 1;
        }
      }
      FUN_8c101480(ar4,&iStack_2c,ar6_00,ar7);
      if (iStack_2c == 4) {
        iStack_30 = iStack_30 + 1;
        iStack_2c = 0;
        if (1 < iStack_30) {
          return 1;
        }
      }
    }
    else {
      if ((cVar1 < cVar3) && (cVar2 < cVar4)) {
        ar6_00 = 1;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar2 < cVar4)) {
        ar6_00 = 2;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar4 < cVar2)) {
        ar6_00 = 3;
        goto LAB_8c1015f0;
      }
    }
    bVar5 = bVar5 + (char)ar5;
  } while( true );
}

__asm__(".globl _FUN_8c101510\n.set _FUN_8c101510, _FUN_8c101510_def\n");
//@unit 8c10168c
#include "../decls.h"
int FUN_8c10168c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x59c;
  *(undefined4 *)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c10168c\n.set _FUN_8c10168c, _FUN_8c10168c_def\n");
//@unit 8c10169c
#include "../decls.h"
int FUN_8c10169c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  memset(ar4 + 0x190,0,0x400,ar7);
  *(undefined1 *)(0x598 + ar4) = 0;
  *(undefined4 *)(0x590 + ar4) = 0;
  *(undefined4 *)(0x594 + ar4) = 0;
  iVar1 = 0x59c;
  *(undefined4 *)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c10169c\n.set _FUN_8c10169c, _FUN_8c10169c_def\n");
//@unit 8c1016f0
#include "../decls.h"
undefined4 FUN_8c1016f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *(char *)(0x598 + ar4) = *(char *)(0x598 + ar4) + '\x01';
  puVar2 = (undefined1 *)(ar4 + (uint)*(byte *)(0x598 + ar4) * 4 + 0x190);
  uVar1 = input_get_word_a538(0x8c3dd7dc,ar5,ar6,ar7);
  *puVar2 = (char)uVar1;
  uVar1 = input_get_word_a53c(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[1] = (char)uVar1;
  uVar1 = FUN_8c01efb0(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[2] = (char)uVar1;
  uVar1 = input_is_mask_set_10000_01ec68(0x8c3dd7dc,ar5,ar6,ar7);
  puVar2[3] = (char)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1016f0\n.set _FUN_8c1016f0, _FUN_8c1016f0_def\n");
//@unit 8c101784
#include "../decls.h"
undefined4 FUN_8c101784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(undefined4 *)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(0x88 + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = FUN_8c101c64(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c101784\n.set _FUN_8c101784, _FUN_8c101784_def\n");
//@unit 8c1017f4
#include "../decls.h"
uint FUN_8c1017f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar4_00;
  undefined4 ar5_00;
  
  *(char *)(ar4 + 0x28) = *(char *)(ar4 + 0x28) + '\x01';
  ar5_00 = 5;
  ar4_00 = (int)*(char *)(ar4 + 0x28);
  uVar1 = libgcc_divide_helper_01031c(ar4_00,5,ar6,ar7);
  *(char *)(ar4 + 0x28) = (char)uVar1;
  uVar1 = sh4_tmu_1f88e6(ar4_00,ar5_00,ar6,ar7);
  *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(undefined4 *)(*(char *)(ar4 + 0x28) * 8 + ar4);
    ar5_00 = *(undefined4 *)((*(char *)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = FUN_8c101de0(ar4,ar5_00,ar6,ar7);
    *(undefined4 *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(int *)(0xb0 + ar4) != 0) {
    if (*(uint *)(0xbc + ar4) < *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)) {
      if (0x124f80 <
          (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(0xbc + ar4))) {
        uVar2 = FUN_8c101c64(ar4,ar5_00,ar6,ar7);
      }
      else {
        uVar2 = 0xc3500;
        if (0xc3500 <
            (uint)(*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) - *(int *)(0xbc + ar4))) {
          *(undefined1 *)(0xb8 + ar4) = 2;
          uVar2 = 0xc4;
          *(undefined4 *)(0xc4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(uint *)(0xbc + ar4);
      if (*(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) < *(uint *)(0xbc + ar4)) {
        if (0x124f80 <
            (uint)(*(int *)(0xbc + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = FUN_8c101c64(ar4,ar5_00,ar6,ar7);
        }
        else {
          uVar2 = 0xc3500;
          if (0xc3500 <
              (uint)(*(int *)(0xbc + ar4) - *(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(0xb8 + ar4) = 2;
            uVar2 = 0xc4;
            *(undefined4 *)(0xc4 + ar4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1017f4\n.set _FUN_8c1017f4, _FUN_8c1017f4_def\n");
//@unit 8c1019f8
#include "../decls.h"
uint FUN_8c1019f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  uint uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  ar6_00 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  ar5_00 = *(undefined4 *)(ar4 + 0x2c);
  uVar1 = FUN_8c101de0(ar4,ar5_00,ar6_00,ar7);
  uVar2 = 0x16e360;
  if (0x16e360 < uVar1) {
    uVar2 = FUN_8c101c64(ar4,ar5_00,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1019f8\n.set _FUN_8c1019f8, _FUN_8c1019f8_def\n");
//@unit 8c101a4c
#include "../decls.h"
uint FUN_8c101a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(0xb0 + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(int *)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = 0x16e360;
    if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
      uVar1 = FUN_8c101b5c(ar4,uVar3,ar6,ar7);
    }
  }
  else {
    if (*(int *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(uint *)(0xbc + ar4);
    }
    else {
      uVar3 = *(uint *)(ar4 + *(char *)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
      uVar1 = 0x186a0;
      if (*(uint *)(0xbc + ar4) < uVar3) {
        if (0x186a0 < uVar3 - *(int *)(0xbc + ar4)) {
          uVar1 = FUN_8c101c10(ar4,uVar3,ar6,ar7);
        }
      }
      else if (0x186a0 < *(int *)(0xbc + ar4) - uVar3) {
        uVar1 = FUN_8c101c10(ar4,uVar3,ar6,ar7);
      }
    }
    else {
      uVar1 = FUN_8c101c64(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c101a4c\n.set _FUN_8c101a4c, _FUN_8c101a4c_def\n");
//@unit 8c101b5c
#include "../decls.h"
int FUN_8c101b5c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar3 = 0x82334, 0x82334 < ar5)) &&
     (uVar3 = 0xc349c, ar5 <= 0xc349c)) {
    uVar3 = 0xa2be8;
  }
  *(uint *)(0xbc + ar4) = uVar3;
  *(undefined4 *)0x8c4413c0 = *(uint *)(0xbc + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = FUN_8c02192c(0x8c2b59d0,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(undefined4 *)(0xb0 + ar4) = 1;
  iVar2 = 0xc4;
  *(undefined4 *)(0xc4 + ar4) = 1;
  return iVar2;
}

__asm__(".globl _FUN_8c101b5c\n.set _FUN_8c101b5c, _FUN_8c101b5c_def\n");
//@unit 8c101c10
#include "../decls.h"
uint FUN_8c101c10_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar1 = 0x82334, 0x82334 < ar5)) &&
     (uVar1 = 0xc349c, ar5 <= 0xc349c)) {
    uVar1 = 0xa2be8;
  }
  *(uint *)(0xbc + ar4) = uVar1;
  uVar1 = *(uint *)(0xbc + ar4) >> 3;
  *(undefined4 *)0x8c4413c0 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c101c10\n.set _FUN_8c101c10, _FUN_8c101c10_def\n");
//@unit 8c101c64
#include "../decls.h"
int FUN_8c101c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  FUN_8c101da0(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0xb4 + ar4) = 0;
  *(undefined1 *)(0xb8 + ar4) = 0;
  *(undefined4 *)(0xbc + ar4) = 0xa2be8;
  *(undefined4 *)(0xc4 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(int *)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (*(code *)(&FUN_8c021ab4))
                (0x8c2b59d0,*(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7);
      *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(undefined4 *)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(0x80 + ar4) = 0;
    *(undefined4 *)(0x84 + ar4) = 0;
    *(undefined4 *)(0x8c + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = 0xb0;
  *(undefined4 *)(0xb0 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c101c64\n.set _FUN_8c101c64, _FUN_8c101c64_def\n");
//@unit 8c101da0
#include "../decls.h"
undefined4 FUN_8c101da0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
    *(undefined4 *)(cVar1 * 8 + ar4) = 0;
    *(undefined4 *)(ar4 + cVar1 * 8 + 4) = 0;
  }
  *(undefined1 *)(ar4 + 0x28) = 0xff;
  return 0x28;
}

__asm__(".globl _FUN_8c101da0\n.set _FUN_8c101da0, _FUN_8c101da0_def\n");
//@unit 8c101de0
#include "../decls.h"
undefined4 FUN_8c101de0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 uVar1;
  
  uVar1 = ar6;
  ar4_00 = FUN_8c1f88f0(ar5,ar6,ar6,ar7);
  uVar1 = FUN_8c1f88f6(ar4_00,ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c101de0\n.set _FUN_8c101de0, _FUN_8c101de0_def\n");
//@unit 8c101e1c
#include "../decls.h"
uint FUN_8c101e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint auStack_cc [4];
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  uVar3 = sh4_tmu_1f88e6(ar4,(&sh4_tmu_1f88e6),ar6,ar7);
  *(undefined4 *)((int)auStack_cc + 0x9c) = uVar3;
  ar6_00 = *(int *)((int)auStack_cc + 0x9c);
  *(undefined4 *)((int)auStack_cc + 0xa8) = 0;
  bVar1 = false;
  bVar2 = false;
  *(undefined4 *)((int)auStack_cc + 0xa4) = 0;
  if (0x10 < *(uint *)(0xc4 + ar4)) {
    *(undefined4 *)((int)auStack_cc + 0x80) = *(undefined4 *)(ar4 + 100);
    iVar7 = *(undefined4 *)0x8c4413c0;
    iVar5 = *(int *)((&DATA_8c12682c) + *(int *)((int)auStack_cc + 0x80) * 4);
    uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x60),ar6_00,ar7);
    *(undefined4 *)((int)auStack_cc + 0x98) = uVar3;
    if ((*(int *)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x98))) {
      iStack_50 = *(int *)(ar4 + 100);
      (*(code *)(&FUN_8c0219b8))
                (0x8c2b59d0,*(undefined4 *)(ar4 + 0x68),
                 *(undefined4 *)((&DATA_8c126764) + iStack_50 * 4),ar7);
      if (*(int *)(ar4 + 100) == 0) {
        *(undefined4 *)((int)auStack_cc + 0xa4) = 1;
      }
      iVar5 = *(int *)(ar4 + 100);
      if ((iVar5 == 0) || (*(int *)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(int *)(ar4 + 100) == 0xe) || (*(int *)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(undefined4 *)((int)auStack_cc + 0xa8) = 1;
      }
      *(int *)(ar4 + 0x60) = ar6_00;
      *(int *)(ar4 + 100) = *(int *)(ar4 + 100) + 1;
      iStack_54 = ar4;
      uStack_58 = (*(code *)(&libgcc_divide_helper_0103d0))
                            (*(undefined4 *)(ar4 + 100),0x32,iVar5,ar7);
      *(undefined4 *)(ar4 + 100) = uStack_58;
      *(undefined4 *)(ar4 + 0x6c) = 1;
    }
  }
  iStack_5c = *(int *)(ar4 + 0x54);
  iVar7 = *(undefined4 *)0x8c4413c0;
  iVar5 = *(int *)((&DATA_8c126724) + iStack_5c * 4);
  uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x50),ar6_00,ar7);
  *(undefined4 *)((int)auStack_cc + 0x94) = uVar3;
  if (((*(int *)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x94))) ||
     (*(int *)((int)auStack_cc + 0xa8) == 1)) {
    if (*(int *)((int)auStack_cc + 0xa8) == 1) {
      *(undefined4 *)(ar4 + 0x54) = 0;
    }
    iStack_60 = *(int *)(ar4 + 0x54);
    (*(code *)(&FUN_8c0219b8))
              (0x8c2b59d0,*(undefined4 *)(ar4 + 0x58),
               *(undefined4 *)((&DATA_8c1266e4) + iStack_60 * 4),ar7);
    *(int *)(ar4 + 0x50) = ar6_00;
    iStack_64 = ar4;
    *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + 1;
    *(uint *)(ar4 + 0x54) = *(uint *)(ar4 + 0x54) & 0xf;
    *(undefined4 *)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(uint *)(0xc4 + ar4)) {
    if (*(int *)(ar4 + 0x3c) == 0) {
      if (*(int *)((int)auStack_cc + 0xa4) == 1) {
        iStack_68 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)((&DATA_8c1268f4) + iStack_68 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = ar6_00;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_6c = ar4;
        uStack_70 = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_70;
        *(undefined4 *)(ar4 + 0x3c) = 1;
      }
    }
    else {
      iStack_74 = *(int *)(ar4 + 0x34);
      iVar7 = *(undefined4 *)0x8c4413c0;
      iVar5 = *(int *)((&DATA_8c126958) + iStack_74 * 4);
      uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x30),ar6_00,ar7);
      *(undefined4 *)((int)auStack_cc + 0x90) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x90)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(undefined4 *)(ar4 + 0x34) = 0;
        }
        iStack_78 = *(int *)(ar4 + 0x34);
        uVar3 = *(undefined4 *)((&DATA_8c1268f4) + iStack_78 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x38),uVar3,ar7);
        *(int *)(ar4 + 0x30) = ar6_00;
        *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + 1;
        iStack_7c = ar4;
        uStack_80 = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x34),0x19,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x34) = uStack_80;
      }
    }
  }
  *(undefined4 *)((int)auStack_cc + 0xa0) = 1;
  if (*(uint *)(0xc4 + ar4) < 0x41) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (0xa2be8 < *(uint *)(0xbc + ar4)) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (*(uint *)(0xbc + ar4) < 0x82334) {
    *(undefined4 *)((int)auStack_cc + 0xa0) = 0;
  }
  if (*(int *)((int)auStack_cc + 0xa0) == 0) {
    *(undefined4 *)(ar4 + 0x44) = 0;
  }
  if (*(int *)((int)auStack_cc + 0xa0) == 1) {
    if (*(int *)(ar4 + 0x4c) == 0) {
      if (*(int *)((int)auStack_cc + 0xa4) == 1) {
        iStack_84 = *(int *)(ar4 + 0x44);
        uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_84 * 4);
        FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
        *(int *)(ar4 + 0x40) = ar6_00;
        *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
        iStack_88 = ar4;
        uStack_8c = (*(code *)(&libgcc_divide_helper_0103d0))
                              (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
        *(undefined4 *)(ar4 + 0x44) = uStack_8c;
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
    }
    else {
      iStack_90 = *(int *)(ar4 + 0x44);
      iVar7 = *(undefined4 *)0x8c4413c0;
      iVar5 = *(int *)((&DATA_8c126a2c) + iStack_90 * 4);
      uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(ar4 + 0x40),ar6_00,ar7);
      *(undefined4 *)((int)auStack_cc + 0x8c) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(uint *)((int)auStack_cc + 0x8c)) {
        if (*(int *)(ar4 + 0x44) == 0) {
          if (bVar1) {
            iStack_94 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_94 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_98 = ar4;
            uStack_9c = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_9c;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 7) {
          if (bVar2) {
            iStack_a0 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_a0 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_a4 = ar4;
            uStack_a8 = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_a8;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            iStack_ac = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_ac * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_b0 = ar4;
            uStack_b4 = (*(code *)(&libgcc_divide_helper_0103d0))
                                  (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(undefined4 *)(ar4 + 0x44) = uStack_b4;
          }
        }
        else if (*(int *)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            iStack_b8 = *(int *)(ar4 + 0x44);
            uVar3 = *(undefined4 *)((&DATA_8c1269bc) + iStack_b8 * 4);
            FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
            *(int *)(ar4 + 0x40) = ar6_00;
            *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
            iStack_bc = ar4;
            auStack_cc[3] =
                 (*(code *)(&libgcc_divide_helper_0103d0))
                           (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
            *(uint *)(ar4 + 0x44) = auStack_cc[3];
          }
        }
        else {
          auStack_cc[2] = *(int *)(ar4 + 0x44);
          uVar3 = *(undefined4 *)((&DATA_8c1269bc) + auStack_cc[2] * 4);
          FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(ar4 + 0x48),uVar3,ar7);
          *(int *)(ar4 + 0x40) = ar6_00;
          *(int *)(ar4 + 0x44) = *(int *)(ar4 + 0x44) + 1;
          auStack_cc[1] = ar4;
          auStack_cc[0] =
               (*(code *)(&libgcc_divide_helper_0103d0))
                         (*(undefined4 *)(ar4 + 0x44),0x1c,uVar3,ar7);
          *(uint *)(ar4 + 0x44) = auStack_cc[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(uint *)(0xc4 + ar4));
  if (0xc349c < *(uint *)(0xbc + ar4)) {
    uVar6 = 0;
  }
  if (*(uint *)(0xbc + ar4) < 0x82334) {
    uVar6 = 0;
  }
  if (*(int *)(0x88 + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(int *)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (ar6_00 == *(int *)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(int *)(&DATA_8c126a9c);
    iVar4 = *(undefined4 *)0x8c4413c0;
    iVar5 = ar6_00;
    uVar3 = FUN_8c101de0(ar4,*(undefined4 *)(0x80 + ar4),ar6_00,ar7);
    *(undefined4 *)((int)auStack_cc + 0x88) = uVar3;
    uVar6 = *(uint *)(0x8c + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(uint *)((int)auStack_cc + 0x88))) &&
       (uVar6 = *(uint *)((int)auStack_cc + 0xa4), uVar6 == 1)) {
      uVar3 = (*(code *)(&pack_acquire_entry_handle))
                        (0x8c2b59d0,(&DATA_8c142194),iVar5,ar7);
      *(undefined4 *)((int)auStack_cc + 0x84) = uVar3;
      *(undefined4 *)(0x88 + ar4) = *(undefined4 *)((int)auStack_cc + 0x84);
      *(int *)(0x80 + ar4) = ar6_00;
      uVar6 = 0x8c;
      *(undefined4 *)(0x8c + ar4) = 1;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c101e1c\n.set _FUN_8c101e1c, _FUN_8c101e1c_def\n");
//@unit 8c102634
#include "../decls.h"
undefined4 FUN_8c102634_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266a0,ar5,ar6,ar7);
  uVar3 = 0x8c441390;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c441390,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266b0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c44139c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c44139c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266c0,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4413a8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4413a8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1266d0,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c4413b4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c1266e0 = CONCAT44(_DAT_8c1266e4,0x800000);
                    
  }
  else {
    _DAT_8c1266e0 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c102634\n.set _FUN_8c102634, _FUN_8c102634_def\n");
//@unit 8c1026ec
#include "../decls.h"
undefined4 * FUN_8c1026ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c1026ec\n.set _FUN_8c1026ec, _FUN_8c1026ec_def\n");
//@unit 8c10270c
#include "../decls.h"
int free_if_nonnull_wrap_10270c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_10270c\n.set _free_if_nonnull_wrap_10270c, _free_if_nonnull_wrap_10270c_def\n");
//@unit 8c10273c
#include "../decls.h"
undefined2 * FUN_8c10273c_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (undefined2)ar5;
  ar4[1] = (undefined2)ar6;
  return ar4;
}

__asm__(".globl _FUN_8c10273c\n.set _FUN_8c10273c, _FUN_8c10273c_def\n");
//@unit 8c102748
#include "../decls.h"
undefined4 * FUN_8c102748_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c102748\n.set _FUN_8c102748, _FUN_8c102748_def\n");
//@unit 8c10277c
#include "../decls.h"
undefined4 * FUN_8c10277c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _FUN_8c10277c\n.set _FUN_8c10277c, _FUN_8c10277c_def\n");
//@unit 8c102790
#include "../decls.h"
int free_if_nonnull_wrap_102790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_102790\n.set _free_if_nonnull_wrap_102790, _free_if_nonnull_wrap_102790_def\n");
//@unit 8c1027c0
#include "../decls.h"
undefined2 * FUN_8c1027c0_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined1 *)((int)ar4 + 9) = 0;
  *(undefined1 *)(ar4 + 4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c1027c0\n.set _FUN_8c1027c0, _FUN_8c1027c0_def\n");
//@unit 8c102800
#include "../decls.h"
undefined4 * FUN_8c102800_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0x3f800000;
  ar4[1] = 0x3f800000;
  ar4[2] = 0x3f800000;
  ar4[3] = 0x3f800000;
  return ar4;
}

__asm__(".globl _FUN_8c102800\n.set _FUN_8c102800, _FUN_8c102800_def\n");
//@unit 8c102824
#include "../decls.h"
undefined4 noop_102824_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_102824\n.set _noop_102824, _noop_102824_def\n");
//@unit 8c102828
#include "../decls.h"
undefined4 report_error_message_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  
  ar6_00 = ar6;
  log_message(ar4,ar5,ar6,ar7);
  if (ar6 == 0) {
    game_shutdown_a(ar4,ar5,ar6_00,ar7);
    game_shutdown_b(ar4,ar5,ar6_00,ar7);
  }
  return 0;
}

__asm__(".globl _report_error_message\n.set _report_error_message, _report_error_message_def\n");
//@unit 8c10287c
#include "../decls.h"
undefined4 FUN_8c10287c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = malloc_thunk(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10287c\n.set _FUN_8c10287c, _FUN_8c10287c_def\n");
//@unit 8c10289c
#include "../decls.h"
undefined4 FUN_8c10289c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 != 0) {
    FUN_8c1fb57c(*ar4,ar5,ar6,ar7);
    *ar4 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c10289c\n.set _FUN_8c10289c, _FUN_8c10289c_def\n");
//@unit 8c1028c0
#include "../decls.h"
undefined4 FUN_8c1028c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_c;
  uint auStack_8 [2];
  
  auStack_8[0] = 0;
  uStack_c = 0;
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  FUN_8c1f826c(ar5,&uStack_c,ar6,ar7);
  if (uStack_c < auStack_8[0]) {
    uVar1 = 1;
  }
  else if (auStack_8[0] < uStack_c) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1028c0\n.set _FUN_8c1028c0, _FUN_8c1028c0_def\n");
//@unit 8c102914
#include "../decls.h"
undefined4 FUN_8c102914_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = ar5;
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _FUN_8c102914\n.set _FUN_8c102914, _FUN_8c102914_def\n");
//@unit 8c10291c
#include "../decls.h"
undefined4 * FUN_8c10291c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c12c3a4);
  FUN_8c102974(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c10291c\n.set _FUN_8c10291c, _FUN_8c10291c_def\n");
//@unit 8c102974
#include "../decls.h"
int FUN_8c102974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  float fVar1;
  float in_fr7;
  float in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 uVar2;
  
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  *(float *)(ar4 + 4) = (fVar1 * in_fr7 - in_fr6 * (float)in_dr4) / (fVar1 - in_fr6);
  *(float *)(ar4 + 8) = ((float)in_dr4 - in_fr7) / (fVar1 - in_fr6);
  *(undefined4 *)(ar4 + 0xc) = in_fr8;
  *(undefined4 *)(ar4 + 0x10) = in_fr9;
  if (*(float *)(ar4 + 0x10) < *(float *)(ar4 + 0xc)) {
    uVar2 = *(undefined4 *)(ar4 + 0xc);
    *(undefined4 *)(ar4 + 0xc) = *(undefined4 *)(ar4 + 0x10);
    *(undefined4 *)(ar4 + 0xc) = uVar2;
  }
  return ar4 + 0x10;
}

__asm__(".globl _FUN_8c102974\n.set _FUN_8c102974, _FUN_8c102974_def\n");
//@unit 8c1029d0
#include "../decls.h"
int Class_12c3a4_m0_1029d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0xc;
}

__asm__(".globl _Class_12c3a4_m0_1029d0\n.set _Class_12c3a4_m0_1029d0, _Class_12c3a4_m0_1029d0_def\n");
//@unit 8c102a08
#include "../decls.h"
undefined4 * FUN_8c102a08_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0d63f8(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12c394);
  FUN_8c102a7c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c102a08\n.set _FUN_8c102a08, _FUN_8c102a08_def\n");
//@unit 8c102a7c
#include "../decls.h"
undefined4 FUN_8c102a7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr6;
  undefined8 in_dr8;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)((ulonglong)in_dr8 >> 0x20);
  fVar3 = (float)((ulonglong)in_dr6 >> 0x20);
  *(float *)(ar4 + 0x14) = (fVar3 * (float)in_dr8 - fVar2 * (float)in_dr6) / (fVar3 - fVar2);
  *(float *)(ar4 + 0x18) = ((float)in_dr6 - (float)in_dr8) / (fVar3 - fVar2);
  *(float *)(ar4 + 0x1c) = fVar3;
  uVar1 = FUN_8c102974(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c102a7c\n.set _FUN_8c102a7c, _FUN_8c102a7c_def\n");
//@unit 8c102b04
#include "../decls.h"
int Class_12c394_m0_102b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Class_12c394_m1_102b58(ar4,ar5,ar6,ar7);
  return ar4 + 0xc;
}

__asm__(".globl _Class_12c394_m0_102b04\n.set _Class_12c394_m0_102b04, _Class_12c394_m0_102b04_def\n");
//@unit 8c102b58
#include "../decls.h"
int Class_12c394_m1_102b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 in_dr4;
  
  if (*(float *)(ar4 + 0x1c) <= (float)((ulonglong)in_dr4 >> 0x20)) {
    iVar1 = ar4 + 0x18;
  }
  else {
    Class_12c3a4_m0_1029d0(ar4,ar5,ar6,ar7);
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _Class_12c394_m1_102b58\n.set _Class_12c394_m1_102b58, _Class_12c394_m1_102b58_def\n");
//@unit 8c102ba4
#include "../decls.h"
undefined4 FUN_8c102ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  return 1;
}

__asm__(".globl _FUN_8c102ba4\n.set _FUN_8c102ba4, _FUN_8c102ba4_def\n");
//@unit 8c102bb4
#include "../decls.h"
int FUN_8c102bb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 8;
}

__asm__(".globl _FUN_8c102bb4\n.set _FUN_8c102bb4, _FUN_8c102bb4_def\n");
//@unit 8c102bc8
#include "../decls.h"
undefined4 FUN_8c102bc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c102bc8\n.set _FUN_8c102bc8, _FUN_8c102bc8_def\n");
//@unit 8c102bd0
#include "../decls.h"
undefined4 FUN_8c102bd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int iVar5;
  
  uVar2 = 0xf;
  uVar3 = ar5;
  uVar4 = ar6;
  FUN_8c102d20(0xf,ar5,ar6,ar7);
  FUN_8c1fa6b8(uVar2,uVar3,uVar4,ar7);
  FUN_8c1fb3e0(0x8c4c3ea0,0xb3b160,uVar4,ar7);
  uVar4 = ar4;
  pvr_25825a(ar4,ar5,ar6,ar7);
  FUN_8c1fa6e2(ar4,ar5,ar6,ar7);
  ar6_00 = 0x8c44d498;
  uVar3 = 0x8c441478;
  uVar2 = 0;
  FUN_8c1f5dd0(0,0x8c441478,0x8c44d498,ar7);
  FUN_8c1f8114(uVar2,uVar3,ar6_00,ar7);
  uVar2 = 0;
  FUN_8c102d20(0,uVar3,ar6_00,ar7);
  for (iVar5 = 8; 0 < iVar5; iVar5 = iVar5 + -1) {
    ar6_00 = 0x800;
    uVar2 = 8;
    uVar3 = 0x8c4594c0;
    ar7 = 0x8c45a860;
    iVar1 = thunk_FUN_8c1f38c0(8,0x8c4594c0,0x800,0x8c45a860);
    if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
      FUN_8c102d40(uVar2,uVar3,ar6_00,ar7);
      game_shutdown_b(uVar2,uVar3,ar6_00,ar7);
    }
    else if (iVar1 == 0) break;
  }
  if (iVar5 == 0) {
    FUN_8c102d40(uVar2,uVar3,ar6_00,ar7);
    game_shutdown_b(uVar2,uVar3,ar6_00,ar7);
  }
  uVar3 = FUN_8c0100b0(uVar2,uVar3,ar6_00,ar7,uVar4);
  return uVar3;
}

__asm__(".globl _FUN_8c102bd0\n.set _FUN_8c102bd0, _FUN_8c102bd0_def\n");
//@unit 8c102d20
#include "../decls.h"
int FUN_8c102d20_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (ar4 & 0xf) << 4;
}

__asm__(".globl _FUN_8c102d20\n.set _FUN_8c102d20, _FUN_8c102d20_def\n");
//@unit 8c102d40
#include "../decls.h"
undefined4 FUN_8c102d40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c010080(ar4,ar5,ar6,ar7);
  FUN_8c1f38f2(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1f813e(ar4,ar5,ar6,ar7);
  FUN_8c1f62f0(ar4,ar5,ar6,ar7);
  FUN_8c2590bc(ar4,ar5,ar6,ar7);
  noop_1fb43a(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1fa6f2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c102d20(0xf,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c102d40\n.set _FUN_8c102d40, _FUN_8c102d40_def\n");
//@unit 8c102d9c
#include "../decls.h"
undefined4 FUN_8c102d9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126aa0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c470880;
  global_list_push(uVar1,(&Vec3_dtor),0x8c470880,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ab0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c47088c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c47088c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ac0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c470898;
  global_list_push(uVar1,(&Vec3_dtor),0x8c470898,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126ad0),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c4708a4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c102d9c\n.set _FUN_8c102d9c, _FUN_8c102d9c_def\n");
//@unit 8c102e44
#include "../decls.h"
undefined4 FUN_8c102e44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c126ae0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708b0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708b0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126af0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708bc;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708bc,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c126b00),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c4708c8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c4708c8,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c126b10),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c4708d4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c102e44\n.set _FUN_8c102e44, _FUN_8c102e44_def\n");
//@unit 8c102eec
#include "../decls.h"
undefined4 * s_HIGYOLINE_102eee_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff0;
  
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c12c3c4;
  FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7);
  FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x213] = 0;
  ar4[0x214] = 0;
  *(undefined1 *)((int)ar4 + 0x855) = 0;
  ar4[0x217] = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(ar4 + 0x215) = 0;
  strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7,in_stack_fffffff0);
  strcpy(ar4 + 0x37,&DAT_8c1eeec3,ar6,ar7,in_stack_fffffff0);
  ar4[0xe2] = 4;
  ar4[0x210] = 0;
  ar4[0x211] = 0;
  ar4[0x212] = 0x22;
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)((int)ar4 + 0x865) = 0;
  ar4[0x21c] = 1;
  ar4[0x21b] = 1;
  ar4[0x21a] = 1;
  ar4[0x21c] = 0;
  ar4[0x21d] = 0;
  *(undefined1 *)(ar4 + 0x219) = 0;
  ar4[0x218] = 0x1b;
  ar4[0x21e] = 0;
  *(undefined1 *)(ar4 + 0x21f) = 0;
  ar4[0x220] = 0;
  ar4[0x221] = 0;
  ar4[0x222] = 0;
  ar4[0x223] = 0;
  return ar4;
}

__asm__(".globl _s_HIGYOLINE_102eee\n.set _s_HIGYOLINE_102eee, _s_HIGYOLINE_102eee_def\n");
//@unit 8c1030a4
#include "../decls.h"
undefined4 * Class_12c3c4_m0_1030a4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12c3c4;
    free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12c3c4_m0_1030a4\n.set _Class_12c3c4_m0_1030a4, _Class_12c3c4_m0_1030a4_def\n");
//@unit 8c103100
#include "../decls.h"
undefined4 s_REQUEST_SLEEP_10310a_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  char *ar7_00;
  code *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *ar5_00;
  int iVar9;
  code *pcVar10;
  int *ar5_01;
  undefined4 uVar11;
  undefined4 in_stack_fffffef8;
  undefined1 auStack_38 [36];
  
  puVar8 = auStack_38;
  puVar6 = &DAT_8c1eee70;
  ar5_00 = (undefined1 *)0x10;
  do {
    puVar7 = puVar6 + 1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar8[1] = *puVar7;
    puVar8 = puVar8 + 2;
    ar5_00 = ar5_00 + -1;
  } while (ar5_00 != (undefined1 *)0x0);
  pcVar2 = ar6;
  uVar1 = FUN_8c02602c(*(int *)(ar6 + 0x18),0,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5_00,pcVar2,ar7);
    pcVar2 = (code *)(int)(short)uVar1;
    ar5_00 = *(undefined1 **)(ar6 + 0x18);
    (**(code **)(*ar4 + 0x18))(ar4,ar5_00,pcVar2,ar7);
  }
  if ((_DAT_8c27d430 == 1) && (ar4[0x21d] == 0)) {
    FUN_8c109e40(ar4,ar6,pcVar2,ar7);
    ar5_00 = &DAT_8c27d430;
    _DAT_8c27d430 = 0;
  }
  if (*(char *)((int)ar4 + 0x9b) == '\x01') {
    *(undefined1 *)((int)ar4 + 0x865) = 0;
    uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5_00,pcVar2,ar7);
    (**(code **)(*ar4 + 0x18))(ar4,*(int *)(ar6 + 0x18),(int)(short)uVar1,ar7);
  }
  uVar11 = 0x9c;
  DAT_8c1eee30 = ar4[0x210];
  DAT_8c1eee34 = ar4[0x211];
  iVar9 = ar4[0x212];
  DAT_8c1eee38 = iVar9;
  iVar3 = get_field_13c_028d9c(*(int *)(ar6 + 4),iVar9,0x9c,ar7);
  ar4[0x218] = iVar3;
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),iVar9,uVar11,ar7);
  FUN_8c030d04(ar4 + 0x27,(int)(short)uVar1,uVar11,ar7);
  FUN_8c104f5c(ar4,ar5,ar6,ar7);
  s_STATUS_SUCKED_1093aa(ar4,ar5,ar6,ar7);
  s_STATUS_LIFE_1097b2(ar4,ar5,ar6,ar7);
  pcVar2 = ar5;
  pcVar10 = ar6;
  s_IDLEACTION_TREMOR_1091d0(ar4,ar5,ar6,ar7);
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7);
  if (iVar3 != 2) {
    pcVar2 = ar6;
    FUN_8c02f20c(ar4,ar6,pcVar10,ar7);
  }
  ar7_00 = (char *)get_field_4_05eed8(ar4,pcVar2,pcVar10,ar7);
  pcVar2 = ar5;
  pcVar10 = ar6;
  s_STATUS_SNORE_10485e(ar4,ar5,ar6,ar7_00);
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
  if ((iVar3 != 2) &&
     (iVar3 = get_field_178_035734(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00), iVar3 == 0)) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    s_REACTION_TITILLATE_1080e0(ar4,ar5,ar6,ar7_00);
  }
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
  if (iVar3 != 2) {
    FUN_8c02e8e0(ar4 + 0x207,1,pcVar10,ar7_00);
    s_GRAPHICS_COMMON_106f5e(ar4,ar5,ar6,ar7_00);
    s_GRATIFIC_RID_HOT_108562(ar4,ar5,ar6,ar7_00);
    pcVar2 = ar5;
    pcVar10 = ar6;
    s_REACTION_TEMP_LACK_106c8a(ar4,ar5,ar6,ar7_00);
  }
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
  if (iVar3 == 0) {
    iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
    if ((iVar3 != 2) && (ar4[1] == 0)) {
      iVar3 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,pcVar2,pcVar10,ar7_00);
      if (iVar3 == 1) {
        uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar2,pcVar10,ar7_00);
        pcVar2 = (code *)0x7;
        iVar3 = libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00);
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          ar7_00 = "REQUEST_SLEEP";
          pcVar10 = (code *)0x0;
          pcVar2 = (code *)0x0;
          FUN_8c0306d4(ar4 + 0x27,0,0,"REQUEST_SLEEP");
        }
      }
      uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar2,pcVar10,ar7_00);
      if ((char)uVar1 == '\0') {
        uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar2,pcVar10,ar7_00);
        pcVar2 = (code *)0x7;
        iVar3 = libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00);
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          if (ar4[0x223] == 1) {
            ar7_00 = "REQUEST_WAKE_UP";
            pcVar10 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WAKE_UP");
          }
          else {
            ar7_00 = "REQUEST_WANT_LIGHT";
            pcVar10 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WANT_LIGHT");
          }
          pcVar2 = (code *)0x0;
          ar4[0x223] = 0;
        }
      }
      uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar2,pcVar10,ar7_00);
      if (*(char *)((int)ar4 + 0x9a) != (char)uVar1) {
        iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
        if (iVar3 != 2) {
          uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar2,pcVar10,ar7_00);
          pcVar2 = (code *)(uVar5 & 0xffff);
          if ((code *)0x3 < pcVar2) {
            uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar2,pcVar10,ar7_00);
            if ((char)uVar1 == '\0') {
              ar7_00 = "STATUS_LIGHT_OFF";
              pcVar10 = (code *)0x0;
              pcVar2 = (code *)0xa;
              FUN_8c0306d4(ar4 + 0x27,10,0,"STATUS_LIGHT_OFF");
            }
            else {
              uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar2,pcVar10,ar7_00);
              if (*(char *)((int)ar4 + 0x9a) < (char)uVar1) {
                ar7_00 = "STATUS_LIGHT";
                pcVar10 = (code *)0x0;
                pcVar2 = (code *)0x0;
                FUN_8c0306d4(ar4 + 0x27,0,0,"STATUS_LIGHT");
              }
            }
          }
        }
        uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),pcVar2,pcVar10,ar7_00);
        *(char *)((int)ar4 + 0x9a) = (char)uVar1;
      }
    }
    iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
    if (iVar3 != 2) {
      pcVar2 = ar5;
      pcVar10 = ar6;
      s_EVENT_QUIZ_107596(ar4,ar5,ar6,ar7_00);
    }
    if ((ar4[0x10] != 2) &&
       (iVar3 = get_field_770_05eeb8(ar4 + 0x27,pcVar2,pcVar10,ar7_00), iVar3 == 1)) {
      if (ar4[0xe1] == -1) {
        if ((char)ar4[0x26] < '\0') {
          ar4[0x25] = 0;
          pcVar2 = (code *)0x3;
          FUN_8c030870(ar4 + 0x27,3,pcVar10,ar7_00);
          ar4[1] = 0;
          ar4[0x10] = 0;
          ar4[2] = 0x19;
          ar4[3] = 0;
          pcVar10 = (code *)0x1;
          *(undefined1 *)(ar4 + 0x20) = 1;
        }
        else {
          pcVar10 = (code *)(ar4 + 0x27);
          pcVar2 = (code *)(uint)ar4[0xe2];
          iVar3 = FUN_8c0f8320(0x8c35468c,pcVar2,pcVar10,ar7_00);
          ar4[0xe1] = iVar3;
        }
      }
      else {
        pcVar2 = (code *)0x2;
        FUN_8c030870(ar4 + 0x27,2,pcVar10,ar7_00);
      }
    }
    iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,ar7_00);
    if (((iVar3 != 2) || (pcVar2 = (code *)(ar4 + 0x10), *(int *)pcVar2 != 2)) &&
       (uVar1 = FUN_8c05eeb0(*(int *)(ar6 + 4) + 0xa8,pcVar2,pcVar10,ar7_00), (char)uVar1 == '\x01')
       ) {
      pcVar10 = get_field_140_025f70;
      pcVar2 = (code *)get_field_140_025f70(*(int *)(ar6 + 4),pcVar2,get_field_140_025f70,ar7_00);
      if (pcVar2 == (code *)0x0) {
        *(undefined1 *)(ar4 + 0x26) = 10;
        pcVar10 = (code *)0x1b;
        pcVar2 = (code *)0x14;
        FUN_8c0b9ed4(*(int *)(ar6 + 0x18),0x14,0x1b,ar7_00);
      }
    }
  }
  pcVar4 = (code *)ar7_00;
  if ((((ar4[0x10] == 0) || (ar4[0x10] == 6)) &&
      ((ar4[1] != 7 || (pcVar2 = (code *)(int)(char)ar4[0x26], (char)ar4[0x26] != '\x04')))) &&
     ((*(char *)((int)ar4 + 0x83) == '\0' || (*(char *)((int)ar4 + 0x83) == '\x01')))) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    FUN_8c10862c(ar4,ar5,ar6,ar7_00);
    pcVar4 = (code *)ar7_00;
  }
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar2,pcVar10,pcVar4);
  if (((iVar3 != 2) && (iVar3 = (int)(char)ar4[0x26], iVar3 < 0xb)) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      pcVar2 = (code *)0x2;
      iVar3 = (**(code **)(*(int *)ar5 + 0x11c))(ar5,2,pcVar10,pcVar4);
      if (iVar3 == 0) {
        *(undefined1 *)(ar4 + 0x26) = 3;
      }
      else {
        pcVar4 = (code *)0x5f;
        ar4[2] = 0x5f;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[0x210] = 9;
        ar4[0x10] = 9;
        DAT_8c1eee30 = 9;
      }
      break;
    case 1:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      uVar1 = 0x840;
      ar4[0x210] = 0x1c;
      ar4[0x10] = 0x1c;
      DAT_8c1eee30 = 0x1c;
      uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),0x840,pcVar10,pcVar4);
      if (ar4[0x217] != (uVar5 & 0xffff)) {
        uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),uVar1,pcVar10,pcVar4);
        ar4[0x217] = uVar5 & 0xffff;
        ar4[0x214] = ar4[0x214] + 1;
        if (ar4[0x214] == 600) {
          *(undefined1 *)(ar4 + 0x26) = 2;
        }
      }
      pcVar2 = (code *)0x2;
      pcVar4 = (code *)(**(code **)(*(int *)ar5 + 0x11c))(ar5,2,pcVar10,pcVar4);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0x3;
        *(undefined1 *)(ar4 + 0x26) = 3;
      }
      break;
    case 2:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 8;
      ar4[0x10] = 8;
      DAT_8c1eee30 = 8;
      pcVar2 = (code *)0x2;
      iVar3 = (**(code **)(*(int *)ar5 + 0x11c))(ar5,2,pcVar10,pcVar4);
      if (iVar3 == 0) {
        *(undefined1 *)(ar4 + 0x26) = 3;
      }
      break;
    case 3:
      uVar1 = FUN_8c05eea8(*(int *)(ar6 + 0xc),pcVar2,pcVar10,pcVar4);
      *(char *)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      pcVar4 = (code *)(uint)ar4[0xe1];
      if (pcVar4 != (code *)0xffffffff) {
        pcVar4 = (code *)0xdc;
        pcVar2 = (code *)(ar4 + 0x37);
        pcVar10 = pcVar2;
        iVar3 = FUN_8c1041fc("start",pcVar2,pcVar2,0xdc);
        if (iVar3 == 0) {
          pcVar4 = FUN_8c0f8214;
          FUN_8c0f8214(0x8c35468c,pcVar2,pcVar10,FUN_8c0f8214);
          pcVar10 = (code *)0x3;
          FUN_8c030870(ar4 + 0x27,3,3,pcVar4);
          *(undefined1 *)(ar4 + 0x20) = 1;
          pcVar2 = (code *)0x384;
          ar4[0xe1] = -1;
          ar4[0x3f] = 0;
        }
      }
      if ((ar4[1] != 7) && (ar4[0xe1] != -1)) {
        uVar1 = FUN_8c1041ec(ar4 + 0x27,pcVar2,pcVar10,pcVar4);
        pcVar2 = (code *)FUN_8c1041fc(uVar1,&DAT_8c1eef1a,pcVar10,pcVar4);
        if (pcVar2 == (code *)0x0) {
          FUN_8c0f8214(0x8c35468c,0,pcVar10,pcVar4);
          ar4[0xe1] = -1;
        }
      }
      break;
    default:
      pcVar2 = (code *)0x0;
      pcVar4 = FUN_8c02cb7c;
      FUN_8c02cb7c(*(int *)(ar6 + 4) + 0xa8,0,pcVar10,FUN_8c02cb7c);
      break;
    case 7:
      pcVar4 = (code *)0x0;
      pcVar10 = *(code **)(ar6 + 4);
      FUN_8c02cb7c(pcVar10 + 0xa8,0,pcVar10,0,in_stack_fffffef8);
      pcVar2 = (code *)0x1;
      FUN_8c02cb74(*(int *)(ar6 + 4) + 0xa8,1,pcVar10,pcVar4);
      break;
    case 8:
      uVar1 = FUN_8c02d3e0(*(int *)(ar6 + 4) + 0x90,pcVar2,pcVar10,pcVar4);
      uVar11 = CONCAT13((char)uVar1,(int3)in_stack_fffffef8);
      pcVar4 = (code *)(int)(char)uVar1;
      if (pcVar4 == (code *)0x1) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0xa;
        *(undefined1 *)(ar4 + 0x26) = 10;
      }
      else {
        if (ar4[0x10] != 0x1d) {
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[1] = 0xd;
          ar4[0x210] = 0x1d;
          ar4[0x10] = 0x1d;
          DAT_8c1eee30 = 0x1d;
          uVar1 = 0;
          FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar10,pcVar4);
          FUN_8c0fa6c8(0x8c35468c,uVar1,pcVar10,pcVar4);
        }
        FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,0,pcVar10,pcVar4);
        pcVar10 = (code *)(*(int *)(ar6 + 4) + 0x18);
        FUN_8c1041e4(pcVar10,0,pcVar10,pcVar4,uVar11);
        pcVar2 = (code *)0x0;
        FUN_8c1041e4(*(int *)(ar6 + 4),0,pcVar10,pcVar4,uVar11);
      }
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      DAT_8c1eee30 = 0x13;
      pcVar10 = (code *)0x0;
      FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,0,pcVar4);
      FUN_8c1041e4(*(int *)(ar6 + 4) + 0x18,0,pcVar10,pcVar4,in_stack_fffffef8);
      pcVar2 = (code *)0x0;
      FUN_8c1041e4(*(int *)(ar6 + 4),0,pcVar10,pcVar4,in_stack_fffffef8);
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        pcVar10 = (code *)0x2;
        ar4[0x10] = 2;
        pcVar2 = (code *)(ar4 + 0x1b);
        if (*(int *)pcVar2 != 0) {
          pcVar10 = *(code **)(ar4[0x1b] + 8);
          (**(code **)(pcVar10 + 0x78))(ar4[0x1b],pcVar2,pcVar10,pcVar4);
          ar4[0x1b] = 0;
        }
      }
    }
  }
  FUN_8c0301f8(ar4 + 0x27,pcVar2,pcVar10,pcVar4);
  FUN_8c1089e4(ar4,ar5,ar6,pcVar4);
  pcVar2 = ar6;
  FUN_8c108f3c(ar4,ar5,ar6,pcVar4);
  pcVar10 = get_field_124_027930;
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),get_field_124_027930,pcVar2,pcVar4);
  if (iVar3 != 2) {
    pcVar10 = ar6;
    FUN_8c109b18(ar4,ar6,pcVar2,pcVar4);
    FUN_8c05ee90(*(int *)(ar6 + 8),pcVar10,pcVar2,pcVar4);
    iVar3 = get_field_4_05eed8(ar4,pcVar10,pcVar2,pcVar4);
    uVar1 = *(undefined4 *)(&DAT_8c1eed94 + ar4[3] * 4 + iVar3 * 0xc);
    FUN_8c05f488(ar4,uVar1,pcVar2,pcVar4);
    if ((ar4[1] == 2) &&
       (pcVar4 = (code *)get_field_a0_035724(*(int *)(ar6 + 0x18),uVar1,pcVar2,pcVar4),
       (char)pcVar4 != '\x02')) {
      iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),uVar1,pcVar2,pcVar4);
      if (iVar3 == 0) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 1) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 2) {
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
      }
      else if (iVar3 == 4) {
        uVar1 = 900;
        if (ar4[0xe1] == -1) {
          ar4[0x10] = 0;
        }
        uVar11 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,900,pcVar2,pcVar4);
        if ((char)uVar11 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    if ((*(char *)((int)ar4 + 0x91) == '\x01') ||
       (pcVar10 = (code *)get_field_124_027930(*(int *)(ar6 + 8),uVar1,pcVar2,pcVar4),
       (code *)(uint)ar4[0x10] != pcVar10)) {
      pcVar2 = (code *)0x1;
      pcVar10 = (code *)(uint)ar4[0x10];
      FUN_8c031b08(*(int *)(ar6 + 8),pcVar10,1,pcVar4);
    }
  }
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  pcVar4 = (code *)FUN_8c02c518(*(int *)(ar6 + 4),pcVar10,pcVar2,pcVar4);
  if (pcVar4 != (code *)0xffffffff) {
    pcVar2 = (code *)0x0;
    pcVar10 = (code *)0x0;
    FUN_8c1041d8(*(int *)(ar6 + 0xc),0,0,pcVar4);
  }
  uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar10,pcVar2,pcVar4);
  if (ar4[0x217] != (uVar5 & 0xffff)) {
    uVar5 = FUN_8c02602c(*(int *)(ar6 + 0x18),pcVar10,pcVar2,pcVar4);
    ar4[0x217] = uVar5 & 0xffff;
    iVar3 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,pcVar10,pcVar2,pcVar4);
    if (iVar3 < 0x31) {
      FUN_8c0e9668(*(int *)(ar6 + 0xc),pcVar10,pcVar2,pcVar4);
    }
    else {
      pcVar4 = FUN_8c0e9690;
      FUN_8c0e9690(*(int *)(ar6 + 0xc),pcVar10,pcVar2,FUN_8c0e9690);
    }
    iVar9 = *(int *)(ar6 + 0xc);
    iVar3 = get_field_cc_1041cc(iVar9,pcVar10,iVar9,pcVar4);
    if (iVar3 == 0) {
      pcVar10 = (code *)0x0;
      pcVar4 = FUN_8c05ee64;
      FUN_8c05ee64(*(int *)(ar6 + 4) + 0xf8,0,iVar9,FUN_8c05ee64);
    }
    pcVar2 = (code *)0x878;
    if (0 < ar4[0x21e]) {
      pcVar10 = (code *)(uint)ar4[0x21e];
      ar4[0x21e] = (int)(pcVar10 + -1);
    }
  }
  if ((ar4[0x10] != 0x1d) || (ar4[0x10] != 0x1b)) {
    ar4[0x23] = 0;
  }
  iVar3 = get_field_124_027930(*(int *)(ar6 + 8),pcVar10,pcVar2,pcVar4);
  if ((iVar3 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_01 = ar4 + 0x37;
    iVar3 = FUN_8c1041fc("start",ar5_01,pcVar2,pcVar4);
    if (iVar3 == 0) {
      FUN_8c0f8214(0x8c35468c,ar5_01,pcVar2,pcVar4);
      FUN_8c030870(ar4 + 0x27,3,ar4 + 0x27,0x9c);
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  *(undefined1 *)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(ar4 + 0x21) = 0;
  *(undefined1 *)((int)ar4 + 0x85) = 0;
  *(undefined1 *)((int)ar4 + 0x87) = 0;
  uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),*(int *)(ar6 + 0xc),0,0x87);
  *(char *)((int)ar4 + 0x9a) = (char)uVar1;
  return 0x9a;
}

__asm__(".globl _s_REQUEST_SLEEP_10310a\n.set _s_REQUEST_SLEEP_10310a, _s_REQUEST_SLEEP_10310a_def\n");
//@unit 8c1041cc
#include "../decls.h"
undefined4 get_field_cc_1041cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xcc + ar4);
}

__asm__(".globl _get_field_cc_1041cc\n.set _get_field_cc_1041cc, _get_field_cc_1041cc_def\n");
//@unit 8c1041d8
#include "../decls.h"
int FUN_8c1041d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xcc;
  *(undefined4 *)(0xcc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c1041d8\n.set _FUN_8c1041d8, _FUN_8c1041d8_def\n");
//@unit 8c1041e4
#include "../decls.h"
undefined4 FUN_8c1041e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c1041e4\n.set _FUN_8c1041e4, _FUN_8c1041e4_def\n");
//@unit 8c1041ec
#include "../decls.h"
int FUN_8c1041ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x730;
}

__asm__(".globl _FUN_8c1041ec\n.set _FUN_8c1041ec, _FUN_8c1041ec_def\n");
//@unit 8c1041fc
#include "../decls.h"
undefined4 FUN_8c1041fc_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl _FUN_8c1041fc\n.set _FUN_8c1041fc, _FUN_8c1041fc_def\n");
//@unit 8c104264
#include "../decls.h"
undefined4 Class_12c3c4_m2_104264_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  DAT_8c1eee30 = ar4[0x210];
  DAT_8c1eee34 = ar4[0x211];
  DAT_8c1eee38 = ar4[0x212];
  iVar5 = ar5;
  piVar2 = ar6;
  uVar1 = FUN_8c02602c(ar6[6],ar5,ar6,ar7);
  if ((short)uVar1 == 3) {
    uVar1 = FUN_8c02bef8(ar6[1],iVar5,piVar2,ar7);
    piVar2 = (int *)(int)(short)uVar1;
    iVar5 = ar6[6];
    (**(code **)(*ar4 + 0x18))(ar4,iVar5,piVar2,ar7);
  }
  iVar5 = get_field_13c_028d9c(ar6[1],iVar5,piVar2,ar7);
  ar4[0x218] = iVar5;
  iVar5 = ar5;
  piVar2 = ar6;
  FUN_8c104f5c(ar4,ar5,ar6,ar7);
  iVar3 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,iVar5,piVar2,ar7);
  if ((iVar3 == 1) && (ar4[1] != 1)) {
    iVar3 = get_field_6c_02f46c(*ar6,iVar5,piVar2,ar7);
    if ((iVar3 == 0) && (iVar5 = get_field_70_05f490(*ar6,iVar5,piVar2,ar7), iVar5 == 0)) {
      ar4[0xe] = 2;
      ar4[1] = 2;
      ar4[3] = 0;
      ar4[2] = 99;
      FUN_8c02f298(ar4,199,piVar2,ar7);
      FUN_8c05febc(ar6[3],0,piVar2,ar7);
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xd;
      uVar1 = 0x577;
      FUN_8c02f298(ar4,0x577,piVar2,ar7);
      if (ar4[0x1b] != 0) {
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar1,piVar2,ar7);
        ar4[0x1b] = 0;
      }
    }
  }
  piVar6 = ar6;
  FUN_8c02f20c(ar4,ar6,piVar2,ar7);
  uVar1 = get_field_4_05eed8(ar4,piVar6,piVar2,ar7);
  piVar2 = ar6;
  s_STATUS_SNORE_10485e(ar4,ar5,ar6,uVar1);
  iVar5 = get_field_124_027930(ar6[2],ar5,piVar2,uVar1);
  if (((iVar5 != 2) && (iVar5 = (int)(char)ar4[0x26], iVar5 < 0xb)) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 9;
      ar4[0x10] = 9;
      DAT_8c1eee30 = 9;
      break;
    case 3:
      uVar4 = FUN_8c05eea8(ar6[3],ar5,piVar2,uVar1);
      *(char *)((int)ar4 + 0x99) = (char)uVar4;
      break;
    case 8:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x1d;
      ar4[0x10] = 0x1d;
      DAT_8c1eee30 = 0x1d;
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      DAT_8c1eee30 = 0x13;
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],ar5,piVar2,uVar1);
          ar4[0x1b] = 0;
        }
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar5 = FUN_8c0fa2b8(0x8c35468c,ar5,piVar2,uVar1);
    if (iVar5 == 0) {
      ar4[0x25] = 0;
      FUN_8c030870(ar4 + 0x27,3,piVar2,uVar1);
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      FUN_8c0f8214(0x8c35468c,ar5,piVar2,uVar1);
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  FUN_8c109b18(ar4,ar6,piVar2,uVar1);
  FUN_8c05ee90(ar6[2],piVar6,piVar2,uVar1);
  if (*(char *)((int)ar4 + 0x91) != '\x01') {
    iVar5 = get_field_124_027930(ar6[2],piVar6,piVar2,uVar1);
    iVar3 = get_field_40_05eea0(ar4,piVar6,piVar2,uVar1);
    if (iVar5 == iVar3) {
      return iVar3;
    }
  }
  uVar4 = get_field_40_05eea0(ar4,piVar6,piVar2,uVar1);
  uVar1 = FUN_8c031b08(ar6[2],uVar4,1,uVar1);
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m2_104264\n.set _Class_12c3c4_m2_104264, _Class_12c3c4_m2_104264_def\n");
//@unit 8c10469c
#include "../decls.h"
int s_REACTION_CATCH_1046a0_def(int ar4,int ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [20];
  
  if (*(int *)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    Vec3_ctor_copy(auStack_1c,ar5 + 0x10,ar6,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_1c,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
    *(undefined4 *)(ar4 + 0x94) = 0x15;
    if (*(int *)(ar4 + 900) == -1) {
      FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH",&DAT_8c1eeec3);
      strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7,ar5);
      strcpy(ar4 + 0xdc,&DAT_8c1eeec3,uVar2,ar7,ar5);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),ar6,ar7);
      *(undefined4 *)(ar4 + 900) = uVar2;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      FUN_8c030870(ar4 + 0x9c,2,ar6,ar7);
    }
    iVar1 = *(int *)(ar4 + 900);
    if (iVar1 != -1) {
      *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
      iVar1 = FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 0x94) = 0;
        FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0x19;
        *(undefined1 *)(ar4 + 0x91) = 1;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined1 *)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(undefined4 *)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_1046a0\n.set _s_REACTION_CATCH_1046a0, _s_REACTION_CATCH_1046a0_def\n");
//@unit 8c104854
#include "../decls.h"
undefined4 s_STATUS_SNORE_10485e_def(int ar4,undefined4 ar5,int *ar6,char *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int a5;
  undefined4 ar5_00;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff84;
  undefined4 ain0;
  undefined1 auStack_38 [4];
  float fStack_34;
  undefined1 auStack_28 [20];
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar4 = ar6;
  if (*(int *)(ar4 + 0x38) == 2) {
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    FUN_8c105094(ar4,ar5,ar6,ar7);
    uVar3 = 1;
    FUN_8c02f404(ar4,1,piVar4,ar7,in_stack_ffffff84);
  }
  else {
    uVar3 = *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    *(undefined4 *)(ar4 + 0x40) = uVar3;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if ((iVar2 < 0x22) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      break;
    case 1:
      uVar3 = 3;
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x6c) = 0;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      FUN_8c02fdd8(ar4,ar5,piVar4,ar7);
      break;
    case 2:
      a5 = *(int *)(*ar6 + 8);
      iVar2 = (**(code **)(a5 + 0xb4))(*ar6,a5,piVar4,ar7);
      if (iVar2 == 1) {
        iVar2 = *ar6;
        FUN_8c027954(iVar2,a5,piVar4,ar7);
        FUN_8c0c4e2c(iVar2,a5,piVar4,FUN_8c0c4e2c);
      }
      break;
    case 4:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
        }
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
      break;
    case 6:
      pcVar5 = FUN_8c02602c;
      uVar1 = FUN_8c02602c(ar6[6],uVar3,piVar4,FUN_8c02602c);
      iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,piVar4,pcVar5);
      if (iVar2 == 0xe) {
        pcVar6 = "STATUS_SNORE";
        uVar3 = 0;
        FUN_8c0306d4(ar4 + 0x9c,0x11,0,"STATUS_SNORE");
        FUN_8c02f404(ar4,3,uVar3,pcVar6,in_stack_ffffff84);
      }
      break;
    case 7:
      FUN_8c02f404(ar4,3,piVar4,ar7,in_stack_ffffff84);
      break;
    case 10:
    case 0x14:
      Vec3_ctor_copy(auStack_28,ar6[5] + 0x10,piVar4,ar7);
      Vec3_assign_wrap_05f640(ar4,auStack_28,piVar4,ar7);
      Vec3_dtor(auStack_28,0xffffffff,piVar4,ar7);
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(ar4 + 0x78) = 0x6513e10344af0000;
      }
      break;
    case 0xc:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        if (*(int *)(ar4 + 0x88) == 1) {
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),1,piVar4,ar7);
          *(undefined4 *)(ar4 + 0x88) = 0;
        }
        FUN_8c109b98(ar4,ar5,piVar4,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
        FUN_8c05febc(ar6[3],0,piVar4,ar7);
      }
      break;
    case 0x11:
      uVar1 = FUN_8c02602c(ar6[6],uVar3,piVar4,ar7);
      uVar3 = 10;
      iVar2 = libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar4,ar7);
      if (((iVar2 == 5) && (*(char *)(ar4 + 0x855) == '\0')) &&
         (iVar2 = get_field_140_025f70(ar6[1],uVar3,piVar4,ar7), iVar2 == 0)) {
        FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(ar4 + 0x855),piVar4,ar7);
        iVar2 = FUN_8c02fcc4(ar4,ar6,piVar4,ar7);
        if (iVar2 == 0) {
          FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_UNCONSIDERED");
        }
        else {
          FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_COUPLING");
        }
        *(undefined1 *)(ar4 + 0x855) = 1;
      }
      break;
    case 0x18:
      if (*(int *)(ar4 + 0x8c) == 1) {
        FUN_8c104f44(ar6[3],uVar3,piVar4,ar7);
        ar5_00 = 0;
        FUN_8c0637c0(ar6[3],0,piVar4,ar7);
        *(char *)(ar4 + 0x87c) = *(char *)(ar4 + 0x87c) + '\x01';
        *(undefined4 *)(ar4 + 0x878) = 0xb4;
        uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
        ain0 = CONCAT13((char)((uint)in_stack_ffffff84 >> 0x18),
                        CONCAT12((char)uVar3,(short)in_stack_ffffff84));
        if ((char)uVar3 < '\x04') {
          uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
          ain0 = CONCAT22((short)((uint)ain0 >> 0x10),CONCAT11((char)uVar3,(char)ain0));
          if ((char)uVar3 == '\x01') {
            FUN_8c02cb84(ar6[1] + 0xa8,0,piVar4,ar7,ain0);
          }
          piVar4 = (int *)0x1b;
          ar5_00 = 0x17;
          iVar2 = ar6[6];
          FUN_8c0b9ed4(iVar2,0x17,0x1b,ar7);
          FUN_8c0c4e2c(iVar2,ar5_00,piVar4,ar7);
        }
        uVar3 = FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7);
        if ((char)uVar3 == '\x04') {
          *(undefined1 *)(ar4 + 0x98) = 7;
          FUN_8c02cb84(ar6[1] + 0xa8,1,piVar4,ar7,CONCAT31((int3)((uint)ain0 >> 8),(char)uVar3));
          FUN_8c064ba0(ar6[6],2,piVar4,ar7);
          FUN_8c0b9ed4(ar6[6],0x18,0x1b,ar7);
        }
        FUN_8c0306d4(ar4 + 0x9c,0x1f,0,"EVENT_ROCK_PUSH");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1b:
      if (*(int *)(ar4 + 0x8c) == 1) {
        FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"REACTION_GURUGURU");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1d:
      if (*(int *)(ar4 + 0x8c) == 1) {
        ar7 = "EVENT_LANDING";
        piVar4 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"EVENT_LANDING");
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      FUN_8c02f670(*ar6,*ar6,piVar4,ar7,auStack_38);
      if (cVar8 == '\0') {
        pcVar5 = (code *)0x432a0000;
      }
      else {
        fStack_34 = 170.0;
        pcVar5 = Vec3_dtor;
      }
      Vec3_dtor(auStack_38,0xffffffff,piVar4,ar7);
      if (cVar7 != '\0' || (float)(uint)pcVar5 <= fStack_34) {
        FUN_8c0306d4(ar4 + 0x9c,0x14,0,"STATUS_GROAN");
      }
      break;
    case 0x1f:
      iVar2 = FUN_8c02f414(ar4,uVar3,piVar4,ar7);
      if (iVar2 == 1) {
        pcVar6 = "REACTION_INSPIDER";
        uVar3 = 0;
        FUN_8c030568(ar4 + 0x9c,0x26,0,"REACTION_INSPIDER",&DAT_8c1eeec3);
        FUN_8c109b98(ar4,ar5,uVar3,pcVar6);
      }
      else {
        *(undefined4 *)(ar4 + 0x38) = 2;
        if (*(int *)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_10485e\n.set _s_STATUS_SNORE_10485e, _s_STATUS_SNORE_10485e_def\n");
//@unit 8c104f44
#include "../decls.h"
undefined4 FUN_8c104f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x39) = *(char *)(ar4 + 0x39) + '\x01';
  return 0x39;
}

__asm__(".globl _FUN_8c104f44\n.set _FUN_8c104f44, _FUN_8c104f44_def\n");
//@unit 8c104f5c
#include "../decls.h"
int FUN_8c104f5c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int in_stack_ffffffd4;
  
  cVar3 = '\0';
  if (*(int *)(ar4 + 0x3c) == 0) {
    get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    uVar2 = ar5;
    iVar1 = ar6;
    s_GRATIFIC_EAT_1063b2(ar4,ar5,ar6,ar7);
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + 1;
    *(undefined4 *)(ar4 + 0x40) =
         *(undefined4 *)(&DAT_8c1eed94 + *(int *)(ar4 + 0xc) * 4 + *(int *)(ar4 + 4) * 0xc);
    if ((*(int *)(ar4 + 0x40) == 0x22) || (*(int *)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      if (*(int *)(ar4 + 4) == 1) {
        *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = iVar1;
        in_stack_ffffffd4 = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(ar4 + 0xc) = 0;
        ar5 = 0;
        FUN_8c02f404(ar4,0,iVar1,ar7,in_stack_ffffffd4);
        ar6 = iVar1;
      }
    }
    else {
      FUN_8c105094(ar4,ar5,ar6,ar7);
    }
  }
  if (*(int *)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    FUN_8c02f404(ar4,2,ar6,ar7,in_stack_ffffffd4);
  }
  iVar1 = *(int *)(ar4 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    iVar1 = 0;
    if (*(int *)(ar4 + 0x6c) != 0) {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
      iVar1 = 0x6c;
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c104f5c\n.set _FUN_8c104f5c, _FUN_8c104f5c_def\n");
//@unit 8c105094
#include "../decls.h"
undefined4 FUN_8c105094_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x20;
  if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar3 = (*(code *)((code **)&DATA_8c10519c)[iVar2 + -1])(uVar3);
    return uVar3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c105094\n.set _FUN_8c105094, _FUN_8c105094_def\n");
//@unit 8c1063a8
#include "../decls.h"
undefined * s_GRATIFIC_EAT_1063b2_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  int *ar4_00;
  char *ar7_00;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 a7;
  code *ar7_01;
  int iVar7;
  undefined4 in_stack_ffffff6c;
  
  iVar7 = 0;
  piVar4 = ar5;
  piVar6 = ar6;
  iVar1 = get_field_124_027930(ar6[2],ar5,ar6,ar7);
  puVar2 = (undefined *)0x21;
  if ((iVar1 < 0x22) && (puVar2 = (undefined *)0x1, 0 < iVar1)) {
    puVar2 = (&switchdata_8c1063ec_8c1063f4)[iVar1 + -1];
                    
    switch(iVar1) {
    case 4:
      iVar1 = FUN_8c02f414(ar4,piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        if ((iVar1 == 0xf) &&
           (ar7 = (char *)get_field_13c_028d9c(ar6[1],piVar4,piVar6,get_field_13c_028d9c),
           ar7 == (char *)0x2)) {
          piVar4 = (int *)0x1e;
          FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar6,2);
        }
        else {
          iVar1 = get_field_24_05c284(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
          if (iVar1 == 0xf) {
            uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
            piVar4 = (int *)FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,piVar6,ar7);
            FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7);
          }
          else {
            piVar4 = (int *)FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),0x1e,piVar6,ar7);
            FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7);
          }
        }
      }
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        puVar2 = (undefined *)FUN_8c0306d4(ar4 + 0x9c,2,0,"GRATIFIC_EAT");
      }
      break;
    case 6:
      *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
      puVar2 = (undefined *)0x32;
      *(undefined4 *)(ar4 + 8) = 0x32;
      break;
    case 8:
      puVar2 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 3;
      break;
    case 9:
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      puVar2 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 3;
      break;
    case 0xb:
      if (*(int *)(ar4 + 900) == -1) {
        puVar2 = (undefined *)0xffffffff;
      }
      else {
        puVar2 = (undefined *)FUN_8c030870(ar4 + 0x9c,2,piVar6,ar7);
      }
      break;
    case 0xc:
      iVar1 = FUN_8c02f414(ar4,piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),piVar4,piVar6,ar7);
        uVar3 = FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,piVar6,ar7);
        FUN_8c05fec4(ar6[1],uVar3,piVar6,ar7);
        piVar6 = *(int **)(*(int *)(ar4 + 0x6c) + 8);
        (*(code *)piVar6[0x1e])(*(int *)(ar4 + 0x6c),uVar3,piVar6,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
        uVar3 = FUN_8c02bef8(ar6[1],FUN_8c02bef8,piVar6,ar7);
        if ((short)uVar3 == 2) {
          piVar4 = (int *)0x0;
          while( true ) {
            uVar3 = 3;
            ar4_00 = ar5;
            iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,3,piVar6,ar7);
            if (iVar1 <= (int)piVar4) break;
            uVar3 = 3;
            piVar6 = piVar4;
            iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar3,piVar6,ar7);
            if (iVar1 == 2) {
              uVar3 = 3;
              iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
              piVar6 = *(int **)(iVar1 + 8);
              iVar1 = (*(code *)piVar6[0x2d])(iVar1,uVar3,piVar6,ar7);
              if (iVar1 == 1) {
                uVar3 = 3;
                piVar6 = piVar4;
                iVar1 = (**(code **)(*ar5 + 0x100))(ar5,3,piVar4,ar7);
                piVar6 = (int *)(**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar3,piVar6,ar7);
                if (piVar6 == (int *)0x0) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            piVar4 = (int *)((int)piVar4 + 1);
          }
          if (iVar7 == 2) {
            piVar6 = (int *)0x1b;
            FUN_8c0b9ed4(ar6[6],0xf,0x1b,ar7);
            uVar3 = 1;
            ar4_00 = (int *)(uint)ar6[3];
            FUN_8c061180(ar4_00,1,piVar6,ar7,in_stack_ffffff6c);
          }
          FUN_8c0c4e2c(ar4_00,uVar3,piVar6,ar7);
        }
      }
      puVar2 = (undefined *)FUN_8c05febc(ar6[3],0,piVar6,ar7);
      break;
    case 0xe:
      FUN_8c02ce10(ar6[1] + 0x90,0,piVar6,ar7);
      uVar3 = get_field_13c_028d9c(ar6[1],ar6[1],piVar6,ar7);
      puVar2 = (undefined *)FUN_8c0b9ed4(ar6[6],0x11,uVar3,ar7);
      break;
    case 0x10:
      (**(code **)(*(int *)(*ar6 + 8) + 0xbc))(*ar6,piVar4,piVar6,ar7);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,piVar4,piVar6,ar7);
      uVar5 = FUN_8c02bfd8(ar6[1],piVar4,piVar6,ar7);
      ar6_00 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      a7 = 1;
      iVar1 = (int)(short)uVar5;
      FUN_8c0620bc(uVar3,iVar1,ar6_00,1);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,iVar1,ar6_00,a7);
      uVar5 = FUN_8c02bfd8(ar6[1],iVar1,ar6_00,a7);
      iVar1 = get_field_140_025f70(ar6[1],iVar1,ar6_00,a7);
      uVar3 = FUN_8c0620a4(uVar3,(int)(short)uVar5,1 - iVar1,a7);
      if ((char)uVar3 == '\x01') {
        puVar2 = (undefined *)0x1;
      }
      else {
        puVar2 = (undefined *)(*(int *)(ar4 + 0xc) + -1);
        *(undefined **)(ar4 + 0xc) = puVar2;
      }
      break;
    case 0x11:
      iVar1 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      if (iVar1 == 1) {
        *(undefined1 *)(ar4 + 0x98) = 5;
        (**(code **)(*(int *)(*ar6 + 8) + 0xc0))(*ar6,piVar4,piVar6,ar7);
        piVar4 = (int *)0x1;
        FUN_8c02cb74(ar6[1] + 0xa8,1,piVar6,ar7);
        DAT_8c13bcc4 = 1;
      }
      iVar1 = get_field_140_025f70(ar6[1],piVar4,piVar6,ar7);
      if (iVar1 == 0) {
        *(undefined1 *)(ar4 + 0x98) = 10;
        FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7);
        ar7 = "GRATIFIC_COPULATION_DONE";
        FUN_8c0306d4(ar4 + 0x9c,9,0,"GRATIFIC_COPULATION_DONE");
        piVar6 = (int *)0x1b;
        FUN_8c0b9ed4(ar6[6],0x14,0x1b,ar7);
      }
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0;
      *(undefined4 *)(ar4 + 8) = 0;
      *(undefined4 *)(ar4 + 0xc) = 0;
      FUN_8c02cb84(ar6[1] + 0xa8,0,piVar6,ar7,in_stack_ffffff6c);
      uVar3 = 1;
      iVar1 = ar6[1] + 0xa8;
      FUN_8c06209c(iVar1,1,piVar6,ar7);
      puVar2 = (undefined *)FUN_8c0c4e2c(iVar1,uVar3,piVar6,ar7);
      break;
    case 0x13:
      *(undefined1 *)(ar4 + 0x98) = 10;
      DAT_8c13bcc4 = 1;
      uVar3 = get_field_13c_028d9c(ar6[1],piVar4,piVar6,ar7);
      uVar5 = 0x19;
      FUN_8c0b9ed4(ar6[6],0x19,uVar3,ar7);
      FUN_8c0fa688(0x8c35468c,uVar5,uVar3,ar7);
      ar7_00 = "GRATIFIC_GROAN_DONE";
      uVar3 = 0;
      iVar1 = ar4 + 0x9c;
      FUN_8c0306d4(iVar1,0x1f,0,"GRATIFIC_GROAN_DONE");
      puVar2 = (undefined *)FUN_8c0c4e2c(iVar1,FUN_8c0c4e2c,uVar3,ar7_00);
      break;
    case 0x18:
      FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7);
      uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
      uVar5 = CONCAT13((char)uVar3,(int3)in_stack_ffffff6c);
      if ('\x03' < (char)uVar3) {
        uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
        uVar5 = CONCAT13((char)((uint)uVar5 >> 0x18),CONCAT12((char)uVar3,(short)uVar5));
        FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,piVar6,ar7);
        ar7 = "EVENT_AFTER_ROCK_PUSH";
        piVar6 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x26,0,"EVENT_AFTER_ROCK_PUSH");
        FUN_8c02cbbc(ar6[1] + 0x90,1,piVar6,ar7);
        FUN_8c02c330(ar6[1],0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x18,0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x60,0,piVar6,ar7,uVar5);
        FUN_8c02c330(ar6[1] + 0x30,0,piVar6,ar7,uVar5);
        piVar4 = (int *)0x1;
        FUN_8c02cb84(ar6[1] + 0xa8,1,piVar6,ar7,uVar5);
        *(undefined4 *)(ar4 + 0x870) = 1;
      }
      uVar3 = FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7);
      puVar2 = (undefined *)(int)(char)uVar3;
      if ((char)uVar3 < '\x04') {
        ar7_01 = FUN_8c0b9ed4;
        FUN_8c0b9ed4(ar6[6],0x17,0x1b,FUN_8c0b9ed4);
        iVar1 = ar6[3];
        uVar3 = FUN_8c0e98f0(iVar1,FUN_8c0e98f0,iVar1,ar7_01);
        FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,iVar1,ar7_01);
        if (*(char *)(ar4 + 0x87c) < '\x03') {
          FUN_8c0fa5f0(0x8c35468c,0,iVar1,ar7_01);
        }
        else {
          FUN_8c0fa5f0(0x8c35468c,1,iVar1,ar7_01);
        }
        puVar2 = (undefined *)FUN_8c0306d4(ar4 + 0x9c,0x1e,0,"EVENT_AFTER_ROCK_PUSH");
      }
      break;
    case 0x19:
      puVar2 = (undefined *)FUN_8c0303b8(ar4 + 0x9c,0x1f,0,"REACTION_AFTER_DEKOPIN",&DAT_8c1eeec3);
      break;
    case 0x1f:
      if (*(int *)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = (undefined *)0x6c;
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_GRATIFIC_EAT_1063b2\n.set _s_GRATIFIC_EAT_1063b2, _s_GRATIFIC_EAT_1063b2_def\n");
//@unit 8c106c84
#include "../decls.h"
undefined4 * s_REACTION_TEMP_LACK_106c8a_def(int ar4,int *ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0;
  float fVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  a6 = ar6;
  if ((*(int *)(ar4 + 0x880) == 0) &&
     (iVar1 = (**(code **)(*ar5 + 0x1ac))(ar5,0,ar6,ar7), *(int *)(ar4 + 0x868) != iVar1)) {
    uVar4 = 0;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,0,a6,ar7);
    *(undefined4 *)(ar4 + 0x868) = uVar2;
    if (*(int *)(ar4 + 0x868) == 0) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41600000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x416e666641600000;
      }
      if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x416e6666,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = 0x8c02602c416e6666;
        }
        if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_TEMP_LACK";
          a6 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_TEMP_LACK");
          *(undefined4 *)(ar4 + 0x880) = 1;
        }
      }
    }
  }
  if (*(int *)(ar4 + 0x884) == 0) {
    uVar2 = 0;
    iVar1 = (**(code **)(*ar5 + 0x1a4))(ar5,0,a6,ar7);
    if (iVar1 == 2) {
      iVar1 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),uVar2,a6,ar7);
      uVar4 = (undefined4)(in_dr0 >> 0x20);
      if (iVar1 == 4) {
        (**(code **)(*ar5 + 0x178))(ar5,uVar2,a6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41c8cccd,uVar4);
        }
        else {
          in_dr0 = 0x88841c8cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF");
          *(undefined4 *)(ar4 + 0x884) = 1;
        }
      }
      else {
        (**(code **)(*ar5 + 0x178))(ar5,uVar2,a6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41a0cccd,uVar4);
        }
        else {
          in_dr0 = 0x2dc41a0cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF");
          *(undefined4 *)(ar4 + 0x884) = 1;
        }
      }
    }
  }
  puVar3 = *(undefined4 **)(ar4 + 0x888);
  if ((puVar3 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7),
     *(undefined4 **)(ar4 + 0x86c) != puVar3)) {
    uVar4 = 1;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7);
    *(undefined4 *)(ar4 + 0x86c) = uVar2;
    puVar3 = *(undefined4 **)(ar4 + 0x86c);
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = &DAT_8c106f4c;
      if (cVar8 == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = 65.0;
      }
      else {
        fVar5 = 65.0;
        fVar6 = 65.9;
      }
      if (cVar7 != '\0' || fVar6 <= fVar5) {
        (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)&DAT_8c106f50;
        if (cVar8 == '\0') {
          fVar6 = 65.9;
        }
        else {
          fVar5 = 65.9;
          fVar6 = 1.05378e-42;
        }
        if (cVar7 != '\0' || fVar5 <= fVar6) {
          uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
          puVar3 = (undefined4 *)0x3;
          if (2 < (ushort)uVar2) {
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_OXYGEN_LACK");
            puVar3 = (undefined4 *)0x888;
            *(undefined4 *)(ar4 + 0x888) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}

__asm__(".globl _s_REACTION_TEMP_LACK_106c8a\n.set _s_REACTION_TEMP_LACK_106c8a, _s_REACTION_TEMP_LACK_106c8a_def\n");
//@unit 8c106f58
#include "../decls.h"
undefined4 s_GRAPHICS_COMMON_106f5e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *ar7_00;
  char cVar4;
  undefined4 in_stack_ffffff28;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar4 = '\0';
  if (((*(char *)(ar4 + 0x81) == '\x01') && (1 < *(int *)(ar4 + 0x104))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    iVar3 = ar6;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
      if (iVar2 == 2) {
        uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5,iVar3,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,iVar3,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x15;
          *(undefined4 *)(ar4 + 0x840) = 0x15;
          DAT_8c1eee30 = 0x15;
          *(undefined4 *)(ar4 + 0x844) = 0x22;
          DAT_8c1eee34 = 0x22;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x840) = 0xb;
          DAT_8c1eee30 = 0xb;
          *(undefined4 *)(ar4 + 0x844) = 0x1e;
          DAT_8c1eee34 = 0x1e;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
        else {
          Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
          Vec3_assign_wrap_063818(ar4,auStack_40,iVar3,ar7);
          Vec3_dtor(auStack_40,0xffffffff,iVar3,ar7);
          Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
          Vec3_assign_wrap_05f640(ar4,auStack_50,iVar3,ar7);
          Vec3_dtor(auStack_50,0xffffffff,iVar3,ar7);
          if (cVar4 == '\0') {
            *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
            *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(ar4 + 0x40) = 0x14;
          *(undefined4 *)(ar4 + 0x840) = 0x14;
          DAT_8c1eee30 = 0x14;
          *(undefined4 *)(ar4 + 0x844) = 0x22;
          DAT_8c1eee34 = 0x22;
          *(undefined4 *)(ar4 + 0x848) = 0x22;
          DAT_8c1eee38 = 0x22;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        Vec3_ctor_copy(auStack_20,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_20,iVar3,ar7);
        Vec3_dtor(auStack_20,0xffffffff,iVar3,ar7);
        ar7_00 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,iVar3,Vec3_ctor_copy);
        Vec3_assign_wrap_05f640(ar4,auStack_30,iVar3,ar7_00);
        Vec3_dtor(auStack_30,0xffffffff,iVar3,ar7_00);
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(ar4 + 0x78) = 0x8c1eee9044af0000;
        }
        FUN_8c0303b8(ar4 + 0x9c,0,0,"REACTION_TAP_RESPONSE",&DAT_8c1eeec3);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x14;
        *(undefined4 *)(ar4 + 0x840) = 0x14;
        DAT_8c1eee30 = 0x14;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,iVar3,ar7);
      if (iVar2 == 6) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,iVar3,ar7,in_stack_ffffff28);
        FUN_8c0306d4(ar4 + 0x9c,0x22,0,"REACTION_WAKED_TAP");
      }
    }
  }
  else if (*(char *)(ar4 + 0x83) == '\x02') {
    iVar3 = ar6;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
      if (iVar2 == 2) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x15;
        *(undefined4 *)(ar4 + 0x840) = 0x15;
        DAT_8c1eee30 = 0x15;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        Vec3_ctor_copy(auStack_60,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_60,iVar3,ar7);
        Vec3_dtor(auStack_60,0xffffffff,iVar3,ar7);
        Vec3_ctor_copy(auStack_70,*(int *)(ar6 + 0x14) + 0x10,iVar3,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_70,iVar3,ar7);
        Vec3_dtor(auStack_70,0xffffffff,iVar3,ar7);
        if (cVar4 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c1eee30 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0x1e;
        DAT_8c1eee34 = 0x1e;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,iVar3,ar7);
      if (iVar2 == 6) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,iVar3,ar7,in_stack_ffffff28);
        FUN_8c0306d4(ar4 + 0x9c,0x23,0,"REACTION_WAKED_TAP");
      }
    }
  }
  *(undefined1 *)(ar4 + 0x81) = 0;
  return 0x81;
}

__asm__(".globl _s_GRAPHICS_COMMON_106f5e\n.set _s_GRAPHICS_COMMON_106f5e, _s_GRAPHICS_COMMON_106f5e_def\n");
//@unit 8c107590
#include "../decls.h"
int s_EVENT_QUIZ_107596_def(code *ar4,code *ar5,code *ar6,char *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  code *ar7_00;
  code *pcVar6;
  char cVar7;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  cVar7 = '\0';
  pcVar6 = ar6;
  pcVar4 = ar5;
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,ar6,ar7);
  if (((6 < (short)uVar1) &&
      (iVar3 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,ar5,pcVar6,ar7), iVar3 < 0x30)) &&
     (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == -1)) {
    uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
    pcVar6 = (code *)(int)(char)uVar1;
    if ((((char)uVar1 == '\x02') &&
        (iVar3 = (**(code **)(*(int *)pcVar4 + 0x1d0))(pcVar4,ar5,2,ar7), iVar3 == 1)) &&
       ((iVar3 = get_field_178_035734(*(int *)(ar6 + 8),ar5,pcVar6,ar7), iVar3 == 0 &&
        (ar4[0x98] == (code)0x5)))) {
      uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
      if ((((char)uVar1 < '\x03') &&
          (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == -1)) &&
         ((ar5 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar3 == 1 &&
          ((iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7),
           iVar3 == 0 && (iVar3 = *(int *)(ar4 + 0x878), iVar3 == 0)))))) {
        ar5 = FUN_8c0637c8;
        uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,0);
        if ((char)uVar1 == '\0') {
          if (*(int *)(ar4 + 0x40) == 0x14) {
            ar7 = (char *)0x18;
            *(int *)(ar4 + 0x40) = 0x18;
          }
          else {
            uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,iVar3);
            FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,iVar3);
            ar7 = "EVENT_QUIZ";
            pcVar6 = (code *)0x0;
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ");
            FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7);
            *(int *)(ar4 + 4) = 0xd;
            *(int *)(ar4 + 8) = 99;
            *(int *)(ar4 + 0xc) = 0;
            *(int *)(ar4 + 0x40) = 0x21;
            *(int *)(ar4 + 0x840) = 0x21;
            DAT_8c1eee30 = 0x21;
            *(int *)(ar4 + 0x844) = 0xb;
            DAT_8c1eee34 = 0xb;
            *(int *)(ar4 + 0x848) = 10;
            DAT_8c1eee38 = 10;
            ar4[0x80] = (code)0x0;
            Vec3_ctor_copy(auStack_20,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_063818(ar4,auStack_20,pcVar6,ar7);
            Vec3_dtor(auStack_20,0xffffffff,pcVar6,ar7);
            if (cVar7 == '\0') {
              *(int *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xe444960000;
            }
            Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_05f640(ar4,auStack_30,pcVar6,ar7);
            ar5 = (code *)0xffffffff;
            Vec3_dtor(auStack_30,0xffffffff,pcVar6,ar7);
          }
          goto LAB_8c107c10;
        }
      }
      ar7_00 = FUN_8c0e98f0;
      uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,FUN_8c0e98f0);
      ar7 = (char *)ar7_00;
      if (((char)uVar1 == '\x03') &&
         (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),ar5,pcVar6,ar7_00), ar7 = (char *)ar7_00,
         iVar3 == -1)) {
        pcVar6 = FUN_8c035000;
        ar5 = (code *)FUN_8c035000(*(int *)(ar6 + 4),ar5,FUN_8c035000,ar7_00);
        ar7 = (char *)ar7_00;
        if ((0 < (int)ar5) &&
           ((((iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7_00)
              , ar7 = (char *)ar7_00, iVar3 == 0 && ((char)ar4[0x87c] < '\x03')) &&
             (ar5 = (code *)0x878, *(int *)(ar4 + 0x878) == 0)) &&
            (uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),0x878,pcVar6,ar7_00), ar7 = (char *)ar7_00,
            (char)uVar1 == '\0')))) {
          if (*(int *)(ar4 + 0x40) != 0x14) {
            uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7_00);
            FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,ar7_00);
            pcVar5 = "EVENT_QUIZ";
            uVar1 = 0;
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ");
            FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,uVar1,pcVar5);
            *(int *)(ar4 + 4) = 0xd;
            *(int *)(ar4 + 8) = 99;
            *(int *)(ar4 + 0xc) = 0;
            ar7 = (char *)0x21;
            *(int *)(ar4 + 0x40) = 0x21;
            *(int *)(ar4 + 0x840) = 0x21;
            DAT_8c1eee30 = 0x21;
            pcVar6 = (code *)0xb;
            *(int *)(ar4 + 0x844) = 0xb;
            DAT_8c1eee34 = 0xb;
            *(int *)(ar4 + 0x848) = 10;
            DAT_8c1eee38 = 10;
            ar4[0x80] = (code)0x0;
            Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,0xb,0x21);
            Vec3_assign_wrap_063818(ar4,auStack_40,pcVar6,ar7);
            Vec3_dtor(auStack_40,0xffffffff,pcVar6,ar7);
            if (cVar7 == '\0') {
              *(int *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xc444960000;
            }
            Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
            Vec3_assign_wrap_05f640(ar4,auStack_50,pcVar6,ar7);
            ar5 = (code *)0xffffffff;
            Vec3_dtor(auStack_50,0xffffffff,pcVar6,ar7);
          }
          goto LAB_8c107c10;
        }
      }
      uVar2 = FUN_8c02602c(*(int *)(ar6 + 0x18),ar5,pcVar6,ar7);
      ar5 = (code *)0xa;
      iVar3 = libgcc_divide_helper_01031c(uVar2 & 0xffff,10,pcVar6,ar7);
      if (iVar3 == 1) {
        ar5 = *(code **)(ar4 + 0x878);
        if (0 < (int)ar5) {
          libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),3,pcVar6,ar7);
          iVar3 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),0x3c,pcVar6,ar7);
          if (2 < iVar3) {
            iVar3 = 2;
          }
          FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7);
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (code *)0x0;
          ar5 = (code *)0x3;
          FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL");
        }
        uVar1 = FUN_8c0e98f0(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7);
        if (((char)uVar1 == '\x03') &&
           (iVar3 = FUN_8c035000(*(int *)(ar6 + 4),ar5,pcVar6,ar7), iVar3 == 0)) {
          libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),3,pcVar6,ar7);
          iVar3 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x878),0x3c,pcVar6,ar7);
          if (2 < iVar3) {
            iVar3 = 2;
          }
          FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7);
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (code *)0x0;
          ar5 = (code *)0x3;
          FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL");
        }
      }
    }
  }
LAB_8c107c10:
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,pcVar6,ar7);
  if ((short)uVar1 == 3) {
    ar5 = FUN_8c0637c8;
    uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,ar7);
    if ((char)uVar1 == '\0') {
      uVar2 = get_field_a0_035724(*(int *)(ar6 + 0x18),ar5,pcVar6,get_field_a0_035724);
      pcVar6 = (code *)(uVar2 & 0xff);
      ar7 = (char *)pcVar6;
      if (pcVar6 == (code *)0x0) {
        uVar1 = FUN_8c05eec4(*(int *)(ar6 + 0xc),*(int *)(ar6 + 0xc),0,0);
        ar5 = (code *)(int)(char)uVar1;
        if (((ar5 == (code *)0x2) &&
            (iVar3 = FUN_8c02c518(*(int *)(ar6 + 4),2,pcVar6,ar7), iVar3 == -1)) &&
           (iVar3 = get_field_4_062878(*(int *)(ar6 + 0xc),ar5,pcVar6,ar7), iVar3 == 1)) {
          ar5 = (code *)0x0;
          FUN_8c063800(*(int *)(ar6 + 0xc),0,pcVar6,ar7,pcVar4);
          *(int *)(ar4 + 0x850) = -10;
          *(int *)(ar4 + 0x858) = 0;
        }
      }
    }
  }
  uVar1 = FUN_8c02bef8(*(int *)(ar6 + 4),ar5,pcVar6,ar7);
  if ((short)uVar1 != 3) {
    return (int)(short)uVar1;
  }
  iVar3 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar1 = get_field_a0_035724(*(int *)(ar6 + 0x18),ar5,pcVar6,ar7);
  if ((char)uVar1 != '\0') {
    return (int)(char)uVar1;
  }
  if (*(int *)(ar4 + 0x850) != -10) {
    return *(int *)(ar4 + 0x850);
  }
  pcVar4 = (code *)FUN_8c0637c8(*(int *)(ar6 + 0xc),*(int *)(ar6 + 0xc),pcVar6,ar7);
  if ((char)pcVar4 == '\0') {
    iVar3 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7);
    pcVar4 = (code *)0x1;
    if (iVar3 != 1) {
      if (*(int *)(ar4 + 900) == -1) {
        FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
        pcVar5 = "REQUEST_ATTENTION";
        FUN_8c0303b8(ar4 + 0x9c,10,0,"REQUEST_ATTENTION",&DAT_8c1eeec3);
        *(int *)(ar4 + 0xfc) = 0;
        pcVar6 = ar4 + 0x9c;
        iVar3 = FUN_8c0f8320(0x8c35468c,*(int *)(ar4 + 0x388),pcVar6,pcVar5);
        *(int *)(ar4 + 900) = iVar3;
        *(int *)(ar4 + 0x14c) = 0;
        FUN_8c030870(ar4 + 0x9c,2,pcVar6,pcVar5);
      }
      *(int *)(ar4 + 0x858) = *(int *)(ar4 + 0x858) + 1;
      pcVar4 = ar4;
      goto LAB_8c107eb4;
    }
  }
  uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,ar7);
  if (((char)uVar1 == '\0') &&
     (pcVar4 = (code *)FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), pcVar4 == (code *)0x1)) {
    pcVar4 = (code *)0x1;
    FUN_8c0637c0(*(int *)(ar6 + 0xc),1,pcVar6,ar7);
  }
LAB_8c107eb4:
  uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,FUN_8c0637c8);
  pcVar5 = (char *)(int)(char)uVar1;
  pcVar6 = (code *)(int)(char)uVar1;
  if ((pcVar6 == (code *)0x1) && (pcVar4 = ar6, iVar3 = FUN_8c02fcc4(ar4,ar6,1,pcVar5), iVar3 == 1))
  {
    pcVar4 = *(code **)(ar4 + 900);
    if (pcVar4 == (code *)0xffffffff) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,pcVar5);
      pcVar5 = "EVENT_GET_WORMBOX";
      FUN_8c0303b8(ar4 + 0x9c,0x2a,0,"EVENT_GET_WORMBOX",&DAT_8c1eeec3);
      *(int *)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      pcVar4 = *(code **)(ar4 + 0x388);
      iVar3 = FUN_8c0f8320(0x8c35468c,pcVar4,pcVar6,pcVar5);
      *(int *)(ar4 + 900) = iVar3;
      *(int *)(ar4 + 0x14c) = 1;
    }
    if ((*(int *)(ar4 + 0x14c) != 0) &&
       (pcVar4 = *(code **)(ar4 + 900), pcVar4 != (code *)0xffffffff)) {
      *(int *)(ar4 + 4) = 0xd;
      *(int *)(ar4 + 8) = 0x5f;
      *(int *)(ar4 + 0xc) = 0;
      *(int *)(ar4 + 0x840) = 0x14;
      DAT_8c1eee30 = 0x14;
      *(int *)(ar4 + 0x844) = 0xb;
      DAT_8c1eee34 = 0xb;
      *(int *)(ar4 + 0x848) = 10;
      DAT_8c1eee38 = 10;
      Vec3_ctor_copy(auStack_60,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
      Vec3_assign_wrap_063818(ar4,auStack_60,pcVar6,pcVar5);
      Vec3_dtor(auStack_60,0xffffffff,pcVar6,pcVar5);
      if (cVar7 == '\0') {
        *(int *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      Vec3_ctor_copy(auStack_70,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
      Vec3_assign_wrap_05f640(ar4,auStack_70,pcVar6,pcVar5);
      pcVar4 = (code *)0xffffffff;
      Vec3_dtor(auStack_70,0xffffffff,pcVar6,pcVar5);
      ar4[0x80] = (code)0x0;
    }
  }
  iVar3 = 0x858;
  if (300 < *(int *)(ar4 + 0x858)) {
    uVar1 = FUN_8c0637c8(*(int *)(ar6 + 0xc),pcVar4,pcVar6,pcVar5);
    iVar3 = (int)(char)uVar1;
    if ((char)uVar1 == '\0') {
      *(int *)(ar4 + 0x850) = 0;
      iVar3 = 0x858;
      *(int *)(ar4 + 0x858) = 0;
    }
  }
  return iVar3;
}

__asm__(".globl _s_EVENT_QUIZ_107596\n.set _s_EVENT_QUIZ_107596, _s_EVENT_QUIZ_107596_def\n");
//@unit 8c1080dc
#include "../decls.h"
int s_REACTION_TITILLATE_1080e0_def(int ar4,int *ar5,int ar6,undefined *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(0x84 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1a) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x1a) &&
         (*(undefined4 *)(ar4 + 0x40) = 0x1a, *(int *)(0x384 + ar4) == -1)) {
        FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
        ar7 = (&DATA_8c1eee90) + 0x376;
        (*(code *)(&FUN_8c0303b8))
                  (ar4 + 0x9c,0x28,0,ar7,(&DATA_8c1eee90) + 0x33);
        *(undefined4 *)(0xfc + ar4) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (*(code *)(&FUN_8c0f8320))
                          (0x8c35468c,*(undefined4 *)(0x388 + ar4),iVar2,ar7);
        *(undefined4 *)(0x384 + ar4) = uVar1;
        *(undefined4 *)(0x14c + ar4) = 0;
        FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1a;
      *(undefined4 *)(0x840 + ar4) = 0x1a;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1a;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x1a) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(0x840 + ar4) = 0;
    *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0;
  }
  if (*(char *)(0x85 + ar4) == '\x01') {
    if ((*(int *)(ar4 + 0x40) == 0x1b) || (*(int *)(ar4 + 0x40) != 0)) {
      if (*(int *)(ar4 + 0x40) == 0x1b) {
        *(undefined4 *)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(0x840 + ar4) = 0x1b;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1b;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
    }
  }
  if ((*(char *)(0x87 + ar4) == '\x01') && (*(int *)(ar4 + 0x40) != 0x19)) {
    if ((*(int *)(ar4 + 0x40) == 0) ||
       ((*(int *)(ar4 + 0x40) == 3 || (*(int *)(ar4 + 0x40) == 0x14)))) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x19;
      *(undefined4 *)(0x840 + ar4) = 0x19;
      *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x19;
      *(undefined4 *)(0x844 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
      *(undefined4 *)(0x848 + ar4) = 0x22;
      *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7);
      ar7 = (&DATA_8c1eee90) + 0x389;
      iVar2 = 4;
      FUN_8c0306d4(ar4 + 0x9c,0x27,4,ar7);
    }
    else if (*(int *)(ar4 + 0x40) == 0x19) {
      *(undefined4 *)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (**(code **)(0x11c + *ar5))(ar5,0xd,iVar2,ar7);
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (**(code **)(0x100 + *ar5))(ar5,0xd,0,ar7);
    iVar2 = (**(code **)(0xb4 + *(int *)(iVar2 + 8)))(iVar2,uVar1,a6,ar7);
    if (((iVar2 == 1) &&
        (uVar1 = (*(code *)(&get_field_a0_035724))
                           (*(undefined4 *)(ar6 + 0x18),uVar1,a6,ar7), (byte)uVar1 < 2)) &&
       (*(int *)(ar4 + 0x40) != 0x1f)) {
      if (*(int *)(ar4 + 0x40) == 0) {
        uVar1 = (**(code **)(0x100 + *ar5))(ar5,0xd,0,ar7);
        *(undefined4 *)(ar4 + 0x6c) = uVar1;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x41;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
        *(undefined4 *)(0x840 + ar4) = 0x1f;
        *(undefined4 *)((&DATA_8c1eed94) + 0x9c) = 0x1f;
        *(undefined4 *)(0x844 + ar4) = 0x22;
        *(undefined4 *)((&DATA_8c1eed94) + 0xa0) = 0x22;
        *(undefined4 *)(0x848 + ar4) = 0x22;
        *(undefined4 *)((&DATA_8c1eed94) + 0xa4) = 0x22;
      }
      else if (*(int *)(ar4 + 0x40) == 0x1f) {
        *(undefined4 *)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(0x84 + ar4) = 0;
  *(undefined1 *)(0x85 + ar4) = 0;
  iVar2 = 0x87;
  *(undefined1 *)(0x87 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _s_REACTION_TITILLATE_1080e0\n.set _s_REACTION_TITILLATE_1080e0, _s_REACTION_TITILLATE_1080e0_def\n");
//@unit 8c108560
#include "../decls.h"
int s_GRATIFIC_RID_HOT_108562_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c02bebc(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,7,0,(&DATA_8c1eee90) + 0x39a,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,8,0,(&DATA_8c1eee90) + 0x3ab,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,0x1a,0,(&DATA_8c1eee90) + 0x3bd,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl _s_GRATIFIC_RID_HOT_108562\n.set _s_GRATIFIC_RID_HOT_108562, _s_GRATIFIC_RID_HOT_108562_def\n");
//@unit 8c10862c
#include "../decls.h"
int FUN_8c10862c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  char cVar4;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar4 = '\0';
  ar6_00 = ar6;
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(ar4 + 0x118) = 0;
      uVar3 = FUN_8c02c5ac(*(undefined4 *)(ar6 + 4),ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x118) = 1;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x18,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x118) = 2;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x30,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 3:
      goto switchD_8c108664_caseD_3;
    case 4:
      *(undefined4 *)(ar4 + 0x118) = 4;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 5:
      *(undefined4 *)(ar4 + 0x118) = 5;
      uVar3 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x78,ar5,ar6_00,ar7);
      *(int *)(ar4 + 0xfc) = (int)(char)uVar3;
    }
  }
  else {
switchD_8c108664_caseD_3:
    *(undefined4 *)(ar4 + 0x118) = 7;
    *(undefined4 *)(ar4 + 0xfc) = 0;
    if (*(int *)(ar4 + 0x40) == 6) {
      *(undefined4 *)(ar4 + 0x118) = 9;
    }
    iVar1 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x118) = 8;
    }
  }
  if ((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 6)) {
    if ((*(int *)(ar4 + 900) == -1) &&
       ((iVar1 = get_field_178_035734(*(undefined4 *)(ar6 + 8),ar5,ar6_00,ar7), iVar1 == 0 &&
        (iVar1 = get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7), iVar1 == 0)))) {
      uVar3 = 0;
      iVar1 = s_JUNGLE_0309ca(ar4 + 0x9c,0,ar6_00,ar7);
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = FUN_8c025f68(iVar1 * 0x18 + *(int *)(ar6 + 4),uVar3,ar6_00,ar7);
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        uVar3 = FUN_8c02d1c8(*(int *)(ar6 + 4) + 0xa8,uVar3,ar6_00,ar7);
        if ((char)uVar3 == '\x01') {
          *(undefined4 *)(ar4 + 0x148) = 1;
        }
        ar6_00 = ar4 + 0x9c;
        uVar3 = FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 900) = uVar3;
      }
    }
    if ((*(int *)(ar4 + 0x40) == 6) && (*(int *)(ar4 + 900) != -1)) {
      FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7);
    }
  }
  iVar1 = *(int *)(ar4 + 4);
  if (((iVar1 == 0) && (iVar1 = 0, *(int *)(ar4 + 0x14c) != 0)) &&
     (iVar1 = *(int *)(ar4 + 900), iVar1 != -1)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0x14;
    DAT_8c1eee30 = 0x14;
    *(undefined4 *)(ar4 + 0x844) = 0xb;
    DAT_8c1eee34 = 0xb;
    *(undefined4 *)(ar4 + 0x848) = 10;
    DAT_8c1eee38 = 10;
    Vec3_ctor_copy(auStack_24,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_063818(ar4,auStack_24,ar6_00,ar7);
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
    if (cVar4 == '\0') {
      *(undefined4 *)(ar4 + 0x30) = 0x44960000;
    }
    else {
      *(undefined8 *)(ar4 + 0x30) = 0x8c05f64044960000;
    }
    Vec3_ctor_copy(auStack_34,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_34,ar6_00,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
    iVar1 = 0x80;
    *(undefined1 *)(ar4 + 0x80) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10862c\n.set _FUN_8c10862c, _FUN_8c10862c_def\n");
//@unit 8c1089e4
#include "../decls.h"
undefined4 FUN_8c1089e4_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined4 in_fr1;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined3 uVar8;
  undefined4 ain0;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  if (*(int *)(ar4 + 900) != -1) {
    if ((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x14c) != 0)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0x14;
      DAT_8c1eee30 = 0x14;
      *(undefined4 *)(ar4 + 0x844) = 0xb;
      DAT_8c1eee34 = 0xb;
      *(undefined4 *)(ar4 + 0x848) = 10;
      DAT_8c1eee38 = 10;
      Vec3_ctor_copy(auStack_2c,ar6[5] + 0x10,ar6_00,ar7);
      Vec3_assign_wrap_063818(ar4,auStack_2c,ar6_00,ar7);
      Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
      if (cVar7 == '\0') {
        *(undefined4 *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        in_fr1 = 0x44960000;
        *(undefined8 *)(ar4 + 0x30) = 0x8044960000;
      }
      *(undefined1 *)(ar4 + 0x80) = 0;
    }
    Vec3_ctor_copy(auStack_3c,ar6[5] + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_05f640(ar4,auStack_3c,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    FUN_8c02f670(*ar6,uVar4,ar6_00,ar7,auStack_4c);
    Vec3_sub(auStack_4c,ar6[5] + 0x10,ar6_00,ar7,auStack_5c);
    Vec3_assign(&uStack_1c,auStack_5c,ar6_00,ar7);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    uVar4 = 0xffffffff;
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(uStack_14,in_fr1);
    }
    else {
      dVar5 = (double)CONCAT44(uStack_10,uStack_14);
    }
    if (cVar6 == '\0') {
      iVar3 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(ar4 + 0x158) = iVar3;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(uStack_1c,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(uStack_18,uStack_1c);
    }
    if (cVar6 == '\0') {
      iVar3 = (int)(float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(ar4 + 0x15c) = iVar3;
    iVar3 = get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7);
    if ((iVar3 == 3) || (iVar3 = get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7), iVar3 == 5)) {
      ar5 = 1;
      FUN_8c065ca4(ar6[3],1,ar6_00,ar7);
    }
    else {
      ar5 = 0;
      FUN_8c065ca4(ar6[3],0,ar6_00,ar7);
    }
    iVar3 = get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7);
    if (iVar3 == 2) {
      *(undefined4 *)(ar4 + 0x14c) = 0;
    }
    iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7);
    if (iVar3 == 0) {
      *(undefined4 *)(ar4 + 0x94) = 0;
      uVar4 = 3;
      FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
      if (*(int *)(ar4 + 0x40) == 10) {
        *(undefined4 *)(ar4 + 4) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0;
        *(undefined4 *)(ar4 + 8) = 0;
        *(undefined4 *)(ar4 + 0xc) = 0;
      }
      uVar2 = FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7);
      if ((short)uVar2 == 0) {
        uVar4 = 0;
        iVar3 = FUN_8c0fa388(0x8c35468c,0,ar6_00,ar7);
        if (iVar3 == 1) {
          ar6_00 = (undefined4 *)0x1b;
          uVar4 = 0xb;
          FUN_8c0b9ed4(ar6[6],0xb,0x1b,ar7);
        }
      }
      uVar2 = FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7);
      sVar1 = (short)uVar2;
      if (sVar1 == 3) {
        uVar2 = get_field_a0_035724(ar6[6],uVar4,ar6_00,ar7);
        uVar8 = CONCAT21(sVar1,(char)uVar2);
        if ((char)uVar2 == '\0') {
          uVar2 = FUN_8c0637c8(ar6[3],uVar4,ar6_00,ar7);
          ain0 = CONCAT31(uVar8,(char)uVar2);
          if (((char)uVar2 == '\x01') && (*(int *)(ar4 + 0x10c) == 1)) {
            ar6_00 = (undefined4 *)0x1b;
            FUN_8c0b9ed4(ar6[6],0xc,0x1b,ar7);
            FUN_8c0637c0(ar6[3],0,ar6_00,ar7);
            FUN_8c0e9888(ar6[3],1,ar6_00,ar7);
            FUN_8c064ba0(ar6[6],1,ar6_00,ar7);
            *(undefined4 *)(ar4 + 0x10c) = 0;
            uVar4 = 2;
            FUN_8c061180(ar6[3],2,ar6_00,ar7,ain0);
            *(undefined4 *)(ar4 + 0x850) = 0;
          }
        }
      }
      if ((*(int *)(ar4 + 0x100) < 1) ||
         (iVar3 = get_field_b0_065c8c(ar6[3],uVar4,ar6_00,ar7), *(int *)(ar4 + 0x100) < iVar3)) {
        ar5 = 0;
        FUN_8c02af68(*ar6,0,ar6_00,ar7);
      }
      else {
        FUN_8c065c80(ar6[3],*(undefined4 *)(ar4 + 0x100),ar6_00,ar7);
        FUN_8c02af68(*ar6,1,ar6_00,ar7);
        ar6_00 = (undefined4 *)0x1b;
        ar5 = 0xd;
        FUN_8c0b9ed4(ar6[6],0xd,0x1b,ar7);
      }
      if (*(int *)(ar4 + 0x10c) == 0xf) {
        *(undefined4 *)(ar4 + 4) = 5;
        *(undefined4 *)(ar4 + 8) = 0x55;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        *(undefined4 *)(ar4 + 0x840) = 0xe;
        DAT_8c1eee30 = 0xe;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
        *(undefined4 *)(ar4 + 0x10c) = 0;
      }
      if (*(int *)(ar4 + 0x10c) == 0x10) {
        FUN_8c02ce10(ar6[1] + 0x90,0,ar6_00,ar7);
        ar5 = 1;
        FUN_8c0637c0(ar6[3],1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x20;
        *(undefined4 *)(ar4 + 0x840) = 0x20;
        DAT_8c1eee30 = 0x20;
        *(undefined4 *)(ar4 + 0x844) = 0x22;
        DAT_8c1eee34 = 0x22;
        *(undefined4 *)(ar4 + 0x848) = 0x22;
        DAT_8c1eee38 = 0x22;
        *(undefined4 *)(ar4 + 0x10c) = 0;
        FUN_8c0fa6c8(0x8c35468c,ar5,ar6_00,ar7);
      }
      s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5,ar6_00,ar7);
      *(undefined1 *)(ar4 + 0x80) = 1;
      *(undefined4 *)(ar4 + 900) = 0xffffffff;
      *(undefined4 *)(ar4 + 0xfc) = 0;
    }
  }
  iVar3 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7);
  if ((iVar3 == 0) && ((*(int *)(ar4 + 0x40) == 10 || (*(int *)(ar4 + 0x40) == 0xb)))) {
    FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0xfc) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 0x80) = 1;
  }
  uVar4 = Vec3_dtor(&uStack_1c,0xffffffff,ar6_00,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c1089e4\n.set _FUN_8c1089e4, _FUN_8c1089e4_def\n");
//@unit 8c108f3c
#include "../decls.h"
int FUN_8c108f3c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
  if (*(int *)(ar4 + 900) == -1) {
    *(undefined4 *)(ar4 + 0x94) = 0;
    iVar3 = *(int *)(ar4 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        *(undefined4 *)(ar4 + 0x94) = 0x14;
        break;
      case 1:
        *(undefined4 *)(ar4 + 0x94) = 0x2d;
        break;
      case 4:
        *(undefined4 *)(ar4 + 0x94) = 0x1e;
      }
    }
    iVar3 = *(int *)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              uVar2 = FUN_8c02c5ac(iVar1 * 0x18 + *(int *)(ar6 + 4),ar5,iVar3,ar7);
              if ('\0' < (char)uVar2) {
                iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
                if (iVar3 == 0) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(undefined4 *)(ar4 + 0x94) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
              if (iVar3 == 0) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 1) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 2) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 4) {
                *(undefined4 *)(ar4 + 0x94) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(undefined4 *)(ar4 + 0x94) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(undefined4 *)(ar4 + 0x94) = 0xf;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = get_field_140_025f70(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
          if (iVar3 == 0) {
            *(undefined4 *)(ar4 + 0x94) = 0x19;
          }
          else {
            *(undefined4 *)(ar4 + 0x94) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(undefined4 *)(ar4 + 0x94) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(undefined4 *)(ar4 + 0x94) = 0x14;
    }
  }
  iVar3 = *(int *)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(undefined4 *)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c108f3c\n.set _FUN_8c108f3c, _FUN_8c108f3c_def\n");
//@unit 8c1091cc
#include "../decls.h"
int s_IDLEACTION_TREMOR_1091d0_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (((*(int *)(ar4 + 900) == -1) &&
        (iVar2 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,ar6,ar7),
        iVar2 < 0x11)) && (10 < iVar2)) {
                    
      switch(iVar2) {
      case 0xb:
        ar7 = "IDLEACTION_PAW";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_PAW",&DAT_8c1eeec3);
        break;
      case 0xc:
        ar7 = "IDLEACTION_TREMOR";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_TREMOR",&DAT_8c1eeec3);
        break;
      case 0xd:
        ar7 = "IDLEACTION_BITE";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_BITE",&DAT_8c1eeec3);
        break;
      case 0xe:
        ar7 = "IDLEACTION_ACTION_JUMP";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_ACTION_JUMP",&DAT_8c1eeec3);
        break;
      case 0xf:
        if (*(char *)(ar4 + 0x98) < '\x05') {
          ar7 = "IDLEACTION_STAND_SWIM";
          iVar1 = 0;
          ar5 = 0x19;
          FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_STAND_SWIM",&DAT_8c1eeec3);
        }
        else {
          ar7 = "EVENT_WANT_LAND";
          iVar1 = 0;
          ar5 = 0x19;
          FUN_8c030568(ar4 + 0x9c,0x19,0,"EVENT_WANT_LAND",&DAT_8c1eeec3);
        }
        break;
      case 0x10:
        ar7 = "IDLEACTION_REVERSE_SWIM";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_REVERSE_SWIM",&DAT_8c1eeec3);
      }
    }
    iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar1,ar7);
    if (iVar1 == 0x11) {
      iVar1 = FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"IDLEACTION_HEAD_DAMAGE");
    }
  }
  return iVar1;
}

__asm__(".globl _s_IDLEACTION_TREMOR_1091d0\n.set _s_IDLEACTION_TREMOR_1091d0, _s_IDLEACTION_TREMOR_1091d0_def\n");
//@unit 8c1093a4
#include "../decls.h"
int s_STATUS_SUCKED_1093aa_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar5_00;
  int *ar6_00;
  undefined4 in_stack_ffffffac;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,ar5,ar6,ar7);
  if ((iVar1 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar1 = get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7);
    if ((iVar1 == 0) && (iVar1 = get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7), iVar1 == 0)) {
      ar6_00 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      ar5_00 = (int *)0xc7;
      FUN_8c02f298(ar4,199,ar6_00,ar7);
      *(undefined1 *)(ar4 + 0x98) = 10;
    }
    else if (*(int *)(ar4 + 4) != 0xb) {
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 0xb;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0x40) = 0xd;
      FUN_8c02f298(ar4,0x4af,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0xd;
      DAT_8c1eee30 = 0xd;
      *(undefined4 *)(ar4 + 0x844) = 0x22;
      DAT_8c1eee34 = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (int *)0x0;
      ar5_00 = (int *)0x19;
      FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED");
      if (*(int *)(ar4 + 0x6c) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                  (*(int *)(ar4 + 0x6c),ar5_00,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(ar4 + 0x864) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7);
    if ((((iVar1 == 1) && (*(char *)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7), iVar1 == -1)) && (*(int *)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(ar4 + 0x864) = 1;
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      ar5_00 = (int *)0x0;
      FUN_8c109798(ar6[3],0,ar6_00,ar7,in_stack_ffffffac);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7);
    in_stack_ffffffac = CONCAT22((short)uVar2,(short)in_stack_ffffffac);
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7);
  if (((iVar1 == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 900) == -1)) {
    iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7);
    if ((iVar1 == 3) || (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 4)) {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if (iVar1 < 1) {
        ar7 = (char *)0xa;
        ar5_00 = ar5;
        ar6_00 = ar6;
        iVar1 = FUN_8c02f880(ar4,ar5,ar6,10);
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = FUN_8c03584c(ar6[3],ar5_00,ar6_00,ar7);
      if (((char)uVar2 == '\x02') && (*(char *)(ar4 + 0x98) < '\b')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
    else {
      ar5_00 = (int *)0xf;
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
      if ((0 < iVar1) && (*(char *)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL");
        ar5_00 = (int *)0x1;
        FUN_8c06643c(ar6[3],1,ar6_00,ar7);
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7), iVar1 == 2)) &&
     (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,ar6_00,ar7);
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(int *)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(ar4 + 4), iVar1 != 6)))) {
      FUN_8c02f298(ar4,0x2b9,ar6_00,ar7);
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_SUCKED_1093aa\n.set _s_STATUS_SUCKED_1093aa, _s_STATUS_SUCKED_1093aa_def\n");
//@unit 8c109798
#include "../decls.h"
undefined4 FUN_8c109798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c109798\n.set _FUN_8c109798, _FUN_8c109798_def\n");
//@unit 8c1097a0
#include "../decls.h"
undefined4 get_field_8_1097a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_1097a0\n.set _get_field_8_1097a0, _get_field_8_1097a0_def\n");
//@unit 8c1097a8
#include "../decls.h"
int s_STATUS_LIFE_1097b2_def(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = get_field_124_027930(ar6[2],ar5,ar6,ar7);
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = FUN_8c02fcc4(ar4,ar6,piVar5,ar7), iVar1 == 1)) {
    uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
    piVar3 = (int *)0x3c;
    iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
    if (1 < iVar1) {
      piVar3 = (int *)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (**(code **)(0x11c + *ar5))(ar5,3,piVar5,ar7);
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
        iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (int *)((int)piVar3 + 1);
      }
      uVar2 = FUN_8c02602c(ar6[6],uVar4,piVar5,ar7);
      piVar3 = (int *)0x3c;
      iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
      if ((((0 < iVar1) &&
           (uVar4 = FUN_8c02bef8(ar6[1],piVar3,piVar5,ar7), 6 < (short)uVar4)) &&
          (iVar1 = (*(code *)(&get_field_18_02d1a0))
                             (ar6[1] + 0xa8,piVar3,piVar5,ar7), 0 < iVar1)) &&
         (((iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7),
           iVar1 == 4 && (*(int *)(0x384 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(0x98 + ar4) < '\x04' && (*(int *)(ar4 + 4) == 0)))))))
         ) {
        ar7 = (&DATA_8c1eee90) + 0x22c;
        piVar5 = (int *)0x0;
        (*(code *)(&FUN_8c030568))
                  (ar4 + 0x9c,0x16,0,ar7,(&DATA_8c1eee90) + 0x33);
        piVar3 = (int *)0x0;
        FUN_8c109b10(ar6[1] + 0xa8,0,piVar5,ar7);
      }
    }
  }
  iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7);
  if ((iVar1 == 3) ||
     (iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7), iVar1 == 4)) {
    uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar2 & 0xffff,0x45,piVar5,ar7);
    if (iVar1 == 0x14) {
      *(undefined1 *)(0x854 + ar4) = 0;
    }
    iVar1 = (**(code **)(0x11c + *ar5))(ar5,3,piVar5,ar7);
    if (((((iVar1 == 1) && (iVar1 = *(int *)(0x384 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(0x98 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = FUN_8c02fcc4(ar4,ar6,piVar5,ar7), iVar1 == 1 &&
         (iVar1 = (*(code *)(&FUN_8c0637d0))
                            (*(undefined4 *)(0x7cc + ar6[6]),piVar3,piVar5,ar7), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(0x854 + ar4), iVar1 == 0)) {
      uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
      iVar6 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(0x854 + ar4) = 1;
        iVar1 = (*(code *)(&FUN_8c0303b8))
                          (ar4 + 0x9c,0x16,0,(&DATA_8c1eee90) + 0x48f,
                           (&DATA_8c1eee90) + 0x33);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LIFE_1097b2\n.set _s_STATUS_LIFE_1097b2, _s_STATUS_LIFE_1097b2_def\n");
//@unit 8c109b10
#include "../decls.h"
undefined4 FUN_8c109b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x1c) = (undefined1)ar5;
  return 0x1c;
}

__asm__(".globl _FUN_8c109b10\n.set _FUN_8c109b10, _FUN_8c109b10_def\n");
//@unit 8c109b18
#include "../decls.h"
undefined4 * FUN_8c109b18_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)get_field_8_066620(ar4,ar5,ar6,ar7);
    }
    else {
      get_field_8_066620(ar4,ar5,ar6,ar7);
      puVar2 = &DAT_8c109b94;
    }
  }
  else {
    puVar2 = (undefined4 *)&DAT_8c109b8c;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c109b18\n.set _FUN_8c109b18, _FUN_8c109b18_def\n");
//@unit 8c109b98
#include "../decls.h"
undefined4 FUN_8c109b98_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar2 = '\0';
  Vec3_ctor_zero(&uStack_18,ar5,ar6,ar7);
  a7 = auStack_44;
  a6 = auStack_40;
  a5 = auStack_3c;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  uVar1 = get_field_4_05eed8(ar4,a5,a6,a7);
  switch(uVar1) {
  case 6:
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7,auStack_38);
    uVar1 = Vec3_assign(&uStack_18,auStack_38,a6,a7);
    uVar1 = Vec3_assign(ar4 + 0x70,uVar1,a6,a7);
    Vec3_assign(ar4 + 0x28,uVar1,a6,a7);
    Vec3_dtor(auStack_38,0xffffffff,a6,a7);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar4 + 0x28) = uStack_18;
      *(undefined4 *)(ar4 + 0x70) = uStack_18;
      *(undefined4 *)(ar4 + 0x2c) = uStack_14;
      *(undefined4 *)(ar4 + 0x74) = uStack_14;
      *(undefined4 *)(ar4 + 0x30) = uStack_10;
      *(undefined4 *)(ar4 + 0x78) = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
      *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
      *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
      *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
      *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
      *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
    }
    break;
  case 0xd:
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7,auStack_28);
      Vec3_assign(&uStack_18,auStack_28,a6,a7);
      Vec3_dtor(auStack_28,0xffffffff,a6,a7);
      if (cVar2 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_18;
        *(undefined4 *)(ar4 + 0x70) = uStack_18;
        *(undefined4 *)(ar4 + 0x2c) = uStack_14;
        *(undefined4 *)(ar4 + 0x74) = uStack_14;
        *(undefined4 *)(ar4 + 0x30) = uStack_10;
        *(undefined4 *)(ar4 + 0x78) = uStack_10;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
        *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
      }
    }
  }
  uVar1 = Vec3_dtor(&uStack_18,0xffffffff,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c109b98\n.set _FUN_8c109b98, _FUN_8c109b98_def\n");
//@unit 8c109d98
#include "../decls.h"
uint Class_12c3c4_m6_109d98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c0fa2d8(0x8c35468c,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _Class_12c3c4_m6_109d98\n.set _Class_12c3c4_m6_109d98, _Class_12c3c4_m6_109d98_def\n");
//@unit 8c109dc4
#include "../decls.h"
undefined4 FUN_8c109dc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  
  if (*(char *)(0x98 + ar4) == '\x03') {
    ar5_00 = 1;
    uVar1 = FUN_8c109e34(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    if ((((char)uVar1 == '\x05') && (*(int *)(0x874 + ar4) == 0)) &&
       (uVar1 = FUN_8c02d1d0(*(int *)(ar5 + 4) + 0xa8,ar5_00,ar6,ar7),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c109dc4\n.set _FUN_8c109dc4, _FUN_8c109dc4_def\n");
//@unit 8c109e34
#include "../decls.h"
int FUN_8c109e34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (char)ar5 + 0xc);
}

__asm__(".globl _FUN_8c109e34\n.set _FUN_8c109e34, _FUN_8c109e34_def\n");
//@unit 8c109e40
#include "../decls.h"
int FUN_8c109e40_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe4;
  
  iVar1 = *(int *)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(ar4 + 0x98) = 3;
    FUN_8c02cb7c(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    FUN_8c02cb74(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7);
    uVar2 = 1;
    FUN_8c035718(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    iVar1 = FUN_8c02c340(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
    if (0x5e < iVar1) {
      uVar2 = get_field_4_02d1e0(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
      iVar1 = libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7);
      FUN_8c02cbbc(*(int *)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7);
    }
    iVar1 = 0x874;
    *(undefined4 *)(ar4 + 0x874) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109e40\n.set _FUN_8c109e40, _FUN_8c109e40_def\n");
//@unit 8c109f08
#include "../decls.h"
int FUN_8c109f08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_14;
  
  uStack_20 = ar5;
  uStack_14 = ar6;
  iVar1 = FUN_8c109dc4(ar4,auStack_24,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c109e40(ar4,auStack_24,ar6,ar7);
    iVar1 = 1;
    *(undefined4 *)0x8c27d430 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109f08\n.set _FUN_8c109f08, _FUN_8c109f08_def\n");
//@unit 8c109f58
#include "../decls.h"
undefined4 get_field_150_109f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x150 + ar4);
}

__asm__(".globl _get_field_150_109f58\n.set _get_field_150_109f58, _get_field_150_109f58_def\n");
//@unit 8c109f64
#include "../decls.h"
int FUN_8c109f64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x150;
  *(undefined4 *)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c109f64\n.set _FUN_8c109f64, _FUN_8c109f64_def\n");
//@unit 8c109f70
#include "../decls.h"
int Class_12c3c4_m7_109f70_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(char *)(0x854 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  *(undefined1 *)(0x98 + ar4) = *ar5;
  FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m7_109f70\n.set _Class_12c3c4_m7_109f70, _Class_12c3c4_m7_109f70_def\n");
//@unit 8c109fc0
#include "../decls.h"
undefined4 Class_12c3c4_m8_109fc0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(int *)(ar5 + 4) = (int)*(char *)(0x854 + ar4);
  *ar5 = *(undefined1 *)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(0x99 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m8_109fc0\n.set _Class_12c3c4_m8_109fc0, _Class_12c3c4_m8_109fc0_def\n");
//@unit 8c10a00c
#include "../decls.h"
int Class_12c3c4_m9_10a00c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar6 == 2) {
    *(char *)(0x865 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  else {
    *(char *)(0x854 + ar4) = (char)*(undefined4 *)(ar5 + 4);
  }
  *(undefined1 *)(0x98 + ar4) = *ar5;
  FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m9_10a00c\n.set _Class_12c3c4_m9_10a00c, _Class_12c3c4_m9_10a00c_def\n");
//@unit 8c10a074
#include "../decls.h"
undefined4 Class_12c3c4_m10_10a074_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 2) {
    *(int *)(ar5 + 4) = (int)*(char *)(0x865 + ar4);
  }
  else {
    *(int *)(ar5 + 4) = (int)*(char *)(0x854 + ar4);
  }
  *ar5 = *(undefined1 *)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(0x99 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m10_10a074\n.set _Class_12c3c4_m10_10a074, _Class_12c3c4_m10_10a074_def\n");
//@unit 8c10a0dc
#include "../decls.h"
int Class_12c3c4_m5_10a0dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7);
    ar5_00 = 3;
    FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
    *(undefined1 *)(0x80 + ar4) = 1;
    *(undefined4 *)(0x384 + ar4) = 0xffffffff;
    *(undefined4 *)(0xfc + ar4) = 0;
    s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7);
    if ((*(int *)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 10)) {
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x14;
      *(undefined4 *)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m5_10a0dc\n.set _Class_12c3c4_m5_10a0dc, _Class_12c3c4_m5_10a0dc_def\n");
//@unit 8c10a16c
#include "../decls.h"
undefined * Class_12c3c4_m4_10a16c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x7;
  if ((iVar2 < 8) && (-1 < iVar2)) {
    puVar1 = (&switchdata_8c10a18c_8c10a190)[iVar2];
                    
    switch(iVar2) {
    case 0:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,10,0x1b,ar7);
      break;
    case 3:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x10,0x1b,ar7);
      break;
    case 6:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x12,0x1b,ar7);
      break;
    case 7:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x13,0x1b,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12c3c4_m4_10a16c\n.set _Class_12c3c4_m4_10a16c, _Class_12c3c4_m4_10a16c_def\n");
//@unit 8c10a1fc
#include "../decls.h"
undefined4 get_field_100_10a1fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x100 + ar4);
}

__asm__(".globl _get_field_100_10a1fc\n.set _get_field_100_10a1fc, _get_field_100_10a1fc_def\n");
//@unit 8c10a208
#include "../decls.h"
undefined4 get_field_870_10a208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x870 + ar4);
}

__asm__(".globl _get_field_870_10a208\n.set _get_field_870_10a208, _get_field_870_10a208_def\n");
//@unit 8c10a214
#include "../decls.h"
undefined4 FUN_8c10a214_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b20,ar5,ar6,ar7);
  uVar3 = 0x8c4708e0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708e0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b30,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4708ec;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708ec,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b40,pcVar2,uVar3,ar7);
  uVar3 = 0x8c4708f8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c4708f8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c126b50,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c470904,ar7);
  if (cVar4 == '\0') {
    _DAT_8c126b60 = CONCAT44(_UNK_8c126b64,0x800000);
                    
  }
  else {
    _DAT_8c126b60 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c10a214\n.set _FUN_8c10a214, _FUN_8c10a214_def\n");
//@unit 8c10a2cc
#include "../decls.h"
undefined4 FUN_8c10a2cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
  thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7);
  uVar1 = thunk_FUN_8c013dfc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10a2cc\n.set _FUN_8c10a2cc, _FUN_8c10a2cc_def\n");
//@unit 8c10a308
#include "../decls.h"
undefined4 FUN_8c10a308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int ar6_00;
  char cVar2;
  
  *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 2;
  *(undefined1 *)(ar4 + 0x50) = 0;
  if (*(float *)(ar4 + 0xa0) <= 0.0) {
    memset(*(undefined4 *)(ar4 + 0x58),0,*(int *)(ar4 + 0x7c) << 2,ar7);
    *(undefined1 *)(ar4 + 0x51) = 0;
  }
  else {
    memmove(*(undefined4 *)(ar4 + 0x58),*(undefined4 *)(ar4 + 0xa8),*(int *)(ar4 + 0x7c) << 2,ar7);
    ar6_00 = *(int *)(ar4 + 0x7c) << 2;
    memmove(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0xa8),ar6_00,ar7);
    uVar1 = FUN_8c11b93c(*(undefined4 *)(ar4 + 0xb0),*(undefined4 *)(ar4 + 0x54),ar6_00,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(ar4 + 0x51) = 1;
  }
  cVar2 = '\0';
  memset(*(undefined4 *)(ar4 + 0x5c),0,*(int *)(ar4 + 0x7c) << 2,ar7);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x60) = 0x47c35000;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0xa0);
  }
  else {
    *(undefined8 *)(ar4 + 0x60) = 0x3f00000047c35000;
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar4 + 0xa0);
  }
  *(undefined4 *)(ar4 + 0x68) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x6c) = 0x3f000000;
    *(undefined4 *)(ar4 + 0x70) = 0;
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = 0x2fd62fe63f000000;
    *(undefined8 *)(ar4 + 0x70) = 0x8c013ef400000000;
  }
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a308\n.set _FUN_8c10a308, _FUN_8c10a308_def\n");
//@unit 8c10a312
#include "../decls.h"
undefined4 FUN_8c10a312_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  int ar6_00;
  undefined4 unaff_r13;
  int unaff_r14;
  undefined4 in_fr3;
  undefined8 uVar2;
  byte in_FPSCR_DN;
  byte bVar3;
  byte in_FPSCR_PR;
  byte bVar4;
  byte in_FPSCR_SZ;
  byte bVar5;
  char cVar6;
  
  *(undefined4 *)(unaff_r14 + 0x30) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x34) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x38) = unaff_r13;
  *(undefined4 *)(in_r0 + unaff_r14) = 2;
  *(char *)(unaff_r14 + 0x50) = (char)unaff_r13;
  if (in_FPSCR_SZ == 0) {
    in_fr3 = _DAT_8c10a3f8;
  }
  if (in_FPSCR_SZ == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(0xa0 + unaff_r14),in_fr3);
  }
  else {
    uVar2 = *(undefined8 *)(0xa0 + unaff_r14);
  }
  if (in_FPSCR_PR != 0 || (float)((ulonglong)uVar2 >> 0x20) <= (float)uVar2) {
    (*(code *)(&memset))
              (*(undefined4 *)(unaff_r14 + 0x58),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
    *(char *)(unaff_r14 + 0x51) = (char)unaff_r13;
  }
  else {
    (*(code *)(&memmove))
              (*(undefined4 *)(unaff_r14 + 0x58),*(undefined4 *)(unaff_r14 + 0xa8),
               *(int *)(unaff_r14 + 0x7c) << 2,ar7);
    ar6_00 = *(int *)(unaff_r14 + 0x7c) << 2;
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                    (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
    (*(code *)(&memmove))
              (*(undefined4 *)(unaff_r14 + 0x54),*(undefined4 *)(unaff_r14 + 0xa8),ar6_00,ar7);
    in_FPSCR_DN = 0;
    in_FPSCR_PR = 0;
    in_FPSCR_SZ = (byte)((((uint)bVar3 << 0x12 | (uint)bVar4 << 0x13 | (uint)bVar5 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
    uVar1 = (*(code *)(&FUN_8c11b93c))
                      (*(undefined4 *)(unaff_r14 + 0xb0),*(undefined4 *)(unaff_r14 + 0x54),ar6_00,
                       ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unaff_r14 + 0x51) = 1;
  }
  cVar6 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & 0xffe7ffff & 0x100000) >> 0x14);
  (*(code *)(&memset))
            (*(undefined4 *)(unaff_r14 + 0x5c),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x60) = (undefined4)DAT_8c10a408;
    *(undefined4 *)(unaff_r14 + 100) = *(undefined4 *)(unaff_r14 + 0xa0);
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x60) = CONCAT44((*(uint*)((uchar*)&DAT_8c10a408+4)),(undefined4)DAT_8c10a408);
    *(undefined8 *)(unaff_r14 + 100) = *(undefined8 *)(unaff_r14 + 0xa0);
  }
  *(undefined4 *)(unaff_r14 + 0x68) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x6c) = (*(uint*)((uchar*)&DAT_8c10a408+4));
    *(undefined4 *)(unaff_r14 + 0x70) = _DAT_8c10a3f8;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x6c) = CONCAT44(0,(*(uint*)((uchar*)&DAT_8c10a408+4)));
    *(ulonglong *)(unaff_r14 + 0x70) = CONCAT44((&memmove),_DAT_8c10a3f8);
  }
  *(undefined4 *)(unaff_r14 + 0x74) = unaff_r13;
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a312\n.set _FUN_8c10a312, _FUN_8c10a312_def\n");
//@unit 8c10a410
#include "../decls.h"
undefined4 FUN_8c10a410_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a6;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 extraout_fr3;
  undefined4 uVar4;
  undefined8 in_xd2;
  char cVar5;
  
  iVar1 = *(int *)(ar4 + 0x7c);
  *ar5 = *(undefined4 *)(ar4 + 0x4c);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(ar4 + 0x50);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(ar4 + 0x51);
  puVar2 = ar5 + 3;
  a6 = iVar1 * 4;
  memmove(puVar2,*(undefined4 *)(ar4 + 0x54),a6,ar7);
  puVar2 = puVar2 + iVar1;
  memmove(puVar2,*(undefined4 *)(ar4 + 0x58),a6,ar7);
  cVar5 = '\0';
  memmove(puVar2 + iVar1,*(undefined4 *)(ar4 + 0x5c),a6,ar7);
  if (cVar5 == '\0') {
    uVar4 = *(undefined4 *)(ar4 + 0x60);
  }
  else {
    in_xd2 = *(undefined8 *)(ar4 + 0x60);
    uVar4 = extraout_fr3;
  }
  puVar3 = (undefined8 *)(puVar2 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)puVar3 = uVar4;
    *(undefined4 *)((int)puVar3 + 4) = *(undefined4 *)(ar4 + 100);
  }
  else {
    *puVar3 = in_xd2;
    *(undefined8 *)((int)puVar3 + 4) = *(undefined8 *)(ar4 + 100);
  }
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(ar4 + 0x68);
  if (cVar5 == '\0') {
    *(undefined4 *)((int)puVar3 + 0xc) = *(undefined4 *)(ar4 + 0x6c);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(ar4 + 0x70);
  }
  else {
    *(undefined8 *)((int)puVar3 + 0xc) = *(undefined8 *)(ar4 + 0x6c);
    puVar3[2] = *(undefined8 *)(ar4 + 0x70);
  }
  *(undefined4 *)((int)puVar3 + 0x14) = *(undefined4 *)(ar4 + 0x74);
  *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _FUN_8c10a410\n.set _FUN_8c10a410, _FUN_8c10a410_def\n");
//@unit 8c10a4bc
#include "../decls.h"
undefined4 FUN_8c10a4bc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a6;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  iVar1 = *(int *)(ar4 + 0x7c);
  *(undefined4 *)(ar4 + 0x4c) = *ar5;
  *(undefined1 *)(ar4 + 0x50) = *(undefined1 *)(ar5 + 1);
  puVar4 = ar5 + 3;
  *(undefined1 *)(ar4 + 0x51) = *(undefined1 *)(ar5 + 2);
  a6 = iVar1 * 4;
  memmove(*(undefined4 *)(ar4 + 0x54),puVar4,a6,ar7);
  puVar4 = puVar4 + iVar1;
  memmove(*(undefined4 *)(ar4 + 0x58),puVar4,a6,ar7);
  cVar5 = '\0';
  memmove(*(undefined4 *)(ar4 + 0x5c),puVar4 + iVar1,a6,ar7);
  puVar2 = (undefined8 *)(puVar4 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)puVar2;
    puVar3 = puVar2 + 1;
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)((int)puVar2 + 4);
  }
  else {
    *(undefined8 *)(ar4 + 0x60) = *puVar2;
    puVar3 = puVar2 + 2;
    *(undefined8 *)(ar4 + 100) = puVar2[1];
  }
  *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)puVar3;
  if (cVar5 == '\0') {
    *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)((int)puVar3 + 4);
    puVar4 = (undefined4 *)((int)puVar3 + 0xc);
    *(undefined4 *)(ar4 + 0x70) = *(undefined4 *)(puVar3 + 1);
  }
  else {
    *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)((int)puVar3 + 4);
    puVar4 = (undefined4 *)((int)puVar3 + 0x14);
    *(undefined8 *)(ar4 + 0x70) = *(undefined8 *)((int)puVar3 + 0xc);
  }
  *(undefined4 *)(ar4 + 0x74) = *puVar4;
  *(undefined4 *)(ar4 + 0x78) = puVar4[1];
  return 0x78;
}

__asm__(".globl _FUN_8c10a4bc\n.set _FUN_8c10a4bc, _FUN_8c10a4bc_def\n");
//@unit 8c10a564
#include "../decls.h"
undefined4 FUN_8c10a564_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  float *a4;
  float *a5;
  int iVar5;
  int a6;
  float *a5_00;
  float *a4_00;
  float **ppfVar6;
  double *pdVar7;
  float **ppfVar8;
  double in_dr0;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 in_dr12;
  undefined4 uVar13;
  undefined8 in_dr14;
  double dVar14;
  undefined8 in_xd2;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  float *apfStack_44 [3];
  undefined4 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ppfVar8 = apfStack_44;
  a5_00 = *(float **)(ar4 + 0xa4);
  iVar4 = *(int *)(ar4 + 0x7c);
  a6 = iVar4 * 4;
  if (*(float *)(ar4 + 0x80) < *(float *)(ar4 + 0x70)) {
    *(undefined4 *)(ar4 + 0x70) = 0;
    ar6 = a6;
    memmove(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58),a6,ar7);
    ar5 = *(undefined4 *)(ar4 + 0x54);
    uVar1 = FUN_8c11b93c(*(undefined4 *)(ar4 + 0xb0),ar5,ar6,ar7);
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    *(undefined1 *)(ar4 + 0x51) = 1;
  }
  uVar13 = (undefined4)in_dr14;
  if ((*(int *)(ar4 + 0x38) != 0) && (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01')) {
    pdVar2 = (double *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5,ar6,ar7);
    a4_00 = (float *)((int)pdVar2 + 4);
    iVar5 = a6;
    if (*(char *)(ar4 + 0x51) == '\0') {
      cVar17 = '\0';
      memmove(a4_00,a5_00,a6,ar7);
      a4 = a4_00;
      a5 = a5_00;
      ppfVar8 = apfStack_44;
    }
    else {
      apfStack_44[0] = a4_00 + iVar4;
      a5 = *(float **)(ar4 + 0x30);
      cVar17 = '\0';
      a4 = a4_00;
      memmove(a4_00,a5,a6,ar7);
      uStack_38 = *(undefined4 *)(ar4 + 0x54);
      if (cVar17 == '\0') {
        uVar12 = 0;
        dVar14 = (double)CONCAT44(0x40000000,uVar13);
      }
      else {
        uVar12 = 0x3ff00000;
        dVar14 = -1.5697950159475534e-250;
      }
      if (cVar17 == '\0') {
        dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uVar12);
      }
      ppfVar6 = apfStack_44;
      if (a4_00 < apfStack_44[0]) {
        do {
          puVar3 = *(undefined8 **)((int)ppfVar6 + 0xc);
          *(undefined4 **)((int)ppfVar6 + 0xc) = (undefined4 *)((int)puVar3 + 4);
          if (cVar17 == '\0') {
            uVar10 = CONCAT44(*a4_00,*(undefined4 *)puVar3);
          }
          else {
            in_xd2 = *puVar3;
            uVar10 = *(undefined8 *)a4_00;
          }
          fVar11 = (float)((ulonglong)uVar10 >> 0x20) - (float)uVar10;
          *a4_00 = fVar11;
          if (*a5_00 <= fVar11) {
            fVar11 = *a4_00;
            *(float *)((int)ppfVar6 + 8) = fVar11;
            *(double *)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a5_00 - *(float *)((int)ppfVar6 + 8)) * dVar14)
                            >> 0x20);
            thunk_FUN_8c013cd8(a4,a5,iVar5,ar7);
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            thunk_FUN_8c013dfc(a4,a5,iVar5,ar7);
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          else {
            fVar11 = *a5_00;
            *(float *)((int)ppfVar6 + 4) = fVar11;
            *(double *)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a4_00 - *(float *)((int)ppfVar6 + 4)) * dVar14)
                            >> 0x20);
            thunk_FUN_8c013cd8(a4,a5,iVar5,ar7);
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            thunk_FUN_8c013dfc(a4,a5,iVar5,ar7);
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          pdVar7 = (double *)((int)ppfVar6 + -8);
          if (cVar17 == '\0') {
            dVar9 = 0.5;
          }
          else {
            dVar9 = -7.963806069003694e+87;
          }
          ppfVar8 = ppfVar6;
          if (cVar17 != '\0') {
            ppfVar8 = (float **)((int)ppfVar6 + 8);
            pdVar7 = (double *)ppfVar6;
          }
          in_dr0 = *pdVar7 + (double)fVar11 * dVar9;
          if (cVar17 == '\0') {
            *a4_00 = (float)in_dr0;
          }
          else {
            *(undefined8 *)a4_00 = in_xd2;
          }
          a4_00 = a4_00 + 1;
          a5_00 = a5_00 + 1;
          ppfVar6 = ppfVar8;
        } while (a4_00 < *ppfVar8);
      }
    }
    if (cVar17 == '\0') {
      *(undefined4 *)((int)ppfVar8 + 0x10) = *(undefined4 *)(*(int *)(ar4 + 0x30) + a6);
    }
    else {
      *(undefined8 *)((int)ppfVar8 + 0x10) = *(undefined8 *)(*(int *)(ar4 + 0x30) + a6);
    }
    cVar17 = '\0';
    FUN_8c10a2cc(a4,a5,iVar5,ar7);
    if (cVar17 == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *pdVar2 = in_dr0;
    }
    iVar4 = *(int *)(ar4 + 0x30) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x30) = iVar4;
    if (iVar4 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(ar4 + 0x28);
    }
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + -1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10a564\n.set _FUN_8c10a564, _FUN_8c10a564_def\n");
//@unit 8c10a80c
#include "../decls.h"
undefined4 FUN_8c10a80c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *ar5_00;
  float *pfVar5;
  float *a6;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_fr15;
  undefined8 in_xd2;
  undefined8 uVar12;
  char cVar13;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  undefined8 *puStack_20;
  
  fVar7 = *(float *)(ar4 + 0x88);
  if (fVar7 <= *(float *)(ar4 + 100)) {
    *(undefined4 *)(ar4 + 0x4c) = 0;
    *(undefined1 *)(ar4 + 0x50) = 1;
  }
  if (*(char *)(ar4 + 0x50) != '\0') {
    if (*(int *)(ar4 + 0x38) == 0) {
      *(undefined1 *)(ar4 + 0x50) = 0;
    }
    if (*(char *)(ar4 + 0x50) != '\0') {
      FUN_8c10a564(ar4,ar5,ar6,ar7);
      return 1;
    }
  }
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    cVar13 = '\0';
    uVar2 = FUN_8c112074(*(undefined4 *)(ar4 + 0xc),5,(int)&uStack_34 + 4,ar7);
    ar5_00 = (*(uint*)((uchar*)&uStack_34+4));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    iVar6 = *(int *)(ar4 + 0x7c);
    if (cVar13 == '\0') {
      in_fr15 = *pfStack_28;
      uStack_34 = CONCAT44((*(uint*)((uchar*)&uStack_34+4)),*(undefined4 *)puStack_20);
      fVar7 = *pfStack_24;
      *(float *)(ar4 + 0x60) = fVar7;
    }
    else {
      uStack_34 = *puStack_20;
      in_xd2 = *(undefined8 *)pfStack_24;
      *(undefined8 *)(ar4 + 0x60) = in_xd2;
    }
    memmove(*(undefined4 *)(ar4 + 0x5c),uStack_2c,iVar6,ar7);
    pfVar5 = (float *)(iVar6 * 4);
    cVar13 = '\0';
    a6 = pfVar5;
    memmove(*(undefined4 *)(ar4 + 0x34),ar5_00,pfVar5,ar7);
    uVar12 = uStack_34;
    if (cVar13 == '\0') {
      uVar12 = in_xd2;
      fVar7 = (float)uStack_34;
    }
    if (cVar13 == '\0') {
      *(float *)(*(int *)(ar4 + 0x34) + (int)pfVar5) = fVar7;
    }
    else {
      *(undefined8 *)(*(int *)(ar4 + 0x34) + (int)pfVar5) = uVar12;
    }
    iVar3 = *(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x40) * 4;
    *(int *)(ar4 + 0x34) = iVar3;
    if (iVar3 == *(int *)(ar4 + 0x2c)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x28);
    }
    *(int *)(ar4 + 0x38) = *(int *)(ar4 + 0x38) + 1;
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + 1;
    if (cVar13 == '\0') {
      fVar7 = 0.0009999999;
    }
    if (fVar7 < in_fr15) {
      ar7 = *(float **)(ar4 + 0x5c);
      pfVar4 = *(float **)(ar4 + 0x58);
      a6 = (float *)(*(int *)(ar4 + 0x34) + *(int *)(ar4 + 0x48) * -4);
      ar5_00 = (float *)((int)pfVar5 + (int)pfVar4);
      if (a6 < *(float **)(ar4 + 0x28)) {
        a6 = a6 + *(int *)(ar4 + 0x44);
      }
      *(float *)(ar4 + 100) = *(float *)(ar4 + 100) + in_fr15;
      if (*(float *)(ar4 + 0x88) <= *(float *)(ar4 + 100)) {
        *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x88);
      }
      fVar7 = in_fr15 / *(float *)(ar4 + 100);
      *(float *)(ar4 + 0x70) = *(float *)(ar4 + 0x70) + fVar7;
      fVar11 = fVar7 * *(float *)(ar4 + 0x90);
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar7 = fVar7 / *(float *)(ar4 + 0x90);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      fVar8 = 0.0;
      for (; pfVar4 < ar5_00; pfVar4 = pfVar4 + 1) {
        fVar10 = *a6;
        if (fVar10 < *ar7 + *(float *)(ar4 + 0x94)) {
          fVar10 = *ar7 + *(float *)(ar4 + 0x94);
        }
        fVar9 = fVar10 - *pfVar4;
        if (fVar9 < *(float *)(ar4 + 0x98)) {
          fVar9 = *(float *)(ar4 + 0x98);
        }
        fVar1 = fVar7;
        if (0.0 < fVar9) {
          fVar1 = fVar11;
        }
        fVar9 = *pfVar4 + fVar9 * fVar1;
        fVar10 = fVar10 - fVar9;
        *pfVar4 = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = fVar10 / *(float *)(ar4 + 0x90);
        }
        else {
          fVar10 = fVar10 * *(float *)(ar4 + 0x90);
        }
        a6 = a6 + 1;
        fVar8 = fVar8 + fVar10;
        ar7 = ar7 + 1;
      }
      fVar7 = *(float *)(ar4 + 0x6c) + in_fr15;
      *(float *)(ar4 + 0x6c) = fVar7;
      if (200.0 < fVar7) {
        *(undefined4 *)(ar4 + 0x6c) = 0x43480000;
      }
      fVar11 = in_fr15 / *(float *)(ar4 + 0x6c);
      *(float *)(ar4 + 0x70) = *(float *)(ar4 + 0x70) + fVar11;
      fVar7 = (float)iVar6;
      if (iVar6 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      fVar8 = fVar8 * (fVar11 / fVar7);
      if (0.7 < fVar8) {
        fVar8 = 0.7;
      }
      if (fVar8 < -0.7) {
        fVar8 = -0.7;
      }
      for (pfVar5 = *(float **)(ar4 + 0x58); pfVar5 < ar5_00; pfVar5 = pfVar5 + 1) {
        *pfVar5 = *pfVar5 + fVar8;
      }
    }
    if ((in_fr15 == 0.0) && (*(uint *)(ar4 + 0x9c) < *(uint *)(ar4 + 0x74))) {
      *(int *)(ar4 + 0x78) = *(int *)(ar4 + 0x78) + 1;
      iVar6 = *(int *)(ar4 + 0x68) + 1;
      *(int *)(ar4 + 0x68) = iVar6;
      if (0x32 < iVar6) {
        *(undefined4 *)(ar4 + 0x68) = 0x32;
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x78) = 0;
    }
    iVar6 = *(int *)(ar4 + 0x4c);
    if (iVar6 == 0) {
      FUN_8c10a564(ar4,ar5_00,a6,ar7);
    }
    else if (iVar6 == 1) {
      if (*(int *)(ar4 + 0x84) < *(int *)(ar4 + 0x78)) {
        *(undefined4 *)(ar4 + 0x4c) = 2;
        *(undefined1 *)(ar4 + 0x50) = 1;
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
      else if (*(int *)(ar4 + 0x38) == *(int *)(ar4 + 0x3c)) {
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
    }
    else if (iVar6 == 2) {
      if (in_fr15 <= 0.0009999999) {
        FUN_8c10a564(ar4,ar5_00,a6,ar7);
      }
      else {
        *(undefined4 *)(ar4 + 0x4c) = 1;
      }
    }
  }
  if ((*(char *)(ar4 + 0x50) == '\0') &&
     (*(int *)(*(int *)(**(int **)(ar4 + 0xc) + 0x40) + (*(int **)(ar4 + 0xc))[1] * 4) ==
      *(int *)(**(int **)(ar4 + 0xc) + 0x3c))) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10a80c\n.set _FUN_8c10a80c, _FUN_8c10a80c_def\n");
//@unit 8c10abf4
#include "../decls.h"
undefined4 FUN_8c10abf4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = *ar4;
  (**(code **)(ar5_00 + 0x18))(ar5_00,ar4[10]);
  (**(code **)(ar5_00 + 0x18))(ar5_00,ar4[0x16]);
  uVar1 = FUN_8c11b884(ar4[0x2c],ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10abf4\n.set _FUN_8c10abf4, _FUN_8c10abf4_def\n");
//@unit 8c10abfa
#include "../decls.h"
undefined4 FUN_8c10abfa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *unaff_r13;
  int a4;
  
  a4 = *unaff_r13;
  (**(code **)(a4 + 0x18))(a4,unaff_r13[10],ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,unaff_r13[0x16],ar6,ar7);
  uVar1 = FUN_8c11b884(*(undefined4 *)((int)0xb0 + (int)unaff_r13),a4);
  return uVar1;
}

__asm__(".globl _FUN_8c10abfa\n.set _FUN_8c10abfa, _FUN_8c10abfa_def\n");
//@unit 8c10ac3c
#include "../decls.h"
undefined4 FUN_8c10ac3c_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  int in_r0;
  uint uVar1;
  int iVar2;
  int unaff_r14;
  char in_T;
  
  if (in_T == '\x01') {
    *(undefined1 *)(unaff_r14 + 0x50) = 1;
    return 1;
  }
  if (in_r0 == 3) {
    if (ar6 != 0) {
      FUN_8c10a410(unaff_r14,*ar7 + ar6,ar6,ar7);
    }
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  else {
    if (in_r0 != 4) {
      if (in_r0 == 0xf8) {
        *ar7 = *(int *)(unaff_r14 + 0x38);
        return 1;
      }
      if (in_r0 == 0xff) {
        FUN_8c10abf4(unaff_r14,ar5,ar6,ar7);
        FUN_8c120668(unaff_r14,ar5,ar6,ar7);
        return 1;
      }
      return 0;
    }
    if (ar6 == 0) {
      uVar1 = FUN_8c10a308(unaff_r14,ar5,0,ar7);
      if ((uVar1 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    FUN_8c10a4bc(unaff_r14,*ar7 + ar6,ar6,ar7);
    iVar2 = *ar7 + (*(int *)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  *ar7 = iVar2;
  return 1;
}

__asm__(".globl _FUN_8c10ac3c\n.set _FUN_8c10ac3c, _FUN_8c10ac3c_def\n");
//@unit 8c10ad00
#include "../decls.h"
uint FUN_8c10ad00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 ar6_00;
  uint uVar8;
  int a4;
  double in_dr0;
  double in_dr2;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_xd2;
  short sVar11;
  byte in_FPSCR_CAUSE;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_DN;
  byte bVar15;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  puVar2 = (&FUN_8c120550);
  a4 = *ar4;
  FUN_8c120550(ar4,9,ar6,ar7);
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar8 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  uVar8 = uVar8 & 0xffff;
  ar4[0x1f] = uVar8;
  iVar5 = uVar8 + 1;
  *(short *)(*(int *)(uint)ar4[4] + 0xc) = (short)iVar5 * 4;
  (*(code *)puVar2)(ar4,1,ar6,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar13 = 0;
  bVar15 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar14 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  *(uint *)((int)0x9c + (int)ar4) = uVar6 & 0xffff;
  (*(code *)puVar2)(ar4,2,ar6,ar7);
  uVar6 = ((uint)bVar13 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar12 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar6 = (uint)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  ar4[0xf] = uVar6 & 0xffff;
  ar4[0x10] = iVar5;
  ar4[0x11] = iVar5 * ar4[0xf];
  ar4[0x12] = ar4[0x10] * (ar4[0x27] + 1);
  iVar5 = (**(code **)(a4 + 0x14))(a4,ar4[0x11],4,ar7);
  ar4[10] = iVar5;
  ar4[0xb] = ar4[0x11] * 4 + ar4[10];
  uVar7 = 4;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  iVar5 = (**(code **)(a4 + 0x14))(a4,uVar8 * 3,4,ar7);
  ar4[0x16] = iVar5;
  iVar5 = ar4[0x16] + uVar8 * 4;
  ar4[0x17] = iVar5;
  uVar6 = 0xffe7ffff;
  ar4[0x15] = uVar8 * 4 + iVar5;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & uVar6;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  (*(code *)puVar2)(ar4,3,uVar7,ar7);
  if (bVar14 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar14 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar13 == 0) {
    *(int *)((int)0x94 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)((int)0x94 + (int)ar4) = in_dr0;
  }
  (*(code *)puVar2)(ar4,4,uVar7,ar7);
  if (bVar13 == 0) {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),_DAT_8c10aeac);
  }
  else {
    in_xd2 = CONCAT44(_DAT_8c10aeb0,_DAT_8c10aeac);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar14 = 0;
  bVar12 = 0;
  bVar13 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(in_dr2,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar15 == 0) {
    *(int *)((int)0x98 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(_DAT_8c10aeb0,SUB84(in_dr2,0));
  }
  else {
    *(double *)((int)0x98 + (int)ar4) = in_dr0;
    uVar9 = CONCAT44(DAT_8c10aeb4,_DAT_8c10aeb0);
  }
  if (bVar15 == 0) {
    *(int *)((int)0x90 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)((int)0x90 + (int)ar4) = uVar9;
  }
  (*(code *)puVar2)(ar4,5,uVar7,ar7);
  iVar5 = (int)0x88;
  uVar6 = ((uint)bVar14 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar15 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  if (bVar14 == 0) {
    *(float *)(iVar5 + (int)ar4) = (float)(int)sVar11;
    dVar10 = (double)CONCAT44(_DAT_8c10aeb8,*(undefined4 *)(iVar5 + (int)ar4));
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = in_xd2;
    dVar10 = (double)CONCAT44(DAT_8c10aebc,_DAT_8c10aeb8);
  }
  if (bVar15 == 0) {
    dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) / SUB84(dVar10,0),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar10;
  }
  if (bVar14 == 0) {
    *(int *)((int)0x80 + (int)ar4) = (int)((ulonglong)dVar10 >> 0x20);
  }
  else {
    *(double *)((int)0x80 + (int)ar4) = dVar10;
  }
  (*(code *)puVar2)(ar4,6,uVar7,ar7);
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  *(int *)((int)0x84 + (int)ar4) = (int)sVar11;
  (*(code *)puVar2)(ar4,7,uVar7,ar7);
  puVar4 = (&DATA_8c126b78);
  puVar3 = (&DATA_8c126bcc);
  if (bVar14 == 0) {
    dVar10 = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),_DAT_8c10aec4);
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
  if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
    in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) * SUB84(dVar10,0),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * dVar10;
  }
  if (cVar1 == '\0') {
    *(int *)((int)0x8c + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44(DAT_8c10af6c,SUB84(dVar10,0));
  }
  else {
    *(double *)((int)0x8c + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((&DATA_8c126bcc),DAT_8c10af6c);
  }
  iVar5 = (int)0xa0;
  if (cVar1 == '\0') {
    *(int *)(iVar5 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(iVar5 + (int)ar4) = uVar9;
  }
  *(undefined **)(iVar5 + 4 + (int)ar4) = puVar3;
  puVar3 = (&DATA_8c128fac);
  *(undefined **)(iVar5 + 8 + (int)ar4) = puVar4;
  *(undefined **)(iVar5 + 0xc + (int)ar4) = puVar3;
  (*(code *)puVar2)(ar4,8,uVar7,ar7);
  ar6_00 = *(undefined4 *)((int)0xac + (int)ar4);
  uVar7 = FUN_8c11b6b8(a4,uVar8,ar6_00,ar7);
  *(undefined4 *)((int)0xb0 + (int)ar4) = uVar7;
  uVar8 = FUN_8c10a308(ar4,uVar8,ar6_00,ar7);
  return (uint)((uVar8 & 0xff) != 0);
}

__asm__(".globl _FUN_8c10ad00\n.set _FUN_8c10ad00, _FUN_8c10ad00_def\n");
//@unit 8c10af3c
#include "../decls.h"
undefined4 FUN_8c10af3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,5,1,(&FUN_8c10a80c),(&FUN_8c10ad00),(&DATA_8c10ac30),
                     (int)0xb4);
  return uVar1;
}

__asm__(".globl _FUN_8c10af3c\n.set _FUN_8c10af3c, _FUN_8c10af3c_def\n");
//@unit 8c10af94
#include "../decls.h"
int FUN_8c10af94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0xa4;
  return (*(int *)(iVar1 + ar4) * 2 + ar4 + (int)0xb4 + 3U & 0xfffffffc) +
         (*(int *)(iVar1 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar1 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10af94\n.set _FUN_8c10af94, _FUN_8c10af94_def\n");
//@unit 8c10afbe
#include "../decls.h"
int FUN_8c10afbe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c10af94(ar4,ar5,ar6,ar7);
  iVar2 = (int)0xa8;
  return (iVar1 + *(int *)(iVar2 + ar4) * 2 + 3U & 0xfffffffc) +
         (*(int *)(iVar2 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar2 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10afbe\n.set _FUN_8c10afbe, _FUN_8c10afbe_def\n");
//@unit 8c10aff4
#include "../decls.h"
undefined4 FUN_8c10aff4_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 8))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10aff4\n.set _FUN_8c10aff4, _FUN_8c10aff4_def\n");
//@unit 8c10b02a
#include "../decls.h"
undefined4 FUN_8c10b02a_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0xc))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b02a\n.set _FUN_8c10b02a, _FUN_8c10b02a_def\n");
//@unit 8c10b060
#include "../decls.h"
undefined4 FUN_8c10b060_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar6 + 4);
  uStack_c = 0;
  if (ar6[1] != 0) {
    uStack_c = *(undefined4 *)(ar6[1] + 8);
  }
  uVar1 = (**(code **)(*ar6 + 0x10))(ar4,ar5,&uStack_10,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b060\n.set _FUN_8c10b060, _FUN_8c10b060_def\n");
//@unit 8c10b096
#include "../decls.h"
undefined4 FUN_8c10b096_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x14))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b096\n.set _FUN_8c10b096, _FUN_8c10b096_def\n");
//@unit 8c10b0d8
#include "../decls.h"
undefined4 FUN_8c10b0d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x18))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b0d8\n.set _FUN_8c10b0d8, _FUN_8c10b0d8_def\n");
//@unit 8c10b10e
#include "../decls.h"
undefined4 FUN_8c10b10e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x1c))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b10e\n.set _FUN_8c10b10e, _FUN_8c10b10e_def\n");
//@unit 8c10b144
#include "../decls.h"
undefined4 FUN_8c10b144_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x20))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b144\n.set _FUN_8c10b144, _FUN_8c10b144_def\n");
//@unit 8c10b17a
#include "../decls.h"
undefined4 FUN_8c10b17a_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x24))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b17a\n.set _FUN_8c10b17a, _FUN_8c10b17a_def\n");
//@unit 8c10b1b0
#include "../decls.h"
undefined4 FUN_8c10b1b0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 0x28))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b1b0\n.set _FUN_8c10b1b0, _FUN_8c10b1b0_def\n");
//@unit 8c10b1ec
#include "../decls.h"
undefined4 FUN_8c10b1ec_def(int *ar4,int *ar5,undefined4 *ar6,int *ar7)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  int iVar11;
  int iVar12;
  int iVar13;
  int iStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piStack_2c = (int *)0x0;
  piStack_30 = (int *)0x0;
  puStack_34 = (undefined4 *)0x0;
  iVar13 = *ar5;
  uStack_28 = *(undefined4 *)(iVar13 + 4);
  uStack_24 = 0;
  if (ar5[1] != 0) {
    uStack_24 = *(undefined4 *)(ar5[1] + 8);
  }
  piVar5 = ar5;
  piVar3 = (int *)FUN_8c11eb6c(*(undefined4 *)(uint)ar5[1],ar5,ar6,ar7);
  a4 = *piVar3;
  iVar4 = FUN_8c10afbe(a4,piVar5,ar6,ar7);
  uVar1 = 0x80;
  iVar6 = *ar4;
  puStack_58 = (undefined4 *)0x0;
  piStack_44 = (int *)0x0;
  iVar12 = 0;
  piStack_3c = ar7;
  puStack_38 = (undefined4 *)(uint)ar4[1];
  if (0 < iVar6) {
    do {
      piStack_3c = (int *)*puStack_38;
      iStack_64 = 0;
      iVar11 = 0;
      piStack_4c = (int *)puStack_38[5];
      if (0 < (int)piStack_3c) {
        do {
          iVar9 = 0;
          iVar8 = *piStack_4c;
          ar6 = (undefined4 *)0x0;
          iStack_60 = piStack_4c[3];
          if (0 < iVar8) {
            do {
              ar6 = (undefined4 *)((int)ar6 + 1);
              if ((*(ushort *)(iVar4 + *(int *)(iStack_60 + 8) * 2) & 0x80) == 0) {
                iVar9 = iVar9 + 1;
              }
              iStack_60 = iStack_60 + 0xc;
            } while ((int)ar6 < iVar8);
          }
          iVar12 = (iVar12 + iVar8) - iVar9;
          if (iVar9 == iVar8) {
            iStack_64 = iStack_64 + 1;
          }
          iVar11 = iVar11 + 1;
          piStack_4c = piStack_4c + 4;
        } while (iVar11 < (int)piStack_3c);
      }
      puStack_58 = (undefined4 *)((int)piStack_3c + ((int)puStack_58 - iStack_64));
      piStack_44 = (int *)((int)piStack_44 + 1);
      puStack_38 = puStack_38 + 6;
    } while ((int)piStack_44 < iVar6);
  }
  piVar5 = (int *)(**(code **)(iVar13 + 8))(0xc,&uStack_28,ar6,piStack_3c);
  if (piVar5 != (int *)0x0) {
    if (iVar6 < 1) {
LAB_8c10b3fc:
      *piVar5 = *ar4;
      piVar5[1] = (int)piStack_2c;
      piStack_4c = (int *)0x0;
      puStack_58 = ar6;
      piVar3 = piStack_30;
      puStack_5c = puStack_34;
      piStack_44 = (int *)(uint)ar4[1];
      piVar2 = piStack_2c;
      if (0 < iVar6) {
        do {
          piStack_3c = piVar2;
          piStack_48 = (int *)piStack_44[5];
          iVar12 = *piStack_44;
          *piStack_3c = iVar12;
          piStack_3c[1] = piStack_44[1];
          piStack_3c[2] = piStack_44[2];
          piStack_3c[3] = piStack_44[3];
          piStack_3c[4] = piStack_44[4];
          piStack_3c[5] = (int)piVar3;
          iStack_60 = 0;
          if (0 < iVar12) {
            do {
              puVar7 = (undefined4 *)piStack_48[3];
              iVar8 = *piStack_48;
              *piVar3 = iVar8;
              piVar3[1] = piStack_48[1];
              piVar3[2] = piStack_48[2];
              piVar3[3] = (int)puStack_5c;
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  puStack_58 = puVar7;
                  uVar10 = puStack_58[2];
                  if ((*(ushort *)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                    *piVar3 = *piVar3 + -1;
                  }
                  else {
                    if (*(uint *)(0x88 + a4) <= uVar10) {
                      puStack_58[2] = (uVar10 - *(int *)(0x88 + a4)) + 0x80000000;
                    }
                    *puStack_5c = *puStack_58;
                    puStack_5c[1] = puStack_58[1];
                    puStack_5c[2] = puStack_58[2];
                    puStack_5c = puStack_5c + 3;
                  }
                  iVar11 = iVar11 + 1;
                  puVar7 = puStack_58 + 3;
                } while (iVar11 < iVar8);
              }
              if (*piVar3 == 0) {
                *piStack_3c = *piStack_3c + -1;
              }
              else {
                piVar3 = piVar3 + 4;
              }
              iStack_60 = iStack_60 + 1;
              piStack_48 = piStack_48 + 4;
            } while (iStack_60 < iVar12);
          }
          piStack_4c = (int *)((int)piStack_4c + 1);
          piStack_44 = piStack_44 + 6;
          piVar2 = piStack_3c + 6;
        } while ((int)piStack_4c < iVar6);
      }
      uVar10 = (**(code **)(ar5[1] + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,puStack_58,piStack_3c);
      if (piStack_2c != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,puStack_58,piStack_3c);
      }
      if (piStack_30 != (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,puStack_58,piStack_3c);
      }
      if (puStack_34 == (undefined4 *)0x0) {
        return uVar10 & 0xff;
      }
      (**(code **)(iVar13 + 0xc))(puStack_34,&uStack_28,puStack_58,piStack_3c);
      return uVar10 & 0xff;
    }
    piStack_2c = (int *)(**(code **)(iVar13 + 8))(iVar6 * 0x18,&uStack_28,ar6,piStack_3c);
    if (piStack_2c == (int *)0x0) {
      (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
    }
    else {
      piStack_30 = (int *)(**(code **)(iVar13 + 8))
                                    (((int)puStack_58 + 1) * 0x10,&uStack_28,ar6,piStack_3c);
      if (piStack_30 == (int *)0x0) {
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
      }
      else {
        if ((iVar12 == 0) ||
           (puStack_34 = (undefined4 *)
                         (**(code **)(iVar13 + 8))(iVar12 * 0xc,&uStack_28,ar6,piStack_3c),
           puStack_34 != (undefined4 *)0x0)) goto LAB_8c10b3fc;
        (**(code **)(iVar13 + 0xc))(piVar5,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_2c,&uStack_28,ar6,piStack_3c);
        (**(code **)(iVar13 + 0xc))(piStack_30,&uStack_28,ar6,piStack_3c);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10b1ec\n.set _FUN_8c10b1ec, _FUN_8c10b1ec_def\n");
//@unit 8c10b576
#include "../decls.h"
uint FUN_8c10b576_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x10))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b576\n.set _FUN_8c10b576, _FUN_8c10b576_def\n");
//@unit 8c10b5b8
#include "../decls.h"
uint FUN_8c10b5b8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x14))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b5b8\n.set _FUN_8c10b5b8, _FUN_8c10b5b8_def\n");
//@unit 8c10b5f0
#include "../decls.h"
uint FUN_8c10b5f0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x18))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b5f0\n.set _FUN_8c10b5f0, _FUN_8c10b5f0_def\n");
//@unit 8c10b628
#include "../decls.h"
uint FUN_8c10b628_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar5[1] + 8);
  uStack_10 = 0;
  if (*ar5 != 0) {
    uStack_10 = *(undefined4 *)(*ar5 + 4);
  }
  uVar1 = (**(code **)(ar5[1] + 0x1c))(ar4,&uStack_10,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b628\n.set _FUN_8c10b628, _FUN_8c10b628_def\n");
//@unit 8c10b660
#include "../decls.h"
uint FUN_8c10b660_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *(undefined4 *)(ar4[1] + 8);
  uStack_10 = 0;
  if (*ar4 != 0) {
    uStack_10 = *(undefined4 *)(*ar4 + 4);
  }
  uVar1 = (**(code **)(ar4[1] + 0x20))(&uStack_10,ar5,ar6,ar7);
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b660\n.set _FUN_8c10b660, _FUN_8c10b660_def\n");
//@unit 8c10b698
#include "../decls.h"
undefined4 FUN_8c10b698_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11f258(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10b698\n.set _FUN_8c10b698, _FUN_8c10b698_def\n");
//@unit 8c10b6a0
#include "../decls.h"
undefined4 FUN_8c10b6a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11f258(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10b6a0\n.set _FUN_8c10b6a0, _FUN_8c10b6a0_def\n");
//@unit 8c10b6cc
#include "../decls.h"
int FUN_8c10b6cc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int *ar5_00;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *ar5_01;
  int *ar5_02;
  uint uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar8 = 0;
  iVar3 = ar4[1];
  iVar7 = 0;
  ar5_01 = (uint *)0x0;
  if (ar5 == (undefined4 *)0x0) {
    ar5_02 = (int *)0x0;
  }
  else {
    ar5_02 = (int *)*ar5;
  }
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  ar5_00 = ar5_02;
  iVar1 = FUN_8c11ea3c(*ar4,ar5_02,ar6,ar7);
  if (iVar1 != 0) {
    ar5_00 = (int *)*ar4;
    iVar8 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],ar5_00,ar6,ar7);
  }
  if ((iVar8 == 0) && (ar5_02 != (int *)0x0)) {
    iVar1 = *ar5_02;
    uVar9 = *(int *)(0x8c + -4 + iVar1) + *(int *)(0x8c + iVar1);
    puVar2 = (ushort *)FUN_8c10afbe(iVar1,ar5_00,ar6,ar7);
    uVar5 = 0;
    puVar4 = puVar2;
    if (uVar9 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((*puVar4 & 0x40) != 0) {
          iVar7 = iVar7 + 1;
        }
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar9);
    }
    iVar7 = uVar9 - iVar7;
    if (iVar7 != 0) {
      ar5_01 = (uint *)(**(code **)(iVar3 + 8))(iVar7 * 4,&uStack_28,ar6,ar7);
      if (ar5_01 == (uint *)0x0) {
        return 1;
      }
      uVar5 = 0;
      puVar6 = ar5_01;
      if (uVar9 != 0) {
        do {
          if ((puVar2[uVar5] & 0x40) == 0) {
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    iVar1 = FUN_8c11d6f0(*ar4,ar5_01,iVar7,ar7);
    if (iVar1 != 0) {
      iVar8 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,iVar7,ar7);
    }
    if (ar5_01 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(ar5_01,&uStack_28,iVar7,ar7);
    }
  }
  ar4[0xb] = ar5;
  return iVar8;
}

__asm__(".globl _FUN_8c10b6cc\n.set _FUN_8c10b6cc, _FUN_8c10b6cc_def\n");
//@unit 8c10b840
#include "../decls.h"
int asr_lib_bind_recognizer_model_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (ar5 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *ar5;
  }
  iVar1 = FUN_8c11e534(*ar4,uVar2);
  if (iVar1 != 0) {
    iVar3 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  if (iVar3 == 0) {
    if (ar5 == (undefined4 *)0x0) {
      ar4[9] = 0;
      ar4[0xb] = 0;
      ar4[10] = 0;
    }
    else {
      iVar1 = ar5[1];
      if (iVar1 == 4) {
        ar4[10] = ar5;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = ar5;
        ar4[0xb] = 0;
      }
      else {
        iVar3 = 0xd;
      }
    }
  }
  return iVar3;
}

__asm__(".globl _asr_lib_bind_recognizer_model\n.set _asr_lib_bind_recognizer_model, _asr_lib_bind_recognizer_model_def\n");
//@unit 8c10b852
#include "../decls.h"
int FUN_8c10b852_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int unaff_r11;
  undefined4 unaff_r12;
  undefined4 *unaff_r13;
  char in_T;
  
  ar5_00 = unaff_r12;
  if (in_T != '\x01') {
    ar5_00 = *unaff_r13;
  }
  iVar1 = FUN_8c11e534(*ar4,ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r11 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  if (unaff_r11 == 0) {
    if (unaff_r13 == (undefined4 *)0x0) {
      ar4[9] = unaff_r12;
      ar4[0xb] = unaff_r12;
      ar4[10] = unaff_r12;
    }
    else {
      iVar1 = unaff_r13[1];
      if (iVar1 == 4) {
        ar4[10] = unaff_r13;
      }
      else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        ar4[9] = unaff_r13;
        ar4[0xb] = unaff_r12;
      }
      else {
        unaff_r11 = 0xd;
      }
    }
  }
  return unaff_r11;
}

__asm__(".globl _FUN_8c10b852\n.set _FUN_8c10b852, _FUN_8c10b852_def\n");
//@unit 8c10b8c6
#include "../decls.h"
undefined4 FUN_8c10b8c6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = ar4[1];
  uVar2 = 0;
  uStack_10 = 0;
  iVar1 = FUN_8c11ce44(*ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*ar4,0,ar6,ar7);
  }
  (*(code *)(uint)ar4[3])(ar4,&uStack_14,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c10b8c6\n.set _FUN_8c10b8c6, _FUN_8c10b8c6_def\n");
//@unit 8c10b914
#include "../decls.h"
undefined4 asr_lib_create_engine_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int *ar5_00;
  int iVar1;
  int *ar6_00;
  undefined4 uVar2;
  int aiStack_3c [2];
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  
  uVar2 = 0;
  aiStack_3c[1] = 0;
  ar6_00 = ar6;
  aiStack_3c[0] = ar5;
  ar5_00 = (int *)(*(code *)*ar4)(0x2c,aiStack_3c,ar6,ar7);
  if (ar5_00 == (int *)0x0) {
    uVar2 = 1;
  }
  else {
    ar5_00[2] = *ar4;
    ar5_00[3] = ar4[1];
    ar5_00[4] = ar4[2];
    ar5_00[5] = ar4[3];
    ar5_00[6] = ar4[4];
    ar5_00[7] = ar4[5];
    ar5_00[8] = ar4[6];
    ar5_00[9] = ar4[7];
    ar5_00[10] = ar4[8];
    ar5_00[1] = ar5;
    puStack_34 = (&FUN_8c10aff4);
    *ar6 = (int)ar5_00;
    puStack_30 = (&FUN_8c10b02a);
    puStack_2c = (&FUN_8c10b060);
    puStack_28 = (&FUN_8c10b096);
    puStack_24 = (&FUN_8c10b0d8);
    puStack_20 = (&FUN_8c10b10e);
    puStack_1c = (&FUN_8c10b144);
    puStack_18 = (&FUN_8c10b17a);
    puStack_14 = (&FUN_8c10b1b0);
    iVar1 = FUN_8c11cdb6(&puStack_34,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      uVar2 = FUN_8c11cd44(0,0,ar6_00,ar7);
      (*(code *)(uint)ar4[1])(ar5_00,aiStack_3c,ar6_00,ar7);
    }
    else {
      *ar5_00 = iVar1;
    }
  }
  return uVar2;
}

__asm__(".globl _asr_lib_create_engine\n.set _asr_lib_create_engine, _asr_lib_create_engine_def\n");
//@unit 8c10ba20
#include "../decls.h"
undefined4 FUN_8c10ba20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = ar4[1];
  uVar2 = 0;
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  iVar1 = FUN_8c11d200(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  (**(code **)(iVar3 + 0xc))(ar4,&uStack_1c,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c10ba20\n.set _FUN_8c10ba20, _FUN_8c10ba20_def\n");
//@unit 8c10ba7c
#include "../decls.h"
int FUN_8c10ba7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = *(undefined4 *)(ar4[1] + 4);
  iVar2 = 0;
  uStack_10 = 0;
  iVar1 = FUN_8c11e9b4(*ar4,0,ar6,ar7);
  if (iVar1 != 0) {
    iVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],0,ar6,ar7);
  }
  if (iVar2 == 0) {
    (**(code **)(ar4[1] + 0xc))(ar4,&uStack_14,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c10ba7c\n.set _FUN_8c10ba7c, _FUN_8c10ba7c_def\n");
//@unit 8c10bad4
#include "../decls.h"
int FUN_8c10bad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = 0;
  uStack_14 = *(undefined4 *)(ar4[2] + 4);
  uStack_10 = 0;
  iVar1 = FUN_8c11e82c(*ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    iVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[2],0,ar6,ar7);
  }
  if (iVar2 == 0) {
    (**(code **)(ar4[2] + 0xc))(ar4,&uStack_14,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c10bad4\n.set _FUN_8c10bad4, _FUN_8c10bad4_def\n");
//@unit 8c10bb3a
#include "../decls.h"
undefined4 FUN_8c10bb3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11e3ea(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10bb3a\n.set _FUN_8c10bb3a, _FUN_8c10bb3a_def\n");
//@unit 8c10bb6e
#include "../decls.h"
undefined4 FUN_8c10bb6e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11e146(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10bb6e\n.set _FUN_8c10bb6e, _FUN_8c10bb6e_def\n");
//@unit 8c10bb9a
#include "../decls.h"
int FUN_8c10bb9a_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_8c11eb6c(*ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar3 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  if (((iVar3 == 0) && (iVar2 = ar4[0xb], *ar5 = iVar2, iVar2 != 0)) && (iVar1 != *(int *)*ar5)) {
    iVar3 = 0xb;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10bb9a\n.set _FUN_8c10bb9a, _FUN_8c10bb9a_def\n");
//@unit 8c10bba8
#include "../decls.h"
int FUN_8c10bba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r11;
  undefined4 *unaff_r13;
  int unaff_r14;
  
  iVar1 = FUN_8c11eb6c(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 == 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  if (((unaff_r14 == 0) && (iVar2 = unaff_r13[0xb], *unaff_r11 = iVar2, iVar2 != 0)) &&
     (iVar1 != *(int *)*unaff_r11)) {
    unaff_r14 = 0xb;
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10bba8\n.set _FUN_8c10bba8, _FUN_8c10bba8_def\n");
//@unit 8c10bbf2
#include "../decls.h"
int FUN_8c10bbf2_def(undefined4 *ar4,int *ar5,uint *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piStack_28;
  uint *puStack_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = 0;
  iVar3 = ar4[1];
  uStack_1c = *(undefined4 *)(iVar3 + 4);
  uStack_18 = ar4[2];
  puStack_24 = ar6;
  puStack_20 = ar4;
  iVar1 = FUN_8c11e48a(*ar4,&piStack_28,ar6,ar7);
  if (iVar1 != 0) {
    iVar4 = FUN_8c11cd44(*(undefined4 *)puStack_20[1],*ar4,ar6,ar7);
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(**(code **)(iVar3 + 8))(8,&uStack_1c,ar6,ar7);
    if (puVar2 == (undefined4 *)0x0) {
      iVar4 = 1;
    }
    else {
      *ar5 = (int)puVar2;
      *puVar2 = ar4[9];
      puVar2[1] = ar4[10];
    }
    if (iVar4 == 0) {
      if (*piStack_28 != **(int **)*ar5) {
        iVar4 = 0xb;
      }
      if ((1 < *puStack_24) && (piStack_28[1] != **(int **)ar5[1])) {
        iVar4 = 0xb;
      }
    }
    (**(code **)(iVar3 + 0xc))(piStack_28,&uStack_1c,ar6,ar7);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c10bbf2\n.set _FUN_8c10bbf2, _FUN_8c10bbf2_def\n");
//@unit 8c10bce4
#include "../decls.h"
undefined4 FUN_8c10bce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11d7b8(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10bce4\n.set _FUN_8c10bce4, _FUN_8c10bce4_def\n");
//@unit 8c10bd20
#include "../decls.h"
undefined4 FUN_8c10bd20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11dc7e(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10bd20\n.set _FUN_8c10bd20, _FUN_8c10bd20_def\n");
//@unit 8c10bd4c
#include "../decls.h"
undefined4 FUN_8c10bd4c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *ar6_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_24;
  undefined1 auStack_20 [4];
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar2 = (undefined4 *)(uint)ar4[1];
  uVar3 = 0;
  ar6_00 = auStack_20;
  uStack_18 = puVar2[1];
  uStack_14 = ar4[2];
  puStack_1c = ar5;
  iVar1 = FUN_8c11d996(*ar4,&puStack_24,ar6_00,ar7);
  if (iVar1 != 0) {
    uVar3 = FUN_8c11cd44(*puVar2,*ar4,ar6_00,ar7);
  }
  *puStack_1c = *puStack_24;
  puStack_1c[1] = puStack_24[1];
  puStack_1c[2] = puStack_24[2];
  puStack_1c[3] = puStack_24[3];
  puStack_1c[4] = puStack_24[4];
  puStack_1c[5] = puStack_24[5];
  puStack_1c[6] = puStack_24[6];
  puStack_1c[7] = puStack_24[7];
  puStack_1c[8] = puStack_24[8];
  puStack_1c[9] = puStack_24[9];
  puStack_1c[10] = puStack_24[10];
  puStack_1c[0xb] = puStack_24[0xb];
  puStack_1c[0xc] = puStack_24[0xc];
  puStack_1c[0xd] = puStack_24[0xd];
  (*(code *)puVar2[3])(puStack_24,&uStack_18,ar6_00,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c10bd4c\n.set _FUN_8c10bd4c, _FUN_8c10bd4c_def\n");
//@unit 8c10bdee
#include "../decls.h"
undefined4 FUN_8c10bdee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11e214(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10bdee\n.set _FUN_8c10bdee, _FUN_8c10bdee_def\n");
//@unit 8c10be22
#include "../decls.h"
undefined4 FUN_8c10be22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11e274(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10be22\n.set _FUN_8c10be22, _FUN_8c10be22_def\n");
//@unit 8c10be4e
#include "../decls.h"
undefined4 FUN_8c10be4e_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c11ce88(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c10be4e\n.set _FUN_8c10be4e, _FUN_8c10be4e_def\n");
//@unit 8c10be70
#include "../decls.h"
undefined4 FUN_8c10be70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 unaff_r14;
  
  iVar1 = FUN_8c11e190(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r14 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c10be70\n.set _FUN_8c10be70, _FUN_8c10be70_def\n");
//@unit 8c10be9c
#include "../decls.h"
undefined4 FUN_8c10be9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = ar4[1];
  uStack_14 = 0;
  ar7_00 = ar7;
  a4 = (int *)(*(code *)(uint)ar4[2])(8,&uStack_18,ar6,ar7);
  puVar1 = (&FUN_8c11e8d6);
  a4[1] = (int)ar4;
  iVar2 = (*(code *)puVar1)(*ar4,ar5,ar6,ar7_00);
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_8c11cd44(*ar4,0,ar6,ar7_00);
    (*(code *)(uint)ar4[3])(a4,&uStack_18,ar6,ar7_00);
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _FUN_8c10be9c\n.set _FUN_8c10be9c, _FUN_8c10be9c_def\n");
//@unit 8c10bf44
#include "../decls.h"
undefined4 asr_lib_load_model_def(undefined4 *ar4,int *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar3 = 0;
  uStack_18 = ar4[1];
  uStack_14 = 0;
  ar7_00 = ar7;
  a4 = (int *)(*(code *)(uint)ar4[2])(0xc,&uStack_18,ar6,ar7);
  a4[2] = (int)ar4;
  puVar1 = (&FUN_8c11e2de);
  a4[1] = *ar5;
  iVar2 = (*(code *)puVar1)(*ar4,ar5,ar6,ar7_00);
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = FUN_8c11cd44(*ar4,0,ar6,ar7_00);
    (*(code *)(uint)ar4[3])(a4,&uStack_18,ar6,ar7_00);
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _asr_lib_load_model\n.set _asr_lib_load_model, _asr_lib_load_model_def\n");
//@unit 8c10bfc6
#include "../decls.h"
undefined4 asr_lib_create_recognizer_def(undefined4 *ar4,int *ar5,int ar6,int *ar7)

{
  undefined *puVar1;
  int *ar6_00;
  int iVar2;
  int *ar6_01;
  int *ar7_00;
  undefined4 uVar3;
  undefined4 uStack_34;
  int iStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  
  uVar3 = 0;
  puStack_2c = (&FUN_8c10b1ec);
  puStack_28 = (&FUN_8c10b576);
  puStack_24 = (&FUN_8c10b5b8);
  puStack_20 = (&FUN_8c10b5f0);
  puStack_1c = (&FUN_8c10b628);
  puStack_18 = (&FUN_8c10b660);
  uStack_34 = ar4[1];
  ar7_00 = ar7;
  iStack_30 = ar6;
  ar6_00 = (int *)(*(code *)(uint)ar4[2])(0x30,&uStack_34,ar6,ar7);
  ar6_00[2] = ar6;
  ar6_00[1] = (int)ar4;
  ar6_00[3] = *ar5;
  ar6_00[4] = ar5[1];
  ar6_00[5] = ar5[2];
  ar6_00[6] = ar5[3];
  ar6_00[7] = ar5[4];
  puVar1 = (&FUN_8c11ce8e);
  ar6_00[8] = ar5[5];
  ar6_00[9] = 0;
  ar6_00[10] = 0;
  ar6_00[0xb] = 0;
  ar6_01 = ar6_00;
  iVar2 = (*(code *)puVar1)(*ar4,&puStack_2c,ar6_00,ar7_00);
  if (iVar2 == 0) {
    uVar3 = FUN_8c11cd44(*ar4,0,ar6_01,ar7_00);
    (*(code *)(uint)ar4[3])(ar6_00,&uStack_34,ar6_01,ar7_00);
  }
  else {
    *ar6_00 = iVar2;
    *ar7 = (int)ar6_00;
  }
  return uVar3;
}

__asm__(".globl _asr_lib_create_recognizer\n.set _asr_lib_create_recognizer, _asr_lib_create_recognizer_def\n");
//@unit 8c10c0b4
#include "../decls.h"
int FUN_8c10c0b4_def(undefined4 *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 **a5;
  uint *puVar5;
  uint *puVar6;
  uint *a7;
  uint *puVar7;
  int ar6_00;
  int ar4_00;
  uint *puStack_38;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  a5 = &puStack_2c;
  puStack_38 = (uint *)0x0;
  iVar3 = ar4[1];
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  uVar4 = ar6;
  iStack_30 = FUN_8c10bb9a(ar4,a5,ar6,ar7);
  if (iStack_30 == 0) {
    ar4_00 = *(int *)*puStack_2c;
    iVar1 = FUN_8c10afbe(ar4_00,a5,uVar4,ar7);
    iVar2 = 0x80000000;
    uVar4 = 0;
    ar6_00 = ar6 + *(int *)(0xac + ar4_00) + 1;
    puVar5 = ar5;
    puVar6 = ar5;
    a7 = ar5;
    if (ar6 != 0) {
      do {
        if (ar5[uVar4] < *(uint *)(0x88 + ar4_00)) {
          if ((*(ushort *)(*a7 * 2 + iVar1) & 0x40) != 0) {
            ar6_00 = ar6_00 + -1;
          }
          if (*puVar6 <= *(uint *)(0xac + ar4_00)) {
            ar6_00 = ar6_00 + -1;
          }
        }
        else if ((*(ushort *)
                   ((*puVar5 + *(int *)(0x88 + ar4_00) + 0x80000000) * 2 + iVar1) & 0x40)
                 != 0) {
          ar6_00 = ar6_00 + -1;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
        a7 = a7 + 1;
      } while (uVar4 < ar6);
    }
    if (ar6_00 != 0) {
      puStack_38 = (uint *)(**(code **)(iVar3 + 8))(ar6_00 << 2,&uStack_28,puVar6,a7);
      if (puStack_38 == (uint *)0x0) {
        return 1;
      }
      uVar4 = 0;
      puVar5 = puStack_38;
      puVar6 = ar5;
      a7 = ar5;
      puVar7 = ar5;
      if (ar6 != 0) {
        do {
          if (ar5[uVar4] < *(uint *)(0x88 + ar4_00)) {
            if (((*(ushort *)(ar5[uVar4] * 2 + iVar1) & 0x40) == 0) &&
               (*(uint *)(0xac + ar4_00) < ar5[uVar4])) {
              *puVar5 = *a7;
              puVar5 = puVar5 + 1;
            }
          }
          else if ((*(ushort *)((*puVar6 + *(int *)(0x88 + ar4_00) + iVar2) * 2 + iVar1) &
                   0x40) == 0) {
            *puVar5 = *puVar7 + *(int *)(0x88 + ar4_00) + iVar2;
            puVar5 = puVar5 + 1;
          }
          uVar4 = uVar4 + 1;
          puVar7 = puVar7 + 1;
          puVar6 = puVar6 + 1;
          a7 = a7 + 1;
        } while (uVar4 < ar6);
      }
      iVar2 = (int)0xac;
      uVar4 = 0;
      if (*(int *)(iVar2 + ar4_00) != -1) {
        do {
          *puVar5 = uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < *(int *)(iVar2 + ar4_00) + 1U);
      }
    }
    iVar2 = FUN_8c11d6f0(*ar4,puStack_38,ar6_00,a7);
    if (iVar2 != 0) {
      iStack_30 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6_00,a7);
    }
    if (puStack_38 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(puStack_38,&uStack_28,ar6_00,a7);
    }
  }
  return iStack_30;
}

__asm__(".globl _FUN_8c10c0b4\n.set _FUN_8c10c0b4, _FUN_8c10c0b4_def\n");
//@unit 8c10c2a2
#include "../decls.h"
undefined4 FUN_8c10c2a2_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11dda2(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c2a2\n.set _FUN_8c10c2a2, _FUN_8c10c2a2_def\n");
//@unit 8c10c2aa
#include "../decls.h"
undefined4 FUN_8c10c2aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11dda2(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10c2aa\n.set _FUN_8c10c2aa, _FUN_8c10c2aa_def\n");
//@unit 8c10c2f4
#include "../decls.h"
undefined4 FUN_8c10c2f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r13;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11daa4(*unaff_r13,ar5,ar6,ar7);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)unaff_r13[1],*unaff_r13,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c2f4\n.set _FUN_8c10c2f4, _FUN_8c10c2f4_def\n");
//@unit 8c10c322
#include "../decls.h"
undefined4 FUN_8c10c322_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11d370(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c322\n.set _FUN_8c10c322, _FUN_8c10c322_def\n");
//@unit 8c10c32a
#include "../decls.h"
undefined4 FUN_8c10c32a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11d370(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10c32a\n.set _FUN_8c10c32a, _FUN_8c10c32a_def\n");
//@unit 8c10c356
#include "../decls.h"
undefined4 FUN_8c10c356_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_8c11d5d4(*ar4);
  if (iVar1 != 0) {
    uVar2 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c356\n.set _FUN_8c10c356, _FUN_8c10c356_def\n");
//@unit 8c10c35e
#include "../decls.h"
undefined4 FUN_8c10c35e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 unaff_r13;
  undefined4 *unaff_r14;
  
  iVar1 = FUN_8c11d5d4(*unaff_r14,ar5,ar6,ar7);
  if (iVar1 != 0) {
    unaff_r13 = FUN_8c11cd44(*(undefined4 *)unaff_r14[1],*unaff_r14,ar6,ar7);
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c10c35e\n.set _FUN_8c10c35e, _FUN_8c10c35e_def\n");
//@unit 8c10c3a0
#include "../decls.h"
undefined4 FUN_8c10c3a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *ar4;
  uStack_14 = *(undefined4 *)(iVar1 + 4);
  uStack_10 = 0;
  if (ar4[3] != 0) {
    (**(code **)(iVar1 + 0xc))(ar4[3],&uStack_14,ar6,ar7);
  }
  (**(code **)(iVar1 + 0xc))(ar4,&uStack_14,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c10c3a0\n.set _FUN_8c10c3a0, _FUN_8c10c3a0_def\n");
//@unit 8c10c3de
#include "../decls.h"
undefined4 FUN_8c10c3de_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int *a4;
  int iVar1;
  undefined4 uVar2;
  int *a6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = *(undefined4 *)(ar4 + 4);
  uStack_14 = 0;
  a6 = ar6;
  a4 = (int *)(**(code **)(ar4 + 8))(0x10,&uStack_18,ar6,ar7);
  if (a4 == (int *)0x0) {
LAB_8c10c44a:
    uVar2 = 1;
  }
  else {
    a4[2] = *ar5 + -8;
    a4[1] = ar5[1];
    if (a4[2] == 0) {
      a4[3] = 0;
    }
    else {
      iVar1 = (**(code **)(ar4 + 8))(a4[2],&uStack_18,a6,ar7);
      a4[3] = iVar1;
      if (iVar1 == 0) {
        (**(code **)(ar4 + 0xc))(a4,&uStack_18,a6,ar7);
        goto LAB_8c10c44a;
      }
      memmove(a4[3],ar5 + 2,a4[2],ar7);
    }
    uVar2 = 0;
    *a4 = ar4;
    *ar6 = (int)a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c3de\n.set _FUN_8c10c3de, _FUN_8c10c3de_def\n");
//@unit 8c10c48c
#include "../decls.h"
undefined4 FUN_8c10c48c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_r14;
  float extraout_fr0;
  
  iVar3 = *unaff_r14;
  FUN_8c120550(ar4,2,ar6,ar7);
  *(short *)((int)unaff_r14 + 0x2e) = (short)(int)extraout_fr0;
  *(short *)(unaff_r14 + 0xc) = *(short *)((int)unaff_r14 + 0x2e) * 3 + 3;
  *(short *)(*(int *)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + -1) * 4;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,(uint)*(ushort *)(unaff_r14 + 0xc) << 3,4,ar7);
  unaff_r14[0x15] = iVar3;
  if (unaff_r14[0x15] == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = unaff_r14[0x15];
    iVar3 = 0;
    do {
      unaff_r14[iVar3 + 0xd] = iVar2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
      unaff_r14[iVar3 + 0xe] = iVar2;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + (uint)*(ushort *)(unaff_r14 + 0xc) * 4;
    } while (iVar3 < 8);
    *(undefined2 *)(unaff_r14 + 0xb) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10c48c\n.set _FUN_8c10c48c, _FUN_8c10c48c_def\n");
//@unit 8c10c530
#include "../decls.h"
undefined4 FUN_8c10c530_def(int ar4,float *ar5,float *ar6,int ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float in_fr3;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_fr5;
  ulonglong uVar17;
  undefined8 in_xd2;
  undefined8 uVar18;
  undefined8 in_xd4;
  char cVar19;
  int iStack_24;
  
  iVar9 = **(int **)(ar4 + 0x10);
  pfVar12 = (float *)0x0;
  if (*(char *)(iVar9 + 0x30) == '\0') {
    if (*(char *)(ar4 + 0x58) == '\0') {
      ar5 = (float *)0x1;
      uVar1 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),1,ar6,ar7);
      if ((uVar1 & 0xff) != 0) {
        cVar19 = '\0';
        pfVar2 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1]
                                       ,ar6,ar7);
        iVar5 = ar4 + 0x34;
        uVar1 = (uint)*(ushort *)(ar4 + 0x2c);
        pfVar3 = *(float **)((uVar1 & 7) * 4 + iVar5);
        pfVar10 = *(float **)((uVar1 + 7 & 7) * 4 + iVar5);
        pfVar8 = (float *)(*(int *)((uVar1 + 6 & 7) * 4 + iVar5) + 4);
        pfVar6 = *(float **)((uVar1 + 5 & 7) * 4 + iVar5);
        if (cVar19 == '\0') {
          in_fr5 = *pfVar2;
          pfVar2 = pfVar2 + 1;
        }
        else {
          in_xd4 = *(undefined8 *)pfVar2;
          pfVar2 = pfVar2 + 2;
        }
        pfVar7 = *(float **)((uVar1 + 4 & 7) * 4 + iVar5);
        *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + 1;
        if (cVar19 == '\0') {
          *pfVar3 = in_fr5;
          fVar13 = 2.0;
        }
        else {
          *(undefined8 *)pfVar3 = in_xd4;
          in_fr5 = 2.0;
          fVar13 = 0.19999999;
        }
        pfVar3 = pfVar3 + 3;
        pfVar12 = pfVar6 + 1;
        pfVar11 = pfVar10 + 3;
        *pfVar8 = (((in_fr5 * fVar13 - *pfVar7 * fVar13) + *pfVar10) - *pfVar6) * 0.19999999;
        in_fr3 = 0.19999999;
        in_fr5 = 1.0;
        pfVar6[2] = (*pfVar8 - pfVar7[1]) * 1.0;
        pfVar6 = pfVar6 + 3;
        iStack_24 = 0;
        pfVar8 = pfVar8 + *(ushort *)(ar4 + 0x2e) + 2;
        ar5 = pfVar7 + 3;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            pfVar2 = pfVar2 + 1;
            *pfVar3 = *pfVar2;
            pfVar3 = pfVar3 + 1;
            fVar14 = *pfVar11;
            pfVar11 = pfVar11 + 1;
            fVar15 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            fVar16 = *ar5;
            ar5 = ar5 + 1;
            in_fr3 = (((fVar13 * *pfVar2 + fVar14) - fVar15) - fVar16 * fVar13) * 0.375;
            *pfVar8 = in_fr3;
            iStack_24 = iStack_24 + 1;
            pfVar8 = pfVar8 + 1;
          } while (iStack_24 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
        ar6 = pfVar8 + -(uint)*(ushort *)(ar4 + 0x2e);
        pfVar6 = pfVar6 + *(ushort *)(ar4 + 0x2e);
        ar7 = 0;
        if (*(short *)(ar4 + 0x2e) != 0) {
          do {
            ar7 = ar7 + 1;
            fVar13 = *ar6;
            ar6 = ar6 + 1;
            in_fr3 = *ar5;
            ar5 = ar5 + 1;
            *pfVar6 = (fVar13 - in_fr3) * 1.0;
            pfVar6 = pfVar6 + 1;
          } while (ar7 < (int)(uint)*(ushort *)(ar4 + 0x2e));
        }
      }
    }
    if (*(char *)(ar4 + 0x58) != '\0') {
      iVar5 = *(int *)(ar4 + 0x28) + -1;
      *(int *)(ar4 + 0x28) = iVar5;
      if (iVar5 == 4) {
        *(undefined1 *)(ar4 + 0x58) = 0;
      }
      pfVar12 = (float *)(*(int *)((*(ushort *)(ar4 + 0x2c) + 5 & 7) * 4 + ar4 + 0x34) + 4);
    }
    if (pfVar12 != (float *)0x0) {
      if (3 < *(uint *)(ar4 + 0x28)) {
        cVar19 = '\0';
        pfVar3 = (float *)FUN_8c111dfe(iVar9,ar5,ar6,ar7);
        if (*(uint *)(ar4 + 0x28) < 7) {
          if (cVar19 == '\0') {
            uVar17 = (ulonglong)(uint)in_fr5;
          }
          else {
            uVar17 = 0x233853ea00000000;
          }
          fVar13 = (float)(uVar17 >> 0x20);
          if (*(int *)(ar4 + 0x28) == 6) {
            if (cVar19 == '\0') {
              in_fr3 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              in_xd2 = *(undefined8 *)pfVar12;
              pfVar12 = pfVar12 + 2;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              *pfVar3 = in_fr3;
              pfVar3[1] = fVar13;
            }
            else {
              *(undefined8 *)pfVar3 = in_xd2;
              *(ulonglong *)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 1;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
            iVar9 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
          }
          else {
            if (cVar19 == '\0') {
              *pfVar3 = fVar13;
            }
            else {
              *(ulonglong *)pfVar3 = uVar17;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              pfVar3[1] = fVar13;
            }
            else {
              *(ulonglong *)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 2;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(ar4 + 0x2e));
            }
            iVar9 = 0;
            if (*(short *)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(ar4 + 0x2e) << 1));
            }
          }
        }
        else {
          iVar9 = 0;
          if (0 < (int)(*(ushort *)(ar4 + 0x30) - 1)) {
            do {
              if (cVar19 == '\0') {
                fVar13 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar3 = fVar13;
              }
              else {
                uVar18 = *(undefined8 *)pfVar12;
                pfVar12 = pfVar12 + 2;
                *(undefined8 *)pfVar3 = uVar18;
              }
              iVar9 = iVar9 + 1;
              pfVar3 = pfVar3 + 1;
            } while (iVar9 < (int)(*(ushort *)(ar4 + 0x30) - 1));
          }
        }
      }
      if (pfVar12 != (float *)0x0) {
        *(ushort *)(ar4 + 0x2c) = (short)*(char *)(ar4 + 0x2c) + 1U & 7;
      }
    }
  }
  iVar9 = **(int **)(ar4 + 0xc);
  if ((*(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar9 + 0x40)) == *(int *)(iVar9 + 0x3c))
     && (*(char *)(ar4 + 0x58) == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c10c530\n.set _FUN_8c10c530, _FUN_8c10c530_def\n");
//@unit 8c10c838
#include "../decls.h"
undefined4 FUN_8c10c838_def(int *ar4,uint ar5,int ar6,int *ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (&memset);
  uVar2 = ar5 & 0xff;
  if (uVar2 == 1) {
    ar4[10] = 0;
    (*(code *)puVar1)(ar4[0x15],0,(uint)*(ushort *)(ar4 + 0xc) << 5,ar7);
  }
  else if (uVar2 == 2) {
    if ((ar4[10] != 0) || (ar6 != 0)) {
      *(undefined1 *)(ar4 + 0x16) = 1;
      if ((uint)ar4[10] < 3) {
        iVar3 = ar4[10] + 4;
      }
      else {
        iVar3 = 7;
      }
      ar4[10] = iVar3;
    }
  }
  else if (uVar2 == (int)0xf8) {
    *ar7 = ar4[10] + -4;
  }
  else {
    if (uVar2 != (int)0xff) {
      return 0;
    }
    iVar3 = ar4[0x15];
    (**(code **)(*ar4 + 0x18))(*ar4,iVar3,ar6,ar7);
    FUN_8c120668(ar4,iVar3,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c10c838\n.set _FUN_8c10c838, _FUN_8c10c838_def\n");
//@unit 8c10c8e2
#include "../decls.h"
undefined4 FUN_8c10c8e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c10c530),(&DATA_8c10c484),(&FUN_8c10c838),0x5c);
  return uVar1;
}

__asm__(".globl _FUN_8c10c8e2\n.set _FUN_8c10c8e2, _FUN_8c10c8e2_def\n");
//@unit 8c10c986
#include "../decls.h"
int FUN_8c10c986_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)((int)0xa4 + *ar4);
  return 0xa4 + 0x10 + *ar4 + (uVar1 + (uVar1 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c986\n.set _FUN_8c10c986, _FUN_8c10c986_def\n");
//@unit 8c10c99c
#include "../decls.h"
int FUN_8c10c99c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c986(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(0x88 + iVar2) + 1) * 4 + (*(int *)(0x90 + iVar2) + 1) * 4
  ;
}

__asm__(".globl _FUN_8c10c99c\n.set _FUN_8c10c99c, _FUN_8c10c99c_def\n");
//@unit 8c10c9c8
#include "../decls.h"
int FUN_8c10c9c8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)0xa8 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (uVar2 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c9c8\n.set _FUN_8c10c9c8, _FUN_8c10c9c8_def\n");
//@unit 8c10c9cc
#include "../decls.h"
int FUN_8c10c9cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint in_r3;
  uint uVar2;
  
  uVar2 = *(uint *)(in_r0 + *ar4);
  iVar1 = FUN_8c10c99c(ar4,*ar4,ar6,ar7);
  return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10c9cc\n.set _FUN_8c10c9cc, _FUN_8c10c9cc_def\n");
//@unit 8c10c9e4
#include "../decls.h"
int FUN_8c10c9e4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = FUN_8c10c9c8(ar4,ar5,ar6,ar7);
  return iVar1 + (*(int *)(0x8c + iVar2) + 1) * 4 +
                 (*(int *)(0x8c + 8 + iVar2) + 1) * 4;
}

__asm__(".globl _FUN_8c10c9e4\n.set _FUN_8c10c9e4, _FUN_8c10c9e4_def\n");
//@unit 8c10ca10
#include "../decls.h"
int FUN_8c10ca10_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *ar4;
  uVar2 = *(int *)(in_r0 + -4 + iVar1) + *(int *)(in_r0 + iVar1);
  iVar1 = FUN_8c10c9e4(ar4,iVar1,ar6,ar7);
  return iVar1 + (uVar2 + (in_r2 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10ca10\n.set _FUN_8c10ca10, _FUN_8c10ca10_def\n");
//@unit 8c10ca2e
#include "../decls.h"
undefined4 FUN_8c10ca2e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove((&DATA_8c1274a8),0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c10ca2e\n.set _FUN_8c10ca2e, _FUN_8c10ca2e_def\n");
//@unit 8c10ca58
#include "../decls.h"
undefined4 FUN_8c10ca58_def(int *ar4,undefined4 ar5,int *ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *ar6_00;
  int *ar7_00;
  uint uVar5;
  int iVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (&log_message);
  iVar4 = *ar4;
  iVar6 = ar4[3];
  uStack_28 = *(undefined4 *)(iVar4 + 4);
  uVar5 = 0;
  uStack_24 = 0;
  *ar7 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar4[1] != 0) {
    do {
      uVar3 = ar5;
      iVar2 = FUN_8c0109e8(iVar6,ar5,ar6_00,ar7_00);
      if (iVar2 == 0) {
        *ar7 = *ar7 + 1;
      }
      iVar2 = (*(code *)puVar1)(iVar6,uVar3,ar6_00,ar7_00);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + iVar2 + 1;
    } while (uVar5 < (uint)ar4[1]);
  }
  if (*ar7 == 0) {
    uVar3 = 0x78;
  }
  else {
    iVar4 = (**(code **)(iVar4 + 8))(*ar7 << 2,&uStack_28,ar6_00,ar7_00);
    *ar6 = iVar4;
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = ar4[3];
      *ar7 = 0;
      uVar5 = 0;
      if (ar4[1] != 0) {
        do {
          uVar3 = ar5;
          iVar6 = FUN_8c0109e8(iVar4,ar5,ar6_00,ar7_00);
          if (iVar6 == 0) {
            iVar6 = *ar7;
            *ar7 = iVar6 + 1;
            *(uint *)(*ar6 + iVar6 * 4) = uVar5;
          }
          iVar6 = (*(code *)puVar1)(iVar4,uVar3,ar6_00,ar7_00);
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + iVar6 + 1;
        } while (uVar5 < (uint)ar4[1]);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10ca58\n.set _FUN_8c10ca58, _FUN_8c10ca58_def\n");
//@unit 8c10cb4c
#include "../decls.h"
undefined4 FUN_8c10cb4c_def(int *ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      if (*ar4 == ar6) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      ar4 = ar4 + 1;
    } while (uVar1 < ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c10cb4c\n.set _FUN_8c10cb4c, _FUN_8c10cb4c_def\n");
//@unit 8c10cb90
#include "../decls.h"
undefined4 FUN_8c10cb90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 ar5_00;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float fVar9;
  ulonglong in_dr2;
  undefined8 uVar10;
  uint in_fr5;
  ulonglong uVar11;
  char cVar12;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    ar5_00 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 4);
    puVar1 = (uint *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),ar5_00,ar6,ar7);
    if (puVar1 != (uint *)0x0) {
      cVar12 = '\0';
      puVar2 = (uint *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
      puVar8 = *(undefined4 **)(ar4 + 0x34);
      if (cVar12 == '\0') {
        in_fr5 = *(uint *)(ar4 + 0x38);
        in_dr2 = (ulonglong)*puVar1;
        *puVar2 = *puVar1;
      }
      else {
        *(undefined8 *)puVar2 = *(undefined8 *)puVar1;
      }
      pfVar4 = (float *)(puVar2 + 1);
      pfVar3 = (float *)(puVar1 + *(int *)(ar4 + 0x30) + 1);
      pfVar7 = pfVar4 + *(int *)(ar4 + 0x28);
      iVar6 = *(int *)(ar4 + 0x2c);
      if (cVar12 == '\0') {
        uVar11 = (ulonglong)in_fr5;
      }
      else {
        uVar11 = 0x3f00000000000000;
      }
      for (; pfVar4 < pfVar7; pfVar4 = pfVar4 + 1) {
        pfVar5 = pfVar3;
        if (cVar12 == '\0') {
          *pfVar4 = (float)(uVar11 >> 0x20);
        }
        else {
          *(ulonglong *)pfVar4 = uVar11;
        }
        while (fVar9 = (float)in_dr2, pfVar5 < pfVar3 + iVar6) {
          if (cVar12 == '\0') {
            fVar9 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            uVar10 = CONCAT44(*pfVar4,*puVar8);
            puVar8 = puVar8 + 1;
          }
          else {
            fVar9 = (float)((ulonglong)*(undefined8 *)pfVar5 >> 0x20);
            pfVar5 = pfVar5 + 2;
            uVar10 = *(undefined8 *)pfVar4;
            puVar8 = puVar8 + 2;
          }
          cVar12 = '\0';
          fVar9 = fVar9 * (float)uVar10 + (float)((ulonglong)uVar10 >> 0x20);
          in_dr2 = CONCAT44(fVar9,(float)uVar10);
          *pfVar4 = fVar9;
        }
        if (cVar12 == '\0') {
          fVar9 = *pfVar4;
        }
        cVar12 = '\0';
        fVar9 = fVar9 * (float)uVar11;
        in_dr2 = (ulonglong)(uint)fVar9;
        *pfVar4 = fVar9;
      }
      pfVar7 = pfVar7 + -*(int *)(ar4 + 0x28);
      if (cVar12 == '\0') {
        uVar10 = CONCAT44(*pfVar7,0x3f000000);
      }
      else {
        uVar10 = *(undefined8 *)pfVar7;
      }
      *pfVar7 = (float)((ulonglong)uVar10 >> 0x20) * (float)uVar10;
      iVar6 = **(int **)(ar4 + 0xc);
      return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar6 + 0x40)) ==
             *(int *)(iVar6 + 0x3c) ^ 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c10cb90\n.set _FUN_8c10cb90, _FUN_8c10cb90_def\n");
//@unit 8c10cc6e
#include "../decls.h"
undefined4 FUN_8c10cc6e_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  
  if ((ar5 & 0xff) == (int)0xff) {
    a5 = ar4[0xd];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
    FUN_8c120668(ar4,a5,ar6,ar7);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10cc6e\n.set _FUN_8c10cc6e, _FUN_8c10cc6e_def\n");
//@unit 8c10cccc
#include "../decls.h"
undefined4 FUN_8c10cccc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  uint uVar2;
  int a4;
  int a5;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr0;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 in_fr13;
  double dVar11;
  float in_fr15;
  uint uVar12;
  int iVar13;
  float fVar14;
  char cVar15;
  
  fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(ar4,2,ar6,ar7);
  uVar12 = (uint)fVar9;
  uVar4 = uVar12 & 0xffff;
  ar4[10] = uVar4;
  FUN_8c120550(ar4,3,ar6,ar7);
  iVar13 = (int)fVar9;
  FUN_8c120550(ar4,4,ar6,ar7);
  ar4[0xc] = (int)fVar9 & 0xffff;
  FUN_8c120550(ar4,1,ar6,ar7);
  uVar2 = ((int)fVar9 & 0xffffU) - ar4[0xc];
  ar4[0xb] = uVar2;
  *(short *)(*(int *)(uint)ar4[4] + 0xc) = ((short)uVar12 + 1) * 4;
  fVar9 = (float)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  a5 = uVar2 * uVar4 * 4;
  ar4[0xe] = (int)(2.0 / fVar9);
  a4 = *ar4;
  cVar15 = '\0';
  pfVar1 = (float *)(**(code **)(a4 + 0x10))(a4,a5,ar6,ar7);
  ar4[0xd] = (int)pfVar1;
  if (cVar15 == '\0') {
    fVar9 = 1.0;
    dVar11 = (double)CONCAT44(0x400921fb,in_fr13);
  }
  else {
    in_fr15 = 1.0;
    fVar9 = 2.142699;
    dVar11 = 8.619199512815383e+97;
  }
  uVar12 = 0;
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),0x54442d18);
  }
  if (uVar4 != 0) {
    do {
      dVar10 = (double)(int)uVar12;
      if ((int)uVar12 < 0) {
        dVar10 = dVar10 + 4294967296.0;
      }
      dVar8 = (double)(int)(short)iVar13;
      fVar14 = (float)((dVar10 * dVar11) / dVar8);
      cVar15 = '\0';
      thunk_FUN_8c0142e4(a4,a5,ar6,ar7);
      if (cVar15 == '\0') {
        fVar14 = (float)((ulonglong)dVar8 >> 0x20);
        fVar6 = 6.0;
        in_fr15 = fVar9;
      }
      else {
        fVar6 = 1.75;
      }
      in_fr15 = fVar6 * fVar14 + in_fr15;
      uVar5 = 0;
      pfVar3 = pfVar1;
      if (uVar2 != 0) {
        do {
          pfVar1 = pfVar3 + 1;
          fVar14 = (float)(int)uVar5;
          if ((int)uVar5 < 0) {
            fVar14 = fVar14 + 4.2949673e+09;
          }
          fVar6 = (float)(int)uVar12;
          if ((int)uVar12 < 0) {
            fVar6 = fVar6 + 4.2949673e+09;
          }
          fVar7 = (float)(int)uVar2;
          if ((int)uVar2 < 0) {
            fVar7 = fVar7 + 4.2949673e+09;
          }
          dVar10 = (double)fVar7;
          fVar14 = (float)((((double)fVar14 + 0.5) * (double)fVar6 * dVar11) / dVar10);
          cVar15 = '\0';
          thunk_FUN_8c013c88(a4,a5,ar6,ar7);
          uVar5 = uVar5 + 1;
          if (cVar15 == '\0') {
            fVar14 = in_fr15;
          }
          *pfVar3 = fVar14 * (float)((ulonglong)dVar10 >> 0x20);
          pfVar3 = pfVar1;
        } while (uVar5 < uVar2);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  return 0;
}

__asm__(".globl _FUN_8c10cccc\n.set _FUN_8c10cccc, _FUN_8c10cccc_def\n");
//@unit 8c10cefa
#include "../decls.h"
undefined4 FUN_8c10cefa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,1,(&FUN_8c10cb90),(&FUN_8c10cccc),(&FUN_8c10cc6e),0x3c);
  return uVar1;
}

__asm__(".globl _FUN_8c10cefa\n.set _FUN_8c10cefa, _FUN_8c10cefa_def\n");
//@unit 8c10cf6c
#include "../decls.h"
undefined4 FUN_8c10cf6c_def(int *ar4,undefined4 *ar5,ushort *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  piVar2 = (int *)*ar5;
  iVar3 = *ar4;
  iVar1 = 0;
  if (*ar6 != 0) {
    do {
      if (*piVar2 != 0) {
        (**(code **)(iVar3 + 0x18))(iVar3,*piVar2,uVar4);
        (**(code **)(iVar3 + 0x18))(iVar3,piVar2[2]);
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)*ar6);
  }
  if (*ar6 != (ushort)ar7) {
    if (*ar6 != 0) {
      (**(code **)(iVar3 + 0x18))(iVar3,*ar5);
    }
    if ((ushort)ar7 != 0) {
      uVar4 = (**(code **)(iVar3 + 0x14))(iVar3,(ushort)ar7,0xc);
      *ar5 = uVar4;
    }
    *ar6 = (ushort)ar7;
  }
  return *ar5;
}

__asm__(".globl _FUN_8c10cf6c\n.set _FUN_8c10cf6c, _FUN_8c10cf6c_def\n");
//@unit 8c10cf82
#include "../decls.h"
undefined4 FUN_8c10cf82_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  ushort unaff_r8;
  int iVar2;
  undefined4 *unaff_r10;
  int unaff_r11;
  ushort *unaff_r12;
  int *piVar3;
  int a4;
  
  piVar3 = (int *)*unaff_r10;
  a4 = *ar4;
  iVar2 = unaff_r11;
  if (*unaff_r12 != 0) {
    do {
      if (*piVar3 != 0) {
        (**(code **)(a4 + 0x18))(a4,*piVar3,ar6,ar7);
        (**(code **)(a4 + 0x18))(a4,piVar3[2],ar6,ar7);
        *piVar3 = unaff_r11;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < (int)(uint)*unaff_r12);
  }
  if (*unaff_r12 != unaff_r8) {
    if (*unaff_r12 != 0) {
      (**(code **)(a4 + 0x18))(a4,*unaff_r10,ar6,ar7);
    }
    if (unaff_r8 != 0) {
      uVar1 = (**(code **)(a4 + 0x14))(a4,(uint)unaff_r8,0xc,ar7);
      *unaff_r10 = uVar1;
    }
    *unaff_r12 = unaff_r8;
  }
  return *unaff_r10;
}

__asm__(".globl _FUN_8c10cf82\n.set _FUN_8c10cf82, _FUN_8c10cf82_def\n");
//@unit 8c10d016
#include "../decls.h"
undefined4 FUN_8c10d016_def(int *ar4,int *ar5,uint ar6,uint ar7,int s0)

{
  int iVar1;
  undefined4 uVar2;
  uint a6;
  uint a7;
  int iVar3;
  
  iVar3 = *ar4;
  a6 = ar6;
  a7 = ar7;
  if (*ar5 != 0) {
    (**(code **)(iVar3 + 0x18))(iVar3,*ar5,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(iVar3,ar5[2],a6,a7);
  }
  *(short *)(ar5 + 1) = (short)ar6;
  *(short *)((int)ar5 + 6) = (short)ar7;
  iVar1 = (**(code **)(iVar3 + 0x10))(iVar3,(ar6 & 0xffff) << 2,a6,a7);
  *ar5 = iVar1;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,ar6 & 0xffff,1,a7);
  ar5[2] = iVar3;
  if ((*ar5 != 0) && (ar5[2] != 0)) {
    iVar3 = 0;
    if ((ar6 & 0xffff) != 0) {
      do {
        iVar1 = iVar3 + 1;
        *(int *)(*ar5 + iVar3 * 4) = s0;
        s0 = s0 + (ar7 & 0xffff);
        iVar3 = iVar1;
      } while (iVar1 < (int)(ar6 & 0xffff));
    }
    return 0;
  }
  uVar2 = FUN_8c1204c4(ar4,2);
  return uVar2;
}

__asm__(".globl _FUN_8c10d016\n.set _FUN_8c10d016, _FUN_8c10d016_def\n");
//@unit 8c10d0da
#include "../decls.h"
undefined4 FUN_8c10d0da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar6_00;
  uint ar6_01;
  int iVar2;
  
  ar6_01 = ar5 * 2;
  if (*(ushort *)(*(int *)(ar4 + 100) + 0xc) == ar6_01) {
LAB_8c10d11a:
    ar6_00 = ar5 * 3;
    if (*(ushort *)(**(int **)(ar4 + 0x60) + 0xc) != ar6_00) {
      ar7 = 1;
      uVar1 = 1;
      iVar2 = FUN_8c111adc(**(undefined4 **)(ar4 + 0x60),1,ar6_00,1);
      if (iVar2 == 0) goto LAB_8c10d152;
      iVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x60),uVar1,ar6_00,ar7);
      *(int *)(ar4 + 0x28) = iVar2;
      *(uint *)(ar4 + 0x2c) = ar6_01 + iVar2;
    }
    (*(code *)(&FUN_8c111fbe))
              (**(undefined4 **)(ar4 + 0x60),(*(undefined4 **)(ar4 + 0x60))[1],ar6_00,ar7);
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(ar4 + 100);
    ar7 = *(undefined4 *)(iVar2 + 0x18);
    iVar2 = FUN_8c111adc(iVar2,*(undefined4 *)(iVar2 + 8),ar6_01,ar7);
    if (iVar2 != 0) goto LAB_8c10d11a;
LAB_8c10d152:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10d0da\n.set _FUN_8c10d0da, _FUN_8c10d0da_def\n");
//@unit 8c10d196
#include "../decls.h"
undefined4 FUN_8c10d196_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 1) = (undefined2)ar5;
  *(undefined2 *)((int)ar4 + 6) = (undefined2)ar6;
  *ar4 = ar7;
  return 0;
}

__asm__(".globl _FUN_8c10d196\n.set _FUN_8c10d196, _FUN_8c10d196_def\n");
//@unit 8c10d1bc
#include "../decls.h"
undefined4 FUN_8c10d1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = 0;
  if (*(short *)(ar4 + 0x30) != 0) {
    do {
      iVar11 = 0;
      uVar12 = (uint)0xff;
      uVar1 = *(ushort *)
               ((uint)*(ushort *)(0xe8 + ar4) * (uint)*(ushort *)(ar4 + 0x30) * 2 +
                *(int *)(ar4 + 0x7c) + uVar8 * 2);
      uVar14 = (uint)(short)uVar1;
      iVar9 = *(int *)(uVar8 * 0xc + *(int *)(ar4 + 0x70));
      cVar10 = '\x01';
      if (*(undefined **)(ar4 + 0x68) == (&FUN_8c10da96)) {
        cVar10 = '\x11';
        if ((uVar1 & 1) == 0) {
          iVar11 = 4;
        }
        else {
          uVar12 = 0xf;
        }
        uVar14 = (uint)(uVar1 >> 1);
      }
      uVar7 = 0;
      uVar13 = (uint)*(ushort *)(uVar8 * 0xc + *(int *)(ar4 + 0x70) + 4);
      if (uVar13 != 0) {
        do {
          iVar4 = uVar7 * 4;
          pcVar6 = (char *)(*(int *)(0xc0 + ar4 + uVar8 * 4) + uVar7);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)*(byte *)(*(int *)(iVar4 + iVar9) + (uVar14 & 0xffff)) & uVar12 & 0xff;
          uVar2 = -iVar11;
          if ((int)uVar2 < 0) {
            cVar3 = (char)((int)uVar5 >> (~uVar2 & 0x1f) + 1);
          }
          else {
            cVar3 = (char)(uVar5 << (uVar2 & 0x1f));
          }
          *pcVar6 = cVar3 * cVar10;
        } while (uVar7 < uVar13);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(ar4 + 0x30));
  }
  return 0x30;
}

__asm__(".globl _FUN_8c10d1bc\n.set _FUN_8c10d1bc, _FUN_8c10d1bc_def\n");
//@unit 8c10d29c
#include "../decls.h"
int FUN_8c10d29c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(iVar1 + ar4) = 0;
  *(undefined4 *)(iVar1 + 4 + ar4) = 0;
  iVar3 = *(int *)(0x84 + ar4);
  iVar1 = 0x84 + 0xc;
  iVar2 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = 0;
      if (*(short *)(iVar3 + 4) != 0) {
        do {
          *(undefined1 *)(*(int *)(iVar3 + 8) + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(iVar3 + 4));
      }
      iVar1 = (int)0x90;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d29c\n.set _FUN_8c10d29c, _FUN_8c10d29c_def\n");
//@unit 8c10d2f0
#include "../decls.h"
int FUN_8c10d2f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(iVar1 + ar4) = *ar5;
  puVar3 = ar5 + 2;
  *(undefined4 *)(iVar1 + 4 + ar4) = ar5[1];
  iVar1 = (int)0x90;
  iVar4 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar5 = iVar4 * 0xc;
      iVar1 = 0;
      if (*(short *)(*(int *)(0x84 + ar4) + iVar5 + 4) != 0) {
        do {
          puVar2 = (undefined1 *)((int)puVar3 + 1);
          *(undefined1 *)(*(int *)(0xc0 + ar4 + iVar4 * 4) + iVar1) = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 2);
          *(undefined1 *)(*(int *)(*(int *)(0x84 + ar4) + iVar5 + 8) + iVar1) = *puVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(*(int *)(0x84 + ar4) + iVar5 + 4));
      }
      iVar1 = (int)0x90;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d2f0\n.set _FUN_8c10d2f0, _FUN_8c10d2f0_def\n");
//@unit 8c10d366
#include "../decls.h"
int FUN_8c10d366_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = (int)0x114;
  *ar5 = *(undefined4 *)(iVar2 + ar4);
  iVar3 = (int)0x90;
  ar5[1] = *(undefined4 *)(iVar2 + 4 + ar4);
  puVar5 = ar5 + 2;
  iVar2 = 0;
  if (*(short *)(iVar3 + ar4) != 0) {
    do {
      iVar6 = iVar2 * 0xc;
      iVar3 = 0;
      if (*(short *)(*(int *)(0x84 + ar4) + iVar6 + 4) != 0) {
        do {
          iVar4 = (int)0x84;
          *(undefined1 *)puVar5 = *(undefined1 *)(*(int *)(0xc0 + ar4 + iVar2 * 4) + iVar3);
          puVar1 = (undefined1 *)(*(int *)(*(int *)(iVar4 + ar4) + iVar6 + 8) + iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (int)0x84;
          *(undefined1 *)((int)puVar5 + 1) = *puVar1;
          puVar5 = (undefined4 *)((int)puVar5 + 2);
        } while (iVar3 < (int)(uint)*(ushort *)(*(int *)(iVar4 + ar4) + iVar6 + 4));
      }
      iVar3 = (int)0x90;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar3 + ar4));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10d366\n.set _FUN_8c10d366, _FUN_8c10d366_def\n");
//@unit 8c10d3ec
#include "../decls.h"
uint FUN_8c10d3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  ushort *puVar5;
  short *psVar6;
  
  iVar1 = (int)0xb4;
  puVar3 = *(ushort **)(iVar1 + ar4);
  puVar5 = *(ushort **)(iVar1 + -0xc + ar4);
  uVar2 = (uint)0xb0;
  psVar6 = *(short **)(uVar2 + ar4);
  puVar5 = puVar3 + ((uint)puVar5[*(ushort *)(iVar1 + -0x18 + ar4)] - (uint)*puVar5);
  for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
    uVar2 = (uint)(short)*puVar3;
    sVar4 = (short)((int)uVar2 >> 2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)0x96;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    if ((*puVar3 & 2) != 0) {
      uVar2 = (uint)0x94;
      sVar4 = sVar4 + *(short *)(uVar2 + ar4);
    }
    *psVar6 = sVar4;
    psVar6 = psVar6 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10d3ec\n.set _FUN_8c10d3ec, _FUN_8c10d3ec_def\n");
//@unit 8c10d458
#include "../decls.h"
undefined4 FUN_8c10d458_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a6;
  undefined4 a5;
  uint uVar3;
  uint uVar4;
  int *a5_00;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int a4;
  
  a4 = *ar4;
  iVar7 = ar5;
  iVar1 = (**(code **)(0x9c + ar5))(ar5,ar5,ar6,ar7);
  uVar2 = (**(code **)(ar5 + 0x14))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0xe8 + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x18))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0x98 + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x10))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0x9a + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x28))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0x9e + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x20))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0x9c + (int)ar4) = (short)uVar2;
  *(short *)(0x9c + 4 + (int)ar4) = -*(short *)((int)0x9c + (int)ar4);
  uVar2 = (**(code **)(ar5 + 0x78))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)0xa4 + (int)ar4) = uVar2;
  uVar2 = (**(code **)(ar5 + 0x7c))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)0xa8 + (int)ar4) = uVar2;
  uVar2 = (**(code **)(0x80 + ar5))(ar5,iVar7,ar6,ar7);
  *(undefined4 *)((int)0xb4 + (int)ar4) = uVar2;
  if (*(int *)((int)0xac + (int)ar4) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)ar4),ar6,ar7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)ar4),ar6,ar7);
  }
  uVar2 = (**(code **)(a4 + 0x10))(a4,(uint)*(ushort *)((int)0x98 + (int)ar4) << 1,ar6,ar7);
  iVar7 = (int)0x9c;
  *(undefined4 *)((int)0xac + (int)ar4) = uVar2;
  iVar7 = ((uint)(*(ushort **)((int)0xa8 + (int)ar4))[*(ushort *)(iVar7 + (int)ar4)] -
          (uint)**(ushort **)((int)0xa8 + (int)ar4)) * 2;
  uVar2 = (**(code **)(a4 + 0x10))(a4,iVar7,ar6,ar7);
  *(undefined4 *)((int)0xb0 + (int)ar4) = uVar2;
  FUN_8c10d3ec(ar4,iVar7,ar6,ar7);
  uVar2 = (**(code **)(ar5 + 0x38))(ar5,iVar7,ar6,ar7);
  *(short *)((int)0x92 + (int)ar4) = (short)uVar2;
  uVar2 = (**(code **)(ar5 + 0x70))(ar5,iVar7,ar6,ar7);
  a6 = (**(code **)(ar5 + 8))(ar5,iVar7,ar6,ar7);
  a5 = (**(code **)(ar5 + 0xc))(ar5,iVar7,a6,ar7);
  uVar3 = FUN_8c10d196(ar4 + 0x1f,a5,a6,uVar2);
  if ((uVar3 & 0xff) == 0) {
    *(int **)((int)0x88 + (int)ar4) = ar4 + 0x1f;
    uVar2 = (**(code **)(ar5 + 8))(ar5,a5,a6,uVar2);
    iVar8 = (int)0x8e;
    *(short *)(ar4 + 0xc) = (short)uVar2;
    iVar8 = iVar8 + (int)ar4;
    uVar3 = (uint)(short)ar4[0xc];
    a5_00 = ar4 + 0x1c;
    iVar7 = FUN_8c10cf6c(ar4,a5_00,iVar8,uVar3);
    if (iVar7 != 0) {
      uVar10 = 0;
      if ((short)ar4[0xc] != 0) {
        do {
          uVar4 = uVar10;
          uVar2 = (**(code **)(0x84 + ar5))(ar5,uVar10,iVar8,uVar3);
          (**(code **)(0xc0 + ar5))(uVar2,uVar4,iVar8,uVar3);
          if (iVar1 == 0) {
            uVar3 = (**(code **)(ar5 + 0x68))(uVar2,uVar4,iVar8,uVar3);
          }
          else {
            iVar7 = (**(code **)(ar5 + 0x68))(uVar2,uVar4,iVar8,uVar3);
            uVar3 = iVar7 + 1U >> 1;
          }
          iVar8 = (**(code **)(ar5 + 0x60))(uVar2,uVar4,iVar8,uVar3);
          iVar7 = uVar10 * 0xc + ar4[0x1c];
          uVar4 = FUN_8c10d016(ar4,iVar7,iVar8,uVar3);
          if ((uVar4 & 0xff) != 0) {
            return 1;
          }
          iVar9 = uVar10 * 4;
          if (*(int *)((int)ar4 + iVar9 + 0xc0) != 0) {
            iVar7 = *(int *)((int)ar4 + iVar9 + 0xc0);
            (**(code **)(a4 + 0x18))(a4,iVar7,iVar8,uVar3);
          }
          pcVar5 = *(code **)(a4 + 0x10);
          iVar6 = (int)0xc0;
          a5_00 = (int *)(**(code **)(ar5 + 0x60))(uVar2,iVar7,iVar8,uVar3);
          uVar2 = (*pcVar5)(a4,a5_00,iVar8,uVar3);
          *(undefined4 *)((int)ar4 + iVar9 + iVar6) = uVar2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(ar4 + 0xc));
      }
      ar4[0x21] = ar4[0x1c];
      *(undefined2 *)(ar4 + 0x24) = *(undefined2 *)((int)ar4 + 0x8e);
      uVar2 = (**(code **)(ar5 + 0x10))(ar5,a5_00,iVar8,uVar3);
      uVar10 = FUN_8c10d0da(ar4,uVar2,iVar8,uVar3);
      if ((uVar10 & 0xff) == 0) {
        if (iVar1 == 0) {
          ar4[0x1a] = (int)(&FUN_8c10d7f4);
        }
        else {
          ar4[0x1a] = (int)(&FUN_8c10da96);
        }
        FUN_8c10d1bc(ar4,uVar2,iVar8,uVar3);
        return 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10d458\n.set _FUN_8c10d458, _FUN_8c10d458_def\n");
//@unit 8c10d7f4
#include "../decls.h"
int FUN_8c10d7f4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *ar7_00;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iStack_3c;
  ushort *puStack_38;
  short *psStack_30;
  
  iVar9 = *(int *)(0xac + ar4);
  piVar11 = (int *)(ar4 + 0x34);
  iVar1 = (int)0x9c;
  piVar12 = piVar11 + ar6 + -1;
  uVar3 = (uint)**(ushort **)(ar4 + 0x28);
  psStack_30 = *(short **)(iVar1 + 0x14 + ar4);
  iVar13 = ar6 * *(short *)(iVar1 + 4 + ar4);
  iVar10 = **(int **)(0xac + -0x24 + ar4) + iVar13 * 2;
  if (uVar3 == *(ushort *)(0x9a + ar4)) {
    puVar4 = (ushort *)(uVar3 * 2 + ar5);
    ar7_00 = (ushort *)((uint)*(ushort *)(iVar1 + ar4) * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar3 * 2 + iVar10 + -2);
    while (puVar4 = puVar4 + -1, ar7_00 <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)*puVar8);
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = (ushort)*(byte *)(*piVar5 + (uint)*puVar8) + *puVar4;
      }
    }
    (*(code *)(&memset))
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(0x9c + ar4),0,
               uVar3 - *(ushort *)(0x9c + ar4),ar7_00);
  }
  else {
    uVar7 = *(ushort *)(iVar1 + ar4) + 1;
    puVar4 = (ushort *)(uVar7 * 2 + *(int *)(ar4 + 0x28));
    if (uVar7 <= uVar3) {
      do {
        uVar6 = (uint)*puVar4;
        puStack_38 = (ushort *)(ar6 * uVar6 * 2 + iVar10);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(*piVar11 + (uint)*puStack_38);
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puStack_38 = puStack_38 + 1;
          *puVar8 = (ushort)*(byte *)(*piVar5 + (uint)*puStack_38) + *puVar8;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  iStack_3c = 0;
  puVar4 = *(ushort **)(0xa4 + ar4) + **(ushort **)(0xa4 + ar4);
  if (*(short *)(0x98 + ar4) != 0) {
    do {
      uVar3 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(iStack_3c * 2 + *(int *)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar10 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)*puVar8);
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + *(byte *)(*piVar5 + (uint)*puVar8);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
      }
      *(short *)(iStack_3c * 2 + iVar9) = (short)uVar3;
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)(uint)*(ushort *)(0x98 + ar4));
  }
  puVar4 = *(ushort **)(0xa8 + ar4);
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar10 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_30 = psStack_30 + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar10 * 2 + *(int *)(0xa8 + ar4) + 2) * 2 +
            *(int *)(0xa8 + ar4)) <= puVar4) break;
        iVar13 = (uint)*(ushort *)((uint)*puVar4 * 2 + iVar9) + (int)*psStack_30;
        if (iVar13 < iVar1) {
          iVar1 = iVar13;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar10 * 2) = uVar2;
      iVar10 = iVar10 + 1;
      iVar1 = (int)0x9c;
    } while (iVar10 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d7f4\n.set _FUN_8c10d7f4, _FUN_8c10d7f4_def\n");
//@unit 8c10da96
#include "../decls.h"
int FUN_8c10da96_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uStack_44;
  ushort *puStack_40;
  short *psStack_2c;
  
  piVar11 = (int *)(ar4 + 0x34);
  iVar3 = *(int *)(0xac + ar4);
  iVar1 = (int)0x88;
  psStack_2c = *(short **)(iVar1 + 0x28 + ar4);
  uStack_44 = (uint)*(ushort *)(iVar1 + 0x14 + ar4);
  uVar10 = (uint)**(ushort **)(ar4 + 0x28);
  iVar13 = *(short *)(iVar1 + 0x18 + ar4) * ar6;
  piVar12 = piVar11 + ar6 + -1;
  iVar1 = **(int **)(iVar1 + ar4) + iVar13 * 2;
  if (uVar10 == *(ushort *)(0x9a + ar4)) {
    puVar4 = (ushort *)(uVar10 * 2 + ar5);
    puVar8 = (ushort *)(ar6 * uVar10 * 2 + iVar1 + -2);
    while (puVar4 = puVar4 + -1, (ushort *)(uStack_44 * 2 + ar5) <= puVar4) {
      *puVar4 = (ushort)*(byte *)(*piVar12 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = ((ushort)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0)
                  + *puVar4;
      }
    }
    (*(code *)(&memset))
              (*(int *)(ar4 + 0x2c) + (uint)*(ushort *)(0x9c + ar4),0,
               uVar10 - *(ushort *)(0x9c + ar4),puVar8);
  }
  else {
    uStack_44 = uStack_44 + 1;
    puStack_40 = (ushort *)(uStack_44 * 2 + *(int *)(ar4 + 0x28));
    if (uStack_44 <= uVar10) {
      do {
        uVar6 = (uint)*puStack_40;
        puVar4 = (ushort *)(ar6 * uVar6 * 2 + iVar1);
        puVar8 = (ushort *)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
        for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar8 = ((ushort)*(byte *)((uint)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) &
                    0xf0) + *puVar8;
        }
        *(undefined1 *)(*(int *)(ar4 + 0x2c) + uVar6) = 0;
        uStack_44 = uStack_44 + 1;
        puStack_40 = puStack_40 + 1;
      } while ((int)uStack_44 <= (int)uVar10);
    }
  }
  uVar10 = (uint)0xf0;
  uStack_44 = 0;
  puVar4 = *(ushort **)(0xa4 + ar4) + **(ushort **)(0xa4 + ar4);
  if (*(short *)((uVar10 - 0x58) + ar4) != 0) {
    do {
      uVar6 = ar6 * 0xff;
      while (puVar4 < (ushort *)
                      ((uint)*(ushort *)(uStack_44 * 2 + *(int *)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)((uint)*puVar4 * ar6 * 2 + iVar1 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(*piVar11 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
          for (piVar5 = (int *)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + ((uint)*(byte *)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2)
                            & uVar10);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
      }
      *(short *)(iVar3 + uStack_44 * 2) = (short)uVar6;
      uStack_44 = uStack_44 + 1;
    } while ((int)uStack_44 < (int)(uint)*(ushort *)(0x98 + ar4));
  }
  puVar4 = *(ushort **)(0xa8 + ar4);
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar13 = 0;
  if (*(short *)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
      while( true ) {
        puVar4 = puVar4 + 1;
        psStack_2c = psStack_2c + 1;
        if ((ushort *)
            ((uint)*(ushort *)(iVar13 * 2 + *(int *)(0xa8 + ar4) + 2) * 2 +
            *(int *)(0xa8 + ar4)) <= puVar4) break;
        iVar9 = (uint)*(ushort *)(iVar3 + (uint)*puVar4 * 2) + (int)*psStack_2c;
        if (iVar9 < iVar1) {
          iVar1 = iVar9;
        }
      }
      if (iVar1 < 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = (undefined2)iVar1;
      }
      *(undefined2 *)(ar5 + iVar13 * 2) = uVar2;
      iVar13 = iVar13 + 1;
      iVar1 = (int)0x9c;
    } while (iVar13 < (int)(uint)*(ushort *)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10da96\n.set _FUN_8c10da96, _FUN_8c10da96_def\n");
//@unit 8c10ddaa
#include "../decls.h"
undefined4 FUN_8c10ddaa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *ar4;
  (**(code **)(iVar4 + 0x18))(iVar4,**(undefined4 **)((int)0x134 + (int)ar4),1);
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0x134 + (int)ar4));
  (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0x120 + (int)ar4));
  FUN_8c10cf6c(ar4,ar4 + 0x1b,(int)0x8c + (int)ar4,0);
  FUN_8c10cf6c(ar4,ar4 + 0x1c,(int)0x8e + (int)ar4,0);
  iVar2 = 0;
  piVar1 = (int *)((int)0xc0 + (int)ar4);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    if (piVar3[1] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[1]);
    }
    if (piVar3[2] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[2]);
    }
    if (piVar3[3] != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,piVar1[3]);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(iVar4 + 0x18))(iVar4,*piVar1);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)0xac + (int)ar4) != 0) {
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0xac + (int)ar4));
    (**(code **)(iVar4 + 0x18))(iVar4,*(undefined4 *)((int)0xb0 + (int)ar4));
  }
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[3]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4[4]);
  (**(code **)(iVar4 + 0x18))(iVar4,ar4);
  return 0;
}

__asm__(".globl _FUN_8c10ddaa\n.set _FUN_8c10ddaa, _FUN_8c10ddaa_def\n");
//@unit 8c10ddb6
#include "../decls.h"
undefined4 FUN_8c10ddb6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int *piVar1;
  int a6;
  undefined4 a7;
  int iVar2;
  int *unaff_r11;
  int *piVar3;
  int a4;
  
  a4 = *unaff_r11;
  (**(code **)(a4 + 0x18))(a4,**(undefined4 **)(in_r0 + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x134 + (int)unaff_r11),ar6,ar7);
  (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0x120 + (int)unaff_r11),ar6,ar7);
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1b,(int)0x8c + (int)unaff_r11,0);
  a7 = 0;
  a6 = (int)0x8e + (int)unaff_r11;
  FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1c,a6,0);
  iVar2 = 0;
  piVar1 = (int *)((int)0xc0 + (int)unaff_r11);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    if (piVar3[1] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[1],a6,a7);
    }
    if (piVar3[2] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[2],a6,a7);
    }
    if (piVar3[3] != 0) {
      (**(code **)(a4 + 0x18))(a4,piVar1[3],a6,a7);
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (**(code **)(a4 + 0x18))(a4,*piVar1,a6,a7);
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)((int)0xac + (int)unaff_r11) != 0) {
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xac + (int)unaff_r11),a6,a7);
    (**(code **)(a4 + 0x18))(a4,*(undefined4 *)((int)0xb0 + (int)unaff_r11),a6,a7);
  }
  (**(code **)(a4 + 0x18))(a4,unaff_r11[3],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11[4],a6,a7);
  (**(code **)(a4 + 0x18))(a4,unaff_r11,a6,a7);
  return 0;
}

__asm__(".globl _FUN_8c10ddb6\n.set _FUN_8c10ddb6, _FUN_8c10ddb6_def\n");
//@unit 8c10df48
#include "../decls.h"
undefined4 FUN_8c10df48_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a5;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double *pdVar8;
  float fVar9;
  undefined8 in_dr0;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined8 in_dr12;
  double dVar15;
  ulonglong in_dr14;
  ulonglong uVar16;
  undefined8 in_xd2;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  fVar9 = (float)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)(in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  puVar6 = auStack_3c;
  iVar3 = *ar4;
  *(undefined2 *)((int)ar4 + 0x92) = 0xffff;
  uVar16 = in_dr14 & 0xffffffff;
  FUN_8c120550(ar4,0x1e,ar6,ar7);
  *(short *)(ar4 + 0x25) = (short)(int)fVar9;
  FUN_8c120550(ar4,0x1f,ar6,ar7);
  *(short *)((int)ar4 + 0x96) = (short)(int)fVar9;
  ar4[0x17] = ar4[3] + 8;
  ar4[0x18] = ar4[3] + 0x10;
  ar4[0x19] = *(int *)(uint)ar4[4];
  FUN_8c120550(ar4,0x13,ar6,ar7);
  a5 = 0x400;
  bVar17 = 0;
  bVar18 = 0;
  bVar19 = 0;
  ar4[0x4c] = (int)fVar9 & 0xffff;
  ar4[0x49] = (int)(uVar16 >> 0x20);
  ar4[0x4a] = -0x3eec6e59;
  iVar2 = iVar3;
  iVar1 = (**(code **)(iVar3 + 0x10))(iVar3,0x400,ar6,ar7);
  uVar4 = 0;
  ar4[0x48] = iVar1;
  if (bVar19 == 0) {
    dVar15 = 255.0;
    puVar6 = auStack_3c;
  }
  else {
    dVar15 = 1.1125374633749587e-308;
  }
  do {
    *(uint *)(puVar6 + -4) = ar4[0x48] + uVar4 * 4;
    if (bVar19 == 0) {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),ar4[0x49]);
    }
    dVar12 = (double)(float)uVar16;
    if ((char)((((uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14) & 0x100000) >>
              0x14) == '\0') {
      pdVar8 = (double *)(puVar6 + -0xc);
      *(double *)(puVar6 + -0xc) = dVar12;
    }
    else {
      *(double *)(puVar6 + -0xc) = dVar12;
      pdVar8 = (double *)(puVar6 + -0x14);
      *(undefined8 *)(puVar6 + -0x14) = in_xd2;
    }
    fVar9 = (float)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    dVar12 = (double)(fVar9 * ((float)uVar16 - (float)ar4[0x4a])) / dVar15;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7);
    iVar1 = uVar4 + 1;
    if (bVar19 == 0) {
      *(int *)*(double **)(pdVar8 + 1) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      **(double **)(pdVar8 + 1) = dVar12;
    }
    *(int *)(pdVar8 + 1) = ar4[0x48] + iVar1 * 4;
    if (bVar19 == 0) {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),ar4[0x49]);
    }
    dVar12 = (double)(float)uVar16;
    if ((char)((((uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14) & 0x100000) >>
              0x14) == '\0') {
      *pdVar8 = dVar12;
    }
    else {
      *pdVar8 = dVar12;
      pdVar7 = pdVar8 + -1;
      pdVar8 = pdVar8 + -1;
      *pdVar7 = (double)in_xd2;
    }
    fVar9 = (float)iVar1;
    if (iVar1 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    dVar12 = (double)(fVar9 * ((float)uVar16 - (float)ar4[0x4a])) / dVar15;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7);
    uVar4 = uVar4 + 2;
    puVar6 = (undefined1 *)((int)pdVar8 + 0xc);
    if (bVar19 == 0) {
      *(int *)*(double **)((int)pdVar8 + 8) = (int)((ulonglong)dVar12 >> 0x20);
    }
    else {
      **(double **)((int)pdVar8 + 8) = dVar12;
    }
  } while (uVar4 < 0x100);
  cVar20 = '\0';
  FUN_8c120550(ar4,0x12,ar6,ar7);
  if (cVar20 == '\0') {
    ar4[0x4b] = (int)((ulonglong)dVar12 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x4b) = dVar12;
  }
  iVar2 = (**(code **)(iVar3 + 0x10))(iVar3,(ar4[0x4c] + 1) * 4,ar6,ar7);
  ar4[0x4d] = iVar2;
  iVar2 = (**(code **)(iVar3 + 0x10))(iVar3,(ar4[0x4c] + 1) * 0x100,ar6,ar7);
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(ar4[0x4d] + iVar1) = iVar2;
    iVar2 = iVar2 + 0x100;
  } while (uVar4 <= (uint)ar4[0x4c]);
  uVar10 = 0x3ff0000000000000;
  cVar20 = '\0';
  thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
  if (cVar20 == '\0') {
    *(int *)((int)pdVar8 + 0xc) = (int)((ulonglong)uVar10 >> 0x20);
  }
  else {
    *(undefined8 *)((int)pdVar8 + 0xc) = uVar10;
  }
  *(undefined4 *)((int)pdVar8 + 0x14) = 0;
  if (cVar20 == '\0') {
    uVar16 = CONCAT44((int)(uVar16 >> 0x20),0x437f0000);
  }
  do {
    fVar9 = (float)*(int *)((int)pdVar8 + 0x14);
    if (*(int *)((int)pdVar8 + 0x14) < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    uVar5 = 0;
    *(float *)((int)pdVar8 + 0x10) = fVar9 * (float)ar4[0x4b];
    iVar1 = *(int *)((int)pdVar8 + 0x14) * 4;
    do {
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar13 = (float)ar4[0x49];
      fVar9 = (float)(-((double)((fVar14 - fVar9) - fVar13) * dVar15) /
                      (double)(fVar13 - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + uVar5) = (char)(int)fVar9;
      iVar3 = uVar5 + 1;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar11 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar11);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      dVar12 = dVar11;
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
        dVar12 = (double)(ulonglong)(uint)fVar13;
      }
      cVar20 = '\0';
      fVar14 = SUB84(dVar12,0);
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
        fVar14 = (float)((ulonglong)dVar11 >> 0x20);
      }
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 2;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 3;
      fVar14 = (float)ar4[0x49];
      *(double *)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7);
      fVar14 = (float)((ulonglong)dVar12 >> 0x20);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7);
      if (cVar20 == '\0') {
        fVar9 = *(float *)((int)pdVar8 + 0xc);
      }
      fVar13 = 1.75;
      fVar9 = (float)(-((double)((fVar14 - fVar9) - (float)ar4[0x49]) * dVar15) /
                      (double)((float)ar4[0x49] - (float)ar4[0x4a]) + 0.5);
      if (0.0 <= fVar9) {
        if ((float)uVar16 < fVar9) {
          fVar9 = (float)uVar16;
        }
      }
      else {
        fVar9 = (float)(uVar16 >> 0x20);
      }
      *(char *)(*(int *)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x100);
    iVar1 = *(int *)((int)pdVar8 + 0x14);
    *(uint *)((int)pdVar8 + 0x14) = iVar1 + 1U;
  } while (iVar1 + 1U <= (uint)ar4[0x4c]);
  ar4[0x45] = 0;
  ar4[0x46] = 0;
  FUN_8c120550(ar4,0x14,ar6,ar7);
  *(char *)(ar4 + 0x47) = (char)(int)fVar13;
  *(undefined1 *)((int)ar4 + 0x11d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c10df48\n.set _FUN_8c10df48, _FUN_8c10df48_def\n");
//@unit 8c10e6c0
#include "../decls.h"
uint FUN_8c10e6c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float extraout_fr0;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  iVar4 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(ar5 + 4));
  }
  bVar8 = 0;
  bVar9 = 0;
  bVar10 = 0;
  thunk_FUN_8c013dfc(iVar4,ar5,ar6,ar7);
  cVar1 = (char)((((uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14) & 0x100000) >>
                0x14);
  if (cVar1 == '\0') {
    fVar2 = 255.0;
  }
  else {
    fVar2 = -0.5000001;
  }
  if (cVar1 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x124),*(undefined4 *)(ar4 + 0x128));
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + 0x124);
  }
  fVar2 = (extraout_fr0 * fVar2) / ((float)((ulonglong)uVar6 >> 0x20) - (float)uVar6);
  if (0.0 <= fVar2) {
    uVar7 = 0x3fe00000;
  }
  else {
    uVar7 = 0xbfe00000;
  }
  iVar4 = 0;
  uVar3 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar5 = (uint)*(byte *)(iVar4 + ar6) +
              (int)((double)fVar2 + (double)((ulonglong)uVar7 << 0x20));
      if (iVar5 < 0x100) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0xff;
      }
      *(char *)(iVar4 + ar6) = (char)iVar5;
      iVar4 = iVar4 + 1;
      uVar3 = (uint)*(ushort *)(ar5 + 4);
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10e6c0\n.set _FUN_8c10e6c0, _FUN_8c10e6c0_def\n");
//@unit 8c10e6d0
#include "../decls.h"
uint FUN_8c10e6d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r11;
  int unaff_r12;
  int unaff_r14;
  undefined8 in_dr0;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 in_xd2;
  bool bVar15;
  byte in_FPSCR_CAUSE;
  byte bVar16;
  byte in_FPSCR_DN;
  byte bVar17;
  byte in_FPSCR_PR;
  byte bVar18;
  byte in_FPSCR_SZ;
  byte bVar19;
  
  fVar12 = (float)((ulonglong)in_dr0 >> 0x20);
  fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
  iVar7 = 0;
  iVar4 = iVar7;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar7 = iVar4 + 1;
      if (in_FPSCR_SZ != 0) {
        in_xd2 = *(undefined8 *)
                  (*(int *)(0x120 + unaff_r11) + (uint)*(byte *)(iVar4 + unaff_r12) * 4);
      }
      fVar14 = (float)((ulonglong)in_xd2 >> 0x20);
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar4 = iVar7;
    } while (iVar7 < (int)(uint)*(ushort *)(unaff_r14 + 4));
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = (byte)((uVar5 & 0x80000) >> 0x13);
  bVar19 = (byte)((uVar5 & 0x100000) >> 0x14);
  thunk_FUN_8c013dfc(iVar7,ar5,ar6,ar7);
  uVar6 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14 |
          0x80000;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  dVar13 = (double)fVar12;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((undefined4)DAT_8c10e788,_DAT_8c10e77c);
  }
  else {
    dVar11 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e788+4)),(undefined4)DAT_8c10e788);
  }
  if ((char)uVar5 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) *
                              (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 * dVar11;
  }
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(0x128 + unaff_r11);
  }
  iVar4 = 0x128 + -4;
  uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44(*(undefined4 *)(iVar4 + unaff_r11),SUB84(dVar11,0));
  }
  else {
    dVar11 = *(double *)(iVar4 + unaff_r11);
  }
  uVar6 = (uVar5 & 0x80000) >> 0x13;
  if ((char)uVar6 == '\0') {
    fVar12 = (float)((ulonglong)dVar11 >> 0x20) - SUB84(dVar11,0);
  }
  else {
    fVar12 = (float)((ulonglong)(dVar11 - dVar11) >> 0x20);
  }
  uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
  cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    dVar13 = (double)CONCAT44((float)((ulonglong)dVar13 >> 0x20) /
                              (float)((ulonglong)(double)fVar12 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / (double)fVar12;
  }
  if (cVar2 == '\0') {
    fVar14 = (float)dVar13;
  }
  puVar3 = (&thunk_FUN_8c013dfc);
  if (cVar2 == '\0') {
    puVar3 = _DAT_8c10e77c;
  }
  if (cVar1 == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < (float)(uint)puVar3;
  }
  else {
    bVar15 = (double)fVar14 < (double)CONCAT44(puVar3,_DAT_8c10e77c);
  }
  if (bVar15) {
    if (cVar2 == '\0') {
      dVar13 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e788+4)),_DAT_8c10e77c);
    }
    else {
      dVar13 = (double)CONCAT44((*(uint *)0x8c10e790),(*(uint*)((uchar*)&DAT_8c10e788+4)));
    }
  }
  else if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((undefined4)DAT_8c10e850,_DAT_8c10e77c);
  }
  else {
    dVar13 = (double)CONCAT44((*(uint*)((uchar*)&DAT_8c10e850+4)),(undefined4)DAT_8c10e850);
  }
  dVar11 = (double)fVar14;
  iVar4 = (int)0xff;
  if (cVar2 == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)dVar13 >> 0x20),(*(uint*)((uchar*)&DAT_8c10e850+4)));
  }
  if (cVar1 == '\0') {
    dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) +
                              (float)((ulonglong)dVar13 >> 0x20),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 + dVar13;
  }
  if (cVar1 == '\0') {
    iVar7 = (int)(float)((ulonglong)dVar11 >> 0x20);
  }
  else {
    iVar7 = (int)dVar11;
  }
  iVar10 = 0;
  uVar5 = 0;
  if (*(short *)(unaff_r14 + 4) != 0) {
    do {
      iVar8 = (uint)*(byte *)(iVar10 + unaff_r12) + iVar7;
      iVar9 = iVar4;
      if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
        iVar9 = 0;
      }
      *(char *)(iVar10 + unaff_r12) = (char)iVar9;
      iVar10 = iVar10 + 1;
      uVar5 = (uint)*(ushort *)(unaff_r14 + 4);
    } while (iVar10 < (int)uVar5);
  }
  return uVar5;
}

__asm__(".globl _FUN_8c10e6d0\n.set _FUN_8c10e6d0, _FUN_8c10e6d0_def\n");
//@unit 8c10e7de
#include "../decls.h"
uint FUN_8c10e7de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(short *)(ar4 + 4) != 0) {
    do {
      *(byte *)(iVar2 + ar5) =
           *(byte *)(*(int *)((uint)*(byte *)(*(int *)(ar4 + 8) + iVar2) * 4 + ar6) +
                    (uint)*(byte *)(iVar2 + ar5));
      *(undefined1 *)(*(int *)(ar4 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 1;
      uVar1 = (uint)*(ushort *)(ar4 + 4);
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10e7de\n.set _FUN_8c10e7de, _FUN_8c10e7de_def\n");
//@unit 8c10e818
#include "../decls.h"
uint FUN_8c10e818_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *a5;
  int *a5_00;
  int *a4;
  char cVar8;
  int iStack_28;
  
  if (*(char *)(*(int *)(ar4 + 100) + 0x30) == '\0') {
    uVar3 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    pbVar4 = (byte *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0x5c),(*(undefined4 **)(ar4 + 0x5c))[1],
                                  ar6,ar7);
    if (pbVar4 != (byte *)0x0) {
      cVar8 = '\0';
      a5 = (int *)(*(undefined4 **)(ar4 + 0x60))[1];
      uVar5 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0x60),a5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x28) = uVar5;
      *(uint *)(ar4 + 0x2c) = (uint)*(ushort *)(ar4 + 0x9a) * 2 + *(int *)(ar4 + 0x28);
      if (*(char *)(ar4 + 0x11d) != '\0') {
        a5 = (int *)(*(undefined4 **)(ar4 + 0xc))[1];
        pcVar6 = (char *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),a5,ar6,ar7);
        cVar8 = '\x01' - *pcVar6;
      }
      if (*(char *)(ar4 + 0x11c) != '\0') {
        cVar8 = '\0';
      }
      bVar2 = false;
      if (cVar8 != '\0') {
        iVar7 = *(int *)(ar4 + 0x114) + 1;
        *(int *)(ar4 + 0x114) = iVar7;
        iVar7 = libgcc_divide_helper_0106dc(iVar7,*(undefined4 *)(ar4 + 0x130));
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x114) = 0;
          *(int *)(ar4 + 0x118) = *(int *)(ar4 + 0x118) + 1;
          bVar2 = true;
        }
      }
      iVar7 = 0;
      iStack_28 = 0;
      a4 = *(int **)(ar4 + 0x84);
      if (*(short *)(ar4 + 0x90) != 0) {
        do {
          a5_00 = *(int **)(iVar7 * 4 + ar4 + 0xc0);
          if (cVar8 != '\0') {
            *(char *)(a4[2] + (uint)*pbVar4) = *(char *)(a4[2] + (uint)*pbVar4) + '\x01';
          }
          *(undefined4 *)(iVar7 * 4 + ar4 + 0x34) = *(undefined4 *)(*a4 + (uint)*pbVar4 * 4);
          if (bVar2) {
            ar6 = *(int **)(ar4 + 0x134);
            a5 = a5_00;
            FUN_8c10e7de(a4,a5_00,ar6,ar7);
            if (0x13 < *(uint *)(ar4 + 0x118)) {
              a5 = a4;
              ar6 = a5_00;
              FUN_8c10e6c0(ar4,a4,a5_00,ar7);
            }
          }
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar7 = iVar7 + 1;
          iStack_28 = iStack_28 + (uint)*(byte *)((uint)bVar1 + (int)a5_00);
          a4 = a4 + 3;
        } while (iVar7 < (int)(uint)*(ushort *)(ar4 + 0x90));
      }
      if (*(int *)(ar4 + 0x28) != 0) {
        uVar5 = FUN_8c111dfe(*(undefined4 *)(ar4 + 100),a5,ar6,ar7);
        (**(code **)(ar4 + 0x68))(ar4,uVar5,iVar7,iStack_28);
      }
      if (0x13 < *(uint *)(ar4 + 0x118)) {
        *(undefined4 *)(ar4 + 0x118) = 0;
      }
    }
  }
  iVar7 = **(int **)(ar4 + 0x5c);
  return *(int *)((*(int **)(ar4 + 0x5c))[1] * 4 + *(int *)(iVar7 + 0x40)) == *(int *)(iVar7 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10e818\n.set _FUN_8c10e818, _FUN_8c10e818_def\n");
//@unit 8c10ea24
#include "../decls.h"
uint FUN_8c10ea24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 *puStack_c;
  
  *(char *)(0x11d + ar4) = (char)ar5;
  if ((char)ar5 == '\0') {
    puStack_c = *(undefined4 **)(ar4 + 0xc);
    ar5_00 = 6;
    ar6_00 = puStack_c[1];
  }
  else {
    puStack_c = *(undefined4 **)(ar4 + 0xc);
    ar6_00 = puStack_c[1];
    ar5_00 = 5;
  }
  uVar1 = FUN_8c1113d0(*puStack_c,ar5_00,ar6_00,0);
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea24\n.set _FUN_8c10ea24, _FUN_8c10ea24_def\n");
//@unit 8c10ea62
#include "../decls.h"
uint FUN_8c10ea62_def(int ar4,uint ar5,undefined2 *ar6,int *ar7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined2 *ar6_01;
  undefined4 *puStack_1c;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 2) {
    uVar5 = 1;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 10) {
        if (ar6 == (undefined2 *)0x0) {
          FUN_8c10d29c(ar4,ar5,0,ar7);
          FUN_8c10d1bc(ar4,ar5,ar6,ar7);
          return 1;
        }
        FUN_8c10d2f0(ar4,*ar7 + (int)ar6,ar6,ar7);
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xb) {
        if (ar6 != (undefined2 *)0x0) {
          FUN_8c10d366(ar4,*ar7 + (int)ar6,ar6,ar7);
        }
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(iVar2 + *(int *)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xd) {
        ar6[1] = *(undefined2 *)(0x96 + ar4);
        *ar6 = *(undefined2 *)(0x94 + ar4);
        return 1;
      }
      if (uVar1 == 0xf) {
        *(undefined2 *)(0x96 + ar4) = ar6[1];
        iVar2 = (int)0x94;
        *(undefined2 *)(iVar2 + ar4) = *ar6;
        if (*(int *)(iVar2 + 0x20 + ar4) == 0) {
          return 1;
        }
        FUN_8c10d3ec(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x10) {
        ar6_01 = ar6;
        uVar1 = FUN_8c10d458(ar4,ar6,ar6,ar7);
        puVar3 = (&DATA_8c10dda0);
        if ((uVar1 & 0xff) == 0) {
          FUN_8c10d29c(ar4,ar6,ar6_01,ar7);
          puVar3 = (&FUN_8c10e818);
        }
        *(undefined **)(ar4 + 0x18) = puVar3;
        return 1;
      }
      if (uVar1 == 0x16) {
        FUN_8c10d29c(ar4,ar5,ar6,ar7);
        return 1;
      }
      if (uVar1 == 0x17) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        ar6_00 = puStack_1c[1];
        uVar5 = 7;
LAB_8c10eaee:
        uVar5 = FUN_8c1113d0(*puStack_1c,uVar5,ar6_00,ar6);
        return uVar5;
      }
      if (uVar1 == 0x18) {
        puStack_1c = *(undefined4 **)(ar4 + 0xc);
        uVar5 = 6;
        ar6 = (undefined2 *)0x0;
        ar6_00 = puStack_1c[1];
        goto LAB_8c10eaee;
      }
      if (uVar1 != (int)0xff) {
        return 0;
      }
      uVar1 = FUN_8c10ddaa(ar4,ar5,ar6,ar7);
      goto LAB_8c10ec56;
    }
    uVar5 = 0;
  }
  uVar1 = FUN_8c10ea24(ar4,uVar5,ar6,ar7);
LAB_8c10ec56:
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea62\n.set _FUN_8c10ea62, _FUN_8c10ea62_def\n");
//@unit 8c10ec78
#include "../decls.h"
int FUN_8c10ec78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,3,ar7,(&DATA_8c10dda0),(&FUN_8c10df48),(&FUN_8c10ea62),
                     (int)0x138);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10ec78\n.set _FUN_8c10ec78, _FUN_8c10ec78_def\n");
//@unit 8c10ecd8
#include "../decls.h"
undefined4 * FUN_8c10ecd8_def(float *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uStack_5c;
  
  uVar4 = 1;
  uVar9 = 0;
  uVar6 = ar5;
  if (1 < ar5) {
    do {
      do {
        uVar6 = uVar6 >> 1;
        uVar9 = uVar9 ^ uVar6;
      } while ((uVar9 & uVar6) == 0);
      if (uVar9 < uVar4) {
        fVar11 = ar4[uVar4];
        ar4[uVar4] = ar4[uVar9];
        ar4[uVar9] = fVar11;
      }
      uVar4 = uVar4 + 1;
      uVar6 = ar5;
    } while (uVar4 < ar5);
  }
  uVar6 = 0;
  if (1 < ar5) {
    do {
      uVar6 = uVar6 + 1;
      if ((int)uVar6 < 0) {
        uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar6 & 0x1f);
      }
    } while (uVar4 < ar5);
  }
  puVar1 = &DAT_8c10eda0;
  uVar6 = uVar6 & 1;
  pfVar10 = ar4 + ar5;
  pfVar5 = ar4;
  if (uVar6 == 0) {
    for (; pfVar5 < pfVar10; pfVar5 = pfVar5 + 4) {
      fVar12 = pfVar5[1];
      fVar14 = pfVar5[2];
      fVar11 = *pfVar5 - fVar12;
      fVar16 = pfVar5[3];
      fVar12 = fVar12 + *pfVar5;
      fVar13 = fVar14 - fVar16;
      fVar16 = fVar16 + fVar14;
      pfVar5[2] = fVar12 - fVar16;
      *pfVar5 = fVar12 + fVar16;
      pfVar5[3] = fVar11 - fVar13;
      pfVar5[1] = fVar11 + fVar13;
    }
  }
  else {
    pfVar5 = ar4 + 1;
    for (pfVar7 = ar4; pfVar7 < pfVar10; pfVar7 = pfVar7 + 8) {
      fVar16 = *pfVar7 - *pfVar5;
      fVar13 = *pfVar5 + *pfVar7;
      fVar11 = pfVar7[2];
      fVar12 = pfVar5[2];
      fVar14 = fVar11 - fVar12;
      fVar12 = fVar12 + fVar11;
      fVar11 = pfVar7[4];
      fVar22 = pfVar5[4];
      fVar20 = pfVar5[6];
      fVar15 = fVar22 + fVar11;
      fVar19 = pfVar7[6];
      fVar24 = fVar20 + fVar19;
      fVar18 = fVar16 - fVar14;
      fVar16 = fVar16 + fVar14;
      fVar17 = fVar15 - fVar24;
      fVar14 = fVar13 + fVar12;
      fVar13 = fVar13 - fVar12;
      fVar15 = fVar15 + fVar24;
      fVar12 = (fVar11 - fVar22) * 1.4142135;
      fVar11 = (fVar19 - fVar20) * 1.4142135;
      pfVar7[4] = fVar14 - fVar15;
      *pfVar7 = fVar14 + fVar15;
      pfVar7[6] = fVar13 - fVar17;
      pfVar7[2] = fVar13 + fVar17;
      pfVar5[4] = fVar16 - fVar12;
      *pfVar5 = fVar16 + fVar12;
      pfVar5[6] = fVar18 - fVar11;
      pfVar5[2] = fVar18 + fVar11;
      pfVar5 = pfVar5 + 8;
    }
  }
  if (0xf < ar5) {
    do {
      uVar6 = uVar6 + 2;
      if ((int)uVar6 < 0) {
        uVar4 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar6 & 0x1f);
      }
      uVar9 = uVar4 >> 1;
      pfVar7 = ar4 + uVar9;
      pfVar5 = ar4;
      do {
        fVar12 = pfVar5[uVar4];
        fVar11 = *pfVar5 - fVar12;
        fVar12 = fVar12 + *pfVar5;
        fVar16 = pfVar5[uVar4 * 2];
        fVar14 = pfVar5[uVar4 * 3];
        fVar13 = fVar16 - fVar14;
        fVar14 = fVar14 + fVar16;
        pfVar5[uVar4 * 2] = fVar12 - fVar14;
        *pfVar5 = fVar12 + fVar14;
        pfVar5[uVar4 * 3] = fVar11 - fVar13;
        pfVar5[uVar4] = fVar11 + fVar13;
        fVar11 = pfVar7[uVar4];
        fVar14 = fVar11 + *pfVar7;
        fVar11 = *pfVar7 - fVar11;
        fVar12 = pfVar7[uVar4 * 3] * 1.4142135;
        fVar13 = pfVar7[uVar4 * 2] * 1.4142135;
        pfVar7[uVar4 * 2] = fVar14 - fVar13;
        *pfVar7 = fVar14 + fVar13;
        pfVar5 = pfVar5 + uVar4 * 4;
        pfVar7[uVar4 * 3] = fVar11 - fVar12;
        pfVar7[uVar4] = fVar11 + fVar12;
        pfVar7 = pfVar7 + uVar4 * 4;
      } while (pfVar5 < pfVar10);
      fVar12 = *(float *)(&DAT_8c1274f8 + uVar6 * 4);
      fVar14 = *(float *)(&DAT_8c127538 + uVar6 * 4);
      iVar8 = 4;
      puVar1 = &DAT_8c10f100;
      fVar13 = 0.0;
      uStack_5c = 1;
      fVar11 = 1.0;
      if (1 < uVar9) {
        do {
          fVar16 = fVar12 * fVar11 - fVar14 * fVar13;
          fVar13 = fVar11 * fVar14 + fVar12 * fVar13;
          fVar11 = fVar16 * fVar16 - fVar13 * fVar13;
          fVar17 = fVar13 * fVar16 * 2.0;
          pfVar7 = (float *)((uVar4 * 4 - iVar8) + (int)ar4);
          pfVar5 = (float *)(iVar8 + (int)ar4);
          do {
            pfVar3 = pfVar5 + uVar4;
            fVar15 = *pfVar3;
            fVar18 = pfVar7[uVar4];
            fVar19 = fVar11 * fVar15 + fVar18 * fVar17;
            fVar22 = fVar15 * fVar17 - fVar18 * fVar11;
            fVar20 = *pfVar5 + fVar19;
            fVar19 = *pfVar5 - fVar19;
            pfVar2 = pfVar5 + uVar4 * 3;
            fVar21 = *pfVar7 + fVar22;
            fVar22 = *pfVar7 - fVar22;
            fVar24 = *pfVar2;
            fVar15 = pfVar7[uVar4 * 3];
            fVar18 = fVar11 * fVar24 + fVar15 * fVar17;
            fVar23 = fVar24 * fVar17 - fVar15 * fVar11;
            fVar24 = pfVar5[uVar4 * 2];
            fVar25 = fVar24 + fVar18;
            fVar24 = fVar24 - fVar18;
            fVar26 = pfVar7[uVar4 * 2];
            fVar15 = fVar26 - fVar23;
            fVar26 = fVar26 + fVar23;
            fVar18 = fVar13 * fVar25 - fVar16 * fVar15;
            fVar15 = fVar25 * fVar16 + fVar13 * fVar15;
            pfVar5[uVar4 * 2] = fVar20 - fVar15;
            *pfVar5 = fVar15 + fVar20;
            pfVar7[uVar4 * 3] = fVar22 - fVar18;
            pfVar7[uVar4] = fVar18 + fVar22;
            fVar18 = fVar16 * fVar26 - fVar13 * fVar24;
            fVar15 = fVar13 * fVar26 + fVar16 * fVar24;
            pfVar7[uVar4 * 2] = fVar21 - fVar15;
            *pfVar7 = fVar15 + fVar21;
            puVar1 = (undefined4 *)0x1c;
            pfVar5 = pfVar5 + uVar4 * 4;
            *pfVar2 = fVar19 - fVar18;
            *pfVar3 = fVar18 + fVar19;
            pfVar7 = pfVar7 + uVar4 * 4;
          } while (pfVar5 < pfVar10);
          uStack_5c = uStack_5c + 1;
          iVar8 = iVar8 + 4;
          fVar11 = fVar16;
        } while (uStack_5c < uVar9);
      }
    } while (uVar4 * 4 < ar5);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c10ecd8\n.set _FUN_8c10ecd8, _FUN_8c10ecd8_def\n");
//@unit 8c10f108
#include "../decls.h"
undefined8 * FUN_8c10f108_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  ulonglong in_dr2;
  float in_fr5;
  float fVar6;
  float fVar7;
  char cVar8;
  
  cVar8 = '\0';
  FUN_8c10ecd8(ar5,ar4,ar6,ar7);
  uVar1 = 1;
  uVar3 = ar4 >> 1;
  if (cVar8 == '\0') {
    fVar6 = 0.5;
  }
  else {
    in_fr5 = 0.5;
    fVar6 = -NAN;
  }
  if (1 < uVar3) {
    do {
      fVar5 = (float)in_dr2;
      ar4 = ar4 - 1;
      pfVar4 = (float *)(uVar1 * 4 + ar5);
      if (cVar8 == '\0') {
        in_fr5 = *pfVar4;
      }
      pfVar2 = (float *)(ar4 * 4 + ar5);
      if (cVar8 == '\0') {
        fVar7 = *pfVar2;
        fVar5 = in_fr5;
      }
      else {
        fVar7 = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
      }
      uVar1 = uVar1 + 1;
      cVar8 = '\0';
      in_fr5 = (in_fr5 + fVar7) * fVar6;
      fVar5 = (fVar5 - fVar7) * fVar6;
      in_dr2 = (ulonglong)(uint)fVar5;
      *pfVar2 = fVar5;
      *pfVar4 = in_fr5;
    } while (uVar1 < uVar3);
  }
  return &DAT_8c10f160;
}

__asm__(".globl _FUN_8c10f108\n.set _FUN_8c10f108, _FUN_8c10f108_def\n");
//@unit 8c10f110
#include "../decls.h"
undefined8 * FUN_8c10f110_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int unaff_r14;
  double in_dr2;
  undefined4 in_fr5;
  float fVar7;
  double dVar6;
  double in_dr6;
  float fVar8;
  double in_xd2;
  double in_xd4;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  
  FUN_8c10ecd8(unaff_r14,ar5,ar6,ar7);
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = (double)CONCAT44((undefined4)DAT_8c10f160,in_fr5);
  }
  else {
    dVar6 = (double)CONCAT44(0xffe7ffff,(undefined4)DAT_8c10f160);
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(uVar2 * 4 + unaff_r14);
      if (in_FPSCR_SZ == 0) {
        dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(ar4 * 4 + unaff_r14);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = (double)CONCAT44(*(undefined4 *)pdVar3,SUB84(in_dr6,0));
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
      }
      else {
        in_dr6 = *pdVar3;
        in_xd2 = in_xd4;
      }
      uVar2 = uVar2 + 1;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar1 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar1 & 0x100000) >> 0x14);
      fVar8 = (float)((ulonglong)in_dr6 >> 0x20);
      if (in_FPSCR_PR == 0) {
        fVar7 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar7,(SUB84(dVar6,0) + fVar8) * fVar7);
        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),(SUB84(in_dr2,0) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)pdVar3 = SUB84(in_dr2,0);
        *(int *)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return &DAT_8c10f160;
}

__asm__(".globl _FUN_8c10f110\n.set _FUN_8c10f110, _FUN_8c10f110_def\n");
//@unit 8c10f168
#include "../decls.h"
undefined4 FUN_8c10f168_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(ar4 + 0x2c);
  pfVar2 = ar5 + uVar1;
  iVar3 = *(int *)(ar4 + 0x34);
  pfVar6 = ar6 + *(int *)(ar4 + 0x30);
  *ar6 = *ar5 * *ar5;
  pfVar4 = ar6 + iVar3;
  pfVar5 = ar6 + (uVar1 >> 1);
  if (ar6 == pfVar6) {
    pfVar6 = pfVar6 + 1;
  }
  while( true ) {
    ar6 = ar6 + 1;
    pfVar2 = pfVar2 + -1;
    ar5 = ar5 + 1;
    if (pfVar6 <= ar6) break;
    *ar6 = *ar5 * *ar5 + *pfVar2 * *pfVar2;
  }
  for (; ar6 <= pfVar4; ar6 = ar6 + 1) {
    fVar8 = *pfVar2;
    pfVar2 = pfVar2 + -1;
    fVar7 = *ar5;
    ar5 = ar5 + 1;
    *ar6 = fVar7 * fVar7 + fVar8 * fVar8;
  }
  for (; ar6 < pfVar5; ar6 = ar6 + 1) {
    fVar7 = *ar5;
    ar5 = ar5 + 1;
    *ar6 = fVar7 * fVar7 + *pfVar2 * *pfVar2;
    pfVar2 = pfVar2 + -1;
  }
  *ar6 = *ar5 * *ar5;
  return 0x38;
}

__asm__(".globl _FUN_8c10f168\n.set _FUN_8c10f168, _FUN_8c10f168_def\n");
//@unit 8c10f22a
#include "../decls.h"
uint FUN_8c10f22a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  int ar4_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0;
  char cVar7;
  undefined8 uStack_14;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (*(char *)((*(int **)(ar4 + 0x10))[1] + 0x30) != '\x01')) {
    if (*(char *)(ar4 + 0x3c) == '\0') {
      puVar5 = *(undefined4 **)(ar4 + 0xc);
      uStack_14 = CONCAT44(puVar5,(undefined4)uStack_14);
      uVar6 = puVar5[1];
      iVar4 = FUN_8c111fbe(*puVar5,uVar6,ar6,ar7);
    }
    else {
      puVar5 = *(undefined4 **)(ar4 + 0xc);
      ar7 = 1;
      ar6 = *(undefined4 *)(ar4 + 0x44);
      uStack_14 = CONCAT44(puVar5,(undefined4)uStack_14);
      uVar6 = puVar5[1];
      uVar2 = FUN_8c111e72(*puVar5,uVar6,ar6,1);
      if ((uVar2 & 0xff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(ar4 + 0x44);
        ar6 = *(undefined4 *)(ar4 + 0x40);
        uVar6 = 0;
        memset(*(int *)(ar4 + 0x2c) * 4 + iVar4,0,ar6,ar7);
      }
    }
    if (iVar4 != 0) {
      uVar6 = FUN_8c111dfe(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar6,ar6,ar7);
      (*(uint*)((uchar*)&uStack_14+4)) = uVar6;
      FUN_8c10f108(*(undefined4 *)(ar4 + 0x2c),iVar4,ar6,ar7);
      ar4_00 = ar4;
      uVar6 = (*(uint*)((uchar*)&uStack_14+4));
      FUN_8c10f168(ar4,iVar4,(*(uint*)((uchar*)&uStack_14+4)),ar7);
      cVar7 = '\0';
      thunk_FUN_8c013dfc(ar4_00,iVar4,uVar6,ar7);
      uVar1 = in_dr0;
      if (cVar7 == '\0') {
        uStack_14 = CONCAT44((*(uint*)((uchar*)&uStack_14+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = uStack_14;
      }
      uStack_14 = uVar1;
      cVar7 = '\0';
      FUN_8c111cdc(**(undefined4 **)(ar4 + 0x10),&uStack_14,1,ar7);
      if (cVar7 == '\0') {
        uStack_14 = CONCAT44((undefined4)uStack_14,0xc1daf5c2);
      }
      sVar3 = (short)(int)(((float)((ulonglong)uStack_14 >> 0x20) + (float)uStack_14) * 4.3429446 *
                          100.0);
      if (0x708 < sVar3) {
        sVar3 = 0x708;
      }
      if ((int)*(short *)(ar4 + 0x48) < (int)sVar3) {
        *(short *)(ar4 + 0x48) = sVar3;
      }
      else {
        *(short *)(ar4 + 0x48) =
             (short)((uint)((*(short *)(ar4 + 0x48) + 0x1c20) * 64000) >> 0x10) + -0x1c20;
      }
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10f22a\n.set _FUN_8c10f22a, _FUN_8c10f22a_def\n");
//@unit 8c10f39a
#include "../decls.h"
undefined4 FUN_8c10f39a_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  int in_r0;
  char in_T;
  
  if (in_T == '\x01') {
    *ar6 = (int)(ar4 + 0x12);
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    if ((char)ar4[0xf] != '\0') {
      ar5 = ar4[0x11];
      (**(code **)(*ar4 + 0x18))(*ar4,ar5,ar6,ar7);
    }
    FUN_8c120668(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c10f39a\n.set _FUN_8c10f39a, _FUN_8c10f39a_def\n");
//@unit 8c10f41e
#include "../decls.h"
undefined4 FUN_8c10f41e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 in_dr0;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar4 = *ar4;
  FUN_8c120550(ar4,3,ar6,ar7);
  fStack_1c = (float)(int)(short)(int)(float)((ulonglong)in_dr0 >> 0x20);
  FUN_8c120550(ar4,4,ar6,ar7);
  uVar5 = (int)(float)((ulonglong)in_dr0 >> 0x20) & 0xffff;
  ar4[0xb] = uVar5;
  uVar1 = (uint)(*(ushort *)(*(int *)(uint)ar4[3] + 0xc) >> 2);
  ar4[10] = uVar1;
  if (uVar5 < uVar1) {
    uVar2 = 1;
  }
  else {
    if ((uint)ar4[10] < uVar5) {
      *(undefined1 *)(ar4 + 0xf) = 1;
      ar4[0x10] = (uVar5 - ar4[10]) * 4;
      iVar4 = (**(code **)(iVar4 + 0x10))(iVar4,uVar5 << 2,ar6,ar7);
      ar4[0x11] = iVar4;
    }
    *(undefined2 *)(*(int *)(uint)ar4[4] + 0xc) = 4;
    *(short *)(*(int *)(ar4[4] + 4) + 0xc) = ((short)(uVar5 >> 1) + 1) * 4;
    uVar2 = 1;
    cVar12 = '\0';
    piVar3 = ar4;
    FUN_8c120550(ar4,1,ar6,ar7);
    fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
    fStack_20 = fVar8;
    if (cVar12 != '\0') {
      fStack_20 = (float)in_dr0;
      fStack_1c = fVar8;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = fVar8 * fStack_20;
    fVar6 = (float)(int)fStack_1c * 2.0;
    fVar10 = 2.0;
    fStack_24 = fVar6;
    thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7);
    if (cVar12 == '\0') {
      fVar8 = 2.1474836e+09;
    }
    fVar9 = fVar10;
    if (fVar8 < fVar10) {
      fVar9 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar9;
    ar4[0xc] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xc] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xc] = uVar1;
    uVar2 = 2;
    cVar12 = '\0';
    piVar3 = ar4;
    FUN_8c120550(ar4,2,ar6,ar7);
    if (cVar12 == '\0') {
      fStack_24 = fVar10;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    lVar7 = CONCAT44(0x3f7ff972,fVar6);
    fVar6 = (fVar8 * fStack_24) / fVar6;
    thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7);
    fVar8 = (float)((ulonglong)lVar7 >> 0x20);
    lVar11 = lVar7;
    if (cVar12 == '\0') {
      fVar6 = 2.1474836e+09;
      lVar11 = (ulonglong)(uint)fVar8 << 0x20;
    }
    fVar10 = (float)((ulonglong)lVar11 >> 0x20);
    if (fVar6 < fVar8) {
      fVar10 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar10;
    ar4[0xd] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xd] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xd] = uVar1;
    uVar5 = ar4[0xc];
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    ar4[0xd] = uVar5;
    cVar12 = '\0';
    FUN_8c120550(ar4,5,ar6,ar7);
    if (cVar12 == '\0') {
      ar4[0xe] = (int)((ulonglong)lVar7 >> 0x20);
    }
    else {
      *(longlong *)(ar4 + 0xe) = lVar7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10f41e\n.set _FUN_8c10f41e, _FUN_8c10f41e_def\n");
//@unit 8c10f632
#include "../decls.h"
undefined4 FUN_8c10f632_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c120580))
                    (ar4,ar5,1,2,(&FUN_8c10f22a),(&FUN_8c10f41e),(&DATA_8c10f392),0x4c);
  return uVar1;
}

__asm__(".globl _FUN_8c10f632\n.set _FUN_8c10f632, _FUN_8c10f632_def\n");
//@unit 8c10f69c
#include "../decls.h"
undefined4 FUN_8c10f69c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *ar5 = *(undefined4 *)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(ar4 + 0x30);
  puVar2 = ar5 + 2;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *puVar2 = *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1);
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x78));
  }
  *puVar2 = *(undefined4 *)(ar4 + 0x48);
  puVar2[1] = *(undefined4 *)(ar4 + 0x4c);
  puVar2[2] = *(undefined4 *)(ar4 + 0x50);
  puVar2[3] = *(undefined4 *)(ar4 + 0x54);
  return 0x54;
}

__asm__(".globl _FUN_8c10f69c\n.set _FUN_8c10f69c, _FUN_8c10f69c_def\n");
//@unit 8c10f6f0
#include "../decls.h"
undefined4 FUN_8c10f6f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x28) = *ar5;
  puVar1 = ar5 + 2;
  *(short *)(ar4 + 0x30) = (short)ar5[1];
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      uVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x44) + uVar2 * 4) = uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = *puVar1;
  *(undefined4 *)(ar4 + 0x4c) = puVar1[1];
  *(undefined4 *)(ar4 + 0x50) = puVar1[2];
  *(undefined4 *)(ar4 + 0x54) = puVar1[3];
  return 0x54;
}

__asm__(".globl _FUN_8c10f6f0\n.set _FUN_8c10f6f0, _FUN_8c10f6f0_def\n");
//@unit 8c10f736
#include "../decls.h"
undefined4 FUN_8c10f736_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (**(code **)(0x84 + ar5))(ar5,1,1);
  uVar1 = (**(code **)(ar5 + 0x54))(uVar3);
  *(undefined1 *)(ar4 + 0x58) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x58))(uVar3);
  *(undefined1 *)(ar4 + 0x59) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x5c))(uVar3);
  *(undefined1 *)(ar4 + 0x5a) = uVar1;
  uVar1 = (**(code **)(ar5 + 0x60))(uVar3);
  *(undefined1 *)(ar4 + 0x5b) = uVar1;
  uVar2 = (**(code **)(ar5 + 100))(uVar3);
  *(ushort *)(ar4 + 0x5c) = uVar2 & 0xff;
  uVar4 = (**(code **)(0xb4 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x60) = uVar4;
  uVar4 = (**(code **)(0xb8 + ar5))(uVar3);
  *(undefined4 *)(ar4 + 100) = uVar4;
  uVar3 = (**(code **)(0xbc + ar5))(uVar3);
  *(undefined4 *)(ar4 + 0x68) = uVar3;
  if ((uint)*(byte *)(ar4 + 0x58) != *(int *)(ar4 + 0x70) - *(int *)(ar4 + 0x74)) {
    uVar3 = FUN_8c1204c4(ar4,0x66);
    return uVar3;
  }
  *(int *)(0x90 + ar4) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c10f736\n.set _FUN_8c10f736, _FUN_8c10f736_def\n");
//@unit 8c10f742
#include "../decls.h"
undefined4 FUN_8c10f742_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r13;
  int unaff_r14;
  
  uVar1 = (**(code **)(in_r0 + unaff_r13))(unaff_r13,ar5,ar6,ar7);
  uVar2 = (**(code **)(unaff_r13 + 0x54))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x58) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x58))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x59) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x5c))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5a) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 0x60))(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 0x5b) = (char)uVar2;
  uVar2 = (**(code **)(unaff_r13 + 100))(uVar1,ar5,ar6,ar7);
  *(ushort *)(unaff_r14 + 0x5c) = (ushort)uVar2 & 0xff;
  uVar2 = (**(code **)(0xb4 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x60) = uVar2;
  uVar2 = (**(code **)(0xb8 + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 100) = uVar2;
  uVar1 = (**(code **)(0xbc + unaff_r13))(uVar1,ar5,ar6,ar7);
  *(undefined4 *)(unaff_r14 + 0x68) = uVar1;
  if ((uint)*(byte *)(unaff_r14 + 0x58) != *(int *)(unaff_r14 + 0x70) - *(int *)(unaff_r14 + 0x74))
  {
    uVar1 = FUN_8c1204c4(0x66);
    return uVar1;
  }
  *(int *)(0x90 + unaff_r14) = unaff_r13;
  return 0;
}

__asm__(".globl _FUN_8c10f742\n.set _FUN_8c10f742, _FUN_8c10f742_def\n");
//@unit 8c10f850
#include "../decls.h"
undefined4 FUN_8c10f850_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int a7;
  uint uVar1;
  int a5;
  short sVar2;
  bool bVar4;
  uint uVar3;
  
  a7 = (**(code **)(*(int *)(0x90 + ar4) + 0x6c))(*(int *)(0x90 + ar4),ar5,ar6,ar7);
  a5 = 0;
  uVar3 = 0;
  sVar2 = 0;
  uVar1 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if ((*(uint *)(uVar1 * 8 + a7) & ar5) != 0) {
        a5 = a5 + 1;
        uVar3 = uVar1;
      }
      sVar2 = (short)uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(ar4 + 0x78));
  }
  bVar4 = a5 == 1;
  if (bVar4 != (bool)*(char *)(ar4 + 0x32)) {
    FUN_8c10fa6c(ar4,a5,0,a7);
  }
  if ((bVar4) && (*(short *)(ar4 + 0x30) = sVar2 + 1, *(int *)(ar4 + 0x28) == 0)) {
    *(undefined4 *)(ar4 + 0x28) = 1;
  }
  *(bool *)(ar4 + 0x32) = bVar4;
  *(uint *)(ar4 + 0x2c) = ar5;
  return 0x32;
}

__asm__(".globl _FUN_8c10f850\n.set _FUN_8c10f850, _FUN_8c10f850_def\n");
//@unit 8c10f8e6
#include "../decls.h"
uint FUN_8c10f8e6_def(int *ar4,uint ar5,int *ar6,int *ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  int a5;
  undefined4 ar6_00;
  int iVar2;
  uint uVar3;
  undefined4 *puStack_1c;
  
  iVar2 = *ar4;
  uVar1 = ar5 & 0xff;
  uVar3 = 1;
  if (uVar1 == 1) {
    uVar1 = FUN_8c10f736(ar4,ar6,ar6,ar7);
    uVar3 = (uint)((uVar1 & 0xff) == 0);
  }
  else if (uVar1 == 2) {
    *(char *)((int)ar6 + ar4[0x1b] + 1) = (char)ar7;
  }
  else if (uVar1 == 3) {
    if ((ar4[0x12] != 0) || (ar6 != (int *)0x0)) {
      if ((short)ar4[0xc] == 0) {
        ar4[0x15] = (int)((float)ar4[0x22] + 1.0);
      }
      ar4[10] = 1;
    }
  }
  else {
    if (uVar1 == 4) {
      puStack_1c = (undefined4 *)(uint)ar4[3];
      ar6_00 = puStack_1c[1];
      ar5_00 = 7;
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f6f0(ar4,*ar7 + (int)ar6,ar6,ar7);
            *ar7 = *ar7 + (ar4[0x1e] + 6) * 4;
            return 1;
          }
          FUN_8c10fa6c(ar4,ar5,0,ar7);
          return 1;
        }
        if (uVar1 == 7) {
          if (ar6 != (int *)0x0) {
            FUN_8c10f69c(ar4,*ar7 + (int)ar6,ar6,ar7);
          }
          iVar2 = *ar7 + (ar4[0x1e] + 6) * 4;
        }
        else {
          if (uVar1 == 8) {
            FUN_8c10f850(ar4,*ar6,ar6,ar7);
            return 1;
          }
          if (uVar1 == 9) {
            *ar6 = ar4[0xb];
            return 1;
          }
          if (uVar1 != 0xf8) {
            if (uVar1 != 0xff) {
              return 0;
            }
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0x11],ar6,ar7);
            (**(code **)(iVar2 + 0x18))(iVar2,ar4[0xd],ar6,ar7);
            a5 = ar4[0x1b];
            (**(code **)(iVar2 + 0x18))(iVar2,a5,ar6,ar7);
            FUN_8c120668(ar4,a5,ar6,ar7);
            return 1;
          }
          iVar2 = ar4[0x12];
        }
        *ar7 = iVar2;
        return 1;
      }
      puStack_1c = (undefined4 *)(uint)ar4[3];
      ar5_00 = 6;
      ar6_00 = puStack_1c[1];
    }
    uVar3 = FUN_8c1113d0(*puStack_1c,ar5_00,ar6_00,ar6);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10f8e6\n.set _FUN_8c10f8e6, _FUN_8c10f8e6_def\n");
//@unit 8c10fa6c
#include "../decls.h"
undefined4 FUN_8c10fa6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x34);
  *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
  uVar2 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1) = 0;
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  return 0x54;
}

__asm__(".globl _FUN_8c10fa6c\n.set _FUN_8c10fa6c, _FUN_8c10fa6c_def\n");
//@unit 8c10fab2
#include "../decls.h"
undefined4 FUN_8c10fab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  float *ain0;
  float *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  longlong in_dr0;
  float fVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  float fVar11;
  undefined8 in_dr4;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_xd4;
  undefined8 in_xd6;
  undefined8 in_xd14;
  char cVar16;
  
  fVar11 = (float)((ulonglong)in_dr4 >> 0x20);
  if (*(float *)(ar4 + 0x4c) <= (float)*(int *)(ar4 + 0x8c)) {
    *(float *)(ar4 + 0x4c) = *(float *)(ar4 + 0x4c) + fVar11;
  }
  fVar9 = *(float *)(ar4 + 0x54) + fVar11;
  *(float *)(ar4 + 0x54) = fVar9;
  if (*(int *)(ar4 + 0x50) < *(int *)(ar4 + 0x84)) {
    *(int *)(ar4 + 0x50) = *(int *)(ar4 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar8 = CONCAT44(fVar9,(float)*(int *)(ar4 + 0x50));
  lVar15 = (ulonglong)(uint)fVar11 << 0x20;
  uVar14 = (ulonglong)(uint)(1.0 / (float)*(int *)(ar4 + 0x50));
  pfVar7 = (float *)(ar5 + *(int *)(ar4 + 0x74) * 4);
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      cVar16 = '\0';
      uVar10 = (undefined4)in_dr4;
      if (*(char *)(*(int *)(ar4 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = *(uint **)(ar4 + 0x60);
        ar4_00 = pfVar7 + (*(int *)(ar4 + 0x70) - *(int *)(ar4 + 0x74));
        uVar12 = 0x7f7fffff7f7fffff;
        iVar4 = 0;
        uVar13 = uVar12;
        if (*(char *)(ar4 + 0x59) != '\0') {
          do {
            ar5 = (int)pfVar7;
            uVar12 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)lVar15,(int)in_dr4);
            }
            for (; in_dr4 = uVar12, (uint)ar5 < ar4_00; ar5 = (int)(ar5 + 4)) {
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(float *)ar5);
              }
              else {
                in_xd4 = *(undefined8 *)ar5;
              }
              cVar16 = '\0';
              fVar11 = (float)in_dr4 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + (float)((ulonglong)in_dr4 >> 0x20);
              in_dr4 = CONCAT44(fVar9,fVar11);
              if ((float)((ulonglong)uVar13 >> 0x20) < fVar9) break;
              puVar3 = puVar3 + 1;
              uVar12 = in_dr4;
              cVar16 = '\0';
            }
            if ((float *)ar5 == ar4_00) {
              iVar5 = iVar4;
              uVar12 = in_dr4;
              if (cVar16 == '\0') {
                uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)uVar13);
              }
            }
            else {
              iVar2 = libgcc_divide_helper_010468((int)ar4_00 - ar5,4);
              puVar3 = puVar3 + iVar2;
              uVar12 = uVar13;
            }
            uVar10 = (undefined4)in_dr4;
            iVar4 = iVar4 + 1;
            uVar13 = uVar12;
          } while (iVar4 < (int)(uint)*(byte *)(ar4 + 0x59));
        }
        fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr4 = in_xd6;
        if (cVar16 == '\0') {
          in_dr4 = CONCAT44((int)uVar12,uVar10);
        }
        ar6_00 = (int *)((uint)*(byte *)(ar4 + 0x5a) * iVar5 * 4 + *(int *)(ar4 + 100));
        iVar5 = 0;
        if (*(char *)(ar4 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(*ar6_00 * 4 + *(int *)(ar4 + 0x68));
            ar5 = (int)pfVar7;
            uVar12 = in_dr4;
            cVar1 = cVar16;
            uVar13 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)lVar15);
              uVar13 = in_xd4;
            }
            do {
              in_xd4 = uVar13;
              cVar16 = cVar1;
              if (ar4_00 <= (uint)ar5) break;
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)ar5;
                ar5 = ar5 + 4;
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*(undefined8 *)ar5 >> 0x20);
                ar5 = ar5 + 8;
              }
              cVar16 = '\0';
              fVar11 = fVar11 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = (float)((ulonglong)uVar12 >> 0x20);
              fVar11 = fVar11 * fVar11 + (float)uVar12;
              uVar12 = CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              uVar13 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
            ar6_00 = ar6_00 + 1;
            in_dr4 = uVar12;
            if (((float *)ar5 == ar4_00) && (in_dr4 = in_xd4, cVar16 == '\0')) {
              in_dr4 = CONCAT44((int)uVar12,(int)uVar12);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(ar4 + 0x5a));
        }
        ain0 = (float *)(*(int *)(ar4 + 0x44) + uVar6 * 4);
        FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5,ain0);
        fVar11 = fVar11 * (float)((ulonglong)lVar15 >> 0x20) -
                 *(float *)(*(int *)(ar4 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar14 + *ain0;
        uVar8 = (ulonglong)(uint)fVar11;
        *ain0 = fVar11;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + *(int *)(ar4 + 0x70);
    } while (uVar6 < *(uint *)(ar4 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fab2\n.set _FUN_8c10fab2, _FUN_8c10fab2_def\n");
//@unit 8c10fabc
#include "../decls.h"
undefined4 FUN_8c10fabc_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  char cVar1;
  int iVar2;
  double *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r13;
  double *pdVar7;
  int unaff_r14;
  undefined1 *puVar8;
  longlong in_dr0;
  float fVar9;
  float fVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  double in_dr4;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 in_dr14;
  float fVar17;
  longlong lVar16;
  undefined8 in_xd2;
  double in_xd4;
  double in_xd6;
  double in_xd14;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  char cVar18;
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [4];
  undefined8 uStack_1c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_1c = (double)CONCAT44((int)in_dr14,(undefined4)uStack_1c);
                    
    (*(uint*)((uchar*)&uStack_1c+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = auStack_20;
  }
  else {
    puVar8 = auStack_2c;
    uStack_1c = in_xd14;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unaff_r14 + 0x4c);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x4c) >> 0x20);
  }
  fVar9 = (float)*(int *)(ain0 + unaff_r14);
  dVar13 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar17 = (float)((ulonglong)dVar13 >> 0x20);
  if (in_FPSCR_PR != '\0' || fVar11 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)(unaff_r14 + 0x4c);
    }
    else {
      in_xd2 = *(undefined8 *)(unaff_r14 + 0x4c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = fVar9 + fVar17;
    }
    else {
      fVar9 = SUB84((double)CONCAT44(fVar11,fVar9) + dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unaff_r14 + 0x4c) = fVar9;
    }
    else {
      *(undefined8 *)(unaff_r14 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unaff_r14 + 0x54);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x54) >> 0x20);
  }
  *(float *)(unaff_r14 + 0x54) = fVar11 + fVar17;
  if (*(int *)(unaff_r14 + 0x50) < *(int *)(unaff_r14 + 0x84)) {
    *(int *)(unaff_r14 + 0x50) = *(int *)(unaff_r14 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar10 = CONCAT44(fVar11 + fVar17,(float)*(int *)(unaff_r14 + 0x50));
  lVar16 = (ulonglong)(uint)fVar17 << 0x20;
  uVar15 = (ulonglong)(uint)(1.0 / (float)*(int *)(unaff_r14 + 0x50));
  pdVar7 = (double *)(unaff_r13 + *(int *)(unaff_r14 + 0x74) * 4);
  if (*(int *)(unaff_r14 + 0x78) != 0) {
    do {
      cVar18 = '\0';
      uVar12 = SUB84(in_dr4,0);
      if (*(char *)(*(int *)(unaff_r14 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = *(uint **)(unaff_r14 + 0x60);
        ar4_00 = (double *)
                 ((int)pdVar7 + *(int *)(unaff_r14 + 0x74) * -4 + *(int *)(unaff_r14 + 0x70) * 4);
        dVar13 = 1.4044474254567505e+306;
        iVar4 = 0;
        dVar14 = dVar13;
        if (*(char *)(unaff_r14 + 0x59) != '\0') {
          do {
            ar5 = pdVar7;
            dVar13 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = (double)CONCAT44((int)lVar16,SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar13, ar5 < ar4_00; ar5 = (double *)((int)ar5 + 4)) {
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                in_dr4 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)ar5);
              }
              else {
                in_xd4 = *ar5;
              }
              cVar18 = '\0';
              fVar11 = SUB84(in_dr4,0) - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + (float)((ulonglong)in_dr4 >> 0x20);
              in_dr4 = (double)CONCAT44(fVar9,fVar11);
              if ((float)((ulonglong)dVar14 >> 0x20) < fVar9) break;
              puVar3 = puVar3 + 1;
              dVar13 = in_dr4;
              cVar18 = '\0';
            }
            if (ar5 == ar4_00) {
              iVar5 = iVar4;
              dVar13 = in_dr4;
              if (cVar18 == '\0') {
                dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar14,0));
              }
            }
            else {
              iVar2 = libgcc_divide_helper_010468((int)ar4_00 - (int)ar5,4);
              puVar3 = puVar3 + iVar2;
              dVar13 = dVar14;
            }
            uVar12 = SUB84(in_dr4,0);
            iVar4 = iVar4 + 1;
            dVar14 = dVar13;
          } while (iVar4 < (int)(uint)*(byte *)(unaff_r14 + 0x59));
        }
        fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
        in_dr4 = in_xd6;
        if (cVar18 == '\0') {
          in_dr4 = (double)CONCAT44(SUB84(dVar13,0),uVar12);
        }
        ar6_00 = (int *)((uint)*(byte *)(unaff_r14 + 0x5a) * iVar5 * 4 + *(int *)(unaff_r14 + 100));
        iVar5 = 0;
        if (*(char *)(unaff_r14 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(*ar6_00 * 4 + *(int *)(unaff_r14 + 0x68));
            ar5 = pdVar7;
            dVar13 = in_dr4;
            cVar1 = cVar18;
            dVar14 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = (double)CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)lVar16);
              dVar14 = in_xd4;
            }
            do {
              in_xd4 = dVar14;
              cVar18 = cVar1;
              if (ar4_00 <= ar5) break;
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)ar5;
                ar5 = (double *)((int)ar5 + 4);
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*ar5 >> 0x20);
                ar5 = ar5 + 1;
              }
              cVar18 = '\0';
              fVar11 = fVar11 - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = (float)((ulonglong)dVar13 >> 0x20);
              fVar11 = fVar11 * fVar11 + SUB84(dVar13,0);
              dVar13 = (double)CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              dVar14 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = (float)((ulonglong)in_dr0 >> 0x20);
            ar6_00 = ar6_00 + 1;
            in_dr4 = dVar13;
            if ((ar5 == ar4_00) && (in_dr4 = in_xd4, cVar18 == '\0')) {
              in_dr4 = (double)CONCAT44(SUB84(dVar13,0),SUB84(dVar13,0));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unaff_r14 + 0x5a));
        }
        *(uint *)(puVar8 + -8) = *(int *)(unaff_r14 + 0x44) + uVar6 * 4;
        FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5,*(undefined4 *)(puVar8 + -8));
        fVar11 = fVar11 * (float)((ulonglong)lVar16 >> 0x20) -
                 *(float *)(*(int *)(unaff_r14 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar15 + **(float **)(puVar8 + -8);
        uVar10 = (ulonglong)(uint)fVar11;
        **(float **)(puVar8 + -8) = fVar11;
      }
      uVar6 = uVar6 + 1;
      pdVar7 = (double *)((int)pdVar7 + *(int *)(unaff_r14 + 0x70) * 4);
    } while (uVar6 < *(uint *)(unaff_r14 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fabc\n.set _FUN_8c10fabc, _FUN_8c10fabc_def\n");
//@unit 8c10fc96
#include "../decls.h"
undefined4 FUN_8c10fc96_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  int ar4_00;
  undefined4 *puVar4;
  int a4;
  float extraout_fr3;
  float fVar5;
  float fVar6;
  char cVar7;
  
  a4 = *(int *)(ar4 + 0x40);
  ar4_00 = *(int *)(ar4 + 0xc);
  uVar1 = FUN_8c112170(ar4_00,*(int *)(ar4 + 0x78) + 1,ar6,ar7);
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar1 = 1;
    if (*(int *)(ar4 + 0x78) != 0) {
      do {
        if (*(char *)(*(int *)(ar4 + 0x6c) + uVar1) != '\0') {
          puVar4 = (undefined4 *)(uVar1 * 8 + ar4_00);
          uVar2 = FUN_8c111fbe(*puVar4,puVar4[1],ar6,ar7);
          ar6 = *(int *)(ar4 + 0x70) << 2;
          memmove(a4,uVar2,ar6,ar7);
        }
        uVar1 = uVar1 + 1;
        a4 = a4 + *(int *)(ar4 + 0x70) * 4;
      } while (uVar1 <= *(uint *)(ar4 + 0x78));
    }
    cVar7 = '\0';
    pfVar3 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6
                                   ,ar7);
    if (cVar7 == '\0') {
      fVar6 = *pfVar3;
    }
    else {
      fVar6 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
    }
    if (*(char *)(ar4 + 0x32) == '\0') {
      fVar5 = extraout_fr3;
      if (cVar7 == '\0') {
        fVar5 = 0.0009999999;
      }
      if (fVar5 < fVar6) {
        FUN_8c10fab2(ar4,*(undefined4 *)(ar4 + 0x40),ar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
    uVar2 = 0x40;
    if (a4 == *(int *)(ar4 + 0x38)) {
      a4 = *(int *)(ar4 + 0x34);
    }
    *(int *)(ar4 + 0x40) = a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10fc96\n.set _FUN_8c10fc96, _FUN_8c10fc96_def\n");
//@unit 8c10fd82
#include "../decls.h"
int FUN_8c10fd82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = 3.4028235e+38;
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      if ((*(char *)(*(int *)(ar4 + 0x6c) + uVar1 + 1) != '\0') &&
         (*(float *)(*(int *)(ar4 + 0x44) + uVar1 * 4) < fVar3)) {
        fVar3 = *(float *)(uVar1 * 4 + *(int *)(ar4 + 0x44));
        uVar2 = uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x54) = 0;
  return uVar2 + 1;
}

__asm__(".globl _FUN_8c10fd82\n.set _FUN_8c10fd82, _FUN_8c10fd82_def\n");
//@unit 8c10fe04
#include "../decls.h"
undefined4 FUN_8c10fe04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x48;
  if ((*(int *)(ar4 + 0x48) != 0) &&
     (iVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5,ar6,ar7), uVar1 = 0, iVar2 != 0)) {
    if ((*(char *)(ar4 + 0x32) == '\0') &&
       ((*(int *)(ar4 + 0x28) == 0 || ((float)*(int *)(ar4 + 0x88) < *(float *)(ar4 + 0x54))))) {
      uVar1 = FUN_8c10fd82(ar4,ar5,ar6,ar7);
      *(short *)(ar4 + 0x30) = (short)uVar1;
    }
    memmove(iVar2,(*(ushort *)(ar4 + 0x30) - 1) * *(int *)(ar4 + 0x70) * 4 + *(int *)(ar4 + 0x3c),
            *(int *)(ar4 + 0x70) << 2,ar7);
    iVar2 = *(int *)(ar4 + 0x3c) + *(int *)(ar4 + 0x80) * 4;
    *(int *)(ar4 + 0x3c) = iVar2;
    uVar1 = 0x48;
    if (iVar2 == *(int *)(ar4 + 0x38)) {
      *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
    }
    *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + -1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10fe04\n.set _FUN_8c10fe04, _FUN_8c10fe04_def\n");
//@unit 8c10fe0a
#include "../decls.h"
undefined4 FUN_8c10fe0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r14;
  float fVar4;
  byte in_FPSCR_CAUSE;
  byte bVar5;
  byte in_FPSCR_DN;
  byte bVar6;
  byte in_FPSCR_PR;
  byte bVar7;
  byte in_FPSCR_SZ;
  byte bVar8;
  
  if (*(int *)(in_r0 + unaff_r14) == 0) {
    return in_r0;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = FUN_8c111dfe(**(undefined4 **)(unaff_r14 + 0x10),ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unaff_r14 + 0x32) == '\0') {
    if (*(int *)(unaff_r14 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & 0xffe7ffff;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(unaff_r14 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(unaff_r14 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' ||
          fVar4 <= (float)*(int *)(0x88 + unaff_r14)) goto LAB_8c10fe62;
    }
    uVar2 = FUN_8c10fd82(unaff_r14,ar5,ar6,ar7);
    *(short *)(unaff_r14 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (*(code *)(&memmove))
            (iVar1,(*(ushort *)(unaff_r14 + 0x30) - 1) * *(int *)(unaff_r14 + 0x70) * 4 +
                   *(int *)(unaff_r14 + 0x3c),*(int *)(unaff_r14 + 0x70) << 2,ar7);
  iVar1 = *(int *)(unaff_r14 + 0x3c) + *(int *)(0x80 + unaff_r14) * 4;
  *(int *)(unaff_r14 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(unaff_r14 + 0x38)) {
    *(undefined4 *)(unaff_r14 + 0x3c) = *(undefined4 *)(unaff_r14 + 0x34);
  }
  *(int *)(unaff_r14 + 0x48) = *(int *)(unaff_r14 + 0x48) + -1;
  return 0x48;
}

__asm__(".globl _FUN_8c10fe0a\n.set _FUN_8c10fe0a, _FUN_8c10fe0a_def\n");
//@unit 8c10fece
#include "../decls.h"
undefined4 FUN_8c10fece_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain1)

{
  int iVar1;
  undefined4 uVar2;
  int a4;
  int *unaff_r14;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  float extraout_fr0_02;
  float extraout_fr0_03;
  float extraout_fr0_04;
  
  a4 = *unaff_r14;
  *ain1 = *(byte *)(unaff_r14 + 2) - 1;
  FUN_8c120550(unaff_r14,5,ar6,ar7);
  unaff_r14[0x1d] = (int)extraout_fr0 & 0xffff;
  FUN_8c120550(unaff_r14,6,ar6,ar7);
  unaff_r14[0x1c] = (int)extraout_fr0_00 & 0xffff;
  FUN_8c120550(unaff_r14,1,ar6,ar7);
  unaff_r14[0x1f] = (int)extraout_fr0_01 & 0xffff;
  FUN_8c120550(unaff_r14,2,ar6,ar7);
  unaff_r14[0x21] = (int)(short)(int)extraout_fr0_02;
  FUN_8c120550(unaff_r14,3,ar6,ar7);
  unaff_r14[0x22] = (int)(short)(int)extraout_fr0_03;
  FUN_8c120550(unaff_r14,4,ar6,ar7);
  uVar2 = 4;
  unaff_r14[0x23] = (int)(short)(int)extraout_fr0_04;
  unaff_r14[0x20] = unaff_r14[0x1e] * unaff_r14[0x1c];
  iVar1 = (**(code **)(a4 + 0x14))(a4,unaff_r14[0x1f] * unaff_r14[0x20],4,ar7);
  unaff_r14[0xd] = iVar1;
  unaff_r14[0xe] = unaff_r14[0x1f] * unaff_r14[0x20] * 4 + unaff_r14[0xd];
  iVar1 = (**(code **)(a4 + 0x10))(a4,unaff_r14[0x1e] << 2,uVar2,ar7);
  unaff_r14[0x11] = iVar1;
  iVar1 = (**(code **)(a4 + 0x10))(a4,unaff_r14[0x1e] + 1,uVar2,ar7);
  unaff_r14[0x1b] = iVar1;
  uVar2 = 1;
  iVar1 = unaff_r14[0x1e] + 1;
  memset(unaff_r14[0x1b],1,iVar1,ar7);
  *(short *)(*(int *)unaff_r14[4] + 0xc) = (short)unaff_r14[0x1c] << 2;
  unaff_r14[0xb] = -1;
  FUN_8c10fa6c(unaff_r14,uVar2,iVar1,ar7);
  return 0;
}

__asm__(".globl _FUN_8c10fece\n.set _FUN_8c10fece, _FUN_8c10fece_def\n");
