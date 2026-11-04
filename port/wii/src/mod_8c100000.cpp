//@unit 8c100030
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_a528_100030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa528 + ar4);
}

__asm__(".globl get_field_a528_100030\n.set get_field_a528_100030, get_field_a528_100030_def\n");

}
//@unit 8c10003c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10003c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       iVar1 == 0)) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                         (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01eff8))))
                         (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0 &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb50(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c10003c\n.set FUN_8c10003c, FUN_8c10003c_def\n");

}
//@unit 8c1000c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1000c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((((iVar1 == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed88(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       iVar1 == 0)) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 == 0)) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                         (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0 &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01eff8))))
                         (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)))) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c1000c8\n.set FUN_8c1000c8, FUN_8c1000c8_def\n");

}
//@unit 8c100154
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if ((iVar1 == 1) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1001d4(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
       (ushort)uVar2 < 0x1e)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c100154\n.set FUN_8c100154, FUN_8c100154_def\n");

}
//@unit 8c1001d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1001d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(le<short>* )(unsigned)(0xa546 + ar4);
}

__asm__(".globl FUN_8c1001d4\n.set FUN_8c1001d4, FUN_8c1001d4_def\n");

}
//@unit 8c1001e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1001e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ef68(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecb0(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c1001e0\n.set FUN_8c1001e0, FUN_8c1001e0_def\n");

}
//@unit 8c10022c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10022c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                      (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
      if ((iVar1 == 0) && (*(le<int>* )(unsigned)(0x188 + ar4) != 3)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,1,ar6,ar7));
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c10022c\n.set FUN_8c10022c, FUN_8c10022c_def\n");

}
//@unit 8c1002a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1002a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(le<undefined4>* )(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(le<undefined4>* )(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
    if (iVar1 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,2,ar6,ar7));
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c1002a8\n.set FUN_8c1002a8, FUN_8c1002a8_def\n");

}
//@unit 8c10031c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10031c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(le<undefined4>* )(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x188) == 2)) {
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

__asm__(".globl FUN_8c10031c\n.set FUN_8c10031c, FUN_8c10031c_def\n");

}
//@unit 8c1003b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1003b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(le<undefined4>* )(unsigned)0x8c441430 == '\0') {
    *(le<undefined4>* )(unsigned)0x8c44142c = 0;
    *(le<undefined4>* )(unsigned)0x8c441430 = '\x01';
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                      (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(le<int>* )(unsigned)(0x188 + ar4) == 2)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
      if (iVar1 == 0) {
        *(le<undefined4>* )(unsigned)0x8c44142c = 0;
      }
      else {
        *(le<undefined4>* )(unsigned)0x8c44142c = 1;
      }
    }
    if ((*(le<undefined4>* )(unsigned)0x8c44142c == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                          (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
      *(le<undefined4>* )(unsigned)0x8c44142c = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,2,ar6,ar7));
    }
    else if ((*(le<undefined4>* )(unsigned)0x8c44142c == 1) &&
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ef20))))
                               (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 0)) {
      *(le<undefined4>* )(unsigned)0x8c44142c = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,0,ar6,ar7));
    }
    return *(le<undefined4>* )(unsigned)0x8c44142c;
  }
  *(le<undefined4>* )(unsigned)0x8c44142c = 0;
  return 0;
}

__asm__(".globl FUN_8c1003b0\n.set FUN_8c1003b0, FUN_8c1003b0_def\n");

}
//@unit 8c1004b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1004b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1004b4");
  return (unsigned)sh4_interp(0x8c1004b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1004b4\n.set FUN_8c1004b4, FUN_8c1004b4_def\n");
}
//@unit 8c10052c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10052c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10052c");
  return (unsigned)sh4_interp(0x8c10052c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10052c\n.set FUN_8c10052c, FUN_8c10052c_def\n");
}
//@unit 8c1005a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1005a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1005a4");
  return (unsigned)sh4_interp(0x8c1005a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1005a4\n.set FUN_8c1005a4, FUN_8c1005a4_def\n");
}
//@unit 8c10061c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10061c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10061c");
  return (unsigned)sh4_interp(0x8c10061c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10061c\n.set FUN_8c10061c, FUN_8c10061c_def\n");
}
//@unit 8c100694
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100694");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c100694\n.set FUN_8c100694, FUN_8c100694_def\n");

}
//@unit 8c1006bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1006bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10168c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c1006bc\n.set FUN_8c1006bc, FUN_8c1006bc_def\n");

}
//@unit 8c1006d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1006d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1006d8");
  return (unsigned)sh4_interp(0x8c1006d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1006d8\n.set FUN_8c1006d8, FUN_8c1006d8_def\n");
}
//@unit 8c100724
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100724_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100724");
  return (unsigned)sh4_interp(0x8c100724, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100724\n.set FUN_8c100724, FUN_8c100724_def\n");
}
//@unit 8c100770
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100770_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100770");
  return (unsigned)sh4_interp(0x8c100770, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100770\n.set FUN_8c100770, FUN_8c100770_def\n");
}
//@unit 8c1007bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1007bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1007bc");
  return (unsigned)sh4_interp(0x8c1007bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1007bc\n.set FUN_8c1007bc, FUN_8c1007bc_def\n");
}
//@unit 8c100808
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100808_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100808");
  return (unsigned)sh4_interp(0x8c100808, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100808\n.set FUN_8c100808, FUN_8c100808_def\n");
}
//@unit 8c10082c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10082c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10082c");
  return (unsigned)sh4_interp(0x8c10082c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10082c\n.set FUN_8c10082c, FUN_8c10082c_def\n");
}
//@unit 8c100850
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100850_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100850");
  return (unsigned)sh4_interp(0x8c100850, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100850\n.set FUN_8c100850, FUN_8c100850_def\n");
}
//@unit 8c100874
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100874_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100874");
  return (unsigned)sh4_interp(0x8c100874, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100874\n.set FUN_8c100874, FUN_8c100874_def\n");
}
//@unit 8c100898
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100898_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100898");
  return (unsigned)sh4_interp(0x8c100898, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100898\n.set FUN_8c100898, FUN_8c100898_def\n");
}
//@unit 8c1008e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1008e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1008e4");
  return (unsigned)sh4_interp(0x8c1008e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1008e4\n.set FUN_8c1008e4, FUN_8c1008e4_def\n");
}
//@unit 8c100930
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100930_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100930");
  return (unsigned)sh4_interp(0x8c100930, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100930\n.set FUN_8c100930, FUN_8c100930_def\n");
}
//@unit 8c10097c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10097c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10097c");
  return (unsigned)sh4_interp(0x8c10097c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10097c\n.set FUN_8c10097c, FUN_8c10097c_def\n");
}
//@unit 8c1009c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1009c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1009c8");
  return (unsigned)sh4_interp(0x8c1009c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1009c8\n.set FUN_8c1009c8, FUN_8c1009c8_def\n");
}
//@unit 8c1009ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1009ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1009ec");
  return (unsigned)sh4_interp(0x8c1009ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1009ec\n.set FUN_8c1009ec, FUN_8c1009ec_def\n");
}
//@unit 8c100a10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100a10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100a10");
  return (unsigned)sh4_interp(0x8c100a10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100a10\n.set FUN_8c100a10, FUN_8c100a10_def\n");
}
//@unit 8c100a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100a34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100a34");
  return (unsigned)sh4_interp(0x8c100a34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100a34\n.set FUN_8c100a34, FUN_8c100a34_def\n");
}
//@unit 8c100a58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100a58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100a58");
  return (unsigned)sh4_interp(0x8c100a58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100a58\n.set FUN_8c100a58, FUN_8c100a58_def\n");
}
//@unit 8c100abc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100abc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100abc");
  return (unsigned)sh4_interp(0x8c100abc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100abc\n.set FUN_8c100abc, FUN_8c100abc_def\n");
}
//@unit 8c100b20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100b20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100b20");
  return (unsigned)sh4_interp(0x8c100b20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100b20\n.set FUN_8c100b20, FUN_8c100b20_def\n");
}
//@unit 8c100b84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100b84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100b84");
  return (unsigned)sh4_interp(0x8c100b84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100b84\n.set FUN_8c100b84, FUN_8c100b84_def\n");
}
//@unit 8c100be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100be8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100be8");
  return (unsigned)sh4_interp(0x8c100be8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100be8\n.set FUN_8c100be8, FUN_8c100be8_def\n");
}
//@unit 8c100c34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100c34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100c34");
  return (unsigned)sh4_interp(0x8c100c34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100c34\n.set FUN_8c100c34, FUN_8c100c34_def\n");
}
//@unit 8c100c80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100c80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f56c(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl FUN_8c100c80\n.set FUN_8c100c80, FUN_8c100c80_def\n");

}
//@unit 8c100cb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100cb4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f544(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl FUN_8c100cb4\n.set FUN_8c100cb4, FUN_8c100cb4_def\n");

}
//@unit 8c100ce8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100ce8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101358(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(le<undefined4>* )(unsigned)(0x594 + ar4) = 0xf;
    }
    *(le<int>* )(unsigned)(0x594 + ar4) = *(le<int>* )(unsigned)(0x594 + ar4) + -1;
    if (0 < *(le<int>* )(unsigned)(0x594 + ar4)) {
      return 1;
    }
  }
  *(le<undefined4>* )(unsigned)(0x594 + ar4) = 0;
  return 0;
}

__asm__(".globl FUN_8c100ce8\n.set FUN_8c100ce8, FUN_8c100ce8_def\n");

}
//@unit 8c100d5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c100d5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (*(le<int>* )(unsigned)(0x590 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,5,ar6,ar7));
    if (((iVar1 == 1) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,10,ar6,ar7)), iVar1 == 1)) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101510(ar4,0xf,ar6,ar7)), iVar1 == 1)) {
      *(le<undefined4>* )(unsigned)(0x590 + ar4) = 1;
    }
  }
  else {
    if ((((*(char *)(unsigned)(0x190 + ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4) != '\0') ||
         (*(char *)(unsigned)(0x190 + ar4 + (*(byte *)(unsigned)(0x598 + ar4) - 1) * 4) != '\0')) ||
        (*(char *)(unsigned)(0x191 + ar4 + (uint)*(byte *)(unsigned)(0x598 + ar4) * 4) != '\0')) ||
       (*(char *)(unsigned)(0x191 + ar4 + (*(byte *)(unsigned)(0x598 + ar4) - 1) * 4) != '\0')) {
      return 1;
    }
    *(le<undefined4>* )(unsigned)(0x590 + ar4) = 0;
  }
  return 0;
}

__asm__(".globl FUN_8c100d5c\n.set FUN_8c100d5c, FUN_8c100d5c_def\n");

}
//@unit 8c100e4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c100e4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c100e4c");
  return (unsigned)sh4_interp(0x8c100e4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c100e4c\n.set FUN_8c100e4c, FUN_8c100e4c_def\n");
}
//@unit 8c101004
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101004");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  while (!bVar1) {
    if (*(le<int>* )(unsigned)(0x88 + ar4) != -1) {
      ar5 = *(le<undefined4>* )(unsigned)(0x88 + ar4);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021f18(0x8c2b59d0,ar5,ar6,ar7));
      if ((iVar2 == 1) || (iVar2 == 2)) {
        *(le<undefined4>* )(unsigned)(0x88 + ar4) = 0xffffffff;
      }
    }
    bVar1 = true;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ecf8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01ef68(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1017f4(ar4,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(0xb8 + ar4) = 1;
      *(le<int>* )(unsigned)(0xc4 + ar4) = *(le<int>* )(unsigned)(0xc4 + ar4) + 1;
      goto LAB_8c1010c2;
    }
  }
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
LAB_8c1010c2:
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1019f8(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(0xb0 + ar4) == 1) {
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

__asm__(".globl FUN_8c101004\n.set FUN_8c101004, FUN_8c101004_def\n");

}
//@unit 8c10113c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_b0_10113c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xb0 + ar4);
}

__asm__(".globl get_field_b0_10113c\n.set get_field_b0_10113c, get_field_b0_10113c_def\n");

}
//@unit 8c101148
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101148");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xb4;
  *(le<undefined4>* )(unsigned)(0xb4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c101148\n.set FUN_8c101148, FUN_8c101148_def\n");

}
//@unit 8c101154
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<int>* )(unsigned)(0xb0 + ar4) == 1) && (*(le<int>* )(unsigned)(0xb4 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c101154\n.set FUN_8c101154, FUN_8c101154_def\n");

}
//@unit 8c101178
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_b8_101178");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)*(byte *)(unsigned)(0xb8 + ar4);
}

