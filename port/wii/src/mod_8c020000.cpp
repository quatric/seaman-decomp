//@unit 8c02000c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>* 
FUN_8c02000c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02000c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(0xd8,ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x200c, (unsigned)puVar1, ar5, 0); }
  if (puVar1 == (le<undefined4>* )(unsigned)0x0) {
    puVar1 = (le<undefined4>* )(unsigned)0x0;
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

__asm__(".globl FUN_8c02000c\n.set FUN_8c02000c, FUN_8c02000c_def\n");

}
//@unit 8c02009c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02009c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02009c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (le<int>* )(unsigned)(uint)ar4[8]; ar5_00[1] != 0; ar5_00 = (le<int>* )(unsigned)ar5_00[1]) {
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

__asm__(".globl FUN_8c02009c\n.set FUN_8c02009c, FUN_8c02009c_def\n");

}
//@unit 8c020148
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020148");
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
                                (*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 0x16034 + 0x58),iVar3,ar6,ar7)),
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
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1f3952(*(le<undefined4>* )(unsigned)(ar4 + 0x58),ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl FUN_8c020148\n.set FUN_8c020148, FUN_8c020148_def\n");

}
//@unit 8c020258
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020258");
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

__asm__(".globl FUN_8c020258\n.set FUN_8c020258, FUN_8c020258_def\n");

}
//@unit 8c0202c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0202c0_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0202c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  ar5[2] = 0;
  *ar4 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5 + 4,ar6,ar7); });
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

__asm__(".globl FUN_8c0202c0\n.set FUN_8c0202c0, FUN_8c0202c0_def\n");

}
//@unit 8c02041c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02041c_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02041c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(le<undefined4>* )(unsigned)(ar5 + 8) = 0;
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

__asm__(".globl FUN_8c02041c\n.set FUN_8c02041c, FUN_8c02041c_def\n");

}
//@unit 8c02049c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02049c_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02049c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<int>* piVar3;
  
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
  ({ unsigned long t0_ = (unsigned long)(ar5 + 0xc); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 9,ar5,piVar3));
  return uVar2;
}

__asm__(".globl FUN_8c02049c\n.set FUN_8c02049c, FUN_8c02049c_def\n");

}
//@unit 8c02051c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02051c");
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
      ar6 = *(le<int>* )(unsigned)(ar6_00 + 4);
      iVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    } while (iVar1 != 1);
  }
  return ar6_00;
}

__asm__(".globl FUN_8c02051c\n.set FUN_8c02051c, FUN_8c02051c_def\n");

}
//@unit 8c020588
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c020588_def(undefined4 ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c020588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  le<int>* ar6_00;
  
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

__asm__(".globl FUN_8c020588\n.set FUN_8c020588, FUN_8c020588_def\n");

}
//@unit 8c0205e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0205e8_def(undefined4 ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0205e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*ar5 == 0) {
    *ar5 = ar6;
    return 0;
  }
  iVar1 = *ar5;
  *(le<int>* )(unsigned)(ar6 + 4) = iVar1;
  *ar5 = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c0205e8\n.set FUN_8c0205e8, FUN_8c0205e8_def\n");

}
//@unit 8c020600
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c020600_def(undefined4 ar4,undefined4 ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c020600");
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
    iVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); });
    if (iVar1 == 1) {
      *ar6 = *(le<int>* )(unsigned)(ar6_00 + 4);
    }
    else if (*(le<int>* )(unsigned)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(le<int>* )(unsigned)(ar6_00 + 4);
      while (iVar2 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020588(ar4,ar5,ar6_00,ar7); }), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(le<int>* )(unsigned)(ar6_00 + 4);
      }
      *(le<int>* )(unsigned)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}

__asm__(".globl FUN_8c020600\n.set FUN_8c020600, FUN_8c020600_def\n");

}
//@unit 8c0206b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0206b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    iVar1 = *(le<int>* )(unsigned)(ar5 + iVar2 * 4 + 0x58);
    if (iVar1 == ar6) {
      return iVar1;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0x20;
    }
    if (*(le<int>* )(unsigned)(ar5 + iVar2 * 4 + 0x58) == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(le<int>* )(unsigned)(ar5 + iVar2 * 4 + 0x58) = ar6;
  return 0x58;
}

__asm__(".globl FUN_8c0206b8\n.set FUN_8c0206b8, FUN_8c0206b8_def\n");

}
//@unit 8c020714
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020714");
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
        if (*(le<int>* )(unsigned)(ar5 + iVar1 * 4 + 0x58) != 0) break;
        iVar1 = iVar1 + 1;
      }
      return 1;
    }
    if (*(le<int>* )(unsigned)(ar5 + iVar1 * 4 + 0x58) == ar6) {
      *(le<undefined4>* )(unsigned)(ar5 + iVar1 * 4 + 0x58) = 0;
      goto LAB_8c02074c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl FUN_8c020714\n.set FUN_8c020714, FUN_8c020714_def\n");

}
//@unit 8c02077c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02077c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  le<undefined4>*  s4 = (le<undefined4>* )(unsigned long)*(le<unsigned>* )(vsp + 4);
  le<undefined4>*  s8 = (le<undefined4>* )(unsigned long)*(le<unsigned>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)s0, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(ar4,ar5,*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar7));
  if (iVar1 == 0) {
    iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)s0, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(ar4,ar5,*(le<undefined4>* )(unsigned)(ar4 + 0x24),ar7));
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)s0, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02000c(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
          *(le<undefined4>* )(unsigned)(iVar1 + 8) = *s4;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x20,iVar1,s0));
        }
        else {
          iVar1 = ({ unsigned long t0_ = (unsigned long)(s12); unsigned long t1_ = (unsigned long)(s16); unsigned long t2_ = (unsigned long)(s20); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c01ffa0(ar4,ar5,ar7,s0); });
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
        *s4 = *(le<undefined4>* )(unsigned)(iVar1 + 8);
        *s8 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(s20); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,ar5,ar4 + 0x24,ar7); });
      uVar2 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,iVar1,s20,uVar2));
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c02077c\n.set FUN_8c02077c, FUN_8c02077c_def\n");

}
//@unit 8c0208ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c0208ec_def(undefined4 ar4,int ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0208ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = *(le<unsigned>* )(fr0_ + 0), vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(ar4,ar5,*ar6,ar7));
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = *(le<unsigned>* )(fr0_ + 0), vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c020600(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020714(ar4,iVar1,s4,ar7_00));
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = *(le<unsigned>* )(fr0_ + 0), vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c020600(ar4,ar5,ar6,ar7));
      if (*(le<int>* )(unsigned)(iVar1 + 8) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(le<undefined4>* )(unsigned)(iVar1 + 8),ar5,ar6,ar7));
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(iVar1,ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c0208ec\n.set FUN_8c0208ec, FUN_8c0208ec_def\n");

}
//@unit 8c0209b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0209b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c0209b0\n.set FUN_8c0209b0, FUN_8c0209b0_def\n");

}
//@unit 8c0209fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0209fc");
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

__asm__(".globl FUN_8c0209fc\n.set FUN_8c0209fc, FUN_8c0209fc_def\n");

}
//@unit 8c020a70
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020a70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020a70\n.set FUN_8c020a70, FUN_8c020a70_def\n");

}
//@unit 8c020aa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020aa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,2,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020aa8\n.set FUN_8c020aa8, FUN_8c020aa8_def\n");

}
//@unit 8c020af4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020af4");
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

__asm__(".globl FUN_8c020af4\n.set FUN_8c020af4, FUN_8c020af4_def\n");

}
//@unit 8c020b68
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020b68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,2,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020b68\n.set FUN_8c020b68, FUN_8c020b68_def\n");

}
//@unit 8c020ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020ba0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,5,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020ba0\n.set FUN_8c020ba0, FUN_8c020ba0_def\n");

}
//@unit 8c020bec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020bec");
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

__asm__(".globl FUN_8c020bec\n.set FUN_8c020bec, FUN_8c020bec_def\n");

}
//@unit 8c020c60
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,5,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020c60\n.set FUN_8c020c60, FUN_8c020c60_def\n");

}
//@unit 8c020c98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020c98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,8,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020c98\n.set FUN_8c020c98, FUN_8c020c98_def\n");

}
//@unit 8c020ce4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020ce4");
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

__asm__(".globl FUN_8c020ce4\n.set FUN_8c020ce4, FUN_8c020ce4_def\n");

}
//@unit 8c020d58
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020d58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,8,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020d58\n.set FUN_8c020d58, FUN_8c020d58_def\n");

}
//@unit 8c020d90
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020d90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar4 + 0xc); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xb,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020d90\n.set FUN_8c020d90, FUN_8c020d90_def\n");

}
//@unit 8c020ddc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020ddc");
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

__asm__(".globl FUN_8c020ddc\n.set FUN_8c020ddc, FUN_8c020ddc_def\n");

}
//@unit 8c020e48
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020e48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xb,ar4 + 0x28,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020e48\n.set FUN_8c020e48, FUN_8c020e48_def\n");

}
//@unit 8c020e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020e80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar5;
  (*(le<undefined4>* )(fr0_ - 0x1c)) = ar7;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xc,*(le<undefined4>* )(unsigned)(ar4 + 0x2c),ar5); });
  if (iVar1 == 1) {
    (*(le<int>* )(fr0_ - 0x18)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020f5c(ar4,ar5,ar6,ar7_00));
  }
  return iVar1;
}

__asm__(".globl FUN_8c020e80\n.set FUN_8c020e80, FUN_8c020e80_def\n");

}
//@unit 8c020ef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020ef0");
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

__asm__(".globl FUN_8c020ef0\n.set FUN_8c020ef0, FUN_8c020ef0_def\n");

}
//@unit 8c020f5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020f5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xc,ar4 + 0x2c,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020f5c\n.set FUN_8c020f5c, FUN_8c020f5c_def\n");

}
//@unit 8c020f90
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c020f90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<undefined4>* )(fr0_ - 0x1c)) = ar7;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xe,*(le<undefined4>* )(unsigned)(ar4 + 0x2c),ar5); });
  if (iVar1 == 1) {
    (*(le<int>* )(fr0_ - 0x18)) = iVar1;
    ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c0208ec(ar4,0xe,ar4 + 0x2c,ar5); });
  }
  return iVar1;
}

__asm__(".globl FUN_8c020f90\n.set FUN_8c020f90, FUN_8c020f90_def\n");

}
//@unit 8c02100c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02100c");
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

__asm__(".globl FUN_8c02100c\n.set FUN_8c02100c, FUN_8c02100c_def\n");

}
//@unit 8c021078
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_CDCGD_ReadPVMFileReq_021082");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(((le<undefined4>* )(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(s0); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); FUN_8c02077c(ar4,0x10,ar6_00,ar5); });
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c23a29c(((le<undefined4>* )(fr0_ - 0x1c))[0],ar7,ar6_00,ar7_00));
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

__asm__(".globl s_CDCGD_ReadPVMFileReq_021082\n.set s_CDCGD_ReadPVMFileReq_021082, s_CDCGD_ReadPVMFileReq_021082_def\n");

}
//@unit 8c021138
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021138");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021138\n.set FUN_8c021138, FUN_8c021138_def\n");

}
//@unit 8c021170
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021170");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(
                     (*(le<undefined4>* )(fr0_ + 0x00000004))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0xf,*(le<undefined4>* )(unsigned)(ar4 + 0x30),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021170\n.set FUN_8c021170, FUN_8c021170_def\n");

}
//@unit 8c0211b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("file_load_to_buffer");
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
    iVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); unsigned long t1_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000004))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c021170(ar4,ar5,ar6,ar7); });
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

__asm__(".globl file_load_to_buffer\n.set file_load_to_buffer, file_load_to_buffer_def\n");

}
//@unit 8c021234
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021234");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0xf,ar4 + 0x30,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021234\n.set FUN_8c021234, FUN_8c021234_def\n");

}
//@unit 8c02126c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02126c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); unsigned long t4_ = (unsigned long)(
                     (*(le<undefined4>* )(fr0_ + 0x00000004))); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000008))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0x10,*(le<undefined4>* )(unsigned)(ar4 + 0x34),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c02126c\n.set FUN_8c02126c, FUN_8c02126c_def\n");

}
//@unit 8c0212b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("file_load_into_object_buffer");
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

__asm__(".globl file_load_into_object_buffer\n.set file_load_into_object_buffer, file_load_into_object_buffer_def\n");

}
//@unit 8c021338
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021338\n.set FUN_8c021338, FUN_8c021338_def\n");

}
//@unit 8c021370
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021370");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,0x10,*(le<undefined4>* )(unsigned)(ar4 + 0x34),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021370\n.set FUN_8c021370, FUN_8c021370_def\n");

}
//@unit 8c0213bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0213bc");
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

__asm__(".globl FUN_8c0213bc\n.set FUN_8c0213bc, FUN_8c0213bc_def\n");

}
//@unit 8c021428
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021428");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c021428\n.set FUN_8c021428, FUN_8c021428_def\n");

}
//@unit 8c02145c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02145c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02145c");
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

__asm__(".globl FUN_8c02145c\n.set FUN_8c02145c, FUN_8c02145c_def\n");

}
//@unit 8c02147c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  pack_ctor_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_ctor");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022190(ar4 + 1,ar5,ar6,ar7));
  *ar4 = 0;
  *(undefined1 *)(unsigned)(0x9ec14 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4) = 0xffffffff;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
  }
  return ar4;
}

__asm__(".globl pack_ctor\n.set pack_ctor, pack_ctor_def\n");

}
//@unit 8c0214e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0214e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_022198(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0214e0\n.set FUN_8c0214e0, FUN_8c0214e0_def\n");

}
//@unit 8c021520
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
pack_open_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_open");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

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
    iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                      (0x8c3eb334,ar7,(&(*(undefined1 *)(unsigned)0x8c12fc50)) + 0x34,
                       (int)ar4 + 0x9ec10); });
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
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

__asm__(".globl pack_open\n.set pack_open, pack_open_def\n");

}
//@unit 8c0215d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pack_close_and_flush_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_close_and_flush");
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
      if (-1 < *(le<int>* )(unsigned)(0x9ec94 + (int)ar4)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0228e4(ar4 + 1,*(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022128(ar4,0x3e8,ar6,ar7));
        *(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(le<int>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8)) {
          (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022894))))
                    (ar4 + 1,*(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8),
                     *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8),
                     *(le<int>* )(unsigned)(0x9ec10 + (int)ar4) +
                     (*(le<uint>* )(unsigned)(*(le<int>* )(unsigned)((int)ar4 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                *(le<int>* )(unsigned)(0x9ec0c + (int)ar4) + 0x20) & 0xfffffffe)));
          *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl pack_close_and_flush\n.set pack_close_and_flush, pack_close_and_flush_def\n");

}
//@unit 8c021720
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021720_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021720");
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

__asm__(".globl FUN_8c021720\n.set FUN_8c021720, FUN_8c021720_def\n");

}
//@unit 8c02174c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02174c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02174c");
  return (unsigned)sh4_interp(0x8c02174c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02174c\n.set FUN_8c02174c, FUN_8c02174c_def\n");
}
//@unit 8c02190c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02190c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02194c(ar4,1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02190c\n.set FUN_8c02190c, FUN_8c02190c_def\n");

}
//@unit 8c02192c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02192c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02194c(ar4,3,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02192c\n.set FUN_8c02192c, FUN_8c02192c_def\n");

}
//@unit 8c02194c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c02194c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02194c");
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

__asm__(".globl FUN_8c02194c\n.set FUN_8c02194c, FUN_8c02194c_def\n");

}
//@unit 8c021994
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021994");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0219dc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c021994\n.set FUN_8c021994, FUN_8c021994_def\n");

}
//@unit 8c0219b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0219b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0219dc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0219b8\n.set FUN_8c0219b8, FUN_8c0219b8_def\n");

}
//@unit 8c0219dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0219dc_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0219dc");
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

__asm__(".globl FUN_8c0219dc\n.set FUN_8c0219dc, FUN_8c0219dc_def\n");

}
//@unit 8c021a0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021a0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a30(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c021a0c\n.set FUN_8c021a0c, FUN_8c021a0c_def\n");

}
//@unit 8c021a30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a30_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021a30");
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

__asm__(".globl FUN_8c021a30\n.set FUN_8c021a30, FUN_8c021a30_def\n");

}
//@unit 8c021a60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a60_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021a60");
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

__asm__(".globl FUN_8c021a60\n.set FUN_8c021a60, FUN_8c021a60_def\n");

}
//@unit 8c021a8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021a8c_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021a8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021ad4(ar4,*ar5,ar6,ar7));
  *ar5 = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl FUN_8c021a8c\n.set FUN_8c021a8c, FUN_8c021a8c_def\n");

}
//@unit 8c021ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021ab4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021ad4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c021ab4\n.set FUN_8c021ab4, FUN_8c021ab4_def\n");

}
//@unit 8c021ad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021ad4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021ad4");
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

__asm__(".globl FUN_8c021ad4\n.set FUN_8c021ad4, FUN_8c021ad4_def\n");

}
//@unit 8c021b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pack_acquire_entry_handle_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_acquire_entry_handle");
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
        *(le<int>* )(unsigned)((int)ar4 + 0x9ec98 + ar5_00 * 8) = ar5_00;
        *(le<int>* )(unsigned)((int)ar4 + 0x9ec9c + ar5_00 * 8) = iVar1;
      }
    }
  }
  return ar5_00;
}

__asm__(".globl pack_acquire_entry_handle\n.set pack_acquire_entry_handle, pack_acquire_entry_handle_def\n");

}
//@unit 8c021bac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("pack_find_entry_by_name");
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
    if ((0x7fff < iVar2) || (*(char *)(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x9ec0c) + iVar2 * 0x28) == ((char *)(fr0_ - 0x8c))[0]) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 144)), FUN_8c021c80(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x9ec0c),((char *)(fr0_ - 0x8c)),ar6,ar7)), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl pack_find_entry_by_name\n.set pack_find_entry_by_name, pack_find_entry_by_name_def\n");

}
//@unit 8c021c80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021c80");
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

__asm__(".globl FUN_8c021c80\n.set FUN_8c021c80, FUN_8c021c80_def\n");

}
//@unit 8c021ce8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pack_release_entry_handle_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_release_entry_handle");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x9ec98 + ar5 * 8) = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c02296c(ar4 + 1,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), handle_slot_free(ar4 + 1,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl pack_release_entry_handle\n.set pack_release_entry_handle, pack_release_entry_handle_def\n");

}
//@unit 8c021d4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021d4c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021d4c");
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

__asm__(".globl FUN_8c021d4c\n.set FUN_8c021d4c, FUN_8c021d4c_def\n");

}
//@unit 8c021d90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c021d90_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c021d90");
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

