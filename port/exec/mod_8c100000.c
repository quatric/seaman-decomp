//@unit 8c100030
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
undefined4 get_field_a528_100030_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_a528_100030";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xa528 + ar4);
}

__asm__(".globl _get_field_a528_100030\n.set _get_field_a528_100030, _get_field_a528_100030_def\n");
//@unit 8c10003c
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
undefined4 FUN_8c10003c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10003c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       iVar1 == 0)) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                         (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01eff8))))
                         (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0 &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb50(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10003c\n.set _FUN_8c10003c, _FUN_8c10003c_def\n");
//@unit 8c1000c8
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
undefined4 FUN_8c1000c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1000c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((((iVar1 == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       iVar1 == 0)) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 == 0)) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                         (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0 &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01eff8))))
                         (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1000c8\n.set _FUN_8c1000c8, _FUN_8c1000c8_def\n");
//@unit 8c100154
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
undefined4 FUN_8c100154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if ((iVar1 == 1) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1001d4(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       (ushort)uVar2 < 0x1e)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100154\n.set _FUN_8c100154, _FUN_8c100154_def\n");
//@unit 8c1001d4
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
int FUN_8c1001d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1001d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(0xa546 + ar4);
}

__asm__(".globl _FUN_8c1001d4\n.set _FUN_8c1001d4, _FUN_8c1001d4_def\n");
//@unit 8c1001e0
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
undefined4 FUN_8c1001e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1001e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecb0(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1001e0\n.set _FUN_8c1001e0, _FUN_8c1001e0_def\n");
//@unit 8c10022c
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
undefined4 FUN_8c10022c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10022c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                      (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
      if ((iVar1 == 0) && (*(int *)(unsigned)(0x188 + ar4) != 3)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,1,ar6,ar7));
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10022c\n.set _FUN_8c10022c, _FUN_8c10022c_def\n");
//@unit 8c1002a8
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
undefined4 FUN_8c1002a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1002a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
    if (iVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,2,ar6,ar7));
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1002a8\n.set _FUN_8c1002a8, _FUN_8c1002a8_def\n");
//@unit 8c10031c
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
undefined4 FUN_8c10031c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10031c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x188) == 2)) {
      ({ unsigned long ri0_ = (unsigned long)(1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,3,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1003b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1003b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(undefined4 *)(unsigned)0x8c441430 == '\0') {
    *(undefined4 *)(unsigned)0x8c44142c = 0;
    *(undefined4 *)(unsigned)0x8c441430 = '\x01';
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                      (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(0x188 + ar4) == 2)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)0x8c44142c = 0;
      }
      else {
        *(undefined4 *)(unsigned)0x8c44142c = 1;
      }
    }
    if ((*(undefined4 *)(unsigned)0x8c44142c == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                          (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
      *(undefined4 *)(unsigned)0x8c44142c = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,2,ar6,ar7));
    }
    else if ((*(undefined4 *)(unsigned)0x8c44142c == 1) &&
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                               (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
      *(undefined4 *)(unsigned)0x8c44142c = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
    }
    return *(undefined4 *)(unsigned)0x8c44142c;
  }
  *(undefined4 *)(unsigned)0x8c44142c = 0;
  return 0;
}

__asm__(".globl _FUN_8c1003b0\n.set _FUN_8c1003b0, _FUN_8c1003b0_def\n");
//@unit 8c1004b4
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
undefined4 * FUN_8c1004b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1004b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x140),*(undefined4 *)(unsigned)(ar4 + 0x130));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x130);
    dVar2 = *(double *)(unsigned)(ar4 + 0x140);
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) + F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x130) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 0x130);
    fVar3 = 50.0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x130) = in_xd0;
    fVar1 = 50.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar1 <= fVar3) {
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x130) = 0x42480000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x130) = 0x4f222fe642480000;
    }
  }
  return ((undefined4 *)(unsigned)0x8c100528);
}

__asm__(".globl _FUN_8c1004b4\n.set _FUN_8c1004b4, _FUN_8c1004b4_def\n");
//@unit 8c10052c
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
undefined4 * FUN_8c10052c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10052c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x140),*(undefined4 *)(unsigned)(ar4 + 0x130));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x130);
    dVar2 = *(double *)(unsigned)(ar4 + 0x140);
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) + F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x130) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 0x130);
    fVar3 = 430.0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x130) = in_xd0;
    fVar1 = 430.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x130) = 0x43d70000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x130) = 0x4f222fe643d70000;
    }
  }
  return ((undefined4 *)(unsigned)0x8c1005a0);
}

__asm__(".globl _FUN_8c10052c\n.set _FUN_8c10052c, _FUN_8c10052c_def\n");
//@unit 8c1005a4
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
undefined4 * FUN_8c1005a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1005a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x13c),*(undefined4 *)(unsigned)(ar4 + 300));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 300);
    dVar2 = *(double *)(unsigned)(ar4 + 0x13c);
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) + F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 300) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 300);
    fVar3 = 615.0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 300) = in_xd0;
    fVar1 = 615.0;
    fVar3 = 2.721048e+09;
  }
  if (cVar4 != '\0' || fVar3 <= fVar1) {
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0x4419c000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 300) = 0x4f222fe64419c000;
    }
  }
  return ((undefined4 *)(unsigned)0x8c100618);
}

__asm__(".globl _FUN_8c1005a4\n.set _FUN_8c1005a4, _FUN_8c1005a4_def\n");
//@unit 8c10061c
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
undefined4 * FUN_8c10061c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10061c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  float fVar3;
  undefined8 in_xd0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x13c),*(undefined4 *)(unsigned)(ar4 + 300));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 300);
    dVar2 = *(double *)(unsigned)(ar4 + 0x13c);
  }
  if (cVar4 == '\0') {
    fVar1 = F32LO(dVar2) + F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 + dVar2,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 300) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 300);
    fVar3 = 25.0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 300) = in_xd0;
    fVar1 = 25.0;
    fVar3 = NAN;
  }
  if (cVar4 != '\0' || fVar1 <= fVar3) {
    if (cVar5 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0x41c80000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 300) = 0x7ffc4f2241c80000;
    }
  }
  return ((undefined4 *)(unsigned)0x8c100690);
}

__asm__(".globl _FUN_8c10061c\n.set _FUN_8c10061c, _FUN_8c10061c_def\n");
//@unit 8c100694
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
undefined4 FUN_8c100694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c100694\n.set _FUN_8c100694, _FUN_8c100694_def\n");
//@unit 8c1006bc
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
undefined4 FUN_8c1006bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1006bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10168c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1006bc\n.set _FUN_8c1006bc, _FUN_8c1006bc_def\n");
//@unit 8c1006d8
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
undefined4 FUN_8c1006d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1006d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(unsigned)(ar4 + 0x140)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100724";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(unsigned)(ar4 + 0x140) <= 0.3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100770_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100770";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(unsigned)(ar4 + 0x13c) <= 0.3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1007bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1007bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(unsigned)(ar4 + 0x13c)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100808_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100808";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (-0.5 <= *(float *)(unsigned)(ar4 + 0x140)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100808\n.set _FUN_8c100808, _FUN_8c100808_def\n");
//@unit 8c10082c
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
undefined4 FUN_8c10082c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10082c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(float *)(unsigned)(ar4 + 0x140) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10082c\n.set _FUN_8c10082c, _FUN_8c10082c_def\n");
//@unit 8c100850
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
undefined4 FUN_8c100850_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100850";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(float *)(unsigned)(ar4 + 0x13c) <= 0.5) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100850\n.set _FUN_8c100850, _FUN_8c100850_def\n");
//@unit 8c100874
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
undefined4 FUN_8c100874_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100874";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (-0.5 <= *(float *)(unsigned)(ar4 + 0x13c)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c100874\n.set _FUN_8c100874, _FUN_8c100874_def\n");
//@unit 8c100898
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
undefined4 FUN_8c100898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(unsigned)(ar4 + 0x140) < -0.3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10_01f2b4(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1008e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1008e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((0.3 < *(float *)(unsigned)(ar4 + 0x140)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_20_01f22c(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100930";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((0.3 < *(float *)(unsigned)(ar4 + 0x13c)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_80_01f088(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10097c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10097c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(unsigned)(ar4 + 0x13c) < -0.3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_40_01f160(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1009c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1009c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(float *)(unsigned)(ar4 + 0x150) <= -0.3) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1009c8\n.set _FUN_8c1009c8, _FUN_8c1009c8_def\n");
//@unit 8c1009ec
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
undefined4 FUN_8c1009ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1009ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0.3 <= *(float *)(unsigned)(ar4 + 0x150)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1009ec\n.set _FUN_8c1009ec, _FUN_8c1009ec_def\n");
//@unit 8c100a10
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
undefined4 FUN_8c100a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100a10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0.3 <= *(float *)(unsigned)(ar4 + 0x14c)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a10\n.set _FUN_8c100a10, _FUN_8c100a10_def\n");
//@unit 8c100a34
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
undefined4 FUN_8c100a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100a34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(float *)(unsigned)(ar4 + 0x14c) <= -0.3) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c100a34\n.set _FUN_8c100a34, _FUN_8c100a34_def\n");
//@unit 8c100a58
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
undefined4 FUN_8c100a58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100a58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (((-0.4 <= *(float *)(unsigned)(ar4 + 0x140)) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100abc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100abc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (((*(float *)(unsigned)(ar4 + 0x140) <= 0.4) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100b20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100b20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (((-0.3 <= *(float *)(unsigned)(ar4 + 0x140)) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee98(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100b84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (((*(float *)(unsigned)(ar4 + 0x140) <= 0.3) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee98(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100be8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(unsigned)(ar4 + 0x13c) <= 0.3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c100c34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100c34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if ((-0.3 <= *(float *)(unsigned)(ar4 + 0x13c)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c100c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f56c(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl _FUN_8c100c80\n.set _FUN_8c100c80, _FUN_8c100c80_def\n");
//@unit 8c100cb4
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
uint FUN_8c100cb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100cb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f544(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl _FUN_8c100cb4\n.set _FUN_8c100cb4, _FUN_8c100cb4_def\n");
//@unit 8c100ce8
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
undefined4 FUN_8c100ce8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100ce8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101358(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(0x594 + ar4) = 0xf;
    }
    *(int *)(unsigned)(0x594 + ar4) = *(int *)(unsigned)(0x594 + ar4) + -1;
    if (0 < *(int *)(unsigned)(0x594 + ar4)) {
      return 1;
    }
  }
  *(undefined4 *)(unsigned)(0x594 + ar4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c100ce8\n.set _FUN_8c100ce8, _FUN_8c100ce8_def\n");
//@unit 8c100d5c
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
undefined4 FUN_8c100d5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100d5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(int *)(unsigned)(0x590 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,5,ar6,ar7));
    if (((iVar1 == 1) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,10,ar6,ar7)), iVar1 == 1)) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,0xf,ar6,ar7)), iVar1 == 1)) {
      *(undefined4 *)(unsigned)(0x590 + ar4) = 1;
    }
  }
  else {
    if ((((*(char *)(unsigned)(0x190 + ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4) != '\0') ||
         (*(char *)(unsigned)(0x190 + ar4 + (*(byte *)(unsigned)(0x598 + ar4) - 1) * 4) != '\0')) ||
        (*(char *)(unsigned)(0x191 + ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4) != '\0')) ||
       (*(char *)(unsigned)(0x191 + ar4 + (*(byte *)(unsigned)(0x598 + ar4) - 1) * 4) != '\0')) {
      return 1;
    }
    *(undefined4 *)(unsigned)(0x590 + ar4) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c100d5c\n.set _FUN_8c100d5c, _FUN_8c100d5c_def\n");
//@unit 8c100e4c
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
undefined4 FUN_8c100e4c_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100e4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined8 *ar5_00;
  byte bVar3;
  undefined4 in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(unsigned)ar5 = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
    uVar2 = 0;
  }
  else {
    if ((9 < *(int *)(unsigned)(ar4 + 0x59c)) &&
       (*(int *)(unsigned)(ar4 + 0x59c) = *(int *)(unsigned)(ar4 + 0x59c) + 1, 0x27 < *(int *)(unsigned)(ar4 + 0x59c))) {
      *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed40(0x8c3dd7dc,ar5_00,ar6,ar7));
    if ((iVar1 == 1) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7)), iVar1 == 1)) {
      if (*(int *)(unsigned)(ar4 + 0x59c) < 2) {
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
        uVar2 = 0;
      }
      else {
        if (*(int *)(unsigned)(ar4 + 0x59c) == 2) {
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)ar5 = 0x3f000000;
          }
          else {
            *ar5 = 0x3f3333333f000000;
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x59c) == 3) {
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)ar5 = 0x3f333333;
          }
          else {
            *ar5 = 0x8c0c51a03f333333;
          }
        }
        else if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)ar5 = 0x3f800000;
        }
        else {
          *ar5 = CONCAT44(0x3f800000,in_fr1);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 10;
        uVar2 = 2;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(0x8c3dd7dc,ar5_00,ar6,ar7));
      if ((iVar1 == 1) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7)), iVar1 != 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 1;
        uVar2 = 0;
      }
      else if (*(int *)(unsigned)(ar4 + 0x59c) < 1) {
        uVar2 = 0;
      }
      else {
        for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
          if (*(char *)(unsigned)(ar4 + (uint)(byte)(*(char *)(unsigned)(ar4 + 0x598) - bVar3) * 4 + 0x193) == '\0') {
            if (bVar3 < 0x3c) {
              return 0;
            }
            if (0x3b < bVar3) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,4,ar6,ar7));
              *(undefined4 *)(unsigned)(ar4 + 0x59c) = 2;
            }
            if (0x59 < bVar3) {
              *(undefined4 *)(unsigned)(ar4 + 0x59c) = 3;
            }
            return 1;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100e4c\n.set _FUN_8c100e4c, _FUN_8c100e4c_def\n");
//@unit 8c101004
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
int FUN_8c101004_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101004";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(int *)(unsigned)(0x88 + ar4) != -1) {
      ar5 = *(undefined4 *)(unsigned)(0x88 + ar4);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021f18(0x8c2b59d0,ar5,ar6,ar7));
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(undefined4 *)(unsigned)(0x88 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ecf8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ef68(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1017f4(ar4,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(0xb8 + ar4) = 1;
      *(int *)(unsigned)(0xc4 + ar4) = *(int *)(unsigned)(0xc4 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
LAB_8c1010c2:
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1019f8(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0xb0 + ar4) == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101a4c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar2 = (int)*(char *)(unsigned)(ar4 + 0x28);
    if (iVar2 == 4) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101a4c(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101da0(ar4,ar5,ar6,ar7));
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c101004\n.set _FUN_8c101004, _FUN_8c101004_def\n");
//@unit 8c10113c
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
undefined4 get_field_b0_10113c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_b0_10113c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xb0 + ar4);
}

__asm__(".globl _get_field_b0_10113c\n.set _get_field_b0_10113c, _get_field_b0_10113c_def\n");
//@unit 8c101148
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
int FUN_8c101148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101148";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xb4;
  *(undefined4 *)(unsigned)(0xb4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c101148\n.set _FUN_8c101148, _FUN_8c101148_def\n");
//@unit 8c101154
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
undefined4 FUN_8c101154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(int *)(unsigned)(0xb0 + ar4) == 1) && (*(int *)(unsigned)(0xb4 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c101154\n.set _FUN_8c101154, _FUN_8c101154_def\n");
//@unit 8c101178
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
uint get_field_b8_101178_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_b8_101178";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)*(byte *)(unsigned)(0xb8 + ar4);
}

__asm__(".globl _get_field_b8_101178\n.set _get_field_b8_101178, _get_field_b8_101178_def\n");
//@unit 8c101188
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
int FUN_8c101188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101188";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0xb0 + ar4);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101e1c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c101188\n.set _FUN_8c101188, _FUN_8c101188_def\n");
//@unit 8c1011b0
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
undefined4 FUN_8c1011b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1011b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    ((uint)*(ushort *)(unsigned)(0x18e + ar4),0x1e,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c1011b0\n.set _FUN_8c1011b0, _FUN_8c1011b0_def\n");
//@unit 8c1011e0
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
undefined4 FUN_8c1011e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1011e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101250(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0ffb90(ar4 + 0xd8,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c1011e0\n.set _FUN_8c1011e0, _FUN_8c1011e0_def\n");
//@unit 8c101210
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
undefined4 * FUN_8c101210_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(ar4 + 0x188) == 6) {
    *ar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c1266e0);
    *ar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c1266e0);
    return ((undefined4 *)(unsigned)0x8c1266e0);
  }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 300);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x130);
  return (undefined4 *)(unsigned)0x130;
}

__asm__(".globl _FUN_8c101210\n.set _FUN_8c101210, _FUN_8c101210_def\n");
//@unit 8c101250
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
undefined4 FUN_8c101250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0xd0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 300) = 0x43a00000;
  *(undefined4 *)(unsigned)(ar4 + 0x130) = 0x43700000;
  *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x188) = 0;
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x188);
  ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c0fffec(ar4 + 0x15c,uVar1,ar6,ar7); });
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  *(undefined4 *)(unsigned)(ar4 + 0xd4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 0xffffffff;
  *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10169c(ar4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101784(ar4,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10168c(ar4,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c101250\n.set _FUN_8c101250, _FUN_8c101250_def\n");
//@unit 8c101358
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
undefined4 FUN_8c101358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101358";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  
  iVar3 = 0;
  iVar2 = 0;
  cVar4 = *(char *)(unsigned)(0x598 + ar4) + -0x50;
  do {
    if (cVar4 == *(char *)(unsigned)(0x598 + ar4)) {
      return 0;
    }
    bVar1 = false;
    for (bVar5 = 0; bVar5 < 10; bVar5 = bVar5 + 1) {
      if (*(char *)(unsigned)(0x192 + ar4 + (uint)(byte)(cVar4 + bVar5) * 4) == '\x01') {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1013f4_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1013f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c101480_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101480";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c101510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101510";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 ar6_00;
  
  ((int *)(fr0_ - 0x24))[0] = 0;
  (*(int *)(fr0_ - 0x28)) = 0;
  (*(int *)(fr0_ - 0x2c)) = 0;
  (*(int *)(fr0_ - 0x30)) = 0;
  bVar5 = *(char *)(unsigned)(0x598 + ar4) + (char)ar5 * -8;
  do {
    if (bVar5 == *(byte *)(unsigned)(0x598 + ar4)) {
      return 0;
    }
    cVar1 = *(char *)(unsigned)(0x190 + ar4 + (uint)bVar5 * 4);
    cVar2 = *(char *)(unsigned)(0x191 + ar4 + (uint)bVar5 * 4);
    cVar3 = *(char *)(unsigned)(0x190 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    cVar4 = *(char *)(unsigned)(0x191 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
      ar6_00 = 0;
LAB_8c1015f0:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1013f4(ar4,((int *)(fr0_ - 0x24)),ar6_00,ar7));
      if (((int *)(fr0_ - 0x24))[0] == 4) {
        (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + 1;
        ((int *)(fr0_ - 0x24))[0] = 0;
        if (1 < (*(int *)(fr0_ - 0x28))) {
          return 1;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c101480(ar4,&(*(int *)(fr0_ - 0x2c)),ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x2c)) == 4) {
        (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
        (*(int *)(fr0_ - 0x2c)) = 0;
        if (1 < (*(int *)(fr0_ - 0x30))) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c10168c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10168c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x59c;
  *(undefined4 *)(unsigned)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c10168c\n.set _FUN_8c10168c, _FUN_8c10168c_def\n");
//@unit 8c10169c
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
int FUN_8c10169c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10169c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4 + 0x190,0,0x400,ar7));
  *(undefined1 *)(unsigned)(0x598 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x590 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x594 + ar4) = 0;
  iVar1 = 0x59c;
  *(undefined4 *)(unsigned)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c10169c\n.set _FUN_8c10169c, _FUN_8c10169c_def\n");
//@unit 8c1016f0
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
undefined4 FUN_8c1016f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1016f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *(char *)(unsigned)(0x598 + ar4) = *(char *)(unsigned)(0x598 + ar4) + '\x01';
  puVar2 = (undefined1 *)(unsigned)(ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4 + 0x190);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a538(0x8c3dd7dc,ar5,ar6,ar7));
  *puVar2 = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a53c(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[1] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01efb0(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[2] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(0x8c3dd7dc,ar5,ar6,ar7));
  puVar2[3] = (char)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1016f0\n.set _FUN_8c1016f0, _FUN_8c1016f0_def\n");
//@unit 8c101784
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
undefined4 FUN_8c101784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(unsigned)(0x88 + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101c64(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c101784\n.set _FUN_8c101784, _FUN_8c101784_def\n");
//@unit 8c1017f4
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
uint FUN_8c1017f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1017f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar4_00;
  undefined4 ar5_00;
  
  *(char *)(unsigned)(ar4 + 0x28) = *(char *)(unsigned)(ar4 + 0x28) + '\x01';
  ar5_00 = 5;
  ar4_00 = (int)*(char *)(unsigned)(ar4 + 0x28);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(ar4_00,5,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0x28) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_00,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(unsigned)(ar4 + 0x28) == '\0') {
    *(undefined4 *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(undefined4 *)(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
    ar5_00 = *(undefined4 *)(unsigned)((*(char *)(unsigned)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(int *)(unsigned)(0xb0 + ar4) != 0) {
    if (*(uint *)(unsigned)(0xbc + ar4) < *(uint *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)) {
      if (0x124f80 <
          (uint)(*(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(int *)(unsigned)(0xbc + ar4))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
      }
      else {
        uVar2 = 0xc3500;
        if (0xc3500 <
            (uint)(*(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(int *)(unsigned)(0xbc + ar4))) {
          *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
          uVar2 = 0xc4;
          *(undefined4 *)(unsigned)(0xc4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(uint *)(unsigned)(0xbc + ar4);
      if (*(uint *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) < *(uint *)(unsigned)(0xbc + ar4)) {
        if (0x124f80 <
            (uint)(*(int *)(unsigned)(0xbc + ar4) - *(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
        }
        else {
          uVar2 = 0xc3500;
          if (0xc3500 <
              (uint)(*(int *)(unsigned)(0xbc + ar4) - *(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
            uVar2 = 0xc4;
            *(undefined4 *)(unsigned)(0xc4 + ar4) = 0;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1019f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1019f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  uint uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x2c);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6_00,ar7));
  uVar2 = 0x16e360;
  if (0x16e360 < uVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1019f8\n.set _FUN_8c1019f8, _FUN_8c1019f8_def\n");
//@unit 8c101a4c
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
uint FUN_8c101a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(unsigned)(0xb0 + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(int *)(unsigned)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = 0x16e360;
    if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101b5c(ar4,uVar3,ar6,ar7));
    }
  }
  else {
    if (*(int *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(uint *)(unsigned)(0xbc + ar4);
    }
    else {
      uVar3 = *(uint *)(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
      uVar1 = 0x186a0;
      if (*(uint *)(unsigned)(0xbc + ar4) < uVar3) {
        if (0x186a0 < uVar3 - *(int *)(unsigned)(0xbc + ar4)) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
        }
      }
      else if (0x186a0 < *(int *)(unsigned)(0xbc + ar4) - uVar3) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c101a4c\n.set _FUN_8c101a4c, _FUN_8c101a4c_def\n");
//@unit 8c101b5c
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
int FUN_8c101b5c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar3 = 0x82334, 0x82334 < ar5)) &&
     (uVar3 = 0xc349c, ar5 <= 0xc349c)) {
    uVar3 = 0xa2be8;
  }
  *(uint *)(unsigned)(0xbc + ar4) = uVar3;
  *(undefined4 *)(unsigned)0x8c4413c0 = *(uint *)(unsigned)(0xbc + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02192c(0x8c2b59d0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(undefined4 *)(unsigned)(0xb0 + ar4) = 1;
  iVar2 = 0xc4;
  *(undefined4 *)(unsigned)(0xc4 + ar4) = 1;
  return iVar2;
}

__asm__(".globl _FUN_8c101b5c\n.set _FUN_8c101b5c, _FUN_8c101b5c_def\n");
//@unit 8c101c10
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
uint FUN_8c101c10_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101c10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar1 = 0x82334, 0x82334 < ar5)) &&
     (uVar1 = 0xc349c, ar5 <= 0xc349c)) {
    uVar1 = 0xa2be8;
  }
  *(uint *)(unsigned)(0xbc + ar4) = uVar1;
  uVar1 = *(uint *)(unsigned)(0xbc + ar4) >> 3;
  *(undefined4 *)(unsigned)0x8c4413c0 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c101c10\n.set _FUN_8c101c10, _FUN_8c101c10_def\n");
//@unit 8c101c64
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
int FUN_8c101c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101c64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101da0(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xb4 + ar4) = 0;
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
  *(undefined4 *)(unsigned)(0xbc + ar4) = 0xa2be8;
  *(undefined4 *)(unsigned)(0xc4 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(int *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ab4))))
                (0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(unsigned)(0x80 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x84 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x8c + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = 0xb0;
  *(undefined4 *)(unsigned)(0xb0 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c101c64\n.set _FUN_8c101c64, _FUN_8c101c64_def\n");
//@unit 8c101da0
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
undefined4 FUN_8c101da0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101da0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
    *(undefined4 *)(unsigned)(cVar1 * 8 + ar4) = 0;
    *(undefined4 *)(unsigned)(ar4 + cVar1 * 8 + 4) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x28) = 0xff;
  return 0x28;
}

__asm__(".globl _FUN_8c101da0\n.set _FUN_8c101da0, _FUN_8c101da0_def\n");
//@unit 8c101de0
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
undefined4 FUN_8c101de0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101de0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined4 uVar1;
  
  uVar1 = ar6;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0(ar5,ar6,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f6(ar4_00,ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c101de0\n.set _FUN_8c101de0, _FUN_8c101de0_def\n");
//@unit 8c101e1c
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
uint FUN_8c101e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), sh4_tmu_1f88e6(ar4,((void *)(unsigned)0x8c1f88e6),ar6,ar7));
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x9c) = uVar3;
  ar6_00 = *(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x9c);
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) = 0;
  bVar1 = false;
  bVar2 = false;
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) = 0;
  if (0x10 < *(uint *)(unsigned)(0xc4 + ar4)) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x80) = *(undefined4 *)(unsigned)(ar4 + 100);
    iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
    iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c12682c)) + *(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x80) * 4);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x60),ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x98) = uVar3;
    if ((*(int *)(unsigned)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x98))) {
      (*(int *)(fr0_ - 0x50)) = *(int *)(unsigned)(ar4 + 100);
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
                (0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x68),
                 *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126764)) + (*(int *)(fr0_ - 0x50)) * 4),ar7));
      if (*(int *)(unsigned)(ar4 + 100) == 0) {
        *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) = 1;
      }
      iVar5 = *(int *)(unsigned)(ar4 + 100);
      if ((iVar5 == 0) || (*(int *)(unsigned)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(int *)(unsigned)(ar4 + 100) == 0xe) || (*(int *)(unsigned)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) = 1;
      }
      *(int *)(unsigned)(ar4 + 0x60) = ar6_00;
      *(int *)(unsigned)(ar4 + 100) = *(int *)(unsigned)(ar4 + 100) + 1;
      (*(int *)(fr0_ - 0x54)) = ar4;
      (*(undefined4 *)(fr0_ - 0x58)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                            (*(undefined4 *)(unsigned)(ar4 + 100),0x32,iVar5,ar7));
      *(undefined4 *)(unsigned)(ar4 + 100) = (*(undefined4 *)(fr0_ - 0x58));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 1;
    }
  }
  (*(int *)(fr0_ - 0x5c)) = *(int *)(unsigned)(ar4 + 0x54);
  iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
  iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126724)) + (*(int *)(fr0_ - 0x5c)) * 4);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x50),ar6_00,ar7));
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x94) = uVar3;
  if (((*(int *)(unsigned)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x94))) ||
     (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) == 1)) {
    if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa8) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
    }
    (*(int *)(fr0_ - 0x60)) = *(int *)(unsigned)(ar4 + 0x54);
    (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
              (0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x58),
               *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1266e4)) + (*(int *)(fr0_ - 0x60)) * 4),ar7));
    *(int *)(unsigned)(ar4 + 0x50) = ar6_00;
    (*(int *)(fr0_ - 0x64)) = ar4;
    *(int *)(unsigned)(ar4 + 0x54) = *(int *)(unsigned)(ar4 + 0x54) + 1;
    *(uint *)(unsigned)(ar4 + 0x54) = *(uint *)(unsigned)(ar4 + 0x54) & 0xf;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(uint *)(unsigned)(0xc4 + ar4)) {
    if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
      if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(int *)(fr0_ - 0x68)) = *(int *)(unsigned)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(int *)(fr0_ - 0x68)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x30) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
        (*(int *)(fr0_ - 0x6c)) = ar4;
        (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x34) = (*(undefined4 *)(fr0_ - 0x70));
        *(undefined4 *)(unsigned)(ar4 + 0x3c) = 1;
      }
    }
    else {
      (*(int *)(fr0_ - 0x74)) = *(int *)(unsigned)(ar4 + 0x34);
      iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
      iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126958)) + (*(int *)(fr0_ - 0x74)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x30),ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x90) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x90)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
        }
        (*(int *)(fr0_ - 0x78)) = *(int *)(unsigned)(ar4 + 0x34);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(int *)(fr0_ - 0x78)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x30) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + 1;
        (*(int *)(fr0_ - 0x7c)) = ar4;
        (*(undefined4 *)(fr0_ - 0x80)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x34) = (*(undefined4 *)(fr0_ - 0x80));
      }
    }
  }
  *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 1;
  if (*(uint *)(unsigned)(0xc4 + ar4) < 0x41) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (0xa2be8 < *(uint *)(unsigned)(0xbc + ar4)) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(uint *)(unsigned)(0xbc + ar4) < 0x82334) {
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  }
  if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa0) == 1) {
    if (*(int *)(unsigned)(ar4 + 0x4c) == 0) {
      if (*(int *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(int *)(fr0_ - 0x84)) = *(int *)(unsigned)(ar4 + 0x44);
        uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0x84)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
        *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
        *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
        (*(int *)(fr0_ - 0x88)) = ar4;
        (*(undefined4 *)(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0x8c));
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 1;
      }
    }
    else {
      (*(int *)(fr0_ - 0x90)) = *(int *)(unsigned)(ar4 + 0x44);
      iVar7 = *(undefined4 *)(unsigned)0x8c4413c0;
      iVar5 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c126a2c)) + (*(int *)(fr0_ - 0x90)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(ar4 + 0x40),ar6_00,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x8c) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x8c)) {
        if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
          if (bVar1) {
            (*(int *)(fr0_ - 0x94)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0x94)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0x98)) = ar4;
            (*(undefined4 *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0x9c));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 7) {
          if (bVar2) {
            (*(int *)(fr0_ - 0xa0)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xa0)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xa4)) = ar4;
            (*(undefined4 *)(fr0_ - 0xa8)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0xa8));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            (*(int *)(fr0_ - 0xac)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xac)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xb0)) = ar4;
            (*(undefined4 *)(fr0_ - 0xb4)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x44) = (*(undefined4 *)(fr0_ - 0xb4));
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            (*(int *)(fr0_ - 0xb8)) = *(int *)(unsigned)(ar4 + 0x44);
            uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(int *)(fr0_ - 0xb8)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
            *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
            (*(int *)(fr0_ - 0xbc)) = ar4;
            ((uint *)(fr0_ - 0xcc))[3] =
                 (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(uint *)(unsigned)(ar4 + 0x44) = ((uint *)(fr0_ - 0xcc))[3];
          }
        }
        else {
          ((uint *)(fr0_ - 0xcc))[2] = *(int *)(unsigned)(ar4 + 0x44);
          uVar3 = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + ((uint *)(fr0_ - 0xcc))[2] * 4);
          (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3,ar7));
          *(int *)(unsigned)(ar4 + 0x40) = ar6_00;
          *(int *)(unsigned)(ar4 + 0x44) = *(int *)(unsigned)(ar4 + 0x44) + 1;
          ((uint *)(fr0_ - 0xcc))[1] = ar4;
          ((uint *)(fr0_ - 0xcc))[0] =
               (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                         (*(undefined4 *)(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
          *(uint *)(unsigned)(ar4 + 0x44) = ((uint *)(fr0_ - 0xcc))[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(uint *)(unsigned)(0xc4 + ar4));
  if (0xc349c < *(uint *)(unsigned)(0xbc + ar4)) {
    uVar6 = 0;
  }
  if (*(uint *)(unsigned)(0xbc + ar4) < 0x82334) {
    uVar6 = 0;
  }
  if (*(int *)(unsigned)(0x88 + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (ar6_00 == *(int *)(unsigned)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c126a9c));
    iVar4 = *(undefined4 *)(unsigned)0x8c4413c0;
    iVar5 = ar6_00;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(undefined4 *)(unsigned)(0x80 + ar4),ar6_00,ar7));
    *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x88) = uVar3;
    uVar6 = *(uint *)(unsigned)(0x8c + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x88))) &&
       (uVar6 = *(uint *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0xa4), uVar6 == 1)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021b10))))
                        (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c142194)),iVar5,ar7));
      *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x84) = uVar3;
      *(undefined4 *)(unsigned)(0x88 + ar4) = *(undefined4 *)(unsigned)((int)((uint *)(fr0_ - 0xcc)) + 0x84);
      *(int *)(unsigned)(0x80 + ar4) = ar6_00;
      uVar6 = 0x8c;
      *(undefined4 *)(unsigned)(0x8c + ar4) = 1;
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c101e1c\n.set _FUN_8c101e1c, _FUN_8c101e1c_def\n");
//@unit 8c102634
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
undefined4 FUN_8c102634_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102634";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1266a0),ar5,ar6,ar7));
  uVar3 = 0x8c441390;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c441390,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1266b0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c44139c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c44139c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1266c0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4413a8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4413a8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1266d0),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4413b4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1266e0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c1266e4),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1266e0) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c102634\n.set _FUN_8c102634, _FUN_8c102634_def\n");
//@unit 8c1026ec
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
undefined4 * FUN_8c1026ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1026ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c1026ec\n.set _FUN_8c1026ec, _FUN_8c1026ec_def\n");
//@unit 8c10270c
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
int free_if_nonnull_wrap_10270c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_10270c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_10270c\n.set _free_if_nonnull_wrap_10270c, _free_if_nonnull_wrap_10270c_def\n");
//@unit 8c10273c
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
undefined2 * FUN_8c10273c_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10273c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (undefined2)ar5;
  ar4[1] = (undefined2)ar6;
  return ar4;
}

__asm__(".globl _FUN_8c10273c\n.set _FUN_8c10273c, _FUN_8c10273c_def\n");
//@unit 8c102748
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
undefined4 * FUN_8c102748_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102748";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c102748\n.set _FUN_8c102748, _FUN_8c102748_def\n");
//@unit 8c10277c
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
undefined4 * FUN_8c10277c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10277c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _FUN_8c10277c\n.set _FUN_8c10277c, _FUN_8c10277c_def\n");
//@unit 8c102790
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
int free_if_nonnull_wrap_102790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_102790";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_102790\n.set _free_if_nonnull_wrap_102790, _free_if_nonnull_wrap_102790_def\n");
//@unit 8c1027c0
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
undefined2 * FUN_8c1027c0_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1027c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 9) = 0;
  *(undefined1 *)(unsigned)(ar4 + 4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c1027c0\n.set _FUN_8c1027c0, _FUN_8c1027c0_def\n");
//@unit 8c102800
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
undefined4 * FUN_8c102800_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102800";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0x3f800000;
  ar4[1] = 0x3f800000;
  ar4[2] = 0x3f800000;
  ar4[3] = 0x3f800000;
  return ar4;
}

__asm__(".globl _FUN_8c102800\n.set _FUN_8c102800, _FUN_8c102800_def\n");
//@unit 8c102824
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
undefined4 noop_102824_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_102824";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_102824\n.set _noop_102824, _noop_102824_def\n");
//@unit 8c102828
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
undefined4 report_error_message_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "report_error_message";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  
  ar6_00 = ar6;
  { extern void dbg_ring(int); dbg_ring(60); } (vsp = ((unsigned long)(fr0_ - 0)), log_message(ar4,ar5,ar6,ar7));
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_a(ar4,ar5,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(ar4,ar5,ar6_00,ar7));
  }
  return 0;
}

