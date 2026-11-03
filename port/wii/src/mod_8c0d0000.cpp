//@unit 8c0d0178
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0178_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0178");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(le<undefined4>* )(unsigned)0x8c4374ac == '\0') {
    *(le<undefined4>* )(unsigned)0x8c4374a8 = 5;
    *(le<undefined4>* )(unsigned)0x8c4374ac = '\x01';
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x28);
  if (iVar1 == 0) {
    if (*(le<int>* )(unsigned)(ar4 + 0x14) == 1) {
      ((le<undefined4>* )(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      ar6 = 9;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((le<undefined4>* )(fr0_ - 0xc))[0],9,ar7));
      ar5 = ((le<undefined4>* )(fr0_ - 0xc));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(le<undefined2>* )(unsigned)(ar4 + 0x2c) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(le<short>* )(unsigned)(ar4 + 0x2c) = *(le<short>* )(unsigned)(ar4 + 0x2c) + 1;
    if (*(le<undefined4>* )(unsigned)0x8c4374a8 <= (int)*(le<short>* )(unsigned)(ar4 + 0x2c)) {
      *(le<undefined2>* )(unsigned)(ar4 + 0x2c) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 2;
    }
    if (*(le<int>* )(unsigned)(ar4 + 0x14) == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 0;
    }
  }
  else if (iVar1 == 2) {
    if (*(le<int>* )(unsigned)(ar4 + 0x34) == -1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x34) = uVar2;
      ar6 = 10;
      ar5 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x34));
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,ar5,10,ar7));
    }
    if ((*(le<int>* )(unsigned)(ar4 + 0x14) == 0) && (*(le<int>* )(unsigned)(ar4 + 0x34) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a60(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x34),ar6,ar7));
      ar5 = (le<undefined4>* )(unsigned)(ar4 + 0x34);
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x34) = 0xffffffff;
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 3;
    }
  }
  else if (iVar1 == 3) {
    ((le<undefined4>* )(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    ar6 = 0xb;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((le<undefined4>* )(fr0_ - 0xc))[0],0xb,ar7));
    ar5 = ((le<undefined4>* )(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d02c8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0d0178\n.set FUN_8c0d0178, FUN_8c0d0178_def\n");

}
//@unit 8c0d02c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d02c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d02c8");
  return (unsigned)sh4_interp(0x8c0d02c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d02c8\n.set FUN_8c0d02c8, FUN_8c0d02c8_def\n");
}
//@unit 8c0d0538
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d0538_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<int>* )(unsigned)(ar4 + 0x14) == 0) && (ar5 == 1)) {
    iVar1 = 0x48;
    *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 1;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0x14);
    if ((iVar1 == 1) && (ar5 == 0)) {
      iVar1 = 0x48;
      *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 2;
    }
  }
  *(le<int>* )(unsigned)(ar4 + 0x14) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0d0538\n.set FUN_8c0d0538, FUN_8c0d0538_def\n");

}
//@unit 8c0d0564
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0564_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0564");
  return (unsigned)sh4_interp(0x8c0d0564, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0564\n.set FUN_8c0d0564, FUN_8c0d0564_def\n");
}
//@unit 8c0d05d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d05d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d05d0");
  return (unsigned)sh4_interp(0x8c0d05d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d05d0\n.set FUN_8c0d05d0, FUN_8c0d05d0_def\n");
}
//@unit 8c0d063c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d063c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d063c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl FUN_8c0d063c\n.set FUN_8c0d063c, FUN_8c0d063c_def\n");

}
//@unit 8c0d064c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d064c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d064c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(ar4 + 0x34) != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a60(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x34),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,ar4 + 0x34,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = 0xffffffff;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl FUN_8c0d064c\n.set FUN_8c0d064c, FUN_8c0d064c_def\n");

}
//@unit 8c0d068c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
s_Failed_to_set_texture_wrap_0d068c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0d068c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0d068c\n.set s_Failed_to_set_texture_wrap_0d068c, s_Failed_to_set_texture_wrap_0d068c_def\n");

}
//@unit 8c0d06a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d06a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d06a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d06a8\n.set s_Failed_wrap_0d06a8, s_Failed_wrap_0d06a8_def\n");

}
//@unit 8c0d06c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d06c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d06c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a60(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x34),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d06c4\n.set FUN_8c0d06c4, FUN_8c0d06c4_def\n");

}
//@unit 8c0d06ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d06ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d06ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x34);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x34),10,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d06ec\n.set FUN_8c0d06ec, FUN_8c0d06ec_def\n");

}
//@unit 8c0d0714
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0714_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0714");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl FUN_8c0d0714\n.set FUN_8c0d0714, FUN_8c0d0714_def\n");

}
//@unit 8c0d0720
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0720_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0720");
  return (unsigned)sh4_interp(0x8c0d0720, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0720\n.set FUN_8c0d0720, FUN_8c0d0720_def\n");
}
//@unit 8c0d0768
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d076c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d076c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x10,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x21,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x10,(&(*(undefined1 *)(unsigned)0x8c13d45c)) + 0x21
                     ,ar4));
  return uVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d076c\n.set s_GRAPHICS_ENV_0d076c, s_GRAPHICS_ENV_0d076c_def\n");

}
//@unit 8c0d07b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d07b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d07b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0a84(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d07b4\n.set FUN_8c0d07b4, FUN_8c0d07b4_def\n");

}
//@unit 8c0d07ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_ENV_0d07f2_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d07f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* ar7_00;
  int iVar1;
  le<undefined*>* ar5_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 2,((undefined1 *)(unsigned)0x8c13d9d8),ar6,ar7); });
  ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13d570));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 8))))(ar4,&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13d570),ar6,ar7));
  ar7_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d4fc),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13d505),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d07f2\n.set s_GRAPHICS_ENV_0d07f2, s_GRAPHICS_ENV_0d07f2_def\n");

}
//@unit 8c0d08c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d08c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d08c0");
  return (unsigned)sh4_interp(0x8c0d08c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d08c0\n.set FUN_8c0d08c0, FUN_8c0d08c0_def\n");
}
//@unit 8c0d0910
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0910");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d08c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d0910\n.set FUN_8c0d0910, FUN_8c0d0910_def\n");

}
//@unit 8c0d092c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d092c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d092c");
  return (unsigned)sh4_interp(0x8c0d092c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d092c\n.set FUN_8c0d092c, FUN_8c0d092c_def\n");
}
//@unit 8c0d0990
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0990_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0990");
  return (unsigned)sh4_interp(0x8c0d0990, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0990\n.set FUN_8c0d0990, FUN_8c0d0990_def\n");
}
//@unit 8c0d09f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d09f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d09f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d09f4\n.set noop_0d09f4, noop_0d09f4_def\n");

}
//@unit 8c0d09f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d09f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d09f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d09f8\n.set noop_0d09f8, noop_0d09f8_def\n");

}
//@unit 8c0d09fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
s_Failed_to_set_texture_wrap_0d09fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0d09fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0d09fc\n.set s_Failed_to_set_texture_wrap_0d09fc, s_Failed_to_set_texture_wrap_0d09fc_def\n");

}
//@unit 8c0d0a18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d0a18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d0a18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d0a18\n.set s_Failed_wrap_0d0a18, s_Failed_wrap_0d0a18_def\n");

}
//@unit 8c0d0a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d0a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d0a34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d0a34\n.set noop_0d0a34, noop_0d0a34_def\n");

}
//@unit 8c0d0a38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d0a38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d0a38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d0a38\n.set noop_0d0a38, noop_0d0a38_def\n");

}
//@unit 8c0d0a3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0a3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0a3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0d0a3c\n.set FUN_8c0d0a3c, FUN_8c0d0a3c_def\n");

}
//@unit 8c0d0a44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0a44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0a44");
  return (unsigned)sh4_interp(0x8c0d0a44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0a44\n.set FUN_8c0d0a44, FUN_8c0d0a44_def\n");
}
//@unit 8c0d0a84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0a84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0a84");
  return (unsigned)sh4_interp(0x8c0d0a84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0a84\n.set FUN_8c0d0a84, FUN_8c0d0a84_def\n");
}
//@unit 8c0d0aac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0aac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 1;
  return 1;
}

__asm__(".globl FUN_8c0d0aac\n.set FUN_8c0d0aac, FUN_8c0d0aac_def\n");

}
//@unit 8c0d0ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0ab4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0ab4");
  return (unsigned)sh4_interp(0x8c0d0ab4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0ab4\n.set FUN_8c0d0ab4, FUN_8c0d0ab4_def\n");
}
//@unit 8c0d0abc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d0abc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0abc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = 0x8c1297f4;
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d0abc\n.set FUN_8c0d0abc, FUN_8c0d0abc_def\n");

}
//@unit 8c0d0b04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0b04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014f74(ar4,ar5,ar6,ar7));
  if (0x3aaaaaa < *(le<uint>* )(unsigned)(ar4 + 0x40)) {
    uVar1 = 0x40;
    *(le<int>* )(unsigned)(ar4 + 0x40) = *(le<int>* )(unsigned)(ar4 + 0x40) - 0x1000000;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014d90(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0d0b04\n.set FUN_8c0d0b04, FUN_8c0d0b04_def\n");

}
//@unit 8c0d0b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0b58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  ar5_00 = ((void *)(unsigned)0x8c014ab0);
  ar6_00 = ((void *)(unsigned)0x8c0d0abc);
  ar7_00 = 0xac;
  ({ unsigned long t0_ = (unsigned long)(0x15e); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0xc,((void *)(unsigned)0x8c014ab0),((void *)(unsigned)0x8c0d0abc),0xac); })
  ;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02145c(ar4 + 0xeb48,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1564(ar4,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl FUN_8c0d0b58\n.set FUN_8c0d0b58, FUN_8c0d0b58_def\n");

}
//@unit 8c0d0bcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0d0bd2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0d0bd2");
  return (unsigned)sh4_interp(0x8c0d0bcc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0d0bd2\n.set s_GRAPHICS_ENV_0d0bd2, s_GRAPHICS_ENV_0d0bd2_def\n");
}
//@unit 8c0d0d0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d0d0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d0d0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x78) = (undefined1)ar5;
  return 0x78;
}

__asm__(".globl FUN_8c0d0d0c\n.set FUN_8c0d0d0c, FUN_8c0d0d0c_def\n");

}
//@unit 8c0d0d1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d0d1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d0d1c");
  return (unsigned)sh4_interp(0x8c0d0d1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d0d1c\n.set FUN_8c0d0d1c, FUN_8c0d0d1c_def\n");
}
//@unit 8c0d1058
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_100_0d1058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_100_0d1058");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 100);
}

__asm__(".globl get_field_100_0d1058\n.set get_field_100_0d1058, get_field_100_0d1058_def\n");

}
//@unit 8c0d1060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1060");
  return (unsigned)sh4_interp(0x8c0d1060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1060\n.set FUN_8c0d1060, FUN_8c0d1060_def\n");
}
//@unit 8c0d1168
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1168_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1168");
  return (unsigned)sh4_interp(0x8c0d1168, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1168\n.set FUN_8c0d1168, FUN_8c0d1168_def\n");
}
//@unit 8c0d1450
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d1450_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1450");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0d1450\n.set FUN_8c0d1450, FUN_8c0d1450_def\n");

}
//@unit 8c0d1458
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d1458_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1458");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xeb60;
  *(le<undefined4>* )(unsigned)(0xeb60 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0d1458\n.set FUN_8c0d1458, FUN_8c0d1458_def\n");

}
//@unit 8c0d1468
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d1468_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1468");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a60(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0xeb4c + ar4),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,ar4 + 0xeb4c,ar6,ar7));
    iVar1 = 0xeb4c;
    *(le<undefined4>* )(unsigned)(0xeb4c + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d1468\n.set FUN_8c0d1468, FUN_8c0d1468_def\n");

}
//@unit 8c0d14b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
s_Failed_to_set_texture_wrap_0d14b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0d14b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0d14b0\n.set s_Failed_to_set_texture_wrap_0d14b0, s_Failed_to_set_texture_wrap_0d14b0_def\n");

}
//@unit 8c0d14cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d14cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d14cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d14cc\n.set s_Failed_wrap_0d14cc, s_Failed_wrap_0d14cc_def\n");

}
//@unit 8c0d14e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d14e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d14e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021a60(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0xeb4c + ar4),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d14e8\n.set FUN_8c0d14e8, FUN_8c0d14e8_def\n");

}
//@unit 8c0d1518
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d1518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1518");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0xeb4c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0xeb4c + ar4),5,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d1518\n.set FUN_8c0d1518, FUN_8c0d1518_def\n");

}
//@unit 8c0d1548
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d1548_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1564(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d1548\n.set FUN_8c0d1548, FUN_8c0d1548_def\n");

}
//@unit 8c0d1564
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1564_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1564");
  return (unsigned)sh4_interp(0x8c0d1564, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1564\n.set FUN_8c0d1564, FUN_8c0d1564_def\n");
}
//@unit 8c0d15c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d15c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d15c4");
  return (unsigned)sh4_interp(0x8c0d15c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d15c4\n.set FUN_8c0d15c4, FUN_8c0d15c4_def\n");
}
//@unit 8c0d167c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d167c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d167c");
  return (unsigned)sh4_interp(0x8c0d167c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d167c\n.set FUN_8c0d167c, FUN_8c0d167c_def\n");
}
//@unit 8c0d1754
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1754_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1754");
  return (unsigned)sh4_interp(0x8c0d1754, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1754\n.set FUN_8c0d1754, FUN_8c0d1754_def\n");
}
//@unit 8c0d1858
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1858_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1858");
  return (unsigned)sh4_interp(0x8c0d1858, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1858\n.set FUN_8c0d1858, FUN_8c0d1858_def\n");
}
//@unit 8c0d19dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d19dc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d19dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int a5;
  int a6;
  
  a5 = ar4;
  a6 = ar5;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,ar4,ar5,ar7));
  if (a4 != 0) {
    if ((ar4 < 0x10) && (-1 < ar4)) {
                    
      switch((uint)ar4) {
      default:
        a6 = 0;
        a5 = -0x73c14ccc;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
        break;
      case 3:
        break;
      }
    }
    if ((ar4 == 3) && (ar5 == 2)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 3)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 3) && (ar5 == 4)) {
      a6 = 6;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,6,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 6)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 5) && (ar5 == 7)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x11)) {
      a6 = 0;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,0,ar7));
    }
    else if ((ar4 == 10) && (ar5 == 0x13)) {
      a6 = 3;
      a5 = -0x73c14ccc;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0xe0))))(a4,0x8c3eb334,3,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x5c))))(a4,a5,a6,ar7));
  }
  return a4;
}

