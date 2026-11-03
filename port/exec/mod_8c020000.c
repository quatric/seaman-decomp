//@unit 8c02000c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 *
FUN_8c02000c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02000c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(0xd8,ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x200c, (unsigned)puVar1, ar5, 0); }
  if (puVar1 == (undefined4 *)(unsigned)0x0) {
    puVar1 = (undefined4 *)(unsigned)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(puVar1 + 4,ar6,ar6_00,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(puVar1 + 0xc,ar7,ar6_00,ar7_00); });
    puVar1[0x14] = s0;
    puVar1[0x15] = s4;
    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      puVar1[iVar2 + 0x16] = 0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c02000c\n.set _FUN_8c02000c, _FUN_8c02000c_def\n");
//@unit 8c02009c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02009c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02009c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (int *)(unsigned)(uint)ar4[8]; ar5_00[1] != 0; ar5_00 = (int *)(unsigned)ar5_00[1]) {
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020148(ar4,ar5_00 + 0xc,ar6,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5_00,ar6,ar7));
    }
    else {
      iVar1 = *ar5_00;
      if (iVar1 == 0xb) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02041c(ar4,ar5_00,ar6,ar7));
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0202c0(ar4,ar5_00,ar6,ar7));
      }
      if (iVar1 == 1) {
        ar4[1] = ar5_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02009c\n.set _FUN_8c02009c, _FUN_8c02009c_def\n");
//@unit 8c020148
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c020148_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020148";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*ar5 != '\0') {
    ((char *)(fr0_ - 0x3c))[0] = '\0';
    iVar3 = 0;
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      if ((ar5[iVar3] == '\\') || (ar5[iVar3] == '\0')) {
        ((char *)(fr0_ - 0x3c))[iVar2] = '\0';
        iVar1 = 0;
        while( true ) {
          if ((2 < iVar1) || (*(char *)(unsigned)(ar4 + iVar1 * 0x16034 + 0x38) == '\0')) {
            return 0;
          }
          iVar3 = ar4 + iVar1 * 0x16034 + 0x38; { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)((char *)(fr0_ - 0x3c)), (const char *)(unsigned)(unsigned)iVar3, iVar1, 0); }
          iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c020258(((char *)(fr0_ - 0x3c)),iVar3,ar6,ar7));
          if ((iVar2 == 0) &&
             (iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1f3952))))
                                (*(undefined4 *)(unsigned)(ar4 + iVar1 * 0x16034 + 0x58),iVar3,ar6,ar7)),
             iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        return 1;
      }
      ((char *)(fr0_ - 0x3c))[iVar2] = ar5[iVar3];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1f3952(*(undefined4 *)(unsigned)(ar4 + 0x58),ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c020148\n.set _FUN_8c020148, _FUN_8c020148_def\n");
//@unit 8c020258
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020258_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020258";
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

__asm__(".globl _FUN_8c020258\n.set _FUN_8c020258, _FUN_8c020258_def\n");
//@unit 8c0202c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0202c0_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0202c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  ar5[2] = 0;
  *ar4 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5 + 4,ar6,ar7); });
  iVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c26201c(((undefined1 *)(fr0_ - 0x30)),0,ar6,ar7));
  *ar4 = iVar1;
  if (*ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,ar6,ar7));
    uVar2 = 0;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar3,ar6,ar7));
    ar5[3] = iVar1;
    iVar1 = ar5[3] + 0x7ff >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      iVar3 = ar5[0x14];
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c262554(*ar4,iVar3,0,ar7));
    }
    if ((*ar5 < 0xb) && (-1 < *ar5)) {
                    
      ar5[2] = ar4[4];
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(ar5[3] + 0x800,iVar3,ar6,ar7));
      ar5[2] = iVar3;
      if (ar5[2] == 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,ar6,ar7));
        return 0;
      }
    }
    iVar3 = ar5[2];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,iVar1,iVar3,ar7));
    if (iVar1 < 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02049c(ar4,ar5,iVar3,ar7));
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0202c0\n.set _FUN_8c0202c0, _FUN_8c0202c0_def\n");
//@unit 8c02041c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02041c_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02041c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(unsigned)(ar5 + 8) = 0;
  ar4[5] = 0;
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26201c(ar5 + 0x10,0,ar6,ar7));
    *ar4 = iVar1;
    if (*ar4 != 0) break;
  }
  iVar3 = *ar4;
  if (iVar3 != 0) {
    ar4[5] = 1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar2,ar6,ar7));
    ar4[6] = iVar2;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5,ar6,ar7));
  }
  return (uint)(iVar3 != 0);
}

__asm__(".globl _FUN_8c02041c\n.set _FUN_8c02041c, _FUN_8c02041c_def\n");
//@unit 8c02049c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02049c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02049c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *ar5;
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
    piVar3 = ar5;
    if (*ar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(*ar4,ar5,ar6,ar7));
    }
    if (ar5[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar5[2],piVar3,ar6,ar7));
    }
  }
  *ar4 = 0;
  ar5[2] = 0;
  piVar3 = ar5 + 4;
  ({ unsigned long t0_ = (unsigned long)(ar5 + 0xc); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 9,ar5,piVar3));
  return uVar2;
}

__asm__(".globl _FUN_8c02049c\n.set _FUN_8c02049c, _FUN_8c02049c_def\n");
//@unit 8c02051c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02051c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02051c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  
  if (ar6 == 0) {
    ar6_00 = 0;
  }
  else {
    do {
      ar6_00 = ar6;
      if (ar6_00 == 0) {
        return 0;
      }
      ar6 = *(int *)(unsigned)(ar6_00 + 4);
      iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    } while (iVar1 != 1);
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c02051c\n.set _FUN_8c02051c, _FUN_8c02051c_def\n");
//@unit 8c020588
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020588_def(undefined4 ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  
  if (*ar6 == ar5) {
    ar6_00 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020258(ar6 + 4,ar7,ar6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020258(ar6 + 0xc,s0,ar6_00,ar7));
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c020588\n.set _FUN_8c020588, _FUN_8c020588_def\n");
//@unit 8c0205e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0205e8_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0205e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*ar5 == 0) {
    *ar5 = ar6;
    return 0;
  }
  iVar1 = *ar5;
  *(int *)(unsigned)(ar6 + 4) = iVar1;
  *ar5 = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0205e8\n.set _FUN_8c0205e8, _FUN_8c0205e8_def\n");
//@unit 8c020600
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c020600_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020600";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  ar6_00 = *ar6;
  if (ar6_00 == 0) {
    ar6_00 = 0;
  }
  else {
    iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    if (iVar1 == 1) {
      *ar6 = *(int *)(unsigned)(ar6_00 + 4);
    }
    else if (*(int *)(unsigned)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(int *)(unsigned)(*(int *)(unsigned)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(int *)(unsigned)(ar6_00 + 4);
      while (iVar2 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); }), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(unsigned)(*(int *)(unsigned)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(int *)(unsigned)(ar6_00 + 4);
      }
      *(int *)(unsigned)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c020600\n.set _FUN_8c020600, _FUN_8c020600_def\n");
//@unit 8c0206b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0206b8_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0206b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(unsigned)(ar5 + iVar2 * 4 + 0x58);
    if (iVar1 == ar6) {
      return iVar1;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0x20;
    }
    if (*(int *)(unsigned)(ar5 + iVar2 * 4 + 0x58) == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(int *)(unsigned)(ar5 + iVar2 * 4 + 0x58) = ar6;
  return 0x58;
}

__asm__(".globl _FUN_8c0206b8\n.set _FUN_8c0206b8, _FUN_8c0206b8_def\n");
//@unit 8c020714
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020714_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020714";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  do {
    if (0x1f < iVar1) {
LAB_8c02074c:
      iVar1 = 0;
      while( true ) {
        if (0x1f < iVar1) {
          return 0;
        }
        if (*(int *)(unsigned)(ar5 + iVar1 * 4 + 0x58) != 0) break;
        iVar1 = iVar1 + 1;
      }
      return 1;
    }
    if (*(int *)(unsigned)(ar5 + iVar1 * 4 + 0x58) == ar6) {
      *(undefined4 *)(unsigned)(ar5 + iVar1 * 4 + 0x58) = 0;
      goto LAB_8c02074c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c020714\n.set _FUN_8c020714, _FUN_8c020714_def\n");
//@unit 8c02077c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
FUN_8c02077c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02077c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 * s4 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 4);
  undefined4 * s8 = (undefined4 *)(unsigned long)*(unsigned *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);
  undefined4 s20 = *(undefined4 *)(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*(undefined4 *)(unsigned)(ar4 + 0x20),ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*(undefined4 *)(unsigned)(ar4 + 0x24),ar7));
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02000c(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(unsigned)(iVar1 + 8) = *s4;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x20,iVar1,s0));
        }
        else {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(s12); unsigned long t1_ = (unsigned long)(s16); unsigned long t2_ = (unsigned long)(s20); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c01ffa0(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
        *s4 = *(undefined4 *)(unsigned)(iVar1 + 8);
        *s8 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(s20); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,ar5,ar4 + 0x24,ar7); });
      uVar2 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02077c\n.set _FUN_8c02077c, _FUN_8c02077c_def\n");
//@unit 8c0208ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
FUN_8c0208ec_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0208ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02051c(ar4,ar5,*ar6,ar7));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020600(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020714(ar4,iVar1,s4,ar7_00));
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020600(ar4,ar5,ar6,ar7));
      if (*(int *)(unsigned)(iVar1 + 8) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(undefined4 *)(unsigned)(iVar1 + 8),ar5,ar6,ar7));
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(iVar1,ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0208ec\n.set _FUN_8c0208ec, _FUN_8c0208ec_def\n");
//@unit 8c0209b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0209b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0209b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0,*(undefined4 *)(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c0209b0\n.set _FUN_8c0209b0, _FUN_8c0209b0_def\n");
//@unit 8c0209fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0209fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0209fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0209b0(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0209fc\n.set _FUN_8c0209fc, _FUN_8c0209fc_def\n");
//@unit 8c020a70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020a70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020a70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020a70\n.set _FUN_8c020a70, _FUN_8c020a70_def\n");
//@unit 8c020aa8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020aa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020aa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,2,*(undefined4 *)(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020aa8\n.set _FUN_8c020aa8, _FUN_8c020aa8_def\n");
//@unit 8c020af4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020af4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020af4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020aa8(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020af4\n.set _FUN_8c020af4, _FUN_8c020af4_def\n");
//@unit 8c020b68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020b68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020b68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,2,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020b68\n.set _FUN_8c020b68, _FUN_8c020b68_def\n");
//@unit 8c020ba0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,5,*(undefined4 *)(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020ba0\n.set _FUN_8c020ba0, _FUN_8c020ba0_def\n");
//@unit 8c020bec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020bec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020bec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ba0(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020bec\n.set _FUN_8c020bec, _FUN_8c020bec_def\n");
//@unit 8c020c60
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020c60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,5,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020c60\n.set _FUN_8c020c60, _FUN_8c020c60_def\n");
//@unit 8c020c98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020c98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020c98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,8,*(undefined4 *)(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020c98\n.set _FUN_8c020c98, _FUN_8c020c98_def\n");
//@unit 8c020ce4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020ce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020ce4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020c98(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ce4\n.set _FUN_8c020ce4, _FUN_8c020ce4_def\n");
//@unit 8c020d58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020d58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020d58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,8,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020d58\n.set _FUN_8c020d58, _FUN_8c020d58_def\n");
//@unit 8c020d90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020d90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar4 + 0xc); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xb,*(undefined4 *)(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020d90\n.set _FUN_8c020d90, _FUN_8c020d90_def\n");
//@unit 8c020ddc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020ddc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020ddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020d90(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ddc\n.set _FUN_8c020ddc, _FUN_8c020ddc_def\n");
//@unit 8c020e48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020e48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020e48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xb,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020e48\n.set _FUN_8c020e48, _FUN_8c020e48_def\n");
//@unit 8c020e80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c020e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020e80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar5;
  (*(undefined4 *)(fr0_ - 0x1c)) = ar7;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xc,*(undefined4 *)(unsigned)(ar4 + 0x2c),ar5); });
  if (iVar1 == 1) {
    (*(int *)(fr0_ - 0x18)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020f5c(ar4,ar5,ar6,ar7_00));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020e80\n.set _FUN_8c020e80, _FUN_8c020e80_def\n");
//@unit 8c020ef0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020ef0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020e80(ar4,ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int en; if (en++ < 40) dbg_log(0xef0, iVar1, ar5, ar6); }
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int pn; if (pn++ < 40) dbg_log(0xef1, iVar1, 0, 0); }
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ef0\n.set _FUN_8c020ef0, _FUN_8c020ef0_def\n");
//@unit 8c020f5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020f5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xc,ar4 + 0x2c,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c020f5c\n.set _FUN_8c020f5c, _FUN_8c020f5c_def\n");
//@unit 8c020f90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c020f90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c020f90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = ar7;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xe,*(undefined4 *)(unsigned)(ar4 + 0x2c),ar5); });
  if (iVar1 == 1) {
    (*(int *)(fr0_ - 0x18)) = iVar1;
    ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c0208ec(ar4,0xe,ar4 + 0x2c,ar5); });
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020f90\n.set _FUN_8c020f90, _FUN_8c020f90_def\n");
//@unit 8c02100c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02100c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02100c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020f90(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c02100c\n.set _FUN_8c02100c, _FUN_8c02100c_def\n");
//@unit 8c021078
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_CDCGD_ReadPVMFileReq_021082_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CDCGD_ReadPVMFileReq_021082";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = *(undefined4 *)(unsigned)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(((undefined4 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(s0); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); FUN_8c02077c(ar4,0x10,ar6_00,ar5); });
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c23a29c(((undefined4 *)(fr0_ - 0x1c))[0],ar7,ar6_00,ar7_00));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c021138(ar4,ar5,ar6,s0));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c021138(ar4,ar5,ar6,s0));
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c12fc0c)) + 0x12,(&(*(undefined1 *)(unsigned)0x8c12fc0c)) + 0x27,1,2));
      iVar1 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _s_CDCGD_ReadPVMFileReq_021082\n.set _s_CDCGD_ReadPVMFileReq_021082, _s_CDCGD_ReadPVMFileReq_021082_def\n");
//@unit 8c021138
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021138_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021138";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021138\n.set _FUN_8c021138, _FUN_8c021138_def\n");
//@unit 8c021170
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021170_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(
                     (*(undefined4 *)(fr0_ + 0x00000004))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xf,*(undefined4 *)(unsigned)(ar4 + 0x30),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021170\n.set _FUN_8c021170, _FUN_8c021170_def\n");
//@unit 8c0211b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 file_load_to_buffer_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "file_load_to_buffer";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000004))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c021170(ar4,ar5,ar6,ar7); });
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _file_load_to_buffer\n.set _file_load_to_buffer, _file_load_to_buffer_def\n");
//@unit 8c021234
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xf,ar4 + 0x30,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021234\n.set _FUN_8c021234, _FUN_8c021234_def\n");
//@unit 8c02126c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02126c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02126c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); unsigned long t4_ = (unsigned long)(
                     (*(undefined4 *)(fr0_ + 0x00000004))); unsigned long t5_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000008))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0x10,*(undefined4 *)(unsigned)(ar4 + 0x34),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c02126c\n.set _FUN_8c02126c, _FUN_8c02126c_def\n");
//@unit 8c0212b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 file_load_into_object_buffer_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "file_load_into_object_buffer";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02126c(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _file_load_into_object_buffer\n.set _file_load_into_object_buffer, _file_load_into_object_buffer_def\n");
//@unit 8c021338
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021338\n.set _FUN_8c021338, _FUN_8c021338_def\n");
//@unit 8c021370
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0x10,*(undefined4 *)(unsigned)(ar4 + 0x34),ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021370\n.set _FUN_8c021370, _FUN_8c021370_def\n");
//@unit 8c0213bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0213bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0213bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021370(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0213bc\n.set _FUN_8c0213bc, _FUN_8c0213bc_def\n");
//@unit 8c021428
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021428_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021428";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl _FUN_8c021428\n.set _FUN_8c021428, _FUN_8c021428_def\n");
//@unit 8c02145c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02145c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02145c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0xffffffff;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02145c\n.set _FUN_8c02145c, _FUN_8c02145c_def\n");
//@unit 8c02147c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * pack_ctor_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_ctor";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022190(ar4 + 1,ar5,ar6,ar7));
  *ar4 = 0;
  *(undefined1 *)(unsigned)(0x9ec14 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x9ec94 + (int)ar4) = 0xffffffff;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
  }
  return ar4;
}

__asm__(".globl _pack_ctor\n.set _pack_ctor, _pack_ctor_def\n");
//@unit 8c0214e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0214e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0214e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_022198(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0214e0\n.set _FUN_8c0214e0, _FUN_8c0214e0_def\n");
//@unit 8c021520
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
pack_open_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_open";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  *ar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0221c8(ar4 + 1,ar5,ar6,s4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                      (0x8c3eb334,ar7,(&(*(undefined1 *)(unsigned)0x8c12fc50)) + 0x34,
                       (int)ar4 + 0x9ec10); });
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                        (0x8c3eb334,s0,(&(*(undefined1 *)(unsigned)0x8c12fc50)) + 0x34,
                         (int)ar4 + 0x9ec0c); });
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *ar4 = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_open\n.set _pack_open, _pack_open_def\n");
//@unit 8c0215d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pack_close_and_flush_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_close_and_flush";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022384(ar4 + 1,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01f780(0x8c3eb334,ar5,ar6,ar7));
    uVar2 = 1;
    if (iVar1 != 1) {
      if (-1 < *(int *)(unsigned)(0x9ec94 + (int)ar4)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0228e4(ar4 + 1,*(undefined4 *)(unsigned)(0x9ec94 + (int)ar4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022128(ar4,0x3e8,ar6,ar7));
        *(undefined4 *)(unsigned)(0x9ec94 + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(int *)(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8)) {
          (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022894))))
                    (ar4 + 1,*(undefined4 *)(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8),
                     *(undefined4 *)(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8),
                     *(int *)(unsigned)(0x9ec10 + (int)ar4) +
                     (*(uint *)(unsigned)(*(int *)(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                *(int *)(unsigned)(0x9ec0c + (int)ar4) + 0x20) & 0xfffffffe)));
          *(undefined4 *)(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_close_and_flush\n.set _pack_close_and_flush, _pack_close_and_flush_def\n");
//@unit 8c021720
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021720_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02257c(ar4 + 1,0,ar5,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021720\n.set _FUN_8c021720, _FUN_8c021720_def\n");
//@unit 8c02174c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02174c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02174c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint in_fr1 = 0;
  double dVar3;
  undefined4 in_fr5 = 0;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  bool bVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (*ar4 == 0) {
    return 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c013adc((int)in_fr4,ar5,ar6,ar7));
  ar5_00 = 0x14d;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7));
  if ((iVar2 < 9) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = 0x10;
      break;
    case 2:
      iVar2 = 0x20;
      break;
    case 3:
      iVar2 = 0x30;
      break;
    case 4:
      iVar2 = 0x40;
      break;
    case 5:
      iVar2 = 0x50;
      break;
    case 6:
      iVar2 = 0x60;
      break;
    case 7:
      iVar2 = 0x70;
      break;
    case 8:
      goto switchD_8c021798_caseD_8;
    }
  }
  else {
switchD_8c021798_caseD_8:
    iVar2 = 0x7f;
  }
  if (cVar6 == '\0') {
    bVar4 = in_fr4 < 0.0;
  }
  else {
    bVar4 = CONCAT44D(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(in_fr5,in_fr1);
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),in_fr5);
  }
  if (cVar6 == '\0') {
    iVar5 = (int)F32HI(dVar3);
  }
  else {
    iVar5 = (int)dVar3;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c013adc(iVar5,ar5_00,ar6,ar7));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 176)), libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7));
  if ((iVar5 < 9) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      uVar1 = 0x7f;
      break;
    case 1:
      uVar1 = 0x1e;
      break;
    case 2:
      uVar1 = 0x14;
      break;
    case 3:
      uVar1 = 7;
      break;
    case 4:
      uVar1 = 0;
      break;
    case 5:
      uVar1 = 0xfffffff9;
      break;
    case 6:
      uVar1 = 0xfffffff4;
      break;
    case 7:
      uVar1 = 0xffffffe7;
      break;
    case 8:
      uVar1 = 0xffffffe2;
    }
  }
  else {
    uVar1 = 0xffffff81;
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0225f4(ar4 + 1,2,ar5,ar7));
  if (-1 < iVar5) {
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0227bc(ar4 + 1,iVar5,iVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022804(ar4 + 1,iVar5,uVar1,ar7));
    (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0226d8(ar4 + 1,iVar5,uVar1,ar7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c022688(ar4 + 1,iVar5,uVar1,ar7));
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02174c\n.set _FUN_8c02174c, _FUN_8c02174c_def\n");
//@unit 8c02190c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02190c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02190c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02194c(ar4,1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02190c\n.set _FUN_8c02190c, _FUN_8c02190c_def\n");
//@unit 8c02192c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02192c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02192c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02194c(ar4,3,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02192c\n.set _FUN_8c02192c, _FUN_8c02192c_def\n");
//@unit 8c02194c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02194c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02194c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0225f4(ar4 + 1,ar5,0,ar7));
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02194c\n.set _FUN_8c02194c, _FUN_8c02194c_def\n");
//@unit 8c021994
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021994_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0219dc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c021994\n.set _FUN_8c021994, _FUN_8c021994_def\n");
//@unit 8c0219b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0219b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0219b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0219dc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0219b8\n.set _FUN_8c0219b8, _FUN_8c0219b8_def\n");
//@unit 8c0219dc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0219dc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0219dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022710(ar4 + 1,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0219dc\n.set _FUN_8c0219dc, _FUN_8c0219dc_def\n");
//@unit 8c021a0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021a0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a30(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c021a0c\n.set _FUN_8c021a0c, _FUN_8c021a0c_def\n");
//@unit 8c021a30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021a30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022804(ar4 + 1,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021a30\n.set _FUN_8c021a30, _FUN_8c021a30_def\n");
//@unit 8c021a60
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a60_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021a60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022778(ar4 + 1,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021a60\n.set _FUN_8c021a60, _FUN_8c021a60_def\n");
//@unit 8c021a8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a8c_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021a8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021ad4(ar4,*ar5,ar6,ar7));
  *ar5 = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c021a8c\n.set _FUN_8c021a8c, _FUN_8c021a8c_def\n");
//@unit 8c021ab4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021ab4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021ab4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021ad4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c021ab4\n.set _FUN_8c021ab4, _FUN_8c021ab4_def\n");
//@unit 8c021ad4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021ad4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021ad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = 0x7f;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022804(ar4 + 1,ar5,0x7f,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022688(ar4 + 1,ar5,uVar1,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021ad4\n.set _FUN_8c021ad4, _FUN_8c021ad4_def\n");
//@unit 8c021b10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pack_acquire_entry_handle_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_acquire_entry_handle";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  int iVar1;
  
  if (*ar4 == 0) {
    ar5_00 = -1;
  }
  else {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), handle_slot_alloc(ar4 + 1,ar5,ar6,ar7));
    if (ar5_00 == -1) {
      ar5_00 = -1;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), pack_find_entry_by_name(ar4,ar5,ar6,ar7));
      if (iVar1 == -1) {
        (vsp = ((unsigned long)(fr0_ - 0)), handle_slot_free(ar4 + 1,ar5_00,ar6,ar7));
        ar5_00 = -1;
      }
      else {
        *(int *)(unsigned)((int)ar4 + 0x9ec98 + ar5_00 * 8) = ar5_00;
        *(int *)(unsigned)((int)ar4 + 0x9ec9c + ar5_00 * 8) = iVar1;
      }
    }
  }
  return ar5_00;
}

__asm__(".globl _pack_acquire_entry_handle\n.set _pack_acquire_entry_handle, _pack_acquire_entry_handle_def\n");
//@unit 8c021bac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pack_find_entry_by_name_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_find_entry_by_name";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 144; for (int i_ = 0; i_ < 144; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); strcpy(((char *)(fr0_ - 0x8c)),((undefined1 *)(unsigned)0x8c12fc84),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 144)); strcpy(((char *)(fr0_ - 0x8c)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c01437c(((char *)(fr0_ - 0x8c)),((undefined1 *)(unsigned)0x8c12fc85),ar6,ar7));
  iVar2 = 0;
  while( true ) {
    if ((0x7fff < iVar2) || (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == ((char *)(fr0_ - 0x8c))[0]) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c021c80(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x9ec0c),((char *)(fr0_ - 0x8c)),ar6,ar7)), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _pack_find_entry_by_name\n.set _pack_find_entry_by_name, _pack_find_entry_by_name_def\n");
//@unit 8c021c80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021c80_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021c80";
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

__asm__(".globl _FUN_8c021c80\n.set _FUN_8c021c80, _FUN_8c021c80_def\n");
//@unit 8c021ce8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pack_release_entry_handle_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_release_entry_handle";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(undefined4 *)(unsigned)((int)ar4 + 0x9ec98 + ar5 * 8) = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02296c(ar4 + 1,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), handle_slot_free(ar4 + 1,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _pack_release_entry_handle\n.set _pack_release_entry_handle, _pack_release_entry_handle_def\n");
//@unit 8c021d4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021d4c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021d4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229a8(ar4 + 1,ar5,ar6,ar7));
    for (ar5_00 = 0; uVar1 = 3, ar5_00 < 3; ar5_00 = ar5_00 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02296c(ar4 + 1,ar5_00,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021d4c\n.set _FUN_8c021d4c, _FUN_8c021d4c_def\n");
//@unit 8c021d90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c021d90_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    uVar2 = ar6;
    ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021ec8(ar4,ar7,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021e10(ar4,ar6,uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022b68(ar4 + 1,ar5,uVar2,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022bb0(ar4 + 1,ar5,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021d90\n.set _FUN_8c021d90, _FUN_8c021d90_def\n");
//@unit 8c021e10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c021e10_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021e10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013adc(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(ar4_00,0x14d,ar6,ar7));
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = 0;
      break;
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 6;
      break;
    case 7:
      iVar1 = 7;
      break;
    case 8:
      iVar1 = 8;
    }
  }
  else {
    iVar1 = 0xf;
  }
  if (ar5 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021e10\n.set _FUN_8c021e10, _FUN_8c021e10_def\n");
//@unit 8c021ec8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c021ec8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021ec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013adc(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1 * 0x78,0xbb8,ar6,ar7));
  return -iVar1;
}

__asm__(".globl _FUN_8c021ec8\n.set _FUN_8c021ec8, _FUN_8c021ec8_def\n");
//@unit 8c021f18
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021f18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c021f18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 16)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 16)) - 8); FUN_8c021f4c(ar4,ar5,((undefined1 *)(fr0_ - 0x8)),((undefined1 *)(fr0_ - 0xc))); });
  return uVar1;
}

__asm__(".globl _FUN_8c021f18\n.set _FUN_8c021f18, _FUN_8c021f18_def\n");
//@unit 8c021f4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021f4c_def(int *ar4,int ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c021f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int * s0 = (int *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  ushort *ar6_00;
  int *ar7_00;
  
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = ((ushort *)(fr0_ - 0x18));
  ar7_00 = ar7;
  (*(int *)(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7));
  if ((*(int *)(fr0_ - 0x14)) == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00));
    return 1;
  }
  if ((*(int *)(fr0_ - 0x14)) == 2) {
    return 3;
  }
  if ((*(int *)(fr0_ - 0x14)) != 3) {
    return 2;
  }
  *ar6 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf0) >> 4;
  *ar7 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf00) >> 8;
  *s0 = (int)(((ushort *)(fr0_ - 0x18))[0] & 0xf000) >> 0xc;
  if ((((ushort *)(fr0_ - 0x18))[0] & 0xf) < 8) {
                    
    switch(((ushort *)(fr0_ - 0x18))[0] & 0xf) {
    case 0:
      uVar1 = 5;
      break;
    default:
      uVar1 = 6;
      break;
    case 4:
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 7:
      goto switchD_8c022008_caseD_7;
    }
  }
  else {
switchD_8c022008_caseD_7:
    uVar1 = 8;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021f4c\n.set _FUN_8c021f4c, _FUN_8c021f4c_def\n");
//@unit 8c022068
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pack_find_by_name_buffered_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "pack_find_by_name_buffered";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*ar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 0x27b05) = 0;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(ar4 + 0x27b05,ar5,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_find_entry_by_name(ar4,ar4 + 0x27b05,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _pack_find_by_name_buffered\n.set _pack_find_by_name_buffered, _pack_find_by_name_buffered_def\n");
//@unit 8c0220bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0220bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0220bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(0x9ec94 + ar4) = 0xffffffff;
  iVar1 = 0x9ec14;
  *(undefined1 *)(unsigned)(0x9ec14 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0220bc\n.set _FUN_8c0220bc, _FUN_8c0220bc_def\n");
//@unit 8c0220d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0220d4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0220d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 == 0) {
    return 0;
  }
  if (*(char *)(unsigned)(0x9ec14 + (int)ar4) == '\0') {
    return 0;
  }
  *(undefined4 *)(unsigned)(0x9ec94 + (int)ar4) = ar5;
  return 1;
}

__asm__(".globl _FUN_8c0220d4\n.set _FUN_8c0220d4, _FUN_8c0220d4_def\n");
//@unit 8c022104
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022104_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022104";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229a8(ar4 + 1,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022104\n.set _FUN_8c022104, _FUN_8c022104_def\n");
//@unit 8c022128
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022128_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022128";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013adc(ar5,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      (iVar1 * 0x190,0xbb8,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022bf8(ar4 + 1,-iVar1,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022128\n.set _FUN_8c022128, _FUN_8c022128_def\n");
//@unit 8c022190
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022190_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022190";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl _FUN_8c022190\n.set _FUN_8c022190, _FUN_8c022190_def\n");
//@unit 8c022198
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_022198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_022198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_022198\n.set _free_if_nonnull_wrap_022198, _free_if_nonnull_wrap_022198_def\n");
//@unit 8c0221c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0221c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0221c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + ar4) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(0x2d150 + ar4 + iVar4 * 0x208e0) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), thunk_FUN_8c25ecdc(ar7,0,ar6,ar7));
  iVar4 = ar4 + 0x8ebf0;
  uVar1 = 0x8000;
  (vsp = ((unsigned long)(fr0_ - 16)), s_E9040804_can_t_open_s_ADXF_L_261ba4(0,ar6,iVar4,0x8000));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 16)), thunk_FUN_8c25ecdc((&(*(undefined1 *)(unsigned)0x8c022c48)),0,iVar4,uVar1));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 16)), aica_driver_load_manatee(ar4,uVar3,iVar4,uVar1));
  if (iVar4 == 1) {
    ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fc98));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c022494(ar4,ar5,(&(*(undefined1 *)(unsigned)0x8c12fc98)),uVar1));
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f7f1e(((int *)(fr0_ - 0x10)),ar5,ar6_00,uVar1));
      if (((int *)(fr0_ - 0x10))[0] == 0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f525453,ar5,ar6_00,uVar1));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f4e4f4d,ar5,ar6_00,uVar1));
      }
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c265f84(1,ar5,ar6_00,uVar1));
      uVar3 = 0x2d0c4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263840(2,ar4 + 0x8c,0x2d0c4,uVar1)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263840, uVar2, ar4, 0); }
      *(undefined4 *)(unsigned)(ar4 + 0x74) = uVar2;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263ffa(*(undefined4 *)(unsigned)(ar4 + 0x74),2,uVar3,uVar1));
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = 0x208c4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263840))))
                          (2,ar4 + iVar4 * 0x208e0 + 0x2d16c,0x208c4,uVar1));
        *(undefined4 *)(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0) = uVar2; { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263841, uVar2, iVar4, *(unsigned *)(unsigned)(ar4 + 0x74)); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c4beb48, 16); dbg_dump(0x8c4beb88, 42); } }
        (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263ffa))))
                  (*(undefined4 *)(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0),1,uVar3,uVar1));
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0221c8\n.set _FUN_8c0221c8, _FUN_8c0221c8_def\n");
//@unit 8c022384
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022384_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022384";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688e0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c022384\n.set _FUN_8c022384, _FUN_8c022384_def\n");
//@unit 8c022398
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint aica_driver_load_manatee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_driver_load_manatee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  undefined4 *ar7_00;
  
  ar7_00 = ((undefined4 *)(fr0_ - 0x8));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fc98));
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                    (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), aica_driver_upload(ar4,((undefined4 *)(fr0_ - 0x8))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c021234(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _aica_driver_load_manatee\n.set _aica_driver_load_manatee, _aica_driver_load_manatee_def\n");
//@unit 8c022404
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int aica_driver_upload_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "aica_driver_upload";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ((int *)(fr0_ - 0x10))[0] = 0;
  ar6_00 = 0;
  ar5_00 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2655f4(0,0,0,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265704(((int *)(fr0_ - 0x10)),ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      ar7 = 0xffffffff;
      ar6_00 = 0;
      iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c265ea0(((int *)(fr0_ - 0x10))[0],ar5,0,0xffffffff); });
      ar5_00 = ar5;
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2654f4(((int *)(fr0_ - 0x10))[0],ar5,ar6_00,ar7));
        ar5_00 = ar5;
      }
    }
  }
  if (((int *)(fr0_ - 0x10))[0] != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265784(((int *)(fr0_ - 0x10))[0],ar5_00,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl _aica_driver_upload\n.set _aica_driver_upload, _aica_driver_upload_def\n");
//@unit 8c022494
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c022494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022494";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  undefined4 *ar7_00;
  
  ar7_00 = ((undefined4 *)(fr0_ - 0x10));
  ar6_00 = ar6;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined4 *)(fr0_ - 0x14))); unsigned long t1_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 20)) - 8); file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c022504(ar4,((undefined4 *)(fr0_ - 0x10))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c021234(0x8c3eb334,ar5,ar6,1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c022494\n.set _FUN_8c022494, _FUN_8c022494_def\n");
//@unit 8c022504
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022504";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  ((int *)(fr0_ - 0x10))[0] = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265704(((int *)(fr0_ - 0x10)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c265ea0(((int *)(fr0_ - 0x10))[0],ar5,0,0xffffffff); });
    ar5_00 = ar5;
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2669f4(((int *)(fr0_ - 0x10))[0],ar5,ar6,ar7));
      ar5_00 = ar5;
    }
  }
  if (((int *)(fr0_ - 0x10))[0] != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265784(((int *)(fr0_ - 0x10))[0],ar5_00,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022504\n.set _FUN_8c022504, _FUN_8c022504_def\n");
//@unit 8c02257c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02257c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02257c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2680ec(((undefined4 *)(fr0_ - 0x8)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2681d0(((undefined4 *)(fr0_ - 0x8))[0],0,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c268250(((undefined4 *)(fr0_ - 0x8))[0],0x7f,0,ar7));
    ar7_00 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26813c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,0));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((undefined4 *)(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02257c\n.set _FUN_8c02257c, _FUN_8c02257c_def\n");
//@unit 8c0225f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0225f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0225f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 < 7 && (*(int *)(unsigned)(uVar2 * 0x10 + ar4) != 0)); uVar2 = uVar2 + 1) {
  }
  if (uVar2 == 7) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2680ec(ar4 + uVar2 * 0x10 + 0xc,ar5,ar6,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(uVar2 * 0x10 + ar4) = 1;
      *(undefined4 *)(unsigned)(ar4 + uVar2 * 0x10 + 4) = ar5;
      *(undefined4 *)(unsigned)(ar4 + uVar2 * 0x10 + 8) = ar6;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0225f4\n.set _FUN_8c0225f4, _FUN_8c0225f4_def\n");
//@unit 8c022688
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022688_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022688";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26809c(*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7));
      iVar1 = ar5 * 0x10;
      *(undefined4 *)(unsigned)(iVar1 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022688\n.set _FUN_8c022688, _FUN_8c022688_def\n");
//@unit 8c0226d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0226d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0226d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022710(ar4,ar5,*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 8),ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0226d8\n.set _FUN_8c0226d8, _FUN_8c0226d8_def\n");
//@unit 8c022710
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022710_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(unsigned)(ar5 * 0x10 + ar4) == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c26813c))))
                      (*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 0xc),*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 4)
                       ,ar6,1));
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022710\n.set _FUN_8c022710, _FUN_8c022710_def\n");
//@unit 8c022778
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022778_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022778";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2682bc(*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022778\n.set _FUN_8c022778, _FUN_8c022778_def\n");
//@unit 8c0227bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0227bc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0227bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2681d0(*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0227bc\n.set _FUN_8c0227bc, _FUN_8c0227bc_def\n");
//@unit 8c022804
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022804_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268250(*(undefined4 *)(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022804\n.set _FUN_8c022804, _FUN_8c022804_def\n");
//@unit 8c02284c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 handle_slot_alloc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "handle_slot_alloc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return 0xffffffff;
    }
    piVar1 = (int *)(unsigned)(ar4 + iVar2 * 0x208e0 + 0x2d150);
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = 1;
  return iVar2;
}