__asm__(".globl _report_error_message\n.set _report_error_message, _report_error_message_def\n");
//@unit 8c10287c
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
undefined4 FUN_8c10287c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10287c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10287c\n.set _FUN_8c10287c, _FUN_8c10287c_def\n");
//@unit 8c10289c
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
undefined4 FUN_8c10289c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10289c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*ar4,ar5,ar6,ar7));
    *ar4 = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c10289c\n.set _FUN_8c10289c, _FUN_8c10289c_def\n");
//@unit 8c1028c0
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
undefined4 FUN_8c1028c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1028c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((uint *)(fr0_ - 0x8))[0] = 0;
  (*(uint *)(fr0_ - 0xc)) = 0;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar4,((uint *)(fr0_ - 0x8)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar5,&(*(uint *)(fr0_ - 0xc)),ar6,ar7));
  if ((*(uint *)(fr0_ - 0xc)) < ((uint *)(fr0_ - 0x8))[0]) {
    uVar1 = 1;
  }
  else if (((uint *)(fr0_ - 0x8))[0] < (*(uint *)(fr0_ - 0xc))) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c102914_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102914";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 4) = ar5;
  return *(undefined4 *)(unsigned)(ar4 + 8);
}

__asm__(".globl _FUN_8c102914\n.set _FUN_8c102914, _FUN_8c102914_def\n");
//@unit 8c10291c
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
undefined4 * FUN_8c10291c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10291c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12c3a4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c10291c\n.set _FUN_8c10291c, _FUN_8c10291c_def\n");
//@unit 8c102974
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
int FUN_8c102974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102974";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 in_dr4 = 0;
  float fVar1;
  float in_fr7 = 0;
  float in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 uVar2;
  
  fVar1 = F32HI(in_dr4);
  *(float *)(unsigned)(ar4 + 4) = (fVar1 * in_fr7 - in_fr6 * (float)in_dr4) / (fVar1 - in_fr6);
  *(float *)(unsigned)(ar4 + 8) = ((float)in_dr4 - in_fr7) / (fVar1 - in_fr6);
  *(undefined4 *)(unsigned)(ar4 + 0xc) = in_fr8;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = in_fr9;
  if (*(float *)(unsigned)(ar4 + 0x10) < *(float *)(unsigned)(ar4 + 0xc)) {
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    *(undefined4 *)(unsigned)(ar4 + 0xc) = uVar2;
  }
  return ar4 + 0x10;
}

__asm__(".globl _FUN_8c102974\n.set _FUN_8c102974, _FUN_8c102974_def\n");
//@unit 8c1029d0
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
int Class_12c3a4_m0_1029d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3a4_m0_1029d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0xc;
}

__asm__(".globl _Class_12c3a4_m0_1029d0\n.set _Class_12c3a4_m0_1029d0, _Class_12c3a4_m0_1029d0_def\n");
//@unit 8c102a08
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
undefined4 * FUN_8c102a08_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102a08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d63f8(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12c394));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c102a08\n.set _FUN_8c102a08, _FUN_8c102a08_def\n");
//@unit 8c102a7c
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
undefined4 FUN_8c102a7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102a7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  float fVar2;
  float fVar3;
  
  fVar2 = F32HI(in_dr8);
  fVar3 = F32HI(in_dr6);
  *(float *)(unsigned)(ar4 + 0x14) = (fVar3 * (float)in_dr8 - fVar2 * (float)in_dr6) / (fVar3 - fVar2);
  *(float *)(unsigned)(ar4 + 0x18) = ((float)in_dr6 - (float)in_dr8) / (fVar3 - fVar2);
  *(float *)(unsigned)(ar4 + 0x1c) = fVar3;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c102a7c\n.set _FUN_8c102a7c, _FUN_8c102a7c_def\n");
//@unit 8c102b04
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
int Class_12c394_m0_102b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c394_m0_102b04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12c394_m1_102b58(ar4,ar5,ar6,ar7));
  return ar4 + 0xc;
}

__asm__(".globl _Class_12c394_m0_102b04\n.set _Class_12c394_m0_102b04, _Class_12c394_m0_102b04_def\n");
//@unit 8c102b58
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
int Class_12c394_m1_102b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c394_m1_102b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr4 = 0;
  
  if (*(float *)(unsigned)(ar4 + 0x1c) <= F32HI(in_dr4)) {
    iVar1 = ar4 + 0x18;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), Class_12c3a4_m0_1029d0(ar4,ar5,ar6,ar7));
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _Class_12c394_m1_102b58\n.set _Class_12c394_m1_102b58, _Class_12c394_m1_102b58_def\n");
//@unit 8c102ba4
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
undefined4 FUN_8c102ba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  return 1;
}

__asm__(".globl _FUN_8c102ba4\n.set _FUN_8c102ba4, _FUN_8c102ba4_def\n");
//@unit 8c102bb4
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
int FUN_8c102bb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102bb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 8;
}

__asm__(".globl _FUN_8c102bb4\n.set _FUN_8c102bb4, _FUN_8c102bb4_def\n");
//@unit 8c102bc8
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
undefined4 FUN_8c102bc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102bc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c102bc8\n.set _FUN_8c102bc8, _FUN_8c102bc8_def\n");
//@unit 8c102bd0
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
undefined4 FUN_8c102bd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102bd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  int iVar5;
  
  uVar2 = 0xf;
  uVar3 = ar5;
  uVar4 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d20(0xf,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa6b8(uVar2,uVar3,uVar4,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb3e0(0x8c4c3ea0,0xb3b160,uVar4,ar7));
  uVar4 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_25825a(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa6e2(ar4,ar5,ar6,ar7));
  ar6_00 = 0x8c44d498;
  uVar3 = 0x8c441478;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5dd0(0,0x8c441478,0x8c44d498,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8114(uVar2,uVar3,ar6_00,ar7));
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d20(0,uVar3,ar6_00,ar7));
  for (iVar5 = 8; 0 < iVar5; iVar5 = iVar5 + -1) {
    ar6_00 = 0x800;
    uVar2 = 8;
    uVar3 = 0x8c4594c0;
    ar7 = 0x8c45a860;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1f38c0(8,0x8c4594c0,0x800,0x8c45a860));
    if ((iVar1 == -0x17) || (iVar1 == -0x21)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar2,uVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,uVar3,ar6_00,ar7));
    }
    else if (iVar1 == 0) break;
  }
  if (iVar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar2,uVar3,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,uVar3,ar6_00,ar7));
  }
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0100b0(uVar2,uVar3,ar6_00,ar7); });
  return uVar3;
}

__asm__(".globl _FUN_8c102bd0\n.set _FUN_8c102bd0, _FUN_8c102bd0_def\n");
//@unit 8c102d20
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
int FUN_8c102d20_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102d20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (ar4 & 0xf) << 4;
}

__asm__(".globl _FUN_8c102d20\n.set _FUN_8c102d20, _FUN_8c102d20_def\n");
//@unit 8c102d40
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
undefined4 FUN_8c102d40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102d40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010080(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f38f2(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f813e(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f62f0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2590bc(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_1fb43a(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa6f2(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d20(0xf,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c102d40\n.set _FUN_8c102d40, _FUN_8c102d40_def\n");
//@unit 8c102d9c
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
undefined4 FUN_8c102d9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102d9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126aa0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c470880;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c470880,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126ab0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c47088c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c47088c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126ac0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c470898;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c470898,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126ad0)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c4708a4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c102d9c\n.set _FUN_8c102d9c, _FUN_8c102d9c_def\n");
//@unit 8c102e44
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
undefined4 FUN_8c102e44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102e44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126ae0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c4708b0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c4708b0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126af0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c4708bc;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c4708bc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126b00)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c4708c8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c4708c8,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126b10)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c4708d4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c102e44\n.set _FUN_8c102e44, _FUN_8c102e44_def\n");
//@unit 8c102eec
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
undefined4 * s_HIGYOLINE_102eee_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_HIGYOLINE_102eee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12c3c4);
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0300a4(ar4 + 0x27,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02eac0(ar4 + 0x207,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
  ar4[0xe1] = 0xffffffff;
  ar4[0x213] = 0;
  ar4[0x214] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x855) = 0;
  ar4[0x217] = 0;
  ar4[0x216] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x215) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x37,((undefined1 *)(unsigned)0x8c1eeec3),ar6,ar7); });
  ar4[0xe2] = 4;
  ar4[0x210] = 0;
  ar4[0x211] = 0;
  ar4[0x212] = 0x22;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)(unsigned)((int)ar4 + 0x865) = 0;
  ar4[0x21c] = 1;
  ar4[0x21b] = 1;
  ar4[0x21a] = 1;
  ar4[0x21c] = 0;
  ar4[0x21d] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x219) = 0;
  ar4[0x218] = 0x1b;
  ar4[0x21e] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21f) = 0;
  ar4[0x220] = 0;
  ar4[0x221] = 0;
  ar4[0x222] = 0;
  ar4[0x223] = 0;
  return ar4;
}

__asm__(".globl _s_HIGYOLINE_102eee\n.set _s_HIGYOLINE_102eee, _s_HIGYOLINE_102eee_def\n");
//@unit 8c1030a4
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
undefined4 * Class_12c3c4_m0_1030a4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m0_1030a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12c3c4);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_02eaec(ar4 + 0x207,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12c3c4_m0_1030a4\n.set _Class_12c3c4_m0_1030a4, _Class_12c3c4_m0_1030a4_def\n");
//@unit 8c103100
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
undefined4 s_REQUEST_SLEEP_10310a_def(int *ar4,code *ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REQUEST_SLEEP_10310a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
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
  
  puVar8 = ((undefined1 *)(fr0_ - 0x38));
  puVar6 = ((undefined1 *)(unsigned)0x8c1eee70);
  ar5_00 = (undefined1 *)(unsigned)0x10;
  do {
    puVar7 = puVar6 + 1;
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 2;
    puVar8[1] = *puVar7;
    puVar8 = puVar8 + 2;
    ar5_00 = ar5_00 + -1;
  } while (ar5_00 != (undefined1 *)(unsigned)0x0);
  pcVar2 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),0,ar6,ar7));
  if ((short)uVar1 == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5_00,pcVar2,ar7));
    pcVar2 = (code *)(int)(short)uVar1;
    ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0x18));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,ar5_00,pcVar2,ar7));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c27d430) == 1) && (ar4[0x21d] == 0)) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c109e40(ar4,ar6,pcVar2,ar7));
    ar5_00 = ((undefined1 *)(unsigned)0x8c27d430);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27d430) = 0;
  }
  if (*(char *)(unsigned)((int)ar4 + 0x9b) == '\x01') {
    *(undefined1 *)(unsigned)((int)ar4 + 0x865) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5_00,pcVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,*(int *)(unsigned)(ar6 + 0x18),(int)(short)uVar1,ar7));
  }
  uVar11 = 0x9c;
  (*(undefined1 *)(unsigned)0x8c1eee30) = ar4[0x210];
  (*(undefined1 *)(unsigned)0x8c1eee34) = ar4[0x211];
  iVar9 = ar4[0x212];
  (*(undefined1 *)(unsigned)0x8c1eee38) = iVar9;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_13c_028d9c(*(int *)(unsigned)(ar6 + 4),iVar9,0x9c,ar7));
  ar4[0x218] = iVar3;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),iVar9,uVar11,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030d04(ar4 + 0x27,(int)(short)uVar1,uVar11,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c104f5c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_SUCKED_1093aa(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_LIFE_1097b2(ar4,ar5,ar6,ar7));
  pcVar2 = ar5;
  pcVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), s_IDLEACTION_TREMOR_1091d0(ar4,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7));
  if (iVar3 != 2) {
    pcVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02f20c(ar4,ar6,pcVar10,ar7));
  }
  ar7_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 268)), get_field_4_05eed8(ar4,pcVar2,pcVar10,ar7));
  pcVar2 = ar5;
  pcVar10 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), s_STATUS_SNORE_10485e(ar4,ar5,ar6,ar7_00));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if ((iVar3 != 2) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00)), iVar3 == 0)) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), s_REACTION_TITILLATE_1080e0(ar4,ar5,ar6,ar7_00));
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if (iVar3 != 2) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02e8e0(ar4 + 0x207,1,pcVar10,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 268)), s_GRAPHICS_COMMON_106f5e(ar4,ar5,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 268)), s_GRATIFIC_RID_HOT_108562(ar4,ar5,ar6,ar7_00));
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), s_REACTION_TEMP_LACK_106c8a(ar4,ar5,ar6,ar7_00));
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
  if (iVar3 == 0) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if ((iVar3 != 2) && (ar4[1] == 0)) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,pcVar2,pcVar10,ar7_00));
      if (iVar3 == 1) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
        pcVar2 = (code *)0x7;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00));
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          ar7_00 = "REQUEST_SLEEP";
          pcVar10 = (code *)0x0;
          pcVar2 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0,0,"REQUEST_SLEEP"));
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
      if ((char)uVar1 == '\0') {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
        pcVar2 = (code *)0x7;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(uVar5 & 0xffff,7,pcVar10,ar7_00));
        if ((iVar3 == 1) && (ar4[0xe1] == -1)) {
          if (ar4[0x223] == 1) {
            ar7_00 = "REQUEST_WAKE_UP";
            pcVar10 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WAKE_UP"));
          }
          else {
            ar7_00 = "REQUEST_WANT_LIGHT";
            pcVar10 = (code *)0x0;
            (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0x21,0,"REQUEST_WANT_LIGHT"));
          }
          pcVar2 = (code *)0x0;
          ar4[0x223] = 0;
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
      if (*(char *)(unsigned)((int)ar4 + 0x9a) != (char)uVar1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
        if (iVar3 != 2) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar2,pcVar10,ar7_00));
          pcVar2 = (code *)(uVar5 & 0xffff);
          if ((code *)0x3 < pcVar2) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
            if ((char)uVar1 == '\0') {
              ar7_00 = "STATUS_LIGHT_OFF";
              pcVar10 = (code *)0x0;
              pcVar2 = (code *)0xa;
              (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,10,0,"STATUS_LIGHT_OFF"));
            }
            else {
              uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
              if (*(char *)(unsigned)((int)ar4 + 0x9a) < (char)uVar1) {
                ar7_00 = "STATUS_LIGHT";
                pcVar10 = (code *)0x0;
                pcVar2 = (code *)0x0;
                (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0306d4(ar4 + 0x27,0,0,"STATUS_LIGHT"));
              }
            }
          }
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,ar7_00));
        *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar1;
      }
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if (iVar3 != 2) {
      pcVar2 = ar5;
      pcVar10 = ar6;
      (vsp = ((unsigned long)(fr0_ - 268)), s_EVENT_QUIZ_107596(ar4,ar5,ar6,ar7_00));
    }
    if ((ar4[0x10] != 2) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_770_05eeb8(ar4 + 0x27,pcVar2,pcVar10,ar7_00)), iVar3 == 1)) {
      if (ar4[0xe1] == -1) {
        if ((char)ar4[0x26] < '\0') {
          ar4[0x25] = 0;
          pcVar2 = (code *)0x3;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,pcVar10,ar7_00));
          ar4[1] = 0;
          ar4[0x10] = 0;
          ar4[2] = 0x19;
          ar4[3] = 0;
          pcVar10 = (code *)0x1;
          *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
        }
        else {
          pcVar10 = (code *)(ar4 + 0x27);
          pcVar2 = (code *)(uint)ar4[0xe2];
          iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8320(0x8c35468c,pcVar2,pcVar10,ar7_00));
          ar4[0xe1] = iVar3;
        }
      }
      else {
        pcVar2 = (code *)0x2;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,2,pcVar10,ar7_00));
      }
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,ar7_00));
    if (((iVar3 != 2) || (pcVar2 = (code *)(ar4 + 0x10), *(int *)(unsigned)pcVar2 != 2)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eeb0(*(int *)(unsigned)(ar6 + 4) + 0xa8,pcVar2,pcVar10,ar7_00)), (char)uVar1 == '\x01')
       ) {
      pcVar10 = ((void *)0x8c025f70);
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_140_025f70(*(int *)(unsigned)(ar6 + 4),pcVar2,((void *)0x8c025f70),ar7_00));
      if (pcVar2 == (code *)0x0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 10;
        pcVar10 = (code *)0x1b;
        pcVar2 = (code *)0x14;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0b9ed4(*(int *)(unsigned)(ar6 + 0x18),0x14,0x1b,ar7_00));
      }
    }
  }
  pcVar4 = (code *)ar7_00;
  if ((((ar4[0x10] == 0) || (ar4[0x10] == 6)) &&
      ((ar4[1] != 7 || (pcVar2 = (code *)(int)(char)ar4[0x26], (char)ar4[0x26] != '\x04')))) &&
     ((*(char *)(unsigned)((int)ar4 + 0x83) == '\0' || (*(char *)(unsigned)((int)ar4 + 0x83) == '\x01')))) {
    pcVar2 = ar5;
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c10862c(ar4,ar5,ar6,ar7_00));
    pcVar4 = (code *)ar7_00;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar2,pcVar10,pcVar4));
  if (((iVar3 != 2) && (iVar3 = (int)(char)ar4[0x26], iVar3 < 0xb)) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      pcVar2 = (code *)0x2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (iVar3 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      else {
        pcVar4 = (code *)0x5f;
        ar4[2] = 0x5f;
        ar4[3] = 0;
        ar4[1] = 0xd;
        ar4[0x210] = 9;
        ar4[0x10] = 9;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 9;
      }
      break;
    case 1:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      uVar1 = 0x840;
      ar4[0x210] = 0x1c;
      ar4[0x10] = 0x1c;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x1c;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),0x840,pcVar10,pcVar4));
      if (ar4[0x217] != (uVar5 & 0xffff)) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),uVar1,pcVar10,pcVar4));
        ar4[0x217] = uVar5 & 0xffff;
        ar4[0x214] = ar4[0x214] + 1;
        if (ar4[0x214] == 600) {
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 2;
        }
      }
      pcVar2 = (code *)0x2;
      pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0x3;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      break;
    case 2:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 8;
      ar4[0x10] = 8;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 8;
      pcVar2 = (code *)0x2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)ar5 + 0x11c))))(ar5,2,pcVar10,pcVar4));
      if (iVar3 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 3;
      }
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eea8(*(int *)(unsigned)(ar6 + 0xc),pcVar2,pcVar10,pcVar4));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar1;
      break;
    case 4:
      pcVar4 = (code *)(uint)ar4[0xe1];
      if (pcVar4 != (code *)0xffffffff) {
        pcVar4 = (code *)0xdc;
        pcVar2 = (code *)(ar4 + 0x37);
        pcVar10 = pcVar2;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc("start",pcVar2,pcVar2,0xdc));
        if (iVar3 == 0) {
          pcVar4 = ((void *)0x8c0f8214);
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,pcVar2,pcVar10,((void *)0x8c0f8214)));
          pcVar10 = (code *)0x3;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,3,pcVar4));
          *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
          pcVar2 = (code *)0x384;
          ar4[0xe1] = -1;
          ar4[0x3f] = 0;
        }
      }
      if ((ar4[1] != 7) && (ar4[0xe1] != -1)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041ec(ar4 + 0x27,pcVar2,pcVar10,pcVar4));
        pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc(uVar1,((undefined1 *)(unsigned)0x8c1eef1a),pcVar10,pcVar4));
        if (pcVar2 == (code *)0x0) {
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,0,pcVar10,pcVar4));
          ar4[0xe1] = -1;
        }
      }
      break;
    default:
      pcVar2 = (code *)0x0;
      pcVar4 = ((void *)0x8c02cb7c);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cb7c(*(int *)(unsigned)(ar6 + 4) + 0xa8,0,pcVar10,((void *)0x8c02cb7c)));
      break;
    case 7:
      pcVar4 = (code *)0x0;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c02cb7c(pcVar10 + 0xa8,0,pcVar10,0); });
      pcVar2 = (code *)0x1;
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cb74(*(int *)(unsigned)(ar6 + 4) + 0xa8,1,pcVar10,pcVar4));
      break;
    case 8:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02d3e0(*(int *)(unsigned)(ar6 + 4) + 0x90,pcVar2,pcVar10,pcVar4));
      uVar11 = CONCAT13((char)uVar1,(int3)(*(undefined4 *)(fr0_ - 0x108)));
      pcVar4 = (code *)(int)(char)uVar1;
      if (pcVar4 == (code *)0x1) {
        pcVar4 = (code *)0x98;
        pcVar10 = (code *)0xa;
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 10;
      }
      else {
        if (ar4[0x10] != 0x1d) {
          ar4[2] = 99;
          ar4[3] = 0;
          ar4[1] = 0xd;
          ar4[0x210] = 0x1d;
          ar4[0x10] = 0x1d;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x1d;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar10,pcVar4));
          (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0fa6c8(0x8c35468c,uVar1,pcVar10,pcVar4));
        }
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02cbbc(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar10,pcVar4));
        pcVar10 = (code *)(*(int *)(unsigned)(ar6 + 4) + 0x18);
        ({ unsigned long ri0_ = (unsigned long)(uVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(pcVar10,0,pcVar10,pcVar4); });
        pcVar2 = (code *)0x0;
        ({ unsigned long ri0_ = (unsigned long)(uVar11); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4),0,pcVar10,pcVar4); });
      }
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x13;
      pcVar10 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,0,pcVar4));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4) + 0x18,0,pcVar10,pcVar4); });
      pcVar2 = (code *)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x108))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c1041e4(*(int *)(unsigned)(ar6 + 4),0,pcVar10,pcVar4); });
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        pcVar10 = (code *)0x2;
        ar4[0x10] = 2;
        pcVar2 = (code *)(ar4 + 0x1b);
        if (*(int *)(unsigned)pcVar2 != 0) {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4[0x1b] + 8));
          (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pcVar10 + 0x78))))(ar4[0x1b],pcVar2,pcVar10,pcVar4));
          ar4[0x1b] = 0;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0301f8(ar4 + 0x27,pcVar2,pcVar10,pcVar4));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1089e4(ar4,ar5,ar6,pcVar4));
  pcVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c108f3c(ar4,ar5,ar6,pcVar4));
  pcVar10 = ((void *)0x8c027930);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),((void *)0x8c027930),pcVar2,pcVar4));
  if (iVar3 != 2) {
    pcVar10 = ar6;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c109b18(ar4,ar6,pcVar2,pcVar4));
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05ee90(*(int *)(unsigned)(ar6 + 8),pcVar10,pcVar2,pcVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_4_05eed8(ar4,pcVar10,pcVar2,pcVar4));
    uVar1 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + ar4[3] * 4 + iVar3 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05f488(ar4,uVar1,pcVar2,pcVar4));
    if ((ar4[1] == 2) &&
       (pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),uVar1,pcVar2,pcVar4)),
       (char)pcVar4 != '\x02')) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),uVar1,pcVar2,pcVar4));
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
        uVar11 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,900,pcVar2,pcVar4));
        if ((char)uVar11 < '\x04') {
          ar4[0x10] = 0;
        }
      }
    }
    if ((*(char *)(unsigned)((int)ar4 + 0x91) == '\x01') ||
       (pcVar10 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),uVar1,pcVar2,pcVar4)),
       (code *)(uint)ar4[0x10] != pcVar10)) {
      pcVar2 = (code *)0x1;
      pcVar10 = (code *)(uint)ar4[0x10];
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c031b08(*(int *)(unsigned)(ar6 + 8),pcVar10,1,pcVar4));
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  pcVar4 = (code *)(vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),pcVar10,pcVar2,pcVar4));
  if (pcVar4 != (code *)0xffffffff) {
    pcVar2 = (code *)0x0;
    pcVar10 = (code *)0x0;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041d8(*(int *)(unsigned)(ar6 + 0xc),0,0,pcVar4));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar10,pcVar2,pcVar4));
  if (ar4[0x217] != (uVar5 & 0xffff)) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),pcVar10,pcVar2,pcVar4));
    ar4[0x217] = uVar5 & 0xffff;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,pcVar10,pcVar2,pcVar4));
    if (iVar3 < 0x31) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0e9668(*(int *)(unsigned)(ar6 + 0xc),pcVar10,pcVar2,pcVar4));
    }
    else {
      pcVar4 = ((void *)0x8c0e9690);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0e9690(*(int *)(unsigned)(ar6 + 0xc),pcVar10,pcVar2,((void *)0x8c0e9690)));
    }
    iVar9 = *(int *)(unsigned)(ar6 + 0xc);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_cc_1041cc(iVar9,pcVar10,iVar9,pcVar4));
    if (iVar3 == 0) {
      pcVar10 = (code *)0x0;
      pcVar4 = ((void *)0x8c05ee64);
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05ee64(*(int *)(unsigned)(ar6 + 4) + 0xf8,0,iVar9,((void *)0x8c05ee64)));
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
  iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_124_027930(*(int *)(unsigned)(ar6 + 8),pcVar10,pcVar2,pcVar4));
  if ((iVar3 == 2) && (ar4[0x25] = 0x36, ar4[0xe1] != -1)) {
    ar5_01 = ar4 + 0x37;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1041fc("start",ar5_01,pcVar2,pcVar4));
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f8214(0x8c35468c,ar5_01,pcVar2,pcVar4));
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030870(ar4 + 0x27,3,ar4 + 0x27,0x9c));
      ar4[2] = 0;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
      ar4[0x3f] = 0;
    }
  }
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),0,0x87));
  *(char *)(unsigned)((int)ar4 + 0x9a) = (char)uVar1;
  return 0x9a;
}

__asm__(".globl _s_REQUEST_SLEEP_10310a\n.set _s_REQUEST_SLEEP_10310a, _s_REQUEST_SLEEP_10310a_def\n");
//@unit 8c1041cc
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
undefined4 get_field_cc_1041cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_cc_1041cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xcc + ar4);
}

__asm__(".globl _get_field_cc_1041cc\n.set _get_field_cc_1041cc, _get_field_cc_1041cc_def\n");
//@unit 8c1041d8
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
int FUN_8c1041d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1041d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xcc;
  *(undefined4 *)(unsigned)(0xcc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c1041d8\n.set _FUN_8c1041d8, _FUN_8c1041d8_def\n");
//@unit 8c1041e4
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
undefined4 FUN_8c1041e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1041e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c1041e4\n.set _FUN_8c1041e4, _FUN_8c1041e4_def\n");
//@unit 8c1041ec
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
int FUN_8c1041ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1041ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x730;
}

__asm__(".globl _FUN_8c1041ec\n.set _FUN_8c1041ec, _FUN_8c1041ec_def\n");
//@unit 8c1041fc
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
undefined4 FUN_8c1041fc_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1041fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12c3c4_m2_104264_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m2_104264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  (*(undefined1 *)(unsigned)0x8c1eee30) = ar4[0x210];
  (*(undefined1 *)(unsigned)0x8c1eee34) = ar4[0x211];
  (*(undefined1 *)(unsigned)0x8c1eee38) = ar4[0x212];
  iVar5 = ar5;
  piVar2 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],ar5,ar6,ar7));
  if ((short)uVar1 == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar6[1],iVar5,piVar2,ar7));
    piVar2 = (int *)(unsigned)(int)(short)uVar1;
    iVar5 = ar6[6];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(ar4,iVar5,piVar2,ar7));
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],iVar5,piVar2,ar7));
  ar4[0x218] = iVar5;
  iVar5 = ar5;
  piVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c104f5c(ar4,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,iVar5,piVar2,ar7));
  if ((iVar3 == 1) && (ar4[1] != 1)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*ar6,iVar5,piVar2,ar7));
    if ((iVar3 == 0) && (iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_70_05f490(*ar6,iVar5,piVar2,ar7)), iVar5 == 0)) {
      ar4[0xe] = 2;
      ar4[1] = 2;
      ar4[3] = 0;
      ar4[2] = 99;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f298(ar4,199,piVar2,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05febc(ar6[3],0,piVar2,ar7));
    }
    else {
      ar4[0xe] = 2;
      ar4[1] = 0xb;
      ar4[2] = 99;
      ar4[0x10] = 0xd;
      uVar1 = 0x577;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f298(ar4,0x577,piVar2,ar7));
      if (ar4[0x1b] != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],uVar1,piVar2,ar7));
        ar4[0x1b] = 0;
      }
    }
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f20c(ar4,ar6,piVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_05eed8(ar4,piVar6,piVar2,ar7));
  piVar2 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), s_STATUS_SNORE_10485e(ar4,ar5,ar6,uVar1));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],ar5,piVar2,uVar1));
  if (((iVar5 != 2) && (iVar5 = (int)(char)ar4[0x26], iVar5 < 0xb)) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 9;
      ar4[0x10] = 9;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 9;
      break;
    case 3:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05eea8(ar6[3],ar5,piVar2,uVar1));
      *(char *)(unsigned)((int)ar4 + 0x99) = (char)uVar4;
      break;
    case 8:
      ar4[2] = 0x5f;
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[0x210] = 0x1d;
      ar4[0x10] = 0x1d;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x1d;
      break;
    case 9:
      ar4[3] = 0;
      ar4[1] = 0xd;
      ar4[2] = 99;
      ar4[0x210] = 0x13;
      ar4[0x10] = 0x13;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x13;
      break;
    case 10:
      if ((ar4[0x10] != 2) || (ar4[1] != 1)) {
        ar4[3] = 0;
        ar4[1] = 1;
        ar4[2] = 99;
        ar4[0x10] = 2;
        if (ar4[0x1b] != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],ar5,piVar2,uVar1));
          ar4[0x1b] = 0;
        }
      }
    }
  }
  if (ar4[0xe1] != -1) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa2b8(0x8c35468c,ar5,piVar2,uVar1));
    if (iVar5 == 0) {
      ar4[0x25] = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030870(ar4 + 0x27,3,piVar2,uVar1));
      ar4[1] = 0;
      ar4[0x10] = 0;
      ar4[2] = 0x19;
      *(undefined1 *)(unsigned)((int)ar4 + 0x91) = 1;
      ar4[3] = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x20) = 1;
      ar4[0xe1] = -1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8214(0x8c35468c,ar5,piVar2,uVar1));
    }
    ar4[0x25] = ar4[0x55];
  }
  if (ar4[0x22] == 1) {
    ar4[0x22] = 0;
  }
  piVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109b18(ar4,ar6,piVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05ee90(ar6[2],piVar6,piVar2,uVar1));
  if (*(char *)(unsigned)((int)ar4 + 0x91) != '\x01') {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],piVar6,piVar2,uVar1));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_05eea0(ar4,piVar6,piVar2,uVar1));
    if (iVar5 == iVar3) {
      return iVar3;
    }
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_05eea0(ar4,piVar6,piVar2,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b08(ar6[2],uVar4,1,uVar1));
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m2_104264\n.set _Class_12c3c4_m2_104264, _Class_12c3c4_m2_104264_def\n");
//@unit 8c10469c
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
int s_REACTION_CATCH_1046a0_def(int ar4,int ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_REACTION_CATCH_1046a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(unsigned)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x1c)),ar5 + 0x10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x15;
    if (*(int *)(unsigned)(ar4 + 900) == -1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH"); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xdc,((undefined1 *)(unsigned)0x8c1eeec3),uVar2,ar7); });
      *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f8320(0x8c35468c,*(undefined4 *)(unsigned)(ar4 + 0x388),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 900) = uVar2;
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,2,ar6,ar7));
    }
    iVar1 = *(int *)(unsigned)(ar4 + 900);
    if (iVar1 != -1) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = *(undefined4 *)(unsigned)(ar4 + 0x154);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x19;
        *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(undefined4 *)(unsigned)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_REACTION_CATCH_1046a0\n.set _s_REACTION_CATCH_1046a0, _s_REACTION_CATCH_1046a0_def\n");
//@unit 8c104854
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
undefined4 s_STATUS_SNORE_10485e_def(int ar4,undefined4 ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_STATUS_SNORE_10485e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
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
  undefined4 ain0;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar4 = ar6;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c105094(ar4,ar5,ar6,ar7));
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,1,piVar4,ar7); });
  }
  else {
    uVar3 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = uVar3;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar2 < 0x22) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      break;
    case 1:
      uVar3 = 3;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02fdd8(ar4,ar5,piVar4,ar7));
      break;
    case 2:
      a5 = *(int *)(unsigned)(*ar6 + 8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a5 + 0xb4))))(*ar6,a5,piVar4,ar7));
      if (iVar2 == 1) {
        iVar2 = *ar6;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c027954(iVar2,a5,piVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c4e2c(iVar2,a5,piVar4,((void *)0x8c0c4e2c)));
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),1,piVar4,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
      break;
    case 6:
      pcVar5 = ((void *)0x8c02602c);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02602c(ar6[6],uVar3,piVar4,((void *)0x8c02602c)));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,piVar4,pcVar5));
      if (iVar2 == 0xe) {
        pcVar6 = "STATUS_SNORE";
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x11,0,"STATUS_SNORE"));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,uVar3,pcVar6); });
      }
      break;
    case 7:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      break;
    case 10:
    case 0x14:
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),ar6[5] + 0x10,piVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x28)),piVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,piVar4,ar7));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x6513e10344af0000;
      }
      break;
    case 0xc:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),1,piVar4,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05febc(ar6[3],0,piVar4,ar7));
      }
      break;
    case 0x11:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02602c(ar6[6],uVar3,piVar4,ar7));
      uVar3 = 10;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar4,ar7));
      if (((iVar2 == 5) && (*(char *)(unsigned)(ar4 + 0x855) == '\0')) &&
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_140_025f70(ar6[1],uVar3,piVar4,ar7)), iVar2 == 0)) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(unsigned)(ar4 + 0x855),piVar4,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02fcc4(ar4,ar6,piVar4,ar7));
        if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_UNCONSIDERED"));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_COUPLING"));
        }
        *(undefined1 *)(unsigned)(ar4 + 0x855) = 1;
      }
      break;
    case 0x18:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c104f44(ar6[3],uVar3,piVar4,ar7));
        ar5_00 = 0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0637c0(ar6[3],0,piVar4,ar7));
        *(char *)(unsigned)(ar4 + 0x87c) = *(char *)(unsigned)(ar4 + 0x87c) + '\x01';
        *(undefined4 *)(unsigned)(ar4 + 0x878) = 0xb4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
        ain0 = CONCAT13((char)((uint)(*(undefined4 *)(fr0_ - 0x7c)) >> 0x18),
                        CONCAT12((char)uVar3,(short)(*(undefined4 *)(fr0_ - 0x7c))));
        if ((char)uVar3 < '\x04') {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
          ain0 = CONCAT22((short)((uint)ain0 >> 0x10),CONCAT11((char)uVar3,(char)ain0));
          if ((char)uVar3 == '\x01') {
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02cb84(ar6[1] + 0xa8,0,piVar4,ar7); });
          }
          piVar4 = (int *)(unsigned)0x1b;
          ar5_00 = 0x17;
          iVar2 = ar6[6];
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0b9ed4(iVar2,0x17,0x1b,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c4e2c(iVar2,ar5_00,piVar4,ar7));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
        if ((char)uVar3 == '\x04') {
          *(undefined1 *)(unsigned)(ar4 + 0x98) = 7;
          ({ unsigned long ri0_ = (unsigned long)(CONCAT31((int3)((uint)ain0 >> 8),(char)uVar3)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar4,ar7); });
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c064ba0(ar6[6],2,piVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0b9ed4(ar6[6],0x18,0x1b,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x1f,0,"EVENT_ROCK_PUSH"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1b:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"REACTION_GURUGURU"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1d:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        ar7 = "EVENT_LANDING";
        piVar4 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"EVENT_LANDING"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c02f670(*ar6,*ar6,piVar4,ar7); });
      if (cVar8 == '\0') {
        pcVar5 = (code *)0x432a0000;
      }
      else {
        (*(float *)(fr0_ - 0x34)) = 170.0;
        pcVar5 = ((void *)0x8c022cb0);
      }
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar4,ar7));
      if (cVar7 != '\0' || (float)(uint)pcVar5 <= (*(float *)(fr0_ - 0x34))) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x14,0,"STATUS_GROAN"));
      }
      break;
    case 0x1f:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        pcVar6 = "REACTION_INSPIDER";
        uVar3 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c030568(ar4 + 0x9c,0x26,0,"REACTION_INSPIDER"); });
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,uVar3,pcVar6));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_10485e\n.set _s_STATUS_SNORE_10485e, _s_STATUS_SNORE_10485e_def\n");
//@unit 8c104f44
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
undefined4 FUN_8c104f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c104f44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x39) = *(char *)(unsigned)(ar4 + 0x39) + '\x01';
  return 0x39;
}