__asm__(".globl FUN_8c0d19dc\n.set FUN_8c0d19dc, FUN_8c0d19dc_def\n");

}
//@unit 8c0d1b90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d1b90_def(le<int>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1b90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    a5 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(*ar4,ar5,ar6,ar7));
    if (ar5 == 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(*ar4 + 8)))))(*ar4,a5,ar6,ar7));
      ar6 = (int)(short)uVar1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xec + *(le<int>* )(unsigned)(*ar4 + 8)))))(*ar4,0x8c3eb334,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar4 + 8) + 0x58))))(*ar4,0x8c3eb324,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(0x8c3eb324,ar4,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0d1b90\n.set FUN_8c0d1b90, FUN_8c0d1b90_def\n");

}
//@unit 8c0d1c14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c0d1c14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1c14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = 0x8c437864;
  *(le<undefined4>* )(unsigned)0x8c437864 = (undefined1)ar4;
  return puVar1;
}

__asm__(".globl FUN_8c0d1c14\n.set FUN_8c0d1c14, FUN_8c0d1c14_def\n");

}
//@unit 8c0d1c20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c0d1c20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1c20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  *(le<undefined4>* )(unsigned)0x8c43785c = ar4;
  *(le<undefined4>* )(unsigned)0x8c437860 = ar5;
  puVar1 = 0x8c437864;
  *(le<undefined4>* )(unsigned)0x8c437864 = (undefined1)ar6;
  return puVar1;
}

__asm__(".globl FUN_8c0d1c20\n.set FUN_8c0d1c20, FUN_8c0d1c20_def\n");

}
//@unit 8c0d1c3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d1c3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1c3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)0x8c431a50 = 1;
  if ((*(le<undefined4>* )(unsigned)0x8c437864 == '\0') || (*(le<undefined4>* )(unsigned)0x8c437864 == '\x01')) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5e2c(ar4,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c20a1d0(0x8c43786c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d1c3c\n.set FUN_8c0d1c3c, FUN_8c0d1c3c_def\n");

}
//@unit 8c0d1c84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1c84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1c84");
  return (unsigned)sh4_interp(0x8c0d1c84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1c84\n.set FUN_8c0d1c84, FUN_8c0d1c84_def\n");
}
//@unit 8c0d1d54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1d54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1d54");
  return (unsigned)sh4_interp(0x8c0d1d54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1d54\n.set FUN_8c0d1d54, FUN_8c0d1d54_def\n");
}
//@unit 8c0d1eb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d1eb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d1eb8");
  return (unsigned)sh4_interp(0x8c0d1eb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d1eb8\n.set FUN_8c0d1eb8, FUN_8c0d1eb8_def\n");
}
//@unit 8c0d1f38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d1f38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d1f38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x2790 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x278c + ar4) = 0;
  for (iVar1 = 0; iVar1 < 10; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013fb4(iVar1 * 0xf0 + ar4 + 0x2794,0x8c437b48,0xf0,ar7));
  }
  return 10;
}

__asm__(".globl FUN_8c0d1f38\n.set FUN_8c0d1f38, FUN_8c0d1f38_def\n");

}
//@unit 8c0d1fa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_ENV_0d1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d1fa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  le<undefined*>* ar5_00;
  
  ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f33c));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); Class_129920_m0_015248(0x8c4377f4,&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f33c),ar6,ar7); });
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(0x8c4377f4,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar4,((undefined1 *)(unsigned)0x8c13f8be),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    iVar1 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13f8d8),
                       ((undefined1 *)(unsigned)0x8c13f8fe),0,2);
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d1fa0\n.set s_GRAPHICS_ENV_0d1fa0, s_GRAPHICS_ENV_0d1fa0_def\n");

}
//@unit 8c0d2028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d2028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d2028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(0x8c4377f4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(0x8c4377f4,0,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d2028\n.set FUN_8c0d2028, FUN_8c0d2028_def\n");

}
//@unit 8c0d2050
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d2050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d2050");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 0x10,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 0x2c) = 0xffffffff;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d25a0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d20bc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d2050\n.set FUN_8c0d2050, FUN_8c0d2050_def\n");

}
//@unit 8c0d20bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d20bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d20bc");
  return (unsigned)sh4_interp(0x8c0d20bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d20bc\n.set FUN_8c0d20bc, FUN_8c0d20bc_def\n");
}
//@unit 8c0d20f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d20f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d20f0");
  return (unsigned)sh4_interp(0x8c0d20f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d20f0\n.set FUN_8c0d20f0, FUN_8c0d20f0_def\n");
}
//@unit 8c0d21a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d21a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d21a0");
  return (unsigned)sh4_interp(0x8c0d21a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d21a0\n.set FUN_8c0d21a0, FUN_8c0d21a0_def\n");
}
//@unit 8c0d2264
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2264_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2264");
  return (unsigned)sh4_interp(0x8c0d2264, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2264\n.set FUN_8c0d2264, FUN_8c0d2264_def\n");
}
//@unit 8c0d2478
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2478_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2478");
  return (unsigned)sh4_interp(0x8c0d2478, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2478\n.set FUN_8c0d2478, FUN_8c0d2478_def\n");
}
//@unit 8c0d25a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d25a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d25a0");
  return (unsigned)sh4_interp(0x8c0d25a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d25a0\n.set FUN_8c0d25a0, FUN_8c0d25a0_def\n");
}
//@unit 8c0d25b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d25b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d25b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ff0(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a0c(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a20(ar4 + 0x48,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d25b4\n.set FUN_8c0d25b4, FUN_8c0d25b4_def\n");

}
//@unit 8c0d261c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d261c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d261c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 uVar1;
  undefined4 ar4_00;
  
  uVar1 = ar6;
  ar4_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4_00,ar5,uVar1,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar4_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x48,ar5_00,uVar1,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar4_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x48,ar6,uVar1,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d267c(ar4 + 0x48,ar6,uVar1,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d261c\n.set FUN_8c0d261c, FUN_8c0d261c_def\n");

}
//@unit 8c0d267c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0d267c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d267c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28) | 2;
  *(le<uint>* )(unsigned)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0d267c\n.set FUN_8c0d267c, FUN_8c0d267c_def\n");

}
//@unit 8c0d2690
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d2690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d2690");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2f14(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d2690\n.set FUN_8c0d2690, FUN_8c0d2690_def\n");

}
//@unit 8c0d26ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d26ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d26ac");
  return (unsigned)sh4_interp(0x8c0d26ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d26ac\n.set FUN_8c0d26ac, FUN_8c0d26ac_def\n");
}
//@unit 8c0d26f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d26f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d26f0");
  return (unsigned)sh4_interp(0x8c0d26f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d26f0\n.set FUN_8c0d26f0, FUN_8c0d26f0_def\n");
}
//@unit 8c0d276c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d276c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d276c");
  return (unsigned)sh4_interp(0x8c0d276c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d276c\n.set FUN_8c0d276c, FUN_8c0d276c_def\n");
}
//@unit 8c0d294c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d294c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d294c");
  return (unsigned)sh4_interp(0x8c0d294c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d294c\n.set FUN_8c0d294c, FUN_8c0d294c_def\n");
}
//@unit 8c0d2c84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2c84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2c84");
  return (unsigned)sh4_interp(0x8c0d2c84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2c84\n.set FUN_8c0d2c84, FUN_8c0d2c84_def\n");
}
//@unit 8c0d2f04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2f04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2f04");
  return (unsigned)sh4_interp(0x8c0d2f04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2f04\n.set FUN_8c0d2f04, FUN_8c0d2f04_def\n");
}
//@unit 8c0d2f14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2f14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2f14");
  return (unsigned)sh4_interp(0x8c0d2f14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2f14\n.set FUN_8c0d2f14, FUN_8c0d2f14_def\n");
}
//@unit 8c0d2fc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2fc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2fc0");
  return (unsigned)sh4_interp(0x8c0d2fc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2fc0\n.set FUN_8c0d2fc0, FUN_8c0d2fc0_def\n");
}
//@unit 8c0d2fd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d2fd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d2fd8");
  return (unsigned)sh4_interp(0x8c0d2fd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d2fd8\n.set FUN_8c0d2fd8, FUN_8c0d2fd8_def\n");
}
//@unit 8c0d3304
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d3304_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d3304");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4b3c(ar4 + 0x48,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d3304\n.set FUN_8c0d3304, FUN_8c0d3304_def\n");

}
//@unit 8c0d336c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d336c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d336c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d336c\n.set FUN_8c0d336c, FUN_8c0d336c_def\n");

}
//@unit 8c0d33bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d33bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d33bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe4f8(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d33bc\n.set FUN_8c0d33bc, FUN_8c0d33bc_def\n");

}
//@unit 8c0d33e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_COMMON_0d33f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_COMMON_0d33f4");
  return (unsigned)sh4_interp(0x8c0d33e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_COMMON_0d33f4\n.set s_GRAPHICS_COMMON_0d33f4, s_GRAPHICS_COMMON_0d33f4_def\n");
}
//@unit 8c0d3770
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_COMMON_0d377a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_COMMON_0d377a");
  return (unsigned)sh4_interp(0x8c0d3770, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_COMMON_0d377a\n.set s_GRAPHICS_COMMON_0d377a, s_GRAPHICS_COMMON_0d377a_def\n");
}
//@unit 8c0d39e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d39ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d39ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  char *ar6_00;
  undefined4 a7;
  int iVar3;
  
  (*(le<undefined4>* )(fr0_ - 0x1c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13f4e8);
  (*(le<undefined4>* )(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13f4ec);
  (*(le<undefined4>* )(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13f4f0);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c21279c(0,&(*(le<undefined4>* )(fr0_ - 0x1c)),ar4 + 0x5d8,ar7); });
  for (iVar3 = 0; iVar3 < 0x19; iVar3 = iVar3 + 1) {
    *(le<uint>* )(unsigned)(iVar3 * 0xc + -0x73bc8950) = *(le<uint>* )(unsigned)(iVar3 * 0xc + -0x73bc8950) | 0x80000000;
  }
  a7 = 0x19;
  uVar2 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(0x8c4376a4,0x8c4376ac,0x8c4312a8,0x19));
  uVar1 = 0x8c4376a4;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 8))))((le<int>* )(unsigned)(ar4 + 8),0x8c4376a4,uVar2,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 8,uVar1,uVar2,a7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,ar6,((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fab9),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  for (iVar3 = 0; iVar3 < 0x3c; iVar3 = iVar3 + 1) {
    *(le<uint>* )(unsigned)(iVar3 * 0xc + ar4 + 0x164) = *(le<uint>* )(unsigned)(iVar3 * 0xc + ar4 + 0x164) | 0x80000000;
  }
  uVar2 = 0x3c;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c239170(ar4 + 0x158,ar4 + 0x160,0x8c4312a8,0x3c));
  iVar3 = ar4 + 0x158;
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x108) + 8))))((le<int>* )(unsigned)(ar4 + 0x108),iVar3,uVar1,uVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(ar4 + 0x108,iVar3,uVar1,uVar2));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13faf0),((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar3 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fafa),((undefined1 *)(unsigned)0x8c13fadd),0,2);
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c13f164);
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c015ad4(ar4 + 0x154,((undefined1 *)(unsigned)0x8c13f164),ar6_00,uVar1); });
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c015bb8(ar4 + 0x1c,ar5_00,ar6_00,uVar1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0151fc(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 4) + 4),ar5_00,ar6_00,uVar1));
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0d5de0(ar4,ar5_00,ar6_00,uVar1));
  return 1;
}