__asm__(".globl _handle_slot_alloc\n.set _handle_slot_alloc, _handle_slot_alloc_def\n");
//@unit 8c022894
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022894_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022894";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022918))))
                    (ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c022894\n.set _FUN_8c022894, _FUN_8c022894_def\n");
//@unit 8c0228e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0228e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0228e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c022918(ar4,ar4 + 0x70,ar5,0); });
  return uVar1;
}

__asm__(".globl _FUN_8c0228e4\n.set _FUN_8c0228e4, _FUN_8c0228e4_def\n");
//@unit 8c022918
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022918_def(undefined4 ar4,int *ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c022918";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*ar5 == 1) || (*ar5 == 3)) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_E8101202_can_t_open_d_d_ADXT_26440a(ar5[1],0,ar6,ar7));
    *ar5 = 2;
    ar5[2] = ar7;
    ar5[3] = s0;
    ar5[4] = 0;
    ar5[5] = 0;
    ar5[6] = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022918\n.set _FUN_8c022918, _FUN_8c022918_def\n");
//@unit 8c02296c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02296c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02296c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229c8(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02296c\n.set _FUN_8c02296c, _FUN_8c02296c_def\n");
//@unit 8c0229a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0229a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0229a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229c8(ar4,ar4 + 0x70,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0229a8\n.set _FUN_8c0229a8, _FUN_8c0229a8_def\n");
//@unit 8c0229c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0229c8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0229c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263c64(ar5[1],ar5,ar6,ar7));
    iVar1 = 3;
    *ar5 = 3;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0229c8\n.set _FUN_8c0229c8, _FUN_8c0229c8_def\n");
//@unit 8c0229ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 handle_slot_free_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "handle_slot_free";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  
  piVar1 = (int *)(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return 0;
}

__asm__(".globl _handle_slot_free\n.set _handle_slot_free, _handle_slot_free_def\n");
//@unit 8c022a1c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022a1c_def(int ar4,int ar5,undefined2 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022a1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *piVar3;
  
  (*(unsigned *)(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  *ar6 = 0;
  piVar3 = (int *)(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
LAB_8c022adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263cd4(piVar3[1],ar5,ar6,ar7));
        if (iVar1 != 1) {
          if ((iVar1 == 2) || (iVar1 == 3)) {
            ar6_00 = ((int *)(fr0_ - 0x14));
            (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263cd8(piVar3[1],&(*(uint *)(fr0_ - 0x18)),ar6_00,ar7));
            if (0 < (int)(*(uint *)(fr0_ - 0x18))) {
              if ((uint)piVar3[5] < (*(uint *)(fr0_ - 0x18))) {
                piVar3[6] = 0;
              }
              else {
                piVar3[6] = piVar3[6] + 1;
                if (4 < (uint)piVar3[6]) {
                  piVar3[6] = 0;
                  return 1;
                }
              }
            }
            piVar3[5] = (*(uint *)(fr0_ - 0x18));
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            ((int *)(fr0_ - 0x14))[0] =
                 (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0101e4(((int *)(fr0_ - 0x14))[0],0x1e,ar6_00,ar7));
            ((int *)(fr0_ - 0x14))[0] = ((int *)(fr0_ - 0x14))[0] * 5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                              ((*(uint *)(fr0_ - 0x18)),((int *)(fr0_ - 0x14))[0],ar6_00,ar7));
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(undefined2 *)(unsigned)(piVar3[4] * 2 + piVar3[2]);
              piVar3[4] = piVar3[4] + 1;
              return 3;
            }
            return 2;
          }
          if (iVar1 != 4) {
            return 1;
          }
        }
        return 2;
      }
      if (iVar1 != 3) goto LAB_8c022adc;
    }
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022a1c\n.set _FUN_8c022a1c, _FUN_8c022a1c_def\n");
//@unit 8c022b68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022b68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022b68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263e50(piVar2[1],0,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022b68\n.set _FUN_8c022b68, _FUN_8c022b68_def\n");
//@unit 8c022bb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022bb0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022bb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022c20(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c022bb0\n.set _FUN_8c022bb0, _FUN_8c022bb0_def\n");
//@unit 8c022bf8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022bf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022bf8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022c20(ar4,ar4 + 0x70,ar5,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c022bf8\n.set _FUN_8c022bf8, _FUN_8c022bf8_def\n");
//@unit 8c022c20
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022c20_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022c20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263e8e(ar5[1],ar6,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022c20\n.set _FUN_8c022c20, _FUN_8c022c20_def\n");
//@unit 8c022c4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_ctor_zero_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_ctor_zero";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[3] = ((undefined1 *)(unsigned)0x8c129a7c);
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _Vec3_ctor_zero\n.set _Vec3_ctor_zero, _Vec3_ctor_zero_def\n");
//@unit 8c022c88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_ctor_copy_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_ctor_copy";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[3] = ((undefined1 *)(unsigned)0x8c129a7c);
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _Vec3_ctor_copy\n.set _Vec3_ctor_copy, _Vec3_ctor_copy_def\n");
//@unit 8c022cb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int Vec3_dtor_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_dtor";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (*(unsigned *)(unsigned)(ar4 + 0xc) = ((undefined1 *)(unsigned)0x8c129a7c), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _Vec3_dtor\n.set _Vec3_dtor, _Vec3_dtor_def\n");
//@unit 8c022ce8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_ctor_xyz_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_ctor_xyz";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  ar4[3] = ((undefined1 *)(unsigned)0x8c129a7c);
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _Vec3_ctor_xyz\n.set _Vec3_ctor_xyz, _Vec3_ctor_xyz_def\n");
//@unit 8c022d04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c022d04_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022d04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c022d04\n.set _FUN_8c022d04, _FUN_8c022d04_def\n");
//@unit 8c022d14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022d14_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022d14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar5 + 4;
}

__asm__(".globl _FUN_8c022d14\n.set _FUN_8c022d14, _FUN_8c022d14_def\n");
//@unit 8c022d3c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022d3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022d3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(s0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c022d3c\n.set _FUN_8c022d3c, _FUN_8c022d3c_def\n");
//@unit 8c022dac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022dac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022dac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined8 in_dr0 = 0;
  double dVar2;
  undefined4 in_fr15 = 0;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c022d14(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_length_sq(ar4,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_length_sq(ar5,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),in_fr15);
    (*(undefined4 *)(fr0_ - 0x24)) = uVar1;
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),uVar1);
    (*(undefined4 *)(fr0_ - 0x24)) = (int)in_dr0;
    (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  }
  uVar1 = 8;
  if (cVar6 == '\0') {
    dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(int)in_dr0);
  }
  else {
    dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) * F32HI(dVar2),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar2;
  }
  if (cVar5 == '\0') {
    bVar4 = 0.0 < F32HI(dVar3);
  }
  else {
    bVar4 = (double)(D2U(dVar2) & 0xffffffff) < dVar3;
  }
  if (bVar4) {
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c013aec(ar5,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c022e5c(ar5,ar5_00,ar6,ar7));
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022dac\n.set _FUN_8c022dac, _FUN_8c022dac_def\n");
//@unit 8c022e5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022e5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022e5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x8c022e74;
}

__asm__(".globl _FUN_8c022e5c\n.set _FUN_8c022e5c, _FUN_8c022e5c_def\n");
//@unit 8c022e78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_length_sq_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_length_sq";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c258030(ar4,ar5,ar6,ar7); });
  return 0;
}

__asm__(".globl _Vec3_length_sq\n.set _Vec3_length_sq, _Vec3_length_sq_def\n");
//@unit 8c022ec0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_normalize_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_normalize";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined8 in_dr0 = 0;
  float fVar3;
  double dVar1;
  double dVar2;
  undefined4 uVar4;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  fVar3 = F32HI(in_dr0);
  if (cVar6 == '\0') {
    in_fr15 = fVar3;
    fVar3 = (*(float *)(fr0_ - 0x1c));
  }
  (*(float *)(fr0_ - 0x1c)) = fVar3;
  if (in_fr15 == 0.0) {
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(&(*(float *)(fr0_ - 0x1c)),ar4,ar6,ar7));
  }
  else {
    if (cVar6 == '\0') {
      dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar4,(int)in_dr0);
    }
    else {
      dVar1 = *ar4;
    }
    if (cVar5 == '\0') {
      dVar1 = CONCAT44D(F32HI(dVar1) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / CONCAT44D(in_fr14,in_fr15);
    }
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1,0);
    if (cVar6 == '\0') {
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),(*(float *)(fr0_ - 0x1c)));
      (*(float *)(fr0_ - 0x1c)) = F32HI(dVar1);
    }
    else {
      dVar2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    (*(undefined4 *)(fr0_ - 0x18)) = SUB84(dVar2,0);
    if (cVar6 == '\0') {
      dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),(*(undefined4 *)(fr0_ - 0x18)));
      (*(undefined4 *)(fr0_ - 0x18)) = (int)(D2U(dVar2) >> 0x20);
    }
    else {
      dVar1 = ar4[1];
    }
    if (cVar5 == '\0') {
      dVar1 = CONCAT44D(F32HI(dVar1) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / CONCAT44D(in_fr14,in_fr15);
    }
    uVar4 = (undefined4)(D2U(dVar1) >> 0x20);
    (*(undefined4 *)(fr0_ - 0x14)) = uVar4;
    if (cVar6 != '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(dVar1,0);
      (*(undefined4 *)(fr0_ - 0x10)) = uVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_normalize\n.set _Vec3_normalize, _Vec3_normalize_def\n");
//@unit 8c022f54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
double * Vec3_length_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_length";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr0 = 0;
  double dVar2;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    in_fr15 = F32HI(in_dr0);
    fVar1 = in_fr15;
  }
  else {
    fVar1 = (float)in_dr0;
  }
  if (fVar1 != 0.0) {
    if (cVar4 == '\0') {
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar1);
    }
    else {
      dVar2 = *ar4;
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)ar4 = (int)(D2U(dVar2) >> 0x20);
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *ar4 = dVar2;
      dVar2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)((int)ar4 + 4) = (int)(D2U(dVar2) >> 0x20);
      dVar2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)(unsigned)((int)ar4 + 4) = dVar2;
      dVar2 = ar4[1];
    }
    if (cVar3 == '\0') {
      dVar2 = CONCAT44D(F32HI(dVar2) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / CONCAT44D(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(unsigned)(ar4 + 1) = (int)(D2U(dVar2) >> 0x20);
    }
    else {
      ar4[1] = dVar2;
    }
  }
  return ar4;
}

__asm__(".globl _Vec3_length\n.set _Vec3_length, _Vec3_length_def\n");
//@unit 8c022fc0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c022fc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); Vec3_sub(ar5,ar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),((undefined4 *)(fr0_ - 0x28)),ar6,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined4 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x18)),ar5_00,ar6,ar7));
  if (cVar2 != '\0') {
    ((undefined4 *)(fr0_ - 0x28))[0] = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0xc;
}

__asm__(".globl _FUN_8c022fc0\n.set _FUN_8c022fc0, _FUN_8c022fc0_def\n");
//@unit 8c023040
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023040_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x18)),ar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),((undefined4 *)(fr0_ - 0x38)),ar6,ar7));
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x28)),ar5_00,ar6,ar7));
  if (cVar2 != '\0') {
    ((undefined4 *)(fr0_ - 0x38))[0] = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0x14;
}

__asm__(".globl _FUN_8c023040\n.set _FUN_8c023040, _FUN_8c023040_def\n");
//@unit 8c0230f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0230f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0230f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0230f0\n.set _FUN_8c0230f0, _FUN_8c0230f0_def\n");
//@unit 8c023138
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023138_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023138";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c023138\n.set _FUN_8c023138, _FUN_8c023138_def\n");
//@unit 8c023180
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023180_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023180";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c023180\n.set _FUN_8c023180, _FUN_8c023180_def\n");
//@unit 8c0231c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0231c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0231c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  ulonglong in_dr0 = 0;
  bool bVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c0230f0(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar5 == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  fVar2 = (float)in_dr0;
  bVar3 = fVar2 == 0.0;
  ar5_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  if (bVar3) {
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c023270);
  }
  else {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c0230f0(ar4,ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c022dac(ar4,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    puVar1 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
  }
  if (cVar5 == '\0') {
    fVar2 = *(float *)(unsigned)(ar4 + 4);
  }
  if (cVar4 == '\0' && 0.0 < fVar2) {
    puVar1 = ((undefined4 *)(unsigned)0x8c023278);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0231c8\n.set _FUN_8c0231c8, _FUN_8c0231c8_def\n");
//@unit 8c02327c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02327c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02327c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_dr0 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x20)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c0230f0(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c022dac(((undefined1 *)(unsigned)0x8c1259a8),(int)&(*(undefined8 *)(fr0_ - 0x20)) + 4,ar6,ar7));
  uVar1 = in_dr0;
  if (cVar5 == '\0') {
    (*(undefined8 *)(fr0_ - 0x20)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x20))+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x20));
  }
  (*(undefined8 *)(fr0_ - 0x20)) = uVar1;
  puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x20)) + 4,0xffffffff,ar6,ar7));
  fVar3 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar3 = *ar4;
  }
  if (cVar4 == '\0' && fVar3 < 0.0) {
    puVar2 = ((undefined4 *)(unsigned)0x8c0232e4);
  }
  return puVar2;
}

__asm__(".globl _FUN_8c02327c\n.set _FUN_8c02327c, _FUN_8c02327c_def\n");
//@unit 8c0232e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0232e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0232e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float extraout_fr1 = 0;
  float extraout_fr0 = 0;
  float extraout_fr0_00 = 0;
  float in_fr15 = 0;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0231c8(ar5,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    in_fr15 = extraout_fr0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  fVar2 = extraout_fr1;
  if (cVar4 == '\0') {
    fVar2 = in_fr15;
  }
  if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0232e8\n.set _FUN_8c0232e8, _FUN_8c0232e8_def\n");
//@unit 8c023334
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023334_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023334";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0 = 0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = F32HI(in_dr0);
  cVar6 = '\0';
  cVar5 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02327c(ar5,ar5,ar6,ar7));
  fVar1 = fVar3;
  if (cVar6 == '\0') {
    fVar1 = ((float *)(fr0_ - 0x6c))[0];
  }
  ((float *)(fr0_ - 0x6c))[0] = fVar1;
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02327c(ar4,uVar2,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0230f0(ar4,uVar2,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0230f0(ar5,uVar2,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x50)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x5c)),uVar2,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((float *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x5c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x20)),((float *)(fr0_ - 0x6c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((float *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), object_dtor_delete(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  if (cVar6 == '\0') {
    pcVar4 = (code *)0x42b40000;
  }
  else {
    fVar3 = 90.0;
    pcVar4 = ((void *)0x8c023d68);
  }
  if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c023334\n.set _FUN_8c023334, _FUN_8c023334_def\n");
//@unit 8c023484
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023484_def(undefined8 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023484";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 232; for (int i_ = 0; i_ < 232; i_++) z_[i_] = 0; }
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_ctor_zero((fr0_ + (int)0xffffff8c),ar5,ar6,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(fr0_ - 0x58)) = *(undefined4 *)(unsigned)ar4;
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)(ar4 + 1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x58)) = (undefined4)*ar4;
    (*(undefined4 *)(fr0_ - 0x54)) = (undefined4)*(undefined8 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x50)) = (undefined4)ar4[1];
    ((undefined4 *)(fr0_ - 0x4c))[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7); });
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,ar5[2]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,ar5[1]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,*ar5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar5_01 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x4c)),ar5_01,ar6_01,ar7_00); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x64));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 232)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_ctor_copy(s0,(fr0_ + (int)0xffffff8c),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 232)), Vec3_dtor((fr0_ + (int)0xffffff8c),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c023484\n.set _FUN_8c023484, _FUN_8c023484_def\n");
//@unit 8c023570
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023570_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023570";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x70)),ar5,ar6,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)ar4;
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x4c)) = *(undefined4 *)(unsigned)(ar4 + 1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x54)) = (undefined4)*ar4;
    (*(undefined4 *)(fr0_ - 0x50)) = (undefined4)*(undefined8 *)(unsigned)((int)ar4 + 4);
    (*(undefined4 *)(fr0_ - 0x4c)) = (undefined4)ar4[1];
    ((undefined4 *)(fr0_ - 0x48))[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x48)),ar5,ar6,ar7); });
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,in_fr6);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,in_fr5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x48)),ar5_00,ar6_01,ar7_00); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x54)),ar6_00,ar7_00); });
  if (cVar4 != '\0') {
    (*(undefined4 *)(fr0_ - 0x64)) = (*(undefined4 *)(fr0_ - 0x54));
  }
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c023570\n.set _FUN_8c023570, _FUN_8c023570_def\n");
//@unit 8c023668
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023668_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)ar4;
  (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
  (*(undefined4 *)(fr0_ - 0x4c)) = *(undefined4 *)(unsigned)(ar4 + 1);
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c256b0c(((undefined1 *)(fr0_ - 0x48)),ar5_00,ar6_01,ar7_00); });
  ar6_00 = &(*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c21279c(((undefined1 *)(fr0_ - 0x48)),&(*(undefined4 *)(fr0_ - 0x54)),ar6_00,ar7_00); });
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)ar4 = (*(undefined4 *)(fr0_ - 0x60));
    *(undefined4 *)(unsigned)((int)ar4 + 4) = (*(undefined4 *)(fr0_ - 0x5c));
    *(undefined4 *)(unsigned)(ar4 + 1) = (*(undefined4 *)(fr0_ - 0x58));
  }
  else {
    *ar4 = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ - 0x60)));
    *(ulonglong *)(unsigned)((int)ar4 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x5c)));
    ar4[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x54)),(*(undefined4 *)(fr0_ - 0x58)));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(s0,ar4,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c023668\n.set _FUN_8c023668, _FUN_8c023668_def\n");
//@unit 8c02374c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02374c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02374c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 ar7_00;
  float fVar3;
  undefined4 uVar4;
  double in_dr0 = 0;
  ulonglong uVar5;
  double dVar6;
  float fVar7;
  undefined4 in_fr4 = 0;
  undefined4 in_fr15 = 0;
  double dVar8;
  int iVar9;
  int ar5_00;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar11 == '\0') {
    in_fr15 = uVar4;
    uVar4 = ((undefined4 *)(fr0_ - 0x78))[0];
  }
  ((undefined4 *)(fr0_ - 0x78))[0] = uVar4;
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c02327c(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x80)) = SUB84(in_dr0,0);
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x80));
  dVar8 = in_dr0;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x5c)) = 0;
    dVar8 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  uVar5 = (ulonglong)in_dr0 & 0xffffffff;
  if (cVar11 == '\0') {
    (*(undefined4 *)(fr0_ - 0x58)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x54)) = 0;
    (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x80));
  }
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_length_sq(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)(uVar5 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x54)) = uVar4;
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x54)) = (undefined4)uVar5;
    ((undefined4 *)(fr0_ - 0x50))[0] = uVar4;
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x50)),ar5,ar6,ar7); });
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar3 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,fVar3);
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar7 = F32HI(dVar6);
    fVar3 = F32LO(dVar6) / fVar7;
    dVar6 = CONCAT44D(fVar7,fVar3);
    iVar9 = (int)fVar3;
  }
  else {
    dVar6 = dVar6 / dVar6;
    iVar9 = (int)dVar6;
  }
  uVar4 = SUB84(dVar6,0);
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c256a78(((undefined4 *)(fr0_ - 0x50)),iVar9,ar6,ar7); });
  puVar2 = &(*(undefined4 *)(fr0_ - 0x68));
  puVar1 = &(*(undefined4 *)(fr0_ - 0x5c));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7); });
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x68));
  (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x64));
  (*(undefined4 *)(fr0_ - 0x54)) = (*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7); });
  ar7_00 = 0;
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,uVar4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = CONCAT44D(F32HI(dVar8) * F32HI(dVar6),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar3 = F32HI(dVar8) / F32HI(dVar6);
    dVar8 = CONCAT44D(fVar3,SUB84(dVar8,0));
    iVar9 = (int)fVar3;
  }
  else {
    dVar8 = dVar8 / dVar6;
    fVar3 = F32HI(dVar8);
    iVar9 = (int)dVar8;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = CONCAT44D(fVar3,F32LO(dVar8) * F32HI(dVar6));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    ar5_00 = (int)(F32LO(dVar8) / F32HI(dVar6));
  }
  else {
    ar5_00 = (int)(dVar8 / dVar6);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x50)),ar5_00,iVar9,0); });
  puVar2 = &(*(undefined4 *)(fr0_ - 0x68));
  puVar1 = &(*(undefined4 *)(fr0_ - 0x5c));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 132)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x50)),puVar1,puVar2,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x78)),puVar1,puVar2,ar7_00));
  if (cVar11 != '\0') {
    (*(undefined4 *)(fr0_ - 0x6c)) = (*(undefined4 *)(fr0_ - 0x5c));
  }
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined4 *)(fr0_ - 0x78)),puVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 132)), Vec3_dtor(((undefined4 *)(fr0_ - 0x78)),0xffffffff,puVar2,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c02374c\n.set _FUN_8c02374c, _FUN_8c02374c_def\n");
//@unit 8c0238b4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0238b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0238b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  undefined8 in_dr0 = 0;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar2;
  undefined4 in_fr4 = 0;
  int ar7_00;
  int ar6_01;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(ar4,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr0;
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar4 = uVar3;
  if (cVar7 == '\0') {
    uVar4 = ((undefined4 *)(fr0_ - 0x7c))[0];
    (*(undefined4 *)(fr0_ - 0x14)) = uVar3;
    uVar3 = (*(undefined4 *)(fr0_ - 0x10));
  }
  (*(undefined4 *)(fr0_ - 0x10)) = uVar3;
  ((undefined4 *)(fr0_ - 0x7c))[0] = uVar4;
  (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(ar4,ar5,ar6,ar7));
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_dr0;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x60)) = 0;
    (*(undefined4 *)(fr0_ - 0x58)) = 0x3f800000;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar4;
  }
  else {
    ((undefined4 *)(fr0_ - 0x54))[0] = 0x3f800000;
    (*(undefined4 *)(fr0_ - 0x58)) = (*(undefined4 *)(fr0_ - 0x10));
    (*(undefined4 *)(fr0_ - 0x60)) = (*(undefined4 *)(fr0_ - 0x10));
    (*(undefined4 *)(fr0_ - 0xc)) = uVar4;
  }
  (*(undefined4 *)(fr0_ - 0x5c)) = (*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c25cddc(((undefined4 *)(fr0_ - 0x54)),ar5,ar6,ar7); });
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0xc)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar7_00 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar6_01 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256b0c(((undefined4 *)(fr0_ - 0x54)),iVar5,ar6_01,ar7_00); });
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = F32LO(dVar2) * F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = CONCAT44D(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar2) / F32HI(dVar2));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c256ce0(((undefined4 *)(fr0_ - 0x54)),iVar5,ar6_01,ar7_00); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x6c));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x60));
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c21279c(((undefined4 *)(fr0_ - 0x54)),ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x7c)),ar5_00,ar6_00,ar7_00));
  if (cVar7 != '\0') {
    (*(undefined4 *)(fr0_ - 0x70)) = (*(undefined4 *)(fr0_ - 0x60));
  }
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined4 *)(fr0_ - 0x7c)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined4 *)(fr0_ - 0x7c)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x14)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0238b4\n.set _FUN_8c0238b4, _FUN_8c0238b4_def\n");
//@unit 8c023a14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_assign_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_assign";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _Vec3_assign\n.set _Vec3_assign, _Vec3_assign_def\n");
//@unit 8c023a34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_add_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_add";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd0 = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) + F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),*(undefined4 *)(unsigned)((int)ar4 + 4));
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 4);
    dVar1 = *(double *)(unsigned)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar1) + F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 1));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar1) + F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(s0,&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_add\n.set _Vec3_add, _Vec3_add_def\n");
//@unit 8c023aa0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c023aa0_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023aa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar4 + *ar5;
  ar4[1] = ar4[1] + ar5[1];
  ar4[2] = ar4[2] + ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023aa0\n.set _FUN_8c023aa0, _FUN_8c023aa0_def\n");
//@unit 8c023ae0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_sub_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_sub";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd0 = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 4),*(undefined4 *)(unsigned)((int)ar4 + 4));
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 4);
    dVar1 = *(double *)(unsigned)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(ar4 + 1));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(s0,&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_sub\n.set _Vec3_sub, _Vec3_sub_def\n");
//@unit 8c023b4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c023b4c_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023b4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar4 - *ar5;
  ar4[1] = ar4[1] - ar5[1];
  ar4[2] = ar4[2] - ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023b4c\n.set _FUN_8c023b4c, _FUN_8c023b4c_def\n");
//@unit 8c023b8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_scale_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_scale";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd0 = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar4 + 4));
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 1));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar1) * F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(s0,&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Vec3_scale\n.set _Vec3_scale, _Vec3_scale_def\n");
//@unit 8c023bf4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c023bf4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar4 * *ar5;
  ar4[1] = ar4[1] * *ar5;
  ar4[2] = ar4[2] * *ar5;
  return ar4;
}

__asm__(".globl _FUN_8c023bf4\n.set _FUN_8c023bf4, _FUN_8c023bf4_def\n");
//@unit 8c023c30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023c30_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023c30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  double dVar1;
  undefined8 in_xd0 = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) / F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar4 + 4));
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar1) / F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar4 + 1));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar1) / F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(s0,&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c023c30\n.set _FUN_8c023c30, _FUN_8c023c30_def\n");
//@unit 8c023c98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c023c98_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023c98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar4 / *ar5;
  ar4[1] = ar4[1] / *ar5;
  ar4[2] = ar4[2] / *ar5;
  return ar4;
}

__asm__(".globl _FUN_8c023c98\n.set _FUN_8c023c98, _FUN_8c023c98_def\n");
//@unit 8c023cd4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023cd4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023cd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c023cd4\n.set _FUN_8c023cd4, _FUN_8c023cd4_def\n");
//@unit 8c023d04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023d04_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023d04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c023d04\n.set _FUN_8c023d04, _FUN_8c023d04_def\n");
//@unit 8c023d34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_set_zero_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_set_zero";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _Vec3_set_zero\n.set _Vec3_set_zero, _Vec3_set_zero_def\n");
//@unit 8c023d68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Vec3_set_xyz_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_set_xyz";
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

__asm__(".globl _Vec3_set_xyz\n.set _Vec3_set_xyz, _Vec3_set_xyz_def\n");
//@unit 8c023d7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023d7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c023d7c\n.set _FUN_8c023d7c, _FUN_8c023d7c_def\n");
//@unit 8c023d8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * vec3_copy_8c023d8c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "vec3_copy_8c023d8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _vec3_copy_8c023d8c\n.set _vec3_copy_8c023d8c, _vec3_copy_8c023d8c_def\n");
//@unit 8c023dac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023dac_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023dac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return ar4;
}

__asm__(".globl _FUN_8c023dac\n.set _FUN_8c023dac, _FUN_8c023dac_def\n");
//@unit 8c023de0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023de0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023de0";
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

__asm__(".globl _FUN_8c023de0\n.set _FUN_8c023de0, _FUN_8c023de0_def\n");
//@unit 8c023df4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023df4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023df4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c023df4\n.set _FUN_8c023df4, _FUN_8c023df4_def\n");
//@unit 8c023e04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023e04_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023e04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023e04\n.set _FUN_8c023e04, _FUN_8c023e04_def\n");
//@unit 8c023e24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c023e24_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023e24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023e24\n.set _FUN_8c023e24, _FUN_8c023e24_def\n");
//@unit 8c023e44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023e44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023e44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl _FUN_8c023e44\n.set _FUN_8c023e44, _FUN_8c023e44_def\n");
//@unit 8c023e4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_023e4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_023e4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_023e4c\n.set _free_if_nonnull_wrap_023e4c, _free_if_nonnull_wrap_023e4c_def\n");
//@unit 8c023e7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023e7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023e7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25cddc(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c023e7c\n.set _FUN_8c023e7c, _FUN_8c023e7c_def\n");
//@unit 8c023e98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023e98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023e98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(ar4,ar5,ar6,ar7); });
  return ar4;
}

__asm__(".globl _FUN_8c023e98\n.set _FUN_8c023e98, _FUN_8c023e98_def\n");
//@unit 8c023ebc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023ebc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023ebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr4 = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256a78(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c023ebc\n.set _FUN_8c023ebc, _FUN_8c023ebc_def\n");
//@unit 8c023ef8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023ef8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023ef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr4 = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256ce0(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c023ef8\n.set _FUN_8c023ef8, _FUN_8c023ef8_def\n");
//@unit 8c023f34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023f34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023f34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr4 = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256d7c(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c023f34\n.set _FUN_8c023f34, _FUN_8c023f34_def\n");
//@unit 8c023f70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023f70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023f70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr6 = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(ar4,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0)); });
  return uVar1;
}