__asm__(".globl get_field_b8_101178\n.set get_field_b8_101178, get_field_b8_101178_def\n");

}
//@unit 8c101188
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101188");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0xb0 + ar4);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101e1c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c101188\n.set FUN_8c101188, FUN_8c101188_def\n");

}
//@unit 8c1011b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1011b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    ((uint)*(le<ushort>* )(unsigned)(0x18e + ar4),0x1e,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c1011b0\n.set FUN_8c1011b0, FUN_8c1011b0_def\n");

}
//@unit 8c1011e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1011e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101250(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0ffb90(ar4 + 0xd8,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c1011e0\n.set FUN_8c1011e0, FUN_8c1011e0_def\n");

}
//@unit 8c101210
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c101210_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c101210");
  return (unsigned)sh4_interp(0x8c101210, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c101210\n.set FUN_8c101210, FUN_8c101210_def\n");
}
//@unit 8c101250
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c101250_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c101250");
  return (unsigned)sh4_interp(0x8c101250, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c101250\n.set FUN_8c101250, FUN_8c101250_def\n");
}
//@unit 8c101358
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101358");
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

__asm__(".globl FUN_8c101358\n.set FUN_8c101358, FUN_8c101358_def\n");

}
//@unit 8c1013f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1013f4_def(undefined4 ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1013f4");
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

__asm__(".globl FUN_8c1013f4\n.set FUN_8c1013f4, FUN_8c1013f4_def\n");

}
//@unit 8c101480
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c101480_def(undefined4 ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c101480");
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

__asm__(".globl FUN_8c101480\n.set FUN_8c101480, FUN_8c101480_def\n");

}
//@unit 8c101510
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101510");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 ar6_00;
  
  ((le<int>* )(fr0_ - 0x24))[0] = 0;
  (*(le<int>* )(fr0_ - 0x28)) = 0;
  (*(le<int>* )(fr0_ - 0x2c)) = 0;
  (*(le<int>* )(fr0_ - 0x30)) = 0;
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
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1013f4(ar4,((le<int>* )(fr0_ - 0x24)),ar6_00,ar7));
      if (((le<int>* )(fr0_ - 0x24))[0] == 4) {
        (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + 1;
        ((le<int>* )(fr0_ - 0x24))[0] = 0;
        if (1 < (*(le<int>* )(fr0_ - 0x28))) {
          return 1;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c101480(ar4,&(*(le<int>* )(fr0_ - 0x2c)),ar6_00,ar7));
      if ((*(le<int>* )(fr0_ - 0x2c)) == 4) {
        (*(le<int>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x30)) + 1;
        (*(le<int>* )(fr0_ - 0x2c)) = 0;
        if (1 < (*(le<int>* )(fr0_ - 0x30))) {
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

__asm__(".globl FUN_8c101510\n.set FUN_8c101510, FUN_8c101510_def\n");

}
//@unit 8c10168c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10168c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x59c;
  *(le<undefined4>* )(unsigned)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c10168c\n.set FUN_8c10168c, FUN_8c10168c_def\n");

}
//@unit 8c10169c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10169c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4 + 0x190,0,0x400,ar7));
  *(undefined1 *)(unsigned)(0x598 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x590 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x594 + ar4) = 0;
  iVar1 = 0x59c;
  *(le<undefined4>* )(unsigned)(0x59c + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c10169c\n.set FUN_8c10169c, FUN_8c10169c_def\n");

}
//@unit 8c1016f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1016f0");
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

__asm__(".globl FUN_8c1016f0\n.set FUN_8c1016f0, FUN_8c1016f0_def\n");

}
//@unit 8c101784
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101784");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(le<undefined4>* )(unsigned)(0x88 + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101c64(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c101784\n.set FUN_8c101784, FUN_8c101784_def\n");

}
//@unit 8c1017f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1017f4");
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
  *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4) = uVar1;
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
  if (*(char *)(unsigned)(ar4 + 0x28) == '\0') {
    *(le<undefined4>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = 0;
  }
  else {
    ar6 = *(le<undefined4>* )(unsigned)(*(char *)(unsigned)(ar4 + 0x28) * 8 + ar4);
    ar5_00 = *(le<undefined4>* )(unsigned)((*(char *)(unsigned)(ar4 + 0x28) + -1) * 8 + ar4);
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) = uVar1;
  }
  uVar2 = 0;
  if (*(le<int>* )(unsigned)(0xb0 + ar4) != 0) {
    if (*(le<uint>* )(unsigned)(0xbc + ar4) < *(le<uint>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)) {
      if (0x124f80 <
          (uint)(*(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(le<int>* )(unsigned)(0xbc + ar4))) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
      }
      else {
        uVar2 = 0xc3500;
        if (0xc3500 <
            (uint)(*(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) - *(le<int>* )(unsigned)(0xbc + ar4))) {
          *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
          uVar2 = 0xc4;
          *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
        }
      }
    }
    else {
      uVar2 = *(le<uint>* )(unsigned)(0xbc + ar4);
      if (*(le<uint>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) < *(le<uint>* )(unsigned)(0xbc + ar4)) {
        if (0x124f80 <
            (uint)(*(le<int>* )(unsigned)(0xbc + ar4) - *(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4))) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6,ar7));
        }
        else {
          uVar2 = 0xc3500;
          if (0xc3500 <
              (uint)(*(le<int>* )(unsigned)(0xbc + ar4) - *(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4)))
          {
            *(undefined1 *)(unsigned)(0xb8 + ar4) = 2;
            uVar2 = 0xc4;
            *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
          }
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c1017f4\n.set FUN_8c1017f4, FUN_8c1017f4_def\n");

}
//@unit 8c1019f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1019f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  uint uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  ar5_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x2c);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6_00,ar7));
  uVar2 = 0x16e360;
  if (0x16e360 < uVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c1019f8\n.set FUN_8c1019f8, FUN_8c1019f8_def\n");

}
//@unit 8c101a4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101a4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(le<int>* )(unsigned)(0xb0 + ar4) == 0) {
    for (bVar2 = 0; bVar2 < 5; bVar2 = bVar2 + 1) {
      uVar3 = *(le<int>* )(unsigned)(ar4 + (uint)bVar2 * 8 + 4) + uVar3;
    }
    uVar3 = uVar3 >> 2;
    uVar1 = 0x16e360;
    if ((uVar3 < 0x16e360) && (uVar1 = 0xc350, 0xc350 < uVar3)) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101b5c(ar4,uVar3,ar6,ar7));
    }
  }
  else {
    if (*(le<int>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4) == 0) {
      uVar3 = *(le<uint>* )(unsigned)(0xbc + ar4);
    }
    else {
      uVar3 = *(le<uint>* )(unsigned)(ar4 + *(char *)(unsigned)(ar4 + 0x28) * 8 + 4);
    }
    if ((uVar3 < 0x16e360) && (0xc350 < uVar3)) {
      uVar1 = 0x186a0;
      if (*(le<uint>* )(unsigned)(0xbc + ar4) < uVar3) {
        if (0x186a0 < uVar3 - *(le<int>* )(unsigned)(0xbc + ar4)) {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
        }
      }
      else if (0x186a0 < *(le<int>* )(unsigned)(0xbc + ar4) - uVar3) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c10(ar4,uVar3,ar6,ar7));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c101a4c\n.set FUN_8c101a4c, FUN_8c101a4c_def\n");

}
//@unit 8c101b5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101b5c");
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
  *(le<uint>* )(unsigned)(0xbc + ar4) = uVar3;
  *(le<undefined4>* )(unsigned)0x8c4413c0 = *(le<uint>* )(unsigned)(0xbc + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02192c(0x8c2b59d0,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(le<undefined4>* )(unsigned)(0xb0 + ar4) = 1;
  iVar2 = 0xc4;
  *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 1;
  return iVar2;
}

__asm__(".globl FUN_8c101b5c\n.set FUN_8c101b5c, FUN_8c101b5c_def\n");

}
//@unit 8c101c10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101c10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar1 = 0x82334, 0x82334 < ar5)) &&
     (uVar1 = 0xc349c, ar5 <= 0xc349c)) {
    uVar1 = 0xa2be8;
  }
  *(le<uint>* )(unsigned)(0xbc + ar4) = uVar1;
  uVar1 = *(le<uint>* )(unsigned)(0xbc + ar4) >> 3;
  *(le<undefined4>* )(unsigned)0x8c4413c0 = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c101c10\n.set FUN_8c101c10, FUN_8c101c10_def\n");

}
//@unit 8c101c64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101c64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  byte bVar3;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101da0(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xb4 + ar4) = 0;
  *(undefined1 *)(unsigned)(0xb8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = 0xa2be8;
  *(le<undefined4>* )(unsigned)(0xc4 + ar4) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x30) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x34) = 0;
    if (*(le<int>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) != -1) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ab4))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38),ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
    }
    *(le<undefined4>* )(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x3c) = 0;
  }
  bVar1 = false;
  while (!bVar1) {
    *(le<undefined4>* )(unsigned)(0x80 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x84 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x8c + ar4) = 0;
    bVar1 = true;
  }
  iVar2 = 0xb0;
  *(le<undefined4>* )(unsigned)(0xb0 + ar4) = 0;
  return iVar2;
}

__asm__(".globl FUN_8c101c64\n.set FUN_8c101c64, FUN_8c101c64_def\n");

}
//@unit 8c101da0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101da0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  for (cVar1 = '\0'; cVar1 < '\x05'; cVar1 = cVar1 + '\x01') {
    *(le<undefined4>* )(unsigned)(cVar1 * 8 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + cVar1 * 8 + 4) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x28) = 0xff;
  return 0x28;
}

__asm__(".globl FUN_8c101da0\n.set FUN_8c101da0, FUN_8c101da0_def\n");

}
//@unit 8c101de0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101de0");
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