__asm__(".globl s_GRAPHICS_ENV_0d39ea\n.set s_GRAPHICS_ENV_0d39ea, s_GRAPHICS_ENV_0d39ea_def\n");

}
//@unit 8c0d3c08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d3c08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d3c08");
  return (unsigned)sh4_interp(0x8c0d3c08, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d3c08\n.set FUN_8c0d3c08, FUN_8c0d3c08_def\n");
}
//@unit 8c0d3d64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_40_0d3d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_40_0d3d64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x40);
}

__asm__(".globl get_field_40_0d3d64\n.set get_field_40_0d3d64, get_field_40_0d3d64_def\n");

}
//@unit 8c0d3d6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d3d6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d3d6c");
  return (unsigned)sh4_interp(0x8c0d3d6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d3d6c\n.set FUN_8c0d3d6c, FUN_8c0d3d6c_def\n");
}
//@unit 8c0d3f48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 list_node_next_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("list_node_next");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl list_node_next\n.set list_node_next, list_node_next_def\n");

}
//@unit 8c0d3f50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d3f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d3f50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d3f50\n.set FUN_8c0d3f50, FUN_8c0d3f50_def\n");

}
//@unit 8c0d3f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_d0_0d3f70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_d0_0d3f70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xd0 + ar4);
}

__asm__(".globl get_field_d0_0d3f70\n.set get_field_d0_0d3f70, get_field_d0_0d3f70_def\n");

}
//@unit 8c0d3f7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d3f7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d3f7c");
  return (unsigned)sh4_interp(0x8c0d3f7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d3f7c\n.set FUN_8c0d3f7c, FUN_8c0d3f7c_def\n");
}
//@unit 8c0d400c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d400c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d400c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) = 0x80ffffff;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d4038(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d400c\n.set FUN_8c0d400c, FUN_8c0d400c_def\n");

}
//@unit 8c0d4038
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4038_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4038");
  return (unsigned)sh4_interp(0x8c0d4038, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4038\n.set FUN_8c0d4038, FUN_8c0d4038_def\n");
}
//@unit 8c0d4124
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4124_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4124");
  return (unsigned)sh4_interp(0x8c0d4124, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4124\n.set FUN_8c0d4124, FUN_8c0d4124_def\n");
}
//@unit 8c0d43cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d43cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d43cc");
  return (unsigned)sh4_interp(0x8c0d43cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d43cc\n.set FUN_8c0d43cc, FUN_8c0d43cc_def\n");
}
//@unit 8c0d4428
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4428_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4428");
  return (unsigned)sh4_interp(0x8c0d4428, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4428\n.set FUN_8c0d4428, FUN_8c0d4428_def\n");
}
//@unit 8c0d46cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d46cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d46cc");
  return (unsigned)sh4_interp(0x8c0d46cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d46cc\n.set FUN_8c0d46cc, FUN_8c0d46cc_def\n");
}
//@unit 8c0d4900
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4900_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4900");
  return (unsigned)sh4_interp(0x8c0d4900, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4900\n.set FUN_8c0d4900, FUN_8c0d4900_def\n");
}
//@unit 8c0d49cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d49cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d49cc");
  return (unsigned)sh4_interp(0x8c0d49cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d49cc\n.set FUN_8c0d49cc, FUN_8c0d49cc_def\n");
}
//@unit 8c0d4a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4a90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4a90");
  return (unsigned)sh4_interp(0x8c0d4a90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4a90\n.set FUN_8c0d4a90, FUN_8c0d4a90_def\n");
}
//@unit 8c0d4bd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_3c_0d4bd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_3c_0d4bd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x3c);
}

__asm__(".globl get_field_3c_0d4bd4\n.set get_field_3c_0d4bd4, get_field_3c_0d4bd4_def\n");

}
//@unit 8c0d4bdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4bdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4bdc");
  return (unsigned)sh4_interp(0x8c0d4bdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4bdc\n.set FUN_8c0d4bdc, FUN_8c0d4bdc_def\n");
}
//@unit 8c0d4c74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4c74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4c74");
  return (unsigned)sh4_interp(0x8c0d4c74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4c74\n.set FUN_8c0d4c74, FUN_8c0d4c74_def\n");
}
//@unit 8c0d4e7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d4e7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d4e7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl FUN_8c0d4e7c\n.set FUN_8c0d4e7c, FUN_8c0d4e7c_def\n");

}
//@unit 8c0d4e88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4e88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4e88");
  return (unsigned)sh4_interp(0x8c0d4e88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4e88\n.set FUN_8c0d4e88, FUN_8c0d4e88_def\n");
}
//@unit 8c0d4f3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4f3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4f3c");
  return (unsigned)sh4_interp(0x8c0d4f3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4f3c\n.set FUN_8c0d4f3c, FUN_8c0d4f3c_def\n");
}
//@unit 8c0d4f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d4f70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d4f70");
  return (unsigned)sh4_interp(0x8c0d4f70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d4f70\n.set FUN_8c0d4f70, FUN_8c0d4f70_def\n");
}
//@unit 8c0d4fa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d4fa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d4fa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_40_BUBBLE_MONO_0d4fea(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5040(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0d4fa8\n.set FUN_8c0d4fa8, FUN_8c0d4fa8_def\n");

}
//@unit 8c0d4fe8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_40_BUBBLE_MONO_0d4fea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_40_BUBBLE_MONO_0d4fea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f14(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x359,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x5e4 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl s_40_BUBBLE_MONO_0d4fea\n.set s_40_BUBBLE_MONO_0d4fea, s_40_BUBBLE_MONO_0d4fea_def\n");

}
//@unit 8c0d5040
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5040");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x368,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x5e4 + ar4) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,0x1f4,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d5040\n.set FUN_8c0d5040, FUN_8c0d5040_def\n");

}
//@unit 8c0d50a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d50a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d50a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d50a0\n.set FUN_8c0d50a0, FUN_8c0d50a0_def\n");

}
//@unit 8c0d50b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d50b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d50b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220bc(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d50b4\n.set FUN_8c0d50b4, FUN_8c0d50b4_def\n");

}
//@unit 8c0d50ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d50ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d50ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d512c(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d51ec(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0d50ec\n.set FUN_8c0d50ec, FUN_8c0d50ec_def\n");

}
//@unit 8c0d512c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d512c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d512c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021a60))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021a8c(0x8c2b59d0,iVar1 * 0x18 + ar4 + 0x600,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4) = 0xffffffff;
    }
  }
  return 2;
}

__asm__(".globl FUN_8c0d512c\n.set FUN_8c0d512c, FUN_8c0d512c_def\n");

}
//@unit 8c0d51ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d51ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d51ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,0,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d512c(ar4,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d51ec\n.set FUN_8c0d51ec, FUN_8c0d51ec_def\n");

}
//@unit 8c0d5218
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0d5220_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0d5220");
  return (unsigned)sh4_interp(0x8c0d5218, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0d5220\n.set s_GRAPHICS_ENV_0d5220, s_GRAPHICS_ENV_0d5220_def\n");
}
//@unit 8c0d5578
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5578_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5578");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x108,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d5578\n.set FUN_8c0d5578, FUN_8c0d5578_def\n");

}
//@unit 8c0d55a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d55a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d55a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 8,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x108,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d55a4\n.set FUN_8c0d55a4, FUN_8c0d55a4_def\n");

}
//@unit 8c0d55d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d55d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d55d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x618 + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021994(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x618 + ar4),1,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d55d0\n.set FUN_8c0d55d0, FUN_8c0d55d0_def\n");

}
//@unit 8c0d5614
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5614");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021a60))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x600 + iVar1 * 0x18 + ar4),ar6,ar7));
    }
  }
  return 2;
}

__asm__(".globl FUN_8c0d5614\n.set FUN_8c0d5614, FUN_8c0d5614_def\n");

}
//@unit 8c0d568c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d568c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d568c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d568c\n.set FUN_8c0d568c, FUN_8c0d568c_def\n");

}
//@unit 8c0d56b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d56b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d56b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x5e4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d56b4\n.set FUN_8c0d56b4, FUN_8c0d56b4_def\n");

}
//@unit 8c0d56dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d56dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d56dc");
  return (unsigned)sh4_interp(0x8c0d56dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d56dc\n.set FUN_8c0d56dc, FUN_8c0d56dc_def\n");
}
//@unit 8c0d57e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d57ee_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d57ee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<undefined4>* ar5_00;
  undefined4 ar5_01;
  char *pcVar3;
  
  uVar2 = CONCAT31((int3)((uint)(*(le<undefined4>* )(fr0_ - 0x24)) >> 8),(char)ar6);
  ((le<undefined4>* )(fr0_ - 0x14))[0] = 0;
  ar5_00 = ar5;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    ((le<undefined4>* )(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_GetWaterSnowO_0fe76c(ar4 + 0x34,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_TakeOut_0fe694(ar4 + 0x34,((le<undefined4>* )(fr0_ - 0x14))[0],ar6,ar7));
    ar5_00 = ((le<undefined4>* )(fr0_ - 0x14));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fec4c(0x8c3e7d30,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fe7f4(ar4 + 0x34,ar5_00,ar6,ar7));
  if ((char)uVar2 == '\x02') {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ar5_01 = 0;
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), s_Failed_s_015312(ar4 + 0x12a5c,ar5_01,pcVar3,iVar1));
  }
  return uVar2;
}

__asm__(".globl s_GRAPHICS_ENV_0d57ee\n.set s_GRAPHICS_ENV_0d57ee, s_GRAPHICS_ENV_0d57ee_def\n");

}
//@unit 8c0d59a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d59a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d59a4");
  return (unsigned)sh4_interp(0x8c0d59a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d59a4\n.set FUN_8c0d59a4, FUN_8c0d59a4_def\n");
}
//@unit 8c0d5c58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d5c58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d5c58");
  return (unsigned)sh4_interp(0x8c0d5c58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d5c58\n.set FUN_8c0d5c58, FUN_8c0d5c58_def\n");
}
//@unit 8c0d5c68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5c68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5c68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d5c68\n.set FUN_8c0d5c68, FUN_8c0d5c68_def\n");

}
//@unit 8c0d5c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5c88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5c88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 1;
  return 0x44;
}

__asm__(".globl FUN_8c0d5c88\n.set FUN_8c0d5c88, FUN_8c0d5c88_def\n");

}
//@unit 8c0d5c94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_164_0d5c94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_164_0d5c94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x164 + ar4);
}

__asm__(".globl get_field_164_0d5c94\n.set get_field_164_0d5c94, get_field_164_0d5c94_def\n");

}
//@unit 8c0d5ca0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_44_0d5ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_44_0d5ca0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x44);
}

__asm__(".globl get_field_44_0d5ca0\n.set get_field_44_0d5ca0, get_field_44_0d5ca0_def\n");

}
//@unit 8c0d5ca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d5ca8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d5ca8");
  return (unsigned)sh4_interp(0x8c0d5ca8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d5ca8\n.set FUN_8c0d5ca8, FUN_8c0d5ca8_def\n");
}
//@unit 8c0d5d28
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d5d28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5d28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(0x8c437840 + 2) == '2') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f51c)),ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f50c)),ar5,ar6,ar7));
  }
  for (iVar3 = 0; iVar3 < 0x226; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d5ca0))))
                      (iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      ar5 = ar4 + 0x12a5c;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d2c84(iVar3 * 0x88 + ar4 + 0x62c,ar5,ar6,ar7));
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac((&(*(undefined1 *)(unsigned)0x8c13f320)),ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0d5d28\n.set FUN_8c0d5d28, FUN_8c0d5d28_def\n");

}
//@unit 8c0d5de0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d5de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5de0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(ar4 + 0x10,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0151d0))))
                    (*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 4) + 4),0x17,ar6,ar7));
  *(le<int>* )(unsigned)(ar4 + 0x14) = iVar1 + 4;
  return iVar1;
}