__asm__(".globl FUN_8c021d90\n.set FUN_8c021d90, FUN_8c021d90_def\n");

}
//@unit 8c021e10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021e10");
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

__asm__(".globl FUN_8c021e10\n.set FUN_8c021e10, FUN_8c021e10_def\n");

}
//@unit 8c021ec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021ec8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013adc(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1 * 0x78,0xbb8,ar6,ar7));
  return -iVar1;
}

__asm__(".globl FUN_8c021ec8\n.set FUN_8c021ec8, FUN_8c021ec8_def\n");

}
//@unit 8c021f18
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c021f18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x10))); *(le<unsigned>* )((((unsigned long)(fr0_ - 16)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 16)) - 8); FUN_8c021f4c(ar4,ar5,((undefined1 *)(fr0_ - 0x8)),((undefined1 *)(fr0_ - 0xc))); });
  return uVar1;
}

__asm__(".globl FUN_8c021f18\n.set FUN_8c021f18, FUN_8c021f18_def\n");

}
//@unit 8c021f4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c021f4c_def(le<int>* ar4,int ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c021f4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<int>*  s0 = (le<int>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<ushort>* ar6_00;
  le<int>* ar7_00;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = ((le<ushort>* )(fr0_ - 0x18));
  ar7_00 = ar7;
  (*(le<int>* )(fr0_ - 0x14)) = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7));
  if ((*(le<int>* )(fr0_ - 0x14)) == 1) {
    (vsp = ((unsigned long)(fr0_ - 24)), pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00));
    return 1;
  }
  if ((*(le<int>* )(fr0_ - 0x14)) == 2) {
    return 3;
  }
  if ((*(le<int>* )(fr0_ - 0x14)) != 3) {
    return 2;
  }
  *ar6 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf0) >> 4;
  *ar7 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf00) >> 8;
  *s0 = (int)(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf000) >> 0xc;
  if ((((le<ushort>* )(fr0_ - 0x18))[0] & 0xf) < 8) {
                    
    switch(((le<ushort>* )(fr0_ - 0x18))[0] & 0xf) {
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

__asm__(".globl FUN_8c021f4c\n.set FUN_8c021f4c, FUN_8c021f4c_def\n");

}
//@unit 8c022068
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pack_find_by_name_buffered_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pack_find_by_name_buffered");
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

__asm__(".globl pack_find_by_name_buffered\n.set pack_find_by_name_buffered, pack_find_by_name_buffered_def\n");

}
//@unit 8c0220bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0220bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x9ec94 + ar4) = 0xffffffff;
  iVar1 = 0x9ec14;
  *(undefined1 *)(unsigned)(0x9ec14 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0220bc\n.set FUN_8c0220bc, FUN_8c0220bc_def\n");

}
//@unit 8c0220d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0220d4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0220d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 == 0) {
    return 0;
  }
  if (*(char *)(unsigned)(0x9ec14 + (int)ar4) == '\0') {
    return 0;
  }
  *(le<undefined4>* )(unsigned)(0x9ec94 + (int)ar4) = ar5;
  return 1;
}

__asm__(".globl FUN_8c0220d4\n.set FUN_8c0220d4, FUN_8c0220d4_def\n");

}
//@unit 8c022104
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022104_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022104");
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

__asm__(".globl FUN_8c022104\n.set FUN_8c022104, FUN_8c022104_def\n");

}
//@unit 8c022128
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022128_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022128");
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

__asm__(".globl FUN_8c022128\n.set FUN_8c022128, FUN_8c022128_def\n");

}
//@unit 8c022190
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022190");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c022190\n.set FUN_8c022190, FUN_8c022190_def\n");

}
//@unit 8c022198
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_022198");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_022198\n.set free_if_nonnull_wrap_022198, free_if_nonnull_wrap_022198_def\n");

}
//@unit 8c0221c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0221c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(le<undefined4>* )(unsigned)(iVar4 * 0x10 + ar4) = 0;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(le<undefined4>* )(unsigned)(0x2d150 + ar4 + iVar4 * 0x208e0) = 0;
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
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f7f1e(((le<int>* )(fr0_ - 0x10)),ar5,ar6_00,uVar1));
      if (((le<int>* )(fr0_ - 0x10))[0] == 0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f525453,ar5,ar6_00,uVar1));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f4e4f4d,ar5,ar6_00,uVar1));
      }
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c265f84(1,ar5,ar6_00,uVar1));
      uVar3 = 0x2d0c4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263840(2,ar4 + 0x8c,0x2d0c4,uVar1)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263840, uVar2, ar4, 0); }
      *(le<undefined4>* )(unsigned)(ar4 + 0x74) = uVar2;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263ffa(*(le<undefined4>* )(unsigned)(ar4 + 0x74),2,uVar3,uVar1));
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = 0x208c4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263840))))
                          (2,ar4 + iVar4 * 0x208e0 + 0x2d16c,0x208c4,uVar1));
        *(le<undefined4>* )(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0) = uVar2; { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263841, uVar2, iVar4, *(le<unsigned>* )(unsigned)(ar4 + 0x74)); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c4beb48, 16); dbg_dump(0x8c4beb88, 42); } }
        (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263ffa))))
                  (*(le<undefined4>* )(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0),1,uVar3,uVar1));
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0221c8\n.set FUN_8c0221c8, FUN_8c0221c8_def\n");

}
//@unit 8c022384
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022384");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688e0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c022384\n.set FUN_8c022384, FUN_8c022384_def\n");

}
//@unit 8c022398
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("aica_driver_load_manatee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  le<undefined4>* ar7_00;
  
  ar7_00 = ((le<undefined4>* )(fr0_ - 0x8));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fc98));
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0xc))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 12)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 12)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0211b8))))
                    (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), aica_driver_upload(ar4,((le<undefined4>* )(fr0_ - 0x8))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c021234(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fc98)) + 1,(&(*(undefined1 *)(unsigned)0x8c12fc98)),1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl aica_driver_load_manatee\n.set aica_driver_load_manatee, aica_driver_load_manatee_def\n");

}
//@unit 8c022404
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("aica_driver_upload");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ((le<int>* )(fr0_ - 0x10))[0] = 0;
  ar6_00 = 0;
  ar5_00 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2655f4(0,0,0,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265704(((le<int>* )(fr0_ - 0x10)),ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      ar7 = 0xffffffff;
      ar6_00 = 0;
      iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c265ea0(((le<int>* )(fr0_ - 0x10))[0],ar5,0,0xffffffff); });
      ar5_00 = ar5;
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2654f4(((le<int>* )(fr0_ - 0x10))[0],ar5,ar6_00,ar7));
        ar5_00 = ar5;
      }
    }
  }
  if (((le<int>* )(fr0_ - 0x10))[0] != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265784(((le<int>* )(fr0_ - 0x10))[0],ar5_00,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl aica_driver_upload\n.set aica_driver_upload, aica_driver_upload_def\n");

}
//@unit 8c022494
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022494");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  le<undefined4>* ar7_00;
  
  ar7_00 = ((le<undefined4>* )(fr0_ - 0x10));
  ar6_00 = ar6;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0x14))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 20)) - 8); file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c022504(ar4,((le<undefined4>* )(fr0_ - 0x10))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c021234(0x8c3eb334,ar5,ar6,1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c022494\n.set FUN_8c022494, FUN_8c022494_def\n");

}
//@unit 8c022504
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022504");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  ((le<int>* )(fr0_ - 0x10))[0] = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265704(((le<int>* )(fr0_ - 0x10)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c265ea0(((le<int>* )(fr0_ - 0x10))[0],ar5,0,0xffffffff); });
    ar5_00 = ar5;
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2669f4(((le<int>* )(fr0_ - 0x10))[0],ar5,ar6,ar7));
      ar5_00 = ar5;
    }
  }
  if (((le<int>* )(fr0_ - 0x10))[0] != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c265784(((le<int>* )(fr0_ - 0x10))[0],ar5_00,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c022504\n.set FUN_8c022504, FUN_8c022504_def\n");

}
//@unit 8c02257c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02257c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2680ec(((le<undefined4>* )(fr0_ - 0x8)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c2681d0(((le<undefined4>* )(fr0_ - 0x8))[0],0,0,ar7));
    (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c268250(((le<undefined4>* )(fr0_ - 0x8))[0],0x7f,0,ar7));
    ar7_00 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26813c(((le<undefined4>* )(fr0_ - 0x8))[0],ar5,ar6,0));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((le<undefined4>* )(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c26809c(((le<undefined4>* )(fr0_ - 0x8))[0],ar5,ar6,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c02257c\n.set FUN_8c02257c, FUN_8c02257c_def\n");

}
//@unit 8c0225f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0225f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 < 7 && (*(le<int>* )(unsigned)(uVar2 * 0x10 + ar4) != 0)); uVar2 = uVar2 + 1) {
  }
  if (uVar2 == 7) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2680ec(ar4 + uVar2 * 0x10 + 0xc,ar5,ar6,ar7));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)(uVar2 * 0x10 + ar4) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + uVar2 * 0x10 + 4) = ar5;
      *(le<undefined4>* )(unsigned)(ar4 + uVar2 * 0x10 + 8) = ar6;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0225f4\n.set FUN_8c0225f4, FUN_8c0225f4_def\n");

}
//@unit 8c022688
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022688");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(le<int>* )(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26809c(*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7));
      iVar1 = ar5 * 0x10;
      *(le<undefined4>* )(unsigned)(iVar1 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c022688\n.set FUN_8c022688, FUN_8c022688_def\n");

}
//@unit 8c0226d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0226d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022710(ar4,ar5,*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 8),ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0226d8\n.set FUN_8c0226d8, FUN_8c0226d8_def\n");

}
//@unit 8c022710
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022710");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(ar5 * 0x10 + ar4) == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c26813c))))
                      (*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 0xc),*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 4)
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

__asm__(".globl FUN_8c022710\n.set FUN_8c022710, FUN_8c022710_def\n");

}
//@unit 8c022778
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022778");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(le<int>* )(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2682bc(*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c022778\n.set FUN_8c022778, FUN_8c022778_def\n");

}
//@unit 8c0227bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0227bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(le<int>* )(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2681d0(*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0227bc\n.set FUN_8c0227bc, FUN_8c0227bc_def\n");

}
//@unit 8c022804
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(le<int>* )(unsigned)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268250(*(le<undefined4>* )(unsigned)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c022804\n.set FUN_8c022804, FUN_8c022804_def\n");

}
//@unit 8c02284c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("handle_slot_alloc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return 0xffffffff;
    }
    piVar1 = (le<int>* )(unsigned)(ar4 + iVar2 * 0x208e0 + 0x2d150);
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = 1;
  return iVar2;
}

__asm__(".globl handle_slot_alloc\n.set handle_slot_alloc, handle_slot_alloc_def\n");

}
//@unit 8c022894
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022894");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022918))))
                    (ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c022894\n.set FUN_8c022894, FUN_8c022894_def\n");

}
//@unit 8c0228e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0228e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c022918(ar4,ar4 + 0x70,ar5,0); });
  return uVar1;
}

__asm__(".globl FUN_8c0228e4\n.set FUN_8c0228e4, FUN_8c0228e4_def\n");

}
//@unit 8c022918
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022918_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c022918");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

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

__asm__(".globl FUN_8c022918\n.set FUN_8c022918, FUN_8c022918_def\n");

}
//@unit 8c02296c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02296c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229c8(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02296c\n.set FUN_8c02296c, FUN_8c02296c_def\n");

}
//@unit 8c0229a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0229a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0229c8(ar4,ar4 + 0x70,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0229a8\n.set FUN_8c0229a8, FUN_8c0229a8_def\n");

}
//@unit 8c0229c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0229c8_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0229c8");
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

__asm__(".globl FUN_8c0229c8\n.set FUN_8c0229c8, FUN_8c0229c8_def\n");

}
//@unit 8c0229ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("handle_slot_free");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  
  piVar1 = (le<int>* )(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return 0;
}

__asm__(".globl handle_slot_free\n.set handle_slot_free, handle_slot_free_def\n");

}
//@unit 8c022a1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c022a1c_def(int ar4,int ar5,le<undefined2>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022a1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<int>* ar6_00;
  le<int>* piVar3;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  *ar6 = 0;
  piVar3 = (le<int>* )(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
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
            ar6_00 = ((le<int>* )(fr0_ - 0x14));
            (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263cd8(piVar3[1],&(*(le<uint>* )(fr0_ - 0x18)),ar6_00,ar7));
            if (0 < (int)(*(le<uint>* )(fr0_ - 0x18))) {
              if ((uint)piVar3[5] < (*(le<uint>* )(fr0_ - 0x18))) {
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
            piVar3[5] = (*(le<uint>* )(fr0_ - 0x18));
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            ((le<int>* )(fr0_ - 0x14))[0] =
                 (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0101e4(((le<int>* )(fr0_ - 0x14))[0],0x1e,ar6_00,ar7));
            ((le<int>* )(fr0_ - 0x14))[0] = ((le<int>* )(fr0_ - 0x14))[0] * 5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                              ((*(le<uint>* )(fr0_ - 0x18)),((le<int>* )(fr0_ - 0x14))[0],ar6_00,ar7));
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(le<undefined2>* )(unsigned)(piVar3[4] * 2 + piVar3[2]);
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

__asm__(".globl FUN_8c022a1c\n.set FUN_8c022a1c, FUN_8c022a1c_def\n");

}
//@unit 8c022b68
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022b68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  piVar2 = (le<int>* )(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263e50(piVar2[1],0,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c022b68\n.set FUN_8c022b68, FUN_8c022b68_def\n");

}
//@unit 8c022bb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022bb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022c20(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c022bb0\n.set FUN_8c022bb0, FUN_8c022bb0_def\n");

}
//@unit 8c022bf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c022bf8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022c20(ar4,ar4 + 0x70,ar5,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c022bf8\n.set FUN_8c022bf8, FUN_8c022bf8_def\n");

}
//@unit 8c022c20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c022c20_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022c20");
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