__asm__(".globl _FUN_8c023f70\n.set _FUN_8c023f70, _FUN_8c023f70_def\n");
//@unit 8c023fdc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c023fdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c023fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c023fdc\n.set _FUN_8c023fdc, _FUN_8c023fdc_def\n");
//@unit 8c024010
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
void FUN_8c024010_def(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ring[rp++ & 255] = "FUN_8c024010";

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)param_3;
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((int)param_3 + 4);
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(param_3 + 1);
    (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*param_3;
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)((int)param_3 + 4);
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)param_3[1];
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c21279c(param_1,&(*(undefined4 *)(fr0_ - 0x18)),&(*(undefined4 *)(fr0_ - 0x24)),vr7));
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)param_2 = (*(undefined4 *)(fr0_ - 0x24));
    *(undefined4 *)(unsigned)((int)param_2 + 4) = (*(undefined4 *)(fr0_ - 0x20));
    *(undefined4 *)(unsigned)(param_2 + 1) = (*(undefined4 *)(fr0_ - 0x1c));
  }
  else {
    *param_2 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    *(ulonglong *)(unsigned)((int)param_2 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    param_2[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  return;
}

__asm__(".globl _FUN_8c024010\n.set _FUN_8c024010, _FUN_8c024010_def\n");
//@unit 8c024088
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c024088_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024088";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0241c4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c024088\n.set _FUN_8c024088, _FUN_8c024088_def\n");
//@unit 8c0240bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0240bc_def(double *ar4,double *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0240bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr3 = 0;
  double dVar4;
  undefined4 in_fr15 = 0;
  double dVar5;
  undefined4 uVar6;
  double in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar1 = *(float *)(unsigned)(ar5 + 1) * ar6[2];
  dVar5 = CONCAT44D(*(float *)(unsigned)ar5 * *ar6 + *(float *)(unsigned)((int)ar5 + 4) * ar6[1] + fVar1,in_fr15)
  ;
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar5,in_fr3);
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = *ar4;
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar3),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
    dVar3 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) +
                             F32LO(dVar3) * F32HI(dVar3),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[1];
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
    dVar5 = CONCAT44D(F32HI(dVar5) -
                             (F32HI(dVar4) + fVar1),SUB84(dVar5,0));
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
    dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
  }
  uVar6 = (undefined4)(D2U(dVar5) >> 0x20);
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar5,uVar6);
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = ar4[2];
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * F32HI(dVar3),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)(unsigned)((int)ar5 + 4);
    dVar3 = *(double *)(unsigned)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) +
                             F32LO(dVar3) * F32HI(dVar3),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar3);
    fVar1 = F32LO(dVar3) * fVar2;
    dVar3 = CONCAT44D(fVar2,fVar1);
    fVar1 = F32LO(dVar4) / (F32HI(dVar4) + fVar1);
  }
  else {
    dVar3 = dVar3 * dVar3;
    fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3),0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(uVar6,fVar1);
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar1 = F32LO(dVar5);
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar3 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar4,fVar2);
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar4);
    dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x30)) = SUB84(dVar4,0);
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)((int)ar4 + 0x14));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
    in_xd0 = *(double *)(unsigned)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar4) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),fVar2);
  }
  else {
    dVar4 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    fVar2 = F32HI(dVar4);
    dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(dVar4,0);
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 3));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_xd0,0);
    in_xd0 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar1 = F32LO(dVar4) * fVar1;
  }
  else {
    fVar1 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),fVar1);
  }
  else {
    dVar5 = ar4[1];
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x28)) = F32LO(dVar5) + F32HI(dVar5);
  }
  else {
    (*(float *)(fr0_ - 0x28)) = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 != '\0') {
    (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
    (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0240bc\n.set _FUN_8c0240bc, _FUN_8c0240bc_def\n");
//@unit 8c0241c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0241c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0241c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x10,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0241c4\n.set _FUN_8c0241c4, _FUN_8c0241c4_def\n");
//@unit 8c0241e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0241e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0241e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02421c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0241e8\n.set _FUN_8c0241e8, _FUN_8c0241e8_def\n");
//@unit 8c02421c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02421c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02421c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x10,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02421c\n.set _FUN_8c02421c, _FUN_8c02421c_def\n");
//@unit 8c024240
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c024240_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024240";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125988)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2792a8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c2792a8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125998)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2792b4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c2792b4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1259a8)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c2792c0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c2792c0,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1259b8)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c2792cc,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c024240\n.set _FUN_8c024240, _FUN_8c024240_def\n");
//@unit 8c0242e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0242e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0242e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25cddc(0x8c27c1ec,ar5,ar6,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0242e8\n.set _FUN_8c0242e8, _FUN_8c0242e8_def\n");
//@unit 8c02430c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02430c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02430c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14,ar4,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c02430c\n.set _FUN_8c02430c, _FUN_8c02430c_def\n");
//@unit 8c024340
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c024340_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024340";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(ar4,*(undefined4 *)(unsigned)0x8c27d1ec * 0x40 + 0x8c27c1ec,0x40,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c024340\n.set _FUN_8c024340, _FUN_8c024340_def\n");
//@unit 8c024378
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c024378_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024378";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(*(undefined4 *)(unsigned)0x8c27d1ec * 0x40 + 0x8c27c1ec,ar4,0x40,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c024378\n.set _FUN_8c024378, _FUN_8c024378_def\n");
//@unit 8c0243b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0243b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0243b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f3e30(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d50c(ar4 + 0x4c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff40(ar4 + 200,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036058(ar4 + 0xd8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0xe8) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xec) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0xec) = CONCAT44(0x3f800000,extraout_fr1);
  }
  return ar4;
}

__asm__(".globl _FUN_8c0243b0\n.set _FUN_8c0243b0, _FUN_8c0243b0_def\n");
//@unit 8c02441c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02441c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02441c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x38,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c02441c\n.set _FUN_8c02441c, _FUN_8c02441c_def\n");
//@unit 8c02447c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02447c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02447c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x18,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x43660000;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0x43b40000;
    *(undefined4 *)(unsigned)(ar4 + 0x10) = 0x43b40000;
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0x43b40000;
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 0xc3b40000;
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0xc3b40000;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = 0xc3b40000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x24) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x43b4000043660000;
    *(undefined8 *)(unsigned)(ar4 + 0xc) = 0xc3b4000043b40000;
    *(undefined8 *)(unsigned)(ar4 + 0x10) = 0xc3b4000043b40000;
    *(undefined8 *)(unsigned)(ar4 + 0x14) = 0xc3b4000043b40000;
    *(undefined8 *)(unsigned)(ar4 + 0x18) = 0x2402e000c3b40000;
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x2402e000c3b40000;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x2402e000c3b40000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02447c\n.set _FUN_8c02447c, _FUN_8c02447c_def\n");
//@unit 8c024508
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c024508_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024508\n.set _FUN_8c024508, _FUN_8c024508_def\n");
//@unit 8c024518
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c024518_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024518";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024518\n.set _FUN_8c024518, _FUN_8c024518_def\n");
//@unit 8c02452c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02452c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02452c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 8,((void *)0x8c024518),((void *)0x8c0247e0),0x14); });
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x12,((void *)0x8c024518),((void *)0x8c0247e0),0x14); });
  uVar3 = 4;
  pcVar2 = ((void *)0x8c016bfc);
  pcVar1 = ((void *)0x8c015ab8);
  ({ unsigned long t0_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1c,((void *)0x8c015ab8),((void *)0x8c016bfc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x1d,pcVar1,pcVar2,uVar3));
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1e,((void *)0x8c015224),((void *)0x8c0153e4),8); });
  uVar3 = 8;
  pcVar2 = ((void *)0x8c0153e4);
  pcVar1 = ((void *)0x8c015224);
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x22,((void *)0x8c015224),((void *)0x8c0153e4),8); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x26,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(ar4 + 0x2c,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x36,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02447c(ar4 + 0x3e,pcVar1,pcVar2,uVar3));
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[0x28] = 0;
  ar4[0x2a] = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x2b) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x29) = 0;
  ar4[0x2d] = 0;
  if (cVar4 == '\0') {
    ar4[0x2f] = 0x3f800000;
    ar4[0x2e] = 0x3f800000;
    ar4[0x30] = 0x3c23d70a;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2f) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(unsigned)(ar4 + 0x2e) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x3c23d70a;
    *(undefined8 *)(unsigned)(ar4 + 0x30) = 0xc43c23d70a;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x31) = 0;
  if (cVar4 == '\0') {
    ar4[0x32] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x32) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x33] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x33) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x34] = 0x3f800000;
    ar4[0x35] = 0x42c80000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x35) = 0xe842c80000;
  }
  if (cVar4 == '\0') {
    ar4[0x3a] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    ar4[0x3b] = 0x3f800000;
    ar4[0x3c] = 0x43160000;
    ar4[0x3d] = 0x43480000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3b) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x3c) = 0xf443160000;
    *(undefined8 *)(unsigned)(ar4 + 0x3d) = 0x4f222fe643480000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02452c\n.set _FUN_8c02452c, _FUN_8c02452c_def\n");
//@unit 8c024758
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c024758_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024758";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x18,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c024758\n.set _FUN_8c024758, _FUN_8c024758_def\n");
//@unit 8c0247b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0247b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0247b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0247b0\n.set _free_if_nonnull_wrap_0247b0, _free_if_nonnull_wrap_0247b0_def\n");
//@unit 8c0247e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0247e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0247e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0247e0\n.set _free_if_nonnull_wrap_0247e0, _free_if_nonnull_wrap_0247e0_def\n");
//@unit 8c024810
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c024810_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024810";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 1;
  ar4[1] = 1;
  ar4[2] = 1;
  return ar4;
}

__asm__(".globl _FUN_8c024810\n.set _FUN_8c024810, _FUN_8c024810_def\n");
//@unit 8c024824
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined2 * FUN_8c024824_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024824";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024810(ar4 + 2,ar5,ar6,ar7));
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024824\n.set _FUN_8c024824, _FUN_8c024824_def\n");
//@unit 8c024848
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c024848_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c024848";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x13,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x17,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x1b,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x84,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0xb8,ar5,ar6,ar7));
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined4 *)(unsigned)(0x98 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x94 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa0 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xa8 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(0xac + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb0 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(0xb4 + (int)ar4) = 0;
  *(undefined2 *)(unsigned)(0xb6 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024848\n.set _FUN_8c024848, _FUN_8c024848_def\n");
//@unit 8c024968
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_COMMON_02496e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_02496e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined **ar5_00;
  undefined4 uVar4;
  char *ar6_00;
  undefined4 ar7_00;
  char cVar5;
  
  cVar5 = '\0';
  *(unsigned *)0x8c27d1fc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fcac));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d200) = 300;
  *(unsigned *)0x8c27d204 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd28));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d208) = 6;
  *(unsigned *)0x8c27d20c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd34));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d210) = 0x10;
  *(unsigned *)0x8c27d214 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd58));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d218) = 6;
  *(unsigned *)0x8c27d21c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd64));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d220) = 0x10;
  *(unsigned *)0x8c27d224 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd40));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d228) = 6;
  *(unsigned *)0x8c27d22c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd4c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d230) = 0x10;
  *(unsigned *)0x8c27d234 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd70));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d238) = 8;
  *(unsigned *)0x8c27d23c = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d240) = 0x8c1651ec;
  *(unsigned *)0x8c27d244 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c167b80));
  *(unsigned *)0x8c27d248 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d24c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16cea8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d354) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d356) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d358) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35c) = 5;
  *(unsigned *)0x8c27d250 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16f83c));
  *(unsigned *)0x8c27d254 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1721d0));
  *(unsigned *)0x8c27d258 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c174b64));
  *(unsigned *)0x8c27d25c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1774f8));
  *(unsigned *)0x8c27d260 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c179e8c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35e) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d360) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d362) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d364) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d366) = 5;
  *(unsigned *)0x8c27d264 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a0e38));
  *(unsigned *)0x8c27d268 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a37cc));
  *(unsigned *)0x8c27d26c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a6160));
  *(unsigned *)0x8c27d270 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a0e38));
  *(unsigned *)0x8c27d274 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a8af4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d368) = 0x1e;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d370) = 5;
  *(unsigned *)0x8c27d278 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d4dc8));
  *(unsigned *)0x8c27d27c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d775c));
  *(unsigned *)0x8c27d280 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1da0f0));
  *(unsigned *)0x8c27d284 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d4dc8));
  *(unsigned *)0x8c27d288 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1dca84));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d372) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d374) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d376) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d378) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37a) = 5;
  *(unsigned *)0x8c27d28c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17c820));
  *(unsigned *)0x8c27d290 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17c820));
  *(unsigned *)0x8c27d294 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17f1b4));
  *(unsigned *)0x8c27d298 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c181b48));
  *(unsigned *)0x8c27d29c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1844dc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d380) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d382) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d384) = 5;
  *(unsigned *)0x8c27d2a0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1967e8));
  *(unsigned *)0x8c27d2a4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19917c));
  *(unsigned *)0x8c27d2a8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19bb10));
  *(unsigned *)0x8c27d2ac = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1967e8));
  *(unsigned *)0x8c27d2b0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19e4a4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d386) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d388) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38e) = 5;
  *(unsigned *)0x8c27d2b4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  *(unsigned *)0x8c27d2b8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ca778));
  *(unsigned *)0x8c27d2bc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1cd10c));
  *(unsigned *)0x8c27d2c0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1cfaa0));
  *(unsigned *)0x8c27d2c4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d2434));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d390) = 0x1e;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d392) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d394) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d396) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d398) = 5;
  *(unsigned *)0x8c27d2c8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ab488));
  *(unsigned *)0x8c27d2cc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ade1c));
  *(unsigned *)0x8c27d2d0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b07b0));
  *(unsigned *)0x8c27d2d4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b3144));
  *(unsigned *)0x8c27d2d8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b5ad8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39a) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a0) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a2) = 5;
  *(unsigned *)0x8c27d2dc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b846c));
  *(unsigned *)0x8c27d2e0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b846c));
  *(unsigned *)0x8c27d2e4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1bae00));
  *(unsigned *)0x8c27d2e8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1bd794));
  *(unsigned *)0x8c27d2ec = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c0128));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a4) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a6) = 5;
  ar7_00 = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a8) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3aa) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ac) = 5;
  *(unsigned *)0x8c27d2f0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  *(unsigned *)0x8c27d2f4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e4740));
  *(unsigned *)0x8c27d2f8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e70d4));
  *(unsigned *)0x8c27d2fc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e9a68));
  *(unsigned *)0x8c27d300 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ec3fc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ae) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b0) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b2) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b4) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b6) = 5;
  *(unsigned *)0x8c27d304 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c189804));
  *(unsigned *)0x8c27d308 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c18c198));
  *(unsigned *)0x8c27d30c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c18eb2c));
  *(unsigned *)0x8c27d310 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1914c0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ba) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3bc) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3be) = 8;
  *(unsigned *)0x8c27d314 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c186e70));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c0) = 10;
  *(unsigned *)0x8c27d318 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c2abc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c2) = 0x1e;
  *(unsigned *)0x8c27d31c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d320 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c4) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c6) = 3;
  *(unsigned *)0x8c27d324 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d328 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c8) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ca) = 8;
  *(unsigned *)0x8c27d33c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c7de4));
  *(unsigned *)0x8c27d340 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d4) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d6) = 3;
  *(unsigned *)0x8c27d344 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c7de4));
  *(unsigned *)0x8c27d348 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d8) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3da) = 8;
  *(unsigned *)0x8c27d32c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e1dac));
  *(unsigned *)0x8c27d330 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3cc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ce) = 3;
  *(unsigned *)0x8c27d334 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e1dac));
  *(unsigned *)0x8c27d338 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d0) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d2) = 8;
  *(unsigned *)0x8c27d34c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c193e54));
  *(unsigned *)0x8c27d350 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3dc) = 4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3de) = 4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015508(0x8c27d3e0,((undefined1 *)(unsigned)0x8c143df8),((undefined1 *)(unsigned)0x8c27d1fc),5); });
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) = (*((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c) >> 0x10) + 2;
  uVar4 = 8;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c23c814(0x8c279308,((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c),8,ar7_00));
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) + -1;
  puVar3 = (uint *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) + -1) * 4 + -0x73d86cf8);
  if (cVar5 == '\0') {
    *puVar3 = puVar1[iVar2];
  }
  else {
    *(undefined8 *)(unsigned)puVar3 = *(undefined8 *)(unsigned)(puVar1 + iVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015508(0x8c27d3e4,&(*(undefined4 *)(unsigned)(unsigned)0x8c14442c),uVar4,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015ad4(0x8c27d3e8,((undefined1 *)(unsigned)0x8c146400),uVar4,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); Class_129920_m0_015248(0x8c27d3ec,&(*(undefined4 *)(unsigned)(unsigned)0x8c143e1c),uVar4,ar7_00); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c1444b0);
  (vsp = ((unsigned long)(fr0_ - 40)), Class_129920_m0_015248(0x8c27d3f4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1444b0),uVar4,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_4_0253e4(0x8c27d3ec,ar5_00,uVar4,ar7_00));
  ar6_00 = "GRAPHICS\\COMMON";
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c020ef0(ar4,"COMMON_EYE","GRAPHICS\\COMMON",uVar4));
  if (iVar2 == 0) {
    uVar4 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 40)), report_error_message("Failed to load eye textuer..",((undefined1 *)(unsigned)0x8c12fde4),0,2));
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_4_0253e4(0x8c27d3f4,0x8c27d3f4,ar6_00,uVar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c020ef0(ar4,"COMMON_SCSI","GRAPHICS\\COMMON",uVar4));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), report_error_message("Failed to load scsi textuer..",((undefined1 *)(unsigned)0x8c12fde4),0,2));
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_COMMON_02496e\n.set _s_GRAPHICS_COMMON_02496e, _s_GRAPHICS_COMMON_02496e_def\n");
//@unit 8c0253e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_0253e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_0253e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_0253e4\n.set _get_field_4_0253e4, _get_field_4_0253e4_def\n");
//@unit 8c0253ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0253ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0253ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xb8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x84,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x6c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x5c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x40,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0253ec\n.set _FUN_8c0253ec, _FUN_8c0253ec_def\n");
//@unit 8c025490
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c025490_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025490";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c025490\n.set _FUN_8c025490, _FUN_8c025490_def\n");
//@unit 8c0254d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0254d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0254d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined8 *puVar2;
  undefined4 ar5_00;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar3 = ar4;
  ({ unsigned long t0_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0f4040(ar4,ar5,ar6,s0); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129a88);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar3,ar5,ar6,s0));
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,2,ar6,s0));
  ar5_00 = 0;
  uVar1 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b9a8(ar4 + 0x174,0,ar7,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar4 + 0x174,ar5_00,uVar1,ar7_00));
  iVar3 = (int)(short)uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034c50(ar4 + 0x2dc,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b1dc(ar4 + 0x310,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x338,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024848(ar4 + 0x344,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x480,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02911c(ar4,iVar3,ar7,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = s8;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = s12;
  *(undefined4 *)(unsigned)(ar4 + 0x410) = s16;
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xbc);
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x170) = *(undefined4 *)(unsigned)puVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x170) = *puVar2;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb8);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(unsigned)puVar2;
    *(undefined4 *)(unsigned)(ar4 + 100) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar1;
  }
  else {
    uVar5 = *puVar2;
    *(undefined8 *)(unsigned)(ar4 + 100) = uVar5;
    *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar5;
    *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar5;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xe8);
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xec);
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0254d0\n.set _FUN_8c0254d0, _FUN_8c0254d0_def\n");
//@unit 8c025688
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int CAnimal_m0_025688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m0_025688";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129a88);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x480,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0253ec(ar4 + 0x344,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x338,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c025490(ar4 + 0x310,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_034d08(ar4 + 0x2dc,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_025688\n.set _CAnimal_m0_025688, _CAnimal_m0_025688_def\n");
//@unit 8c02573c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m2_02573c_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_02573c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  uint ar5_00;
  int ****a6_00;
  float fVar8;
  ulonglong in_dr0 = 0;
  double dVar9;
  float fVar10;
  undefined4 in_fr3 = 0;
  double dVar11;
  char cVar12;
  char cVar13;
  int ****ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = ar5;
  ar7_00 = ar7;
  ain0 = ar6;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030e10(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c030e5c(&(*(undefined4 *)(fr0_ - 0xac)),uVar5,ar6,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00));
  a6_00 = (int ****)(unsigned)(int)(short)uVar2;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023e44(((undefined1 *)(fr0_ - 0xec)),uVar5,ar6,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(ar5,uVar5,ar6,ar7_00));
  ar5_00 = uVar3 & 0xffff;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,uVar5,ar6,ar7_00));
  if ((iVar4 != 2) && (*(int *)(unsigned)(ar4 + 0x48c) == 0)) {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c1011b0(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar5,ar6,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 268)); FUN_8c02601c(ar4 + 0x26c,uVar5 & 0xffff,ar6,ar7_00); });
    uVar5 = ar5_00;
    ar6 = ar7;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00));
  }
  iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025ff4(ar4 + 0x174,uVar5,ar6,ar7_00));
  if (iVar6 == 1) {
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02a6f8(ar4,uVar5,ar6,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025fc4(ar4 + 0x174,uVar5,ar6,ar7_00));
  if ((short)uVar2 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x24) == 3) {
      uVar5 = 2;
      iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x47])))(ar7,2,ar6,ar7_00));
      if (iVar6 != 0) {
        uVar5 = 0;
        (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025fbc(ar4 + 0x21c,0,ar6,ar7_00));
        goto LAB_8c02590e;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00));
    a6_00 = (int ****)(unsigned)(int)(short)uVar2;
    if (a6_00 != (int ****)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xec))))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe0))))(ar4,0x8c3eb334,a6_00,ar7_00));
      uVar5 = ar5;
      ar6 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5,a6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x5c))))(ar4,uVar5,ar6,ar7_00));
    }
  }
LAB_8c02590e:
  if ((ar5_00 != *(ushort *)(unsigned)(ar4 + 0x464)) &&
     (*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar5 = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar6 = (vsp = ((unsigned long)(fr0_ - 268)), libgcc_divide_helper_01031c(ar5_00,uVar5,ar6,ar7_00));
    if (iVar6 == 0) {
      (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02ae38(ar4,uVar5,ar6,ar7_00));
    }
    *(short *)(unsigned)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(unsigned)(ar4 + 0x358) != 0) || (*(int *)(unsigned)(ar4 + 0x354) != 0)) ||
      (*(int *)(unsigned)(ar4 + 0x360) != 0)) || (*(int *)(unsigned)(ar4 + 0x35c) != 0)) {
    if (cVar13 == '\0') {
      dVar11 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar11 = *(double *)(unsigned)(ar4 + 0x468);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x361b5837,(float)(int)*(char *)(unsigned)(ar4 + 0x46c));
    }
    else {
      dVar9 = 512.0001032005592;
    }
    if (cVar12 == '\0') {
      fVar8 = F32LO(dVar9) * F32HI(dVar9);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = CONCAT44D(0x40800000,fVar8);
    }
    else {
      dVar9 = 5.441987277913441e+158;
    }
    if (cVar12 == '\0') {
      fVar10 = F32HI(dVar9);
      fVar8 = F32LO(dVar9) * fVar10;
      dVar9 = CONCAT44D(fVar10,fVar8);
      dVar11 = CONCAT44D(F32HI(dVar11) + fVar8,SUB84(dVar11,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
      dVar11 = dVar11 + dVar9;
    }
    fVar8 = F32LO(dVar9);
    if (cVar13 == '\0') {
      *(int *)(unsigned)(ar4 + 0x468) = (int)(D2U(dVar11) >> 0x20);
      fVar8 = *(float *)(unsigned)(ar4 + 0x468);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x468) = dVar11;
    }
    if (cVar12 != '\0' || fVar8 <= 1.0) {
      if (cVar13 == '\0') {
        fVar8 = *(float *)(unsigned)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar8;
      if (cVar12 == '\0' && fVar8 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar8;
        if (cVar13 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar8);
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    (*(int *)(fr0_ - 0x58)) = ar4 + 0x174;
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
    (*(int *)(fr0_ - 0x48)) = ar4 + 0x2dc;
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
    (*(int *)(fr0_ - 0x5c)) = ar4;
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int ***)(unsigned)ain0));
    (*(uint *)(fr0_ - 0x40)) = ar5;
    (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar5,ar6,ar7_00));
    uVar5 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02602c(ar5,uVar5,ar6,ar7_00));
    ar6 = ((int *** *)(fr0_ - 0x60));
    uVar5 = uVar5 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c034d48(ar4 + 0x2dc,uVar5,ar6,ar7_00));
  }
  (*(int *)(fr0_ - 0x78)) = ar4 + 0x174;
  (*(undefined4 *)(fr0_ - 0x74)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
  (*(int *)(fr0_ - 0x7c)) = ar4;
  (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((int ***)(unsigned)ain0));
  (*(uint *)(fr0_ - 0x64)) = ar5;
  (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar5,ar6,ar7_00));
  (*(int *)(fr0_ - 0x6c)) = ar4 + 0x2dc;
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar7,&(*(int *)(fr0_ - 0x7c)),ar7_00));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) = ar4 + 0x30;
  (*(int *)(fr0_ - 0x28)) = ar4 + 0x50;
  (*(int *)(fr0_ - 0x24)) = ar4 + 0x5c;
  a7 = ((undefined1 *)(fr0_ - 0x34));
  a6 = ((undefined1 *)(fr0_ - 0x38));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x48])))(ar7,a5,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)((*ar7)[0x61])))(ar7,a5,a6,a7));
  uVar1 = in_dr0;
  if (cVar13 == '\0') {
    (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x30));
  }
  (*(undefined8 *)(fr0_ - 0x30)) = uVar1;
  (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
  (*(int *)(fr0_ - 0xa8)) = (int)&(*(undefined8 *)(fr0_ - 0x30)) + 4;
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 268)), get_field_140_025f70(ar4 + 0x174,a5,a6,a7));
  (*(unsigned *)(fr0_ - 0x90) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x3c))));
  if (cVar13 == '\0') {
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = *(undefined4 *)(unsigned)(ar4 + 0x40c);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x40c);
    (*(undefined4 *)(fr0_ - 0x84)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x40c) >> 0x20);
  }
  (*(undefined4 *)(fr0_ - 0x84)) = CONCAT31((*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x84))+1)),1);
  (*(int *)(fr0_ - 0x9c)) = ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(unsigned *)(fr0_ - 0x94) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c10277c(((undefined1 *)(fr0_ - 0xf8)),a5,a6,a7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 268)), get_field_24_026024(ar7,a5,a6,a7));
  if (iVar4 == 0) {
    if (cVar13 == '\0') {
      (*(undefined8 *)(fr0_ - 0xf4)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xf4))+4)),(int)(*(undefined8 *)(fr0_ - 0x30)));
    }
    else {
      (*(undefined8 *)(fr0_ - 0xf4)) = (*(undefined8 *)(fr0_ - 0x30));
    }
  }
  (*(unsigned *)(fr0_ - 0xa0) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0xf8))));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025f68(ar4 + 0x1ec,a5,a6,a7));
  (*(uint *)(fr0_ - 0x80)) = (uint)((char)uVar2 != '\0');
  a5_00 = &(*(undefined4 *)(fr0_ - 0xac));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5_00,a6,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x108))); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); FUN_8c025f44(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x108)),a6,a7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 268)), Vec3_dtor(((undefined1 *)(fr0_ - 0x108)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023e7c(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023f70(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c023fdc(((undefined1 *)(fr0_ - 0xec)),uVar2,a6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c02bef8(ar4 + 0x174,uVar2,a6,a7));
  iVar6 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar2 * 0x124 + 0xd8;
  iVar4 = ar4 + 0x3c8;
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c024010(((undefined1 *)(fr0_ - 0xec)),iVar4,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,iVar4,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c0f79b8(ar4 + 0xa0,iVar4,iVar6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c025f68(ar4 + 0x1ec,iVar4,iVar6,a7));
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c) + -1;
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar7 = *(int *)(unsigned)(ar4 + 0x45c);
    *(int *)(unsigned)(ar4 + 0x45c) = iVar7 + 1;
    if (0x707 < iVar7 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar7 = (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,iVar4,iVar6,a7));
  if (iVar7 == 0) {
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x4c))))(ar4,iVar4,iVar6,a7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48c) = 0;
  (vsp = ((unsigned long)(fr0_ - 268)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), free_if_nonnull_wrap_023e4c(((undefined1 *)(fr0_ - 0xec)),0xffffffff,iVar6,a7));
  (vsp = ((unsigned long)(fr0_ - 268)), FUN_8c026038(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,iVar6,a7));
  return 1;
}

__asm__(".globl _CAnimal_m2_02573c\n.set _CAnimal_m2_02573c, _CAnimal_m2_02573c_def\n");
//@unit 8c025f44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c025f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025f44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 4,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c025f44\n.set _FUN_8c025f44, _FUN_8c025f44_def\n");
//@unit 8c025f68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c025f68_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025f68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl _FUN_8c025f68\n.set _FUN_8c025f68, _FUN_8c025f68_def\n");
//@unit 8c025f70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_140_025f70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_140_025f70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x140 + ar4);
}

__asm__(".globl _get_field_140_025f70\n.set _get_field_140_025f70, _get_field_140_025f70_def\n");
//@unit 8c025f7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c025f7c_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c025f7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0xba8);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0xbac);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0xbb0);
  return 0xbb0;
}

__asm__(".globl _FUN_8c025f7c\n.set _FUN_8c025f7c, _FUN_8c025f7c_def\n");
//@unit 8c025fa8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c025fa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025fa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0xf4c;
}

__asm__(".globl _FUN_8c025fa8\n.set _FUN_8c025fa8, _FUN_8c025fa8_def\n");
//@unit 8c025fb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_025fb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_025fb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_025fb8\n.set _noop_025fb8, _noop_025fb8_def\n");
//@unit 8c025fbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c025fbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025fbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(short *)(unsigned)(ar4 + 0x16) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c025fbc\n.set _FUN_8c025fbc, _FUN_8c025fbc_def\n");
//@unit 8c025fc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c025fc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025fec(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c025fc4\n.set _FUN_8c025fc4, _FUN_8c025fc4_def\n");
//@unit 8c025fec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c025fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025fec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(ar4 + 0x1e);
}

__asm__(".globl _FUN_8c025fec\n.set _FUN_8c025fec, _FUN_8c025fec_def\n");
//@unit 8c025ff4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c025ff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c025ff4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02db04(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c025ff4\n.set _FUN_8c025ff4, _FUN_8c025ff4_def\n");
//@unit 8c02601c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02601c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02601c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02601c\n.set _FUN_8c02601c, _FUN_8c02601c_def\n");
//@unit 8c026024
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_24_026024_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_24_026024";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_026024\n.set _get_field_24_026024, _get_field_24_026024_def\n");
//@unit 8c02602c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02602c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02602c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(0xa4 + ar4);
}