__asm__(".globl FUN_8c101de0\n.set FUN_8c101de0, FUN_8c101de0_def\n");

}
//@unit 8c101e1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c101e1c");
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
  *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x9c) = uVar3;
  ar6_00 = *(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x9c);
  *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa8) = 0;
  bVar1 = false;
  bVar2 = false;
  *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa4) = 0;
  if (0x10 < *(le<uint>* )(unsigned)(0xc4 + ar4)) {
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x80) = *(le<undefined4>* )(unsigned)(ar4 + 100);
    iVar7 = *(le<undefined4>* )(unsigned)0x8c4413c0;
    iVar5 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12682c)) + *(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x80) * 4);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x60),ar6_00,ar7));
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x98) = uVar3;
    if ((*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) ||
       ((uint)(iVar7 * iVar5) <= *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x98))) {
      (*(le<int>* )(fr0_ - 0x50)) = *(le<int>* )(unsigned)(ar4 + 100);
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
                (0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x68),
                 *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c126764)) + (*(le<int>* )(fr0_ - 0x50)) * 4),ar7));
      if (*(le<int>* )(unsigned)(ar4 + 100) == 0) {
        *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa4) = 1;
      }
      iVar5 = *(le<int>* )(unsigned)(ar4 + 100);
      if ((iVar5 == 0) || (*(le<int>* )(unsigned)(ar4 + 100) == 0x1a)) {
        bVar1 = true;
      }
      if ((*(le<int>* )(unsigned)(ar4 + 100) == 0xe) || (*(le<int>* )(unsigned)(ar4 + 100) == 0x28)) {
        bVar2 = true;
      }
      if ((bVar1) || (bVar2)) {
        *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa8) = 1;
      }
      *(le<int>* )(unsigned)(ar4 + 0x60) = ar6_00;
      *(le<int>* )(unsigned)(ar4 + 100) = *(le<int>* )(unsigned)(ar4 + 100) + 1;
      (*(le<int>* )(fr0_ - 0x54)) = ar4;
      (*(le<undefined4>* )(fr0_ - 0x58)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                            (*(le<undefined4>* )(unsigned)(ar4 + 100),0x32,iVar5,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 100) = (*(le<undefined4>* )(fr0_ - 0x58));
      *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 1;
    }
  }
  (*(le<int>* )(fr0_ - 0x5c)) = *(le<int>* )(unsigned)(ar4 + 0x54);
  iVar7 = *(le<undefined4>* )(unsigned)0x8c4413c0;
  iVar5 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c126724)) + (*(le<int>* )(fr0_ - 0x5c)) * 4);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x50),ar6_00,ar7));
  *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x94) = uVar3;
  if (((*(le<int>* )(unsigned)(ar4 + 0x5c) == 0) ||
      ((uint)(iVar7 * iVar5) <= *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x94))) ||
     (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa8) == 1)) {
    if (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa8) == 1) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x54) = 0;
    }
    (*(le<int>* )(fr0_ - 0x60)) = *(le<int>* )(unsigned)(ar4 + 0x54);
    (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0219b8))))
              (0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x58),
               *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1266e4)) + (*(le<int>* )(fr0_ - 0x60)) * 4),ar7));
    *(le<int>* )(unsigned)(ar4 + 0x50) = ar6_00;
    (*(le<int>* )(fr0_ - 0x64)) = ar4;
    *(le<int>* )(unsigned)(ar4 + 0x54) = *(le<int>* )(unsigned)(ar4 + 0x54) + 1;
    *(le<uint>* )(unsigned)(ar4 + 0x54) = *(le<uint>* )(unsigned)(ar4 + 0x54) & 0xf;
    *(le<undefined4>* )(unsigned)(ar4 + 0x5c) = 1;
  }
  if (0x20 < *(le<uint>* )(unsigned)(0xc4 + ar4)) {
    if (*(le<int>* )(unsigned)(ar4 + 0x3c) == 0) {
      if (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(le<int>* )(fr0_ - 0x68)) = *(le<int>* )(unsigned)(ar4 + 0x34);
        uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(le<int>* )(fr0_ - 0x68)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(le<int>* )(unsigned)(ar4 + 0x30) = ar6_00;
        *(le<int>* )(unsigned)(ar4 + 0x34) = *(le<int>* )(unsigned)(ar4 + 0x34) + 1;
        (*(le<int>* )(fr0_ - 0x6c)) = ar4;
        (*(le<undefined4>* )(fr0_ - 0x70)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(le<undefined4>* )(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x34) = (*(le<undefined4>* )(fr0_ - 0x70));
        *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 1;
      }
    }
    else {
      (*(le<int>* )(fr0_ - 0x74)) = *(le<int>* )(unsigned)(ar4 + 0x34);
      iVar7 = *(le<undefined4>* )(unsigned)0x8c4413c0;
      iVar5 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c126958)) + (*(le<int>* )(fr0_ - 0x74)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x30),ar6_00,ar7));
      *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x90) = uVar3;
      if ((((uint)(iVar7 * iVar5) <= *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x90)) || (bVar1)) ||
         (bVar2)) {
        if ((bVar1) || (bVar2)) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x34) = 0;
        }
        (*(le<int>* )(fr0_ - 0x78)) = *(le<int>* )(unsigned)(ar4 + 0x34);
        uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1268f4)) + (*(le<int>* )(fr0_ - 0x78)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x38),uVar3,ar7));
        *(le<int>* )(unsigned)(ar4 + 0x30) = ar6_00;
        *(le<int>* )(unsigned)(ar4 + 0x34) = *(le<int>* )(unsigned)(ar4 + 0x34) + 1;
        (*(le<int>* )(fr0_ - 0x7c)) = ar4;
        (*(le<undefined4>* )(fr0_ - 0x80)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(le<undefined4>* )(unsigned)(ar4 + 0x34),0x19,uVar3,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x34) = (*(le<undefined4>* )(fr0_ - 0x80));
      }
    }
  }
  *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) = 1;
  if (*(le<uint>* )(unsigned)(0xc4 + ar4) < 0x41) {
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (0xa2be8 < *(le<uint>* )(unsigned)(0xbc + ar4)) {
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(le<uint>* )(unsigned)(0xbc + ar4) < 0x82334) {
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) = 0;
  }
  if (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) == 0) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 0;
  }
  if (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa0) == 1) {
    if (*(le<int>* )(unsigned)(ar4 + 0x4c) == 0) {
      if (*(le<int>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa4) == 1) {
        (*(le<int>* )(fr0_ - 0x84)) = *(le<int>* )(unsigned)(ar4 + 0x44);
        uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(le<int>* )(fr0_ - 0x84)) * 4);
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
        *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
        *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
        (*(le<int>* )(fr0_ - 0x88)) = ar4;
        (*(le<undefined4>* )(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                              (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x44) = (*(le<undefined4>* )(fr0_ - 0x8c));
        *(le<undefined4>* )(unsigned)(ar4 + 0x4c) = 1;
      }
    }
    else {
      (*(le<int>* )(fr0_ - 0x90)) = *(le<int>* )(unsigned)(ar4 + 0x44);
      iVar7 = *(le<undefined4>* )(unsigned)0x8c4413c0;
      iVar5 = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c126a2c)) + (*(le<int>* )(fr0_ - 0x90)) * 4);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x40),ar6_00,ar7));
      *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x8c) = uVar3;
      if ((uint)(iVar7 * iVar5) <= *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x8c)) {
        if (*(le<int>* )(unsigned)(ar4 + 0x44) == 0) {
          if (bVar1) {
            (*(le<int>* )(fr0_ - 0x94)) = *(le<int>* )(unsigned)(ar4 + 0x44);
            uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(le<int>* )(fr0_ - 0x94)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
            *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
            (*(le<int>* )(fr0_ - 0x98)) = ar4;
            (*(le<undefined4>* )(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x44) = (*(le<undefined4>* )(fr0_ - 0x9c));
          }
        }
        else if (*(le<int>* )(unsigned)(ar4 + 0x44) == 7) {
          if (bVar2) {
            (*(le<int>* )(fr0_ - 0xa0)) = *(le<int>* )(unsigned)(ar4 + 0x44);
            uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(le<int>* )(fr0_ - 0xa0)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
            *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
            (*(le<int>* )(fr0_ - 0xa4)) = ar4;
            (*(le<undefined4>* )(fr0_ - 0xa8)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x44) = (*(le<undefined4>* )(fr0_ - 0xa8));
          }
        }
        else if (*(le<int>* )(unsigned)(ar4 + 0x44) == 0xe) {
          if (bVar1) {
            (*(le<int>* )(fr0_ - 0xac)) = *(le<int>* )(unsigned)(ar4 + 0x44);
            uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(le<int>* )(fr0_ - 0xac)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
            *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
            (*(le<int>* )(fr0_ - 0xb0)) = ar4;
            (*(le<undefined4>* )(fr0_ - 0xb4)) = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                                  (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x44) = (*(le<undefined4>* )(fr0_ - 0xb4));
          }
        }
        else if (*(le<int>* )(unsigned)(ar4 + 0x44) == 0x15) {
          if (bVar2) {
            (*(le<int>* )(fr0_ - 0xb8)) = *(le<int>* )(unsigned)(ar4 + 0x44);
            uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + (*(le<int>* )(fr0_ - 0xb8)) * 4);
            (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
            *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
            *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
            (*(le<int>* )(fr0_ - 0xbc)) = ar4;
            ((le<uint>* )(fr0_ - 0xcc))[3] =
                 (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                           (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
            *(le<uint>* )(unsigned)(ar4 + 0x44) = ((le<uint>* )(fr0_ - 0xcc))[3];
          }
        }
        else {
          ((le<uint>* )(fr0_ - 0xcc))[2] = *(le<int>* )(unsigned)(ar4 + 0x44);
          uVar3 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1269bc)) + ((le<uint>* )(fr0_ - 0xcc))[2] * 4);
          (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0219b8(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 0x48),uVar3,ar7));
          *(le<int>* )(unsigned)(ar4 + 0x40) = ar6_00;
          *(le<int>* )(unsigned)(ar4 + 0x44) = *(le<int>* )(unsigned)(ar4 + 0x44) + 1;
          ((le<uint>* )(fr0_ - 0xcc))[1] = ar4;
          ((le<uint>* )(fr0_ - 0xcc))[0] =
               (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                         (*(le<undefined4>* )(unsigned)(ar4 + 0x44),0x1c,uVar3,ar7));
          *(le<uint>* )(unsigned)(ar4 + 0x44) = ((le<uint>* )(fr0_ - 0xcc))[0];
        }
      }
    }
  }
  uVar6 = (uint)(0x70 < *(le<uint>* )(unsigned)(0xc4 + ar4));
  if (0xc349c < *(le<uint>* )(unsigned)(0xbc + ar4)) {
    uVar6 = 0;
  }
  if (*(le<uint>* )(unsigned)(0xbc + ar4) < 0x82334) {
    uVar6 = 0;
  }
  if (*(le<int>* )(unsigned)(0x88 + ar4) != -1) {
    uVar6 = 0;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x44) != 0) {
    uVar6 = 0;
  }
  if (ar6_00 == *(le<int>* )(unsigned)(ar4 + 0x40)) {
    uVar6 = 0;
  }
  if (uVar6 == 1) {
    iVar7 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c126a9c));
    iVar4 = *(le<undefined4>* )(unsigned)0x8c4413c0;
    iVar5 = ar6_00;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c101de0(ar4,*(le<undefined4>* )(unsigned)(0x80 + ar4),ar6_00,ar7));
    *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x88) = uVar3;
    uVar6 = *(le<uint>* )(unsigned)(0x8c + ar4);
    if (((uVar6 == 0) || ((uint)(iVar7 * iVar4) <= *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x88))) &&
       (uVar6 = *(le<uint>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0xa4), uVar6 == 1)) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021b10))))
                        (0x8c2b59d0,(&(*(undefined1 *)(unsigned)0x8c142194)),iVar5,ar7));
      *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x84) = uVar3;
      *(le<undefined4>* )(unsigned)(0x88 + ar4) = *(le<undefined4>* )(unsigned)((int)((le<uint>* )(fr0_ - 0xcc)) + 0x84);
      *(le<int>* )(unsigned)(0x80 + ar4) = ar6_00;
      uVar6 = 0x8c;
      *(le<undefined4>* )(unsigned)(0x8c + ar4) = 1;
    }
  }
  return uVar6;
}

__asm__(".globl FUN_8c101e1c\n.set FUN_8c101e1c, FUN_8c101e1c_def\n");

}
//@unit 8c102634
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102634_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102634");
  return (unsigned)sh4_interp(0x8c102634, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102634\n.set FUN_8c102634, FUN_8c102634_def\n");
}
//@unit 8c1026ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1026ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1026ec");
  return (unsigned)sh4_interp(0x8c1026ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1026ec\n.set FUN_8c1026ec, FUN_8c1026ec_def\n");
}
//@unit 8c10270c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_10270c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_10270c\n.set free_if_nonnull_wrap_10270c, free_if_nonnull_wrap_10270c_def\n");

}
//@unit 8c10273c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined2>*  FUN_8c10273c_def(le<undefined2>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c10273c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (undefined2)ar5;
  ar4[1] = (undefined2)ar6;
  return ar4;
}

__asm__(".globl FUN_8c10273c\n.set FUN_8c10273c, FUN_8c10273c_def\n");

}
//@unit 8c102748
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102748_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102748");
  return (unsigned)sh4_interp(0x8c102748, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102748\n.set FUN_8c102748, FUN_8c102748_def\n");
}
//@unit 8c10277c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10277c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10277c");
  return (unsigned)sh4_interp(0x8c10277c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10277c\n.set FUN_8c10277c, FUN_8c10277c_def\n");
}
//@unit 8c102790
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_102790");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_102790\n.set free_if_nonnull_wrap_102790, free_if_nonnull_wrap_102790_def\n");

}
//@unit 8c1027c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined2>*  FUN_8c1027c0_def(le<undefined2>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1027c0");
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

__asm__(".globl FUN_8c1027c0\n.set FUN_8c1027c0, FUN_8c1027c0_def\n");

}
//@unit 8c102800
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102800_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102800");
  return (unsigned)sh4_interp(0x8c102800, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102800\n.set FUN_8c102800, FUN_8c102800_def\n");
}
//@unit 8c102824
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_102824");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_102824\n.set noop_102824, noop_102824_def\n");

}
//@unit 8c102828
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("report_error_message");
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