__asm__(".globl FUN_8c022c20\n.set FUN_8c022c20, FUN_8c022c20_def\n");

}
//@unit 8c022c4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_ctor_zero_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_ctor_zero");
  return (unsigned)sh4_interp(0x8c022c4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_ctor_zero\n.set Vec3_ctor_zero, Vec3_ctor_zero_def\n");
}
//@unit 8c022c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_ctor_copy_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_ctor_copy");
  return (unsigned)sh4_interp(0x8c022c88, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_ctor_copy\n.set Vec3_ctor_copy, Vec3_ctor_copy_def\n");
}
//@unit 8c022cb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Vec3_dtor");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (*(le<unsigned>* )(unsigned)(ar4 + 0xc) = ((undefined1 *)(unsigned)0x8c129a7c), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl Vec3_dtor\n.set Vec3_dtor, Vec3_dtor_def\n");

}
//@unit 8c022ce8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_ctor_xyz_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_ctor_xyz");
  return (unsigned)sh4_interp(0x8c022ce8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_ctor_xyz\n.set Vec3_ctor_xyz, Vec3_ctor_xyz_def\n");
}
//@unit 8c022d04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022d04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022d04");
  return (unsigned)sh4_interp(0x8c022d04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022d04\n.set FUN_8c022d04, FUN_8c022d04_def\n");
}
//@unit 8c022d14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022d14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022d14");
  return (unsigned)sh4_interp(0x8c022d14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022d14\n.set FUN_8c022d14, FUN_8c022d14_def\n");
}
//@unit 8c022d3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022d3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022d3c");
  return (unsigned)sh4_interp(0x8c022d3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022d3c\n.set FUN_8c022d3c, FUN_8c022d3c_def\n");
}
//@unit 8c022dac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022dac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022dac");
  return (unsigned)sh4_interp(0x8c022dac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022dac\n.set FUN_8c022dac, FUN_8c022dac_def\n");
}
//@unit 8c022e5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022e5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022e5c");
  return (unsigned)sh4_interp(0x8c022e5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022e5c\n.set FUN_8c022e5c, FUN_8c022e5c_def\n");
}
//@unit 8c022e78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_length_sq_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_length_sq");
  return (unsigned)sh4_interp(0x8c022e78, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_length_sq\n.set Vec3_length_sq, Vec3_length_sq_def\n");
}
//@unit 8c022ec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_normalize_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_normalize");
  return (unsigned)sh4_interp(0x8c022ec0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_normalize\n.set Vec3_normalize, Vec3_normalize_def\n");
}
//@unit 8c022f54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_length_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_length");
  return (unsigned)sh4_interp(0x8c022f54, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_length\n.set Vec3_length, Vec3_length_def\n");
}
//@unit 8c022fc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c022fc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c022fc0");
  return (unsigned)sh4_interp(0x8c022fc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c022fc0\n.set FUN_8c022fc0, FUN_8c022fc0_def\n");
}
//@unit 8c023040
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023040_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023040");
  return (unsigned)sh4_interp(0x8c023040, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023040\n.set FUN_8c023040, FUN_8c023040_def\n");
}
//@unit 8c0230f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0230f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0230f0");
  return (unsigned)sh4_interp(0x8c0230f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0230f0\n.set FUN_8c0230f0, FUN_8c0230f0_def\n");
}
//@unit 8c023138
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023138_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023138");
  return (unsigned)sh4_interp(0x8c023138, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023138\n.set FUN_8c023138, FUN_8c023138_def\n");
}
//@unit 8c023180
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023180_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023180");
  return (unsigned)sh4_interp(0x8c023180, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023180\n.set FUN_8c023180, FUN_8c023180_def\n");
}
//@unit 8c0231c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0231c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0231c8");
  return (unsigned)sh4_interp(0x8c0231c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0231c8\n.set FUN_8c0231c8, FUN_8c0231c8_def\n");
}
//@unit 8c02327c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02327c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02327c");
  return (unsigned)sh4_interp(0x8c02327c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02327c\n.set FUN_8c02327c, FUN_8c02327c_def\n");
}
//@unit 8c0232e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0232e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0232e8");
  return (unsigned)sh4_interp(0x8c0232e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0232e8\n.set FUN_8c0232e8, FUN_8c0232e8_def\n");
}
//@unit 8c023334
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023334_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023334");
  return (unsigned)sh4_interp(0x8c023334, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023334\n.set FUN_8c023334, FUN_8c023334_def\n");
}
//@unit 8c023484
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023484_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023484");
  return (unsigned)sh4_interp(0x8c023484, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023484\n.set FUN_8c023484, FUN_8c023484_def\n");
}
//@unit 8c023570
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023570_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023570");
  return (unsigned)sh4_interp(0x8c023570, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023570\n.set FUN_8c023570, FUN_8c023570_def\n");
}
//@unit 8c023668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023668");
  return (unsigned)sh4_interp(0x8c023668, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023668\n.set FUN_8c023668, FUN_8c023668_def\n");
}
//@unit 8c02374c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02374c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02374c");
  return (unsigned)sh4_interp(0x8c02374c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02374c\n.set FUN_8c02374c, FUN_8c02374c_def\n");
}
//@unit 8c0238b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0238b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0238b4");
  return (unsigned)sh4_interp(0x8c0238b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0238b4\n.set FUN_8c0238b4, FUN_8c0238b4_def\n");
}
//@unit 8c023a14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_assign_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_assign");
  return (unsigned)sh4_interp(0x8c023a14, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_assign\n.set Vec3_assign, Vec3_assign_def\n");
}
//@unit 8c023a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_add_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_add");
  return (unsigned)sh4_interp(0x8c023a34, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_add\n.set Vec3_add, Vec3_add_def\n");
}
//@unit 8c023aa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023aa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023aa0");
  return (unsigned)sh4_interp(0x8c023aa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023aa0\n.set FUN_8c023aa0, FUN_8c023aa0_def\n");
}
//@unit 8c023ae0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_sub_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_sub");
  return (unsigned)sh4_interp(0x8c023ae0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_sub\n.set Vec3_sub, Vec3_sub_def\n");
}
//@unit 8c023b4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023b4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023b4c");
  return (unsigned)sh4_interp(0x8c023b4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023b4c\n.set FUN_8c023b4c, FUN_8c023b4c_def\n");
}
//@unit 8c023b8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_scale_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_scale");
  return (unsigned)sh4_interp(0x8c023b8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_scale\n.set Vec3_scale, Vec3_scale_def\n");
}
//@unit 8c023bf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023bf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023bf4");
  return (unsigned)sh4_interp(0x8c023bf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023bf4\n.set FUN_8c023bf4, FUN_8c023bf4_def\n");
}
//@unit 8c023c30
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023c30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023c30");
  return (unsigned)sh4_interp(0x8c023c30, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023c30\n.set FUN_8c023c30, FUN_8c023c30_def\n");
}
//@unit 8c023c98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023c98_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023c98");
  return (unsigned)sh4_interp(0x8c023c98, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023c98\n.set FUN_8c023c98, FUN_8c023c98_def\n");
}
//@unit 8c023cd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023cd4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023cd4");
  return (unsigned)sh4_interp(0x8c023cd4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023cd4\n.set FUN_8c023cd4, FUN_8c023cd4_def\n");
}
//@unit 8c023d04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023d04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023d04");
  return (unsigned)sh4_interp(0x8c023d04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023d04\n.set FUN_8c023d04, FUN_8c023d04_def\n");
}
//@unit 8c023d34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_set_zero_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_set_zero");
  return (unsigned)sh4_interp(0x8c023d34, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_set_zero\n.set Vec3_set_zero, Vec3_set_zero_def\n");
}
//@unit 8c023d68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_set_xyz_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_set_xyz");
  return (unsigned)sh4_interp(0x8c023d68, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_set_xyz\n.set Vec3_set_xyz, Vec3_set_xyz_def\n");
}
//@unit 8c023d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023d7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023d7c");
  return (unsigned)sh4_interp(0x8c023d7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023d7c\n.set FUN_8c023d7c, FUN_8c023d7c_def\n");
}
//@unit 8c023d8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned vec3_copy_8c023d8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("vec3_copy_8c023d8c");
  return (unsigned)sh4_interp(0x8c023d8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl vec3_copy_8c023d8c\n.set vec3_copy_8c023d8c, vec3_copy_8c023d8c_def\n");
}
//@unit 8c023dac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023dac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023dac");
  return (unsigned)sh4_interp(0x8c023dac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023dac\n.set FUN_8c023dac, FUN_8c023dac_def\n");
}
//@unit 8c023de0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023de0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023de0");
  return (unsigned)sh4_interp(0x8c023de0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023de0\n.set FUN_8c023de0, FUN_8c023de0_def\n");
}
//@unit 8c023df4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023df4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023df4");
  return (unsigned)sh4_interp(0x8c023df4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023df4\n.set FUN_8c023df4, FUN_8c023df4_def\n");
}
//@unit 8c023e04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023e04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023e04");
  return (unsigned)sh4_interp(0x8c023e04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023e04\n.set FUN_8c023e04, FUN_8c023e04_def\n");
}
//@unit 8c023e24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023e24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023e24");
  return (unsigned)sh4_interp(0x8c023e24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023e24\n.set FUN_8c023e24, FUN_8c023e24_def\n");
}
//@unit 8c023e44
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c023e44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c023e44\n.set FUN_8c023e44, FUN_8c023e44_def\n");

}
//@unit 8c023e4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_023e4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_023e4c\n.set free_if_nonnull_wrap_023e4c, free_if_nonnull_wrap_023e4c_def\n");

}
//@unit 8c023e7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c023e7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25cddc(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c023e7c\n.set FUN_8c023e7c, FUN_8c023e7c_def\n");

}
//@unit 8c023e98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c023e98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(ar4,ar5,ar6,ar7); });
  return ar4;
}

__asm__(".globl FUN_8c023e98\n.set FUN_8c023e98, FUN_8c023e98_def\n");

}
//@unit 8c023ebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023ebc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023ebc");
  return (unsigned)sh4_interp(0x8c023ebc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023ebc\n.set FUN_8c023ebc, FUN_8c023ebc_def\n");
}
//@unit 8c023ef8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023ef8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023ef8");
  return (unsigned)sh4_interp(0x8c023ef8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023ef8\n.set FUN_8c023ef8, FUN_8c023ef8_def\n");
}
//@unit 8c023f34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023f34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023f34");
  return (unsigned)sh4_interp(0x8c023f34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023f34\n.set FUN_8c023f34, FUN_8c023f34_def\n");
}
//@unit 8c023f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023f70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023f70");
  return (unsigned)sh4_interp(0x8c023f70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023f70\n.set FUN_8c023f70, FUN_8c023f70_def\n");
}
//@unit 8c023fdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c023fdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c023fdc");
  return (unsigned)sh4_interp(0x8c023fdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c023fdc\n.set FUN_8c023fdc, FUN_8c023fdc_def\n");
}
//@unit 8c024010
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
void FUN_8c024010_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c024010");
  sh4_interp(0x8c024010, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c024010\n.set FUN_8c024010, FUN_8c024010_def\n");
}
//@unit 8c024088
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c024088");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0241c4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c024088\n.set FUN_8c024088, FUN_8c024088_def\n");

}
//@unit 8c0240bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0240bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0240bc");
  return (unsigned)sh4_interp(0x8c0240bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0240bc\n.set FUN_8c0240bc, FUN_8c0240bc_def\n");
}
//@unit 8c0241c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0241c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x10,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0241c4\n.set FUN_8c0241c4, FUN_8c0241c4_def\n");

}
//@unit 8c0241e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0241e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02421c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0241e8\n.set FUN_8c0241e8, FUN_8c0241e8_def\n");

}
//@unit 8c02421c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02421c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x10,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02421c\n.set FUN_8c02421c, FUN_8c02421c_def\n");

}
//@unit 8c024240
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c024240_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c024240");
  return (unsigned)sh4_interp(0x8c024240, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c024240\n.set FUN_8c024240, FUN_8c024240_def\n");
}
//@unit 8c0242e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0242e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25cddc(0x8c27c1ec,ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27d1ec) = 0;
  return 0;
}

__asm__(".globl FUN_8c0242e8\n.set FUN_8c0242e8, FUN_8c0242e8_def\n");

}
//@unit 8c02430c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02430c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c((*(le<undefined4>* )(unsigned)(unsigned)0x8c27d1ec) * 0x40 + -0x73d83e14,ar4,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c02430c\n.set FUN_8c02430c, FUN_8c02430c_def\n");

}
//@unit 8c024340
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c024340");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(ar4,*(le<undefined4>* )(unsigned)0x8c27d1ec * 0x40 + 0x8c27c1ec,0x40,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c024340\n.set FUN_8c024340, FUN_8c024340_def\n");

}
//@unit 8c024378
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c024378");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(*(le<undefined4>* )(unsigned)0x8c27d1ec * 0x40 + 0x8c27c1ec,ar4,0x40,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c024378\n.set FUN_8c024378, FUN_8c024378_def\n");

}
//@unit 8c0243b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0243b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0243b0");
  return (unsigned)sh4_interp(0x8c0243b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0243b0\n.set FUN_8c0243b0, FUN_8c0243b0_def\n");
}
//@unit 8c02441c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02441c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c02441c\n.set FUN_8c02441c, FUN_8c02441c_def\n");

}
//@unit 8c02447c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02447c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02447c");
  return (unsigned)sh4_interp(0x8c02447c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02447c\n.set FUN_8c02447c, FUN_8c02447c_def\n");
}
//@unit 8c024508
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c024508_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024508");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl FUN_8c024508\n.set FUN_8c024508, FUN_8c024508_def\n");

}
//@unit 8c024518
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c024518_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024518");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl FUN_8c024518\n.set FUN_8c024518, FUN_8c024518_def\n");

}
//@unit 8c02452c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02452c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02452c");
  return (unsigned)sh4_interp(0x8c02452c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02452c\n.set FUN_8c02452c, FUN_8c02452c_def\n");
}
//@unit 8c024758
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c024758");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c024758\n.set FUN_8c024758, FUN_8c024758_def\n");

}
//@unit 8c0247b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_0247b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0247b0\n.set free_if_nonnull_wrap_0247b0, free_if_nonnull_wrap_0247b0_def\n");

}
//@unit 8c0247e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_0247e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0247e0\n.set free_if_nonnull_wrap_0247e0, free_if_nonnull_wrap_0247e0_def\n");

}
//@unit 8c024810
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c024810_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 1;
  ar4[1] = 1;
  ar4[2] = 1;
  return ar4;
}

__asm__(".globl FUN_8c024810\n.set FUN_8c024810, FUN_8c024810_def\n");

}
//@unit 8c024824
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined2>*  FUN_8c024824_def(le<undefined2>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024824");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024810(ar4 + 2,ar5,ar6,ar7));
  *ar4 = 0;
  return ar4;
}

__asm__(".globl FUN_8c024824\n.set FUN_8c024824, FUN_8c024824_def\n");

}
//@unit 8c024848
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c024848_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c024848");
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
  *(le<undefined4>* )(unsigned)(0x98 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x94 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x9c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa4 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa0 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xac + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb0 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb4 + (int)ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb6 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c024848\n.set FUN_8c024848, FUN_8c024848_def\n");

}
//@unit 8c024968
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_COMMON_02496e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_COMMON_02496e");
  return (unsigned)sh4_interp(0x8c024968, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_COMMON_02496e\n.set s_GRAPHICS_COMMON_02496e, s_GRAPHICS_COMMON_02496e_def\n");
}
//@unit 8c0253e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_4_0253e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_0253e4\n.set get_field_4_0253e4, get_field_4_0253e4_def\n");

}
//@unit 8c0253ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0253ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c0253ec\n.set FUN_8c0253ec, FUN_8c0253ec_def\n");

}
//@unit 8c025490
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025490");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c025490\n.set FUN_8c025490, FUN_8c025490_def\n");

}
//@unit 8c0254d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0254d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0254d0");
  return (unsigned)sh4_interp(0x8c0254d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0254d0\n.set FUN_8c0254d0, FUN_8c0254d0_def\n");
}
//@unit 8c025688
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("CAnimal_m0_025688");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129a88);
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

__asm__(".globl CAnimal_m0_025688\n.set CAnimal_m0_025688, CAnimal_m0_025688_def\n");

}
//@unit 8c02573c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m2_02573c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m2_02573c");
  return (unsigned)sh4_interp(0x8c02573c, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m2_02573c\n.set CAnimal_m2_02573c, CAnimal_m2_02573c_def\n");
}
//@unit 8c025f44
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025f44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 4,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c025f44\n.set FUN_8c025f44, FUN_8c025f44_def\n");

}
//@unit 8c025f68
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025f68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl FUN_8c025f68\n.set FUN_8c025f68, FUN_8c025f68_def\n");

}
//@unit 8c025f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_140_025f70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x140 + ar4);
}

__asm__(".globl get_field_140_025f70\n.set get_field_140_025f70, get_field_140_025f70_def\n");

}
//@unit 8c025f7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c025f7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c025f7c");
  return (unsigned)sh4_interp(0x8c025f7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c025f7c\n.set FUN_8c025f7c, FUN_8c025f7c_def\n");
}
//@unit 8c025fa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025fa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0xf4c;
}

__asm__(".globl FUN_8c025fa8\n.set FUN_8c025fa8, FUN_8c025fa8_def\n");

}
//@unit 8c025fb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_025fb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_025fb8\n.set noop_025fb8, noop_025fb8_def\n");

}
//@unit 8c025fbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025fbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<short>* )(unsigned)(ar4 + 0x16) = (short)ar5;
  return ar5;
}

__asm__(".globl FUN_8c025fbc\n.set FUN_8c025fbc, FUN_8c025fbc_def\n");

}
//@unit 8c025fc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025fc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025fec(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl FUN_8c025fc4\n.set FUN_8c025fc4, FUN_8c025fc4_def\n");

}
//@unit 8c025fec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025fec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(ar4 + 0x1e);
}

__asm__(".globl FUN_8c025fec\n.set FUN_8c025fec, FUN_8c025fec_def\n");

}
//@unit 8c025ff4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c025ff4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02db04(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c025ff4\n.set FUN_8c025ff4, FUN_8c025ff4_def\n");

}
//@unit 8c02601c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02601c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02601c\n.set FUN_8c02601c, FUN_8c02601c_def\n");

}
//@unit 8c026024
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_24_026024");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x24);
}

__asm__(".globl get_field_24_026024\n.set get_field_24_026024, get_field_24_026024_def\n");

}
//@unit 8c02602c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02602c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(0xa4 + ar4);
}

__asm__(".globl FUN_8c02602c\n.set FUN_8c02602c, FUN_8c02602c_def\n");

}
//@unit 8c026038
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c026038");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c026038\n.set FUN_8c026038, FUN_8c026038_def\n");

}
//@unit 8c026078
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m3_026078_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m3_026078");
  return (unsigned)sh4_interp(0x8c026078, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m3_026078\n.set CAnimal_m3_026078, CAnimal_m3_026078_def\n");
}
//@unit 8c0266d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0266d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 2) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c0266d4\n.set FUN_8c0266d4, FUN_8c0266d4_def\n");

}
//@unit 8c0266dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("CAnimal_m4_0266dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x14))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x1c))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar6,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl CAnimal_m4_0266dc\n.set CAnimal_m4_0266dc, CAnimal_m4_0266dc_def\n");

}
//@unit 8c026774
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("CAnimal_m5_026774");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x14))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimal_m5_026774\n.set CAnimal_m5_026774, CAnimal_m5_026774_def\n");

}
//@unit 8c026834
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("CAnimBody_AdvanceFrame_wrapper_wrap_026834");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimBody_AdvanceFrame_wrapper_wrap_026834\n.set CAnimBody_AdvanceFrame_wrapper_wrap_026834, CAnimBody_AdvanceFrame_wrapper_wrap_026834_def\n");

}
//@unit 8c026858
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimBody_AdvanceFrame_wrapper_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimBody_AdvanceFrame_wrapper");
  return (unsigned)sh4_interp(0x8c026858, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimBody_AdvanceFrame_wrapper\n.set CAnimBody_AdvanceFrame_wrapper, CAnimBody_AdvanceFrame_wrapper_def\n");
}
//@unit 8c026880
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_CAnimal_RunIncubator_026882");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(0x30c + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x73;
    (vsp = ((unsigned long)(fr0_ - 68)), report_error_message((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 99,ar5,1,2));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x14))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_CAnimal_RunIncubator_026882\n.set s_CAnimal_RunIncubator_026882, s_CAnimal_RunIncubator_026882_def\n");

}
//@unit 8c026968
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c026968_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c026968");
  return (unsigned)sh4_interp(0x8c026968, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c026968\n.set FUN_8c026968, FUN_8c026968_def\n");
}
//@unit 8c026d74
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c026d74_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c026d74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c026d74\n.set FUN_8c026d74, FUN_8c026d74_def\n");

}
//@unit 8c026d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c026d7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c026d7c");
  return (unsigned)sh4_interp(0x8c026d7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c026d7c\n.set FUN_8c026d7c, FUN_8c026d7c_def\n");
}
//@unit 8c026da8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimBody_GetCurFrame_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimBody_GetCurFrame");
  return (unsigned)sh4_interp(0x8c026da8, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimBody_GetCurFrame\n.set CAnimBody_GetCurFrame, CAnimBody_GetCurFrame_def\n");
}
//@unit 8c026db0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c026db0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c026db0\n.set FUN_8c026db0, FUN_8c026db0_def\n");

}
//@unit 8c026dd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_1c_026dd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
}

__asm__(".globl get_field_1c_026dd8\n.set get_field_1c_026dd8, get_field_1c_026dd8_def\n");

}
//@unit 8c026de0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c026de0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c026de0");
  return (unsigned)sh4_interp(0x8c026de0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c026de0\n.set FUN_8c026de0, FUN_8c026de0_def\n");
}
//@unit 8c026f7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c026f7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* puVar2;
  int iVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  puVar2 = (le<undefined4>* )(unsigned)
           (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015510))))
                     (*(le<int>* )(unsigned)((short)uVar1 * 0x124 + *(le<int>* )(unsigned)(0x328 + ar4)) +
                      0x1e4,ar5,ar6,ar7));
  *puVar2 = *(le<undefined4>* )(unsigned)
             (*(le<int>* )(unsigned)((short)uVar1 * 0x124 + *(le<int>* )(unsigned)(0x328 + ar4)) + 0x40);
  iVar3 = *(le<int>* )(unsigned)(0x344 + ar4);
  *(le<unsigned>* )(unsigned)(iVar3 + 4) = puVar2;
  return iVar3;
}

__asm__(".globl FUN_8c026f7c\n.set FUN_8c026f7c, FUN_8c026f7c_def\n");

}
//@unit 8c02702c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02702c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02702c");
  return (unsigned)sh4_interp(0x8c02702c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02702c\n.set FUN_8c02702c, FUN_8c02702c_def\n");
}
//@unit 8c027224
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c027224_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c027224");
  return (unsigned)sh4_interp(0x8c027224, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c027224\n.set FUN_8c027224, FUN_8c027224_def\n");
}
//@unit 8c02722c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02722c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 100) = ar5;
  return 100;
}