__asm__(".globl _FUN_8c104f44\n.set _FUN_8c104f44, _FUN_8c104f44_def\n");
//@unit 8c104f5c
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
int FUN_8c104f5c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c104f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    (vsp = ((unsigned long)(fr0_ - 44)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    uVar2 = ar5;
    iVar1 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), s_GRATIFIC_EAT_1063b2(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x22) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0;
      if (*(int *)(unsigned)(ar4 + 4) == 1) {
        *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = iVar1;
        (*(int *)(fr0_ - 0x2c)) = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        ar5 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c02f404(ar4,0,iVar1,ar7); });
        ar6 = iVar1;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c105094(ar4,ar5,ar6,ar7));
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    iVar1 = 0;
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
      iVar1 = 0x6c;
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c104f5c\n.set _FUN_8c104f5c, _FUN_8c104f5c_def\n");
//@unit 8c105094
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
undefined4 FUN_8c105094_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c105094";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) && (*(int *)(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  uVar1 = 0x20;
  if ((iVar2 < 0x21) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c10519c))[iVar2 + -1])))(uVar3,vr5,vr6,vr7));
    return uVar3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c105094\n.set _FUN_8c105094, _FUN_8c105094_def\n");
//@unit 8c1063a8
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
undefined * s_GRATIFIC_EAT_1063b2_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_GRATIFIC_EAT_1063b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
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
  
  iVar7 = 0;
  piVar4 = ar5;
  piVar6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_124_027930(ar6[2],ar5,ar6,ar7));
  puVar2 = (undefined *)(unsigned)0x21;
  if ((iVar1 < 0x22) && (puVar2 = (undefined *)(unsigned)0x1, 0 < iVar1)) {
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c1063f4))[iVar1 + -1];
                    
    switch(iVar1) {
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02f414(ar4,piVar4,piVar6,ar7));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        if ((iVar1 == 0xf) &&
           (ar7 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), get_field_13c_028d9c(ar6[1],piVar4,piVar6,((void *)0x8c028d9c))),
           ar7 == (char *)(unsigned)0x2)) {
          piVar4 = (int *)(unsigned)0x1e;
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),0x1e,piVar6,2));
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
          if (iVar1 == 0xf) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
            piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7));
          }
          else {
            piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),0x1e,piVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7));
          }
        }
      }
      if (*(int *)(unsigned)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)(unsigned)0x0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(int *)(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,2,0,"GRATIFIC_EAT"));
      }
      break;
    case 6:
      *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
      puVar2 = (undefined *)(unsigned)0x32;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x32;
      break;
    case 8:
      puVar2 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
      break;
    case 9:
      *(undefined4 *)(unsigned)(ar4 + 8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      puVar2 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
      break;
    case 0xb:
      if (*(int *)(unsigned)(ar4 + 900) == -1) {
        puVar2 = (undefined *)(unsigned)0xffffffff;
      }
      else {
        puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030870(ar4 + 0x9c,2,piVar6,ar7));
      }
      break;
    case 0xc:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02f414(ar4,piVar4,piVar6,ar7));
      if (iVar1 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],uVar3,piVar6,ar7));
        piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8));
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(piVar6[0x1e])))(*(int *)(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bef8(ar6[1],((void *)0x8c02bef8),piVar6,ar7));
        if ((short)uVar3 == 2) {
          piVar4 = (int *)(unsigned)0x0;
          while( true ) {
            uVar3 = 3;
            ar4_00 = ar5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,3,piVar6,ar7));
            if (iVar1 <= (int)piVar4) break;
            uVar3 = 3;
            piVar6 = piVar4;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar3,piVar6,ar7));
            if (iVar1 == 2) {
              uVar3 = 3;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
              piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 8));
              iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(piVar6[0x2d])))(iVar1,uVar3,piVar6,ar7));
              if (iVar1 == 1) {
                uVar3 = 3;
                piVar6 = piVar4;
                iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
                piVar6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb8))))(iVar1,uVar3,piVar6,ar7));
                if (piVar6 == (int *)(unsigned)0x0) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            piVar4 = (int *)(unsigned)((int)piVar4 + 1);
          }
          if (iVar7 == 2) {
            piVar6 = (int *)(unsigned)0x1b;
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0xf,0x1b,ar7));
            uVar3 = 1;
            ar4_00 = (int *)(unsigned)(uint)ar6[3];
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x94))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c061180(ar4_00,1,piVar6,ar7); });
          }
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0c4e2c(ar4_00,uVar3,piVar6,ar7));
        }
      }
      puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05febc(ar6[3],0,piVar6,ar7));
      break;
    case 0xe:
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02ce10(ar6[1] + 0x90,0,piVar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_13c_028d9c(ar6[1],ar6[1],piVar6,ar7));
      puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0x11,uVar3,ar7));
      break;
    case 0x10:
      (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xbc))))(*ar6,piVar4,piVar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,piVar4,piVar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bfd8(ar6[1],piVar4,piVar6,ar7));
      ar6_00 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      a7 = 1;
      iVar1 = (int)(short)uVar5;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0620bc(uVar3,iVar1,ar6_00,1));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x148))))(ar5,iVar1,ar6_00,a7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bfd8(ar6[1],iVar1,ar6_00,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],iVar1,ar6_00,a7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0620a4(uVar3,(int)(short)uVar5,1 - iVar1,a7));
      if ((char)uVar3 == '\x01') {
        puVar2 = (undefined *)(unsigned)0x1;
      }
      else {
        puVar2 = (undefined *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + -1);
        *(unsigned *)(unsigned)(ar4 + 0xc) = puVar2;
      }
      break;
    case 0x11:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      if (iVar1 == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xc0))))(*ar6,piVar4,piVar6,ar7));
        piVar4 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02cb74(ar6[1] + 0xa8,1,piVar6,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) = 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      if (iVar1 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7));
        ar7 = "GRATIFIC_COPULATION_DONE";
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,9,0,"GRATIFIC_COPULATION_DONE"));
        piVar6 = (int *)(unsigned)0x1b;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0x14,0x1b,ar7));
      }
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x94))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,0,piVar6,ar7); });
      uVar3 = 1;
      iVar1 = ar6[1] + 0xa8;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c06209c(iVar1,1,piVar6,ar7));
      puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0c4e2c(iVar1,uVar3,piVar6,ar7));
      break;
    case 0x13:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
      (*(undefined4 *)(unsigned)(unsigned)0x8c13bcc4) = 1;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_13c_028d9c(ar6[1],piVar4,piVar6,ar7));
      uVar5 = 0x19;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0x19,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa688(0x8c35468c,uVar5,uVar3,ar7));
      ar7_00 = "GRATIFIC_GROAN_DONE";
      uVar3 = 0;
      iVar1 = ar4 + 0x9c;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(iVar1,0x1f,0,"GRATIFIC_GROAN_DONE"));
      puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0c4e2c(iVar1,((void *)0x8c0c4e2c),uVar3,ar7_00));
      break;
    case 0x18:
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7));
      uVar5 = CONCAT13((char)uVar3,(int3)(*(undefined4 *)(fr0_ - 0x94)));
      if ('\x03' < (char)uVar3) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7));
        uVar5 = CONCAT13((char)((uint)uVar5 >> 0x18),CONCAT12((char)uVar3,(short)uVar5));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,piVar6,ar7));
        ar7 = "EVENT_AFTER_ROCK_PUSH";
        piVar6 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,0x26,0,"EVENT_AFTER_ROCK_PUSH"));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02cbbc(ar6[1] + 0x90,1,piVar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1],0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x18,0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x60,0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x30,0,piVar6,ar7); });
        piVar4 = (int *)(unsigned)0x1;
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar6,ar7); });
        *(undefined4 *)(unsigned)(ar4 + 0x870) = 1;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7));
      puVar2 = (undefined *)(unsigned)(int)(char)uVar3;
      if ((char)uVar3 < '\x04') {
        ar7_01 = ((void *)0x8c0b9ed4);
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0x17,0x1b,((void *)0x8c0b9ed4)));
        iVar1 = ar6[3];
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0e98f0(iVar1,((void *)0x8c0e98f0),iVar1,ar7_01));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,iVar1,ar7_01));
        if (*(char *)(unsigned)(ar4 + 0x87c) < '\x03') {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa5f0(0x8c35468c,0,iVar1,ar7_01));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa5f0(0x8c35468c,1,iVar1,ar7_01));
        }
        puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,0x1e,0,"EVENT_AFTER_ROCK_PUSH"));
      }
      break;
    case 0x19:
      puVar2 = (undefined *)(unsigned)({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x1f,0,"REACTION_AFTER_DEKOPIN"); });
      break;
    case 0x1f:
      if (*(int *)(unsigned)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)(unsigned)0x0;
      }
      else {
        puVar2 = (undefined *)(unsigned)0x6c;
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_GRATIFIC_EAT_1063b2\n.set _s_GRATIFIC_EAT_1063b2, _s_GRATIFIC_EAT_1063b2_def\n");
//@unit 8c106c84
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
undefined4 * s_REACTION_TEMP_LACK_106c8a_def(int ar4,int *ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_REACTION_TEMP_LACK_106c8a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0 = 0;
  float fVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  a6 = ar6;
  if ((*(int *)(unsigned)(ar4 + 0x880) == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,0,ar6,ar7)), *(int *)(unsigned)(ar4 + 0x868) != iVar1)) {
    uVar4 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,0,a6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x868) = uVar2;
    if (*(int *)(unsigned)(ar4 + 0x868) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar4,a6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41600000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x416e666641600000;
      }
      if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar4,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x416e6666,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = 0x8c02602c416e6666;
        }
        if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar4,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_TEMP_LACK";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_TEMP_LACK"));
          *(undefined4 *)(unsigned)(ar4 + 0x880) = 1;
        }
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x884) == 0) {
    uVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1a4))))(ar5,0,a6,ar7));
    if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),uVar2,a6,ar7));
      uVar4 = (undefined4)(in_dr0 >> 0x20);
      if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar2,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41c8cccd,uVar4);
        }
        else {
          in_dr0 = 0x88841c8cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF"));
          *(undefined4 *)(unsigned)(ar4 + 0x884) = 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar2,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41a0cccd,uVar4);
        }
        else {
          in_dr0 = 0x2dc41a0cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF"));
          *(undefined4 *)(unsigned)(ar4 + 0x884) = 1;
        }
      }
    }
  }
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x888));
  if ((puVar3 == (undefined4 *)(unsigned)0x0) &&
     (puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,1,a6,ar7)),
     ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x86c)) != puVar3)) {
    uVar4 = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,1,a6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x86c) = uVar2;
    puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x86c));
    if (puVar3 == (undefined4 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,uVar4,a6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = ((undefined4 *)(unsigned)0x8c106f4c);
      if (cVar8 == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = 65.0;
      }
      else {
        fVar5 = 65.0;
        fVar6 = 65.9;
      }
      if (cVar7 != '\0' || fVar6 <= fVar5) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,uVar4,a6,ar7));
        if (cVar8 == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c106f50);
        if (cVar8 == '\0') {
          fVar6 = 65.9;
        }
        else {
          fVar5 = 65.9;
          fVar6 = 1.05378e-42;
        }
        if (cVar7 != '\0' || fVar5 <= fVar6) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar4,a6,ar7));
          puVar3 = (undefined4 *)(unsigned)0x3;
          if (2 < (ushort)uVar2) {
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_OXYGEN_LACK"));
            puVar3 = (undefined4 *)(unsigned)0x888;
            *(undefined4 *)(unsigned)(ar4 + 0x888) = 1;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_COMMON_106f5e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_106f5e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  code *ar7_00;
  char cVar4;
  
  cVar4 = '\0';
  if (((*(char *)(unsigned)(ar4 + 0x81) == '\x01') && (1 < *(int *)(unsigned)(ar4 + 0x104))) &&
     (*(int *)(unsigned)(ar4 + 4) != 0xd)) {
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
      if (iVar2 == 2) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5,iVar3,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,iVar3,ar7));
        if (iVar2 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x15;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x15;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xb;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0xb;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x1e;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x1e;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x40)),iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x50)),iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,iVar3,ar7));
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
            *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
            *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
          *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
          (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
          *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
          *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
          (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x20)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,iVar3,ar7));
        ar7_00 = ((void *)0x8c022c88);
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,((void *)0x8c022c88)));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x30)),iVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,iVar3,ar7_00));
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x8c1eee9044af0000;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 220)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 220)) - 8); FUN_8c0303b8(ar4 + 0x9c,0,0,"REACTION_TAP_RESPONSE"); });
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x14;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,iVar3,ar7));
      if (iVar2 == 6) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c063810(*(int *)(unsigned)(ar6 + 4) + 0xf8,1,iVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0306d4(ar4 + 0x9c,0x22,0,"REACTION_WAKED_TAP"));
      }
    }
  }
  else if (*(char *)(unsigned)(ar4 + 0x83) == '\x02') {
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
      if (iVar2 == 2) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x15;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x15;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x15;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x60)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x60)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x70)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x70)),iVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 220)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,iVar3,ar7));
        if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
          *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x44af000044960000;
          *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xb;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0xb;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x1e;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x1e;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),((void *)0x8c027930),iVar3,ar7));
      if (iVar2 == 6) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xd8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c063810(*(int *)(unsigned)(ar6 + 4) + 0xf8,2,iVar3,ar7); });
        (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0306d4(ar4 + 0x9c,0x23,0,"REACTION_WAKED_TAP"));
      }
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 0x81) = 0;
  return 0x81;
}

__asm__(".globl _s_GRAPHICS_COMMON_106f5e\n.set _s_GRAPHICS_COMMON_106f5e, _s_GRAPHICS_COMMON_106f5e_def\n");
//@unit 8c107590
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
int s_EVENT_QUIZ_107596_def(unsigned char *ar4,unsigned char *ar5,unsigned char *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_EVENT_QUIZ_107596";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  unsigned char *pcVar4;
  char *pcVar5;
  unsigned char *ar7_00;
  unsigned char *pcVar6;
  char cVar7;
  
  cVar7 = '\0';
  pcVar6 = ar6;
  pcVar4 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (((6 < (short)uVar1) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c340(*(int *)(unsigned)(ar6 + 4) + 0x90,ar5,pcVar6,ar7)), iVar3 < 0x30)) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == -1)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
    pcVar6 = (unsigned char *)(unsigned)(int)(char)uVar1;
    if ((((char)uVar1 == '\x02') &&
        (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)pcVar4 + 0x1d0))))(pcVar4,ar5,2,ar7)), iVar3 == 1)) &&
       ((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_178_035734(*(int *)(unsigned)(ar6 + 8),ar5,pcVar6,ar7)), iVar3 == 0 &&
        (ar4[0x98] == (unsigned char)0x5)))) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
      if ((((char)uVar1 < '\x03') &&
          (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == -1)) &&
         ((ar5 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7)), iVar3 == 1 &&
          ((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7)),
           iVar3 == 0 && (iVar3 = *(int *)(unsigned)(ar4 + 0x878), iVar3 == 0)))))) {
        ar5 = ((void *)0x8c0637c8);
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),((void *)0x8c0637c8),pcVar6,0));
        if ((char)uVar1 == '\0') {
          if (*(int *)(unsigned)(ar4 + 0x40) == 0x14) {
            ar7 = (char *)(unsigned)0x18;
            *(int *)(unsigned)(ar4 + 0x40) = 0x18;
          }
          else {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,iVar3));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,iVar3));
            ar7 = "EVENT_QUIZ";
            pcVar6 = (unsigned char *)(unsigned)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ"));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,pcVar6,ar7));
            *(int *)(unsigned)(ar4 + 4) = 0xd;
            *(int *)(unsigned)(ar4 + 8) = 99;
            *(int *)(unsigned)(ar4 + 0xc) = 0;
            *(int *)(unsigned)(ar4 + 0x40) = 0x21;
            *(int *)(unsigned)(ar4 + 0x840) = 0x21;
            (*(undefined1 *)(unsigned)0x8c1eee30) = 0x21;
            *(int *)(unsigned)(ar4 + 0x844) = 0xb;
            (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
            *(int *)(unsigned)(ar4 + 0x848) = 10;
            (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
            ar4[0x80] = (unsigned char)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x20)),pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,pcVar6,ar7));
            if (cVar7 == '\0') {
              *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xe444960000;
            }
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x30)),pcVar6,ar7));
            ar5 = (unsigned char *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,pcVar6,ar7));
          }
          goto LAB_8c107c10;
        }
      }
      ar7_00 = ((void *)0x8c0e98f0);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,((void *)0x8c0e98f0)));
      ar7 = (char *)(unsigned)ar7_00;
      if (((char)uVar1 == '\x03') &&
         (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7_00)), ar7 = (char *)(unsigned)ar7_00,
         iVar3 == -1)) {
        pcVar6 = ((void *)0x8c035000);
        ar5 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c035000(*(int *)(unsigned)(ar6 + 4),ar5,((void *)0x8c035000),ar7_00));
        ar7 = (char *)(unsigned)ar7_00;
        if ((0 < (int)ar5) &&
           ((((iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7_00))
              , ar7 = (char *)(unsigned)ar7_00, iVar3 == 0 && ((char)ar4[0x87c] < '\x03')) &&
             (ar5 = (unsigned char *)(unsigned)0x878, *(int *)(unsigned)(ar4 + 0x878) == 0)) &&
            (uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),0x878,pcVar6,ar7_00)), ar7 = (char *)(unsigned)ar7_00,
            (char)uVar1 == '\0')))) {
          if (*(int *)(unsigned)(ar4 + 0x40) != 0x14) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar1,pcVar6,ar7_00));
            pcVar5 = "EVENT_QUIZ";
            uVar1 = 0;
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"EVENT_QUIZ"));
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02ce10(*(int *)(unsigned)(ar6 + 4) + 0x90,0,uVar1,pcVar5));
            *(int *)(unsigned)(ar4 + 4) = 0xd;
            *(int *)(unsigned)(ar4 + 8) = 99;
            *(int *)(unsigned)(ar4 + 0xc) = 0;
            ar7 = (char *)(unsigned)0x21;
            *(int *)(unsigned)(ar4 + 0x40) = 0x21;
            *(int *)(unsigned)(ar4 + 0x840) = 0x21;
            (*(undefined1 *)(unsigned)0x8c1eee30) = 0x21;
            pcVar6 = (unsigned char *)(unsigned)0xb;
            *(int *)(unsigned)(ar4 + 0x844) = 0xb;
            (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
            *(int *)(unsigned)(ar4 + 0x848) = 10;
            (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
            ar4[0x80] = (unsigned char)0x0;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x40)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,0xb,0x21));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x40)),pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,pcVar6,ar7));
            if (cVar7 == '\0') {
              *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xc444960000;
            }
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x50)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x50)),pcVar6,ar7));
            ar5 = (unsigned char *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,pcVar6,ar7));
          }
          goto LAB_8c107c10;
        }
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02602c(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,ar7));
      ar5 = (unsigned char *)(unsigned)0xa;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar2 & 0xffff,10,pcVar6,ar7));
      if (iVar3 == 1) {
        ar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x878));
        if (0 < (int)ar5) {
          (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),3,pcVar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),0x3c,pcVar6,ar7));
          if (2 < iVar3) {
            iVar3 = 2;
          }
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7));
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (unsigned char *)(unsigned)0x0;
          ar5 = (unsigned char *)(unsigned)0x3;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL"));
        }
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0e98f0(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7));
        if (((char)uVar1 == '\x03') &&
           (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c035000(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7)), iVar3 == 0)) {
          (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),3,pcVar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x878),0x3c,pcVar6,ar7));
          if (2 < iVar3) {
            iVar3 = 2;
          }
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa5bc(0x8c35468c,iVar3,pcVar6,ar7));
          ar7 = "EVENT_ROCK_PUSH_INTERVAL";
          pcVar6 = (unsigned char *)(unsigned)0x0;
          ar5 = (unsigned char *)(unsigned)0x3;
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0306d4(ar4 + 0x9c,3,0,"EVENT_ROCK_PUSH_INTERVAL"));
        }
      }
    }
  }
LAB_8c107c10:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7));
  if ((short)uVar1 == 3) {
    ar5 = ((void *)0x8c0637c8);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),((void *)0x8c0637c8),pcVar6,ar7));
    if ((char)uVar1 == '\0') {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,((void *)0x8c035724)));
      pcVar6 = (unsigned char *)(unsigned)(uVar2 & 0xff);
      ar7 = (char *)(unsigned)pcVar6;
      if (pcVar6 == (unsigned char *)(unsigned)0x0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c05eec4(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),0,0));
        ar5 = (unsigned char *)(unsigned)(int)(char)uVar1;
        if (((ar5 == (unsigned char *)(unsigned)0x2) &&
            (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02c518(*(int *)(unsigned)(ar6 + 4),2,pcVar6,ar7)), iVar3 == -1)) &&
           (iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_4_062878(*(int *)(unsigned)(ar6 + 0xc),ar5,pcVar6,ar7)), iVar3 == 1)) {
          ar5 = (unsigned char *)(unsigned)0x0;
          ({ unsigned long ri0_ = (unsigned long)(pcVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c063800(*(int *)(unsigned)(ar6 + 0xc),0,pcVar6,ar7); });
          *(int *)(unsigned)(ar4 + 0x850) = -10;
          *(int *)(unsigned)(ar4 + 0x858) = 0;
        }
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02bef8(*(int *)(unsigned)(ar6 + 4),ar5,pcVar6,ar7));
  if ((short)uVar1 != 3) {
    return (int)(short)uVar1;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637d0(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar6 + 0x18) + 0x7cc),ar5,pcVar6,ar7));
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_a0_035724(*(int *)(unsigned)(ar6 + 0x18),ar5,pcVar6,ar7));
  if ((char)uVar1 != '\0') {
    return (int)(char)uVar1;
  }
  if (*(int *)(unsigned)(ar4 + 0x850) != -10) {
    return *(int *)(unsigned)(ar4 + 0x850);
  }
  pcVar4 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),*(int *)(unsigned)(ar6 + 0xc),pcVar6,ar7));
  if ((char)pcVar4 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7));
    pcVar4 = (unsigned char *)(unsigned)0x1;
    if (iVar3 != 1) {
      if (*(int *)(unsigned)(ar4 + 900) == -1) {
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7));
        pcVar5 = "REQUEST_ATTENTION";
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0303b8(ar4 + 0x9c,10,0,"REQUEST_ATTENTION"); });
        *(int *)(unsigned)(ar4 + 0xfc) = 0;
        pcVar6 = ar4 + 0x9c;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f8320(0x8c35468c,*(int *)(unsigned)(ar4 + 0x388),pcVar6,pcVar5));
        *(int *)(unsigned)(ar4 + 900) = iVar3;
        *(int *)(unsigned)(ar4 + 0x14c) = 0;
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,2,pcVar6,pcVar5));
      }
      *(int *)(unsigned)(ar4 + 0x858) = *(int *)(unsigned)(ar4 + 0x858) + 1;
      pcVar4 = ar4;
      goto LAB_8c107eb4;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,ar7));
  if (((char)uVar1 == '\0') &&
     (pcVar4 = (unsigned char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,pcVar6,ar7)), pcVar4 == (unsigned char *)(unsigned)0x1)) {
    pcVar4 = (unsigned char *)(unsigned)0x1;
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c0(*(int *)(unsigned)(ar6 + 0xc),1,pcVar6,ar7));
  }
LAB_8c107eb4:
  uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,((void *)0x8c0637c8)));
  pcVar5 = (char *)(unsigned)(int)(char)uVar1;
  pcVar6 = (unsigned char *)(unsigned)(int)(char)uVar1;
  if ((pcVar6 == (unsigned char *)(unsigned)0x1) && (pcVar4 = ar6, iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c02fcc4(ar4,ar6,1,pcVar5)), iVar3 == 1))
  {
    pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 900));
    if (pcVar4 == (unsigned char *)(unsigned)0xffffffff) {
      (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c030870(ar4 + 0x9c,0,pcVar6,pcVar5));
      pcVar5 = "EVENT_GET_WORMBOX";
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x2a,0,"EVENT_GET_WORMBOX"); });
      *(int *)(unsigned)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x388));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f8320(0x8c35468c,pcVar4,pcVar6,pcVar5));
      *(int *)(unsigned)(ar4 + 900) = iVar3;
      *(int *)(unsigned)(ar4 + 0x14c) = 1;
    }
    if ((*(int *)(unsigned)(ar4 + 0x14c) != 0) &&
       (pcVar4 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 900)), pcVar4 != (unsigned char *)(unsigned)0xffffffff)) {
      *(int *)(unsigned)(ar4 + 4) = 0xd;
      *(int *)(unsigned)(ar4 + 8) = 0x5f;
      *(int *)(unsigned)(ar4 + 0xc) = 0;
      *(int *)(unsigned)(ar4 + 0x840) = 0x14;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
      *(int *)(unsigned)(ar4 + 0x844) = 0xb;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
      *(int *)(unsigned)(ar4 + 0x848) = 10;
      (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x60)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x60)),pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar6,pcVar5));
      if (cVar7 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x70)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,pcVar6,pcVar5));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x70)),pcVar6,pcVar5));
      pcVar4 = (unsigned char *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar6,pcVar5));
      ar4[0x80] = (unsigned char)0x0;
    }
  }
  iVar3 = 0x858;
  if (300 < *(int *)(unsigned)(ar4 + 0x858)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0637c8(*(int *)(unsigned)(ar6 + 0xc),pcVar4,pcVar6,pcVar5));
    iVar3 = (int)(char)uVar1;
    if ((char)uVar1 == '\0') {
      *(int *)(unsigned)(ar4 + 0x850) = 0;
      iVar3 = 0x858;
      *(int *)(unsigned)(ar4 + 0x858) = 0;
    }
  }
  return iVar3;
}

__asm__(".globl _s_EVENT_QUIZ_107596\n.set _s_EVENT_QUIZ_107596, _s_EVENT_QUIZ_107596_def\n");
//@unit 8c1080dc
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
int s_REACTION_TITILLATE_1080e0_def(int ar4,int *ar5,int ar6,undefined *ar7)

{
  ring[rp++ & 255] = "s_REACTION_TITILLATE_1080e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(unsigned)(0x84 + ar4) == '\x01') {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x1a) || (*(int *)(unsigned)(ar4 + 0x40) != 0)) {
      if ((*(int *)(unsigned)(ar4 + 0x40) == 0x1a) &&
         (*(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1a, *(int *)(unsigned)(0x384 + ar4) == -1)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x376;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                  (ar4 + 0x9c,0x28,0,ar7); });
        *(undefined4 *)(unsigned)(0xfc + ar4) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8320))))
                          (0x8c35468c,*(undefined4 *)(unsigned)(0x388 + ar4),iVar2,ar7));
        *(undefined4 *)(unsigned)(0x384 + ar4) = uVar1;
        *(undefined4 *)(unsigned)(0x14c + ar4) = 0;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7));
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1a;
      *(undefined4 *)(unsigned)(0x840 + ar4) = 0x1a;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1a;
      *(undefined4 *)(unsigned)(0x844 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(undefined4 *)(unsigned)(0x848 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x40) == 0x1a) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(0x840 + ar4) = 0;
    *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0;
  }
  if (*(char *)(unsigned)(0x85 + ar4) == '\x01') {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x1b) || (*(int *)(unsigned)(ar4 + 0x40) != 0)) {
      if (*(int *)(unsigned)(ar4 + 0x40) == 0x1b) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7));
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(unsigned)(0x840 + ar4) = 0x1b;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1b;
      *(undefined4 *)(unsigned)(0x844 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(undefined4 *)(unsigned)(0x848 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
    }
  }
  if ((*(char *)(unsigned)(0x87 + ar4) == '\x01') && (*(int *)(unsigned)(ar4 + 0x40) != 0x19)) {
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0) ||
       ((*(int *)(unsigned)(ar4 + 0x40) == 3 || (*(int *)(unsigned)(ar4 + 0x40) == 0x14)))) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x4b;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x19;
      *(undefined4 *)(unsigned)(0x840 + ar4) = 0x19;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x19;
      *(undefined4 *)(unsigned)(0x844 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(undefined4 *)(unsigned)(0x848 + ar4) = 0x22;
      *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7));
      ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x389;
      iVar2 = 4;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0306d4(ar4 + 0x9c,0x27,4,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x40) == 0x19) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,0xd,iVar2,ar7));
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar1,a6,ar7));
    if (((iVar2 == 1) &&
        (uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(undefined4 *)(unsigned)(ar6 + 0x18),uVar1,a6,ar7)), (byte)uVar1 < 2)) &&
       (*(int *)(unsigned)(ar4 + 0x40) != 0x1f)) {
      if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x41;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1f;
        *(undefined4 *)(unsigned)(0x840 + ar4) = 0x1f;
        *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1f;
        *(undefined4 *)(unsigned)(0x844 + ar4) = 0x22;
        *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
        *(undefined4 *)(unsigned)(0x848 + ar4) = 0x22;
        *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      }
      else if (*(int *)(unsigned)(ar4 + 0x40) == 0x1f) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(unsigned)(0x84 + ar4) = 0;
  *(undefined1 *)(unsigned)(0x85 + ar4) = 0;
  iVar2 = 0x87;
  *(undefined1 *)(unsigned)(0x87 + ar4) = 0;
  return iVar2;
}

__asm__(".globl _s_REACTION_TITILLATE_1080e0\n.set _s_REACTION_TITILLATE_1080e0, _s_REACTION_TITILLATE_1080e0_def\n");
//@unit 8c108560
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
int s_GRATIFIC_RID_HOT_108562_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRATIFIC_RID_HOT_108562";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bebc(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,7,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x39a); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,8,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3ab); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,0x1a,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3bd); });
      iVar1 = 0x118;
      *(undefined4 *)(unsigned)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl _s_GRATIFIC_RID_HOT_108562\n.set _s_GRATIFIC_RID_HOT_108562, _s_GRATIFIC_RID_HOT_108562_def\n");
//@unit 8c10862c
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
int FUN_8c10862c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10862c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  char cVar4;
  
  cVar4 = '\0';
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 1;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x18,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 2;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x30,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 3:
      goto switchD_8c108664_caseD_3;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 4;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
    }
  }
  else {
switchD_8c108664_caseD_3:
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 7;
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    if (*(int *)(unsigned)(ar4 + 0x40) == 6) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 9;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 8;
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x40) == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 6)) {
    if ((*(int *)(unsigned)(ar4 + 900) == -1) &&
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_178_035734(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6_00,ar7)), iVar1 == 0 &&
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7)), iVar1 == 0)))) {
      uVar3 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), s_JUNGLE_0309ca(ar4 + 0x9c,0,ar6_00,ar7));
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c025f68(iVar1 * 0x18 + *(int *)(unsigned)(ar6 + 4),uVar3,ar6_00,ar7));
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d1c8(*(int *)(unsigned)(ar6 + 4) + 0xa8,uVar3,ar6_00,ar7));
        if ((char)uVar3 == '\x01') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 1;
        }
        ar6_00 = ar4 + 0x9c;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 900) = uVar3;
      }
    }
    if ((*(int *)(unsigned)(ar4 + 0x40) == 6) && (*(int *)(unsigned)(ar4 + 900) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (((iVar1 == 0) && (iVar1 = 0, *(int *)(unsigned)(ar4 + 0x14c) != 0)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 900), iVar1 != -1)) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
    (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
    (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
    *(undefined4 *)(unsigned)(ar4 + 0x848) = 10;
    (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c05f64044960000;
    }
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    iVar1 = 0x80;
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10862c\n.set _FUN_8c10862c, _FUN_8c10862c_def\n");
//@unit 8c1089e4
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
undefined4 FUN_8c1089e4_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1089e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined4 in_fr1 = 0;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined3 uVar8;
  undefined4 ain0;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 900) != -1) {
    if ((*(int *)(unsigned)(ar4 + 4) == 0) && (*(int *)(unsigned)(ar4 + 0x14c) != 0)) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 10;
      (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x2c)),ar6[5] + 0x10,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x2c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7));
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        in_fr1 = 0x44960000;
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8044960000;
      }
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x3c)),ar6[5] + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x3c)),ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c02f670(*ar6,uVar4,ar6_00,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x4c)),ar6[5] + 0x10,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x5c)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    uVar4 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),in_fr1);
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    }
    if (cVar6 == '\0') {
      iVar3 = (int)F32HI(dVar5);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(unsigned)(ar4 + 0x158) = iVar3;
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar5,0));
    }
    else {
      dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar6 == '\0') {
      iVar3 = (int)F32HI(dVar5);
    }
    else {
      iVar3 = (int)dVar5;
    }
    *(int *)(unsigned)(ar4 + 0x15c) = iVar3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7));
    if ((iVar3 == 3) || (iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_89130_0fa740(0x8c35468c,uVar4,ar6_00,ar7)), iVar3 == 5)) {
      ar5 = 1;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065ca4(ar6[3],1,ar6_00,ar7));
    }
    else {
      ar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065ca4(ar6[3],0,ar6_00,ar7));
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7));
    if (iVar3 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7));
    if (iVar3 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
      uVar4 = 3;
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
      if (*(int *)(unsigned)(ar4 + 0x40) == 10) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7));
      if ((short)uVar2 == 0) {
        uVar4 = 0;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa388(0x8c35468c,0,ar6_00,ar7));
        if (iVar3 == 1) {
          ar6_00 = (undefined4 *)(unsigned)0x1b;
          uVar4 = 0xb;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xb,0x1b,ar7));
        }
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02bef8(ar6[1],uVar4,ar6_00,ar7));
      sVar1 = (short)uVar2;
      if (sVar1 == 3) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_a0_035724(ar6[6],uVar4,ar6_00,ar7));
        uVar8 = CONCAT21(sVar1,(char)uVar2);
        if ((char)uVar2 == '\0') {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c8(ar6[3],uVar4,ar6_00,ar7));
          ain0 = CONCAT31(uVar8,(char)uVar2);
          if (((char)uVar2 == '\x01') && (*(int *)(unsigned)(ar4 + 0x10c) == 1)) {
            ar6_00 = (undefined4 *)(unsigned)0x1b;
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xc,0x1b,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c0(ar6[3],0,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0e9888(ar6[3],1,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c064ba0(ar6[6],1,ar6_00,ar7));
            *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
            uVar4 = 2;
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c061180(ar6[3],2,ar6_00,ar7); });
            *(undefined4 *)(unsigned)(ar4 + 0x850) = 0;
          }
        }
      }
      if ((*(int *)(unsigned)(ar4 + 0x100) < 1) ||
         (iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_b0_065c8c(ar6[3],uVar4,ar6_00,ar7)), *(int *)(unsigned)(ar4 + 0x100) < iVar3)) {
        ar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02af68(*ar6,0,ar6_00,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c065c80(ar6[3],*(undefined4 *)(unsigned)(ar4 + 0x100),ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02af68(*ar6,1,ar6_00,ar7));
        ar6_00 = (undefined4 *)(unsigned)0x1b;
        ar5 = 0xd;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0b9ed4(ar6[6],0xd,0x1b,ar7));
      }
      if (*(int *)(unsigned)(ar4 + 0x10c) == 0xf) {
        *(undefined4 *)(unsigned)(ar4 + 4) = 5;
        *(undefined4 *)(unsigned)(ar4 + 8) = 0x55;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xe;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xe;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0xe;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
      }
      if (*(int *)(unsigned)(ar4 + 0x10c) == 0x10) {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02ce10(ar6[1] + 0x90,0,ar6_00,ar7));
        ar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0637c0(ar6[3],1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
        *(undefined4 *)(unsigned)(ar4 + 8) = 99;
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x20;
        *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x20;
        (*(undefined1 *)(unsigned)0x8c1eee30) = 0x20;
        *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x848) = 0x22;
        (*(undefined1 *)(unsigned)0x8c1eee38) = 0x22;
        *(undefined4 *)(unsigned)(ar4 + 0x10c) = 0;
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa6c8(0x8c35468c,ar5,ar6_00,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 96)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5,ar6_00,ar7));
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
      *(undefined4 *)(unsigned)(ar4 + 900) = 0xffffffff;
      *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    }
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0fa2b8(0x8c35468c,ar5,ar6_00,ar7));
  if ((iVar3 == 0) && ((*(int *)(unsigned)(ar4 + 0x40) == 10 || (*(int *)(unsigned)(ar4 + 0x40) == 0xb)))) {
    (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c1089e4\n.set _FUN_8c1089e4, _FUN_8c1089e4_def\n");
//@unit 8c108f3c
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
int FUN_8c108f3c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c108f3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(unsigned)(ar4 + 0x94) = *(undefined4 *)(unsigned)(ar4 + 0x154);
  if (*(int *)(unsigned)(ar4 + 900) == -1) {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
    iVar3 = *(int *)(unsigned)(ar4 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
        break;
      case 1:
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x2d;
        break;
      case 4:
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x1e;
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar1 * 0x18 + *(int *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
              if ('\0' < (char)uVar2) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,iVar3,ar7));
                if (iVar3 == 0) {
                  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
              if (iVar3 == 0) {
                *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 1) {
                *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 2) {
                *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 4) {
                *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0xf;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
          if (iVar3 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x19;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x14;
    }
  }
  iVar3 = *(int *)(unsigned)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c108f3c\n.set _FUN_8c108f3c, _FUN_8c108f3c_def\n");
//@unit 8c1091cc
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
int s_IDLEACTION_TREMOR_1091d0_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_IDLEACTION_TREMOR_1091d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (((*(int *)(unsigned)(ar4 + 900) == -1) &&
        (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,ar6,ar7)),
        iVar2 < 0x11)) && (10 < iVar2)) {
                    
      switch(iVar2) {
      case 0xb:
        ar7 = "IDLEACTION_PAW";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_PAW"); });
        break;
      case 0xc:
        ar7 = "IDLEACTION_TREMOR";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_TREMOR"); });
        break;
      case 0xd:
        ar7 = "IDLEACTION_BITE";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_BITE"); });
        break;
      case 0xe:
        ar7 = "IDLEACTION_ACTION_JUMP";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_ACTION_JUMP"); });
        break;
      case 0xf:
        if (*(char *)(unsigned)(ar4 + 0x98) < '\x05') {
          ar7 = "IDLEACTION_STAND_SWIM";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_STAND_SWIM"); });
        }
        else {
          ar7 = "EVENT_WANT_LAND";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"EVENT_WANT_LAND"); });
        }
        break;
      case 0x10:
        ar7 = "IDLEACTION_REVERSE_SWIM";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_REVERSE_SWIM"); });
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,iVar1,ar7));
    if (iVar1 == 0x11) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"IDLEACTION_HEAD_DAMAGE"));
    }
  }
  return iVar1;
}