__asm__(".globl report_error_message\n.set report_error_message, report_error_message_def\n");

}
//@unit 8c10287c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c10287c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c10287c\n.set FUN_8c10287c, FUN_8c10287c_def\n");

}
//@unit 8c10289c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c10289c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c10289c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*ar4,ar5,ar6,ar7));
    *ar4 = 0;
  }
  return 0;
}

__asm__(".globl FUN_8c10289c\n.set FUN_8c10289c, FUN_8c10289c_def\n");

}
//@unit 8c1028c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1028c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((le<uint>* )(fr0_ - 0x8))[0] = 0;
  (*(le<uint>* )(fr0_ - 0xc)) = 0;
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar4,((le<uint>* )(fr0_ - 0x8)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar5,&(*(le<uint>* )(fr0_ - 0xc)),ar6,ar7));
  if ((*(le<uint>* )(fr0_ - 0xc)) < ((le<uint>* )(fr0_ - 0x8))[0]) {
    uVar1 = 1;
  }
  else if (((le<uint>* )(fr0_ - 0x8))[0] < (*(le<uint>* )(fr0_ - 0xc))) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c1028c0\n.set FUN_8c1028c0, FUN_8c1028c0_def\n");

}
//@unit 8c102914
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102914");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl FUN_8c102914\n.set FUN_8c102914, FUN_8c102914_def\n");

}
//@unit 8c10291c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10291c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10291c");
  return (unsigned)sh4_interp(0x8c10291c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10291c\n.set FUN_8c10291c, FUN_8c10291c_def\n");
}
//@unit 8c102974
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102974_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102974");
  return (unsigned)sh4_interp(0x8c102974, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102974\n.set FUN_8c102974, FUN_8c102974_def\n");
}
//@unit 8c1029d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3a4_m0_1029d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3a4_m0_1029d0");
  return (unsigned)sh4_interp(0x8c1029d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3a4_m0_1029d0\n.set Class_12c3a4_m0_1029d0, Class_12c3a4_m0_1029d0_def\n");
}
//@unit 8c102a08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102a08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102a08");
  return (unsigned)sh4_interp(0x8c102a08, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102a08\n.set FUN_8c102a08, FUN_8c102a08_def\n");
}
//@unit 8c102a7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102a7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102a7c");
  return (unsigned)sh4_interp(0x8c102a7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102a7c\n.set FUN_8c102a7c, FUN_8c102a7c_def\n");
}
//@unit 8c102b04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c394_m0_102b04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c394_m0_102b04");
  return (unsigned)sh4_interp(0x8c102b04, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c394_m0_102b04\n.set Class_12c394_m0_102b04, Class_12c394_m0_102b04_def\n");
}
//@unit 8c102b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c394_m1_102b58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c394_m1_102b58");
  return (unsigned)sh4_interp(0x8c102b58, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c394_m1_102b58\n.set Class_12c394_m1_102b58, Class_12c394_m1_102b58_def\n");
}
//@unit 8c102ba4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102ba4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  return 1;
}

__asm__(".globl FUN_8c102ba4\n.set FUN_8c102ba4, FUN_8c102ba4_def\n");

}
//@unit 8c102bb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102bb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102bb4");
  return (unsigned)sh4_interp(0x8c102bb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102bb4\n.set FUN_8c102bb4, FUN_8c102bb4_def\n");
}
//@unit 8c102bc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102bc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  return 0;
}

__asm__(".globl FUN_8c102bc8\n.set FUN_8c102bc8, FUN_8c102bc8_def\n");

}
//@unit 8c102bd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102bd0");
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

__asm__(".globl FUN_8c102bd0\n.set FUN_8c102bd0, FUN_8c102bd0_def\n");

}
//@unit 8c102d20
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102d20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (ar4 & 0xf) << 4;
}

__asm__(".globl FUN_8c102d20\n.set FUN_8c102d20, FUN_8c102d20_def\n");

}
//@unit 8c102d40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c102d40");
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

__asm__(".globl FUN_8c102d40\n.set FUN_8c102d40, FUN_8c102d40_def\n");

}
//@unit 8c102d9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102d9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102d9c");
  return (unsigned)sh4_interp(0x8c102d9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102d9c\n.set FUN_8c102d9c, FUN_8c102d9c_def\n");
}
//@unit 8c102e44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c102e44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c102e44");
  return (unsigned)sh4_interp(0x8c102e44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c102e44\n.set FUN_8c102e44, FUN_8c102e44_def\n");
}
//@unit 8c102eec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  s_HIGYOLINE_102eee_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_HIGYOLINE_102eee");
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
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0xd9,"HIGYOLINE",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x27,"HIGYOLINE1",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2f,"STATUS_FORMAT",ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x37,((undefined1 *)(unsigned)0x8c1eeec3),ar6,ar7); });
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

__asm__(".globl s_HIGYOLINE_102eee\n.set s_HIGYOLINE_102eee, s_HIGYOLINE_102eee_def\n");

}
//@unit 8c1030a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12c3c4_m0_1030a4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12c3c4_m0_1030a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
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

__asm__(".globl Class_12c3c4_m0_1030a4\n.set Class_12c3c4_m0_1030a4, Class_12c3c4_m0_1030a4_def\n");

}
//@unit 8c103100
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REQUEST_SLEEP_10310a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REQUEST_SLEEP_10310a");
  return (unsigned)sh4_interp(0x8c103100, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REQUEST_SLEEP_10310a\n.set s_REQUEST_SLEEP_10310a, s_REQUEST_SLEEP_10310a_def\n");
}
//@unit 8c1041cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_cc_1041cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xcc + ar4);
}

__asm__(".globl get_field_cc_1041cc\n.set get_field_cc_1041cc, get_field_cc_1041cc_def\n");

}
//@unit 8c1041d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1041d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xcc;
  *(le<undefined4>* )(unsigned)(0xcc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c1041d8\n.set FUN_8c1041d8, FUN_8c1041d8_def\n");

}
//@unit 8c1041e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1041e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1041e4\n.set FUN_8c1041e4, FUN_8c1041e4_def\n");

}
//@unit 8c1041ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1041ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x730;
}

__asm__(".globl FUN_8c1041ec\n.set FUN_8c1041ec, FUN_8c1041ec_def\n");

}
//@unit 8c1041fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1041fc");
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

__asm__(".globl FUN_8c1041fc\n.set FUN_8c1041fc, FUN_8c1041fc_def\n");

}
//@unit 8c104264
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3c4_m2_104264_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3c4_m2_104264");
  return (unsigned)sh4_interp(0x8c104264, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3c4_m2_104264\n.set Class_12c3c4_m2_104264, Class_12c3c4_m2_104264_def\n");
}
//@unit 8c10469c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_REACTION_CATCH_1046a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(le<int>* )(unsigned)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x1c)),ar5 + 0x10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x15;
    if (*(le<int>* )(unsigned)(ar4 + 900) == -1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH"); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xdc,((undefined1 *)(unsigned)0x8c1eeec3),uVar2,ar7); });
      *(le<undefined4>* )(unsigned)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f8320(0x8c35468c,*(le<undefined4>* )(unsigned)(ar4 + 0x388),ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 900) = uVar2;
      *(le<undefined4>* )(unsigned)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,2,ar6,ar7));
    }
    iVar1 = *(le<int>* )(unsigned)(ar4 + 900);
    if (iVar1 != -1) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7));
      if (iVar1 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x19;
        *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
        *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
        *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(le<undefined4>* )(unsigned)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}

__asm__(".globl s_REACTION_CATCH_1046a0\n.set s_REACTION_CATCH_1046a0, s_REACTION_CATCH_1046a0_def\n");

}
//@unit 8c104854
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_STATUS_SNORE_10485e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_STATUS_SNORE_10485e");
  return (unsigned)sh4_interp(0x8c104854, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_STATUS_SNORE_10485e\n.set s_STATUS_SNORE_10485e, s_STATUS_SNORE_10485e_def\n");
}
//@unit 8c104f44
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c104f44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x39) = *(char *)(unsigned)(ar4 + 0x39) + '\x01';
  return 0x39;
}

__asm__(".globl FUN_8c104f44\n.set FUN_8c104f44, FUN_8c104f44_def\n");

}
//@unit 8c104f5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c104f5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c104f5c");
  return (unsigned)sh4_interp(0x8c104f5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c104f5c\n.set FUN_8c104f5c, FUN_8c104f5c_def\n");
}
//@unit 8c105094
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c105094_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c105094");
  return (unsigned)sh4_interp(0x8c105094, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c105094\n.set FUN_8c105094, FUN_8c105094_def\n");
}
//@unit 8c1063a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * s_GRATIFIC_EAT_1063b2_def(int ar4,le<int>* ar5,le<int>* ar6,char *ar7)

{
  TRACE_ENTER("s_GRATIFIC_EAT_1063b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  le<int>* ar4_00;
  char *ar7_00;
  le<int>* piVar4;
  undefined4 uVar5;
  le<int>* piVar6;
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
        iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_24_05c284(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        if ((iVar1 == 0xf) &&
           (ar7 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), get_field_13c_028d9c(ar6[1],piVar4,piVar6,((void *)0x8c028d9c))),
           ar7 == (char *)(unsigned)0x2)) {
          piVar4 = (le<int>* )(unsigned)0x1e;
          (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),0x1e,piVar6,2));
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_24_05c284(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
          if (iVar1 == 0xf) {
            uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
            piVar4 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7));
          }
          else {
            piVar4 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),0x1e,piVar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],piVar4,piVar6,ar7));
          }
        }
      }
      if (*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)(unsigned)0x0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(le<int>* )(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
        puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,2,0,"GRATIFIC_EAT"));
      }
      break;
    case 6:
      *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + -1;
      puVar2 = (undefined *)(unsigned)0x32;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x32;
      break;
    case 8:
      puVar2 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
      break;
    case 9:
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
      puVar2 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
      break;
    case 0xb:
      if (*(le<int>* )(unsigned)(ar4 + 900) == -1) {
        puVar2 = (undefined *)(unsigned)0xffffffff;
      }
      else {
        puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030870(ar4 + 0x9c,2,piVar6,ar7));
      }
      break;
    case 0xc:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02f414(ar4,piVar4,piVar6,ar7));
      if (iVar1 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),piVar4,piVar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c05fec4(ar6[1],uVar3,piVar6,ar7));
        piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8));
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(piVar6[0x1e])))(*(le<int>* )(unsigned)(ar4 + 0x6c),uVar3,piVar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bef8(ar6[1],((void *)0x8c02bef8),piVar6,ar7));
        if ((short)uVar3 == 2) {
          piVar4 = (le<int>* )(unsigned)0x0;
          while( true ) {
            uVar3 = 3;
            ar4_00 = ar5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,3,piVar6,ar7));
            if (iVar1 <= (int)piVar4) break;
            uVar3 = 3;
            piVar6 = piVar4;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar3,piVar6,ar7));
            if (iVar1 == 2) {
              uVar3 = 3;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
              piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 8));
              iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)(piVar6[0x2d])))(iVar1,uVar3,piVar6,ar7));
              if (iVar1 == 1) {
                uVar3 = 3;
                piVar6 = piVar4;
                iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,3,piVar4,ar7));
                piVar6 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0xb8))))(iVar1,uVar3,piVar6,ar7));
                if (piVar6 == (le<int>* )(unsigned)0x0) {
                  iVar7 = iVar7 + 1;
                }
              }
            }
            piVar4 = (le<int>* )(unsigned)((int)piVar4 + 1);
          }
          if (iVar7 == 2) {
            piVar6 = (le<int>* )(unsigned)0x1b;
            (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0xf,0x1b,ar7));
            uVar3 = 1;
            ar4_00 = (le<int>* )(unsigned)(uint)ar6[3];
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x94))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c061180(ar4_00,1,piVar6,ar7); });
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
      (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xbc))))(*ar6,piVar4,piVar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,piVar4,piVar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bfd8(ar6[1],piVar4,piVar6,ar7));
      ar6_00 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      a7 = 1;
      iVar1 = (int)(short)uVar5;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0620bc(uVar3,iVar1,ar6_00,1));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,iVar1,ar6_00,a7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02bfd8(ar6[1],iVar1,ar6_00,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],iVar1,ar6_00,a7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0620a4(uVar3,(int)(short)uVar5,1 - iVar1,a7));
      if ((char)uVar3 == '\x01') {
        puVar2 = (undefined *)(unsigned)0x1;
      }
      else {
        puVar2 = (undefined *)(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xc) + -1);
        *(le<unsigned>* )(unsigned)(ar4 + 0xc) = puVar2;
      }
      break;
    case 0x11:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      if (iVar1 == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
        (vsp = ((unsigned long)(fr0_ - 152)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xc0))))(*ar6,piVar4,piVar6,ar7));
        piVar4 = (le<int>* )(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02cb74(ar6[1] + 0xa8,1,piVar6,ar7));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c13bcc4) = 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), get_field_140_025f70(ar6[1],piVar4,piVar6,ar7));
      if (iVar1 == 0) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa688(0x8c35468c,piVar4,piVar6,ar7));
        ar7 = "GRATIFIC_COPULATION_DONE";
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,9,0,"GRATIFIC_COPULATION_DONE"));
        piVar6 = (le<int>* )(unsigned)0x1b;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0b9ed4(ar6[6],0x14,0x1b,ar7));
      }
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x94))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,0,piVar6,ar7); });
      uVar3 = 1;
      iVar1 = ar6[1] + 0xa8;
      (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c06209c(iVar1,1,piVar6,ar7));
      puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0c4e2c(iVar1,uVar3,piVar6,ar7));
      break;
    case 0x13:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c13bcc4) = 1;
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
      uVar5 = CONCAT13((char)uVar3,(int3)(*(le<undefined4>* )(fr0_ - 0x94)));
      if ('\x03' < (char)uVar3) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0e98f0(ar6[3],piVar4,piVar6,ar7));
        uVar5 = CONCAT13((char)((uint)uVar5 >> 0x18),CONCAT12((char)uVar3,(short)uVar5));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0fa5bc(0x8c35468c,(int)(char)uVar3,piVar6,ar7));
        ar7 = "EVENT_AFTER_ROCK_PUSH";
        piVar6 = (le<int>* )(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c0306d4(ar4 + 0x9c,0x26,0,"EVENT_AFTER_ROCK_PUSH"));
        (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c02cbbc(ar6[1] + 0x90,1,piVar6,ar7));
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1],0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x18,0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x60,0,piVar6,ar7); });
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02c330(ar6[1] + 0x30,0,piVar6,ar7); });
        piVar4 = (le<int>* )(unsigned)0x1;
        ({ unsigned long ri0_ = (unsigned long)(uVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar6,ar7); });
        *(le<undefined4>* )(unsigned)(ar4 + 0x870) = 1;
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
      puVar2 = (undefined *)(unsigned)({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 152)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 152)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x1f,0,"REACTION_AFTER_DEKOPIN"); });
      break;
    case 0x1f:
      if (*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) {
        puVar2 = (undefined *)(unsigned)0x0;
      }
      else {
        puVar2 = (undefined *)(unsigned)0x6c;
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
      }
    }
  }
  return puVar2;
}