__asm__(".globl FUN_8c0d5de0\n.set FUN_8c0d5de0, FUN_8c0d5de0_def\n");

}
//@unit 8c0d5e2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d5e2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d5e2c");
  return (unsigned)sh4_interp(0x8c0d5e2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d5e2c\n.set FUN_8c0d5e2c, FUN_8c0d5e2c_def\n");
}
//@unit 8c0d5e9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d5e9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d5e9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d60b8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d5e9c\n.set FUN_8c0d5e9c, FUN_8c0d5e9c_def\n");

}
//@unit 8c0d5ee0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_ENV_0d5ee6_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d5ee6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 ar7_00;
  le<int>* ar5_00;
  char *ar6_00;
  le<le<int>*>* ar7_01;
  uint uVar3;
  
  ((le<undefined4>* )(fr0_ - 0x14))[0] = 0;
  (*(le<unsigned>* )(fr0_ - 0x18) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),((le<undefined4>* )(fr0_ - 0x14))));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbaa),0,2));
  }
  ar7_01 = (le<le<int>*>*)(((le<int>*  *)(fr0_ - 0x18)));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar2 == 0) {
    ar7_01 = (le<le<int>*>* )(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 48)), report_error_message(((undefined1 *)(unsigned)0x8c13fb9e),((undefined1 *)(unsigned)0x8c13fbd2),0,2));
  }
  uVar1 = 0;
  while (uVar3 = uVar1, uVar3 < (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18))[1]) {
    *(le<uint>* )(unsigned)(uVar3 * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) + 4) = *(le<uint>* )(unsigned)(uVar3 * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) + 4) | 0x80000000
    ;
    (*(le<uint>* )(fr0_ - 0x30)) = uVar3;
    uVar1 = uVar3 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c015ad4(ar4 + 2,((le<undefined4>* )(fr0_ - 0x14))[0],ar6_00,ar7_01); });
  ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 8))))(ar4,((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)),ar6_00,ar7_01));
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fbfa),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar2 == 0) {
    iVar2 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13fc05),((undefined1 *)(unsigned)0x8c13fc1c),0,2);
  }
  return iVar2;
}

__asm__(".globl s_GRAPHICS_ENV_0d5ee6\n.set s_GRAPHICS_ENV_0d5ee6, s_GRAPHICS_ENV_0d5ee6_def\n");

}
//@unit 8c0d6058
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
s_Failed_to_set_texture_wrap_0d6058_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0d6058");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0d6058\n.set s_Failed_to_set_texture_wrap_0d6058, s_Failed_to_set_texture_wrap_0d6058_def\n");

}
//@unit 8c0d6074
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d6074_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d6074");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d6074\n.set s_Failed_wrap_0d6074, s_Failed_wrap_0d6074_def\n");

}
//@unit 8c0d6090
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d6090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d6090");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d6090\n.set FUN_8c0d6090, FUN_8c0d6090_def\n");

}
//@unit 8c0d60b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d60b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d60b8");
  return (unsigned)sh4_interp(0x8c0d60b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d60b8\n.set FUN_8c0d60b8, FUN_8c0d60b8_def\n");
}
//@unit 8c0d60c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d60cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d60cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x3de,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x3de,
                     (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  return uVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d60cc\n.set s_GRAPHICS_ENV_0d60cc, s_GRAPHICS_ENV_0d60cc_def\n");

}
//@unit 8c0d611c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d611c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d611c");
  return (unsigned)sh4_interp(0x8c0d611c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d611c\n.set FUN_8c0d611c, FUN_8c0d611c_def\n");
}
//@unit 8c0d6164
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6164_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6164");
  return (unsigned)sh4_interp(0x8c0d6164, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6164\n.set FUN_8c0d6164, FUN_8c0d6164_def\n");
}
//@unit 8c0d6264
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6264_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6264");
  return (unsigned)sh4_interp(0x8c0d6264, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6264\n.set FUN_8c0d6264, FUN_8c0d6264_def\n");
}
//@unit 8c0d63c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_0d63c0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0d63c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c12c3a4), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0d63c0\n.set free_if_nonnull_wrap_0d63c0, free_if_nonnull_wrap_0d63c0_def\n");

}
//@unit 8c0d63f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d63f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d63f8");
  return (unsigned)sh4_interp(0x8c0d63f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d63f8\n.set FUN_8c0d63f8, FUN_8c0d63f8_def\n");
}
//@unit 8c0d6424
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d6424_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d6424");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12c394);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0d63c0(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d6424\n.set FUN_8c0d6424, FUN_8c0d6424_def\n");

}
//@unit 8c0d646c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d646c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d646c");
  return (unsigned)sh4_interp(0x8c0d646c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d646c\n.set FUN_8c0d646c, FUN_8c0d646c_def\n");
}
//@unit 8c0d64a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d64a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d64a0");
  return (unsigned)sh4_interp(0x8c0d64a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d64a0\n.set FUN_8c0d64a0, FUN_8c0d64a0_def\n");
}
//@unit 8c0d66d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d66d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d66d8");
  return (unsigned)sh4_interp(0x8c0d66d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d66d8\n.set FUN_8c0d66d8, FUN_8c0d66d8_def\n");
}
//@unit 8c0d6920
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6920_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6920");
  return (unsigned)sh4_interp(0x8c0d6920, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6920\n.set FUN_8c0d6920, FUN_8c0d6920_def\n");
}
//@unit 8c0d6954
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d6954_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d6954");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x30,ar4,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 0;
  return 100;
}

__asm__(".globl FUN_8c0d6954\n.set FUN_8c0d6954, FUN_8c0d6954_def\n");

}
//@unit 8c0d6980
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6980_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6980");
  return (unsigned)sh4_interp(0x8c0d6980, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6980\n.set FUN_8c0d6980, FUN_8c0d6980_def\n");
}
//@unit 8c0d69a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d69a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d69a8");
  return (unsigned)sh4_interp(0x8c0d69a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d69a8\n.set FUN_8c0d69a8, FUN_8c0d69a8_def\n");
}
//@unit 8c0d6a20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6a20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6a20");
  return (unsigned)sh4_interp(0x8c0d6a20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6a20\n.set FUN_8c0d6a20, FUN_8c0d6a20_def\n");
}
//@unit 8c0d6aac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6aac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6aac");
  return (unsigned)sh4_interp(0x8c0d6aac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6aac\n.set FUN_8c0d6aac, FUN_8c0d6aac_def\n");
}
//@unit 8c0d6c18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6c18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6c18");
  return (unsigned)sh4_interp(0x8c0d6c18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6c18\n.set FUN_8c0d6c18, FUN_8c0d6c18_def\n");
}
//@unit 8c0d6c9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6c9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6c9c");
  return (unsigned)sh4_interp(0x8c0d6c9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6c9c\n.set FUN_8c0d6c9c, FUN_8c0d6c9c_def\n");
}
//@unit 8c0d6d58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6d58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6d58");
  return (unsigned)sh4_interp(0x8c0d6d58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6d58\n.set FUN_8c0d6d58, FUN_8c0d6d58_def\n");
}
//@unit 8c0d6ee0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6ee0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6ee0");
  return (unsigned)sh4_interp(0x8c0d6ee0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6ee0\n.set FUN_8c0d6ee0, FUN_8c0d6ee0_def\n");
}
//@unit 8c0d6ef8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0d6ef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0d6ef8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0d6ef8\n.set free_if_nonnull_wrap_0d6ef8, free_if_nonnull_wrap_0d6ef8_def\n");

}
//@unit 8c0d6f28
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d6f28_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d6f28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 5,ar5,ar6,ar7));
  *ar4 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 5,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d6f28\n.set FUN_8c0d6f28, FUN_8c0d6f28_def\n");

}
//@unit 8c0d6f68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d6f68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d6f68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x14,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d6f68\n.set FUN_8c0d6f68, FUN_8c0d6f68_def\n");

}
//@unit 8c0d6fb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d6fb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d6fb8");
  return (unsigned)sh4_interp(0x8c0d6fb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d6fb8\n.set FUN_8c0d6fb8, FUN_8c0d6fb8_def\n");
}
//@unit 8c0d7060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7060");
  return (unsigned)sh4_interp(0x8c0d7060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7060\n.set FUN_8c0d7060, FUN_8c0d7060_def\n");
}
//@unit 8c0d70e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d70e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d70e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7314(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d70e4\n.set FUN_8c0d70e4, FUN_8c0d70e4_def\n");

}
//@unit 8c0d7100
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d7100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7100");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a5;
  undefined1 *ar6_00;
  int a7;
  
  ar6_00 = ((undefined1 *)(fr0_ - 0x14));
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  a7 = ar4 + 0x30;
  a5 = ar4 + 4;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0xc4) + 0xc))))((le<int>* )(unsigned)(ar4 + 0xc4),a5,((undefined1 *)(fr0_ - 0x14)),a7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7154(ar4,a5,ar6_00,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6_00,a7));
  return uVar1;
}

__asm__(".globl FUN_8c0d7100\n.set FUN_8c0d7100, FUN_8c0d7100_def\n");

}
//@unit 8c0d7154
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7154_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7154");
  return (unsigned)sh4_interp(0x8c0d7154, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7154\n.set FUN_8c0d7154, FUN_8c0d7154_def\n");
}
//@unit 8c0d723c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d723c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d723c");
  return (unsigned)sh4_interp(0x8c0d723c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d723c\n.set FUN_8c0d723c, FUN_8c0d723c_def\n");
}
//@unit 8c0d7288
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d7288_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7288");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x164;
  *(le<undefined4>* )(unsigned)(0x164 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0d7288\n.set FUN_8c0d7288, FUN_8c0d7288_def\n");

}
//@unit 8c0d7294
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d7294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7294");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(le<int>* )(unsigned)(0x160 + ar4);
  if (iVar1 == 0) {
LAB_8c0d72c0:
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 1) {
      *(le<undefined4>* )(unsigned)(0x160 + ar4) = 1;
      iVar2 = iVar1;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) goto LAB_8c0d72c0;
      if (iVar1 != 3) {
        return iVar1;
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d75a0(ar4,ar5,ar6,ar7));
    iVar1 = 0x160;
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)(0x160 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0d7294\n.set FUN_8c0d7294, FUN_8c0d7294_def\n");

}
//@unit 8c0d7314
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7314_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7314");
  return (unsigned)sh4_interp(0x8c0d7314, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7314\n.set FUN_8c0d7314, FUN_8c0d7314_def\n");
}
//@unit 8c0d7354
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7354_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7354");
  return (unsigned)sh4_interp(0x8c0d7354, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7354\n.set FUN_8c0d7354, FUN_8c0d7354_def\n");
}
//@unit 8c0d7410
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7410_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7410");
  return (unsigned)sh4_interp(0x8c0d7410, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7410\n.set FUN_8c0d7410, FUN_8c0d7410_def\n");
}
//@unit 8c0d74cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d74cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d74cc");
  return (unsigned)sh4_interp(0x8c0d74cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d74cc\n.set FUN_8c0d74cc, FUN_8c0d74cc_def\n");
}
//@unit 8c0d7508
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7508_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7508");
  return (unsigned)sh4_interp(0x8c0d7508, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7508\n.set FUN_8c0d7508, FUN_8c0d7508_def\n");
}
//@unit 8c0d75a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d75a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d75a0");
  return (unsigned)sh4_interp(0x8c0d75a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d75a0\n.set FUN_8c0d75a0, FUN_8c0d75a0_def\n");
}
//@unit 8c0d761c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d761c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d761c");
  return (unsigned)sh4_interp(0x8c0d761c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d761c\n.set FUN_8c0d761c, FUN_8c0d761c_def\n");
}
//@unit 8c0d7668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7668");
  return (unsigned)sh4_interp(0x8c0d7668, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7668\n.set FUN_8c0d7668, FUN_8c0d7668_def\n");
}
//@unit 8c0d7688
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d7688_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7688");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d761c(ar4 + 3,ar5,ar6,ar7));
  *ar4 = 0;
  ar4[1] = 0;
  ar4[9] = 0;
  ar4[2] = 0;
  return ar4;
}

__asm__(".globl FUN_8c0d7688\n.set FUN_8c0d7688, FUN_8c0d7688_def\n");

}
//@unit 8c0d76b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0d76b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0d76b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0d76b8\n.set free_if_nonnull_wrap_0d76b8, free_if_nonnull_wrap_0d76b8_def\n");

}
//@unit 8c0d76e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d76e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d76e8");
  return (unsigned)sh4_interp(0x8c0d76e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d76e8\n.set FUN_8c0d76e8, FUN_8c0d76e8_def\n");
}
//@unit 8c0d77d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d77d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d77d8");
  return (unsigned)sh4_interp(0x8c0d77d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d77d8\n.set FUN_8c0d77d8, FUN_8c0d77d8_def\n");
}
//@unit 8c0d780c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d780c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d780c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129808);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d780c\n.set FUN_8c0d780c, FUN_8c0d780c_def\n");

}
//@unit 8c0d7860
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12bea8_m1_0d7860_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12bea8_m1_0d7860");
  return (unsigned)sh4_interp(0x8c0d7860, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12bea8_m1_0d7860\n.set Class_12bea8_m1_0d7860, Class_12bea8_m1_0d7860_def\n");
}
//@unit 8c0d7900
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7900_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7900");
  return (unsigned)sh4_interp(0x8c0d7900, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7900\n.set FUN_8c0d7900, FUN_8c0d7900_def\n");
}
//@unit 8c0d7ac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12bea8_m3_0d7ac0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12bea8_m3_0d7ac0");
  return (unsigned)sh4_interp(0x8c0d7ac0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12bea8_m3_0d7ac0\n.set Class_12bea8_m3_0d7ac0, Class_12bea8_m3_0d7ac0_def\n");
}
//@unit 8c0d7af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d7af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d63f8(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d63f8(ar4 + 0x30,ar5,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d7e78(ar4,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7dcc(ar4,ar5_00,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0d7af8\n.set FUN_8c0d7af8, FUN_8c0d7af8_def\n");

}
//@unit 8c0d7b44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d7b44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7b44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7dcc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d7b44\n.set FUN_8c0d7b44, FUN_8c0d7b44_def\n");

}
//@unit 8c0d7b60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7b60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7b60");
  return (unsigned)sh4_interp(0x8c0d7b60, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7b60\n.set FUN_8c0d7b60, FUN_8c0d7b60_def\n");
}
//@unit 8c0d7ca0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d7ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7ca0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl FUN_8c0d7ca0\n.set FUN_8c0d7ca0, FUN_8c0d7ca0_def\n");

}
//@unit 8c0d7ca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_2c_0d7ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_2c_0d7ca8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x2c);
}

