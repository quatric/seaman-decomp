//@unit 8c110060
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110060_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  iVar1 = *(int *)(unsigned)(unaff_r14 + 0x28);
  if (iVar1 == 0) {
    if (*(int *)(unsigned)(unaff_r14 + 0x48) == *(int *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
    }
    if (*(uint *)(unsigned)(unaff_r14 + 0x48) < *(uint *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fc96(unaff_r14,ar5,ar6,ar7));
    }
    if ((float)*(int *)(unsigned)(unaff_r14 + 0x8c) < *(float *)(unsigned)(unaff_r14 + 0x4c)) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
    if (*(int *)(unsigned)(unaff_r14 + 0x48) == 0) {
      *(undefined4 *)(unsigned)(unaff_r14 + 0x28) = 2;
    }
  }
  else if (iVar1 == 2) {
    if (*(uint *)(unsigned)(unaff_r14 + 0x48) < *(uint *)(unsigned)(unaff_r14 + 0x7c)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fc96(unaff_r14,ar5,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fe04(unaff_r14,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x28) != 1) {
    uVar2 = 0;
    do {
      if ((*(char *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x6c) + uVar2) != '\0') &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(uVar2 * 8 + *(int *)(unsigned)(unaff_r14 + 0xc)) + 0x40) +
                  *(int *)(unsigned)(uVar2 * 8 + *(int *)(unsigned)(unaff_r14 + 0xc) + 4) * 4) ==
          *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0xc) + uVar2 * 8) + 0x3c))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 <= *(uint *)(unsigned)(unaff_r14 + 0x78));
  }
  return 1;
}

__asm__(".globl _FUN_8c110060\n.set _FUN_8c110060, _FUN_8c110060_def\n");
//@unit 8c110158
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110158_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110158";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11005c))); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10fec4))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10f8e6)); unsigned long t3_ = (unsigned long)(
                     (int)0x94); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,4,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c110158\n.set _FUN_8c110158, _FUN_8c110158_def\n");
//@unit 8c11033c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11033c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11033c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (int)0xc4;
  iVar2 = *ar4;
  uVar4 = 0;
  uVar3 = *(int *)(unsigned)(iVar1 + iVar2) * 8 +
          *(int *)(unsigned)(iVar1 + -0x38 + iVar2) * *(int *)(unsigned)(iVar1 + -0x3c + iVar2) * 2 +
          (*(int *)(unsigned)(iVar1 + -0x30 + iVar2) + 1) * 2 + *(int *)(unsigned)(iVar1 + -0x2c + iVar2) * 2 +
          (*(int *)(unsigned)(iVar1 + -0x28 + iVar2) + 1) * 2 + *(int *)(unsigned)(iVar1 + -0x24 + iVar2) * 4 +
          (int)0xd4;
  iVar2 = iVar2 + uVar3 + ((uVar3 * 2 ^ uVar3) & 3);
  if (ar5 != 0) {
    do {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1104d2(ar4,iVar2,ar6,ar7));
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + uVar3 + ((uVar3 << 1 ^ uVar3) & 3);
    } while (uVar4 < ar5);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11033c\n.set _FUN_8c11033c, _FUN_8c11033c_def\n");
//@unit 8c11034c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11034c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11034c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  uint unaff_r10 = 0;
  int *unaff_r11 = 0;
  uint uVar3;
  
  iVar1 = *unaff_r11;
  uVar3 = 0;
  uVar2 = *(int *)(unsigned)(in_r0 + iVar1) * 8 +
          *(int *)(unsigned)(in_r0 + -0x38 + iVar1) * *(int *)(unsigned)(in_r0 + -0x3c + iVar1) * 2 +
          (*(int *)(unsigned)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(unsigned)(in_r0 + -0x2c + iVar1) * 2 +
          (*(int *)(unsigned)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(unsigned)(in_r0 + -0x24 + iVar1) * 4 +
          (int)0xd4;
  iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
  if (unaff_r10 != 0) {
    do {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1104d2(unaff_r11,iVar1,ar6,ar7));
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
    } while (uVar3 < unaff_r10);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11034c\n.set _FUN_8c11034c, _FUN_8c11034c_def\n");
//@unit 8c1103ea
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1103ea_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1103ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11033c(ar4,*(undefined4 *)(unsigned)((int)0x88 + *ar4),ar6,ar7));
  return *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0xb8) * 4 + iVar1);
}

__asm__(".globl _FUN_8c1103ea\n.set _FUN_8c1103ea, _FUN_8c1103ea_def\n");
//@unit 8c110414
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c110414_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110414";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11033c(ar4,*(undefined4 *)(unsigned)(0x88 + iVar3),ar6,ar7));
  uVar2 = (iVar1 + *(int *)(unsigned)(*(int *)(unsigned)(0xb8 + iVar3) * 4 + iVar1) * 2) - iVar3;
  return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}

__asm__(".globl _FUN_8c110414\n.set _FUN_8c110414, _FUN_8c110414_def\n");
//@unit 8c110460
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c110460_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a5;
  int iVar1;
  
  a5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c110414(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1104b2(ar4,a5,ar6,ar7));
  return iVar1 + a5;
}

__asm__(".globl _FUN_8c110460\n.set _FUN_8c110460, _FUN_8c110460_def\n");
//@unit 8c1104b2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1104b2_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1104b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar5[1] * 2 + 8 + (*(int *)(unsigned)((int)0xc8 + *ar4) + 1) * 2 + (*ar5 + 1) * 2;
}

__asm__(".globl _FUN_8c1104b2\n.set _FUN_8c1104b2, _FUN_8c1104b2_def\n");
//@unit 8c1104d2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1104d2_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1104d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = ar5[3];
  if (*(short *)(unsigned)((int)0xd0 + *ar4) == 0) {
    uVar1 = ar5[5];
  }
  else {
    uVar1 = ar5[5] + 1U >> 1;
  }
  uVar1 = *ar5 * ar5[1] * 4 + ar5[1] * ar5[2] * 4 + *ar5 * iVar2 * 4 + iVar2 * 4 + iVar2 * uVar1 +
          0x18;
  if (*(short *)(unsigned)((int)0xd2 + *ar4) != 0) {
    uVar1 = uVar1 + ((uVar1 * 2 ^ uVar1) & 3) + ar5[3] * ar5[3] * 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1104d2\n.set _FUN_8c1104d2, _FUN_8c1104d2_def\n");
//@unit 8c11066a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11066a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11066a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove((&(*(undefined1 *)(unsigned)0x8c127b20)),(int)0xd4,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c11066a\n.set _FUN_8c11066a, _FUN_8c11066a_def\n");
//@unit 8c110680
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c110680_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110680";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  
  cVar6 = '\0';
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') ||
     (*(uint *)(unsigned)(ar4 + 0x48) < *(uint *)(unsigned)(ar4 + 0x2c))) {
    uVar4 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    pfVar1 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar4,ar6,ar7));
    if (pfVar1 == (float *)(unsigned)0x0) {
      if (*(char *)(unsigned)(ar4 + 0x28) != '\0') {
        iVar3 = *(int *)(unsigned)(ar4 + 0x48);
        while (iVar3 != 0) {
          cVar6 = '\0';
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar4,ar6,ar7));
          if (iVar3 == 0) break;
          if (cVar6 == '\0') {
            uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*(undefined4 *)(unsigned)(ar4 + 0x34));
          }
          else {
            uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
          }
          *(bool *)(unsigned)iVar3 = (float)uVar5 < F32HI(uVar5);
          iVar3 = *(int *)(unsigned)(ar4 + 0x48) + -1;
          *(int *)(unsigned)(ar4 + 0x48) = iVar3;
        }
        if (*(int *)(unsigned)(ar4 + 0x48) == 0) {
          *(undefined1 *)(unsigned)(ar4 + 0x28) = 0;
        }
        return (int)*(char *)(unsigned)(ar4 + 0x28);
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c)));
      }
      else {
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
      }
      *(float *)(unsigned)(ar4 + 0x44) = F32HI(uVar5) - (float)uVar5;
      pfVar2 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c));
      *(unsigned *)(unsigned)(ar4 + 0x3c) = pfVar2 + 1;
      *pfVar2 = *pfVar1;
      *(float *)(unsigned)(ar4 + 0x44) = *(float *)(unsigned)(ar4 + 0x44) + *pfVar1;
      if (*(int *)(unsigned)(ar4 + 0x3c) == *(int *)(unsigned)(ar4 + 0x40)) {
        *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x38);
      }
      if (*(int *)(unsigned)(ar4 + 0x48) == *(int *)(unsigned)(ar4 + 0x2c)) {
        cVar6 = '\0';
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar4,ar6,ar7));
        if (cVar6 == '\0') {
          uVar5 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x44),*(undefined4 *)(unsigned)(ar4 + 0x34));
        }
        else {
          uVar5 = *(undefined8 *)(unsigned)(ar4 + 0x44);
        }
        *(bool *)(unsigned)uVar4 = (float)uVar5 < F32HI(uVar5);
      }
      else {
        *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + 1;
      }
    }
  }
  iVar3 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar3 + 0x40)) == *(int *)(unsigned)(iVar3 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110680\n.set _FUN_8c110680, _FUN_8c110680_def\n");
//@unit 8c1107b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1107b0_def(int *ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c1107b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int a5;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 1) {
    *(undefined1 *)(unsigned)(ar4 + 10) = 1;
  }
  else if (uVar1 == (int)0xf8) {
    *ar7 = ar4[0x12];
  }
  else {
    if (uVar1 != (int)0xff) {
      return 0;
    }
    a5 = ar4[0xe];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,a5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c1107b0\n.set _FUN_8c1107b0, _FUN_8c1107b0_def\n");
//@unit 8c110818
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  char cVar2;
  
  iVar1 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  unaff_r14[0xb] = (int)extraout_fr0 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0xc] = (int)extraout_fr0_00 & 0xffff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  cVar2 = '\0';
  unaff_r14[0xd] = (int)(float)(int)(short)(int)extraout_fr0_01;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x14))))(iVar1,unaff_r14[0xc],4,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1108b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1108b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c110680)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110810))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c1107b0)); unsigned long t3_ = (unsigned long)(0x4c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c1108b0\n.set _FUN_8c1108b0, _FUN_8c1108b0_def\n");
//@unit 8c110908
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110908_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110908";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *piVar5;
  uint ar5_00;
  int iVar6;
  undefined4 ar6_00;
  int unaff_r14 = 0;
  float extraout_fr3 = 0;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = '\0';
  bVar1 = *(byte *)(unsigned)(unaff_r14 + 8);
  iVar4 = *(int *)(unsigned)(unaff_r14 + 0xc);
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)) + ain1) != '\x01') {
    ar6_00 = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
    ar5_00 = (uint)*(byte *)(unsigned)(unaff_r14 + 8);
    uVar9 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112074(*(undefined4 *)(unsigned)(unaff_r14 + 0xc),ar5_00,ar6_00,ar7));
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
    if (*(char *)(unsigned)(unaff_r14 + 8) != '\0') {
      do {
        if (*(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x28) + uVar2 * 4) != 0) {
          if (cVar10 == '\0') {
            fVar7 = *((float *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x28) + uVar2 * 4));
          }
          cVar10 = '\0';
          uVar9 = CONCAT44(F32HI(uVar9) + fVar8,(float)uVar9 + fVar7);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(byte *)(unsigned)(unaff_r14 + 8));
    }
    pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0x10)),ar5_00,ar6_00,ar7));
    *pfVar3 = (float)uVar9 / F32HI(uVar9);
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r14 + 0xc));
  while( true ) {
    if ((int *)(unsigned)((uint)bVar1 * 8 + iVar4) <= piVar5) {
      return 1;
    }
    iVar6 = *piVar5;
    if ((*(int *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x2c) + piVar5[1] * 4) != 0) &&
       (*(int *)(unsigned)(*(int *)(unsigned)(iVar6 + 0x40) + piVar5[1] * 4) == *(int *)(unsigned)(iVar6 + 0x3c))) break;
    piVar5 = piVar5 + 2;
  }
  return 0;
}

__asm__(".globl _FUN_8c110908\n.set _FUN_8c110908, _FUN_8c110908_def\n");
//@unit 8c1109d2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1109d2_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1109d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a5;
  
  if ((ar5 & 0xff) == (int)0xff) {
    a5 = ar4[10];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(ar4,a5,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1109d2\n.set _FUN_8c1109d2, _FUN_8c1109d2_def\n");
//@unit 8c110a30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110a30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = 4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,(uint)*(byte *)(unsigned)(ar4 + 2) << 2,ar6,ar7));
  ar4[10] = iVar1;
  return 0;
}

__asm__(".globl _FUN_8c110a30\n.set _FUN_8c110a30, _FUN_8c110a30_def\n");
//@unit 8c110a5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110a5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110a5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110900))); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c110a30)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c1109d2)); unsigned long t3_ = (unsigned long)(0x2c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,3,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c110a5c\n.set _FUN_8c110a5c, _FUN_8c110a5c_def\n");
//@unit 8c110a90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined8 * FUN_8c110a90_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110a90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  puVar1 = ((undefined1 *)(unsigned)0x8c110bd0);
  if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar6 * 4;
      *ar6 = 10.0;
      pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2));
      puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar5 = pfVar3 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + iVar2);
      pfVar4 = (float *)(unsigned)(*(int *)(unsigned)((int)puVar1 + iVar2) * 4 + ar5);
      for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *ar6 = fVar7 * *pfVar3 + *ar6;
      }
      uVar6 = uVar6 + 1;
      ar6 = ar6 + 1;
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x28));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c110a90\n.set _FUN_8c110a90, _FUN_8c110a90_def\n");
//@unit 8c110aea
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c110aea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110aea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    uVar2 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar2,ar6,ar7));
    if (iVar1 != 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar2,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c110a90(ar4,iVar1,uVar2,ar7));
    }
  }
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar1 + 0x40)) == *(int *)(unsigned)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110aea\n.set _FUN_8c110aea, _FUN_8c110aea_def\n");
//@unit 8c110b58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110b58_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint uVar1;
  int iVar2;
  
  if (ar4[0xb] != 0) {
    uVar1 = 0;
    iVar2 = *ar4;
    if (ar4[10] != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)(ar4[0xb] + uVar1 * 4),vr6,vr7));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)ar4[10]);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0xb],vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0xc],vr6,vr7));
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0xd],vr6,vr7));
    ar4[0xb] = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c110b58\n.set _FUN_8c110b58, _FUN_8c110b58_def\n");
//@unit 8c110b5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110b5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint uVar1;
  int a4;
  int *unaff_r14 = 0;
  
  if (unaff_r14[0xb] != 0) {
    uVar1 = 0;
    a4 = *unaff_r14;
    if (unaff_r14[10] != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)(unaff_r14[0xb] + uVar1 * 4),ar6,ar7));
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)unaff_r14[10]);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0xb],ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0xc],ar6,ar7));
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0xd],ar6,ar7));
    unaff_r14[0xb] = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c110b5c\n.set _FUN_8c110b5c, _FUN_8c110b5c_def\n");
//@unit 8c110bec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c110bec_def(undefined4 ar4,undefined4 ar5,int ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c110bec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int a6;
  uint *a7;
  uint uVar2;
  undefined4 unaff_r14 = 0;
  char in_T = 0;
  undefined4 in_PR = 0;
  
  uVar2 = 1;
  if (in_T == '\x01') {
    a6 = ar6;
    a7 = ar7;
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c110b58(unaff_r14,ar5,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar6 + 0x3c))))(ar6,ar5,a6,a7));
    if (*ar7 < uVar1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar6 + 0x6c))))(ar6,ar5,a6,a7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c110c80(unaff_r14,ar5,a6,a7));
      uVar2 = (uint)((uVar2 & 0xff) == 0);
      *ar7 = *ar7 + 1;
    }
  }
  else if (ain0 == 0xff) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c110b58(unaff_r14,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c110bec\n.set _FUN_8c110bec, _FUN_8c110bec_def\n");
//@unit 8c110c80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110c80_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110c80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
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
  undefined8 in_dr0 = 0;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  double dVar14;
  undefined8 in_dr4 = 0;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  char cVar21;
  
  fVar13 = F32HI(in_dr0);
  fVar16 = F32HI(in_dr4);
  a4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c120550(ar4,2,ar6,ar7));
  fVar18 = fVar13;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c120550(ar4,3,ar6,ar7));
  ar4[0xe] = (int)fVar16;
  uVar3 = ((int)fVar13 & 0xffffU) >> 1;
  uVar9 = uVar3 + 1;
  iVar5 = uVar9 * 4;
  iVar1 = a4;
  a5 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,iVar5,ar6,ar7));
  if (a5 == (float *)(unsigned)0x0) {
LAB_8c1110d4:
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1204c4(ar4,100,ar6,ar7));
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
      (vsp = ((unsigned long)(fr0_ - 4)), thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7));
      if (cVar21 == '\0') {
        fVar12 = 0.69314694;
      }
      *pfVar6 = fVar17 * (fVar13 / fVar12) + 10.0;
      pfVar6 = pfVar6 + 1;
      fVar13 = fVar17;
    }
    if (fVar19 <= fVar18) {
      fVar13 = 4.4765625;
      (vsp = ((unsigned long)(fr0_ - 4)), thunk_FUN_8c013dfc(iVar1,iVar5,ar6,ar7));
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
    fVar13 = F32HI(dVar11);
    ar4[10] = (int)dVar14;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c120550(ar4,4,ar6,ar7));
    if (ar4[10] == ((int)fVar13 & 0xffffU)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[10],4,ar7));
      ar4[0xb] = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[10],4,ar7));
      ar4[0xc] = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[10],4,ar7));
      ar4[0xd] = iVar1;
      ar6 = 4;
      pfVar6 = (float *)(unsigned)(uint)ar4[10];
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,pfVar6,4,ar7));
      if ((((ar4[0xb] != 0) && (ar4[0xc] != 0)) && (ar4[0xd] != 0)) && (iVar1 != 0)) {
        uVar3 = 0;
        if (ar4[10] != 0) {
          do {
            iVar5 = uVar3 * 4;
            *(undefined4 *)(unsigned)(ar4[0xd] + iVar5) = 0;
            *(undefined4 *)(unsigned)(ar4[0xc] + iVar5) = 0xffffffff;
            fVar13 = (float)(int)(uVar3 + 1);
            if (fVar13 < 0.0) {
              fVar13 = fVar13 + 4.2949673e+09;
            }
            if (uVar3 < 10) {
              *(float *)(unsigned)(iVar1 + uVar3 * 4) = fVar13 * 100.0;
            }
            else {
              fVar18 = -2.0;
              (vsp = ((unsigned long)(fr0_ - 4)), thunk_FUN_8c014064(iVar5,pfVar6,ar6,ar7));
              *(float *)(unsigned)(iVar1 + uVar3 * 4) = fVar18 * fVar19;
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
                *(int *)(unsigned)(ar4[0xd] + iVar5) = *(int *)(unsigned)(ar4[0xd] + iVar5) + iVar7;
                if ((iVar7 != 0) && (*(int *)(unsigned)(ar4[0xc] + iVar5) == -1)) {
                  *(uint *)(unsigned)(ar4[0xc] + iVar5) = uVar4;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar9);
            }
            iVar7 = ar4[0xb];
            ar6 = 4;
            cVar21 = '\0';
            uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,*(undefined4 *)(unsigned)(ar4[0xd] + iVar5),4,ar7));
            *(undefined4 *)(unsigned)(iVar7 + iVar5) = uVar2;
            if (*(int *)(unsigned)(ar4[0xb] + iVar5) == 0) goto LAB_8c1110d4;
            pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4[0xb] + iVar5));
            uVar4 = 0;
            pfVar8 = pfVar6;
            if (*(int *)(unsigned)(ar4[0xd] + iVar5) != 0) {
              do {
                iVar7 = *(int *)(unsigned)(ar4[0xc] + iVar5) + uVar4;
                if (cVar21 == '\0') {
                  fVar18 = a5[iVar7];
                }
                else {
                  fVar18 = (float)((ulonglong)*(undefined8 *)(unsigned)(a5 + iVar7) >> 0x20);
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
              } while (uVar4 < *(uint *)(unsigned)(ar4[0xd] + iVar5));
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[10]);
        }
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,a5,ar6,ar7));
        return 0;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1204c4(ar4,100,ar6,ar7));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c110c80\n.set _FUN_8c110c80, _FUN_8c110c80_def\n");
//@unit 8c11116e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11116e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11116e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float extraout_fr0 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,ar6,ar7));
  *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc) = (short)((int)extraout_fr0 << 2);
  return 0;
}

__asm__(".globl _FUN_8c11116e\n.set _FUN_8c11116e, _FUN_8c11116e_def\n");
//@unit 8c1111a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1111a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1111a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c110aea)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c11116e)); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110be0))); unsigned long t3_ = (unsigned long)(0x3c); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c1111a0\n.set _FUN_8c1111a0, _FUN_8c1111a0_def\n");
//@unit 8c111208
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c111208_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int a5;
  int ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  
  (*(char *)(fr0_ - 0x24)) = '\0';
  iVar4 = ar5 * 4;
  iVar1 = 0;
  a5 = ar4[0xe];
joined_r0x8c111238:
  do {
    if (a5 == 0) {
      return (int)(*(char *)(fr0_ - 0x24));
    }
    ar7_00 = *(int *)(unsigned)(*(int *)(unsigned)(a5 + 8) + iVar4);
    if (-1 < ar7_00) {
      iVar2 = ar7_00;
      if ((ar6 == 0) && (ar7_00 == 0)) {
        iVar2 = -1;
      }
      *(int *)(unsigned)(*(int *)(unsigned)(a5 + 8) + iVar4) = iVar2 - ar6;
      if (iVar2 - ar6 < 0) {
        iVar3 = *(int *)(unsigned)(a5 + 0xc);
        iVar2 = *(int *)(unsigned)(a5 + 4) + -1;
        *(int *)(unsigned)(a5 + 4) = iVar2;
        if (iVar2 == 0) {
          *(int *)(unsigned)(iVar3 + 4) = *(int *)(unsigned)(iVar3 + 4) + -1;
        }
        (*(char *)(fr0_ - 0x24)) = '\x01';
        iVar2 = *ar4;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1209ec(iVar3,*(undefined4 *)(unsigned)(ar4[0xd] + iVar4),iVar2,ar7_00));
        if (*(int *)(unsigned)(a5 + 4) == 0) {
          iVar3 = *(int *)(unsigned)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(unsigned)(iVar1 + 0x10) = iVar3;
          }
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)(a5 + 8),iVar2,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,iVar2,ar7_00));
          a5 = iVar3;
          goto joined_r0x8c111238;
        }
      }
    }
    iVar1 = a5;
    a5 = *(int *)(unsigned)(a5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c111208\n.set _FUN_8c111208, _FUN_8c111208_def\n");
//@unit 8c1112e2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1112e2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1112e2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar2 = 0;
  uVar3 = 0;
  if (*(char *)(unsigned)(ar4 + 8) != '\0') {
    do {
      if ((*(int *)(unsigned)(*piVar4 + 0x38) != 0) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*piVar4,piVar4[1],0,ar7));
        uVar2 = uVar2 | uVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < *(byte *)(unsigned)(ar4 + 8));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1112e2\n.set _FUN_8c1112e2, _FUN_8c1112e2_def\n");
//@unit 8c1112ee
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1112ee_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1112ee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int unaff_r12 = 0;
  uint uVar2;
  int *piVar3;
  
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r12 + 0xc));
  uVar2 = ar4;
  if (ar4 < *(byte *)(unsigned)(unaff_r12 + 8)) {
    do {
      if ((*(int *)(unsigned)(*piVar3 + 0x38) != 0) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*piVar3,piVar3[1],0,ar7));
        ar4 = ar4 | uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(unsigned)(unaff_r12 + 8));
  }
  return ar4;
}

__asm__(".globl _FUN_8c1112ee\n.set _FUN_8c1112ee, _FUN_8c1112ee_def\n");
//@unit 8c111342
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c111342_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111342";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(int *)(unsigned)(in_r0 + *(int *)(unsigned)(ar4 + 0x40)) != *(int *)(unsigned)(ar4 + 0x3c)) {
        in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(in_r0 + iVar1)) {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
          break;
        }
        if (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(ar4 + 0x28)) {
          in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
          if ((*(uint *)(unsigned)(in_r0 + iVar1) < *(uint *)(unsigned)(ar4 + 0x28)) &&
             (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
          if ((*(uint *)(unsigned)(in_r0 + iVar1) < *(uint *)(unsigned)(ar4 + 0x28)) ||
             (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(int *)(unsigned)(ar4 + 0x2c);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  if (uVar2 == *(uint *)(unsigned)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c111342\n.set _FUN_8c111342, _FUN_8c111342_def\n");
//@unit 8c1113d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1113d0_def(int *ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1113d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  bool bVar1;
  int *piVar2;
  int *extraout_r2 = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
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
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
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
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1117e4(ar4,(uint)*(ushort *)(unsigned)((int)ar4 + 0xe),1,ar7));
  }
  else if ((char)ar5 == '\x03') {
    ar4[6] = ar4[5];
    ar4[0xf] = 0;
    uVar10 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(undefined4 *)(unsigned)(ar4[0x10] + iVar8) = 0;
      } while (uVar10 < (uint)ar4[5]);
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1117e4(ar4,ar6,1,ar7));
  }
  else if ((char)ar5 == '\x04') {
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        iVar8 = uVar3 * 4;
        uVar3 = uVar3 + 1;
        *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
        *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      } while (uVar3 < (uint)ar4[5]);
    }
    ar4[10] = ar4[9];
    *(undefined1 *)(unsigned)(ar4 + 0xc) = 0;
    ar4[6] = 0;
    uVar3 = 0;
    if (ar4[5] != 0) {
      do {
        uVar4 = uVar3 + 1;
        *(undefined4 *)(unsigned)(uVar3 * 4 + ar4[0xb]) = 0;
        uVar3 = uVar4;
      } while (uVar4 < (uint)ar4[5]);
    }
    iVar8 = ar4[0xe];
    while (iVar8 != 0) {
      if (*(int *)(unsigned)(iVar8 + 0xc) != ar6) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120948(*(undefined4 *)(unsigned)(iVar8 + 0xc),*ar4,uVar7,ar7));
        uVar10 = uVar10 | uVar3;
      }
      iVar9 = *(int *)(unsigned)(iVar8 + 0x10);
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar8,uVar7,ar7));
      iVar8 = iVar9;
    }
    ar4[0xe] = 0;
  }
  else if ((char)ar5 == '\x05') {
    if (*(int *)(unsigned)(ar4[0xb] + iVar8) == 0) {
      *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      if (ar4[6] == 0) {
        ar4[10] = ar4[9];
      }
      ar4[6] = ar4[6] + 1;
    }
  }
  else if ((char)ar5 == '\x06') {
    if ((*(int *)(unsigned)(ar4[0xb] + iVar8) != 0) && (ar4[0xe] == 0)) {
      iVar5 = *(int *)(unsigned)(ar4[0xb] + iVar8);
      *(int *)(unsigned)(ar4[0xb] + iVar8) = 0;
      iVar9 = ar4[6];
      ar4[6] = iVar9 + -1;
      if (iVar9 + -1 == 0) {
        ar4[10] = ar4[9];
      }
      else if (iVar5 == ar4[10]) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c111342(ar4,iVar5,1,ar7); });
      }
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
    }
  }
  else if ((char)ar5 == '\a') {
    if (*(int *)(unsigned)(ar4[0xb] + iVar8) == 0) {
      *(int *)(unsigned)(ar4[0xb] + iVar8) = ar4[9];
      *(int *)(unsigned)(ar4[0x10] + iVar8) = ar4[0xf];
      ar4[6] = ar4[6] + 1;
    }
    uVar10 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11189a(ar4,ar6,ar7,ar7));
  }
  else if ((char)ar5 == -8) {
    if ((*(char *)(unsigned)((int)ar4 + 0x31) != '\0') && (ar4[6] != 0)) {
      bVar1 = false;
      iVar9 = ar4[0xe];
      iVar8 = 0;
      while (iVar5 = iVar9, iVar5 != 0) {
        if (*(int *)(unsigned)(iVar5 + 0xc) == ar6) {
          bVar1 = true;
        }
        iVar8 = iVar5;
        iVar9 = *(int *)(unsigned)(iVar5 + 0x10);
      }
      if (!bVar1) {
        *(int *)(unsigned)(ar6 + 4) = *(int *)(unsigned)(ar6 + 4) + 1;
        iVar9 = ar7;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,0x14,1,ar7));
        uVar7 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar4[5] << 2,uVar7,iVar9));
        uVar6 = 0x80000000;
        *(undefined4 *)(unsigned)(iVar5 + 8) = uVar7;
        uVar3 = 0;
        if (ar4[5] != 0) {
          do {
            if (*(int *)(unsigned)(uVar3 * 4 + ar4[0xb]) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4) = uVar6;
            }
            else if ((*(int *)(unsigned)(ar4[0xb] + uVar3 * 4) == ar4[9]) &&
                    (*(int *)(unsigned)(ar4[0x10] + uVar3 * 4) != ar4[0xf])) {
              *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4) = ar4[2] + ar7;
            }
            else {
              if ((uint)ar4[9] < *(uint *)(unsigned)(ar4[0xb] + uVar3 * 4)) {
                iVar9 = libgcc_divide_helper_010468
                                  ((ar4[9] + ar4[4]) - *(int *)(unsigned)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(unsigned)(ar4 + 3));
                piVar2 = extraout_r2;
              }
              else {
                piVar2 = (int *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + uVar3 * 4);
                iVar9 = libgcc_divide_helper_010468
                                  (ar4[9] - *(int *)(unsigned)(ar4[0xb] + uVar3 * 4),
                                   (uint)*(ushort *)(unsigned)(ar4 + 3));
              }
              *piVar2 = iVar9 + ar7;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < (uint)ar4[5]);
        }
        *(int *)(unsigned)(iVar5 + 4) = ar4[6];
        *(int *)(unsigned)(iVar5 + 0xc) = ar6;
        *(undefined4 *)(unsigned)(iVar5 + 0x10) = 0;
        if (iVar8 == 0) {
          ar4[0xe] = iVar5;
        }
        else {
          *(int *)(unsigned)(iVar8 + 0x10) = iVar5;
        }
      }
    }
  }
  else if ((char)ar5 == -1) {
    iVar8 = ar4[0xe];
    if (ar4[7] != 0) {
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[7],1,ar7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xb],uVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xd],uVar7,ar7));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0x10],uVar7,ar7));
    }
    while (iVar8 != 0) {
      iVar9 = *(int *)(unsigned)(iVar8 + 0x10);
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,iVar8,uVar7,ar7));
      iVar8 = iVar9;
    }
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4,uVar7,ar7));
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1113d0\n.set _FUN_8c1113d0, _FUN_8c1113d0_def\n");
//@unit 8c1117e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1117e4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1117e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(int *)(unsigned)(ar4 + 0x28) - *(uint *)(unsigned)(ar4 + 0x24),(uint)*(ushort *)(unsigned)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(int *)(unsigned)(ar4 + 0x24) - *(int *)(unsigned)(ar4 + 0x28),(uint)*(ushort *)(unsigned)(ar4 + 0xc));
    uVar3 = *(int *)(unsigned)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(ushort *)(unsigned)(ar4 + 0xc);
  uVar3 = *(int *)(unsigned)(ar4 + 0x28) - iVar1;
  *(uint *)(unsigned)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(uint *)(unsigned)(ar4 + 0x1c)) {
    *(int *)(unsigned)(ar4 + 0x28) = *(int *)(unsigned)(ar4 + 0x28) + *(int *)(unsigned)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(int *)(unsigned)(ar4 + 0x28) == *(int *)(unsigned)(ar4 + 0x24)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(unsigned)(uVar3 * 4 + *(int *)(unsigned)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) - iVar1;
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar2) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) < *(uint *)(unsigned)(ar4 + 0x1c)) {
          *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) =
               *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) + *(int *)(unsigned)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  return 1;
}

__asm__(".globl _FUN_8c1117e4\n.set _FUN_8c1117e4, _FUN_8c1117e4_def\n");
//@unit 8c11189a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11189a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11189a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *ain0;
  int iVar3;
  uint ar6_00;
  
  if (ar6 != 0) {
    iVar3 = ar5 * 4;
    ar6_00 = ar6 * (uint)*(ushort *)(unsigned)(ar4 + 0xc);
    uVar2 = *(int *)(unsigned)(ar4 + 0x24) - *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    if (0x7fffffff < uVar2) {
      uVar2 = uVar2 + *(int *)(unsigned)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) == *(int *)(unsigned)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(unsigned)(ar4 + 0x10);
    }
    if (uVar2 < ar6_00) {
      return 0;
    }
    if (ar6_00 == uVar2) {
      *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
    }
    ain0 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    iVar1 = *(int *)(unsigned)(ar4 + 0x1c);
    uVar2 = (*ain0 - iVar1) - ar6_00;
    if (0x7fffffff < uVar2) {
      iVar1 = *(int *)(unsigned)(ar4 + 0x20);
    }
    *ain0 = iVar1 + uVar2;
    *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar3) - ar6;
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar3);
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c111342(ar4,uVar2,ar6_00,ar6); });
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11189a\n.set _FUN_8c11189a, _FUN_8c11189a_def\n");
//@unit 8c11194c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c11194c_def(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11194c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int a5;
  undefined8 in_dr0 = 0;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  fVar3 = F32HI(in_dr0);
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
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
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,ar6,ar7));
  uVar7 = (uint)fVar3;
  if ((uVar7 & 0xffff) == 0xffff) {
    uVar7 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    a5 = ar4[7];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
  }
  if ((uVar7 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    ar6 = uVar7 & 0xffff;
    a5 = iVar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(*ar4,iVar6,ar6,ar7));
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
      return (int *)(unsigned)0;
    }
  }
  ar4[2] = iVar6;
  iVar6 = (uVar7 & 0xffff) * iVar6;
  *(short *)(unsigned)(ar4 + 3) = (short)uVar7;
  ar4[4] = iVar6;
  ar4[8] = ar4[7] + iVar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112234(ar4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,3,ar6,ar7));
  if (((int)fVar3 & 0xffU) == 0) {
    ar4[6] = 0;
    uVar7 = 0;
    if (ar4[5] != 0) {
      do {
        uVar2 = uVar7 + 1;
        *(undefined4 *)(unsigned)(uVar7 * 4 + ar4[0xb]) = 0;
        uVar7 = uVar2;
      } while (uVar2 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,ar6,ar7));
  *(ushort *)(unsigned)((int)ar4 + 0xe) = (ushort)(int)fVar3 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,5,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 0x31) = (char)(int)fVar3;
  return ar4;
}

__asm__(".globl _FUN_8c11194c\n.set _FUN_8c11194c, _FUN_8c11194c_def\n");
//@unit 8c111adc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c111adc_def(int *ar4,int ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c111adc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint a6;
  uint a7;
  int a5;
  undefined8 in_dr0 = 0;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar4 = F32HI(in_dr0);
  cVar7 = '\0';
  a6 = ar6;
  a7 = ar7;
  a5 = ar5;
  if (ar5 == 0) {
    ar5 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
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
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,a6,a7));
    ar6 = (uint)fVar4;
  }
  if (ar4[7] != 0) {
    ar5 = ar4[7];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,a6,a7));
  }
  if ((ar6 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    a6 = ar6 & 0xffff;
    ar5 = a5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(*ar4,a5,a6,a7));
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,a6,a7));
      return 0;
    }
  }
  ar4[2] = a5;
  *(short *)(unsigned)(ar4 + 3) = (short)ar6;
  ar4[4] = (ar6 & 0xffff) * a5;
  ar4[9] = ar4[7];
  ar4[8] = ar4[7] + ar4[4];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112234(ar4,ar5,a6,a7));
  if ((ar7 & 0xff) == 0xff) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,3,a6,a7));
    ar7 = (uint)fVar4;
  }
  if ((ar7 & 0xff) == 0) {
    ar4[6] = 0;
    uVar2 = 0;
    if (ar4[5] != 0) {
      do {
        uVar3 = uVar2 + 1;
        *(undefined4 *)(unsigned)(uVar2 * 4 + ar4[0xb]) = 0;
        uVar2 = uVar3;
      } while (uVar3 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  if ((*(short *)(fr0_ + 0x00000000)) == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,a6,a7));
    (*(short *)(fr0_ + 0x00000000)) = (short)(int)fVar4;
  }
  *(short *)(unsigned)((int)ar4 + 0xe) = (*(short *)(fr0_ + 0x00000000));
  if ((*(char *)(fr0_ + 0x00000004)) == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,5,a6,a7));
    *(char *)(unsigned)((int)ar4 + 0x31) = (char)(int)fVar4;
  }
  else {
    *(char *)(unsigned)((int)ar4 + 0x31) = (*(char *)(fr0_ + 0x00000004));
  }
  return ar4;
}

__asm__(".globl _FUN_8c111adc\n.set _FUN_8c111adc, _FUN_8c111adc_def\n");
//@unit 8c111cdc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c111cdc_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111cdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar5 = ar6 * *(ushort *)(unsigned)(ar4 + 0xc);
  if ((*(char *)(unsigned)(ar4 + 0x30) == '\0') && (ar6 <= *(uint *)(unsigned)(ar4 + 8))) {
    if (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(ar4 + 0x28)) {
      if (*(uint *)(unsigned)(ar4 + 0x28) < (uint)(*(int *)(unsigned)(ar4 + 0x24) + iVar5)) goto LAB_8c111d40;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,iVar5,vr7));
      *(int *)(unsigned)(ar4 + 0x24) = *(int *)(unsigned)(ar4 + 0x24) + iVar5;
    }
    else {
      if (*(uint *)(unsigned)(ar4 + 0x28) < (uint)((*(int *)(unsigned)(ar4 + 0x24) + iVar5) - *(int *)(unsigned)(ar4 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unsigned)(ar4 + 0x20) < (uint)(*(int *)(unsigned)(ar4 + 0x24) + iVar5)) {
        iVar4 = *(int *)(unsigned)(ar4 + 0x20) - *(int *)(unsigned)(ar4 + 0x24);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,iVar4,vr6,vr7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(ar4 + 0x1c),ar5 + iVar4,iVar5 - iVar4,vr7));
        *(int *)(unsigned)(ar4 + 0x24) = (iVar5 - iVar4) + *(int *)(unsigned)(ar4 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,iVar5,vr7));
        iVar5 = *(int *)(unsigned)(ar4 + 0x24) + iVar5;
        *(int *)(unsigned)(ar4 + 0x24) = iVar5;
        if (iVar5 == *(int *)(unsigned)(ar4 + 0x20)) {
          *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
      do {
        if (*(int *)(unsigned)(uVar3 * 4 + *(int *)(unsigned)(ar4 + 0x2c)) == 0) {
          *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar3 * 4) =
               *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar3 * 4) + ar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
    }
    if ((*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(ar4 + 0x28)) && (*(int *)(unsigned)(ar4 + 0x18) != 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unsigned)(ar4 + 0x3c) = *(int *)(unsigned)(ar4 + 0x3c) + ar6;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c111cec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10 = 0;
  uint unaff_r11 = 0;
  int a6;
  int unaff_r14 = 0;
  int iVar4;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar4 = unaff_r11 * *(ushort *)(unsigned)(unaff_r14 + 0xc);
  if ((*(char *)(unsigned)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(uint *)(unsigned)(unaff_r14 + 8))) {
    if (*(uint *)(unsigned)(unaff_r14 + 0x24) < *(uint *)(unsigned)(unaff_r14 + 0x28)) {
      if (*(uint *)(unsigned)(unaff_r14 + 0x28) < (uint)(*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4))
      goto LAB_8c111d40;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7));
      *(int *)(unsigned)(unaff_r14 + 0x24) = *(int *)(unsigned)(unaff_r14 + 0x24) + iVar4;
    }
    else {
      if (*(uint *)(unsigned)(unaff_r14 + 0x28) <
          (uint)((*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4) - *(int *)(unsigned)(unaff_r14 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unsigned)(unaff_r14 + 0x20) < (uint)(*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4)) {
        a6 = *(int *)(unsigned)(unaff_r14 + 0x20) - *(int *)(unsigned)(unaff_r14 + 0x24);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(int *)(unsigned)(unaff_r14 + 0x24),unaff_r10,a6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x1c),unaff_r10 + a6,iVar4 - a6,ar7));
        *(int *)(unsigned)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unsigned)(unaff_r14 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7));
        iVar4 = *(int *)(unsigned)(unaff_r14 + 0x24) + iVar4;
        *(int *)(unsigned)(unaff_r14 + 0x24) = iVar4;
        if (iVar4 == *(int *)(unsigned)(unaff_r14 + 0x20)) {
          *(undefined4 *)(unsigned)(unaff_r14 + 0x24) = *(undefined4 *)(unsigned)(unaff_r14 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unsigned)(unaff_r14 + 0x14) != 0) {
      do {
        if (*(int *)(unsigned)(uVar3 * 4 + *(int *)(unsigned)(unaff_r14 + 0x2c)) == 0) {
          *(uint *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x40) + uVar3 * 4) =
               *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unsigned)(unaff_r14 + 0x14));
    }
    if ((*(int *)(unsigned)(unaff_r14 + 0x24) == *(int *)(unsigned)(unaff_r14 + 0x28)) &&
       (*(int *)(unsigned)(unaff_r14 + 0x18) != 0)) {
      *(undefined1 *)(unsigned)(unaff_r14 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unsigned)(unaff_r14 + 0x3c) = *(int *)(unsigned)(unaff_r14 + 0x3c) + unaff_r11;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c111dfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111dfe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(int *)(unsigned)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(ushort *)(unsigned)(ar4 + 0xc);
  *(int *)(unsigned)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(int *)(unsigned)(ar4 + 0x20)) {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  }
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(unsigned)(uVar2 * 4 + *(int *)(unsigned)(ar4 + 0x2c)) == 0) {
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar2 * 4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  if ((*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(ar4 + 0x28)) && (*(int *)(unsigned)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  *(int *)(unsigned)(ar4 + 0x3c) = *(int *)(unsigned)(ar4 + 0x3c) + 1;
  return iVar3;
}

__asm__(".globl _FUN_8c111dfe\n.set _FUN_8c111dfe, _FUN_8c111dfe_def\n");
//@unit 8c111e72
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c111e72_def(int ar4,int ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c111e72";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  uint ar5_00;
  int iVar5;
  
  iVar4 = ar5 * 4;
  ar5_00 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4);
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) == *(int *)(unsigned)(ar4 + 0x3c)) {
    if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (ar5_00 != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,0,ar7));
    }
  }
  else if (ar7 <= *(uint *)(unsigned)(ar4 + 8)) {
    iVar5 = ar7 * *(ushort *)(unsigned)(ar4 + 0xc);
    uVar1 = ar5_00;
    iVar2 = iVar5;
    uVar3 = ar7;
    if (ar5_00 < *(uint *)(unsigned)(ar4 + 0x24)) {
      if (iVar5 + ar5_00 <= *(uint *)(unsigned)(ar4 + 0x24)) {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,iVar5,ar7));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) + iVar5;
LAB_8c111f76:
        *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) + ar7;
        if (*(uint *)(unsigned)(ar4 + 0x28) == ar5_00) {
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c111342(ar4,uVar1,iVar2,uVar3); });
        }
        if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,ar7,uVar3));
        }
        return 1;
      }
    }
    else if ((ar5_00 + iVar5) - *(int *)(unsigned)(ar4 + 0x10) <= *(uint *)(unsigned)(ar4 + 0x24)) {
      if (*(uint *)(unsigned)(ar4 + 0x20) < iVar5 + ar5_00) {
        ar6_00 = *(int *)(unsigned)(ar4 + 0x20) - ar5_00;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,ar6_00,ar7));
        iVar5 = iVar5 - ar6_00;
        uVar1 = *(uint *)(unsigned)(ar4 + 0x1c);
        iVar2 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6 + ar6_00,uVar1,iVar5,uVar3));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = iVar5 + *(int *)(unsigned)(ar4 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar6,ar5_00,iVar5,ar7));
        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) + iVar5;
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) == *(int *)(unsigned)(ar4 + 0x20)) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c111fbe_def(int ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c111fbe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = ar5 * 4;
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) == *(int *)(unsigned)(ar4 + 0x3c)) {
    if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,0,ar7));
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(unsigned)(ar4 + 0xc);
    if (*(uint *)(unsigned)(ar4 + 0x20) <= *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4)) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
    }
    *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar4) + 1;
    if (iVar1 == *(int *)(unsigned)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + ar7) != *(int *)(unsigned)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(unsigned)(ar4 + 0x14)) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar4);
        *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,1,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fbe\n.set _FUN_8c111fbe, _FUN_8c111fbe_def\n");
//@unit 8c111fc6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c111fc6_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c111fc6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int unaff_r14 = 0;
  
  if (*(int *)(unsigned)(*(int *)(unsigned)(in_r0 + ar4) + unaff_r14) == *(int *)(unsigned)(ar4 + 0x3c)) {
    if ((*(int *)(unsigned)(ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,0,ar7));
    }
    iVar1 = 0;
  }
  else {
    piVar2 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14);
    iVar1 = *piVar2;
    *piVar2 = iVar1 + (uint)*(ushort *)(unsigned)(ar4 + 0xc);
    if (*(uint *)(unsigned)(ar4 + 0x20) <= *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14)) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
    }
    *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + unaff_r14) = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + unaff_r14) + 1;
    if (iVar1 == *(int *)(unsigned)(ar4 + 0x28)) {
      uVar3 = 0;
      if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
        do {
          ar7 = uVar3 * 4;
          if ((iVar1 == *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + ar7)) &&
             (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + ar7) != *(int *)(unsigned)(ar4 + 0x3c))) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
      }
      if (uVar3 == *(uint *)(unsigned)(ar4 + 0x14)) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + unaff_r14);
        *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(ar4,ar5,1,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c111fc6\n.set _FUN_8c111fc6, _FUN_8c111fc6_def\n");
//@unit 8c112074
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c112074_def(int *ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112074";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a6;
  int *piVar4;
  bool bVar5;
  
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (a6 = ar4; a6 < piVar4; a6 = a6 + 2) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x2c) + a6[1] * 4) != 0) {
      bVar5 = *(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x40) + a6[1] * 4) == *(int *)(unsigned)(*a6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = a6;
    a6 = piVar1 + 2;
    if (piVar4 <= a6) break;
  } while ((*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(unsigned)(*(int *)(unsigned)(*a6 + 0x40) + piVar1[3] * 4) == *(int *)(unsigned)(*a6 + 0x3c))));
  if (a6 == piVar4) {
    if (bVar5 == false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*ar4,ar4[1],a6,ar7));
        *ar6 = uVar3;
        ar6 = ar6 + 1;
      }
    }
    else {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(unsigned)(*ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*ar4,ar4[1],0,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c112170_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
    if (*(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0) {
      bVar5 = *(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x40) + piVar3[1] * 4) == *(int *)(unsigned)(*piVar3 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = piVar3;
    piVar3 = piVar1 + 2;
    if (piVar4 <= piVar3) break;
  } while ((*(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(unsigned)(*(int *)(unsigned)(*piVar3 + 0x40) + piVar1[3] * 4) == *(int *)(unsigned)(*piVar3 + 0x3c))
          ));
  if (piVar3 == piVar4) {
    if (bVar5 != false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(unsigned)(*ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*ar4,ar4[1],0,uVar6));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11217e_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11217e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  int unaff_r13 = 0;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(unsigned)(unaff_r13 + (int)ar6);
  bVar4 = true;
  for (; ar6 < piVar3; ar6 = ar6 + 2) {
    if (*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x2c) + ar6[1] * 4) != 0) {
      bVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x40) + ar6[1] * 4) == *(int *)(unsigned)(*ar6 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = ar6;
    ar6 = piVar1 + 2;
    if (piVar3 <= ar6) break;
  } while ((*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar4 == (*(int *)(unsigned)(*(int *)(unsigned)(*ar6 + 0x40) + piVar1[3] * 4) == *(int *)(unsigned)(*ar6 + 0x3c))));
  if (ar6 == piVar3) {
    if (bVar4 != false) {
      for (; ar4 < piVar3; ar4 = ar4 + 2) {
        if ((*(int *)(unsigned)(*ar4 + 0x38) != 0) && (*(int *)(unsigned)(*(int *)(unsigned)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111208(*ar4,ar4[1],0,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + iVar2) = 0;
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 0x14));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  return 0x30;
}

__asm__(".globl _FUN_8c112234\n.set _FUN_8c112234, _FUN_8c112234_def\n");
//@unit 8c1122ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c1122ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1122ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = 0x44;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x44,ar7));
  if (piVar1 == (int *)(unsigned)0x0) {
    (*(int *)(fr0_ - 0x18)) = ar4;
    (*(undefined1 *)(fr0_ - 0x14)) = (undefined1)ar5;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1204c4(&(*(int *)(fr0_ - 0x18)),2,a6,ar7));
    piVar1 = (int *)(unsigned)0x0;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x10))))(ar4,ar6 << 2,a6,ar7));
    piVar1[0xb] = iVar2;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,ar6,4,ar7));
    piVar1[0xd] = iVar2;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,ar6,4,ar7));
    piVar1[0x10] = iVar2;
    piVar1[5] = ar6;
    *(undefined1 *)(unsigned)(piVar1 + 1) = (undefined1)ar5;
    *piVar1 = ar4;
    piVar1[2] = 1;
  }
  return piVar1;
}

__asm__(".globl _FUN_8c1122ac\n.set _FUN_8c1122ac, _FUN_8c1122ac_def\n");
//@unit 8c112350
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112350_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112350";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x18,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c112350\n.set _FUN_8c112350, _FUN_8c112350_def\n");
//@unit 8c11237a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11237a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11237a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*(char *)(unsigned)(ar4 + 0x14) != '\0') && (*(int *)(unsigned)(ar4 + 0xc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,*(undefined4 *)(unsigned)(ar4 + 0xc),vr6,vr7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,ar4,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c11237a\n.set _FUN_8c11237a, _FUN_8c11237a_def\n");
//@unit 8c112380
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112380_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112380";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int unaff_r14 = 0;
  
  if ((*(char *)(unsigned)(in_r0 + unaff_r14) != '\0') && (*(int *)(unsigned)(unaff_r14 + 0xc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,*(undefined4 *)(unsigned)(unaff_r14 + 0xc),ar6,ar7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c112380\n.set _FUN_8c112380, _FUN_8c112380_def\n");
//@unit 8c1123b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1123b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1123b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x18,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1123b0\n.set _FUN_8c1123b0, _FUN_8c1123b0_def\n");
//@unit 8c1123da
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1123da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1123da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*(char *)(unsigned)(ar4 + 0x14) != '\0') && (*(int *)(unsigned)(ar4 + 0xc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,*(undefined4 *)(unsigned)(ar4 + 0xc),vr6,vr7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,ar4,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1123da\n.set _FUN_8c1123da, _FUN_8c1123da_def\n");
//@unit 8c1123e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1123e0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1123e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int unaff_r14 = 0;
  
  if ((*(char *)(unsigned)(in_r0 + unaff_r14) != '\0') && (*(int *)(unsigned)(unaff_r14 + 0xc) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,*(undefined4 *)(unsigned)(unaff_r14 + 0xc),ar6,ar7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c1123e0\n.set _FUN_8c1123e0, _FUN_8c1123e0_def\n");
//@unit 8c112410
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c112410_def(int *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c112410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint in_fr5 = 0;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = uVar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x10))))(ar7,uVar5 * 4,vr6,vr7));
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x18))))(ar7,ar4,vr6,vr7));
    ar4 = (int *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 5) = 1;
    uVar3 = 0;
    ar4[4] = uVar5 * 4 + ar4[3];
    puVar2 = (ulonglong *)(unsigned)(uint)ar4[3];
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
          *(int *)(unsigned)puVar2 = (int)(uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (ulonglong *)(unsigned)((int)puVar2 + 4);
      } while (uVar3 < uVar5);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c112410\n.set _FUN_8c112410, _FUN_8c112410_def\n");
//@unit 8c11241e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11241e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11241e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint unaff_r12 = 0;
  int unaff_r13 = 0;
  undefined4 *unaff_r14 = 0;
  undefined4 in_fr5 = 0;
  undefined8 uVar4;
  char in_FPSCR_SZ = 0;
  
  *unaff_r14 = ar5;
  unaff_r14[1] = ar6;
  unaff_r14[2] = unaff_r12;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x10))))(unaff_r13,unaff_r12 << 2,ar6,ar7));
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r13 + 0x18))))(unaff_r13,unaff_r14,ar6,ar7));
    unaff_r14 = (undefined4 *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(unaff_r14 + 5) = 1;
    uVar3 = 0;
    unaff_r14[4] = unaff_r12 * 4 + unaff_r14[3];
    puVar2 = (undefined8 *)(unsigned)unaff_r14[3];
    if (in_FPSCR_SZ == '\0') {
      uVar4 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c1125e0),in_fr5);
    }
    else {
      uVar4 = CONCAT44(((void *)(unsigned)0x8c1129e4),(*(undefined4 *)(unsigned)(unsigned)0x8c1125e0));
    }
    if (unaff_r12 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar2 = (int)((ulonglong)uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (undefined8 *)(unsigned)((int)puVar2 + 4);
      } while (uVar3 < unaff_r12);
    }
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c11241e\n.set _FUN_8c11241e, _FUN_8c11241e_def\n");
//@unit 8c112482
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c112482_def(int *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c112482";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x14))))(ar7,a5,4,ar7));
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x18))))(ar7,ar4,a6,a7));
    ar4 = (int *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 5) = 1;
    ar4[4] = a5 * 4 + ar4[3];
  }
  return ar4;
}

__asm__(".globl _FUN_8c112482\n.set _FUN_8c112482, _FUN_8c112482_def\n");
//@unit 8c1124de
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c1124de_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1124de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = *ar5 * ar5[1];
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar6 + 0x10))))(ar6,*ar4 * ar4[1] * 4,vr6,vr7));
  ar4[3] = iVar2;
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar6 + 0x18))))(ar6,ar4,vr6,vr7));
    ar4 = (int *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 5) = 1;
    puVar1 = ((void *)(unsigned)0x8c1129e4);
    ar4[4] = *ar4 * ar4[1] * 4 + ar4[3];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,vr6,vr7));
  }
  return ar4;
}

__asm__(".globl _FUN_8c1124de\n.set _FUN_8c1124de, _FUN_8c1124de_def\n");
//@unit 8c1124ea
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c1124ea_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1124ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r12 = 0;
  int *unaff_r13 = 0;
  int *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  *unaff_r14 = *unaff_r13;
  unaff_r14[1] = unaff_r13[1];
  unaff_r14[2] = *unaff_r13 * unaff_r13[1];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r12 + 0x10))))(unaff_r12,*unaff_r14 * unaff_r14[1] * 4,ar6,ar7));
  unaff_r14[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r12 + 0x18))))(unaff_r12,unaff_r14,ar6,ar7));
    unaff_r14 = (int *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(unaff_r14 + 5) = 1;
    unaff_r14[4] = *unaff_r14 * unaff_r14[1] * 4 + unaff_r14[3];
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1129e4(unaff_r14,unaff_r13,ar6,ar7); });
  }
  return unaff_r14 = 0;
}

__asm__(".globl _FUN_8c1124ea\n.set _FUN_8c1124ea, _FUN_8c1124ea_def\n");
//@unit 8c1125e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1125e8_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1125e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *ar4;
  iVar2 = ar4[1];
  iVar1 = ar4[3];
  puVar5 = (undefined4 *)(unsigned)(ar5 * iVar4 * 4 + iVar1);
  for (puVar3 = puVar5 + iVar4; puVar3 < (undefined4 *)(unsigned)(iVar4 * iVar2 * 4 + iVar1);
      puVar3 = puVar3 + 1) {
    *puVar5 = *puVar3;
    puVar5 = puVar5 + 1;
  }
  ar4[1] = ar4[1] + -1;
  ar4[2] = ar4[2] + -1;
  ar4[4] = ar4[4] + *ar4 * -4;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c1125e8\n.set _FUN_8c1125e8, _FUN_8c1125e8_def\n");
//@unit 8c112642
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112642_def(int *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c112642";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = ar5 * ar6;
  ar4[3] = ar7;
  ar4[4] = ar7 + ar4[2] * 4;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c112642\n.set _FUN_8c112642, _FUN_8c112642_def\n");
//@unit 8c112658
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112658";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float fVar3;
  
  pfVar2 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar1 = 1;
  fVar3 = *pfVar2;
  if (1 < *(uint *)(unsigned)(ar4 + 8)) {
    do {
      pfVar2 = pfVar2 + 1;
      uVar1 = uVar1 + 1;
      if (fVar3 < *pfVar2) {
        fVar3 = *pfVar2;
      }
    } while (uVar1 < *(uint *)(unsigned)(ar4 + 8));
  }
  return ain0;
}

__asm__(".globl _FUN_8c112658\n.set _FUN_8c112658, _FUN_8c112658_def\n");
//@unit 8c112680
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined8 * FUN_8c112680_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112680";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  puVar2 = ((undefined1 *)(unsigned)0x8c112824);
  iVar4 = ar4[1];
  iVar3 = *ar4;
  a5 = (float *)(unsigned)(uint)ar4[3];
  pfVar6 = a5;
  if (iVar3 * iVar4 != 0) {
    do {
      uVar7 = 0x4000000000000000;
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,a5,ar6,ar7));
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(ar4,a5,ar6,ar7));
      uVar5 = uVar5 + 1;
      cVar1 = (char)((((uint)bVar10 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar12 << 0x14) &
                     0x100000) >> 0x14);
      if (cVar1 == '\0') {
        dVar8 = CONCAT44D(0x3fe00000,(int)uVar7);
      }
      else {
        dVar8 = -1.5698269832574723e-250;
      }
      puVar2 = (undefined8 *)(unsigned)((undefined4 *)(unsigned)0x8c112830);
      if (cVar1 == '\0') {
        dVar8 = (double)(D2U(dVar8) & 0xffffffff00000000);
      }
      if (cVar1 == '\0') {
        fVar9 = *pfVar6;
      }
      else {
        fVar9 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar6 >> 0x20);
      }
      *pfVar6 = fVar9 - (float)((double)F32HI(uVar7) * dVar8);
      pfVar6 = pfVar6 + 1;
    } while (uVar5 < (uint)(iVar3 * iVar4));
  }
  return puVar2;
}

__asm__(".globl _FUN_8c112680\n.set _FUN_8c112680, _FUN_8c112680_def\n");
//@unit 8c112734
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112734_def(float *ar4,float *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112734";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  undefined8 in_xd2 = 0;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  undefined8 uVar14;
  
  fVar3 = ar4[1];
  fVar2 = *ar4;
  ar6_00 = (float)(ar6 + 1);
  fVar4 = ar4[3];
  ain0 = (float *)(unsigned)((int)ar5[2] * 4 + (int)ar5[3]);
  pfVar5 = ar4;
  ar5_00 = ar5;
  fVar8 = ar6_00;
  if ((uint)ar6_00 < (uint)ar4[1]) {
    do {
      pfVar7 = (float *)(unsigned)((int)fVar8 * (int)*ar4 * 4 + (int)ar4[3]);
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
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7); });
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
        fVar13 = F32HI(uVar12);
        fVar11 = (float)uVar12 * fVar11;
      }
      else {
        fVar15 = -fVar13 / fVar15;
        fVar13 = fVar15;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c11fbb6(pfVar5,ar5_00,ar6_00,ar7); });
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
        fVar13 = F32HI(uVar12) * fVar13;
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
      *pfVar6 = (float)uVar14 * fVar13 - F32HI(uVar14) * fVar11;
      for (pfVar5 = pfVar9 + -1 + (int)*ar4;
          pfVar5 < (float *)(unsigned)((int)fVar2 * (int)fVar3 * 4 + (int)fVar4); pfVar5 = pfVar5 + (int)*ar4)
      {
        fVar15 = *pfVar5;
        *pfVar5 = (float)*(undefined8 *)(unsigned)pfVar5 * fVar13 -
                  (float)((ulonglong)*(undefined8 *)(unsigned)pfVar5 >> 0x20) * fVar11;
        pfVar5[1] = fVar11 * fVar15 + pfVar5[1] * fVar13;
      }
      for (pfVar5 = (float *)(unsigned)((int)fVar8 * 4 + (int)ar5[3]); pfVar5 < ain0;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112958_def(uint *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112958";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  
  pfVar8 = (float *)(unsigned)(uint)ar4[3];
  pfVar5 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
  uVar4 = 0;
  pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1129e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1129e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(unsigned)(ar4 + 8);
  puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  uVar1 = 0;
  puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112a02_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112a02";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 in_fr4 = 0;
  
  uVar2 = *(uint *)(unsigned)(ar4 + 8);
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112a20_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112a20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float extraout_fr0 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x10,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x138) = ar5;
  *(uint *)(unsigned)(ar4 + 0x140) = ar5;
  uVar1 = (int)extraout_fr0 & 0xffff;
  if (*(char *)(unsigned)(ar4 + 0xf9) == '\0') {
    if (uVar1 < ar5) {
      uVar1 = ar5;
    }
    *(uint *)(unsigned)(ar4 + 0x13c) = uVar1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x13c) = 1;
  }
  if ((ar5 < 2) && (*(char *)(unsigned)(ar4 + 0xf8) == '\0')) {
    if (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x130) == ((void *)0x8c117bac)))) {
      return 0;
    }
    *(unsigned *)(unsigned)(ar4 + 0x130) = ((void *)0x8c117bac);
    *(undefined4 *)(unsigned)(ar4 + 0x134) = *(undefined4 *)(unsigned)(ar4 + 0x130);
    if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + 0xb0) != 0) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115732(ar4,1,ar6,ar7));
  }
  else {
    if (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x130) == ((void *)0x8c11617a)))) {
      return 0;
    }
    *(unsigned *)(unsigned)(ar4 + 0x130) = ((void *)0x8c11617a);
    *(undefined4 *)(unsigned)(ar4 + 0x134) = *(undefined4 *)(unsigned)(ar4 + 0x130);
    if (*(int *)(unsigned)(ar4 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + 0xa8) != 0) {
      return 0;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1155a0(ar4,1,ar6,ar7));
  }
  if ((uVar1 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a20\n.set _FUN_8c112a20, _FUN_8c112a20_def\n");
//@unit 8c112a28
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112a28_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112a28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x10,ar6,ar7));
  iVar1 = (int)0x138;
  uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13) &
          0xffe7ffff;
  *(uint *)(unsigned)(iVar1 + unaff_r14) = ar5;
  *(uint *)(unsigned)(iVar1 + 8 + unaff_r14) = ar5;
  if ((char)((uVar2 & 0x80000) >> 0x13) == '\0') {
    uVar2 = (uint)extraout_fr0;
  }
  else {
    uVar2 = (uint)CONCAT44D(extraout_fr0,extraout_fr1);
  }
  uVar2 = uVar2 & 0xffff;
  if (*(char *)(unsigned)(iVar1 + -0x3f + unaff_r14) == '\0') {
    if (uVar2 < ar5) {
      uVar2 = ar5;
    }
    *(uint *)(unsigned)(0x13c + unaff_r14) = uVar2;
  }
  else {
    *(undefined4 *)(unsigned)(0x13c + unaff_r14) = 1;
  }
  if ((ar5 < 2) && (*(char *)(unsigned)(0xf8 + unaff_r14) == '\0')) {
    iVar1 = (int)0x130;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r14)) == ((void *)(unsigned)0x8c117bac)) {
      return 0;
    }
    *(unsigned *)(unsigned)(iVar1 + unaff_r14) = ((void *)(unsigned)0x8c117bac);
    *(undefined4 *)(unsigned)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(unsigned)(iVar1 + unaff_r14);
    if (*(int *)(unsigned)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(0xb0 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115732(unaff_r14,1,ar6,ar7));
  }
  else {
    iVar1 = (int)0x130;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r14)) == ((void *)(unsigned)0x8c11617a)) {
      return 0;
    }
    *(unsigned *)(unsigned)(iVar1 + unaff_r14) = ((void *)(unsigned)0x8c11617a);
    *(undefined4 *)(unsigned)(iVar1 + 4 + unaff_r14) = *(undefined4 *)(unsigned)(iVar1 + unaff_r14);
    if (*(int *)(unsigned)(unaff_r14 + 0x44) == 0) {
      return 0;
    }
    if (*(int *)(unsigned)(0xa8 + unaff_r14) != 0) {
      return 0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1155a0(unaff_r14,1,ar6,ar7));
  }
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c112a28\n.set _FUN_8c112a28, _FUN_8c112a28_def\n");
//@unit 8c112b1c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c112b1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112b1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(unsigned)(0x1be + ar4) = (undefined2)ar5;
  uVar1 = 0x80;
  iVar2 = (int)0xc0;
  if (*(int *)(unsigned)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
      do {
        if ((*(ushort *)(unsigned)(uVar3 * 2 + *(int *)(unsigned)(0xc0 + ar4)) & uVar1) == 0) {
          iVar2 = *(int *)(unsigned)(0x1c0 + ar4);
          *(undefined2 *)(unsigned)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(int *)(unsigned)(0x1c0 + ar4);
          *(undefined2 *)(unsigned)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x38));
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c112b1c\n.set _FUN_8c112b1c, _FUN_8c112b1c_def\n");
//@unit 8c112b6e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112b6e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112b6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(iVar6 + 1) * 4,ar6,ar7));
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6_00 = iVar6 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar2,ar4[0x16],ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,ar4[0x16],ar6_00,ar7));
    }
    ar4[0x16] = iVar2;
    ar6 = 0x20;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))
                      (a4,(uint)(*(ushort *)(unsigned)((int)0x1e4 + (int)ar4) >> 5),0x20,ar7));
    if (iVar2 != 0) {
      if (ar5 != 0) {
        uVar1 = *(ushort *)(unsigned)((int)0x1e4 + (int)ar4);
        *(int *)(unsigned)(ar5 + 0x18) = iVar2;
        uVar5 = (uint)(uVar1 >> 5);
        uVar3 = 0;
        uVar4 = uVar3;
        if (uVar5 != 1) {
          do {
            uVar3 = uVar4 + 1;
            *(uint *)(unsigned)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
            uVar4 = uVar3;
          } while (uVar3 < uVar5 - 1);
        }
        *(undefined4 *)(unsigned)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
      }
      *(int *)(unsigned)(ar4[0x16] + iVar6 * 4) = iVar2;
      ar4[0x17] = iVar6 + 1;
      return iVar2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c112b6e\n.set _FUN_8c112b6e, _FUN_8c112b6e_def\n");
//@unit 8c112c90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112c90_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112c90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (ar4[0x17] != 0) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)(ar4[0x16] + uVar1 * 4),vr6,vr7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)ar4[0x17]);
  }
  if (ar4[0x16] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x16],vr6,vr7));
  }
  ar4[0x16] = 0;
  ar4[0x17] = 0;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c90\n.set _FUN_8c112c90, _FUN_8c112c90_def\n");
//@unit 8c112c9e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112c9e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112c9e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint unaff_r11 = 0;
  uint uVar1;
  int a4;
  int *unaff_r14 = 0;
  
  a4 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(unsigned)(in_r0 + (int)unaff_r14)) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)(unaff_r14[0x16] + uVar1 * 4),ar6,ar7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)unaff_r14[0x17]);
  }
  if (unaff_r14[0x16] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0x16],ar6,ar7));
  }
  unaff_r14[0x16] = unaff_r11;
  unaff_r14[0x17] = unaff_r11;
  return 0x5c;
}

__asm__(".globl _FUN_8c112c9e\n.set _FUN_8c112c9e, _FUN_8c112c9e_def\n");
//@unit 8c112d00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112d00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112d00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar5 = (uint)(*(ushort *)(unsigned)(0x1e4 + ar4) >> 5);
  uVar6 = 0;
  if (*(int *)(unsigned)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(int *)(unsigned)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(uint *)(unsigned)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(undefined4 *)(unsigned)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x54) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x58));
  return 0;
}

__asm__(".globl _FUN_8c112d00\n.set _FUN_8c112d00, _FUN_8c112d00_def\n");
//@unit 8c112d82
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112d82_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112d82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x22];
  iVar6 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x10))))(iVar6,(iVar5 + 1) * 4,ar6,ar7));
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar1,ar4[0x21],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x18))))(iVar6,ar4[0x21],ar6,ar7));
    }
    ar4[0x21] = iVar1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)extraout_r3))(iVar6,iVar1 * 0x18,ar6,ar7));
    if (iVar1 != 0) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
      if (ar5 == 0) {
        ar4[0x23] = iVar1;
        ar4[0x20] = 0;
      }
      else {
        *(int *)(unsigned)(ar5 + 0x10) = iVar1;
      }
      uVar4 = 0;
      if (iVar6 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar1 + 0x10) = iVar3 * 0x18 + iVar1;
        } while (uVar4 < iVar6 - 1U);
      }
      *(undefined4 *)(unsigned)(uVar4 * 0x18 + iVar1 + 0x10) = 0;
      *(int *)(unsigned)(ar4[0x21] + iVar5 * 4) = iVar1;
      ar4[0x22] = iVar5 + 1;
      return iVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c112d82\n.set _FUN_8c112d82, _FUN_8c112d82_def\n");
//@unit 8c112ec6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c112ec6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112ec6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)(unsigned)((int)0x88 + (int)ar4) != 0) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x84 + (int)ar4) + uVar1 * 4),vr6,vr7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)((int)0x88 + (int)ar4));
  }
  if (*(int *)(unsigned)((int)0x84 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x84 + (int)ar4),vr6,vr7));
  }
  iVar2 = (int)0x84;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c112ec6\n.set _FUN_8c112ec6, _FUN_8c112ec6_def\n");
//@unit 8c112ed4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c112ed4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112ed4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint unaff_r11 = 0;
  uint uVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(unsigned)(in_r0 + (int)unaff_r14)) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x84 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)((int)0x88 + (int)unaff_r14));
  }
  if (*(int *)(unsigned)((int)0x84 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x84 + (int)unaff_r14),ar6,ar7));
  }
  iVar2 = (int)0x84;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}

__asm__(".globl _FUN_8c112ed4\n.set _FUN_8c112ed4, _FUN_8c112ed4_def\n");
//@unit 8c112f40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112f40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(unsigned)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x84) + uVar7 * 4);
      if (uVar4 != 0) {
        *(int *)(unsigned)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(uint *)(unsigned)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(uint *)(unsigned)(uVar4 + 0x10) = uVar6;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x84));
  *(uint *)(unsigned)(ar4 + 0x80) = uVar6;
  return 0;
}

__asm__(".globl _FUN_8c112f40\n.set _FUN_8c112f40, _FUN_8c112f40_def\n");
//@unit 8c112f48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112f48_def(int ar4,uint ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c112f48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(in_r0 + ar4),0x18,vr6,vr7));
  uVar6 = ar5;
  if (ar5 < *(uint *)(unsigned)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x84) + uVar6 * 4);
      if (ar5 != 0) {
        *(int *)(unsigned)(ar5 + 0x10) = iVar5;
      }
      uVar4 = ar7;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar6 = uVar6 + 1;
      ar5 = uVar4 * 0x18 + iVar5;
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x88));
  }
  if (ar5 != 0) {
    *(uint *)(unsigned)(ar5 + 0x10) = ar7;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x8c) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x84));
  *(uint *)(unsigned)(ar4 + 0x80) = ar7;
  return 0;
}

__asm__(".globl _FUN_8c112f48\n.set _FUN_8c112f48, _FUN_8c112f48_def\n");
//@unit 8c112fd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112fd8_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112fd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x44];
  iVar6 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x10))))(iVar6,(iVar5 + 1) * 4,ar6,ar7));
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar1,ar4[0x43],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x18))))(iVar6,ar4[0x43],ar6,ar7));
    }
    ar4[0x43] = iVar1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)extraout_r3))(iVar6,iVar1 * 0x18,ar6,ar7));
    if (iVar1 != 0) {
      if (ar5 != 0) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
        *(int *)(unsigned)(ar5 + 4) = iVar1;
        uVar4 = 0;
        if (iVar6 != 1) {
          do {
            iVar3 = uVar4 + 1;
            iVar2 = uVar4 * 0x18;
            uVar4 = uVar4 + 1;
            *(int *)(unsigned)(iVar2 + iVar1 + 4) = iVar3 * 0x18 + iVar1;
          } while (uVar4 < iVar6 - 1U);
        }
        *(undefined4 *)(unsigned)(uVar4 * 0x18 + iVar1 + 4) = 0;
      }
      *(int *)(unsigned)(ar4[0x43] + iVar5 * 4) = iVar1;
      ar4[0x44] = iVar5 + 1;
      return iVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c112fd8\n.set _FUN_8c112fd8, _FUN_8c112fd8_def\n");
//@unit 8c113124
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113124_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(int *)(unsigned)((int)0x110 + (int)ar4) != 0) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x10c + (int)ar4) + uVar1 * 4),vr6,vr7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)((int)0x110 + (int)ar4));
  }
  if (*(int *)(unsigned)((int)0x10c + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x10c + (int)ar4),vr6,vr7));
  }
  iVar2 = (int)0x10c;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c113124\n.set _FUN_8c113124, _FUN_8c113124_def\n");
//@unit 8c113132
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113132_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113132";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint unaff_r11 = 0;
  uint uVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(uint *)(unsigned)(in_r0 + (int)unaff_r14)) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x10c + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(unsigned)((int)0x110 + (int)unaff_r14));
  }
  if (*(int *)(unsigned)((int)0x10c + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x10c + (int)unaff_r14),ar6,ar7));
  }
  iVar2 = (int)0x10c;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  iVar2 = iVar2 + 4;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  return iVar2;
}

__asm__(".globl _FUN_8c113132\n.set _FUN_8c113132, _FUN_8c113132_def\n");
//@unit 8c11318e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11318e_def(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11318e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3 = 0;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar1 = *(ushort *)(unsigned)(ar4 + 0x47);
  iVar9 = *ar4;
  uVar8 = (uint)uVar1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x10))))(iVar9,(uVar8 + 1) * 4,0,vr7));
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar3,ar4[0x46],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x18))))(iVar9,ar4[0x46],vr6,vr7));
    }
    ar4[0x46] = iVar3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0xc,vr6,vr7));
    piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)extraout_r3))(iVar9,iVar3 * 0xc,vr6,vr7));
    if (piVar4 != (int *)(unsigned)0x0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0xc,vr6,vr7));
      uVar7 = iVar3 - 1;
      if (ar5 != (int *)(unsigned)0x0) {
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
      *(unsigned *)(unsigned)(ar4[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(unsigned)(ar4 + 0x47) = uVar1 + 1;
      if (ar4[0x49] == 0) {
        ar4[0x49] = (int)piVar4;
      }
      ar4[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c11318e\n.set _FUN_8c11318e, _FUN_8c11318e_def\n");
//@unit 8c11319e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11319e_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11319e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *extraout_r3 = 0;
  int *piVar6;
  uint uVar7;
  int *unaff_r10 = 0;
  uint uVar8;
  int a4;
  uint uVar9;
  int *unaff_r14 = 0;
  
  uVar1 = *(ushort *)(unsigned)(ain0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar8 = (uint)uVar1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(uVar8 + 1) * 4,ar6,ar7));
  if (iVar3 != 0) {
    if (uVar8 != 0) {
      ar6 = uVar8 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar3,unaff_r14[0x46],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0x46],ar6,ar7));
    }
    unaff_r14[0x46] = iVar3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(unaff_r14 + 0x79),0xc,vr6,vr7));
    piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)extraout_r3))(a4,iVar3 * 0xc,ar6,ar7));
    if (piVar4 != (int *)(unsigned)0x0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(unaff_r14 + 0x79),0xc,vr6,vr7));
      uVar7 = iVar3 - 1;
      if (unaff_r10 != (int *)(unsigned)0x0) {
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
      *(unsigned *)(unsigned)(unaff_r14[0x46] + uVar8 * 4) = piVar4;
      *(ushort *)(unsigned)(unaff_r14 + 0x47) = uVar1 + 1;
      if (unaff_r14[0x49] == 0) {
        unaff_r14[0x49] = (int)piVar4;
      }
      unaff_r14[0x48] = (int)(piVar4 + uVar7 * 3);
      return 0x120;
    }
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,2,ar6,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c11319e\n.set _FUN_8c11319e, _FUN_8c11319e_def\n");
//@unit 8c1132cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1132cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1132cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  uVar1 = 0;
  if (*(short *)(unsigned)((int)0x11c + (int)ar4) != 0) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x118 + (int)ar4) + uVar1 * 4),vr6,vr7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(unsigned)((int)0x11c + (int)ar4));
  }
  if (*(int *)(unsigned)((int)0x118 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x118 + (int)ar4),vr6,vr7));
  }
  iVar2 = (int)0x118;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(iVar2 + 4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(iVar2 + 8 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(iVar2 + 0xc + (int)ar4) = 0;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132cc\n.set _FUN_8c1132cc, _FUN_8c1132cc_def\n");
//@unit 8c1132da
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1132da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1132da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint unaff_r11 = 0;
  uint uVar1;
  int iVar2;
  int *unaff_r14 = 0;
  
  iVar2 = *unaff_r14;
  uVar1 = unaff_r11;
  if (unaff_r11 < *(ushort *)(unsigned)(in_r0 + (int)unaff_r14)) {
    do {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))
                (iVar2,*(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x118 + (int)unaff_r14) + uVar1 * 4),ar6
                 ,ar7));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(unsigned)((int)0x11c + (int)unaff_r14));
  }
  if (*(int *)(unsigned)((int)0x118 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x118 + (int)unaff_r14),ar6,ar7));
  }
  iVar2 = (int)0x118;
  *(uint *)(unsigned)(iVar2 + (int)unaff_r14) = unaff_r11;
  *(short *)(unsigned)(iVar2 + 4 + (int)unaff_r14) = (short)unaff_r11;
  *(uint *)(unsigned)(iVar2 + 8 + (int)unaff_r14) = unaff_r11;
  *(uint *)(unsigned)(iVar2 + 0xc + (int)unaff_r14) = unaff_r11;
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c1132da\n.set _FUN_8c1132da, _FUN_8c1132da_def\n");
//@unit 8c113354
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint * FUN_8c113354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar8 = uVar4;
  if (uVar4 < *(uint *)(unsigned)(ar4 + 0x110)) {
    do {
      iVar7 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10c) + uVar8 * 4);
      if (uVar4 != 0) {
        *(int *)(unsigned)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(uint *)(unsigned)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(uint *)(unsigned)(uVar4 + 4) = uVar6;
  }
  puVar5 = (uint *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10c));
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(uint *)(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c113354\n.set _FUN_8c113354, _FUN_8c113354_def\n");
//@unit 8c11335c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint * FUN_8c11335c_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11335c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(in_r0 + ar4),0x18,vr6,vr7));
  uVar7 = ar5;
  if (ar5 < *(uint *)(unsigned)(ar4 + 0x110)) {
    do {
      iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10c) + uVar7 * 4);
      if (ar5 != 0) {
        *(int *)(unsigned)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(uint *)(unsigned)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(uint *)(unsigned)(ar5 + 4) = ar6;
  }
  puVar5 = (uint *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10c));
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(uint *)(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl _FUN_8c11335c\n.set _FUN_8c11335c, _FUN_8c11335c_def\n");
//@unit 8c1133f6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1133f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1133f6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113124(ar4,ar5,ar6,ar7));
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(ar4,0,ar6,ar7));
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112c90(ar4,uVar2,ar6,ar7));
    uVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112b6e(ar4,0,ar6,ar7));
    if (iVar1 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112ec6(ar4,uVar2,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112d82(ar4,0,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11346c_def(int ar4,ushort *ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c11346c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
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
  
  if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
    iVar11 = *(int *)(unsigned)(ar4 + 0x54);
    (*(uint *)(fr0_ - 0x20)) = 0;
    uVar3 = (uint)*(ushort *)(unsigned)(0xe4 + ar4);
    if (*(short *)(unsigned)(ar4 + 0x50) != 0) {
      do {
        puVar6 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar11 + 0xc));
        uVar1 = *puVar6 >> 2;
        if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
          uVar3 = uVar3 + 1;
          *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
          ar5[uVar3] = uVar1;
        }
        puVar8 = puVar6 + 1;
        if ((*puVar6 & 1) == 0) {
          uVar1 = *puVar8;
          ar7 = (int *)(unsigned)(uint)(uVar1 >> 2);
          if (*(char *)(unsigned)(ar6 + (int)ar7) == '\0') {
            uVar3 = uVar3 + 1;
            *(char *)(unsigned)(ar6 + (int)ar7) = '\x01';
            ar5[uVar3] = uVar1 >> 2;
          }
          if ((*puVar8 & 1) != 0) {
            puVar7 = (uint *)(unsigned)(*(int *)(unsigned)(puVar6 + 2) * 4 + *(int *)(unsigned)(0x98 + ar4));
            piVar10 = (int *)(unsigned)puVar7[1];
            ar7 = (int *)(unsigned)*puVar7;
            while (ar7 < piVar10) {
              piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*ar7 * 4 + *(int *)(unsigned)(ar4 + 0x44)));
              iVar2 = *ar7;
              ar7 = ar7 + 1;
              piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)((iVar2 + 1) * 4 + *(int *)(unsigned)(ar4 + 0x44)));
              while (piVar9 < piVar4) {
                iVar2 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar1 = *(ushort *)(unsigned)(iVar2 * 2 + *(int *)(unsigned)(ar4 + 0x48)) >> 2;
                if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
                  uVar3 = uVar3 + 1;
                  *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
                  ar5[uVar3] = uVar1;
                }
              }
            }
          }
        }
        else {
          puVar7 = (uint *)(unsigned)(*(int *)(unsigned)puVar8 * 4 + *(int *)(unsigned)(0x98 + ar4));
          piVar10 = (int *)(unsigned)puVar7[1];
          ar7 = (int *)(unsigned)*puVar7;
          while (ar7 < piVar10) {
            piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*ar7 * 4 + *(int *)(unsigned)(ar4 + 0x44)));
            iVar2 = *ar7;
            ar7 = ar7 + 1;
            piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)((iVar2 + 1) * 4 + *(int *)(unsigned)(ar4 + 0x44)));
            while (piVar9 < piVar4) {
              iVar2 = *piVar9;
              piVar9 = piVar9 + 1;
              uVar1 = *(ushort *)(unsigned)(iVar2 * 2 + *(int *)(unsigned)(ar4 + 0x48)) >> 2;
              if (*(char *)(unsigned)(ar6 + (uint)uVar1) == '\0') {
                uVar3 = uVar3 + 1;
                *(undefined1 *)(unsigned)(ar6 + (uint)uVar1) = 1;
                ar5[uVar3] = uVar1;
              }
            }
          }
        }
        (*(uint *)(fr0_ - 0x20)) = (*(uint *)(fr0_ - 0x20)) + 1;
        iVar11 = *(int *)(unsigned)(iVar11 + 0x18);
      } while ((*(uint *)(fr0_ - 0x20)) < *(ushort *)(unsigned)(ar4 + 0x50));
    }
    uVar5 = (uint)(*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1);
    if (uVar5 - uVar3 < (uint)*(ushort *)(unsigned)(ar4 + 0x50)) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
    }
    if (uVar3 == uVar5) {
      (vsp = ((unsigned long)(fr0_ - 32)), memset(ar6,0,(*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1) + 1,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
    }
    *ar5 = (ushort)uVar3;
  }
  else if (*(int *)(unsigned)(ar4 + 0x30) == 0) {
    if (*(ushort *)(unsigned)(ar4 + 0x50) < *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 1;
    }
    uVar1 = *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc) >> 1;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11372e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11372e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
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
  
  iVar9 = 0;
  *(undefined4 *)(unsigned)((int)0x1ac + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xd) = 0;
  iVar2 = (int)0x150;
  *(undefined4 *)(unsigned)(iVar2 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(iVar2 + -0x24 + (int)ar4) = 0xffffffff;
  iVar2 = (int)0x1c4;
  *(undefined2 *)(unsigned)(iVar2 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(iVar2 + -0x2a + (int)ar4) = 0;
  ar4[0xc] = 1;
  *(undefined4 *)(unsigned)(iVar2 + -0x28 + (int)ar4) = 0;
  if (*(char *)(unsigned)(iVar2 + -0x70 + (int)ar4) != '\0') {
    *(undefined1 *)(unsigned)((int)0x154 + (int)ar4) = 0;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1133f6(ar4,ar5,ar6,ar7));
    if ((uVar3 & 0xff) != 0) {
      return 1;
    }
  }
  piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c113354(ar4,ar5,ar6,ar7));
  piVar4[1] = 0;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112d00(ar4,ar5,ar6,ar7));
  if ((uVar3 & 0xff) == 0) {
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1157c0(ar4,ar5,ar6,ar7));
    }
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c117bac)) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115778(ar4,ar5,ar6,ar7));
    }
    iVar2 = 0;
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      iVar11 = ar4[0x15];
      (*(uint *)(fr0_ - 0x2c)) = 0;
      if (*(int *)(unsigned)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)((int)0x148 + (int)ar4) + (*(uint *)(fr0_ - 0x2c)) * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + ar4[0x11]));
            for (piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(uVar7 * 4 + ar4[0x11])); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(unsigned)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined2 *)(unsigned)(iVar11 + 2) = 0;
              *(unsigned *)(unsigned)(iVar11 + 8) = piVar4;
              *(undefined4 *)(unsigned)(iVar11 + 0x10) = 0;
              iVar9 = (int)0xac;
              *(int *)(unsigned)(iVar11 + 0x14) = *(int *)(unsigned)((int)0xa4 + (int)ar4) + -4;
              *(uint *)(unsigned)(iVar11 + 0x1c) = *(int *)(unsigned)(iVar9 + (int)ar4) + (*(uint *)(fr0_ - 0x2c)) * 4;
              if (*(int *)(unsigned)(iVar11 + 0x18) == 0) {
                iVar8 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar11,ar6,ar7));
              }
              else {
                iVar8 = *(int *)(unsigned)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar8;
            }
          }
          (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) + 1;
        } while ((*(uint *)(fr0_ - 0x2c)) < *(uint *)(unsigned)((int)0x144 + (int)ar4));
      }
    }
    else if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c119320)) {
      iVar6 = *(int *)(unsigned)((int)0x1b4 + (int)ar4);
      iVar8 = ar4[0x10];
      uVar3 = 0;
      iVar11 = ar4[0x15];
      if (ar4[0x10] != 0) {
        do {
          iVar9 = iVar11;
          *(uint *)(unsigned)(iVar9 + 0xc) = uVar3 * 2 + ar4[0x12];
          *(undefined4 *)(unsigned)(iVar9 + 0x10) = 0;
          uVar1 = 0x77ff;
          if (uVar3 == iVar8 - iVar6) {
            uVar1 = 0;
          }
          *(undefined2 *)(unsigned)(iVar9 + 2) = uVar1;
          *(unsigned *)(unsigned)(iVar9 + 8) = piVar4;
          *(unsigned *)(unsigned)(iVar9 + 4) = piVar4;
          *(undefined4 *)(unsigned)(iVar9 + 0x14) = 0;
          if (*(int *)(unsigned)(iVar9 + 0x18) == 0) {
            iVar11 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar9,ar6,ar7));
          }
          else {
            iVar11 = *(int *)(unsigned)(iVar9 + 0x18);
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
        iVar8 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar4[0x10] << 2,ar6,ar7));
        ar4[0x13] = iVar8;
        if (ar4[0x13] == 0) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1204c4(ar4,2,ar6,ar7));
          return 1;
        }
      }
      iVar8 = ar4[0x10] << 2;
      (vsp = ((unsigned long)(fr0_ - 48)), memset(ar4[0x13],0,iVar8,ar7));
      (*(uint *)(fr0_ - 0x28)) = 0;
      if (*(int *)(unsigned)((int)0x144 + (int)ar4) != 0) {
        do {
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)((int)0x148 + (int)ar4) + (*(uint *)(fr0_ - 0x28)) * 4);
          uVar3 = -(uVar7 & 7);
          if ((int)uVar3 < 0) {
            uVar3 = (int)0x80 >> (~uVar3 & 0x1f) + 1;
          }
          else {
            uVar3 = (int)0x80 << (uVar3 & 0x1f);
          }
          if ((*(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + (uVar7 >> 3)) & uVar3) != 0) {
            piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + ar4[0x11]));
            for (piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(uVar7 * 4 + ar4[0x11])); piVar10 < piVar5; piVar10 = piVar10 + 1
                ) {
              *(int *)(unsigned)(iVar11 + 0xc) = *piVar10 * 2 + ar4[0x12];
              *(undefined4 *)(unsigned)(iVar11 + 0x10) = 0;
              *(undefined2 *)(unsigned)(iVar11 + 2) = 0;
              *(unsigned *)(unsigned)(iVar11 + 8) = piVar4;
              *(undefined4 *)(unsigned)(iVar11 + 0x14) = 0;
              *(int *)(unsigned)(ar4[0x13] + *piVar10 * 4) = iVar11;
              if (*(int *)(unsigned)(iVar11 + 0x18) == 0) {
                iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112b6e(ar4,iVar11,iVar8,ar7));
              }
              else {
                iVar6 = *(int *)(unsigned)(iVar11 + 0x18);
              }
              iVar2 = iVar2 + 1;
              iVar9 = iVar11;
              iVar11 = iVar6;
            }
          }
          (*(uint *)(fr0_ - 0x28)) = (*(uint *)(fr0_ - 0x28)) + 1;
        } while ((*(uint *)(fr0_ - 0x28)) < *(uint *)(unsigned)((int)0x144 + (int)ar4));
      }
    }
    iVar11 = 0;
    iVar8 = 0;
    *piVar4 = *piVar4 + iVar2;
    ar4[0x18] = iVar9;
    *(short *)(unsigned)(ar4 + 0x14) = (short)iVar2;
    iVar9 = (int)0x160;
    *(undefined2 *)(unsigned)(iVar9 + -2 + (int)ar4) = *(undefined2 *)(unsigned)(iVar9 + (int)ar4);
    *(undefined1 *)(unsigned)(iVar9 + -4 + (int)ar4) = 0;
    do {
      iVar9 = (int)0x184;
      iVar8 = iVar8 + 1;
      *(undefined4 *)(unsigned)((int)ar4 + iVar11 + 0x170) = 0;
      *(undefined4 *)(unsigned)((int)ar4 + iVar11 + iVar9) = 0;
      iVar11 = iVar11 + 4;
    } while (iVar8 < 5);
    *(undefined1 *)(unsigned)((int)0x198 + (int)ar4) = 0;
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11372e\n.set _FUN_8c11372e, _FUN_8c11372e_def\n");
//@unit 8c113ac8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113ac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  puVar11 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  piVar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + -4 + ar4));
  iVar1 = iVar1 + -0xc;
  puVar9 = ((uint *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  puVar10 = puVar9;
  if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
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
        iVar1 = *(int *)(unsigned)(0xc0 + ar4);
        uVar4 = uVar4 + 1;
        if ((*(ushort *)(unsigned)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(unsigned)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(int *)(unsigned)(0x94 + ar4);
  uVar2 = -(uVar3 & 7);
  if ((int)uVar2 < 0) {
    uVar2 = (int)uVar5 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar2 = uVar5 << (uVar2 & 0x1f);
  }
  if ((*(byte *)(unsigned)(iVar1 + (uVar3 >> 3)) & uVar2) != 0) {
LAB_8c113b32:
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
  }
  goto joined_r0x8c113afe;
}

__asm__(".globl _FUN_8c113ac8\n.set _FUN_8c113ac8, _FUN_8c113ac8_def\n");
//@unit 8c113b54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113b54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113b54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0x38);
  puVar3[1] = *(undefined4 *)(unsigned)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(undefined4 *)(unsigned)(ar4 + 0x44);
  puVar3[3] = *(undefined4 *)(unsigned)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(undefined4 *)(unsigned)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(undefined4 *)(unsigned)(iVar1 + ar4);
  puVar3[6] = *(undefined4 *)(unsigned)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(undefined4 *)(unsigned)(iVar2 + 4 + ar4);
  puVar3[8] = *(undefined4 *)(unsigned)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(undefined4 *)(unsigned)(iVar2 + ar4);
  puVar3[0xb] = *(undefined4 *)(unsigned)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(undefined4 *)(unsigned)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(undefined4 *)(unsigned)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(undefined4 *)(unsigned)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl _FUN_8c113b54\n.set _FUN_8c113b54, _FUN_8c113b54_def\n");
//@unit 8c113bcc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113bcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113bcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)0xfc;
  puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4));
  *(undefined4 *)(unsigned)(ar4 + 0x38) = *puVar2;
  *(undefined4 *)(unsigned)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(undefined4 *)(unsigned)(ar4 + 0x44) = puVar2[2];
  *(undefined4 *)(unsigned)(ar4 + 0x48) = puVar2[3];
  *(undefined4 *)(unsigned)(ar4 + 0xc0) = puVar2[4];
  *(undefined4 *)(unsigned)(0x1c0 + ar4) = puVar2[5];
  iVar1 = (int)0x98;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = puVar2[6];
  *(undefined4 *)(unsigned)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)0x148;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = puVar2[8];
  *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)0xa8;
  *(undefined4 *)(unsigned)(iVar1 + ar4) = puVar2[10];
  *(undefined4 *)(unsigned)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(undefined4 *)(unsigned)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(undefined4 *)(unsigned)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(int *)(unsigned)(iVar1 + -4 + ar4) =
       (*(int *)(unsigned)(ar4 + 0x38) + *(int *)(unsigned)(iVar1 + 0x10 + ar4) + 1) * 4 + *(int *)(unsigned)(iVar1 + -8 + ar4);
  *(undefined4 *)(unsigned)(iVar1 + 0x60 + ar4) = *(undefined4 *)(unsigned)(ar4 + 0x38);
  return iVar1 + 0x60;
}

__asm__(".globl _FUN_8c113bcc\n.set _FUN_8c113bcc, _FUN_8c113bcc_def\n");
//@unit 8c113c46
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113c46_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113c46";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x12],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x11],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xc0 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1c0 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x98 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x9c + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x148 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x100 + (int)ar4),vr6,vr7));
  if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa0 + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa8 + (int)ar4),vr6,vr7));
  }
  if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)ar4)) == ((void *)(unsigned)0x8c117bac)) {
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),vr6,vr7));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c46\n.set _FUN_8c113c46, _FUN_8c113c46_def\n");
//@unit 8c113c4e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113c4e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113c4e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int *unaff_r13 = 0;
  int a4;
  
  a4 = *unaff_r13;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)(in_r0 + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r13[0x11],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xc0 + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x1c0 + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x98 + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x9c + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x148 + (int)unaff_r13),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x100 + (int)unaff_r13),ar6,ar7));
  if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)unaff_r13)) == ((void *)(unsigned)0x8c11617a)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xa0 + (int)unaff_r13),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xac + (int)unaff_r13),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xa8 + (int)unaff_r13),ar6,ar7));
  }
  if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)unaff_r13)) == ((void *)(unsigned)0x8c117bac)) {
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xb0 + (int)unaff_r13),vr6,vr7));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c113c4e\n.set _FUN_8c113c4e, _FUN_8c113c4e_def\n");
//@unit 8c113d68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113d68_def(int *ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113d68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  ushort * s0 = (ushort *)(unsigned long)*(unsigned *)(vsp + 0);
  ushort * s4 = (ushort *)(unsigned long)*(unsigned *)(vsp + 4);
  int s8 = *(int *)(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  short sVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  
  puVar3 = (ushort *)(unsigned)*ar6;
  piVar4 = (int *)(unsigned)*ar4;
  psVar6 = (short *)(unsigned)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (short *)(unsigned)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    (*(short *)(fr0_ - 0x1a)) = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)(*(short *)(fr0_ - 0x1a));
    *(undefined4 *)(unsigned)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c113d68\n.set _FUN_8c113d68, _FUN_8c113d68_def\n");
//@unit 8c113dfa
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113dfa_def(int *ar4,int *ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c113dfa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int a6;
  int a4;
  undefined4 *puVar2;
  
  uVar1 = *(ushort *)(unsigned)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(a4,*ar4 * 2 + ar7,a6,ar7));
  puVar2 = (undefined4 *)(unsigned)(a4 + a6);
  *(ushort *)(unsigned)((int)puVar2 + -2) = *(ushort *)(unsigned)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)(*(uint*)((uchar*)&s0+2));
}

__asm__(".globl _FUN_8c113dfa\n.set _FUN_8c113dfa, _FUN_8c113dfa_def\n");
//@unit 8c113e64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113e64_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c113e64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = (uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x44) + ar5 * 4) + 4);
  iVar4 = ar6 - *(int *)(unsigned)(ar4 + 0x48);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c113e98_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c113e98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
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
  
  (*(ushort * *)(fr0_ - 0x5c)) = (ushort *)(unsigned)(uint)ar4[0x41];
  iVar21 = 0;
  uVar22 = 0;
  piVar20 = (int *)(unsigned)(uint)ar4[0x11];
  (*(uint * *)(fr0_ - 0x54)) = (uint *)(unsigned)*piVar20;
  a4 = *ar4;
  (*(int *)(fr0_ - 0x34)) = 0;
  (*(int *)(fr0_ - 0x40)) = 0;
  (*(int *)(fr0_ - 0x38)) = ar4[0x3b];
  iVar12 = ar4[0x3c];
  (*(int *)(fr0_ - 0x4c)) = 0;
  (*(int *)(fr0_ - 0x60)) = 0;
  (*(int * *)(fr0_ - 0x30)) = (int *)(unsigned)(uint)ar4[0x12];
  uVar8 = 1;
  uVar7 = 0;
  for (iVar17 = ar5; iVar17 != 0; iVar17 = *(int *)(unsigned)(iVar17 + 0x10)) {
    (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
    for (piVar16 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar17 + 0xc)); piVar16 != (int *)(unsigned)0x0; piVar16 = (int *)(unsigned)piVar16[4]) {
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
  iVar13 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(iVar21 + 1) * 0xc,0,ar7));
  iVar21 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,iVar21 * uVar22 * 6,iVar17,ar7));
  *(undefined2 *)(unsigned)(iVar13 + 8) = 0xffff;
  do {
    if (ar5 == 0) {
      for (uVar5 = *(ushort *)(unsigned)(iVar13 + 8); uVar5 != 0xffff;
          uVar5 = *(ushort *)(unsigned)((uint)uVar5 * 6 + iVar21 + 2)) {
        (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + 1;
      }
      piVar10 = (int *)(unsigned)(uVar8 - 1);
      (*(int * *)(fr0_ - 0x50)) = (int *)(unsigned)(iVar13 + 0xc);
      (*(int *)(fr0_ - 0x6c)) = (uint)uVar7 - (*(int *)(fr0_ - 0x40));
      piVar15 = (*(int * *)(fr0_ - 0x50));
      piVar16 = (*(int * *)(fr0_ - 0x50));
      piVar20 = piVar10;
      (*(int * *)(fr0_ - 0x84)) = piVar10;
      for (piVar24 = (int *)(unsigned)0x1; piVar24 <= piVar10; piVar24 = (int *)(unsigned)((int)piVar24 + 1)) {
        uVar22 = (uint)*(ushort *)(unsigned)(piVar16 + 2);
        if (uVar22 != 0) {
          (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x4c)) + (uint)(*(ushort * *)(fr0_ - 0x5c))[piVar15[1] * 6 + 2];
          uVar7 = (*(ushort * *)(fr0_ - 0x5c))[piVar15[1] * 6 + 4];
          while (uVar22 != 0xffff) {
            uVar8 = (*(ushort * *)(fr0_ - 0x5c))
                    [*(int *)(unsigned)((uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21) * 0xc + iVar13 + 4) * 6 + 3] +
                    uVar7 * (short)ar4[0x3d];
            puVar19 = (ushort *)(unsigned)((uint)uVar8 * 2 + iVar12);
            iVar17 = (uint)*(ushort *)(unsigned)((uint)puVar19[1] * 2 + iVar12) -
                     (uint)*(ushort *)(unsigned)((uint)*puVar19 * 2 + iVar12);
            if (iVar17 == 0) {
              uVar8 = 0xffff;
            }
            else {
              (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0x4c)) + iVar17;
              (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x84)) + 1);
              (*(int *)(fr0_ - 0x6c)) = (*(int *)(fr0_ - 0x6c)) + 1;
              puVar19 = (ushort *)(unsigned)((uint)uVar8 * 2 + iVar12);
              piVar20 = (int *)(unsigned)((int)piVar20 + ((uint)puVar19[1] - (uint)*puVar19));
            }
            iVar17 = uVar22 * 6 + iVar21;
            *(ushort *)(unsigned)(iVar17 + 4) = uVar8;
            uVar22 = (uint)*(ushort *)(unsigned)(iVar17 + 2);
          }
        }
        piVar16 = piVar16 + 3;
        piVar15 = piVar15 + 3;
      }
      (*(int * *)(fr0_ - 0x64)) = piVar10;
      (*(int * *)(fr0_ - 0x74)) = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,((int)(*(int * *)(fr0_ - 0x84)) + 1U) * 4,piVar15,piVar16));
      (*(int * *)(fr0_ - 0x2c)) = (*(int * *)(fr0_ - 0x74));
      (*(uint * *)(fr0_ - 0x54)) = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(*(int *)(fr0_ - 0x6c)) << 2,piVar15,piVar16));
      puVar19 = (ushort *)(unsigned)0x2;
      (*(short * *)(fr0_ - 0x88)) = (short *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,(*(int * *)(fr0_ - 0x84)),2,piVar16));
      (*(short * *)(fr0_ - 0x44)) = (*(short * *)(fr0_ - 0x88));
      iVar17 = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(int)(*(int * *)(fr0_ - 0x84)) << 1,puVar19,piVar16));
      ar4[0x70] = iVar17;
      (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))
                                    (a4,((int)(*(int * *)(fr0_ - 0x84)) + (int)piVar20 + 2) * 4,puVar19,piVar16));
      (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x70)) + (int)(*(int * *)(fr0_ - 0x84)) + 1;
      (*(int * *)(fr0_ - 0x58)) = (*(int * *)(fr0_ - 0x70));
      (*(int *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,((int)piVar20 * 2 + (*(int *)(fr0_ - 0x4c))) * 2,puVar19,piVar16));
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x48));
      piVar20 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(*(int *)(fr0_ - 0x40)) << 2,puVar19,piVar16));
      (*(int * *)(fr0_ - 0x28)) = piVar20;
      piVar15 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(int)(*(int * *)(fr0_ - 0x84)) << 3,puVar19,piVar16));
      ar4[0x40] = (int)piVar15;
      (*(int *)(fr0_ - 0x60)) = 0;
      uVar7 = *(ushort *)(unsigned)(iVar13 + 8);
      while (uVar7 != 0xffff) {
        puVar19 = (ushort *)(unsigned)((uint)uVar7 * 6 + iVar21);
        piVar16 = (int *)(unsigned)(uint)*puVar19;
        *piVar20 = (int)piVar16 + -1;
        (*(short * *)(fr0_ - 0x88))[(int)piVar16 + -1] = 1;
        piVar20 = piVar20 + 1;
        uVar7 = puVar19[1];
      }
      (*(uint * *)(fr0_ - 0x8c)) = (*(uint * *)(fr0_ - 0x54));
      piVar20 = (*(int * *)(fr0_ - 0x50));
      for ((*(int * *)(fr0_ - 0x3c)) = (int *)(unsigned)0x1; (*(int * *)(fr0_ - 0x3c)) <= piVar10; (*(int * *)(fr0_ - 0x3c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x3c)) + 1)
          ) {
        (*(int *)(fr0_ - 0x4c)) = CONCAT22((*(uint*)((uchar*)&(*(int *)(fr0_ - 0x4c))+2)),*(undefined2 *)(unsigned)(ar4[0x30] + *piVar20 * 2));
        uVar7 = *(ushort *)(unsigned)(piVar20 + 2);
        *piVar15 = *piVar20;
        uVar22 = (uint)uVar7;
        piVar15[1] = piVar20[1];
        piVar15 = piVar15 + 2;
        *(*(int * *)(fr0_ - 0x74)) = (int)(*(uint * *)(fr0_ - 0x8c));
        *(*(int * *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x60));
        *(*(int * *)(fr0_ - 0x70)) = (int)(*(int * *)(fr0_ - 0x68));
        puVar19 = (ushort *)(unsigned)&(*(int *)(fr0_ - 0x48));
        piVar16 = (*(int * *)(fr0_ - 0x30));
        (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x68)) + 1;
        (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c113dfa((*(ushort * *)(fr0_ - 0x5c)) + piVar20[1] * 6,&(*(int *)(fr0_ - 0x60)),puVar19,(*(int * *)(fr0_ - 0x30))));
        if (uVar22 != 0) {
          if (uVar22 == 0xffff) {
            *(*(short * *)(fr0_ - 0x88)) = 2;
          }
          else if (*(*(short * *)(fr0_ - 0x88)) != 1) {
            *(*(short * *)(fr0_ - 0x88)) = (short)(*(int *)(fr0_ - 0x4c));
          }
          (*(short * *)(fr0_ - 0x88)) = (*(short * *)(fr0_ - 0x88)) + 1;
          piVar24 = (*(int * *)(fr0_ - 0x64));
          for (; (*(int * *)(fr0_ - 0x64)) = piVar24, uVar22 != 0xffff;
              uVar22 = (uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 2)) {
            if (*(short *)(unsigned)(uVar22 * 6 + iVar21 + 4) == -1) {
              *(*(uint * *)(fr0_ - 0x8c)) = *(ushort *)(unsigned)(uVar22 * 6 + iVar21) - 1;
            }
            else {
              (*(int * *)(fr0_ - 0x64)) = (int *)(unsigned)((int)piVar24 + 1);
              *(*(uint * *)(fr0_ - 0x8c)) = (uint)piVar24;
            }
            (*(uint * *)(fr0_ - 0x8c)) = (*(uint * *)(fr0_ - 0x8c)) + 1;
            piVar24 = (*(int * *)(fr0_ - 0x64));
          }
        }
        piVar20 = piVar20 + 3;
        (*(int * *)(fr0_ - 0x74)) = (*(int * *)(fr0_ - 0x74)) + 1;
        (*(int * *)(fr0_ - 0x70)) = (*(int * *)(fr0_ - 0x70)) + 1;
      }
      *(*(int * *)(fr0_ - 0x74)) = (int)(*(uint * *)(fr0_ - 0x8c));
      *(*(int * *)(fr0_ - 0x70)) = (int)(*(int * *)(fr0_ - 0x68));
      piVar24 = (*(int * *)(fr0_ - 0x50));
      (*(int * *)(fr0_ - 0x74)) = (*(int * *)(fr0_ - 0x74)) + 1;
      (*(int * *)(fr0_ - 0x70)) = (*(int * *)(fr0_ - 0x70)) + 1;
      (*(int * *)(fr0_ - 0x64)) = piVar10;
      for ((*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)0x1; (*(int * *)(fr0_ - 0x7c)) <= piVar10; (*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x7c)) + 1)
          ) {
        uVar22 = (uint)*(ushort *)(unsigned)(piVar24 + 2);
        puVar1 = (*(uint * *)(fr0_ - 0x8c));
        piVar2 = (*(int * *)(fr0_ - 0x74));
        piVar3 = (*(int * *)(fr0_ - 0x70));
        ar7_00 = (*(int * *)(fr0_ - 0x64));
        if (uVar22 != 0) {
          for (; (*(uint * *)(fr0_ - 0x8c)) = puVar1, (*(int * *)(fr0_ - 0x74)) = piVar2, (*(int * *)(fr0_ - 0x70)) = piVar3, (*(int * *)(fr0_ - 0x64)) = ar7_00,
              uVar22 != 0xffff; uVar22 = (uint)*(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 2)) {
            uVar7 = *(ushort *)(unsigned)(uVar22 * 6 + iVar21 + 4);
            piVar20 = (int *)(unsigned)CONCAT22((short)((uint)piVar20 >> 0x10),uVar7);
            if (uVar7 != 0xffff) {
              *piVar15 = -1;
              piVar15[1] = -1;
              piVar15 = piVar15 + 2;
              (*(ushort * *)(fr0_ - 0x5c)) = (ushort *)(unsigned)((uint)uVar7 * 2 + iVar12);
              puVar19 = (ushort *)(unsigned)&(*(int *)(fr0_ - 0x48));
              (*(int * *)(fr0_ - 0x64)) = (int *)(unsigned)((int)ar7_00 + 1);
              ({ unsigned long t0_ = (unsigned long)(
                           (uint)(*(ushort * *)(fr0_ - 0x5c))[1] * 2 + iVar12); unsigned long t1_ = (unsigned long)((*(int *)(fr0_ - 0x38))); unsigned long t2_ = (unsigned long)(piVar20); unsigned long ri0_ = (unsigned long)((uint)*(*(ushort * *)(fr0_ - 0x5c)) * 2 + iVar12); *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 140)) - 16) + 8) = (unsigned)t2_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 140)) - 16); FUN_8c113d68(&(*(int * *)(fr0_ - 0x68)),&(*(int *)(fr0_ - 0x60)),puVar19,ar7_00); });
              (*(int * *)(fr0_ - 0x70)) = piVar3 + 1;
              *piVar3 = (int)(*(int * *)(fr0_ - 0x68));
              (*(uint * *)(fr0_ - 0x8c)) = puVar1 + 1;
              *puVar1 = *(ushort *)(unsigned)(uVar22 * 6 + iVar21) - 1;
              (*(int * *)(fr0_ - 0x74)) = piVar2 + 1;
              *piVar2 = (int)(*(uint * *)(fr0_ - 0x8c));
              piVar16 = ar7_00;
            }
            puVar1 = (*(uint * *)(fr0_ - 0x8c));
            piVar2 = (*(int * *)(fr0_ - 0x74));
            piVar3 = (*(int * *)(fr0_ - 0x70));
            ar7_00 = (*(int * *)(fr0_ - 0x64));
          }
        }
        piVar24 = piVar24 + 3;
      }
      *(*(int * *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x60));
      uVar22 = ar4[0x56];
      if (uVar22 < (uint)((*(int *)(fr0_ - 0x34)) * 0x14)) {
        uVar22 = (*(int *)(fr0_ - 0x34)) * 0x14;
      }
      ar4[0x56] = uVar22;
      ar4[0x42] = (int)piVar10;
      ar4[0x51] = (*(int *)(fr0_ - 0x40));
      ar4[0xe] = (int)(*(int * *)(fr0_ - 0x84));
      ar4[0x11] = (int)(*(int * *)(fr0_ - 0x58));
      ar4[0x12] = (*(int *)(fr0_ - 0x24));
      ar4[0x30] = (int)(*(short * *)(fr0_ - 0x44));
      ar4[0x26] = (int)(*(int * *)(fr0_ - 0x2c));
      ar4[0x27] = (int)(*(uint * *)(fr0_ - 0x54));
      ar4[0x2d] = (*(int *)(fr0_ - 0x6c));
      (*(int * *)(fr0_ - 0x68)) = (*(int * *)(fr0_ - 0x68)) + 1;
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c112b1c(ar4,(int)*(short *)(unsigned)((int)ar4 + 0x1be),puVar19,piVar16));
      ar4[0x52] = (int)(*(int * *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar13,puVar19,piVar16));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,iVar21,puVar19,piVar16));
      if ((((code *)(uint)ar4[0x4c] == ((void *)0x8c11617a)) &&
          (uVar22 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c1155a0(ar4,iVar21,puVar19,piVar16)), (uVar22 & 0xff) != 0)) ||
         (((code *)(uint)ar4[0x4c] == ((void *)0x8c117bac) &&
          (uVar22 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c115732(ar4,iVar21,puVar19,piVar16)), (uVar22 & 0xff) != 0)))) {
        uVar11 = 1;
      }
      else {
        *(undefined1 *)(unsigned)(ar4 + 0x1f) = 1;
        uVar11 = 0;
      }
      return uVar11;
    }
    (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)0x0;
    (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)0x0;
    piVar16 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 0xc));
    uVar22 = 0;
    if (piVar16 != (int *)(unsigned)0x0) {
      do {
        if (piVar16 == (int *)(unsigned)0x0) break;
        (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)*piVar16;
        uVar5 = *(ushort *)(unsigned)(uVar22 * 0xc + iVar13 + 8);
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84))] - (int)(*(uint * *)(fr0_ - 0x54));
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(iVar17 >> 2);
        while (uVar14 = (uint)uVar5, uVar14 != 0xffff) {
          if ((int *)(unsigned)*(int *)(unsigned)((uint)*(ushort *)(unsigned)(uVar14 * 6 + iVar21) * 0xc + iVar13 + 4) ==
              (*(int * *)(fr0_ - 0x70))) {
            uVar22 = (uint)*(ushort *)(unsigned)(uVar14 * 6 + iVar21);
            piVar16 = (int *)(unsigned)piVar16[4];
            goto LAB_8c11405a;
          }
          uVar5 = *(ushort *)(unsigned)(uVar14 * 6 + iVar21 + 2);
        }
        if (uVar22 == 0) {
          ar7 = 1;
        }
        else {
          iVar17 = piVar20[*(int *)(unsigned)(uVar22 * 0xc + iVar13) + 1] -
                   piVar20[*(int *)(unsigned)(uVar22 * 0xc + iVar13)];
          if (iVar17 < 0) {
            iVar17 = iVar17 + 3;
          }
          ar7 = iVar17 >> 2;
        }
LAB_8c11405a:
      } while (uVar14 != 0xffff);
      uVar5 = *(ushort *)(unsigned)(uVar22 * 0xc + iVar13 + 8);
      uVar14 = ar7;
      while( true ) {
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84)) + 1] - piVar20[(int)(*(int * *)(fr0_ - 0x84))];
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        ar7 = iVar17 >> 2;
        (*(short * *)(fr0_ - 0x44)) = (short *)(unsigned)(ar7 - 1);
        (*(int * *)(fr0_ - 0x58)) = (int *)(unsigned)(uint)uVar8;
        uVar18 = 0;
        uVar4 = uVar7;
        if (ar7 != 0) {
          do {
            psVar9 = (short *)(unsigned)((uint)uVar4 * 6 + iVar21);
            uVar7 = uVar5;
            for ((*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)0x0; (*(int * *)(fr0_ - 0x7c)) < uVar14;
                (*(int * *)(fr0_ - 0x7c)) = (int *)(unsigned)((int)(*(int * *)(fr0_ - 0x7c)) + 1)) {
              *psVar9 = uVar8 + (short)uVar18;
              uVar6 = uVar7;
              if (uVar5 == 0xffff) {
                uVar6 = 0xffff;
              }
              psVar9[1] = uVar6;
              uVar7 = uVar7 + 1;
              psVar9 = psVar9 + 3;
            }
            if ((short *)(unsigned)uVar18 == (*(short * *)(fr0_ - 0x44))) {
              for (uVar23 = 0; uVar23 < uVar14; uVar23 = uVar23 + 1) {
                *(ushort *)(unsigned)((uVar23 + uVar22) * 0xc + iVar13 + 8) = uVar4 + (short)uVar23;
              }
            }
            uVar7 = uVar4 + (short)uVar14;
            piVar15 = (int *)(unsigned)(((int)(*(int * *)(fr0_ - 0x58)) + uVar18) * 0xc + iVar13);
            piVar15[1] = (int)(*(int * *)(fr0_ - 0x70)) + uVar18;
            uVar18 = uVar18 + 1;
            *piVar15 = (int)(*(int * *)(fr0_ - 0x84));
            uVar5 = uVar4;
            uVar4 = uVar7;
          } while (uVar18 < ar7);
        }
        (*(uint*)((uchar*)&(*(short * *)(fr0_ - 0x88))+0)) = (short)ar7;
        uVar8 = (short)(*(short * *)(fr0_ - 0x88)) + uVar8;
        piVar16 = (int *)(unsigned)piVar16[4];
        if (piVar16 == (int *)(unsigned)0x0) break;
        (*(int * *)(fr0_ - 0x84)) = (int *)(unsigned)*piVar16;
        iVar17 = piVar20[(int)(*(int * *)(fr0_ - 0x84))] - (int)(*(uint * *)(fr0_ - 0x54));
        if (iVar17 < 0) {
          iVar17 = iVar17 + 3;
        }
        (*(int * *)(fr0_ - 0x70)) = (int *)(unsigned)(iVar17 >> 2);
        uVar5 = 0xffff;
        uVar22 = (uint)(*(int * *)(fr0_ - 0x58));
        uVar14 = ar7;
      }
      uVar14 = 0;
      uVar22 = (uint)(*(int * *)(fr0_ - 0x58));
      if (ar7 != 0) {
        do {
          iVar17 = uVar22 * 0xc;
          uVar22 = uVar22 + 1;
          uVar14 = uVar14 + 1;
          *(undefined2 *)(unsigned)(iVar17 + iVar13 + 8) = 0xffff;
        } while (uVar14 < ar7);
      }
    }
    ar5 = *(int *)(unsigned)(ar5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c113e98\n.set _FUN_8c113e98, _FUN_8c113e98_def\n");
//@unit 8c114774
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c114774_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114774";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  puVar7 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)0x98 + (int)ar4));
  ar4_00 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,ar4[0xe] << 1,1,ar7));
  ar6_00 = ar4[0xe] << 1;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,*(undefined4 *)(unsigned)((int)0xc0 + (int)ar4),ar6_00,ar7));
  uVar1 = *ar4_00;
  while ((uVar1 & 1) == 0) {
    iVar8 = iVar8 + 1;
    uVar1 = ar4_00[iVar8];
  }
  ar4_00[iVar8] = ar4_00[iVar8] & (ushort)0xfffe;
  iVar3 = iVar8 * 4;
  uVar4 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)0x98 + (int)ar4) + iVar3);
  uVar9 = *(int *)(unsigned)((iVar8 + 1) * 4 + *(int *)(unsigned)((int)0x90 + (int)ar4)) -
          *(int *)(unsigned)(iVar3 + *(int *)(unsigned)((int)0x90 + (int)ar4));
  a5 = uVar9 * 4;
  a6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,a5,ar6_00,ar7));
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
      a5 = *(int *)(unsigned)((*(int *)(unsigned)(iVar3 + *(int *)(unsigned)((int)0x90 + (int)ar4)) + uVar5) * 4 +
                   *(int *)(unsigned)((int)0x90 + (int)ar4));
      ar4_00[a5] = ar4_00[a5] | 3;
      uVar6 = uVar5 + 1;
      a6[uVar5] = a5;
      uVar5 = uVar6;
    } while (uVar6 < uVar9);
  }
  puVar2 = ((void *)(unsigned)0x8c11617a);
  iVar8 = (int)0x144;
  *(uint *)(unsigned)(iVar8 + (int)ar4) = uVar9;
  *(unsigned *)(unsigned)(iVar8 + 4 + (int)ar4) = a6;
  iVar8 = (int)0xc0;
  *(unsigned *)(unsigned)(iVar8 + (int)ar4) = ar4_00;
  *(undefined4 *)(unsigned)(iVar8 + -0xc + (int)ar4) = 0;
  if ((((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar8 + 0x70 + (int)ar4)) == puVar2) &&
     (uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1155a0(ar4,a5,a6,ar7)), (uVar5 & 0xff) != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1148c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1148c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0x148 + (int)ar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0xc0 + (int)ar4),ar6,ar7));
  if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0xa8 + (int)ar4),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),ar6,ar7));
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0xa0 + (int)ar4),vr6,vr7));
    return uVar1;
  }
  return (int)0x130;
}

__asm__(".globl _FUN_8c1148c4\n.set _FUN_8c1148c4, _FUN_8c1148c4_def\n");
//@unit 8c11495c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11495c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11495c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int *unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  float extraout_fr0_02 = 0;
  float extraout_fr0_03 = 0;
  float extraout_fr0_04 = 0;
  float extraout_fr0_05 = 0;
  int extraout_fr0_06 = 0;
  float extraout_fr0_07 = 0;
  float extraout_fr0_08 = 0;
  float extraout_fr0_09 = 0;
  float in_fr3 = 0;
  float fVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar3 = *unaff_r14;
  *(undefined4 *)(unsigned)(ain0 + (int)unaff_r14) = unaff_r10;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,ar5,ar6,ar7));
  if (cVar5 == '\0') {
    in_fr3 = 2.1474836e+09;
  }
  fVar4 = extraout_fr0;
  if (in_fr3 < extraout_fr0) {
    fVar4 = extraout_fr0 + -4.2949673e+09;
  }
  unaff_r14[0x53] = (int)fVar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x16,ar6,ar7));
  *(char *)(unsigned)((int)unaff_r14 + 0x1e6) = (char)(int)extraout_fr0_00;
  if (*(char *)(unsigned)((int)unaff_r14 + 0x1e6) == '\0') {
    *(char *)(unsigned)(unaff_r14 + 0x1f) = (char)unaff_r10;
  }
  else {
    *(undefined1 *)(unsigned)(unaff_r14 + 0x1f) = 0;
  }
  unaff_r14[10] = *(int *)(unsigned)unaff_r14[3];
  unaff_r14[0xb] = *(int *)(unsigned)unaff_r14[4];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x10,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112a20(unaff_r14,(int)extraout_fr0_01 & 0xffff,ar6,ar7));
  if ((uVar1 & 0xff) == 0) {
    *(char *)(unsigned)(unaff_r14 + 0x55) = (char)unaff_r10;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x11,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x79) = (short)(int)extraout_fr0_02;
    if (*(ushort *)(unsigned)(unaff_r14 + 0x79) < 0xfde9) {
      if (*(ushort *)(unsigned)(unaff_r14 + 0x79) < 200) {
        *(undefined2 *)(unsigned)(unaff_r14 + 0x79) = 200;
      }
    }
    else {
      *(undefined2 *)(unsigned)(unaff_r14 + 0x79) = 65000;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,8,ar6,ar7));
    cVar5 = '\0';
    unaff_r14[0x56] = (int)extraout_fr0_03 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,5,ar6,ar7));
    if (cVar5 == '\0') {
      fVar4 = 128.0;
    }
    fVar4 = extraout_fr0_04 * fVar4;
    if (2.1474836e+09 < fVar4) {
      fVar4 = fVar4 + -4.2949673e+09;
    }
    unaff_r14[0x5b] = (int)fVar4;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
    cVar5 = '\0';
    *(short *)(unsigned)(unaff_r14 + 0x58) = (short)(int)extraout_fr0_05;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,7,ar6,ar7));
    if (cVar5 == '\0') {
      unaff_r14[0x59] = extraout_fr0_06;
    }
    else {
      *(ulonglong *)(unsigned)(unaff_r14 + 0x59) = CONCAT44(extraout_fr0_06,extraout_fr1);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,10,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x68) = (short)(int)extraout_fr0_07;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0xf,ar6,ar7));
    *(short *)(unsigned)((int)unaff_r14 + 0x1be) = (short)(int)extraout_fr0_08;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x10))))(iVar3,0x3c,ar6,ar7));
    unaff_r14[0x3f] = iVar3;
    unaff_r14[0x20] = 0;
    unaff_r14[0x13] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,0x18,ar6,ar7));
    *(short *)(unsigned)(unaff_r14 + 0x7a) = (short)(int)extraout_fr0_09;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c114bd8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114bd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float extraout_fr0 = 0;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x2c))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xdc) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x30))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xde) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x34))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe0) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x38))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe2) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x34))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0x1c6) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x20))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe4) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x44))))(ar5,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0xf4) = uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x48))))(ar5,vr5,vr6,vr7));
  *(undefined2 *)(unsigned)(ar4 + 0xe6) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x88))))(ar5,vr5,vr6,vr7));
  *(undefined4 *)(unsigned)(ar4 + 0xe8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,0x15,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0xf8) = (char)(int)extraout_fr0;
  if (*(char *)(unsigned)(ar4 + 0xf8) != '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x8c))))(ar5,vr5,vr6,vr7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xcc))))(uVar2,vr5,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0xec) = uVar3;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xd0))))(uVar2,vr5,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0xf0) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114bd8\n.set _FUN_8c114bd8, _FUN_8c114bd8_def\n");
//@unit 8c114be0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c114be0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 a5;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  float extraout_fr0 = 0;
  undefined1 uVar5;
  byte in_FPSCR_CAUSE = 0;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte in_FPSCR_DN = 0;
  byte bVar9;
  byte bVar10;
  byte in_FPSCR_PR = 0;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x2c))))(ar5,ar5,ar6,ar7));
  *(short *)(unsigned)(0xdc + unaff_r13) = (short)uVar2;
  bVar6 = 0;
  bVar8 = 0;
  bVar10 = (byte)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                   (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x30))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xde + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar6 << 0xc | (uint)bVar8 << 0x12 | (uint)bVar10 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x34))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe0 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x38))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe2 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x34))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0x1c6 + unaff_r13) = (short)uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x20))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe4 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x44))))(unaff_r14,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xf4 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x48))))(unaff_r14,ar5,ar6,ar7));
  *(short *)(unsigned)(0xe6 + unaff_r13) = (short)uVar2;
  bVar7 = 0;
  bVar9 = 0;
  bVar6 = (byte)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + unaff_r14))))(unaff_r14,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c120550);
  a5 = 0x15;
  *(undefined4 *)(unsigned)(0xe8 + unaff_r13) = uVar2;
  bVar8 = 0;
  bVar10 = 0;
  bVar6 = (byte)((((uint)bVar7 << 0xc | (uint)bVar9 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
                 0x80000) >> 0x13);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13,0x15,ar6,ar7));
  iVar3 = (int)0xf8;
  if ((char)((((uint)bVar8 << 0xc | (uint)bVar10 << 0x12 | (uint)bVar6 << 0x13) & 0xffe7ffff &
             0x80000) >> 0x13) == '\0') {
    uVar5 = (undefined1)(int)extraout_fr0;
  }
  else {
    uVar5 = (undefined1)(int)CONCAT44D(extraout_fr0,extraout_fr1);
  }
  *(undefined1 *)(unsigned)(iVar3 + unaff_r13) = uVar5;
  if (*(char *)(unsigned)(iVar3 + unaff_r13) != '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x8c + unaff_r14))))(unaff_r14,a5,ar6,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xcc + unaff_r14))))(uVar2,a5,ar6,ar7));
    *(undefined4 *)(unsigned)(0xec + unaff_r13) = uVar4;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xd0 + unaff_r14))))(uVar2,a5,ar6,ar7));
    *(undefined4 *)(unsigned)(0xf0 + unaff_r13) = uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c114be0\n.set _FUN_8c114be0, _FUN_8c114be0_def\n");
//@unit 8c114d30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c114d30_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c114d30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
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
  
  piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x104 + ar4));
  iVar2 = (int)0xc8;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x38) * 4 + *(int *)(unsigned)(ar4 + 0x44) + 4)));
  iVar3 = iVar2 + 0x20;
  iVar9 = *(int *)(unsigned)(iVar3 + ar4);
  piVar12 = (int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) * 4 + *(int *)(unsigned)(iVar2 + 8 + ar4));
  (*(uint *)(fr0_ - 0x20)) = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      (*(int *)(fr0_ - 0x28)) = 0;
      puVar13 = (ushort *)(unsigned)(*piVar12 * 2 + *(int *)(unsigned)(0xcc + ar4));
      iVar2 = *(int *)(unsigned)(0xcc + ar4) + *piVar8 * 2;
      puVar10 = (ushort *)(unsigned)(iVar2 + -2);
      *(undefined2 *)(unsigned)((int)piVar7 + 6) =
           *(undefined2 *)(unsigned)(*(int *)(unsigned)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(undefined2 *)(unsigned)(piVar7 + 2) =
           *(undefined2 *)(unsigned)((*(int *)(unsigned)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (ushort *)(unsigned)(iVar2 + -4);
        piVar4 = (int *)(unsigned)((uint)uVar1 * 4 + iVar9);
        (*(int *)(fr0_ - 0x28)) = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1;
      *piVar7 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + (*(int *)(fr0_ - 0x28));
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (int *)(unsigned)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(short *)(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      (*(uint *)(fr0_ - 0x20)) = (*(uint *)(fr0_ - 0x20)) + 1;
      (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(piVar4));
    } while ((*(uint *)(fr0_ - 0x20)) < ar5);
  }
  iVar2 = 0xfffe;
  uVar11 = 0;
  iVar9 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
  if (ar6 != 0) {
    do {
      (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
      iVar3 = (int)0xe6;
      iVar6 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
      *piVar7 = iVar9;
      *(undefined2 *)(unsigned)(piVar7 + 2) = *(undefined2 *)(unsigned)(iVar3 + ar4);
      *(undefined2 *)(unsigned)((int)piVar7 + 6) = *(undefined2 *)(unsigned)(0xe6 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(short *)(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c114d30\n.set _FUN_8c114d30, _FUN_8c114d30_def\n");
//@unit 8c114e80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c114e80_def(int *ar4,int ar5,undefined4 ar6,short *ar7)

{
  ring[rp++ & 255] = "FUN_8c114e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
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
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float fVar21;
  bool bVar22;
  
  a4 = *ar4;
  iVar18 = ar4[0x3a];
  uVar5 = (short)ar4[0x37] << 2 | 1;
  iVar12 = ar5;
  iVar6 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x10))))(ar5,ar5,ar6,ar7));
  a6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x14))))(ar5,iVar12,ar6,ar7));
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x1c))))(ar5,iVar12,ar6,ar7));
  ar4[0x51] = iVar7;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,iVar12,ar6,ar7));
  ar4[0x32] = iVar7;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 8))))(ar5,iVar12,ar6,ar7));
  iVar8 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0xc))))(ar5,iVar12,ar6,ar7));
  ar4[0xe] = iVar8 + iVar7;
  ar4[0xf] = ((iVar8 + iVar7) - 1U >> 3) + 1;
  ar4[0x2f] = iVar6 + (int)a6;
  ar4[0x42] = ar4[0xe];
  uVar9 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1133f6(ar4,iVar12,ar6,ar7));
  if ((uVar9 & 0xff) != 0) {
    return 1;
  }
  puVar10 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x34))))(ar5,iVar12,ar6,ar7));
  ar4[0x33] = (int)puVar10;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x38))))(ar5,iVar12,ar6,ar7));
  ar4[0x34] = iVar7;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x3c))))(ar5,iVar12,ar6,ar7));
  ar4[0x35] = iVar7;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x40))))(ar5,iVar12,ar6,ar7));
  ar4[0x36] = iVar7;
  iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x28))))(ar5,iVar12,ar6,ar7));
  piVar11 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x24))))(ar5,iVar12,ar6,ar7));
  piVar17 = (int *)(unsigned)0x0;
  if (piVar11 != (int *)(unsigned)0x0) {
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      piVar17 = (int *)(unsigned)((int)piVar17 + 1);
      iVar7 = iVar7 + (*(int *)(unsigned)((uVar1 + 1) * 4 + iVar18) - *(int *)(unsigned)((uint)uVar1 * 4 + iVar18));
    } while (piVar17 < piVar11);
  }
  ar4[0x10] = iVar7 + (int)piVar11 * -2 + ar4[0x2f] * 3;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,ar4[0x51] << 2,piVar17,ar7));
  ar4[0x52] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,ar4[0xe] << 1,piVar17,ar7));
  ar4[0x70] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(ar4[0xe] + ar4[0x2f] + 2) * 4,piVar17,ar7));
  ar4[0x11] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,ar4[0x10] << 1,piVar17,ar7));
  ar4[0x12] = iVar12;
  if ((((ar4[0x52] != 0) && (ar4[0x70] != 0)) && (ar4[0x11] != 0)) && (ar4[0x12] != 0)) {
    iVar12 = 0;
    puVar10 = (ushort *)(unsigned)(uint)ar4[0x12];
    (*(undefined4 *)(fr0_ - 0x54)) = -1;
    bVar4 = false;
    puVar14 = (ushort *)(unsigned)(uint)ar4[0x33];
    a5 = (int *)(unsigned)(uint)ar4[0x34];
    a7 = a5 + *a5;
    puVar3 = (undefined4 *)(unsigned)(uint)ar4[0x11];
    piVar16 = (undefined4 *)(unsigned)(uint)ar4[0x11] + ar4[0xe] + 1;
    (*(ushort * *)(fr0_ - 0x40)) = puVar14;
    (*(int * *)(fr0_ - 0x50)) = a5;
    (*(int * *)(fr0_ - 0x2c)) = a7;
    iVar7 = (*(undefined4 *)(fr0_ - 0x54));
    for (puVar15 = puVar14; (*(undefined4 *)(fr0_ - 0x54)) = iVar7, (*(int * *)(fr0_ - 0x4c)) = piVar16, (*(undefined4 * *)(fr0_ - 0x44)) = puVar3,
        puVar15 < puVar14 + (int)piVar11; puVar15 = puVar15 + 1) {
      if (puVar15 == (*(ushort * *)(fr0_ - 0x40))) {
        if (bVar4) {
          if (*(char *)(unsigned)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          (*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x54))+0)) = (ushort)iVar7;
          *puVar10 = (ushort)(*(undefined4 *)(fr0_ - 0x54));
          (*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x54))+2)) = (ushort)((uint)iVar7 >> 0x10);
          puVar10[1] = (*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x54))+2));
          puVar10 = puVar10 + 2;
          iVar12 = iVar12 + 2;
        }
        else {
          bVar4 = true;
        }
        bVar22 = a7 == (*(int * *)(fr0_ - 0x2c));
        a7 = a7 + 1;
        if (bVar22) {
          (*(int * *)(fr0_ - 0x50)) = (*(int * *)(fr0_ - 0x50)) + 1;
          (*(undefined4 *)(fr0_ - 0x54)) = iVar7 + 1;
          (*(int * *)(fr0_ - 0x2c)) = (int *)(unsigned)(*(*(int * *)(fr0_ - 0x50)) * 4 + ar4[0x34]);
          (*(undefined4 * *)(fr0_ - 0x44)) = puVar3 + 1;
          *puVar3 = piVar16;
        }
        (*(ushort * *)(fr0_ - 0x40)) = puVar14 + *a7;
        (*(int * *)(fr0_ - 0x4c)) = piVar16 + 1;
        *piVar16 = iVar12;
      }
      piVar16 = (int *)(unsigned)((uint)*puVar15 * 4 + iVar18);
      piVar17 = (int *)(unsigned)(piVar16[1] * 2 + iVar18);
      for (a5 = (int *)(unsigned)(*piVar16 * 2 + iVar18 + 4); a5 < piVar17; a5 = (int *)(unsigned)((int)a5 + 2)) {
        iVar12 = iVar12 + 1;
        *puVar10 = (short)*a5 << 2;
        puVar10 = puVar10 + 1;
      }
      puVar3 = (*(undefined4 * *)(fr0_ - 0x44));
      piVar16 = (*(int * *)(fr0_ - 0x4c));
      iVar7 = (*(undefined4 *)(fr0_ - 0x54));
    }
    psVar19 = (short *)(unsigned)(uint)ar4[0x35];
    iVar7 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x28))))(ar5,a5,piVar17,a7));
    ar7 = psVar19 + iVar7;
    piVar11 = (int *)(unsigned)(uint)ar4[0x36];
    piVar16 = piVar11 + *piVar11;
    piVar17 = piVar16;
    psVar20 = psVar19;
    (*(ushort * *)(fr0_ - 0x40)) = (ushort *)(unsigned)psVar19;
    do {
      if ((ushort *)(unsigned)psVar20 == (*(ushort * *)(fr0_ - 0x40))) {
        if (bVar4) {
          if (*(char *)(unsigned)((int)ar4 + 0x1e6) == '\0') {
            puVar10[-1] = puVar10[-1] | 1;
          }
          else {
            *puVar10 = uVar5;
            puVar10 = puVar10 + 1;
            iVar12 = iVar12 + 1;
          }
          *puVar10 = (ushort)(*(undefined4 *)(fr0_ - 0x54));
          puVar10[1] = (*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x54))+2));
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
          (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(fr0_ - 0x54)) + 1;
          piVar17 = (int *)(unsigned)(*piVar11 * 4 + ar4[0x36]);
          *(*(undefined4 * *)(fr0_ - 0x44)) = (*(int * *)(fr0_ - 0x4c));
          (*(undefined4 * *)(fr0_ - 0x44)) = (*(undefined4 * *)(fr0_ - 0x44)) + 1;
        }
        (*(ushort * *)(fr0_ - 0x40)) = (ushort *)(unsigned)(psVar19 + *piVar16);
        *(*(int * *)(fr0_ - 0x4c)) = iVar12;
        (*(int * *)(fr0_ - 0x4c)) = (*(int * *)(fr0_ - 0x4c)) + 1;
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
  uVar13 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1204c4(ar4,0x71,piVar17,ar7));
  return uVar13;
LAB_8c115274:
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,ar4[0x2f] * 0xc,piVar17,ar7));
  ar4[0x41] = iVar12;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c114d30(ar4,iVar6,a6,ar7));
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x48))))(ar5,iVar6,a6,ar7));
  ar4[0x24] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x44))))(ar5,iVar6,a6,ar7));
  ar4[0x30] = iVar12;
  *(undefined1 *)(unsigned)(ar4 + 0x31) = 0;
  uVar13 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x30))))(ar5,iVar6,a6,ar7));
  *(char *)(unsigned)((int)ar4 + 0xf9) = (char)uVar13;
  if (*(char *)(unsigned)((int)ar4 + 0xf9) == '\0') {
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c120550(ar4,0xf,a6,ar7));
    piVar17 = a6;
    fVar21 = extraout_fr0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c120550(ar4,0x17,a6,ar7));
    piVar17 = a6;
    fVar21 = extraout_fr0_00;
  }
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c112b1c(ar4,(int)fVar21,piVar17,ar7));
  iVar12 = 0;
  uVar9 = 0;
  if (ar4[0xe] != 0) {
    do {
      if ((*(ushort *)(unsigned)(uVar9 * 2 + ar4[0x30]) & 1) != 0) {
        iVar6 = iVar12 * 4;
        iVar12 = iVar12 + 1;
        *(uint *)(unsigned)(ar4[0x52] + iVar6) = uVar9;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)ar4[0xe]);
  }
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(ar4[0xe] + 1) * 4,piVar17,ar7));
  ar4[0x26] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,ar4[0xf],piVar17,ar7));
  ar4[0x25] = iVar12;
  iVar12 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))
                     (a4,(((int *)(unsigned)(uint)ar4[0x24])[ar4[0xe]] - *(int *)(unsigned)(uint)ar4[0x24]) * 4,piVar17,ar7));
  ar4[0x27] = iVar12;
  if (((ar4[0x26] != 0) && (ar4[0x25] != 0)) && (ar4[0x27] != 0)) {
    uVar9 = 0;
    if (ar4[0xf] != 1) {
      do {
        *(undefined1 *)(unsigned)(ar4[0x25] + uVar9) = 0xff;
        uVar9 = uVar9 + 1;
      } while (uVar9 < ar4[0xf] - 1U);
    }
    uVar13 = 7;
    iVar6 = 0xff << (8 - (ar4[0xe] & 7U) & 7);
    *(char *)(unsigned)(ar4[0x25] + uVar9) = (char)iVar6;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c113ac8(ar4,iVar6,7,ar7));
    iVar12 = ((int *)(unsigned)(uint)ar4[0x26])[ar4[0xe]] - *(int *)(unsigned)(uint)ar4[0x26];
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    ar4[0x2d] = iVar12 >> 2;
    if ((((code *)(uint)ar4[0x4c] != ((void *)0x8c11617a)) ||
        (uVar9 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1155a0(ar4,iVar6,uVar13,ar7)), (uVar9 & 0xff) == 0)) &&
       (((code *)(uint)ar4[0x4c] != ((void *)0x8c117bac) ||
        (uVar9 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c115732(ar4,iVar6,uVar13,ar7)), (uVar9 & 0xff) == 0)))) {
      iVar12 = ar4[0x50];
      uVar9 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c112a20(ar4,iVar12,uVar13,ar7));
      if (((uVar9 & 0xff) == 0) &&
         (uVar9 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c11372e(ar4,iVar12,uVar13,ar7)), (uVar9 & 0xff) == 0)) {
        if (*(char *)(unsigned)((int)ar4 + 0xf9) == '\0') {
          if ((char)ar4[0x3e] == '\0') {
            ar4[0x69] = (int)((void *)0x8c11abf0);
            *(undefined1 *)(unsigned)(ar4 + 0x76) = 1;
          }
          else {
            ar4[0x69] = (int)((void *)0x8c11ac4c);
            *(undefined1 *)(unsigned)(ar4 + 0x76) = 0;
            (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c113b54(ar4,iVar12,uVar13,ar7));
          }
        }
        else {
          ar4[0x69] = (int)((void *)0x8c11ad68);
          *(undefined1 *)(unsigned)(ar4 + 0x76) = 1;
          (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c113b54(ar4,iVar12,uVar13,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1155a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1155a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *ar4;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(ar4[0xe] + 1) * 4,vr6,vr7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = uVar2;
  if (*(int *)(unsigned)((int)0xa8 + (int)ar4) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                      (iVar8,(*(int *)(unsigned)((int)0x144 + (int)ar4) +
                             *(int *)(unsigned)((int)0xb4 + (int)ar4)) * 4,vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = uVar2;
    if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
      if (*(int *)(unsigned)((int)0x124 + (int)ar4) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,0,vr6,vr7));
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x9c + (int)ar4));
      piVar5 = piVar7 + *(int *)(unsigned)(0x9c + 0x18 + (int)ar4);
      iVar3 = 0;
      for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
        iVar4 = *(int *)(unsigned)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(unsigned)(*piVar7 * 4 + ar4[0x11]);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(unsigned)(iVar4 + (int)ar4) = iVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(ar4[0xe] + *(int *)(unsigned)(iVar4 + (int)ar4) + 1) * 4,vr6,vr7));
      *(undefined4 *)(unsigned)((int)0xa0 + (int)ar4) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(unsigned)(iVar8 + -0x14 + (int)ar4) =
           (ar4[0xe] + *(int *)(unsigned)(iVar8 + (int)ar4) + 1) * 4 + *(int *)(unsigned)(iVar8 + -0x18 + (int)ar4);
      if (*(int *)(unsigned)(iVar8 + -0x18 + (int)ar4) != 0) {
        uVar6 = 0;
        iVar8 = ar4[0xe] * 4 + *(int *)(unsigned)((int)0xa0 + (int)ar4);
        if (ar4[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(unsigned)(*(int *)(unsigned)((int)0xa0 + (int)ar4) + uVar6 * 4) = iVar8;
            for (piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)ar4) + uVar6 * 4));
                piVar7 < ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar6 + 1) * 4 + *(int *)(unsigned)(iVar3 + (int)ar4)));
                piVar7 = piVar7 + 1) {
              iVar4 = *(int *)(unsigned)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(unsigned)(*piVar7 * 4 + ar4[0x11]);
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
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,0x71,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c1155a0\n.set _FUN_8c1155a0, _FUN_8c1155a0_def\n");
//@unit 8c1155a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1155a4_def(undefined4 ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1155a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_r14 = 0;
  
  iVar8 = *unaff_r14;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(unaff_r14[0xe] + 1) * 4,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  *(undefined4 *)(unsigned)((int)0xa8 + (int)unaff_r14) = uVar2;
  if (*(int *)(unsigned)((int)0xa8 + (int)unaff_r14) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                      (iVar8,(*(int *)(unsigned)((int)0x144 + (int)unaff_r14) +
                             *(int *)(unsigned)((int)0xb4 + (int)unaff_r14)) * 4,ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xac + (int)unaff_r14) = uVar2;
    if (*(int *)(unsigned)((int)0xac + (int)unaff_r14) != 0) {
      if (*(int *)(unsigned)((int)0x124 + (int)unaff_r14) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(unaff_r14,0,ar6,ar7));
      }
      ar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x9c + (int)unaff_r14));
      piVar6 = ar6 + *(int *)(unsigned)(0x9c + 0x18 + (int)unaff_r14);
      iVar3 = 0;
      for (piVar5 = ar6; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        ar7 = *piVar5;
        ar6 = (int *)(unsigned)unaff_r14[0x11];
        iVar4 = ar6[ar7 + 1] - ar6[ar7];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(unsigned)(iVar4 + (int)unaff_r14) = iVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                        (iVar8,(unaff_r14[0xe] + *(int *)(unsigned)(iVar4 + (int)unaff_r14) + 1) * 4,ar6,ar7));
      *(undefined4 *)(unsigned)((int)0xa0 + (int)unaff_r14) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(unsigned)(iVar8 + -0x14 + (int)unaff_r14) =
           (unaff_r14[0xe] + *(int *)(unsigned)(iVar8 + (int)unaff_r14) + 1) * 4 +
           *(int *)(unsigned)(iVar8 + -0x18 + (int)unaff_r14);
      if (*(int *)(unsigned)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
        uVar7 = 0;
        iVar8 = unaff_r14[0xe] * 4 + *(int *)(unsigned)((int)0xa0 + (int)unaff_r14);
        if (unaff_r14[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(unsigned)(*(int *)(unsigned)((int)0xa0 + (int)unaff_r14) + uVar7 * 4) = iVar8;
            for (piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)unaff_r14) + uVar7 * 4));
                piVar5 < ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + *(int *)(unsigned)(iVar3 + (int)unaff_r14)));
                piVar5 = piVar5 + 1) {
              iVar4 = *(int *)(unsigned)((*piVar5 + 1) * 4 + unaff_r14[0x11]) -
                      *(int *)(unsigned)(*piVar5 * 4 + unaff_r14[0x11]);
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
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,0x71,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c1155a4\n.set _FUN_8c1155a4, _FUN_8c1155a4_def\n");
//@unit 8c115732
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c115732_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115732";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar4[0xe] << 3,ar6,ar7));
  *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = uVar1;
  if (*(int *)(unsigned)((int)0xb0 + (int)ar4) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,0x71,vr6,vr7));
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c115732\n.set _FUN_8c115732, _FUN_8c115732_def\n");
//@unit 8c115778
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115778_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115778";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(unsigned)(0x1ac + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(undefined2 *)(unsigned)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(uint *)(unsigned)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(unsigned)(0xb0 + ar4);
      *(undefined4 *)(unsigned)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(int *)(unsigned)(ar4 + 0x38) << 1));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115778\n.set _FUN_8c115778, _FUN_8c115778_def\n");
//@unit 8c1157c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1157c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1157c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(unsigned)(0x1ac + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  *(undefined2 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(undefined4 *)(unsigned)(iVar1 + *(int *)(unsigned)(0xa8 + ar4)) = 0;
  } while (uVar2 <= *(uint *)(unsigned)(ar4 + 0x38));
  uVar2 = 0;
  if (*(int *)(unsigned)(0x144 + ar4) + *(int *)(unsigned)(0xb4 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(0xac + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(int *)(unsigned)(0x144 + ar4) + *(int *)(unsigned)(0xb4 + ar4)));
  }
  iVar1 = 0xa0 + 0x18;
  puVar3 = (undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0xa0 + ar4));
  uVar2 = 0;
  if (*(int *)(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)0xb8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(uint *)(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1157c0\n.set _FUN_8c1157c0, _FUN_8c1157c0_def\n");
//@unit 8c11584e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11584e_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11584e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,0x14,ar6,ar7));
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(unsigned)(iVar4 + (int)ar4);
    puVar1 = ((void *)(unsigned)0x8c119320);
    puVar3[1] = *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4);
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c11920c));
    *(unsigned *)(unsigned)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c113680));
    *(unsigned *)(unsigned)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(unsigned *)(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(unsigned)(iVar4 + (int)ar4) = *ar5;
  puVar1 = ((void *)(unsigned)0x8c11346c);
  *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = ((void *)(unsigned)0x8c11af3a);
  *(unsigned *)(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
  return (undefined4 *)(unsigned)0;
}

__asm__(".globl _FUN_8c11584e\n.set _FUN_8c11584e, _FUN_8c11584e_def\n");
//@unit 8c1158e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c1158e0_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1158e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,0x14,ar6,ar7));
    iVar4 = (int)0x134;
    *puVar3 = *(undefined4 *)(unsigned)(iVar4 + (int)ar4);
    puVar3[1] = *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4);
    puVar3[2] = *(undefined4 *)(unsigned)(iVar4 + 0x74 + (int)ar4);
    puVar3[3] = ar4[6];
    puVar1 = ((void *)(unsigned)0x8c1197d8);
    puVar3[4] = *(undefined4 *)(unsigned)(iVar4 + -0xc + (int)ar4);
    puVar2 = ((void *)(unsigned)0x8c119706);
    *(unsigned *)(unsigned)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c1136d2));
    *(unsigned *)(unsigned)(iVar4 + 0x70 + (int)ar4) = puVar2;
    puVar2 = ((void *)(unsigned)0x8c11af7e);
    *(unsigned *)(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
    ar4[6] = (int)puVar2;
    *(undefined4 *)(unsigned)(iVar4 + -0xc + (int)ar4) = 0;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(undefined4 *)(unsigned)(iVar4 + (int)ar4) = *ar5;
  *(undefined4 *)(unsigned)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  *(undefined4 *)(unsigned)(iVar4 + 0x74 + (int)ar4) = ar5[2];
  ar4[6] = ar5[3];
  *(undefined4 *)(unsigned)(iVar4 + -0xc + (int)ar4) = ar5[4];
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
  return (undefined4 *)(unsigned)0;
}

__asm__(".globl _FUN_8c1158e0\n.set _FUN_8c1158e0, _FUN_8c1158e0_def\n");
//@unit 8c11596e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11596e_def(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11596e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  
  puVar1 = ((void *)(unsigned)0x8c1133f6);
  uVar7 = *ar5;
  uVar10 = ar5[1];
  iVar9 = *ar4;
  uVar6 = ar5[2];
  uVar8 = ar5[3];
  *(uint *)(unsigned)((int)0x1b4 + (int)ar4) = uVar10;
  ar4[0xe] = uVar7 + 2;
  cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,vr5,vr6,vr7));
  if (cVar2 == '\0') {
    iVar4 = (uVar10 - 1) * 2 + uVar7 + 2;
    ar4[0x10] = iVar4;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x10))))(iVar9,iVar4 * 2,vr6,vr7));
    ar4[0x12] = iVar4;
    if (ar4[0x12] == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,vr6,vr7));
      return uVar3;
    }
    if (ar4[0x13] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x18))))(iVar9,ar4[0x13],vr6,vr7));
      ar4[0x13] = 0;
    }
    iVar9 = 0;
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        iVar4 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar6);
        iVar9 = iVar9 + 1;
      } while (uVar5 < uVar7);
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        iVar4 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar8);
        iVar9 = iVar9 + 1;
      } while (uVar6 < uVar10);
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar8);
          iVar9 = iVar9 + 1;
        } while (uVar6 < uVar10);
      }
    }
    cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(ar4,vr5,vr6,vr7));
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11596e\n.set _FUN_8c11596e, _FUN_8c11596e_def\n");
//@unit 8c115980
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c115980_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115980";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1133f6);
  uVar6 = *ar5;
  uVar9 = ar5[1];
  iVar8 = *unaff_r14;
  uVar5 = ar5[2];
  uVar7 = ar5[3];
  *(uint *)(unsigned)(in_r0 + (int)unaff_r14) = uVar9;
  unaff_r14[0xe] = uVar6 + 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,ar5,ar6,ar7));
  if ((uVar2 & 0xff) == 0) {
    iVar4 = (uVar9 - 1) * 2 + uVar6 + 2;
    unaff_r14[0x10] = iVar4;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,iVar4 * 2,ar6,ar7));
    unaff_r14[0x12] = iVar4;
    if (unaff_r14[0x12] == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(2,vr5,vr6,vr7));
      return uVar3;
    }
    if (unaff_r14[0x13] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x18))))(iVar8,unaff_r14[0x13],ar6,ar7));
      unaff_r14[0x13] = 0;
    }
    iVar8 = 0;
    uVar2 = 0;
    if (uVar6 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar5);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar6);
    }
    uVar2 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = uVar2 * 2;
        uVar2 = uVar2 + 1;
        *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar7);
        iVar8 = iVar8 + 1;
      } while (uVar2 < uVar9);
      uVar2 = 0;
      if (uVar9 != 0) {
        do {
          iVar4 = uVar2 * 2;
          uVar2 = uVar2 + 1;
          *(undefined2 *)(unsigned)(iVar8 * 2 + unaff_r14[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar7);
          iVar8 = iVar8 + 1;
        } while (uVar2 < uVar9);
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(unaff_r14,uVar2,ar6,ar7));
    if ((uVar2 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115980\n.set _FUN_8c115980, _FUN_8c115980_def\n");
//@unit 8c115ac8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c115ac8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115ac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
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
  
  uVar8 = *ar5;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((ushort *)(unsigned)(uint)ar5[2]));
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((ushort *)(unsigned)(uint)ar5[3]));
  uVar9 = ar5[1];
  *(undefined2 *)(unsigned)(ar4 + 0x50) = 0;
  iVar4 = (int)0x12c;
  *(undefined4 *)(unsigned)(iVar4 + ar4) = 0xffffffff;
  *(undefined2 *)(unsigned)(iVar4 + 0x6e + ar4) = 0;
  *(undefined4 *)(unsigned)(iVar4 + 0x80 + ar4) = 0;
  *(uint *)(unsigned)(iVar4 + 0x88 + ar4) = uVar9;
  if (uVar9 == 0) {
    *(undefined4 *)(unsigned)(0x1b8 + ar4) = 0;
  }
  else {
    *(uint *)(unsigned)(0x1b8 + ar4) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
  }
  uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1133f6(ar4,ar5,ar6,ar7));
  if ((uVar5 & 0xff) == 0) {
    piVar6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c113354(ar4,ar5,ar6,ar7));
    puVar2 = ((void *)(unsigned)0x8c112d00);
    piVar6[1] = 0;
    piVar6[4] = 0;
    *piVar6 = 0;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,ar5,ar6,ar7));
    uVar1 = 0x77ff;
    if ((uVar5 & 0xff) == 0) {
      ar5_00 = 0;
      (*(int *)(fr0_ - 0x34)) = 0;
      iVar10 = *(int *)(unsigned)(ar4 + 0x54);
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30))[(*(uint *)(fr0_ - 0x38))];
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          uVar3 = uVar1;
          if ((*(uint *)(fr0_ - 0x38)) == 0) {
            uVar3 = 0;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar3;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar10 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar10 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
        } while ((*(uint *)(fr0_ - 0x38)) < uVar9);
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      if (uVar8 != 0) {
        do {
          ar5_00 = iVar10;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar1;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar10 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar10 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
          (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
        } while ((*(uint *)(fr0_ - 0x38)) < uVar8);
      }
      (*(uint *)(fr0_ - 0x38)) = 0;
      iVar4 = ar5_00;
      iVar7 = iVar10;
      if (uVar9 != 0) {
        do {
          ar5_00 = iVar7;
          *(uint *)(unsigned)(ar5_00 + 0xc) = (uint)*((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30));
          if (iVar4 != 0) {
            *(int *)(unsigned)(iVar4 + 0x10) = ar5_00;
          }
          *(undefined2 *)(unsigned)(ar5_00 + 2) = uVar1;
          *(unsigned *)(unsigned)(ar5_00 + 8) = piVar6;
          *(unsigned *)(unsigned)(ar5_00 + 4) = piVar6;
          if (*(int *)(unsigned)(ar5_00 + 0x18) == 0) {
            iVar7 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c112b6e(ar4,ar5_00,ar6,ar7));
          }
          else {
            iVar7 = *(int *)(unsigned)(ar5_00 + 0x18);
          }
          (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
          (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) + 1;
          iVar4 = ar5_00;
          (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((ushort *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) + 1));
        } while ((*(uint *)(fr0_ - 0x38)) < uVar9);
      }
      if (uVar9 < 2) {
        *(int *)(unsigned)(ar5_00 + 0x10) = ar5_00;
      }
      else {
        *(int *)(unsigned)(ar5_00 + 0x10) = iVar10;
      }
      if (uVar9 == 0) {
        *(undefined2 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x54) + 2) = 0;
      }
      *piVar6 = (*(int *)(fr0_ - 0x34));
      *(int *)(unsigned)(ar4 + 0x60) = ar5_00;
      *(short *)(unsigned)(ar4 + 0x50) = (short)(*(int *)(fr0_ - 0x34));
      *(undefined1 *)(unsigned)(0x1d8 + ar4) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c115ac8\n.set _FUN_8c115ac8, _FUN_8c115ac8_def\n");
//@unit 8c115cec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115cec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  if (ar4[0x11] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x11],vr6,vr7));
    ar4[0x11] = 0;
  }
  if (ar4[0x12] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x12],vr6,vr7));
    ar4[0x12] = 0;
  }
  if (ar4[0x13] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x13],vr6,vr7));
    ar4[0x13] = 0;
  }
  if (*(int *)(unsigned)((int)0x148 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x148 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x148 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x1c0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1c0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x1c0 + (int)ar4) = 0;
  }
  if ((*(char *)(unsigned)((int)0xc4 + (int)ar4) != '\0') &&
     (*(int *)(unsigned)((int)0xc0 + (int)ar4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xc0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xc0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x98 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x98 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x98 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x94 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x94 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x94 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x9c + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x9c + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x9c + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xa8 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa8 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xa0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xa0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xb0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x104 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x104 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x104 + (int)ar4) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(unsigned)(iVar1 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1cc + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1d0 + (int)ar4),vr6,vr7));
    iVar1 = (int)0x1d4;
    *(undefined4 *)(unsigned)(iVar1 + (int)ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cec\n.set _FUN_8c115cec, _FUN_8c115cec_def\n");
//@unit 8c115cf4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115cf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115cf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int a4;
  int *unaff_r14 = 0;
  
  a4 = *unaff_r14;
  if (*(int *)(unsigned)(in_r0 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)(in_r0 + (int)unaff_r14),ar6,ar7));
    unaff_r14[0x11] = 0;
  }
  if (unaff_r14[0x12] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0x12],ar6,ar7));
    unaff_r14[0x12] = 0;
  }
  if (unaff_r14[0x13] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r14[0x13],ar6,ar7));
    unaff_r14[0x13] = 0;
  }
  if (*(int *)(unsigned)((int)0x148 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x148 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x148 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0x1c0 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x1c0 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x1c0 + (int)unaff_r14) = 0;
  }
  if ((*(char *)(unsigned)((int)0xc4 + (int)unaff_r14) != '\0') &&
     (*(int *)(unsigned)((int)0xc0 + (int)unaff_r14) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xc0 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xc0 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0x98 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x98 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x98 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0x94 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x94 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x94 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0x9c + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x9c + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x9c + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0xa8 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xa8 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xa8 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0xac + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xac + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xac + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0xa0 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xa0 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xa0 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0xb0 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0xb0 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xb0 + (int)unaff_r14) = 0;
  }
  if (*(int *)(unsigned)((int)0x104 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x104 + (int)unaff_r14),ar6,ar7));
    *(undefined4 *)(unsigned)((int)0x104 + (int)unaff_r14) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(unsigned)(iVar1 + (int)unaff_r14) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x1cc + (int)unaff_r14),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,*(undefined4 *)(unsigned)((int)0x1d0 + (int)unaff_r14),ar6,ar7));
    iVar1 = (int)0x1d4;
    *(undefined4 *)(unsigned)(iVar1 + (int)unaff_r14) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cf4\n.set _FUN_8c115cf4, _FUN_8c115cf4_def\n");
//@unit 8c115ed8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115ed8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115ed8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(unsigned)(uint)ar5[1];
  piVar3 = (int *)(unsigned)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (int *)(unsigned)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(int *)(unsigned)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(int *)(unsigned)(iVar4 + ar4);
  *(unsigned *)(unsigned)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl _FUN_8c115ed8\n.set _FUN_8c115ed8, _FUN_8c115ed8_def\n");
//@unit 8c115f18
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115f18_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115f18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *ar5_00;
  int *piVar5;
  
  ar5_00 = (int *)(unsigned)*((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  if (ar5_00 == ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + -4 + ar4))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
  }
  iVar2 = (int)0x124;
  ar5_00[2] = ar5;
  if (ar5_00 != ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + ar4))) {
    do {
      piVar4 = (int *)(unsigned)ar5_00[2];
      ar5_00 = (int *)(unsigned)ar5_00[1];
      iVar2 = *piVar4;
      while (iVar2 == 0) {
        piVar5 = (int *)(unsigned)piVar4[1];
        piVar3 = piVar4;
        if (piVar5 != (int *)(unsigned)0x0) {
          iVar2 = *piVar5 + -1;
          *piVar5 = iVar2;
          while (piVar1 = piVar5, iVar2 == 0) {
            piVar3 = (int *)(unsigned)piVar1[2];
            if ((piVar3 != (int *)(unsigned)0x0) && (iVar2 = *piVar3, *piVar3 = iVar2 + -1, iVar2 + -1 == 0))
            {
              ar5_00 = (int *)(unsigned)*ar5_00;
              if (ar5_00 == (int *)(unsigned)*(int *)(unsigned)(0x120 + ar4)) {
                (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
              }
              ar5_00[2] = piVar1[2];
            }
            piVar5 = (int *)(unsigned)piVar1[1];
            piVar3 = piVar1;
            if (piVar5 == (int *)(unsigned)0x0) break;
            iVar2 = *piVar5 + -1;
            *piVar5 = iVar2;
          }
        }
        iVar2 = (int)0x114;
        piVar3[1] = *(int *)(unsigned)(iVar2 + ar4);
        *(unsigned *)(unsigned)(iVar2 + ar4) = piVar4;
        piVar4 = (int *)(unsigned)piVar4[2];
        if (piVar4 == (int *)(unsigned)0x0) break;
        *piVar4 = *piVar4 + -1;
        iVar2 = *piVar4;
      }
      iVar2 = (int)0x124;
    } while (ar5_00 != ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + ar4)));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c115f18\n.set _FUN_8c115f18, _FUN_8c115f18_def\n");
//@unit 8c115fec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c115fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115fec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  undefined4 uVar2;
  int extraout_r3 = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint d;
  
  iVar4 = 0;
  if (*(char *)(unsigned)(ar4 + 0x15c) == '\0') {
    if ((10 < *(uint *)(unsigned)(ar4 + 300)) || (*(uint *)(unsigned)(ar4 + 0x158) >> 2 < (uint)*(ushort *)(unsigned)(ar4 + 0x50))
       ) {
      *(undefined1 *)(unsigned)(ar4 + 0x15c) = 1;
    }
  }
  else {
    d = 1;
    iVar3 = 0;
    uVar5 = 0;
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 + *(int *)(unsigned)(ar4 + 0x170 + iVar3);
      d = d + *(int *)(unsigned)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5 * 0x80,d,vr6,vr7));
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5,d >> 7,vr6,vr7));
    }
    *(undefined4 *)(unsigned)(ar4 + 0x168) = uVar2;
    iVar3 = *(int *)(unsigned)(ar4 + 0x158) - (uint)*(ushort *)(unsigned)(ar4 + 0x50);
    iVar6 = iVar3 * *(int *)(unsigned)(ar4 + 0x16c) * *(int *)(unsigned)(ar4 + 0x168);
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
    uVar1 = *(ushort *)(unsigned)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(ushort *)(unsigned)(ar4 + 0x160) < iVar3) {
      *(undefined2 *)(unsigned)(ar4 + 0x15e) = *(undefined2 *)(unsigned)(ar4 + 0x160);
    }
    else {
      *(short *)(unsigned)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,3,vr6,vr7));
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,uVar2,vr6,vr7));
      *(short *)(unsigned)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(unsigned)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(unsigned)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(unsigned)(ar4 + 0x198) + 1;
    *(uint *)(unsigned)(ar4 + 0x170 + iVar6) =
         (uint)*(ushort *)(unsigned)(ar4 + 0x50) * (uint)*(ushort *)(unsigned)(ar4 + 0x15e) >> 3;
    *(uint *)(unsigned)(iVar6 + ar4 + 0x184) =
         (uint)*(ushort *)(unsigned)(ar4 + 0x50) * (uint)*(ushort *)(unsigned)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(unsigned)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c115fec\n.set _FUN_8c115fec, _FUN_8c115fec_def\n");
//@unit 8c11617a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11617a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11617a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  iVar2 = (int)(int)0xffffff70;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) = ar4;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) = ar5;
  ((fr0_ + (int)0x0000000f))[iVar2] =
       *(undefined1 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x7c);
  if (0xea60 < (int)(uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50))
  {
    return 0xffffffff;
  }
  *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = (int)0x7fff;
  *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) =
       (int)*(short *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54);
  iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
  *(int *)(unsigned)(0x1ac + iVar6) =
       *(int *)(unsigned)(0x1ac + iVar6) + *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = 0;
  while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
         (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50)) {
    iVar6 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
    *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar6;
    if (iVar6 < 0x77ff) {
      *(uint *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
           (uint)(*((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc)) >> 2);
      iVar4 = *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar4 - *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2);
      iVar6 = (int)0x88;
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2)) =
           (short)(iVar4 - *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2));
      *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
           *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
           (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) * 2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    else {
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2)) =
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) <= *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2)) {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000030) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
        while ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000004) + iVar2)) & 1) == 0) {
          *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 2;
        }
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000002) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) + 4);
        if ((*(ushort *)(unsigned)
              (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xc0) +
              *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        }
      }
      else {
        *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
    }
    iVar6 = (int)0x84;
    piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
    *piVar7 = *piVar7 + 1;
    iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
    iVar6 = (int)0x84;
    *(undefined4 *)(unsigned)(iVar4 + 4) = *(undefined4 *)(unsigned)(iVar4 + 8);
    *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x18);
    *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
  }
  *(short *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
       (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
  (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115fec(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),ar5,ar6,ar7));
  iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
  *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) =
       *(short *)(unsigned)(0x19a + -0x3c + iVar6) + *(short *)(unsigned)(0x19a + iVar6) +
       *(short *)(unsigned)((int)0x1a0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
  *(uint *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50);
  *(uint *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 100);
  *(uint *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x70);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x60);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x6c);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x78);
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54);
  iVar6 = 0;
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
  do {
    *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = iVar6;
    if ((uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50) <=
        *(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = uVar9,
            uVar9 < *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2)) {
        iVar6 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = iVar6;
        if (*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) < iVar6) {
          if ((*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) != 0) &&
             (piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8)),
             iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 < 1)) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
            ;
          }
          if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
          else {
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c)) = 0;
          }
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + -1;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = iVar6;
          *(undefined2 *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = *(undefined2 *)(unsigned)(iVar6 + 2);
          *(undefined2 *)(unsigned)((fr0_ + (int)0x00000026) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          iVar6 = (int)0xa8;
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + iVar6) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
          if (iVar6 == 0) {
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
            if (*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) != 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            }
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa8) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            }
          }
          else if (*(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) < (int)*(short *)(unsigned)(iVar6 + 2)) {
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) + 8);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2);
          }
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
            ;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) = 0x7fff;
          iVar6 = (int)0x84;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) = uVar9,
            uVar9 < *(uint *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
             (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x00000026) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) < *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2)) {
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa8) +
           *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) + -1;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0x98) +
                *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0x98) +
                (*(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) + 1) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + (int)0xa0) +
                *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4);
          while (*(uint *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000018) + iVar2)) {
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) = iVar6;
            *(short *)(unsigned)((fr0_ + (int)0x0000000c) + iVar2) =
                 *(short *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                 *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) +
                                    (int)0x1c0) + iVar6 * 2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x44) +
                  *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) * 4);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x44) +
                  (*(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) + 1) * 4);
            while (*(uint *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000010) + iVar2)) {
              puVar5 = (ushort *)(unsigned)
                       (*((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000014) + iVar2)) * 2 +
                       *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x48));
              *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar5;
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) =
                   *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2));
              *(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) =
                   *(short *)(unsigned)((fr0_ + (int)0x0000000c) + iVar2) +
                   *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                             (uint)(*puVar5 >> 2) * 2);
              if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
                if (*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) == 0) {
                  if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
                    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
                  }
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) = 0;
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                  *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
                  *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2)) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2);
                  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
                  iVar6 = *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) -
                          *(int *)(unsigned)((int)0x9c +
                                  *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 3;
                  }
                  *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
                       *(int *)(unsigned)(0x144 + iVar4) * 4 + *(int *)(unsigned)(0xac + iVar4) +
                       (iVar6 >> 2) * 4;
                }
                else if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
                         *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
                  iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8)) + -1;
                  *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8)) = iVar6;
                  if (iVar6 < 1) {
                    (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8),ar6,ar7));
                  }
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                }
              }
              *(int *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) + 4;
              *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 4;
            }
            *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) + 4;
          }
          iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + -1;
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2),ar6,ar7));
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) = 0x77ff;
          iVar6 = (int)0x84;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x60) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x6c) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x78) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x50) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000048) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 100) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x70) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2);
      return 0;
    }
    *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2));
    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4);
    puVar5 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc));
    *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar5;
    uVar1 = *puVar5;
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
    }
    else {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 0;
    }
    if ((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) {
      iVar6 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
      *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = (ushort *)(unsigned)(iVar6 + 2);
      uVar1 = *(ushort *)(unsigned)(iVar6 + 2);
      *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
      uVar9 = (uint)(uVar1 >> 2);
      *(uint *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) = uVar9;
      *(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) =
           *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + uVar9 * 2) +
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
      if (((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) || (((fr0_ + (int)0x0000000f))[iVar2] != '\0')) {
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
              if (*(int *)(unsigned)(iVar6 + 4) == 0) {
                iVar4 = (int)0x114;
                iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            iVar6 = (int)0x84;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
        }
        else if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
                 *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6;
            if (iVar6 < 1) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
        piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7))
          ;
        }
        if (*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) <=
            *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
          iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
          goto LAB_8c1173e8;
        }
        if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
             *(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))) ||
           (*(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
            *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) == 0)
          goto LAB_8c116732;
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0) {
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
            goto LAB_8c1173e8;
          }
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,
                         ar7));
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) != *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            goto LAB_8c1173cc;
          }
        }
        else {
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) = 0;
LAB_8c116732:
          piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,
                         ar7));
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) + 0x14)
                 = 0;
          }
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) != *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            goto LAB_8c1173cc;
          }
        }
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
        goto LAB_8c1173cc;
      }
      iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
      *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                            (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x10) = 0;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x14) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
        iVar6 = (int)0x84;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x1c) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
        *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x1c)) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
        if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                            (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
        if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        }
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x10) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      }
      else {
        if (*(short *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000028) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6;
            if (iVar6 < 1) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
        iVar6 = *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2);
        *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = iVar6;
        iVar6 = *(int *)(unsigned)(iVar6 + 0x10);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <
                 (int)*(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
          if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
               (iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
               *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6, iVar6 < 1)) {
              (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7));
      }
      if (*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2) <
          *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2)) {
        piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c115f18(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7))
          ;
        }
        if ((*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
             *(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2))) ||
           (*(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
            *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
        }
        else {
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) = 0;
        }
        if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
        }
        goto LAB_8c1173cc;
      }
      iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
    }
    else {
      if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10);
      }
      else {
        iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
      }
      *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
            if (*(int *)(unsigned)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x10) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          else {
            iVar6 = (int)0x84;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x1c) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar6 + iVar2) + 0x1c)) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
        }
      }
      else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <
               (int)*(short *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2)) {
        if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
          iVar6 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar6;
          if (*(int *)(unsigned)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2);
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                              (iVar6,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0xc);
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
               *(undefined4 *)(unsigned)((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
               *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
               *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2));
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
        }
        *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
             *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 0xc) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
        iVar6 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
        *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar6;
        if (iVar6 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
             (iVar6 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
             *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar6, iVar6 < 1)) {
            (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
          }
        }
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 4),ar6,ar7));
      }
      if ((*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 2) <=
           *(short *)(unsigned)((fr0_ + (int)0x0000002a) + iVar2)) ||
         (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x10) != 0)) {
        iVar6 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar6;
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = *(undefined4 *)(unsigned)(iVar6 + 0x18);
        goto LAB_8c1173e8;
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8));
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115f18))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 8),ar6,ar7));
      }
      if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
        puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x1c));
LAB_8c11734a:
        *puVar8 = 0;
      }
      else {
        if ((*(uint *)(unsigned)((int)0xa0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)) <=
             *(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14)) &&
           (*(uint *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) <
            *(uint *)(unsigned)((int)0xa4 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2)))) {
          puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14));
          goto LAB_8c11734a;
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) != 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
        }
      }
      if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000064) + iVar2);
      }
      else {
        *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2);
        if (*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) == 0) {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x8c + iVar2) + 0x54) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) =
             *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
      }
LAB_8c1173cc:
      *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + -1;
    }
LAB_8c1173e8:
    iVar6 = *(int *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c11617a\n.set _FUN_8c11617a, _FUN_8c11617a_def\n");
//@unit 8c117bac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c117bac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c117bac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar2 = (int)(int)0xffffff74;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) = ar4;
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) = ar5;
  ((fr0_ + (int)0x0000000f))[iVar2] =
       *(undefined1 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x7c);
  if (0xea60 < *(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50)) {
    return 0xffffffff;
  }
  *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = (int)0x7fff;
  *(undefined2 *)(unsigned)((fr0_ + (int)0x00000036) + iVar2) =
       *(undefined2 *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54);
  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
  *(int *)(unsigned)(0x1ac + iVar4) =
       *(int *)(unsigned)(0x1ac + iVar4) + (int)*(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2);
  iVar4 = 0;
  while (*(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = iVar4,
        *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) <
        (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50)) {
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
         (uint)(*((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc)) >> 2);
    iVar4 = (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2);
    *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = iVar4;
    if (iVar4 < 0x77ff) {
      iVar7 = *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = iVar7 - *(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2);
      iVar4 = (int)0x84;
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2)) =
           (short)(iVar7 - *(short *)(unsigned)((fr0_ + (int)0x00000036) + iVar2));
      *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
           *(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) +
           (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) * 2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    else {
      *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2)) =
           (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) <= *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000038) + iVar2)) {
        *(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
        while ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000000) + iVar2)) & 1) == 0) {
          *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 2;
        }
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) + 4);
        if ((*(ushort *)(unsigned)
              (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xc0) +
              *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        }
      }
      else {
        *(undefined4 *)(unsigned)((int)0x19c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
             *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
      }
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
    }
    iVar4 = (int)0x80;
    piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
    *piVar5 = *piVar5 + 1;
    iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2);
    iVar4 = (int)0x80;
    *(undefined4 *)(unsigned)(iVar7 + 4) = *(undefined4 *)(unsigned)(iVar7 + 8);
    *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2) + 0x18);
    iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
  }
  *(undefined2 *)(unsigned)((int)0x19a + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000038) + iVar2);
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c115fec(*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),ar5,ar6,ar7));
  iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
  *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) =
       *(short *)(unsigned)(0x19a + -0x3c + iVar4) + *(short *)(unsigned)(0x19a + iVar4) +
       *(short *)(unsigned)((int)0x1a0 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
  *(uint *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50);
  *(uint *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) =
       (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 100);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x60);
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x6c);
  *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54);
  iVar4 = 0;
  *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = 0;
  do {
    *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = iVar4;
    if ((uint)*(ushort *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50) <=
        *(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2)) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000040) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68);
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = 0;
      *(undefined4 *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = 0;
      while (*(uint *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000040) + iVar2)) {
        *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) =
             (int)*(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0x0000002e) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) < *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2)) {
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           (*(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) * 2 + 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
            if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) ==
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2);
          }
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + -1;
        }
        else {
          ((fr0_ + (int)0x00000007))[iVar2] = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0x98) +
                *(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) * 4);
          *(undefined4 *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2) =
               *(undefined4 *)(unsigned)
                (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0x98) +
                (*(int *)(unsigned)((fr0_ + (int)0x0000002c) + iVar2) + 1) * 4);
          while (*(uint *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x0000001c) + iVar2)) {
            iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000020) + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) = iVar4;
            *(short *)(unsigned)((fr0_ + (int)0x00000032) + iVar2) =
                 (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                 *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                    (int)0x1c0) + iVar4 * 2);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x44) +
                  *(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) * 4);
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000014) + iVar2) =
                 *(undefined4 *)(unsigned)
                  (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x44) +
                  (*(int *)(unsigned)((fr0_ + (int)0x00000028) + iVar2) + 1) * 4);
            while (*(uint *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) < *(uint *)(unsigned)((fr0_ + (int)0x00000014) + iVar2)) {
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000018) + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) = iVar4;
              puVar8 = (ushort *)(unsigned)
                       (iVar4 * 2 + *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x48)
                       );
              *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar8;
              *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) =
                   *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                             (uint)(*puVar8 >> 2) * 2) + *(short *)(unsigned)((fr0_ + (int)0x00000032) + iVar2);
              if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
                iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                                *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4);
                *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar4;
                if (iVar4 == 0) {
                  if (((fr0_ + (int)0x00000007))[iVar2] == '\0') {
                    iVar4 = *(int *)(unsigned)((int)0x114 +
                                    *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
                    if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                      uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                        (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                      *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)(unsigned)
                       ((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                           *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
                    }
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
                    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                         *(undefined4 *)(unsigned)
                          ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                         *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                         *(int *)(unsigned)((int)0x1ac +
                                 *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
                    ((fr0_ + (int)0x00000007))[iVar2] = 1;
                  }
                  if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
                    uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
                  }
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                  *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                  *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
                  *(undefined4 *)(unsigned)
                   (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                   *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4) =
                       *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
                }
                else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
                  *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 2) =
                       *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
                  if (((fr0_ + (int)0x00000007))[iVar2] == '\0') {
                    iVar4 = *(int *)(unsigned)((int)0x114 +
                                    *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
                    if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                      iVar7 = (int)0x114;
                      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                      uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                        (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                      *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
                    }
                    else {
                      *(undefined4 *)(unsigned)
                       ((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                           *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
                    }
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
                    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                         *(undefined4 *)(unsigned)
                          ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                         *(int *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) +
                         *(int *)(unsigned)((int)0x1ac +
                                 *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
                    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
                    ((fr0_ + (int)0x00000007))[iVar2] = 1;
                  }
                  iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8);
                  *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
                  if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
                    *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8) =
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
                    iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
                    *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
                    if (iVar4 < 1) {
                      (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
                    }
                  }
                }
              }
              *(int *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000018) + iVar2) + 4;
            }
            *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000020) + iVar2) + 4;
          }
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2) = 0x77ff;
          iVar4 = (int)0x80;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8) = 0;
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar4 + iVar2);
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
        }
        *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x60) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x6c) =
           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x50) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000048) + iVar2);
      *(undefined2 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 100) =
           *(undefined2 *)(unsigned)((fr0_ + (int)0x00000044) + iVar2);
      return 0;
    }
    *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2));
    *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4);
    puVar8 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc));
    *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = puVar8;
    uVar1 = *puVar8;
    *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
    }
    else {
      *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 0;
    }
    if ((*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) & 1) == 0) {
      iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
      *(unsigned *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) = (ushort *)(unsigned)(iVar4 + 2);
      uVar1 = *(ushort *)(unsigned)(iVar4 + 2);
      *(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) = (uint)uVar1;
      if (((uVar1 & 1) == 0) || (((fr0_ + (int)0x0000000f))[iVar2] != '\0')) {
        iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) -
                *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x48);
        *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
        sVar6 = *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                          (*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) >> 2) * 2) +
                (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) = sVar6;
        if (sVar6 <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
                          *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x4c) +
             *(int *)(unsigned)((fr0_ + (int)0x00000010) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
          else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000064) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
              if (iVar4 < 1) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
        }
        if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar7 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          goto LAB_8c118c66;
        }
        iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
        *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
      }
      else {
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
        *(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) =
             *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x84 + iVar2) +
                       (*(uint *)(unsigned)((fr0_ + (int)0x00000008) + iVar2) >> 2) * 2) +
             (short)*(undefined4 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
        *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                 (int)0xb0) + *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 8);
        *(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) = iVar4;
        if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) <= *(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + 1;
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2);
          }
          else if (*(short *)(unsigned)((fr0_ + (int)0x00000030) + iVar2) < *(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) = 1;
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000030) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000060) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4;
              if (iVar4 < 1) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
          iVar7 = *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2);
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = iVar7 + 1;
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0xb0) + (iVar7 + 1) * 4);
          *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = iVar4;
          if (iVar4 == 0) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                                (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0xc) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            }
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
            if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
            }
            *(undefined4 *)(unsigned)
             (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
             *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) < (int)*(short *)(unsigned)(iVar4 + 2)) {
            if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
              iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
              if (*(int *)(unsigned)(iVar4 + 4) == 0) {
                iVar7 = (int)0x114;
                iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
                uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                  (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
                *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
              }
              else {
                *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2))
                     = *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
              }
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
              *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                   *(undefined4 *)(unsigned)
                    ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                   *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                   *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
              *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
            }
            *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 2) =
                 *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
            iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8);
            *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
            if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8) =
                   *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
              *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
              if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
                 (iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
                 *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4, iVar4 < 1)) {
                (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                          (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                           *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
              }
            }
          }
        }
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
        }
        if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
            *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
          piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
          iVar4 = *piVar5 + -1;
          *piVar5 = iVar4;
          if (iVar4 < 1) {
            (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                      (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                       *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7))
            ;
          }
          iVar7 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar7 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x4c) + ((int)(iVar4 + (uint)(iVar4 < 0)) >> 1) * 4) = 0;
          if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2))
          {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
            if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            else {
              *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                   *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
            }
            *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
                 *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + iVar2);
          }
LAB_8c118c66:
          *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000048) + iVar2) + -1;
        }
        else {
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
        }
      }
    }
    else {
      if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) <= (int)*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2)) {
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
        *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
             *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
        iVar4 = *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 2 + 1;
        *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) = iVar4;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) +
                                 (int)0xb0) + iVar4 * 4);
        *(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) = iVar4;
        if (iVar4 == 0) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
            if (*(int *)(unsigned)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          if (*(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) == 0) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112b6e))))
                              (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2),ar6,ar7));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0xc) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 8) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
          *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
          *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) = *(int *)(unsigned)((fr0_ + (int)0x00000044) + iVar2) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2) + 0x18);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) != 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
          }
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x0000006c) + iVar2);
          if (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x68) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
          }
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(unsigned)((fr0_ + (int)0x00000024) + iVar2) * 4) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000070) + iVar2);
        }
        else if (*(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) < (int)*(short *)(unsigned)(iVar4 + 2)) {
          if (*(int *)(unsigned)((fr0_ + (int)0x00000004) + iVar2) == 0) {
            iVar4 = *(int *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) = iVar4;
            if (*(int *)(unsigned)(iVar4 + 4) == 0) {
              iVar7 = (int)0x114;
              iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
              uVar3 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c112fd8))))
                                (iVar4,*(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2),ar6,ar7));
              *(undefined4 *)(unsigned)(iVar7 + iVar4) = uVar3;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x114 + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2)) =
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4);
            }
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 4) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x10) =
                 *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc);
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000050) + iVar2)) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 8) = 0;
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0x14) =
                 *(undefined4 *)(unsigned)
                  ((int)0x12c + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000050) + iVar2) + 0xc) =
                 *(int *)(unsigned)((fr0_ + (int)0x00000000) + iVar2) +
                 *(int *)(unsigned)((int)0x1ac + *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2));
            *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000050) + iVar2);
          }
          *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 2) =
               *(undefined2 *)(unsigned)((fr0_ + (int)0x00000000) + iVar2);
          iVar4 = *(int *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8);
          *(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) = iVar4;
          if (iVar4 != *(int *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000005c) + iVar2) + 8) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0x00000058) + iVar2);
            *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000058) + iVar2)) + 1;
            if ((*(int *)(unsigned)((fr0_ + (int)0x00000054) + iVar2) != 0) &&
               (iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) + -1,
               *((int *)(unsigned long)*(unsigned *)(unsigned)((fr0_ + (int)0x00000054) + iVar2)) = iVar4, iVar4 < 1)) {
              (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                        (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                         *(undefined4 *)(unsigned)((fr0_ + (int)0x00000054) + iVar2),ar6,ar7));
            }
          }
        }
      }
      piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4));
      iVar4 = *piVar5 + -1;
      *piVar5 = iVar4;
      if (iVar4 < 1) {
        (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                  (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                   *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 4),ar6,ar7));
      }
      if (*(short *)(unsigned)((fr0_ + (int)0x00000034) + iVar2) <
          *(short *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 2)) {
        piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8));
        iVar4 = *piVar5 + -1;
        *piVar5 = iVar4;
        if (iVar4 < 1) {
          (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c115ed8))))
                    (*(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2),
                     *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 8),ar6,ar7));
        }
        if (((fr0_ + (int)0x0000000f))[iVar2] == '\0') {
          *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 2);
          *(undefined2 *)(unsigned)((fr0_ + (int)0xfffffffe) + iVar2) =
               *(undefined2 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x0000004c) + iVar2) + 4);
          *(undefined4 *)(unsigned)
           (*(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + (int)0xb0) +
           *(int *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) * 8) = 0;
        }
        else {
          iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2);
          iVar7 = *(int *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0xc) -
                  *(int *)(unsigned)(iVar4 + 0x48);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x4c) + ((int)(iVar7 + (uint)(iVar7 < 0)) >> 1) * 4) = 0;
        }
        if (*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) == *(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2)) {
          *(undefined4 *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) = *(undefined4 *)(unsigned)((fr0_ + (int)0x00000068) + iVar2);
        }
        else {
          *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000074) + iVar2) + 0x18) =
               *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
          if (*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) == 0) {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x88 + iVar2) + 0x54) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          else {
            *(undefined4 *)(unsigned)(*(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) + 0x18) =
                 *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
          }
          *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) =
               *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar2);
        }
        goto LAB_8c118c66;
      }
      iVar4 = *(int *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2);
      *(int *)(unsigned)((fr0_ + (int)0x00000068) + iVar2) = iVar4;
      *(undefined4 *)(unsigned)((int)&(*(int *)(fr0_ - 0x8)) + 0x80 + iVar2) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
    }
    iVar4 = *(int *)(unsigned)((fr0_ + (int)0x0000003c) + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c117bac\n.set _FUN_8c117bac, _FUN_8c117bac_def\n");
//@unit 8c11919e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11919e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11919e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (*(undefined4 *)(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c11a634(ar4,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0x1c));
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(0x1ac + ar4);
  (*(int *)(fr0_ - 0xc)) = *(int *)(unsigned)(0x12c + ar4) + 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c120348(ar4,0xc,&(*(undefined4 *)(fr0_ - 0x18)),3));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11919e\n.set _FUN_8c11919e, _FUN_8c11919e_def\n");
//@unit 8c119218
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c119218_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119218";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint *ar6_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *a6;
  undefined4 a7;
  int a4;
  int iVar4;
  int *unaff_r14 = 0;
  bool bVar5;
  
  iVar4 = *(int *)(unsigned)(in_r0 + (int)unaff_r14);
  a4 = *unaff_r14;
  uVar2 = ar5;
  if (ar5 < (unaff_r14[0x10] - *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14)) - 1U) {
    do {
      uVar2 = uVar2 + 1;
      iVar4 = *(int *)(unsigned)(iVar4 + 0x18);
    } while (uVar2 < (unaff_r14[0x10] - *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14)) - 1U);
  }
  uVar2 = unaff_r14[0x10] + *(int *)(unsigned)((int)0x1b4 + (int)unaff_r14) * -2;
  for (iVar3 = *(int *)(unsigned)(iVar4 + 8); iVar3 != 0; iVar3 = *(int *)(unsigned)(iVar3 + 4)) {
    if ((*(int *)(unsigned)(iVar3 + 0x10) != 0) &&
       (iVar1 = *(int *)(unsigned)(iVar3 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      ar5 = ar5 + 1;
    }
  }
  ar6_00 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(ar5 - 1) * 2 + 8,ar6,ar7));
  *ar6_00 = ar5;
  iVar3 = ar5 - 1;
  for (iVar4 = *(int *)(unsigned)(iVar4 + 8); iVar4 != 0; iVar4 = *(int *)(unsigned)(iVar4 + 4)) {
    if ((*(int *)(unsigned)(iVar4 + 0x10) != 0) &&
       (iVar1 = *(int *)(unsigned)(iVar4 + 0x10) - unaff_r14[0x12],
       (uint)((int)(iVar1 + (uint)(iVar1 < 0)) >> 1) < uVar2)) {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + -1;
      *(undefined2 *)(unsigned)((int)ar6_00 + iVar1 + 4) = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + 0x10));
    }
  }
  a7 = 1;
  a6 = ar6_00;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14,0xc,ar6_00,1));
  bVar5 = (uVar2 & 0xff) == 0;
  if (bVar5) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,ar6_00,a6,a7));
  }
  return (uint)!bVar5;
}

__asm__(".globl _FUN_8c119218\n.set _FUN_8c119218, _FUN_8c119218_def\n");
//@unit 8c119320
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c119320_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
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
  
  iVar5 = (int)0x77ff;
  uVar7 = 0;
  iVar9 = (int)0x7fff;
  sVar6 = *(short *)(unsigned)(0x19a + ar4);
  iVar1 = 0x19a + 0x12;
  *(int *)(unsigned)(iVar1 + ar4) = *(int *)(unsigned)(iVar1 + ar4) + (int)sVar6;
  puVar11 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  uVar8 = (uint)*(ushort *)(unsigned)(ar4 + 0x50);
  if (uVar8 != 0) {
    do {
      iVar1 = (int)(short)puVar11[1];
      if (iVar1 < iVar5) {
        iVar1 = iVar1 + (short)(*(short *)(unsigned)(ar5 + (uint)*((ushort *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 6)) * 2) - sVar6);
      }
      *puVar11 = (short)iVar1;
      puVar11[1] = (short)iVar1;
      if (iVar1 <= iVar9) {
        *(unsigned *)(unsigned)(0x19c + ar4) = puVar11;
        iVar9 = iVar1;
      }
      iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 2)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 2)) = iVar1;
      if (iVar1 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(puVar11 + 2),ar6,ar7));
      }
      uVar7 = uVar7 + 1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 4)) = *((int *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 4)) + 1;
      *(undefined4 *)(unsigned)(puVar11 + 2) = *(undefined4 *)(unsigned)(puVar11 + 4);
      puVar11 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(puVar11 + 0xc));
    } while (uVar7 < uVar8);
  }
  uVar7 = 1;
  *(short *)(unsigned)(0x19a + ar4) = (short)iVar9;
  ar7_00 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  iVar9 = (int)ar7_00[1];
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar7_00 + 0xc));
  if (1 < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2) {
    do {
      if ((int)*psVar4 < (int)(short)iVar9) {
        iVar9 = (int)*psVar4;
        ar7_00 = psVar4;
      }
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2);
  }
  (*(short *)(fr0_ - 0x2c)) = *(short *)(unsigned)(0x1e8 + ar4) + (short)iVar9;
  if (uVar7 < (uVar8 - *(int *)(unsigned)(0x1b4 + ar4)) - 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < (uVar8 - *(int *)(unsigned)(0x1b4 + ar4)) - 1);
  }
  psVar12 = ar7_00;
  if (*psVar4 < (*(short *)(fr0_ - 0x2c))) {
    (*(short *)(fr0_ - 0x2c)) = *psVar4;
    psVar12 = psVar4;
  }
  for (; uVar7 < uVar8 - 1; uVar7 = uVar7 + 1) {
    psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
  }
  iVar1 = iVar9;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar7_00));
  if ((int)*psVar4 < (int)(short)iVar9) {
    iVar1 = (int)*psVar4;
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(psVar4));
  }
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  (*(uint *)(fr0_ - 0x30)) = 0;
  sVar6 = (short)iVar1 + *(short *)(unsigned)(0x1e8 + ar4);
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 2));
  piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
  if (piVar10[1] == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00));
    *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
  }
  else {
    *(int *)(unsigned)(0x114 + ar4) = piVar10[1];
  }
  iVar1 = (int)0x12c;
  piVar10[1] = (int)piVar3;
  *piVar3 = *piVar3 + 1;
  piVar10[4] = *(int *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 6);
  iVar5 = (int)0x1ac;
  *piVar10 = 0;
  piVar10[5] = *(int *)(unsigned)(iVar1 + ar4) + 1;
  piVar10[3] = (int)psVar4[1] + *(int *)(unsigned)(iVar5 + ar4);
  iVar1 = (int)0x1b4;
  *piVar10 = *piVar10 + 1;
  if (uVar8 + *(int *)(unsigned)(iVar1 + ar4) * -2 != 0) {
    do {
      if (sVar6 < psVar4[1]) {
        psVar4[1] = sVar6;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
        *(unsigned *)(unsigned)(psVar4 + 4) = piVar10;
        *piVar10 = *piVar10 + 1;
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        if (iVar1 + -1 < 1) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00));
        }
      }
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
    } while ((*(uint *)(fr0_ - 0x30)) < uVar8 + *(int *)(unsigned)(0x1b4 + ar4) * -2);
  }
  iVar1 = *piVar10;
  *piVar10 = iVar1 + -1;
  if (iVar1 + -1 < 1) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
  }
  if ((*(short *)(fr0_ - 0x2c)) < psVar4[1]) {
    psVar4[1] = (*(short *)(fr0_ - 0x2c));
    piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 2));
    if (piVar10[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar10,iVar9,ar7_00));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(unsigned)(0x114 + ar4) = piVar10[1];
    }
    iVar1 = (int)0x12c;
    piVar10[1] = (int)piVar3;
    *piVar3 = *piVar3 + 1;
    piVar10[4] = *(int *)(unsigned)(psVar12 + 6);
    *piVar10 = 0;
    piVar10[5] = *(int *)(unsigned)(iVar1 + ar4) + 1;
    piVar10[3] = (int)psVar4[1] + *(int *)(unsigned)(0x1ac + ar4);
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
    *(unsigned *)(unsigned)(psVar4 + 4) = piVar10;
    *piVar10 = *piVar10 + 1;
    iVar1 = *piVar3;
    *piVar3 = iVar1 + -1;
    if (iVar1 + -1 < 1) {
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar3,iVar9,ar7_00));
    }
  }
  psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
  uVar7 = 0;
  psVar13 = psVar12;
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar4 < psVar13[1]) {
        psVar13[1] = *psVar4;
        piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar13 + 4));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 2));
        if (piVar10 != piVar3) {
          *(unsigned *)(unsigned)(psVar13 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar13 + 0xc));
      psVar4 = psVar13;
      psVar13 = psVar12;
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  uVar7 = 0;
  psVar4 = psVar12;
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      uVar7 = uVar7 + 1;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  if (*psVar4 < psVar12[1]) {
    psVar12[1] = *psVar4;
    piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 4));
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 2));
    if (piVar10 != piVar3) {
      *(unsigned *)(unsigned)(psVar12 + 4) = piVar3;
      *piVar3 = *piVar3 + 1;
      iVar1 = *piVar10;
      *piVar10 = iVar1 + -1;
      if (iVar1 + -1 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
      }
    }
  }
  uVar7 = 0;
  psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 0xc));
  if (*(int *)(unsigned)(0x1b4 + ar4) != 1) {
    do {
      if (*psVar12 < psVar4[1]) {
        psVar4[1] = *psVar12;
        piVar10 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 4));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar12 + 2));
        if (piVar10 != piVar3) {
          *(unsigned *)(unsigned)(psVar4 + 4) = piVar3;
          *piVar3 = *piVar3 + 1;
          iVar1 = *piVar10;
          *piVar10 = iVar1 + -1;
          if (iVar1 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar10,iVar9,ar7_00));
          }
        }
      }
      uVar7 = uVar7 + 1;
      psVar12 = psVar4;
      psVar4 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar4 + 0xc));
    } while (uVar7 < *(int *)(unsigned)(0x1b4 + ar4) - 1U);
  }
  return 0;
}

__asm__(".globl _FUN_8c119320\n.set _FUN_8c119320, _FUN_8c119320_def\n");
//@unit 8c119706
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c119706_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119706";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11b5a0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1b4) == 0) {
    (*(int *)(fr0_ - 0x18)) = 0;
    (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)(ar4 + 300) + 1;
    (*(int *)(fr0_ - 0x24)) = (int)*(short *)(unsigned)(ar4 + 0x1b0) + *(int *)(unsigned)(ar4 + 0x1ac);
  }
  else {
    (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)((*(int *)(fr0_ - 0x10)) + 0x14);
    iVar3 = (*(int *)(fr0_ - 0x10));
    for (iVar2 = (*(int *)(fr0_ - 0x10)); iVar2 != 0; iVar2 = *(int *)(unsigned)(iVar2 + 4)) {
      if ((*(uint *)(unsigned)(ar4 + 0x1b8) == (*(uint *)(unsigned)(iVar2 + 0x10) & 0xffff)) &&
         (*(int *)(unsigned)(iVar2 + 4) != 0)) {
        iVar3 = iVar2;
      }
    }
    (*(int *)(fr0_ - 0x18)) = *(int *)(unsigned)(iVar3 + 0x14);
    (*(int *)(fr0_ - 0x24)) = *(int *)(unsigned)((*(int *)(fr0_ - 0x10)) + 0xc) - *(int *)(unsigned)(iVar3 + 0xc);
  }
  (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x14)) - (*(int *)(fr0_ - 0x18));
  (*(float *)(fr0_ - 0x1c)) = (float)(*(int *)(fr0_ - 0x24));
  if ((*(int *)(fr0_ - 0x24)) < 0) {
    (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x1c)) + 4.2949673e+09;
  }
  fVar4 = (float)(*(int *)(fr0_ - 0x20));
  if ((*(int *)(fr0_ - 0x20)) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  (*(float *)(fr0_ - 0x1c)) = (*(float *)(fr0_ - 0x1c)) / fVar4;
  (*(int *)(fr0_ - 0x28)) = (int)*(short *)(unsigned)(ar4 + 0x1b0) + *(int *)(unsigned)(ar4 + 0x1ac);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c120348(ar4,0xc,&(*(int *)(fr0_ - 0x28)),2));
  return uVar1;
}

__asm__(".globl _FUN_8c119706\n.set _FUN_8c119706, _FUN_8c119706_def\n");
//@unit 8c1197d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1197d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1197d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
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
  
  sVar7 = 0x77ff;
  ar6_00 = (int)0x77ff;
  psVar11 = (short *)(unsigned)0x0;
  ar7_00 = (int)0x7fff;
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  sVar1 = *(short *)(unsigned)(0x19a + ar4);
  iVar2 = 0x19a + 0x12;
  *(int *)(unsigned)(iVar2 + ar4) = *(int *)(unsigned)(iVar2 + ar4) + (int)sVar1;
  uVar6 = (uint)*(ushort *)(unsigned)(ar4 + 0x50);
  uVar10 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = (int)psVar8[1];
      if (iVar2 < ar6_00) {
        iVar2 = iVar2 - sVar1;
        *psVar8 = (short)iVar2;
        iVar2 = iVar2 + *(short *)(unsigned)(ar5 + *(int *)(unsigned)(psVar8 + 6) * 2);
        psVar8[1] = (short)iVar2;
      }
      else {
        *psVar8 = sVar7;
      }
      if (iVar2 < (short)ar7_00) {
        ar7_00 = iVar2;
      }
      *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 4)) = *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 4)) + 1;
      uVar10 = uVar10 + 1;
      *(undefined4 *)(unsigned)(psVar8 + 2) = *(undefined4 *)(unsigned)(psVar8 + 4);
      psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar8 + 0xc));
    } while (uVar10 < uVar6);
  }
  *(short *)(unsigned)(0x19a + ar4) = (short)ar7_00;
  uVar10 = *(uint *)(unsigned)(0x1b4 + ar4);
  (*(uint *)(fr0_ - 0x30)) = 0;
  psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54));
  if (uVar6 != 0) {
    do {
      psVar11 = psVar8;
      iVar2 = *(int *)(unsigned)(psVar11 + 8);
      sVar1 = *psVar11;
      sVar7 = *(short *)(unsigned)(ar5 + *(int *)(unsigned)(iVar2 + 0xc) * 2) + sVar1;
      piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2));
      piVar9 = piVar12;
      if (sVar7 < *(short *)(unsigned)(iVar2 + 2)) {
        *(short *)(unsigned)(iVar2 + 2) = sVar7;
        piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
        if (piVar9[1] == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar9,ar6_00,ar7_00));
          *(undefined4 *)(unsigned)(0x114 + ar4) = uVar3;
        }
        else {
          *(int *)(unsigned)(0x114 + ar4) = piVar9[1];
        }
        iVar4 = (int)0x12c;
        piVar9[1] = (int)piVar12;
        *piVar12 = *piVar12 + 1;
        piVar9[4] = *(int *)(unsigned)(psVar11 + 6);
        *piVar9 = 0;
        iVar5 = (int)0x1ac;
        piVar9[5] = *(int *)(unsigned)(iVar4 + ar4);
        piVar9[3] = (int)sVar1 + *(int *)(unsigned)(iVar5 + ar4);
        piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 8));
        if (piVar12 != piVar9) {
          *(unsigned *)(unsigned)(iVar2 + 8) = piVar9;
          *piVar9 = *piVar9 + 1;
          iVar2 = *piVar12;
          *piVar12 = iVar2 + -1;
          if (iVar2 + -1 < 1) {
            (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar12,ar6_00,ar7_00));
          }
        }
      }
      if ((1 < uVar10) && (uVar10 - 1 == (*(uint *)(fr0_ - 0x30)))) {
        iVar2 = *(int *)(unsigned)(ar4 + 0x54);
        sVar7 = *(short *)(unsigned)(ar5 + *(int *)(unsigned)(iVar2 + 0xc) * 2) + sVar1;
        if (sVar7 < *(short *)(unsigned)(iVar2 + 2)) {
          *(short *)(unsigned)(iVar2 + 2) = sVar7;
          piVar12 = piVar9;
          if (piVar9 == ((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2))) {
            piVar12 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
            if (piVar12[1] == 0) {
              uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c112fd8(ar4,piVar12,ar6_00,ar7_00));
              *(undefined4 *)(unsigned)(0x114 + ar4) = uVar3;
            }
            else {
              *(int *)(unsigned)(0x114 + ar4) = piVar12[1];
            }
            iVar4 = (int)0x12c;
            piVar12[1] = (int)piVar9;
            *piVar9 = *piVar9 + 1;
            piVar12[4] = *(int *)(unsigned)(psVar11 + 6);
            *piVar12 = 0;
            iVar5 = (int)0x1ac;
            piVar12[5] = *(int *)(unsigned)(iVar4 + ar4);
            piVar12[3] = (int)sVar1 + *(int *)(unsigned)(iVar5 + ar4);
          }
          piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 8));
          if (piVar9 != piVar12) {
            *(unsigned *)(unsigned)(iVar2 + 8) = piVar12;
            *piVar12 = *piVar12 + 1;
            iVar2 = *piVar9;
            *piVar9 = iVar2 + -1;
            if (iVar2 + -1 < 1) {
              (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,piVar9,ar6_00,ar7_00));
            }
          }
        }
      }
      iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 2)) = iVar2;
      if (iVar2 < 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(psVar11 + 2),ar6_00,ar7_00));
      }
      (*(uint *)(fr0_ - 0x30)) = (*(uint *)(fr0_ - 0x30)) + 1;
      psVar8 = ((short *)(unsigned long)*(unsigned *)(unsigned)(psVar11 + 0xc));
    } while ((*(uint *)(fr0_ - 0x30)) < uVar6);
  }
  *(short *)(unsigned)(0x1b0 + ar4) = psVar11[1];
  return 0;
}

__asm__(".globl _FUN_8c1197d8\n.set _FUN_8c1197d8, _FUN_8c1197d8_def\n");
//@unit 8c119a18
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c119a18_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119a18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
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
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
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
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c119a1e_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c119a1e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  double in_dr0 = 0;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr5 = 0;
  float fVar8;
  double dVar7;
  float fVar9;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd14 = 0;
  char in_T = 0;
  bool bVar10;
  int in_FPUL = 0;
  int iVar11;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  byte in_FPSCR_PR = 0;
  byte in_FPSCR_SZ = 0;
  
  fVar4 = (float)in_FPUL;
  if (in_T != '\x01') {
    if (in_FPSCR_PR == 0) {
      fVar4 = fVar4 + 0x4f800000;
    }
    else {
      fVar4 = SUB84(CONCAT44D(0x4f800000,fVar4) + CONCAT44D(0x4f800000,fVar4),0);
    }
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = CONCAT44D((float)ar6,fVar4);
  }
  else {
    dVar5 = (double)ar6;
  }
  if (ar6 < 0) {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = CONCAT44D(F32HI(dVar5) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_PR == 0) {
    fVar4 = F32LO(dVar5) - F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = CONCAT44D((float)ar4,fVar4);
  }
  else {
    dVar5 = (double)ar4;
  }
  if (ar4 < 0) {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
    if (in_FPSCR_PR == 0) {
      dVar5 = CONCAT44D(F32HI(dVar5) + 0x4f800000,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + in_dr0;
    }
  }
  if (in_FPSCR_SZ == 0) {
    in_xd2 = CONCAT44D(SUB84(dVar5,0),in_fr5);
  }
  if (in_FPSCR_PR == 0) {
    dVar5 = CONCAT44D(F32HI(in_xd2) / F32HI(dVar5),
                             SUB84(in_xd2,0));
  }
  else {
    dVar5 = in_xd2 / dVar5;
  }
  if (in_FPSCR_SZ == 0) {
    dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c119ab4),(*(undefined1 *)(unsigned)0x8c119ab0));
  }
  else {
    dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c119ab8),(*(undefined1 *)(unsigned)0x8c119ab4));
  }
  fVar4 = F32HI(dVar6);
  fVar8 = F32HI(dVar5);
  if (in_FPSCR_PR == 0) {
    bVar10 = fVar8 < fVar4;
  }
  else {
    bVar10 = dVar5 < dVar6;
  }
  dVar7 = dVar5;
  if (in_FPSCR_SZ == 0) {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar8);
    dVar7 = in_xd14;
  }
  if (in_FPSCR_PR == 0) {
    fVar9 = F32LO(in_dr14) * F32LO(dVar6);
  }
  else {
    fVar9 = SUB84(in_dr14 * dVar6,0);
  }
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (bVar10) {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = CONCAT44D(uVar3,(*(undefined1 *)(unsigned)0x8c119ab8));
      dVar7 = CONCAT44D(fVar9,SUB84(dVar5,0));
    }
    if (in_FPSCR_PR == 0) {
      dVar7 = CONCAT44D(F32HI(dVar7) + F32LO(in_dr0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
    if (in_FPSCR_SZ == 0) {
      dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined1 *)(unsigned)0x8c119ac0));
    }
    uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
            (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
    in_FPSCR_CAUSE = 0;
    in_FPSCR_DN = 0;
    in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
    in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
    if (in_FPSCR_PR == 0) {
      dVar5 = CONCAT44D(F32HI(in_dr0) + F32LO(dVar6),SUB84(in_dr0,0));
    }
    else {
      dVar5 = in_dr0 + dVar6;
    }
    if (in_FPSCR_SZ == 0) {
      dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(*(undefined1 *)(unsigned)0x8c119ac4));
    }
    if (in_FPSCR_PR == 0) {
      fVar4 = F32LO(dVar7) / F32HI(dVar5);
    }
    else {
      fVar4 = SUB84(dVar7 / dVar5,0);
    }
  }
  else {
    if (in_FPSCR_SZ == 0) {
      in_dr0 = CONCAT44D(uVar3,(undefined4)(*(undefined1 *)(unsigned)0x8c119ac8));
    }
    if (in_FPSCR_PR == 0) {
      bVar10 = SUB84(in_dr0,0) < fVar8;
    }
    else {
      bVar10 = in_dr0 < dVar5;
    }
    if (bVar10) {
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D(fVar4,(*(undefined4 *)(unsigned)(unsigned)0x8c119be0));
        dVar7 = CONCAT44D(fVar9,SUB84(dVar5,0));
      }
      if (in_FPSCR_PR == 0) {
        dVar7 = CONCAT44D(F32HI(dVar7) + F32LO(dVar6),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar6;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),(*(undefined1 *)(unsigned)0x8c119be8));
      }
      uVar2 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
              (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
      in_FPSCR_CAUSE = 0;
      in_FPSCR_DN = 0;
      in_FPSCR_PR = (byte)((uVar2 & 0x80000) >> 0x13);
      in_FPSCR_SZ = (byte)((uVar2 & 0x100000) >> 0x14);
      if (in_FPSCR_PR == 0) {
        dVar5 = CONCAT44D(F32HI(in_dr0) + F32LO(dVar6),SUB84(in_dr0,0)
                                );
      }
      else {
        dVar5 = in_dr0 + dVar6;
      }
      if (in_FPSCR_SZ == 0) {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),(*(undefined1 *)(unsigned)0x8c119bf0));
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = F32LO(dVar7) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar5,0);
      }
    }
    else {
      if (in_FPSCR_SZ == 0) {
        dVar6 = CONCAT44D((*(undefined1 *)(unsigned)0x8c119ad0),(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c119ac8)+4)));
      }
      else {
        dVar6 = CONCAT44D((*(uint *)(unsigned)0x8c119ad4),(*(undefined1 *)(unsigned)0x8c119ad0));
      }
      if (in_FPSCR_PR == 0) {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),F32LO(dVar6) - fVar8);
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      if (in_FPSCR_SZ == 0) {
        dVar5 = CONCAT44D(fVar8,SUB84(dVar6,0));
      }
      if (in_FPSCR_PR == 0) {
        fVar4 = F32LO(dVar5) * F32HI(dVar6);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar6,0);
      }
    }
  }
  fVar8 = F32LO(dVar6);
  if (in_FPSCR_SZ == 0) {
    fVar8 = fVar4;
  }
  cVar1 = (char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13);
  dVar5 = CONCAT44D(0x4f000000,fVar8);
  if (cVar1 != '\0' || 0x4f000000 <= fVar8) {
    if (cVar1 == '\0') {
      dVar5 = CONCAT44D(0x4f000000 + 0x4f000000,fVar8 - (0x4f000000 + 0x4f000000)
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c119b16_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c119b16";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr0 = 0;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  
  fVar6 = F32HI(in_dr0);
  if (ar6 != ar7) {
    cVar7 = '\0';
    fVar2 = (float)ar5;
    if (ar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1cc) + ar6 * 4);
    fVar3 = (float)iVar1;
    if (iVar1 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1cc) + ar7 * 4);
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
        (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
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
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013cd8(ar4,ar5,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c119c68_def(int ar4,int ar5,uint *ar6,uint *ar7)

{
  ring[rp++ & 255] = "FUN_8c119c68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
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
  
  (*(char *)(fr0_ - 0x6c)) = (char)ar6;
  (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(ar7));
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x8c + ar4));
  (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((uint *)(unsigned)0x1));
  (*(int *)(fr0_ - 0x50)) = 0;
  (*(int *)(fr0_ - 0x54)) = 0;
  (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((uint *)(unsigned)*((uint *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x84))));
  (*(int *)(fr0_ - 0x3c)) = 0;
  (*(int *)(fr0_ - 0x40)) = 1;
  puVar6 = (undefined4 *)(unsigned)0x0;
  if (*(int *)(unsigned)(ar5 + 8) != 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(ar5 + 8);
    puVar6 = &(*(undefined4 *)(fr0_ - 0x38));
    (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar5 + 0xc);
    (*(undefined4 *)(fr0_ - 0x38)) = 1;
    (*(unsigned *)(fr0_ - 0x7c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(0x12c + ar4))));
    (*(int *)(fr0_ - 0x68)) = (int)*(short *)(unsigned)(ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4);
  }
  (*(uint *)(fr0_ - 0x44)) = (uint)((char)ar6 == '\0');
  if (puVar6 != (undefined4 *)(unsigned)0x0) {
    iVar4 = puVar6[4];
    while (iVar4 != 0) {
      uVar1 = (uint)(*(undefined4 *)(fr0_ - 0x84)) >> 0x10;
      (*(undefined4 *)(fr0_ - 0x84)) = CONCAT22((short)uVar1,*(undefined2 *)(unsigned)(puVar6[4] + 2));
      (*(undefined4 *)(fr0_ - 0x84)) = CONCAT22(*(undefined2 *)(unsigned)(puVar6[4] + 4),*(undefined2 *)(unsigned)(puVar6[4] + 2));
      puVar9 = (undefined4 *)(unsigned)puVar6[1];
      puVar7 = (undefined4 *)(unsigned)0x0;
      if ((((*(uint *)(fr0_ - 0x44)) != 0) && (puVar9[4] != 0)) &&
         ((*(undefined4 *)(fr0_ - 0x70)) = CONCAT22(*(undefined2 *)(unsigned)(puVar9[4] + 4),*(undefined2 *)(unsigned)(puVar9[4] + 2)),
         *(uint *)(unsigned)(0x108 + ar4) <= (*(undefined4 *)(fr0_ - 0x70)))) {
        (*(int *)(fr0_ - 0x3c)) = 1;
        puVar8 = (undefined4 *)(unsigned)puVar9[1];
        if ((*(ushort *)(unsigned)puVar8[4] & 2) == 0) {
          (*(undefined4 *)(fr0_ - 0x74)) = CONCAT22(*(undefined2 *)(unsigned)(puVar8[4] + 4),*(undefined2 *)(unsigned)(puVar8[4] + 2));
          iVar5 = *(int *)(unsigned)(0x104 + ar4);
          iVar4 = *(int *)(unsigned)(0x104 + -4 + ar4);
          (*(uint *)(fr0_ - 0x58)) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(fr0_ - 0x74)) * 8 + iVar4 + 4) * 0xc + iVar5 + 6);
          if (*(short *)(unsigned)(iVar5 + *(int *)(unsigned)((*(undefined4 *)(fr0_ - 0x84)) * 8 + iVar4 + 4) * 0xc + 8) == 0) {
            puVar7 = (undefined4 *)(unsigned)0x0;
          }
          else {
            puVar7 = puVar8;
            if ((*(uint *)(fr0_ - 0x58)) == 0) {
              puVar7 = (undefined4 *)(unsigned)puVar8[1];
              puVar9 = puVar8;
            }
          }
        }
        else {
          puVar7 = (undefined4 *)(unsigned)puVar8[1];
          puVar9 = puVar8;
        }
      }
      (*(int *)(fr0_ - 0x64)) = puVar9[3];
      (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar9[5]));
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x68)) - puVar9[3];
      if ((*(int *)(fr0_ - 0x40)) != 0) {
        if (((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) < ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))) {
          (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
          *((int *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x8c)) = (*(int *)(fr0_ - 0x5c));
        }
        if ((*(char *)(fr0_ - 0x6c)) == '\0') {
          (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x68)) -
                      (uint)*(ushort *)(unsigned)(0x1da + ar4) *
                      (int)*(short *)(unsigned)(0x1da + -0x1c + ar4);
          (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c))));
          (*(int *)(fr0_ - 0x50)) = *(int *)(unsigned)(*(int *)(unsigned)(0x1d0 + ar4) + (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) * 4);
        }
        (*(int *)(fr0_ - 0x40)) = 0;
      }
      if (ar5_00[4] == 0) {
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c112d82(ar4,ar5_00,ar6,ar7));
      }
      else {
        piVar3 = (int *)(unsigned)ar5_00[4];
      }
      ar5_00[4] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78));
      (*(unsigned *)(fr0_ - 0x78) = (unsigned)(unsigned long)(ar5_00));
      ar5_00[3] = 0;
      *ar5_00 = (*(undefined4 *)(fr0_ - 0x84));
      if ((*(char *)(fr0_ - 0x6c)) == '\0') {
        if (*(ushort *)(unsigned)puVar6[4] >> 2 == *(ushort *)(unsigned)(0xe2 + ar4)) {
          (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((uint *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x60)) - ((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) - (int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))))));
          (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x54)) - (*(int *)(fr0_ - 0x5c));
          (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x50)) -
                      (*(int *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)) * 4 + *(int *)(unsigned)(0x1d0 + ar4)) -
                      *(int *)(unsigned)((int)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80)) * 4 + *(int *)(unsigned)(0x1d0 + ar4)));
        }
        if ((*(ushort *)(unsigned)((*(undefined4 *)(fr0_ - 0x84)) * 2 + *(int *)(unsigned)(0xc0 + ar4)) & 0x80) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(short *)(unsigned)(0x1be + ar4);
        }
        *(undefined2 *)(unsigned)(ar5_00 + 5) = (*(uint*)((uchar*)((uint * *)(fr0_ - 0x7c))+0));
        iVar4 = ((*(int *)(fr0_ - 0x68)) - iVar4) - (*(int *)(fr0_ - 0x64));
        ar5_00[2] = iVar4;
        ar7 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c119b16(ar4,iVar4,((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c)),((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
        ar5_00[1] = iVar4;
        ar6 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x7c));
      }
      else {
        ar6 = (uint *)(unsigned)puVar6[4];
        uVar2 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x84)),ar6,ar7));
        *(short *)(unsigned)((int)ar5_00 + 0x16) = (short)uVar2;
      }
      if ((*(int *)(fr0_ - 0x3c)) != 0) {
        if (puVar7 == (undefined4 *)(unsigned)0x0) {
          puVar9 = (undefined4 *)(unsigned)puVar9[1];
          if ((*(uint *)(fr0_ - 0x58)) == 0) {
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar9[5]));
            (*(int *)(fr0_ - 0x64)) = puVar9[3];
          }
        }
        else if (puVar7[4] != 0) {
          if ((*(ushort *)(unsigned)puVar7[4] & 2) != 0) {
            (*(unsigned *)(fr0_ - 0x80) = (unsigned)(unsigned long)((uint *)(unsigned)puVar7[5]));
            (*(int *)(fr0_ - 0x64)) = puVar7[3];
            puVar9 = puVar7;
          }
          puVar9 = (undefined4 *)(unsigned)puVar9[1];
        }
        (*(int *)(fr0_ - 0x3c)) = 0;
      }
      (*(unsigned *)(fr0_ - 0x7c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x80))));
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0x64));
      ar5_00 = piVar3;
      if (puVar9 == (undefined4 *)(unsigned)0x0) break;
      puVar6 = puVar9;
      iVar4 = puVar9[4];
    }
  }
  if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) == (int *)(unsigned)0x0) {
    piVar10 = (int *)(unsigned)0x0;
    piVar3 = ar5_00;
  }
  else {
    if (ar5_00[4] == 0) {
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c112d82(ar4,ar5_00,ar6,ar7));
    }
    else {
      piVar3 = (int *)(unsigned)ar5_00[4];
    }
    ar5_00[3] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78));
    if ((uint)*(ushort *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 5) < *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x48))) {
      *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x48)) = (uint)*(ushort *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78)) + 5);
      *((int *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x88)) = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x78))[2];
    }
    piVar10 = ar5_00;
    if ((*(char *)(fr0_ - 0x6c)) == '\0') {
      ar5_00[2] = (*(int *)(fr0_ - 0x54));
      ar5_00[1] = (*(int *)(fr0_ - 0x50));
      *(short *)(unsigned)(ar5_00 + 5) = (short)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x60));
    }
  }
  *(unsigned *)(unsigned)(0x8c + ar4) = piVar3;
  *((uint *)(unsigned long)*(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x84)) + (int)0x84)) = (uint)((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
  return piVar10;
}

__asm__(".globl _FUN_8c119c68\n.set _FUN_8c119c68, _FUN_8c119c68_def\n");
//@unit 8c11a014
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11a014_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a014";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
  puVar1 = (undefined4 *)(unsigned)0x0;
  for (; ar5 != 0; ar5 = *(int *)(unsigned)(ar5 + 8)) {
    puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    if (puVar5[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(ar4,puVar5,vr6,vr7));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(undefined4 *)(unsigned)(0x114 + ar4) = puVar5[1];
    }
    puVar5[4] = *(undefined4 *)(unsigned)(ar5 + 0x10);
    *puVar5 = 1;
    puVar5[3] = *(undefined4 *)(unsigned)(ar5 + 0xc);
    puVar5[5] = *(undefined4 *)(unsigned)(ar5 + 0x14);
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4));
    puVar5[1] = piVar3;
    *piVar3 = *piVar3 + 1;
    puVar5[2] = 0;
    if (puVar1 != (undefined4 *)(unsigned)0x0) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11a02c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a02c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 unaff_r10 = 0;
  undefined4 *unaff_r11 = 0;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  undefined4 *ar5_00;
  char in_T = 0;
  
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(in_r0 + unaff_r12));
  if (in_T != '\x01') {
    do {
      ar5_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x114 + unaff_r12));
      if (ar5_00[1] == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(unaff_r12,ar5_00,ar6,ar7));
        *(undefined4 *)(unsigned)(0x114 + unaff_r12) = uVar1;
      }
      else {
        *(undefined4 *)(unsigned)(0x114 + unaff_r12) = ar5_00[1];
      }
      ar5_00[4] = *(undefined4 *)(unsigned)(unaff_r13 + 0x10);
      *ar5_00 = 1;
      ar5_00[3] = *(undefined4 *)(unsigned)(unaff_r13 + 0xc);
      ar5_00[5] = *(undefined4 *)(unsigned)(unaff_r13 + 0x14);
      piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(unaff_r13 + 4));
      ar5_00[1] = piVar2;
      *piVar2 = *piVar2 + 1;
      ar5_00[2] = unaff_r10;
      if (unaff_r11 != (undefined4 *)(unsigned)0x0) {
        unaff_r11[2] = ar5_00;
      }
      unaff_r13 = *(int *)(unsigned)(unaff_r13 + 8);
      unaff_r11 = ar5_00;
    } while (unaff_r13 != 0);
  }
  *puVar3 = unaff_r10;
  return puVar3;
}

__asm__(".globl _FUN_8c11a02c\n.set _FUN_8c11a02c, _FUN_8c11a02c_def\n");
//@unit 8c11a09e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11a09e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a09e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (undefined4 *)(unsigned)(uint)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (undefined4 *)(unsigned)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (undefined4 *)(unsigned)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (undefined4 *)(unsigned)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c11a09e\n.set _FUN_8c11a09e, _FUN_8c11a09e_def\n");
//@unit 8c11a0e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c11a0e8_def(int ar4,int *ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c11a0e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
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
  
  cVar6 = (char)ar6;
  piVar8 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x8c + ar4));
  (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  piVar9 = (int *)(unsigned)(uint)ar5[2];
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  (*(int *)(fr0_ - 0x24)) = 0;
  (*(int *)(fr0_ - 0x30)) = 1;
  (*(uint *)(fr0_ - 0x28)) = 0;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  a5_00 = ar5;
  if (piVar9 != (int *)(unsigned)0x0) {
    if (cVar6 == '\0') {
      (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)(((int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4)) -
                          (uint)*(ushort *)(unsigned)(0x1da + ar4) *
                          (int)*(short *)(unsigned)(0x1be + ar4))));
      (*(int *)(fr0_ - 0x30)) = *(int *)(unsigned)(0x12c + ar4);
      (*(uint *)(fr0_ - 0x28)) = *(uint *)(unsigned)(*(int *)(unsigned)(0x1d0 + ar4) + (*(int *)(fr0_ - 0x30)) * 4);
    }
    if (piVar8[4] == 0) {
      piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
    }
    else {
      piVar4 = (int *)(unsigned)piVar8[4];
    }
    (*(undefined4 *)(fr0_ - 0x44)) = (int *)(unsigned)CONCAT22(*(undefined2 *)(unsigned)(ar5[3] + 4),*(undefined2 *)(unsigned)(ar5[3] + 2));
    piVar8[4] = 0;
    piVar8[3] = 0;
    if (cVar6 == '\0') {
      iVar3 = (int)0xc0;
      *(undefined2 *)(unsigned)(piVar8 + 5) = *(undefined2 *)(unsigned)(0x12c + ar4);
      if ((*(ushort *)(unsigned)((int)(*(undefined4 *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(iVar3 + ar4)) & 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)*(short *)(unsigned)(0x1be + ar4);
      }
      piVar8[2] = (((int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4)) - piVar9[3]) -
                  iVar3;
      a5_00 = (int *)(unsigned)piVar8[2];
      ar6 = (uint)*(ushort *)(unsigned)(piVar8 + 5);
      ar7 = piVar9[5] & 0xffff;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119b16(ar4,a5_00,ar6,ar7));
      piVar8[1] = iVar3;
    }
    else {
      ar6 = ar5[3];
      a5_00 = (*(undefined4 *)(fr0_ - 0x44));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x44)),ar6,ar7));
      *(short *)(unsigned)((int)piVar8 + 0x16) = (short)uVar2;
    }
    *piVar8 = (int)(*(undefined4 *)(fr0_ - 0x44));
    piVar7 = piVar8;
    (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(piVar8));
    while (piVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40)), piVar8 = piVar4, a5 = piVar9, a5 != (int *)(unsigned)0x0) {
      piVar4 = piVar8;
      if (a5[4] == 0) {
        piVar9 = (int *)(unsigned)0x0;
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar1));
      }
      else {
        piVar9 = (int *)(unsigned)a5[1];
        (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar7));
        if ((*(ushort *)(unsigned)a5[4] & 2) == 0) {
          if (piVar8[4] == 0) {
            piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
          }
          else {
            piVar4 = (int *)(unsigned)piVar8[4];
          }
          (*(undefined4 *)(fr0_ - 0x44)) = (int *)(unsigned)CONCAT22(*(undefined2 *)(unsigned)(a5[4] + 4),*(undefined2 *)(unsigned)(a5[4] + 2));
          piVar8[4] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
          piVar8[3] = 0;
          if (cVar6 == '\0') {
            ar6 = a5[5];
            ar7 = piVar9[5];
            if (*(ushort *)(unsigned)a5[4] >> 2 == *(ushort *)(unsigned)(0xe2 + ar4)) {
              (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) - (ar6 - ar7);
              (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)((int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) - (a5[3] - *(int *)(unsigned)(a5[1] + 0xc)))));
              (*(uint *)(fr0_ - 0x28)) = (*(uint *)(fr0_ - 0x28)) -
                          (*(int *)(unsigned)(ar6 * 4 + *(int *)(unsigned)(0x1d0 + ar4)) -
                          *(int *)(unsigned)(ar7 * 4 + *(int *)(unsigned)(0x1d0 + ar4)));
            }
            if ((*(ushort *)(unsigned)((int)(*(undefined4 *)(fr0_ - 0x44)) * 2 + *(int *)(unsigned)(0xc0 + ar4)) & 0x80) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = (int)*(short *)(unsigned)(0x1be + ar4);
            }
            *(short *)(unsigned)(piVar8 + 5) = (short)ar6;
            a5_00 = (int *)(unsigned)((a5[3] - piVar9[3]) - iVar3);
            piVar8[2] = (int)a5_00;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119b16(ar4,a5_00,ar6,ar7));
            piVar8[1] = iVar3;
          }
          else {
            ar6 = a5[4];
            a5_00 = (*(undefined4 *)(fr0_ - 0x44));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c113e64(ar4,(*(undefined4 *)(fr0_ - 0x44)),ar6,ar7));
            *(short *)(unsigned)((int)piVar8 + 0x16) = (short)uVar2;
          }
          *piVar8 = (int)(*(undefined4 *)(fr0_ - 0x44));
          piVar7 = a5;
          if ((a5 != (int *)(unsigned)(uint)ar5[2]) && (1 < *a5)) {
            a5_00 = a5;
            piVar7 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a014(ar4,a5,ar6,ar7));
          }
          ar5_00 = (int *)(unsigned)*ar5_00;
          if (ar5_00 == ((int *)(unsigned long)*(unsigned *)(unsigned)(0x120 + ar4))) {
            a5_00 = ar5_00;
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11318e(ar4,ar5_00,ar6,ar7));
          }
          ar5_00[2] = (int)piVar7;
          (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(piVar8));
          (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar7));
          if ((piVar7 != a5) && (piVar1 != (int *)(unsigned)0x0)) {
            *piVar7 = *piVar7 + 1;
            iVar3 = *(int *)(unsigned)piVar1[1] + -1;
            *(int *)(unsigned)piVar1[1] = iVar3;
            if (iVar3 < 1) {
              a5_00 = (int *)(unsigned)piVar1[1];
              (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,a5_00,ar6,ar7));
            }
            piVar1[1] = (int)piVar7;
          }
        }
      }
    }
  }
  piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
  iVar3 = (int)0x124;
  *(int *)(unsigned)(iVar3 + ar4) = *ar5_00;
  if (*(int *)(unsigned)(iVar3 + ar4) == *(int *)(unsigned)(iVar3 + -4 + ar4)) {
    a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x124 + ar4));
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11318e(ar4,a5_00,ar6,ar7));
  }
  if (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) == (int *)(unsigned)0x0) {
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
    piVar4 = piVar8;
  }
  else {
    if (piVar8[4] == 0) {
      a5_00 = piVar8;
      piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c112d82(ar4,piVar8,ar6,ar7));
    }
    else {
      piVar4 = (int *)(unsigned)piVar8[4];
    }
    piVar8[3] = (int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(piVar8));
    if (cVar6 == '\0') {
      piVar8[2] = (int)*(short *)(unsigned)((int)ar5 + 2) + *(int *)(unsigned)(0x1ac + ar4);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c119a18((*(int *)(fr0_ - 0x30)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)),(*(uint *)(fr0_ - 0x28)),ar7));
      piVar8[1] = iVar3;
      a5_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x2c));
      ar6 = (*(uint *)(fr0_ - 0x28));
    }
  }
  piVar8 = (int *)(unsigned)0x0;
  for (; ar5_00 != piVar9; ar5_00 = (int *)(unsigned)ar5_00[1]) {
    piVar7 = (int *)(unsigned)ar5_00[2];
    if (piVar8 == (int *)(unsigned)0x0) {
      piVar8 = (int *)(unsigned)0x0;
      if (piVar7[2] != 0) {
        piVar8 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a09e(piVar7[2],a5_00,ar6,ar7));
        (*(int *)(fr0_ - 0x24)) = piVar8[3] - piVar7[3];
        *piVar8 = *piVar7 + -1;
        piVar7[2] = 0;
      }
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a014(ar4,piVar7,ar6,ar7));
      *piVar8 = *piVar8 + 1;
      iVar5 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4)) + -1;
      *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4)) = iVar5;
      a5_00 = piVar7;
      if (iVar5 < 1) {
        a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 4));
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,a5_00,ar6,ar7));
      }
      *(unsigned *)(unsigned)(iVar3 + 4) = piVar8;
      iVar5 = *(int *)(unsigned)(iVar3 + 0xc);
      *(int *)(unsigned)(iVar3 + 0xc) = *(int *)(unsigned)(iVar3 + 0xc) + (*(int *)(fr0_ - 0x24));
      piVar8 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c11a09e(iVar3,a5_00,ar6,ar7));
      (*(int *)(fr0_ - 0x24)) = piVar8[3] - iVar5;
    }
  }
  if (piVar8 == (int *)(unsigned)0x0) {
    if (ar5[2] != 0) {
      iVar3 = *(int *)(unsigned)(uint)ar5[2] + -1;
      *(int *)(unsigned)(uint)ar5[2] = iVar3;
      if (iVar3 < 1) {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,ar5[2],ar6,ar7));
      }
      ar5[2] = 0;
    }
    *(undefined2 *)(unsigned)((int)ar5 + 2) = 0x7fff;
  }
  else {
    *piVar8 = *piVar8 + 1;
    iVar3 = *(int *)(unsigned)(uint)ar5[2] + -1;
    *(int *)(unsigned)(uint)ar5[2] = iVar3;
    if (iVar3 < 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c115f18(ar4,ar5[2],ar6,ar7));
    }
    ar5[2] = (int)piVar8;
    *(short *)(unsigned)((int)ar5 + 2) = (short)(*(int *)(fr0_ - 0x24)) + *(short *)(unsigned)((int)ar5 + 2);
  }
  *(unsigned *)(unsigned)(0x124 + ar4) = piVar9;
  *(unsigned *)(unsigned)(0x8c + ar4) = piVar4;
  return ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
}

__asm__(".globl _FUN_8c11a0e8\n.set _FUN_8c11a0e8, _FUN_8c11a0e8_def\n");
//@unit 8c11a588
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11a588_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (ar6 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    iVar1 = *(int *)(unsigned)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(int *)(unsigned)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x10)) & 1) != 0) &&
           ((*(undefined4 *)(fr0_ - 0xc)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar1 + 0x10) + 4),
                                *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar1 + 0x10) + 2)),
           (*(ushort *)(unsigned)(*(int *)(unsigned)(0xc0 + ar4) + (*(undefined4 *)(fr0_ - 0xc)) * 2) & 0x80) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(int *)(unsigned)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c11a588\n.set _FUN_8c11a588, _FUN_8c11a588_def\n");
//@unit 8c11a634
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11a634_def(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a634";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *a7;
  int ar5_00;
  
  iVar3 = ar4[0x15];
  ar5_00 = 0;
  uVar4 = 0;
  if ((short)ar4[0x14] != 0) {
    do {
      if (((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) != 0) &&
         ((*(undefined4 *)(fr0_ - 0x28)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                               *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2)),
         (*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x28)) * 2) & 2) != 0)) {
        ar5_00 = ar5_00 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
    } while (uVar4 < *(ushort *)(unsigned)(ar4 + 0x14));
  }
  if (ar5_00 == 0) {
    *ar5 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))(*ar4,ar5_00 << 2,ar6,ar7));
    *ar5 = uVar1;
    iVar3 = ar4[0x15];
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)((int *)(unsigned)*ar5));
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) {
      (*(uint *)(fr0_ - 0x34)) = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) == 0) {
            iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
            if (iVar2 < 1) {
              (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115f18(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
            }
            *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x30)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x30)) * 2) & 2) == 0) {
              iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
              if (iVar2 < 1) {
                (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115f18(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
              }
              *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
            }
            else {
              *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = iVar3;
              (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
            }
          }
          iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
          (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1;
        } while ((*(uint *)(fr0_ - 0x34)) < *(ushort *)(unsigned)(ar4 + 0x14));
      }
    }
    else {
      (*(uint *)(fr0_ - 0x34)) = 0;
      if ((short)ar4[0x14] != 0) {
        do {
          if ((*((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 0xc)) & 1) == 0) {
            iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
            *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
            if (iVar2 < 1) {
              (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
            }
            *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
          }
          else {
            (*(undefined4 *)(fr0_ - 0x2c)) = CONCAT22(*(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 4),
                                 *(undefined2 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0xc) + 2));
            if ((*(ushort *)(unsigned)(*(int *)(unsigned)((int)0xc0 + (int)ar4) + (*(undefined4 *)(fr0_ - 0x2c)) * 2) & 2) == 0) {
              iVar2 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) + -1;
              *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + 8)) = iVar2;
              if (iVar2 < 1) {
                (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c115ed8(ar4,*(undefined4 *)(unsigned)(iVar3 + 8),ar6,ar7));
              }
              *(undefined4 *)(unsigned)(iVar3 + 8) = 0;
            }
            else {
              *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = iVar3;
              (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + 1));
            }
          }
          iVar3 = *(int *)(unsigned)(iVar3 + 0x18);
          (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1;
        } while ((*(uint *)(fr0_ - 0x34)) < *(ushort *)(unsigned)(ar4 + 0x14));
      }
    }
    a7 = (&(*(undefined1 *)(unsigned)0x8c11a5f6));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0140b4(*ar5,ar5_00,4,(&(*(undefined1 *)(unsigned)0x8c11a5f6))));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11a588(ar4,*ar5,ar5_00,a7));
    *(short *)(unsigned)((int)0x1da + (int)ar4) = (short)uVar1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11a634\n.set _FUN_8c11a634, _FUN_8c11a634_def\n");
//@unit 8c11a88c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11a88c_def(int *ar4,short *ar5,short *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11a88c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
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
  
  uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a634(ar4,((int * *)(fr0_ - 0x38)),ar6,ar7));
  if (uVar4 == 0) {
    iVar6 = (int)0x80;
    *(undefined4 *)(unsigned)(iVar6 + (int)ar4) = 0;
  }
  else {
    (*(int *)(fr0_ - 0x30)) = -1;
    uVar10 = 0;
    (*(int *)(fr0_ - 0x34)) = 0;
    (*(int *)(fr0_ - 0x28)) = 0;
    (*(int *)(fr0_ - 0x2c)) = 0;
    sVar2 = *(short *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + 2);
    a7 = (int *)(unsigned)(int)sVar2;
    iVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 + 1;
        ar6 = (short *)(unsigned)(*(int *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + iVar7) + 2);
        *ar6 = *ar6 - sVar2;
        iVar7 = iVar7 + 4;
      } while (uVar10 < uVar4);
    }
    if ((((undefined *)(unsigned long)*(unsigned *)(unsigned)((int)0x130 + (int)ar4)) == ((void *)(unsigned)0x8c11617a)) &&
       ((*(char *)(unsigned)((int)0xf8 + (int)ar4) == '\0' || (((uint)ar5 & 0xff) != 0)))) {
      uVar10 = 1;
      ar6 = ar5;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a0e8(ar4,*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar5,a7));
      iVar6 = iVar7;
      if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(uint *)(unsigned)((int)0x138 + (int)ar4))) {
        do {
          uVar8 = 1;
          iVar6 = *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38));
          sVar2 = *(short *)(unsigned)(iVar6 + 2);
          if (1 < uVar4) {
            sVar3 = *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[1] + 2);
            while (sVar3 < sVar2) {
              iVar9 = uVar8 - 1;
              piVar1 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + uVar8;
              uVar8 = uVar8 + 1;
              ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[iVar9] = *piVar1;
              if (uVar4 <= uVar8) break;
              sVar3 = *(short *)(unsigned)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[uVar8] + 2);
            }
          }
          ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38))[uVar8 - 1] = iVar6;
          ar6 = ar5;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c11a0e8(ar4,*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar5,a7));
          *(int *)(unsigned)(iVar5 + 0x10) = iVar6;
          uVar10 = uVar10 + 1;
        } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(uint *)(unsigned)((int)0x138 + (int)ar4)));
      }
      if (iVar6 != 0) {
        *(undefined4 *)(unsigned)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = *(uint *)(unsigned)((int)0x138 + (int)ar4);
      if (uVar4 <= *(uint *)(unsigned)((int)0x138 + (int)ar4)) {
        uVar10 = uVar4;
      }
      iVar6 = uVar10 << 2;
      iVar7 = 0;
      while (uVar10 != 0) {
        iVar6 = iVar6 + -4;
        uVar10 = uVar10 - 1;
        a7 = &(*(int *)(fr0_ - 0x30));
        ar6 = ar5;
        iVar5 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c119c68(ar4,*(undefined4 *)(unsigned)((int)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)) + iVar6),ar5,a7));
        if (iVar5 != 0) {
          *(int *)(unsigned)(iVar5 + 0x10) = iVar7;
          iVar7 = iVar5;
        }
      }
    }
    *(int *)(unsigned)((int)0x80 + (int)ar4) = iVar7;
    (*(int *)(fr0_ - 0x24)) = *ar4;
    iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x24)) + 0x18))))((*(int *)(fr0_ - 0x24)),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x38)),ar6,a7));
    if ((iVar7 != 0) && (((uint)ar5 & 0xff) == 0)) {
      iVar11 = (*(int *)(fr0_ - 0x28)) + (*(int *)(fr0_ - 0x2c));
      iVar9 = *(int *)(unsigned)((int)0x1d0 + (int)ar4);
      iVar12 = ((*(int *)(fr0_ - 0x30)) + *(int *)(unsigned)((int)0x12c + (int)ar4)) - (*(int *)(fr0_ - 0x34));
      iVar13 = *(int *)(unsigned)(*(int *)(unsigned)((int)0x12c + (int)ar4) * 4 + iVar9);
      iVar5 = *(int *)(unsigned)((*(int *)(fr0_ - 0x34)) * 4 + iVar9);
      iVar6 = (*(int *)(fr0_ - 0x30)) * 4;
      iVar9 = *(int *)(unsigned)(iVar6 + iVar9);
      for (; iVar7 != 0; iVar7 = *(int *)(unsigned)(iVar7 + 0x10)) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c119a18))))
                          ((uint)*(ushort *)(unsigned)(iVar7 + 0x14) - iVar12,*(int *)(unsigned)(iVar7 + 8) - iVar11,
                           *(int *)(unsigned)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9),a7));
        *(int *)(unsigned)(iVar7 + 4) = iVar6;
      }
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c11a88c\n.set _FUN_8c11a88c, _FUN_8c11a88c_def\n");
//@unit 8c11aaa8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11aaa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11aaa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(unsigned)(0x19c + ar4);
  if (iVar5 != 0) {
    puVar3 = ((ushort *)(unsigned long)*(unsigned *)(unsigned)(iVar5 + 0xc));
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
      iVar2 = (int)puVar3 - *(int *)(unsigned)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(uint *)(unsigned)(ar4 + 0x38)) ||
         (*(int *)(unsigned)(0x1b4 + ar4) + *(uint *)(unsigned)(ar4 + 0x38) <= uVar4)) {
        *(undefined2 *)(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(unsigned)(ar4 + 0x34) = *(short *)(unsigned)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(int *)(unsigned)(puVar3 + 1);
      if (((*(ushort *)(unsigned)(iVar2 * 2 + *(int *)(unsigned)(0xc0 + ar4)) & 2) == 0) ||
         (iVar2 != *(int *)(unsigned)(0x150 + ar4))) {
        *(undefined2 *)(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(short *)(unsigned)(ar4 + 0x34) = *(short *)(unsigned)(ar4 + 0x34) + 1;
      }
      *(int *)(unsigned)(0x150 + ar4) = iVar2;
    }
    if (*(uint *)(unsigned)(0x14c + ar4) < (uint)*(ushort *)(unsigned)(ar4 + 0x34)) {
      if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
        iVar5 = *(int *)(unsigned)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(int *)(unsigned)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(int *)(unsigned)(iVar5 + 0x10) - *(int *)(unsigned)(ar4 + 0x48);
            iVar5 = *(int *)(unsigned)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(int *)(unsigned)(ar4 + 0x40) + *(int *)(unsigned)(0x1b4 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(int *)(unsigned)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(undefined2 *)(unsigned)(ar4 + 0x34) = 0;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11abc6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11abc6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(unsigned)(0x80 + ar4) == 0) {
    ar5 = 0;
    uVar1 = 10;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(unsigned)(0x80 + ar4);
    uVar1 = 9;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,uVar1,uVar2,ar5));
  return uVar1;
}

__asm__(".globl _FUN_8c11abc6\n.set _FUN_8c11abc6, _FUN_8c11abc6_def\n");
//@unit 8c11abf0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11abf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11abf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112f40(ar4,ar5,ar6,ar7));
  if ((uVar1 & 0xff) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11a88c(ar4,0,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11abc6(ar4,0,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11abf0\n.set _FUN_8c11abf0, _FUN_8c11abf0_def\n");
//@unit 8c11ac4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ac4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ac4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112f40(ar4,ar5,ar6,ar7));
  if ((uVar1 & 0xff) == 0) {
    *(undefined4 *)(unsigned)(0x13c + -4 + ar4) = *(undefined4 *)(unsigned)(0x13c + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11a88c(ar4,1,ar6,ar7));
    if (*(int *)(unsigned)(0x80 + ar4) == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11abc6(ar4,0,ar6,ar7));
      return uVar3;
    }
    *(undefined4 *)(unsigned)(0x140 + -8 + ar4) = *(undefined4 *)(unsigned)(0x140 + ar4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113e98(ar4,*(undefined4 *)(unsigned)(0x80 + ar4),ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)0x1a4;
      *(unsigned *)(unsigned)(iVar2 + ar4) = (&(*(undefined1 *)(unsigned)0x8c11acde));
      *(undefined1 *)(unsigned)(iVar2 + 0x34 + ar4) = 1;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xd,0,vr7));
      return uVar3;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ac4c\n.set _FUN_8c11ac4c, _FUN_8c11ac4c_def\n");
//@unit 8c11ace2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ace2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ace2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 a5;
  int unaff_r14 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11a88c(ar4,0,ar6,ar7));
  *(unsigned *)(unsigned)(0x1a4 + unaff_r14) = ((void *)(unsigned)0x8c11ac4c);
  a5 = *(undefined4 *)(unsigned)(0x100 + unaff_r14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11abc6(unaff_r14,a5,ar6,ar7));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113c46(unaff_r14,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113bcc(unaff_r14,a5,ar6,ar7));
  *(undefined1 *)(unsigned)(unaff_r14 + 0x7c) = 0;
  *(undefined1 *)(unsigned)(0x1d8 + unaff_r14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c11ace2\n.set _FUN_8c11ace2, _FUN_8c11ace2_def\n");
//@unit 8c11ad68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ad68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ad68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112f40(ar4,ar5,ar6,ar7));
  if ((uVar1 & 0xff) == 0) {
    uVar3 = 0;
    *(undefined4 *)(unsigned)(0x13c + -4 + ar4) = *(undefined4 *)(unsigned)(0x13c + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11a88c(ar4,0,ar6,ar7));
    *(undefined4 *)(unsigned)(0x140 + -8 + ar4) = *(undefined4 *)(unsigned)(0x140 + ar4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c114774(ar4,uVar3,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      iVar2 = (int)0x1a4;
      *(unsigned *)(unsigned)(iVar2 + ar4) = ((void *)(unsigned)0x8c11adde);
      *(undefined1 *)(unsigned)(iVar2 + 0x34 + ar4) = 0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xe,*(undefined4 *)(unsigned)(0x80 + ar4),0));
      return uVar3;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ad68\n.set _FUN_8c11ad68, _FUN_8c11ad68_def\n");
//@unit 8c11adde
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11adde_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11adde";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(unsigned *)(fr0_ - 0x10) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(ar6));
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1148c4(ar4,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c113bcc(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c113ac8(ar4,ar5,ar6,ar7));
    *(unsigned *)(unsigned)(0x1a4 + ar4) = ((void *)(unsigned)0x8c11ad68);
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c11a634(ar4,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x10)) = (*(undefined4 *)(fr0_ - 0x14));
    *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)) = uVar1;
  }
  *(undefined1 *)(unsigned)(0x1d8 + ar4) = 1;
  return 0;
}

__asm__(".globl _FUN_8c11adde\n.set _FUN_8c11adde, _FUN_8c11adde_def\n");
//@unit 8c11ae6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11ae6c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ae6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *ar4_00;
  undefined4 *ar4_01;
  int iVar1;
  int iVar2;
  
  ar4_00 = (undefined4 *)(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))
                     (*ar4,(*(int *)(unsigned)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7))
  ;
  ar4_01 = (undefined4 *)(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x10))))
                     (*ar4,(*(int *)(unsigned)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7))
  ;
  iVar1 = (int)0x1d4;
  if (*(int *)(unsigned)(iVar1 + (int)ar4) == 0) {
    *ar4_00 = 0;
    *ar4_01 = 0;
  }
  else {
    iVar2 = (*(int *)(unsigned)(iVar1 + (int)ar4) + 1) * 4;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,*(undefined4 *)(unsigned)(iVar1 + -8 + (int)ar4),iVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0x1cc + (int)ar4),iVar2,ar7));
    iVar1 = (*(int *)(unsigned)((int)0x1d4 + (int)ar4) + 1) * 4;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_01,*(undefined4 *)(unsigned)(0x1d4 + -4 + (int)ar4),iVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,*(undefined4 *)(unsigned)((int)0x1d0 + (int)ar4),iVar1,ar7));
  }
  iVar1 = (int)0x1cc;
  iVar2 = (int)0x96;
  *(unsigned *)(unsigned)(iVar1 + (int)ar4) = ar4_00;
  *(unsigned *)(unsigned)(iVar1 + 4 + (int)ar4) = ar4_01;
  iVar1 = iVar1 + 8;
  *(int *)(unsigned)(iVar1 + (int)ar4) = *(int *)(unsigned)(iVar1 + (int)ar4) + iVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c11ae6c\n.set _FUN_8c11ae6c, _FUN_8c11ae6c_def\n");
//@unit 8c11af3a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11af3a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11af3a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  puVar1 = ((void *)(unsigned)0x8c111fbe);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
                    (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6,ar7));
  while (iVar2 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6,ar7))
    ;
  }
  return 0;
}

__asm__(".globl _FUN_8c11af3a\n.set _FUN_8c11af3a, _FUN_8c11af3a_def\n");
//@unit 8c11af7e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11af7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11af7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
                    (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6,ar7));
  if (iVar1 != 0) {
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18)) == ((void *)(unsigned)0x8c11af3a)) {
      return 0;
    }
    iVar2 = (int)0x12c;
    *(int *)(unsigned)(iVar2 + ar4) = *(int *)(unsigned)(iVar2 + ar4) + 1;
    iVar4 = iVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 8 + ar4))))(ar4,iVar1,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,0x77,ar6,ar7));
      ar7 = 0;
      ar6 = 0;
      *(unsigned *)(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c11af3a);
      iVar4 = 0xb;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xb,0,0));
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    if (*(char *)(unsigned)(0x1d8 + ar4) != '\0') {
      if (*(uint *)(unsigned)(0x1d4 + ar4) <= *(uint *)(unsigned)(0x12c + ar4)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ae6c(ar4,iVar4,ar6,ar7));
      }
      *(int *)(unsigned)((*(int *)(unsigned)(0x12c + ar4) + 1) * 4 + *(int *)(unsigned)(0x1cc + ar4)) =
           (int)*(short *)(unsigned)((uint)*(ushort *)(unsigned)(0xde + ar4) * 2 + iVar1) +
           *(int *)(unsigned)(*(int *)(unsigned)(0x12c + ar4) * 4 + *(int *)(unsigned)(0x1cc + ar4));
      iVar4 = *(int *)(unsigned)(0x1d0 + ar4);
      *(int *)(unsigned)((*(int *)(unsigned)(0x12c + ar4) + 1) * 4 + iVar4) =
           (int)*(short *)(unsigned)(iVar1 + (uint)*(ushort *)(unsigned)(0xe0 + ar4) * 2) +
           *(int *)(unsigned)(*(int *)(unsigned)(0x12c + ar4) * 4 + iVar4);
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,ar6,ar7));
    iVar4 = iVar1 + (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + ar4))))(ar4,iVar1,iVar4,ar7));
    if ((uVar3 & 0xffff) == 0) {
      return 1;
    }
    if ((*(int *)(unsigned)(0x128 + ar4) != 0) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11aaa8(ar4,iVar1,iVar4,ar7)), (uVar3 & 0xff) != 0)) {
      *(unsigned *)(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c11af3a);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,8,0,0));
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
  }
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar1 + 0x40)) == *(int *)(unsigned)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c11af7e\n.set _FUN_8c11af7e, _FUN_8c11af7e_def\n");
//@unit 8c11b13e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11b13e_def(int *ar4,uint ar5,uint *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c11b13e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  uVar11 = ar5 & 0xff;
  if (uVar11 == 4) {
    iVar2 = (int)0x1a4;
    ar4[6] = (int)((void *)(unsigned)0x8c11af3a);
    uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + (int)ar4))))(ar4,ar6,ar7,ar7));
  }
  else {
    if ((uVar11 == 0x21) || (uVar11 == 3)) {
      if ((uVar11 == 3) &&
         (uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(ar4,ar5,ar6,ar7)), (uVar11 & 0xff) != 0)) {
        return 0;
      }
      uVar8 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(ar4[0xb],0,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(ar4[0xb],uVar8,ar6,ar7));
      iVar12 = (uint)*(ushort *)(unsigned)(ar4[10] + 0xc) + iVar2;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar12,0,(uint)(*(ushort *)(unsigned)(ar4[10] + 0xc) >> 1),ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar12,1,(uint)*(ushort *)(unsigned)((int)0xe4 + (int)ar4),ar7));
      uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)0x1a8 + (int)ar4))))(ar4,iVar2,iVar12,ar7));
      if ((uVar11 & 0xffff) == 0) {
        return 0;
      }
      ar4[6] = (int)((void *)(unsigned)0x8c11af7e);
      return 1;
    }
    if (uVar11 == 5) {
      ar4[6] = (int)((void *)(unsigned)0x8c11af3a);
      return 1;
    }
    if (uVar11 != 0x22) {
      if (uVar11 == 0x23) {
        puVar9 = ar6;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115cec(ar4,ar5,ar6,ar7));
        uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c114e80(ar4,ar6,puVar9,ar7));
      }
      else if (uVar11 == 0x1c) {
        (vsp = ((unsigned long)(fr0_ - 0)), memset(*(undefined4 *)(unsigned)((int)0x94 + (int)ar4),0,ar4[0xf],ar7))
        ;
        piVar7 = (int *)(unsigned)0x0;
        ar6_00 = 7;
        uVar8 = 0x80;
        if (ar7 != (int *)(unsigned)0x0) {
          do {
            uVar10 = *ar6;
            ar6 = ar6 + 1;
            piVar7 = (int *)(unsigned)((int)piVar7 + 1);
            uVar11 = -(uVar10 & 7);
            if ((int)uVar11 < 0) {
              bVar3 = (byte)(0x80 >> (~uVar11 & 0x1f) + 1);
            }
            else {
              bVar3 = (byte)(0x80 << (uVar11 & 0x1f));
            }
            uVar10 = uVar10 >> 3;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + uVar10) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)0x94 + (int)ar4) + uVar10) | bVar3;
          } while (piVar7 < ar7);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113ac8(ar4,0x80,7,ar6));
        uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(ar4,uVar8,ar6_00,ar6));
      }
      else {
        if (uVar11 == 0x1d) {
          *ar6 = *(uint *)(unsigned)((int)0x94 + (int)ar4);
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
          if (*(uint *)(unsigned)((int)0x158 + (int)ar4) != uVar11) {
            iVar2 = (int)0x154;
            *(undefined1 *)(unsigned)(iVar2 + (int)ar4) = 1;
            *(uint *)(unsigned)(iVar2 + 4 + (int)ar4) = uVar11;
          }
          *(uint *)(unsigned)((int)0x14c + (int)ar4) = uVar5;
          uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112a20(ar4,uVar10,ar6,ar7));
          if ((uVar11 & 0xff) == 0) {
            if ((int)*(short *)(unsigned)((int)0x1be + (int)ar4) != ar5_00) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112b1c(ar4,ar5_00,ar6,ar7));
            }
            if (uVar4 == 0) {
              *(undefined4 *)(unsigned)((int)0x128 + (int)ar4) = 0;
            }
            else {
              *(undefined4 *)(unsigned)((int)0x128 + (int)ar4) = 1;
            }
            *(short *)(unsigned)((int)0x1e8 + (int)ar4) = (short)uVar6;
            return 1;
          }
          return 0;
        }
        if (uVar11 == 0x1b) {
          iVar2 = (int)0x158;
          *ar6 = *(uint *)(unsigned)(iVar2 + (int)ar4);
          ar6[4] = *(uint *)(unsigned)(iVar2 + -0xc + (int)ar4);
          iVar12 = (int)0x1be;
          ar6[2] = *(uint *)(unsigned)(iVar2 + -0x20 + (int)ar4);
          iVar2 = (int)0x128;
          ar6[5] = (int)*(short *)(unsigned)(iVar12 + (int)ar4);
          iVar12 = (int)0x1e8;
          ar6[3] = (uint)(*(int *)(unsigned)(iVar2 + (int)ar4) != 0);
          ar6[7] = (int)*(short *)(unsigned)(iVar12 + (int)ar4);
          return 1;
        }
        if (uVar11 == 0x15) {
          if (ar7 != (int *)(unsigned)0x1) {
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11584e(ar4,ar6,ar6,ar7));
            return 1;
          }
          uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11584e(ar4,0,ar6,1));
LAB_8c11b488:
          *ar6 = uVar11;
          return 1;
        }
        if (uVar11 == 0x17) {
          puVar9 = ar6;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115cec(ar4,ar5,ar6,ar7));
          uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11596e(ar4,ar6,puVar9,ar7));
        }
        else {
          if (uVar11 == 0x18) {
            if (ar7 != (int *)(unsigned)0x1) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1158e0(ar4,ar6,ar6,ar7));
              return 1;
            }
            uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1158e0(ar4,0,ar6,1));
            goto LAB_8c11b488;
          }
          if (uVar11 != 0x19) {
            if (uVar11 == 0x1e) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*(undefined4 *)(unsigned)(uint)ar4[4],0,ar6,ar7));
              *(unsigned *)(unsigned)((int)0x1a4 + (int)ar4) = ((void *)(unsigned)0x8c11919e);
              return 1;
            }
            if (uVar11 == (int)0xff) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115cec(ar4,ar5,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112c90(ar4,ar5,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112ec6(ar4,ar5,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c113124(ar4,ar5,ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1132cc(ar4,ar5,ar6,ar7));
              if (*(int *)(unsigned)((int)0xfc + (int)ar4) != 0) {
                (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))
                          (*ar4,*(undefined4 *)(unsigned)((int)0xfc + (int)ar4),ar6,ar7));
              }
              (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[3],ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[4],ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4,ar6,ar7));
              return 1;
            }
            return 0;
          }
          uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c115ac8(ar4,ar6,ar6,ar7));
        }
      }
      if ((uVar11 & 0xff) == 0) {
        return 1;
      }
      return 0;
    }
    uVar11 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c114bd8(ar4,ar6,ar6,ar7));
  }
  if ((uVar11 & 0xff) != 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c11b13e\n.set _FUN_8c11b13e, _FUN_8c11b13e_def\n");
//@unit 8c11b5a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int * FUN_8c11b5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b5a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *ar5_00;
  
  iVar6 = *(int *)(unsigned)(ar4 + 0x54);
  uVar4 = 1;
  if (1 < *(ushort *)(unsigned)(ar4 + 0x50)) {
    do {
      uVar4 = uVar4 + 1;
      iVar6 = *(int *)(unsigned)(iVar6 + 0x18);
    } while (uVar4 < *(ushort *)(unsigned)(ar4 + 0x50));
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar6 + 8));
  ar5_00 = piVar5;
  if (*(int *)(unsigned)(0x1b4 + ar4) == 0) {
    sVar1 = *(short *)(unsigned)(0x1b0 + ar4);
    ar5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x114 + ar4));
    if (ar5_00[1] == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112fd8(ar4,ar5_00,ar6,ar7));
      *(undefined4 *)(unsigned)(0x114 + ar4) = uVar2;
    }
    else {
      *(int *)(unsigned)(0x114 + ar4) = ar5_00[1];
    }
    iVar3 = (int)0x12c;
    ar5_00[1] = (int)piVar5;
    *piVar5 = *piVar5 + 1;
    ar5_00[4] = *(int *)(unsigned)(iVar6 + 0xc);
    *ar5_00 = 0;
    iVar6 = (int)0x1ac;
    ar5_00[5] = *(int *)(unsigned)(iVar3 + ar4);
    ar5_00[3] = (int)sVar1 + *(int *)(unsigned)(iVar6 + ar4);
    ar5_00[5] = ar5_00[5] + 1;
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c11b5a0\n.set _FUN_8c11b5a0, _FUN_8c11b5a0_def\n");
//@unit 8c11b666
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11b666_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b666";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11af7e)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11494a))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c11b13e)); unsigned long t3_ = (unsigned long)(
                     (int)0x1ec); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,ar7,ar7); });
  if (iVar1 != 0) {
    iVar2 = (int)0x1a8;
    *(unsigned *)(unsigned)(iVar2 + iVar1) = ((void *)(unsigned)0x8c11346c);
    *(undefined4 *)(unsigned)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11b666\n.set _FUN_8c11b666, _FUN_8c11b666_def\n");
//@unit 8c11b6b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11b6b8_def(int ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b6b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  float in_fr4 = 0;
  
  uVar5 = 1;
  uVar7 = 0x1c;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x1c,ar7));
  if (piVar1 != (int *)(unsigned)0x0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar5,uVar7,ar7));
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 6);
      uVar5 = *ar6;
      uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 1);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112642(*piVar1,uVar6,uVar8,uVar5); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 0xe);
        uVar5 = ar6[2];
        uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 3);
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[1],uVar6,uVar8,uVar5));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
        piVar1[3] = iVar2;
        if (iVar2 != 0) {
          uVar8 = (uint)*(ushort *)(unsigned)((int)ar6 + 0x16);
          uVar5 = ar6[4];
          uVar6 = (uint)*(ushort *)(unsigned)(ar6 + 5);
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[3],uVar6,uVar8,uVar5));
          fVar9 = (float)(ar5 + -1);
          if (ar5 + -1 < 0) {
            fVar9 = fVar9 + 4.2949673e+09;
          }
          fVar9 = fVar9 / in_fr4 + 0.5;
          if (2.1474836e+09 <= fVar9) {
            fVar9 = fVar9 - 4.2949673e+09;
          }
          iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar6,uVar8,uVar5));
          piVar1[4] = iVar2;
          if (iVar2 != 0) {
            uVar7 = 0;
            uVar5 = 1;
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112642(piVar1[4],ar5,1,0));
            iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,ar5,uVar5,uVar7));
            piVar1[5] = iVar2;
            if (iVar2 != 0) {
              uVar5 = 1;
              ar5_00 = (int)fVar9 + 2;
              iVar2 = ar5_00;
              iVar4 = ar4;
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112410(piVar1[5],ar5_00,1,ar4));
              if (iVar3 != 0) {
                iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1123b0(ar4,iVar2,uVar5,iVar4));
                piVar1[6] = iVar2;
                if (iVar2 != 0) {
                  uVar5 = 1;
                  iVar2 = ar4;
                  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112482(piVar1[6],1,ar5_00,ar4));
                  if (iVar4 != 0) {
                    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112350(ar4,uVar5,ar5_00,iVar2));
                    piVar1[2] = iVar4;
                    if ((iVar4 != 0) &&
                       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1124de(piVar1[2],piVar1[1],ar4,iVar2)), iVar2 != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11b884_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b884";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = ((void *)(unsigned)0x8c11237a);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11237a(*ar4,vr5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[1],ar5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[3],ar5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[4],ar5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[5],ar5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1123da(ar4[6],ar5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[2],ar5,vr6,vr7));
                    
                    
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,ar4,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c11b884\n.set _FUN_8c11b884, _FUN_8c11b884_def\n");
//@unit 8c11b88c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11b88c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b88c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *unaff_r13 = 0;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c11237a);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11237a(*unaff_r13,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13[1],unaff_r14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13[3],unaff_r14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13[4],unaff_r14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13[5],unaff_r14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1123da(unaff_r13[6],unaff_r14,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13[2],unaff_r14,ar6,ar7));
                    
                    
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x18))))(vr4,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c11b88c\n.set _FUN_8c11b88c, _FUN_8c11b88c_def\n");
//@unit 8c11b93c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11b93c_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11b93c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  ulonglong in_dr2 = 0;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 in_xd2 = 0;
  char cVar16;
  
  uVar3 = ar4[1];
  piVar10 = (int *)(unsigned)*ar4;
  ain0 = ar4[3];
  ar4_02 = (int *)(unsigned)(uint)ar4[2];
  ar4_00 = ar4[6];
  piVar11 = (int *)(unsigned)(uint)ar4[5];
  ar4_01 = (int *)(unsigned)(uint)ar4[4];
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1129e4(ar4_02,uVar3,ar6,ar7); });
  ar4_01[3] = ar5;
  ar4_01[4] = ar4_01[2] * 4 + ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112658(ar4_01,uVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112680(ar4_01,uVar3,ar6,ar7));
  cVar16 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112958(ar4_02,ain0,ar4_01,ar7));
  if (iVar2 == 0) {
    iVar2 = *(int *)(unsigned)(ar4_00 + 4);
    while (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 0xc) + iVar2 * 4) = iVar2;
    }
    do {
      uVar8 = ar4_02[1];
      pfVar5 = (float *)(unsigned)(*piVar11 * 4 + piVar11[3]);
      pfVar6 = (float *)(unsigned)(*ar4_02 * uVar8 * 4 + ar4_02[3]);
      ar7_00 = (uint *)(unsigned)(*ar4_01 * 4 + ar4_01[3] + (*ar4_01 - uVar8) * -4);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        ar7_00 = ar7_00 + -1;
        if (cVar16 == '\0') {
          in_dr2 = (ulonglong)*ar7_00;
        }
        else {
          in_xd2 = *(undefined8 *)(unsigned)ar7_00;
        }
        pfVar4 = (float *)(unsigned)((uVar8 - 1) * *ar4_02 * 4 + ar4_02[3] + uVar8 * 4 + -4);
        if (cVar16 == '\0') {
          fVar15 = *pfVar4;
          pfVar5 = pfVar5 + -1;
          *pfVar5 = (float)in_dr2;
        }
        else {
          fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar4 >> 0x20);
          pfVar5 = pfVar5 + -2;
          *(undefined8 *)(unsigned)pfVar5 = in_xd2;
        }
        pfVar9 = pfVar5;
        for (pfVar4 = pfVar4 + *ar4_02; fVar12 = (float)in_dr2, pfVar4 < pfVar6;
            pfVar4 = pfVar4 + *ar4_02) {
          pfVar9 = pfVar9 + 1;
          if (cVar16 == '\0') {
            uVar13 = CONCAT44(*pfVar4,*pfVar9);
          }
          else {
            in_xd2 = *(undefined8 *)(unsigned)pfVar9;
            uVar13 = *(undefined8 *)(unsigned)pfVar4;
          }
          cVar16 = '\0';
          fVar14 = F32HI(uVar13) * (float)uVar13;
          fVar12 = *pfVar5 - fVar14;
          in_dr2 = CONCAT44(fVar14,fVar12);
          *pfVar5 = fVar12;
        }
        if (cVar16 == '\0') {
          fVar12 = *pfVar5;
        }
        else {
          in_xd2 = *(undefined8 *)(unsigned)pfVar5;
        }
        cVar16 = '\0';
        *pfVar5 = fVar12 / fVar15;
        in_dr2 = 0;
        if ((0.0 < *pfVar5) && (2 < uVar8)) break;
        cVar16 = '\0';
      }
      if (uVar8 != 0) {
        pfVar5 = (float *)(unsigned)(uVar8 - 1);
        pfVar6 = pfVar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112734(ar4_02,ar4_01,pfVar5,ar7_00));
        if (iVar2 != 0) goto LAB_8c11ba88;
        *piVar11 = *piVar11 + -1;
        cVar16 = '\0';
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1125e8(ar4_00,pfVar5,pfVar6,ar7_00); });
      }
    } while (2 < uVar8);
    cVar16 = '\0';
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c112a02(ar4_01,pfVar5,pfVar6,ar7_00); });
    pfVar5 = (float *)(unsigned)piVar11[3];
    pfVar6 = pfVar5 + *piVar11;
    piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4_00 + 0xc));
    for (; pfVar5 < pfVar6; pfVar5 = pfVar5 + 1) {
      pfVar4 = (float *)(unsigned)ar4_01[3];
      puVar7 = (undefined4 *)(unsigned)(*piVar10 * *piVar1 * 4 + piVar10[3]);
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
            fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar5 >> 0x20);
            puVar7 = puVar7 + 2;
            uVar13 = *(undefined8 *)(unsigned)pfVar4;
          }
          cVar16 = '\0';
          *pfVar4 = fVar15 * (float)uVar13 + F32HI(uVar13);
          pfVar4 = pfVar4 + 1;
        } while (uVar8 < (uint)ar4_01[2]);
      }
      piVar1 = piVar1 + 1;
    }
    iVar2 = piVar10[1];
    uVar3 = 0;
    ar4_02[1] = iVar2;
    *piVar11 = iVar2;
    *(int *)(unsigned)(ar4_00 + 4) = iVar2;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bb54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bb54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
  iVar2 = *(int *)(unsigned)(ar4 + 0x54);
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x38) + iVar2 * 4));
  }
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
  if (puVar1 < puVar1 + iVar2) {
    do {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    } while (puVar1 < (undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + iVar2 * 4));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x28) = 0;
  return 0x28;
}

__asm__(".globl _FUN_8c11bb54\n.set _FUN_8c11bb54, _FUN_8c11bb54_def\n");
//@unit 8c11bb94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bb94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  int ar7_00;
  
  ar5_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
  ar7_00 = *(int *)(unsigned)(ar4 + 0x54);
  if (ar5_00 < ar5_00 + ar7_00 + *(int *)(unsigned)(ar4 + 0x54)) {
    do {
      *ar5_00 = 0x3f800000;
      ar5_00 = ar5_00 + 1;
    } while (ar5_00 < (undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + ar7_00 * 4 + *(int *)(unsigned)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x2a) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb54(ar4,ar5_00,ar7_00 * 4,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c11bb94\n.set _FUN_8c11bb94, _FUN_8c11bb94_def\n");
//@unit 8c11bbd4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bbd4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bbd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int ar6_00;
  int iVar6;
  undefined4 *ar5_00;
  int *piVar7;
  longlong in_dr0 = 0;
  float fVar8;
  float in_fr15 = 0;
  char cVar9;
  
  puVar3 = ar5 + 2;
  uVar5 = *(uint *)(unsigned)(ar4 + 0x54);
  *(short *)(unsigned)(ar4 + 0x28) = (short)*ar5;
  ar6_00 = uVar5 * 4;
  *(short *)(unsigned)(ar4 + 0x2a) = (short)ar5[1];
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x2c),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x34),puVar3 + uVar5,ar6_00,ar7));
  ar5_00 = puVar3 + uVar5 + uVar5;
  cVar9 = '\0';
  puVar3 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x38),ar5_00,ar6_00,ar7));
  uVar2 = 0;
  piVar7 = ar5_00 + uVar5;
  uVar4 = 0;
  iVar6 = 0;
  if (cVar9 == '\0') {
    in_fr15 = 0.5;
  }
  if (uVar5 != 0) {
    do {
      fVar8 = F32HI(in_dr0);
      iVar1 = *(int *)(unsigned)(ar4 + 0x30);
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(uVar2,puVar3,ar6_00,ar7));
      uVar4 = uVar4 + 1;
      in_dr0 = (ulonglong)(uint)(fVar8 * in_fr15) << 0x20;
      *(float *)(unsigned)(iVar1 + iVar6) = fVar8 * in_fr15;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar5);
  }
  *(int *)(unsigned)(ar4 + 0x44) = *piVar7 * 4 + *(int *)(unsigned)(ar4 + 0x3c);
  *(int *)(unsigned)(ar4 + 0x48) = piVar7[1] * 4 + *(int *)(unsigned)(ar4 + 0x3c);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x3c),piVar7 + 2,uVar5 * (*(ushort *)(unsigned)(ar4 + 0x4c) + 1) * 4,
                  ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bbd4\n.set _FUN_8c11bbd4, _FUN_8c11bbd4_def\n");
//@unit 8c11bbec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bbec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bbec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int a5;
  int a6;
  uint uVar6;
  int iVar7;
  int unaff_r13 = 0;
  int a5_00;
  int *piVar8;
  int unaff_r14 = 0;
  undefined1 *puVar9;
  double in_dr0 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  undefined4 in_PR = 0;
  byte in_FPSCR_CAUSE = 0;
  byte bVar10;
  byte in_FPSCR_DN = 0;
  byte bVar11;
  byte in_FPSCR_PR = 0;
  byte bVar12;
  byte in_FPSCR_SZ = 0;
  byte bVar13;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  if (in_FPSCR_SZ == 0) {
    puVar9 = ((undefined1 *)(fr0_ - 0x8));
  }
  else {
    puVar9 = ((undefined1 *)(fr0_ - 0xc));
  }
  *(undefined4 *)(unsigned)(puVar9 + -4) = in_PR;
  uVar6 = *(uint *)(unsigned)(in_r0 + unaff_r14);
  *(short *)(unsigned)(unaff_r14 + 0x28) = (short)*ar4;
  iVar7 = uVar6 * 4;
  *(short *)(unsigned)(unaff_r14 + 0x2a) = (short)ar4[1];
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),ar5,iVar7,ar7));
  uVar3 = ((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
          (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x34),unaff_r13 + iVar7,iVar7,ar7));
  a5_00 = unaff_r13 + iVar7 + iVar7;
  uVar3 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar13 << 0x14)
          & 0xffe7ffff;
  bVar10 = 0;
  bVar11 = 0;
  bVar12 = (byte)((uVar3 & 0x80000) >> 0x13);
  bVar13 = (byte)((uVar3 & 0x100000) >> 0x14);
  a5 = a5_00;
  a6 = iVar7;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x38),a5_00,iVar7,ar7));
  puVar2 = ((void *)(unsigned)0x8c11fb98);
  uVar5 = 0;
  piVar8 = (int *)(unsigned)(a5_00 + iVar7);
  uVar3 = 0;
  iVar7 = 0;
  if (bVar13 == 0) {
    in_fr15 = (float)(*(undefined1 *)(unsigned)0x8c11bdfc);
  }
  if (uVar6 != 0) {
    do {
      *(int *)(unsigned)(puVar9 + -8) = *(int *)(unsigned)(unaff_r14 + 0x30) + iVar7;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar2)))(uVar5,a5,a6,ar7));
      uVar3 = uVar3 + 1;
      uVar4 = ((uint)bVar10 << 0xc | (uint)bVar11 << 0x12 | (uint)bVar12 << 0x13 |
              (uint)bVar13 << 0x14) & 0xffe7ffff;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = (byte)((uVar4 & 0x80000) >> 0x13);
      bVar13 = (byte)((uVar4 & 0x100000) >> 0x14);
      if (bVar12 == 0) {
        in_dr0 = CONCAT44D(F32HI(in_dr0) * in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 * CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar13 == 0) {
        *(int *)(unsigned)*(unsigned *)(unsigned)(puVar9 + -8) = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *((double *)(unsigned long)*(unsigned *)(unsigned)(puVar9 + -8)) = in_dr0;
      }
      iVar7 = iVar7 + 4;
    } while (uVar3 < uVar6);
  }
  *(int *)(unsigned)(unaff_r14 + 0x44) = *piVar8 * 4 + *(int *)(unsigned)(unaff_r14 + 0x3c);
  *(int *)(unsigned)(unaff_r14 + 0x48) = piVar8[1] * 4 + *(int *)(unsigned)(unaff_r14 + 0x3c);
  uVar5 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x3c),piVar8 + 2,
                            uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 1) * 4,ar7));
  return uVar5;
}

__asm__(".globl _FUN_8c11bbec\n.set _FUN_8c11bbec, _FUN_8c11bbec_def\n");
//@unit 8c11bcb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bcb8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bcb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  puVar5 = ar5 + 2;
  iVar3 = *(int *)(unsigned)(ar4 + 0x54);
  iVar4 = iVar3 * 4;
  *ar5 = (uint)*(ushort *)(unsigned)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(unsigned)(ar4 + 0x2a);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5,*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,vr7));
  puVar5 = puVar5 + iVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5,*(undefined4 *)(unsigned)(ar4 + 0x34),iVar4,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5 + iVar3,*(undefined4 *)(unsigned)(ar4 + 0x38),iVar4,vr7));
  iVar4 = *(int *)(unsigned)(ar4 + 0x44) - *(int *)(unsigned)(ar4 + 0x3c);
  puVar5 = puVar5 + iVar3 + iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  *puVar5 = iVar4 >> 2;
  iVar4 = *(int *)(unsigned)(ar4 + 0x48) - *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  puVar5[1] = iVar4 >> 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5 + 2,*(undefined4 *)(unsigned)(ar4 + 0x3c),
                            iVar3 * (*(ushort *)(unsigned)(ar4 + 0x4c) + 1) * 4,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bcb8\n.set _FUN_8c11bcb8, _FUN_8c11bcb8_def\n");
//@unit 8c11bccc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bccc_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int unaff_r13 = 0;
  int a4;
  int *piVar5;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar4 = *(int *)(unsigned)(in_r0 + unaff_r14);
  ar6_00 = iVar4 * 4;
  *ar4 = (uint)*(ushort *)(unsigned)(unaff_r14 + 0x28);
  ar4[1] = (uint)*(ushort *)(unsigned)(unaff_r14 + 0x2a);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13,*(undefined4 *)(unsigned)(unaff_r14 + 0x2c),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r13 + ar6_00,*(undefined4 *)(unsigned)(unaff_r14 + 0x34),ar6_00,ar7));
  a4 = unaff_r13 + ar6_00 + ar6_00;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(a4,*(undefined4 *)(unsigned)(unaff_r14 + 0x38),ar6_00,ar7));
  iVar3 = *(int *)(unsigned)(unaff_r14 + 0x44) - *(int *)(unsigned)(unaff_r14 + 0x3c);
  piVar5 = (int *)(unsigned)(a4 + ar6_00);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  *piVar5 = iVar3 >> 2;
  iVar3 = *(int *)(unsigned)(unaff_r14 + 0x48) - *(int *)(unsigned)(unaff_r14 + 0x3c);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 3;
  }
  piVar5[1] = iVar3 >> 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(piVar5 + 2,*(undefined4 *)(unsigned)(unaff_r14 + 0x3c),
                            iVar4 * (*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 1) * 4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bccc\n.set _FUN_8c11bccc, _FUN_8c11bccc_def\n");
//@unit 8c11bd6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11bd6c_def(int ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c11bd6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
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
  undefined8 in_dr0 = 0;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong in_dr4 = 0;
  longlong lVar19;
  float fVar20;
  float in_fr15 = 0;
  float fVar21;
  char cVar22;
  
  cVar22 = '\0';
  iVar5 = *(int *)(unsigned)(ar4 + 0x54);
  ar4_00 = *(int *)(unsigned)(ar4 + 0x44);
  pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x40));
  pfVar4 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3c));
  uVar1 = *(ushort *)(unsigned)(ar4 + 0x4c);
  (*(ushort *)(fr0_ - 0x48)) = *(ushort *)(unsigned)(ar4 + 0x2a);
  uVar11 = *(ushort *)(unsigned)(ar4 + 0x28);
  fVar21 = *(float *)(unsigned)(ar4 + 0x5c);
  lVar19 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x60) << 0x20;
  pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
  pfVar14 = (float *)(unsigned)(iVar5 * 4);
  a4 = ar4_00;
  pfVar9 = ar6;
  pfVar10 = pfVar14;
  pfVar8 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), memmove(ar4_00,ar6,pfVar14,ar7));
  fVar17 = F32HI(lVar19);
  fVar20 = (float)in_dr4;
  pfVar13 = (float *)(unsigned)(ar4_00 + (int)pfVar14);
  if ((float *)(unsigned)(ar4_00 + (int)pfVar14) == pfVar6) {
    pfVar13 = pfVar4;
  }
  if (cVar22 == '\0') {
    in_fr15 = 0.5;
  }
  if ((char)ar5 == '\0') {
    if ((*(ushort *)(fr0_ - 0x48)) == 0) {
      pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar7 = ar6;
      for (pfVar4 = pfVar12; pfVar4 < (float *)(unsigned)((int)pfVar14 + (int)pfVar12); pfVar4 = pfVar4 + 1) {
        if (cVar22 == '\0') {
          *pfVar4 = *pfVar7;
          in_dr4 = in_dr4 & 0xffffffff;
        }
        else {
          *(ulonglong *)(unsigned)pfVar4 = *(ulonglong *)(unsigned)pfVar7;
          in_dr4 = *(ulonglong *)(unsigned)pfVar7;
        }
        (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(a4,pfVar9,pfVar10,pfVar8));
        fVar17 = F32HI(lVar19);
        fVar20 = (float)in_dr4;
        cVar22 = '\0';
        fVar16 = F32HI(in_dr0) * in_fr15;
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
      if ((float)(*(ushort *)(fr0_ - 0x48)) < fVar17) {
        (*(ushort *)(fr0_ - 0x48)) = (*(ushort *)(fr0_ - 0x48)) + 1;
        fVar17 = (float)(*(ushort *)(fr0_ - 0x48));
      }
      lVar19 = (ulonglong)(uint)(1.0 / fVar17) << 0x20;
      pfVar6 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar7 = pfVar13;
      for (pfVar4 = pfVar12; cVar22 = '\0', pfVar4 < (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
          pfVar4 = pfVar4 + 1) {
        fVar20 = *pfVar4;
        fVar17 = *pfVar7 - fVar20;
        if (fVar20 < fVar17) {
          fVar17 = *pfVar4;
        }
        uVar15 = (undefined4)in_dr0;
        *pfVar4 = fVar17 * F32HI(lVar19) + *pfVar4;
        (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(a4_00,pfVar9,pfVar10,pfVar8));
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
  if ((*(ushort *)(fr0_ - 0x48)) != 0) {
    fVar17 = F32HI(lVar19);
    if (cVar22 == '\0') {
      lVar19 = (ulonglong)(uint)fVar17 << 0x20;
    }
    pfVar8 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    pfVar4 = (float *)(unsigned)((int)pfVar14 + (int)pfVar8);
    uVar3 = (ulonglong)lVar19 >> 0x20;
    fVar20 = *(float *)(unsigned)(ar4 + 0x68);
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    pfVar9 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    for (; pfVar8 < pfVar4; pfVar8 = pfVar8 + 1) {
      fVar16 = *pfVar10;
      in_dr0 = CONCAT44(fVar16,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      fVar18 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      *pfVar8 = fVar21 * (fVar16 * fVar18 + fVar17);
    }
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    pfVar9 = (float *)(unsigned)((int)pfVar14 + (int)pfVar10);
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
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    pfVar9 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    pfVar10 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38));
    for (; cVar22 = '\0', pfVar12 < pfVar9; pfVar12 = pfVar12 + 1) {
      fVar17 = *pfVar10;
      in_dr0 = CONCAT44(fVar17,(int)in_dr0);
      pfVar10 = pfVar10 + 1;
      *pfVar12 = fVar17 * ((float)uVar3 - fVar21) + *pfVar12;
    }
  }
  if ((*(ushort *)(fr0_ - 0x48)) == 0) {
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    pfVar14 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    for (; pfVar12 < pfVar14; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        *pfVar12 = F32HI(lVar19);
      }
      else {
        *(longlong *)(unsigned)pfVar12 = lVar19;
      }
    }
  }
  else {
    pfVar12 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    if (cVar22 == '\0') {
      fVar17 = *(float *)(unsigned)(ar4 + 0x6c);
    }
    else {
      fVar17 = (float)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x6c) >> 0x20);
    }
    pfVar10 = (float *)(unsigned)((int)pfVar14 + (int)pfVar12);
    pfVar14 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x50));
    for (; pfVar12 < pfVar10; pfVar12 = pfVar12 + 1) {
      if (cVar22 == '\0') {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*pfVar12);
      }
      fVar20 = F32HI(lVar19);
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
  uVar2 = *(ushort *)(unsigned)(ar4 + 0x58);
  for (pfVar9 = ar7; pfVar9 < ar7 + uVar2; pfVar9 = pfVar9 + 1) {
    (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
    fVar17 = F32HI(in_dr0) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  for (; pfVar9 < ar7 + iVar5; pfVar9 = pfVar9 + 1) {
    (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
    fVar17 = F32HI(in_dr0) * in_fr15;
    in_dr0 = CONCAT44(fVar17,(int)in_dr0);
    *pfVar9 = fVar17;
  }
  cVar22 = '\0';
  (vsp = ((unsigned long)(fr0_ - 76)), thunk_FUN_8c013dfc(pfVar12,pfVar14,pfVar10,pfVar8));
  if (cVar22 == '\0') {
    *(int *)(unsigned)(*(unsigned *)(fr0_ + 0x00000000) = (unsigned)(unsigned long)((int)((ulonglong)in_dr0 >> 0x20)));
  }
  else {
    *((undefined8 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) = in_dr0;
  }
  *(ushort *)(unsigned)(ar4 + 0x4c) = uVar1;
  *(ushort *)(unsigned)(ar4 + 0x2a) = (*(ushort *)(fr0_ - 0x48));
  *(ushort *)(unsigned)(ar4 + 0x28) = uVar11;
  *(unsigned *)(unsigned)(ar4 + 0x44) = pfVar13;
  return 0x44;
}

__asm__(".globl _FUN_8c11bd6c\n.set _FUN_8c11bd6c, _FUN_8c11bd6c_def\n");
//@unit 8c11c0e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c0e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c0e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 a7;
  int *piVar5;
  undefined4 uVar6;
  
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7)), (uVar2 & 0xff) != 0
     )) {
    pcVar3 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
                               (*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8),
                                *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc),ar6,ar7));
    uVar6 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar6,ar6,ar7));
    puVar1 = ((void *)(unsigned)0x8c111dfe);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar6,ar6,ar7));
    a7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 4),uVar6,ar6,ar7));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 8),uVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bd6c(ar4,(int)*pcVar3,uVar4,a7));
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(uVar6,*(undefined4 *)(unsigned)(ar4 + 0x30),*(int *)(unsigned)(ar4 + 0x54) << 2,a7));
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)(piVar5[1] * 4 + *(int *)(unsigned)(*piVar5 + 0x40)) == *(int *)(unsigned)(*piVar5 + 0x3c)) ||
     (*(int *)(unsigned)(*(int *)(unsigned)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(unsigned)(piVar5[2] + 0x3c))) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c1d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c1d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xf],vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c11c1d8\n.set _FUN_8c11c1d8, _FUN_8c11c1d8_def\n");
//@unit 8c11c210
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c210_def(undefined4 ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c11c210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int unaff_r14 = 0;
  char in_T = 0;
  
  if (in_T == '\x01') {
    if (ar6 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bcb8(unaff_r14,*ar7 + ar6,ar6,ar7));
    }
    *ar7 = *ar7 + ((*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 4) * *(int *)(unsigned)(unaff_r14 + 0x54) + 4) * 4;
  }
  else if (in_r0 == 2) {
    if (ar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb94(unaff_r14,ar5,0,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bbd4(unaff_r14,*ar7 + ar6,ar6,ar7));
      *ar7 = *ar7 + ((*(ushort *)(unsigned)(unaff_r14 + 0x4c) + 4) * *(int *)(unsigned)(unaff_r14 + 0x54) + 4) * 4;
    }
  }
  else {
    if (in_r0 != 0xff) {
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c1d8(unaff_r14,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r14,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c11c210\n.set _FUN_8c11c210, _FUN_8c11c210_def\n");
//@unit 8c11c2b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r14 = 0;
  undefined4 extraout_fr1 = 0;
  undefined4 extraout_fr1_00 = 0;
  undefined4 extraout_fr1_01 = 0;
  undefined4 extraout_fr1_02 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float extraout_fr0_01 = 0;
  int extraout_fr0_02 = 0;
  int extraout_fr0_03 = 0;
  int extraout_fr0_04 = 0;
  int extraout_fr0_05 = 0;
  int a5;
  char cVar7;
  
  iVar5 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,8,ar6,ar7));
  uVar6 = (int)extraout_fr0 & 0xffff;
  unaff_r14[0x15] = uVar6;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = 4;
  uVar1 = (undefined2)(uVar6 << 2);
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(unaff_r14[4] + 4) + 0xc) = uVar1;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)(unaff_r14[4] + 8) + 0xc) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,6,ar6,ar7));
  *(short *)(unsigned)(unaff_r14 + 0x16) = (short)(int)extraout_fr0_00 + -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  cVar7 = '\0';
  *(short *)(unsigned)(unaff_r14 + 0x13) = (short)(int)extraout_fr0_01;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x1b] = extraout_fr0_02;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x1b) = CONCAT44(extraout_fr0_02,extraout_fr1);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,3,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x1a] = extraout_fr0_03;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x1a) = CONCAT44(extraout_fr0_03,extraout_fr1_00);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,4,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x18] = extraout_fr0_04;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x18) = CONCAT44(extraout_fr0_04,extraout_fr1_01);
  }
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,7,ar6,ar7));
  if (cVar7 == '\0') {
    unaff_r14[0x17] = extraout_fr0_05;
  }
  else {
    *(ulonglong *)(unsigned)(unaff_r14 + 0x17) = CONCAT44(extraout_fr0_05,extraout_fr1_02);
  }
  uVar4 = 4;
  a5 = uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x13) + 6);
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x14))))(iVar5,a5,4,ar7));
  unaff_r14[0xf] = iVar5;
  unaff_r14[0x11] = iVar5;
  iVar3 = uVar6 * 4;
  iVar5 = uVar6 * (*(ushort *)(unsigned)(unaff_r14 + 0x13) + 1) * 4 + unaff_r14[0xf];
  unaff_r14[0x10] = iVar5;
  unaff_r14[0xb] = iVar5;
  iVar2 = iVar5 + iVar3 + iVar3;
  unaff_r14[0xc] = iVar5 + iVar3;
  iVar5 = iVar2 + iVar3;
  unaff_r14[0xd] = iVar2;
  unaff_r14[0xe] = iVar5;
  unaff_r14[0x14] = iVar3 + iVar5;
  if (unaff_r14[0xf] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb94(unaff_r14,a5,uVar4,ar7));
    return 0;
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,0x66,uVar4,ar7));
  return uVar4;
}

__asm__(".globl _FUN_8c11c2b8\n.set _FUN_8c11c2b8, _FUN_8c11c2b8_def\n");
//@unit 8c11c412
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c412_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c412";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11c0e4)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11c2b0))); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11c204))); unsigned long t3_ = (unsigned long)(0x70); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,2,3); });
  return uVar1;
}

__asm__(".globl _FUN_8c11c412\n.set _FUN_8c11c412, _FUN_8c11c412_def\n");
//@unit 8c11c47c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c47c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  undefined2 in_r3 = 0;
  byte unaff_r12 = 0;
  int unaff_r14 = 0;
  
  *(undefined2 *)(unsigned)(in_r0 + unaff_r14) = in_r3;
  *(ushort *)(unsigned)(unaff_r14 + 0x58) = (ushort)(byte)ar6;
  if (unaff_r12 == 0) {
LAB_8c11c4a6:
    if ((byte)ar6 != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c972(ar4,(uint)(byte)ar6,4,ar7));
      *(undefined4 *)(unsigned)(unaff_r14 + 0x5c) = uVar1;
      if (*(int *)(unsigned)(unaff_r14 + 0x5c) == 0) goto LAB_8c11c4ca;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c972(ar4,(uint)unaff_r12,8,ar7));
    *(undefined4 *)(unsigned)(unaff_r14 + 0x54) = uVar1;
    if (*(int *)(unsigned)(unaff_r14 + 0x54) != 0) goto LAB_8c11c4a6;
LAB_8c11c4ca:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c47c\n.set _FUN_8c11c47c, _FUN_8c11c47c_def\n");
//@unit 8c11c5e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c11c5e4_def(int ar4,undefined4 *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11c5e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
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
  iVar5 = *((int *)(unsigned long)*(unsigned *)(unsigned)(0x230 + ar4));
  a6 = ar6;
  a7 = ar7;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))(0xc,0xf4 + ar4,ar6,ar7))
  ;
  *ar5 = piVar1;
  puVar2 = (undefined4 *)(unsigned)(int)0x13c;
  if (*(uint *)(unsigned)(ar4 + 0x78) < *(uint *)(unsigned)((int)puVar2 + ar4)) {
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
      iVar9 = *(int *)(unsigned)(iVar9 + 0x10);
      bVar10 = iVar9 != 0;
      iVar7 = iVar7 + 1;
    }
    piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                              (iVar7 * 0x18,0xf4 + ar4,a6,a7));
    *piVar1 = iVar7;
    piVar1[1] = (int)piVar3;
    puVar2 = (undefined4 *)(unsigned)(uint)(ar7 == 0);
    for (; ar6 != 0; ar6 = *(int *)(unsigned)(ar6 + 0x10)) {
      piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc));
      iVar7 = 0;
      uVar6 = iVar5 * 0x6e;
      if ((char)s0 == '\0') {
        uVar6 = 0;
      }
      for (; piVar1 != (int *)(unsigned)0x0; piVar1 = (int *)(unsigned)piVar1[4]) {
        if (((undefined4 *)(unsigned)(uint)(ar7 == 0) != (undefined4 *)(unsigned)0x0) ||
           (*(int *)(unsigned)(*piVar1 * 8 + ar7) != -1)) {
          iVar7 = iVar7 + 1;
        }
      }
      puVar2 = (undefined4 *)(unsigned)
               (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                         (iVar7 << 4,0xf4 + ar4,a6,a7));
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(unsigned)(ar6 + 4);
      piVar3[2] = *(int *)(unsigned)(ar6 + 8);
      piVar3[3] = -1;
      piVar3[5] = (int)puVar2;
      puVar8 = puVar2;
      for (piVar1 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 0xc)); piVar1 != (int *)(unsigned)0x0; piVar1 = (int *)(unsigned)piVar1[4]) {
        if ((char)s0 == '\0') {
          uVar11 = (uint)*(ushort *)(unsigned)(piVar1 + 5);
        }
        else {
          uVar11 = ((uint)*(ushort *)(unsigned)(piVar1 + 5) + iVar5) * 0x6e;
        }
        if ((ar7 == 0) ||
           (puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*piVar1 * 8 + ar7)), puVar2 != (undefined4 *)(unsigned)0xffffffff)) {
          piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x14))))
                                    (0xc,0xf4 + ar4,a6,a7));
          puVar2 = (undefined4 *)(unsigned)piVar3[3];
          if (puVar2 == (undefined4 *)(unsigned)0xffffffff) {
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
            piVar4[2] = *(int *)(unsigned)(*piVar1 * 8 + ar7);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c7b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c7b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = (int *)(unsigned)(uint)ar5[1];
  iVar2 = 0;
  if (0 < *ar5) {
    do {
      iVar3 = piVar5[5];
      iVar4 = 0;
      if (0 < *piVar5) {
        do {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x18))))
                    (*(undefined4 *)(unsigned)(iVar3 + 0xc),0xf4 + ar4,vr6,vr7));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x18))))(piVar5[5],0xf4 + ar4,vr6,vr7));
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *ar5);
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x18))))(ar5[1],0xf4 + ar4,vr6,vr7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x18))))(ar5,0xf4 + ar4,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c11c7b8\n.set _FUN_8c11c7b8, _FUN_8c11c7b8_def\n");
//@unit 8c11c7cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c7cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c7cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int unaff_r8 = 0;
  int iVar2;
  int *unaff_r10 = 0;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_r14 = 0;
  
  piVar5 = (int *)(unsigned)unaff_r10[1];
  iVar2 = unaff_r8;
  if (0 < *unaff_r10) {
    do {
      iVar3 = piVar5[5];
      iVar4 = unaff_r8;
      if (0 < *piVar5) {
        do {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x18))))
                    (*(undefined4 *)(unsigned)(iVar3 + 0xc),0xf4 + unaff_r14,ar6,ar7));
          iVar4 = iVar4 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar4 < *piVar5);
      }
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x18))))
                (piVar5[5],0xf4 + unaff_r14,ar6,ar7));
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar2 < *unaff_r10);
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x18))))
              (unaff_r10[1],0xf4 + unaff_r14,ar6,ar7));
  }
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x18))))(0xf4 + unaff_r14,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c11c7cc\n.set _FUN_8c11c7cc, _FUN_8c11c7cc_def\n");
//@unit 8c11c86c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11c86c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c86c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0xc)) = ar7;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11c5e4(ar4,&(*(undefined4 *)(fr0_ - 0x10)),ar7,s0));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc4 + ar4))))((*(undefined4 *)(fr0_ - 0x10)),0xf4 + ar4,ar7,s0));
  (*(undefined4 *)(fr0_ - 0xc)) = CONCAT31((*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0xc))+1)),(char)uVar1);
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11c7b8(ar4,(*(undefined4 *)(fr0_ - 0x10)),ar7,s0));
  return (int)(char)(*(undefined4 *)(fr0_ - 0xc));
}

__asm__(".globl _FUN_8c11c86c\n.set _FUN_8c11c86c, _FUN_8c11c86c_def\n");
//@unit 8c11c914
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11c914_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c914";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar5 * ar6,ar7,ar6,ar7));
  if (ar4_00 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4_00,0,ar5 * ar6,ar7));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11c914\n.set _FUN_8c11c914, _FUN_8c11c914_def\n");
//@unit 8c11c972
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c972_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c972";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c914(*(undefined4 *)(unsigned)(0xfc + ar4),ar5,ar6,0xf4 + ar4));
  return uVar1;
}

__asm__(".globl _FUN_8c11c972\n.set _FUN_8c11c972, _FUN_8c11c972_def\n");
//@unit 8c11c99a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c99a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c99a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(short *)(unsigned)(ar4 + 0x3e) != (short)ar5) {
    *(short *)(unsigned)(ar4 + 0x3e) = (short)ar5;
    if (*(int *)(unsigned)(0xc8 + ar4) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc8 + ar4))))((short)ar5,0xf4 + ar4,vr6,vr7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c99a\n.set _FUN_8c11c99a, _FUN_8c11c99a_def\n");
//@unit 8c11c9a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c9a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c9a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int unaff_r14 = 0;
  
  uVar1 = 0;
  if ((uint)*(ushort *)(unsigned)(in_r0 + unaff_r14) != (uint)(ushort)ar5) {
    *(ushort *)(unsigned)(in_r0 + unaff_r14) = (ushort)ar5;
    if (*(int *)(unsigned)(0xc8 + unaff_r14) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xc8 + unaff_r14))))
                        ((uint)(ushort)ar5,0xf4 + unaff_r14,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11c9a0\n.set _FUN_8c11c9a0, _FUN_8c11c9a0_def\n");
//@unit 8c11c9d2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c9d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c9d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(ar4 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,vr5,vr6,vr7));
  if (*(int *)(unsigned)(ar4 + 4) != iVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,2,ar6,ar7));
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d2\n.set _FUN_8c11c9d2, _FUN_8c11c9d2_def\n");
//@unit 8c11c9d6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c9d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c9d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x1c))))(unaff_r14 + 8,ar5,ar6,ar7));
  if (*(int *)(unsigned)(unaff_r14 + 4) != iVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(unaff_r14,2,ar6,ar7));
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d6\n.set _FUN_8c11c9d6, _FUN_8c11c9d6_def\n");
//@unit 8c11ca24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ca24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ca24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + ar4) == 0x218df4f5) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(*(undefined4 *)(unsigned)(0xfc + ar4),ar5,ar6,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x1c))))(0xf4 + ar4,vr5,vr6,vr7));
    if ((*(int *)(unsigned)(0xe8 + ar4) == iVar1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + ar4) + 0x20))))(0xf4 + ar4,vr5,vr6,vr7)),
       *(int *)(unsigned)(0xec + ar4) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + ar4);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + ar4);
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(uVar2,ar5_00,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11ca24\n.set _FUN_8c11ca24, _FUN_8c11ca24_def\n");
//@unit 8c11ca28
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ca28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ca28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + unaff_r14) == 0x218df4f5) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(*(undefined4 *)(unsigned)(0xfc + unaff_r14),ar5,ar6,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x1c))))
                      (0xf4 + unaff_r14,ar5,ar6,ar7));
    if ((*(int *)(unsigned)(0xe8 + unaff_r14) == iVar1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x20))))
                          (0xf4 + unaff_r14,ar5,ar6,ar7)),
       *(int *)(unsigned)(0xec + unaff_r14) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + unaff_r14);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + unaff_r14);
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(uVar2,ar5_00,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11ca28\n.set _FUN_8c11ca28, _FUN_8c11ca28_def\n");
//@unit 8c11cad4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unsigned)(ar4 + 0x18) == 0x2d79b6f5) {
    ar4_00 = *(int *)(unsigned)(ar4 + 0x14);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x1c))))(ar4_00 + 8,vr5,vr6,vr7));
    if ((*(int *)(unsigned)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x20))))(ar4_00 + 8,vr5,vr6,vr7)), *(int *)(unsigned)(ar4 + 0x10) != iVar2)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4_00,0xf,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cada_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cada";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int unaff_r13 = 0;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unsigned)(unaff_r13 + 0x18) == 0x2d79b6f5) {
    ar4_00 = *(int *)(unsigned)(unaff_r13 + 0x14);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x1c))))(ar4_00 + 8,ar5,ar6,ar7));
    if ((*(int *)(unsigned)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x20))))(ar4_00 + 8,ar5,ar6,ar7)),
       *(int *)(unsigned)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4_00,0xf,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cb54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cb54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unsigned)(ar4 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(unsigned)(ar4 + 0x14);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x1c))))(ar4_00 + 8,vr5,vr6,vr7));
    if ((*(int *)(unsigned)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x20))))(ar4_00 + 8,vr5,vr6,vr7)), *(int *)(unsigned)(ar4 + 0x10) != iVar2)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4_00,0x11,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cb5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cb5a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int unaff_r13 = 0;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unsigned)(unaff_r13 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(unsigned)(unaff_r13 + 0x14);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x1c))))(ar4_00 + 8,ar5,ar6,ar7));
    if ((*(int *)(unsigned)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4_00 + 0x20))))(ar4_00 + 8,ar5,ar6,ar7)),
       *(int *)(unsigned)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4_00,0x11,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cbbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c23));
  if ((byte)ar6 != 0) {
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c20));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,(int)(char)puVar2[ar5],ar5,(uint)(byte)ar6));
  bVar3 = (uVar1 & 0xff) == 0;
  if (bVar3) {
    *(byte *)(unsigned)(ar5 + 0xe4 + ar4) = (byte)ar6;
  }
  return (uint)!bVar3;
}

__asm__(".globl _FUN_8c11cbbc\n.set _FUN_8c11cbbc, _FUN_8c11cbbc_def\n");
//@unit 8c11cc2c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cc2c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cc2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int a4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(unsigned)(0x108 + ar4) != 0) {
    a4 = *(int *)(unsigned)(0x108 + ar4);
    uVar4 = ar5;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x3c))))(a4,ar5,ar6,ar7));
    puVar2 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x108 + ar4) + 0x6c))))
                               (*(int *)(unsigned)(0x108 + ar4),uVar4,ar6,ar7));
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
      if ((uVar4 != *(byte *)(unsigned)(0xe4 + ar4 + uVar5)) &&
         (uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c11cbbc(ar4,uVar5,uVar4,ar7)), (uVar4 & 0xff) != 0)) {
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cd02_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cd02";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xb])))(ar4[4],ar4 + 2,ar6,ar7));
  if (*ar4 == 0) {
    *ar4 = ar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xc])))(ar4[4],ar4 + 2,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c11cd02\n.set _FUN_8c11cd02, _FUN_8c11cd02_def\n");
//@unit 8c11cd44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cd44_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cd44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80000000;
  iVar2 = ar5;
  if ((ar5 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar5,ar5,ar6,ar7)), iVar1 != 0)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,iVar2,ar6,ar7));
    if (iVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xb])))(ar4[4],ar4 + 2,uVar3,vr7));
      uVar3 = *ar4;
      *ar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xc])))(ar4[4],ar4 + 2,vr6,vr7));
    }
  }
  else {
    uVar3 = *(undefined4 *)(unsigned)(ar5 + 0x40);
    *(undefined4 *)(unsigned)(ar5 + 0x40) = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11cd44\n.set _FUN_8c11cd44, _FUN_8c11cd44_def\n");
//@unit 8c11cd4e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cd4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cd4e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r12 = 0;
  undefined4 uVar2;
  int unaff_r13 = 0;
  
  if ((unaff_r12 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(unaff_r12,ar5,ar6,ar7)), iVar1 != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xb])))(ar4[4],ar4 + 2,ar6,ar7));
      uVar2 = *ar4;
      *ar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar4[0xc])))(ar4[4],ar4 + 2,ar6,ar7));
    }
  }
  else {
    uVar2 = *(undefined4 *)(unsigned)(unaff_r13 + 0x40);
    *(undefined4 *)(unsigned)(unaff_r13 + 0x40) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11cd4e\n.set _FUN_8c11cd4e, _FUN_8c11cd4e_def\n");
//@unit 8c11cdb6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11cdb6_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cdb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *a5;
  
  a5 = &(*(undefined4 *)(fr0_ - 0x14));
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(fr0_ - 0x10)) = 0;
    (*(undefined4 *)(fr0_ - 0x14)) = ar5;
    puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(*ar4)))(0x3c,&(*(undefined4 *)(fr0_ - 0x14)),ar6,ar7));
    if (puVar1 != (undefined4 *)(unsigned)0x0) {
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
      puVar1[2] = (*(undefined4 *)(fr0_ - 0x14));
      puVar1[3] = (*(undefined4 *)(fr0_ - 0x10));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(puVar1[9])))(&(*(undefined4 *)(fr0_ - 0x14)),a5,ar6,ar7));
      puVar1[4] = uVar2;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(puVar1[7])))(&(*(undefined4 *)(fr0_ - 0x14)),a5,ar6,ar7));
      puVar1[1] = uVar2;
      return puVar1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11cdb6\n.set _FUN_8c11cdb6, _FUN_8c11cdb6_def\n");
//@unit 8c11ce44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ce44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ce44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x10),ar4 + 8,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x18))))(ar4,ar4 + 8,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c11ce44\n.set _FUN_8c11ce44, _FUN_8c11ce44_def\n");
//@unit 8c11ce88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ce88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ce88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)0x8c127c14;
}

__asm__(".globl _FUN_8c11ce88\n.set _FUN_8c11ce88, _FUN_8c11ce88_def\n");
//@unit 8c11ce8e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ce8e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ce8e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
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
  undefined4 extraout_fr3 = 0;
  undefined8 in_xd2 = 0;
  byte in_FPSCR_DN = 0;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte in_FPSCR_PR = 0;
  byte bVar12;
  byte bVar13;
  byte in_FPSCR_SZ = 0;
  char cVar14;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c127c28));
  (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 4);
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 8);
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0xc);
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0x10);
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c28)) + 0x14);
  (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c127c40));
  (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c40)) + 4);
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c127c40)) + 8);
  uVar4 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if (ar5 == (undefined4 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,0x13,uVar4,ar7));
    }
    else {
      iVar7 = (int)0x2b4;
      iVar8 = ar4 + 8;
      bVar9 = 0;
      bVar11 = 0;
      bVar13 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                       (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c914(ar4,1,iVar7,iVar8));
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,2,iVar7,iVar8));
      }
      else {
        iVar7 = (int)0xc4;
        *(int *)(unsigned)(iVar2 + 0x48) = iVar2;
        puVar5 = (undefined4 *)(unsigned)(iVar7 + iVar2);
        *(undefined1 *)(unsigned)(iVar2 + 0x4c) = 0;
        *puVar5 = *ar5;
        puVar5[1] = ar5[1];
        puVar5[2] = ar5[2];
        puVar5[3] = ar5[3];
        puVar5[4] = ar5[4];
        puVar5[5] = ar5[5];
        puVar1 = (&(*(undefined1 *)(unsigned)0x8c1274a4));
        *(undefined4 *)(unsigned)(0xf4 + iVar2) = *(undefined4 *)(unsigned)(ar4 + 8);
        s8 = (&(*(undefined1 *)(unsigned)0x8c127aba));
        *(int *)(unsigned)(0xfc + iVar2) = ar4;
        ar6_00 = &(*(undefined4 *)(fr0_ - 0x34));
        puVar5 = &(*(undefined4 *)(fr0_ - 0x28));
        bVar10 = 0;
        bVar12 = 0;
        bVar9 = (byte)((((uint)bVar9 << 0x12 | (uint)bVar11 << 0x13 | (uint)bVar13 << 0x14) &
                        0xffe7ffff & 0x100000) >> 0x14);
        a7 = (&(*(undefined1 *)(unsigned)0x8c1278b0));
        uVar3 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12799c))); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c127a74))); unsigned long t2_ = (unsigned long)(s8
                           ); unsigned long t3_ = (unsigned long)(puVar1); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 52)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 52)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1201e6))))
                          (iVar2,puVar5,ar6_00,(&(*(undefined1 *)(unsigned)0x8c1278b0))); });
        if ((uVar3 & 0xff) == 0) {
          bVar11 = 0;
          bVar13 = 0;
          bVar9 = (byte)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,puVar5,ar6_00,a7));
          *(undefined4 *)(unsigned)(0xe8 + iVar2) = uVar4;
          bVar10 = 0;
          bVar12 = 0;
          bVar9 = (byte)((((uint)bVar11 << 0x12 | (uint)bVar13 << 0x13 | (uint)bVar9 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x20))))(ar4 + 8,puVar5,ar6_00,a7));
          *(undefined4 *)(unsigned)(0xec + iVar2) = uVar4;
          *(undefined4 *)(unsigned)(iVar2 + 0x60) = 0;
          *(undefined4 *)(unsigned)(iVar2 + 100) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x5c));
          *(undefined4 *)(unsigned)(iVar2 + 0x6c) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x5c) + 4);
          *(undefined4 *)(unsigned)(iVar2 + 0x70) = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar2 + 0x54));
          puVar1 = (&(*(undefined1 *)(unsigned)0x8c11c8be));
          *(undefined4 *)(unsigned)(iVar2 + 0x74) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar2 + 0x54) + 4);
          iVar7 = (int)0x100;
          *(undefined4 *)(unsigned)(iVar7 + iVar2) = 0;
          *(undefined4 *)(unsigned)(iVar7 + 4 + iVar2) = 0;
          *(undefined1 *)(unsigned)(0x234 + iVar2) = 0;
          uVar3 = 0xffe7ffff;
          iVar7 = (int)0xe0;
          *(unsigned *)(unsigned)(iVar7 + iVar2) = puVar1;
          *(undefined2 *)(unsigned)(iVar7 + 100 + iVar2) = 0;
          *(undefined4 *)(unsigned)(iVar7 + 0x68 + iVar2) = 4;
          cVar14 = (char)((((uint)bVar10 << 0x12 | (uint)bVar12 << 0x13 | (uint)bVar9 << 0x14) &
                           uVar3 & 0x100000) >> 0x14);
          uVar4 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(0x28,ar4 + 8,ar6_00,a7));
          *(undefined4 *)(unsigned)(0x2b0 + iVar2) = uVar4;
          if (*(int *)(unsigned)(0x2b0 + iVar2) == 0) {
            (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(ar4,2,ar6_00,a7));
          }
          else {
            iVar7 = (int)0x22c;
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + iVar2)) = 0;
            puVar1 = ((void *)(unsigned)0x8c120348);
            a7 = (undefined *)(unsigned)0x0;
            uVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c11d120);
            if (cVar14 != '\0') {
              in_xd2 = CONCAT44(((void *)(unsigned)0x8c120348),(*(undefined4 *)(unsigned)(unsigned)0x8c11d120));
              uVar4 = extraout_fr3;
            }
            ar6_00 = (undefined4 *)(unsigned)(iVar7 + iVar2);
            if (cVar14 == '\0') {
              *(undefined4 *)(unsigned)(0x2a0 + iVar2) = uVar4;
            }
            else {
              *(undefined8 *)(unsigned)(0x2a0 + iVar2) = in_xd2;
            }
            uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(iVar2 + 0x48,4,ar6_00,0));
            if ((uVar3 & 0xff) == 0) {
              a7 = (undefined *)(unsigned)0x0;
              ar6_00 = (undefined4 *)(unsigned)(0x230 + iVar2);
              uVar4 = 0x29;
              uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c120348(iVar2 + 0x48,0x29,ar6_00,0));
              if (((uVar3 & 0xff) == 0) &&
                 (uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11d8fc(iVar2,uVar4,ar6_00,a7)), uVar4 = 0x218df4f5,
                 (uVar3 & 0xff) == 0)) {
                iVar7 = (int)0xf8;
                iVar8 = (int)0xe4;
                uVar3 = 0;
                *(undefined4 *)(unsigned)(iVar7 + iVar2) = ar6;
                puVar6 = (undefined1 *)(unsigned)(iVar8 + iVar2);
                *(undefined4 *)(unsigned)(iVar7 + -8 + iVar2) = uVar4;
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
          (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + iVar2),*(undefined4 *)(unsigned)(iVar2 + 0x40),ar6_00,a7
                      ));
        }
        (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x18))))(iVar2,ar4 + 8,ar6_00,a7));
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11ce8e\n.set _FUN_8c11ce8e, _FUN_8c11ce8e_def\n");
//@unit 8c11d14c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d14c_def(int ar4,undefined4 *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d14c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 a6;
  int *a7;
  
  a7 = &(*(int *)(fr0_ - 0x20));
  a6 = 0;
  (*(int *)(fr0_ - 0x20)) = 0;
  (*(int *)(fr0_ - 0x14)) = *(int *)(unsigned)(0xfc + ar4);
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(ar6));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c120348(ar4 + 0x48,0x27,0,&(*(int *)(fr0_ - 0x20))));
  if ((uVar1 & 0xff) == 0) {
    (*(int *)(fr0_ - 0x20)) = (*(int *)(fr0_ - 0x20)) + 0x88;
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x14)) + 0x14))))((*(int *)(fr0_ - 0x20)),0xf4 + ar4,a6,a7));
    iVar3 = (int)0x100;
    puVar2[1] = (*(int *)(fr0_ - 0x20));
    *puVar2 = 4;
    (vsp = ((unsigned long)(fr0_ - 32)), memmove(puVar2 + 2,*((int *)(unsigned long)*(unsigned *)(unsigned)(iVar3 + ar4)) + 8,(int)0x80,a7));
    (*(int *)(fr0_ - 0x20)) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120348))))
                      (ar4 + 0x48,0x27,(int)(puVar2 + 2) + (int)0x80,&(*(int *)(fr0_ - 0x20))));
    if ((uVar1 & 0xff) == 0) {
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) = (*(int *)(fr0_ - 0x20)) + 0x88;
      *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) = puVar2;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d14c\n.set _FUN_8c11d14c, _FUN_8c11d14c_def\n");
//@unit 8c11d200
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d200_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d200";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar3 == 0) {
    iVar3 = *(int *)(unsigned)(0xfc + ar4);
    sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,vr6,vr7));
      return uVar4 & 0xff;
    }
    iVar5 = (int)0x100;
    if (*(int *)(unsigned)(iVar5 + ar4) != 0) {
      iVar7 = (int)0xf4;
      *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar5 + ar4) + 4) + -1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(iVar5 + 8 + ar4),iVar7 + ar4,vr6,vr7));
      *(undefined4 *)(unsigned)(0x108 + ar4) = 0;
    }
    iVar5 = 0;
    if (*(int *)(unsigned)(0x104 + ar4) != 0) {
      iVar7 = *(int *)(unsigned)(0x104 + ar4);
      *(int *)(unsigned)(iVar7 + 4) = *(int *)(unsigned)(iVar7 + 4) + -1;
    }
    piVar6 = (int *)(unsigned)(0x118 + ar4);
    piVar8 = piVar6;
    do {
      if (*piVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*piVar8,0xf4 + ar4,vr6,vr7));
      }
      iVar5 = iVar5 + 1;
      piVar8 = piVar8 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar5 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)),0xf4 + ar4,vr6,vr7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(0x2b0 + ar4),0xf4 + ar4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x54),0xf4 + ar4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x5c),0xf4 + ar4,vr6,vr7));
    cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12025e(ar4,vr5,vr6,vr7));
    if (cVar2 == '\0') {
      iVar5 = (int)0xf4;
      *(undefined4 *)(unsigned)(0xf0 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(ar4,iVar5 + ar4,vr6,vr7));
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d200\n.set _FUN_8c11d200, _FUN_8c11d200_def\n");
//@unit 8c11d20e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d20e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d20e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_r9 = 0;
  int *piVar7;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = *(int *)(unsigned)(0xfc + ar4);
    sVar1 = *(short *)(unsigned)(unaff_r9 + 0x3e);
    if (((sVar1 != 0) && (sVar1 != 1)) && (sVar1 != 2)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7));
      return uVar3 & 0xff;
    }
    iVar4 = (int)0x100;
    if (*(int *)(unsigned)(iVar4 + ar4) != 0) {
      iVar6 = (int)0xf4;
      *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + ar4) + 4) + -1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(iVar4 + 8 + ar4),iVar6 + ar4,ar6,ar7));
      *(undefined4 *)(unsigned)(0x108 + ar4) = 0;
    }
    iVar4 = 0;
    if (*(int *)(unsigned)(0x104 + ar4) != 0) {
      iVar6 = *(int *)(unsigned)(0x104 + ar4);
      *(int *)(unsigned)(iVar6 + 4) = *(int *)(unsigned)(iVar6 + 4) + -1;
    }
    piVar5 = (int *)(unsigned)(0x118 + ar4);
    piVar7 = piVar5;
    do {
      if (*piVar5 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*piVar7,0xf4 + ar4,ar6,ar7));
      }
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4)),0xf4 + ar4,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(0x2b0 + ar4),0xf4 + ar4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x54),0xf4 + ar4,ar6,ar7));
    iVar4 = 0xf4 + ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(*(undefined4 *)(unsigned)(ar4 + 0x5c),iVar4,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12025e(unaff_r9,iVar4,ar6,ar7));
    if ((uVar3 & 0xff) == 0) {
      iVar4 = (int)0xf4;
      *(undefined4 *)(unsigned)(0xf0 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(ar4,iVar4 + ar4,ar6,ar7));
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11d20e\n.set _FUN_8c11d20e, _FUN_8c11d20e_def\n");
//@unit 8c11d370
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar3 == 0) {
    if (*(short *)(unsigned)(ar4 + 0x3e) == 2) {
      iVar3 = (int)0x118;
      *(undefined4 *)(unsigned)(iVar3 + 0xc + ar4) = *(undefined4 *)(unsigned)(iVar3 + ar4);
      *(undefined4 *)(unsigned)(iVar3 + 0x24 + ar4) = 0;
      *(undefined4 *)(unsigned)(iVar3 + 0x28 + ar4) = 0;
      *(undefined2 *)(unsigned)(iVar3 + 0x2c + ar4) = 0;
      puVar1 = ((void *)(unsigned)0x8c120348);
      iVar3 = (int)0x22a;
      *(undefined2 *)(unsigned)(iVar3 + ar4) = 0;
      *(undefined2 *)(unsigned)(iVar3 + 0x1a + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(0x10c + ar4) = 3;
      cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,1,0,vr7));
      if ((cVar2 == '\0') && (*(int *)(unsigned)(0x88 + ar4) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,2,0,vr7));
      }
      uVar4 = *(uint *)(unsigned)(ar4 + 0x40);
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,vr6,vr7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r14 = 0;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if (*(short *)(unsigned)(ar4 + 0x3e) == 2) {
      iVar2 = (int)0x118;
      *(undefined4 *)(unsigned)(iVar2 + 0xc + unaff_r14) = *(undefined4 *)(unsigned)(iVar2 + unaff_r14);
      *(undefined4 *)(unsigned)(iVar2 + 0x24 + unaff_r14) = 0;
      *(undefined4 *)(unsigned)(iVar2 + 0x28 + unaff_r14) = 0;
      *(undefined2 *)(unsigned)(iVar2 + 0x2c + unaff_r14) = 0;
      puVar1 = ((void *)(unsigned)0x8c120348);
      iVar2 = (int)0x22a;
      *(undefined2 *)(unsigned)(iVar2 + unaff_r14) = 0;
      *(undefined2 *)(unsigned)(iVar2 + 0x1a + unaff_r14) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(0x10c + unaff_r14) = 3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,1,0,0));
      if (((uVar3 & 0xff) == 0) && (*(int *)(unsigned)(0x88 + unaff_r14) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14 + 0x48,2,0,0));
      }
      uVar3 = *(uint *)(unsigned)(ar4 + 0x40);
    }
    else {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14 + 0x48,7,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d432_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d432";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  if (ar5 == 0) {
    ar5_00 = 6;
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54))));
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
  }
  else {
    (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x54))));
    ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc))[1];
    ar5_00 = 5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0xc)),ar5_00,ar6_00,0));
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c11d432\n.set _FUN_8c11d432, _FUN_8c11d432_def\n");
//@unit 8c11d488
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d488_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d488";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  
  ar4_01 = *(int *)(unsigned)(ar4 + 0x70);
  iVar7 = ar5 * 4;
  iVar5 = (int)0x7d0;
  iVar4 = *(int *)(unsigned)(0xfc + ar4);
  do {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(ar4_01,*(undefined4 *)(unsigned)(ar4 + 0x74),ar6,ar7));
    if (ar5_00 == 0) {
      return 0;
    }
    ar4_02 = *(int *)(unsigned)(0x124 + ar4 + iVar7);
    uVar6 = ar4_02 + (uint)*(ushort *)(unsigned)(ar4_01 + 0xc);
    if (*(uint *)(unsigned)(0x130 + ar4 + iVar7) < uVar6) {
      ar5_01 = *(int *)(unsigned)(0x118 + ar4 + iVar7);
      ar6_00 = *(int *)(unsigned)(0x130 + ar4 + iVar7) - ar5_01;
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x14))))(ar6_00 + iVar5,0xf4 + ar4,ar6,ar7));
      if (ar4_00 == 0) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,2,vr6,vr7));
        return uVar2;
      }
      if (ar5_01 != 0) {
        iVar3 = ar6_00;
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,ar5_01,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(ar5_01,0xf4 + ar4,iVar3,ar7));
      }
      iVar3 = (int)0x130;
      ar4_02 = (ar4_02 - ar5_01) + ar4_00;
      uVar1 = *(ushort *)(unsigned)(ar4_01 + 0xc);
      *(int *)(unsigned)(0x118 + ar4 + iVar7) = ar4_00;
      *(int *)(unsigned)(iVar3 + ar4 + iVar7) = ar4_00 + ar6_00 + iVar5;
      uVar6 = ar4_02 + (uint)uVar1;
    }
    ar6 = (uint)*(ushort *)(unsigned)(ar4_01 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_02,ar5_00,ar6,ar7));
    *(uint *)(unsigned)(0x124 + ar4 + iVar7) = uVar6;
  } while( true );
}

__asm__(".globl _FUN_8c11d488\n.set _FUN_8c11d488, _FUN_8c11d488_def\n");
//@unit 8c11d5d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d5d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  uint a5;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar7_00;
  
  sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    if (((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 7)) {
      return 0;
    }
    ar7_00 = 0;
    uVar5 = 0;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,3,0,0));
    if (((uVar3 & 0xff) == 0) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120284(ar4,0,uVar5,ar7_00)), (uVar3 & 0xff) == 0)) {
      a5 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,a5,uVar5,ar7_00));
      if (((uVar3 & 0xff) == 0) &&
         (((*(short *)(unsigned)(0x144 + ar4) == 0 ||
           (((*(short *)(unsigned)(0x144 + ar4) != 1 ||
             (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11eb8c(ar4,a5,uVar5,ar7_00)), (uVar3 & 0xff) == 0)) &&
            ((*(short *)(unsigned)(0x144 + ar4) != 2 ||
             (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ec7c(ar4,a5,uVar5,ar7_00)), (uVar3 & 0xff) == 0)))))) &&
          (*(int *)(unsigned)(0x148 + ar4) != 4)))) {
        iVar2 = (int)0x148;
        iVar4 = (int)0xf4;
        a4 = *(undefined4 *)(unsigned)(iVar2 + ar4);
        *(undefined4 *)(unsigned)(iVar2 + ar4) = 4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + -0x7c + ar4))))(a4,iVar4 + ar4,uVar5,ar7_00));
        if ((uVar3 & 0xff) != 0) goto LAB_8c11d6c2;
      }
    }
    uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x40);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d6f0_def(int ar4,uint *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 a5;
  uint uVar6;
  
  puVar5 = ar5;
  uVar3 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  if (iVar2 == 0) {
    if ((ar5 == (uint *)(unsigned)0x0) && (ar6 != 0)) {
      a5 = 0x13;
override_prt_8c11d780_7a4d7f16:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,a5,uVar3,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10ca2e(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7));
      ((undefined4 *)(fr0_ - 0x64))[0] = *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x104 + ar4));
      iVar2 = (*((code *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)))(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7);
      iVar4 = (*((code *)(unsigned long)*(unsigned *)(fr0_ - 0x58)))(((undefined4 *)(fr0_ - 0x64)),puVar5,uVar3,ar7);
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
      uVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c120348(ar4 + 0x48,0x19,ar5,ar6));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d7b8_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d7b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
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
  
  a7 = &(*(uint *)(fr0_ - 0x2c));
  iVar7 = 0;
  iVar8 = 0;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(ar6));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c120348);
  if (iVar3 == 0) {
    if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) == (int *)(unsigned)0x0) || (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) == (int *)(unsigned)0x0)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7));
      return uVar4 & 0xff;
    }
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(0xfc + ar4);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    piVar6 = &(*(int *)(fr0_ - 0x28));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,0x1a,piVar6,&(*(uint *)(fr0_ - 0x2c))));
    puVar2 = ((void *)(unsigned)0x8c1204c4);
    if ((uVar4 & 0xff) == 0) {
      uVar9 = (uint)0x80;
      uVar4 = 0;
      if ((*(uint *)(fr0_ - 0x2c)) != 0) {
        do {
          piVar6 = (int *)(unsigned)(int)(char)*(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)*(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4) & uVar5 & 0xff) != 0) {
              iVar8 = iVar8 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (*(uint *)(fr0_ - 0x2c)));
      }
      if (iVar8 == 0) {
        piVar6 = (int *)(unsigned)0x0;
      }
      else {
        piVar6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x1c)) + 0x14))))(iVar8 << 2,0xf4 + ar4,piVar6,a7));
      }
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) = iVar8;
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = (int)piVar6;
      uVar4 = 0;
      if ((*(uint *)(fr0_ - 0x2c)) != 0) {
        do {
          bVar1 = *(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4);
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
        } while (uVar4 < (*(uint *)(fr0_ - 0x2c)));
      }
      return 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,7,piVar6,a7));
  }
  return 1;
}

__asm__(".globl _FUN_8c11d7b8\n.set _FUN_8c11d7b8, _FUN_8c11d7b8_def\n");
//@unit 8c11d8fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x46,ar4 + 0x7c,0));
  if ((((cVar2 == '\0') &&
       (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x47,0x88 + ar4,0)), cVar2 == '\0')) &&
      (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x48,0x9c + ar4,0)), cVar2 == '\0')) &&
     (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x49,0xa0 + ar4,0)), cVar2 == '\0')) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x4a,0xa4 + ar4,0));
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d8fc\n.set _FUN_8c11d8fc, _FUN_8c11d8fc_def\n");
//@unit 8c11d904
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11d904_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d904";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(unaff_r14 + 0x78) = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x46,ar6 + 0x7c,0));
  if (((((uVar2 & 0xff) == 0) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x47,0x88 + unaff_r14,0)),
       (uVar2 & 0xff) == 0)) &&
      (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x48,0x9c + unaff_r14,0)),
      (uVar2 & 0xff) == 0)) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x49,0xa0 + unaff_r14,0)),
     (uVar2 & 0xff) == 0)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x4a,0xa4 + unaff_r14,0));
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d904\n.set _FUN_8c11d904, _FUN_8c11d904_def\n");
//@unit 8c11d996
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d996_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d996";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((ar5 == (int *)(unsigned)0x0) || (ar6 == (undefined4 *)(unsigned)0x0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6_00,ar7));
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xfc) + 0x14))))(0x38,ar4 + 0xf4,vr6,vr7));
      if (puVar3 == (undefined4 *)(unsigned)0x0) {
        *ar5 = 0;
        *ar6 = 0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(ar4 + 0xfc),2,ar6_00,ar7));
        return uVar4;
      }
      *ar6 = 0x38;
      *ar5 = (int)puVar3;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(*(undefined4 *)(unsigned)(ar4 + 0x78),100,vr6,vr7));
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(unsigned)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(unsigned)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(unsigned)(ar4 + 0x88);
      puVar3[2] = *(int *)(unsigned)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(unsigned)(ar4 + 0x94);
      puVar3[8] = *(int *)(unsigned)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(unsigned)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(unsigned)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(unsigned)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(unsigned)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(unsigned)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(unsigned)(ar4 + 0xbc);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11d9a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d9a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_r12 = 0;
  undefined4 *unaff_r13 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((unaff_r12 == (int *)(unsigned)0x0) || (unaff_r13 == (undefined4 *)(unsigned)0x0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7));
      uVar2 = uVar2 & 0xff;
    }
    else {
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xfc) + 0x14))))(0x38,ar4 + 0xf4,ar6,ar7));
      if (puVar3 == (undefined4 *)(unsigned)0x0) {
        *unaff_r12 = 0;
        *unaff_r13 = 0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(ar4 + 0xfc),2,ar6,ar7));
        return uVar4;
      }
      *unaff_r13 = 0x38;
      *unaff_r12 = (int)puVar3;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(*(undefined4 *)(unsigned)(ar4 + 0x78),100,vr6,vr7));
      puVar3[3] = uVar4;
      puVar3[9] = *(undefined4 *)(unsigned)(ar4 + 0x7c);
      puVar3[0xc] = *(undefined4 *)(unsigned)(ar4 + 0x80);
      puVar3[1] = *(undefined4 *)(unsigned)(ar4 + 0x88);
      puVar3[2] = *(int *)(unsigned)(ar4 + 0x90) * 10;
      puVar3[7] = *(undefined4 *)(unsigned)(ar4 + 0x94);
      puVar3[8] = *(int *)(unsigned)(ar4 + 0x98) * 10;
      puVar3[0xd] = *(undefined4 *)(unsigned)(ar4 + 0x9c);
      puVar3[6] = 0x32 - *(short *)(unsigned)(ar4 + 0xa0);
      puVar3[5] = 0x32 - *(short *)(unsigned)(ar4 + 0xa2);
      puVar3[4] = *(undefined4 *)(unsigned)(ar4 + 0xa4);
      puVar3[10] = *(undefined4 *)(unsigned)(ar4 + 0xac);
      *puVar3 = *(undefined4 *)(unsigned)(ar4 + 0xb0);
      uVar2 = 0;
      puVar3[0xb] = *(undefined4 *)(unsigned)(ar4 + 0xbc);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11daa4_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11daa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 d;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 != 0) {
    return 1;
  }
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    uVar4 = 0x13;
  }
  else if (ar6 == 0x38) {
    sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cc2c(ar4,ar5[0xd],a6,ar7));
      if (iVar2 == 0) {
        d = 10;
        *(int *)(unsigned)(ar4 + 0x78) = ar5[3] * 100;
        *(undefined4 *)(unsigned)(ar4 + 0x7c) = ar5[9];
        *(undefined4 *)(unsigned)(ar4 + 0x80) = ar5[0xc];
        *(undefined4 *)(unsigned)(ar4 + 0x84) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x88) = ar5[1];
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = *ar5;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar5[2],10,vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x90) = uVar4;
        *(undefined4 *)(unsigned)(ar4 + 0x94) = ar5[7];
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar5[8],d,vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x98) = uVar4;
        *(undefined4 *)(unsigned)(ar4 + 0x9c) = ar5[0xd];
        *(short *)(unsigned)(ar4 + 0xa0) = 0x32 - (short)ar5[6];
        *(short *)(unsigned)(ar4 + 0xa2) = 0x32 - (short)ar5[5];
        *(undefined4 *)(unsigned)(ar4 + 0xa4) = ar5[4];
        *(undefined4 *)(unsigned)(ar4 + 0xac) = ar5[10];
        *(undefined4 *)(unsigned)(ar4 + 0xb0) = *ar5;
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = ar5[2] << 1;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = ar5[0xb];
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
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
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,uVar4,a6,ar7));
LAB_8c11dc70:
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11daa4\n.set _FUN_8c11daa4, _FUN_8c11daa4_def\n");
//@unit 8c11dc7e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11dc7e_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11dc7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  int *ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  if (ar6 == (int *)(unsigned)0x0) {
    ar5_00 = 0x13;
LAB_8c11dd8c:
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,ar5_00,ar6_00,ar7));
    return uVar2 & 0xff;
  }
  switch((uint)ar5) {
  case 1:
    *ar6 = *(int *)(unsigned)(ar4 + 0x8c);
    return 0;
  case 2:
    iVar1 = 0x88;
    goto LAB_8c11dd50;
  case 3:
    iVar1 = 0xbc;
    goto LAB_8c11dd6a;
  case 4:
    iVar1 = *(int *)(unsigned)(ar4 + 0x90) * 10;
    break;
  case 5:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(*(undefined4 *)(unsigned)(ar4 + 0x78),100,vr6,vr7));
    *ar6 = iVar1;
    return 0;
  case 6:
    iVar1 = 0xa4;
    goto LAB_8c11dd6a;
  case 7:
    iVar1 = 0x32 - *(short *)(unsigned)(ar4 + 0xa2);
    break;
  case 8:
    iVar1 = 0x32 - *(short *)(unsigned)(ar4 + 0xa0);
    goto LAB_8c11dd7a;
  case 9:
    iVar1 = 0x94;
LAB_8c11dd50:
    iVar1 = *(int *)(unsigned)(iVar1 + ar4);
    break;
  case 10:
    iVar1 = *(int *)(unsigned)(ar4 + 0x98) * 10;
    goto LAB_8c11dd7a;
  case 0xb:
    iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
    break;
  case 0xc:
    iVar1 = *(int *)(unsigned)(ar4 + 0x80);
    break;
  case 0xd:
    iVar1 = 0xac;
LAB_8c11dd6a:
    iVar1 = *(int *)(unsigned)(iVar1 + ar4);
LAB_8c11dd7a:
    *ar6 = iVar1;
    return 0;
  case 0xe:
    iVar1 = *(int *)(unsigned)(ar4 + 0x9c);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11dda2_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11dda2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  sVar3 = *(short *)(unsigned)(ar4 + 0x3e);
  if ((((sVar3 != 0) && (sVar3 != 1)) && (sVar3 != 2)) && (sVar3 != 5)) {
    uVar4 = 7;
override_prt_8c11e12a_7a4d7f16:
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,uVar4,ar6_00,ar7));
    return uVar2 & 0xff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  ar6_00 = 10;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar6,10,vr6,vr7));
  sVar3 = 0x32 - (short)ar6;
  switch((uint)ar5) {
  case 1:
    *(int *)(unsigned)(ar4 + 0x8c) = ar6;
    *(int *)(unsigned)(ar4 + 0xb0) = ar6;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
    if ((uVar2 & 0xff) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
    }
    break;
  case 2:
    *(int *)(unsigned)(ar4 + 0x88) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
    break;
  case 3:
    *(int *)(unsigned)(ar4 + 0xbc) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
    break;
  case 4:
    *(undefined4 *)(unsigned)(ar4 + 0x90) = uVar4;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar6 << 1,ar6_00,vr6,vr7));
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = uVar4;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
    if ((uVar2 & 0xff) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
    }
    break;
  case 5:
    *(int *)(unsigned)(ar4 + 0x78) = ar6 * 100;
    break;
  case 6:
    *(int *)(unsigned)(ar4 + 0xa4) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
    break;
  case 7:
    *(short *)(unsigned)(ar4 + 0xa2) = sVar3;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0));
    break;
  case 8:
    *(short *)(unsigned)(ar4 + 0xa0) = sVar3;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0));
    break;
  case 9:
    *(int *)(unsigned)(ar4 + 0x94) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
    break;
  case 10:
    *(undefined4 *)(unsigned)(ar4 + 0x98) = uVar4;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
    break;
  case 0xb:
    *(int *)(unsigned)(ar4 + 0x7c) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0));
    break;
  case 0xc:
    *(int *)(unsigned)(ar4 + 0x80) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0));
    break;
  case 0xd:
    *(int *)(unsigned)(ar4 + 0xac) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
    break;
  case 0xe:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cc2c(ar4,ar6,ar6_00,ar7));
    if (iVar1 != 0) {
      uVar4 = 0x14;
      goto override_prt_8c11e12a_7a4d7f16;
    }
    *(int *)(unsigned)(ar4 + 0x9c) = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0));
    break;
  default:
    uVar4 = 10;
    goto override_prt_8c11e12a_7a4d7f16;
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11dda2\n.set _FUN_8c11dda2, _FUN_8c11dda2_def\n");
//@unit 8c11e146
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e146_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e146";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x35,ar5 & 0xffff,0));
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e146\n.set _FUN_8c11e146, _FUN_8c11e146_def\n");
//@unit 8c11e190
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e190_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e190";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + ar4),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (uint *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,vr6,vr7));
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(unsigned)(ar4 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e190\n.set _FUN_8c11e190, _FUN_8c11e190_def\n");
//@unit 8c11e194
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e194_def(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e194";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + unaff_r14),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (uint *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7));
    return uVar2 & 0xff;
  }
  *ar5 = (uint)*(ushort *)(unsigned)(unaff_r14 + 0x3e);
  return 0;
}

__asm__(".globl _FUN_8c11e194\n.set _FUN_8c11e194, _FUN_8c11e194_def\n");
//@unit 8c11e214
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e214_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e214";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + ar4) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + ar4),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (undefined2 *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,vr6,vr7));
    return uVar2 & 0xff;
  }
  *ar5 = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(0x22c + ar4));
  return 0;
}

__asm__(".globl _FUN_8c11e214\n.set _FUN_8c11e214, _FUN_8c11e214_def\n");
//@unit 8c11e218
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e218_def(undefined4 ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e218";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + unaff_r14) != 0x218df4f5) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(*(undefined4 *)(unsigned)(0xfc + unaff_r14),0xb,vr6,vr7));
    return uVar1;
  }
  if (ar5 == (undefined2 *)(unsigned)0x0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14 + 0x48,0x13,ar6,ar7));
    return uVar2 & 0xff;
  }
  *ar5 = *((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(0x22c + unaff_r14));
  return 0;
}

__asm__(".globl _FUN_8c11e218\n.set _FUN_8c11e218, _FUN_8c11e218_def\n");
//@unit 8c11e274
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e274_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e274";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 1;
  }
  if (ar5 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7));
    return uVar2 & 0xff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,5,ar5,0));
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e274\n.set _FUN_8c11e274, _FUN_8c11e274_def\n");
//@unit 8c11e2de
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e2de_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e2de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if (ar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x13,iVar5,ar7));
    }
    else {
      iVar1 = ar5;
      if (ar6 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(*(undefined4 *)(unsigned)(ar5 + 4),ar4 + 8,iVar5,ar7));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x71,iVar5,ar7));
          return 0;
        }
        iVar5 = *(int *)(unsigned)(ar5 + 4);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar1,ar5,iVar5,ar7));
      }
      iVar4 = ar4 + 8;
      piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(0x1c,iVar4,iVar5,ar7));
      if (piVar2 != (int *)(unsigned)0x0) {
        piVar2[1] = 0;
        piVar2[2] = (uint)(ar6 == 0);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,iVar4,iVar5,ar7));
        piVar2[3] = iVar3;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x20))))(ar4 + 8,iVar4,iVar5,ar7));
        iVar5 = 0x2d79b6f5;
        piVar2[4] = iVar4;
        piVar2[6] = iVar5;
        *piVar2 = iVar1;
        piVar2[5] = ar4;
        return piVar2;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x71,iVar5,ar7));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e2de\n.set _FUN_8c11e2de, _FUN_8c11e2de_def\n");
//@unit 8c11e3ea
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11e3ea_def(int ar4,int ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c11e3ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 *a6;
  undefined4 *ar7_00;
  
  a6 = ar6;
  ar7_00 = ar7;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)(unsigned)0x0) || (ar7 == (undefined4 *)(unsigned)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(unsigned)(ar4 + 0x3e) == 2) || (*(short *)(unsigned)(ar4 + 0x3e) == 1)) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d14c(ar4,ar6,ar7,ar7_00));
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
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,a5,a6,ar7_00));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11e48a_def(int ar4,undefined4 *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e48a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((ar5 == (undefined4 *)(unsigned)0x0) || (ar6 == (uint *)(unsigned)0x0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,0x13,a6,ar7));
      uVar2 = uVar2 & 0xff;
    }
    else {
      iVar1 = *(int *)(unsigned)(0xfc + ar4);
      uVar2 = (uint)(*(int *)(unsigned)(0x100 + ar4) != 0);
      *ar6 = uVar2;
      if (uVar2 == 0) {
        *ar5 = 0;
      }
      else {
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x14))))(8,0xf4 + ar4,a6,ar7));
        *ar5 = puVar3;
        if (*(int *)(unsigned)(0x100 + ar4) != 0) {
          *puVar3 = *(undefined4 *)(unsigned)(0x100 + ar4);
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
//@unit 8c11e82c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e82c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e82c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cad4(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(iVar1,9,vr6,vr7));
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x18))))(*ar4,iVar1 + 8,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x18))))(ar4,iVar1 + 8,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11e896_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e896";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(*(undefined4 *)(unsigned)(ar5 + 4),ar4 + 8,ar6,ar7));
  if (ar4_00 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,ar5,*(undefined4 *)(unsigned)(ar5 + 4),ar7));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c11e896\n.set _FUN_8c11e896, _FUN_8c11e896_def\n");
//@unit 8c11e8d6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e8d6_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e8d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if (ar5 == (int *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x13,a6,ar7));
    }
    else if (*ar5 == 2) {
      if ((ar6 != 0) || (ar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11e896(ar4,ar5,a6,ar7)), ar5 != (int *)(unsigned)0x0)) {
        iVar1 = ar4 + 8;
        puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(0x1c,iVar1,a6,ar7));
        if (puVar2 != (undefined4 *)(unsigned)0x0) {
          puVar2[1] = 0;
          puVar2[2] = (uint)(ar6 == 0);
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x1c))))(ar4 + 8,iVar1,a6,ar7));
          puVar2[3] = uVar3;
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x20))))(ar4 + 8,iVar1,a6,ar7));
          uVar3 = 0x2783d5f5;
          puVar2[4] = uVar4;
          puVar2[6] = uVar3;
          *puVar2 = ar5;
          puVar2[5] = ar4;
          return puVar2;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0x71,a6,ar7));
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(ar4,0xd,a6,ar7));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11e8d6\n.set _FUN_8c11e8d6, _FUN_8c11e8d6_def\n");
//@unit 8c11e9b4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11e9b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11e9b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cb54(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(iVar1,5,vr6,vr7));
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x18))))(*ar4,iVar1 + 8,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + 0x18))))(ar4,iVar1 + 8,ar6,ar7));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ea3c_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ea3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  int *ar5_01;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  ar5_01 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if ((*(short *)(unsigned)(ar4 + 0x3e) != 2) && (*(short *)(unsigned)(ar4 + 0x3e) != 1)) {
      ar5_00 = 7;
      uVar4 = *(undefined4 *)(unsigned)(0xfc + ar4);
LAB_8c11eaae:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11cd02(uVar4,ar5_00,ar6,ar7));
      return uVar4;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    if (ar5 != (int *)(unsigned)0x0) {
      ar6 = (int)0x80;
      ar5_01 = (int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x100 + ar4)) + 8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c013ec0(*ar5 + 8,ar5_01,ar6,ar7));
      if (iVar2 != 0) {
        ar5_00 = 0xc;
        uVar4 = *(undefined4 *)(unsigned)(0xfc + ar4);
        goto LAB_8c11eaae;
      }
    }
    iVar2 = (int)0x104;
    if (*(int *)(unsigned)(iVar2 + ar4) != 0) {
      *(int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) + 4) + -1;
    }
    puVar1 = ((void *)(unsigned)0x8c11c99a);
    if (ar5 == (int *)(unsigned)0x0) {
      *(undefined4 *)(unsigned)(iVar2 + ar4) = 0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,1,ar6,ar7));
      return uVar3 & 0xff;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11cb54(ar5,ar5_01,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c10ca2e(((int *)(fr0_ - 0x5c)),ar5_01,ar6,ar7));
      ((int *)(fr0_ - 0x5c))[0] = *ar5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c120348(ar4 + 0x48,0x24,((int *)(fr0_ - 0x5c)),0));
      if ((uVar3 & 0xff) == 0) {
        iVar2 = (int)0x104;
        ar5[1] = ar5[1] + 1;
        *(unsigned *)(unsigned)(iVar2 + ar4) = ar5;
        return *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ea3c\n.set _FUN_8c11ea3c, _FUN_8c11ea3c_def\n");
//@unit 8c11eb6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11eb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11eb6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 0;
  }
  return *(undefined4 *)(unsigned)(0x104 + ar4);
}

__asm__(".globl _FUN_8c11eb6c\n.set _FUN_8c11eb6c, _FUN_8c11eb6c_def\n");
//@unit 8c11eb8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11eb8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c120348(ar4 + 0x48,0x11,0,0));
  if (((uVar1 & 0xff) == 0) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dc7e(ar4,1,((undefined4 *)(fr0_ - 0xc)),uVar4)), iVar2 == 0)) {
    ar6_00 = 0;
    uVar3 = 1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dda2(ar4,1,0,uVar4));
    if ((iVar2 == 0) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c12212e(ar4,uVar3,ar6_00,uVar4)), (uVar1 & 0xff) == 0)) {
      uVar3 = 0;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c122230(ar4,(&(*(undefined1 *)(unsigned)0x8c127c1d)),0,uVar4));
      if (((uVar1 & 0xff) == 0) &&
         (uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1222b4(ar4,(&(*(undefined1 *)(unsigned)0x8c127c1d)),uVar3,uVar4)), (uVar1 & 0xff) == 0
         )) {
        uVar4 = 0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c120348(ar4 + 0x48,0x15,0,0));
        if (((uVar1 & 0xff) == 0) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dda2(ar4,1,((undefined4 *)(fr0_ - 0xc))[0],uVar4)), iVar2 == 0)) {
          *(undefined2 *)(unsigned)(0x144 + ar4) = 0;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11ec7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ec7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
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
  undefined8 in_dr12 = 0;
  undefined8 uVar13;
  float fVar14;
  undefined8 in_dr14 = 0;
  code *pcVar15;
  char cVar16;
  
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  iVar10 = *(int *)(unsigned)(ar4 + 0xfc);
  (*(uint *)(fr0_ - 0x40)) = 0x1e;
  if (*(int *)(unsigned)(ar4 + 0x14c) == 0) {
LAB_8c11f120:
    uVar5 = 0;
  }
  else {
    (*(int *)(fr0_ - 0x34)) = ar4;
    a4 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(0x78,ar4 + 0xf4,ar6,ar7));
    fVar14 = (float)in_dr14;
    if (a4 == 0) {
      uVar5 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11cd02(iVar10,1,ar6,ar7));
      return uVar5;
    }
    iVar8 = *(int *)(unsigned)(ar4 + 0x14c);
    iVar9 = *(int *)(unsigned)(iVar8 + 0xc);
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(iVar8 + 0x10))));
    uVar1 = *(ushort *)(unsigned)(iVar9 + 0x14);
    *(undefined4 *)(unsigned)(iVar8 + 0x10) = 0;
    ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c11c5e4(ar4,&(*(int *)(fr0_ - 0x48)),*(undefined4 *)(unsigned)(ar4 + 0x14c),0); });
    ar7_00 = (uint *)(unsigned)0x0;
    *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x14c) + 0x10) = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x48)) + 4) + 0x14))));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x11,0,0));
    if (((uVar3 & 0xff) == 0) && (iVar8 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dc7e(ar4,1,&(*(undefined4 *)(fr0_ - 0x38)),ar7_00)), iVar8 == 0)) {
      ar6_00 = (int *)(unsigned)0x0;
      iVar8 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dda2(ar4,1,0,ar7_00));
      if (iVar8 == 0) {
        iVar8 = 0;
        cVar16 = '\0';
        uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11d432(ar4,0,ar6_00,ar7_00));
        if ((uVar3 & 0xff) == 0) {
          uVar3 = (uint)uVar1;
          if (cVar16 == '\0') {
            uVar13 = 0x445925b1;
            pcVar15 = (code *)0x3a83126e;
          }
          else {
            uVar13 = 0x445925b100000000;
            fVar14 = 0.0009999999;
            pcVar15 = ((void *)0x8c12212e);
          }
          while( true ) {
            (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 4));
            iVar9 = *(int *)(unsigned)(iVar9 + 0x10);
            if (*(int *)(unsigned)(iVar9 + 0x10) == 0) break;
            (*(uint *)(fr0_ - 0x44)) = (uint)*(ushort *)(unsigned)(iVar9 + 0x14);
            uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c12212e(ar4,iVar8,ar6_00,ar7_00));
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = ({ unsigned long t0_ = (unsigned long)((*(uint *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c12215c(ar4,((undefined1 *)(unsigned)0x8c127c1d),0,uVar3); }), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            ar6_00 = &(*(int *)(fr0_ - 0x54));
            ar7_00 = &(*(uint *)(fr0_ - 0x58));
            uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x20,ar6_00,&(*(uint *)(fr0_ - 0x58))));
            if (((uVar4 & 0xff) != 0) ||
               (uVar4 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120284((*(int *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c127c1d),ar6_00,ar7_00)), (uVar4 & 0xff) != 0))
            goto LAB_8c11f0fa;
            iVar8 = ar4 + 0xf4;
            (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[3],iVar8,ar6_00,ar7_00));
            puVar2 = ((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
            *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) = (*(uint *)(fr0_ - 0x58));
            if ((*(uint *)(fr0_ - 0x58)) != 0) {
              a5 = ar4 + 0xf4;
              iVar8 = (*(uint *)(fr0_ - 0x58)) * 0xc;
              cVar16 = '\0';
              uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(iVar8,a5,ar6_00,ar7_00));
              puVar2[3] = uVar3;
              if ((*(uint *)(fr0_ - 0x40)) < (*(uint *)(fr0_ - 0x58))) {
                (*(uint *)(fr0_ - 0x40)) = (*(uint *)(fr0_ - 0x58));
                (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(a4,ar4 + 0xf4,ar6_00,ar7_00));
                iVar8 = (*(uint *)(fr0_ - 0x40)) << 2;
                a5 = ar4 + 0xf4;
                cVar16 = '\0';
                a4 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x14))))(iVar8,a5,ar6_00,ar7_00));
              }
              if (cVar16 == '\0') {
                fVar14 = F32HI(uVar13);
              }
              uVar4 = 0;
              if ((*(uint *)(fr0_ - 0x58)) != 0) {
                do {
                  (*(int *)(fr0_ - 0x3c)) = uVar4 * 4;
                  pfVar7 = (float *)(unsigned)((*(int *)(fr0_ - 0x3c)) + a4);
                  uVar11 = 0x408f400000000000;
                  cVar16 = '\0';
                  (vsp = ((unsigned long)(fr0_ - 88)), thunk_FUN_8c013cd8(iVar8,a5,ar6_00,ar7_00));
                  uVar4 = uVar4 + 1;
                  fVar12 = F32HI(uVar11);
                  if (cVar16 == '\0') {
                    *pfVar7 = fVar12;
                  }
                  else {
                    *(undefined8 *)(unsigned)pfVar7 = uVar11;
                  }
                  fVar14 = fVar14 + fVar12;
                } while (uVar4 < (*(uint *)(fr0_ - 0x58)));
                uVar4 = 0;
                if ((*(uint *)(fr0_ - 0x58)) != 0) {
                  do {
                    fVar12 = F32HI(uVar11);
                    if (*(float *)(unsigned)(uVar4 * 4 + a4) / fVar14 <= (float)(uint)pcVar15) {
                      *(undefined4 *)(unsigned)(uVar4 * 0xc + uVar3) = 6000;
                    }
                    else {
                      piVar6 = (int *)(unsigned)(uVar4 * 0xc + uVar3);
                      (vsp = ((unsigned long)(fr0_ - 88)), thunk_FUN_8c013dfc(iVar8,a5,ar6_00,ar7_00));
                      uVar11 = 0x3fe0000000000000;
                      *piVar6 = (int)(-(fVar12 * (float)uVar13) + 0.5);
                    }
                    iVar8 = uVar4 * 4;
                    a5 = uVar4 * 0xc + uVar3;
                    *(int *)(unsigned)(a5 + 4) = (int)*(short *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 2);
                    (*(undefined4 *)(fr0_ - 0x50)) = CONCAT22(*(undefined2 *)(unsigned)
                                          (*(int *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 0xc) + 4),
                                         *(undefined2 *)(unsigned)
                                          (*(int *)(unsigned)(*(int *)(unsigned)((*(int *)(fr0_ - 0x54)) + iVar8) + 0xc) + 2));
                    uVar4 = uVar4 + 1;
                    *(undefined4 *)(unsigned)(a5 + 8) = (*(undefined4 *)(fr0_ - 0x50));
                  } while (uVar4 < (*(uint *)(fr0_ - 0x58)));
                }
              }
              iVar8 = ar4 + 0xf4;
              (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))((*(int *)(fr0_ - 0x54)),iVar8,ar6_00,ar7_00));
              uVar3 = (*(uint *)(fr0_ - 0x44));
            }
          }
          ar7_01 = 0;
          uVar5 = 0;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x20,0,0));
          if (((uVar3 & 0xff) == 0) &&
             (uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11d432(ar4,1,uVar5,ar7_01)), (uVar3 & 0xff) == 0)) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc4))))((*(int *)(fr0_ - 0x48)),ar4 + 0xf4,uVar5,ar7_01));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11c7b8(ar4,(*(int *)(fr0_ - 0x48)),uVar5,ar7_01));
            if ((uVar3 & 0xff) != 0) {
              return uVar3;
            }
            (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar10 + 0x18))))(a4,ar4 + 0xf4,uVar5,ar7_01));
            uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11c99a(ar4,2,uVar5,ar7_01));
            if ((uVar3 & 0xff) == 0) {
              uVar5 = 0;
              uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c120348(ar4 + 0x48,0x15,0,0));
              if (((uVar3 & 0xff) == 0) &&
                 (iVar10 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c11dda2(ar4,1,(*(undefined4 *)(fr0_ - 0x38)),uVar5)), iVar10 == 0)) {
                *(undefined2 *)(unsigned)(ar4 + 0x144) = 0;
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11f13e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f13e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(int *)(unsigned)(0x10c + ar4) = ar5;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c127c1d));
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c18));
  if (ar5 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 100);
    *(undefined4 *)(unsigned)(0x114 + ar4) = 0;
    if ((*(int *)(unsigned)(0x88 + ar4) == 0) || (*(char *)(unsigned)(0x234 + ar4) != '\0')) {
      cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x34,0,vr7));
    }
    else {
      cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x33,0,vr7));
    }
  }
  else if (ar5 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x68);
    *(unsigned *)(unsigned)(0x114 + ar4) = puVar2;
    cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x2b,0,vr7));
  }
  else {
    if (ar5 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    *(unsigned *)(unsigned)(0x114 + ar4) = puVar3;
    cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x2c,0,vr7));
  }
  if ((cVar4 == '\0') &&
     (((*(int *)(unsigned)(0x88 + ar4) == 0 || (ar5 == 0)) ||
      (cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,2,0,vr7)), cVar4 == '\0')))) {
    *(uint *)(unsigned)(0x110 + ar4) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x60) + 0xc);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11f14a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f14a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar4;
  undefined4 uVar5;
  int unaff_r12 = 0;
  int unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(in_r0 + unaff_r14) = ar5;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c127c1d));
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c18));
  if (unaff_r12 == 0) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 100);
    *(undefined4 *)(unsigned)(0x114 + unaff_r14) = 0;
    if ((*(int *)(unsigned)(0x88 + unaff_r14) == 0) || (*(char *)(unsigned)(0x234 + unaff_r14) != '\0'))
    {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x34,0,0));
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x33,0,0));
    }
  }
  else if (unaff_r12 == 1) {
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 0x68);
    *(unsigned *)(unsigned)(0x114 + unaff_r14) = puVar2;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x2b,0,0));
  }
  else {
    if (unaff_r12 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unsigned)(unaff_r14 + 0x60) = *(undefined4 *)(unsigned)(unaff_r14 + 0x6c);
    *(unsigned *)(unsigned)(0x114 + unaff_r14) = puVar3;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,0x2c,0,0));
  }
  if (((uVar4 & 0xff) == 0) &&
     (((*(int *)(unsigned)(0x88 + unaff_r14) == 0 || (unaff_r12 == 0)) ||
      (uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,2,0,0)), (uVar4 & 0xff) == 0)))) {
    *(uint *)(unsigned)(0x110 + unaff_r14) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x60) + 0xc);
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11f258_def(int ar4,uint ar5,undefined1 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11f258";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar5 == 0) {
    if (ar6 == (undefined1 *)(unsigned)0x0) {
      uVar11 = 0x13;
    }
    else {
      sVar2 = *(short *)(unsigned)(ar4 + 0x3e);
      uVar8 = (uint)sVar2;
      if (((sVar2 == 3) || (sVar2 == 4)) || (sVar2 == 7)) {
        if (*(int *)(unsigned)(0x10c + ar4) == 3) {
          uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11f13e(ar4,ar5,puVar10,iVar9));
          uVar8 = ar5;
          if ((uVar6 & 0xff) != 0) {
            return uVar6 & 0xff;
          }
        }
        else if (ar5 != *(uint *)(unsigned)(0x10c + ar4)) {
          uVar11 = 1;
          goto override_prt_8c11f2f4_7a4d7f16;
        }
        puVar4 = ((void *)(unsigned)0x8c120284);
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
        uVar13 = *(uint *)(unsigned)(0x110 + ar4);
        for (uVar6 = ar7 + (uint)*(ushort *)(unsigned)(0x22a + ar4); uVar13 <= uVar6;
            uVar6 = uVar6 - uVar13) {
          if (*(short *)(unsigned)(0x22a + ar4) == 0) {
            puVar10 = (undefined1 *)(unsigned)0x1;
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x60),ar6,1,iVar9));
            if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            if (*(int *)(unsigned)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)(unsigned)0x1;
              uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x70),ar6,1,iVar9));
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
            ar6 = ar6 + uVar13;
          }
          else {
            iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 0x60),uVar8,puVar10,iVar9));
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                      (iVar5,0x150 + ar4,(uint)*(ushort *)(unsigned)(0x22a + ar4),iVar9));
            puVar10 = (undefined1 *)(unsigned)(uVar13 - *(ushort *)(unsigned)(0x22a + ar4));
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                      (iVar5 + (uint)*(ushort *)(unsigned)(0x22a + ar4),ar6,puVar10,iVar9));
            uVar3 = *(ushort *)(unsigned)(0x22a + ar4);
            *(undefined2 *)(unsigned)(0x22a + ar4) = 0;
            ar6 = ar6 + (uVar13 - uVar3);
            if (*(int *)(unsigned)(0x10c + ar4) == 2) {
              puVar10 = (undefined1 *)(unsigned)0x1;
              uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111cdc(*(undefined4 *)(unsigned)(ar4 + 0x70),iVar5,1,iVar9));
              if ((uVar8 & 0xff) == 0) goto LAB_8c11f57e;
            }
          }
          iVar5 = (int)0x13c;
          *(int *)(unsigned)(iVar5 + ar4) = *(int *)(unsigned)(iVar5 + ar4) + 1;
          uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(iVar5 + -0x28 + ar4),puVar10,iVar9));
          if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
          uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
          uVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
          if ((uVar7 & 0xff) != 0) goto LAB_8c11f504;
          if (*(int *)(unsigned)(0x140 + ar4) != 0) {
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(0x114 + ar4),puVar10,iVar9));
            if ((uVar8 & 0xff) != 0) goto LAB_8c11f5ba;
            uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
            uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
joined_r0x8c11f48c:
            if ((uVar6 & 0xff) != 0) {
LAB_8c11f504:
              return *(undefined4 *)(unsigned)(ar4 + 0x40);
            }
            uVar6 = 0;
            break;
          }
          if ((*(uint *)(unsigned)(ar4 + 0x78) != 0) &&
             (*(uint *)(unsigned)(ar4 + 0x78) < *(uint *)(unsigned)(0x13c + ar4))) {
            iVar9 = 0;
            puVar10 = (undefined1 *)(unsigned)0x0;
            uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,3,0,0));
            if (((uVar8 & 0xff) == 0) &&
               (uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar4)))(ar4,*(undefined4 *)(unsigned)(0x114 + ar4),puVar10,iVar9)),
               (uVar8 & 0xff) == 0)) {
              uVar8 = (uint)*(ushort *)(unsigned)(0x244 + ar4);
              uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d488(ar4,uVar8,puVar10,iVar9));
              goto joined_r0x8c11f48c;
            }
            goto LAB_8c11f5ba;
          }
        }
        if ((*(short *)(unsigned)(0x144 + ar4) != 0) &&
           (((*(short *)(unsigned)(0x144 + ar4) == 1 &&
             (uVar13 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11eb8c(ar4,uVar8,puVar10,iVar9)), (uVar13 & 0xff) != 0)) ||
            ((*(short *)(unsigned)(0x144 + ar4) == 2 &&
             (uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ec7c(ar4,uVar8,puVar10,iVar9)), (uVar8 & 0xff) != 0)))))) {
LAB_8c11f5ba:
          return *(undefined4 *)(unsigned)(ar4 + 0x40);
        }
        if (*(int *)(unsigned)(0x148 + ar4) == 4) {
          iVar9 = (int)0x22a;
          uVar8 = (uint)*(ushort *)(unsigned)(iVar9 + ar4);
          puVar10 = (undefined1 *)(unsigned)(0x150 + ar4 + uVar8);
          for (; uVar8 < uVar6; uVar8 = uVar8 + 1) {
            uVar1 = *ar6;
            ar6 = ar6 + 1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + 1;
          }
          *(short *)(unsigned)(iVar9 + ar4) = (short)uVar6;
          goto LAB_8c11f5ba;
        }
        iVar5 = (int)0x148;
        iVar12 = (int)0xf4;
        uVar11 = *(undefined4 *)(unsigned)(iVar5 + ar4);
        *(undefined4 *)(unsigned)(iVar5 + ar4) = 4;
        uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + -0x7c + ar4))))(uVar11,iVar12 + ar4,puVar10,iVar9));
        if ((uVar8 & 0xff) == 0) goto LAB_8c11f5ba;
        goto LAB_8c11f57e;
      }
      uVar11 = 7;
    }
override_prt_8c11f2f4_7a4d7f16:
    uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,uVar11,puVar10,iVar9));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11f5d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f5d2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 a4;
  int iVar4;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 != 0) {
    return 1;
  }
  sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
  if (((sVar1 != 6) && (sVar1 != 8)) && (sVar1 != 9)) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,ar6,ar7));
    return uVar3 & 0xff;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c121cc0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x148 + ar4) != 4) {
    iVar2 = (int)0x148;
    iVar4 = (int)0xf4;
    a4 = *(undefined4 *)(unsigned)(iVar2 + ar4);
    *(undefined4 *)(unsigned)(iVar2 + ar4) = 4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + -0x7c + ar4))))(a4,iVar4 + ar4,ar6,ar7));
  }
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11f5d2\n.set _FUN_8c11f5d2, _FUN_8c11f5d2_def\n");
//@unit 8c11f66a
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11f66a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f66a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 a5;
  
  iVar5 = ar6;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c1204c4);
  if (iVar3 != 0) {
    return 1;
  }
  if ((ar5 == 0) || (ar6 == 0)) {
    a5 = 0x13;
  }
  else {
    sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
    if ((sVar1 == 1) || (sVar1 == 2)) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0x108 + ar4) + 0x50))))
                        (*(int *)(unsigned)(0x108 + ar4),(int)sVar1,iVar5,ar7));
      if (iVar3 == 0) {
        a5 = 0x15;
      }
      else {
        if (*(int *)(unsigned)(0x88 + ar4) == 0) {
          if ((*(int *)(unsigned)(0x104 + ar4) != 0) &&
             (iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ea3c(ar4,0,iVar5,ar7)), iVar5 != 0)) {
            return *(undefined4 *)(unsigned)(ar4 + 0x40);
          }
          iVar5 = 0;
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 3;
            iVar6 = (int)0x118;
            *(undefined4 *)(unsigned)(0x124 + ar4 + iVar5) =
                 *(undefined4 *)(unsigned)(0x118 + ar4 + iVar5);
            iVar7 = (int)0x118;
            *(undefined4 *)(unsigned)(0x124 + ar4 + iVar5 + 4) =
                 *(undefined4 *)(unsigned)(iVar6 + ar4 + iVar5 + 4);
            *(undefined4 *)(unsigned)(0x124 + ar4 + iVar5 + 8) =
                 *(undefined4 *)(unsigned)(iVar7 + ar4 + iVar5 + 8);
            iVar5 = iVar5 + 0xc;
          } while (iVar3 < 3);
          *(undefined4 *)(unsigned)(0x148 + ar4) = 4;
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c121d36(ar4,3,ar5,ar6));
          goto LAB_8c11f79a;
        }
        a5 = 0x16;
      }
    }
    else {
      a5 = 7;
    }
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,a5,iVar5,ar7));
LAB_8c11f79a:
  return uVar4 & 0xff;
}

__asm__(".globl _FUN_8c11f66a\n.set _FUN_8c11f66a, _FUN_8c11f66a_def\n");
//@unit 8c11f7bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11f7bc_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11f7bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = *(int *)(unsigned)(0xfc + ar4);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(unsigned)(ar5 * 0xc + *(int *)(unsigned)(iVar1 + ar4) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    piVar2 = (int *)(unsigned)(0x268 + ar4);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x18))))(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + ar4)),0xf4 + ar4,0,vr7));
    }
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + ar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x14))))(iVar7 * 6,0xf4 + ar4,vr6,vr7));
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)(unsigned)*piVar6;
  if (ar7 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; ar7 != 0; ar7 = *(int *)(unsigned)(ar7 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unsigned)(ar7 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7bc\n.set _FUN_8c11f7bc, _FUN_8c11f7bc_def\n");
//@unit 8c11f7d6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11f7d6_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f7d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 a6;
  int iVar5;
  int unaff_r11 = 0;
  int *piVar6;
  int iVar7;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  iVar5 = *(int *)(unsigned)(in_r0 + unaff_r13);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(unsigned)(unaff_r11 * 4 + *(int *)(unsigned)(iVar1 + unaff_r13) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    a6 = 3;
    piVar2 = (int *)(unsigned)(0x268 + unaff_r13);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (*((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r13)) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x18))))
                (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + unaff_r13)),0xf4 + unaff_r13,3,ar7));
    }
    piVar2 = ((int *)(unsigned long)*(unsigned *)(unsigned)(0x2b0 + unaff_r13));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x14))))(iVar7 * 6,0xf4 + unaff_r13,a6,ar7));
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)(unsigned)*piVar6;
  if (unaff_r14 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; unaff_r14 != 0; unaff_r14 = *(int *)(unsigned)(unaff_r14 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unsigned)(unaff_r14 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7d6\n.set _FUN_8c11f7d6, _FUN_8c11f7d6_def\n");
//@unit 8c11f898
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11f898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
  fVar3 = *pfVar1;
  fVar2 = fVar3;
  while (pfVar1 = pfVar1 + 1, pfVar1 < ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30))) {
    if (*pfVar1 < fVar2) {
      fVar2 = *pfVar1;
    }
    if (fVar3 < *pfVar1) {
      fVar3 = *pfVar1;
    }
  }
  return (uint)(fVar3 - fVar2 < *(float *)(unsigned)(ar4 + 0x38));
}

__asm__(".globl _FUN_8c11f898\n.set _FUN_8c11f898, _FUN_8c11f898_def\n");
//@unit 8c11f8de
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11f8de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f8de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 ar5_00;
  float in_fr3 = 0;
  float fVar5;
  undefined4 in_PR = 0;
  char cVar6;
  
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6
                                   ,ar7));
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0xc)) = *pfVar2;
      (*(undefined4 *)(fr0_ - 0x8)) = in_PR;
      in_fr3 = (*(float *)(fr0_ - 0xc));
    }
    else {
      (*(float *)(fr0_ - 0xc)) = (float)*(undefined8 *)(unsigned)pfVar2;
      (*(undefined4 *)(fr0_ - 0x8)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
    }
    ar5_00 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc);
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111fbe(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8),ar5_00,ar6,ar7));
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x10)) = *pfVar2;
      in_fr3 = (*(float *)(fr0_ - 0x10));
    }
    else {
      (*(float *)(fr0_ - 0x10)) = (float)*(undefined8 *)(unsigned)pfVar2;
      (*(float *)(fr0_ - 0xc)) = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
    }
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5_00,ar6,ar7));
    pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    *(unsigned *)(unsigned)(ar4 + 0x34) = pfVar3 + 1;
    if (cVar6 == '\0') {
      *pfVar3 = (*(float *)(fr0_ - 0xc));
      in_fr3 = (*(float *)(fr0_ - 0xc));
    }
    else {
      *(ulonglong *)(unsigned)(pfVar3 + -1) = CONCAT44((*(undefined4 *)(fr0_ - 0x8)),(*(float *)(fr0_ - 0xc)));
    }
    if (*(int *)(unsigned)(ar4 + 0x34) == *(int *)(unsigned)(ar4 + 0x30)) {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
    }
    cVar6 = '\0';
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11f898(ar4,ar5_00,ar6,ar7));
    pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x44));
    if (cVar6 == '\0') {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar3 >> 0x20);
      pfVar3 = pfVar3 + 2;
    }
    *(unsigned *)(unsigned)(ar4 + 0x44) = pfVar3;
    if (cVar6 == '\0') {
      pfVar3[-1] = (*(float *)(fr0_ - 0x10));
      in_fr3 = (*(float *)(fr0_ - 0x10));
    }
    else {
      *(ulonglong *)(unsigned)(pfVar3 + -2) = CONCAT44((*(float *)(fr0_ - 0xc)),(*(float *)(fr0_ - 0x10)));
    }
    if (*(int *)(unsigned)(ar4 + 0x44) == *(int *)(unsigned)(ar4 + 0x40)) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
    }
    if (cVar6 == '\0') {
      in_fr3 = 0.0;
    }
    if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
      fVar5 = fVar5 * 0.099999994;
    }
    *pfVar2 = fVar5;
  }
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)(piVar4[1] * 4 + *(int *)(unsigned)(*piVar4 + 0x40)) != *(int *)(unsigned)(*piVar4 + 0x3c)) &&
     (*(int *)(unsigned)(*(int *)(unsigned)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(unsigned)(piVar4[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11f8de\n.set _FUN_8c11f8de, _FUN_8c11f8de_def\n");
//@unit 8c11fa1e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11fa1e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fa1e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int in_r1 = (int)(unsigned long)vin1;
  int a5;
  int *unaff_r13 = 0;
  int a4;
  
  a4 = *unaff_r13;
  if (in_r0 == in_r1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,unaff_r13[0xb],ar6,ar7));
    a5 = unaff_r13[0xf];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,a5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120668(unaff_r13,a5,ar6,ar7));
  }
  return (uint)(in_r0 == in_r1);
}

__asm__(".globl _FUN_8c11fa1e\n.set _FUN_8c11fa1e, _FUN_8c11fa1e_def\n");
//@unit 8c11fa64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fa64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fa64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int a4;
  int *unaff_r14 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  uint in_fr5 = 0;
  ulonglong uVar4;
  char cVar5;
  
  a4 = *unaff_r14;
  *(undefined2 *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = (undefined2)ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,1,ar6,ar7));
  unaff_r14[10] = (int)extraout_fr0 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  unaff_r14[0xe] = (int)(float)(int)(short)(int)extraout_fr0_00;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[10] * 2 + 1,4,ar7));
  unaff_r14[0xb] = iVar1;
  uVar3 = 4;
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,unaff_r14[10],4,ar7));
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
          *(int *)(unsigned)(unaff_r14[0xb] + iVar1) = (int)(uVar4 >> 0x20);
        }
        else {
          *(ulonglong *)(unsigned)(unaff_r14[0xb] + iVar1) = uVar4;
        }
      } while (uVar2 < unaff_r14[10] * 2 + 1U);
    }
    unaff_r14[0xc] = unaff_r14[10] * 8 + unaff_r14[0xb] + 4;
    unaff_r14[0xd] = unaff_r14[0xb];
    unaff_r14[0x10] = unaff_r14[10] * 4 + unaff_r14[0xf];
    unaff_r14[0x11] = unaff_r14[0xf];
    return 0;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,2,uVar3,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c11fa64\n.set _FUN_8c11fa64, _FUN_8c11fa64_def\n");
//@unit 8c11fb64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fb64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fb64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11f8de)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11fa5e))); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11fa14))); unsigned long t3_ = (unsigned long)(0x48); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,2,1); });
  return uVar1;
}

__asm__(".globl _FUN_8c11fb64\n.set _FUN_8c11fb64, _FUN_8c11fb64_def\n");
//@unit 8c11fb98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c013dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c013dfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013dfc)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013dfc\n.set _thunk_FUN_8c013dfc, _thunk_FUN_8c013dfc_def\n");
//@unit 8c11fb9e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c013cd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c013cd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013cd8)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013cd8\n.set _thunk_FUN_8c013cd8, _thunk_FUN_8c013cd8_def\n");
//@unit 8c11fba4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c013d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c013d28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013d28)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013d28\n.set _thunk_FUN_8c013d28, _thunk_FUN_8c013d28_def\n");
//@unit 8c11fbaa
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c013be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c013be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013be8(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013be8\n.set _thunk_FUN_8c013be8, _thunk_FUN_8c013be8_def\n");
//@unit 8c11fbb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c014064_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c014064";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c014064)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c014064\n.set _thunk_FUN_8c014064, _thunk_FUN_8c014064_def\n");
//@unit 8c11fbb6
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fbb6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fbb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c11fbb6\n.set _FUN_8c11fbb6, _FUN_8c11fbb6_def\n");
//@unit 8c11fbbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c0142e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c0142e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c0142e4)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c0142e4\n.set _thunk_FUN_8c0142e4, _thunk_FUN_8c0142e4_def\n");
//@unit 8c11fbc2
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c013c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "thunk_FUN_8c013c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013c88)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c013c88\n.set _thunk_FUN_8c013c88, _thunk_FUN_8c013c88_def\n");
//@unit 8c11fbe4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fbe4_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c11fbe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  *(int *)(unsigned)(*(int *)(unsigned)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x24))))(ar4,ar6,ar7,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 8) != '\0') {
      do {
        if (*(int *)(unsigned)(cVar2 * 8 + *(int *)(unsigned)(ar5 + 0xc)) == 0) {
          *(int *)(unsigned)(*(int *)(unsigned)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(int *)(unsigned)(cVar2 * 8 + *(int *)(unsigned)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 8));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fbe4\n.set _FUN_8c11fbe4, _FUN_8c11fbe4_def\n");
//@unit 8c11fc5e
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fc5e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11fc5e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(ar4,ar6,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 9) != '\0') {
      do {
        if (*(int *)(unsigned)(cVar2 * 4 + *(int *)(unsigned)(ar5 + 0x10)) == 0) {
          *(undefined4 *)(unsigned)(cVar2 * 4 + *(int *)(unsigned)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 9));
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c11fc5e\n.set _FUN_8c11fc5e, _FUN_8c11fc5e_def\n");
//@unit 8c11fcc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11fcc4_def(ushort *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c11fcc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(ar4,iVar13 << 2,ar6,ar7));
  *(int *)(unsigned)(ar4 + 2) = iVar5;
  if (iVar5 != 0) {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 8))))(ar4,iVar12 << 2,pbVar9,pbVar8));
    *(int *)(unsigned)(ar4 + 6) = iVar5;
    if (iVar5 != 0) {
      a6 = (byte *)(unsigned)0x1;
      a5 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 10))))(ar4,iVar13 * 2 + iVar12,1,pbVar8));
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
        if (*(int *)(unsigned)(pbVar9 + 4) == 0) {
          if (*pbVar9 == 0) {
            a6 = (byte *)(unsigned)(int)*a5;
            uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x10))))(ar4,(int)*pcVar7,a6,pbVar8));
            if ((uVar10 & 0xff) != 0) {
              return 1;
            }
          }
        }
        else {
          ar5 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pbVar9 + 4))))(ar4,(int)(char)*pbVar9,a6,pbVar8));
          if (ar5 == (byte *)(unsigned)0x0) {
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
          *(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + (uint)uVar4 * 4) = ar5;
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
          uVar11 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + ((uint)ar6[1] - (uint)ar4[1]) * 4);
        }
        if ((uVar10 & 0xff) != (uint)*ar6) {
          ar5 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1122ac))))
                                  (ar4,(int)(char)*ar6,
                                   (uint)(byte)pcVar7[((uint)*ar6 - (uint)ar4[5]) + iVar13],pbVar8));
          if (ar5 == (byte *)(unsigned)0x0) {
            return 1;
          }
          uVar4 = ar4[4];
          ar4[4] = uVar4 + 1;
          *(unsigned *)(unsigned)((uint)uVar4 * 4 + *(int *)(unsigned)(ar4 + 6)) = ar5;
          uVar10 = (uint)(char)*ar6;
        }
        a6 = ar5;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11fc5e(ar4,uVar11,ar5,pbVar8));
        if ((uVar6 & 0xff) != 0) {
          return 1;
        }
      }
      bVar1 = *ar7;
      while( true ) {
        if (bVar1 == uVar14) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,a5,a6,pbVar8));
          return 0;
        }
        uVar4 = ar4[5];
        bVar1 = *ar7;
        if (ar7[1] == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + ((uint)ar7[1] - (uint)ar4[1]) * 4);
        }
        uVar10 = (int)(char)bVar1 - (int)(short)uVar4 & 0xff;
        cVar2 = pcVar7[uVar10 + iVar13];
        pcVar7[uVar10 + iVar13] = cVar2 - 1U;
        pbVar8 = (byte *)(unsigned)(uint)(byte)(cVar2 - 1U);
        a6 = ((byte *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 6) + ((int)(char)bVar1 - (int)(short)uVar4 & 0xffU) * 4));
        uVar10 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11fbe4(ar4,uVar11,a6,pbVar8));
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
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11ffa8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ffa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
      iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + iVar4 * 4);
      if ((iVar6 != 0) && (*(int *)(unsigned)(iVar6 + 0x1c) != 0)) {
        cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x1c))))(iVar6,iVar5,0,vr7));
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*ar4);
  }
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  iVar4 = 0;
  if (ar4[4] != 0) {
    do {
      if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 6) + iVar4 * 4) != 0) {
        cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar5,0,vr6,vr7));
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)ar4[4]);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,*(undefined4 *)(unsigned)(ar4 + 2),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,*(undefined4 *)(unsigned)(ar4 + 6),vr6,vr7));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffa8\n.set _FUN_8c11ffa8, _FUN_8c11ffa8_def\n");
//@unit 8c11ffb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c11ffb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ffb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  uint unaff_r9 = 0;
  uint uVar3;
  uint uVar4;
  int a5;
  int iVar5;
  ushort *unaff_r14 = 0;
  
  a5 = (int)0xff;
  uVar3 = unaff_r9;
  uVar4 = unaff_r9;
  if (*unaff_r14 != 0) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 2) + uVar4 * 4);
      if ((iVar5 != 0) && (*(int *)(unsigned)(iVar5 + 0x1c) != 0)) {
        ar7 = 0;
        ar6 = 0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x1c))))(iVar5,a5,0,0));
        uVar3 = uVar3 | (uVar2 & 0xff) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)*unaff_r14);
  }
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  if (unaff_r14[4] != 0) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 6) + unaff_r9 * 4);
      if (iVar5 != 0) {
        ar7 = 0;
        ar6 = 0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar5,a5,0,0));
        uVar3 = uVar3 | (uVar4 & 0xff) == 0;
      }
      unaff_r9 = unaff_r9 + 1;
    } while ((int)unaff_r9 < (int)(uint)unaff_r14[4]);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0xc))))(unaff_r14,*(undefined4 *)(unsigned)(unaff_r14 + 2),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0xc))))(unaff_r14,*(undefined4 *)(unsigned)(unaff_r14 + 6),ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffb8\n.set _FUN_8c11ffb8, _FUN_8c11ffb8_def\n");