__asm__(".globl _FUN_8c02602c\n.set _FUN_8c02602c, _FUN_8c02602c_def\n");
//@unit 8c026038
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c026038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026038";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c026038\n.set _FUN_8c026038, _FUN_8c026038_def\n");
//@unit 8c026078
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m3_026078_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_026078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 456; for (int i_ = 0; i_ < 456; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ar5_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined4 a5_01;
  int ****ar6_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  int ****a6_00;
  float fVar7;
  ulonglong in_dr0 = 0;
  double dVar8;
  float fVar9;
  undefined4 in_fr3 = 0;
  double dVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c030e10(((undefined1 *)(fr0_ - 0x3c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c030e5c(&(*(undefined4 *)(fr0_ - 0xac)),uVar6,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  a6_00 = (int ****)(unsigned)(int)(short)uVar2;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02602c(ar5,uVar6,ar6_00,ar7_00));
  ar5_00 = uVar3 & 0xffff;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), get_field_24_026024(ar7,uVar6,ar6_00,ar7_00));
  if ((iVar4 != 2) && (*(int *)(unsigned)(ar4 + 0x48c) == 0)) {
    uVar6 = ar5_00;
    ar6_00 = ar7;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00));
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025ff4(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  if (iVar5 == 1) {
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02a6f8(ar4,uVar6,ar6_00,ar7_00));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025fc4(ar4 + 0x174,uVar6,ar6_00,ar7_00));
  if ((short)uVar2 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00));
    a6_00 = (int ****)(unsigned)(int)(short)uVar2;
    if (a6_00 != (int ****)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xec))))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xe0))))(ar4,0x8c3eb334,a6_00,ar7_00));
      uVar6 = ar5;
      ar6_00 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5,a6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x5c))))(ar4,uVar6,ar6_00,ar7_00));
    }
  }
  if ((ar5_00 != *(ushort *)(unsigned)(ar4 + 0x464)) &&
     (*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar6 = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar5 = (vsp = ((unsigned long)(fr0_ - 456)), libgcc_divide_helper_01031c(ar5_00,uVar6,ar6_00,ar7_00));
    if (iVar5 == 0) {
      (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02ae38(ar4,uVar6,ar6_00,ar7_00));
    }
    *(short *)(unsigned)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(unsigned)(ar4 + 0x358) != 0) || (*(int *)(unsigned)(ar4 + 0x354) != 0)) ||
      (*(int *)(unsigned)(ar4 + 0x360) != 0)) || (*(int *)(unsigned)(ar4 + 0x35c) != 0)) {
    if (cVar12 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar10 = *(double *)(unsigned)(ar4 + 0x468);
    }
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(0x361b5837,(float)(int)*(char *)(unsigned)(ar4 + 0x46c));
    }
    else {
      dVar8 = 512.0001032005592;
    }
    if (cVar11 == '\0') {
      fVar7 = F32LO(dVar8) * F32HI(dVar8);
    }
    else {
      fVar7 = SUB84(dVar8 * dVar8,0);
    }
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(0x40800000,fVar7);
    }
    else {
      dVar8 = 5.442117166052762e+158;
    }
    if (cVar11 == '\0') {
      fVar9 = F32HI(dVar8);
      fVar7 = F32LO(dVar8) * fVar9;
      dVar8 = CONCAT44D(fVar9,fVar7);
      dVar10 = CONCAT44D(F32HI(dVar10) + fVar7,SUB84(dVar10,0));
    }
    else {
      dVar8 = dVar8 * dVar8;
      dVar10 = dVar10 + dVar8;
    }
    fVar7 = F32LO(dVar8);
    if (cVar12 == '\0') {
      *(int *)(unsigned)(ar4 + 0x468) = (int)(D2U(dVar10) >> 0x20);
      fVar7 = *(float *)(unsigned)(ar4 + 0x468);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x468) = dVar10;
    }
    if (cVar11 != '\0' || fVar7 <= 1.0) {
      if (cVar12 == '\0') {
        fVar7 = *(float *)(unsigned)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar7;
      if (cVar11 == '\0' && fVar7 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar7;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    (*(int *)(fr0_ - 0x58)) = ar4 + 0x174;
    (*(undefined4 *)(fr0_ - 0x54)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
    (*(undefined4 *)(fr0_ - 0x50)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
    (*(int *)(fr0_ - 0x48)) = ar4 + 0x2dc;
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
    (*(int *)(fr0_ - 0x5c)) = ar4;
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)((int ***)(unsigned)ar6));
    (*(uint *)(fr0_ - 0x40)) = ar5;
    (*(undefined4 *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar6,ar6_00,ar7_00));
    uVar2 = 1;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c0266d4(ar4 + 0x2dc,1,ar6_00,ar7_00));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c02602c(ar5,uVar2,ar6_00,ar7_00));
    ar6_00 = ((int *** *)(fr0_ - 0x60));
    uVar6 = uVar6 & 0xffff;
    (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c034d48(ar4 + 0x2dc,uVar6,ar6_00,ar7_00));
  }
  (*(int *)(fr0_ - 0x78)) = ar4 + 0x174;
  (*(undefined4 *)(fr0_ - 0x74)) = *(undefined4 *)(unsigned)(ar4 + 0x30c);
  (*(int *)(fr0_ - 0x7c)) = ar4;
  (*(unsigned *)(fr0_ - 0x68) = (unsigned)(unsigned long)((int ***)(unsigned)ar6));
  (*(uint *)(fr0_ - 0x64)) = ar5;
  (*(undefined4 *)(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x52])))(ar7,uVar6,ar6_00,ar7_00));
  (*(int *)(fr0_ - 0x6c)) = ar4 + 0x2dc;
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar7,&(*(int *)(fr0_ - 0x7c)),ar7_00));
  (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) = ar4 + 0x30;
  (*(int *)(fr0_ - 0x28)) = ar4 + 0x50;
  (*(int *)(fr0_ - 0x24)) = ar4 + 0x5c;
  a7 = ((undefined1 *)(fr0_ - 0x34));
  a6 = ((undefined1 *)(fr0_ - 0x38));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x48])))(ar7,a5,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)((*ar7)[0x61])))(ar7,a5,a6,a7));
  uVar1 = in_dr0;
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),(int)(in_dr0 >> 0x20));
    uVar1 = (*(undefined8 *)(fr0_ - 0x30));
  }
  (*(undefined8 *)(fr0_ - 0x30)) = uVar1;
  (*(undefined4 *)(fr0_ - 0xac)) = *(undefined4 *)(unsigned)(ar4 + 0x308);
  (*(int *)(fr0_ - 0xa8)) = (int)&(*(undefined8 *)(fr0_ - 0x30)) + 4;
  (*(undefined4 *)(fr0_ - 0xa4)) = (vsp = ((unsigned long)(fr0_ - 456)), get_field_140_025f70(ar4 + 0x174,a5,a6,a7));
  (*(unsigned *)(fr0_ - 0x90) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x3c))));
  if (cVar12 == '\0') {
    (*(undefined4 *)(fr0_ - 0x8c)) = *(undefined4 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = *(undefined4 *)(unsigned)(ar4 + 0x40c);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x8c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x408);
    (*(undefined4 *)(fr0_ - 0x88)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x40c);
    (*(uint *)(fr0_ - 0x84)) = (uint)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x40c) >> 0x20);
  }
  (*(uint *)(fr0_ - 0x84)) = (*(uint *)(fr0_ - 0x84)) & 0xffffff00;
  (*(int *)(fr0_ - 0x9c)) = ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) >> 4) - 1;
  (*(unsigned *)(fr0_ - 0x94) = (unsigned)(unsigned long)((int ***)(unsigned)ar7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c10277c(((undefined1 *)(fr0_ - 0xb8)),a5,a6,a7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), get_field_24_026024(ar7,a5,a6,a7));
  if (iVar4 == 0) {
    if (cVar12 == '\0') {
      (*(undefined8 *)(fr0_ - 0xb4)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xb4))+4)),(int)(*(undefined8 *)(fr0_ - 0x30)));
    }
    else {
      (*(undefined8 *)(fr0_ - 0xb4)) = (*(undefined8 *)(fr0_ - 0x30));
    }
  }
  (*(unsigned *)(fr0_ - 0xa0) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0xb8))));
  a5_00 = &(*(undefined4 *)(fr0_ - 0xac));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5_00,a6,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc8))); *(unsigned *)((((unsigned long)(fr0_ - 456)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 456)) - 8); FUN_8c025f44(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0xc8)),a6,a7));
  a5_01 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 456)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,a5_01,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c0f79b8(ar4 + 0xa0,a5_01,a6,a7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c025f68(ar4 + 0x1ec,a5_01,a6,a7));
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c) + -1;
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar4 = *(int *)(unsigned)(ar4 + 0x45c);
    *(int *)(unsigned)(ar4 + 0x45c) = iVar4 + 1;
    if (0x707 < iVar4 + 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,a5_01,a6,a7));
  if (iVar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 456)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x4c))))(ar4,a5_01,a6,a7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x48c) = 0;
  (vsp = ((unsigned long)(fr0_ - 456)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 456)), FUN_8c026038(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,a6,a7));
  return 1;
}

__asm__(".globl _CAnimal_m3_026078\n.set _CAnimal_m3_026078, _CAnimal_m3_026078_def\n");
//@unit 8c0266d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0266d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0266d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 2) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c0266d4\n.set _FUN_8c0266d4, _FUN_8c0266d4_def\n");
//@unit 8c0266dc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m4_0266dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m4_0266dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x1c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar6,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _CAnimal_m4_0266dc\n.set _CAnimal_m4_0266dc, _CAnimal_m4_0266dc_def\n");
//@unit 8c026774
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m5_026774_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m5_026774";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimal_m5_026774\n.set _CAnimal_m5_026774, _CAnimal_m5_026774_def\n");
//@unit 8c026834
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
CAnimBody_AdvanceFrame_wrapper_wrap_026834_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimBody_AdvanceFrame_wrapper_wrap_026834";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper_wrap_026834\n.set _CAnimBody_AdvanceFrame_wrapper_wrap_026834, _CAnimBody_AdvanceFrame_wrapper_wrap_026834_def\n");
//@unit 8c026858
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
CAnimBody_AdvanceFrame_wrapper_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimBody_AdvanceFrame_wrapper";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimBody_AdvanceFrame_033ba0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper\n.set _CAnimBody_AdvanceFrame_wrapper, _CAnimBody_AdvanceFrame_wrapper_def\n");
//@unit 8c026880
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimal_RunIncubator_026882_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_RunIncubator_026882";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x30c + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x73;
    (vsp = ((unsigned long)(fr0_ - 68)), report_error_message((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 99,ar5,1,2));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_CAnimal_RunIncubator_026882\n.set _s_CAnimal_RunIncubator_026882, _s_CAnimal_RunIncubator_026882_def\n");
//@unit 8c026968
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c026968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026968";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 220; for (int i_ = 0; i_ < 220; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  undefined2 uVar15;
  
  uVar15 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0xdc)) >> 0x10);
  cVar14 = '\0';
  cVar13 = '\0';
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar6 = CONCAT22(uVar15,(short)uVar1);
  iVar7 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  uVar1 = 0x40;
  iVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar4,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25b5d0(((undefined1 *)(fr0_ - 0x8c)),iVar4,uVar1,ar7); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,uVar1,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,uVar1,ar7); });
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar12 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar12 = (int)(dVar9 / dVar9);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256b0c(((undefined1 *)(fr0_ - 0x8c)),iVar12,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x8c)),puVar5,iVar11,iVar4); });
  puVar5 = ((undefined1 *)(fr0_ - 0x8c));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c255d6c(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4); });
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c024378(((undefined1 *)(fr0_ - 0x4c)),puVar5,iVar11,iVar4));
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256328(0,puVar5,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c25b5d0(0,puVar5,iVar11,iVar4); });
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    fVar10 = F32HI(dVar9);
    fVar8 = F32LO(dVar9) / fVar10;
    dVar9 = CONCAT44D(fVar10,fVar8);
    iVar12 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    iVar12 = (int)dVar9;
  }
  (*(undefined4 *)(fr0_ - 0xb0)) = (undefined4)(D2U(dVar9) >> 0x20);
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256b0c(0,iVar12,iVar11,iVar4); });
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c256fec(0,iVar12,iVar11,iVar4); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4));
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  (*(undefined4 *)(fr0_ - 0x94)) = (*(undefined4 *)(fr0_ - 0xb0));
  if (cVar14 == '\0') {
    (*(undefined4 *)(fr0_ - 0x94)) = uVar1;
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c2540a0((*(undefined4 *)(fr0_ - 0x94)),iVar12,iVar11,iVar4); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 220)), deref_u32(*(int *)(unsigned)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4));
  *(undefined4 *)(unsigned)(ar4 + 0x434) = *puVar3;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c015bb8(iVar7 + 0x70,iVar12,iVar11,iVar4));
    uVar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c029510(ar4,uVar1,0,iVar4));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d74(*(int *)(unsigned)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4));
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar12,iVar11,iVar4));
    if (cVar14 == '\0') {
      (*(undefined4 *)(fr0_ - 0xb0)) = uVar1;
    }
    uVar1 = 0x29;
    ({ unsigned long ri0_ = (unsigned long)(uVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 220)); FUN_8c21f200((*(undefined4 *)(fr0_ - 0xb0)),0x29,iVar11,iVar4); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c015bb8(iVar7 + 0x70,uVar1,iVar11,iVar4));
    uVar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c0297b8(ar4,uVar1,0,iVar4));
  }
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c256210(1,uVar1,uVar6,iVar4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c12fd7c),uVar1,uVar6,iVar4));
  iVar7 = *(int *)(unsigned)(ar4 + 0x474);
  if (iVar7 == 1) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 220)), FUN_8c02b058(ar4,uVar1,uVar6,iVar4));
  }
  return iVar7;
}

__asm__(".globl _FUN_8c026968\n.set _FUN_8c026968, _FUN_8c026968_def\n");
//@unit 8c026d74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c026d74_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026d74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl _FUN_8c026d74\n.set _FUN_8c026d74, _FUN_8c026d74_def\n");
//@unit 8c026d7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c026d7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c026d7c\n.set _FUN_8c026d7c, _FUN_8c026d7c_def\n");
//@unit 8c026da8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimBody_GetCurFrame_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimBody_GetCurFrame";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _CAnimBody_GetCurFrame\n.set _CAnimBody_GetCurFrame, _CAnimBody_GetCurFrame_def\n");
//@unit 8c026db0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c026db0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026db0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c026db0\n.set _FUN_8c026db0, _FUN_8c026db0_def\n");
//@unit 8c026dd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_1c_026dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_1c_026dd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x1c);
}

__asm__(".globl _get_field_1c_026dd8\n.set _get_field_1c_026dd8, _get_field_1c_026dd8_def\n");
//@unit 8c026de0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c026de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026de0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_fr0 = 0;
  undefined4 extraout_fr0_00 = 0;
  char cVar5;
  undefined2 uVar6;
  undefined4 ain0;
  
  uVar6 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x54)) >> 0x10);
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x14)) = extraout_fr0;
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = uVar1;
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c2540a0((*(undefined4 *)(fr0_ - 0x14)),ar5,ar6,ar7); });
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), deref_u32(*(int *)(unsigned)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x434) = *puVar3;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c029510(ar4,uVar1,0,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026db0(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d74(*(int *)(unsigned)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c026d7c(*(undefined4 *)(unsigned)(ar4 + 0x30c),ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x30)) = extraout_fr0_00;
    if (cVar5 == '\0') {
      (*(undefined4 *)(fr0_ - 0x30)) = uVar1;
    }
    uVar1 = 0x29;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c21f200((*(undefined4 *)(fr0_ - 0x30)),0x29,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c015bb8(iVar4 + 0x70,uVar1,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0297b8(ar4,uVar1,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c026de0\n.set _FUN_8c026de0, _FUN_8c026de0_def\n");
//@unit 8c026f7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c026f7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c026f7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  puVar2 = (undefined4 *)(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015510))))
                     (*(int *)(unsigned)((short)uVar1 * 0x124 + *(int *)(unsigned)(0x328 + ar4)) +
                      0x1e4,ar5,ar6,ar7));
  *puVar2 = *(undefined4 *)(unsigned)
             (*(int *)(unsigned)((short)uVar1 * 0x124 + *(int *)(unsigned)(0x328 + ar4)) + 0x40);
  iVar3 = *(int *)(unsigned)(0x344 + ar4);
  *(unsigned *)(unsigned)(iVar3 + 4) = puVar2;
  return iVar3;
}

__asm__(".globl _FUN_8c026f7c\n.set _FUN_8c026f7c, _FUN_8c026f7c_def\n");
//@unit 8c02702c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02702c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02702c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 a5_00;
  int ar6_00;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar8;
  
  uVar11 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x38)) >> 0x10);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  uVar8 = CONCAT22(uVar11,sVar1);
  iVar4 = *(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124;
  uVar2 = *(undefined4 *)(unsigned)(iVar4 + 0xa8);
  ar6_00 = (int)*(short *)(unsigned)(iVar4 + 0xa4);
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c027234(*(undefined4 *)(unsigned)(ar4 + 0x30c),*(undefined4 *)(unsigned)(iVar4 + 0xa0),ar6_00,uVar2));
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) == 0x20) {
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02722c(*(undefined4 *)(unsigned)(ar4 + 0x30c),1,ar6_00,uVar2));
  }
  a5 = (int)sVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0x20))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0x2c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5,ar6_00,uVar2));
  *(undefined4 *)(unsigned)(ar4 + 0xa0) = *(undefined4 *)(unsigned)(iVar4 + 0xb4);
  a5_00 = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),a5_00,ar6_00,uVar2));
  ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,ar6_00,uVar2); });
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_00,uVar2));
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xbc);
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x170) = *(undefined4 *)(unsigned)puVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x170) = *puVar3;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xb8);
  if (cVar10 == '\0') {
    uVar8 = *(undefined4 *)(unsigned)puVar3;
    *(undefined4 *)(unsigned)(ar4 + 100) = uVar8;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar8;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar8;
  }
  else {
    uVar6 = *puVar3;
    *(undefined8 *)(unsigned)(ar4 + 100) = uVar6;
    *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar6;
    *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar6;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xe8);
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar5;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xec);
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar5;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(unsigned)(ar4 + 0x478),ar6_00,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c02702c\n.set _FUN_8c02702c, _FUN_8c02702c_def\n");
//@unit 8c027224
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027224_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027224";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c027224\n.set _FUN_8c027224, _FUN_8c027224_def\n");
//@unit 8c02722c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02722c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02722c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 100) = ar5;
  return 100;
}

__asm__(".globl _FUN_8c02722c\n.set _FUN_8c02722c, _FUN_8c02722c_def\n");
//@unit 8c027234
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027264(ar4 + 0xb0,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c027234\n.set _FUN_8c027234, _FUN_8c027234_def\n");
//@unit 8c027264
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027264";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x14) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar6;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = ar7;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c027264\n.set _FUN_8c027264, _FUN_8c027264_def\n");
//@unit 8c027270
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027270";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027388(ar4 + 0x174,1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,uVar2,ar6,ar7));
  ar6_00 = (int)(short)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02775c(ar4,uVar1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027374(ar4 + 0x21c,uVar1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,uVar1,ar6_00,ar7));
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027354(ar4 + 0x2dc,1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(undefined4 *)(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027270\n.set _FUN_8c027270, _FUN_8c027270_def\n");
//@unit 8c027344
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c027344_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027344";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x9b;
  *(undefined1 *)(unsigned)(0x9b + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c027344\n.set _FUN_8c027344, _FUN_8c027344_def\n");
//@unit 8c027354
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027354";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x28) = (undefined1)ar5;
  return 0x28;
}

__asm__(".globl _FUN_8c027354\n.set _FUN_8c027354, _FUN_8c027354_def\n");
//@unit 8c02735c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02735c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02735c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x40) = (undefined1)ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c02735c\n.set _FUN_8c02735c, _FUN_8c02735c_def\n");
//@unit 8c027364
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c027364_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027364";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x99 + ar4);
}

__asm__(".globl _FUN_8c027364\n.set _FUN_8c027364, _FUN_8c027364_def\n");
//@unit 8c027374
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c027374\n.set _FUN_8c027374, _FUN_8c027374_def\n");
//@unit 8c02737c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_138_02737c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_138_02737c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x138 + ar4);
}

__asm__(".globl _get_field_138_02737c\n.set _get_field_138_02737c, _get_field_138_02737c_def\n");
//@unit 8c027388
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c027388_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027388";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(unsigned)(0x144 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027388\n.set _FUN_8c027388, _FUN_8c027388_def\n");
//@unit 8c027394
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027394_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027394";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa8 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027394\n.set _FUN_8c027394, _FUN_8c027394_def\n");
//@unit 8c0273d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0273d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0273d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0273d0\n.set _noop_0273d0, _noop_0273d0_def\n");
//@unit 8c0273d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0273d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0273d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0273f8(*(undefined4 *)(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0273d4\n.set _FUN_8c0273d4, _FUN_8c0273d4_def\n");
//@unit 8c0273f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0273f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0273f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x81;
  *(undefined1 *)(unsigned)(0x81 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0273f8\n.set _FUN_8c0273f8, _FUN_8c0273f8_def\n");
//@unit 8c027404
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027404";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027448(*(undefined4 *)(unsigned)(0x308 + ar4),1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02743c(*(undefined4 *)(unsigned)(0x30c + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027404\n.set _FUN_8c027404, _FUN_8c027404_def\n");
//@unit 8c02743c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02743c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02743c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x21c;
  *(undefined4 *)(unsigned)(0x21c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02743c\n.set _FUN_8c02743c, _FUN_8c02743c_def\n");
//@unit 8c027448
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c027448_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027448";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x82;
  *(undefined1 *)(unsigned)(0x82 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027448\n.set _FUN_8c027448, _FUN_8c027448_def\n");
//@unit 8c027454
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027454_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027454";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027478(*(undefined4 *)(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027454\n.set _FUN_8c027454, _FUN_8c027454_def\n");
//@unit 8c027478
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c027478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027478";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x84;
  *(undefined1 *)(unsigned)(0x84 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027478\n.set _FUN_8c027478, _FUN_8c027478_def\n");
//@unit 8c027484
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_027484_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_027484";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_027484\n.set _noop_027484, _noop_027484_def\n");
//@unit 8c027488
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_027488_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_027488";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_027488\n.set _noop_027488, _noop_027488_def\n");
//@unit 8c02748c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02748c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02748c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0274b0(*(undefined4 *)(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02748c\n.set _FUN_8c02748c, _FUN_8c02748c_def\n");
//@unit 8c0274b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0274b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0274b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x87;
  *(undefined1 *)(unsigned)(0x87 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0274b0\n.set _FUN_8c0274b0, _FUN_8c0274b0_def\n");
//@unit 8c0274bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0274bc_def(int ar4,ushort *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0274bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5,ar6,ar7));
  if (iVar1 != 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7));
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7));
  ar6 = (int)(short)uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02775c(ar4,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027374(ar4 + 0x21c,uVar2,ar6,ar7));
  ar5_00 = (ushort *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(undefined4 *)(unsigned)(0x308 + ar4),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,ar5_00,ar6,ar7));
LAB_8c027550:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa5b4(0x8c35468c,ar5_00,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x40))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
  if (iVar1 == iVar4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x40))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
    if (0 < iVar1) {
      ar5_00 = (ushort *)(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b04c(ar4,1,ar6,ar7));
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (ushort *)(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],8,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      else {
        ar5_00 = (ushort *)(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],0x18,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(undefined4 *)(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
    }
  }
  else {
    ar5_00 = (ushort *)(unsigned)(uint)*ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(undefined4 *)(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025ff4(ar4 + 0x174,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a6f8(ar4,ar5_00,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x1ec,ar5_00,ar6,ar7));
  if ((char)uVar2 != '\0') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b190(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0353bc(ar4 + 0x2dc,ar4 + 0x174,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x3c))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar4 + 0x174,ar4 + 0x2dc,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0274bc\n.set _FUN_8c0274bc, _FUN_8c0274bc_def\n");
//@unit 8c0276ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_ffffffff_0276ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_ffffffff_0276ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  return 0xffffffff;
}

__asm__(".globl _ret_const_ffffffff_0276ec\n.set _ret_const_ffffffff_0276ec, _ret_const_ffffffff_0276ec_def\n");
//@unit 8c0276f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0276f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0276f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa5b4(0x8c35468c,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x40))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  if (iVar1 == iVar2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x40))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
    if (0 < iVar2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b04c(ar4,1,ar6,ar7));
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0276f4\n.set _FUN_8c0276f4, _FUN_8c0276f4_def\n");
//@unit 8c02775c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02775c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02775c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (((ar5 == 1) && (iVar1 = (int)(short)ar6, iVar1 < 8)) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
      return 7;
    }
  }
  if (((ar5 == 2) && (iVar1 = (int)(short)ar6, iVar1 < 5)) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      return 8;
    case 1:
      return 9;
    case 2:
      return 10;
    case 3:
      return 0xb;
    case 4:
      return 0xc;
    }
  }
  return 0xc;
}

__asm__(".globl _FUN_8c02775c\n.set _FUN_8c02775c, _FUN_8c02775c_def\n");
//@unit 8c02781c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02781c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02781c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027844))))
                    (*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02781c\n.set _FUN_8c02781c, _FUN_8c02781c_def\n");
//@unit 8c027844
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Vec3_assign_wrap_027844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Vec3_assign_wrap_027844";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x13c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_027844\n.set _Vec3_assign_wrap_027844, _Vec3_assign_wrap_027844_def\n");
//@unit 8c02786c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02786c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02786c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027894(*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02786c\n.set _FUN_8c02786c, _FUN_8c02786c_def\n");
//@unit 8c027894
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027894_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027894";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x14c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027894\n.set _FUN_8c027894, _FUN_8c027894_def\n");
//@unit 8c0278bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0278bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0278bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0336e8(*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0278bc\n.set _FUN_8c0278bc, _FUN_8c0278bc_def\n");
//@unit 8c0278e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0278e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0278e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x1c))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0278e4\n.set _FUN_8c0278e4, _FUN_8c0278e4_def\n");
//@unit 8c027904
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_027904_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_027904";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_027904\n.set _noop_027904, _noop_027904_def\n");
//@unit 8c027908
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027908_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027908";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027930))))
                    (*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c027908\n.set _FUN_8c027908, _FUN_8c027908_def\n");
//@unit 8c027930
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_124_027930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_124_027930";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x124 + ar4);
}

__asm__(".globl _get_field_124_027930\n.set _get_field_124_027930, _get_field_124_027930_def\n");
//@unit 8c02793c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02793c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02793c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 1) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02793c\n.set _FUN_8c02793c, _FUN_8c02793c_def\n");
//@unit 8c027954
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027954_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027954";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xfffffffe;
  return 1;
}

__asm__(".globl _FUN_8c027954\n.set _FUN_8c027954, _FUN_8c027954_def\n");
//@unit 8c027970
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027970_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027970";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 2) == 2) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027970\n.set _FUN_8c027970, _FUN_8c027970_def\n");
//@unit 8c027988
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027988_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027988\n.set _FUN_8c027988, _FUN_8c027988_def\n");
//@unit 8c0279a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0279a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0279a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x100) == 0x100) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0279a0\n.set _FUN_8c0279a0, _FUN_8c0279a0_def\n");
//@unit 8c0279c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0279c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0279c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x100;
  return 1;
}

__asm__(".globl _FUN_8c0279c0\n.set _FUN_8c0279c0, _FUN_8c0279c0_def\n");
//@unit 8c0279e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0279e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0279e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x80) == 0x80) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0279e0\n.set _FUN_8c0279e0, _FUN_8c0279e0_def\n");
//@unit 8c027a00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027a00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x20))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027a4c))))
                        (*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027a00\n.set _FUN_8c027a00, _FUN_8c027a00_def\n");
//@unit 8c027a4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_214_027a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_214_027a4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x214 + ar4);
}

__asm__(".globl _get_field_214_027a4c\n.set _get_field_214_027a4c, _get_field_214_027a4c_def\n");
//@unit 8c027a58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c027a58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c027a58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x80;
  return 1;
}

__asm__(".globl _FUN_8c027a58\n.set _FUN_8c027a58, _FUN_8c027a58_def\n");
//@unit 8c027a78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_load_Pack_CAnimal__027a86_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_load_Pack_CAnimal__027a86";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(int *)(unsigned)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  (*(undefined4 *)(fr0_ - 0x2c)) = 0;
  iVar2 = *(int *)(unsigned)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&(*(undefined1 *)(unsigned)0x8c027afc))[iVar2];
    a5 = ar5;
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x418) = 1;
      break;
    case 1:
      if (*(int *)(unsigned)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020d90(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x18),*(undefined4 *)(unsigned)(ar4 + 0x410),s0));
        if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(unsigned)(iVar1 + 4) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 4)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa0) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(unsigned)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x2c));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020ba0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x1c),uVar3,puVar4));
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015bb0(iVar1 + 0xb0,(*(undefined4 *)(fr0_ - 0x2c)),uVar3,puVar4); });
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(unsigned)(iVar1 + 8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x414) * 4 + *(int *)(unsigned)(iVar1 + 8)),
                           *(undefined4 *)(unsigned)(ar4 + 0x410),
                           *(int *)(unsigned)(iVar1 + 0xa8) + *(short *)(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(unsigned)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = ((undefined4 *)(fr0_ - 0x24));
      uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0209b0(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
      if (iVar2 == 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015ad4(iVar1 + 0x70,((undefined4 *)(fr0_ - 0x24))[0],uVar3,puVar4); });
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),"Read NJCM Failed..",0,2));
      }
      break;
    case 6:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        puVar4 = &(*(undefined4 *)(fr0_ - 0x28));
        uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020aa8(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar3,puVar4));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),(*(undefined4 *)(fr0_ - 0x28)),uVar3,puVar4));
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0xc),"Read NJTL Failed..",0,2));
        }
      }
      else {
        uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x78) + 8))))((int *)(unsigned)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(unsigned)(iVar1 + 0x20) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x14),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3));
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(unsigned)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x20),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(unsigned)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(unsigned)(iVar1 + 0x48) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,((void *)0x8c0253e4),iVar6,ar7_00));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(undefined4 *)(unsigned)(iVar1 + 0x10),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3))
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(unsigned)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(undefined4 *)(unsigned)(iVar1 + 0xc),ar7_00));
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x88) + 8))))((int *)(unsigned)(iVar1 + 0x88),iVar6,0x88,iVar6));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2));
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(unsigned)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(int *)(unsigned)(iVar1 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00));
      a5 = iVar1 + 0x3c;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x80) + 8))))((int *)(unsigned)(iVar1 + 0x80),a5,iVar6,ar7_00));
      *(undefined4 *)(unsigned)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x34),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6));
      iVar2 = iVar1 + 100;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 0x90) + 8))))((int *)(unsigned)(iVar1 + 0x90),iVar2,uVar3,iVar6));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2));
  }
  return uVar5;
}

__asm__(".globl _s_Failed_to_load_Pack_CAnimal__027a86\n.set _s_Failed_to_load_Pack_CAnimal__027a86, _s_Failed_to_load_Pack_CAnimal__027a86_def\n");
//@unit 8c028390
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e_def
          (undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "s_Failed_to_Read_CAnimal_LoadM_02839e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  short * s0 = (short *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  int s16 = *(int *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 *ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  iVar2 = 2;
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = ((undefined4 *)(fr0_ - 0x24));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020ba0(s8,ar5,ar6,ar7_00));
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = ((undefined4 *)(fr0_ - 0x24));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020c98(s8,ar5,ar6,ar7_00));
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015bb0(ar7,((undefined4 *)(fr0_ - 0x24))[0],ar6,ar7_00); });
    }
    else if (s16 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015be4(ar7,((undefined4 *)(fr0_ - 0x24))[0],ar6,ar7_00); });
    }
    *s0 = *s0 + 1;
    if (*s0 == (short)s4) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), report_error_message(ar5,"Failed to Read ..:CAnimal::LoadMFile()",1,2));
  }
  return uVar1;
}

__asm__(".globl _s_Failed_to_Read_CAnimal_LoadM_02839e\n.set _s_Failed_to_Read_CAnimal_LoadM_02839e, _s_Failed_to_Read_CAnimal_LoadM_02839e_def\n");
//@unit 8c0284ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8_def(int ar4,undefined4 ar5,int ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "s_Failed_to_Load_CAnimal_LoadG_0284b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar7_00;
  undefined4 *ar7_01;
  int iVar5;
  
  iVar5 = *(int *)(unsigned)(ar4 + 0x328) + ar6 * 0x124;
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  ar7_01 = (undefined4 *)(unsigned)(ar4 + ar6);
  iVar3 = ar6;
  if (*(int *)(unsigned)(iVar5 + 0x18) != 0) {
    iVar3 = *(int *)(unsigned)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ddc(ar5,*(undefined4 *)(unsigned)(iVar5 + 0x18),iVar3,ar7_01));
    if (iVar1 == 0) {
      ar7 = (undefined4 *)(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message(*(undefined4 *)(unsigned)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2));
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(unsigned)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 4))) == '\0') {
      ar7 = (undefined4 *)(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message("Attach NULL!!",((undefined1 *)(unsigned)0x8c130008),0,2));
      ((undefined4 *)(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((undefined4 *)(fr0_ - 0x20));
      iVar3 = *(int *)(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(undefined4 *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 4)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (undefined4 *)(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(*(int *)(unsigned)(iVar5 + 0xa0) + iVar1 * 4,((undefined4 *)(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  if (*(int *)(unsigned)(iVar5 + 0x1c) != 0) {
    ar7 = ((undefined4 *)(fr0_ - 0x20));
    iVar3 = *(int *)(unsigned)(ar4 + 0x410);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(undefined4 *)(unsigned)(iVar5 + 0x1c),iVar3,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(iVar5 + 0xb0,((undefined4 *)(fr0_ - 0x20))[0],iVar3,ar7); });
    }
    else {
      ar7 = (undefined4 *)(unsigned)0x2;
      iVar3 = 0;
      report_error_message
                (*(undefined4 *)(unsigned)(iVar5 + 0x1c),((undefined1 *)(unsigned)0x8c13001e),0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(unsigned)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 8))) == '\0') {
      ((undefined4 *)(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((undefined4 *)(fr0_ - 0x20));
      iVar3 = *(int *)(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ce4(ar5,*(undefined4 *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 8)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (undefined4 *)(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(unsigned)(iVar1 * 4 + *(int *)(unsigned)(iVar5 + 8)),((undefined1 *)(unsigned)0x8c130041),0,
                   2);
      }
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,((undefined4 *)(fr0_ - 0x20))[0],
                   iVar3,ar7); });
    }
    (*(int *)(fr0_ - 0x64)) = iVar1;
    ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(int *)(unsigned)(iVar5 + 0xa8) + iVar1 * 4,((undefined4 *)(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  ar7_00 = &(*(undefined4 *)(fr0_ - 0x24));
  uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x410);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0209fc(ar5,*(undefined4 *)(unsigned)(iVar5 + 0xc),uVar4,ar7_00));
  if (iVar3 == 0) {
    ar7_00 = (undefined4 *)(unsigned)0x2;
    uVar4 = 0;
    report_error_message
              (*(undefined4 *)(unsigned)(iVar5 + 0xc),((undefined1 *)(unsigned)0x8c130054),0,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015ad4(iVar5 + 0x70,(*(undefined4 *)(fr0_ - 0x24)),uVar4,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01));
  uVar4 = 0;
  if (*(int *)(unsigned)(iVar5 + 0x34) != 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01));
  }
  return uVar4;
}

__asm__(".globl _s_Failed_to_Load_CAnimal_LoadG_0284b8\n.set _s_Failed_to_Load_CAnimal_LoadG_0284b8, _s_Failed_to_Load_CAnimal_LoadG_0284b8_def\n");
//@unit 8c0287a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_CAnimal_LoadGResourceWait_0287ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_LoadGResourceWait_0287ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x144 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    ((undefined4 *)(fr0_ - 0x18))[0] = 0;
    ar7_00 = ((undefined4 *)(fr0_ - 0x18));
    uVar4 = *(undefined4 *)(unsigned)(0x410 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020af4(ar5,*(undefined4 *)(unsigned)(iVar1 + 0xc),uVar4,ar7_00));
    if (iVar3 == 0) {
      ar7_00 = (undefined4 *)(unsigned)0x2;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                (*(undefined4 *)(unsigned)(iVar1 + 0xc),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2ee,0,2));
    }
    piVar2 = (int *)(unsigned)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = ((undefined4 *)(fr0_ - 0x18))[0];
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 8))))(piVar2,((undefined4 *)(fr0_ - 0x18))[0],uVar4,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00));
    uVar5 = *(undefined4 *)(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 0x14));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020ef0(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x317;
      (vsp = ((unsigned long)(fr0_ - 24)), report_error_message(*(undefined4 *)(unsigned)(iVar1 + 0x14),ar5_00,0,2));
    }
  }
  else {
    uVar4 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7));
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (int *)(unsigned)(iVar1 + ar6 * 8 + 0x78);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar4,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7));
    uVar5 = *(undefined4 *)(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar6 * 0x14 + iVar1 + 0x20));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02100c(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0xda,ar5_00,0,2));
    }
  }
  if (*(int *)(unsigned)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(unsigned)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,ar5_00,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                      (ar5,*(undefined4 *)(unsigned)(iVar1 + 0x10),*(undefined4 *)(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        (*(undefined4 *)(unsigned)(iVar1 + 0x10),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x340
                         ,0,2));
    }
  }
  else {
    uVar5 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4));
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (int *)(unsigned)(iVar1 + ar6 * 8 + 0x88);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar5,uVar4));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,iVar3,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                      (ar5,*(undefined4 *)(unsigned)(ar6 * 0x14 + iVar1 + 0x48),
                       *(undefined4 *)(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x18c,
                         (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1,0,2));
    }
  }
  return iVar3;
}