__asm__(".globl get_field_2c_0d7ca8\n.set get_field_2c_0d7ca8, get_field_2c_0d7ca8_def\n");

}
//@unit 8c0d7cb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7cb0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7cb0");
  return (unsigned)sh4_interp(0x8c0d7cb0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7cb0\n.set FUN_8c0d7cb0, FUN_8c0d7cb0_def\n");
}
//@unit 8c0d7dcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7dcc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7dcc");
  return (unsigned)sh4_interp(0x8c0d7dcc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7dcc\n.set FUN_8c0d7dcc, FUN_8c0d7dcc_def\n");
}
//@unit 8c0d7e24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0d7e24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7e24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < *(le<uint>* )(unsigned)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0149dc(uVar1 * 0x38 + *(le<int>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
  }
  return *(le<uint>* )(unsigned)(ar4 + 0x10);
}

__asm__(".globl FUN_8c0d7e24\n.set FUN_8c0d7e24, FUN_8c0d7e24_def\n");

}
//@unit 8c0d7e78
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d7e78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d7e78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar6;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0d7e78\n.set FUN_8c0d7e78, FUN_8c0d7e78_def\n");

}
//@unit 8c0d7e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7e80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7e80");
  return (unsigned)sh4_interp(0x8c0d7e80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7e80\n.set FUN_8c0d7e80, FUN_8c0d7e80_def\n");
}
//@unit 8c0d7f04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d7f04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d7f04");
  return (unsigned)sh4_interp(0x8c0d7f04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d7f04\n.set FUN_8c0d7f04, FUN_8c0d7f04_def\n");
}
//@unit 8c0d7f18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_66_JUNGLE_RAIN_5_0d7f1a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_66_JUNGLE_RAIN_5_0d7f1a");
  return (unsigned)sh4_interp(0x8c0d7f18, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_66_JUNGLE_RAIN_5_0d7f1a\n.set s_66_JUNGLE_RAIN_5_0d7f1a, s_66_JUNGLE_RAIN_5_0d7f1a_def\n");
}
//@unit 8c0d8094
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0d8094_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d8094");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bea8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0d780c(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d8094\n.set FUN_8c0d8094, FUN_8c0d8094_def\n");

}
//@unit 8c0d80dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d80dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d80dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x30,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x1c,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d80dc\n.set FUN_8c0d80dc, FUN_8c0d80dc_def\n");

}
//@unit 8c0d8128
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d8128_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d8128");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d76b8(ar4 + 0xc,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0d8128\n.set FUN_8c0d8128, FUN_8c0d8128_def\n");

}
//@unit 8c0d8168
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0d8168_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0d8168");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0d8168\n.set free_if_nonnull_wrap_0d8168, free_if_nonnull_wrap_0d8168_def\n");

}
//@unit 8c0d8198
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0d819c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0d819c");
  return (unsigned)sh4_interp(0x8c0d8198, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0d819c\n.set s_GRAPHICS_ENV_0d819c, s_GRAPHICS_ENV_0d819c_def\n");
}
//@unit 8c0d82f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d82f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d82f0");
  return (unsigned)sh4_interp(0x8c0d82f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d82f0\n.set FUN_8c0d82f0, FUN_8c0d82f0_def\n");
}
//@unit 8c0d8400
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8400_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8400");
  return (unsigned)sh4_interp(0x8c0d8400, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8400\n.set FUN_8c0d8400, FUN_8c0d8400_def\n");
}
//@unit 8c0d8444
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d8444_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d8444");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d8444\n.set FUN_8c0d8444, FUN_8c0d8444_def\n");

}
//@unit 8c0d8458
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d8458_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d8458");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d8458\n.set noop_0d8458, noop_0d8458_def\n");

}
//@unit 8c0d845c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d845c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d845c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d845c\n.set noop_0d845c, noop_0d845c_def\n");

}
//@unit 8c0d8460
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d8460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d8460");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(le<int>* )(unsigned)(0x6e24 + ar4) != -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
              (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x6e24 + ar4),ar6,ar7));
  }
  iVar1 = *(le<int>* )(unsigned)(0x6e3c + ar4);
  if (iVar1 != -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x6e3c + ar4),ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d8460\n.set FUN_8c0d8460, FUN_8c0d8460_def\n");

}
//@unit 8c0d84a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d84a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d84a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(0x6e24 + ar4);
  if (iVar1 != -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021b10))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x6e20 + ar4),ar6,ar7));
    iVar1 = 0x6e24;
    *(le<undefined4>* )(unsigned)(0x6e24 + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0d84a8\n.set FUN_8c0d84a8, FUN_8c0d84a8_def\n");

}
//@unit 8c0d84e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d84e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d84e8");
  return (unsigned)sh4_interp(0x8c0d84e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d84e8\n.set FUN_8c0d84e8, FUN_8c0d84e8_def\n");
}
//@unit 8c0d8710
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8710_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8710");
  return (unsigned)sh4_interp(0x8c0d8710, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8710\n.set FUN_8c0d8710, FUN_8c0d8710_def\n");
}
//@unit 8c0d8808
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8808_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8808");
  return (unsigned)sh4_interp(0x8c0d8808, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8808\n.set FUN_8c0d8808, FUN_8c0d8808_def\n");
}
//@unit 8c0d8890
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8890_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8890");
  return (unsigned)sh4_interp(0x8c0d8890, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8890\n.set FUN_8c0d8890, FUN_8c0d8890_def\n");
}
//@unit 8c0d89d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0d89d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d89d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_0d8a98(ar4 + 0x78,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_0d8a90(ar4 + 0x78,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8a88(ar4 + 0x78,ar5,ar6,ar7));
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_2c_0d7ca8(iVar4 * 0x38 + iVar2,ar5,ar6,ar7));
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + 0x6e50;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7900(iVar4 * 0x38 + iVar2,ar5,0,ar7));
      }
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c0d89d8\n.set FUN_8c0d89d8, FUN_8c0d89d8_def\n");

}
//@unit 8c0d8a88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d8a88_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d8a88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c0d8a88\n.set FUN_8c0d8a88, FUN_8c0d8a88_def\n");

}
//@unit 8c0d8a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_c_0d8a90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c_0d8a90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0xc);
}

__asm__(".globl get_field_c_0d8a90\n.set get_field_c_0d8a90, get_field_c_0d8a90_def\n");

}
//@unit 8c0d8a98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_10_0d8a98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_10_0d8a98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x10);
}

__asm__(".globl get_field_10_0d8a98\n.set get_field_10_0d8a98, get_field_10_0d8a98_def\n");

}
//@unit 8c0d8aa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8aa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8aa0");
  return (unsigned)sh4_interp(0x8c0d8aa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8aa0\n.set FUN_8c0d8aa0, FUN_8c0d8aa0_def\n");
}
//@unit 8c0d8bf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d8bf0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d8bf0");
  return (unsigned)sh4_interp(0x8c0d8bf0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d8bf0\n.set FUN_8c0d8bf0, FUN_8c0d8bf0_def\n");
}
//@unit 8c0d92a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d92a0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d92a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 3;
  return 3;
}

__asm__(".globl FUN_8c0d92a0\n.set FUN_8c0d92a0, FUN_8c0d92a0_def\n");

}
//@unit 8c0d92a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_0d92a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_4_0d92a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_0d92a8\n.set get_field_4_0d92a8, get_field_4_0d92a8_def\n");

}
//@unit 8c0d92b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d92b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d92b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d7dcc(ar4 + 0x78,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x58) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x54) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x50) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x6e24 + iVar1 * 0x18 + ar4) = 0xffffffff;
  }
  return 2;
}

__asm__(".globl FUN_8c0d92b0\n.set FUN_8c0d92b0, FUN_8c0d92b0_def\n");

}
//@unit 8c0d931c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d931c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d931c");
  return (unsigned)sh4_interp(0x8c0d931c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d931c\n.set FUN_8c0d931c, FUN_8c0d931c_def\n");
}
//@unit 8c0d93a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d93b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d93b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  char *ar5_00;
  char *pcVar2;
  le<undefined4>* puVar3;
  le<le<int>*>* ar7_01;
  uint uVar4;
  
  ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
  (*(le<unsigned>* )(fr0_ - 0x1c) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
  (*(le<undefined4>* )(fr0_ - 0x20)) = 0;
  puVar3 = ((le<undefined4>* )(fr0_ - 0x18));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),puVar3));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fc81),0,2));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015ad4(ar4 + 0x28,((le<undefined4>* )(fr0_ - 0x18))[0],pcVar2,puVar3); });
  }
  ar7_01 = (le<le<int>*>*)(((le<int>*  *)(fr0_ - 0x1c)));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar1 == 0) {
    ar7_01 = (le<le<int>*>* )(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    ar5_00 = ((undefined1 *)(unsigned)0x8c13fcac);
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fcac),0,2));
  }
  else {
    ar5_00 = (char *)(unsigned)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x20) + 8))))((le<int>* )(unsigned)(ar4 + 0x20),((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x1c)),pcVar2,ar7_01));
  }
  (*(le<unsigned>* )(fr0_ - 0x1c) = (unsigned)(unsigned long)((le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01))));
  for (uVar4 = 0; uVar4 < (uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x1c))[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x1c));
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fcd7),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fcdc),((undefined1 *)(unsigned)0x8c13fcfa),0,2);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ddc(ar5,((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13fd20),0,2));
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &(*(le<undefined4>* )(fr0_ - 0x20));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020bec(ar5,(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13f8cb),puVar3))
    ;
    if (iVar1 == 0) {
      report_error_message
                ((&(*(le<undefined4>* )(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13fd54),0,2);
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015bb0(ar4 + uVar4 * 4 + 0x2c,(*(le<undefined4>* )(fr0_ - 0x20)),pcVar2,puVar3); });
    }
  }
  return 7;
}

__asm__(".globl s_GRAPHICS_ENV_0d93b0\n.set s_GRAPHICS_ENV_0d93b0, s_GRAPHICS_ENV_0d93b0_def\n");

}
//@unit 8c0d9600
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9600_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9600");
  return (unsigned)sh4_interp(0x8c0d9600, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9600\n.set FUN_8c0d9600, FUN_8c0d9600_def\n");
}
//@unit 8c0d9720
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9720_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9720");
  return (unsigned)sh4_interp(0x8c0d9720, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9720\n.set FUN_8c0d9720, FUN_8c0d9720_def\n");
}
//@unit 8c0d97b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_set_texture_wrap_0d97b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0d97b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x20,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0d97b4\n.set s_Failed_to_set_texture_wrap_0d97b4, s_Failed_to_set_texture_wrap_0d97b4_def\n");

}
//@unit 8c0d97d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d97d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d97d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x20,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d97d0\n.set s_Failed_wrap_0d97d0, s_Failed_wrap_0d97d0_def\n");

}
//@unit 8c0d97ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d97ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d97ec");
  return (unsigned)sh4_interp(0x8c0d97ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d97ec\n.set FUN_8c0d97ec, FUN_8c0d97ec_def\n");
}
//@unit 8c0d9898
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9898_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9898");
  return (unsigned)sh4_interp(0x8c0d9898, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9898\n.set FUN_8c0d9898, FUN_8c0d9898_def\n");
}
//@unit 8c0d98d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d98d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d98d4");
  return (unsigned)sh4_interp(0x8c0d98d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d98d4\n.set FUN_8c0d98d4, FUN_8c0d98d4_def\n");
}
//@unit 8c0d98e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d98e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d98e4");
  return (unsigned)sh4_interp(0x8c0d98e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d98e4\n.set FUN_8c0d98e4, FUN_8c0d98e4_def\n");
}
//@unit 8c0d98f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d98f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d98f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d98f4\n.set noop_0d98f4, noop_0d98f4_def\n");

}
//@unit 8c0d98f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d98f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d98f8");
  return (unsigned)sh4_interp(0x8c0d98f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d98f8\n.set FUN_8c0d98f8, FUN_8c0d98f8_def\n");
}
//@unit 8c0d990c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0d9912_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d9912");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x4b4,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x4b4,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020e48))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x551,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  for (uVar1 = 0; uVar1 < 7; uVar1 = uVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13f394)) + uVar1 * 4),
               (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  }
  return 7;
}