__asm__(".globl _s_IDLEACTION_TREMOR_1091d0\n.set _s_IDLEACTION_TREMOR_1091d0, _s_IDLEACTION_TREMOR_1091d0_def\n");
//@unit 8c1093a4
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
int s_STATUS_SUCKED_1093aa_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_STATUS_SUCKED_1093aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar5_00;
  int *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,ar5,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 4) != 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7));
    if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7)), iVar1 == 0)) {
      ar6_00 = (int *)(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 99;
      ar5_00 = (int *)(unsigned)0xc7;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,199,ar6_00,ar7));
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
    }
    else if (*(int *)(unsigned)(ar4 + 4) != 0xb) {
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xb;
      *(undefined4 *)(unsigned)(ar4 + 8) = 99;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xd;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x4af,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0xd;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0x22;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (int *)(unsigned)0x0;
      ar5_00 = (int *)(unsigned)0x19;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED"));
      if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
        (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(int *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(unsigned)(ar4 + 0x864) == '\x01') && (*(int *)(unsigned)(ar4 + 4) == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7));
    if ((((iVar1 == 1) && (*(char *)(unsigned)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == -1)) && (*(int *)(unsigned)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 1;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      ar5_00 = (int *)(unsigned)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c109798(ar6[3],0,ar6_00,ar7); });
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 6;
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x54)) = CONCAT22((short)uVar2,(short)(*(undefined4 *)(fr0_ - 0x54)));
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7));
  if (((iVar1 == 0) && (*(int *)(unsigned)(ar4 + 0x40) == 0)) && (*(int *)(unsigned)(ar4 + 900) == -1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7));
    if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 4)) {
      ar5_00 = (int *)(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
      if (iVar1 < 1) {
        ar7 = (char *)(unsigned)0xa;
        ar5_00 = ar5;
        ar6_00 = ar6;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f880(ar4,ar5,ar6,10));
        if (iVar1 == 0) goto LAB_8c1096ec;
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c03584c(ar6[3],ar5_00,ar6_00,ar7));
      if (((char)uVar2 == '\x02') && (*(char *)(unsigned)(ar4 + 0x98) < '\b')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
    else {
      ar5_00 = (int *)(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
      if ((0 < iVar1) && (*(char *)(unsigned)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(int *)(unsigned)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 2)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(int *)(unsigned)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(int *)(unsigned)(ar4 + 4), iVar1 != 6)))) {
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 4) = 6;
      *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(unsigned)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_SUCKED_1093aa\n.set _s_STATUS_SUCKED_1093aa, _s_STATUS_SUCKED_1093aa_def\n");
//@unit 8c109798
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
undefined4 FUN_8c109798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109798";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c109798\n.set _FUN_8c109798, _FUN_8c109798_def\n");
//@unit 8c1097a0
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
undefined4 get_field_8_1097a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_8_1097a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 8);
}

__asm__(".globl _get_field_8_1097a0\n.set _get_field_8_1097a0, _get_field_8_1097a0_def\n");
//@unit 8c1097a8
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
int s_STATUS_LIFE_1097b2_def(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "s_STATUS_LIFE_1097b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],ar5,ar6,ar7));
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
    piVar3 = (int *)(unsigned)0x3c;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
    if (1 < iVar1) {
      piVar3 = (int *)(unsigned)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (int *)(unsigned)((int)piVar3 + 1);
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],uVar4,piVar5,ar7));
      piVar3 = (int *)(unsigned)0x3c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      if ((((0 < iVar1) &&
           (uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar6[1],piVar3,piVar5,ar7)), 6 < (short)uVar4)) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02d1a0))))
                             (ar6[1] + 0xa8,piVar3,piVar5,ar7)), 0 < iVar1)) &&
         (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7)),
           iVar1 == 4 && (*(int *)(unsigned)(0x384 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(unsigned)(0x98 + ar4) < '\x04' && (*(int *)(unsigned)(ar4 + 4) == 0)))))))
         ) {
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x22c;
        piVar5 = (int *)(unsigned)0x0;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030568))))
                  (ar4 + 0x9c,0x16,0,ar7); });
        piVar3 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109b10(ar6[1] + 0xa8,0,piVar5,ar7));
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7));
  if ((iVar1 == 3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7)), iVar1 == 4)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2 & 0xffff,0x45,piVar5,ar7));
    if (iVar1 == 0x14) {
      *(undefined1 *)(unsigned)(0x854 + ar4) = 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
    if (((((iVar1 == 1) && (iVar1 = *(int *)(unsigned)(0x384 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(unsigned)(0x98 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1 &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0637d0))))
                            (*(undefined4 *)(unsigned)(0x7cc + ar6[6]),piVar3,piVar5,ar7)), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(unsigned)(0x854 + ar4), iVar1 == 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(unsigned)(0x854 + ar4) = 1;
        iVar1 = ({ unsigned long t0_ = (unsigned long)(
                           (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                          (ar4 + 0x9c,0x16,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x48f); });
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LIFE_1097b2\n.set _s_STATUS_LIFE_1097b2, _s_STATUS_LIFE_1097b2_def\n");
//@unit 8c109b10
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
undefined4 FUN_8c109b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109b10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = (undefined1)ar5;
  return 0x1c;
}

__asm__(".globl _FUN_8c109b10\n.set _FUN_8c109b10, _FUN_8c109b10_def\n");
//@unit 8c109b18
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
undefined4 * FUN_8c109b18_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109b18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar5 + 4),ar5,ar6,ar7));
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(unsigned)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_066620(ar4,ar5,ar6,ar7));
      puVar2 = ((undefined4 *)(unsigned)0x8c109b94);
    }
  }
  else {
    puVar2 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c109b8c);
  }
  return puVar2;
}

__asm__(".globl _FUN_8c109b18\n.set _FUN_8c109b18, _FUN_8c109b18_def\n");
//@unit 8c109b98
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
undefined4 FUN_8c109b98_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109b98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0x44));
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,a5,a6,a7));
  switch(uVar1) {
  case 6:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),a5,a6,a7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x70,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x28,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,a6,a7));
    if (cVar2 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x18));
      *(undefined4 *)(unsigned)(ar4 + 0x70) = (*(undefined4 *)(fr0_ - 0x18));
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x14));
      *(undefined4 *)(unsigned)(ar4 + 0x74) = (*(undefined4 *)(fr0_ - 0x14));
      *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x10));
      *(undefined4 *)(unsigned)(ar4 + 0x78) = (*(undefined4 *)(fr0_ - 0x10));
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x70) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
      *(ulonglong *)(unsigned)(ar4 + 0x74) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
      *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
      *(ulonglong *)(unsigned)(ar4 + 0x78) = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
    }
    break;
  case 0xd:
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),a5,a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,a7));
      if (cVar2 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = (*(undefined4 *)(fr0_ - 0x18));
        *(undefined4 *)(unsigned)(ar4 + 0x70) = (*(undefined4 *)(fr0_ - 0x18));
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = (*(undefined4 *)(fr0_ - 0x14));
        *(undefined4 *)(unsigned)(ar4 + 0x74) = (*(undefined4 *)(fr0_ - 0x14));
        *(undefined4 *)(unsigned)(ar4 + 0x30) = (*(undefined4 *)(fr0_ - 0x10));
        *(undefined4 *)(unsigned)(ar4 + 0x78) = (*(undefined4 *)(fr0_ - 0x10));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x28) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        *(ulonglong *)(unsigned)(ar4 + 0x70) = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        *(ulonglong *)(unsigned)(ar4 + 0x74) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
        *(ulonglong *)(unsigned)(ar4 + 0x30) = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
        *(ulonglong *)(unsigned)(ar4 + 0x78) = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,a6,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c109b98\n.set _FUN_8c109b98, _FUN_8c109b98_def\n");
//@unit 8c109d98
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
uint Class_12c3c4_m6_109d98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m6_109d98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa2d8(0x8c35468c,ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl _Class_12c3c4_m6_109d98\n.set _Class_12c3c4_m6_109d98, _Class_12c3c4_m6_109d98_def\n");
//@unit 8c109dc4
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
undefined4 FUN_8c109dc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109dc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  if (*(char *)(unsigned)(0x98 + ar4) == '\x03') {
    ar5_00 = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109e34(*(undefined4 *)(unsigned)(ar5 + 0x10),1,ar6,ar7));
    if ((((char)uVar1 == '\x05') && (*(int *)(unsigned)(0x874 + ar4) == 0)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1d0(*(int *)(unsigned)(ar5 + 4) + 0xa8,ar5_00,ar6,ar7)),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c109dc4\n.set _FUN_8c109dc4, _FUN_8c109dc4_def\n");
//@unit 8c109e34
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
int FUN_8c109e34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109e34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + (char)ar5 + 0xc);
}

__asm__(".globl _FUN_8c109e34\n.set _FUN_8c109e34, _FUN_8c109e34_def\n");
//@unit 8c109e40
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
int FUN_8c109e40_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109e40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb7c(*(int *)(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb74(*(int *)(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7));
    uVar2 = 1;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c035718(*(undefined4 *)(unsigned)(ar5 + 0x10),1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c340(*(int *)(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
    if (0x5e < iVar1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_02d1e0(*(int *)(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cbbc(*(int *)(unsigned)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7));
    }
    iVar1 = 0x874;
    *(undefined4 *)(unsigned)(ar4 + 0x874) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109e40\n.set _FUN_8c109e40, _FUN_8c109e40_def\n");
//@unit 8c109f08
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
int FUN_8c109f08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109f08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(undefined4 *)(fr0_ - 0x20)) = ar5;
  (*(undefined4 *)(fr0_ - 0x14)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109dc4(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109e40(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
    iVar1 = 1;
    *(undefined4 *)(unsigned)0x8c27d430 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109f08\n.set _FUN_8c109f08, _FUN_8c109f08_def\n");
//@unit 8c109f58
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
undefined4 get_field_150_109f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_150_109f58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x150 + ar4);
}

__asm__(".globl _get_field_150_109f58\n.set _get_field_150_109f58, _get_field_150_109f58_def\n");
//@unit 8c109f64
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
int FUN_8c109f64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c109f64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x150;
  *(undefined4 *)(unsigned)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c109f64\n.set _FUN_8c109f64, _FUN_8c109f64_def\n");
//@unit 8c109f70
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
int Class_12c3c4_m7_109f70_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m7_109f70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(char *)(unsigned)(0x854 + ar4) = (char)*(undefined4 *)(unsigned)(ar5 + 4);
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m7_109f70\n.set _Class_12c3c4_m7_109f70, _Class_12c3c4_m7_109f70_def\n");
//@unit 8c109fc0
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
undefined4 Class_12c3c4_m8_109fc0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m8_109fc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(int *)(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x854 + ar4);
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(unsigned)(0x99 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m8_109fc0\n.set _Class_12c3c4_m8_109fc0, _Class_12c3c4_m8_109fc0_def\n");
//@unit 8c10a00c
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
int Class_12c3c4_m9_10a00c_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m9_10a00c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar6 == 2) {
    *(char *)(unsigned)(0x865 + ar4) = (char)*(undefined4 *)(unsigned)(ar5 + 4);
  }
  else {
    *(char *)(unsigned)(0x854 + ar4) = (char)*(undefined4 *)(unsigned)(ar5 + 4);
  }
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m9_10a00c\n.set _Class_12c3c4_m9_10a00c, _Class_12c3c4_m9_10a00c_def\n");
//@unit 8c10a074
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
undefined4 Class_12c3c4_m10_10a074_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m10_10a074";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar6 == 2) {
    *(int *)(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x865 + ar4);
  }
  else {
    *(int *)(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x854 + ar4);
  }
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(unsigned)(0x99 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_12c3c4_m10_10a074\n.set _Class_12c3c4_m10_10a074, _Class_12c3c4_m10_10a074_def\n");
//@unit 8c10a0dc
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
int Class_12c3c4_m5_10a0dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m5_10a0dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(unsigned)(0x384 + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7));
    ar5_00 = 3;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
    *(undefined1 *)(unsigned)(0x80 + ar4) = 1;
    *(undefined4 *)(unsigned)(0x384 + ar4) = 0xffffffff;
    *(undefined4 *)(unsigned)(0xfc + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7));
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(unsigned)(ar4 + 0x40), iVar1 == 10)) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x14;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12c3c4_m5_10a0dc\n.set _Class_12c3c4_m5_10a0dc, _Class_12c3c4_m5_10a0dc_def\n");
//@unit 8c10a16c
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
undefined * Class_12c3c4_m4_10a16c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c3c4_m4_10a16c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)(unsigned)0x7;
  if ((iVar2 < 8) && (-1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c10a190))[iVar2];
                    
    switch(iVar2) {
    case 0:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,10,0x1b,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x10,0x1b,ar7));
      break;
    case 6:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x12,0x1b,ar7));
      break;
    case 7:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x13,0x1b,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12c3c4_m4_10a16c\n.set _Class_12c3c4_m4_10a16c, _Class_12c3c4_m4_10a16c_def\n");
//@unit 8c10a1fc
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
undefined4 get_field_100_10a1fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_100_10a1fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x100 + ar4);
}

__asm__(".globl _get_field_100_10a1fc\n.set _get_field_100_10a1fc, _get_field_100_10a1fc_def\n");
//@unit 8c10a208
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
undefined4 get_field_870_10a208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_870_10a208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x870 + ar4);
}

__asm__(".globl _get_field_870_10a208\n.set _get_field_870_10a208, _get_field_870_10a208_def\n");
//@unit 8c10a214
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
undefined4 FUN_8c10a214_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a214";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126b20),ar5,ar6,ar7));
  uVar3 = 0x8c4708e0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4708e0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126b30),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4708ec;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4708ec,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126b40),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4708f8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4708f8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126b50),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c470904,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126b60) = CONCAT44((*(undefined1 *)(unsigned)0x8c126b64),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126b60) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c10a214\n.set _FUN_8c10a214, _FUN_8c10a214_def\n");
//@unit 8c10a2cc
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
undefined4 FUN_8c10a2cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a2cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10a2cc\n.set _FUN_8c10a2cc, _FUN_8c10a2cc_def\n");
//@unit 8c10a308
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
undefined4 FUN_8c10a308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int ar6_00;
  char cVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 2;
  *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
  if (*(float *)(unsigned)(ar4 + 0xa0) <= 0.0) {
    (vsp = ((unsigned long)(fr0_ - 0)), memset(*(undefined4 *)(unsigned)(ar4 + 0x58),0,*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x58),*(undefined4 *)(unsigned)(ar4 + 0xa8),*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
    ar6_00 = *(int *)(unsigned)(ar4 + 0x7c) << 2;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),*(undefined4 *)(unsigned)(ar4 + 0xa8),ar6_00,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b93c(*(undefined4 *)(unsigned)(ar4 + 0xb0),*(undefined4 *)(unsigned)(ar4 + 0x54),ar6_00,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 1;
  }
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memset(*(undefined4 *)(unsigned)(ar4 + 0x5c),0,*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = 0x47c35000;
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x60) = 0x3f00000047c35000;
    *(undefined8 *)(unsigned)(ar4 + 100) = *(undefined8 *)(unsigned)(ar4 + 0xa0);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x3f000000;
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = 0x2fd62fe63f000000;
    *(undefined8 *)(unsigned)(ar4 + 0x70) = 0x8c013ef400000000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a308\n.set _FUN_8c10a308, _FUN_8c10a308_def\n");
//@unit 8c10a312
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
undefined4 FUN_8c10a312_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a312";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  int ar6_00;
  undefined4 unaff_r13 = 0;
  int unaff_r14 = 0;
  undefined4 in_fr3 = 0;
  undefined8 uVar2;
  byte in_FPSCR_DN = 0;
  byte bVar3;
  byte in_FPSCR_PR = 0;
  byte bVar4;
  byte in_FPSCR_SZ = 0;
  byte bVar5;
  char cVar6;
  
  *(undefined4 *)(unsigned)(unaff_r14 + 0x30) = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
  *(undefined4 *)(unsigned)(unaff_r14 + 0x34) = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
  *(undefined4 *)(unsigned)(unaff_r14 + 0x38) = unaff_r13;
  *(undefined4 *)(unsigned)(in_r0 + unaff_r14) = 2;
  *(char *)(unsigned)(unaff_r14 + 0x50) = (char)unaff_r13;
  if (in_FPSCR_SZ == 0) {
    in_fr3 = (*(undefined4 *)(unsigned)(unsigned)0x8c10a3f8);
  }
  if (in_FPSCR_SZ == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(unsigned)(0xa0 + unaff_r14),in_fr3);
  }
  else {
    uVar2 = *(undefined8 *)(unsigned)(0xa0 + unaff_r14);
  }
  if (in_FPSCR_PR != 0 || F32HI(uVar2) <= (float)uVar2) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
              (*(undefined4 *)(unsigned)(unaff_r14 + 0x58),0,*(int *)(unsigned)(unaff_r14 + 0x7c) << 2,ar7));
    *(char *)(unsigned)(unaff_r14 + 0x51) = (char)unaff_r13;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
              (*(undefined4 *)(unsigned)(unaff_r14 + 0x58),*(undefined4 *)(unsigned)(unaff_r14 + 0xa8),
               *(int *)(unsigned)(unaff_r14 + 0x7c) << 2,ar7));
    ar6_00 = *(int *)(unsigned)(unaff_r14 + 0x7c) << 2;
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                    (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
              (*(undefined4 *)(unsigned)(unaff_r14 + 0x54),*(undefined4 *)(unsigned)(unaff_r14 + 0xa8),ar6_00,ar7));
    in_FPSCR_DN = 0;
    in_FPSCR_PR = 0;
    in_FPSCR_SZ = (byte)((((uint)bVar3 << 0x12 | (uint)bVar4 << 0x13 | (uint)bVar5 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c11b93c))))
                      (*(undefined4 *)(unsigned)(unaff_r14 + 0xb0),*(undefined4 *)(unsigned)(unaff_r14 + 0x54),ar6_00,
                       ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unsigned)(unaff_r14 + 0x51) = 1;
  }
  cVar6 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & 0xffe7ffff & 0x100000) >> 0x14);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
            (*(undefined4 *)(unsigned)(unaff_r14 + 0x5c),0,*(int *)(unsigned)(unaff_r14 + 0x7c) << 2,ar7));
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = (undefined4)(*(undefined1 *)(unsigned)0x8c10a408);
    *(undefined4 *)(unsigned)(unaff_r14 + 100) = *(undefined4 *)(unsigned)(unaff_r14 + 0xa0);
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x60) = CONCAT44((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10a408)+4)),(undefined4)(*(undefined1 *)(unsigned)0x8c10a408));
    *(undefined8 *)(unsigned)(unaff_r14 + 100) = *(undefined8 *)(unsigned)(unaff_r14 + 0xa0);
  }
  *(undefined4 *)(unsigned)(unaff_r14 + 0x68) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x6c) = (*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10a408)+4));
    *(undefined4 *)(unsigned)(unaff_r14 + 0x70) = (*(undefined4 *)(unsigned)(unsigned)0x8c10a3f8);
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x6c) = CONCAT44(0,(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10a408)+4)));
    *(ulonglong *)(unsigned)(unaff_r14 + 0x70) = CONCAT44(((void *)(unsigned)0x8c013ef4),(*(undefined4 *)(unsigned)(unsigned)0x8c10a3f8));
  }
  *(undefined4 *)(unsigned)(unaff_r14 + 0x74) = unaff_r13;
  *(undefined4 *)(unsigned)(unaff_r14 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a312\n.set _FUN_8c10a312, _FUN_8c10a312_def\n");
//@unit 8c10a410
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
undefined4 FUN_8c10a410_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a6;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 extraout_fr3 = 0;
  undefined4 uVar4;
  undefined8 in_xd2 = 0;
  char cVar5;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x4c);
  *(undefined1 *)(unsigned)(ar5 + 1) = *(undefined1 *)(unsigned)(ar4 + 0x50);
  *(undefined1 *)(unsigned)(ar5 + 2) = *(undefined1 *)(unsigned)(ar4 + 0x51);
  puVar2 = ar5 + 3;
  a6 = iVar1 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2,*(undefined4 *)(unsigned)(ar4 + 0x54),a6,ar7));
  puVar2 = puVar2 + iVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2,*(undefined4 *)(unsigned)(ar4 + 0x58),a6,ar7));
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2 + iVar1,*(undefined4 *)(unsigned)(ar4 + 0x5c),a6,ar7));
  if (cVar5 == '\0') {
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x60);
  }
  else {
    in_xd2 = *(undefined8 *)(unsigned)(ar4 + 0x60);
    uVar4 = extraout_fr3;
  }
  puVar3 = (undefined8 *)(unsigned)(puVar2 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)puVar3 = uVar4;
    *(undefined4 *)(unsigned)((int)puVar3 + 4) = *(undefined4 *)(unsigned)(ar4 + 100);
  }
  else {
    *puVar3 = in_xd2;
    *(undefined8 *)(unsigned)((int)puVar3 + 4) = *(undefined8 *)(unsigned)(ar4 + 100);
  }
  *(undefined4 *)(unsigned)(puVar3 + 1) = *(undefined4 *)(unsigned)(ar4 + 0x68);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)((int)puVar3 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    *(undefined4 *)(unsigned)(puVar3 + 2) = *(undefined4 *)(unsigned)(ar4 + 0x70);
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = *(undefined8 *)(unsigned)(ar4 + 0x6c);
    puVar3[2] = *(undefined8 *)(unsigned)(ar4 + 0x70);
  }
  *(undefined4 *)(unsigned)((int)puVar3 + 0x14) = *(undefined4 *)(unsigned)(ar4 + 0x74);
  *(undefined4 *)(unsigned)(puVar3 + 3) = *(undefined4 *)(unsigned)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _FUN_8c10a410\n.set _FUN_8c10a410, _FUN_8c10a410_def\n");
//@unit 8c10a4bc
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
undefined4 FUN_8c10a4bc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a4bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a6;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = *ar5;
  *(undefined1 *)(unsigned)(ar4 + 0x50) = *(undefined1 *)(unsigned)(ar5 + 1);
  puVar4 = ar5 + 3;
  *(undefined1 *)(unsigned)(ar4 + 0x51) = *(undefined1 *)(unsigned)(ar5 + 2);
  a6 = iVar1 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),puVar4,a6,ar7));
  puVar4 = puVar4 + iVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x58),puVar4,a6,ar7));
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x5c),puVar4 + iVar1,a6,ar7));
  puVar2 = (undefined8 *)(unsigned)(puVar4 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)puVar2;
    puVar3 = puVar2 + 1;
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)((int)puVar2 + 4);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x60) = *puVar2;
    puVar3 = puVar2 + 2;
    *(undefined8 *)(unsigned)(ar4 + 100) = puVar2[1];
  }
  *(undefined4 *)(unsigned)(ar4 + 0x68) = *(undefined4 *)(unsigned)puVar3;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)((int)puVar3 + 4);
    puVar4 = (undefined4 *)(unsigned)((int)puVar3 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x70) = *(undefined4 *)(unsigned)(puVar3 + 1);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = *(undefined8 *)(unsigned)((int)puVar3 + 4);
    puVar4 = (undefined4 *)(unsigned)((int)puVar3 + 0x14);
    *(undefined8 *)(unsigned)(ar4 + 0x70) = *(undefined8 *)(unsigned)((int)puVar3 + 0xc);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x74) = *puVar4;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = puVar4[1];
  return 0x78;
}

__asm__(".globl _FUN_8c10a4bc\n.set _FUN_8c10a4bc, _FUN_8c10a4bc_def\n");
//@unit 8c10a564
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
undefined4 FUN_8c10a564_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a564";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 in_dr12 = 0;
  undefined4 uVar13;
  undefined8 in_dr14 = 0;
  double dVar14;
  undefined8 in_xd2 = 0;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte bVar18;
  
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  ppfVar8 = ((float * *)(fr0_ - 0x44));
  a5_00 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4));
  iVar4 = *(int *)(unsigned)(ar4 + 0x7c);
  a6 = iVar4 * 4;
  if (*(float *)(unsigned)(ar4 + 0x80) < *(float *)(unsigned)(ar4 + 0x70)) {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    ar6 = a6;
    (vsp = ((unsigned long)(fr0_ - 68)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),*(undefined4 *)(unsigned)(ar4 + 0x58),a6,ar7));
    ar5 = *(undefined4 *)(unsigned)(ar4 + 0x54);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11b93c(*(undefined4 *)(unsigned)(ar4 + 0xb0),ar5,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 0;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 1;
  }
  uVar13 = (undefined4)in_dr14;
  if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01')) {
    pdVar2 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    a4_00 = (float *)(unsigned)((int)pdVar2 + 4);
    iVar5 = a6;
    if (*(char *)(unsigned)(ar4 + 0x51) == '\0') {
      cVar17 = '\0';
      (vsp = ((unsigned long)(fr0_ - 68)), memmove(a4_00,a5_00,a6,ar7));
      a4 = a4_00;
      a5 = a5_00;
      ppfVar8 = ((float * *)(fr0_ - 0x44));
    }
    else {
      ((float * *)(fr0_ - 0x44))[0] = a4_00 + iVar4;
      a5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      cVar17 = '\0';
      a4 = a4_00;
      (vsp = ((unsigned long)(fr0_ - 68)), memmove(a4_00,a5,a6,ar7));
      (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)(ar4 + 0x54);
      if (cVar17 == '\0') {
        uVar12 = 0;
        dVar14 = CONCAT44D(0x40000000,uVar13);
      }
      else {
        uVar12 = 0x3ff00000;
        dVar14 = -1.5697950159475534e-250;
      }
      if (cVar17 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar12);
      }
      ppfVar6 = ((float * *)(fr0_ - 0x44));
      if (a4_00 < ((float * *)(fr0_ - 0x44))[0]) {
        do {
          puVar3 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)((int)ppfVar6 + 0xc));
          *(unsigned *)(unsigned)((int)ppfVar6 + 0xc) = (undefined4 *)(unsigned)((int)puVar3 + 4);
          if (cVar17 == '\0') {
            uVar10 = CONCAT44(*a4_00,*(undefined4 *)(unsigned)puVar3);
          }
          else {
            in_xd2 = *puVar3;
            uVar10 = *(undefined8 *)(unsigned)a4_00;
          }
          fVar11 = F32HI(uVar10) - (float)uVar10;
          *a4_00 = fVar11;
          if (*a5_00 <= fVar11) {
            fVar11 = *a4_00;
            *(float *)(unsigned)((int)ppfVar6 + 8) = fVar11;
            *(double *)(unsigned)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a5_00 - *(float *)(unsigned)((int)ppfVar6 + 8)) * dVar14)
                            >> 0x20);
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013cd8(a4,a5,iVar5,ar7));
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013dfc(a4,a5,iVar5,ar7));
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          else {
            fVar11 = *a5_00;
            *(float *)(unsigned)((int)ppfVar6 + 4) = fVar11;
            *(double *)(unsigned)((int)ppfVar6 + -8) = (double)fVar11;
            fVar11 = (float)((ulonglong)((double)(*a4_00 - *(float *)(unsigned)((int)ppfVar6 + 4)) * dVar14)
                            >> 0x20);
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013cd8(a4,a5,iVar5,ar7));
            bVar15 = 0;
            bVar16 = 0;
            bVar18 = 0;
            (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c013dfc(a4,a5,iVar5,ar7));
            cVar17 = (char)((((uint)bVar15 << 0x12 | (uint)bVar16 << 0x13 | (uint)bVar18 << 0x14) &
                            0x100000) >> 0x14);
          }
          pdVar7 = (double *)(unsigned)((int)ppfVar6 + -8);
          if (cVar17 == '\0') {
            dVar9 = 0.5;
          }
          else {
            dVar9 = -7.963806069003694e+87;
          }
          ppfVar8 = ppfVar6;
          if (cVar17 != '\0') {
            ppfVar8 = (float **)(unsigned)((int)ppfVar6 + 8);
            pdVar7 = (double *)(unsigned)ppfVar6;
          }
          in_dr0 = *pdVar7 + (double)fVar11 * dVar9;
          if (cVar17 == '\0') {
            *a4_00 = (float)in_dr0;
          }
          else {
            *(undefined8 *)(unsigned)a4_00 = in_xd2;
          }
          a4_00 = a4_00 + 1;
          a5_00 = a5_00 + 1;
          ppfVar6 = ppfVar8;
        } while (a4_00 < *ppfVar8);
      }
    }
    if (cVar17 == '\0') {
      *(undefined4 *)(unsigned)((int)ppfVar8 + 0x10) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x30) + a6);
    }
    else {
      *(undefined8 *)(unsigned)((int)ppfVar8 + 0x10) = *(undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x30) + a6);
    }
    cVar17 = '\0';
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c10a2cc(a4,a5,iVar5,ar7));
    if (cVar17 == '\0') {
      *(int *)(unsigned)pdVar2 = (int)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      *pdVar2 = in_dr0;
    }
    iVar4 = *(int *)(unsigned)(ar4 + 0x30) + *(int *)(unsigned)(ar4 + 0x40) * 4;
    *(int *)(unsigned)(ar4 + 0x30) = iVar4;
    if (iVar4 == *(int *)(unsigned)(ar4 + 0x2c)) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + 0x28);
    }
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + -1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10a564\n.set _FUN_8c10a564, _FUN_8c10a564_def\n");
//@unit 8c10a80c
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
undefined4 FUN_8c10a80c_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c10a80c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
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
  float in_fr15 = 0;
  undefined8 in_xd2 = 0;
  undefined8 uVar12;
  char cVar13;
  
  fVar7 = *(float *)(unsigned)(ar4 + 0x88);
  if (fVar7 <= *(float *)(unsigned)(ar4 + 100)) {
    *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
    *(undefined1 *)(unsigned)(ar4 + 0x50) = 1;
  }
  if (*(char *)(unsigned)(ar4 + 0x50) != '\0') {
    if (*(int *)(unsigned)(ar4 + 0x38) == 0) {
      *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
    }
    if (*(char *)(unsigned)(ar4 + 0x50) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5,ar6,ar7));
      return 1;
    }
  }
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    cVar13 = '\0';
    uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c112074(*(undefined4 *)(unsigned)(ar4 + 0xc),5,(int)&(*(undefined8 *)(fr0_ - 0x34)) + 4,ar7));
    ar5_00 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34))+4));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
    iVar6 = *(int *)(unsigned)(ar4 + 0x7c);
    if (cVar13 == '\0') {
      in_fr15 = *((float *)(unsigned long)*(unsigned *)(fr0_ - 0x28));
      (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x34))+4)),*(undefined4 *)(unsigned)((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x20)));
      fVar7 = *((float *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *(float *)(unsigned)(ar4 + 0x60) = fVar7;
    }
    else {
      (*(undefined8 *)(fr0_ - 0x34)) = *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ - 0x20));
      in_xd2 = *(undefined8 *)(unsigned)((float *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *(undefined8 *)(unsigned)(ar4 + 0x60) = in_xd2;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x5c),(*(undefined4 *)(fr0_ - 0x2c)),iVar6,ar7));
    pfVar5 = (float *)(unsigned)(iVar6 * 4);
    cVar13 = '\0';
    a6 = pfVar5;
    (vsp = ((unsigned long)(fr0_ - 52)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x34),ar5_00,pfVar5,ar7));
    uVar12 = (*(undefined8 *)(fr0_ - 0x34));
    if (cVar13 == '\0') {
      uVar12 = in_xd2;
      fVar7 = (float)(*(undefined8 *)(fr0_ - 0x34));
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + (int)pfVar5) = fVar7;
    }
    else {
      *(undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + (int)pfVar5) = uVar12;
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x34) + *(int *)(unsigned)(ar4 + 0x40) * 4;
    *(int *)(unsigned)(ar4 + 0x34) = iVar3;
    if (iVar3 == *(int *)(unsigned)(ar4 + 0x2c)) {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x28);
    }
    *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + 1;
    *(int *)(unsigned)(ar4 + 0x74) = *(int *)(unsigned)(ar4 + 0x74) + 1;
    if (cVar13 == '\0') {
      fVar7 = 0.0009999999;
    }
    if (fVar7 < in_fr15) {
      ar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c));
      pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x58));
      a6 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + *(int *)(unsigned)(ar4 + 0x48) * -4);
      ar5_00 = (float *)(unsigned)((int)pfVar5 + (int)pfVar4);
      if (a6 < ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28))) {
        a6 = a6 + *(int *)(unsigned)(ar4 + 0x44);
      }
      *(float *)(unsigned)(ar4 + 100) = *(float *)(unsigned)(ar4 + 100) + in_fr15;
      if (*(float *)(unsigned)(ar4 + 0x88) <= *(float *)(unsigned)(ar4 + 100)) {
        *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0x88);
      }
      fVar7 = in_fr15 / *(float *)(unsigned)(ar4 + 100);
      *(float *)(unsigned)(ar4 + 0x70) = *(float *)(unsigned)(ar4 + 0x70) + fVar7;
      fVar11 = fVar7 * *(float *)(unsigned)(ar4 + 0x90);
      if (1.0 < fVar11) {
        fVar11 = 1.0;
      }
      fVar7 = fVar7 / *(float *)(unsigned)(ar4 + 0x90);
      if (1.0 < fVar7) {
        fVar7 = 1.0;
      }
      fVar8 = 0.0;
      for (; pfVar4 < ar5_00; pfVar4 = pfVar4 + 1) {
        fVar10 = *a6;
        if (fVar10 < *ar7 + *(float *)(unsigned)(ar4 + 0x94)) {
          fVar10 = *ar7 + *(float *)(unsigned)(ar4 + 0x94);
        }
        fVar9 = fVar10 - *pfVar4;
        if (fVar9 < *(float *)(unsigned)(ar4 + 0x98)) {
          fVar9 = *(float *)(unsigned)(ar4 + 0x98);
        }
        fVar1 = fVar7;
        if (0.0 < fVar9) {
          fVar1 = fVar11;
        }
        fVar9 = *pfVar4 + fVar9 * fVar1;
        fVar10 = fVar10 - fVar9;
        *pfVar4 = fVar9;
        if (fVar10 <= 0.0) {
          fVar10 = fVar10 / *(float *)(unsigned)(ar4 + 0x90);
        }
        else {
          fVar10 = fVar10 * *(float *)(unsigned)(ar4 + 0x90);
        }
        a6 = a6 + 1;
        fVar8 = fVar8 + fVar10;
        ar7 = ar7 + 1;
      }
      fVar7 = *(float *)(unsigned)(ar4 + 0x6c) + in_fr15;
      *(float *)(unsigned)(ar4 + 0x6c) = fVar7;
      if (200.0 < fVar7) {
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x43480000;
      }
      fVar11 = in_fr15 / *(float *)(unsigned)(ar4 + 0x6c);
      *(float *)(unsigned)(ar4 + 0x70) = *(float *)(unsigned)(ar4 + 0x70) + fVar11;
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
      for (pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x58)); pfVar5 < ar5_00; pfVar5 = pfVar5 + 1) {
        *pfVar5 = *pfVar5 + fVar8;
      }
    }
    if ((in_fr15 == 0.0) && (*(uint *)(unsigned)(ar4 + 0x9c) < *(uint *)(unsigned)(ar4 + 0x74))) {
      *(int *)(unsigned)(ar4 + 0x78) = *(int *)(unsigned)(ar4 + 0x78) + 1;
      iVar6 = *(int *)(unsigned)(ar4 + 0x68) + 1;
      *(int *)(unsigned)(ar4 + 0x68) = iVar6;
      if (0x32 < iVar6) {
        *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x32;
      }
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
    }
    iVar6 = *(int *)(unsigned)(ar4 + 0x4c);
    if (iVar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
    }
    else if (iVar6 == 1) {
      if (*(int *)(unsigned)(ar4 + 0x84) < *(int *)(unsigned)(ar4 + 0x78)) {
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 2;
        *(undefined1 *)(unsigned)(ar4 + 0x50) = 1;
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
      else if (*(int *)(unsigned)(ar4 + 0x38) == *(int *)(unsigned)(ar4 + 0x3c)) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
    }
    else if (iVar6 == 2) {
      if (in_fr15 <= 0.0009999999) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c10a564(ar4,ar5_00,a6,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x4c) = 1;
      }
    }
  }
  if ((*(char *)(unsigned)(ar4 + 0x50) == '\0') &&
     (*(int *)(unsigned)(*(int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x40) + (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4) ==
      *(int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x3c))) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c10a80c\n.set _FUN_8c10a80c, _FUN_8c10a80c_def\n");
//@unit 8c10abf4
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
undefined4 FUN_8c10abf4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10abf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5_00 + 0x18))))(ar5_00,ar4[10],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5_00 + 0x18))))(ar5_00,ar4[0x16],vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b884(ar4[0x2c],ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10abf4\n.set _FUN_8c10abf4, _FUN_8c10abf4_def\n");
//@unit 8c10abfa
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
undefined4 FUN_8c10abfa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10abfa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *unaff_r13 = 0;
  int a4;
  
  a4 = *unaff_r13;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r13[10],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r13[0x16],ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b884(*(undefined4 *)(unsigned)((int)0xb0 + (int)unaff_r13),a4,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c10abfa\n.set _FUN_8c10abfa, _FUN_8c10abfa_def\n");
//@unit 8c10ac3c
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
undefined4 FUN_8c10ac3c_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ac3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  int iVar2;
  int unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x50) = 1;
    return 1;
  }
  if (in_r0 == 3) {
    if (ar6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a410(unaff_r14,*ar7 + ar6,ar6,ar7));
    }
    iVar2 = *ar7 + (*(int *)(unsigned)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  else {
    if (in_r0 != 4) {
      if (in_r0 == 0xf8) {
        *ar7 = *(int *)(unsigned)(unaff_r14 + 0x38);
        return 1;
      }
      if (in_r0 == 0xff) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10abf4(unaff_r14,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
        return 1;
      }
      return 0;
    }
    if (ar6 == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a308(unaff_r14,ar5,0,ar7));
      if ((uVar1 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a4bc(unaff_r14,*ar7 + ar6,ar6,ar7));
    iVar2 = *ar7 + (*(int *)(unsigned)(unaff_r14 + 0x7c) * 3 + 10) * 4;
  }
  *ar7 = iVar2;
  return 1;
}

__asm__(".globl _FUN_8c10ac3c\n.set _FUN_8c10ac3c, _FUN_8c10ac3c_def\n");
//@unit 8c10ad00
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
uint FUN_8c10ad00_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ad00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  double in_dr0 = 0;
  double in_dr2 = 0;
  undefined8 uVar9;
  double dVar10;
  undefined8 in_xd2 = 0;
  short sVar11;
  byte in_FPSCR_CAUSE = 0;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte in_FPSCR_DN = 0;
  byte bVar15;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  puVar2 = ((void *)(unsigned)0x8c120550);
  a4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,9,ar6,ar7));
  uVar8 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar8 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar8 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar8 = (uint)F32HI(in_dr0);
  }
  else {
    uVar8 = (uint)in_dr0;
  }
  uVar8 = uVar8 & 0xffff;
  ar4[0x1f] = uVar8;
  iVar5 = uVar8 + 1;
  *(short *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = (short)iVar5 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,1,ar6,ar7));
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar13 = 0;
  bVar15 = 0;
  bVar14 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar12 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar14 == 0) {
    uVar6 = (uint)F32HI(in_dr0);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  *(uint *)(unsigned)((int)0x9c + (int)ar4) = uVar6 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,2,ar6,ar7));
  uVar6 = ((uint)bVar13 << 0xc | (uint)bVar15 << 0x12 | (uint)bVar14 << 0x13 | (uint)bVar12 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    uVar6 = (uint)F32HI(in_dr0);
  }
  else {
    uVar6 = (uint)in_dr0;
  }
  ar4[0xf] = uVar6 & 0xffff;
  ar4[0x10] = iVar5;
  ar4[0x11] = iVar5 * ar4[0xf];
  ar4[0x12] = ar4[0x10] * (ar4[0x27] + 1);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[0x11],4,ar7));
  ar4[10] = iVar5;
  ar4[0xb] = ar4[0x11] * 4 + ar4[10];
  uVar7 = 4;
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,uVar8 * 3,4,ar7));
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
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,3,uVar7,ar7));
  if (bVar14 == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  else {
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar14 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar13 == 0) {
    *(int *)(unsigned)((int)0x94 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)0x94 + (int)ar4) = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,4,uVar7,ar7));
  if (bVar13 == 0) {
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  else {
    in_xd2 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeac));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar14 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar14 = 0;
  bVar12 = 0;
  bVar13 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar15 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar13 == 0) {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * in_dr2;
  }
  if (bVar15 == 0) {
    *(int *)(unsigned)((int)0x98 + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0),SUB84(in_dr2,0));
  }
  else {
    *(double *)(unsigned)((int)0x98 + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((*(undefined1 *)(unsigned)0x8c10aeb4),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeb0));
  }
  if (bVar15 == 0) {
    *(int *)(unsigned)((int)0x90 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)((int)0x90 + (int)ar4) = uVar9;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,5,uVar7,ar7));
  iVar5 = (int)0x88;
  uVar6 = ((uint)bVar14 << 0xc | (uint)bVar12 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar15 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)F32HI(in_dr0);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  if (bVar14 == 0) {
    *(float *)(unsigned)(iVar5 + (int)ar4) = (float)(int)sVar11;
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c10aeb8),*(undefined4 *)(unsigned)(iVar5 + (int)ar4));
  }
  else {
    *(undefined8 *)(unsigned)(iVar5 + (int)ar4) = in_xd2;
    dVar10 = CONCAT44D((*(undefined1 *)(unsigned)0x8c10aebc),(*(undefined4 *)(unsigned)(unsigned)0x8c10aeb8));
  }
  if (bVar15 == 0) {
    dVar10 = CONCAT44D(F32HI(dVar10) / F32LO(dVar10),SUB84(dVar10,0));
  }
  else {
    dVar10 = dVar10 / dVar10;
  }
  if (bVar14 == 0) {
    *(int *)(unsigned)((int)0x80 + (int)ar4) = (int)(D2U(dVar10) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)0x80 + (int)ar4) = dVar10;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,6,uVar7,ar7));
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  bVar12 = 0;
  bVar13 = 0;
  bVar15 = (byte)((uVar6 & 0x80000) >> 0x13);
  bVar14 = (byte)((uVar6 & 0x100000) >> 0x14);
  if (bVar15 == 0) {
    sVar11 = (short)(int)F32HI(in_dr0);
  }
  else {
    sVar11 = (short)(int)in_dr0;
  }
  *(int *)(unsigned)((int)0x84 + (int)ar4) = (int)sVar11;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,7,uVar7,ar7));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c126b78));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c126bcc));
  if (bVar14 == 0) {
    dVar10 = CONCAT44D((int)(D2U(dVar10) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c10aec4));
  }
  uVar6 = ((uint)bVar12 << 0xc | (uint)bVar13 << 0x12 | (uint)bVar15 << 0x13 | (uint)bVar14 << 0x14)
          & 0xffe7ffff;
  cVar1 = (char)((uVar6 & 0x100000) >> 0x14);
  if ((char)((uVar6 & 0x80000) >> 0x13) == '\0') {
    in_dr0 = CONCAT44D(F32HI(in_dr0) * F32LO(dVar10),SUB84(in_dr0,0));
  }
  else {
    in_dr0 = in_dr0 * dVar10;
  }
  if (cVar1 == '\0') {
    *(int *)(unsigned)((int)0x8c + (int)ar4) = (int)((ulonglong)in_dr0 >> 0x20);
    uVar9 = CONCAT44((*(undefined1 *)(unsigned)0x8c10af6c),SUB84(dVar10,0));
  }
  else {
    *(double *)(unsigned)((int)0x8c + (int)ar4) = in_dr0;
    uVar9 = CONCAT44((&(*(undefined1 *)(unsigned)0x8c126bcc)),(*(undefined1 *)(unsigned)0x8c10af6c));
  }
  iVar5 = (int)0xa0;
  if (cVar1 == '\0') {
    *(int *)(unsigned)(iVar5 + (int)ar4) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(iVar5 + (int)ar4) = uVar9;
  }
  *(unsigned *)(unsigned)(iVar5 + 4 + (int)ar4) = puVar3;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c128fac));
  *(unsigned *)(unsigned)(iVar5 + 8 + (int)ar4) = puVar4;
  *(unsigned *)(unsigned)(iVar5 + 0xc + (int)ar4) = puVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,8,uVar7,ar7));
  ar6_00 = *(undefined4 *)(unsigned)((int)0xac + (int)ar4);
  uVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b6b8(a4,uVar8,ar6_00,ar7));
  *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = uVar7;
  uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10a308(ar4,uVar8,ar6_00,ar7));
  return (uint)((uVar8 & 0xff) != 0);
}