__asm__(".globl _s_CAnimal_LoadGResourceWait_0287ac\n.set _s_CAnimal_LoadGResourceWait_0287ac, _s_CAnimal_LoadGResourceWait_0287ac_def\n");
//@unit 8c028ab8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c028ab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ab8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return *(int *)(unsigned)(0x328 + ar4) + (short)uVar1 * 0x124;
}

__asm__(".globl _FUN_8c028ab8\n.set _FUN_8c028ab8, _FUN_8c028ab8_def\n");
//@unit 8c028afc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028afc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(unsigned)(0x328 + ar4) + ar6 * 0x124;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(unsigned)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 4))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
                (ar5,*(undefined4 *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 4)),
                 *(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    }
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 8))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
                (ar5,*(undefined4 *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 8)),
                 *(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    }
  }
  iVar3 = ar7_00;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(undefined4 *)(unsigned)(iVar2 + 0xc),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  if (*(int *)(unsigned)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(undefined4 *)(unsigned)(iVar2 + 0xc),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  }
  if (*(int *)(unsigned)(iVar2 + 0x18) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020e48))))
              (ar5,*(undefined4 *)(unsigned)(iVar2 + 0x18),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    iVar3 = ar7_00;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xf0 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,iVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c028afc\n.set _FUN_8c028afc, _FUN_8c028afc_def\n");
//@unit 8c028c18
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_028c18_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_028c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(unsigned)(0x328 + ar4) + ar6 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x78,ar5,ar6,ar7));
  if (*(int *)(unsigned)(iVar2 + 0x34) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x80,ar5,ar6,ar7));
  }
  uVar1 = 0;
  if (*(int *)(unsigned)(iVar2 + 0x10) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x88,ar5,ar6,ar7));
    uVar1 = 0;
    if (*(int *)(unsigned)(iVar2 + 0x5c) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x90,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_028c18\n.set _s_Failed_wrap_028c18, _s_Failed_wrap_028c18_def\n");
//@unit 8c028c9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028c9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c028cc4))))
                    (*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c028c9c\n.set _FUN_8c028c9c, _FUN_8c028c9c_def\n");
//@unit 8c028cc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_6c_028cc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_6c_028cc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x6c);
}

__asm__(".globl _get_field_6c_028cc4\n.set _get_field_6c_028cc4, _get_field_6c_028cc4_def\n");
//@unit 8c028ccc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028ccc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  iVar1 = ar5 + 0xd8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,iVar1,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,iVar1,ar6,ar7));
  if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x2c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,2,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x460) = *(undefined4 *)(unsigned)(ar5 + 0xe8);
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x468) = *(undefined4 *)(unsigned)(ar5 + 0xec);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x468) = *(undefined8 *)(unsigned)(ar5 + 0xec);
  }
  return 0xec;
}

__asm__(".globl _FUN_8c028ccc\n.set _FUN_8c028ccc, _FUN_8c028ccc_def\n");
//@unit 8c028d9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_13c_028d9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_13c_028d9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x13c + ar4);
}

__asm__(".globl _get_field_13c_028d9c\n.set _get_field_13c_028d9c, _get_field_13c_028d9c_def\n");
//@unit 8c028da8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c028da8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028da8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x24))))
            (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5 + 0x48,ar6,ar7));
  iVar1 = 0x460;
  *(undefined4 *)(unsigned)(0x460 + ar4) = *(undefined4 *)(unsigned)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl _FUN_8c028da8\n.set _FUN_8c028da8, _FUN_8c028da8_def\n");
//@unit 8c028e20
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028e20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028e20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  uVar2 = CONCAT22((short)uVar1,(*(undefined2 *)(fr0_ - 0x18)));
  uVar1 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7); });
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02602c(ar5,uVar1,ar6,ar7));
  ar5_00 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar3,(short)uVar1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar2,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c028e20\n.set _FUN_8c028e20, _FUN_8c028e20_def\n");
//@unit 8c028ec8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c028ec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(unsigned)(0x98 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c028ec8\n.set _FUN_8c028ec8, _FUN_8c028ec8_def\n");
//@unit 8c028ed4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028ed4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ed4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c028ed4\n.set _FUN_8c028ed4, _FUN_8c028ed4_def\n");
//@unit 8c028edc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028edc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028edc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c028edc\n.set _FUN_8c028edc, _FUN_8c028edc_def\n");
//@unit 8c028ee4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c028ee4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ee4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(0xa2 + ar4);
}

__asm__(".globl _FUN_8c028ee4\n.set _FUN_8c028ee4, _FUN_8c028ee4_def\n");
//@unit 8c028ef0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028ef0_def(int ar4,float *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c028ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(float *)(unsigned)(ar4 + 0x30) + *(float *)(unsigned)(ar4 + 0x3c8);
  *ar6 = *(float *)(unsigned)(ar4 + 0x34) + *(float *)(unsigned)(ar4 + 0x3cc);
  *ar7 = *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028ef0\n.set _FUN_8c028ef0, _FUN_8c028ef0_def\n");
//@unit 8c028f34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028f34_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c028f34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x3c8);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x3cc);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028f34\n.set _FUN_8c028f34, _FUN_8c028f34_def\n");
//@unit 8c028f60
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c028f60_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028f60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a6;
  int ar5_00;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  ar5_00 = ar5 + 0xd8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7));
  if (iVar1 == 2) {
    a6 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,a6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x28))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar5 + 0xe8) = *(undefined4 *)(unsigned)(ar4 + 0x460);
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar5 + 0xec) = *(undefined4 *)(unsigned)(ar4 + 0x468);
  }
  else {
    *(undefined8 *)(unsigned)(ar5 + 0xec) = *(undefined8 *)(unsigned)(ar4 + 0x468);
  }
  return 0x468;
}

__asm__(".globl _FUN_8c028f60\n.set _FUN_8c028f60, _FUN_8c028f60_def\n");
//@unit 8c02903c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02903c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02903c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x28))))
            (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5 + 0x48,ar6,ar7));
  *(undefined4 *)(unsigned)(ar5 + 0x68) = *(undefined4 *)(unsigned)(0x460 + ar4);
  return 0x68;
}

__asm__(".globl _FUN_8c02903c\n.set _FUN_8c02903c, _FUN_8c02903c_def\n");
//@unit 8c0290b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0290b8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0290b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124 + 0xf4);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)ar5 = *(undefined4 *)(unsigned)puVar2;
  }
  else {
    *ar5 = *puVar2;
  }
  return 0xf0;
}

__asm__(".globl _FUN_8c0290b8\n.set _FUN_8c0290b8, _FUN_8c0290b8_def\n");
//@unit 8c02911c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02911c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02911c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined4 in_fr1 = 0;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x308) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x328) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x424) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x428) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x364) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x368) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x36c) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x390) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x394) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x398) = 0x3f800000;
  uVar2 = CONCAT44(0x3e4ccccd,in_fr1);
  *(undefined4 *)(unsigned)(ar4 + 0x170) = 0x3e4ccccd;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0293d4(ar4 + 0x174,ar5,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x334) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x430) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x42c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x434) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x408) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x408) = uVar2 & 0xffffffff;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x40c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = CONCAT44(0x3f800000,(int)uVar2);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x410) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x414) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x418) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x420) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x41c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x470) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x438) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x43c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x440) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x444) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x448) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x44c) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x450) = 0;
    uVar2 = uVar2 & 0xffffffff;
    *(undefined4 *)(unsigned)(ar4 + 0x454) = 0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x438) = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x43c) = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x440) = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x444) = 0x3f80000000000000;
    *(undefined8 *)(unsigned)(ar4 + 0x448) = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x44c) = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x450) = 0;
    uVar2 = 0;
    *(undefined8 *)(unsigned)(ar4 + 0x454) = 0x3f80000000000000;
  }
  *(undefined2 *)(unsigned)(ar4 + 0x464) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x468) = uVar2;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x46c) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x474) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x47c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x478) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x48c) = 0;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7));
  if (iVar1 < 0x14) {
    *(undefined4 *)(unsigned)(ar4 + 0x460) = 0;
  }
  else if (iVar1 < 0x5a) {
    *(undefined4 *)(unsigned)(ar4 + 0x460) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x460) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c02911c\n.set _FUN_8c02911c, _FUN_8c02911c_def\n");
//@unit 8c0293d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0293d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0293d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0293f8(ar4 + 0xf8,1,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0293d4\n.set _FUN_8c0293d4, _FUN_8c0293d4_def\n");
//@unit 8c0293f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0293f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0293f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0293f8\n.set _FUN_8c0293f8, _FUN_8c0293f8_def\n");
//@unit 8c029400
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 *
s_CAnimal_SetPVMTexture_s_029404_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_SetPVMTexture_s_029404";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 268; for (int i_ = 0; i_ < 268; i_++) z_[i_] = 0; }
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  if (*(int *)(unsigned)(ar5 + 0x10) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x36f); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x10c)),ar5,ar6,ar7); });
    ar7 = 2;
    ar6 = 0;
    ar5_00 = ((undefined1 *)(fr0_ - 0x10c));
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x38b,ar5_00,0,2));
  }
  if (*(int *)(unsigned)(ar5 + 4) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x36f); *(unsigned *)((((unsigned long)(fr0_ - 268)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 268)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x10c)),ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3a6,((undefined1 *)(fr0_ - 0x10c)),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 268)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c239170))))
            (ar5 + 8,*(undefined4 *)(unsigned)(ar5 + 0x10),0x8c4312a8,*(undefined4 *)(unsigned)(ar5 + 4)));
  return ar5 + 8;
}

__asm__(".globl _s_CAnimal_SetPVMTexture_s_029404\n.set _s_CAnimal_SetPVMTexture_s_029404, _s_CAnimal_SetPVMTexture_s_029404_def\n");
//@unit 8c0294c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0294c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0294c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0294c0\n.set _FUN_8c0294c0, _FUN_8c0294c0_def\n");
//@unit 8c029510
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c029510_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c029510";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ar6_00;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x2c)) >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c256328(0,iVar3,uVar1,ar7); });
  iVar3 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar5 + 4) != 0) {
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(unsigned)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(in_fr15,*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)pdVar2 = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *pdVar2 = dVar5;
    }
    if (*(int *)(unsigned)(ar4 + 0x344) == ar5) {
      iVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029dec(ar4,ar5,ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x348) == ar5) {
      ar7 = ar4 + 900;
      ar6_00 = ar4 + 0x374;
      iVar3 = ar4 + 0x364;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7));
      iVar3 = ar4 + 900;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029ca8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x34c) == ar5) {
      ar7 = ar4 + 0x3b0;
      ar6_00 = ar4 + 0x3a0;
      iVar3 = ar4 + 0x390;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7));
      iVar3 = ar4 + 0x3b0;
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029ca8(ar4,iVar3,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
    }
    else if ((((*(int *)(unsigned)(ar4 + 0x358) == ar5) || (*(int *)(unsigned)(ar4 + 0x354) == ar5)) ||
             (*(int *)(unsigned)(ar4 + 0x360) == ar5)) || (*(int *)(unsigned)(ar4 + 0x35c) == ar5)) {
      iVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x198))))(ar4,ar5,ar6_00,ar7));
    }
    else {
      iVar3 = *(int *)(unsigned)(ar5 + 4);
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c02a29c(ar4,iVar3,ar6_00,ar7));
    }
    pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x350) == ar5) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*piVar4 + 0x1f8,iVar3,ar6_00,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c015bb8(0x8c27d3e8,iVar3,ar6_00,ar7));
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029d64(ar4,iVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),iVar3,ar6_00,ar7));
  }
  if (*(int *)(unsigned)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(unsigned)(ar5 + 0x2c);
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029510(ar4,iVar3,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256210(1,iVar3,ar6_00,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  uVar1 = 0;
  if (*(int *)(unsigned)(ar5 + 0x30) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c029510(ar4,*(undefined4 *)(unsigned)(ar5 + 0x30),ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c029510\n.set _FUN_8c029510, _FUN_8c029510_def\n");
//@unit 8c0297b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0297b8_def(int ar4,uint *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0297b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *ar5_00;
  undefined4 unaff_r10 = 0;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x34)) >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013fb4(((*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + 1;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c256328(0,iVar3,uVar1,ar7); });
  ar5_00 = ar5;
  iVar3 = ar6;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  if (ar5[1] != 0) {
    unaff_r10 = *(undefined4 *)(unsigned)(uint)ar5[1];
  }
  if ((*ar5 & 0x80) == 0) {
    ar5_00 = (uint *)(unsigned)0x8c42d408;
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c21f27c(ar5,0x8c42d408,ar6,ar7));
    if (iVar2 == 1) {
      *(undefined4 *)(unsigned)(uint)ar5[1] = 0x8c42d408;
    }
  }
  if (ar5[1] != 0) {
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(unsigned)(ar5[1] + 0x14);
    }
    else {
      in_xd14 = *(double *)(unsigned)(ar5[1] + 0x14);
    }
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(in_fr15,*(undefined4 *)(unsigned)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(unsigned)(ar5[1] + 0x14) = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar5[1] + 0x14) = dVar5;
    }
    if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x344)) == ar5) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029dec(ar4,ar5,iVar3,ar7));
    }
    else if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x348)) == ar5) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
      ar7 = ar4 + 900;
      iVar3 = ar4 + 0x374;
      iVar2 = ar4 + 0x364;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a2b8(ar4,iVar2,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7));
      ar5_00 = (uint *)(unsigned)(ar4 + 900);
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029ca8(ar4,ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
    }
    else if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34c)) == ar5) {
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
      ar7 = ar4 + 0x3b0;
      iVar3 = ar4 + 0x3a0;
      iVar2 = ar4 + 0x390;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a2b8(ar4,iVar2,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7));
      ar5_00 = (uint *)(unsigned)(ar4 + 0x3b0);
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029ca8(ar4,ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
    }
    else if ((((((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x358)) == ar5) || (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x354)) == ar5)) ||
             (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x360)) == ar5)) || (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x35c)) == ar5)) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x198))))(ar4,ar5,iVar3,ar7));
      *(undefined4 *)(unsigned)(uint)ar5[1] = unaff_r10;
    }
    else {
      ar5_00 = (uint *)(unsigned)(uint)ar5[1];
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02a29c(ar4,ar5_00,iVar3,ar7));
      *(undefined4 *)(unsigned)(uint)ar5[1] = unaff_r10;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar5[1] + 0x14) = in_fr15;
    }
    else {
      *(double *)(unsigned)(ar5[1] + 0x14) = in_xd14;
    }
  }
  if (((uint *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x350)) == ar5) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*piVar4 + 0x1f8,ar5_00,iVar3,ar7));
    ar5_00 = (uint *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), FUN_8c015bb8(0x8c27d3e8,ar5_00,iVar3,ar7));
    iVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c029d64(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),ar5_00,iVar3,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0f5308(ar4,ar5_00,iVar3,ar7));
  }
  if (ar5[0xb] != 0) {
    ar5_00 = (uint *)(unsigned)(uint)ar5[0xb];
    iVar3 = ar6;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0297b8(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c256210(1,ar5_00,iVar3,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c27d1ec) + -1;
  uVar1 = 0;
  if (ar5[0xc] != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0297b8(ar4,ar5[0xc],ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0297b8\n.set _FUN_8c0297b8, _FUN_8c0297b8_def\n");
//@unit 8c029af0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c029af0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029af0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar2 = ar6;
  if (*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x434)) == 0) {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar5 + 8);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar5 + 0xc);
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar5 + 0x10);
    ar5_00 = ar5;
  }
  else {
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2545ec(&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar6,ar7));
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x434) + 4) == 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(ar5 + 0x14);
    (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(ar5 + 0x18);
    (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar5 + 0x1c);
  }
  else {
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c254698(&(*(undefined4 *)(fr0_ - 0x34)),ar6,iVar2,ar7));
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x434) + 8) == 0) {
    if (cVar5 == '\0') {
      (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar5 + 0x20);
      (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar5 + 0x24);
      (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar5 + 0x28);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x20);
      (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x24);
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x28);
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 0x28) >> 0x20);
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c254780(&(*(undefined4 *)(fr0_ - 0x28)),ar6,iVar2,ar7));
    ar5_00 = ar6;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,ar5_00,iVar2,ar7); });
  uVar1 = (*(undefined4 *)(fr0_ - 0x34));
  uVar3 = (*(undefined4 *)(fr0_ - 0x30));
  uVar4 = (*(undefined4 *)(fr0_ - 0x2c));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256e18(0,(*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x2c))); });
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,uVar1,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25484c(ar4_00,uVar1,uVar3,uVar4));
  *(int *)(unsigned)(ar4 + 0x434) = *(int *)(unsigned)(ar4 + 0x434) + 0x18;
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  uVar1 = (*(undefined4 *)(fr0_ - 0x34));
  uVar3 = (*(undefined4 *)(fr0_ - 0x30));
  uVar4 = (*(undefined4 *)(fr0_ - 0x2c));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256e18(((undefined1 *)(fr0_ - 0x74)),(*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x2c))); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  return uVar1;
}

__asm__(".globl _FUN_8c029af0\n.set _FUN_8c029af0, _FUN_8c029af0_def\n");
//@unit 8c029ca8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c029ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 0x10);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x328);
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar3,(short)uVar1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c019088(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c019198(ar4_00,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015510(*(int *)(unsigned)(iVar2 + (short)uVar1 * 0x124) + 0x1e8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02a29c(ar4,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c256210(1,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c029ca8\n.set _FUN_8c029ca8, _FUN_8c029ca8_def\n");
//@unit 8c029d64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c029d64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  undefined4 ar5_00;
  double dVar3;
  undefined4 uVar4;
  double in_xd14 = 0;
  undefined4 in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar4 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  uVar1 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(uVar4,*(undefined4 *)(unsigned)(ar4 + 0x5c));
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) * F32LO(dVar3),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (cVar6 == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar3) >> 0x20);
  }
  else {
    *pdVar2 = dVar3;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a29c(ar4,ar5_00,uVar1,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = uVar4;
  }
  else {
    *pdVar2 = in_xd14;
  }
  if (*(int *)(unsigned)(ar5 + 0x2c) != 0) {
    ar5_00 = *(undefined4 *)(unsigned)(ar5 + 0x2c);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c029d64(ar4,ar5_00,ar6,ar7));
    uVar1 = ar6;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5_00,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c029d64\n.set _FUN_8c029d64, _FUN_8c029d64_def\n");
//@unit 8c029dec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c029dec_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029dec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar12;
  int ar6_00;
  int iVar13;
  char cVar14;
  char cVar15;
  undefined2 uVar16;
  
  uVar16 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x64)) >> 0x10);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar7 = CONCAT22(uVar16,(short)uVar1);
  if (*(int *)(unsigned)(ar4 + 0x3dc) == *(int *)(unsigned)(ar4 + 0x3d8)) {
    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124) + *(int *)(unsigned)(ar4 + 0x3e4) * 4 + 0x40
          );
  }
  else {
    ar6 = (int)*(short *)(unsigned)(ar4 + 0x3fa);
    iVar3 = -0x73d86cf8;
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02ab24(ar4,0x8c279308,ar6,ar7));
    *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar5 + 4)) = 0x8c279308;
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f52c8(ar4,iVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x430),iVar3,ar6,ar7));
  iVar4 = 0;
  piVar2 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 100)), get_field_4_0253e4(*(undefined4 *)(unsigned)(ar4 + 0x430),iVar3,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x460) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x460) != 2) goto LAB_8c029f42;
    iVar4 = 2;
  }
  iVar4 = iVar4 + 6;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(unsigned)(iVar3 * 0xc + *piVar2 + 8);
    *(undefined4 *)(unsigned)(iVar3 * 0xc + *piVar2 + 8) =
         *(undefined4 *)(unsigned)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
    *(undefined4 *)(unsigned)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
  }
LAB_8c029f42:
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x404));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x404);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar3 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar3 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x400));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x400);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    ar6_00 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    ar6_00 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x3fc);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar13 = (int)(F32LO(dVar9) / F32HI(dVar9));
  }
  else {
    iVar13 = (int)(dVar9 / dVar9);
  }
  ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256b0c(0,iVar13,ar6_00,iVar3); });
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x3fc);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x3fc) = fVar8;
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x400));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x3fc) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x400);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x400) = fVar8;
    dVar9 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x404));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x400) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x404);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x404) = fVar8;
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x3fc));
    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x400),fVar8);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x404) = in_xd0;
    dVar9 = *(double *)(unsigned)(ar4 + 0x400);
  }
  if (cVar14 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar9));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x404),SUB84(dVar9,0));
  }
  else {
    dVar9 = *(double *)(unsigned)(ar4 + 0x404);
  }
  if (cVar14 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                               F32LO(in_dr14) + F32HI(dVar9));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3dcccccd,SUB84(dVar9,0));
  }
  else {
    dVar9 = -5.238690707360522e-11;
  }
  if (cVar14 == '\0') {
    bVar12 = SUB84(in_dr14,0) < F32HI(dVar9);
  }
  else {
    bVar12 = in_dr14 < dVar9;
  }
  if (bVar12) {
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D(0xbdcccccd,SUB84(dVar9,0));
    }
    else {
      dVar9 = -8.132627400321583e-251;
    }
    if (cVar14 == '\0') {
      bVar12 = F32HI(dVar9) < SUB84(in_dr14,0);
    }
    else {
      bVar12 = dVar9 < in_dr14;
    }
    if (bVar12) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a1fc(ar4 + 0x3fc,iVar13,ar6_00,iVar3));
    }
  }
  uVar6 = SUB84(dVar9,0);
  uVar11 = SUB84(in_dr14,0);
  uVar1 = *(undefined4 *)(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3));
  if (*(int *)(unsigned)(ar4 + 0x460) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      uVar5 = *(undefined4 *)(unsigned)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
      *(undefined4 *)(unsigned)((iVar4 + iVar13) * 0xc + *piVar2 + 8) =
           *(undefined4 *)(unsigned)(iVar13 * 0xc + *piVar2 + 8);
      *(undefined4 *)(unsigned)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x45c) != 0) {
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x45c),uVar11);
    }
    else {
      dVar9 = (double)*(int *)(unsigned)(ar4 + 0x45c);
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x44e10000,uVar6);
    }
    else {
      dVar10 = 2.3262783273243e-311;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D(F32HI(dVar9) /
                               F32HI(dVar10),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 / dVar10;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D(F32HI(dVar9) - 1.0,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - CONCAT44D(0x3f800000,SUB84(dVar10,0));
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x448) = (int)(D2U(dVar9) >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x44c) = *(undefined4 *)(unsigned)(ar4 + 0x43c);
      *(undefined4 *)(unsigned)(ar4 + 0x450) = *(undefined4 *)(unsigned)(ar4 + 0x440);
      *(undefined4 *)(unsigned)(ar4 + 0x454) = *(undefined4 *)(unsigned)(ar4 + 0x444);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x448) = dVar9;
      *(undefined8 *)(unsigned)(ar4 + 0x44c) = *(undefined8 *)(unsigned)(ar4 + 0x43c);
      *(undefined8 *)(unsigned)(ar4 + 0x450) = *(undefined8 *)(unsigned)(ar4 + 0x440);
      *(undefined8 *)(unsigned)(ar4 + 0x454) = *(undefined8 *)(unsigned)(ar4 + 0x444);
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3));
    uVar6 = *(undefined4 *)(unsigned)(*piVar2 + 8);
    *(undefined4 *)(unsigned)(*piVar2 + 8) = *(undefined4 *)(unsigned)(*piVar2 + 0x44);
    *(undefined4 *)(unsigned)(*piVar2 + 0x44) = uVar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256328(0,uVar1,ar6_00,iVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c256fec(0,uVar1,ar6_00,iVar3); });
    uVar1 = *(undefined4 *)(unsigned)(ar5 + 4);
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c256210(1,uVar1,ar6_00,iVar3));
    uVar7 = *(undefined4 *)(unsigned)(*piVar2 + 0x44);
    *(undefined4 *)(unsigned)(*piVar2 + 0x44) = *(undefined4 *)(unsigned)(*piVar2 + 8);
    *(undefined4 *)(unsigned)(*piVar2 + 8) = uVar7;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x448) = *(undefined4 *)(unsigned)(ar4 + 0x438);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x448) = *(undefined8 *)(unsigned)(ar4 + 0x438);
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3));
  }
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01538c(*(undefined4 *)(unsigned)(ar4 + 0x42c),uVar1,ar6_00,iVar3));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0f5308(ar4,uVar1,ar6_00,iVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c029dec\n.set _FUN_8c029dec, _FUN_8c029dec_def\n");
//@unit 8c02a1fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a1fc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a1fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c02a1fc\n.set _FUN_8c02a1fc, _FUN_8c02a1fc_def\n");
//@unit 8c02a230
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c02a230_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a230";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  undefined8 in_xd14 = 0;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  fVar2 = *(float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  *(float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14) = fVar2 * *(float *)(unsigned)(ar4 + 0x468);
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a29c(ar4,*(undefined4 *)(unsigned)(ar5 + 4),ar6,ar7));
  pfVar1 = (float *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar3 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)pfVar1 = in_xd14;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c02a230\n.set _FUN_8c02a230, _FUN_8c02a230_def\n");
//@unit 8c02a29c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a29c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a29c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a86(ar5,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02a29c\n.set _FUN_8c02a29c, _FUN_8c02a29c_def\n");
//@unit 8c02a2b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a2b8_def(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c02a2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  code *pcVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  double *ar7_00;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  code *pcVar9;
  double dVar8;
  float fVar10;
  double in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x3c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x4c)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x58)),uVar2,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x64)),uVar2,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c02a544(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar2,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign(&(*(undefined4 *)(fr0_ - 0x3c)),((undefined4 *)(fr0_ - 0x74)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined4 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(0xc7c35000,(*(undefined4 *)(fr0_ - 0x3c)));
  }
  else {
    in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
    uVar6 = 0x8c014a34c7c35000;
  }
  if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      *(float *)(unsigned)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar6 & 0xffffffff);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)(unsigned)((int)ar7 + 4) = uVar6 & 0xffffffff;
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar6 & 0xffffffff);
    }
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x4c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7_00));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02a568(ar4,ar6,&(*(undefined4 *)(fr0_ - 0x4c)),ar7_00));
    ar6_01 = ((undefined1 *)(fr0_ - 0x2c));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02a5d4(ar4,ar5,ar6_01,ar7_00));
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x4c)),(*(undefined4 *)(fr0_ - 0x3c)));
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x3c)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x4c)));
    }
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x48)),(*(undefined4 *)(fr0_ - 0x38)));
    }
    else {
      (*(float *)(fr0_ - 0x1c)) = SUB84(in_xd0,0);
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ - 0x48)));
    }
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar7) - F32HI(dVar7);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x44)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(in_xd0,0);
      in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      dVar7 = CONCAT44D((*(undefined4 *)(fr0_ - 0x40)),(*(undefined4 *)(fr0_ - 0x44)));
    }
    if (cVar11 == '\0') {
      fVar4 = F32HI(dVar7);
      dVar7 = CONCAT44D(fVar4,F32LO(dVar7) - fVar4);
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar12 == '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(dVar7,0);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x14)) = SUB84(in_xd0,0);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6_01,ar7_00));
    (*(undefined4 *)(fr0_ - 0x58)) = SUB84(dVar7,0);
    pcVar5 = (code *)(D2U(dVar7) >> 0x20);
    uVar2 = pcVar5;
    if (cVar12 == '\0') {
      uVar2 = ((undefined4 *)(fr0_ - 0x74))[0];
      (*(undefined4 *)(fr0_ - 0x58)) = pcVar5;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54));
    }
    (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar5));
    ((undefined4 *)(fr0_ - 0x74))[0] = uVar2;
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0231c8(&(*(float *)(fr0_ - 0x1c)),ar5,ar6_01,ar7_00));
    (*(undefined4 *)(fr0_ - 0x64)) = (undefined4)(D2U(dVar7) >> 0x20);
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x64)));
      dVar7 = in_xd0;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x7c)) = SUB84(dVar7,0);
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),(*(undefined4 *)(fr0_ - 0x58)));
      (*(undefined4 *)(fr0_ - 0x64)) = (*(undefined4 *)(fr0_ - 0x7c));
      (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)((code *)(*(undefined4 *)(fr0_ - 0x64))));
    }
    if (cVar11 == '\0') {
      fVar4 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)ar7 = fVar4;
      pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar7);
      fVar4 = -20.0;
    }
    else {
      *ar7 = dVar7;
      dVar7 = *ar7;
      pcVar5 = (code *)0xc1a00000;
      fVar4 = 20.0;
    }
    if (cVar11 != '\0' || fVar4 <= (float)(uint)pcVar5) {
      if (cVar12 == '\0') {
        pcVar5 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar7);
        pcVar9 = (code *)0x41a00000;
      }
      else {
        dVar7 = *ar7;
        pcVar5 = (code *)0x41a00000;
        pcVar9 = ((void *)0x8c02327c);
      }
      if (cVar11 == '\0' && (float)(uint)pcVar9 < (float)(uint)pcVar5) {
        if (cVar12 == '\0') {
          pcVar9 = (code *)0x41a00000;
          *(float *)(unsigned)ar7 = 20.0;
        }
        else {
          pcVar5 = (code *)0x41a00000;
          pcVar9 = ((void *)0x8c02327c);
          *ar7 = -7.94252136586639e-251;
        }
      }
    }
    else if (cVar12 == '\0') {
      pcVar9 = (code *)0xc1a00000;
      *(float *)(unsigned)ar7 = -20.0;
    }
    else {
      pcVar5 = (code *)0xc1a00000;
      pcVar9 = (code *)0x41a00000;
      *ar7 = 134217824.8125;
    }
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6_01,ar7_00));
    (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar5));
    pcVar1 = pcVar9;
    if (cVar12 == '\0') {
      (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(pcVar9));
      pcVar1 = ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50));
    }
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(pcVar1));
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02327c(&(*(float *)(fr0_ - 0x1c)),ar5,ar6_01,ar7_00));
    (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(pcVar5));
    if (cVar12 == '\0') {
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)),pcVar9);
      (*(unsigned *)(fr0_ - 0x60) = (unsigned)(unsigned long)(pcVar9));
    }
    else {
      dVar7 = CONCAT44D(pcVar9,((code *)(unsigned long)*(unsigned *)(fr0_ - 0x60)));
      dVar8 = CONCAT44D(((code *)(unsigned long)*(unsigned *)(fr0_ - 0x50)),((code *)(unsigned long)*(unsigned *)(fr0_ - 0x54)));
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(pcVar9));
    }
    if (cVar11 == '\0') {
      fVar4 = F32LO(dVar8) - F32HI(dVar8);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar7 + 4) = fVar4;
      fVar4 = *(float *)(unsigned)((int)ar7 + 4);
      fVar10 = -40.0;
    }
    else {
      *(double *)(unsigned)((int)ar7 + 4) = dVar7;
      fVar4 = -40.0;
      fVar10 = 40.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar4) {
      if (cVar12 == '\0') {
        fVar4 = *(float *)(unsigned)((int)ar7 + 4);
        fVar10 = 40.0;
      }
      else {
        fVar4 = 40.0;
        fVar10 = NAN;
      }
      if (cVar11 == '\0' && fVar10 < fVar4) {
        pfVar3 = (float *)(unsigned)((int)ar7 + 4);
        if (cVar12 == '\0') {
          *pfVar3 = 40.0;
        }
        else {
          pfVar3[0] = 40.0;
          pfVar3[1] = NAN;
        }
      }
    }
    else {
      pfVar3 = (float *)(unsigned)((int)ar7 + 4);
      if (cVar12 == '\0') {
        *pfVar3 = -40.0;
      }
      else {
        pfVar3[0] = -40.0;
        pfVar3[1] = 40.0;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x64)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x58)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x4c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_01,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6_01,ar7_00));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02a2b8\n.set _FUN_8c02a2b8, _FUN_8c02a2b8_def\n");