__asm__(".globl s_GRATIFIC_EAT_1063b2\n.set s_GRATIFIC_EAT_1063b2, s_GRATIFIC_EAT_1063b2_def\n");

}
//@unit 8c106c84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_TEMP_LACK_106c8a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_TEMP_LACK_106c8a");
  return (unsigned)sh4_interp(0x8c106c84, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_TEMP_LACK_106c8a\n.set s_REACTION_TEMP_LACK_106c8a, s_REACTION_TEMP_LACK_106c8a_def\n");
}
//@unit 8c106f58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_COMMON_106f5e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_COMMON_106f5e");
  return (unsigned)sh4_interp(0x8c106f58, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_COMMON_106f5e\n.set s_GRAPHICS_COMMON_106f5e, s_GRAPHICS_COMMON_106f5e_def\n");
}
//@unit 8c107590
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_EVENT_QUIZ_107596_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_EVENT_QUIZ_107596");
  return (unsigned)sh4_interp(0x8c107590, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_EVENT_QUIZ_107596\n.set s_EVENT_QUIZ_107596, s_EVENT_QUIZ_107596_def\n");
}
//@unit 8c1080dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_REACTION_TITILLATE_1080e0_def(int ar4,le<int>* ar5,int ar6,undefined *ar7)

{
  TRACE_ENTER("s_REACTION_TITILLATE_1080e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(unsigned)(0x84 + ar4) == '\x01') {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) || (*(le<int>* )(unsigned)(ar4 + 0x40) != 0)) {
      if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) &&
         (*(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1a, *(le<int>* )(unsigned)(0x384 + ar4) == -1)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x376;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                  (ar4 + 0x9c,0x28,0,ar7); });
        *(le<undefined4>* )(unsigned)(0xfc + ar4) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8320))))
                          (0x8c35468c,*(le<undefined4>* )(unsigned)(0x388 + ar4),iVar2,ar7));
        *(le<undefined4>* )(unsigned)(0x384 + ar4) = uVar1;
        *(le<undefined4>* )(unsigned)(0x14c + ar4) = 0;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7));
      }
    }
    else {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1a;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1a;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1a;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7));
    }
  }
  else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x14;
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
    *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0;
    *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0;
  }
  if (*(char *)(unsigned)(0x85 + ar4) == '\x01') {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1b) || (*(le<int>* )(unsigned)(ar4 + 0x40) != 0)) {
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1b) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1b;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1b;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1b;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
    }
  }
  if ((*(char *)(unsigned)(0x87 + ar4) == '\x01') && (*(le<int>* )(unsigned)(ar4 + 0x40) != 0x19)) {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0) ||
       ((*(le<int>* )(unsigned)(ar4 + 0x40) == 3 || (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x14)))) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x19;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x19;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x19;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7));
      ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x389;
      iVar2 = 4;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0306d4(ar4 + 0x9c,0x27,4,ar7));
    }
    else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x19) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar5))))(ar5,0xd,iVar2,ar7));
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar1,a6,ar7));
    if (((iVar2 == 1) &&
        (uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(le<undefined4>* )(unsigned)(ar6 + 0x18),uVar1,a6,ar7)), (byte)uVar1 < 2)) &&
       (*(le<int>* )(unsigned)(ar4 + 0x40) != 0x1f)) {
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = uVar1;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x41;
        *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1f;
        *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1f;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1f;
        *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
        *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      }
      else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1f) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(unsigned)(0x84 + ar4) = 0;
  *(undefined1 *)(unsigned)(0x85 + ar4) = 0;
  iVar2 = 0x87;
  *(undefined1 *)(unsigned)(0x87 + ar4) = 0;
  return iVar2;
}

__asm__(".globl s_REACTION_TITILLATE_1080e0\n.set s_REACTION_TITILLATE_1080e0, s_REACTION_TITILLATE_1080e0_def\n");

}
//@unit 8c108560
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_GRATIFIC_RID_HOT_108562");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bebc(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,7,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x39a); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,8,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3ab); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,0x1a,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x3bd); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl s_GRATIFIC_RID_HOT_108562\n.set s_GRATIFIC_RID_HOT_108562, s_GRATIFIC_RID_HOT_108562_def\n");

}
//@unit 8c10862c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10862c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10862c");
  return (unsigned)sh4_interp(0x8c10862c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10862c\n.set FUN_8c10862c, FUN_8c10862c_def\n");
}
//@unit 8c1089e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1089e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1089e4");
  return (unsigned)sh4_interp(0x8c1089e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1089e4\n.set FUN_8c1089e4, FUN_8c1089e4_def\n");
}
//@unit 8c108f3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c108f3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
  if (*(le<int>* )(unsigned)(ar4 + 900) == -1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x104);
    if ((iVar3 < 5) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
        break;
      case 1:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x2d;
        break;
      case 4:
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
      }
    }
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x40);
    if (iVar3 < 0xf) {
      if (iVar3 < 0xe) {
        if (iVar3 < 7) {
          if (-1 < iVar3) {
            if (iVar3 == 0) {
              iVar3 = ar6;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c5ac(iVar1 * 0x18 + *(le<int>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
              if ('\0' < (char)uVar2) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
                if (iVar3 == 0) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 1) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 2) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
                else if (iVar3 == 4) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
                }
              }
            }
            else if (iVar3 == 3) {
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
              if (iVar3 == 0) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 1) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 2) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
              else if (iVar3 == 4) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
              }
            }
            else if (iVar3 == 6) {
              *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x37;
            }
          }
        }
        else if (iVar3 == 0xd) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0xf;
        }
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
    }
    else if (iVar3 < 0x14) {
      if (0x10 < iVar3) {
        if (iVar3 == 0x11) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
          if (iVar3 == 0) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x19;
          }
          else {
            *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
          }
        }
        else if (iVar3 == 0x13) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x23;
        }
      }
    }
    else if (iVar3 == 0x1d) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
    }
  }
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c108f3c\n.set FUN_8c108f3c, FUN_8c108f3c_def\n");

}
//@unit 8c1091cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_IDLEACTION_TREMOR_1091d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (((*(le<int>* )(unsigned)(ar4 + 900) == -1) &&
        (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)),ar5,ar6,ar7)),
        iVar2 < 0x11)) && (10 < iVar2)) {
                    
      switch(iVar2) {
      case 0xb:
        ar7 = "IDLEACTION_PAW";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_PAW"); });
        break;
      case 0xc:
        ar7 = "IDLEACTION_TREMOR";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_TREMOR"); });
        break;
      case 0xd:
        ar7 = "IDLEACTION_BITE";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_BITE"); });
        break;
      case 0xe:
        ar7 = "IDLEACTION_ACTION_JUMP";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_ACTION_JUMP"); });
        break;
      case 0xf:
        if (*(char *)(unsigned)(ar4 + 0x98) < '\x05') {
          ar7 = "IDLEACTION_STAND_SWIM";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_STAND_SWIM"); });
        }
        else {
          ar7 = "EVENT_WANT_LAND";
          iVar1 = 0;
          ar5 = 0x19;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"EVENT_WANT_LAND"); });
        }
        break;
      case 0x10:
        ar7 = "IDLEACTION_REVERSE_SWIM";
        iVar1 = 0;
        ar5 = 0x19;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_REVERSE_SWIM"); });
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)),ar5,iVar1,ar7));
    if (iVar1 == 0x11) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"IDLEACTION_HEAD_DAMAGE"));
    }
  }
  return iVar1;
}

__asm__(".globl s_IDLEACTION_TREMOR_1091d0\n.set s_IDLEACTION_TREMOR_1091d0, s_IDLEACTION_TREMOR_1091d0_def\n");

}
//@unit 8c1093a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_STATUS_SUCKED_1093aa_def(int ar4,le<int>* ar5,le<int>* ar6,char *ar7)