__asm__(".globl _FUN_8c10ad00\n.set _FUN_8c10ad00, _FUN_8c10ad00_def\n");
//@unit 8c10af3c
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
undefined4 FUN_8c10af3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10af3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c10a80c)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c10ad00)); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10ac30))); unsigned long t3_ = (unsigned long)(
                     (int)0xb4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,5,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c10af3c\n.set _FUN_8c10af3c, _FUN_8c10af3c_def\n");
//@unit 8c10af94
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
int FUN_8c10af94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10af94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (int)0xa4;
  return (*(int *)(unsigned)(iVar1 + ar4) * 2 + ar4 + (int)0xb4 + 3U & 0xfffffffc) +
         (*(int *)(unsigned)(iVar1 + -0x1c + ar4) + 1) * 4 + (*(int *)(unsigned)(iVar1 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10af94\n.set _FUN_8c10af94, _FUN_8c10af94_def\n");
//@unit 8c10afbe
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
int FUN_8c10afbe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10afbe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10af94(ar4,ar5,ar6,ar7));
  iVar2 = (int)0xa8;
  return (iVar1 + *(int *)(unsigned)(iVar2 + ar4) * 2 + 3U & 0xfffffffc) +
         (*(int *)(unsigned)(iVar2 + -0x1c + ar4) + 1) * 4 + (*(int *)(unsigned)(iVar2 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10afbe\n.set _FUN_8c10afbe, _FUN_8c10afbe_def\n");
//@unit 8c10aff4
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
undefined4 FUN_8c10aff4_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10aff4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 8))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10aff4\n.set _FUN_8c10aff4, _FUN_8c10aff4_def\n");
//@unit 8c10b02a
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
undefined4 FUN_8c10b02a_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b02a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b02a\n.set _FUN_8c10b02a, _FUN_8c10b02a_def\n");
//@unit 8c10b060
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
undefined4 FUN_8c10b060_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar6 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar6[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar6[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x10))))(ar4,ar5,&(*(undefined4 *)(fr0_ - 0x10)),ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b060\n.set _FUN_8c10b060, _FUN_8c10b060_def\n");
//@unit 8c10b096
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
undefined4 FUN_8c10b096_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b096";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar4 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar4[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar4[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(&(*(undefined4 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b096\n.set _FUN_8c10b096, _FUN_8c10b096_def\n");
//@unit 8c10b0d8
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
undefined4 FUN_8c10b0d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b0d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar4 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar4[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar4[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(&(*(undefined4 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b0d8\n.set _FUN_8c10b0d8, _FUN_8c10b0d8_def\n");
//@unit 8c10b10e
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
undefined4 FUN_8c10b10e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b10e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar4 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar4[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar4[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1c))))(&(*(undefined4 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b10e\n.set _FUN_8c10b10e, _FUN_8c10b10e_def\n");
//@unit 8c10b144
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
undefined4 FUN_8c10b144_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b144";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x20))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b144\n.set _FUN_8c10b144, _FUN_8c10b144_def\n");
//@unit 8c10b17a
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
undefined4 FUN_8c10b17a_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b17a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x24))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b17a\n.set _FUN_8c10b17a, _FUN_8c10b17a_def\n");
//@unit 8c10b1b0
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
undefined4 FUN_8c10b1b0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x28))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c10b1b0\n.set _FUN_8c10b1b0, _FUN_8c10b1b0_def\n");
//@unit 8c10b1ec
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
undefined4 FUN_8c10b1ec_def(int *ar4,int *ar5,undefined4 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10b1ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
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
  
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
  iVar13 = *ar5;
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar13 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  if (ar5[1] != 0) {
    (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  }
  piVar5 = ar5;
  piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), FUN_8c11eb6c(*(undefined4 *)(unsigned)(uint)ar5[1],ar5,ar6,ar7));
  a4 = *piVar3;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10afbe(a4,piVar5,ar6,ar7));
  uVar1 = 0x80;
  iVar6 = *ar4;
  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  iVar12 = 0;
  (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(ar7));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[1]));
  if (0 < iVar6) {
    do {
      (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)((int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38))));
      (*(int *)(fr0_ - 0x64)) = 0;
      iVar11 = 0;
      (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[5]));
      if (0 < (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))) {
        do {
          iVar9 = 0;
          iVar8 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
          ar6 = (undefined4 *)(unsigned)0x0;
          (*(int *)(fr0_ - 0x60)) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[3];
          if (0 < iVar8) {
            do {
              ar6 = (undefined4 *)(unsigned)((int)ar6 + 1);
              if ((*(ushort *)(unsigned)(iVar4 + *(int *)(unsigned)((*(int *)(fr0_ - 0x60)) + 8) * 2) & 0x80) == 0) {
                iVar9 = iVar9 + 1;
              }
              (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 0xc;
            } while ((int)ar6 < iVar8);
          }
          iVar12 = (iVar12 + iVar8) - iVar9;
          if (iVar9 == iVar8) {
            (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x64)) + 1;
          }
          iVar11 = iVar11 + 1;
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 4));
        } while (iVar11 < (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)));
      }
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + ((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) - (*(int *)(fr0_ - 0x64))))));
      (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 1)));
      (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 6));
    } while ((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) < iVar6);
  }
  piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(0xc,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
  if (piVar5 != (int *)(unsigned)0x0) {
    if (iVar6 < 1) {
LAB_8c10b3fc:
      *piVar5 = *ar4;
      piVar5[1] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(ar6));
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34))));
      (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int *)(unsigned)(uint)ar4[1]));
      piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      if (0 < iVar6) {
        do {
          (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)(piVar2));
          (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)((int *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[5]));
          iVar12 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
          *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) = iVar12;
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[1] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[1];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[2] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[2];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[3] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[3];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[4] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[4];
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))[5] = (int)piVar3;
          (*(int *)(fr0_ - 0x60)) = 0;
          if (0 < iVar12) {
            do {
              puVar7 = (undefined4 *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[3];
              iVar8 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48));
              *piVar3 = iVar8;
              piVar3[1] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[1];
              piVar3[2] = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48))[2];
              piVar3[3] = (int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(puVar7));
                  uVar10 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2];
                  if ((*(ushort *)(unsigned)(iVar4 + uVar10 * 2) & uVar1) == 0) {
                    *piVar3 = *piVar3 + -1;
                  }
                  else {
                    if (*(uint *)(unsigned)(0x88 + a4) <= uVar10) {
                      ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2] = (uVar10 - *(int *)(unsigned)(0x88 + a4)) + 0x80000000;
                    }
                    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58));
                    ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))[1] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[1];
                    ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c))[2] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58))[2];
                    (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 3));
                  }
                  iVar11 = iVar11 + 1;
                  puVar7 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3;
                } while (iVar11 < iVar8);
              }
              if (*piVar3 == 0) {
                *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + -1;
              }
              else {
                piVar3 = piVar3 + 4;
              }
              (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x60)) + 1;
              (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x48)) + 4));
            } while ((*(int *)(fr0_ - 0x60)) < iVar12);
          }
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 1)));
          (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 6));
          piVar2 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)) + 6;
        } while ((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) < iVar6);
      }
      uVar10 = (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) != (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) != (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) == (undefined4 *)(unsigned)0x0) {
        return uVar10 & 0xff;
      }
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)),&(*(undefined4 *)(fr0_ - 0x28)),((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      return uVar10 & 0xff;
    }
    (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(iVar6 * 0x18,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))))));
    if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) == (int *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
    }
    else {
      (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))
                                    (((int)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1) * 0x10,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))))));
      if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) == (int *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
      else {
        if ((iVar12 == 0) ||
           ((*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)
                         (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 8))))(iVar12 * 0xc,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c)))))),
           ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) != (undefined4 *)(unsigned)0x0)) goto LAB_8c10b3fc;
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(piVar5,&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
        (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar13 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,((int *)(unsigned long)*(unsigned *)(fr0_ - 0x3c))));
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10b1ec\n.set _FUN_8c10b1ec, _FUN_8c10b1ec_def\n");
//@unit 8c10b576
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
uint FUN_8c10b576_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b576";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (*ar5 != 0) {
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0x10))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b576\n.set _FUN_8c10b576, _FUN_8c10b576_def\n");
//@unit 8c10b5b8
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
uint FUN_8c10b5b8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b5b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (*ar5 != 0) {
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0x14))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b5b8\n.set _FUN_8c10b5b8, _FUN_8c10b5b8_def\n");
//@unit 8c10b5f0
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
uint FUN_8c10b5f0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b5f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (*ar5 != 0) {
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0x18))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b5f0\n.set _FUN_8c10b5f0, _FUN_8c10b5f0_def\n");
//@unit 8c10b628
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
uint FUN_8c10b628_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b628";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar5[1] + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (*ar5 != 0) {
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar5 + 4);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5[1] + 0x1c))))(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar6,ar7));
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b628\n.set _FUN_8c10b628, _FUN_8c10b628_def\n");
//@unit 8c10b660
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
uint FUN_8c10b660_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b660";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = *(undefined4 *)(unsigned)(ar4[1] + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (*ar4 != 0) {
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(*ar4 + 4);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[1] + 0x20))))(&(*(undefined4 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  return uVar1 & 0xff;
}

__asm__(".globl _FUN_8c10b660\n.set _FUN_8c10b660, _FUN_8c10b660_def\n");
//@unit 8c10b698
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
undefined4 FUN_8c10b698_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b698";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11f258(*ar4,vr5,vr6,vr7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,vr6,vr7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10b698\n.set _FUN_8c10b698, _FUN_8c10b698_def\n");
//@unit 8c10b6a0
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
undefined4 FUN_8c10b6a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b6a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11f258(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10b6a0\n.set _FUN_8c10b6a0, _FUN_8c10b6a0_def\n");
//@unit 8c10b6cc
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
int FUN_8c10b6cc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b6cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
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
  
  iVar8 = 0;
  iVar3 = ar4[1];
  iVar7 = 0;
  ar5_01 = (uint *)(unsigned)0x0;
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    ar5_02 = (int *)(unsigned)0x0;
  }
  else {
    ar5_02 = (int *)(unsigned)*ar5;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = ar4[2];
  ar5_00 = ar5_02;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11ea3c(*ar4,ar5_02,ar6,ar7));
  if (iVar1 != 0) {
    ar5_00 = (int *)(unsigned)*ar4;
    iVar8 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],ar5_00,ar6,ar7));
  }
  if ((iVar8 == 0) && (ar5_02 != (int *)(unsigned)0x0)) {
    iVar1 = *ar5_02;
    uVar9 = *(int *)(unsigned)(0x8c + -4 + iVar1) + *(int *)(unsigned)(0x8c + iVar1);
    puVar2 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10afbe(iVar1,ar5_00,ar6,ar7));
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
      ar5_01 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(iVar7 * 4,&(*(undefined4 *)(fr0_ - 0x28)),ar6,ar7));
      if (ar5_01 == (uint *)(unsigned)0x0) {
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
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11d6f0(*ar4,ar5_01,iVar7,ar7));
    if (iVar1 != 0) {
      iVar8 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,iVar7,ar7));
    }
    if (ar5_01 != (uint *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(ar5_01,&(*(undefined4 *)(fr0_ - 0x28)),iVar7,ar7));
    }
  }
  ar4[0xb] = ar5;
  return iVar8;
}

__asm__(".globl _FUN_8c10b6cc\n.set _FUN_8c10b6cc, _FUN_8c10b6cc_def\n");
//@unit 8c10b840
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
int asr_lib_bind_recognizer_model_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "asr_lib_bind_recognizer_model";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *ar5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e534(*ar4,uVar2,vr6,vr7));
  if (iVar1 != 0) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,vr6,vr7));
  }
  if (iVar3 == 0) {
    if (ar5 == (undefined4 *)(unsigned)0x0) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c10b852_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b852";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 *unaff_r13 = 0;
  char in_T = 0;
  
  ar5_00 = unaff_r12;
  if (in_T != '\x01') {
    ar5_00 = *unaff_r13;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e534(*ar4,ar5_00,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6,ar7));
  }
  if (unaff_r11 == 0) {
    if (unaff_r13 == (undefined4 *)(unsigned)0x0) {
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
  return unaff_r11 = 0;
}

__asm__(".globl _FUN_8c10b852\n.set _FUN_8c10b852, _FUN_8c10b852_def\n");
//@unit 8c10b8c6
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
undefined4 FUN_8c10b8c6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10b8c6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (*(undefined4 *)(fr0_ - 0x14)) = ar4[1];
  uVar2 = 0;
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11ce44(*ar4,0,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11cd44(*ar4,0,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c10b8c6\n.set _FUN_8c10b8c6, _FUN_8c10b8c6_def\n");
//@unit 8c10b914
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
undefined4 asr_lib_create_engine_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "asr_lib_create_engine";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int *ar5_00;
  int iVar1;
  int *ar6_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  ((int *)(fr0_ - 0x3c))[1] = 0;
  ar6_00 = ar6;
  ((int *)(fr0_ - 0x3c))[0] = ar5;
  ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(*ar4)))(0x2c,((int *)(fr0_ - 0x3c)),ar6,ar7));
  if (ar5_00 == (int *)(unsigned)0x0) {
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
    (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10aff4)));
    *ar6 = (int)ar5_00;
    (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b02a)));
    (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b060)));
    (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b096)));
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b0d8)));
    (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b10e)));
    (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b144)));
    (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b17a)));
    (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b1b0)));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c11cdb6(((undefined * *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c11cd44(0,0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)((uint)ar4[1])))(ar5_00,((int *)(fr0_ - 0x3c)),ar6_00,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10ba20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ba20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4[1];
  uVar2 = 0;
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[2];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11d200(*ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c10ba20\n.set _FUN_8c10ba20, _FUN_8c10ba20_def\n");
//@unit 8c10ba7c
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
int FUN_8c10ba7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ba7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4[1] + 4);
  iVar2 = 0;
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11e9b4(*ar4,0,ar6,ar7));
  if (iVar1 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],0,ar6,ar7));
  }
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[1] + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c10ba7c\n.set _FUN_8c10ba7c, _FUN_8c10ba7c_def\n");
//@unit 8c10bad4
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
int FUN_8c10bad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4[2] + 4);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11e82c(*ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[2],0,ar6,ar7));
  }
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[2] + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c10bad4\n.set _FUN_8c10bad4, _FUN_8c10bad4_def\n");
//@unit 8c10bb3a
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
undefined4 FUN_8c10bb3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bb3a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e3ea(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10bb3a\n.set _FUN_8c10bb3a, _FUN_8c10bb3a_def\n");
//@unit 8c10bb6e
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
undefined4 FUN_8c10bb6e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bb6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e146(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c10bb6e\n.set _FUN_8c10bb6e, _FUN_8c10bb6e_def\n");
//@unit 8c10bb9a
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
int FUN_8c10bb9a_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bb9a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11eb6c(*ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6,ar7));
  }
  if (((iVar3 == 0) && (iVar2 = ar4[0xb], *ar5 = iVar2, iVar2 != 0)) && (iVar1 != *(int *)(unsigned)*ar5)) {
    iVar3 = 0xb;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10bb9a\n.set _FUN_8c10bb9a, _FUN_8c10bb9a_def\n");
//@unit 8c10bba8
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
int FUN_8c10bba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *unaff_r11 = 0;
  undefined4 *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11eb6c(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 == 0) {
    unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  if (((unaff_r14 == 0) && (iVar2 = unaff_r13[0xb], *unaff_r11 = iVar2, iVar2 != 0)) &&
     (iVar1 != *(int *)(unsigned)*unaff_r11)) {
    unaff_r14 = 0xb;
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c10bba8\n.set _FUN_8c10bba8, _FUN_8c10bba8_def\n");
//@unit 8c10bbf2
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
int FUN_8c10bbf2_def(undefined4 *ar4,int *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bbf2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = ar4[1];
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[2];
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar6));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(ar4));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11e48a(*ar4,((int * *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 != 0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x20))[1],*ar4,ar6,ar7));
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(8,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
    if (puVar2 == (undefined4 *)(unsigned)0x0) {
      iVar4 = 1;
    }
    else {
      *ar5 = (int)puVar2;
      *puVar2 = ar4[9];
      puVar2[1] = ar4[10];
    }
    if (iVar4 == 0) {
      if (*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) != **(int **)(unsigned)*ar5) {
        iVar4 = 0xb;
      }
      if ((1 < *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x24))) && (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28))[1] != *((int *)(unsigned long)*(unsigned *)(unsigned)ar5[1]))) {
        iVar4 = 0xb;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  }
  return iVar4;
}

__asm__(".globl _FUN_8c10bbf2\n.set _FUN_8c10bbf2, _FUN_8c10bbf2_def\n");
//@unit 8c10bce4
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
undefined4 FUN_8c10bce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bce4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d7b8(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10bce4\n.set _FUN_8c10bce4, _FUN_8c10bce4_def\n");
//@unit 8c10bd20
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
undefined4 FUN_8c10bd20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bd20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11dc7e(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10bd20\n.set _FUN_8c10bd20, _FUN_8c10bd20_def\n");
//@unit 8c10bd4c
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
undefined4 FUN_8c10bd4c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bd4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar6_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(unsigned)(uint)ar4[1];
  uVar3 = 0;
  ar6_00 = ((undefined1 *)(fr0_ - 0x20));
  (*(undefined4 *)(fr0_ - 0x18)) = puVar2[1];
  (*(undefined4 *)(fr0_ - 0x14)) = ar4[2];
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11d996(*ar4,((undefined4 * *)(fr0_ - 0x24)),ar6_00,ar7));
  if (iVar1 != 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11cd44(*puVar2,*ar4,ar6_00,ar7));
  }
  *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[1];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[2] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[2];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[3] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[3];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[4] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[4];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[5] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[5];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[6] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[6];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[7] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[7];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[8] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[8];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[9] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[9];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[10] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[10];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xb] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xb];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xc] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xc];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xd] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xd];
  (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(puVar2[3])))(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24)),&(*(undefined4 *)(fr0_ - 0x18)),ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c10bd4c\n.set _FUN_8c10bd4c, _FUN_8c10bd4c_def\n");
//@unit 8c10bdee
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
undefined4 FUN_8c10bdee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bdee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e214(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c10bdee\n.set _FUN_8c10bdee, _FUN_8c10bdee_def\n");
//@unit 8c10be22
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
undefined4 FUN_8c10be22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10be22";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e274(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c10be22\n.set _FUN_8c10be22, _FUN_8c10be22_def\n");
//@unit 8c10be4e
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
undefined4 FUN_8c10be4e_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10be4e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ce88(ar4,ar5,ar6,ar7));
  *ar5 = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c10be4e\n.set _FUN_8c10be4e, _FUN_8c10be4e_def\n");
//@unit 8c10be70
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
undefined4 FUN_8c10be70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10be70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e190(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r14 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c10be70\n.set _FUN_8c10be70, _FUN_8c10be70_def\n");
//@unit 8c10be9c
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
undefined4 FUN_8c10be9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10be9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  
  uVar3 = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[1];
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  ar7_00 = ar7;
  a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[2])))(8,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c11e8d6);
  a4[1] = (int)ar4;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(*ar4,ar5,ar6,ar7_00));
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c11cd44(*ar4,0,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(a4,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7_00));
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _FUN_8c10be9c\n.set _FUN_8c10be9c, _FUN_8c10be9c_def\n");
//@unit 8c10bf44
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
undefined4 asr_lib_load_model_def(undefined4 *ar4,int *ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "asr_lib_load_model";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  
  uVar3 = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[1];
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  ar7_00 = ar7;
  a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[2])))(0xc,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  a4[2] = (int)ar4;
  puVar1 = ((void *)(unsigned)0x8c11e2de);
  a4[1] = *ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(*ar4,ar5,ar6,ar7_00));
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c11cd44(*ar4,0,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(a4,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7_00));
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _asr_lib_load_model\n.set _asr_lib_load_model, _asr_lib_load_model_def\n");
//@unit 8c10bfc6
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
undefined4 asr_lib_create_recognizer_def(undefined4 *ar4,int *ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "asr_lib_create_recognizer";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *ar6_00;
  int iVar2;
  int *ar6_01;
  int *ar7_00;
  undefined4 uVar3;
  
  uVar3 = 0;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b1ec)));
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b576)));
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b5b8)));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b5f0)));
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b628)));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b660)));
  (*(undefined4 *)(fr0_ - 0x34)) = ar4[1];
  ar7_00 = ar7;
  (*(int *)(fr0_ - 0x30)) = ar6;
  ar6_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)((uint)ar4[2])))(0x30,&(*(undefined4 *)(fr0_ - 0x34)),ar6,ar7));
  ar6_00[2] = ar6;
  ar6_00[1] = (int)ar4;
  ar6_00[3] = *ar5;
  ar6_00[4] = ar5[1];
  ar6_00[5] = ar5[2];
  ar6_00[6] = ar5[3];
  ar6_00[7] = ar5[4];
  puVar1 = ((void *)(unsigned)0x8c11ce8e);
  ar6_00[8] = ar5[5];
  ar6_00[9] = 0;
  ar6_00[10] = 0;
  ar6_00[0xb] = 0;
  ar6_01 = ar6_00;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(*ar4,((undefined * *)(fr0_ - 0x2c)),ar6_00,ar7_00));
  if (iVar2 == 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd44(*ar4,0,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(ar6_00,&(*(undefined4 *)(fr0_ - 0x34)),ar6_01,ar7_00));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c10c0b4_def(undefined4 *ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c0b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
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
  
  a5 = ((undefined4 * *)(fr0_ - 0x2c));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((uint *)(unsigned)0x0));
  iVar3 = ar4[1];
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = ar4[2];
  uVar4 = ar6;
  (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c10bb9a(ar4,a5,ar6,ar7));
  if ((*(int *)(fr0_ - 0x30)) == 0) {
    ar4_00 = *(int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c10afbe(ar4_00,a5,uVar4,ar7));
    iVar2 = 0x80000000;
    uVar4 = 0;
    ar6_00 = ar6 + *(int *)(unsigned)(0xac + ar4_00) + 1;
    puVar5 = ar5;
    puVar6 = ar5;
    a7 = ar5;
    if (ar6 != 0) {
      do {
        if (ar5[uVar4] < *(uint *)(unsigned)(0x88 + ar4_00)) {
          if ((*(ushort *)(unsigned)(*a7 * 2 + iVar1) & 0x40) != 0) {
            ar6_00 = ar6_00 + -1;
          }
          if (*puVar6 <= *(uint *)(unsigned)(0xac + ar4_00)) {
            ar6_00 = ar6_00 + -1;
          }
        }
        else if ((*(ushort *)(unsigned)
                   ((*puVar5 + *(int *)(unsigned)(0x88 + ar4_00) + 0x80000000) * 2 + iVar1) & 0x40)
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
      (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(ar6_00 << 2,&(*(undefined4 *)(fr0_ - 0x28)),puVar6,a7))));
      if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) == (uint *)(unsigned)0x0) {
        return 1;
      }
      uVar4 = 0;
      puVar5 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
      puVar6 = ar5;
      a7 = ar5;
      puVar7 = ar5;
      if (ar6 != 0) {
        do {
          if (ar5[uVar4] < *(uint *)(unsigned)(0x88 + ar4_00)) {
            if (((*(ushort *)(unsigned)(ar5[uVar4] * 2 + iVar1) & 0x40) == 0) &&
               (*(uint *)(unsigned)(0xac + ar4_00) < ar5[uVar4])) {
              *puVar5 = *a7;
              puVar5 = puVar5 + 1;
            }
          }
          else if ((*(ushort *)(unsigned)((*puVar6 + *(int *)(unsigned)(0x88 + ar4_00) + iVar2) * 2 + iVar1) &
                   0x40) == 0) {
            *puVar5 = *puVar7 + *(int *)(unsigned)(0x88 + ar4_00) + iVar2;
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
      if (*(int *)(unsigned)(iVar2 + ar4_00) != -1) {
        do {
          *puVar5 = uVar4;
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 < *(int *)(unsigned)(iVar2 + ar4_00) + 1U);
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11d6f0(*ar4,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar6_00,a7));
    if (iVar2 != 0) {
      (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,ar6_00,a7));
    }
    if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) != (uint *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,a7));
    }
  }
  return (*(int *)(fr0_ - 0x30));
}

__asm__(".globl _FUN_8c10c0b4\n.set _FUN_8c10c0b4, _FUN_8c10c0b4_def\n");
//@unit 8c10c2a2
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
undefined4 FUN_8c10c2a2_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c2a2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11dda2(*ar4,vr5,vr6,vr7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,vr6,vr7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c2a2\n.set _FUN_8c10c2a2, _FUN_8c10c2a2_def\n");
//@unit 8c10c2aa
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
undefined4 FUN_8c10c2aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c2aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11dda2(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10c2aa\n.set _FUN_8c10c2aa, _FUN_8c10c2aa_def\n");
//@unit 8c10c2f4
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
undefined4 FUN_8c10c2f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c2f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *unaff_r13 = 0;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11daa4(*unaff_r13,ar5,ar6,ar7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r13[1],*unaff_r13,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c2f4\n.set _FUN_8c10c2f4, _FUN_8c10c2f4_def\n");
//@unit 8c10c322
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
undefined4 FUN_8c10c322_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c322";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d370(*ar4,vr5,vr6,vr7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,vr6,vr7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c322\n.set _FUN_8c10c322, _FUN_8c10c322_def\n");
//@unit 8c10c32a
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
undefined4 FUN_8c10c32a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c32a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d370(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10c32a\n.set _FUN_8c10c32a, _FUN_8c10c32a_def\n");
//@unit 8c10c356
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
undefined4 FUN_8c10c356_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c356";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d5d4(*ar4,vr5,vr6,vr7));
  if (iVar1 != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)(uint)ar4[1],*ar4,vr6,vr7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10c356\n.set _FUN_8c10c356, _FUN_8c10c356_def\n");
//@unit 8c10c35e
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
undefined4 FUN_8c10c35e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c35e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d5d4(*unaff_r14,ar5,ar6,ar7));
  if (iVar1 != 0) {
    unaff_r13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd44(*(undefined4 *)(unsigned)unaff_r14[1],*unaff_r14,ar6,ar7));
  }
  return unaff_r13 = 0;
}