//@unit 8c02a544
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a544";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x70,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02a544\n.set _FUN_8c02a544, _FUN_8c02a544_def\n");
//@unit 8c02a568
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a568_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a568";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (*(undefined4 *)(fr0_ - 0x58)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x54)) = ar5[1];
  (*(undefined4 *)(fr0_ - 0x50)) = ar5[2];
  (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c024340(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); FUN_8c212740(((undefined1 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),(fr0_ + (int)0xffffff9c),ar7); });
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)ar6 = (*(undefined4 *)(fr0_ - 0x64));
    *(undefined4 *)(unsigned)((int)ar6 + 4) = (*(undefined4 *)(fr0_ - 0x60));
  }
  else {
    *ar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x60)),(*(undefined4 *)(fr0_ - 0x64)));
    *(ulonglong *)(unsigned)((int)ar6 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ - 0x60)));
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar6 + 1) = (*(undefined4 *)(fr0_ - 0x5c));
  }
  else {
    ar6[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x5c)));
  }
  return 8;
}

__asm__(".globl _FUN_8c02a568\n.set _FUN_8c02a568, _FUN_8c02a568_def\n");
//@unit 8c02a5d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a5d4_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a5d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (*(undefined4 *)(fr0_ - 0x58)) = *ar5;
  (*(undefined4 *)(fr0_ - 0x54)) = ar5[1];
  (*(undefined4 *)(fr0_ - 0x50)) = ar5[2];
  (*(undefined4 *)(fr0_ - 0x1c)) = in_fr1;
  (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c024340(((undefined1 *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  if (cVar1 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x64)) = 0;
    (*(undefined4 *)(fr0_ - 0x10)) = 0;
  }
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c212740(((undefined1 *)(fr0_ - 0x4c)),&(*(undefined4 *)(fr0_ - 0x58)),&(*(undefined4 *)(fr0_ - 0x64)),ar7); });
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)ar6 = (*(undefined4 *)(fr0_ - 0x64));
    *(undefined4 *)(unsigned)((int)ar6 + 4) = (*(undefined4 *)(fr0_ - 0x60));
  }
  else {
    *ar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x60)),(*(undefined4 *)(fr0_ - 0x64)));
    *(ulonglong *)(unsigned)((int)ar6 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x5c)),(*(undefined4 *)(fr0_ - 0x60)));
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar6 + 1) = (*(undefined4 *)(fr0_ - 0x5c));
  }
  else {
    ar6[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x58)),(*(undefined4 *)(fr0_ - 0x5c)));
  }
  return 0x10;
}

__asm__(".globl _FUN_8c02a5d4\n.set _FUN_8c02a5d4, _FUN_8c02a5d4_def\n");
//@unit 8c02a668
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int a5;
  
  a5 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)) + 0x38))))(((int *)(unsigned long)*(unsigned *)(unsigned)(0x30c + ar4)),a5,ar5,ar6));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18))); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c02a6d0(*(undefined4 *)(unsigned)(0x30c + ar4),a5,ar5,ar6); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x18)),ar5,ar6));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar5,ar6));
  return 1;
}

__asm__(".globl _FUN_8c02a668\n.set _FUN_8c02a668, _FUN_8c02a668_def\n");
//@unit 8c02a6d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a6d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a6d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x200,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02a6d0\n.set _FUN_8c02a6d0, _FUN_8c02a6d0_def\n");
//@unit 8c02a6f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a6f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a6f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02c758(ar4 + 0x174,ar5_00,ar6,ar7));
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xfffffff7;
  return 0x74;
}

__asm__(".globl _FUN_8c02a6f8\n.set _FUN_8c02a6f8, _FUN_8c02a6f8_def\n");
//@unit 8c02a758
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a758_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a758";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_30_02a780(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02a758\n.set _FUN_8c02a758, _FUN_8c02a758_def\n");
//@unit 8c02a780
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_30_02a780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_30_02a780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x30);
}

__asm__(".globl _get_field_30_02a780\n.set _get_field_30_02a780, _get_field_30_02a780_def\n");
//@unit 8c02a788
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02a788";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  if (*(short *)(unsigned)(ar4 + 0x3f8) < *(short *)(unsigned)(ar4 + 0x3fa)) {
    *(undefined2 *)(unsigned)(ar4 + 0x3fa) = 0;
    *(undefined2 *)(unsigned)(ar4 + 0x3f8) = 1;
    if (*(int *)(unsigned)(ar4 + 0x3f4) == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x3dc) = *(undefined4 *)(unsigned)(ar4 + 0x3d8);
    }
    else if (*(int *)(unsigned)(ar4 + 0x3f4) == 1) {
      *(short *)(unsigned)(ar4 + 0x3f0) = *(short *)(unsigned)(ar4 + 0x3f0) + 1;
      if (*(int *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec))) == 0x50) {
        ar5 = *(undefined4 *)(unsigned)(ar4 + 0x3e4);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02aab0(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
        *(undefined2 *)(unsigned)(ar4 + 0x3f0) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3f4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3ec) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x3e0) = 0;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
             *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x3e0) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_94_02aaa4(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c02a544(*(undefined4 *)(unsigned)(ar4 + 0x308),ar5,ar6,ar7); });
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02b208(ar4 + 0x310,*(undefined4 *)(unsigned)(ar4 + 0x3e4),ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) = uVar2;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
         *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
  }
  if (*(int *)(unsigned)(ar4 + 0x3e4) != *(int *)(unsigned)(ar4 + 1000)) {
    *(undefined2 *)(unsigned)(ar4 + 0x3fa) = 0;
    if ((*(int *)(unsigned)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(int *)(unsigned)(ar4 + 0x3e4))) {
                    
      *(int *)(unsigned)(ar4 + 0x3ec) =
           *(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + (*(int *)(unsigned)(ar4 + 0x3e4) + -0x47) * 8;
      *(undefined4 *)(unsigned)(ar4 + 0x3e4) =
           *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 0x3f0) * 4 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x3ec)));
      *(undefined4 *)(unsigned)(ar4 + 0x3f4) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x3e0) = 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x3d8) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 0x3e4) * 4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x3dc) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 1000) * 4 + 0x40);
    *(undefined2 *)(unsigned)(ar4 + 0x3f8) =
         *(undefined2 *)(unsigned)
          (*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + *(int *)(unsigned)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(int *)(unsigned)(ar4 + 0x3dc) != *(int *)(unsigned)(ar4 + 0x3d8)) {
    *(short *)(unsigned)(ar4 + 0x3fa) = *(short *)(unsigned)(ar4 + 0x3fa) + 1;
  }
  if (((*(int *)(unsigned)(ar4 + 0x3dc) == *(int *)(unsigned)(ar4 + 0x3d8)) &&
      (*(short *)(unsigned)(ar4 + 0x3fa) < *(short *)(unsigned)(ar4 + 0x3f8))) && (*(int *)(unsigned)(ar4 + 0x3e0) == 1)) {
    *(short *)(unsigned)(ar4 + 0x3fa) = *(short *)(unsigned)(ar4 + 0x3f8) + 1;
  }
  *(undefined4 *)(unsigned)(ar4 + 1000) = *(undefined4 *)(unsigned)(ar4 + 0x3e4);
  return 1000;
}

__asm__(".globl _FUN_8c02a788\n.set _FUN_8c02a788, _FUN_8c02a788_def\n");
//@unit 8c02aaa4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_94_02aaa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_94_02aaa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x94 + ar4);
}

__asm__(".globl _get_field_94_02aaa4\n.set _get_field_94_02aaa4, _get_field_94_02aaa4_def\n");
//@unit 8c02aab0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02aab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02aab0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x94;
  *(undefined4 *)(unsigned)(0x94 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02aab0\n.set _FUN_8c02aab0, _FUN_8c02aab0_def\n");
//@unit 8c02aabc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02aabc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02aabc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015510))))
                    (*(int *)(unsigned)((short)uVar1 * 0x124 + *(int *)(unsigned)(0x328 + ar4)) +
                     0x1e4,ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(0x344 + ar4);
  *(undefined4 *)(unsigned)(iVar2 + 4) = uVar1;
  return iVar2;
}

__asm__(".globl _FUN_8c02aabc\n.set _FUN_8c02aabc, _FUN_8c02aabc_def\n");
//@unit 8c02ab24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02ab24_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ab24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  for (uVar1 = 2; uVar1 < (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) - 1U; uVar1 = uVar1 + 1) {
    *(float *)(unsigned)(ar5 + uVar1 * 4) =
         *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3dc) + uVar1 * 4) +
         ((*(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3d8) + uVar1 * 4) -
          *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3dc) + uVar1 * 4)) * (float)ar6) /
         (float)(int)*(short *)(unsigned)(ar4 + 0x3f8);
  }
  return (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) - 1U;
}

__asm__(".globl _FUN_8c02ab24\n.set _FUN_8c02ab24, _FUN_8c02ab24_def\n");
//@unit 8c02aba0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02aba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02aba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a7;
  undefined8 in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x10))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),iVar1,iVar3,a7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar1,iVar3,a7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),iVar1,iVar3,a7); });
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40000000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = -7.957972504406915e-251;
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x4c)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x4c)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x4c)) = (float)in_dr0;
    ((undefined4 *)(fr0_ - 0x48))[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x28)),&(*(float *)(fr0_ - 0x4c)),iVar3,a7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_add(ar4 + 0x30,((undefined1 *)(fr0_ - 0x38)),iVar3,a7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),((undefined4 *)(fr0_ - 0x48)),iVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined4 *)(fr0_ - 0x48)),0xffffffff,iVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,iVar3,a7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,iVar3,a7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),uVar2,iVar3,a7); });
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,iVar3,a7));
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x10))))((int *)(unsigned)(ar4 + 0xa8),((undefined1 *)(fr0_ - 0x18)),iVar1,iVar3));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,iVar1,iVar3));
  return uVar2;
}

__asm__(".globl _FUN_8c02aba0\n.set _FUN_8c02aba0, _FUN_8c02aba0_def\n");
//@unit 8c02ace4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ace4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ace4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x80,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02ace4\n.set _FUN_8c02ace4, _FUN_8c02ace4_def\n");
//@unit 8c02ad0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ad0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ad0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(s0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02ad38(*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7); });
  return s0;
}

__asm__(".globl _FUN_8c02ad0c\n.set _FUN_8c02ad0c, _FUN_8c02ad0c_def\n");
//@unit 8c02ad38
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ad38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ad38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_normalize(ar4 + 4,ar5,ar6,ar7));
  return s0;
}

__asm__(".globl _FUN_8c02ad38\n.set _FUN_8c02ad38, _FUN_8c02ad38_def\n");
//@unit 8c02ad5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ad5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ad5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(s0); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7); });
  return s0;
}

__asm__(".globl _FUN_8c02ad5c\n.set _FUN_8c02ad5c, _FUN_8c02ad5c_def\n");
//@unit 8c02ad88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ad88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ad88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(unsigned)(ar4 + 0x458) / 5400.0;
  *(float *)(unsigned)(ar4 + 0x438) = fVar3 * 0.0;
  *(float *)(unsigned)(ar4 + 0x43c) = fVar3 * -0.84705883;
  *(float *)(unsigned)(ar4 + 0x440) = fVar3 * -0.84705883;
  *(float *)(unsigned)(ar4 + 0x444) = fVar3 * -1.0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x458);
  *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x1518;
  if (0x1518 < iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02ad88\n.set _FUN_8c02ad88, _FUN_8c02ad88_def\n");
//@unit 8c02ae38
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ae38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ae38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x328) + (short)uVar1 * 0x124;
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x170));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x170);
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar6 != '\0' || (float)uVar4 <= F32HI(uVar4)) {
    if (cVar7 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x170));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x170);
      uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x5c);
    }
    if (cVar6 == '\0' && (float)uVar4 < F32HI(uVar4)) {
      if (cVar7 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x170);
        *(undefined4 *)(unsigned)(ar4 + 100) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x170);
        *(undefined8 *)(unsigned)(ar4 + 100) = uVar4;
        *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar4;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar4;
      }
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(iVar2 + 0xc0),*(undefined4 *)(unsigned)(ar4 + 100));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 100);
      dVar5 = *(double *)(unsigned)(iVar2 + 0xc0);
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) + F32HI(dVar5);
    }
    else {
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 + dVar5,0);
    }
    (*(int *)(fr0_ - 0x14)) = ar4;
    if (cVar7 != '\0') {
      (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
      (*(int *)(fr0_ - 0x14)) = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0') {
      *(float *)(unsigned)((*(int *)(fr0_ - 0x14)) + 100) = (*(float *)(fr0_ - 0x18));
      *(float *)(unsigned)(ar4 + 0x60) = (*(float *)(fr0_ - 0x18));
      *(float *)(unsigned)(ar4 + 0x5c) = (*(float *)(fr0_ - 0x18));
    }
    else {
      *(ulonglong *)(unsigned)((*(int *)(fr0_ - 0x14)) + 100) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x60) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      *(ulonglong *)(unsigned)(ar4 + 0x5c) = CONCAT44((*(int *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
    }
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)(iVar2 + 0xe8));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(iVar2 + 0xe8);
    dVar5 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(iVar2 + 0xec));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(iVar2 + 0xec);
    dVar5 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  return 0xec;
}

__asm__(".globl _FUN_8c02ae38\n.set _FUN_8c02ae38, _FUN_8c02ae38_def\n");
//@unit 8c02af68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02af68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02af68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0x47c + ar4);
  if (iVar1 != ar5) {
    *(undefined4 *)(unsigned)(0x474 + ar4) = 1;
    *(undefined4 *)(unsigned)(0x470 + ar4) = 0;
    iVar1 = 0x47c;
    *(int *)(unsigned)(0x47c + ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02af68\n.set _FUN_8c02af68, _FUN_8c02af68_def\n");
//@unit 8c02af90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_CAnimal_ChangeBodyTexture_02af96_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimal_ChangeBodyTexture_02af96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x144 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3ba,
                       (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3c8,0,2));
  }
  else {
    *(int *)(unsigned)(0x42c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(int *)(unsigned)(0x430 + ar4) = iVar1 + ar5 * 8 + 0x88;
    iVar2 = 0x478;
    *(int *)(unsigned)(0x478 + ar4) = ar5;
  }
  return iVar2;
}

__asm__(".globl _s_CAnimal_ChangeBodyTexture_02af96\n.set _s_CAnimal_ChangeBodyTexture_02af96, _s_CAnimal_ChangeBodyTexture_02af96_def\n");
//@unit 8c02b04c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b04c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x478;
  *(undefined4 *)(unsigned)(0x478 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02b04c\n.set _FUN_8c02b04c, _FUN_8c02b04c_def\n");
//@unit 8c02b058
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 in_fr1 = 0;
  double dVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  undefined8 in_xd14 = 0;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x144))))(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43e10000,in_fr1);
  }
  else {
    dVar3 = 2.2923181056228e-311;
  }
  if (cVar6 == '\0') {
    fVar4 = (float)*(int *)(unsigned)(ar4 + 0x470) / F32HI(dVar3);
  }
  else {
    fVar4 = SUB84(CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x470)) / dVar3,0);
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x438),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x438);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),F32LO(dVar5) - 1.0);
  }
  else {
    dVar5 = dVar5 - CONCAT44D(0x3f800000,SUB84(dVar3,0));
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x438) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x438) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x478);
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x47c);
  (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,uVar2,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x474) = *(int *)(unsigned)(ar4 + 0x474) + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023df4(ar4 + 0x480,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x34))))(ar4,uVar2,ar6,ar7));
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x438) = dVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,ar5_00,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x470);
  *(int *)(unsigned)(ar4 + 0x470) = iVar1 + 1;
  if (iVar1 < 0x1c2) {
    uVar2 = 0x474;
    *(int *)(unsigned)(ar4 + 0x474) = *(int *)(unsigned)(ar4 + 0x474) + -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023df4(ar4 + 0x480,ar5_00,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x470) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x474) = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(unsigned)(ar4 + 0x47c),ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02b058\n.set _FUN_8c02b058, _FUN_8c02b058_def\n");
//@unit 8c02b190
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b190";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x45c) = 0x708;
  *(undefined4 *)(unsigned)(ar4 + 0x448) = 0;
  return 0x448;
}

__asm__(".globl _FUN_8c02b190\n.set _FUN_8c02b190, _FUN_8c02b190_def\n");
//@unit 8c02b1b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b1b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c026d7c(*(undefined4 *)(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c02b1b0\n.set _FUN_8c02b1b0, _FUN_8c02b1b0_def\n");
//@unit 8c02b1dc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b1dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b1dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b3d4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c02b1dc\n.set _FUN_8c02b1dc, _FUN_8c02b1dc_def\n");
//@unit 8c02b208
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b208_def(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  bVar1 = false;
  if (((ar5 == 0) || (ar5 == 0x2d)) || (ar5 == 0x1e)) {
    if ((*(float *)(unsigned)(ar4 + 2) == -100000.0) && (*ar6 != -100000.0)) {
      bVar1 = true;
    }
    else if ((*(float *)(unsigned)(ar4 + 2) != -100000.0) && (*ar6 == -100000.0)) {
      bVar1 = true;
    }
    *ar4 = *ar4 + 1;
    if (ar4[1] < *ar4) {
      bVar1 = true;
    }
    if (bVar1) {
      if (ar5 == 0) {
        if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x48;
        }
        else {
          iVar3 = 0x49;
        }
      }
      else if (ar5 == 0x2d) {
        if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x4a;
        }
        else {
          iVar3 = 0x4b;
        }
      }
      else {
        iVar3 = ar5;
        if (ar5 == 0x1e) {
          if ((int)((uint)*(byte *)(unsigned)(ar4 + 10) << 0x1e) < 0) {
            iVar3 = 0x4c;
          }
          else {
            iVar3 = 0x4d;
          }
        }
      }
      *ar4 = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b340(ar4,ar5,ar6,ar7));
      ar4[1] = (short)uVar2;
      ar5 = iVar3;
    }
    if (cVar4 == '\0') {
      *(float *)(unsigned)(ar4 + 2) = *ar6;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = *(undefined8 *)(unsigned)ar6;
    }
  }
  else {
    *ar4 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b340(ar4,ar5,ar6,ar7));
    ar4[1] = (short)uVar2;
  }
  return ar5;
}

__asm__(".globl _FUN_8c02b208\n.set _FUN_8c02b208, _FUN_8c02b208_def\n");
//@unit 8c02b340
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b340";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  ar5_00 = 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,2,ar6,ar7));
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(unsigned)(ar4 + 0x14) = *(byte *)(unsigned)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(unsigned)(ar4 + 0x14) = *(byte *)(unsigned)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5_00,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,0x96,ar6,ar7));
  return iVar3 + 0x1e;
}

__asm__(".globl _FUN_8c02b340\n.set _FUN_8c02b340, _FUN_8c02b340_def\n");
//@unit 8c02b3d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b3d4_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b3d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = 0;
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022d04(ar4 + 2,ar5,ar6,ar7));
  *(byte *)(unsigned)(ar4 + 10) = *(byte *)(unsigned)(ar4 + 10) & 0xfe | 1;
  *(byte *)(unsigned)(ar4 + 10) = *(byte *)(unsigned)(ar4 + 10) & 0xfd | 2;
  return 0x14;
}

__asm__(".globl _FUN_8c02b3d4\n.set _FUN_8c02b3d4, _FUN_8c02b3d4_def\n");
//@unit 8c02b444
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_48c_02b444_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_48c_02b444";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x48c + ar4);
}

__asm__(".globl _get_field_48c_02b444\n.set _get_field_48c_02b444, _get_field_48c_02b444_def\n");
//@unit 8c02b450
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b450_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b450";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x48c;
  *(undefined4 *)(unsigned)(0x48c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02b450\n.set _FUN_8c02b450, _FUN_8c02b450_def\n");
//@unit 8c02b45c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b45c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b45c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return 0xc8;
}

__asm__(".globl _FUN_8c02b45c\n.set _FUN_8c02b45c, _FUN_8c02b45c_def\n");
//@unit 8c02b4ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b4ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b4ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return 0xcc;
}

__asm__(".globl _FUN_8c02b4ac\n.set _FUN_8c02b4ac, _FUN_8c02b4ac_def\n");
//@unit 8c02b4fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b4fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b4fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02b4fc\n.set _FUN_8c02b4fc, _FUN_8c02b4fc_def\n");
//@unit 8c02b524
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b524_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b524";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return 0x120;
}

__asm__(".globl _FUN_8c02b524\n.set _FUN_8c02b524, _FUN_8c02b524_def\n");
//@unit 8c02b574
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b574_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b574";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x334;
}

__asm__(".globl _FUN_8c02b574\n.set _FUN_8c02b574, _FUN_8c02b574_def\n");
//@unit 8c02b584
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b584_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b584";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return 0xd0;
}

__asm__(".globl _FUN_8c02b584\n.set _FUN_8c02b584, _FUN_8c02b584_def\n");
//@unit 8c02b5d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b5d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c02b5fc(s0,ar4 + 0x338,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02b5d4\n.set _FUN_8c02b5d4, _FUN_8c02b5d4_def\n");
//@unit 8c02b5fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * vec3_copy_8c02b5fc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "vec3_copy_8c02b5fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _vec3_copy_8c02b5fc\n.set _vec3_copy_8c02b5fc, _vec3_copy_8c02b5fc_def\n");
//@unit 8c02b61c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b61c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return 0xd4;
}

__asm__(".globl _FUN_8c02b61c\n.set _FUN_8c02b61c, _FUN_8c02b61c_def\n");
//@unit 8c02b670
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b670_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b670";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02b670\n.set _FUN_8c02b670, _FUN_8c02b670_def\n");
//@unit 8c02b698
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b698_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b698";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfbc(ar4 + 0x174,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02b698\n.set _FUN_8c02b698, _FUN_8c02b698_def\n");
//@unit 8c02b6c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b6c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b6c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x40c;
}

__asm__(".globl _FUN_8c02b6c0\n.set _FUN_8c02b6c0, _FUN_8c02b6c0_def\n");
//@unit 8c02b6d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b6d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b6d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x408;
}

__asm__(".globl _FUN_8c02b6d0\n.set _FUN_8c02b6d0, _FUN_8c02b6d0_def\n");
//@unit 8c02b6e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b6e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b6e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x174;
}

__asm__(".globl _FUN_8c02b6e0\n.set _FUN_8c02b6e0, _FUN_8c02b6e0_def\n");
//@unit 8c02b6f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_308_02b6f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_308_02b6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x308 + ar4);
}

__asm__(".globl _get_field_308_02b6f0\n.set _get_field_308_02b6f0, _get_field_308_02b6f0_def\n");
//@unit 8c02b6fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_30c_02b6fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_30c_02b6fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x30c + ar4);
}

__asm__(".globl _get_field_30c_02b6fc\n.set _get_field_30c_02b6fc, _get_field_30c_02b6fc_def\n");
//@unit 8c02b708
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b708_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b708";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b708\n.set _noop_02b708, _noop_02b708_def\n");
//@unit 8c02b70c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b70c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b70c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b70c\n.set _noop_02b70c, _noop_02b70c_def\n");
//@unit 8c02b710
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b710\n.set _noop_02b710, _noop_02b710_def\n");
//@unit 8c02b714
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b714_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b714";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b714\n.set _noop_02b714, _noop_02b714_def\n");
//@unit 8c02b718
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b718";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b718\n.set _noop_02b718, _noop_02b718_def\n");
//@unit 8c02b71c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b71c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b71c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b71c\n.set _noop_02b71c, _noop_02b71c_def\n");
//@unit 8c02b720
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b720\n.set _noop_02b720, _noop_02b720_def\n");
//@unit 8c02b724
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b724_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b724";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b724\n.set _noop_02b724, _noop_02b724_def\n");
//@unit 8c02b728
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b728_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b728";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b728\n.set _noop_02b728, _noop_02b728_def\n");
//@unit 8c02b72c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b72c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b72c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b72c\n.set _noop_02b72c, _noop_02b72c_def\n");
//@unit 8c02b730
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b730_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b730\n.set _ret_const_0_02b730, _ret_const_0_02b730_def\n");
//@unit 8c02b738
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b738_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b738";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b738\n.set _ret_const_0_02b738, _ret_const_0_02b738_def\n");
//@unit 8c02b740
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b740_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b740";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b740\n.set _ret_const_0_02b740, _ret_const_0_02b740_def\n");
//@unit 8c02b748
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b748_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b748";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b748\n.set _noop_02b748, _noop_02b748_def\n");
//@unit 8c02b74c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b74c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b74c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b74c\n.set _noop_02b74c, _noop_02b74c_def\n");
//@unit 8c02b750
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b750_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b750";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b750\n.set _noop_02b750, _noop_02b750_def\n");
//@unit 8c02b754
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b754\n.set _noop_02b754, _noop_02b754_def\n");
//@unit 8c02b758
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b758_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b758";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b758\n.set _noop_02b758, _noop_02b758_def\n");
//@unit 8c02b75c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b75c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b75c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b75c\n.set _ret_const_0_02b75c, _ret_const_0_02b75c_def\n");
//@unit 8c02b764
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02b764_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02b764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02b764\n.set _noop_02b764, _noop_02b764_def\n");
//@unit 8c02b768
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b768_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b768";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b768\n.set _ret_const_0_02b768, _ret_const_0_02b768_def\n");
//@unit 8c02b770
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02b770_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02b770";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02b770\n.set _ret_const_0_02b770, _ret_const_0_02b770_def\n");
//@unit 8c02b778
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02b778_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b778";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1259c8),ar5,ar6,ar7));
  uVar3 = 0x8c2792d8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2792d8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1259d8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2792e4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2792e4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1259e8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2792f0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2792f0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1259f8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2792fc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2792fc,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125a08) = CONCAT44((*(undefined1 *)(unsigned)0x8c125a0c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125a08) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b920(((undefined1 *)(unsigned)0x8c27d1fc),pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c02b858),0x8c27d1f0,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02b778\n.set _FUN_8c02b778, _FUN_8c02b778_def\n");
//@unit 8c02b858
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b858_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x1f8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x1f0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x1ec,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_02b8f0(ar4 + 0x1e8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_02b8f0(ar4 + 0x1e4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c02b858\n.set _FUN_8c02b858, _FUN_8c02b858_def\n");
//@unit 8c02b8f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_02b8f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_02b8f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_02b8f0\n.set _free_if_nonnull_wrap_02b8f0, _free_if_nonnull_wrap_02b8f0_def\n");
//@unit 8c02b920
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b920";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 8;
  ar6_00 = 0;
  ar5_00 = ((void *)(unsigned)0x8c024508);
  ({ unsigned long t0_ = (unsigned long)(8); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c024508),0,8); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0154ec(ar4 + 0x1e4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0154ec(ar4 + 0x1e8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x1ec,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1f0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1f8,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c02b920\n.set _FUN_8c02b920, _FUN_8c02b920_def\n");
//@unit 8c02b9a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02b9a8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b9a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined *ar7_00;
  int iVar2;
  int iVar3;
  
  ({ unsigned long t0_ = (unsigned long)(6); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c02df08),0,0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d7c8(ar4 + 0x90,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305dc) + ar6 * 0x140),
               *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305e4) + ar6 * 0x140),
               *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305e0) + ar6 * 0x140)));
  ar7_00 = ((undefined1 *)(unsigned)0x8c1304b6) + ar6 * 0x140;
  ({ unsigned long t0_ = (unsigned long)(
               *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c4) + ar6 * 0x140)); unsigned long t1_ = (unsigned long)(
               *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c8) + ar6 * 0x140)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02da5c(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + ar6 * 0x140),
               (int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b4) + ar6 * 0x140),ar7_00); });
  ar6_00 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304d0) + ar6 * 0x140);
  uVar1 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304cc) + ar6 * 0x140);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e460(ar4 + 0xf8,uVar1,ar6_00,ar7_00));
  iVar3 = ar6 * 0x140;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = ar5;
  *(int *)(unsigned)(ar4 + 0x13c) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar4,uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(ar4 + 0x138) = (int)(short)uVar1;
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x164) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x14c) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4,(int)(char)(((undefined1 *)(unsigned)0x8c1304d4))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4,iVar3 + -0x73ecfb28,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4,iVar3 + -0x73ecfb14,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4 + 0x18,(int)(char)(((undefined1 *)(unsigned)0x8c130500))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4 + 0x18,iVar3 + -0x73ecfafc,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4 + 0x18,iVar3 + -0x73ecfae8,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4 + 0x30,(int)(char)(((undefined1 *)(unsigned)0x8c13052c))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4 + 0x30,iVar3 + -0x73ecfad0,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4 + 0x30,iVar3 + -0x73ecfabc,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4 + 0x48,(int)(char)(((undefined1 *)(unsigned)0x8c130558))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4 + 0x48,iVar3 + -0x73ecfaa4,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4 + 0x48,iVar3 + -0x73ecfa90,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4 + 0x60,(int)(char)(((undefined1 *)(unsigned)0x8c130584))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4 + 0x60,iVar3 + -0x73ecfa78,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4 + 0x60,iVar3 + -0x73ecfa64,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd94(ar4 + 0x78,(int)(char)(((undefined1 *)(unsigned)0x8c1305b0))[iVar3],ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd8c(ar4 + 0x78,iVar3 + -0x73ecfa4c,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02bd84(ar4 + 0x78,iVar3 + -0x73ecfa38,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b6) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b8) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304ba) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304bc) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304be) + iVar3),ar7_00));
  iVar2 = (int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c0) + iVar3);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,5,iVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304ac) + iVar3),iVar2,ar7_00));
  return ar4;
}

__asm__(".globl _FUN_8c02b9a8\n.set _FUN_8c02b9a8, _FUN_8c02b9a8_def\n");
//@unit 8c02bd68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(short *)(unsigned)(ar4 + 0x14) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02bd68\n.set _FUN_8c02bd68, _FUN_8c02bd68_def\n");
//@unit 8c02bd70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined2 *)(unsigned)(ar4 + ar5 * 2 + 0x22) = (undefined2)ar6;
  return 0x22;
}

__asm__(".globl _FUN_8c02bd70\n.set _FUN_8c02bd70, _FUN_8c02bd70_def\n");
//@unit 8c02bd84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02bd84\n.set _FUN_8c02bd84, _FUN_8c02bd84_def\n");
//@unit 8c02bd8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02bd8c\n.set _FUN_8c02bd8c, _FUN_8c02bd8c_def\n");
//@unit 8c02bd94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0xb) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02bd94\n.set _FUN_8c02bd94, _FUN_8c02bd94_def\n");
//@unit 8c02bd9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bd9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bd9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4,ar5,ar6,ar7));
  if ((iVar1 < 1) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4,ar5,ar6,ar7)), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7));
  if ((iVar1 == 0x2710) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c02bd9c\n.set _FUN_8c02bd9c, _FUN_8c02bd9c_def\n");
//@unit 8c02be9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_02be9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_02be9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_02be9c\n.set _get_field_4_02be9c, _get_field_4_02be9c_def\n");
//@unit 8c02bea4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02bea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bea4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(int *)(unsigned)(*(char *)(unsigned)(ar4 + 8) * 4 + *(int *)(unsigned)(ar4 + 0x10)) - *(int *)(unsigned)(ar4 + 4);
}