__asm__(".globl s_GRAPHICS_ENV_0d9912\n.set s_GRAPHICS_ENV_0d9912, s_GRAPHICS_ENV_0d9912_def\n");

}
//@unit 8c0d99b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d99b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d99b8");
  return (unsigned)sh4_interp(0x8c0d99b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d99b8\n.set FUN_8c0d99b8, FUN_8c0d99b8_def\n");
}
//@unit 8c0d99e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d99e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d99e8");
  return (unsigned)sh4_interp(0x8c0d99e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d99e8\n.set FUN_8c0d99e8, FUN_8c0d99e8_def\n");
}
//@unit 8c0d9a98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12bce0_m0_0d9a98_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bce0_m0_0d9a98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bce0);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_10270c(ar4 + 0x23,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4 + 0x20,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0xc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 10,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 3,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12bce0_m0_0d9a98\n.set Class_12bce0_m0_0d9a98, Class_12bce0_m0_0d9a98_def\n");

}
//@unit 8c0d9b34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d9b34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d9b34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d9b34\n.set FUN_8c0d9b34, FUN_8c0d9b34_def\n");

}
//@unit 8c0d9b60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d9b60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d9b60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0d9b60\n.set FUN_8c0d9b60, FUN_8c0d9b60_def\n");

}
//@unit 8c0d9b8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0d9b8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_wrap_0d9b8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x28,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0d9b8c\n.set s_Failed_wrap_0d9b8c, s_Failed_wrap_0d9b8c_def\n");

}
//@unit 8c0d9ba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0d9ba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0d9ba8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0d9ba8\n.set ret_const_0_0d9ba8, ret_const_0_0d9ba8_def\n");

}
//@unit 8c0d9bb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0d9bb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0d9bb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0d9bb0\n.set ret_const_0_0d9bb0, ret_const_0_0d9bb0_def\n");

}
//@unit 8c0d9bb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0d9bb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0d9bb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0d9bb8\n.set ret_const_0_0d9bb8, ret_const_0_0d9bb8_def\n");

}
//@unit 8c0d9bc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0d9bc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0d9bc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0d9bc0\n.set ret_const_0_0d9bc0, ret_const_0_0d9bc0_def\n");

}
//@unit 8c0d9bc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0d9bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0d9bc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0d9bc8\n.set ret_const_0_0d9bc8, ret_const_0_0d9bc8_def\n");

}
//@unit 8c0d9bd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d9bd0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d9bd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d9bd0\n.set noop_0d9bd0, noop_0d9bd0_def\n");

}
//@unit 8c0d9bd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d9bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d9bd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d9bd4\n.set noop_0d9bd4, noop_0d9bd4_def\n");

}
//@unit 8c0d9bd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0d9bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0d9bd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0d9bd8\n.set noop_0d9bd8, noop_0d9bd8_def\n");

}
//@unit 8c0d9bdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9bdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9bdc");
  return (unsigned)sh4_interp(0x8c0d9bdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9bdc\n.set FUN_8c0d9bdc, FUN_8c0d9bdc_def\n");
}
//@unit 8c0d9be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9be8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9be8");
  return (unsigned)sh4_interp(0x8c0d9be8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9be8\n.set FUN_8c0d9be8, FUN_8c0d9be8_def\n");
}
//@unit 8c0d9bf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9bf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9bf4");
  return (unsigned)sh4_interp(0x8c0d9bf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9bf4\n.set FUN_8c0d9bf4, FUN_8c0d9bf4_def\n");
}
//@unit 8c0d9c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9c00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9c00");
  return (unsigned)sh4_interp(0x8c0d9c00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9c00\n.set FUN_8c0d9c00, FUN_8c0d9c00_def\n");
}
//@unit 8c0d9c0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9c0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9c0c");
  return (unsigned)sh4_interp(0x8c0d9c0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9c0c\n.set FUN_8c0d9c0c, FUN_8c0d9c0c_def\n");
}
//@unit 8c0d9c18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0d9c18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d9c18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<uint>*  s0 = (le<uint>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(le<undefined4>* )(fr0_ - 0x4)) = (*(le<undefined4>* )(fr0_ - 0x4)) & 0xfffffffc;
  *s0 = (*(le<undefined4>* )(fr0_ - 0x4));
  return (*(le<undefined4>* )(fr0_ - 0x4));
}

__asm__(".globl FUN_8c0d9c18\n.set FUN_8c0d9c18, FUN_8c0d9c18_def\n");

}
//@unit 8c0d9c48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9c48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9c48");
  return (unsigned)sh4_interp(0x8c0d9c48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9c48\n.set FUN_8c0d9c48, FUN_8c0d9c48_def\n");
}
//@unit 8c0d9c58
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0d9c58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0d9c58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0d9c58\n.set ret_const_1_0d9c58, ret_const_1_0d9c58_def\n");

}
//@unit 8c0d9c60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d9c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0d9c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016544(ar4 + 0x34,0,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0d9c60\n.set FUN_8c0d9c60, FUN_8c0d9c60_def\n");

}
//@unit 8c0d9c80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0d9c80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0d9c80");
  return (unsigned)sh4_interp(0x8c0d9c80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0d9c80\n.set FUN_8c0d9c80, FUN_8c0d9c80_def\n");
}
//@unit 8c0da028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0da028_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d6424(ar4 + 0x11c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d63c0(ar4 + 0x108,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d6424(ar4 + 0xe8,0xffffffff,ar6,ar7));
    ar7_00 = 4;
    ar6_00 = 0x20;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x68,((void *)0x8c0d6424),0x20,4); });
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x40,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x30,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0da028\n.set FUN_8c0da028, FUN_8c0da028_def\n");

}
//@unit 8c0da0e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0da0e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da0e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x23;
    ar6_00 = 0x10;
    ar5_00 = ((void *)0x8c0da130);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); vec_delete_array(ar4,((void *)0x8c0da130),0x10,0x23); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0da0e8\n.set FUN_8c0da0e8, FUN_8c0da0e8_def\n");

}
//@unit 8c0da130
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0da130_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da130");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da170(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0da130\n.set FUN_8c0da130, FUN_8c0da130_def\n");

}
//@unit 8c0da170
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0da170_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da170");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0da170\n.set FUN_8c0da170, FUN_8c0da170_def\n");

}
//@unit 8c0da1b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0da1b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da1b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe1b8(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0da1b0\n.set FUN_8c0da1b0, FUN_8c0da1b0_def\n");

}
//@unit 8c0da1dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0da1dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da1dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fde5c(ar4,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x15d,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0da1dc\n.set FUN_8c0da1dc, FUN_8c0da1dc_def\n");

}
//@unit 8c0da208
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12bb08_m0_0da208_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bb08_m0_0da208");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12bb08);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x40a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0e91f0(ar4 + 0x3d3,0xffffffff,ar6,ar7));
    uVar2 = 8;
    uVar1 = 0x68;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x303,((void *)0x8c0f68c0),0x68,8); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_102790(ar4 + 0x2ea,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da028(ar4 + 0x29a,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_019270(ar4 + 0x27a,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_015544(ar4 + 0x277,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da0e8(ar4 + 0x1e9,0xffffffff,uVar1,uVar2));
    ar7_00 = 0x11;
    uVar2 = 0x3c;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0xea,((void *)0x8c0fe250),0x3c,0x11); });
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0fdf18(ar4 + 0x29,0xffffffff,uVar2,ar7_00));
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bce0_m0_0d9a98(ar4,0,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12bb08_m0_0da208\n.set Class_12bb08_m0_0da208, Class_12bb08_m0_0da208_def\n");

}
//@unit 8c0da338
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12bb08_m1_0da338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bb08_m1_0da338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00));
  *(le<undefined4>* )(unsigned)0x8c437550 = iVar2;
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x10))))(iVar5,ar5,ar6,ar4));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00));
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f43bc(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00));
      }
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x24))))(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0x28))))(iVar1,ar4,ar6_00,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar1,iVar3,ar6_00,ar7_00));
    }
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00));
      if (iVar2 == 1) {
        iVar3 = ar4;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7258(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00));
      }
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00));
  }
  return 1;
}

__asm__(".globl Class_12bb08_m1_0da338\n.set Class_12bb08_m1_0da338, Class_12bb08_m1_0da338_def\n");

}
//@unit 8c0da4f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0da4f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0da4f8");
  return (unsigned)sh4_interp(0x8c0da4f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0da4f8\n.set FUN_8c0da4f8, FUN_8c0da4f8_def\n");
}
//@unit 8c0da588
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0da588_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0da588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0da588\n.set FUN_8c0da588, FUN_8c0da588_def\n");

}
//@unit 8c0da5a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12bb08_m2_0da5a8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bb08_m2_0da5a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar7_00;
  int iVar4;
  int iVar5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9220(ar4 + 0xf4c,ar5,ar6,ar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,iVar3,ar6_00,ar7_00));
  if (iVar2 != 0) {
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar5;
      ar6_00 = ar6;
      ar7_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x14))))(iVar5,ar5,ar6,ar4));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4258(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    iVar5 = iVar1;
    for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da4f8(iVar5,iVar3,ar6_00,ar7_00));
      if (iVar3 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4974(iVar5,ar4,ar6_00,ar7_00));
      }
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar5 + 8) + 0x24))))(iVar5,ar4,ar6_00,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar5,iVar3,ar6_00,ar7_00));
    }
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0x28))))(iVar1,ar4,ar6_00,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar1,iVar3,ar6_00,ar7_00));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbbe8(ar4,iVar3,ar6_00,ar7_00));
    for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar1 * 0x68 + 0xc0c,iVar3,ar6_00,ar7_00));
      if (iVar2 == 1) {
        iVar3 = ar4;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar1 * 0x68 + 0xc0c,ar4,ar6_00,ar7_00));
      }
    }
  }
  return 1;
}

__asm__(".globl Class_12bb08_m2_0da5a8\n.set Class_12bb08_m2_0da5a8, Class_12bb08_m2_0da5a8_def\n");

}
//@unit 8c0da754
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0da754_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0da754");
  return (unsigned)sh4_interp(0x8c0da754, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0da754\n.set FUN_8c0da754, FUN_8c0da754_def\n");
}
//@unit 8c0da88c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0da88c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0da88c");
  return (unsigned)sh4_interp(0x8c0da88c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0da88c\n.set FUN_8c0da88c, FUN_8c0da88c_def\n");
}
//@unit 8c0da934
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CEnv_AddItem_0da93a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CEnv_AddItem_0da93a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feb3c(ar4 + 0x7a4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5b2,
               (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5c1,1,2));
  }
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(le<int>* )(unsigned)(iVar1 + 8) = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe2a0(iVar2 * 0x3c + ar4 + 0x3a8,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daa28(ar5,iVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar5 + 8) + 0x60))))(ar5,iVar1,ar6,ar7));
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdf74(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign_wrap_0f4da4(ar5,iVar1,ar6,ar7));
  return 0;
}

__asm__(".globl s_CEnv_AddItem_0da93a\n.set s_CEnv_AddItem_0da93a, s_CEnv_AddItem_0da93a_def\n");

}
//@unit 8c0daa28
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0daa28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daa28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x160;
  *(le<undefined4>* )(unsigned)(0x160 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0daa28\n.set FUN_8c0daa28, FUN_8c0daa28_def\n");

}
//@unit 8c0daa34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0daa34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daa34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<int>* )(unsigned)(0x9d4 + ar4) != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05f490))))
                        (*(le<undefined4>* )(unsigned)(0x9d4 + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(*(le<undefined4>* )(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = 0;
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0daa34\n.set FUN_8c0daa34, FUN_8c0daa34_def\n");

}
//@unit 8c0daa88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0daa88_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daa88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(le<int>* )(unsigned)(0x9d4 + (int)ar4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x5c))))(ar4,*(le<undefined4>* )(unsigned)(0x9d4 + (int)ar4),ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x9d4 + (int)ar4) = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0daa88\n.set FUN_8c0daa88, FUN_8c0daa88_def\n");

}
//@unit 8c0daad0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0daad0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ((le<undefined4>* )(fr0_ - 0x14))[0] = 0;
  iVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_24_05c284(ar5,ar5,ar6,ar7));
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,iVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
            (iVar1 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  ((le<undefined4>* )(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 20)), get_field_160_0dab80(ar5,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0feb88(ar4 + 0x7a4,((le<undefined4>* )(fr0_ - 0x14)),ar6,ar7));
  iVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), s_Item_pointer_is_NULL_CItemLi_0fe01c(ar4 + 0xa4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar5 + 8) + 100))))(ar5,iVar2,ar6,ar7));
  return ar5;
}

__asm__(".globl FUN_8c0daad0\n.set FUN_8c0daad0, FUN_8c0daad0_def\n");

}
//@unit 8c0dab80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_160_0dab80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_160_0dab80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x160 + ar4);
}

__asm__(".globl get_field_160_0dab80\n.set get_field_160_0dab80, get_field_160_0dab80_def\n");

}
//@unit 8c0dab8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dab8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dab8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    if ((*(le<int>* )(unsigned)(0x9d4 + ar4) == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dac20(ar4 + 0xa4,ar5,ar6,ar7)),
       *(le<int>* )(unsigned)(0x9d4 + ar4) == iVar1)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = uVar2;
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d3f48))))
                        (*(le<undefined4>* )(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = uVar2;
    }
    return *(le<undefined4>* )(unsigned)(0x9d4 + ar4);
  }
  return 0;
}