__asm__(".globl _FUN_8c10c35e\n.set _FUN_8c10c35e, _FUN_8c10c35e_def\n");
//@unit 8c10c3a0
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
undefined4 FUN_8c10c3a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c3a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar4;
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(iVar1 + 4);
  (*(undefined4 *)(fr0_ - 0x10)) = 0;
  if (ar4[3] != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0xc))))(ar4[3],&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0xc))))(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c10c3a0\n.set _FUN_8c10c3a0, _FUN_8c10c3a0_def\n");
//@unit 8c10c3de
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
undefined4 FUN_8c10c3de_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c3de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int *a4;
  int iVar1;
  undefined4 uVar2;
  int *a6;
  
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 4);
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  a6 = ar6;
  a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(0x10,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  if (a4 == (int *)(unsigned)0x0) {
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
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(a4[2],&(*(undefined4 *)(fr0_ - 0x18)),a6,ar7));
      a4[3] = iVar1;
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(a4,&(*(undefined4 *)(fr0_ - 0x18)),a6,ar7));
        goto LAB_8c10c44a;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), memmove(a4[3],ar5 + 2,a4[2],ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10c48c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c48c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  
  iVar3 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,ar6,ar7));
  *(short *)(unsigned)((int)unaff_r14 + 0x2e) = (short)(int)extraout_fr0;
  *(short *)(unsigned)(unaff_r14 + 0xc) = *(short *)(unsigned)((int)unaff_r14 + 0x2e) * 3 + 3;
  *(short *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = ((short)unaff_r14[0xc] + -1) * 4;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x14))))(iVar3,(uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) << 3,4,ar7));
  unaff_r14[0x15] = iVar3;
  if (unaff_r14[0x15] == 0) {
    uVar1 = 2;
  }
  else {
    iVar2 = unaff_r14[0x15];
    iVar3 = 0;
    do {
      unaff_r14[iVar3 + 0xd] = iVar2;
      iVar2 = iVar2 + (uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) * 4;
      unaff_r14[iVar3 + 0xe] = iVar2;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + (uint)*(ushort *)(unsigned)(unaff_r14 + 0xc) * 4;
    } while (iVar3 < 8);
    *(undefined2 *)(unsigned)(unaff_r14 + 0xb) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10c48c\n.set _FUN_8c10c48c, _FUN_8c10c48c_def\n");
//@unit 8c10c530
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
undefined4 FUN_8c10c530_def(int ar4,float *ar5,float *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c10c530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
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
  float in_fr3 = 0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_fr5 = 0;
  ulonglong uVar17;
  undefined8 in_xd2 = 0;
  undefined8 uVar18;
  undefined8 in_xd4 = 0;
  char cVar19;
  
  iVar9 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
  pfVar12 = (float *)(unsigned)0x0;
  if (*(char *)(unsigned)(iVar9 + 0x30) == '\0') {
    if (*(char *)(unsigned)(ar4 + 0x58) == '\0') {
      ar5 = (float *)(unsigned)0x1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),1,ar6,ar7));
      if ((uVar1 & 0xff) != 0) {
        cVar19 = '\0';
        pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1]
                                       ,ar6,ar7));
        iVar5 = ar4 + 0x34;
        uVar1 = (uint)*(ushort *)(unsigned)(ar4 + 0x2c);
        pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 & 7) * 4 + iVar5));
        pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 7 & 7) * 4 + iVar5));
        pfVar8 = (float *)(unsigned)(*(int *)(unsigned)((uVar1 + 6 & 7) * 4 + iVar5) + 4);
        pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 5 & 7) * 4 + iVar5));
        if (cVar19 == '\0') {
          in_fr5 = *pfVar2;
          pfVar2 = pfVar2 + 1;
        }
        else {
          in_xd4 = *(undefined8 *)(unsigned)pfVar2;
          pfVar2 = pfVar2 + 2;
        }
        pfVar7 = ((float *)(unsigned long)*(unsigned *)(unsigned)((uVar1 + 4 & 7) * 4 + iVar5));
        *(int *)(unsigned)(ar4 + 0x28) = *(int *)(unsigned)(ar4 + 0x28) + 1;
        if (cVar19 == '\0') {
          *pfVar3 = in_fr5;
          fVar13 = 2.0;
        }
        else {
          *(undefined8 *)(unsigned)pfVar3 = in_xd4;
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
        (*(int *)(fr0_ - 0x24)) = 0;
        pfVar8 = pfVar8 + *(ushort *)(unsigned)(ar4 + 0x2e) + 2;
        ar5 = pfVar7 + 3;
        if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
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
            (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
            pfVar8 = pfVar8 + 1;
          } while ((*(int *)(fr0_ - 0x24)) < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
        }
        ar6 = pfVar8 + -(uint)*(ushort *)(unsigned)(ar4 + 0x2e);
        pfVar6 = pfVar6 + *(ushort *)(unsigned)(ar4 + 0x2e);
        ar7 = 0;
        if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
          do {
            ar7 = ar7 + 1;
            fVar13 = *ar6;
            ar6 = ar6 + 1;
            in_fr3 = *ar5;
            ar5 = ar5 + 1;
            *pfVar6 = (fVar13 - in_fr3) * 1.0;
            pfVar6 = pfVar6 + 1;
          } while (ar7 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
        }
      }
    }
    if (*(char *)(unsigned)(ar4 + 0x58) != '\0') {
      iVar5 = *(int *)(unsigned)(ar4 + 0x28) + -1;
      *(int *)(unsigned)(ar4 + 0x28) = iVar5;
      if (iVar5 == 4) {
        *(undefined1 *)(unsigned)(ar4 + 0x58) = 0;
      }
      pfVar12 = (float *)(unsigned)(*(int *)(unsigned)((*(ushort *)(unsigned)(ar4 + 0x2c) + 5 & 7) * 4 + ar4 + 0x34) + 4);
    }
    if (pfVar12 != (float *)(unsigned)0x0) {
      if (3 < *(uint *)(unsigned)(ar4 + 0x28)) {
        cVar19 = '\0';
        pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c111dfe(iVar9,ar5,ar6,ar7));
        if (*(uint *)(unsigned)(ar4 + 0x28) < 7) {
          if (cVar19 == '\0') {
            uVar17 = (ulonglong)(uint)in_fr5;
          }
          else {
            uVar17 = 0x233853ea00000000;
          }
          fVar13 = (float)(uVar17 >> 0x20);
          if (*(int *)(unsigned)(ar4 + 0x28) == 6) {
            if (cVar19 == '\0') {
              in_fr3 = *pfVar12;
              pfVar12 = pfVar12 + 1;
            }
            else {
              in_xd2 = *(undefined8 *)(unsigned)pfVar12;
              pfVar12 = pfVar12 + 2;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              *pfVar3 = in_fr3;
              pfVar3[1] = fVar13;
            }
            else {
              *(undefined8 *)(unsigned)pfVar3 = in_xd2;
              *(ulonglong *)(unsigned)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 1;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)(unsigned)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)(unsigned)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x2e) << 1));
            }
            iVar9 = 0;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)(unsigned)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
            }
          }
          else {
            if (cVar19 == '\0') {
              *pfVar3 = fVar13;
            }
            else {
              *(ulonglong *)(unsigned)pfVar3 = uVar17;
            }
            iVar9 = 0;
            if (cVar19 == '\0') {
              pfVar3[1] = fVar13;
            }
            else {
              *(ulonglong *)(unsigned)(pfVar3 + 1) = uVar17;
            }
            pfVar12 = pfVar12 + 2;
            pfVar3 = pfVar3 + 2;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                if (cVar19 == '\0') {
                  fVar14 = *pfVar12;
                  pfVar12 = pfVar12 + 1;
                  *pfVar3 = fVar14;
                }
                else {
                  uVar18 = *(undefined8 *)(unsigned)pfVar12;
                  pfVar12 = pfVar12 + 2;
                  *(undefined8 *)(unsigned)pfVar3 = uVar18;
                }
                iVar9 = iVar9 + 1;
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x2e));
            }
            iVar9 = 0;
            if (*(short *)(unsigned)(ar4 + 0x2e) != 0) {
              do {
                iVar9 = iVar9 + 1;
                if (cVar19 == '\0') {
                  *pfVar3 = fVar13;
                }
                else {
                  *(ulonglong *)(unsigned)pfVar3 = uVar17;
                }
                pfVar3 = pfVar3 + 1;
              } while (iVar9 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x2e) << 1));
            }
          }
        }
        else {
          iVar9 = 0;
          if (0 < (int)(*(ushort *)(unsigned)(ar4 + 0x30) - 1)) {
            do {
              if (cVar19 == '\0') {
                fVar13 = *pfVar12;
                pfVar12 = pfVar12 + 1;
                *pfVar3 = fVar13;
              }
              else {
                uVar18 = *(undefined8 *)(unsigned)pfVar12;
                pfVar12 = pfVar12 + 2;
                *(undefined8 *)(unsigned)pfVar3 = uVar18;
              }
              iVar9 = iVar9 + 1;
              pfVar3 = pfVar3 + 1;
            } while (iVar9 < (int)(*(ushort *)(unsigned)(ar4 + 0x30) - 1));
          }
        }
      }
      if (pfVar12 != (float *)(unsigned)0x0) {
        *(ushort *)(unsigned)(ar4 + 0x2c) = (short)*(char *)(unsigned)(ar4 + 0x2c) + 1U & 7;
      }
    }
  }
  iVar9 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar9 + 0x40)) == *(int *)(unsigned)(iVar9 + 0x3c))
     && (*(char *)(unsigned)(ar4 + 0x58) == '\0')) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10c838_def(int *ar4,uint ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10c838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  uVar2 = ar5 & 0xff;
  if (uVar2 == 1) {
    ar4[10] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[0x15],0,(uint)*(ushort *)(unsigned)(ar4 + 0xc) << 5,ar7));
  }
  else if (uVar2 == 2) {
    if ((ar4[10] != 0) || (ar6 != 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x16) = 1;
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
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,iVar3,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c10c838\n.set _FUN_8c10c838, _FUN_8c10c838_def\n");
//@unit 8c10c8e2
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
undefined4 FUN_8c10c8e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c8e2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c10c530)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10c484))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10c838)); unsigned long t3_ = (unsigned long)(0x5c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c10c8e2\n.set _FUN_8c10c8e2, _FUN_8c10c8e2_def\n");
//@unit 8c10c986
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
int FUN_8c10c986_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c986";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(uint *)(unsigned)((int)0xa4 + *ar4);
  return 0xa4 + 0x10 + *ar4 + (uVar1 + (uVar1 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c986\n.set _FUN_8c10c986, _FUN_8c10c986_def\n");
//@unit 8c10c99c
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
int FUN_8c10c99c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c99c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c986(ar4,ar5,ar6,ar7));
  return iVar1 + (*(int *)(unsigned)(0x88 + iVar2) + 1) * 4 + (*(int *)(unsigned)(0x90 + iVar2) + 1) * 4
  ;
}

__asm__(".globl _FUN_8c10c99c\n.set _FUN_8c10c99c, _FUN_8c10c99c_def\n");
//@unit 8c10c9c8
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
int FUN_8c10c9c8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c9c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(unsigned)((int)0xa8 + *ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c99c(ar4,*ar4,ar6,ar7));
  return iVar1 + (uVar2 + (uVar2 & 1)) * 2;
}

__asm__(".globl _FUN_8c10c9c8\n.set _FUN_8c10c9c8, _FUN_8c10c9c8_def\n");
//@unit 8c10c9cc
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
int FUN_8c10c9cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c9cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint in_r3 = 0;
  uint uVar2;
  
  uVar2 = *(uint *)(unsigned)(in_r0 + *ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c99c(ar4,*ar4,ar6,ar7));
  return iVar1 + (uVar2 + (in_r3 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10c9cc\n.set _FUN_8c10c9cc, _FUN_8c10c9cc_def\n");
//@unit 8c10c9e4
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
int FUN_8c10c9e4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10c9e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c9c8(ar4,ar5,ar6,ar7));
  return iVar1 + (*(int *)(unsigned)(0x8c + iVar2) + 1) * 4 +
                 (*(int *)(unsigned)(0x8c + 8 + iVar2) + 1) * 4;
}

__asm__(".globl _FUN_8c10c9e4\n.set _FUN_8c10c9e4, _FUN_8c10c9e4_def\n");
//@unit 8c10ca10
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
int FUN_8c10ca10_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ca10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint in_r2 = 0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *ar4;
  uVar2 = *(int *)(unsigned)(in_r0 + -4 + iVar1) + *(int *)(unsigned)(in_r0 + iVar1);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c9e4(ar4,iVar1,ar6,ar7));
  return iVar1 + (uVar2 + (in_r2 & uVar2)) * 2;
}

__asm__(".globl _FUN_8c10ca10\n.set _FUN_8c10ca10, _FUN_8c10ca10_def\n");
//@unit 8c10ca2e
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
undefined4 FUN_8c10ca2e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ca2e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove((&(*(undefined1 *)(unsigned)0x8c1274a8)),0x4c,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c10ca2e\n.set _FUN_8c10ca2e, _FUN_8c10ca2e_def\n");
//@unit 8c10ca58
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
undefined4 FUN_8c10ca58_def(int *ar4,undefined4 ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ca58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *ar6_00;
  int *ar7_00;
  uint uVar5;
  int iVar6;
  
  puVar1 = ((void *)(unsigned)0x8c0143b0);
  iVar4 = *ar4;
  iVar6 = ar4[3];
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar4 + 4);
  uVar5 = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  *ar7 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar4[1] != 0) {
    do {
      uVar3 = ar5;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0109e8(iVar6,ar5,ar6_00,ar7_00));
      if (iVar2 == 0) {
        *ar7 = *ar7 + 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,uVar3,ar6_00,ar7_00));
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + iVar2 + 1;
    } while (uVar5 < (uint)ar4[1]);
  }
  if (*ar7 == 0) {
    uVar3 = 0x78;
  }
  else {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 8))))(*ar7 << 2,&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,ar7_00));
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
          iVar6 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0109e8(iVar4,ar5,ar6_00,ar7_00));
          if (iVar6 == 0) {
            iVar6 = *ar7;
            *ar7 = iVar6 + 1;
            *(uint *)(unsigned)(*ar6 + iVar6 * 4) = uVar5;
          }
          iVar6 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)(puVar1)))(iVar4,uVar3,ar6_00,ar7_00));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10cb4c_def(int *ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cb4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10cb90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cb90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  ulonglong in_dr2 = 0;
  undefined8 uVar10;
  uint in_fr5 = 0;
  ulonglong uVar11;
  char cVar12;
  
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    ar5_00 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 4);
    puVar1 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),ar5_00,ar6,ar7));
    if (puVar1 != (uint *)(unsigned)0x0) {
      cVar12 = '\0';
      puVar2 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5_00,ar6,ar7));
      puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
      if (cVar12 == '\0') {
        in_fr5 = *(uint *)(unsigned)(ar4 + 0x38);
        in_dr2 = (ulonglong)*puVar1;
        *puVar2 = *puVar1;
      }
      else {
        *(undefined8 *)(unsigned)puVar2 = *(undefined8 *)(unsigned)puVar1;
      }
      pfVar4 = (float *)(unsigned)(puVar2 + 1);
      pfVar3 = (float *)(unsigned)(puVar1 + *(int *)(unsigned)(ar4 + 0x30) + 1);
      pfVar7 = pfVar4 + *(int *)(unsigned)(ar4 + 0x28);
      iVar6 = *(int *)(unsigned)(ar4 + 0x2c);
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
          *(ulonglong *)(unsigned)pfVar4 = uVar11;
        }
        while (fVar9 = (float)in_dr2, pfVar5 < pfVar3 + iVar6) {
          if (cVar12 == '\0') {
            fVar9 = *pfVar5;
            pfVar5 = pfVar5 + 1;
            uVar10 = CONCAT44(*pfVar4,*puVar8);
            puVar8 = puVar8 + 1;
          }
          else {
            fVar9 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar5 >> 0x20);
            pfVar5 = pfVar5 + 2;
            uVar10 = *(undefined8 *)(unsigned)pfVar4;
            puVar8 = puVar8 + 2;
          }
          cVar12 = '\0';
          fVar9 = fVar9 * (float)uVar10 + F32HI(uVar10);
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
      pfVar7 = pfVar7 + -*(int *)(unsigned)(ar4 + 0x28);
      if (cVar12 == '\0') {
        uVar10 = CONCAT44(*pfVar7,0x3f000000);
      }
      else {
        uVar10 = *(undefined8 *)(unsigned)pfVar7;
      }
      *pfVar7 = F32HI(uVar10) * (float)uVar10;
      iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar6 + 0x40)) ==
             *(int *)(unsigned)(iVar6 + 0x3c) ^ 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c10cb90\n.set _FUN_8c10cb90, _FUN_8c10cb90_def\n");
//@unit 8c10cc6e
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
undefined4 FUN_8c10cc6e_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cc6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a5;
  
  if ((ar5 & 0xff) == (int)0xff) {
    a5 = ar4[0xd];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,a5,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c10cc6e\n.set _FUN_8c10cc6e, _FUN_8c10cc6e_def\n");
//@unit 8c10cccc
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
undefined4 FUN_8c10cccc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  uint uVar2;
  int a4;
  int a5;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 in_dr0 = 0;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined4 in_fr13 = 0;
  double dVar11;
  float in_fr15 = 0;
  uint uVar12;
  int iVar13;
  float fVar14;
  char cVar15;
  
  fVar9 = F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,ar6,ar7));
  uVar12 = (uint)fVar9;
  uVar4 = uVar12 & 0xffff;
  ar4[10] = uVar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,3,ar6,ar7));
  iVar13 = (int)fVar9;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,ar6,ar7));
  ar4[0xc] = (int)fVar9 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  uVar2 = ((int)fVar9 & 0xffffU) - ar4[0xc];
  ar4[0xb] = uVar2;
  *(short *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = ((short)uVar12 + 1) * 4;
  fVar9 = (float)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  a5 = uVar2 * uVar4 * 4;
  ar4[0xe] = (int)(2.0 / fVar9);
  a4 = *ar4;
  cVar15 = '\0';
  pfVar1 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,a5,ar6,ar7));
  ar4[0xd] = (int)pfVar1;
  if (cVar15 == '\0') {
    fVar9 = 1.0;
    dVar11 = CONCAT44D(0x400921fb,in_fr13);
  }
  else {
    in_fr15 = 1.0;
    fVar9 = 2.142699;
    dVar11 = 8.619199512815383e+97;
  }
  uVar12 = 0;
  if (cVar15 == '\0') {
    dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),0x54442d18);
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
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c0142e4(a4,a5,ar6,ar7));
      if (cVar15 == '\0') {
        fVar14 = F32HI(dVar8);
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
          (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013c88(a4,a5,ar6,ar7));
          uVar5 = uVar5 + 1;
          if (cVar15 == '\0') {
            fVar14 = in_fr15;
          }
          *pfVar3 = fVar14 * F32HI(dVar10);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10cefa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cefa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c10cb90)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c10cccc)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10cc6e)); unsigned long t3_ = (unsigned long)(0x3c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c10cefa\n.set _FUN_8c10cefa, _FUN_8c10cefa_def\n");
//@unit 8c10cf6c
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
undefined4 FUN_8c10cf6c_def(int *ar4,undefined4 *ar5,ushort *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cf6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  piVar2 = (int *)(unsigned)*ar5;
  iVar3 = *ar4;
  iVar1 = 0;
  if (*ar6 != 0) {
    do {
      if (*piVar2 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,*piVar2,uVar4,vr7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,piVar2[2],vr6,vr7));
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)*ar6);
  }
  if (*ar6 != (ushort)ar7) {
    if (*ar6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,*ar5,vr6,vr7));
    }
    if ((ushort)ar7 != 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x14))))(iVar3,(ushort)ar7,0xc,vr7));
      *ar5 = uVar4;
    }
    *ar6 = (ushort)ar7;
  }
  return *ar5;
}

__asm__(".globl _FUN_8c10cf6c\n.set _FUN_8c10cf6c, _FUN_8c10cf6c_def\n");
//@unit 8c10cf82
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
undefined4 FUN_8c10cf82_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10cf82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  ushort unaff_r8 = 0;
  int iVar2;
  undefined4 *unaff_r10 = 0;
  int unaff_r11 = 0;
  ushort *unaff_r12 = 0;
  int *piVar3;
  int a4;
  
  piVar3 = (int *)(unsigned)*unaff_r10;
  a4 = *ar4;
  iVar2 = unaff_r11;
  if (*unaff_r12 != 0) {
    do {
      if (*piVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*piVar3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,piVar3[2],ar6,ar7));
        *piVar3 = unaff_r11;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < (int)(uint)*unaff_r12);
  }
  if (*unaff_r12 != unaff_r8) {
    if (*unaff_r12 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*unaff_r10,ar6,ar7));
    }
    if (unaff_r8 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,(uint)unaff_r8,0xc,ar7));
      *unaff_r10 = uVar1;
    }
    *unaff_r12 = unaff_r8;
  }
  return *unaff_r10 = 0;
}

__asm__(".globl _FUN_8c10cf82\n.set _FUN_8c10cf82, _FUN_8c10cf82_def\n");
//@unit 8c10d016
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
undefined4 FUN_8c10d016_def(int *ar4,int *ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c10d016";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint a6;
  uint a7;
  int iVar3;
  
  iVar3 = *ar4;
  a6 = ar6;
  a7 = ar7;
  if (*ar5 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,*ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(iVar3,ar5[2],a6,a7));
  }
  *(short *)(unsigned)(ar5 + 1) = (short)ar6;
  *(short *)(unsigned)((int)ar5 + 6) = (short)ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,(ar6 & 0xffff) << 2,a6,a7));
  *ar5 = iVar1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x14))))(iVar3,ar6 & 0xffff,1,a7));
  ar5[2] = iVar3;
  if ((*ar5 != 0) && (ar5[2] != 0)) {
    iVar3 = 0;
    if ((ar6 & 0xffff) != 0) {
      do {
        iVar1 = iVar3 + 1;
        *(int *)(unsigned)(*ar5 + iVar3 * 4) = s0;
        s0 = s0 + (ar7 & 0xffff);
        iVar3 = iVar1;
      } while (iVar1 < (int)(ar6 & 0xffff));
    }
    return 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c10d016\n.set _FUN_8c10d016, _FUN_8c10d016_def\n");
//@unit 8c10d0da
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
undefined4 FUN_8c10d0da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d0da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar6_00;
  uint ar6_01;
  int iVar2;
  
  ar6_01 = ar5 * 2;
  if (*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 100) + 0xc) == ar6_01) {
LAB_8c10d11a:
    ar6_00 = ar5 * 3;
    if (*(ushort *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)) + 0xc) != ar6_00) {
      ar7 = 1;
      uVar1 = 1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111adc(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),1,ar6_00,1));
      if (iVar2 == 0) goto LAB_8c10d152;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),uVar1,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x28) = iVar2;
      *(uint *)(unsigned)(ar4 + 0x2c) = ar6_01 + iVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
              (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)))[1],ar6_00,ar7));
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 100);
    ar7 = *(undefined4 *)(unsigned)(iVar2 + 0x18);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111adc(iVar2,*(undefined4 *)(unsigned)(iVar2 + 8),ar6_01,ar7));
    if (iVar2 != 0) goto LAB_8c10d11a;
LAB_8c10d152:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10d0da\n.set _FUN_8c10d0da, _FUN_8c10d0da_def\n");
//@unit 8c10d196
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
undefined4 FUN_8c10d196_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d196";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined2 *)(unsigned)(ar4 + 1) = (undefined2)ar5;
  *(undefined2 *)(unsigned)((int)ar4 + 6) = (undefined2)ar6;
  *ar4 = ar7;
  return 0;
}

__asm__(".globl _FUN_8c10d196\n.set _FUN_8c10d196, _FUN_8c10d196_def\n");
//@unit 8c10d1bc
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
undefined4 FUN_8c10d1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d1bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  if (*(short *)(unsigned)(ar4 + 0x30) != 0) {
    do {
      iVar11 = 0;
      uVar12 = (uint)0xff;
      uVar1 = *(ushort *)(unsigned)
               ((uint)*(ushort *)(unsigned)(0xe8 + ar4) * (uint)*(ushort *)(unsigned)(ar4 + 0x30) * 2 +
                *(int *)(unsigned)(ar4 + 0x7c) + uVar8 * 2);
      uVar14 = (uint)(short)uVar1;
      iVar9 = *(int *)(unsigned)(uVar8 * 0xc + *(int *)(unsigned)(ar4 + 0x70));
      cVar10 = '\x01';
      if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x68)) == ((void *)(unsigned)0x8c10da96)) {
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
      uVar13 = (uint)*(ushort *)(unsigned)(uVar8 * 0xc + *(int *)(unsigned)(ar4 + 0x70) + 4);
      if (uVar13 != 0) {
        do {
          iVar4 = uVar7 * 4;
          pcVar6 = (char *)(unsigned)(*(int *)(unsigned)(0xc0 + ar4 + uVar8 * 4) + uVar7);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)*(byte *)(unsigned)(*(int *)(unsigned)(iVar4 + iVar9) + (uVar14 & 0xffff)) & uVar12 & 0xff;
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
    } while (uVar8 < *(ushort *)(unsigned)(ar4 + 0x30));
  }
  return 0x30;
}

__asm__(".globl _FUN_8c10d1bc\n.set _FUN_8c10d1bc, _FUN_8c10d1bc_def\n");
//@unit 8c10d29c
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
int FUN_8c10d29c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d29c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = 0;
  *(undefined4 *)(unsigned)(iVar1 + 4 + ar4) = 0;
  iVar3 = *(int *)(unsigned)(0x84 + ar4);
  iVar1 = 0x84 + 0xc;
  iVar2 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = 0;
      if (*(short *)(unsigned)(iVar3 + 4) != 0) {
        do {
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(iVar3 + 8) + iVar1) = 0;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(unsigned)(iVar3 + 4));
      }
      iVar1 = (int)0x90;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar2 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d29c\n.set _FUN_8c10d29c, _FUN_8c10d29c_def\n");
//@unit 8c10d2f0
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
int FUN_8c10d2f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d2f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)0x114;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = *ar5;
  puVar3 = ar5 + 2;
  *(undefined4 *)(unsigned)(iVar1 + 4 + ar4) = ar5[1];
  iVar1 = (int)0x90;
  iVar4 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar5 = iVar4 * 0xc;
      iVar1 = 0;
      if (*(short *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 4) != 0) {
        do {
          puVar2 = (undefined1 *)(unsigned)((int)puVar3 + 1);
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(0xc0 + ar4 + iVar4 * 4) + iVar1) = *(undefined1 *)(unsigned)puVar3;
          puVar3 = (undefined4 *)(unsigned)((int)puVar3 + 2);
          *(undefined1 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 8) + iVar1) = *puVar2;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(uint)*(ushort *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar5 + 4));
      }
      iVar1 = (int)0x90;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d2f0\n.set _FUN_8c10d2f0, _FUN_8c10d2f0_def\n");
//@unit 8c10d366
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
int FUN_8c10d366_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d366";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = (int)0x114;
  *ar5 = *(undefined4 *)(unsigned)(iVar2 + ar4);
  iVar3 = (int)0x90;
  ar5[1] = *(undefined4 *)(unsigned)(iVar2 + 4 + ar4);
  puVar5 = ar5 + 2;
  iVar2 = 0;
  if (*(short *)(unsigned)(iVar3 + ar4) != 0) {
    do {
      iVar6 = iVar2 * 0xc;
      iVar3 = 0;
      if (*(short *)(unsigned)(*(int *)(unsigned)(0x84 + ar4) + iVar6 + 4) != 0) {
        do {
          iVar4 = (int)0x84;
          *(undefined1 *)(unsigned)puVar5 = *(undefined1 *)(unsigned)(*(int *)(unsigned)(0xc0 + ar4 + iVar2 * 4) + iVar3);
          puVar1 = (undefined1 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + iVar6 + 8) + iVar3);
          iVar3 = iVar3 + 1;
          iVar4 = (int)0x84;
          *(undefined1 *)(unsigned)((int)puVar5 + 1) = *puVar1;
          puVar5 = (undefined4 *)(unsigned)((int)puVar5 + 2);
        } while (iVar3 < (int)(uint)*(ushort *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + iVar6 + 4));
      }
      iVar3 = (int)0x90;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(unsigned)(iVar3 + ar4));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10d366\n.set _FUN_8c10d366, _FUN_8c10d366_def\n");