__asm__(".globl _FUN_8c02bea4\n.set _FUN_8c02bea4, _FUN_8c02bea4_def\n");
//@unit 8c02bebc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bebc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (5 < iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(unsigned)(0x14c + ar4 + iVar1 * 4) == 2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02bebc\n.set _FUN_8c02bebc, _FUN_8c02bebc_def\n");
//@unit 8c02bef8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02bef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bfd8(ar4,ar5,ar6,ar7));
  (*(int *)(fr0_ - 0x10)) = *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302bc)) + (short)uVar1 * 2) + -1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bf8c(ar4,ar5,ar6,ar7));
  if ((int)*(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + *(int *)(unsigned)(0x13c + ar4) * 2) + (int)(short)uVar1 <
      (*(int *)(fr0_ - 0x10))) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bf8c(ar4,ar5,ar6,ar7));
    (*(int *)(fr0_ - 0x10)) = (int)*(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + *(int *)(unsigned)(0x13c + ar4) * 2) +
                (int)(short)uVar1;
  }
  return (*(int *)(fr0_ - 0x10));
}

__asm__(".globl _FUN_8c02bef8\n.set _FUN_8c02bef8, _FUN_8c02bef8_def\n");
//@unit 8c02bf8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02bf8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bf8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02bf8c\n.set _FUN_8c02bf8c, _FUN_8c02bf8c_def\n");
//@unit 8c02bfb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02bfb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bfb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(ar4 + 0x16);
}

__asm__(".globl _FUN_8c02bfb4\n.set _FUN_8c02bfb4, _FUN_8c02bfb4_def\n");
//@unit 8c02bfbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02bfbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bfbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302bc)) + *(int *)(unsigned)(0x138 + ar4) * 2);
}

__asm__(".globl _FUN_8c02bfbc\n.set _FUN_8c02bfbc, _FUN_8c02bfbc_def\n");
//@unit 8c02bfd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02bfd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02bfd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (0x11 < iVar1) {
      return 0xffffffff;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13019c)) + iVar2 * 4 + iVar1 * 0x10) == *(int *)(unsigned)(0x13c + ar4)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c02bfd8\n.set _FUN_8c02bfd8, _FUN_8c02bfd8_def\n");
//@unit 8c02c030
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c030_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c030";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 ar6_01;
  int ar5_01;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), get_field_24_026024(ar6,ar5,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 0x144) == '\x01') {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c390(ar4 + 0xa8,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x18,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x30,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    }
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x48,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x60,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    ar5_00 = (int *)(unsigned)(int)*(char *)(unsigned)(ar4 + 0x144);
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7));
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7));
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x4c)) =
         CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0x4c)) >> 0x10),
                  CONCAT11((char)uVar2,(char)(*(undefined4 *)(fr0_ - 0x4c))));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7));
    }
  }
  if (ar5 != ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x148))) {
    ar7 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
    ar5_00 = ar6;
    ar6_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7));
  if ((iVar1 == 0) && (ar5 != ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x148)))) {
    if (ar5 != ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x148))) {
      ar6_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7));
    uVar3 = 0xd;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7));
    ar5_01 = (int)(char)uVar2;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7));
    if ((iVar1 == 100) && (ar5_01 = 5, (*(undefined4 *)(unsigned)(unsigned)0x8c27d430) == 1)) {
      ar5_01 = 4;
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7); });
    }
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x148))))(ar6,uVar2,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7));
  ar6_01 = *(undefined4 *)(unsigned)(ar4 + 0x140);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7));
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x13c);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7));
  *(unsigned *)(unsigned)(ar4 + 0x148) = ar5;
  return 0x148;
}

__asm__(".globl _FUN_8c02c030\n.set _FUN_8c02c030, _FUN_8c02c030_def\n");
//@unit 8c02c308
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 3) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c308\n.set _FUN_8c02c308, _FUN_8c02c308_def\n");
//@unit 8c02c310
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c310_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c310";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51);
}

__asm__(".globl _FUN_8c02c310\n.set _FUN_8c02c310, _FUN_8c02c310_def\n");
//@unit 8c02c328
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x48) = ar5;
  return 0x48;
}

__asm__(".globl _FUN_8c02c328\n.set _FUN_8c02c328, _FUN_8c02c328_def\n");
//@unit 8c02c330
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c330_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c330";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = (undefined1)ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02c330\n.set _FUN_8c02c330, _FUN_8c02c330_def\n");
//@unit 8c02c338
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 8) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c338\n.set _FUN_8c02c338, _FUN_8c02c338_def\n");
//@unit 8c02c340
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c340";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (*(int *)(unsigned)(ar4 + 4) * 0x3e8,*(int *)(unsigned)(ar4 + 0xc) * 10,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02c340\n.set _FUN_8c02c340, _FUN_8c02c340_def\n");
//@unit 8c02c380
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c380_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c380";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl _FUN_8c02c380\n.set _FUN_8c02c380, _FUN_8c02c380_def\n");
//@unit 8c02c388
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c388_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c388";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 10) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c388\n.set _FUN_8c02c388, _FUN_8c02c388_def\n");
//@unit 8c02c390
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c390";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl _FUN_8c02c390\n.set _FUN_8c02c390, _FUN_8c02c390_def\n");
//@unit 8c02c398
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c398";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(unsigned)(0x144 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c02c398\n.set _FUN_8c02c398, _FUN_8c02c398_def\n");
//@unit 8c02c3a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c3a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c3a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 3;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 2;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bea4(ar4,ar5,ar6,ar7));
  if ((iVar1 < 1) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c025f68(ar4,ar5,ar6,ar7)), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7));
  if ((iVar1 < 1) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
    return 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_02be9c(ar4 + 0x18,ar5,ar6,ar7));
  if (iVar1 == 0x2710) {
    uVar2 = 1;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7));
    if ((iVar1 == 0x2710) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7)), (char)uVar2 == '\x01')) {
      return 4;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02c4e8(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02c3a8\n.set _FUN_8c02c3a8, _FUN_8c02c3a8_def\n");
//@unit 8c02c4e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c4e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c4e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c510(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(char)uVar1;
}

__asm__(".globl _FUN_8c02c4e8\n.set _FUN_8c02c4e8, _FUN_8c02c4e8_def\n");
//@unit 8c02c510
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c510";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x1c);
}

__asm__(".globl _FUN_8c02c510\n.set _FUN_8c02c510, _FUN_8c02c510_def\n");
//@unit 8c02c518
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c518";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = -1;
  iVar2 = -1;
  for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(iVar4 * 0x18 + ar4,ar5,ar6,ar7));
    if (((char)uVar1 == '\x01') && (iVar4 != 5)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar4 * 0x18 + ar4,ar5,ar6,ar7));
      if (cVar3 < (char)uVar1) {
        iVar2 = iVar4;
        cVar3 = (char)uVar1;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c02c518\n.set _FUN_8c02c518, _FUN_8c02c518_def\n");
//@unit 8c02c5ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c5ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c5ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 8);
}

__asm__(".globl _FUN_8c02c5ac\n.set _FUN_8c02c5ac, _FUN_8c02c5ac_def\n");
//@unit 8c02c5b4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c5b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(iVar2 * 0x18 + ar4,ar5,ar6,ar7));
    if ((char)uVar1 == '\0') {
      if (*(int *)(unsigned)(0x14c + ar4 + iVar2 * 4) == 2) {
        *(undefined4 *)(unsigned)(0x14c + ar4 + iVar2 * 4) = 0;
      }
      else if (*(int *)(unsigned)(0x14c + ar4 + iVar2 * 4) == 1) {
        *(undefined4 *)(unsigned)(0x14c + ar4 + iVar2 * 4) = 2;
      }
    }
    else {
      *(undefined4 *)(unsigned)(0x14c + ar4 + iVar2 * 4) = 1;
    }
  }
  return 6;
}

__asm__(".globl _FUN_8c02c5b4\n.set _FUN_8c02c5b4, _FUN_8c02c5b4_def\n");
//@unit 8c02c668
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02c668_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
    if ((char)uVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar1 * 0x18 + ar4,ar5,ar6,ar7));
      ar5 = (int)(char)uVar2;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(0x1e,ar5,ar6,ar7));
      iVar4 = iVar4 * (char)uVar3;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(ar4,ar5,ar6,ar7));
  return iVar4 + (uint)(iVar1 != -1) * 0x46;
}

__asm__(".globl _FUN_8c02c668\n.set _FUN_8c02c668, _FUN_8c02c668_def\n");
//@unit 8c02c758
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c758_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02c758";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 ain0;
  
  iVar4 = ar5 * 0x140;
  iVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_34_02cbdc(ar4 + 0xa8,ar5,ar6,ar7));
  if (iVar1 != 0x13) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbd4(ar4 + 0xa8,0,ar6,ar7); });
    iVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cbbc(ar4 + 0x90,0,ar6,ar7));
  }
  uVar5 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 0x10);
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x164) = 0;
  *(int *)(unsigned)(ar4 + 0x13c) = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bfd8(ar4,iVar3,ar6,ar7));
  ain0 = CONCAT22(uVar5,(short)uVar2);
  *(int *)(unsigned)(ar4 + 0x138) = (int)(short)uVar2;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4,(int)(char)(((undefined1 *)(unsigned)0x8c1304d4))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4,iVar4 + -0x73ecfb28,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4,iVar4 + -0x73ecfb14,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4 + 0x18,(int)(char)(((undefined1 *)(unsigned)0x8c130500))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4 + 0x18,iVar4 + -0x73ecfafc,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4 + 0x18,iVar4 + -0x73ecfae8,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4 + 0x30,(int)(char)(((undefined1 *)(unsigned)0x8c13052c))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4 + 0x30,iVar4 + -0x73ecfad0,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4 + 0x30,iVar4 + -0x73ecfabc,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4 + 0x48,(int)(char)(((undefined1 *)(unsigned)0x8c130558))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4 + 0x48,iVar4 + -0x73ecfaa4,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4 + 0x48,iVar4 + -0x73ecfa90,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4 + 0x60,(int)(char)(((undefined1 *)(unsigned)0x8c130584))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4 + 0x60,iVar4 + -0x73ecfa78,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4 + 0x60,iVar4 + -0x73ecfa64,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd94(ar4 + 0x78,(int)(char)(((undefined1 *)(unsigned)0x8c1305b0))[iVar4],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd8c(ar4 + 0x78,iVar4 + -0x73ecfa4c,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02bd84(ar4 + 0x78,iVar4 + -0x73ecfa38,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbb4(ar4 + 0x90,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305dc) + iVar4),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbac(ar4 + 0x90,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305e4) + iVar4),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02d81c(ar4 + 0x90,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1305e0) + iVar4),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cba4(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + iVar4),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb9c(ar4 + 0xa8,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b4) + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b6) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b8) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304ba) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304bc) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304be) + iVar4),ar7));
  iVar3 = (int)*(short *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c0) + iVar4);
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,5,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb94(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c4) + iVar4),iVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb8c(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304c8) + iVar4),iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304ac) + iVar4),iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c025fbc(ar4 + 0xa8,0,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb84(ar4 + 0xa8,0,iVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb7c(ar4 + 0xa8,0,iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb74(ar4 + 0xa8,0,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb6c(ar4 + 0xa8,0,iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb24(ar4 + 0xf8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304cc) + iVar4),iVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cadc(ar4 + 0xf8,*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1304d0) + iVar4),iVar3,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c02c758\n.set _FUN_8c02c758, _FUN_8c02c758_def\n");
//@unit 8c02cadc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cadc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cadc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0xc) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02cadc\n.set _FUN_8c02cadc, _FUN_8c02cadc_def\n");
//@unit 8c02cb24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb24_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02cb24\n.set _FUN_8c02cb24, _FUN_8c02cb24_def\n");
//@unit 8c02cb6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cb6c\n.set _FUN_8c02cb6c, _FUN_8c02cb6c_def\n");
//@unit 8c02cb74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 1) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02cb74\n.set _FUN_8c02cb74, _FUN_8c02cb74_def\n");
//@unit 8c02cb7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb7c_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = (undefined1)ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cb7c\n.set _FUN_8c02cb7c, _FUN_8c02cb7c_def\n");
//@unit 8c02cb84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x18) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cb84\n.set _FUN_8c02cb84, _FUN_8c02cb84_def\n");
//@unit 8c02cb8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cb8c\n.set _FUN_8c02cb8c, _FUN_8c02cb8c_def\n");
//@unit 8c02cb94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x34) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cb94\n.set _FUN_8c02cb94, _FUN_8c02cb94_def\n");
//@unit 8c02cb9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cb9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cb9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined2 *)(unsigned)(ar4 + 0x20) = (undefined2)ar5;
  return 0x20;
}

__asm__(".globl _FUN_8c02cb9c\n.set _FUN_8c02cb9c, _FUN_8c02cb9c_def\n");
//@unit 8c02cba4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x38) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cba4\n.set _FUN_8c02cba4, _FUN_8c02cba4_def\n");
//@unit 8c02cbac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cbac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cbac\n.set _FUN_8c02cbac, _FUN_8c02cbac_def\n");
//@unit 8c02cbb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cbb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cbb4\n.set _FUN_8c02cbb4, _FUN_8c02cbb4_def\n");
//@unit 8c02cbbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cbbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0xc) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(unsigned)(ar4 + 4) = *(undefined4 *)(unsigned)(ar4 + 0xc);
    return *(undefined4 *)(unsigned)(ar4 + 0xc);
  }
  *(int *)(unsigned)(ar4 + 4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02cbbc\n.set _FUN_8c02cbbc, _FUN_8c02cbbc_def\n");
//@unit 8c02cbd4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cbd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02cbd4\n.set _FUN_8c02cbd4, _FUN_8c02cbd4_def\n");
//@unit 8c02cbdc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_34_02cbdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_34_02cbdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x34);
}

__asm__(".globl _get_field_34_02cbdc\n.set _get_field_34_02cbdc, _get_field_34_02cbdc_def\n");
//@unit 8c02cbe4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbe4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cbe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ain0;
  
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce4c(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce40(ar4,ar5[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce34(ar4,ar5[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce28(ar4,ar5[3],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cbbc(ar4 + 0x90,ar5[4],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02ce10(ar4 + 0x90,ar5[5],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb7c(ar4 + 0xa8,(int)*(char *)(unsigned)(ar5 + 6),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cb74(ar4 + 0xa8,(int)*(char *)(unsigned)((int)ar5 + 0x19),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028edc(ar4 + 0xa8,ar5[7],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028ed4(ar4 + 0xa8,ar5[8],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cbd4(ar4 + 0xa8,ar5[9],ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(unsigned)(ar5 + 10),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)(unsigned)((int)ar5 + 0x2a),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb84(ar4 + 0xa8,ar5[0xb],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce08(ar4 + 0xf8,ar5[0xc],ar6,ar7); });
  for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd94(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xd),ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(
                 (*(int *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02c330(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)((int)ar5 + ain0 * 0xc + 0x35),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xf),ar6,ar7));
    (*(int *)(fr0_ - 0x30)) = ain0;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce00(ain0 * 0x18 + ar4,ar5[ain0 * 3 + 0xe],ar6,ar7); });
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cdf8(ar4 + 0x78,(int)*(char *)(unsigned)(ar5 + 0x1e),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ar4 + 0x78,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02cbe4\n.set _FUN_8c02cbe4, _FUN_8c02cbe4_def\n");
//@unit 8c02cdf8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cdf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cdf8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 9) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02cdf8\n.set _FUN_8c02cdf8, _FUN_8c02cdf8_def\n");
//@unit 8c02ce00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ce00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02ce00\n.set _FUN_8c02ce00, _FUN_8c02ce00_def\n");
//@unit 8c02ce08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ce08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02ce08\n.set _FUN_8c02ce08, _FUN_8c02ce08_def\n");
//@unit 8c02ce10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ce10_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x10) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(unsigned)(ar4 + 8) = *(undefined4 *)(unsigned)(ar4 + 0x10);
    return *(undefined4 *)(unsigned)(ar4 + 0x10);
  }
  *(int *)(unsigned)(ar4 + 8) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce10\n.set _FUN_8c02ce10, _FUN_8c02ce10_def\n");
//@unit 8c02ce28
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ce28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x140;
  *(undefined4 *)(unsigned)(0x140 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce28\n.set _FUN_8c02ce28, _FUN_8c02ce28_def\n");
//@unit 8c02ce34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ce34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x13c;
  *(undefined4 *)(unsigned)(0x13c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce34\n.set _FUN_8c02ce34, _FUN_8c02ce34_def\n");
//@unit 8c02ce40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ce40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x138;
  *(undefined4 *)(unsigned)(0x138 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce40\n.set _FUN_8c02ce40, _FUN_8c02ce40_def\n");
//@unit 8c02ce4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ce4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x134;
  *(undefined4 *)(unsigned)(0x134 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce4c\n.set _FUN_8c02ce4c, _FUN_8c02ce4c_def\n");
//@unit 8c02ce58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ce58_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ce58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce4c(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce40(ar4,ar5[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce34(ar4,ar5[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce28(ar4,ar5[3],ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0xa8,ar5[4],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0xa8,ar5[5],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cbd4(ar4 + 0xa8,ar5[6],ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(unsigned)(ar5 + 7),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)(unsigned)((int)ar5 + 0x1e),ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c02ce58\n.set _FUN_8c02ce58, _FUN_8c02ce58_def\n");
//@unit 8c02cf20
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cf20_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02cf20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_134_02d1e8(ar4,ar5,ar6,ar7));
  *ar5 = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4,ar5_00,ar6,ar7));
  ar5[1] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4,ar5_00,ar6,ar7));
  ar5[2] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(ar4,ar5_00,ar6,ar7));
  ar5[3] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02d1e0(ar4 + 0x90,ar5_00,ar6,ar7));
  ar5[4] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_02d1d8(ar4 + 0x90,ar5_00,ar6,ar7));
  ar5[5] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1d0(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar5 + 6) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(char *)(unsigned)((int)ar5 + 0x19) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[7] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[8] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[9] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(short *)(unsigned)(ar5 + 10) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(short *)(unsigned)((int)ar5 + 0x2a) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[0xb] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_02d198(ar4 + 0xf8,ar5_00,ar6,ar7));
  ar5[0xc] = uVar1;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(char *)(unsigned)(ar5 + iVar2 * 3 + 0xd) = (char)iVar2;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7));
    *(char *)(unsigned)((int)ar5 + iVar2 * 0xc + 0x35) = (char)uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02be9c(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7));
    ar5[iVar2 * 3 + 0xe] = uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7));
    *(char *)(unsigned)(ar5 + iVar2 * 3 + 0xf) = (char)uVar1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d190(ar4 + 0x78,ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar5 + 0x1e) = (char)uVar1;
  return 0x78;
}

__asm__(".globl _FUN_8c02cf20\n.set _FUN_8c02cf20, _FUN_8c02cf20_def\n");
//@unit 8c02d190
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d190";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 9);
}

__asm__(".globl _FUN_8c02d190\n.set _FUN_8c02d190, _FUN_8c02d190_def\n");
//@unit 8c02d198
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_10_02d198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_10_02d198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_02d198\n.set _get_field_10_02d198, _get_field_10_02d198_def\n");
//@unit 8c02d1a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_18_02d1a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_18_02d1a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x18);
}

__asm__(".globl _get_field_18_02d1a0\n.set _get_field_18_02d1a0, _get_field_18_02d1a0_def\n");
//@unit 8c02d1a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d1a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d1a8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(short *)(unsigned)(ar4 + 0x14);
}

__asm__(".globl _FUN_8c02d1a8\n.set _FUN_8c02d1a8, _FUN_8c02d1a8_def\n");
//@unit 8c02d1b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_10_02d1b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_10_02d1b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_02d1b0\n.set _get_field_10_02d1b0, _get_field_10_02d1b0_def\n");
//@unit 8c02d1b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_c_02d1b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_c_02d1b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0xc);
}

__asm__(".globl _get_field_c_02d1b8\n.set _get_field_c_02d1b8, _get_field_c_02d1b8_def\n");
//@unit 8c02d1c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_8_02d1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_8_02d1c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 8);
}

__asm__(".globl _get_field_8_02d1c0\n.set _get_field_8_02d1c0, _get_field_8_02d1c0_def\n");
//@unit 8c02d1c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d1c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d1c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 1);
}

__asm__(".globl _FUN_8c02d1c8\n.set _FUN_8c02d1c8, _FUN_8c02d1c8_def\n");
//@unit 8c02d1d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d1d0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d1d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl _FUN_8c02d1d0\n.set _FUN_8c02d1d0, _FUN_8c02d1d0_def\n");
//@unit 8c02d1d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_8_02d1d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_8_02d1d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 8);
}

__asm__(".globl _get_field_8_02d1d8\n.set _get_field_8_02d1d8, _get_field_8_02d1d8_def\n");
//@unit 8c02d1e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_02d1e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_02d1e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_02d1e0\n.set _get_field_4_02d1e0, _get_field_4_02d1e0_def\n");
//@unit 8c02d1e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_134_02d1e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_134_02d1e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x134 + ar4);
}

__asm__(".globl _get_field_134_02d1e8\n.set _get_field_134_02d1e8, _get_field_134_02d1e8_def\n");
//@unit 8c02d1f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d1f4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d1f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_134_02d1e8(ar4,ar5,ar6,ar7));
  *ar5 = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4,ar5_00,ar6,ar7));
  ar5[1] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4,ar5_00,ar6,ar7));
  ar5[2] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(ar4,ar5_00,ar6,ar7));
  ar5[3] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[4] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[5] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[6] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(short *)(unsigned)(ar5 + 7) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(short *)(unsigned)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d1f4\n.set _FUN_8c02d1f4, _FUN_8c02d1f4_def\n");
//@unit 8c02d2e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d2e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d2e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 ain0;
  
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7); });
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7));
  }
  if ((6 < ar5) && ((*(int *)(unsigned)(ar4 + 0x13c) == 2 || (*(int *)(unsigned)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7));
  ain0 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c518(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02de00(ar4 + 0xa8,ar5,*(undefined4 *)(unsigned)(ar4 + 0x13c),ar7));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02c330(ar4 + 0x60,1,ar6,ar7); });
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02d2e0\n.set _FUN_8c02d2e0, _FUN_8c02d2e0_def\n");
//@unit 8c02d3e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d3e0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d3e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl _FUN_8c02d3e0\n.set _FUN_8c02d3e0, _FUN_8c02d3e0_def\n");
//@unit 8c02d3e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d3e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d3e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(ar4 + 0x90,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02d3e8\n.set _FUN_8c02d3e8, _FUN_8c02d3e8_def\n");
//@unit 8c02d410
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d410_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d438(ar4 + 0x90,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02d410\n.set _FUN_8c02d410, _FUN_8c02d410_def\n");
//@unit 8c02d438
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d438";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (*(int *)(unsigned)(ar4 + 8) * 0x3e8,*(int *)(unsigned)(ar4 + 0x10) * 10,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02d438\n.set _FUN_8c02d438, _FUN_8c02d438_def\n");
//@unit 8c02d478
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d478";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7));
  return iVar1 * iVar2;
}

__asm__(".globl _FUN_8c02d478\n.set _FUN_8c02d478, _FUN_8c02d478_def\n");
//@unit 8c02d4bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_02d4bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_02d4bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_02d4bc\n.set _get_field_4_02d4bc, _get_field_4_02d4bc_def\n");
//@unit 8c02d4c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d4c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7));
  return (1 - iVar1) * iVar2;
}

__asm__(".globl _FUN_8c02d4c4\n.set _FUN_8c02d4c4, _FUN_8c02d4c4_def\n");
//@unit 8c02d50c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02d50c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d50c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  *(undefined1 *)(unsigned)(ar4 + 6) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x19) = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined2 *)(unsigned)(ar4 + 10) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x2a) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(unsigned)(ar4 + iVar1 * 3 + 0xd) = (char)iVar1;
    *(undefined1 *)(unsigned)((int)ar4 + iVar1 * 0xc + 0x35) = 0;
    ar4[iVar1 * 3 + 0xe] = 0;
    *(undefined1 *)(unsigned)(ar4 + iVar1 * 3 + 0xf) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02d50c\n.set _FUN_8c02d50c, _FUN_8c02d50c_def\n");
//@unit 8c02d5b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02d5b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d5b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  *(undefined2 *)(unsigned)(ar4 + 7) = 0;
  *(undefined2 *)(unsigned)((int)ar4 + 0x1e) = 0;
  ar4[8] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d5b8\n.set _FUN_8c02d5b8, _FUN_8c02d5b8_def\n");
//@unit 8c02d5e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d5e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d5e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a10)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d400;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d400,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a20)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d40c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d40c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a30)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d418;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d418,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a40)),puVar3,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27d424,ar7));
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 6) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x28c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 8) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x28c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x3cc);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0xe) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x78c);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x1e) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x118c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x20) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x118c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x12cc);
  *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x24) = *(undefined2 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x154c);
  *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + 0x26) =
       *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x154c) + *(short *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + 0x168c);
  return 0x26;
}

__asm__(".globl _FUN_8c02d5e8\n.set _FUN_8c02d5e8, _FUN_8c02d5e8_def\n");
//@unit 8c02d720
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d720";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a50)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d438;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d438,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a60)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d444;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d444,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a70)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d450;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d450,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a80)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27d45c,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c02d720\n.set _FUN_8c02d720, _FUN_8c02d720_def\n");
//@unit 8c02d7c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c02d7c8_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c02d7c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0xc) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(ar7 * 0x3840,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x14) = uVar1;
  *ar4 = 0;
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d7c8\n.set _FUN_8c02d7c8, _FUN_8c02d7c8_def\n");
//@unit 8c02d81c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d81c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d81c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x3840,*(undefined4 *)(unsigned)(ar4 + 0xc),ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d81c\n.set _FUN_8c02d81c, _FUN_8c02d81c_def\n");
//@unit 8c02d854
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02d854_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d854";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  uint ar4_00;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0103d0(ar5,uVar4,ar6,ar7));
    if ((iVar2 == 0) && (*(int *)(unsigned)(ar4 + 4) < *(int *)(unsigned)(ar4 + 0xc))) {
      *(int *)(unsigned)(ar4 + 4) = *(int *)(unsigned)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(unsigned)(ar4 + 8);
    if (((*(uint *)(unsigned)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = 0x258, 0x258 < ar5)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,uVar4,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar4,100,ar6,ar7));
      if (uVar3 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                          (*(undefined4 *)(unsigned)(ar4 + 0x10),10,ar6,ar7));
        *(uint *)(unsigned)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c02d854\n.set _FUN_8c02d854, _FUN_8c02d854_def\n");
//@unit 8c02d8fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
  return (uint)(iVar1 < *(int *)(unsigned)(ar4 + 4));
}

__asm__(".globl _FUN_8c02d8fc\n.set _FUN_8c02d8fc, _FUN_8c02d8fc_def\n");
//@unit 8c02d930
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02d930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d930";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  
  bVar1 = *(int *)(unsigned)(ar4 + 0x14) != 0;
  if (bVar1) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    *(undefined4 *)(unsigned)(ar4 + 8) = 1;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02d930\n.set _FUN_8c02d930, _FUN_8c02d930_def\n");
//@unit 8c02d944
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02d944_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d944";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((0 < ar5) && (ain0 = 0, *(int *)(unsigned)(ar4 + 0x14) != 0)) {
    iVar1 = *(int *)(unsigned)(ar4 + 0xc) - *(int *)(unsigned)(ar4 + 4);
    if ((ar5 < 5) && (-1 < ar5)) {
                    
      switch((uint)ar5) {
      case 1:
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1,2,ar6,ar7));
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        break;
      case 2:
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7));
        break;
      case 3:
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7));
        break;
      case 4:
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *ar4 = 1;
    }
    ain0 = *(int *)(unsigned)(ar4 + 0xc) - iVar1;
    *(int *)(unsigned)(ar4 + 4) = ain0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c02d944\n.set _FUN_8c02d944, _FUN_8c02d944_def\n");
//@unit 8c02d9f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c02d9f4_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02d9f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d9f4\n.set _FUN_8c02d9f4, _FUN_8c02d9f4_def\n");
//@unit 8c02da0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02da0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02da0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02da0c\n.set _noop_02da0c, _noop_02da0c_def\n");
//@unit 8c02da10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02da10_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02da10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (((ar5 != 4) && (ar5 != 7)) && (ar5 != 0x13)) {
    *ar4 = '\0';
    return 0;
  }
  if (((ar4[3] == '\0') && (ar4[1] == '\0')) && ((ar4[4] == '\0' && (*ar4 == '\x01')))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02da10\n.set _FUN_8c02da10, _FUN_8c02da10_def\n");
//@unit 8c02da5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02da5c_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c02da5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d9f4(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0x16) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  *(short *)(unsigned)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(ar4 + iVar1 * 2 + 0x22) = *(undefined2 *)(unsigned)(iVar1 * 2 + ar7);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x34) = s0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = s4;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x270f;
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02da5c\n.set _FUN_8c02da5c, _FUN_8c02da5c_def\n");
//@unit 8c02db04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02db04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02db04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  bool bVar2;
  
  if (*(short *)(unsigned)(ar4 + 0x20) <= *(short *)(unsigned)(ar4 + 0x16)) {
    if ((int)*(short *)(unsigned)(ar4 + 0x14) != *(int *)(unsigned)(ar4 + 0x30)) {
      *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(ar4,ar5,ar6,ar7));
    if ((char)uVar1 == '\x01') {
      *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(int *)(unsigned)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c02db04\n.set _FUN_8c02db04, _FUN_8c02db04_def\n");
//@unit 8c02db6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02db6c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02db6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar5_00;
  int iVar4;
  
  iVar3 = ar4;
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT31((uint3)((uint)(*(undefined4 *)(fr0_ - 0x34)) >> 8) & 0xffff00,1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); noop_02da0c(ar4,ar5,ar6,ar7); });
  *(undefined2 *)(unsigned)(ar4 + 0x1e) = 0;
  if (*(char *)(unsigned)(ar4 + 0x4c) == '\x01') {
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + ar5 * 0x140);
    iVar4 = *(int *)(unsigned)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(unsigned)(ar4 + 0x10) == iVar1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), rand(iVar3,ar5_00,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01031c(uVar2,100,ar6,ar7));
      if (iVar3 < 0x32) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), rand(iVar3,ar5_00,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01031c(uVar2,100,ar6,ar7));
      if (iVar3 < 0x4b) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + 1;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02dc8c(ar4,ar5,ar6,ar7));
  }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return 0x4c;
}