__asm__(".globl FUN_8c02722c\n.set FUN_8c02722c, FUN_8c02722c_def\n");

}
//@unit 8c027234
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027234");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027264(ar4 + 0xb0,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c027234\n.set FUN_8c027234, FUN_8c027234_def\n");

}
//@unit 8c027264
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027264");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar6;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = ar7;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c027264\n.set FUN_8c027264, FUN_8c027264_def\n");

}
//@unit 8c027270
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027270");
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
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,uVar1,ar6_00,ar7));
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027354(ar4 + 0x2dc,1,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar1,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027270\n.set FUN_8c027270, FUN_8c027270_def\n");

}
//@unit 8c027344
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027344");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x9b;
  *(undefined1 *)(unsigned)(0x9b + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c027344\n.set FUN_8c027344, FUN_8c027344_def\n");

}
//@unit 8c027354
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027354");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x28) = (undefined1)ar5;
  return 0x28;
}

__asm__(".globl FUN_8c027354\n.set FUN_8c027354, FUN_8c027354_def\n");

}
//@unit 8c02735c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02735c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x40) = (undefined1)ar5;
  return 0x40;
}

__asm__(".globl FUN_8c02735c\n.set FUN_8c02735c, FUN_8c02735c_def\n");

}
//@unit 8c027364
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027364");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x99 + ar4);
}

__asm__(".globl FUN_8c027364\n.set FUN_8c027364, FUN_8c027364_def\n");

}
//@unit 8c027374
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027374");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl FUN_8c027374\n.set FUN_8c027374, FUN_8c027374_def\n");

}
//@unit 8c02737c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_138_02737c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x138 + ar4);
}

__asm__(".globl get_field_138_02737c\n.set get_field_138_02737c, get_field_138_02737c_def\n");

}
//@unit 8c027388
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027388");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(unsigned)(0x144 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c027388\n.set FUN_8c027388, FUN_8c027388_def\n");

}
//@unit 8c027394
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027394");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x24))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xa8 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027394\n.set FUN_8c027394, FUN_8c027394_def\n");

}
//@unit 8c0273d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0273d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0273d0\n.set noop_0273d0, noop_0273d0_def\n");

}
//@unit 8c0273d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0273d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0273f8(*(le<undefined4>* )(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0273d4\n.set FUN_8c0273d4, FUN_8c0273d4_def\n");

}
//@unit 8c0273f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0273f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x81;
  *(undefined1 *)(unsigned)(0x81 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0273f8\n.set FUN_8c0273f8, FUN_8c0273f8_def\n");

}
//@unit 8c027404
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027404");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027448(*(le<undefined4>* )(unsigned)(0x308 + ar4),1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02743c(*(le<undefined4>* )(unsigned)(0x30c + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027404\n.set FUN_8c027404, FUN_8c027404_def\n");

}
//@unit 8c02743c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02743c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x21c;
  *(le<undefined4>* )(unsigned)(0x21c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02743c\n.set FUN_8c02743c, FUN_8c02743c_def\n");

}
//@unit 8c027448
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027448");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x82;
  *(undefined1 *)(unsigned)(0x82 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c027448\n.set FUN_8c027448, FUN_8c027448_def\n");

}
//@unit 8c027454
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027454");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027478(*(le<undefined4>* )(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027454\n.set FUN_8c027454, FUN_8c027454_def\n");

}
//@unit 8c027478
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027478");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x84;
  *(undefined1 *)(unsigned)(0x84 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c027478\n.set FUN_8c027478, FUN_8c027478_def\n");

}
//@unit 8c027484
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_027484");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_027484\n.set noop_027484, noop_027484_def\n");

}
//@unit 8c027488
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_027488");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_027488\n.set noop_027488, noop_027488_def\n");

}
//@unit 8c02748c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02748c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0274b0(*(le<undefined4>* )(unsigned)(0x308 + ar4),1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02748c\n.set FUN_8c02748c, FUN_8c02748c_def\n");

}
//@unit 8c0274b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0274b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x87;
  *(undefined1 *)(unsigned)(0x87 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0274b0\n.set FUN_8c0274b0, FUN_8c0274b0_def\n");

}
//@unit 8c0274bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0274bc_def(int ar4,le<ushort>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0274bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  le<ushort>* ar5_00;
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
  ar5_00 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,ar5_00,ar6,ar7));
LAB_8c027550:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa5b4(0x8c35468c,ar5_00,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
  if (iVar1 == iVar4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
    if (0 < iVar1) {
      ar5_00 = (le<ushort>* )(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b04c(ar4,1,ar6,ar7));
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (le<ushort>* )(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],8,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      else {
        ar5_00 = (le<ushort>* )(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],0x18,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
    }
  }
  else {
    ar5_00 = (le<ushort>* )(unsigned)(uint)*ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
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
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x3c))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar4 + 0x174,ar4 + 0x2dc,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0274bc\n.set FUN_8c0274bc, FUN_8c0274bc_def\n");

}
//@unit 8c0276ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_ffffffff_0276ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  return 0xffffffff;
}

__asm__(".globl ret_const_ffffffff_0276ec\n.set ret_const_ffffffff_0276ec, ret_const_ffffffff_0276ec_def\n");

}
//@unit 8c0276f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0276f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa5b4(0x8c35468c,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  if (iVar1 == iVar2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
    if (0 < iVar2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b04c(ar4,1,ar6,ar7));
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0276f4\n.set FUN_8c0276f4, FUN_8c0276f4_def\n");

}
//@unit 8c02775c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02775c");
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

__asm__(".globl FUN_8c02775c\n.set FUN_8c02775c, FUN_8c02775c_def\n");

}
//@unit 8c02781c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02781c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027844))))
                    (*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02781c\n.set FUN_8c02781c, FUN_8c02781c_def\n");

}
//@unit 8c027844
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Vec3_assign_wrap_027844");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x13c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Vec3_assign_wrap_027844\n.set Vec3_assign_wrap_027844, Vec3_assign_wrap_027844_def\n");

}
//@unit 8c02786c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02786c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027894(*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02786c\n.set FUN_8c02786c, FUN_8c02786c_def\n");

}
//@unit 8c027894
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027894");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x14c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027894\n.set FUN_8c027894, FUN_8c027894_def\n");

}
//@unit 8c0278bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0278bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0336e8(*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0278bc\n.set FUN_8c0278bc, FUN_8c0278bc_def\n");

}
//@unit 8c0278e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0278e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x1c))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0278e4\n.set FUN_8c0278e4, FUN_8c0278e4_def\n");

}
//@unit 8c027904
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_027904");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_027904\n.set noop_027904, noop_027904_def\n");

}
//@unit 8c027908
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027908");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027930))))
                    (*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c027908\n.set FUN_8c027908, FUN_8c027908_def\n");

}
//@unit 8c027930
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_124_027930");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x124 + ar4);
}

__asm__(".globl get_field_124_027930\n.set get_field_124_027930, get_field_124_027930_def\n");

}
//@unit 8c02793c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02793c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 1) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c02793c\n.set FUN_8c02793c, FUN_8c02793c_def\n");

}
//@unit 8c027954
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027954");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xfffffffe;
  return 1;
}

__asm__(".globl FUN_8c027954\n.set FUN_8c027954, FUN_8c027954_def\n");

}
//@unit 8c027970
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027970");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 2) == 2) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c027970\n.set FUN_8c027970, FUN_8c027970_def\n");

}
//@unit 8c027988
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027988");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c027988\n.set FUN_8c027988, FUN_8c027988_def\n");

}
//@unit 8c0279a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0279a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 0x100) == 0x100) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0279a0\n.set FUN_8c0279a0, FUN_8c0279a0_def\n");

}
//@unit 8c0279c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0279c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x100;
  return 1;
}

__asm__(".globl FUN_8c0279c0\n.set FUN_8c0279c0, FUN_8c0279c0_def\n");

}
//@unit 8c0279e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0279e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 0x80) == 0x80) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0279e0\n.set FUN_8c0279e0, FUN_8c0279e0_def\n");

}
//@unit 8c027a00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027a00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x20))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c027a4c))))
                        (*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7)), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c027a00\n.set FUN_8c027a00, FUN_8c027a00_def\n");

}
//@unit 8c027a4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_214_027a4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x214 + ar4);
}

__asm__(".globl get_field_214_027a4c\n.set get_field_214_027a4c, get_field_214_027a4c_def\n");

}
//@unit 8c027a58
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c027a58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x80;
  return 1;
}

__asm__(".globl FUN_8c027a58\n.set FUN_8c027a58, FUN_8c027a58_def\n");

}
//@unit 8c027a78
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_Failed_to_load_Pack_CAnimal__027a86");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x28)) = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  (*(le<undefined4>* )(fr0_ - 0x2c)) = 0;
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&(*(undefined1 *)(unsigned)0x8c027afc))[iVar2];
    a5 = ar5;
                    
    switch(iVar2) {
    case 0:
      *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 1;
      break;
    case 1:
      if (*(le<int>* )(unsigned)(iVar1 + 0x18) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020d90(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x18),*(le<undefined4>* )(unsigned)(ar4 + 0x410),s0));
        if (iVar2 == 1) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 2:
      if (*(le<int>* )(unsigned)(iVar1 + 4) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x414) * 4 + *(le<int>* )(unsigned)(iVar1 + 4)),
                           *(le<undefined4>* )(unsigned)(ar4 + 0x410),
                           *(le<int>* )(unsigned)(iVar1 + 0xa0) + *(le<short>* )(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(le<short>* )(unsigned)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(le<int>* )(unsigned)(iVar1 + 0x1c) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &(*(le<undefined4>* )(fr0_ - 0x2c));
        uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020ba0(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x1c),uVar3,puVar4));
        if (iVar2 == 1) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015bb0(iVar1 + 0xb0,(*(le<undefined4>* )(fr0_ - 0x2c)),uVar3,puVar4); });
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 4:
      if (*(le<int>* )(unsigned)(iVar1 + 8) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x414) * 4 + *(le<int>* )(unsigned)(iVar1 + 8)),
                           *(le<undefined4>* )(unsigned)(ar4 + 0x410),
                           *(le<int>* )(unsigned)(iVar1 + 0xa8) + *(le<short>* )(unsigned)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(le<short>* )(unsigned)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x414) = 0;
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = ((le<undefined4>* )(fr0_ - 0x24));
      uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0209b0(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar3,puVar4));
      if (iVar2 == 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c015ad4(iVar1 + 0x70,((le<undefined4>* )(fr0_ - 0x24))[0],uVar3,puVar4); });
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0xc),"Read NJCM Failed..",0,2));
      }
      break;
    case 6:
      if (*(le<int>* )(unsigned)(iVar1 + 0x20) == 0) {
        puVar4 = &(*(le<undefined4>* )(fr0_ - 0x28));
        uVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020aa8(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar3,puVar4));
        if (iVar2 == 1) {
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x78) + 8))))((le<int>* )(unsigned)(iVar1 + 0x78),(*(le<undefined4>* )(fr0_ - 0x28)),uVar3,puVar4));
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 176)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0xc),"Read NJTL Failed..",0,2));
        }
      }
      else {
        uVar3 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x78) + 8))))((le<int>* )(unsigned)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00));
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(le<int>* )(unsigned)(iVar1 + 0x20) == 0) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x14),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3));
        if (iVar2 == 0) {
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00));
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x20),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(le<int>* )(unsigned)(iVar1 + 0x34) == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 8;
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(le<int>* )(unsigned)(iVar1 + 0x48) == 0) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,((void *)0x8c0253e4),iVar6,ar7_00));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c020e80(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3))
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(le<undefined4>* )(unsigned)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),ar7_00));
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x88) + 8))))((le<int>* )(unsigned)(iVar1 + 0x88),iVar6,0x88,iVar6));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2));
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x48),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(le<int>* )(unsigned)(iVar1 + 0x5c) == 0) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(le<int>* )(unsigned)(iVar1 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00));
      a5 = iVar1 + 0x3c;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x80) + 8))))((le<int>* )(unsigned)(iVar1 + 0x80),a5,iVar6,ar7_00));
      *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x34),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      (vsp = ((unsigned long)(fr0_ - 176)), s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6));
      iVar2 = iVar1 + 100;
      (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 0x90) + 8))))((le<int>* )(unsigned)(iVar1 + 0x90),iVar2,uVar3,iVar6));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6));
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x5c),*(le<undefined4>* )(unsigned)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 176)), report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2));
  }
  return uVar5;
}

__asm__(".globl s_Failed_to_load_Pack_CAnimal__027a86\n.set s_Failed_to_load_Pack_CAnimal__027a86, s_Failed_to_load_Pack_CAnimal__027a86_def\n");

}
//@unit 8c028390
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
          (undefined4 ar4,char *ar5,undefined4 ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("s_Failed_to_Read_CAnimal_LoadM_02839e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<short>*  s0 = (le<short>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  int s16 = *(le<int>* )(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  le<undefined4>* ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  iVar2 = 2;
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = ((le<undefined4>* )(fr0_ - 0x24));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020ba0(s8,ar5,ar6,ar7_00));
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = ((le<undefined4>* )(fr0_ - 0x24));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020c98(s8,ar5,ar6,ar7_00));
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015bb0(ar7,((le<undefined4>* )(fr0_ - 0x24))[0],ar6,ar7_00); });
    }
    else if (s16 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015be4(ar7,((le<undefined4>* )(fr0_ - 0x24))[0],ar6,ar7_00); });
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

__asm__(".globl s_Failed_to_Read_CAnimal_LoadM_02839e\n.set s_Failed_to_Read_CAnimal_LoadM_02839e, s_Failed_to_Read_CAnimal_LoadM_02839e_def\n");

}
//@unit 8c0284ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8_def(int ar4,undefined4 ar5,int ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("s_Failed_to_Load_CAnimal_LoadG_0284b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  le<undefined4>* ar7_00;
  le<undefined4>* ar7_01;
  int iVar5;
  
  iVar5 = *(le<int>* )(unsigned)(ar4 + 0x328) + ar6 * 0x124;
  ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x24)) = 0;
  ar7_01 = (le<undefined4>* )(unsigned)(ar4 + ar6);
  iVar3 = ar6;
  if (*(le<int>* )(unsigned)(iVar5 + 0x18) != 0) {
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ddc(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0x18),iVar3,ar7_01));
    if (iVar1 == 0) {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message(*(le<undefined4>* )(unsigned)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2));
    }
  }
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4))) == '\0') {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message("Attach NULL!!",((undefined1 *)(unsigned)0x8c130008),0,2));
      ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((le<undefined4>* )(fr0_ - 0x20));
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (le<undefined4>* )(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(*(le<int>* )(unsigned)(iVar5 + 0xa0) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  if (*(le<int>* )(unsigned)(iVar5 + 0x1c) != 0) {
    ar7 = ((le<undefined4>* )(fr0_ - 0x20));
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0x1c),iVar3,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(iVar5 + 0xb0,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
    }
    else {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      report_error_message
                (*(le<undefined4>* )(unsigned)(iVar5 + 0x1c),((undefined1 *)(unsigned)0x8c13001e),0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8))) == '\0') {
      ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((le<undefined4>* )(fr0_ - 0x20));
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ce4(ar5,*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (le<undefined4>* )(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8)),((undefined1 *)(unsigned)0x8c130041),0,
                   2);
      }
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],
                   iVar3,ar7); });
    }
    (*(le<int>* )(fr0_ - 0x64)) = iVar1;
    ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(le<int>* )(unsigned)(iVar5 + 0xa8) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  ar7_00 = &(*(le<undefined4>* )(fr0_ - 0x24));
  uVar4 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0209fc(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0xc),uVar4,ar7_00));
  if (iVar3 == 0) {
    ar7_00 = (le<undefined4>* )(unsigned)0x2;
    uVar4 = 0;
    report_error_message
              (*(le<undefined4>* )(unsigned)(iVar5 + 0xc),((undefined1 *)(unsigned)0x8c130054),0,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015ad4(iVar5 + 0x70,(*(le<undefined4>* )(fr0_ - 0x24)),uVar4,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01));
  uVar4 = 0;
  if (*(le<int>* )(unsigned)(iVar5 + 0x34) != 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01));
  }
  return uVar4;
}

__asm__(".globl s_Failed_to_Load_CAnimal_LoadG_0284b8\n.set s_Failed_to_Load_CAnimal_LoadG_0284b8, s_Failed_to_Load_CAnimal_LoadG_0284b8_def\n");

}
//@unit 8c0287a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_CAnimal_LoadGResourceWait_0287ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  le<undefined4>* ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x144 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
    ar7_00 = ((le<undefined4>* )(fr0_ - 0x18));
    uVar4 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020af4(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar4,ar7_00));
    if (iVar3 == 0) {
      ar7_00 = (le<undefined4>* )(unsigned)0x2;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                (*(le<undefined4>* )(unsigned)(iVar1 + 0xc),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2ee,0,2));
    }
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = ((le<undefined4>* )(fr0_ - 0x18))[0];
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,((le<undefined4>* )(fr0_ - 0x18))[0],uVar4,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00));
    uVar5 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x14));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020ef0(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x317;
      (vsp = ((unsigned long)(fr0_ - 24)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0x14),ar5_00,0,2));
    }
  }
  else {
    uVar4 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7));
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x78);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar4,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7));
    uVar5 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x20));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02100c(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0xda,ar5_00,0,2));
    }
  }
  if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(le<int>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,ar5_00,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                      (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x10),*(le<undefined4>* )(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        (*(le<undefined4>* )(unsigned)(iVar1 + 0x10),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x340
                         ,0,2));
    }
  }
  else {
    uVar5 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4));
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x88);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar5,uVar4));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,iVar3,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                      (ar5,*(le<undefined4>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x48),
                       *(le<undefined4>* )(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x18c,
                         (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1,0,2));
    }
  }
  return iVar3;
}

__asm__(".globl s_CAnimal_LoadGResourceWait_0287ac\n.set s_CAnimal_LoadGResourceWait_0287ac, s_CAnimal_LoadGResourceWait_0287ac_def\n");

}
//@unit 8c028ab8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028ab8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return *(le<int>* )(unsigned)(0x328 + ar4) + (short)uVar1 * 0x124;
}

__asm__(".globl FUN_8c028ab8\n.set FUN_8c028ab8, FUN_8c028ab8_def\n");

}
//@unit 8c028afc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028afc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(le<int>* )(unsigned)(0x328 + ar4) + ar6 * 0x124;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(le<short>* )(unsigned)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 * 4 + *(le<int>* )(unsigned)(iVar2 + 4))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
                (ar5,*(le<undefined4>* )(unsigned)(iVar3 * 4 + *(le<int>* )(unsigned)(iVar2 + 4)),
                 *(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    }
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 * 4 + *(le<int>* )(unsigned)(iVar2 + 8))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
                (ar5,*(le<undefined4>* )(unsigned)(iVar3 * 4 + *(le<int>* )(unsigned)(iVar2 + 8)),
                 *(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    }
  }
  iVar3 = ar7_00;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(le<undefined4>* )(unsigned)(iVar2 + 0xc),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
  if (*(le<int>* )(unsigned)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(le<undefined4>* )(unsigned)(iVar2 + 0xc),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
  }
  if (*(le<int>* )(unsigned)(iVar2 + 0x18) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020e48))))
              (ar5,*(le<undefined4>* )(unsigned)(iVar2 + 0x18),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    iVar3 = ar7_00;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xf0 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,iVar3));
  return uVar1;
}