//@unit 8c10d3ec
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
uint FUN_8c10d3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d3ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  ushort *puVar3;
  short sVar4;
  ushort *puVar5;
  short *psVar6;
  
  iVar1 = (int)0xb4;
  puVar3 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  puVar5 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + -0xc + ar4));
  uVar2 = (uint)0xb0;
  psVar6 = ((short *)(unsigned long)*(unsigned *)(unsigned)(uVar2 + ar4));
  puVar5 = puVar3 + ((uint)puVar5[*(ushort *)(unsigned)(iVar1 + -0x18 + ar4)] - (uint)*puVar5);
  for (; puVar3 < puVar5; puVar3 = puVar3 + 1) {
    uVar2 = (uint)(short)*puVar3;
    sVar4 = (short)((int)uVar2 >> 2);
    if ((uVar2 & 1) != 0) {
      uVar2 = (uint)0x96;
      sVar4 = sVar4 + *(short *)(unsigned)(uVar2 + ar4);
    }
    if ((*puVar3 & 2) != 0) {
      uVar2 = (uint)0x94;
      sVar4 = sVar4 + *(short *)(unsigned)(uVar2 + ar4);
    }
    *psVar6 = sVar4;
    psVar6 = psVar6 + 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10d3ec\n.set _FUN_8c10d3ec, _FUN_8c10d3ec_def\n");
//@unit 8c10d458
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
undefined4 FUN_8c10d458_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d458";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x9c + ar5))))(ar5,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x14))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0xe8 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x98 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9a + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x28))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9e + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x20))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x9c + (int)ar4) = (short)uVar2;
  *(short *)(unsigned)(0x9c + 4 + (int)ar4) = -*(short *)(unsigned)((int)0x9c + (int)ar4);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x78))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xa4 + (int)ar4) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x7c))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x80 + ar5))))(ar5,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xb4 + (int)ar4) = uVar2;
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(uint)*(ushort *)(unsigned)((int)0x98 + (int)ar4) << 1,ar6,ar7));
  iVar7 = (int)0x9c;
  *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = uVar2;
  iVar7 = ((uint)(((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)0xa8 + (int)ar4)))[*(ushort *)(unsigned)(iVar7 + (int)ar4)] -
          (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)((int)0xa8 + (int)ar4))) * 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,iVar7,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d3ec(ar4,iVar7,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x38))))(ar5,iVar7,ar6,ar7));
  *(short *)(unsigned)((int)0x92 + (int)ar4) = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x70))))(ar5,iVar7,ar6,ar7));
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,iVar7,ar6,ar7));
  a5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xc))))(ar5,iVar7,a6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d196(ar4 + 0x1f,a5,a6,uVar2));
  if ((uVar3 & 0xff) == 0) {
    *(unsigned *)(unsigned)((int)0x88 + (int)ar4) = ar4 + 0x1f;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,a5,a6,uVar2));
    iVar8 = (int)0x8e;
    *(short *)(unsigned)(ar4 + 0xc) = (short)uVar2;
    iVar8 = iVar8 + (int)ar4;
    uVar3 = (uint)(short)ar4[0xc];
    a5_00 = ar4 + 0x1c;
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,a5_00,iVar8,uVar3));
    if (iVar7 != 0) {
      uVar10 = 0;
      if ((short)ar4[0xc] != 0) {
        do {
          uVar4 = uVar10;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + ar5))))(ar5,uVar10,iVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc0 + ar5))))(uVar2,uVar4,iVar8,uVar3));
          if (iVar1 == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x68))))(uVar2,uVar4,iVar8,uVar3));
          }
          else {
            iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x68))))(uVar2,uVar4,iVar8,uVar3));
            uVar3 = iVar7 + 1U >> 1;
          }
          iVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar2,uVar4,iVar8,uVar3));
          iVar7 = uVar10 * 0xc + ar4[0x1c];
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d016(ar4,iVar7,iVar8,uVar3));
          if ((uVar4 & 0xff) != 0) {
            return 1;
          }
          iVar9 = uVar10 * 4;
          if (*(int *)(unsigned)((int)ar4 + iVar9 + 0xc0) != 0) {
            iVar7 = *(int *)(unsigned)((int)ar4 + iVar9 + 0xc0);
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar7,iVar8,uVar3));
          }
          pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)(a4 + 0x10));
          iVar6 = (int)0xc0;
          a5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar2,iVar7,iVar8,uVar3));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar5))(a4,a5_00,iVar8,uVar3));
          *(undefined4 *)(unsigned)((int)ar4 + iVar9 + iVar6) = uVar2;
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(unsigned)(ar4 + 0xc));
      }
      ar4[0x21] = ar4[0x1c];
      *(undefined2 *)(unsigned)(ar4 + 0x24) = *(undefined2 *)(unsigned)((int)ar4 + 0x8e);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,a5_00,iVar8,uVar3));
      uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d0da(ar4,uVar2,iVar8,uVar3));
      if ((uVar10 & 0xff) == 0) {
        if (iVar1 == 0) {
          ar4[0x1a] = (int)((void *)(unsigned)0x8c10d7f4);
        }
        else {
          ar4[0x1a] = (int)((void *)(unsigned)0x8c10da96);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10d1bc(ar4,uVar2,iVar8,uVar3));
        return 0;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c10d458\n.set _FUN_8c10d458, _FUN_8c10d458_def\n");
//@unit 8c10d7f4
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
int FUN_8c10d7f4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
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
  
  iVar9 = *(int *)(unsigned)(0xac + ar4);
  piVar11 = (int *)(unsigned)(ar4 + 0x34);
  iVar1 = (int)0x9c;
  piVar12 = piVar11 + ar6 + -1;
  uVar3 = (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x14 + ar4))));
  iVar13 = ar6 * *(short *)(unsigned)(iVar1 + 4 + ar4);
  iVar10 = *((int *)(unsigned long)*(unsigned *)(unsigned)(0xac + -0x24 + ar4)) + iVar13 * 2;
  if (uVar3 == *(ushort *)(unsigned)(0x9a + ar4)) {
    puVar4 = (ushort *)(unsigned)(uVar3 * 2 + ar5);
    ar7_00 = (ushort *)(unsigned)((uint)*(ushort *)(unsigned)(iVar1 + ar4) * 2 + ar5);
    puVar8 = (ushort *)(unsigned)(ar6 * uVar3 * 2 + iVar10 + -2);
    while (puVar4 = puVar4 + -1, ar7_00 <= puVar4) {
      *puVar4 = (ushort)*(byte *)(unsigned)(*piVar12 + (uint)*puVar8);
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = (ushort)*(byte *)(unsigned)(*piVar5 + (uint)*puVar8) + *puVar4;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
              (*(int *)(unsigned)(ar4 + 0x2c) + (uint)*(ushort *)(unsigned)(0x9c + ar4),0,
               uVar3 - *(ushort *)(unsigned)(0x9c + ar4),ar7_00));
  }
  else {
    uVar7 = *(ushort *)(unsigned)(iVar1 + ar4) + 1;
    puVar4 = (ushort *)(unsigned)(uVar7 * 2 + *(int *)(unsigned)(ar4 + 0x28));
    if (uVar7 <= uVar3) {
      do {
        uVar6 = (uint)*puVar4;
        (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((ushort *)(unsigned)(ar6 * uVar6 * 2 + iVar10)));
        puVar8 = (ushort *)(unsigned)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(unsigned)(*piVar11 + (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38)));
        for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 1));
          *puVar8 = (ushort)*(byte *)(unsigned)(*piVar5 + (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x38))) + *puVar8;
        }
        uVar7 = uVar7 + 1;
        *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + uVar6) = 0;
        puVar4 = puVar4 + 1;
      } while ((int)uVar7 <= (int)uVar3);
    }
  }
  (*(int *)(fr0_ - 0x3c)) = 0;
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + *((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4));
  if (*(short *)(unsigned)(0x98 + ar4) != 0) {
    do {
      uVar3 = ar6 * 0xff;
      while (puVar4 < (ushort *)(unsigned)
                      ((uint)*(ushort *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 2 + *(int *)(unsigned)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(unsigned)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(unsigned)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)(unsigned)((uint)*puVar4 * ar6 * 2 + iVar10 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(unsigned)(*piVar11 + (uint)*puVar8);
          for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + *(byte *)(unsigned)(*piVar5 + (uint)*puVar8);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar3) {
          uVar3 = uVar7;
        }
      }
      *(short *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 2 + iVar9) = (short)uVar3;
      (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + 1;
    } while ((*(int *)(fr0_ - 0x3c)) < (int)(uint)*(ushort *)(unsigned)(0x98 + ar4));
  }
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa8 + ar4));
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar10 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(unsigned)((uint)*puVar4 * 2 + iVar9) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
      while( true ) {
        puVar4 = puVar4 + 1;
        (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + 1));
        if ((ushort *)(unsigned)
            ((uint)*(ushort *)(unsigned)(iVar10 * 2 + *(int *)(unsigned)(0xa8 + ar4) + 2) * 2 +
            *(int *)(unsigned)(0xa8 + ar4)) <= puVar4) break;
        iVar13 = (uint)*(ushort *)(unsigned)((uint)*puVar4 * 2 + iVar9) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
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
      *(undefined2 *)(unsigned)(ar5 + iVar10 * 2) = uVar2;
      iVar10 = iVar10 + 1;
      iVar1 = (int)0x9c;
    } while (iVar10 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10d7f4\n.set _FUN_8c10d7f4, _FUN_8c10d7f4_def\n");
//@unit 8c10da96
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
int FUN_8c10da96_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10da96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
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
  
  piVar11 = (int *)(unsigned)(ar4 + 0x34);
  iVar3 = *(int *)(unsigned)(0xac + ar4);
  iVar1 = (int)0x88;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x28 + ar4))));
  (*(uint *)(fr0_ - 0x44)) = (uint)*(ushort *)(unsigned)(iVar1 + 0x14 + ar4);
  uVar10 = (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x28));
  iVar13 = *(short *)(unsigned)(iVar1 + 0x18 + ar4) * ar6;
  piVar12 = piVar11 + ar6 + -1;
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)) + iVar13 * 2;
  if (uVar10 == *(ushort *)(unsigned)(0x9a + ar4)) {
    puVar4 = (ushort *)(unsigned)(uVar10 * 2 + ar5);
    puVar8 = (ushort *)(unsigned)(ar6 * uVar10 * 2 + iVar1 + -2);
    while (puVar4 = puVar4 + -1, (ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + ar5) <= puVar4) {
      *puVar4 = (ushort)*(byte *)(unsigned)(*piVar12 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0;
      for (piVar5 = piVar11 + ar6 + -2; puVar8 = puVar8 + -1, piVar11 <= piVar5;
          piVar5 = piVar5 + -1) {
        *puVar4 = ((ushort)*(byte *)(unsigned)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & 0xf0)
                  + *puVar4;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ff8))))
              (*(int *)(unsigned)(ar4 + 0x2c) + (uint)*(ushort *)(unsigned)(0x9c + ar4),0,
               uVar10 - *(ushort *)(unsigned)(0x9c + ar4),puVar8));
  }
  else {
    (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(ar4 + 0x28))));
    if ((*(uint *)(fr0_ - 0x44)) <= uVar10) {
      do {
        uVar6 = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
        puVar4 = (ushort *)(unsigned)(ar6 * uVar6 * 2 + iVar1);
        puVar8 = (ushort *)(unsigned)(uVar6 * 2 + ar5);
        *puVar8 = (ushort)*(byte *)(unsigned)((uint)(*puVar4 >> 1) + *piVar11) << ((*puVar4 & 1) << 2) & 0xf0;
        for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
          puVar4 = puVar4 + 1;
          *puVar8 = ((ushort)*(byte *)(unsigned)((uint)(*puVar4 >> 1) + *piVar5) << ((*puVar4 & 1) << 2) &
                    0xf0) + *puVar8;
        }
        *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + uVar6) = 0;
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1));
      } while ((int)(*(uint *)(fr0_ - 0x44)) <= (int)uVar10);
    }
  }
  uVar10 = (uint)0xf0;
  (*(uint *)(fr0_ - 0x44)) = 0;
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + *((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4));
  if (*(short *)(unsigned)((uVar10 - 0x58) + ar4) != 0) {
    do {
      uVar6 = ar6 * 0xff;
      while (puVar4 < (ushort *)(unsigned)
                      ((uint)*(ushort *)(unsigned)((*(uint *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(0xa4 + ar4) + 2) * 2 +
                      *(int *)(unsigned)(0xa4 + ar4))) {
        if (*puVar4 == *(ushort *)(unsigned)(0xe8 + ar4)) {
          uVar7 = (uint)(ushort)ar7;
        }
        else {
          puVar8 = (ushort *)(unsigned)((uint)*puVar4 * ar6 * 2 + iVar1 + iVar13 * -2);
          uVar7 = (uint)*(byte *)(unsigned)(*piVar11 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2) & uVar10;
          for (piVar5 = (int *)(unsigned)(ar4 + 0x38); piVar5 <= piVar12; piVar5 = piVar5 + 1) {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 + ((uint)*(byte *)(unsigned)(*piVar5 + (uint)(*puVar8 >> 1)) << ((*puVar8 & 1) << 2)
                            & uVar10);
          }
        }
        puVar4 = puVar4 + 1;
        if (uVar7 < uVar6) {
          uVar6 = uVar7;
        }
      }
      *(short *)(unsigned)(iVar3 + (*(uint *)(fr0_ - 0x44)) * 2) = (short)uVar6;
      (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
    } while ((int)(*(uint *)(fr0_ - 0x44)) < (int)(uint)*(ushort *)(unsigned)(0x98 + ar4));
  }
  puVar4 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(0xa8 + ar4));
  iVar1 = 0xa8 + -0xc;
  puVar4 = puVar4 + *puVar4;
  iVar13 = 0;
  if (*(short *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (uint)*(ushort *)(unsigned)(iVar3 + (uint)*puVar4 * 2) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      while( true ) {
        puVar4 = puVar4 + 1;
        (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 1));
        if ((ushort *)(unsigned)
            ((uint)*(ushort *)(unsigned)(iVar13 * 2 + *(int *)(unsigned)(0xa8 + ar4) + 2) * 2 +
            *(int *)(unsigned)(0xa8 + ar4)) <= puVar4) break;
        iVar9 = (uint)*(ushort *)(unsigned)(iVar3 + (uint)*puVar4 * 2) + (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
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
      *(undefined2 *)(unsigned)(ar5 + iVar13 * 2) = uVar2;
      iVar13 = iVar13 + 1;
      iVar1 = (int)0x9c;
    } while (iVar13 < (int)(uint)*(ushort *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10da96\n.set _FUN_8c10da96, _FUN_8c10da96_def\n");
//@unit 8c10ddaa
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
undefined4 FUN_8c10ddaa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ddaa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)),1,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0x134 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0x120 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,ar4 + 0x1b,(int)0x8c + (int)ar4,0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,ar4 + 0x1c,(int)0x8e + (int)ar4,0));
  iVar2 = 0;
  piVar1 = (int *)(unsigned)((int)0xc0 + (int)ar4);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*piVar1,vr6,vr7));
    }
    if (piVar3[1] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[1],vr6,vr7));
    }
    if (piVar3[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[2],vr6,vr7));
    }
    if (piVar3[3] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[3],vr6,vr7));
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*piVar1,vr6,vr7));
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),vr6,vr7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4[3],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4[4],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4,vr6,vr7));
  return 0;
}

__asm__(".globl _FUN_8c10ddaa\n.set _FUN_8c10ddaa, _FUN_8c10ddaa_def\n");
//@unit 8c10ddb6
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
undefined4 FUN_8c10ddb6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ddb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int *piVar1;
  int a6;
  undefined4 a7;
  int iVar2;
  int *unaff_r11 = 0;
  int *piVar3;
  int a4;
  
  a4 = *unaff_r11;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(in_r0 + (int)unaff_r11)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x134 + (int)unaff_r11),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x120 + (int)unaff_r11),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1b,(int)0x8c + (int)unaff_r11,0));
  a7 = 0;
  a6 = (int)0x8e + (int)unaff_r11;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(unaff_r11,unaff_r11 + 0x1c,a6,0));
  iVar2 = 0;
  piVar1 = (int *)(unsigned)((int)0xc0 + (int)unaff_r11);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*piVar1,a6,a7));
    }
    if (piVar3[1] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,piVar1[1],a6,a7));
    }
    if (piVar3[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,piVar1[2],a6,a7));
    }
    if (piVar3[3] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,piVar1[3],a6,a7));
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*piVar1,a6,a7));
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(unsigned)((int)0xac + (int)unaff_r11) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xac + (int)unaff_r11),a6,a7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xb0 + (int)unaff_r11),a6,a7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r11[3],a6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r11[4],a6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r11,a6,a7));
  return 0;
}

__asm__(".globl _FUN_8c10ddb6\n.set _FUN_8c10ddb6, _FUN_8c10ddb6_def\n");
//@unit 8c10df48
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
undefined4 FUN_8c10df48_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10df48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
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
  undefined8 in_dr0 = 0;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined8 in_dr12 = 0;
  double dVar15;
  ulonglong in_dr14 = 0;
  ulonglong uVar16;
  undefined8 in_xd2 = 0;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  char cVar20;
  
  fVar9 = F32HI(in_dr0);
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)(in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  iVar3 = *ar4;
  *(undefined2 *)(unsigned)((int)ar4 + 0x92) = 0xffff;
  uVar16 = in_dr14 & 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120550(ar4,0x1e,ar6,ar7));
  *(short *)(unsigned)(ar4 + 0x25) = (short)(int)fVar9;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120550(ar4,0x1f,ar6,ar7));
  *(short *)(unsigned)((int)ar4 + 0x96) = (short)(int)fVar9;
  ar4[0x17] = ar4[3] + 8;
  ar4[0x18] = ar4[3] + 0x10;
  ar4[0x19] = *(int *)(unsigned)(uint)ar4[4];
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120550(ar4,0x13,ar6,ar7));
  a5 = 0x400;
  bVar17 = 0;
  bVar18 = 0;
  bVar19 = 0;
  ar4[0x4c] = (int)fVar9 & 0xffff;
  ar4[0x49] = (int)(uVar16 >> 0x20);
  ar4[0x4a] = -0x3eec6e59;
  iVar2 = iVar3;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,0x400,ar6,ar7));
  uVar4 = 0;
  ar4[0x48] = iVar1;
  if (bVar19 == 0) {
    dVar15 = 255.0;
    puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  }
  else {
    dVar15 = 1.1125374633749587e-308;
  }
  do {
    *(uint *)(unsigned)(puVar6 + -4) = ar4[0x48] + uVar4 * 4;
    if (bVar19 == 0) {
      uVar16 = CONCAT44((int)(uVar16 >> 0x20),ar4[0x49]);
    }
    dVar12 = (double)(float)uVar16;
    if ((char)((((uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14) & 0x100000) >>
              0x14) == '\0') {
      pdVar8 = (double *)(unsigned)(puVar6 + -0xc);
      *(double *)(unsigned)(puVar6 + -0xc) = dVar12;
    }
    else {
      *(double *)(unsigned)(puVar6 + -0xc) = dVar12;
      pdVar8 = (double *)(unsigned)(puVar6 + -0x14);
      *(undefined8 *)(unsigned)(puVar6 + -0x14) = in_xd2;
    }
    fVar9 = (float)(int)uVar4;
    if ((int)uVar4 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    dVar12 = (double)(fVar9 * ((float)uVar16 - (float)ar4[0x4a])) / dVar15;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7));
    iVar1 = uVar4 + 1;
    if (bVar19 == 0) {
      *(int *)(unsigned)*(unsigned *)(unsigned)(pdVar8 + 1) = (int)(D2U(dVar12) >> 0x20);
    }
    else {
      *((double *)(unsigned long)*(unsigned *)(unsigned)(pdVar8 + 1)) = dVar12;
    }
    *(int *)(unsigned)(pdVar8 + 1) = ar4[0x48] + iVar1 * 4;
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
    (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(iVar2,a5,ar6,ar7));
    uVar4 = uVar4 + 2;
    puVar6 = (undefined1 *)(unsigned)((int)pdVar8 + 0xc);
    if (bVar19 == 0) {
      *(int *)(unsigned)*(unsigned *)(unsigned)((int)pdVar8 + 8) = (int)(D2U(dVar12) >> 0x20);
    }
    else {
      *((double *)(unsigned long)*(unsigned *)(unsigned)((int)pdVar8 + 8)) = dVar12;
    }
  } while (uVar4 < 0x100);
  cVar20 = '\0';
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120550(ar4,0x12,ar6,ar7));
  if (cVar20 == '\0') {
    ar4[0x4b] = (int)(D2U(dVar12) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x4b) = dVar12;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,(ar4[0x4c] + 1) * 4,ar6,ar7));
  ar4[0x4d] = iVar2;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,(ar4[0x4c] + 1) * 0x100,ar6,ar7));
  uVar4 = 0;
  do {
    iVar1 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(int *)(unsigned)(ar4[0x4d] + iVar1) = iVar2;
    iVar2 = iVar2 + 0x100;
  } while (uVar4 <= (uint)ar4[0x4c]);
  uVar10 = 0x3ff0000000000000;
  cVar20 = '\0';
  (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7));
  if (cVar20 == '\0') {
    *(int *)(unsigned)((int)pdVar8 + 0xc) = (int)((ulonglong)uVar10 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar8 + 0xc) = uVar10;
  }
  *(undefined4 *)(unsigned)((int)pdVar8 + 0x14) = 0;
  if (cVar20 == '\0') {
    uVar16 = CONCAT44((int)(uVar16 >> 0x20),0x437f0000);
  }
  do {
    fVar9 = (float)*(int *)(unsigned)((int)pdVar8 + 0x14);
    if (*(int *)(unsigned)((int)pdVar8 + 0x14) < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    uVar5 = 0;
    *(float *)(unsigned)((int)pdVar8 + 0x10) = fVar9 * (float)ar4[0x4b];
    iVar1 = *(int *)(unsigned)((int)pdVar8 + 0x14) * 4;
    do {
      fVar14 = (float)ar4[0x49];
      *(double *)(unsigned)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)(int)uVar5;
      if ((int)uVar5 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)(unsigned)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7));
      fVar14 = F32HI(dVar12);
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7));
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0xc);
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
      *(char *)(unsigned)(*(int *)(unsigned)(ar4[0x4d] + iVar1) + uVar5) = (char)(int)fVar9;
      iVar3 = uVar5 + 1;
      fVar14 = (float)ar4[0x49];
      *(double *)(unsigned)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar11 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)(unsigned)((int)pdVar8 + 4) - dVar11);
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7));
      dVar12 = dVar11;
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0x10);
        dVar12 = (double)(ulonglong)(uint)fVar13;
      }
      cVar20 = '\0';
      fVar14 = F32LO(dVar12);
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7));
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0xc);
        fVar14 = F32HI(dVar11);
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
      *(char *)(unsigned)(*(int *)(unsigned)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 2;
      fVar14 = (float)ar4[0x49];
      *(double *)(unsigned)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)(unsigned)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7));
      fVar14 = F32HI(dVar12);
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7));
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0xc);
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
      *(char *)(unsigned)(*(int *)(unsigned)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      iVar3 = uVar5 + 3;
      fVar14 = (float)ar4[0x49];
      *(double *)(unsigned)((int)pdVar8 + 4) = (double)fVar14;
      fVar9 = (float)iVar3;
      if (iVar3 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      dVar12 = (double)((fVar14 - (float)ar4[0x4a]) * fVar9) / dVar15;
      fVar9 = (float)(*(double *)(unsigned)((int)pdVar8 + 4) - dVar12);
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013cd8(uVar4,iVar2,ar6,ar7));
      fVar14 = F32HI(dVar12);
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0x10);
      }
      cVar20 = '\0';
      (vsp = ((unsigned long)(fr0_ - 64)), thunk_FUN_8c013dfc(uVar4,iVar2,ar6,ar7));
      if (cVar20 == '\0') {
        fVar9 = *(float *)(unsigned)((int)pdVar8 + 0xc);
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
      *(char *)(unsigned)(*(int *)(unsigned)(ar4[0x4d] + iVar1) + iVar3) = (char)(int)fVar9;
      uVar5 = uVar5 + 4;
    } while (uVar5 < 0x100);
    iVar1 = *(int *)(unsigned)((int)pdVar8 + 0x14);
    *(uint *)(unsigned)((int)pdVar8 + 0x14) = iVar1 + 1U;
  } while (iVar1 + 1U <= (uint)ar4[0x4c]);
  ar4[0x45] = 0;
  ar4[0x46] = 0;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120550(ar4,0x14,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0x47) = (char)(int)fVar13;
  *(undefined1 *)(unsigned)((int)ar4 + 0x11d) = 1;
  return 0;
}

__asm__(".globl _FUN_8c10df48\n.set _FUN_8c10df48, _FUN_8c10df48_def\n");
//@unit 8c10e6c0
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
uint FUN_8c10e6c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e6c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float extraout_fr0 = 0;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  iVar4 = 0;
  if (*(short *)(unsigned)(ar5 + 4) != 0) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(ar5 + 4));
  }
  bVar8 = 0;
  bVar9 = 0;
  bVar10 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(iVar4,ar5,ar6,ar7));
  cVar1 = (char)((((uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14) & 0x100000) >>
                0x14);
  if (cVar1 == '\0') {
    fVar2 = 255.0;
  }
  else {
    fVar2 = -0.5000001;
  }
  if (cVar1 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x124),*(undefined4 *)(unsigned)(ar4 + 0x128));
  }
  else {
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x124);
  }
  fVar2 = (extraout_fr0 * fVar2) / (F32HI(uVar6) - (float)uVar6);
  if (0.0 <= fVar2) {
    uVar7 = 0x3fe00000;
  }
  else {
    uVar7 = 0xbfe00000;
  }
  iVar4 = 0;
  uVar3 = 0;
  if (*(short *)(unsigned)(ar5 + 4) != 0) {
    do {
      iVar5 = (uint)*(byte *)(unsigned)(iVar4 + ar6) +
              (int)((double)fVar2 + (double)((ulonglong)uVar7 << 0x20));
      if (iVar5 < 0x100) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0xff;
      }
      *(char *)(unsigned)(iVar4 + ar6) = (char)iVar5;
      iVar4 = iVar4 + 1;
      uVar3 = (uint)*(ushort *)(unsigned)(ar5 + 4);
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10e6c0\n.set _FUN_8c10e6c0, _FUN_8c10e6c0_def\n");
//@unit 8c10e6d0
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
uint FUN_8c10e6d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e6d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  int unaff_r11 = 0;
  int unaff_r12 = 0;
  int unaff_r14 = 0;
  undefined8 in_dr0 = 0;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  undefined8 in_xd2 = 0;
  bool bVar15;
  byte in_FPSCR_CAUSE = 0;
  byte bVar16;
  byte in_FPSCR_DN = 0;
  byte bVar17;
  byte in_FPSCR_PR = 0;
  byte bVar18;
  byte in_FPSCR_SZ = 0;
  byte bVar19;
  
  fVar12 = F32HI(in_dr0);
  fVar14 = F32HI(in_xd2);
  iVar7 = 0;
  iVar4 = iVar7;
  if (*(short *)(unsigned)(unaff_r14 + 4) != 0) {
    do {
      iVar7 = iVar4 + 1;
      if (in_FPSCR_SZ != 0) {
        in_xd2 = *(undefined8 *)(unsigned)
                  (*(int *)(unsigned)(0x120 + unaff_r11) + (uint)*(byte *)(unsigned)(iVar4 + unaff_r12) * 4);
      }
      fVar14 = F32HI(in_xd2);
      uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar5 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar5 & 0x100000) >> 0x14);
      iVar4 = iVar7;
    } while (iVar7 < (int)(uint)*(ushort *)(unsigned)(unaff_r14 + 4));
  }
  uVar5 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar16 = 0;
  bVar17 = 0;
  bVar18 = (byte)((uVar5 & 0x80000) >> 0x13);
  bVar19 = (byte)((uVar5 & 0x100000) >> 0x14);
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(iVar7,ar5,ar6,ar7));
  uVar6 = (uint)bVar16 << 0xc | (uint)bVar17 << 0x12 | (uint)bVar18 << 0x13 | (uint)bVar19 << 0x14 |
          0x80000;
  uVar5 = (uVar6 & 0x80000) >> 0x13;
  uVar6 = (uVar6 & 0x100000) >> 0x14;
  cVar1 = (char)uVar6;
  dVar13 = (double)fVar12;
  if (cVar1 == '\0') {
    dVar11 = CONCAT44D((undefined4)(*(undefined1 *)(unsigned)0x8c10e788),(*(undefined4 *)(unsigned)(unsigned)0x8c10e77c));
  }
  else {
    dVar11 = CONCAT44D((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10e788)+4)),(undefined4)(*(undefined1 *)(unsigned)0x8c10e788));
  }
  if ((char)uVar5 == '\0') {
    dVar13 = CONCAT44D(F32HI(dVar13) *
                              F32HI(dVar11),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 * dVar11;
  }
  if (cVar1 == '\0') {
    dVar11 = (double)(ulonglong)*(uint *)(unsigned)(0x128 + unaff_r11);
  }
  iVar4 = 0x128 + -4;
  uVar5 = (uVar5 << 0x13 | uVar6 << 0x14) & 0xffe7ffff;
  if (cVar1 == '\0') {
    dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(iVar4 + unaff_r11),SUB84(dVar11,0));
  }
  else {
    dVar11 = *(double *)(unsigned)(iVar4 + unaff_r11);
  }
  uVar6 = (uVar5 & 0x80000) >> 0x13;
  if ((char)uVar6 == '\0') {
    fVar12 = F32HI(dVar11) - F32LO(dVar11);
  }
  else {
    fVar12 = (float)((ulonglong)(dVar11 - dVar11) >> 0x20);
  }
  uVar5 = uVar6 << 0x13 | uVar5 & 0xfff00000 | 0x80000 & 0x3fffff;
  cVar1 = (char)((uVar5 & 0x80000) >> 0x13);
  cVar2 = (char)((uVar5 & 0x100000) >> 0x14);
  if (cVar1 == '\0') {
    dVar13 = CONCAT44D(F32HI(dVar13) /
                              (float)((ulonglong)(double)fVar12 >> 0x20),SUB84(dVar13,0));
  }
  else {
    dVar13 = dVar13 / (double)fVar12;
  }
  if (cVar2 == '\0') {
    fVar14 = (float)dVar13;
  }
  puVar3 = ((void *)(unsigned)0x8c11fb98);
  if (cVar2 == '\0') {
    puVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c10e77c);
  }
  if (cVar1 == '\0') {
    bVar15 = (float)((ulonglong)(double)fVar14 >> 0x20) < (float)(uint)puVar3;
  }
  else {
    bVar15 = (double)fVar14 < CONCAT44D(puVar3,(*(undefined4 *)(unsigned)(unsigned)0x8c10e77c));
  }
  if (bVar15) {
    if (cVar2 == '\0') {
      dVar13 = CONCAT44D((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10e788)+4)),(*(undefined4 *)(unsigned)(unsigned)0x8c10e77c));
    }
    else {
      dVar13 = CONCAT44D((*(uint *)(unsigned)0x8c10e790),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10e788)+4)));
    }
  }
  else if (cVar2 == '\0') {
    dVar13 = CONCAT44D((undefined4)(*(undefined1 *)(unsigned)0x8c10e850),(*(undefined4 *)(unsigned)(unsigned)0x8c10e77c));
  }
  else {
    dVar13 = CONCAT44D((*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10e850)+4)),(undefined4)(*(undefined1 *)(unsigned)0x8c10e850));
  }
  dVar11 = (double)fVar14;
  iVar4 = (int)0xff;
  if (cVar2 == '\0') {
    dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c10e850)+4)));
  }
  if (cVar1 == '\0') {
    dVar11 = CONCAT44D(F32HI(dVar11) +
                              F32HI(dVar13),SUB84(dVar11,0));
  }
  else {
    dVar11 = dVar11 + dVar13;
  }
  if (cVar1 == '\0') {
    iVar7 = (int)F32HI(dVar11);
  }
  else {
    iVar7 = (int)dVar11;
  }
  iVar10 = 0;
  uVar5 = 0;
  if (*(short *)(unsigned)(unaff_r14 + 4) != 0) {
    do {
      iVar8 = (uint)*(byte *)(unsigned)(iVar10 + unaff_r12) + iVar7;
      iVar9 = iVar4;
      if ((iVar8 <= iVar4) && (iVar9 = iVar8, iVar8 < 0)) {
        iVar9 = 0;
      }
      *(char *)(unsigned)(iVar10 + unaff_r12) = (char)iVar9;
      iVar10 = iVar10 + 1;
      uVar5 = (uint)*(ushort *)(unsigned)(unaff_r14 + 4);
    } while (iVar10 < (int)uVar5);
  }
  return uVar5;
}

__asm__(".globl _FUN_8c10e6d0\n.set _FUN_8c10e6d0, _FUN_8c10e6d0_def\n");
//@unit 8c10e7de
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
uint FUN_8c10e7de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e7de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (*(short *)(unsigned)(ar4 + 4) != 0) {
    do {
      *(byte *)(unsigned)(iVar2 + ar5) =
           *(byte *)(unsigned)(*(int *)(unsigned)((uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar2) * 4 + ar6) +
                    (uint)*(byte *)(unsigned)(iVar2 + ar5));
      *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4 + 8) + iVar2) = 0;
      iVar2 = iVar2 + 1;
      uVar1 = (uint)*(ushort *)(unsigned)(ar4 + 4);
    } while (iVar2 < (int)uVar1);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10e7de\n.set _FUN_8c10e7de, _FUN_8c10e7de_def\n");
//@unit 8c10e818
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
uint FUN_8c10e818_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
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
  
  if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 100) + 0x30) == '\0') {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    pbVar4 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)))[1],
                                  ar6,ar7));
    if (pbVar4 != (byte *)(unsigned)0x0) {
      cVar8 = '\0';
      a5 = (int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)))[1];
      uVar5 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),a5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar5;
      *(uint *)(unsigned)(ar4 + 0x2c) = (uint)*(ushort *)(unsigned)(ar4 + 0x9a) * 2 + *(int *)(unsigned)(ar4 + 0x28);
      if (*(char *)(unsigned)(ar4 + 0x11d) != '\0') {
        a5 = (int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
        pcVar6 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),a5,ar6,ar7));
        cVar8 = '\x01' - *pcVar6;
      }
      if (*(char *)(unsigned)(ar4 + 0x11c) != '\0') {
        cVar8 = '\0';
      }
      bVar2 = false;
      if (cVar8 != '\0') {
        iVar7 = *(int *)(unsigned)(ar4 + 0x114) + 1;
        *(int *)(unsigned)(ar4 + 0x114) = iVar7;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_0106dc(iVar7,*(undefined4 *)(unsigned)(ar4 + 0x130),vr6,vr7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x114) = 0;
          *(int *)(unsigned)(ar4 + 0x118) = *(int *)(unsigned)(ar4 + 0x118) + 1;
          bVar2 = true;
        }
      }
      iVar7 = 0;
      (*(int *)(fr0_ - 0x28)) = 0;
      a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x84));
      if (*(short *)(unsigned)(ar4 + 0x90) != 0) {
        do {
          a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar7 * 4 + ar4 + 0xc0));
          if (cVar8 != '\0') {
            *(char *)(unsigned)(a4[2] + (uint)*pbVar4) = *(char *)(unsigned)(a4[2] + (uint)*pbVar4) + '\x01';
          }
          *(undefined4 *)(unsigned)(iVar7 * 4 + ar4 + 0x34) = *(undefined4 *)(unsigned)(*a4 + (uint)*pbVar4 * 4);
          if (bVar2) {
            ar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x134));
            a5 = a5_00;
            (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10e7de(a4,a5_00,ar6,ar7));
            if (0x13 < *(uint *)(unsigned)(ar4 + 0x118)) {
              a5 = a4;
              ar6 = a5_00;
              (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10e6c0(ar4,a4,a5_00,ar7));
            }
          }
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar7 = iVar7 + 1;
          (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + (uint)*(byte *)(unsigned)((uint)bVar1 + (int)a5_00);
          a4 = a4 + 3;
        } while (iVar7 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x90));
      }
      if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 100),a5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x68))))(ar4,uVar5,iVar7,(*(int *)(fr0_ - 0x28))));
      }
      if (0x13 < *(uint *)(unsigned)(ar4 + 0x118)) {
        *(undefined4 *)(unsigned)(ar4 + 0x118) = 0;
      }
    }
  }
  iVar7 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)))[1] * 4 + *(int *)(unsigned)(iVar7 + 0x40)) == *(int *)(unsigned)(iVar7 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10e818\n.set _FUN_8c10e818, _FUN_8c10e818_def\n");
//@unit 8c10ea24
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
uint FUN_8c10ea24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ea24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  *(char *)(unsigned)(0x11d + ar4) = (char)ar5;
  if ((char)ar5 == '\0') {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
    ar5_00 = 6;
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
  }
  else {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
    ar5_00 = 5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),ar5_00,ar6_00,0));
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea24\n.set _FUN_8c10ea24, _FUN_8c10ea24_def\n");
//@unit 8c10ea62
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
uint FUN_8c10ea62_def(int ar4,uint ar5,undefined2 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ea62";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined2 *ar6_01;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 2) {
    uVar5 = 1;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 10) {
        if (ar6 == (undefined2 *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar5,0,ar7));
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d1bc(ar4,ar5,ar6,ar7));
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d2f0(ar4,*ar7 + (int)ar6,ar6,ar7));
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(unsigned)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(unsigned)(iVar2 + *(int *)(unsigned)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xb) {
        if (ar6 != (undefined2 *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d366(ar4,*ar7 + (int)ar6,ar6,ar7));
        }
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(unsigned)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(unsigned)(iVar2 + *(int *)(unsigned)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xd) {
        ar6[1] = *(undefined2 *)(unsigned)(0x96 + ar4);
        *ar6 = *(undefined2 *)(unsigned)(0x94 + ar4);
        return 1;
      }
      if (uVar1 == 0xf) {
        *(undefined2 *)(unsigned)(0x96 + ar4) = ar6[1];
        iVar2 = (int)0x94;
        *(undefined2 *)(unsigned)(iVar2 + ar4) = *ar6;
        if (*(int *)(unsigned)(iVar2 + 0x20 + ar4) == 0) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d3ec(ar4,ar5,ar6,ar7));
        return 1;
      }
      if (uVar1 == 0x10) {
        ar6_01 = ar6;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d458(ar4,ar6,ar6,ar7));
        puVar3 = (&(*(undefined1 *)(unsigned)0x8c10dda0));
        if ((uVar1 & 0xff) == 0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar6,ar6_01,ar7));
          puVar3 = ((void *)(unsigned)0x8c10e818);
        }
        *(unsigned *)(unsigned)(ar4 + 0x18) = puVar3;
        return 1;
      }
      if (uVar1 == 0x16) {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar5,ar6,ar7));
        return 1;
      }
      if (uVar1 == 0x17) {
        (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
        uVar5 = 7;
LAB_8c10eaee:
        uVar5 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),uVar5,ar6_00,ar6));
        return uVar5;
      }
      if (uVar1 == 0x18) {
        (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
        uVar5 = 6;
        ar6 = (undefined2 *)(unsigned)0x0;
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
        goto LAB_8c10eaee;
      }
      if (uVar1 != (int)0xff) {
        return 0;
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10ddaa(ar4,ar5,ar6,ar7));
      goto LAB_8c10ec56;
    }
    uVar5 = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10ea24(ar4,uVar5,ar6,ar7));
LAB_8c10ec56:
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea62\n.set _FUN_8c10ea62, _FUN_8c10ea62_def\n");
//@unit 8c10ec78
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
int FUN_8c10ec78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ec78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10dda0))); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c10df48)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10ea62)); unsigned long t3_ = (unsigned long)(
                     (int)0x138); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,3,ar7); });
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(iVar1 + 0x70) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x84) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x88) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10ec78\n.set _FUN_8c10ec78, _FUN_8c10ec78_def\n");
//@unit 8c10ecd8
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
undefined4 * FUN_8c10ecd8_def(float *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ecd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
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
  puVar1 = ((undefined4 *)(unsigned)0x8c10eda0);
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
      fVar12 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c1274f8) + uVar6 * 4);
      fVar14 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c127538) + uVar6 * 4);
      iVar8 = 4;
      puVar1 = ((undefined4 *)(unsigned)0x8c10f100);
      fVar13 = 0.0;
      (*(uint *)(fr0_ - 0x5c)) = 1;
      fVar11 = 1.0;
      if (1 < uVar9) {
        do {
          fVar16 = fVar12 * fVar11 - fVar14 * fVar13;
          fVar13 = fVar11 * fVar14 + fVar12 * fVar13;
          fVar11 = fVar16 * fVar16 - fVar13 * fVar13;
          fVar17 = fVar13 * fVar16 * 2.0;
          pfVar7 = (float *)(unsigned)((uVar4 * 4 - iVar8) + (int)ar4);
          pfVar5 = (float *)(unsigned)(iVar8 + (int)ar4);
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
            puVar1 = (undefined4 *)(unsigned)0x1c;
            pfVar5 = pfVar5 + uVar4 * 4;
            *pfVar2 = fVar19 - fVar18;
            *pfVar3 = fVar18 + fVar19;
            pfVar7 = pfVar7 + uVar4 * 4;
          } while (pfVar5 < pfVar10);
          (*(uint *)(fr0_ - 0x5c)) = (*(uint *)(fr0_ - 0x5c)) + 1;
          iVar8 = iVar8 + 4;
          fVar11 = fVar16;
        } while ((*(uint *)(fr0_ - 0x5c)) < uVar9);
      }
    } while (uVar4 * 4 < ar5);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c10ecd8\n.set _FUN_8c10ecd8, _FUN_8c10ecd8_def\n");
//@unit 8c10f108
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
undefined8 * FUN_8c10f108_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f108";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  ulonglong in_dr2 = 0;
  float in_fr5 = 0;
  float fVar6;
  float fVar7;
  char cVar8;
  
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ecd8(ar5,ar4,ar6,ar7));
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
      pfVar4 = (float *)(unsigned)(uVar1 * 4 + ar5);
      if (cVar8 == '\0') {
        in_fr5 = *pfVar4;
      }
      pfVar2 = (float *)(unsigned)(ar4 * 4 + ar5);
      if (cVar8 == '\0') {
        fVar7 = *pfVar2;
        fVar5 = in_fr5;
      }
      else {
        fVar7 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
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
  return ((undefined1 *)(unsigned)0x8c10f160);
}

__asm__(".globl _FUN_8c10f108\n.set _FUN_8c10f108, _FUN_8c10f108_def\n");
//@unit 8c10f110
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
undefined8 * FUN_8c10f110_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f110";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int unaff_r14 = 0;
  double in_dr2 = 0;
  undefined4 in_fr5 = 0;
  float fVar7;
  double dVar6;
  double in_dr6 = 0;
  float fVar8;
  double in_xd2 = 0;
  double in_xd4 = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ecd8(unaff_r14,ar5,ar6,ar7));
  uVar2 = 1;
  uVar4 = ar4 >> 1;
  if (in_FPSCR_SZ == 0) {
    dVar6 = CONCAT44D((undefined4)(*(undefined1 *)(unsigned)0x8c10f160),in_fr5);
  }
  else {
    dVar6 = CONCAT44D(0xffe7ffff,(undefined4)(*(undefined1 *)(unsigned)0x8c10f160));
  }
  if (1 < uVar4) {
    do {
      ar4 = ar4 - 1;
      pdVar5 = (double *)(unsigned)(uVar2 * 4 + unaff_r14);
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      }
      else {
        in_xd4 = *pdVar5;
      }
      pdVar3 = (double *)(unsigned)(ar4 * 4 + unaff_r14);
      uVar1 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      if (in_FPSCR_SZ == 0) {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr6,0));
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),SUB84(dVar6,0));
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
      fVar8 = F32HI(in_dr6);
      if (in_FPSCR_PR == 0) {
        fVar7 = F32HI(dVar6);
        dVar6 = CONCAT44D(fVar7,(F32LO(dVar6) + fVar8) * fVar7);
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(F32LO(in_dr2) - fVar8) * fVar7
                                 );
      }
      else {
        dVar6 = (dVar6 + in_dr6) * (dVar6 + in_dr6);
        in_dr2 = (in_dr2 - in_dr6) * dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        *(int *)(unsigned)pdVar3 = SUB84(in_dr2,0);
        *(int *)(unsigned)pdVar5 = SUB84(dVar6,0);
      }
      else {
        *pdVar3 = in_xd2;
        *pdVar5 = in_xd4;
      }
    } while (uVar2 < uVar4);
  }
  return ((undefined1 *)(unsigned)0x8c10f160);
}