{
  TRACE_ENTER("s_STATUS_SUCKED_1093aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  le<int>* ar5_00;
  le<int>* ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,ar5,ar6,ar7));
  if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 4) != 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_6c_02f46c(*ar6,ar5_00,ar6_00,ar7));
    if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_70_05f490(*ar6,ar5_00,ar6_00,ar7)), iVar1 == 0)) {
      ar6_00 = (le<int>* )(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0b9ed4(ar6[6],0xe,0x1b,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 99;
      ar5_00 = (le<int>* )(unsigned)0xc7;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,199,ar6_00,ar7));
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 10;
    }
    else if (*(le<int>* )(unsigned)(ar4 + 4) != 0xb) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xb;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 99;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0xd;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x4af,ar6_00,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x840) = 0xd;
      (*(undefined1 *)(unsigned)0x8c1eee30) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 0x844) = 0x22;
      (*(undefined1 *)(unsigned)0x8c1eee34) = 0x22;
      ar7 = "STATUS_SUCKED";
      ar6_00 = (le<int>* )(unsigned)0x0;
      ar5_00 = (le<int>* )(unsigned)0x19;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,"STATUS_SUCKED"));
      if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
        (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(le<int>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
      }
    }
    if ((*(char *)(unsigned)(ar4 + 0x864) == '\x01') && (*(le<int>* )(unsigned)(ar4 + 4) == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 0;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
  if ((short)uVar2 == 1) {
LAB_8c109510:
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_8_1097a0(ar6[3],ar5_00,ar6_00,ar7));
    if ((((iVar1 == 1) && (*(char *)(unsigned)(ar4 + 0x864) != '\x01')) &&
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02c518(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == -1)) && (*(le<int>* )(unsigned)(ar4 + 4) != 0xd)
       ) {
      *(undefined1 *)(unsigned)(ar4 + 0x864) = 1;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      ar5_00 = (le<int>* )(unsigned)0x0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c109798(ar6[3],0,ar6_00,ar7); });
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x5f;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
      *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02bef8(ar6[1],ar5_00,ar6_00,ar7));
    (*(le<undefined4>* )(fr0_ - 0x54)) = CONCAT22((short)uVar2,(short)(*(le<undefined4>* )(fr0_ - 0x54)));
    if ((short)uVar2 == 2) goto LAB_8c109510;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_c4_066448(ar6[3],ar5_00,ar6_00,ar7));
  if (((iVar1 == 0) && (*(le<int>* )(unsigned)(ar4 + 0x40) == 0)) && (*(le<int>* )(unsigned)(ar4 + 900) == -1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7));
    if ((iVar1 == 3) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 4)) {
      ar5_00 = (le<int>* )(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
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
        ar6_00 = (le<int>* )(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (le<int>* )(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
    else {
      ar5_00 = (le<int>* )(unsigned)0xf;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
      if ((0 < iVar1) && (*(char *)(unsigned)(ar4 + 0x865) == '\x01')) {
        ar7 = "REACTION_FEED_FULL";
        ar6_00 = (le<int>* )(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_FEED_FULL"));
        ar5_00 = (le<int>* )(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c06643c(ar6[3],1,ar6_00,ar7));
      }
    }
  }
LAB_8c1096ec:
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x6c);
  if (((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), get_field_13c_028d9c(ar6[1],ar5_00,ar6_00,ar7)), iVar1 == 2)) &&
     (iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40), iVar1 == 0)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,0xf,ar6_00,ar7));
    iVar1 = 1;
    if (((0 < iVar3) && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x865), iVar1 == 0)) &&
       ((iVar1 = *(le<int>* )(unsigned)(ar4 + 4), iVar1 != 0xd && (iVar1 = *(le<int>* )(unsigned)(ar4 + 4), iVar1 != 6)))) {
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c02f298(ar4,0x2b9,ar6_00,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x5f;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
      *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      iVar1 = 0x865;
      *(undefined1 *)(unsigned)(ar4 + 0x865) = 1;
    }
  }
  return iVar1;
}

__asm__(".globl s_STATUS_SUCKED_1093aa\n.set s_STATUS_SUCKED_1093aa, s_STATUS_SUCKED_1093aa_def\n");

}
//@unit 8c109798
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109798");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c109798\n.set FUN_8c109798, FUN_8c109798_def\n");

}
//@unit 8c1097a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_8_1097a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_1097a0\n.set get_field_8_1097a0, get_field_8_1097a0_def\n");

}
//@unit 8c1097a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_STATUS_LIFE_1097b2_def(int ar4,le<int>* ar5,le<int>* ar6,undefined *ar7)

{
  TRACE_ENTER("s_STATUS_LIFE_1097b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<int>* piVar3;
  undefined4 uVar4;
  le<int>* piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],ar5,ar6,ar7));
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
    piVar3 = (le<int>* )(unsigned)0x3c;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
    if (1 < iVar1) {
      piVar3 = (le<int>* )(unsigned)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (le<int>* )(unsigned)((int)piVar3 + 1);
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],uVar4,piVar5,ar7));
      piVar3 = (le<int>* )(unsigned)0x3c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      if ((((0 < iVar1) &&
           (uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar6[1],piVar3,piVar5,ar7)), 6 < (short)uVar4)) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02d1a0))))
                             (ar6[1] + 0xa8,piVar3,piVar5,ar7)), 0 < iVar1)) &&
         (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7)),
           iVar1 == 4 && (*(le<int>* )(unsigned)(0x384 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(unsigned)(0x98 + ar4) < '\x04' && (*(le<int>* )(unsigned)(ar4 + 4) == 0)))))))
         ) {
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x22c;
        piVar5 = (le<int>* )(unsigned)0x0;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030568))))
                  (ar4 + 0x9c,0x16,0,ar7); });
        piVar3 = (le<int>* )(unsigned)0x0;
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
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
    if (((((iVar1 == 1) && (iVar1 = *(le<int>* )(unsigned)(0x384 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(unsigned)(0x98 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1 &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0637d0))))
                            (*(le<undefined4>* )(unsigned)(0x7cc + ar6[6]),piVar3,piVar5,ar7)), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(unsigned)(0x854 + ar4), iVar1 == 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(unsigned)(0x854 + ar4) = 1;
        iVar1 = ({ unsigned long t0_ = (unsigned long)(
                           (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                          (ar4 + 0x9c,0x16,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x48f); });
      }
    }
  }
  return iVar1;
}

__asm__(".globl s_STATUS_LIFE_1097b2\n.set s_STATUS_LIFE_1097b2, s_STATUS_LIFE_1097b2_def\n");

}
//@unit 8c109b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109b10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x1c) = (undefined1)ar5;
  return 0x1c;
}

__asm__(".globl FUN_8c109b10\n.set FUN_8c109b10, FUN_8c109b10_def\n");

}
//@unit 8c109b18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c109b18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c109b18");
  return (unsigned)sh4_interp(0x8c109b18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c109b18\n.set FUN_8c109b18, FUN_8c109b18_def\n");
}
//@unit 8c109b98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c109b98_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c109b98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(&(*(le<undefined4>* )(fr0_ - 0x18)),ar5,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0x44));
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,a5,a6,a7));
  switch(uVar1) {
  case 6:
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x70,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x28,uVar1,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,a6,a7));
    if (cVar2 == '\0') {
      *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
      *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
      *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
      *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
      *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
    }
    else {
      *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
    }
    break;
  case 0xd:
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,a7));
      if (cVar2 == '\0') {
        *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
        *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
      }
      else {
        *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(&(*(le<undefined4>* )(fr0_ - 0x18)),0xffffffff,a6,a7));
  return uVar1;
}

__asm__(".globl FUN_8c109b98\n.set FUN_8c109b98, FUN_8c109b98_def\n");

}
//@unit 8c109d98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12c3c4_m6_109d98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa2d8(0x8c35468c,ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl Class_12c3c4_m6_109d98\n.set Class_12c3c4_m6_109d98, Class_12c3c4_m6_109d98_def\n");

}
//@unit 8c109dc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109dc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  if (*(char *)(unsigned)(0x98 + ar4) == '\x03') {
    ar5_00 = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109e34(*(le<undefined4>* )(unsigned)(ar5 + 0x10),1,ar6,ar7));
    if ((((char)uVar1 == '\x05') && (*(le<int>* )(unsigned)(0x874 + ar4) == 0)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1d0(*(le<int>* )(unsigned)(ar5 + 4) + 0xa8,ar5_00,ar6,ar7)),
       (char)uVar1 == '\x01')) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c109dc4\n.set FUN_8c109dc4, FUN_8c109dc4_def\n");

}
//@unit 8c109e34
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109e34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + (char)ar5 + 0xc);
}

__asm__(".globl FUN_8c109e34\n.set FUN_8c109e34, FUN_8c109e34_def\n");

}
//@unit 8c109e40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109e40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02cb7c(*(le<int>* )(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cb74(*(le<int>* )(unsigned)(ar5 + 4) + 0xa8,0,ar6,ar7));
    uVar2 = 1;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c035718(*(le<undefined4>* )(unsigned)(ar5 + 0x10),1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02c340(*(le<int>* )(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
    if (0x5e < iVar1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_02d1e0(*(le<int>* )(unsigned)(ar5 + 4) + 0x90,uVar2,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02cbbc(*(le<int>* )(unsigned)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7));
    }
    iVar1 = 0x874;
    *(le<undefined4>* )(unsigned)(ar4 + 0x874) = 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c109e40\n.set FUN_8c109e40, FUN_8c109e40_def\n");

}
//@unit 8c109f08
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109f08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<undefined4>* )(fr0_ - 0x20)) = ar5;
  (*(le<undefined4>* )(fr0_ - 0x14)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109dc4(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c109e40(ar4,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
    iVar1 = 1;
    *(le<undefined4>* )(unsigned)0x8c27d430 = 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c109f08\n.set FUN_8c109f08, FUN_8c109f08_def\n");

}
//@unit 8c109f58
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_150_109f58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x150 + ar4);
}