__asm__(".globl FUN_8c028afc\n.set FUN_8c028afc, FUN_8c028afc_def\n");

}
//@unit 8c028c18
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_Failed_wrap_028c18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(0x328 + ar4) + ar6 * 0x124;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x78,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(iVar2 + 0x34) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x80,ar5,ar6,ar7));
  }
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(iVar2 + 0x10) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x88,ar5,ar6,ar7));
    uVar1 = 0;
    if (*(le<int>* )(unsigned)(iVar2 + 0x5c) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(iVar2 + 0x90,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl s_Failed_wrap_028c18\n.set s_Failed_wrap_028c18, s_Failed_wrap_028c18_def\n");

}
//@unit 8c028c9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028c9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c028cc4))))
                    (*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c028c9c\n.set FUN_8c028c9c, FUN_8c028c9c_def\n");

}
//@unit 8c028cc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_6c_028cc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x6c);
}

__asm__(".globl get_field_6c_028cc4\n.set get_field_6c_028cc4, get_field_6c_028cc4_def\n");

}
//@unit 8c028ccc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c028ccc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c028ccc");
  return (unsigned)sh4_interp(0x8c028ccc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c028ccc\n.set FUN_8c028ccc, FUN_8c028ccc_def\n");
}
//@unit 8c028d9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_13c_028d9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x13c + ar4);
}

__asm__(".globl get_field_13c_028d9c\n.set get_field_13c_028d9c, get_field_13c_028d9c_def\n");

}
//@unit 8c028da8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028da8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x24))))
            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5 + 0x48,ar6,ar7));
  iVar1 = 0x460;
  *(le<undefined4>* )(unsigned)(0x460 + ar4) = *(le<undefined4>* )(unsigned)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl FUN_8c028da8\n.set FUN_8c028da8, FUN_8c028da8_def\n");

}
//@unit 8c028e20
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028e20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  uVar2 = CONCAT22((short)uVar1,(*(le<undefined2>* )(fr0_ - 0x18)));
  uVar1 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7); });
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02602c(ar5,uVar1,ar6,ar7));
  ar5_00 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar3,(short)uVar1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x308),uVar2,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c028e20\n.set FUN_8c028e20, FUN_8c028e20_def\n");

}
//@unit 8c028ec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028ec8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(unsigned)(0x98 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c028ec8\n.set FUN_8c028ec8, FUN_8c028ec8_def\n");

}
//@unit 8c028ed4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028ed4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c028ed4\n.set FUN_8c028ed4, FUN_8c028ed4_def\n");

}
//@unit 8c028edc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028edc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c028edc\n.set FUN_8c028edc, FUN_8c028edc_def\n");

}
//@unit 8c028ee4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c028ee4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(0xa2 + ar4);
}

__asm__(".globl FUN_8c028ee4\n.set FUN_8c028ee4, FUN_8c028ee4_def\n");

}
//@unit 8c028ef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c028ef0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c028ef0");
  return (unsigned)sh4_interp(0x8c028ef0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c028ef0\n.set FUN_8c028ef0, FUN_8c028ef0_def\n");
}
//@unit 8c028f34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c028f34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c028f34");
  return (unsigned)sh4_interp(0x8c028f34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c028f34\n.set FUN_8c028f34, FUN_8c028f34_def\n");
}
//@unit 8c028f60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c028f60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c028f60");
  return (unsigned)sh4_interp(0x8c028f60, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c028f60\n.set FUN_8c028f60, FUN_8c028f60_def\n");
}
//@unit 8c02903c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02903c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x28))))
            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5 + 0x48,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar5 + 0x68) = *(le<undefined4>* )(unsigned)(0x460 + ar4);
  return 0x68;
}

__asm__(".globl FUN_8c02903c\n.set FUN_8c02903c, FUN_8c02903c_def\n");

}
//@unit 8c0290b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0290b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0290b8");
  return (unsigned)sh4_interp(0x8c0290b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0290b8\n.set FUN_8c0290b8, FUN_8c0290b8_def\n");
}
//@unit 8c02911c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02911c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02911c");
  return (unsigned)sh4_interp(0x8c02911c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02911c\n.set FUN_8c02911c, FUN_8c02911c_def\n");
}
//@unit 8c0293d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0293d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0293f8(ar4 + 0xf8,1,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0293d4\n.set FUN_8c0293d4, FUN_8c0293d4_def\n");

}
//@unit 8c0293f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0293f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0293f8\n.set FUN_8c0293f8, FUN_8c0293f8_def\n");

}
//@unit 8c029400
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimal_SetPVMTexture_s_029404_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimal_SetPVMTexture_s_029404");
  return (unsigned)sh4_interp(0x8c029400, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimal_SetPVMTexture_s_029404\n.set s_CAnimal_SetPVMTexture_s_029404, s_CAnimal_SetPVMTexture_s_029404_def\n");
}
//@unit 8c0294c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0294c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl FUN_8c0294c0\n.set FUN_8c0294c0, FUN_8c0294c0_def\n");

}
//@unit 8c029510
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c029510_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c029510");
  return (unsigned)sh4_interp(0x8c029510, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c029510\n.set FUN_8c029510, FUN_8c029510_def\n");
}
//@unit 8c0297b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0297b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0297b8");
  return (unsigned)sh4_interp(0x8c0297b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0297b8\n.set FUN_8c0297b8, FUN_8c0297b8_def\n");
}
//@unit 8c029af0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c029af0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c029af0");
  return (unsigned)sh4_interp(0x8c029af0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c029af0\n.set FUN_8c029af0, FUN_8c029af0_def\n");
}
//@unit 8c029ca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c029ca8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c029ca8");
  return (unsigned)sh4_interp(0x8c029ca8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c029ca8\n.set FUN_8c029ca8, FUN_8c029ca8_def\n");
}
//@unit 8c029d64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c029d64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c029d64");
  return (unsigned)sh4_interp(0x8c029d64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c029d64\n.set FUN_8c029d64, FUN_8c029d64_def\n");
}
//@unit 8c029dec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c029dec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c029dec");
  return (unsigned)sh4_interp(0x8c029dec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c029dec\n.set FUN_8c029dec, FUN_8c029dec_def\n");
}
//@unit 8c02a1fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02a1fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02a1fc");
  return (unsigned)sh4_interp(0x8c02a1fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02a1fc\n.set FUN_8c02a1fc, FUN_8c02a1fc_def\n");
}
//@unit 8c02a230
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02a230_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02a230");
  return (unsigned)sh4_interp(0x8c02a230, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02a230\n.set FUN_8c02a230, FUN_8c02a230_def\n");
}
//@unit 8c02a29c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a29c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a86(ar5,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02a29c\n.set FUN_8c02a29c, FUN_8c02a29c_def\n");

}
//@unit 8c02a2b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02a2b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02a2b8");
  return (unsigned)sh4_interp(0x8c02a2b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02a2b8\n.set FUN_8c02a2b8, FUN_8c02a2b8_def\n");
}
//@unit 8c02a544
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a544");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x70,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02a544\n.set FUN_8c02a544, FUN_8c02a544_def\n");

}
//@unit 8c02a568
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02a568_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02a568");
  return (unsigned)sh4_interp(0x8c02a568, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02a568\n.set FUN_8c02a568, FUN_8c02a568_def\n");
}
//@unit 8c02a5d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02a5d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02a5d4");
  return (unsigned)sh4_interp(0x8c02a5d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02a5d4\n.set FUN_8c02a5d4, FUN_8c02a5d4_def\n");
}
//@unit 8c02a668
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a668");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int a5;
  
  a5 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x38))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),a5,ar5,ar6));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x18))); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c02a6d0(*(le<undefined4>* )(unsigned)(0x30c + ar4),a5,ar5,ar6); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x18)),ar5,ar6));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar5,ar6));
  return 1;
}

__asm__(".globl FUN_8c02a668\n.set FUN_8c02a668, FUN_8c02a668_def\n");

}
//@unit 8c02a6d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a6d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x200,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02a6d0\n.set FUN_8c02a6d0, FUN_8c02a6d0_def\n");

}
//@unit 8c02a6f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a6f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c02c758(ar4 + 0x174,ar5_00,ar6,ar7));
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xfffffff7;
  return 0x74;
}

__asm__(".globl FUN_8c02a6f8\n.set FUN_8c02a6f8, FUN_8c02a6f8_def\n");

}
//@unit 8c02a758
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a758");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_30_02a780(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02a758\n.set FUN_8c02a758, FUN_8c02a758_def\n");

}
//@unit 8c02a780
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_30_02a780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x30);
}

__asm__(".globl get_field_30_02a780\n.set get_field_30_02a780, get_field_30_02a780_def\n");

}
//@unit 8c02a788
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02a788");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  if (*(le<short>* )(unsigned)(ar4 + 0x3f8) < *(le<short>* )(unsigned)(ar4 + 0x3fa)) {
    *(le<undefined2>* )(unsigned)(ar4 + 0x3fa) = 0;
    *(le<undefined2>* )(unsigned)(ar4 + 0x3f8) = 1;
    if (*(le<int>* )(unsigned)(ar4 + 0x3f4) == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x3dc) = *(le<undefined4>* )(unsigned)(ar4 + 0x3d8);
    }
    else if (*(le<int>* )(unsigned)(ar4 + 0x3f4) == 1) {
      *(le<short>* )(unsigned)(ar4 + 0x3f0) = *(le<short>* )(unsigned)(ar4 + 0x3f0) + 1;
      if (*(le<int>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x3f0) * 4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x3ec))) == 0x50) {
        ar5 = *(le<undefined4>* )(unsigned)(ar4 + 0x3e4);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02aab0(*(le<undefined4>* )(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
        *(le<undefined2>* )(unsigned)(ar4 + 0x3f0) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x3f4) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x3ec) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x3e0) = 0;
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x3e4) =
             *(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x3f0) * 4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x3ec)));
      }
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x3e0) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_94_02aaa4(*(le<undefined4>* )(unsigned)(ar4 + 0x308),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x3e4) = uVar2;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(le<unsigned>* )((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c02a544(*(le<undefined4>* )(unsigned)(ar4 + 0x308),ar5,ar6,ar7); });
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c02b208(ar4 + 0x310,*(le<undefined4>* )(unsigned)(ar4 + 0x3e4),ar6_00,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x3e4) = uVar2;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
  }
  else {
    *(le<undefined4>* )(unsigned)(ar4 + 0x3e4) =
         *(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x3f0) * 4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x3ec)));
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x3e4) != *(le<int>* )(unsigned)(ar4 + 1000)) {
    *(le<undefined2>* )(unsigned)(ar4 + 0x3fa) = 0;
    if ((*(le<int>* )(unsigned)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(le<int>* )(unsigned)(ar4 + 0x3e4))) {
                    
      *(le<int>* )(unsigned)(ar4 + 0x3ec) =
           *(le<int>* )(unsigned)(sVar1 * 0x124 + *(le<int>* )(unsigned)(ar4 + 0x328)) + (*(le<int>* )(unsigned)(ar4 + 0x3e4) + -0x47) * 8;
      *(le<undefined4>* )(unsigned)(ar4 + 0x3e4) =
           *(le<undefined4>* )(unsigned)(*(le<short>* )(unsigned)(ar4 + 0x3f0) * 4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x3ec)));
      *(le<undefined4>* )(unsigned)(ar4 + 0x3f4) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0x3e0) = 1;
    }
    *(le<undefined4>* )(unsigned)(ar4 + 0x3d8) =
         *(le<undefined4>* )(unsigned)
          (*(le<int>* )(unsigned)(sVar1 * 0x124 + *(le<int>* )(unsigned)(ar4 + 0x328)) + *(le<int>* )(unsigned)(ar4 + 0x3e4) * 4 + 0x40);
    *(le<undefined4>* )(unsigned)(ar4 + 0x3dc) =
         *(le<undefined4>* )(unsigned)
          (*(le<int>* )(unsigned)(sVar1 * 0x124 + *(le<int>* )(unsigned)(ar4 + 0x328)) + *(le<int>* )(unsigned)(ar4 + 1000) * 4 + 0x40);
    *(le<undefined2>* )(unsigned)(ar4 + 0x3f8) =
         *(le<undefined2>* )(unsigned)
          (*(le<int>* )(unsigned)(sVar1 * 0x124 + *(le<int>* )(unsigned)(ar4 + 0x328)) + *(le<int>* )(unsigned)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x3dc) != *(le<int>* )(unsigned)(ar4 + 0x3d8)) {
    *(le<short>* )(unsigned)(ar4 + 0x3fa) = *(le<short>* )(unsigned)(ar4 + 0x3fa) + 1;
  }
  if (((*(le<int>* )(unsigned)(ar4 + 0x3dc) == *(le<int>* )(unsigned)(ar4 + 0x3d8)) &&
      (*(le<short>* )(unsigned)(ar4 + 0x3fa) < *(le<short>* )(unsigned)(ar4 + 0x3f8))) && (*(le<int>* )(unsigned)(ar4 + 0x3e0) == 1)) {
    *(le<short>* )(unsigned)(ar4 + 0x3fa) = *(le<short>* )(unsigned)(ar4 + 0x3f8) + 1;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 1000) = *(le<undefined4>* )(unsigned)(ar4 + 0x3e4);
  return 1000;
}

__asm__(".globl FUN_8c02a788\n.set FUN_8c02a788, FUN_8c02a788_def\n");

}
//@unit 8c02aaa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_94_02aaa4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x94 + ar4);
}

__asm__(".globl get_field_94_02aaa4\n.set get_field_94_02aaa4, get_field_94_02aaa4_def\n");

}
//@unit 8c02aab0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02aab0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x94;
  *(le<undefined4>* )(unsigned)(0x94 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02aab0\n.set FUN_8c02aab0, FUN_8c02aab0_def\n");

}
//@unit 8c02aabc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02aabc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015510))))
                    (*(le<int>* )(unsigned)((short)uVar1 * 0x124 + *(le<int>* )(unsigned)(0x328 + ar4)) +
                     0x1e4,ar5,ar6,ar7));
  iVar2 = *(le<int>* )(unsigned)(0x344 + ar4);
  *(le<undefined4>* )(unsigned)(iVar2 + 4) = uVar1;
  return iVar2;
}

__asm__(".globl FUN_8c02aabc\n.set FUN_8c02aabc, FUN_8c02aabc_def\n");

}
//@unit 8c02ab24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02ab24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02ab24");
  return (unsigned)sh4_interp(0x8c02ab24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02ab24\n.set FUN_8c02ab24, FUN_8c02ab24_def\n");
}
//@unit 8c02aba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02aba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02aba0");
  return (unsigned)sh4_interp(0x8c02aba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02aba0\n.set FUN_8c02aba0, FUN_8c02aba0_def\n");
}
//@unit 8c02ace4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ace4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x80,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02ace4\n.set FUN_8c02ace4, FUN_8c02ace4_def\n");

}
//@unit 8c02ad0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ad0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(s0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02ad38(*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7); });
  return s0;
}

__asm__(".globl FUN_8c02ad0c\n.set FUN_8c02ad0c, FUN_8c02ad0c_def\n");

}
//@unit 8c02ad38
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ad38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_normalize(ar4 + 4,ar5,ar6,ar7));
  return s0;
}

__asm__(".globl FUN_8c02ad38\n.set FUN_8c02ad38, FUN_8c02ad38_def\n");

}
//@unit 8c02ad5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ad5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(s0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02ace4(*(le<undefined4>* )(unsigned)(0x30c + ar4),ar5,ar6,ar7); });
  return s0;
}

__asm__(".globl FUN_8c02ad5c\n.set FUN_8c02ad5c, FUN_8c02ad5c_def\n");

}
//@unit 8c02ad88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02ad88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02ad88");
  return (unsigned)sh4_interp(0x8c02ad88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02ad88\n.set FUN_8c02ad88, FUN_8c02ad88_def\n");
}
//@unit 8c02ae38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02ae38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02ae38");
  return (unsigned)sh4_interp(0x8c02ae38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02ae38\n.set FUN_8c02ae38, FUN_8c02ae38_def\n");
}
//@unit 8c02af68
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02af68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0x47c + ar4);
  if (iVar1 != ar5) {
    *(le<undefined4>* )(unsigned)(0x474 + ar4) = 1;
    *(le<undefined4>* )(unsigned)(0x470 + ar4) = 0;
    iVar1 = 0x47c;
    *(le<int>* )(unsigned)(0x47c + ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02af68\n.set FUN_8c02af68, FUN_8c02af68_def\n");

}
//@unit 8c02af90
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_CAnimal_ChangeBodyTexture_02af96");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x144 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3ba,
                       (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x3c8,0,2));
  }
  else {
    *(le<int>* )(unsigned)(0x42c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(le<int>* )(unsigned)(0x430 + ar4) = iVar1 + ar5 * 8 + 0x88;
    iVar2 = 0x478;
    *(le<int>* )(unsigned)(0x478 + ar4) = ar5;
  }
  return iVar2;
}

__asm__(".globl s_CAnimal_ChangeBodyTexture_02af96\n.set s_CAnimal_ChangeBodyTexture_02af96, s_CAnimal_ChangeBodyTexture_02af96_def\n");

}
//@unit 8c02b04c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b04c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x478;
  *(le<undefined4>* )(unsigned)(0x478 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02b04c\n.set FUN_8c02b04c, FUN_8c02b04c_def\n");

}
//@unit 8c02b058
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b058_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b058");
  return (unsigned)sh4_interp(0x8c02b058, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b058\n.set FUN_8c02b058, FUN_8c02b058_def\n");
}
//@unit 8c02b190
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b190_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b190");
  return (unsigned)sh4_interp(0x8c02b190, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b190\n.set FUN_8c02b190, FUN_8c02b190_def\n");
}
//@unit 8c02b1b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b1b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b1b0");
  return (unsigned)sh4_interp(0x8c02b1b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b1b0\n.set FUN_8c02b1b0, FUN_8c02b1b0_def\n");
}
//@unit 8c02b1dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b1dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b3d4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c02b1dc\n.set FUN_8c02b1dc, FUN_8c02b1dc_def\n");

}
//@unit 8c02b208
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b208_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b208");
  return (unsigned)sh4_interp(0x8c02b208, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b208\n.set FUN_8c02b208, FUN_8c02b208_def\n");
}
//@unit 8c02b340
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b340");
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