__asm__(".globl _FUN_8c10f110\n.set _FUN_8c10f110, _FUN_8c10f110_def\n");
//@unit 8c10f168
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
undefined4 FUN_8c10f168_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(unsigned)(ar4 + 0x2c);
  pfVar2 = ar5 + uVar1;
  iVar3 = *(int *)(unsigned)(ar4 + 0x34);
  pfVar6 = ar6 + *(int *)(unsigned)(ar4 + 0x30);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c10f22a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f22a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  int ar4_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0 = 0;
  char cVar7;
  
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     (*(char *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)))[1] + 0x30) != '\x01')) {
    if (*(char *)(unsigned)(ar4 + 0x3c) == '\0') {
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(puVar5,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
      uVar6 = puVar5[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111fbe(*puVar5,uVar6,ar6,ar7));
    }
    else {
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      ar7 = 1;
      ar6 = *(undefined4 *)(unsigned)(ar4 + 0x44);
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(puVar5,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
      uVar6 = puVar5[1];
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111e72(*puVar5,uVar6,ar6,1));
      if ((uVar2 & 0xff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(unsigned)(ar4 + 0x44);
        ar6 = *(undefined4 *)(unsigned)(ar4 + 0x40);
        uVar6 = 0;
        (vsp = ((unsigned long)(fr0_ - 20)), memset(*(int *)(unsigned)(ar4 + 0x2c) * 4 + iVar4,0,ar6,ar7));
      }
    }
    if (iVar4 != 0) {
      uVar6 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111dfe(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 4),uVar6,ar6,ar7));
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)) = uVar6;
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10f108(*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,ar6,ar7));
      ar4_00 = ar4;
      uVar6 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4));
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10f168(ar4,iVar4,(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),ar7));
      cVar7 = '\0';
      (vsp = ((unsigned long)(fr0_ - 20)), thunk_FUN_8c013dfc(ar4_00,iVar4,uVar6,ar7));
      uVar1 = in_dr0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = (*(undefined8 *)(fr0_ - 0x14));
      }
      (*(undefined8 *)(fr0_ - 0x14)) = uVar1;
      cVar7 = '\0';
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111cdc(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),&(*(undefined8 *)(fr0_ - 0x14)),1,ar7));
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((undefined4)(*(undefined8 *)(fr0_ - 0x14)),0xc1daf5c2);
      }
      sVar3 = (short)(int)((F32HI((*(undefined8 *)(fr0_ - 0x14))) + (float)(*(undefined8 *)(fr0_ - 0x14))) * 4.3429446 *
                          100.0);
      if (0x708 < sVar3) {
        sVar3 = 0x708;
      }
      if ((int)*(short *)(unsigned)(ar4 + 0x48) < (int)sVar3) {
        *(short *)(unsigned)(ar4 + 0x48) = sVar3;
      }
      else {
        *(short *)(unsigned)(ar4 + 0x48) =
             (short)((uint)((*(short *)(unsigned)(ar4 + 0x48) + 0x1c20) * 64000) >> 0x10) + -0x1c20;
      }
    }
  }
  iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar4 + 0x40)) == *(int *)(unsigned)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10f22a\n.set _FUN_8c10f22a, _FUN_8c10f22a_def\n");
//@unit 8c10f39a
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
undefined4 FUN_8c10f39a_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f39a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    *ar6 = (int)(ar4 + 0x12);
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    if ((char)ar4[0xf] != '\0') {
      ar5 = ar4[0x11];
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c10f39a\n.set _FUN_8c10f39a, _FUN_8c10f39a_def\n");
//@unit 8c10f41e
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
undefined4 FUN_8c10f41e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f41e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  
  iVar4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,3,ar6,ar7));
  (*(float *)(fr0_ - 0x1c)) = (float)(int)(short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,4,ar6,ar7));
  uVar5 = (int)F32HI(in_dr0) & 0xffff;
  ar4[0xb] = uVar5;
  uVar1 = (uint)(*(ushort *)(unsigned)(*(int *)(unsigned)(uint)ar4[3] + 0xc) >> 2);
  ar4[10] = uVar1;
  if (uVar5 < uVar1) {
    uVar2 = 1;
  }
  else {
    if ((uint)ar4[10] < uVar5) {
      *(undefined1 *)(unsigned)(ar4 + 0xf) = 1;
      ar4[0x10] = (uVar5 - ar4[10]) * 4;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x10))))(iVar4,uVar5 << 2,ar6,ar7));
      ar4[0x11] = iVar4;
    }
    *(undefined2 *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = 4;
    *(short *)(unsigned)(*(int *)(unsigned)(ar4[4] + 4) + 0xc) = ((short)(uVar5 >> 1) + 1) * 4;
    uVar2 = 1;
    cVar12 = '\0';
    piVar3 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,1,ar6,ar7));
    fVar8 = F32HI(in_dr0);
    (*(float *)(fr0_ - 0x20)) = fVar8;
    if (cVar12 != '\0') {
      (*(float *)(fr0_ - 0x20)) = (float)in_dr0;
      (*(float *)(fr0_ - 0x1c)) = fVar8;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = fVar8 * (*(float *)(fr0_ - 0x20));
    fVar6 = (float)(int)(*(float *)(fr0_ - 0x1c)) * 2.0;
    fVar10 = 2.0;
    (*(float *)(fr0_ - 0x24)) = fVar6;
    (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7));
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
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,2,ar6,ar7));
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x24)) = fVar10;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    lVar7 = CONCAT44(0x3f7ff972,fVar6);
    fVar6 = (fVar8 * (*(float *)(fr0_ - 0x24))) / fVar6;
    (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7));
    fVar8 = F32HI(lVar7);
    lVar11 = lVar7;
    if (cVar12 == '\0') {
      fVar6 = 2.1474836e+09;
      lVar11 = (ulonglong)(uint)fVar8 << 0x20;
    }
    fVar10 = F32HI(lVar11);
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
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,5,ar6,ar7));
    if (cVar12 == '\0') {
      ar4[0xe] = (int)((ulonglong)lVar7 >> 0x20);
    }
    else {
      *(longlong *)(unsigned)(ar4 + 0xe) = lVar7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10f41e\n.set _FUN_8c10f41e, _FUN_8c10f41e_def\n");
//@unit 8c10f632
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
undefined4 FUN_8c10f632_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f632";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c10f22a)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c10f41e)); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10f392))); unsigned long t3_ = (unsigned long)(0x4c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,2); });
  return uVar1;
}

__asm__(".globl _FUN_8c10f632\n.set _FUN_8c10f632, _FUN_8c10f632_def\n");
//@unit 8c10f69c
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
undefined4 FUN_8c10f69c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f69c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(unsigned)(ar4 + 0x30);
  puVar2 = ar5 + 2;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *puVar2 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + iVar1);
      puVar2 = puVar2 + 1;
    } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  *puVar2 = *(undefined4 *)(unsigned)(ar4 + 0x48);
  puVar2[1] = *(undefined4 *)(unsigned)(ar4 + 0x4c);
  puVar2[2] = *(undefined4 *)(unsigned)(ar4 + 0x50);
  puVar2[3] = *(undefined4 *)(unsigned)(ar4 + 0x54);
  return 0x54;
}

__asm__(".globl _FUN_8c10f69c\n.set _FUN_8c10f69c, _FUN_8c10f69c_def\n");
//@unit 8c10f6f0
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
undefined4 FUN_8c10f6f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = *ar5;
  puVar1 = ar5 + 2;
  *(short *)(unsigned)(ar4 + 0x30) = (short)ar5[1];
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      uVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar2 * 4) = uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = *puVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = puVar1[1];
  *(undefined4 *)(unsigned)(ar4 + 0x50) = puVar1[2];
  *(undefined4 *)(unsigned)(ar4 + 0x54) = puVar1[3];
  return 0x54;
}

__asm__(".globl _FUN_8c10f6f0\n.set _FUN_8c10f6f0, _FUN_8c10f6f0_def\n");
//@unit 8c10f736
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
undefined4 FUN_8c10f736_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f736";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + ar5))))(ar5,1,1,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x54))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x58) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x58))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x59) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x5c))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x5a) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x60))))(uVar3,vr5,vr6,vr7));
  *(undefined1 *)(unsigned)(ar4 + 0x5b) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 100))))(uVar3,vr5,vr6,vr7));
  *(ushort *)(unsigned)(ar4 + 0x5c) = uVar2 & 0xff;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar4;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 100) = uVar4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + ar5))))(uVar3,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0x68) = uVar3;
  if ((uint)*(byte *)(unsigned)(ar4 + 0x58) != *(int *)(unsigned)(ar4 + 0x70) - *(int *)(unsigned)(ar4 + 0x74)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,0x66,vr6,vr7));
    return uVar3;
  }
  *(int *)(unsigned)(0x90 + ar4) = ar5;
  return 0;
}

__asm__(".globl _FUN_8c10f736\n.set _FUN_8c10f736, _FUN_8c10f736_def\n");
//@unit 8c10f742
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
undefined4 FUN_8c10f742_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f742";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((in_r0 + unaff_r13))))(unaff_r13,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x54))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x58) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x58))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x59) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x5c))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x5a) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x60))))(uVar1,ar5,ar6,ar7));
  *(char *)(unsigned)(unaff_r14 + 0x5b) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 100))))(uVar1,ar5,ar6,ar7));
  *(ushort *)(unsigned)(unaff_r14 + 0x5c) = (ushort)uVar2 & 0xff;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb8 + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 100) = uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xbc + unaff_r13))))(uVar1,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(unaff_r14 + 0x68) = uVar1;
  if ((uint)*(byte *)(unsigned)(unaff_r14 + 0x58) != *(int *)(unsigned)(unaff_r14 + 0x70) - *(int *)(unsigned)(unaff_r14 + 0x74))
  {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(0x66,vr5,vr6,vr7));
    return uVar1;
  }
  *(int *)(unsigned)(0x90 + unaff_r14) = unaff_r13;
  return 0;
}

__asm__(".globl _FUN_8c10f742\n.set _FUN_8c10f742, _FUN_8c10f742_def\n");
//@unit 8c10f850
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
undefined4 FUN_8c10f850_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f850";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a7;
  uint uVar1;
  int a5;
  short sVar2;
  bool bVar4;
  uint uVar3;
  
  a7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x90 + ar4) + 0x6c))))(*(int *)(unsigned)(0x90 + ar4),ar5,ar6,ar7));
  a5 = 0;
  uVar3 = 0;
  sVar2 = 0;
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      if ((*(uint *)(unsigned)(uVar1 * 8 + a7) & ar5) != 0) {
        a5 = a5 + 1;
        uVar3 = uVar1;
      }
      sVar2 = (short)uVar3;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  bVar4 = a5 == 1;
  if (bVar4 != (bool)*(char *)(unsigned)(ar4 + 0x32)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fa6c(ar4,a5,0,a7));
  }
  if ((bVar4) && (*(short *)(unsigned)(ar4 + 0x30) = sVar2 + 1, *(int *)(unsigned)(ar4 + 0x28) == 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
  }
  *(bool *)(unsigned)(ar4 + 0x32) = bVar4;
  *(uint *)(unsigned)(ar4 + 0x2c) = ar5;
  return 0x32;
}

__asm__(".globl _FUN_8c10f850\n.set _FUN_8c10f850, _FUN_8c10f850_def\n");
//@unit 8c10f8e6
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
uint FUN_8c10f8e6_def(int *ar4,uint ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10f8e6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  int a5;
  undefined4 ar6_00;
  int iVar2;
  uint uVar3;
  
  iVar2 = *ar4;
  uVar1 = ar5 & 0xff;
  uVar3 = 1;
  if (uVar1 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f736(ar4,ar6,ar6,ar7));
    uVar3 = (uint)((uVar1 & 0xff) == 0);
  }
  else if (uVar1 == 2) {
    *(char *)(unsigned)((int)ar6 + ar4[0x1b] + 1) = (char)ar7;
  }
  else if (uVar1 == 3) {
    if ((ar4[0x12] != 0) || (ar6 != (int *)(unsigned)0x0)) {
      if ((short)ar4[0xc] == 0) {
        ar4[0x15] = (int)((float)ar4[0x22] + 1.0);
      }
      ar4[10] = 1;
    }
  }
  else {
    if (uVar1 == 4) {
      (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[3]));
      ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
      ar5_00 = 7;
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          if (ar6 != (int *)(unsigned)0x0) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f6f0(ar4,*ar7 + (int)ar6,ar6,ar7));
            *ar7 = *ar7 + (ar4[0x1e] + 6) * 4;
            return 1;
          }
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10fa6c(ar4,ar5,0,ar7));
          return 1;
        }
        if (uVar1 == 7) {
          if (ar6 != (int *)(unsigned)0x0) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f69c(ar4,*ar7 + (int)ar6,ar6,ar7));
          }
          iVar2 = *ar7 + (ar4[0x1e] + 6) * 4;
        }
        else {
          if (uVar1 == 8) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f850(ar4,*ar6,ar6,ar7));
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
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x11],ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0xd],ar6,ar7));
            a5 = ar4[0x1b];
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,a5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c120668(ar4,a5,ar6,ar7));
            return 1;
          }
          iVar2 = ar4[0x12];
        }
        *ar7 = iVar2;
        return 1;
      }
      (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[3]));
      ar5_00 = 6;
      ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),ar5_00,ar6_00,ar6));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10f8e6\n.set _FUN_8c10f8e6, _FUN_8c10f8e6_def\n");
//@unit 8c10fa6c
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
undefined4 FUN_8c10fa6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fa6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x30) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = *(undefined4 *)(unsigned)(ar4 + 0x34);
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x34);
  uVar2 = 0;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + iVar1) = 0;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
  return 0x54;
}

__asm__(".globl _FUN_8c10fa6c\n.set _FUN_8c10fa6c, _FUN_8c10fa6c_def\n");
//@unit 8c10fab2
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
undefined4 FUN_8c10fab2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fab2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  longlong in_dr0 = 0;
  float fVar9;
  ulonglong uVar8;
  undefined4 uVar10;
  float fVar11;
  undefined8 in_dr4 = 0;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd14 = 0;
  char cVar16;
  
  fVar11 = F32HI(in_dr4);
  if (*(float *)(unsigned)(ar4 + 0x4c) <= (float)*(int *)(unsigned)(ar4 + 0x8c)) {
    *(float *)(unsigned)(ar4 + 0x4c) = *(float *)(unsigned)(ar4 + 0x4c) + fVar11;
  }
  fVar9 = *(float *)(unsigned)(ar4 + 0x54) + fVar11;
  *(float *)(unsigned)(ar4 + 0x54) = fVar9;
  if (*(int *)(unsigned)(ar4 + 0x50) < *(int *)(unsigned)(ar4 + 0x84)) {
    *(int *)(unsigned)(ar4 + 0x50) = *(int *)(unsigned)(ar4 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar8 = CONCAT44(fVar9,(float)*(int *)(unsigned)(ar4 + 0x50));
  lVar15 = (ulonglong)(uint)fVar11 << 0x20;
  uVar14 = (ulonglong)(uint)(1.0 / (float)*(int *)(unsigned)(ar4 + 0x50));
  pfVar7 = (float *)(unsigned)(ar5 + *(int *)(unsigned)(ar4 + 0x74) * 4);
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      cVar16 = '\0';
      uVar10 = (undefined4)in_dr4;
      if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60));
        ar4_00 = pfVar7 + (*(int *)(unsigned)(ar4 + 0x70) - *(int *)(unsigned)(ar4 + 0x74));
        uVar12 = 0x7f7fffff7f7fffff;
        iVar4 = 0;
        uVar13 = uVar12;
        if (*(char *)(unsigned)(ar4 + 0x59) != '\0') {
          do {
            ar5 = (int)pfVar7;
            uVar12 = in_xd14;
            if (cVar16 == '\0') {
              uVar12 = CONCAT44((int)lVar15,(int)in_dr4);
            }
            for (; in_dr4 = uVar12, (uint)ar5 < ar4_00; ar5 = (int)(ar5 + 4)) {
              if (cVar16 == '\0') {
                uVar8 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),*(float *)(unsigned)ar5);
              }
              else {
                in_xd4 = *(undefined8 *)(unsigned)ar5;
              }
              cVar16 = '\0';
              fVar11 = (float)in_dr4 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + F32HI(in_dr4);
              in_dr4 = CONCAT44(fVar9,fVar11);
              if (F32HI(uVar13) < fVar9) break;
              puVar3 = puVar3 + 1;
              uVar12 = in_dr4;
              cVar16 = '\0';
            }
            if ((float *)(unsigned)ar5 == ar4_00) {
              iVar5 = iVar4;
              uVar12 = in_dr4;
              if (cVar16 == '\0') {
                uVar12 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),(int)uVar13);
              }
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((int)ar4_00 - ar5,4,vr6,vr7));
              puVar3 = puVar3 + iVar2;
              uVar12 = uVar13;
            }
            uVar10 = (undefined4)in_dr4;
            iVar4 = iVar4 + 1;
            uVar13 = uVar12;
          } while (iVar4 < (int)(uint)*(byte *)(unsigned)(ar4 + 0x59));
        }
        fVar11 = F32HI(in_dr0);
        in_dr4 = in_xd6;
        if (cVar16 == '\0') {
          in_dr4 = CONCAT44((int)uVar12,uVar10);
        }
        ar6_00 = (int *)(unsigned)((uint)*(byte *)(unsigned)(ar4 + 0x5a) * iVar5 * 4 + *(int *)(unsigned)(ar4 + 100));
        iVar5 = 0;
        if (*(char *)(unsigned)(ar4 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(unsigned)(*ar6_00 * 4 + *(int *)(unsigned)(ar4 + 0x68));
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
                fVar11 = *(float *)(unsigned)ar5;
                ar5 = ar5 + 4;
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)ar5 >> 0x20);
                ar5 = ar5 + 8;
              }
              cVar16 = '\0';
              fVar11 = fVar11 - (float)uVar8;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = F32HI(uVar12);
              fVar11 = fVar11 * fVar11 + (float)uVar12;
              uVar12 = CONCAT44(fVar9,fVar11);
              cVar1 = '\0';
              uVar13 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = F32HI(in_dr0);
            ar6_00 = ar6_00 + 1;
            in_dr4 = uVar12;
            if (((float *)(unsigned)ar5 == ar4_00) && (in_dr4 = in_xd4, cVar16 == '\0')) {
              in_dr4 = CONCAT44((int)uVar12,(int)uVar12);
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unsigned)(ar4 + 0x5a));
        }
        ain0 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar6 * 4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5); });
        fVar11 = fVar11 * F32HI(lVar15) -
                 *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar14 + *ain0;
        uVar8 = (ulonglong)(uint)fVar11;
        *ain0 = fVar11;
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + *(int *)(unsigned)(ar4 + 0x70);
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fab2\n.set _FUN_8c10fab2, _FUN_8c10fab2_def\n");
//@unit 8c10fabc
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
undefined4 FUN_8c10fabc_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fabc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  double *ar4_00;
  uint *puVar3;
  int *ar6_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_r13 = 0;
  double *pdVar7;
  int unaff_r14 = 0;
  undefined1 *puVar8;
  longlong in_dr0 = 0;
  float fVar9;
  float fVar11;
  ulonglong uVar10;
  undefined4 uVar12;
  double in_dr4 = 0;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  undefined8 in_dr14 = 0;
  float fVar17;
  longlong lVar16;
  undefined8 in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd14 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  char cVar18;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x1c)) = CONCAT44D((int)in_dr14,(undefined4)(*(undefined8 *)(fr0_ - 0x1c)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x1c))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar8 = ((undefined1 *)(fr0_ - 0x20));
  }
  else {
    puVar8 = ((undefined1 *)(fr0_ - 0x2c));
    (*(undefined8 *)(fr0_ - 0x1c)) = in_xd14;
  }
  *(undefined4 *)(unsigned)(puVar8 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unsigned)(unaff_r14 + 0x4c);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x4c) >> 0x20);
  }
  fVar9 = (float)*(int *)(unsigned)(ain0 + unaff_r14);
  dVar13 = in_dr4;
  if (in_FPSCR_SZ == '\0') {
    dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)in_dr14);
  }
  fVar17 = F32HI(dVar13);
  if (in_FPSCR_PR != '\0' || fVar11 <= fVar9) {
    if (in_FPSCR_SZ == '\0') {
      fVar9 = *(float *)(unsigned)(unaff_r14 + 0x4c);
    }
    else {
      in_xd2 = *(undefined8 *)(unsigned)(unaff_r14 + 0x4c);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = fVar9 + fVar17;
    }
    else {
      fVar9 = SUB84(CONCAT44D(fVar11,fVar9) + dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(unaff_r14 + 0x4c) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(unaff_r14 + 0x4c) = in_xd2;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    fVar11 = *(float *)(unsigned)(unaff_r14 + 0x54);
  }
  else {
    fVar11 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x54) >> 0x20);
  }
  *(float *)(unsigned)(unaff_r14 + 0x54) = fVar11 + fVar17;
  if (*(int *)(unsigned)(unaff_r14 + 0x50) < *(int *)(unsigned)(unaff_r14 + 0x84)) {
    *(int *)(unsigned)(unaff_r14 + 0x50) = *(int *)(unsigned)(unaff_r14 + 0x50) + 1;
  }
  uVar6 = 0;
  uVar10 = CONCAT44(fVar11 + fVar17,(float)*(int *)(unsigned)(unaff_r14 + 0x50));
  lVar16 = (ulonglong)(uint)fVar17 << 0x20;
  uVar15 = (ulonglong)(uint)(1.0 / (float)*(int *)(unsigned)(unaff_r14 + 0x50));
  pdVar7 = (double *)(unsigned)(unaff_r13 + *(int *)(unsigned)(unaff_r14 + 0x74) * 4);
  if (*(int *)(unsigned)(unaff_r14 + 0x78) != 0) {
    do {
      cVar18 = '\0';
      uVar12 = SUB84(in_dr4,0);
      if (*(char *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x6c) + uVar6 + 1) != '\0') {
        iVar5 = -1;
        puVar3 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x60));
        ar4_00 = (double *)(unsigned)
                 ((int)pdVar7 + *(int *)(unsigned)(unaff_r14 + 0x74) * -4 + *(int *)(unsigned)(unaff_r14 + 0x70) * 4);
        dVar13 = 1.4044474254567505e+306;
        iVar4 = 0;
        dVar14 = dVar13;
        if (*(char *)(unsigned)(unaff_r14 + 0x59) != '\0') {
          do {
            ar5 = pdVar7;
            dVar13 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = CONCAT44D((int)lVar16,SUB84(in_dr4,0));
            }
            for (; in_dr4 = dVar13, ar5 < ar4_00; ar5 = (double *)(unsigned)((int)ar5 + 4)) {
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)ar5);
              }
              else {
                in_xd4 = *ar5;
              }
              cVar18 = '\0';
              fVar11 = F32LO(in_dr4) - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = fVar11 * fVar11 + F32HI(in_dr4);
              in_dr4 = CONCAT44D(fVar9,fVar11);
              if (F32HI(dVar14) < fVar9) break;
              puVar3 = puVar3 + 1;
              dVar13 = in_dr4;
              cVar18 = '\0';
            }
            if (ar5 == ar4_00) {
              iVar5 = iVar4;
              dVar13 = in_dr4;
              if (cVar18 == '\0') {
                dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar14,0));
              }
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), libgcc_divide_helper_010468((int)ar4_00 - (int)ar5,4,vr6,vr7));
              puVar3 = puVar3 + iVar2;
              dVar13 = dVar14;
            }
            uVar12 = SUB84(in_dr4,0);
            iVar4 = iVar4 + 1;
            dVar14 = dVar13;
          } while (iVar4 < (int)(uint)*(byte *)(unsigned)(unaff_r14 + 0x59));
        }
        fVar11 = F32HI(in_dr0);
        in_dr4 = in_xd6;
        if (cVar18 == '\0') {
          in_dr4 = CONCAT44D(SUB84(dVar13,0),uVar12);
        }
        ar6_00 = (int *)(unsigned)((uint)*(byte *)(unsigned)(unaff_r14 + 0x5a) * iVar5 * 4 + *(int *)(unsigned)(unaff_r14 + 100));
        iVar5 = 0;
        if (*(char *)(unsigned)(unaff_r14 + 0x5a) != '\0') {
          do {
            puVar3 = (uint *)(unsigned)(*ar6_00 * 4 + *(int *)(unsigned)(unaff_r14 + 0x68));
            ar5 = pdVar7;
            dVar13 = in_dr4;
            cVar1 = cVar18;
            dVar14 = in_xd14;
            if (cVar18 == '\0') {
              dVar13 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),(int)lVar16);
              dVar14 = in_xd4;
            }
            do {
              in_xd4 = dVar14;
              cVar18 = cVar1;
              if (ar4_00 <= ar5) break;
              if (cVar18 == '\0') {
                uVar10 = (ulonglong)*puVar3;
                puVar3 = puVar3 + 1;
                fVar11 = *(float *)(unsigned)ar5;
                ar5 = (double *)(unsigned)((int)ar5 + 4);
              }
              else {
                puVar3 = puVar3 + 2;
                fVar11 = (float)((ulonglong)*ar5 >> 0x20);
                ar5 = ar5 + 1;
              }
              cVar18 = '\0';
              fVar11 = fVar11 - (float)uVar10;
              in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
              fVar9 = F32HI(dVar13);
              fVar11 = fVar11 * fVar11 + F32LO(dVar13);
              dVar13 = CONCAT44D(fVar9,fVar11);
              cVar1 = '\0';
              dVar14 = in_xd4;
            } while (fVar11 <= fVar9);
            fVar11 = F32HI(in_dr0);
            ar6_00 = ar6_00 + 1;
            in_dr4 = dVar13;
            if ((ar5 == ar4_00) && (in_dr4 = in_xd4, cVar18 == '\0')) {
              in_dr4 = CONCAT44D(SUB84(dVar13,0),SUB84(dVar13,0));
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)*(byte *)(unsigned)(unaff_r14 + 0x5a));
        }
        *(uint *)(unsigned)(puVar8 + -8) = *(int *)(unsigned)(unaff_r14 + 0x44) + uVar6 * 4;
        ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar8 + -8)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c11fbb6(ar4_00,ar5,ar6_00,iVar5); });
        fVar11 = fVar11 * F32HI(lVar16) -
                 *(float *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x44) + uVar6 * 4);
        in_dr0 = (ulonglong)(uint)fVar11 << 0x20;
        fVar11 = fVar11 * (float)uVar15 + *((float *)(unsigned long)*(unsigned *)(unsigned)(puVar8 + -8));
        uVar10 = (ulonglong)(uint)fVar11;
        *((float *)(unsigned long)*(unsigned *)(unsigned)(puVar8 + -8)) = fVar11;
      }
      uVar6 = uVar6 + 1;
      pdVar7 = (double *)(unsigned)((int)pdVar7 + *(int *)(unsigned)(unaff_r14 + 0x70) * 4);
    } while (uVar6 < *(uint *)(unsigned)(unaff_r14 + 0x78));
  }
  return 0x78;
}

__asm__(".globl _FUN_8c10fabc\n.set _FUN_8c10fabc, _FUN_8c10fabc_def\n");
//@unit 8c10fc96
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
undefined4 FUN_8c10fc96_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fc96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  int ar4_00;
  undefined4 *puVar4;
  int a4;
  float extraout_fr3 = 0;
  float fVar5;
  float fVar6;
  char cVar7;
  
  a4 = *(int *)(unsigned)(ar4 + 0x40);
  ar4_00 = *(int *)(unsigned)(ar4 + 0xc);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112170(ar4_00,*(int *)(unsigned)(ar4 + 0x78) + 1,ar6,ar7));
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar1 = 1;
    if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
      do {
        if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + uVar1) != '\0') {
          puVar4 = (undefined4 *)(unsigned)(uVar1 * 8 + ar4_00);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*puVar4,puVar4[1],ar6,ar7));
          ar6 = *(int *)(unsigned)(ar4 + 0x70) << 2;
          (vsp = ((unsigned long)(fr0_ - 0)), memmove(a4,uVar2,ar6,ar7));
        }
        uVar1 = uVar1 + 1;
        a4 = a4 + *(int *)(unsigned)(ar4 + 0x70) * 4;
      } while (uVar1 <= *(uint *)(unsigned)(ar4 + 0x78));
    }
    cVar7 = '\0';
    pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6
                                   ,ar7));
    if (cVar7 == '\0') {
      fVar6 = *pfVar3;
    }
    else {
      fVar6 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar3 >> 0x20);
    }
    if (*(char *)(unsigned)(ar4 + 0x32) == '\0') {
      fVar5 = extraout_fr3;
      if (cVar7 == '\0') {
        fVar5 = 0.0009999999;
      }
      if (fVar5 < fVar6) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fab2(ar4,*(undefined4 *)(unsigned)(ar4 + 0x40),ar6,ar7));
      }
    }
    *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + 1;
    uVar2 = 0x40;
    if (a4 == *(int *)(unsigned)(ar4 + 0x38)) {
      a4 = *(int *)(unsigned)(ar4 + 0x34);
    }
    *(int *)(unsigned)(ar4 + 0x40) = a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10fc96\n.set _FUN_8c10fc96, _FUN_8c10fc96_def\n");
//@unit 8c10fd82
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
int FUN_8c10fd82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fd82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  fVar3 = 3.4028235e+38;
  uVar2 = 0;
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
    do {
      if ((*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + uVar1 + 1) != '\0') &&
         (*(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + uVar1 * 4) < fVar3)) {
        fVar3 = *(float *)(unsigned)(uVar1 * 4 + *(int *)(unsigned)(ar4 + 0x44));
        uVar2 = uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 0x78));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x54) = 0;
  return uVar2 + 1;
}

__asm__(".globl _FUN_8c10fd82\n.set _FUN_8c10fd82, _FUN_8c10fd82_def\n");
//@unit 8c10fe04
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
undefined4 FUN_8c10fe04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fe04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x48;
  if ((*(int *)(unsigned)(ar4 + 0x48) != 0) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)), uVar1 = 0, iVar2 != 0)) {
    if ((*(char *)(unsigned)(ar4 + 0x32) == '\0') &&
       ((*(int *)(unsigned)(ar4 + 0x28) == 0 || ((float)*(int *)(unsigned)(ar4 + 0x88) < *(float *)(unsigned)(ar4 + 0x54))))) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fd82(ar4,ar5,ar6,ar7));
      *(short *)(unsigned)(ar4 + 0x30) = (short)uVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar2,(*(ushort *)(unsigned)(ar4 + 0x30) - 1) * *(int *)(unsigned)(ar4 + 0x70) * 4 + *(int *)(unsigned)(ar4 + 0x3c),
            *(int *)(unsigned)(ar4 + 0x70) << 2,ar7));
    iVar2 = *(int *)(unsigned)(ar4 + 0x3c) + *(int *)(unsigned)(ar4 + 0x80) * 4;
    *(int *)(unsigned)(ar4 + 0x3c) = iVar2;
    uVar1 = 0x48;
    if (iVar2 == *(int *)(unsigned)(ar4 + 0x38)) {
      *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + -1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10fe04\n.set _FUN_8c10fe04, _FUN_8c10fe04_def\n");
//@unit 8c10fe0a
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
undefined4 FUN_8c10fe0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fe0a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r14 = 0;
  float fVar4;
  byte in_FPSCR_CAUSE = 0;
  byte bVar5;
  byte in_FPSCR_DN = 0;
  byte bVar6;
  byte in_FPSCR_PR = 0;
  byte bVar7;
  byte in_FPSCR_SZ = 0;
  byte bVar8;
  
  if (*(int *)(unsigned)(in_r0 + unaff_r14) == 0) {
    return in_r0;
  }
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar5 = 0;
  bVar6 = 0;
  bVar7 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar8 = (byte)((uVar3 & 0x100000) >> 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(char *)(unsigned)(unaff_r14 + 0x32) == '\0') {
    if (*(int *)(unsigned)(unaff_r14 + 0x28) != 0) {
      uVar3 = ((uint)bVar5 << 0xc | (uint)bVar6 << 0x12 | (uint)bVar7 << 0x13 | (uint)bVar8 << 0x14)
              & 0xffe7ffff;
      if ((char)((uVar3 & 0x100000) >> 0x14) == '\0') {
        fVar4 = *(float *)(unsigned)(unaff_r14 + 0x54);
      }
      else {
        fVar4 = (float)((ulonglong)*(undefined8 *)(unsigned)(unaff_r14 + 0x54) >> 0x20);
      }
      if ((char)((uVar3 & 0x80000) >> 0x13) != '\0' ||
          fVar4 <= (float)*(int *)(unsigned)(0x88 + unaff_r14)) goto LAB_8c10fe62;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fd82(unaff_r14,ar5,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x30) = (short)uVar2;
  }
LAB_8c10fe62:
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (iVar1,(*(ushort *)(unsigned)(unaff_r14 + 0x30) - 1) * *(int *)(unsigned)(unaff_r14 + 0x70) * 4 +
                   *(int *)(unsigned)(unaff_r14 + 0x3c),*(int *)(unsigned)(unaff_r14 + 0x70) << 2,ar7));
  iVar1 = *(int *)(unsigned)(unaff_r14 + 0x3c) + *(int *)(unsigned)(0x80 + unaff_r14) * 4;
  *(int *)(unsigned)(unaff_r14 + 0x3c) = iVar1;
  if (iVar1 == *(int *)(unsigned)(unaff_r14 + 0x38)) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x3c) = *(undefined4 *)(unsigned)(unaff_r14 + 0x34);
  }
  *(int *)(unsigned)(unaff_r14 + 0x48) = *(int *)(unsigned)(unaff_r14 + 0x48) + -1;
  return 0x48;
}

__asm__(".globl _FUN_8c10fe0a\n.set _FUN_8c10fe0a, _FUN_8c10fe0a_def\n");
//@unit 8c10fece
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
undefined4 FUN_8c10fece_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fece";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * ain1 = (int *)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int a4;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  float extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  
  a4 = *unaff_r14;
  *ain1 = *(byte *)(unsigned)(unaff_r14 + 2) - 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,5,ar6,ar7));
  unaff_r14[0x1d] = (int)extraout_fr0 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  unaff_r14[0x1c] = (int)extraout_fr0_00 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  unaff_r14[0x1f] = (int)extraout_fr0_01 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0x21] = (int)(short)(int)extraout_fr0_02;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  unaff_r14[0x22] = (int)(short)(int)extraout_fr0_03;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,4,ar6,ar7));
  uVar2 = 4;
  unaff_r14[0x23] = (int)(short)(int)extraout_fr0_04;
  unaff_r14[0x20] = unaff_r14[0x1e] * unaff_r14[0x1c];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[0x1f] * unaff_r14[0x20],4,ar7));
  unaff_r14[0xd] = iVar1;
  unaff_r14[0xe] = unaff_r14[0x1f] * unaff_r14[0x20] * 4 + unaff_r14[0xd];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,unaff_r14[0x1e] << 2,uVar2,ar7));
  unaff_r14[0x11] = iVar1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,unaff_r14[0x1e] + 1,uVar2,ar7));
  unaff_r14[0x1b] = iVar1;
  uVar2 = 1;
  iVar1 = unaff_r14[0x1e] + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r14[0x1b],1,iVar1,ar7));
  *(short *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = (short)unaff_r14[0x1c] << 2;
  unaff_r14[0xb] = -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fa6c(unaff_r14,uVar2,iVar1,ar7));
  return 0;
}

__asm__(".globl _FUN_8c10fece\n.set _FUN_8c10fece, _FUN_8c10fece_def\n");