__asm__(".globl _FUN_8c02db6c\n.set _FUN_8c02db6c, _FUN_8c02db6c_def\n");
//@unit 8c02dc8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02dc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02dc8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(int *)(unsigned)(ar4 + 0x48) != -1) && (*(int *)(unsigned)(ar4 + 0x48) != 4)) {
    return *(int *)(unsigned)(ar4 + 0x48);
  }
  iVar1 = (int)*(short *)(unsigned)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(short *)(unsigned)(ar4 + 0x16) < 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(short *)(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(short *)(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 0x18), *(short *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(undefined2 *)(unsigned)(ar4 + 0x1e) = 1;
    if (*(short *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(short *)(unsigned)(ar4 + 0x16) = *(short *)(unsigned)(ar4 + 0x16) + 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
    iVar1 = (int)*(short *)(unsigned)(ar4 + 0x20);
    if (iVar1 <= *(short *)(unsigned)(ar4 + 0x16)) {
      if ((int)*(short *)(unsigned)(ar4 + 0x14) == *(int *)(unsigned)(ar4 + 0x30)) {
        *(undefined2 *)(unsigned)(ar4 + 0x1e) = 0;
        iVar1 = *(short *)(unsigned)(ar4 + 0x20) + -1;
        *(short *)(unsigned)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(short *)(unsigned)(ar4 + 0x20);
        *(short *)(unsigned)(ar4 + 0x16) = *(short *)(unsigned)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02dc8c\n.set _FUN_8c02dc8c, _FUN_8c02dc8c_def\n");
//@unit 8c02de00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02de00_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02de00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + 1;
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + ar5;
    if (2 < *(int *)(unsigned)(ar4 + 0x10) - *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(int *)(unsigned)(ar4 + 0x10) - *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(int *)(unsigned)(ar4 + 0x10) == *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7));
      if (iVar2 < 0x32) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7));
      if (iVar2 < 0x4b) {
        *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02dc8c(ar4,ar6,iVar3,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02de00\n.set _FUN_8c02de00, _FUN_8c02de00_def\n");
//@unit 8c02df08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c02df08_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02df08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02df08\n.set _FUN_8c02df08, _FUN_8c02df08_def\n");
//@unit 8c02df24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02df24_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02df24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02dfa0(ar4,ar5,ar6,ar7));
  if (*ar4 == '\x01') {
    if (ar4[10] == '\x01') {
      if (ar4[0xb] == '\x05') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e38c(ar4,1,ar6,ar7));
      }
      else {
        *(int *)(unsigned)(ar4 + 4) = *(int *)(unsigned)(ar4 + 4) + 1;
      }
    }
    if ((ar4[0xb] == '\x05') && (2 < *(int *)(unsigned)(ar4 + 4))) {
      *ar4 = '\0';
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  else {
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  ar4[10] = '\0';
  return 0;
}

__asm__(".globl _FUN_8c02df24\n.set _FUN_8c02df24, _FUN_8c02df24_def\n");
//@unit 8c02dfa0
#include "../decls.h"
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
//@unit 8c02e38c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02e38c_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e38c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if ((0 < ar5) && (iVar1 = (int)*ar4, iVar1 == 1)) {
    if (ar5 == 1) {
      *(int *)(unsigned)(ar4 + 4) = *(int *)(unsigned)(ar4 + 4) + 1;
    }
    ar4[9] = '\0';
    iVar1 = 3;
    if (2 < *(int *)(unsigned)(ar4 + 4)) {
      *ar4 = '\0';
      iVar1 = 0;
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e38c\n.set _FUN_8c02e38c, _FUN_8c02e38c_def\n");
//@unit 8c02e3cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02e3cc_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e3cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (int)*ar4;
  if ((iVar1 == 1) && (iVar1 = (int)ar4[0xb], iVar1 == 5)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e38c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e3cc\n.set _FUN_8c02e3cc, _FUN_8c02e3cc_def\n");
//@unit 8c02e400
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02e400_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e400";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; (iVar2 < 5 && (*(int *)(unsigned)(iVar2 * 4 + *(int *)(unsigned)(ar4 + 0xc)) != -1));
      iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e400\n.set _FUN_8c02e400, _FUN_8c02e400_def\n");
//@unit 8c02e438
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02e438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e438";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(unsigned)(ar4 + 9) < '\x01') {
    *(char *)(unsigned)(ar4 + 9) = *(char *)(unsigned)(ar4 + 9) + '\x01';
    iVar1 = *(int *)(unsigned)(ar4 + 4) + 1;
    *(int *)(unsigned)(ar4 + 4) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e438\n.set _FUN_8c02e438, _FUN_8c02e438_def\n");
//@unit 8c02e460
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02e460_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 1;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cb24(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cadc(ar4,ar6,ar6_00,ar7));
  ar4[4] = 0;
  ar4[10] = 0;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[6] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xc) = 0;
  ar4[0xd] = 0;
  ar4[0xe] = 0;
  ar4[0xb] = 5;
  return ar4;
}

__asm__(".globl _FUN_8c02e460\n.set _FUN_8c02e460, _FUN_8c02e460_def\n");
//@unit 8c02e4cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02e4cc_def(uint *ar4,int *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e4cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *a5;
  char cVar6;
  char cVar7;
  
  puVar1 = ((undefined1 *)(fr0_ - 0x40));
  puVar3 = ((undefined1 *)(unsigned)0x8c13252c);
  iVar5 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ar4[0xd] = 0;
  if (ar6 < 0x4b0) {
    ar4[5] = 0;
  }
  uVar2 = ar4[7];
  if (((int)uVar2 < 8) && (-1 < (int)uVar2)) {
                    
    switch(uVar2) {
    default:
      break;
    case 2:
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  if (ar4[2] * ar4[3] == 0) {
    uVar2 = 0;
  }
  else {
    cVar6 = (char)ar7;
    if (*ar4 == 0) {
      if (ar4[5] != ar4[0xe]) {
        ar4[0xe] = ar4[5];
        ar4[6] = ar4[6] + 1;
        if ((ar4[5] == 0) || (cVar6 != -1)) {
          ar4[6] = 0;
        }
      }
      if (cVar6 != -1) {
        ar4[6] = 0;
        ar4[9] = 0;
      }
      ar4[0xb] = 5;
      a5 = ar5;
      if ((ar4[9] == 1) && (cVar6 == -1)) {
        ar4[8] = ar4[8] + 1;
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
        *(byte *)(unsigned)(ar4 + 0xc) = (byte)(((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
        a5 = (int *)(unsigned)0xffffffe1;
        *(char *)(unsigned)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f);
        if ((0xb4 < (int)ar4[8]) || ((char)ar4[0xc] < '\x02')) {
          ar4[8] = 0;
          *ar4 = 1;
          ar4[1] = 0x5a;
          if ((char)ar4[0xc] < '\x02') {
            ar4[0xd] = 1;
          }
          ar4[9] = 0;
          ar4[4] = ar4[4] + 1;
        }
      }
      uVar2 = ar4[6];
      if (299 < uVar2) {
        if (ar4[9] == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = (uint)cVar6;
          if (uVar2 == 0xffffffff) {
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,a5,ar6,ar7));
            *(byte *)(unsigned)(ar4 + 0xc) = (byte)(((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
            *(char *)(unsigned)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f);
            if ((char)ar4[0xc] < '\x02') {
              ar4[9] = 0;
              *ar4 = 1;
              ar4[1] = 0x5a;
            }
            else {
              ar4[9] = 1;
            }
            uVar2 = 0;
            ar4[8] = 0;
          }
        }
      }
    }
    else {
      ar4[6] = 0;
      ar4[8] = ar4[8] + 1;
      (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
      cVar7 = -(char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1f) >> 0x1f) -
              (char)((int)((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
      if (ar4[0xb] == 5) {
        if ((char)ar4[0xc] < cVar7) {
          ar4[0xb] = 3;
          ar4[8] = 0;
        }
        else {
          *(char *)(unsigned)(ar4 + 0xc) = cVar7;
        }
        if ((((cVar6 == '\0') || (cVar6 == '\x01')) || (cVar6 == '\x02')) || (cVar6 == '\x03')) {
          ar4[0xb] = 0;
        }
      }
      uVar2 = ar4[0xb];
      if (uVar2 == 0) {
        *ar4 = 0;
      }
      else if (uVar2 == 1) {
        *ar4 = 0;
      }
      else if (uVar2 == 2) {
        *ar4 = 0;
      }
      else if (uVar2 == 3) {
        if (5 < (int)ar4[8]) {
          *ar4 = 0;
        }
      }
      else if (600 < (int)ar4[8]) {
        *ar4 = 0;
        ar4[0xb] = 5;
      }
      uVar2 = *ar4;
      if (uVar2 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0xc) = 0xff;
        ar4[1] = 100;
        ar4[9] = 0;
        ar4[0xd] = 0;
        uVar2 = 0;
        ar4[8] = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02e4cc\n.set _FUN_8c02e4cc, _FUN_8c02e4cc_def\n");
//@unit 8c02e838
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02e838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125a90)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d468;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d468,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125aa0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d474;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d474,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ab0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d480;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d480,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ac0)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27d48c,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c02e838\n.set _FUN_8c02e838, _FUN_8c02e838_def\n");
//@unit 8c02e8e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02e8e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e8e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0xc) != 0) {
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
    *(int *)(unsigned)(ar4 + 0x14) = *(int *)(unsigned)(ar4 + 0x14) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x10) != 0) {
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x10) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x18) != 0) {
    *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x20) != 0) {
    *(int *)(unsigned)(ar4 + 0x20) = *(int *)(unsigned)(ar4 + 0x20) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x1c) != 0) {
    *(int *)(unsigned)(ar4 + 0x1c) = *(int *)(unsigned)(ar4 + 0x1c) + -1;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e8e0\n.set _FUN_8c02e8e0, _FUN_8c02e8e0_def\n");
//@unit 8c02e99c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02e99c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02e99c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (*ar4 < 3) {
    if (ar4[4] == 0) {
      ar4[3] = 0x1e;
    }
    if (ar4[5] == 0) {
      ar4[4] = 0x708;
      uVar1 = 0x258;
      ar4[5] = 0x258;
    }
    else {
      ar4[4] = ar4[4] + 0x708;
      uVar1 = 0x258;
      ar4[5] = ar4[5] + 0x258;
    }
  }
  else {
    uVar1 = ar4[6];
    if ((uVar1 == 0) && (uVar1 = 0, ar4[8] != 0)) {
      uVar1 = 1;
      ar4[2] = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02e99c\n.set _FUN_8c02e99c, _FUN_8c02e99c_def\n");
//@unit 8c02ea00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ea00_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ea00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 < 3) {
    if (ar4[1] == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
      *ar4 = *ar4 + 1;
      *(undefined4 *)(unsigned)0x8c27d49c = 0;
      if (2 < *ar4) {
        *(undefined4 *)(unsigned)0x8c27d49c = 1;
      }
    }
  }
  else if (ar4[2] == 1) {
    *(undefined4 *)(unsigned)0x8c27d49c = 2;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
    if (4 < *ar4) {
      return 1;
    }
    *ar4 = *ar4 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02ea00\n.set _FUN_8c02ea00, _FUN_8c02ea00_def\n");
//@unit 8c02ea98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ea98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ea98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02ea98\n.set _FUN_8c02ea98, _FUN_8c02ea98_def\n");
//@unit 8c02eaac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02eaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02eaac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02eaac\n.set _FUN_8c02eaac, _FUN_8c02eaac_def\n");
//@unit 8c02eac0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02eac0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02eac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c02eac0\n.set _FUN_8c02eac0, _FUN_8c02eac0_def\n");
//@unit 8c02eaec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_02eaec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_02eaec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_02eaec\n.set _free_if_nonnull_wrap_02eaec, _free_if_nonnull_wrap_02eaec_def\n");
//@unit 8c02eb1c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02eb1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02eb1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl _FUN_8c02eb1c\n.set _FUN_8c02eb1c, _FUN_8c02eb1c_def\n");
//@unit 8c02eb24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_02eb24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_4_02eb24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _get_field_4_02eb24\n.set _get_field_4_02eb24, _get_field_4_02eb24_def\n");
//@unit 8c02eb2c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02eb2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02eb2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar5 < 8) && (0 < ar5)) {
                    
    switch((uint)ar5) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x10) + -0x46,6,ar6,ar7));
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x14) + -0x50,4,ar6,ar7));
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x18) + -0x50,4,ar6,ar7));
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x24) + -0x3c,8,ar6,ar7));
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x20) + -0x32,0xd,ar6,ar7));
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7));
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02eb2c\n.set _FUN_8c02eb2c, _FUN_8c02eb2c_def\n");
//@unit 8c02ebfc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ebfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ebfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c4e8(ar5,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02bd9c(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0xc) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c668(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x10) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d4c4(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x18) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d478(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x14) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d410(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x24) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d3e8(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x20) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ede0(ar5,uVar2,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = uVar2;
  if (100 < *(int *)(unsigned)(ar4 + 0x14)) {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 100;
  }
  if (100 < *(int *)(unsigned)(ar4 + 0x18)) {
    *(undefined4 *)(unsigned)(ar4 + 0x18) = 100;
  }
  iVar5 = 0xc7;
  if ((0 < *(int *)(unsigned)(ar4 + 0xc)) && (*(int *)(unsigned)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      ((int *)(fr0_ - 0x38))[iVar5] = 0;
    }
    ((int *)(fr0_ - 0x38))[2] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,2,*(undefined4 *)(unsigned)(ar4 + 0x10),ar7));
    ((int *)(fr0_ - 0x38))[3] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,3,*(undefined4 *)(unsigned)(ar4 + 0x14),ar7));
    ((int *)(fr0_ - 0x38))[4] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,4,*(undefined4 *)(unsigned)(ar4 + 0x18),ar7));
    ((int *)(fr0_ - 0x38))[5] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,5,*(undefined4 *)(unsigned)(ar4 + 0x24),ar7));
    ((int *)(fr0_ - 0x38))[6] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,6,*(undefined4 *)(unsigned)(ar4 + 0x20),ar7));
    ((int *)(fr0_ - 0x38))[7] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,7,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar7));
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < ((int *)(fr0_ - 0x38))[iVar6]) {
        iVar4 = ((int *)(fr0_ - 0x38))[iVar6];
        iVar3 = iVar6 * 100 + ((int *)(fr0_ - 0x38))[iVar6];
      }
    }
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02ebfc\n.set _FUN_8c02ebfc, _FUN_8c02ebfc_def\n");
//@unit 8c02ede0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ede0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ede0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02da10))))
                    (ar4 + 0xa8,*(undefined4 *)(unsigned)(0x13c + ar4),ar6,ar7));
  return (char)uVar1 * 0x62;
}

__asm__(".globl _FUN_8c02ede0\n.set _FUN_8c02ede0, _FUN_8c02ede0_def\n");
//@unit 8c02ee20
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ee20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ee20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ebfc(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02ee20\n.set _FUN_8c02ee20, _FUN_8c02ee20_def\n");
//@unit 8c02ee48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ee48_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ee48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  iVar4 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ef60(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,iVar4,ar7));
  ar5_00 = 0x65 - *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,ar5_00,iVar4,ar7));
  if (ar6 - *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar2,ar5_00,iVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      ((ar6 - *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc)) *
                       *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 8),
                       *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 4),iVar4,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                      (uVar2,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x14),iVar4,ar7));
    iVar4 = *(int *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c02ee48\n.set _FUN_8c02ee48, _FUN_8c02ee48_def\n");
//@unit 8c02ef60
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ef60_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ef60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if ((ar5 < 8) && (1 < ar5)) {
                    
    switch((uint)ar5) {
    case 2:
      return 0;
    case 3:
      return 1;
    case 4:
      return 2;
    case 5:
      return 3;
    case 6:
      return 4;
    case 7:
      return 5;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c02ef60\n.set _FUN_8c02ef60, _FUN_8c02ef60_def\n");
//@unit 8c02efbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02efbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02efbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ad0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d4a0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d4a0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ae0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d4ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d4ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125af0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d4b8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d4b8,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125b00)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27d4c4,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c02efbc\n.set _FUN_8c02efbc, _FUN_8c02efbc_def\n");
//@unit 8c02f064
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02f064_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f064";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  *ar4 = ((undefined1 *)(unsigned)0x8c129c70);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eb1c(ar4 + 0x11,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7));
  ar4[1] = 0;
  ar4[0x1b] = 0;
  ar4[3] = 0;
  ar4[0xf] = 2;
  ar4[4] = 0;
  ar4[9] = 0;
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[5] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x91) = 0;
  ar4[0x10] = 0;
  ar4[0x25] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x26) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x99) = 0;
  if (cVar1 == '\0') {
    ar4[10] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
    ar4[0x1c] = 0xc7c35000;
    ar4[0x1d] = 0xc7c35000;
    ar4[0x1e] = 0xc7c35000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x88c7c35000;
    *(undefined8 *)(unsigned)(ar4 + 0x1d) = 0x88c7c35000;
    *(undefined8 *)(unsigned)(ar4 + 0x1e) = 0x88c7c35000;
  }
  ar4[0x22] = 0;
  ar4[0x23] = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x21) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x85) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x87) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x86) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined1 *)(unsigned)((int)ar4 + 0x83) = 4;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)(unsigned)((int)ar4 + 0x9b) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02f064\n.set _FUN_8c02f064, _FUN_8c02f064_def\n");
//@unit 8c02f1b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_129c70_m0_02f1b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129c70_m0_02f1b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129c70);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 10,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_129c70_m0_02f1b8\n.set _Class_129c70_m0_02f1b8, _Class_129c70_m0_02f1b8_def\n");
//@unit 8c02f20c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f20c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f20c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ee20(ar4 + 0x44,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02eb24(ar4 + 0x44,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f298(ar4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f2c8(ar4,uVar1,ar6,ar7));
  *(undefined1 *)(unsigned)(0x9b + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02f20c\n.set _FUN_8c02f20c, _FUN_8c02f20c_def\n");
//@unit 8c02f290
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02f290_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02f290";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02f290\n.set _noop_02f290, _noop_02f290_def\n");
//@unit 8c02f294
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02f294_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02f294";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02f294\n.set _noop_02f294, _noop_02f294_def\n");
//@unit 8c02f298
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02f298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f298";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 5;
  if (*(int *)(unsigned)(ar4 + 0x10) < 5) {
    *(undefined4 *)(unsigned)(ar4 + *(int *)(unsigned)(ar4 + 0x10) * 4 + 0x14) = ar5;
    iVar1 = *(int *)(unsigned)(ar4 + 0x10) + 1;
    *(int *)(unsigned)(ar4 + 0x10) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f298\n.set _FUN_8c02f298, _FUN_8c02f298_def\n");
//@unit 8c02f2c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f2c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f2c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02f2c0\n.set _FUN_8c02f2c0, _FUN_8c02f2c0_def\n");
//@unit 8c02f2c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f2c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f2c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(unsigned)(0x91 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f3ac(ar4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 4) == 8) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 8;
  }
  if ((*(int *)(unsigned)(ar4 + 0x38) == 2) || (*(int *)(unsigned)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 4) = uVar2;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
  }
  else if (*(int *)(unsigned)(ar4 + 0x38) == 3) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 8) < iVar3) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 8) = uVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 4) != iVar3) {
        *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar1;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 4) == 8) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 8;
  }
  return *(undefined4 *)(unsigned)(ar4 + 4);
}

__asm__(".globl _FUN_8c02f2c8\n.set _FUN_8c02f2c8, _FUN_8c02f2c8_def\n");
//@unit 8c02f3ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02f3ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f3ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x2710;
  for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar4 + 0x10); iVar2 = iVar2 + 1) {
    if ((*(int *)(unsigned)(ar4 + iVar2 * 4 + 0x14) < iVar1) && (*(int *)(unsigned)(ar4 + iVar2 * 4 + 0x14) != 0)) {
      iVar1 = *(int *)(unsigned)(ar4 + iVar2 * 4 + 0x14);
    }
  }
  if (iVar1 == 0x2710) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f3ac\n.set _FUN_8c02f3ac, _FUN_8c02f3ac_def\n");
//@unit 8c02f404
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f404";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x38) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c02f404\n.set _FUN_8c02f404, _FUN_8c02f404_def\n");
//@unit 8c02f40c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_02f40c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_02f40c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_02f40c\n.set _ret_const_1_02f40c, _ret_const_1_02f40c_def\n");
//@unit 8c02f414
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f414_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f414";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (((*(int *)(unsigned)(ar4 + 0x6c) != 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7)),
      iVar1 != 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8)))))
                        (*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7)), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02f414\n.set _FUN_8c02f414, _FUN_8c02f414_def\n");
//@unit 8c02f46c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_6c_02f46c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_6c_02f46c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x6c);
}

__asm__(".globl _get_field_6c_02f46c\n.set _get_field_6c_02f46c, _get_field_6c_02f46c_def\n");
//@unit 8c02f474
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f474_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  undefined4 *a6;
  uint in_fr1 = 0;
  double dVar5;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  double dVar6;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_ctor_zero(((uint *)(fr0_ - 0x30)),ar5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr15 = 1e+07;
    ((uint *)(fr0_ - 0x30))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x30))[3] = 0;
    ((uint *)(fr0_ - 0x30))[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x30))[2] = 0;
  ((uint *)(fr0_ - 0x30))[1] = 0;
  if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x40)),ar5_00,ar6_00,ar7_00));
    if (cVar9 == '\0') {
      in_fr15 = F32HI(dVar5);
    }
    (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)(unsigned)0x0; iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,ar6_00,ar7_00)),
      (int)a6 < iVar2; a6 = (undefined4 *)(unsigned)((int)a6 + 1)) {
    uVar3 = ar7;
    ar6_00 = a6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 116)), get_field_6c_02f46c(uVar1,uVar3,ar6_00,ar7_00));
    if (iVar2 != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(*ar6,uVar3,ar6_00,ar7_00); });
      uVar3 = ar7;
      ar6_00 = a6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c02f670(uVar1,uVar3,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x50)),((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_assign(((uint *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x70)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
      if (cVar8 == '\0') {
        bVar7 = F32HI(dVar5) < in_fr15;
      }
      else {
        bVar7 = dVar5 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar7) {
        (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
        dVar6 = dVar5;
        if (cVar9 == '\0') {
          dVar6 = (double)(D2U(dVar5) >> 0x20);
        }
        dVar5 = (double)(D2U(dVar6) & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 116)), Vec3_length_sq(((uint *)(fr0_ - 0x30)),uVar3,ar6_00,ar7_00));
          if (cVar9 == '\0') {
            in_fr15 = F32HI(dVar5);
          }
          ar6_00 = a6;
          uVar4 = (vsp = ((unsigned long)(fr0_ - 116)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 116)), Vec3_dtor(((uint *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  return uVar4;
}

__asm__(".globl _FUN_8c02f474\n.set _FUN_8c02f474, _FUN_8c02f474_def\n");
//@unit 8c02f670
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f670_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f670";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x30,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c02f670\n.set _FUN_8c02f670, _FUN_8c02f670_def\n");
//@unit 8c02f694
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f694_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 *a6;
  double in_dr0 = 0;
  double dVar4;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  if (cVar7 == '\0') {
    in_fr15 = 1e+07;
  }
  if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),ar5_00,ar6_00,ar7_00));
    if (cVar7 == '\0') {
      in_fr15 = F32HI(in_dr0);
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7_00));
    uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)(unsigned)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,ar6_00,ar7_00)),
      (int)a6 < iVar1; a6 = (undefined4 *)(unsigned)((int)a6 + 1)) {
    uVar2 = ar7;
    ar6_00 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,ar6_00,ar7_00));
    if ((*(int *)(fr0_ + 0x00000000)) == iVar1) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*ar6,uVar2,ar6_00,ar7_00); });
      uVar2 = ar7;
      ar6_00 = a6;
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(ar4_00,uVar2,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr0) < in_fr15;
      }
      else {
        bVar5 = in_dr0 < CONCAT44D(in_fr14,in_fr15);
      }
      if (bVar5) {
        (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
        dVar4 = in_dr0;
        if (cVar7 == '\0') {
          dVar4 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        in_dr0 = (double)(D2U(dVar4) & 0xffffffff);
        if (SUB84(dVar4,0) != 0.0) {
          (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7_00));
          if (cVar7 == '\0') {
            in_fr15 = F32HI(in_dr0);
          }
          ar6_00 = a6;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,a6,ar7_00));
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c02f694\n.set _FUN_8c02f694, _FUN_8c02f694_def\n");
//@unit 8c02f878
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1b_02f878_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1b_02f878";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x1b;
}

__asm__(".globl _ret_const_1b_02f878\n.set _ret_const_1b_02f878, _ret_const_1b_02f878_def\n");
//@unit 8c02f880
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02f880_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f880";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 a7;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fr1 = 0;
  double dVar7;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  double dVar8;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 0;
  puVar3 = ar6;
  a7 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((uint *)(fr0_ - 0x34)),ar5,ar6,ar7));
  if (cVar11 == '\0') {
    in_fr15 = 1e+07;
  }
  iVar4 = 0;
  if (cVar11 == '\0') {
    ((uint *)(fr0_ - 0x34))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x34))[3] = 0;
    ((uint *)(fr0_ - 0x34))[0] = in_fr1;
  }
  dVar7 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x34))[2] = 0;
  ((uint *)(fr0_ - 0x34))[1] = 0;
  (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7));
  for (puVar6 = (undefined4 *)(unsigned)0x0; uVar2 = ar7,
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7)), (int)puVar6 < iVar1;
      puVar6 = (undefined4 *)(unsigned)((int)puVar6 + 1)) {
    uVar2 = ar7;
    puVar3 = puVar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,puVar3,a7));
    if ((*(int *)(fr0_ + 0x00000000)) == iVar1) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb4))))(iVar1,uVar2,puVar3,a7));
      if (iVar1 == 1) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb8))))(iVar1,uVar2,puVar3,a7));
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  if ((*(short *)(fr0_ + 0x00000004)) < iVar4) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar2,puVar3,a7); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),uVar2,puVar3,a7));
      if (cVar11 == '\0') {
        in_fr15 = F32HI(dVar7);
      }
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,puVar3,a7));
      uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    }
    for (puVar6 = (undefined4 *)(unsigned)0x0; iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7)),
        (int)puVar6 < iVar4; puVar6 = (undefined4 *)(unsigned)((int)puVar6 + 1)) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x114))))(iVar4,uVar2,puVar3,a7));
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x114))))(iVar4,uVar2,puVar3,a7));
      if ((*(int *)(fr0_ + 0x00000000)) == iVar4) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0xb4))))(iVar4,uVar2,puVar3,a7));
        if (iVar4 == 1) {
          uVar2 = ar7;
          puVar3 = puVar6;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0xb8))))(iVar4,uVar2,puVar3,a7));
          if (iVar4 == 0) {
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*ar6,uVar2,puVar3,a7); });
            uVar2 = ar7;
            puVar3 = puVar6;
            ar4_00 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(ar4_00,uVar2,puVar3,a7); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),puVar3,a7); });
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((uint *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,puVar3,a7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
            if (cVar10 == '\0') {
              bVar9 = F32HI(dVar7) < in_fr15;
            }
            else {
              bVar9 = dVar7 < CONCAT44D(in_fr14,in_fr15);
            }
            if (bVar9) {
              (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
              dVar8 = dVar7;
              if (cVar11 == '\0') {
                dVar8 = (double)(D2U(dVar7) >> 0x20);
              }
              dVar7 = (double)(D2U(dVar8) & 0xffffffff);
              if (SUB84(dVar8,0) != 0.0) {
                (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
                if (cVar11 == '\0') {
                  in_fr15 = F32HI(dVar7);
                }
                puVar3 = puVar6;
                uVar5 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
              }
            }
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((uint *)(fr0_ - 0x34)),0xffffffff,puVar3,a7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((uint *)(fr0_ - 0x34)),0xffffffff,puVar3,a7));
    uVar5 = 0;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c02f880\n.set _FUN_8c02f880, _FUN_8c02f880_def\n");
//@unit 8c02fc8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02fc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fc8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  
  bVar1 = *(int *)(unsigned)(ar4 + 0x6c) != 0;
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02fc8c\n.set _FUN_8c02fc8c, _FUN_8c02fc8c_def\n");
//@unit 8c02fcc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02fcc4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fcc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  float *ar6_00;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c1011b0(*(undefined4 *)(unsigned)(ar5[6] + 0x7cc),ar5,ar6,ar7));
  if ((ushort)uVar1 < 5) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c02f670(*ar5,ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x34)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    ar6_00 = &(*(float *)(fr0_ - 0x3c));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c256294(0,((undefined1 *)(fr0_ - 0x14)),ar6_00,ar7));
    if (cVar5 == '\0') {
      fVar3 = 150.0;
      fVar2 = (*(float *)(fr0_ - 0x3c));
    }
    else {
      fVar2 = 150.0;
      fVar3 = 500.0;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      if (cVar5 == '\0') {
        fVar2 = 500.0;
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = 500.0;
        fVar2 = 80.0;
      }
      if (cVar4 == '\0' && (*(float *)(fr0_ - 0x3c)) < fVar2) {
        if (cVar5 == '\0') {
          fVar3 = 80.0;
          fVar2 = (*(float *)(fr0_ - 0x38));
        }
        else {
          fVar2 = 80.0;
          fVar3 = 400.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
          if (cVar5 == '\0') {
            fVar2 = 400.0;
          }
          else {
            (*(float *)(fr0_ - 0x38)) = 400.0;
            fVar2 = 1.82169e-43;
          }
          if (cVar4 == '\0' && (*(float *)(fr0_ - 0x38)) < fVar2) {
            (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
            return 1;
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return (uint)(*(char *)(unsigned)(ar4 + 0x82) == '\x01');
}

__asm__(".globl _FUN_8c02fcc4\n.set _FUN_8c02fcc4, _FUN_8c02fcc4_def\n");
//@unit 8c02fdd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
double * FUN_8c02fdd8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fdd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 in_fr3 = 0;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  a7 = &(*(float *)(fr0_ - 0x18));
  a6 = &(*(float *)(fr0_ - 0x14));
  a5 = ((undefined1 *)(fr0_ - 0x10));
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  if (cVar9 == '\0') {
    dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),in_fr3);
    dVar3 = CONCAT44D(0x3dcccccd,(*(float *)(fr0_ - 0x14)));
  }
  else {
    dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
    dVar3 = 8.15358646777176e-312;
  }
  if (cVar8 == '\0') {
    fVar4 = F32HI(dVar3);
    fVar2 = F32LO(dVar3) * fVar4;
    dVar3 = CONCAT44D(fVar4,fVar2);
    dVar6 = CONCAT44D(F32HI(dVar6) - fVar2,SUB84(dVar6,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
    dVar6 = dVar6 - dVar3;
  }
  fVar2 = F32HI(dVar6);
  (*(float *)(fr0_ - 0x18)) = fVar2;
  if (cVar9 != '\0') {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar6,0);
    (*(float *)(fr0_ - 0x14)) = fVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
  uVar5 = SUB84(dVar6,0);
  fVar2 = F32HI(dVar3);
  if (cVar9 == '\0') {
    dVar3 = 4.14452302922905e-317;
    (*(float *)(fr0_ - 0x1c)) = fVar2;
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar3,0);
    (*(float *)(fr0_ - 0x18)) = fVar2;
  }
  pdVar1 = (double *)(unsigned)0x8;
  fVar2 = (*(float *)(fr0_ - 0x1c));
  fVar4 = (*(float *)(fr0_ - 0x18));
  if (cVar9 == '\0') {
    fVar2 = F32LO(dVar3);
    fVar4 = (*(float *)(fr0_ - 0x1c));
  }
  if (fVar2 != fVar4) {
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),uVar5);
      dVar3 = CONCAT44D(0x42c80000,fVar4);
    }
    else {
      dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      dVar3 = 2.0000004975590855;
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(F32HI(dVar6) *
                               (F32LO(dVar3) / F32HI(dVar3)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(0x40000000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      dVar3 = 1.6514225348597613e-308;
    }
    if (cVar8 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
      dVar6 = CONCAT44D(F32HI(dVar6) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(unsigned)(ar4 + 0x2c);
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(dVar3) < F32HI(dVar6);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x180))))(ar5,a5,a6,a7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar6,0));
        dVar3 = CONCAT44D(0x42c80000,(int)(D2U(dVar3) >> 0x20));
      }
      else {
        dVar6 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
        dVar3 = 2.0000004975590855;
      }
      if (cVar8 == '\0') {
        fVar4 = F32HI(dVar3);
        fVar2 = F32LO(dVar3) / fVar4;
        dVar3 = CONCAT44D(fVar4,fVar2);
        dVar6 = CONCAT44D(F32HI(dVar6) * fVar2,SUB84(dVar6,0));
      }
      else {
        dVar3 = dVar3 / dVar3;
        dVar6 = dVar6 * dVar3;
      }
      fVar2 = F32LO(dVar3);
      if (cVar9 == '\0') {
        fVar2 = (*(float *)(fr0_ - 0x14));
      }
      pdVar1 = (double *)(unsigned)((undefined4 *)(unsigned)0x8c02febc);
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(0x40000000,fVar2);
      }
      else {
        dVar3 = 1.6514225348597613e-308;
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) -
                                 F32LO(dVar3) / F32HI(dVar3),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c) = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c) = dVar6;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _FUN_8c02fdd8\n.set _FUN_8c02fdd8, _FUN_8c02fdd8_def\n");
//@unit 8c02fec0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02fec0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02fec0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02fec0\n.set _ret_const_0_02fec0, _ret_const_0_02fec0_def\n");
//@unit 8c02fec8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02fec8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02fec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02fec8\n.set _noop_02fec8, _noop_02fec8_def\n");
//@unit 8c02fecc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02fecc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02fecc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02fecc\n.set _noop_02fecc, _noop_02fecc_def\n");
//@unit 8c02fed0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02fed0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fed0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _FUN_8c02fed0\n.set _FUN_8c02fed0, _FUN_8c02fed0_def\n");
//@unit 8c02feec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02feec_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02feec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *(undefined4 *)(unsigned)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c02feec\n.set _FUN_8c02feec, _FUN_8c02feec_def\n");
//@unit 8c02ff08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ff08_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ff08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _FUN_8c02ff08\n.set _FUN_8c02ff08, _FUN_8c02ff08_def\n");
//@unit 8c02ff24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02ff24_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ff24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *(undefined4 *)(unsigned)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c02ff24\n.set _FUN_8c02ff24, _FUN_8c02ff24_def\n");
//@unit 8c02ff40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c02ff40_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ff40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d44(ar4 + 8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02ff40\n.set _FUN_8c02ff40, _FUN_8c02ff40_def\n");
//@unit 8c02ff6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c02ff6c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ff6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129c24));
  return ar4;
}

__asm__(".globl _FUN_8c02ff6c\n.set _FUN_8c02ff6c, _FUN_8c02ff6c_def\n");
//@unit 8c02ff90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_129c24_m0_02ff90_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129c24_m0_02ff90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129c24);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_129c24_m0_02ff90\n.set _Class_129c24_m0_02ff90, _Class_129c24_m0_02ff90_def\n");
//@unit 8c02ffd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_02ffd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_02ffd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_02ffd8\n.set _noop_02ffd8, _noop_02ffd8_def\n");
//@unit 8c02ffdc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02ffdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02ffdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02ffdc\n.set _ret_const_0_02ffdc, _ret_const_0_02ffdc_def\n");
//@unit 8c02ffe4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_02ffe4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_02ffe4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_02ffe4\n.set _ret_const_0_02ffe4, _ret_const_0_02ffe4_def\n");
//@unit 8c02ffec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ffec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ffec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b10),ar5,ar6,ar7));
  uVar3 = 0x8c27d4d0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d4d0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b20),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27d4dc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d4dc,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b30),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27d4e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d4e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b40),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d4f4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125b50) = CONCAT44((*(undefined1 *)(unsigned)0x8c125b54),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125b50) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c02ffec\n.set _FUN_8c02ffec, _FUN_8c02ffec_def\n");