__asm__(".globl FUN_8c0dab8c\n.set FUN_8c0dab8c, FUN_8c0dab8c_def\n");

}
//@unit 8c0dac20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dac20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dac20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0dac20\n.set FUN_8c0dac20, FUN_8c0dac20_def\n");

}
//@unit 8c0dac48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_4_0dac48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_4_0dac48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_0dac48\n.set get_field_4_0dac48, get_field_4_0dac48_def\n");

}
//@unit 8c0dac50
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dac50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dac50");
  return (unsigned)sh4_interp(0x8c0dac50, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dac50\n.set FUN_8c0dac50, FUN_8c0dac50_def\n");
}
//@unit 8c0daea8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0daea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daea8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,0,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x7c))))(a4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,uVar3,ar6,ar7));
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0daea8\n.set FUN_8c0daea8, FUN_8c0daea8_def\n");

}
//@unit 8c0daf3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0daf3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daf3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0xacc + ar4)) << 1) + *(le<int>* )(unsigned)((0xacc + ar4))) << 2) + ar4) + 0xbb8)),ar4,ar5,ar6,ar7); }));
  return 1;
}

__asm__(".globl FUN_8c0daf3c\n.set FUN_8c0daf3c, FUN_8c0daf3c_def\n");

}
//@unit 8c0daf80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0daf80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0daf80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar2 = 0x1024;
  *(le<undefined4>* )(unsigned)(0x1024 + ar4) = 0;
  if (iVar1 != 0) {
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x60))))(a4,ar5,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
      a4 = iVar2;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0daf80\n.set FUN_8c0daf80, FUN_8c0daf80_def\n");

}
//@unit 8c0db004
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0db004_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0db004");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0db004\n.set noop_0db004, noop_0db004_def\n");

}
//@unit 8c0db008
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db008");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 100))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c0db008\n.set FUN_8c0db008, FUN_8c0db008_def\n");

}
//@unit 8c0db088
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0db088_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0db088");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0db088\n.set ret_const_0_0db088, ret_const_0_0db088_def\n");

}
//@unit 8c0db090
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0db090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db090");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xa8 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return a4;
}

__asm__(".globl FUN_8c0db090\n.set FUN_8c0db090, FUN_8c0db090_def\n");

}
//@unit 8c0db10c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0db10c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db10c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x68))))(a4,ar5,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(a4,ar5,ar6,ar7));
    }
  }
  return a4;
}

__asm__(".globl FUN_8c0db10c\n.set FUN_8c0db10c, FUN_8c0db10c_def\n");

}
//@unit 8c0db184
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0db184_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0db184");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0db184\n.set noop_0db184, noop_0db184_def\n");

}
//@unit 8c0db188
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db188_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db188");
  return (unsigned)sh4_interp(0x8c0db188, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db188\n.set FUN_8c0db188, FUN_8c0db188_def\n");
}
//@unit 8c0db224
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db224_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db224");
  return (unsigned)sh4_interp(0x8c0db224, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db224\n.set FUN_8c0db224, FUN_8c0db224_def\n");
}
//@unit 8c0db304
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db304_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db304");
  return (unsigned)sh4_interp(0x8c0db304, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db304\n.set FUN_8c0db304, FUN_8c0db304_def\n");
}
//@unit 8c0db32c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db32c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db32c");
  return (unsigned)sh4_interp(0x8c0db32c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db32c\n.set FUN_8c0db32c, FUN_8c0db32c_def\n");
}
//@unit 8c0db3bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db3bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db3bc");
  return (unsigned)sh4_interp(0x8c0db3bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db3bc\n.set FUN_8c0db3bc, FUN_8c0db3bc_def\n");
}
//@unit 8c0db580
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db580_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db580");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0db580\n.set FUN_8c0db580, FUN_8c0db580_def\n");

}
//@unit 8c0db5a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_38_0db5a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_38_0db5a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x38);
}

__asm__(".globl get_field_38_0db5a0\n.set get_field_38_0db5a0, get_field_38_0db5a0_def\n");

}
//@unit 8c0db5a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db5a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db5a8");
  return (unsigned)sh4_interp(0x8c0db5a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db5a8\n.set FUN_8c0db5a8, FUN_8c0db5a8_def\n");
}
//@unit 8c0db5c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db5c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db5c4");
  return (unsigned)sh4_interp(0x8c0db5c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db5c4\n.set FUN_8c0db5c4, FUN_8c0db5c4_def\n");
}
//@unit 8c0db764
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db764");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe108))))
                    (ar4 + 0xa4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0db764\n.set FUN_8c0db764, FUN_8c0db764_def\n");

}
//@unit 8c0db790
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db790_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db790");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe41c))))
                    (ar5 * 0x3c + ar4 + 0x3a8,ar6,ar6,ar7));
  return *(le<undefined4>* )(unsigned)(iVar1 + 8);
}

__asm__(".globl FUN_8c0db790\n.set FUN_8c0db790, FUN_8c0db790_def\n");

}
//@unit 8c0db7d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db7d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db7d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar5 * 0x3c + ar4 + 0x3a8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0db7d4\n.set FUN_8c0db7d4, FUN_8c0db7d4_def\n");

}
//@unit 8c0db810
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0db810_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar1 = 1;
  while (ar4_00 != ar5) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0db810\n.set FUN_8c0db810, FUN_8c0db810_def\n");

}
//@unit 8c0db864
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0db864_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db864");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db810(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  return iVar2 - iVar1;
}

__asm__(".globl FUN_8c0db864\n.set FUN_8c0db864, FUN_8c0db864_def\n");

}
//@unit 8c0db8a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0db8a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0db8a8");
  return (unsigned)sh4_interp(0x8c0db8a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0db8a8\n.set FUN_8c0db8a8, FUN_8c0db8a8_def\n");
}
//@unit 8c0db8d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0db8d4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0db8d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* ar5_00;
  int iVar2;
  
  (*(le<undefined4>* )(fr0_ - 0xc)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x18)) = 0;
  ar5_00 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                             (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7)), iVar1 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                        (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      ((le<undefined4>* )(fr0_ - 0x14))[0] =
           (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe41c))))
                     (iVar2 * 0x3c + ar4 + 0x3a8,iVar1 + -1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar2 * 0x3c + ar4 + 0x3a8,((le<undefined4>* )(fr0_ - 0x14))[0],ar6,ar7));
      ar5_00 = ((le<undefined4>* )(fr0_ - 0x14));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0feb88(ar4 + 0x7a4,ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fe4c4(iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  }
  while (iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7)),
        iVar2 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7));
    (*(le<undefined4>* )(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe108))))
                          (ar4 + 0xa4,iVar2 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
              (ar4 + 0xa4,(*(le<undefined4>* )(fr0_ - 0x18)),ar6,ar7));
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d1b90(&(*(le<undefined4>* )(fr0_ - 0x18)),ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x1020 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x1024 + ar4) = 0;
  return 1;
}

__asm__(".globl FUN_8c0db8d4\n.set FUN_8c0db8d4, FUN_8c0db8d4_def\n");

}
//@unit 8c0dba50
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dba50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dba50");
  return (unsigned)sh4_interp(0x8c0dba50, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dba50\n.set FUN_8c0dba50, FUN_8c0dba50_def\n");
}
//@unit 8c0dbb14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_COMMON_0dbb1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_COMMON_0dbb1a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* ar7_00;
  int iVar1;
  le<undefined*>* ar5_00;
  uint uVar2;
  
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0xc,((undefined1 *)(unsigned)0x8c162770),ar6,ar7); });
  ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c1622e4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 4) + 8))))((le<int>* )(unsigned)(ar4 + 4),&(*(le<undefined4>* )(unsigned)(unsigned)0x8c1622e4),ar6,ar7));
  ar7_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 4,ar5_00,ar6,ar7));
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fd91),((undefined1 *)(unsigned)0x8c13f7c0),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c13fd96),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_COMMON_0dbb1a\n.set s_GRAPHICS_COMMON_0dbb1a, s_GRAPHICS_COMMON_0dbb1a_def\n");

}
//@unit 8c0dbbe8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0dbbe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dbbe8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
    ((le<int>* )(fr0_ - 0x1c))[0] = iVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f4d34(iVar2,ar5,ar6,ar7));
    if (iVar3 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar2 == 0xd) {
        *(le<undefined4>* )(unsigned)0x8c431a54 = 0;
      }
      if (((le<int>* )(fr0_ - 0x1c))[0] == *(le<int>* )(unsigned)(0xac8 + ar4)) {
        *(le<undefined4>* )(unsigned)(0xac8 + ar4) = 0;
      }
      if (((le<int>* )(fr0_ - 0x1c))[0] == *(le<int>* )(unsigned)(0x9d4 + ar4)) {
        *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = 0;
      }
      iVar2 = ((le<int>* )(fr0_ - 0x1c))[0];
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      if (iVar3 != 0xf) {
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0c4e2c(iVar2,ar5,ar6,ar7));
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((le<int>* )(fr0_ - 0x1c))[0],ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar3 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      (*(le<undefined4>* )(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 32)), get_field_160_0dab80(((le<int>* )(fr0_ - 0x1c))[0],ar5_00,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0feb88(ar4 + 0x7a4,&(*(le<undefined4>* )(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
                (ar4 + 0xa4,((le<int>* )(fr0_ - 0x1c))[0],ar6,ar7));
      ar5 = 1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0d1b90(((le<int>* )(fr0_ - 0x1c)),1,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(iVar2,ar5,ar6,ar7));
      iVar2 = iVar3;
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c0dbbe8\n.set FUN_8c0dbbe8, FUN_8c0dbbe8_def\n");

}
//@unit 8c0dbd64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dbd64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dbd64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9c60(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0dbd64\n.set FUN_8c0dbd64, FUN_8c0dbd64_def\n");

}
//@unit 8c0dbd80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dbd80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dbd80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign_wrap_0f4da4(ar4_00,ar5,ar6,ar7));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5,ar6,ar7));
  }
  return ar4_00;
}

__asm__(".globl FUN_8c0dbd80\n.set FUN_8c0dbd80, FUN_8c0dbd80_def\n");

}
//@unit 8c0dbdf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dbdf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dbdf4");
  return (unsigned)sh4_interp(0x8c0dbdf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dbdf4\n.set FUN_8c0dbdf4, FUN_8c0dbdf4_def\n");
}
//@unit 8c0dbe24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dbe24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dbe24");
  return (unsigned)sh4_interp(0x8c0dbe24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dbe24\n.set FUN_8c0dbe24, FUN_8c0dbe24_def\n");
}
//@unit 8c0dbf88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0dbf88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dbf88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x30;
}

__asm__(".globl FUN_8c0dbf88\n.set FUN_8c0dbf88, FUN_8c0dbf88_def\n");

}
//@unit 8c0dbf90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dbf90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dbf90");
  return (unsigned)sh4_interp(0x8c0dbf90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dbf90\n.set FUN_8c0dbf90, FUN_8c0dbf90_def\n");
}
//@unit 8c0dc244
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dc244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc244");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f040(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0dc244\n.set FUN_8c0dc244, FUN_8c0dc244_def\n");

}
//@unit 8c0dc26c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dc26c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dc26c");
  return (unsigned)sh4_interp(0x8c0dc26c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dc26c\n.set FUN_8c0dc26c, FUN_8c0dc26c_def\n");
}
//@unit 8c0dc27c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dc27c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dc27c");
  return (unsigned)sh4_interp(0x8c0dc27c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dc27c\n.set FUN_8c0dc27c, FUN_8c0dc27c_def\n");
}
//@unit 8c0dc28c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dc28c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dc28c");
  return (unsigned)sh4_interp(0x8c0dc28c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dc28c\n.set FUN_8c0dc28c, FUN_8c0dc28c_def\n");
}
//@unit 8c0dc520
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dc520_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc520");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f040(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0dc520\n.set FUN_8c0dc520, FUN_8c0dc520_def\n");

}
//@unit 8c0dc548
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0dc548_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0dc548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0dc548\n.set ret_const_1_0dc548, ret_const_1_0dc548_def\n");

}
//@unit 8c0dc558
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dc558_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dc558");
  return (unsigned)sh4_interp(0x8c0dc558, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dc558\n.set FUN_8c0dc558, FUN_8c0dc558_def\n");
}
//@unit 8c0dc5d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dc5d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc5d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c0dc5d0\n.set FUN_8c0dc5d0, FUN_8c0dc5d0_def\n");

}
//@unit 8c0dc61c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0dc61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc61c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = ar5;
  if (*(le<int>* )(unsigned)(0x9d4 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db3bc(ar4,ar5,ar6,ar7));
    if (iVar1 != 0) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x84 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,0,ar6,ar7));
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05c284))))
                      (*(le<undefined4>* )(unsigned)(0x9d4 + ar4),ar5,ar6,ar7));
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x84 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x9d4 + ar4) + 8)))))
                (*(le<int>* )(unsigned)(0x9d4 + ar4),0,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c80(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x84 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,1,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100cb4(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      uVar3 = 2;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x84 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,2,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(iVar2,uVar3,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (*(le<int>* )(unsigned)(0x9d4 + ar4) != 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7c0(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc7b0(ar5,uVar3,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0dc61c\n.set FUN_8c0dc61c, FUN_8c0dc61c_def\n");

}
//@unit 8c0dc7b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dc7b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc7b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined2>* )(unsigned)(0x18c + ar4) = 0x78;
  return 1;
}

__asm__(".globl FUN_8c0dc7b0\n.set FUN_8c0dc7b0, FUN_8c0dc7b0_def\n");

}
//@unit 8c0dc7c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dc7c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc7c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0dc7c0\n.set FUN_8c0dc7c0, FUN_8c0dc7c0_def\n");

}
//@unit 8c0dc7e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dc7e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dc7e8");
  return (unsigned)sh4_interp(0x8c0dc7e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dc7e8\n.set FUN_8c0dc7e8, FUN_8c0dc7e8_def\n");
}
//@unit 8c0dc8fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0dc8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc8fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  undefined4 ar5_00;
  int iVar2;
  int iVar3;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,ar5_00,ar6,ar7));
  iVar2 = iVar1;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_b0_10113c(ar5,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x90 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4_00 + 8) + 8)))))
              (*(le<int>* )(unsigned)(ar4_00 + 8),ar5_00,ar6,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = iVar2;
  }
  return iVar2;
}