__asm__(".globl FUN_8c02b340\n.set FUN_8c02b340, FUN_8c02b340_def\n");

}
//@unit 8c02b3d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b3d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b3d4");
  return (unsigned)sh4_interp(0x8c02b3d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b3d4\n.set FUN_8c02b3d4, FUN_8c02b3d4_def\n");
}
//@unit 8c02b444
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_48c_02b444");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x48c + ar4);
}

__asm__(".globl get_field_48c_02b444\n.set get_field_48c_02b444, get_field_48c_02b444_def\n");

}
//@unit 8c02b450
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b450");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x48c;
  *(le<undefined4>* )(unsigned)(0x48c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02b450\n.set FUN_8c02b450, FUN_8c02b450_def\n");

}
//@unit 8c02b45c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b45c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b45c");
  return (unsigned)sh4_interp(0x8c02b45c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b45c\n.set FUN_8c02b45c, FUN_8c02b45c_def\n");
}
//@unit 8c02b4ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b4ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b4ac");
  return (unsigned)sh4_interp(0x8c02b4ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b4ac\n.set FUN_8c02b4ac, FUN_8c02b4ac_def\n");
}
//@unit 8c02b4fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b4fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02b4fc\n.set FUN_8c02b4fc, FUN_8c02b4fc_def\n");

}
//@unit 8c02b524
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b524_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b524");
  return (unsigned)sh4_interp(0x8c02b524, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b524\n.set FUN_8c02b524, FUN_8c02b524_def\n");
}
//@unit 8c02b574
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b574_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b574");
  return (unsigned)sh4_interp(0x8c02b574, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b574\n.set FUN_8c02b574, FUN_8c02b574_def\n");
}
//@unit 8c02b584
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b584_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b584");
  return (unsigned)sh4_interp(0x8c02b584, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b584\n.set FUN_8c02b584, FUN_8c02b584_def\n");
}
//@unit 8c02b5d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b5d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c02b5fc(s0,ar4 + 0x338,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02b5d4\n.set FUN_8c02b5d4, FUN_8c02b5d4_def\n");

}
//@unit 8c02b5fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned vec3_copy_8c02b5fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("vec3_copy_8c02b5fc");
  return (unsigned)sh4_interp(0x8c02b5fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl vec3_copy_8c02b5fc\n.set vec3_copy_8c02b5fc, vec3_copy_8c02b5fc_def\n");
}
//@unit 8c02b61c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b61c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b61c");
  return (unsigned)sh4_interp(0x8c02b61c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b61c\n.set FUN_8c02b61c, FUN_8c02b61c_def\n");
}
//@unit 8c02b670
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b670");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl FUN_8c02b670\n.set FUN_8c02b670, FUN_8c02b670_def\n");

}
//@unit 8c02b698
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b698");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfbc(ar4 + 0x174,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl FUN_8c02b698\n.set FUN_8c02b698, FUN_8c02b698_def\n");

}
//@unit 8c02b6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b6c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b6c0");
  return (unsigned)sh4_interp(0x8c02b6c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b6c0\n.set FUN_8c02b6c0, FUN_8c02b6c0_def\n");
}
//@unit 8c02b6d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b6d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b6d0");
  return (unsigned)sh4_interp(0x8c02b6d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b6d0\n.set FUN_8c02b6d0, FUN_8c02b6d0_def\n");
}
//@unit 8c02b6e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b6e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x174;
}

__asm__(".globl FUN_8c02b6e0\n.set FUN_8c02b6e0, FUN_8c02b6e0_def\n");

}
//@unit 8c02b6f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_308_02b6f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x308 + ar4);
}

__asm__(".globl get_field_308_02b6f0\n.set get_field_308_02b6f0, get_field_308_02b6f0_def\n");

}
//@unit 8c02b6fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_30c_02b6fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x30c + ar4);
}

__asm__(".globl get_field_30c_02b6fc\n.set get_field_30c_02b6fc, get_field_30c_02b6fc_def\n");

}
//@unit 8c02b708
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b708");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b708\n.set noop_02b708, noop_02b708_def\n");

}
//@unit 8c02b70c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b70c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b70c\n.set noop_02b70c, noop_02b70c_def\n");

}
//@unit 8c02b710
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b710");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b710\n.set noop_02b710, noop_02b710_def\n");

}
//@unit 8c02b714
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b714");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b714\n.set noop_02b714, noop_02b714_def\n");

}
//@unit 8c02b718
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b718");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b718\n.set noop_02b718, noop_02b718_def\n");

}
//@unit 8c02b71c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b71c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b71c\n.set noop_02b71c, noop_02b71c_def\n");

}
//@unit 8c02b720
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b720");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b720\n.set noop_02b720, noop_02b720_def\n");

}
//@unit 8c02b724
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b724");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b724\n.set noop_02b724, noop_02b724_def\n");

}
//@unit 8c02b728
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b728");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b728\n.set noop_02b728, noop_02b728_def\n");

}
//@unit 8c02b72c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b72c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b72c\n.set noop_02b72c, noop_02b72c_def\n");

}
//@unit 8c02b730
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b730");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b730\n.set ret_const_0_02b730, ret_const_0_02b730_def\n");

}
//@unit 8c02b738
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b738");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b738\n.set ret_const_0_02b738, ret_const_0_02b738_def\n");

}
//@unit 8c02b740
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b740");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b740\n.set ret_const_0_02b740, ret_const_0_02b740_def\n");

}
//@unit 8c02b748
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b748");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b748\n.set noop_02b748, noop_02b748_def\n");

}
//@unit 8c02b74c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b74c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b74c\n.set noop_02b74c, noop_02b74c_def\n");

}
//@unit 8c02b750
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b750");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b750\n.set noop_02b750, noop_02b750_def\n");

}
//@unit 8c02b754
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b754");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b754\n.set noop_02b754, noop_02b754_def\n");

}
//@unit 8c02b758
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b758");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b758\n.set noop_02b758, noop_02b758_def\n");

}
//@unit 8c02b75c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b75c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b75c\n.set ret_const_0_02b75c, ret_const_0_02b75c_def\n");

}
//@unit 8c02b764
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02b764");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02b764\n.set noop_02b764, noop_02b764_def\n");

}
//@unit 8c02b768
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b768");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b768\n.set ret_const_0_02b768, ret_const_0_02b768_def\n");

}
//@unit 8c02b770
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02b770");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02b770\n.set ret_const_0_02b770, ret_const_0_02b770_def\n");

}
//@unit 8c02b778
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02b778_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02b778");
  return (unsigned)sh4_interp(0x8c02b778, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02b778\n.set FUN_8c02b778, FUN_8c02b778_def\n");
}
//@unit 8c02b858
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b858");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c02b858\n.set FUN_8c02b858, FUN_8c02b858_def\n");

}
//@unit 8c02b8f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_02b8f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_02b8f0\n.set free_if_nonnull_wrap_02b8f0, free_if_nonnull_wrap_02b8f0_def\n");

}
//@unit 8c02b920
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b920");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 8;
  ar6_00 = 0;
  ar5_00 = ((void *)(unsigned)0x8c024508);
  ({ unsigned long t0_ = (unsigned long)(8); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c024508),0,8); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0154ec(ar4 + 0x1e4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0154ec(ar4 + 0x1e8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x1ec,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1f0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1f8,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl FUN_8c02b920\n.set FUN_8c02b920, FUN_8c02b920_def\n");

}
//@unit 8c02b9a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02b9a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined *ar7_00;
  int iVar2;
  int iVar3;
  
  ({ unsigned long t0_ = (unsigned long)(6); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c02df08),0,0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d7c8(ar4 + 0x90,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305dc) + ar6 * 0x140),
               *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305e4) + ar6 * 0x140),
               *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305e0) + ar6 * 0x140)));
  ar7_00 = ((undefined1 *)(unsigned)0x8c1304b6) + ar6 * 0x140;
  ({ unsigned long t0_ = (unsigned long)(
               *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c4) + ar6 * 0x140)); unsigned long t1_ = (unsigned long)(
               *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c8) + ar6 * 0x140)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02da5c(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + ar6 * 0x140),
               (int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b4) + ar6 * 0x140),ar7_00); });
  ar6_00 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304d0) + ar6 * 0x140);
  uVar1 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304cc) + ar6 * 0x140);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02e460(ar4 + 0xf8,uVar1,ar6_00,ar7_00));
  iVar3 = ar6 * 0x140;
  *(le<undefined4>* )(unsigned)(ar4 + 0x134) = ar5;
  *(le<int>* )(unsigned)(ar4 + 0x13c) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar4,uVar1,ar6_00,ar7_00));
  *(le<int>* )(unsigned)(ar4 + 0x138) = (int)(short)uVar1;
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x164) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x140) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x148) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x14c) = 0;
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
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,0,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b6) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,1,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b8) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,2,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304ba) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,3,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304bc) + iVar3),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,4,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304be) + iVar3),ar7_00));
  iVar2 = (int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c0) + iVar3);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd70(ar4 + 0xa8,5,iVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd68(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304ac) + iVar3),iVar2,ar7_00));
  return ar4;
}

__asm__(".globl FUN_8c02b9a8\n.set FUN_8c02b9a8, FUN_8c02b9a8_def\n");

}
//@unit 8c02bd68
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<short>* )(unsigned)(ar4 + 0x14) = (short)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02bd68\n.set FUN_8c02bd68, FUN_8c02bd68_def\n");

}
//@unit 8c02bd70
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined2>* )(unsigned)(ar4 + ar5 * 2 + 0x22) = (undefined2)ar6;
  return 0x22;
}

__asm__(".globl FUN_8c02bd70\n.set FUN_8c02bd70, FUN_8c02bd70_def\n");

}
//@unit 8c02bd84
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02bd84\n.set FUN_8c02bd84, FUN_8c02bd84_def\n");

}
//@unit 8c02bd8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02bd8c\n.set FUN_8c02bd8c, FUN_8c02bd8c_def\n");

}
//@unit 8c02bd94
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0xb) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02bd94\n.set FUN_8c02bd94, FUN_8c02bd94_def\n");

}
//@unit 8c02bd9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bd9c");
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

__asm__(".globl FUN_8c02bd9c\n.set FUN_8c02bd9c, FUN_8c02bd9c_def\n");

}
//@unit 8c02be9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_4_02be9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_02be9c\n.set get_field_4_02be9c, get_field_4_02be9c_def\n");

}
//@unit 8c02bea4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bea4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<int>* )(unsigned)(*(char *)(unsigned)(ar4 + 8) * 4 + *(le<int>* )(unsigned)(ar4 + 0x10)) - *(le<int>* )(unsigned)(ar4 + 4);
}

__asm__(".globl FUN_8c02bea4\n.set FUN_8c02bea4, FUN_8c02bea4_def\n");

}
//@unit 8c02bebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bebc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (5 < iVar1) {
      return 0xffffffff;
    }
    if (*(le<int>* )(unsigned)(0x14c + ar4 + iVar1 * 4) == 2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02bebc\n.set FUN_8c02bebc, FUN_8c02bebc_def\n");

}
//@unit 8c02bef8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bef8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bfd8(ar4,ar5,ar6,ar7));
  (*(le<int>* )(fr0_ - 0x10)) = *(le<short>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302bc)) + (short)uVar1 * 2) + -1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bf8c(ar4,ar5,ar6,ar7));
  if ((int)*(le<short>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + *(le<int>* )(unsigned)(0x13c + ar4) * 2) + (int)(short)uVar1 <
      (*(le<int>* )(fr0_ - 0x10))) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02bf8c(ar4,ar5,ar6,ar7));
    (*(le<int>* )(fr0_ - 0x10)) = (int)*(le<short>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302e0)) + *(le<int>* )(unsigned)(0x13c + ar4) * 2) +
                (int)(short)uVar1;
  }
  return (*(le<int>* )(fr0_ - 0x10));
}

__asm__(".globl FUN_8c02bef8\n.set FUN_8c02bef8, FUN_8c02bef8_def\n");

}
//@unit 8c02bf8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bf8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(short)uVar1;
}

__asm__(".globl FUN_8c02bf8c\n.set FUN_8c02bf8c, FUN_8c02bf8c_def\n");

}
//@unit 8c02bfb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bfb4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(ar4 + 0x16);
}

__asm__(".globl FUN_8c02bfb4\n.set FUN_8c02bfb4, FUN_8c02bfb4_def\n");

}
//@unit 8c02bfbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bfbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1302bc)) + *(le<int>* )(unsigned)(0x138 + ar4) * 2);
}

__asm__(".globl FUN_8c02bfbc\n.set FUN_8c02bfbc, FUN_8c02bfbc_def\n");

}
//@unit 8c02bfd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02bfd8");
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
      if (*(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13019c)) + iVar2 * 4 + iVar1 * 0x10) == *(le<int>* )(unsigned)(0x13c + ar4)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl FUN_8c02bfd8\n.set FUN_8c02bfd8, FUN_8c02bfd8_def\n");

}
//@unit 8c02c030
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c030_def(int ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02c030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<int>* ar6_00;
  le<int>* ar5_00;
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
    ar5_00 = (le<int>* )(unsigned)(int)*(char *)(unsigned)(ar4 + 0x144);
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7));
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7));
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7));
    (*(le<undefined4>* )(fr0_ - 0x4c)) =
         CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x4c)) >> 0x10),
                  CONCAT11((char)uVar2,(char)(*(le<undefined4>* )(fr0_ - 0x4c))));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7));
    }
  }
  if (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148))) {
    ar7 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
    ar5_00 = ar6;
    ar6_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7));
  if ((iVar1 == 0) && (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148)))) {
    if (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148))) {
      ar6_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7));
    uVar3 = 0xd;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7));
    ar5_01 = (int)(char)uVar2;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7));
    if ((iVar1 == 100) && (ar5_01 = 5, (*(le<undefined4>* )(unsigned)(unsigned)0x8c27d430) == 1)) {
      ar5_01 = 4;
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7); });
    }
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar6 + 0x148))))(ar6,uVar2,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7));
  ar6_01 = *(le<undefined4>* )(unsigned)(ar4 + 0x140);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7));
  uVar2 = *(le<undefined4>* )(unsigned)(ar4 + 0x13c);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7));
  *(le<unsigned>* )(unsigned)(ar4 + 0x148) = ar5;
  return 0x148;
}

__asm__(".globl FUN_8c02c030\n.set FUN_8c02c030, FUN_8c02c030_def\n");

}
//@unit 8c02c308
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c308");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 3) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02c308\n.set FUN_8c02c308, FUN_8c02c308_def\n");

}
//@unit 8c02c310
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c310");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51);
}

__asm__(".globl FUN_8c02c310\n.set FUN_8c02c310, FUN_8c02c310_def\n");

}
//@unit 8c02c328
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = ar5;
  return 0x48;
}

__asm__(".globl FUN_8c02c328\n.set FUN_8c02c328, FUN_8c02c328_def\n");

}
//@unit 8c02c330
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c330");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = (undefined1)ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02c330\n.set FUN_8c02c330, FUN_8c02c330_def\n");

}
//@unit 8c02c338
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 8) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02c338\n.set FUN_8c02c338, FUN_8c02c338_def\n");

}
//@unit 8c02c340
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c340");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (*(le<int>* )(unsigned)(ar4 + 4) * 0x3e8,*(le<int>* )(unsigned)(ar4 + 0xc) * 10,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02c340\n.set FUN_8c02c340, FUN_8c02c340_def\n");

}
//@unit 8c02c380
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02c380_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02c380");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c02c380\n.set FUN_8c02c380, FUN_8c02c380_def\n");

}
//@unit 8c02c388
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c388");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 10) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02c388\n.set FUN_8c02c388, FUN_8c02c388_def\n");

}
//@unit 8c02c390
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c390");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl FUN_8c02c390\n.set FUN_8c02c390, FUN_8c02c390_def\n");

}
//@unit 8c02c398
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c398");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(unsigned)(0x144 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c02c398\n.set FUN_8c02c398, FUN_8c02c398_def\n");

}
//@unit 8c02c3a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c3a8");
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

__asm__(".globl FUN_8c02c3a8\n.set FUN_8c02c3a8, FUN_8c02c3a8_def\n");

}
//@unit 8c02c4e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c4e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c510(ar4 + 0xa8,ar5,ar6,ar7));
  return (int)(char)uVar1;
}

__asm__(".globl FUN_8c02c4e8\n.set FUN_8c02c4e8, FUN_8c02c4e8_def\n");

}
//@unit 8c02c510
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c510");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x1c);
}

__asm__(".globl FUN_8c02c510\n.set FUN_8c02c510, FUN_8c02c510_def\n");

}
//@unit 8c02c518
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c518");
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

__asm__(".globl FUN_8c02c518\n.set FUN_8c02c518, FUN_8c02c518_def\n");

}
//@unit 8c02c5ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c5ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 8);
}

__asm__(".globl FUN_8c02c5ac\n.set FUN_8c02c5ac, FUN_8c02c5ac_def\n");

}
//@unit 8c02c5b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c5b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(iVar2 * 0x18 + ar4,ar5,ar6,ar7));
    if ((char)uVar1 == '\0') {
      if (*(le<int>* )(unsigned)(0x14c + ar4 + iVar2 * 4) == 2) {
        *(le<undefined4>* )(unsigned)(0x14c + ar4 + iVar2 * 4) = 0;
      }
      else if (*(le<int>* )(unsigned)(0x14c + ar4 + iVar2 * 4) == 1) {
        *(le<undefined4>* )(unsigned)(0x14c + ar4 + iVar2 * 4) = 2;
      }
    }
    else {
      *(le<undefined4>* )(unsigned)(0x14c + ar4 + iVar2 * 4) = 1;
    }
  }
  return 6;
}

__asm__(".globl FUN_8c02c5b4\n.set FUN_8c02c5b4, FUN_8c02c5b4_def\n");

}
//@unit 8c02c668
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c668");
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