__asm__(".globl get_field_150_109f58\n.set get_field_150_109f58, get_field_150_109f58_def\n");

}
//@unit 8c109f64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c109f64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x150;
  *(le<undefined4>* )(unsigned)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c109f64\n.set FUN_8c109f64, FUN_8c109f64_def\n");

}
//@unit 8c109f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12c3c4_m7_109f70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(char *)(unsigned)(0x854 + ar4) = (char)*(le<undefined4>* )(unsigned)(ar5 + 4);
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl Class_12c3c4_m7_109f70\n.set Class_12c3c4_m7_109f70, Class_12c3c4_m7_109f70_def\n");

}
//@unit 8c109fc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12c3c4_m8_109fc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<int>* )(unsigned)(ar5 + 4) = (int)*(char *)(unsigned)(0x854 + ar4);
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(unsigned)(0x99 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12c3c4_m8_109fc0\n.set Class_12c3c4_m8_109fc0, Class_12c3c4_m8_109fc0_def\n");

}
//@unit 8c10a00c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3c4_m9_10a00c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3c4_m9_10a00c");
  return (unsigned)sh4_interp(0x8c10a00c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3c4_m9_10a00c\n.set Class_12c3c4_m9_10a00c, Class_12c3c4_m9_10a00c_def\n");
}
//@unit 8c10a074
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3c4_m10_10a074_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3c4_m10_10a074");
  return (unsigned)sh4_interp(0x8c10a074, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3c4_m10_10a074\n.set Class_12c3c4_m10_10a074, Class_12c3c4_m10_10a074_def\n");
}
//@unit 8c10a0dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3c4_m5_10a0dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3c4_m5_10a0dc");
  return (unsigned)sh4_interp(0x8c10a0dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3c4_m5_10a0dc\n.set Class_12c3c4_m5_10a0dc, Class_12c3c4_m5_10a0dc_def\n");
}
//@unit 8c10a16c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c3c4_m4_10a16c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c3c4_m4_10a16c");
  return (unsigned)sh4_interp(0x8c10a16c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c3c4_m4_10a16c\n.set Class_12c3c4_m4_10a16c, Class_12c3c4_m4_10a16c_def\n");
}
//@unit 8c10a1fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_100_10a1fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_100_10a1fc");
  return (unsigned)sh4_interp(0x8c10a1fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_100_10a1fc\n.set get_field_100_10a1fc, get_field_100_10a1fc_def\n");
}
//@unit 8c10a208
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_870_10a208_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_870_10a208");
  return (unsigned)sh4_interp(0x8c10a208, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_870_10a208\n.set get_field_870_10a208, get_field_870_10a208_def\n");
}
//@unit 8c10a214
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a214_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a214");
  return (unsigned)sh4_interp(0x8c10a214, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a214\n.set FUN_8c10a214, FUN_8c10a214_def\n");
}
//@unit 8c10a2cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a2cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a2cc");
  return (unsigned)sh4_interp(0x8c10a2cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a2cc\n.set FUN_8c10a2cc, FUN_8c10a2cc_def\n");
}
//@unit 8c10a308
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a308_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a308");
  return (unsigned)sh4_interp(0x8c10a308, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a308\n.set FUN_8c10a308, FUN_8c10a308_def\n");
}
//@unit 8c10a312
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a312_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a312");
  return (unsigned)sh4_interp(0x8c10a312, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a312\n.set FUN_8c10a312, FUN_8c10a312_def\n");
}
//@unit 8c10a410
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a410_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a410");
  return (unsigned)sh4_interp(0x8c10a410, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a410\n.set FUN_8c10a410, FUN_8c10a410_def\n");
}
//@unit 8c10a4bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a4bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a4bc");
  return (unsigned)sh4_interp(0x8c10a4bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a4bc\n.set FUN_8c10a4bc, FUN_8c10a4bc_def\n");
}
//@unit 8c10a564
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a564_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a564");
  return (unsigned)sh4_interp(0x8c10a564, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a564\n.set FUN_8c10a564, FUN_8c10a564_def\n");
}
//@unit 8c10a80c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10a80c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10a80c");
  return (unsigned)sh4_interp(0x8c10a80c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10a80c\n.set FUN_8c10a80c, FUN_8c10a80c_def\n");
}
//@unit 8c10abf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10abf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10abf4");
  return (unsigned)sh4_interp(0x8c10abf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10abf4\n.set FUN_8c10abf4, FUN_8c10abf4_def\n");
}
//@unit 8c10abfa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10abfa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10abfa");
  return (unsigned)sh4_interp(0x8c10abfa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10abfa\n.set FUN_8c10abfa, FUN_8c10abfa_def\n");
}
//@unit 8c10ac3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ac3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ac3c");
  return (unsigned)sh4_interp(0x8c10ac3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ac3c\n.set FUN_8c10ac3c, FUN_8c10ac3c_def\n");
}
//@unit 8c10ad00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ad00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ad00");
  return (unsigned)sh4_interp(0x8c10ad00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ad00\n.set FUN_8c10ad00, FUN_8c10ad00_def\n");
}
//@unit 8c10af3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10af3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10af3c");
  return (unsigned)sh4_interp(0x8c10af3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10af3c\n.set FUN_8c10af3c, FUN_8c10af3c_def\n");
}
//@unit 8c10af94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10af94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10af94");
  return (unsigned)sh4_interp(0x8c10af94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10af94\n.set FUN_8c10af94, FUN_8c10af94_def\n");
}
//@unit 8c10afbe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10afbe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10afbe");
  return (unsigned)sh4_interp(0x8c10afbe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10afbe\n.set FUN_8c10afbe, FUN_8c10afbe_def\n");
}
//@unit 8c10aff4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10aff4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10aff4");
  return (unsigned)sh4_interp(0x8c10aff4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10aff4\n.set FUN_8c10aff4, FUN_8c10aff4_def\n");
}
//@unit 8c10b02a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b02a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b02a");
  return (unsigned)sh4_interp(0x8c10b02a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b02a\n.set FUN_8c10b02a, FUN_8c10b02a_def\n");
}
//@unit 8c10b060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b060");
  return (unsigned)sh4_interp(0x8c10b060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b060\n.set FUN_8c10b060, FUN_8c10b060_def\n");
}
//@unit 8c10b096
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b096_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b096");
  return (unsigned)sh4_interp(0x8c10b096, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b096\n.set FUN_8c10b096, FUN_8c10b096_def\n");
}
//@unit 8c10b0d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b0d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b0d8");
  return (unsigned)sh4_interp(0x8c10b0d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b0d8\n.set FUN_8c10b0d8, FUN_8c10b0d8_def\n");
}
//@unit 8c10b10e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b10e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b10e");
  return (unsigned)sh4_interp(0x8c10b10e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b10e\n.set FUN_8c10b10e, FUN_8c10b10e_def\n");
}
//@unit 8c10b144
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b144_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b144");
  return (unsigned)sh4_interp(0x8c10b144, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b144\n.set FUN_8c10b144, FUN_8c10b144_def\n");
}
//@unit 8c10b17a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b17a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b17a");
  return (unsigned)sh4_interp(0x8c10b17a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b17a\n.set FUN_8c10b17a, FUN_8c10b17a_def\n");
}
//@unit 8c10b1b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b1b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b1b0");
  return (unsigned)sh4_interp(0x8c10b1b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b1b0\n.set FUN_8c10b1b0, FUN_8c10b1b0_def\n");
}
//@unit 8c10b1ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b1ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b1ec");
  return (unsigned)sh4_interp(0x8c10b1ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b1ec\n.set FUN_8c10b1ec, FUN_8c10b1ec_def\n");
}
//@unit 8c10b576
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b576_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b576");
  return (unsigned)sh4_interp(0x8c10b576, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b576\n.set FUN_8c10b576, FUN_8c10b576_def\n");
}
//@unit 8c10b5b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b5b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b5b8");
  return (unsigned)sh4_interp(0x8c10b5b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b5b8\n.set FUN_8c10b5b8, FUN_8c10b5b8_def\n");
}
//@unit 8c10b5f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b5f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b5f0");
  return (unsigned)sh4_interp(0x8c10b5f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b5f0\n.set FUN_8c10b5f0, FUN_8c10b5f0_def\n");
}
//@unit 8c10b628
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b628_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b628");
  return (unsigned)sh4_interp(0x8c10b628, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b628\n.set FUN_8c10b628, FUN_8c10b628_def\n");
}
//@unit 8c10b660
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b660_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b660");
  return (unsigned)sh4_interp(0x8c10b660, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b660\n.set FUN_8c10b660, FUN_8c10b660_def\n");
}
//@unit 8c10b698
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b698_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b698");
  return (unsigned)sh4_interp(0x8c10b698, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b698\n.set FUN_8c10b698, FUN_8c10b698_def\n");
}
//@unit 8c10b6a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b6a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b6a0");
  return (unsigned)sh4_interp(0x8c10b6a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b6a0\n.set FUN_8c10b6a0, FUN_8c10b6a0_def\n");
}
//@unit 8c10b6cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b6cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b6cc");
  return (unsigned)sh4_interp(0x8c10b6cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b6cc\n.set FUN_8c10b6cc, FUN_8c10b6cc_def\n");
}
//@unit 8c10b840
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_bind_recognizer_model_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_bind_recognizer_model");
  return (unsigned)sh4_interp(0x8c10b840, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_bind_recognizer_model\n.set asr_lib_bind_recognizer_model, asr_lib_bind_recognizer_model_def\n");
}
//@unit 8c10b852
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b852_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b852");
  return (unsigned)sh4_interp(0x8c10b852, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b852\n.set FUN_8c10b852, FUN_8c10b852_def\n");
}
//@unit 8c10b8c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10b8c6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10b8c6");
  return (unsigned)sh4_interp(0x8c10b8c6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10b8c6\n.set FUN_8c10b8c6, FUN_8c10b8c6_def\n");
}
//@unit 8c10b914
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_create_engine_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_create_engine");
  return (unsigned)sh4_interp(0x8c10b914, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_create_engine\n.set asr_lib_create_engine, asr_lib_create_engine_def\n");
}
//@unit 8c10ba20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ba20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ba20");
  return (unsigned)sh4_interp(0x8c10ba20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ba20\n.set FUN_8c10ba20, FUN_8c10ba20_def\n");
}
//@unit 8c10ba7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ba7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ba7c");
  return (unsigned)sh4_interp(0x8c10ba7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ba7c\n.set FUN_8c10ba7c, FUN_8c10ba7c_def\n");
}
//@unit 8c10bad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bad4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bad4");
  return (unsigned)sh4_interp(0x8c10bad4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bad4\n.set FUN_8c10bad4, FUN_8c10bad4_def\n");
}
//@unit 8c10bb3a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bb3a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bb3a");
  return (unsigned)sh4_interp(0x8c10bb3a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bb3a\n.set FUN_8c10bb3a, FUN_8c10bb3a_def\n");
}
//@unit 8c10bb6e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bb6e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bb6e");
  return (unsigned)sh4_interp(0x8c10bb6e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bb6e\n.set FUN_8c10bb6e, FUN_8c10bb6e_def\n");
}
//@unit 8c10bb9a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bb9a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bb9a");
  return (unsigned)sh4_interp(0x8c10bb9a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bb9a\n.set FUN_8c10bb9a, FUN_8c10bb9a_def\n");
}
//@unit 8c10bba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bba8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bba8");
  return (unsigned)sh4_interp(0x8c10bba8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bba8\n.set FUN_8c10bba8, FUN_8c10bba8_def\n");
}
//@unit 8c10bbf2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bbf2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bbf2");
  return (unsigned)sh4_interp(0x8c10bbf2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bbf2\n.set FUN_8c10bbf2, FUN_8c10bbf2_def\n");
}
//@unit 8c10bce4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bce4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bce4");
  return (unsigned)sh4_interp(0x8c10bce4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bce4\n.set FUN_8c10bce4, FUN_8c10bce4_def\n");
}
//@unit 8c10bd20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bd20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bd20");
  return (unsigned)sh4_interp(0x8c10bd20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bd20\n.set FUN_8c10bd20, FUN_8c10bd20_def\n");
}
//@unit 8c10bd4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bd4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bd4c");
  return (unsigned)sh4_interp(0x8c10bd4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bd4c\n.set FUN_8c10bd4c, FUN_8c10bd4c_def\n");
}
//@unit 8c10bdee
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10bdee_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10bdee");
  return (unsigned)sh4_interp(0x8c10bdee, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10bdee\n.set FUN_8c10bdee, FUN_8c10bdee_def\n");
}
//@unit 8c10be22
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10be22_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10be22");
  return (unsigned)sh4_interp(0x8c10be22, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10be22\n.set FUN_8c10be22, FUN_8c10be22_def\n");
}
//@unit 8c10be4e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10be4e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10be4e");
  return (unsigned)sh4_interp(0x8c10be4e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10be4e\n.set FUN_8c10be4e, FUN_8c10be4e_def\n");
}
//@unit 8c10be70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10be70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10be70");
  return (unsigned)sh4_interp(0x8c10be70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10be70\n.set FUN_8c10be70, FUN_8c10be70_def\n");
}
//@unit 8c10be9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10be9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10be9c");
  return (unsigned)sh4_interp(0x8c10be9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10be9c\n.set FUN_8c10be9c, FUN_8c10be9c_def\n");
}
//@unit 8c10bf44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_load_model_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_load_model");
  return (unsigned)sh4_interp(0x8c10bf44, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_load_model\n.set asr_lib_load_model, asr_lib_load_model_def\n");
}
//@unit 8c10bfc6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_create_recognizer_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_create_recognizer");
  return (unsigned)sh4_interp(0x8c10bfc6, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_create_recognizer\n.set asr_lib_create_recognizer, asr_lib_create_recognizer_def\n");
}
//@unit 8c10c0b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c0b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c0b4");
  return (unsigned)sh4_interp(0x8c10c0b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c0b4\n.set FUN_8c10c0b4, FUN_8c10c0b4_def\n");
}
//@unit 8c10c2a2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c2a2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c2a2");
  return (unsigned)sh4_interp(0x8c10c2a2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c2a2\n.set FUN_8c10c2a2, FUN_8c10c2a2_def\n");
}
//@unit 8c10c2aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c2aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c2aa");
  return (unsigned)sh4_interp(0x8c10c2aa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c2aa\n.set FUN_8c10c2aa, FUN_8c10c2aa_def\n");
}
//@unit 8c10c2f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c2f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c2f4");
  return (unsigned)sh4_interp(0x8c10c2f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c2f4\n.set FUN_8c10c2f4, FUN_8c10c2f4_def\n");
}
//@unit 8c10c322
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c322_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c322");
  return (unsigned)sh4_interp(0x8c10c322, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c322\n.set FUN_8c10c322, FUN_8c10c322_def\n");
}
//@unit 8c10c32a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c32a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c32a");
  return (unsigned)sh4_interp(0x8c10c32a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c32a\n.set FUN_8c10c32a, FUN_8c10c32a_def\n");
}
//@unit 8c10c356
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c356_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c356");
  return (unsigned)sh4_interp(0x8c10c356, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c356\n.set FUN_8c10c356, FUN_8c10c356_def\n");
}
//@unit 8c10c35e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c35e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c35e");
  return (unsigned)sh4_interp(0x8c10c35e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c35e\n.set FUN_8c10c35e, FUN_8c10c35e_def\n");
}
//@unit 8c10c3a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c3a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c3a0");
  return (unsigned)sh4_interp(0x8c10c3a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c3a0\n.set FUN_8c10c3a0, FUN_8c10c3a0_def\n");
}
//@unit 8c10c3de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c3de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c3de");
  return (unsigned)sh4_interp(0x8c10c3de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c3de\n.set FUN_8c10c3de, FUN_8c10c3de_def\n");
}
//@unit 8c10c48c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c48c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c48c");
  return (unsigned)sh4_interp(0x8c10c48c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c48c\n.set FUN_8c10c48c, FUN_8c10c48c_def\n");
}
//@unit 8c10c530
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c530_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c530");
  return (unsigned)sh4_interp(0x8c10c530, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c530\n.set FUN_8c10c530, FUN_8c10c530_def\n");
}
//@unit 8c10c838
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c838_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c838");
  return (unsigned)sh4_interp(0x8c10c838, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c838\n.set FUN_8c10c838, FUN_8c10c838_def\n");
}
//@unit 8c10c8e2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c8e2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c8e2");
  return (unsigned)sh4_interp(0x8c10c8e2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c8e2\n.set FUN_8c10c8e2, FUN_8c10c8e2_def\n");
}
//@unit 8c10c986
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c986_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c986");
  return (unsigned)sh4_interp(0x8c10c986, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c986\n.set FUN_8c10c986, FUN_8c10c986_def\n");
}
//@unit 8c10c99c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c99c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c99c");
  return (unsigned)sh4_interp(0x8c10c99c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c99c\n.set FUN_8c10c99c, FUN_8c10c99c_def\n");
}
//@unit 8c10c9c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c9c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c9c8");
  return (unsigned)sh4_interp(0x8c10c9c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c9c8\n.set FUN_8c10c9c8, FUN_8c10c9c8_def\n");
}
//@unit 8c10c9cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c9cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c9cc");
  return (unsigned)sh4_interp(0x8c10c9cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c9cc\n.set FUN_8c10c9cc, FUN_8c10c9cc_def\n");
}
//@unit 8c10c9e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10c9e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10c9e4");
  return (unsigned)sh4_interp(0x8c10c9e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10c9e4\n.set FUN_8c10c9e4, FUN_8c10c9e4_def\n");
}
//@unit 8c10ca10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ca10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ca10");
  return (unsigned)sh4_interp(0x8c10ca10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ca10\n.set FUN_8c10ca10, FUN_8c10ca10_def\n");
}
//@unit 8c10ca2e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ca2e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ca2e");
  return (unsigned)sh4_interp(0x8c10ca2e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ca2e\n.set FUN_8c10ca2e, FUN_8c10ca2e_def\n");
}
//@unit 8c10ca58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ca58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ca58");
  return (unsigned)sh4_interp(0x8c10ca58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ca58\n.set FUN_8c10ca58, FUN_8c10ca58_def\n");
}
//@unit 8c10cb4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cb4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cb4c");
  return (unsigned)sh4_interp(0x8c10cb4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cb4c\n.set FUN_8c10cb4c, FUN_8c10cb4c_def\n");
}
//@unit 8c10cb90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cb90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cb90");
  return (unsigned)sh4_interp(0x8c10cb90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cb90\n.set FUN_8c10cb90, FUN_8c10cb90_def\n");
}
//@unit 8c10cc6e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cc6e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cc6e");
  return (unsigned)sh4_interp(0x8c10cc6e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cc6e\n.set FUN_8c10cc6e, FUN_8c10cc6e_def\n");
}
//@unit 8c10cccc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cccc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cccc");
  return (unsigned)sh4_interp(0x8c10cccc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cccc\n.set FUN_8c10cccc, FUN_8c10cccc_def\n");
}
//@unit 8c10cefa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cefa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cefa");
  return (unsigned)sh4_interp(0x8c10cefa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cefa\n.set FUN_8c10cefa, FUN_8c10cefa_def\n");
}
//@unit 8c10cf6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cf6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cf6c");
  return (unsigned)sh4_interp(0x8c10cf6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cf6c\n.set FUN_8c10cf6c, FUN_8c10cf6c_def\n");
}
//@unit 8c10cf82
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10cf82_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10cf82");
  return (unsigned)sh4_interp(0x8c10cf82, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10cf82\n.set FUN_8c10cf82, FUN_8c10cf82_def\n");
}
//@unit 8c10d016
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d016_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d016");
  return (unsigned)sh4_interp(0x8c10d016, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d016\n.set FUN_8c10d016, FUN_8c10d016_def\n");
}
//@unit 8c10d0da
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d0da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d0da");
  return (unsigned)sh4_interp(0x8c10d0da, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d0da\n.set FUN_8c10d0da, FUN_8c10d0da_def\n");
}
//@unit 8c10d196
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d196_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d196");
  return (unsigned)sh4_interp(0x8c10d196, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d196\n.set FUN_8c10d196, FUN_8c10d196_def\n");
}
//@unit 8c10d1bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d1bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d1bc");
  return (unsigned)sh4_interp(0x8c10d1bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d1bc\n.set FUN_8c10d1bc, FUN_8c10d1bc_def\n");
}
//@unit 8c10d29c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d29c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d29c");
  return (unsigned)sh4_interp(0x8c10d29c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d29c\n.set FUN_8c10d29c, FUN_8c10d29c_def\n");
}
//@unit 8c10d2f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d2f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d2f0");
  return (unsigned)sh4_interp(0x8c10d2f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d2f0\n.set FUN_8c10d2f0, FUN_8c10d2f0_def\n");
}
//@unit 8c10d366
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d366_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d366");
  return (unsigned)sh4_interp(0x8c10d366, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d366\n.set FUN_8c10d366, FUN_8c10d366_def\n");
}
//@unit 8c10d3ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d3ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d3ec");
  return (unsigned)sh4_interp(0x8c10d3ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d3ec\n.set FUN_8c10d3ec, FUN_8c10d3ec_def\n");
}
//@unit 8c10d458
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d458_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d458");
  return (unsigned)sh4_interp(0x8c10d458, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d458\n.set FUN_8c10d458, FUN_8c10d458_def\n");
}
//@unit 8c10d7f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10d7f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10d7f4");
  return (unsigned)sh4_interp(0x8c10d7f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10d7f4\n.set FUN_8c10d7f4, FUN_8c10d7f4_def\n");
}
//@unit 8c10da96
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10da96_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10da96");
  return (unsigned)sh4_interp(0x8c10da96, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10da96\n.set FUN_8c10da96, FUN_8c10da96_def\n");
}
//@unit 8c10ddaa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ddaa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ddaa");
  return (unsigned)sh4_interp(0x8c10ddaa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ddaa\n.set FUN_8c10ddaa, FUN_8c10ddaa_def\n");
}
//@unit 8c10ddb6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ddb6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ddb6");
  return (unsigned)sh4_interp(0x8c10ddb6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ddb6\n.set FUN_8c10ddb6, FUN_8c10ddb6_def\n");
}
//@unit 8c10df48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10df48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10df48");
  return (unsigned)sh4_interp(0x8c10df48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10df48\n.set FUN_8c10df48, FUN_8c10df48_def\n");
}
//@unit 8c10e6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10e6c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10e6c0");
  return (unsigned)sh4_interp(0x8c10e6c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10e6c0\n.set FUN_8c10e6c0, FUN_8c10e6c0_def\n");
}
//@unit 8c10e6d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10e6d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10e6d0");
  return (unsigned)sh4_interp(0x8c10e6d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10e6d0\n.set FUN_8c10e6d0, FUN_8c10e6d0_def\n");
}
//@unit 8c10e7de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10e7de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10e7de");
  return (unsigned)sh4_interp(0x8c10e7de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10e7de\n.set FUN_8c10e7de, FUN_8c10e7de_def\n");
}
//@unit 8c10e818
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10e818_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10e818");
  return (unsigned)sh4_interp(0x8c10e818, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10e818\n.set FUN_8c10e818, FUN_8c10e818_def\n");
}
//@unit 8c10ea24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ea24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ea24");
  return (unsigned)sh4_interp(0x8c10ea24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ea24\n.set FUN_8c10ea24, FUN_8c10ea24_def\n");
}
//@unit 8c10ea62
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ea62_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ea62");
  return (unsigned)sh4_interp(0x8c10ea62, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ea62\n.set FUN_8c10ea62, FUN_8c10ea62_def\n");
}
//@unit 8c10ec78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ec78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ec78");
  return (unsigned)sh4_interp(0x8c10ec78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ec78\n.set FUN_8c10ec78, FUN_8c10ec78_def\n");
}
//@unit 8c10ecd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10ecd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10ecd8");
  return (unsigned)sh4_interp(0x8c10ecd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10ecd8\n.set FUN_8c10ecd8, FUN_8c10ecd8_def\n");
}
//@unit 8c10f108
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f108_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f108");
  return (unsigned)sh4_interp(0x8c10f108, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f108\n.set FUN_8c10f108, FUN_8c10f108_def\n");
}
//@unit 8c10f110
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f110_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f110");
  return (unsigned)sh4_interp(0x8c10f110, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f110\n.set FUN_8c10f110, FUN_8c10f110_def\n");
}
//@unit 8c10f168
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f168_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f168");
  return (unsigned)sh4_interp(0x8c10f168, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f168\n.set FUN_8c10f168, FUN_8c10f168_def\n");
}
//@unit 8c10f22a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f22a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f22a");
  return (unsigned)sh4_interp(0x8c10f22a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f22a\n.set FUN_8c10f22a, FUN_8c10f22a_def\n");
}
//@unit 8c10f39a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f39a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f39a");
  return (unsigned)sh4_interp(0x8c10f39a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f39a\n.set FUN_8c10f39a, FUN_8c10f39a_def\n");
}
//@unit 8c10f41e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f41e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f41e");
  return (unsigned)sh4_interp(0x8c10f41e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f41e\n.set FUN_8c10f41e, FUN_8c10f41e_def\n");
}
//@unit 8c10f632
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f632_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f632");
  return (unsigned)sh4_interp(0x8c10f632, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f632\n.set FUN_8c10f632, FUN_8c10f632_def\n");
}
//@unit 8c10f69c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f69c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f69c");
  return (unsigned)sh4_interp(0x8c10f69c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f69c\n.set FUN_8c10f69c, FUN_8c10f69c_def\n");
}
//@unit 8c10f6f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f6f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f6f0");
  return (unsigned)sh4_interp(0x8c10f6f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f6f0\n.set FUN_8c10f6f0, FUN_8c10f6f0_def\n");
}
//@unit 8c10f736
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f736_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f736");
  return (unsigned)sh4_interp(0x8c10f736, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f736\n.set FUN_8c10f736, FUN_8c10f736_def\n");
}
//@unit 8c10f742
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f742_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f742");
  return (unsigned)sh4_interp(0x8c10f742, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f742\n.set FUN_8c10f742, FUN_8c10f742_def\n");
}
//@unit 8c10f850
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f850_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f850");
  return (unsigned)sh4_interp(0x8c10f850, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f850\n.set FUN_8c10f850, FUN_8c10f850_def\n");
}
//@unit 8c10f8e6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f8e6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f8e6");
  return (unsigned)sh4_interp(0x8c10f8e6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f8e6\n.set FUN_8c10f8e6, FUN_8c10f8e6_def\n");
}
//@unit 8c10fa6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fa6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fa6c");
  return (unsigned)sh4_interp(0x8c10fa6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fa6c\n.set FUN_8c10fa6c, FUN_8c10fa6c_def\n");
}
//@unit 8c10fab2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fab2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fab2");
  return (unsigned)sh4_interp(0x8c10fab2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fab2\n.set FUN_8c10fab2, FUN_8c10fab2_def\n");
}
//@unit 8c10fabc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fabc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fabc");
  return (unsigned)sh4_interp(0x8c10fabc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fabc\n.set FUN_8c10fabc, FUN_8c10fabc_def\n");
}
//@unit 8c10fc96
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fc96_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fc96");
  return (unsigned)sh4_interp(0x8c10fc96, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fc96\n.set FUN_8c10fc96, FUN_8c10fc96_def\n");
}
//@unit 8c10fd82
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fd82_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fd82");
  return (unsigned)sh4_interp(0x8c10fd82, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fd82\n.set FUN_8c10fd82, FUN_8c10fd82_def\n");
}
//@unit 8c10fe04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fe04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fe04");
  return (unsigned)sh4_interp(0x8c10fe04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fe04\n.set FUN_8c10fe04, FUN_8c10fe04_def\n");
}
//@unit 8c10fe0a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fe0a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fe0a");
  return (unsigned)sh4_interp(0x8c10fe0a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fe0a\n.set FUN_8c10fe0a, FUN_8c10fe0a_def\n");
}
//@unit 8c10fece
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10fece_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10fece");
  return (unsigned)sh4_interp(0x8c10fece, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10fece\n.set FUN_8c10fece, FUN_8c10fece_def\n");
}