__asm__(".globl FUN_8c0dc8fc\n.set FUN_8c0dc8fc, FUN_8c0dc8fc_def\n");

}
//@unit 8c0dc990
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0dc990_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dc990");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1006d8(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1004b4(ar5,ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100724(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10052c(ar5,ar5_00,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100770(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1005a4(ar5,ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1007bc(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10061c(ar5,ar5_00,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0dc990\n.set FUN_8c0dc990, FUN_8c0dc990_def\n");

}
//@unit 8c0dca2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dca2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dca2c");
  return (unsigned)sh4_interp(0x8c0dca2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dca2c\n.set FUN_8c0dca2c, FUN_8c0dca2c_def\n");
}
//@unit 8c0dca74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dca74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dca74");
  return (unsigned)sh4_interp(0x8c0dca74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dca74\n.set FUN_8c0dca74, FUN_8c0dca74_def\n");
}
//@unit 8c0dca9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WaterTank_0dcaa2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WaterTank_0dcaa2");
  return (unsigned)sh4_interp(0x8c0dca9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WaterTank_0dcaa2\n.set s_WaterTank_0dcaa2, s_WaterTank_0dcaa2_def\n");
}
//@unit 8c0ddb3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddb3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0xc4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x30,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x14,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddb3c\n.set FUN_8c0ddb3c, FUN_8c0ddb3c_def\n");

}
//@unit 8c0ddbc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddbc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddbc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 7;
    ar6_00 = 4;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x2c,((void *)0x8c0247b0),4,7); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x28,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x20,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddbc8\n.set FUN_8c0ddbc8, FUN_8c0ddbc8_def\n");

}
//@unit 8c0ddc40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddc40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddc40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cffc8(ar4 + 0xeb48,0xffffffff,ar6,ar7));
    ar7_00 = 0x15e;
    ar6_00 = 0xac;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0xc,((void *)0x8c0d0abc),0xac,0x15e); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddc40\n.set FUN_8c0ddc40, FUN_8c0ddc40_def\n");

}
//@unit 8c0ddcc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddcc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddcc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddcc4\n.set FUN_8c0ddcc4, FUN_8c0ddcc4_def\n");

}
//@unit 8c0ddd14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddd14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddd14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cffc8(ar4 + 0x30,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddd14\n.set FUN_8c0ddd14, FUN_8c0ddd14_def\n");

}
//@unit 8c0ddd74
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ddd74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ddd74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c015428(ar4 + 0x12a5c,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x62c,((void *)0x8c0d3304),0x88,0x226); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x5fc,((void *)0x8c0cffc8),0x18,2); });
    uVar2 = 5;
    uVar1 = 0x44;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x470,((void *)0x8c0d336c),0x44,5); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x154,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x108,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0fe59c(ar4 + 0x34,0xffffffff,uVar1,uVar2));
    ar7_00 = 3;
    uVar2 = 4;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x20,((void *)0x8c016bfc),4,3); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x1c,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,uVar2,ar7_00));
    uVar1 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 8,0xffffffff,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ddd74\n.set FUN_8c0ddd74, FUN_8c0ddd74_def\n");

}
//@unit 8c0dde84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12b930_m0_0dde84_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b930_m0_0dde84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b930);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8c96,((void *)0x8c0cffc8),0x18,2); });
    uVar2 = 3;
    uVar1 = 0x16c;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8b52,((void *)0x8c0ddb3c),0x16c,3); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x8b50,0xffffffff,uVar1,uVar2));
    ar7_00 = 0x6e;
    uVar2 = 0xc;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8a06,((void *)0x8c0d6ef8),0xc,0x6e); });
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x8a00,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89fc,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89f8,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89f4,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0cfe48(ar4 + 0x89d3,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddbc8(ar4 + 0x89c1,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x89bf,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x89be,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddc40(ar4 + 0x4ee3,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddcc4(ar4 + 0x4edc,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddd14(ar4 + 0x4ec9,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ddd74(ar4 + 0x42b,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41f,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41e,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x41d,0xffffffff,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x41b,0xffffffff,uVar2,ar7_00));
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b930_m0_0dde84\n.set Class_12b930_m0_0dde84, Class_12b930_m0_0dde84_def\n");

}
//@unit 8c0de07c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0de07c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0de07c");
  return (unsigned)sh4_interp(0x8c0de07c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0de07c\n.set FUN_8c0de07c, FUN_8c0de07c_def\n");
}
//@unit 8c0de170
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0de170_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0de170");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0de170\n.set FUN_8c0de170, FUN_8c0de170_def\n");

}
//@unit 8c0de18c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0de18c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0de18c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0e16a0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_COMMON_0d377a(ar4 + 0x10ac,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d0bd2(ar4 + 0x13b8c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0de18c\n.set FUN_8c0de18c, FUN_8c0de18c_def\n");

}
//@unit 8c0de1dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b930_m1_0de1dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b930_m1_0de1dc");
  return (unsigned)sh4_interp(0x8c0de1dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b930_m1_0de1dc\n.set Class_12b930_m1_0de1dc, Class_12b930_m1_0de1dc_def\n");
}
//@unit 8c0de3d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b930_m2_0de3d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b930_m2_0de3d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d7154(ar4 + iVar1 * 0x16c + 0x22d48,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d02c8(ar4 + 0x13b24,ar5_00,ar6_00,ar7));
  iVar1 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d3c08(ar4 + 0x10ac,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(ar5,iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(((((((((int)(vsp = (unsigned long)(fr0_ - 4096), get_field_a0_035724(ar5,0,0,0)) & 0xff) & 0xff) << 1) + (((int)(vsp = (unsigned long)(fr0_ - 4096), get_field_a0_035724(ar5,0,0,0)) & 0xff) & 0xff)) << 2) + ar4) + 0x23228)),ar4,ar5,ar6_00,ar7); }));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl Class_12b930_m2_0de3d4\n.set Class_12b930_m2_0de3d4, Class_12b930_m2_0de3d4_def\n");

}
//@unit 8c0de4b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b930_m3_0de4b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b930_m3_0de4b0");
  return (unsigned)sh4_interp(0x8c0de4b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b930_m3_0de4b0\n.set Class_12b930_m3_0de4b0, Class_12b930_m3_0de4b0_def\n");
}
//@unit 8c0de6b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0de6b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0de6b0");
  return (unsigned)sh4_interp(0x8c0de6b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0de6b0\n.set FUN_8c0de6b0, FUN_8c0de6b0_def\n");
}
//@unit 8c0de6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0de6c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0de6c0");
  return (unsigned)sh4_interp(0x8c0de6c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0de6c0\n.set FUN_8c0de6c0, FUN_8c0de6c0_def\n");
}
//@unit 8c0de6d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0de6d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0de6d0");
  return (unsigned)sh4_interp(0x8c0de6d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0de6d0\n.set FUN_8c0de6d0, FUN_8c0de6d0_def\n");
}
//@unit 8c0deb30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0deb30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0deb30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0deb30\n.set free_if_nonnull_wrap_0deb30, free_if_nonnull_wrap_0deb30_def\n");

}
//@unit 8c0deb60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0deb60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0deb60");
  return (unsigned)sh4_interp(0x8c0deb60, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0deb60\n.set FUN_8c0deb60, FUN_8c0deb60_def\n");
}
//@unit 8c0def78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0def78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0def78");
  return (unsigned)sh4_interp(0x8c0def78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0def78\n.set FUN_8c0def78, FUN_8c0def78_def\n");
}
//@unit 8c0df250
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0df250_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0df250");
  return (unsigned)sh4_interp(0x8c0df250, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0df250\n.set FUN_8c0df250, FUN_8c0df250_def\n");
}
//@unit 8c0df668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0df668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0df668");
  return (unsigned)sh4_interp(0x8c0df668, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0df668\n.set FUN_8c0df668, FUN_8c0df668_def\n");
}
//@unit 8c0df8d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0df8d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0df8d0");
  return (unsigned)sh4_interp(0x8c0df8d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0df8d0\n.set FUN_8c0df8d0, FUN_8c0df8d0_def\n");
}
//@unit 8c0df998
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0df998_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0df998");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0x19) {
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), s_CEnv_AddItem_0da93a(ar4,ar5,ar6,ar7));
  }
  return ar5;
}

__asm__(".globl FUN_8c0df998\n.set FUN_8c0df998, FUN_8c0df998_def\n");

}
//@unit 8c0df9ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0df9ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0df9ec");
  return (unsigned)sh4_interp(0x8c0df9ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0df9ec\n.set FUN_8c0df9ec, FUN_8c0df9ec_def\n");
}
//@unit 8c0dfa84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dfa84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dfa84");
  return (unsigned)sh4_interp(0x8c0dfa84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dfa84\n.set FUN_8c0dfa84, FUN_8c0dfa84_def\n");
}
//@unit 8c0dfbdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dfbdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dfbdc");
  return (unsigned)sh4_interp(0x8c0dfbdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dfbdc\n.set FUN_8c0dfbdc, FUN_8c0dfbdc_def\n");
}
//@unit 8c0dfdc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0dfdc4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0dfdc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0dfdc4\n.set noop_0dfdc4, noop_0dfdc4_def\n");

}
//@unit 8c0dfdc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0dfdc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0dfdc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0dfdc8\n.set noop_0dfdc8, noop_0dfdc8_def\n");

}
//@unit 8c0dfdcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dfdcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dfdcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0a3c(ar4 + 0x13b70,1,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x10dc) = 1;
  return 0x10dc;
}

__asm__(".globl FUN_8c0dfdcc\n.set FUN_8c0dfdcc, FUN_8c0dfdcc_def\n");

}
//@unit 8c0dfdfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dfdfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dfdfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0d0a3c(ar4 + 0x13b70,0,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x10dc) = 0;
  return 0x10dc;
}

__asm__(".globl FUN_8c0dfdfc\n.set FUN_8c0dfdfc, FUN_8c0dfdfc_def\n");

}
//@unit 8c0dfe2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dfe2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dfe2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf3c(ar4,ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0xacc + ar4)) << 1) + *(le<int>* )(unsigned)((0xacc + ar4))) << 2) + ar4) + 0x2318c)),ar4,ar5,ar6,ar7); }));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dfef4(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da60(uVar2,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(((((((ar6 & 0xff) << 1) + (ar6 & 0xff)) << 2) + ar4) + 0x231e0)),ar4,ar5,ar6,ar7); }));
  return 1;
}

__asm__(".globl FUN_8c0dfe2c\n.set FUN_8c0dfe2c, FUN_8c0dfe2c_def\n");

}
//@unit 8c0dfee8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_cc_0dfee8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_cc_0dfee8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xcc + ar4);
}

__asm__(".globl get_field_cc_0dfee8\n.set get_field_cc_0dfee8, get_field_cc_0dfee8_def\n");

}
//@unit 8c0dfef4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dfef4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dfef4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee10(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0dfef4\n.set FUN_8c0dfef4, FUN_8c0dfef4_def\n");

}
//@unit 8c0dff1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0dff1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0dff1c");
  return (unsigned)sh4_interp(0x8c0dff1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0dff1c\n.set FUN_8c0dff1c, FUN_8c0dff1c_def\n");
}
//@unit 8c0dffe8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0dffe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0dffe8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d09f4(ar4 + 0x13b70,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0dffe8\n.set FUN_8c0dffe8, FUN_8c0dffe8_def\n");

}