__asm__(".globl FUN_8c02c668\n.set FUN_8c02c668, FUN_8c02c668_def\n");

}
//@unit 8c02c758
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02c758");
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
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbd4(ar4 + 0xa8,0,ar6,ar7); });
    iVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cbbc(ar4 + 0x90,0,ar6,ar7));
  }
  uVar5 = (undefined2)((uint)(*(le<undefined4>* )(fr0_ - 0x1c)) >> 0x10);
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x164) = 0;
  *(le<int>* )(unsigned)(ar4 + 0x13c) = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bfd8(ar4,iVar3,ar6,ar7));
  ain0 = CONCAT22(uVar5,(short)uVar2);
  *(le<int>* )(unsigned)(ar4 + 0x138) = (int)(short)uVar2;
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
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbb4(ar4 + 0x90,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305dc) + iVar4),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cbac(ar4 + 0x90,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305e4) + iVar4),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02d81c(ar4 + 0x90,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1305e0) + iVar4),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cba4(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + iVar4),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb9c(ar4 + 0xa8,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b4) + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,0,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b6) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,1,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b8) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,2,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304ba) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,3,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304bc) + iVar4),ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,4,(int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304be) + iVar4),ar7));
  iVar3 = (int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c0) + iVar4);
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd70(ar4 + 0xa8,5,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb94(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c4) + iVar4),iVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb8c(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304c8) + iVar4),iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bd68(ar4 + 0xa8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304ac) + iVar4),iVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c025fbc(ar4 + 0xa8,0,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb84(ar4 + 0xa8,0,iVar3,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb7c(ar4 + 0xa8,0,iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb74(ar4 + 0xa8,0,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb6c(ar4 + 0xa8,0,iVar3,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb24(ar4 + 0xf8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304cc) + iVar4),iVar3,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cadc(ar4 + 0xf8,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304d0) + iVar4),iVar3,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c02c758\n.set FUN_8c02c758, FUN_8c02c758_def\n");

}
//@unit 8c02cadc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cadc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02cadc\n.set FUN_8c02cadc, FUN_8c02cadc_def\n");

}
//@unit 8c02cb24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02cb24\n.set FUN_8c02cb24, FUN_8c02cb24_def\n");

}
//@unit 8c02cb6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cb6c\n.set FUN_8c02cb6c, FUN_8c02cb6c_def\n");

}
//@unit 8c02cb74
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 1) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02cb74\n.set FUN_8c02cb74, FUN_8c02cb74_def\n");

}
//@unit 8c02cb7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = (undefined1)ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cb7c\n.set FUN_8c02cb7c, FUN_8c02cb7c_def\n");

}
//@unit 8c02cb84
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cb84\n.set FUN_8c02cb84, FUN_8c02cb84_def\n");

}
//@unit 8c02cb8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x30) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cb8c\n.set FUN_8c02cb8c, FUN_8c02cb8c_def\n");

}
//@unit 8c02cb94
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x34) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cb94\n.set FUN_8c02cb94, FUN_8c02cb94_def\n");

}
//@unit 8c02cb9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cb9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined2>* )(unsigned)(ar4 + 0x20) = (undefined2)ar5;
  return 0x20;
}

__asm__(".globl FUN_8c02cb9c\n.set FUN_8c02cb9c, FUN_8c02cb9c_def\n");

}
//@unit 8c02cba4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cba4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cba4\n.set FUN_8c02cba4, FUN_8c02cba4_def\n");

}
//@unit 8c02cbac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cbac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cbac\n.set FUN_8c02cbac, FUN_8c02cbac_def\n");

}
//@unit 8c02cbb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cbb4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cbb4\n.set FUN_8c02cbb4, FUN_8c02cbb4_def\n");

}
//@unit 8c02cbbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cbbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0xc) - ar5;
  if (iVar1 < 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = *(le<undefined4>* )(unsigned)(ar4 + 0xc);
    return *(le<undefined4>* )(unsigned)(ar4 + 0xc);
  }
  *(le<int>* )(unsigned)(ar4 + 4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02cbbc\n.set FUN_8c02cbbc, FUN_8c02cbbc_def\n");

}
//@unit 8c02cbd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cbd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02cbd4\n.set FUN_8c02cbd4, FUN_8c02cbd4_def\n");

}
//@unit 8c02cbdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_34_02cbdc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x34);
}

__asm__(".globl get_field_34_02cbdc\n.set get_field_34_02cbdc, get_field_34_02cbdc_def\n");

}
//@unit 8c02cbe4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cbe4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02cbe4");
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
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb7c(ar4 + 0xa8,(int)*(char *)(unsigned)(ar5 + 6),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cb74(ar4 + 0xa8,(int)*(char *)(unsigned)((int)ar5 + 0x19),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028edc(ar4 + 0xa8,ar5[7],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c028ed4(ar4 + 0xa8,ar5[8],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cbd4(ar4 + 0xa8,ar5[9],ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd68(ar4 + 0xa8,(int)*(le<short>* )(unsigned)(ar5 + 10),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c025fbc(ar4 + 0xa8,(int)*(le<short>* )(unsigned)((int)ar5 + 0x2a),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02cb84(ar4 + 0xa8,ar5[0xb],ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce08(ar4 + 0xf8,ar5[0xc],ar6,ar7); });
  for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02bd94(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xd),ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(
                 (*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02c330(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)((int)ar5 + ain0 * 0xc + 0x35),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ain0 * 0x18 + ar4,(int)*(char *)(unsigned)(ar5 + ain0 * 3 + 0xf),ar6,ar7));
    (*(le<int>* )(fr0_ - 0x30)) = ain0;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c02ce00(ain0 * 0x18 + ar4,ar5[ain0 * 3 + 0xe],ar6,ar7); });
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02cdf8(ar4 + 0x78,(int)*(char *)(unsigned)(ar5 + 0x1e),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02c338(ar4 + 0x78,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02cbe4\n.set FUN_8c02cbe4, FUN_8c02cbe4_def\n");

}
//@unit 8c02cdf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02cdf8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 9) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c02cdf8\n.set FUN_8c02cdf8, FUN_8c02cdf8_def\n");

}
//@unit 8c02ce00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02ce00\n.set FUN_8c02ce00, FUN_8c02ce00_def\n");

}
//@unit 8c02ce08
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02ce08\n.set FUN_8c02ce08, FUN_8c02ce08_def\n");

}
//@unit 8c02ce10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x10) - ar5;
  if (iVar1 < 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 8) = *(le<undefined4>* )(unsigned)(ar4 + 0x10);
    return *(le<undefined4>* )(unsigned)(ar4 + 0x10);
  }
  *(le<int>* )(unsigned)(ar4 + 8) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02ce10\n.set FUN_8c02ce10, FUN_8c02ce10_def\n");

}
//@unit 8c02ce28
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x140;
  *(le<undefined4>* )(unsigned)(0x140 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02ce28\n.set FUN_8c02ce28, FUN_8c02ce28_def\n");

}
//@unit 8c02ce34
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x13c;
  *(le<undefined4>* )(unsigned)(0x13c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02ce34\n.set FUN_8c02ce34, FUN_8c02ce34_def\n");

}
//@unit 8c02ce40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x138;
  *(le<undefined4>* )(unsigned)(0x138 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02ce40\n.set FUN_8c02ce40, FUN_8c02ce40_def\n");

}
//@unit 8c02ce4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ce4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x134;
  *(le<undefined4>* )(unsigned)(0x134 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c02ce4c\n.set FUN_8c02ce4c, FUN_8c02ce4c_def\n");

}
//@unit 8c02ce58
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ce58_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ce58");
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
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bd68(ar4 + 0xa8,(int)*(le<short>* )(unsigned)(ar5 + 7),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025fbc(ar4 + 0xa8,(int)*(le<short>* )(unsigned)((int)ar5 + 0x1e),ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c02ce58\n.set FUN_8c02ce58, FUN_8c02ce58_def\n");

}
//@unit 8c02cf20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02cf20_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02cf20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* ar5_00;
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
  *(le<short>* )(unsigned)(ar5 + 10) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(le<short>* )(unsigned)((int)ar5 + 0x2a) = (short)uVar1;
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

__asm__(".globl FUN_8c02cf20\n.set FUN_8c02cf20, FUN_8c02cf20_def\n");

}
//@unit 8c02d190
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d190");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 9);
}

__asm__(".globl FUN_8c02d190\n.set FUN_8c02d190, FUN_8c02d190_def\n");

}
//@unit 8c02d198
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_10_02d198");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x10);
}

__asm__(".globl get_field_10_02d198\n.set get_field_10_02d198, get_field_10_02d198_def\n");

}
//@unit 8c02d1a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_18_02d1a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x18);
}

__asm__(".globl get_field_18_02d1a0\n.set get_field_18_02d1a0, get_field_18_02d1a0_def\n");

}
//@unit 8c02d1a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d1a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(ar4 + 0x14);
}

__asm__(".globl FUN_8c02d1a8\n.set FUN_8c02d1a8, FUN_8c02d1a8_def\n");

}
//@unit 8c02d1b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_10_02d1b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x10);
}

__asm__(".globl get_field_10_02d1b0\n.set get_field_10_02d1b0, get_field_10_02d1b0_def\n");

}
//@unit 8c02d1b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_c_02d1b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0xc);
}

__asm__(".globl get_field_c_02d1b8\n.set get_field_c_02d1b8, get_field_c_02d1b8_def\n");

}
//@unit 8c02d1c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_8_02d1c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_02d1c0\n.set get_field_8_02d1c0, get_field_8_02d1c0_def\n");

}
//@unit 8c02d1c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d1c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 1);
}

__asm__(".globl FUN_8c02d1c8\n.set FUN_8c02d1c8, FUN_8c02d1c8_def\n");

}
//@unit 8c02d1d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d1d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl FUN_8c02d1d0\n.set FUN_8c02d1d0, FUN_8c02d1d0_def\n");

}
//@unit 8c02d1d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_8_02d1d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_02d1d8\n.set get_field_8_02d1d8, get_field_8_02d1d8_def\n");

}
//@unit 8c02d1e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_4_02d1e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_02d1e0\n.set get_field_4_02d1e0, get_field_4_02d1e0_def\n");

}
//@unit 8c02d1e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_134_02d1e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x134 + ar4);
}

__asm__(".globl get_field_134_02d1e8\n.set get_field_134_02d1e8, get_field_134_02d1e8_def\n");

}
//@unit 8c02d1f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02d1f4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02d1f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* ar5_00;
  
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
  *(le<short>* )(unsigned)(ar5 + 7) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7));
  *(le<short>* )(unsigned)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7));
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02d1f4\n.set FUN_8c02d1f4, FUN_8c02d1f4_def\n");

}
//@unit 8c02d2e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d2e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 ain0;
  
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7); });
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7));
  }
  if ((6 < ar5) && ((*(le<int>* )(unsigned)(ar4 + 0x13c) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7));
  ain0 = CONCAT31((int3)((uint)(*(le<undefined4>* )(fr0_ - 0x1c)) >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c518(ar4,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02de00(ar4 + 0xa8,ar5,*(le<undefined4>* )(unsigned)(ar4 + 0x13c),ar7));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7); });
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02c330(ar4 + 0x60,1,ar6,ar7); });
  }
  return uVar1;
}

__asm__(".globl FUN_8c02d2e0\n.set FUN_8c02d2e0, FUN_8c02d2e0_def\n");

}
//@unit 8c02d3e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d3e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*ar4;
}

__asm__(".globl FUN_8c02d3e0\n.set FUN_8c02d3e0, FUN_8c02d3e0_def\n");

}
//@unit 8c02d3e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d3e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(ar4 + 0x90,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02d3e8\n.set FUN_8c02d3e8, FUN_8c02d3e8_def\n");

}
//@unit 8c02d410
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d410");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d438(ar4 + 0x90,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02d410\n.set FUN_8c02d410, FUN_8c02d410_def\n");

}
//@unit 8c02d438
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d438");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (*(le<int>* )(unsigned)(ar4 + 8) * 0x3e8,*(le<int>* )(unsigned)(ar4 + 0x10) * 10,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02d438\n.set FUN_8c02d438, FUN_8c02d438_def\n");

}
//@unit 8c02d478
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d478");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7));
  return iVar1 * iVar2;
}

__asm__(".globl FUN_8c02d478\n.set FUN_8c02d478, FUN_8c02d478_def\n");

}
//@unit 8c02d4bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_4_02d4bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_02d4bc\n.set get_field_4_02d4bc, get_field_4_02d4bc_def\n");

}
//@unit 8c02d4c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7));
  return (1 - iVar1) * iVar2;
}

__asm__(".globl FUN_8c02d4c4\n.set FUN_8c02d4c4, FUN_8c02d4c4_def\n");

}
//@unit 8c02d50c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02d50c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02d50c");
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
  *(le<undefined2>* )(unsigned)(ar4 + 10) = 0;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x2a) = 0;
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

__asm__(".globl FUN_8c02d50c\n.set FUN_8c02d50c, FUN_8c02d50c_def\n");

}
//@unit 8c02d5b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02d5b8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02d5b8");
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
  *(le<undefined2>* )(unsigned)(ar4 + 7) = 0;
  *(le<undefined2>* )(unsigned)((int)ar4 + 0x1e) = 0;
  ar4[8] = 0;
  return ar4;
}

__asm__(".globl FUN_8c02d5b8\n.set FUN_8c02d5b8, FUN_8c02d5b8_def\n");

}
//@unit 8c02d5e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02d5e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02d5e8");
  return (unsigned)sh4_interp(0x8c02d5e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02d5e8\n.set FUN_8c02d5e8, FUN_8c02d5e8_def\n");
}
//@unit 8c02d720
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02d720_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02d720");
  return (unsigned)sh4_interp(0x8c02d720, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02d720\n.set FUN_8c02d720, FUN_8c02d720_def\n");
}
//@unit 8c02d7c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d7c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(ar7 * 0x3840,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = uVar1;
  *ar4 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl FUN_8c02d7c8\n.set FUN_8c02d7c8, FUN_8c02d7c8_def\n");

}
//@unit 8c02d81c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d81c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    (ar5 * 0x3840,*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02d81c\n.set FUN_8c02d81c, FUN_8c02d81c_def\n");

}
//@unit 8c02d854
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d854");
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
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    uVar4 = *(le<undefined4>* )(unsigned)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0103d0(ar5,uVar4,ar6,ar7));
    if ((iVar2 == 0) && (*(le<int>* )(unsigned)(ar4 + 4) < *(le<int>* )(unsigned)(ar4 + 0xc))) {
      *(le<int>* )(unsigned)(ar4 + 4) = *(le<int>* )(unsigned)(ar4 + 4) + 1;
    }
    uVar3 = *(le<uint>* )(unsigned)(ar4 + 8);
    if (((*(le<uint>* )(unsigned)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = 0x258, 0x258 < ar5)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,uVar4,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar4,100,ar6,ar7));
      if (uVar3 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                          (*(le<undefined4>* )(unsigned)(ar4 + 0x10),10,ar6,ar7));
        *(le<uint>* )(unsigned)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}

__asm__(".globl FUN_8c02d854\n.set FUN_8c02d854, FUN_8c02d854_def\n");

}
//@unit 8c02d8fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d8fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<undefined4>* )(unsigned)(ar4 + 0xc),2,ar6,ar7));
  return (uint)(iVar1 < *(le<int>* )(unsigned)(ar4 + 4));
}

__asm__(".globl FUN_8c02d8fc\n.set FUN_8c02d8fc, FUN_8c02d8fc_def\n");

}
//@unit 8c02d930
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d930");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  
  bVar1 = *(le<int>* )(unsigned)(ar4 + 0x14) != 0;
  if (bVar1) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 1;
  }
  return (uint)bVar1;
}

__asm__(".globl FUN_8c02d930\n.set FUN_8c02d930, FUN_8c02d930_def\n");

}
//@unit 8c02d944
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d944");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((0 < ar5) && (ain0 = 0, *(le<int>* )(unsigned)(ar4 + 0x14) != 0)) {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0xc) - *(le<int>* )(unsigned)(ar4 + 4);
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
    ain0 = *(le<int>* )(unsigned)(ar4 + 0xc) - iVar1;
    *(le<int>* )(unsigned)(ar4 + 4) = ain0;
  }
  return ain0;
}

__asm__(".globl FUN_8c02d944\n.set FUN_8c02d944, FUN_8c02d944_def\n");

}
//@unit 8c02d9f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02d9f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl FUN_8c02d9f4\n.set FUN_8c02d9f4, FUN_8c02d9f4_def\n");

}
//@unit 8c02da0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02da0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02da0c\n.set noop_02da0c, noop_02da0c_def\n");

}
//@unit 8c02da10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02da10");
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

__asm__(".globl FUN_8c02da10\n.set FUN_8c02da10, FUN_8c02da10_def\n");

}
//@unit 8c02da5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02da5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d9f4(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x14) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x16) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x40) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 1;
  *(le<short>* )(unsigned)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined2>* )(unsigned)(ar4 + iVar1 * 2 + 0x22) = *(le<undefined2>* )(unsigned)(iVar1 * 2 + ar7);
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x34) = s0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x30) = s4;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = ar5;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0x270f;
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return ar4;
}

__asm__(".globl FUN_8c02da5c\n.set FUN_8c02da5c, FUN_8c02da5c_def\n");

}
//@unit 8c02db04
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02db04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  bool bVar2;
  
  if (*(le<short>* )(unsigned)(ar4 + 0x20) <= *(le<short>* )(unsigned)(ar4 + 0x16)) {
    if ((int)*(le<short>* )(unsigned)(ar4 + 0x14) != *(le<int>* )(unsigned)(ar4 + 0x30)) {
      *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(ar4,ar5,ar6,ar7));
    if ((char)uVar1 == '\x01') {
      *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(le<int>* )(unsigned)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}

__asm__(".globl FUN_8c02db04\n.set FUN_8c02db04, FUN_8c02db04_def\n");

}
//@unit 8c02db6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02db6c");
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
  ({ unsigned long ri0_ = (unsigned long)(CONCAT31((uint3)((uint)(*(le<undefined4>* )(fr0_ - 0x34)) >> 8) & 0xffff00,1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); noop_02da0c(ar4,ar5,ar6,ar7); });
  *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 0;
  if (*(char *)(unsigned)(ar4 + 0x4c) == '\x01') {
    *(le<int>* )(unsigned)(ar4 + 0x10) = *(le<int>* )(unsigned)(ar4 + 0x10) + 1;
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c1304b0) + ar5 * 0x140);
    iVar4 = *(le<int>* )(unsigned)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    if (*(le<int>* )(unsigned)(ar4 + 0x10) == iVar1) {
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
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<int>* )(unsigned)(ar4 + 0x18) = *(le<int>* )(unsigned)(ar4 + 0x18) + 1;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c02dc8c(ar4,ar5,ar6,ar7));
  }
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  return 0x4c;
}

__asm__(".globl FUN_8c02db6c\n.set FUN_8c02db6c, FUN_8c02db6c_def\n");

}
//@unit 8c02dc8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02dc8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(le<int>* )(unsigned)(ar4 + 0x48) != -1) && (*(le<int>* )(unsigned)(ar4 + 0x48) != 4)) {
    return *(le<int>* )(unsigned)(ar4 + 0x48);
  }
  iVar1 = (int)*(le<short>* )(unsigned)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      if ((*(le<short>* )(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(le<short>* )(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(le<short>* )(unsigned)(ar4 + 0x16) < 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(le<short>* )(unsigned)(ar4 + 0x16) == 2) && (*(char *)(unsigned)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(le<short>* )(unsigned)(ar4 + 0x16) == 0) && (*(char *)(unsigned)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 1;
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(le<int>* )(unsigned)(ar4 + 0x18), *(le<short>* )(unsigned)(ar4 + *(le<short>* )(unsigned)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 1;
    if (*(le<short>* )(unsigned)(ar4 + *(le<short>* )(unsigned)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(le<short>* )(unsigned)(ar4 + 0x16) = *(le<short>* )(unsigned)(ar4 + 0x16) + 1;
    }
    *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
    iVar1 = (int)*(le<short>* )(unsigned)(ar4 + 0x20);
    if (iVar1 <= *(le<short>* )(unsigned)(ar4 + 0x16)) {
      if ((int)*(le<short>* )(unsigned)(ar4 + 0x14) == *(le<int>* )(unsigned)(ar4 + 0x30)) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = 0;
        iVar1 = *(le<short>* )(unsigned)(ar4 + 0x20) + -1;
        *(le<short>* )(unsigned)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(le<short>* )(unsigned)(ar4 + 0x20);
        *(le<short>* )(unsigned)(ar4 + 0x16) = *(le<short>* )(unsigned)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c02dc8c\n.set FUN_8c02dc8c, FUN_8c02dc8c_def\n");

}
//@unit 8c02de00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02de00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(le<int>* )(unsigned)(ar4 + 0x18) = *(le<int>* )(unsigned)(ar4 + 0x18) + 1;
    *(le<int>* )(unsigned)(ar4 + 0x10) = *(le<int>* )(unsigned)(ar4 + 0x10) + ar5;
    if (2 < *(le<int>* )(unsigned)(ar4 + 0x10) - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
      *(undefined1 *)(unsigned)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x10) - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(le<int>* )(unsigned)(ar4 + 0x10) == *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1304a8)) + ar6 * 0x140 + 8)) {
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
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02dc8c(ar4,ar6,iVar3,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c02de00\n.set FUN_8c02de00, FUN_8c02de00_def\n");

}
//@unit 8c02df08
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02df08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl FUN_8c02df08\n.set FUN_8c02df08, FUN_8c02df08_def\n");

}
//@unit 8c02df24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02df24");
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
        *(le<int>* )(unsigned)(ar4 + 4) = *(le<int>* )(unsigned)(ar4 + 4) + 1;
      }
    }
    if ((ar4[0xb] == '\x05') && (2 < *(le<int>* )(unsigned)(ar4 + 4))) {
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

__asm__(".globl FUN_8c02df24\n.set FUN_8c02df24, FUN_8c02df24_def\n");

}
//@unit 8c02dfa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02dfa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02dfa0");
  return (unsigned)sh4_interp(0x8c02dfa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02dfa0\n.set FUN_8c02dfa0, FUN_8c02dfa0_def\n");
}
//@unit 8c02e38c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02e38c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if ((0 < ar5) && (iVar1 = (int)*ar4, iVar1 == 1)) {
    if (ar5 == 1) {
      *(le<int>* )(unsigned)(ar4 + 4) = *(le<int>* )(unsigned)(ar4 + 4) + 1;
    }
    ar4[9] = '\0';
    iVar1 = 3;
    if (2 < *(le<int>* )(unsigned)(ar4 + 4)) {
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

__asm__(".globl FUN_8c02e38c\n.set FUN_8c02e38c, FUN_8c02e38c_def\n");

}
//@unit 8c02e3cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02e3cc");
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

__asm__(".globl FUN_8c02e3cc\n.set FUN_8c02e3cc, FUN_8c02e3cc_def\n");

}
//@unit 8c02e400
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02e400");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; (iVar2 < 5 && (*(le<int>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(ar4 + 0xc)) != -1));
      iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02e400\n.set FUN_8c02e400, FUN_8c02e400_def\n");

}
//@unit 8c02e438
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02e438");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(unsigned)(ar4 + 9) < '\x01') {
    *(char *)(unsigned)(ar4 + 9) = *(char *)(unsigned)(ar4 + 9) + '\x01';
    iVar1 = *(le<int>* )(unsigned)(ar4 + 4) + 1;
    *(le<int>* )(unsigned)(ar4 + 4) = iVar1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02e438\n.set FUN_8c02e438, FUN_8c02e438_def\n");

}
//@unit 8c02e460
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02e460_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02e460");
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

__asm__(".globl FUN_8c02e460\n.set FUN_8c02e460, FUN_8c02e460_def\n");

}
//@unit 8c02e4cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02e4cc_def(le<uint>* ar4,le<int>* ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02e4cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  le<int>* a5;
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
    case 5: ;
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
        (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
        *(byte *)(unsigned)(ar4 + 0xc) = (byte)(((uint)(*(byte *)(fr0_ - 0x48)) << 0x1e) >> 0x1f);
        a5 = (le<int>* )(unsigned)0xffffffe1;
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
            (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x198))))(ar5,a5,ar6,ar7));
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
      (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x198))))(ar5,ar5,ar6,ar7));
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

__asm__(".globl FUN_8c02e4cc\n.set FUN_8c02e4cc, FUN_8c02e4cc_def\n");

}
//@unit 8c02e838
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02e838_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02e838");
  return (unsigned)sh4_interp(0x8c02e838, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02e838\n.set FUN_8c02e838, FUN_8c02e838_def\n");
}
//@unit 8c02e8e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02e8e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  }
  if (*(le<int>* )(unsigned)(ar4 + 0xc) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + -1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0x14) = *(le<int>* )(unsigned)(ar4 + 0x14) + -1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x10) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0x10) = *(le<int>* )(unsigned)(ar4 + 0x10) + -1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x10) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x18) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0x18) = *(le<int>* )(unsigned)(ar4 + 0x18) + -1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x20) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0x20) = *(le<int>* )(unsigned)(ar4 + 0x20) + -1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x1c) != 0) {
    *(le<int>* )(unsigned)(ar4 + 0x1c) = *(le<int>* )(unsigned)(ar4 + 0x1c) + -1;
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c02e8e0\n.set FUN_8c02e8e0, FUN_8c02e8e0_def\n");

}
//@unit 8c02e99c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c02e99c_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02e99c");
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

__asm__(".globl FUN_8c02e99c\n.set FUN_8c02e99c, FUN_8c02e99c_def\n");

}
//@unit 8c02ea00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c02ea00_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ea00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 < 3) {
    if (ar4[1] == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
      *ar4 = *ar4 + 1;
      *(le<undefined4>* )(unsigned)0x8c27d49c = 0;
      if (2 < *ar4) {
        *(le<undefined4>* )(unsigned)0x8c27d49c = 1;
      }
    }
  }
  else if (ar4[2] == 1) {
    *(le<undefined4>* )(unsigned)0x8c27d49c = 2;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
    if (4 < *ar4) {
      return 1;
    }
    *ar4 = *ar4 + 1;
  }
  return 0;
}

__asm__(".globl FUN_8c02ea00\n.set FUN_8c02ea00, FUN_8c02ea00_def\n");

}
//@unit 8c02ea98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ea98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl FUN_8c02ea98\n.set FUN_8c02ea98, FUN_8c02ea98_def\n");

}
//@unit 8c02eaac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02eaac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = 0;
  return 0;
}

__asm__(".globl FUN_8c02eaac\n.set FUN_8c02eaac, FUN_8c02eaac_def\n");

}
//@unit 8c02eac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02eac0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02eac0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ea98(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02eaac(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c02eac0\n.set FUN_8c02eac0, FUN_8c02eac0_def\n");

}
//@unit 8c02eaec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_02eaec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_02eaec\n.set free_if_nonnull_wrap_02eaec, free_if_nonnull_wrap_02eaec_def\n");

}
//@unit 8c02eb1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02eb1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c02eb1c\n.set FUN_8c02eb1c, FUN_8c02eb1c_def\n");

}
//@unit 8c02eb24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_4_02eb24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_02eb24\n.set get_field_4_02eb24, get_field_4_02eb24_def\n");

}
//@unit 8c02eb2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02eb2c");
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
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x10) + -0x46,6,ar6,ar7));
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x14) + -0x50,4,ar6,ar7));
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x18) + -0x50,4,ar6,ar7));
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x24) + -0x3c,8,ar6,ar7));
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x20) + -0x32,0xd,ar6,ar7));
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(le<int>* )(unsigned)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7));
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02eb2c\n.set FUN_8c02eb2c, FUN_8c02eb2c_def\n");

}
//@unit 8c02ebfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ebfc");
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
  *(le<undefined4>* )(unsigned)(ar4 + 8) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02bd9c(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c668(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d4c4(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d478(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d410(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d3e8(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ede0(ar5,uVar2,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = uVar2;
  if (100 < *(le<int>* )(unsigned)(ar4 + 0x14)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 100;
  }
  if (100 < *(le<int>* )(unsigned)(ar4 + 0x18)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 100;
  }
  iVar5 = 0xc7;
  if ((0 < *(le<int>* )(unsigned)(ar4 + 0xc)) && (*(le<int>* )(unsigned)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      ((le<int>* )(fr0_ - 0x38))[iVar5] = 0;
    }
    ((le<int>* )(fr0_ - 0x38))[2] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,2,*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar7));
    ((le<int>* )(fr0_ - 0x38))[3] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,3,*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar7));
    ((le<int>* )(fr0_ - 0x38))[4] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,4,*(le<undefined4>* )(unsigned)(ar4 + 0x18),ar7));
    ((le<int>* )(fr0_ - 0x38))[5] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,5,*(le<undefined4>* )(unsigned)(ar4 + 0x24),ar7));
    ((le<int>* )(fr0_ - 0x38))[6] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,6,*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar7));
    ((le<int>* )(fr0_ - 0x38))[7] = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02ee48(ar4,7,*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar7));
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < ((le<int>* )(fr0_ - 0x38))[iVar6]) {
        iVar4 = ((le<int>* )(fr0_ - 0x38))[iVar6];
        iVar3 = iVar6 * 100 + ((le<int>* )(fr0_ - 0x38))[iVar6];
      }
    }
  }
  return iVar5;
}

__asm__(".globl FUN_8c02ebfc\n.set FUN_8c02ebfc, FUN_8c02ebfc_def\n");

}
//@unit 8c02ede0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ede0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02da10))))
                    (ar4 + 0xa8,*(le<undefined4>* )(unsigned)(0x13c + ar4),ar6,ar7));
  return (char)uVar1 * 0x62;
}

__asm__(".globl FUN_8c02ede0\n.set FUN_8c02ede0, FUN_8c02ede0_def\n");

}
//@unit 8c02ee20
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ee20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ebfc(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c02ee20\n.set FUN_8c02ee20, FUN_8c02ee20_def\n");

}
//@unit 8c02ee48
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ee48");
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
  ar5_00 = 0x65 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2,ar5_00,iVar4,ar7));
  if (ar6 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar2,ar5_00,iVar4,ar7));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      ((ar6 - *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0xc)) *
                       *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 8),
                       *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 4),iVar4,ar7));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                      (uVar2,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x14),iVar4,ar7));
    iVar4 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1327b4)) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}

__asm__(".globl FUN_8c02ee48\n.set FUN_8c02ee48, FUN_8c02ee48_def\n");

}
//@unit 8c02ef60
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ef60");
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

__asm__(".globl FUN_8c02ef60\n.set FUN_8c02ef60, FUN_8c02ef60_def\n");

}
//@unit 8c02efbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02efbc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02efbc");
  return (unsigned)sh4_interp(0x8c02efbc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02efbc\n.set FUN_8c02efbc, FUN_8c02efbc_def\n");
}
//@unit 8c02f064
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02f064_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02f064");
  return (unsigned)sh4_interp(0x8c02f064, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02f064\n.set FUN_8c02f064, FUN_8c02f064_def\n");
}
//@unit 8c02f1b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129c70_m0_02f1b8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129c70_m0_02f1b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
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

__asm__(".globl Class_129c70_m0_02f1b8\n.set Class_129c70_m0_02f1b8, Class_129c70_m0_02f1b8_def\n");

}
//@unit 8c02f20c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f20c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ee20(ar4 + 0x44,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_02eb24(ar4 + 0x44,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f298(ar4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f2c8(ar4,uVar1,ar6,ar7));
  *(undefined1 *)(unsigned)(0x9b + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl FUN_8c02f20c\n.set FUN_8c02f20c, FUN_8c02f20c_def\n");

}
//@unit 8c02f290
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02f290");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02f290\n.set noop_02f290, noop_02f290_def\n");

}
//@unit 8c02f294
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02f294");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02f294\n.set noop_02f294, noop_02f294_def\n");

}
//@unit 8c02f298
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 5;
  if (*(le<int>* )(unsigned)(ar4 + 0x10) < 5) {
    *(le<undefined4>* )(unsigned)(ar4 + *(le<int>* )(unsigned)(ar4 + 0x10) * 4 + 0x14) = ar5;
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0x10) + 1;
    *(le<int>* )(unsigned)(ar4 + 0x10) = iVar1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02f298\n.set FUN_8c02f298, FUN_8c02f298_def\n");

}
//@unit 8c02f2c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f2c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02f2c0\n.set FUN_8c02f2c0, FUN_8c02f2c0_def\n");

}
//@unit 8c02f2c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f2c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(unsigned)(0x91 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f3ac(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(ar4 + 4) == 8) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 8;
  }
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) || (*(le<int>* )(unsigned)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar2;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 8) = uVar1;
    *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
  }
  else if (*(le<int>* )(unsigned)(ar4 + 0x38) == 3) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
    if (*(le<int>* )(unsigned)(ar4 + 8) < iVar3) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,100,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 8) = uVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
      if (*(le<int>* )(unsigned)(ar4 + 4) != iVar3) {
        *(undefined1 *)(unsigned)(0x91 + ar4) = 1;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar1;
        *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 4) == 8) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 8;
  }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl FUN_8c02f2c8\n.set FUN_8c02f2c8, FUN_8c02f2c8_def\n");

}
//@unit 8c02f3ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f3ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x2710;
  for (iVar2 = 0; iVar2 < *(le<int>* )(unsigned)(ar4 + 0x10); iVar2 = iVar2 + 1) {
    if ((*(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x14) < iVar1) && (*(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x14) != 0)) {
      iVar1 = *(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x14);
    }
  }
  if (iVar1 == 0x2710) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c02f3ac\n.set FUN_8c02f3ac, FUN_8c02f3ac_def\n");

}
//@unit 8c02f404
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f404");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c02f404\n.set FUN_8c02f404, FUN_8c02f404_def\n");

}
//@unit 8c02f40c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_1_02f40c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_02f40c\n.set ret_const_1_02f40c, ret_const_1_02f40c_def\n");

}
//@unit 8c02f414
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f414");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (((*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7)),
      iVar1 != 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8)))))
                        (*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7)), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c02f414\n.set FUN_8c02f414, FUN_8c02f414_def\n");

}
//@unit 8c02f46c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_6c_02f46c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x6c);
}

__asm__(".globl get_field_6c_02f46c\n.set get_field_6c_02f46c, get_field_6c_02f46c_def\n");

}
//@unit 8c02f474
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02f474_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02f474");
  return (unsigned)sh4_interp(0x8c02f474, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02f474\n.set FUN_8c02f474, FUN_8c02f474_def\n");
}
//@unit 8c02f670
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02f670");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x30,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c02f670\n.set FUN_8c02f670, FUN_8c02f670_def\n");

}
//@unit 8c02f694
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02f694_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02f694");
  return (unsigned)sh4_interp(0x8c02f694, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02f694\n.set FUN_8c02f694, FUN_8c02f694_def\n");
}
//@unit 8c02f878
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_1b_02f878");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x1b;
}

__asm__(".globl ret_const_1b_02f878\n.set ret_const_1b_02f878, ret_const_1b_02f878_def\n");

}
//@unit 8c02f880
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02f880_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02f880");
  return (unsigned)sh4_interp(0x8c02f880, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02f880\n.set FUN_8c02f880, FUN_8c02f880_def\n");
}
//@unit 8c02fc8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02fc8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  
  bVar1 = *(le<int>* )(unsigned)(ar4 + 0x6c) != 0;
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  return (uint)bVar1;
}

__asm__(".globl FUN_8c02fc8c\n.set FUN_8c02fc8c, FUN_8c02fc8c_def\n");

}
//@unit 8c02fcc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02fcc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02fcc4");
  return (unsigned)sh4_interp(0x8c02fcc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02fcc4\n.set FUN_8c02fcc4, FUN_8c02fcc4_def\n");
}
//@unit 8c02fdd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02fdd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02fdd8");
  return (unsigned)sh4_interp(0x8c02fdd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02fdd8\n.set FUN_8c02fdd8, FUN_8c02fdd8_def\n");
}
//@unit 8c02fec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02fec0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02fec0\n.set ret_const_0_02fec0, ret_const_0_02fec0_def\n");

}
//@unit 8c02fec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02fec8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02fec8\n.set noop_02fec8, noop_02fec8_def\n");

}
//@unit 8c02fecc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02fecc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02fecc\n.set noop_02fecc, noop_02fecc_def\n");

}
//@unit 8c02fed0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02fed0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl FUN_8c02fed0\n.set FUN_8c02fed0, FUN_8c02fed0_def\n");

}
//@unit 8c02feec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02feec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *(le<undefined4>* )(unsigned)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c02feec\n.set FUN_8c02feec, FUN_8c02feec_def\n");

}
//@unit 8c02ff08
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ff08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl FUN_8c02ff08\n.set FUN_8c02ff08, FUN_8c02ff08_def\n");

}
//@unit 8c02ff24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ff24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *(le<undefined4>* )(unsigned)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c02ff24\n.set FUN_8c02ff24, FUN_8c02ff24_def\n");

}
//@unit 8c02ff40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c02ff40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d44(ar4 + 8,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl FUN_8c02ff40\n.set FUN_8c02ff40, FUN_8c02ff40_def\n");

}
//@unit 8c02ff6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c02ff6c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02ff6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129c24));
  return ar4;
}

__asm__(".globl FUN_8c02ff6c\n.set FUN_8c02ff6c, FUN_8c02ff6c_def\n");

}
//@unit 8c02ff90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129c24_m0_02ff90_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129c24_m0_02ff90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129c24);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_129c24_m0_02ff90\n.set Class_129c24_m0_02ff90, Class_129c24_m0_02ff90_def\n");

}
//@unit 8c02ffd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_02ffd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_02ffd8\n.set noop_02ffd8, noop_02ffd8_def\n");

}
//@unit 8c02ffdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02ffdc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02ffdc\n.set ret_const_0_02ffdc, ret_const_0_02ffdc_def\n");

}
//@unit 8c02ffe4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_02ffe4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_02ffe4\n.set ret_const_0_02ffe4, ret_const_0_02ffe4_def\n");

}
//@unit 8c02ffec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c02ffec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c02ffec");
  return (unsigned)sh4_interp(0x8c02ffec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c02ffec\n.set FUN_8c02ffec, FUN_8c02ffec_def\n");
}
