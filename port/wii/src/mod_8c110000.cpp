//@unit 8c110060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110060");
  return (unsigned)sh4_interp(0x8c110060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110060\n.set FUN_8c110060, FUN_8c110060_def\n");
}
//@unit 8c110158
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c110158");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11005c))); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c10fec4))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c10f8e6)); unsigned long t3_ = (unsigned long)(
                     (int)0x94); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,4,1); });
  return uVar1;
}

__asm__(".globl FUN_8c110158\n.set FUN_8c110158, FUN_8c110158_def\n");

}
//@unit 8c11033c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11033c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11033c");
  return (unsigned)sh4_interp(0x8c11033c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11033c\n.set FUN_8c11033c, FUN_8c11033c_def\n");
}
//@unit 8c11034c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11034c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11034c");
  return (unsigned)sh4_interp(0x8c11034c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11034c\n.set FUN_8c11034c, FUN_8c11034c_def\n");
}
//@unit 8c1103ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1103ea_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1103ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11033c(ar4,*(le<undefined4>* )(unsigned)((int)0x88 + *ar4),ar6,ar7));
  return *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0xb8) * 4 + iVar1);
}

__asm__(".globl FUN_8c1103ea\n.set FUN_8c1103ea, FUN_8c1103ea_def\n");

}
//@unit 8c110414
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c110414_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c110414");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11033c(ar4,*(le<undefined4>* )(unsigned)(0x88 + iVar3),ar6,ar7));
  uVar2 = (iVar1 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0xb8 + iVar3) * 4 + iVar1) * 2) - iVar3;
  return iVar3 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
}

__asm__(".globl FUN_8c110414\n.set FUN_8c110414, FUN_8c110414_def\n");

}
//@unit 8c110460
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110460_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110460");
  return (unsigned)sh4_interp(0x8c110460, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110460\n.set FUN_8c110460, FUN_8c110460_def\n");
}
//@unit 8c1104b2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1104b2_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1104b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar5[1] * 2 + 8 + (*(le<int>* )(unsigned)((int)0xc8 + *ar4) + 1) * 2 + (*ar5 + 1) * 2;
}

__asm__(".globl FUN_8c1104b2\n.set FUN_8c1104b2, FUN_8c1104b2_def\n");

}
//@unit 8c1104d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1104d2_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1104d2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = ar5[3];
  if (*(le<short>* )(unsigned)((int)0xd0 + *ar4) == 0) {
    uVar1 = ar5[5];
  }
  else {
    uVar1 = ar5[5] + 1U >> 1;
  }
  uVar1 = *ar5 * ar5[1] * 4 + ar5[1] * ar5[2] * 4 + *ar5 * iVar2 * 4 + iVar2 * 4 + iVar2 * uVar1 +
          0x18;
  if (*(le<short>* )(unsigned)((int)0xd2 + *ar4) != 0) {
    uVar1 = uVar1 + ((uVar1 * 2 ^ uVar1) & 3) + ar5[3] * ar5[3] * 4;
  }
  return uVar1;
}

__asm__(".globl FUN_8c1104d2\n.set FUN_8c1104d2, FUN_8c1104d2_def\n");

}
//@unit 8c11066a
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11066a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove((&(*(undefined1 *)(unsigned)0x8c127b20)),(int)0xd4,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c11066a\n.set FUN_8c11066a, FUN_8c11066a_def\n");

}
//@unit 8c110680
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110680_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110680");
  return (unsigned)sh4_interp(0x8c110680, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110680\n.set FUN_8c110680, FUN_8c110680_def\n");
}
//@unit 8c1107b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1107b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1107b0");
  return (unsigned)sh4_interp(0x8c1107b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1107b0\n.set FUN_8c1107b0, FUN_8c1107b0_def\n");
}
//@unit 8c110818
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110818_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110818");
  return (unsigned)sh4_interp(0x8c110818, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110818\n.set FUN_8c110818, FUN_8c110818_def\n");
}
//@unit 8c1108b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1108b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c110680)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110810))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c1107b0)); unsigned long t3_ = (unsigned long)(0x4c); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl FUN_8c1108b0\n.set FUN_8c1108b0, FUN_8c1108b0_def\n");

}
//@unit 8c110908
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110908_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110908");
  return (unsigned)sh4_interp(0x8c110908, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110908\n.set FUN_8c110908, FUN_8c110908_def\n");
}
//@unit 8c1109d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1109d2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1109d2");
  return (unsigned)sh4_interp(0x8c1109d2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1109d2\n.set FUN_8c1109d2, FUN_8c1109d2_def\n");
}
//@unit 8c110a30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c110a30_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c110a30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)(uint)ar4[4] + 0xc) = 4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x10))))(*ar4,(uint)*(byte *)(unsigned)(ar4 + 2) << 2,ar6,ar7));
  ar4[10] = iVar1;
  return 0;
}

__asm__(".globl FUN_8c110a30\n.set FUN_8c110a30, FUN_8c110a30_def\n");

}
//@unit 8c110a5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c110a5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110900))); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c110a30)); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c1109d2)); unsigned long t3_ = (unsigned long)(0x2c); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,3,1); });
  return uVar1;
}

__asm__(".globl FUN_8c110a5c\n.set FUN_8c110a5c, FUN_8c110a5c_def\n");

}
//@unit 8c110a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110a90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110a90");
  return (unsigned)sh4_interp(0x8c110a90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110a90\n.set FUN_8c110a90, FUN_8c110a90_def\n");
}
//@unit 8c110aea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110aea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110aea");
  return (unsigned)sh4_interp(0x8c110aea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110aea\n.set FUN_8c110aea, FUN_8c110aea_def\n");
}
//@unit 8c110b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110b58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110b58");
  return (unsigned)sh4_interp(0x8c110b58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110b58\n.set FUN_8c110b58, FUN_8c110b58_def\n");
}
//@unit 8c110b5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110b5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110b5c");
  return (unsigned)sh4_interp(0x8c110b5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110b5c\n.set FUN_8c110b5c, FUN_8c110b5c_def\n");
}
//@unit 8c110bec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110bec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110bec");
  return (unsigned)sh4_interp(0x8c110bec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110bec\n.set FUN_8c110bec, FUN_8c110bec_def\n");
}
//@unit 8c110c80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c110c80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c110c80");
  return (unsigned)sh4_interp(0x8c110c80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c110c80\n.set FUN_8c110c80, FUN_8c110c80_def\n");
}
//@unit 8c11116e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11116e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11116e");
  return (unsigned)sh4_interp(0x8c11116e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11116e\n.set FUN_8c11116e, FUN_8c11116e_def\n");
}
//@unit 8c1111a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1111a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c110aea)); unsigned long t1_ = (unsigned long)(((void *)(unsigned)0x8c11116e)); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c110be0))); unsigned long t3_ = (unsigned long)(0x3c); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl FUN_8c1111a0\n.set FUN_8c1111a0, FUN_8c1111a0_def\n");

}
//@unit 8c111208
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111208_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111208");
  return (unsigned)sh4_interp(0x8c111208, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111208\n.set FUN_8c111208, FUN_8c111208_def\n");
}
//@unit 8c1112e2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1112e2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1112e2");
  return (unsigned)sh4_interp(0x8c1112e2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1112e2\n.set FUN_8c1112e2, FUN_8c1112e2_def\n");
}
//@unit 8c1112ee
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1112ee_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1112ee");
  return (unsigned)sh4_interp(0x8c1112ee, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1112ee\n.set FUN_8c1112ee, FUN_8c1112ee_def\n");
}
//@unit 8c111342
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c111342");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(le<int>* )(unsigned)(in_r0 + *(le<int>* )(unsigned)(ar4 + 0x40)) != *(le<int>* )(unsigned)(ar4 + 0x3c)) {
        in_r0 = *(le<int>* )(unsigned)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(le<int>* )(unsigned)(ar4 + 0x24) == *(le<int>* )(unsigned)(in_r0 + iVar1)) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
          break;
        }
        if (*(le<uint>* )(unsigned)(ar4 + 0x24) < *(le<uint>* )(unsigned)(ar4 + 0x28)) {
          in_r0 = *(le<int>* )(unsigned)(ar4 + 0x2c);
          if ((*(le<uint>* )(unsigned)(in_r0 + iVar1) < *(le<uint>* )(unsigned)(ar4 + 0x28)) &&
             (*(le<uint>* )(unsigned)(ar4 + 0x24) < *(le<uint>* )(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(le<int>* )(unsigned)(ar4 + 0x2c);
            *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(le<int>* )(unsigned)(ar4 + 0x2c);
          if ((*(le<uint>* )(unsigned)(in_r0 + iVar1) < *(le<uint>* )(unsigned)(ar4 + 0x28)) ||
             (*(le<uint>* )(unsigned)(ar4 + 0x24) < *(le<uint>* )(unsigned)(in_r0 + iVar1))) {
            in_r0 = *(le<int>* )(unsigned)(ar4 + 0x2c);
            *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(le<uint>* )(unsigned)(ar4 + 0x14));
  }
  if (uVar2 == *(le<uint>* )(unsigned)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c111342\n.set FUN_8c111342, FUN_8c111342_def\n");

}
//@unit 8c1113d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1113d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1113d0");
  return (unsigned)sh4_interp(0x8c1113d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1113d0\n.set FUN_8c1113d0, FUN_8c1113d0_def\n");
}
//@unit 8c1117e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1117e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(le<uint>* )(unsigned)(ar4 + 0x24) < *(le<uint>* )(unsigned)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(le<int>* )(unsigned)(ar4 + 0x28) - *(le<uint>* )(unsigned)(ar4 + 0x24),(uint)*(le<ushort>* )(unsigned)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(le<int>* )(unsigned)(ar4 + 0x24) - *(le<int>* )(unsigned)(ar4 + 0x28),(uint)*(le<ushort>* )(unsigned)(ar4 + 0xc));
    uVar3 = *(le<int>* )(unsigned)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(le<ushort>* )(unsigned)(ar4 + 0xc);
  uVar3 = *(le<int>* )(unsigned)(ar4 + 0x28) - iVar1;
  *(le<uint>* )(unsigned)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x1c)) {
    *(le<int>* )(unsigned)(ar4 + 0x28) = *(le<int>* )(unsigned)(ar4 + 0x28) + *(le<int>* )(unsigned)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x28) == *(le<int>* )(unsigned)(ar4 + 0x24)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(le<int>* )(unsigned)(uVar3 * 4 + *(le<int>* )(unsigned)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) - iVar1;
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + iVar2) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) < *(le<uint>* )(unsigned)(ar4 + 0x1c)) {
          *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) =
               *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) + *(le<int>* )(unsigned)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x14));
  }
  return 1;
}

__asm__(".globl FUN_8c1117e4\n.set FUN_8c1117e4, FUN_8c1117e4_def\n");

}
//@unit 8c11189a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11189a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11189a");
  return (unsigned)sh4_interp(0x8c11189a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11189a\n.set FUN_8c11189a, FUN_8c11189a_def\n");
}
//@unit 8c11194c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11194c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11194c");
  return (unsigned)sh4_interp(0x8c11194c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11194c\n.set FUN_8c11194c, FUN_8c11194c_def\n");
}
//@unit 8c111adc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111adc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111adc");
  return (unsigned)sh4_interp(0x8c111adc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111adc\n.set FUN_8c111adc, FUN_8c111adc_def\n");
}
//@unit 8c111cdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111cdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111cdc");
  return (unsigned)sh4_interp(0x8c111cdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111cdc\n.set FUN_8c111cdc, FUN_8c111cdc_def\n");
}
//@unit 8c111cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111cec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111cec");
  return (unsigned)sh4_interp(0x8c111cec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111cec\n.set FUN_8c111cec, FUN_8c111cec_def\n");
}
//@unit 8c111dfe
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c111dfe");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(unsigned)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(le<ushort>* )(unsigned)(ar4 + 0xc);
  *(le<int>* )(unsigned)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(le<int>* )(unsigned)(ar4 + 0x20)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x24) = *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
  }
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    do {
      if (*(le<int>* )(unsigned)(uVar2 * 4 + *(le<int>* )(unsigned)(ar4 + 0x2c)) == 0) {
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + uVar2 * 4) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(le<uint>* )(unsigned)(ar4 + 0x14));
  }
  if ((*(le<int>* )(unsigned)(ar4 + 0x24) == *(le<int>* )(unsigned)(ar4 + 0x28)) && (*(le<int>* )(unsigned)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
  }
  *(le<int>* )(unsigned)(ar4 + 0x3c) = *(le<int>* )(unsigned)(ar4 + 0x3c) + 1;
  return iVar3;
}

__asm__(".globl FUN_8c111dfe\n.set FUN_8c111dfe, FUN_8c111dfe_def\n");

}
//@unit 8c111e72
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111e72_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111e72");
  return (unsigned)sh4_interp(0x8c111e72, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111e72\n.set FUN_8c111e72, FUN_8c111e72_def\n");
}
//@unit 8c111fbe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111fbe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111fbe");
  return (unsigned)sh4_interp(0x8c111fbe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111fbe\n.set FUN_8c111fbe, FUN_8c111fbe_def\n");
}
//@unit 8c111fc6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c111fc6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c111fc6");
  return (unsigned)sh4_interp(0x8c111fc6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c111fc6\n.set FUN_8c111fc6, FUN_8c111fc6_def\n");
}
//@unit 8c112074
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112074_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112074");
  return (unsigned)sh4_interp(0x8c112074, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112074\n.set FUN_8c112074, FUN_8c112074_def\n");
}
//@unit 8c112170
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112170_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112170");
  return (unsigned)sh4_interp(0x8c112170, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112170\n.set FUN_8c112170, FUN_8c112170_def\n");
}
//@unit 8c11217e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11217e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11217e");
  return (unsigned)sh4_interp(0x8c11217e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11217e\n.set FUN_8c11217e, FUN_8c11217e_def\n");
}
//@unit 8c112234
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112234");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x2c) + iVar2) = *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x40) + iVar2) = 0;
    } while (uVar1 < *(le<uint>* )(unsigned)(ar4 + 0x14));
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x28) = *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
  *(undefined1 *)(unsigned)(ar4 + 0x30) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0;
  return 0x30;
}

__asm__(".globl FUN_8c112234\n.set FUN_8c112234, FUN_8c112234_def\n");

}
//@unit 8c1122ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1122ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1122ac");
  return (unsigned)sh4_interp(0x8c1122ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1122ac\n.set FUN_8c1122ac, FUN_8c1122ac_def\n");
}
//@unit 8c112350
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112350");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((ar4 + 0x14))))(ar4,1,0x18,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c112350\n.set FUN_8c112350, FUN_8c112350_def\n");

}
//@unit 8c11237a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11237a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11237a");
  return (unsigned)sh4_interp(0x8c11237a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11237a\n.set FUN_8c11237a, FUN_8c11237a_def\n");
}
//@unit 8c112380
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112380_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112380");
  return (unsigned)sh4_interp(0x8c112380, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112380\n.set FUN_8c112380, FUN_8c112380_def\n");
}
//@unit 8c1123b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1123b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((ar4 + 0x14))))(ar4,1,0x18,ar7));
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c1123b0\n.set FUN_8c1123b0, FUN_8c1123b0_def\n");

}
//@unit 8c1123da
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1123da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1123da");
  return (unsigned)sh4_interp(0x8c1123da, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1123da\n.set FUN_8c1123da, FUN_8c1123da_def\n");
}
//@unit 8c1123e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1123e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1123e0");
  return (unsigned)sh4_interp(0x8c1123e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1123e0\n.set FUN_8c1123e0, FUN_8c1123e0_def\n");
}
//@unit 8c112410
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112410_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112410");
  return (unsigned)sh4_interp(0x8c112410, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112410\n.set FUN_8c112410, FUN_8c112410_def\n");
}
//@unit 8c11241e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11241e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11241e");
  return (unsigned)sh4_interp(0x8c11241e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11241e\n.set FUN_8c11241e, FUN_8c11241e_def\n");
}
//@unit 8c112482
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112482_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112482");
  return (unsigned)sh4_interp(0x8c112482, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112482\n.set FUN_8c112482, FUN_8c112482_def\n");
}
//@unit 8c1124de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1124de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1124de");
  return (unsigned)sh4_interp(0x8c1124de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1124de\n.set FUN_8c1124de, FUN_8c1124de_def\n");
}
//@unit 8c1124ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1124ea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1124ea");
  return (unsigned)sh4_interp(0x8c1124ea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1124ea\n.set FUN_8c1124ea, FUN_8c1124ea_def\n");
}
//@unit 8c1125e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1125e8_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1125e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  le<undefined4>* puVar3;
  int iVar4;
  le<undefined4>* puVar5;
  
  iVar4 = *ar4;
  iVar2 = ar4[1];
  iVar1 = ar4[3];
  puVar5 = (le<undefined4>* )(unsigned)(ar5 * iVar4 * 4 + iVar1);
  for (puVar3 = puVar5 + iVar4; puVar3 < (le<undefined4>* )(unsigned)(iVar4 * iVar2 * 4 + iVar1);
      puVar3 = puVar3 + 1) {
    *puVar5 = *puVar3;
    puVar5 = puVar5 + 1;
  }
  ar4[1] = ar4[1] + -1;
  ar4[2] = ar4[2] + -1;
  ar4[4] = ar4[4] + *ar4 * -4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1125e8\n.set FUN_8c1125e8, FUN_8c1125e8_def\n");

}
//@unit 8c112642
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c112642_def(le<int>* ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c112642");
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

__asm__(".globl FUN_8c112642\n.set FUN_8c112642, FUN_8c112642_def\n");

}
//@unit 8c112658
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112658_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112658");
  return (unsigned)sh4_interp(0x8c112658, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112658\n.set FUN_8c112658, FUN_8c112658_def\n");
}
//@unit 8c112680
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112680_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112680");
  return (unsigned)sh4_interp(0x8c112680, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112680\n.set FUN_8c112680, FUN_8c112680_def\n");
}
//@unit 8c112734
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112734_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112734");
  return (unsigned)sh4_interp(0x8c112734, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112734\n.set FUN_8c112734, FUN_8c112734_def\n");
}
//@unit 8c112958
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112958_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112958");
  return (unsigned)sh4_interp(0x8c112958, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112958\n.set FUN_8c112958, FUN_8c112958_def\n");
}
//@unit 8c1129e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1129e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1129e4");
  return (unsigned)sh4_interp(0x8c1129e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1129e4\n.set FUN_8c1129e4, FUN_8c1129e4_def\n");
}
//@unit 8c112a02
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112a02_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112a02");
  return (unsigned)sh4_interp(0x8c112a02, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112a02\n.set FUN_8c112a02, FUN_8c112a02_def\n");
}
//@unit 8c112a20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112a20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112a20");
  return (unsigned)sh4_interp(0x8c112a20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112a20\n.set FUN_8c112a20, FUN_8c112a20_def\n");
}
//@unit 8c112a28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112a28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112a28");
  return (unsigned)sh4_interp(0x8c112a28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112a28\n.set FUN_8c112a28, FUN_8c112a28_def\n");
}
//@unit 8c112b1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112b1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(le<undefined2>* )(unsigned)(0x1be + ar4) = (undefined2)ar5;
  uVar1 = 0x80;
  iVar2 = (int)0xc0;
  if (*(le<int>* )(unsigned)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
      do {
        if ((*(le<ushort>* )(unsigned)(uVar3 * 2 + *(le<int>* )(unsigned)(0xc0 + ar4)) & uVar1) == 0) {
          iVar2 = *(le<int>* )(unsigned)(0x1c0 + ar4);
          *(le<undefined2>* )(unsigned)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(le<int>* )(unsigned)(0x1c0 + ar4);
          *(le<undefined2>* )(unsigned)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(le<uint>* )(unsigned)(ar4 + 0x38));
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c112b1c\n.set FUN_8c112b1c, FUN_8c112b1c_def\n");

}
//@unit 8c112b6e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112b6e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112b6e");
  return (unsigned)sh4_interp(0x8c112b6e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112b6e\n.set FUN_8c112b6e, FUN_8c112b6e_def\n");
}
//@unit 8c112c90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112c90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112c90");
  return (unsigned)sh4_interp(0x8c112c90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112c90\n.set FUN_8c112c90, FUN_8c112c90_def\n");
}
//@unit 8c112c9e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112c9e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112c9e");
  return (unsigned)sh4_interp(0x8c112c9e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112c9e\n.set FUN_8c112c9e, FUN_8c112c9e_def\n");
}
//@unit 8c112d00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112d00");
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
  uVar5 = (uint)(*(le<ushort>* )(unsigned)(0x1e4 + ar4) >> 5);
  uVar6 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(le<int>* )(unsigned)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(le<uint>* )(unsigned)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(le<uint>* )(unsigned)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)(iVar1 + 0x18) = 0;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x54) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x58));
  return 0;
}

__asm__(".globl FUN_8c112d00\n.set FUN_8c112d00, FUN_8c112d00_def\n");

}
//@unit 8c112d82
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112d82_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112d82");
  return (unsigned)sh4_interp(0x8c112d82, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112d82\n.set FUN_8c112d82, FUN_8c112d82_def\n");
}
//@unit 8c112ec6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112ec6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112ec6");
  return (unsigned)sh4_interp(0x8c112ec6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112ec6\n.set FUN_8c112ec6, FUN_8c112ec6_def\n");
}
//@unit 8c112ed4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112ed4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112ed4");
  return (unsigned)sh4_interp(0x8c112ed4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112ed4\n.set FUN_8c112ed4, FUN_8c112ed4_def\n");
}
//@unit 8c112f40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112f40");
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
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar7 = uVar4;
  if (uVar4 < *(le<uint>* )(unsigned)(ar4 + 0x88)) {
    do {
      iVar5 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x84) + uVar7 * 4);
      if (uVar4 != 0) {
        *(le<int>* )(unsigned)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(le<uint>* )(unsigned)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(le<uint>* )(unsigned)(uVar4 + 0x10) = uVar6;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x84));
  *(le<uint>* )(unsigned)(ar4 + 0x80) = uVar6;
  return 0;
}

__asm__(".globl FUN_8c112f40\n.set FUN_8c112f40, FUN_8c112f40_def\n");

}
//@unit 8c112f48
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c112f48");
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
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(in_r0 + ar4),0x18,vr6,vr7));
  uVar6 = ar5;
  if (ar5 < *(le<uint>* )(unsigned)(ar4 + 0x88)) {
    do {
      iVar5 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x84) + uVar6 * 4);
      if (ar5 != 0) {
        *(le<int>* )(unsigned)(ar5 + 0x10) = iVar5;
      }
      uVar4 = ar7;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar6 = uVar6 + 1;
      ar5 = uVar4 * 0x18 + iVar5;
    } while (uVar6 < *(le<uint>* )(unsigned)(ar4 + 0x88));
  }
  if (ar5 != 0) {
    *(le<uint>* )(unsigned)(ar5 + 0x10) = ar7;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x84));
  *(le<uint>* )(unsigned)(ar4 + 0x80) = ar7;
  return 0;
}

__asm__(".globl FUN_8c112f48\n.set FUN_8c112f48, FUN_8c112f48_def\n");

}
//@unit 8c112fd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c112fd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c112fd8");
  return (unsigned)sh4_interp(0x8c112fd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c112fd8\n.set FUN_8c112fd8, FUN_8c112fd8_def\n");
}
//@unit 8c113124
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c113124_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c113124");
  return (unsigned)sh4_interp(0x8c113124, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c113124\n.set FUN_8c113124, FUN_8c113124_def\n");
}
//@unit 8c113132
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c113132_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c113132");
  return (unsigned)sh4_interp(0x8c113132, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c113132\n.set FUN_8c113132, FUN_8c113132_def\n");
}
//@unit 8c11318e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11318e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11318e");
  return (unsigned)sh4_interp(0x8c11318e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11318e\n.set FUN_8c11318e, FUN_8c11318e_def\n");
}
//@unit 8c11319e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11319e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11319e");
  return (unsigned)sh4_interp(0x8c11319e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11319e\n.set FUN_8c11319e, FUN_8c11319e_def\n");
}
//@unit 8c1132cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1132cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1132cc");
  return (unsigned)sh4_interp(0x8c1132cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1132cc\n.set FUN_8c1132cc, FUN_8c1132cc_def\n");
}
//@unit 8c1132da
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1132da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1132da");
  return (unsigned)sh4_interp(0x8c1132da, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1132da\n.set FUN_8c1132da, FUN_8c1132da_def\n");
}
//@unit 8c113354
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<uint>*  FUN_8c113354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113354");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  le<uint>* puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(ar4 + 0x1e4),0x18,vr6,vr7));
  uVar8 = uVar4;
  if (uVar4 < *(le<uint>* )(unsigned)(ar4 + 0x110)) {
    do {
      iVar7 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10c) + uVar8 * 4);
      if (uVar4 != 0) {
        *(le<int>* )(unsigned)(uVar4 + 4) = iVar7;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar7 + 4) = iVar3 * 0x18 + iVar7;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar8 = uVar8 + 1;
      uVar4 = uVar4 * 0x18 + iVar7;
    } while (uVar8 < *(le<uint>* )(unsigned)(ar4 + 0x110));
  }
  if (uVar4 != 0) {
    *(le<uint>* )(unsigned)(uVar4 + 4) = uVar6;
  }
  puVar5 = (le<uint>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10c));
  puVar5[3] = uVar6;
  puVar5[5] = uVar6;
  *puVar5 = uVar6;
  puVar5[2] = uVar6;
  puVar5[4] = uVar6;
  *(le<uint>* )(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl FUN_8c113354\n.set FUN_8c113354, FUN_8c113354_def\n");

}
//@unit 8c11335c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<uint>*  FUN_8c11335c_def(int ar4,uint ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11335c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  le<uint>* puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(le<ushort>* )(unsigned)(in_r0 + ar4),0x18,vr6,vr7));
  uVar7 = ar5;
  if (ar5 < *(le<uint>* )(unsigned)(ar4 + 0x110)) {
    do {
      iVar6 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10c) + uVar7 * 4);
      if (ar5 != 0) {
        *(le<int>* )(unsigned)(ar5 + 4) = iVar6;
      }
      uVar4 = ar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(le<int>* )(unsigned)(iVar2 + iVar6 + 4) = iVar3 * 0x18 + iVar6;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      ar5 = uVar4 * 0x18 + iVar6;
    } while (uVar7 < *(le<uint>* )(unsigned)(ar4 + 0x110));
  }
  if (ar5 != 0) {
    *(le<uint>* )(unsigned)(ar5 + 4) = ar6;
  }
  puVar5 = (le<uint>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10c));
  puVar5[3] = ar6;
  puVar5[5] = ar6;
  *puVar5 = ar6;
  puVar5[2] = ar6;
  puVar5[4] = ar6;
  *(le<uint>* )(unsigned)(ar4 + 0x114) = puVar5[1];
  return puVar5;
}

__asm__(".globl FUN_8c11335c\n.set FUN_8c11335c, FUN_8c11335c_def\n");

}
//@unit 8c1133f6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1133f6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1133f6");
  return (unsigned)sh4_interp(0x8c1133f6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1133f6\n.set FUN_8c1133f6, FUN_8c1133f6_def\n");
}
//@unit 8c11346c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11346c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11346c");
  return (unsigned)sh4_interp(0x8c11346c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11346c\n.set FUN_8c11346c, FUN_8c11346c_def\n");
}
//@unit 8c11372e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11372e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11372e");
  return (unsigned)sh4_interp(0x8c11372e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11372e\n.set FUN_8c11372e, FUN_8c11372e_def\n");
}
//@unit 8c113ac8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c113ac8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  le<int>* piVar6;
  le<uint>* puVar7;
  uint uVar8;
  le<uint>* puVar9;
  le<uint>* puVar10;
  le<uint>* puVar11;
  uint uVar12;
  
  iVar1 = (int)0x9c;
  uVar8 = 0;
  uVar5 = (uint)0x80;
  puVar11 = ((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  piVar6 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + -4 + ar4));
  iVar1 = iVar1 + -0xc;
  puVar9 = ((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  puVar10 = puVar9;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
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
        iVar1 = *(le<int>* )(unsigned)(0xc0 + ar4);
        uVar4 = uVar4 + 1;
        if ((*(le<ushort>* )(unsigned)(iVar1 + uVar3 * 2) & uVar5) != 0) goto code_r0x8c113b16;
        goto LAB_8c113b32;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(le<uint>* )(unsigned)(ar4 + 0x38));
  }
  *piVar6 = (int)puVar11;
  return iVar1;
code_r0x8c113b16:
  iVar1 = *(le<int>* )(unsigned)(0x94 + ar4);
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

__asm__(".globl FUN_8c113ac8\n.set FUN_8c113ac8, FUN_8c113ac8_def\n");

}
//@unit 8c113b54
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c113b54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<undefined4>* puVar3;
  
  iVar1 = (int)0xfc;
  puVar3 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  *puVar3 = *(le<undefined4>* )(unsigned)(ar4 + 0x38);
  puVar3[1] = *(le<undefined4>* )(unsigned)(iVar1 + 0x48 + ar4);
  puVar3[2] = *(le<undefined4>* )(unsigned)(ar4 + 0x44);
  puVar3[3] = *(le<undefined4>* )(unsigned)(ar4 + 0x48);
  iVar1 = (int)0x1c0;
  puVar3[4] = *(le<undefined4>* )(unsigned)(ar4 + 0xc0);
  iVar2 = (int)0x98;
  puVar3[5] = *(le<undefined4>* )(unsigned)(iVar1 + ar4);
  puVar3[6] = *(le<undefined4>* )(unsigned)(iVar2 + ar4);
  iVar1 = (int)0x148;
  puVar3[7] = *(le<undefined4>* )(unsigned)(iVar2 + 4 + ar4);
  puVar3[8] = *(le<undefined4>* )(unsigned)(iVar1 + ar4);
  iVar2 = (int)0xa8;
  puVar3[9] = *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4);
  puVar3[10] = *(le<undefined4>* )(unsigned)(iVar2 + ar4);
  puVar3[0xb] = *(le<undefined4>* )(unsigned)(iVar2 + 4 + ar4);
  puVar3[0xc] = *(le<undefined4>* )(unsigned)(iVar2 + -8 + ar4);
  puVar3[0xd] = *(le<undefined4>* )(unsigned)(iVar2 + 0x10 + ar4);
  puVar3[0xe] = *(le<undefined4>* )(unsigned)(iVar2 + 0xc + ar4);
  return iVar2 + 0xc;
}

__asm__(".globl FUN_8c113b54\n.set FUN_8c113b54, FUN_8c113b54_def\n");

}
//@unit 8c113bcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c113bcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  
  iVar1 = (int)0xfc;
  puVar2 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + ar4));
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = *puVar2;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x48 + ar4) = puVar2[1];
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = puVar2[2];
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = puVar2[3];
  *(le<undefined4>* )(unsigned)(ar4 + 0xc0) = puVar2[4];
  *(le<undefined4>* )(unsigned)(0x1c0 + ar4) = puVar2[5];
  iVar1 = (int)0x98;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[6];
  *(le<undefined4>* )(unsigned)(iVar1 + 4 + ar4) = puVar2[7];
  iVar1 = (int)0x148;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[8];
  *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4) = puVar2[9];
  iVar1 = (int)0xa8;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = puVar2[10];
  *(le<undefined4>* )(unsigned)(iVar1 + 4 + ar4) = puVar2[0xb];
  *(le<undefined4>* )(unsigned)(iVar1 + -8 + ar4) = puVar2[0xc];
  *(le<undefined4>* )(unsigned)(iVar1 + 0x10 + ar4) = puVar2[0xd];
  *(le<undefined4>* )(unsigned)(iVar1 + 0xc + ar4) = puVar2[0xe];
  *(le<int>* )(unsigned)(iVar1 + -4 + ar4) =
       (*(le<int>* )(unsigned)(ar4 + 0x38) + *(le<int>* )(unsigned)(iVar1 + 0x10 + ar4) + 1) * 4 + *(le<int>* )(unsigned)(iVar1 + -8 + ar4);
  *(le<undefined4>* )(unsigned)(iVar1 + 0x60 + ar4) = *(le<undefined4>* )(unsigned)(ar4 + 0x38);
  return iVar1 + 0x60;
}

__asm__(".globl FUN_8c113bcc\n.set FUN_8c113bcc, FUN_8c113bcc_def\n");

}
//@unit 8c113c46
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c113c46_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c113c46");
  return (unsigned)sh4_interp(0x8c113c46, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c113c46\n.set FUN_8c113c46, FUN_8c113c46_def\n");
}
//@unit 8c113c4e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c113c4e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c113c4e");
  return (unsigned)sh4_interp(0x8c113c4e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c113c4e\n.set FUN_8c113c4e, FUN_8c113c4e_def\n");
}
//@unit 8c113d68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113d68_def(le<int>* ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c113d68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<ushort>*  s0 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  le<ushort>*  s4 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 4);
  int s8 = *(le<int>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  short sVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  le<ushort>* puVar3;
  le<int>* piVar4;
  int iVar5;
  le<short>* psVar6;
  
  puVar3 = (le<ushort>* )(unsigned)*ar6;
  piVar4 = (le<int>* )(unsigned)*ar4;
  psVar6 = (le<short>* )(unsigned)((uint)*s0 * 2 + s8);
  while (s0 < s4) {
    s0 = s0 + 1;
    *piVar4 = *ar5;
    piVar4 = piVar4 + 1;
    iVar5 = (uint)*s0 * 2 + s8;
    iVar2 = iVar5 - (int)psVar6;
    *ar5 = *ar5 + ((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) + 2;
    for (; psVar6 < (le<short>* )(unsigned)(iVar5 + -2); psVar6 = psVar6 + 1) {
      *puVar3 = *psVar6 << 2 | 2;
      puVar3 = puVar3 + 1;
    }
    sVar1 = *psVar6;
    psVar6 = psVar6 + 1;
    *puVar3 = sVar1 << 2 | 1;
    (*(le<short>* )(fr0_ - 0x1a)) = (short)((uint)ar7 >> 0x10);
    in_r0 = (int)(*(le<short>* )(fr0_ - 0x1a));
    *(le<undefined4>* )(unsigned)(puVar3 + 1) = ar7;
    puVar3 = puVar3 + 3;
  }
  *ar6 = (int)puVar3;
  *ar4 = (int)piVar4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c113d68\n.set FUN_8c113d68, FUN_8c113d68_def\n");

}
//@unit 8c113dfa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c113dfa_def(le<int>* ar4,le<int>* ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c113dfa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int a6;
  int a4;
  le<undefined4>* puVar2;
  
  uVar1 = *(le<ushort>* )(unsigned)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(a4,*ar4 * 2 + ar7,a6,ar7));
  puVar2 = (le<undefined4>* )(unsigned)(a4 + a6);
  *(le<ushort>* )(unsigned)((int)puVar2 + -2) = *(le<ushort>* )(unsigned)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)(*(le<uint>* )((uchar*)&s0+2));
}

__asm__(".globl FUN_8c113dfa\n.set FUN_8c113dfa, FUN_8c113dfa_def\n");

}
//@unit 8c113e64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c113e64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<uint>* puVar3;
  int iVar4;
  
  iVar2 = 0;
  puVar3 = (le<uint>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x44) + ar5 * 4) + 4);
  iVar4 = ar6 - *(le<int>* )(unsigned)(ar4 + 0x48);
  uVar1 = *puVar3;
  while (uVar1 < (uint)((int)(iVar4 + (uint)(iVar4 < 0)) >> 1)) {
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 1;
    uVar1 = *puVar3;
  }
  return iVar2;
}

__asm__(".globl FUN_8c113e64\n.set FUN_8c113e64, FUN_8c113e64_def\n");

}
//@unit 8c113e98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c113e98_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c113e98");
  return (unsigned)sh4_interp(0x8c113e98, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c113e98\n.set FUN_8c113e98, FUN_8c113e98_def\n");
}
//@unit 8c114774
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c114774_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c114774");
  return (unsigned)sh4_interp(0x8c114774, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c114774\n.set FUN_8c114774, FUN_8c114774_def\n");
}
//@unit 8c1148c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1148c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1148c4");
  return (unsigned)sh4_interp(0x8c1148c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1148c4\n.set FUN_8c1148c4, FUN_8c1148c4_def\n");
}
//@unit 8c11495c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11495c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11495c");
  return (unsigned)sh4_interp(0x8c11495c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11495c\n.set FUN_8c11495c, FUN_8c11495c_def\n");
}
//@unit 8c114bd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c114bd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c114bd8");
  return (unsigned)sh4_interp(0x8c114bd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c114bd8\n.set FUN_8c114bd8, FUN_8c114bd8_def\n");
}
//@unit 8c114be0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c114be0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c114be0");
  return (unsigned)sh4_interp(0x8c114be0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c114be0\n.set FUN_8c114be0, FUN_8c114be0_def\n");
}
//@unit 8c114d30
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c114d30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  le<int>* piVar4;
  le<int>* piVar5;
  int iVar6;
  le<int>* piVar7;
  le<int>* piVar8;
  int iVar9;
  le<ushort>* puVar10;
  uint uVar11;
  le<int>* piVar12;
  le<ushort>* puVar13;
  
  piVar7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x104 + ar4));
  iVar2 = (int)0xc8;
  (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x38) * 4 + *(le<int>* )(unsigned)(ar4 + 0x44) + 4)));
  iVar3 = iVar2 + 0x20;
  iVar9 = *(le<int>* )(unsigned)(iVar3 + ar4);
  piVar12 = (le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + ar4) * 4 + *(le<int>* )(unsigned)(iVar2 + 8 + ar4));
  (*(le<uint>* )(fr0_ - 0x20)) = 0;
  piVar8 = piVar12 + 2;
  if (ar5 != 0) {
    do {
      piVar12 = piVar12 + 1;
      (*(le<int>* )(fr0_ - 0x28)) = 0;
      puVar13 = (le<ushort>* )(unsigned)(*piVar12 * 2 + *(le<int>* )(unsigned)(0xcc + ar4));
      iVar2 = *(le<int>* )(unsigned)(0xcc + ar4) + *piVar8 * 2;
      puVar10 = (le<ushort>* )(unsigned)(iVar2 + -2);
      *(le<undefined2>* )(unsigned)((int)piVar7 + 6) =
           *(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)((uint)*puVar13 * 4 + iVar9) * 2 + iVar9);
      *(le<undefined2>* )(unsigned)(piVar7 + 2) =
           *(le<undefined2>* )(unsigned)((*(le<int>* )(unsigned)((uint)*puVar10 * 4 + iVar9) + 1) * 2 + iVar9);
      iVar3 = 0;
      if (2 < (uint)((int)((iVar2 - (int)puVar13) + (uint)(iVar2 - (int)puVar13 < 0)) >> 1)) {
        uVar1 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar10 = (le<ushort>* )(unsigned)(iVar2 + -4);
        piVar4 = (le<int>* )(unsigned)((uint)uVar1 * 4 + iVar9);
        (*(le<int>* )(fr0_ - 0x28)) = (piVar4[1] - *piVar4) + -2;
      }
      piVar4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1;
      *piVar7 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + (*(le<int>* )(fr0_ - 0x28));
      for (; puVar13 <= puVar10; puVar13 = puVar13 + 1) {
        piVar5 = (le<int>* )(unsigned)((uint)*puVar13 * 4 + iVar9);
        iVar3 = iVar3 + (piVar5[1] - *piVar5) + -2;
      }
      *(le<short>* )(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 3;
      (*(le<uint>* )(fr0_ - 0x20)) = (*(le<uint>* )(fr0_ - 0x20)) + 1;
      (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(piVar4));
    } while ((*(le<uint>* )(fr0_ - 0x20)) < ar5);
  }
  iVar2 = 0xfffe;
  uVar11 = 0;
  iVar9 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
  if (ar6 != 0) {
    do {
      (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1));
      iVar3 = (int)0xe6;
      iVar6 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
      *piVar7 = iVar9;
      *(le<undefined2>* )(unsigned)(piVar7 + 2) = *(le<undefined2>* )(unsigned)(iVar3 + ar4);
      *(le<undefined2>* )(unsigned)((int)piVar7 + 6) = *(le<undefined2>* )(unsigned)(0xe6 + ar4);
      uVar11 = uVar11 + 1;
      iVar3 = (iVar6 - iVar9) + iVar2;
      *(le<short>* )(unsigned)(piVar7 + 1) = (short)iVar3;
      piVar7 = piVar7 + 3;
      iVar9 = iVar6;
    } while (uVar11 < ar6);
  }
  return iVar3;
}

__asm__(".globl FUN_8c114d30\n.set FUN_8c114d30, FUN_8c114d30_def\n");

}
//@unit 8c114e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c114e80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c114e80");
  return (unsigned)sh4_interp(0x8c114e80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c114e80\n.set FUN_8c114e80, FUN_8c114e80_def\n");
}
//@unit 8c1155a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1155a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1155a0");
  return (unsigned)sh4_interp(0x8c1155a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1155a0\n.set FUN_8c1155a0, FUN_8c1155a0_def\n");
}
//@unit 8c1155a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1155a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1155a4");
  return (unsigned)sh4_interp(0x8c1155a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1155a4\n.set FUN_8c1155a4, FUN_8c1155a4_def\n");
}
//@unit 8c115732
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115732_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115732");
  return (unsigned)sh4_interp(0x8c115732, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115732\n.set FUN_8c115732, FUN_8c115732_def\n");
}
//@unit 8c115778
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c115778");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(le<undefined4>* )(unsigned)(0x1ac + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(le<undefined2>* )(unsigned)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(le<uint>* )(unsigned)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(le<int>* )(unsigned)(0xb0 + ar4);
      *(le<undefined4>* )(unsigned)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(le<int>* )(unsigned)(ar4 + 0x38) << 1));
  }
  return iVar1;
}

__asm__(".globl FUN_8c115778\n.set FUN_8c115778, FUN_8c115778_def\n");

}
//@unit 8c1157c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c1157c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<undefined4>* puVar3;
  
  *(le<undefined4>* )(unsigned)(0x1ac + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 100) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x74) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x78) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x70) = 0;
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    *(le<undefined4>* )(unsigned)(iVar1 + *(le<int>* )(unsigned)(0xa8 + ar4)) = 0;
  } while (uVar2 <= *(le<uint>* )(unsigned)(ar4 + 0x38));
  uVar2 = 0;
  if (*(le<int>* )(unsigned)(0x144 + ar4) + *(le<int>* )(unsigned)(0xb4 + ar4) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(0xac + ar4) + iVar1) = 0;
    } while (uVar2 < (uint)(*(le<int>* )(unsigned)(0x144 + ar4) + *(le<int>* )(unsigned)(0xb4 + ar4)));
  }
  iVar1 = 0xa0 + 0x18;
  puVar3 = (le<undefined4>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa0 + ar4));
  uVar2 = 0;
  if (*(le<int>* )(unsigned)(iVar1 + ar4) != 0) {
    do {
      iVar1 = (int)0xb8;
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (uVar2 < *(le<uint>* )(unsigned)(iVar1 + ar4));
  }
  return iVar1;
}

__asm__(".globl FUN_8c1157c0\n.set FUN_8c1157c0, FUN_8c1157c0_def\n");

}
//@unit 8c11584e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c11584e_def(le<int>* ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11584e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  le<undefined4>* puVar3;
  int iVar4;
  
  if (ar5 == (le<undefined4>* )(unsigned)0x0) {
    puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x10))))(*ar4,0x14,ar6,ar7));
    iVar4 = (int)0x134;
    *puVar3 = *(le<undefined4>* )(unsigned)(iVar4 + (int)ar4);
    puVar1 = ((void *)(unsigned)0x8c119320);
    puVar3[1] = *(le<undefined4>* )(unsigned)(iVar4 + 0x70 + (int)ar4);
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c11920c));
    *(le<unsigned>* )(unsigned)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c113680));
    *(le<unsigned>* )(unsigned)(iVar4 + 0x70 + (int)ar4) = puVar2;
    *(le<unsigned>* )(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(le<undefined4>* )(unsigned)(iVar4 + (int)ar4) = *ar5;
  puVar1 = ((void *)(unsigned)0x8c11346c);
  *(le<undefined4>* )(unsigned)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  puVar2 = ((void *)(unsigned)0x8c11af3a);
  *(le<unsigned>* )(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
  ar4[6] = (int)puVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
  return (le<undefined4>* )(unsigned)0;
}

__asm__(".globl FUN_8c11584e\n.set FUN_8c11584e, FUN_8c11584e_def\n");

}
//@unit 8c1158e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c1158e0_def(le<int>* ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1158e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  le<undefined4>* puVar3;
  int iVar4;
  
  if (ar5 == (le<undefined4>* )(unsigned)0x0) {
    puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x10))))(*ar4,0x14,ar6,ar7));
    iVar4 = (int)0x134;
    *puVar3 = *(le<undefined4>* )(unsigned)(iVar4 + (int)ar4);
    puVar3[1] = *(le<undefined4>* )(unsigned)(iVar4 + 0x70 + (int)ar4);
    puVar3[2] = *(le<undefined4>* )(unsigned)(iVar4 + 0x74 + (int)ar4);
    puVar3[3] = ar4[6];
    puVar1 = ((void *)(unsigned)0x8c1197d8);
    puVar3[4] = *(le<undefined4>* )(unsigned)(iVar4 + -0xc + (int)ar4);
    puVar2 = ((void *)(unsigned)0x8c119706);
    *(le<unsigned>* )(unsigned)(iVar4 + (int)ar4) = puVar1;
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c1136d2));
    *(le<unsigned>* )(unsigned)(iVar4 + 0x70 + (int)ar4) = puVar2;
    puVar2 = ((void *)(unsigned)0x8c11af7e);
    *(le<unsigned>* )(unsigned)(iVar4 + 0x74 + (int)ar4) = puVar1;
    ar4[6] = (int)puVar2;
    *(le<undefined4>* )(unsigned)(iVar4 + -0xc + (int)ar4) = 0;
    return puVar3;
  }
  iVar4 = (int)0x134;
  *(le<undefined4>* )(unsigned)(iVar4 + (int)ar4) = *ar5;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x70 + (int)ar4) = ar5[1];
  *(le<undefined4>* )(unsigned)(iVar4 + 0x74 + (int)ar4) = ar5[2];
  ar4[6] = ar5[3];
  *(le<undefined4>* )(unsigned)(iVar4 + -0xc + (int)ar4) = ar5[4];
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x18))))(*ar4,ar5,ar6,ar7));
  return (le<undefined4>* )(unsigned)0;
}

__asm__(".globl FUN_8c1158e0\n.set FUN_8c1158e0, FUN_8c1158e0_def\n");

}
//@unit 8c11596e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11596e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11596e");
  return (unsigned)sh4_interp(0x8c11596e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11596e\n.set FUN_8c11596e, FUN_8c11596e_def\n");
}
//@unit 8c115980
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115980_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115980");
  return (unsigned)sh4_interp(0x8c115980, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115980\n.set FUN_8c115980, FUN_8c115980_def\n");
}
//@unit 8c115ac8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115ac8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115ac8");
  return (unsigned)sh4_interp(0x8c115ac8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115ac8\n.set FUN_8c115ac8, FUN_8c115ac8_def\n");
}
//@unit 8c115cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115cec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115cec");
  return (unsigned)sh4_interp(0x8c115cec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115cec\n.set FUN_8c115cec, FUN_8c115cec_def\n");
}
//@unit 8c115cf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115cf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115cf4");
  return (unsigned)sh4_interp(0x8c115cf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115cf4\n.set FUN_8c115cf4, FUN_8c115cf4_def\n");
}
//@unit 8c115ed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c115ed8_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c115ed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<int>* piVar2;
  le<int>* piVar3;
  int iVar4;
  
  iVar4 = *(le<int>* )(unsigned)(uint)ar5[1];
  piVar3 = (le<int>* )(unsigned)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (le<int>* )(unsigned)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(le<int>* )(unsigned)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(le<int>* )(unsigned)(iVar4 + ar4);
  *(le<unsigned>* )(unsigned)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl FUN_8c115ed8\n.set FUN_8c115ed8, FUN_8c115ed8_def\n");

}
//@unit 8c115f18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c115f18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c115f18");
  return (unsigned)sh4_interp(0x8c115f18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c115f18\n.set FUN_8c115f18, FUN_8c115f18_def\n");
}
//@unit 8c115fec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c115fec");
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
    if ((10 < *(le<uint>* )(unsigned)(ar4 + 300)) || (*(le<uint>* )(unsigned)(ar4 + 0x158) >> 2 < (uint)*(le<ushort>* )(unsigned)(ar4 + 0x50))
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
      uVar5 = uVar5 + *(le<int>* )(unsigned)(ar4 + 0x170 + iVar3);
      d = d + *(le<int>* )(unsigned)(ar4 + 0x184 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar6 < 5);
    if (uVar5 < 0x2000000) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5 * 0x80,d,vr6,vr7));
    }
    else {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(uVar5,d >> 7,vr6,vr7));
    }
    *(le<undefined4>* )(unsigned)(ar4 + 0x168) = uVar2;
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x158) - (uint)*(le<ushort>* )(unsigned)(ar4 + 0x50);
    iVar6 = iVar3 * *(le<int>* )(unsigned)(ar4 + 0x16c) * *(le<int>* )(unsigned)(ar4 + 0x168);
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
    uVar1 = *(le<ushort>* )(unsigned)(ar4 + 0x15e);
    iVar3 = (iVar3 >> 0xe) + (uint)uVar1;
    if ((int)(uint)*(le<ushort>* )(unsigned)(ar4 + 0x160) < iVar3) {
      *(le<undefined2>* )(unsigned)(ar4 + 0x15e) = *(le<undefined2>* )(unsigned)(ar4 + 0x160);
    }
    else {
      *(le<short>* )(unsigned)(ar4 + 0x15e) = (short)iVar3;
    }
    uVar2 = 3;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,3,vr6,vr7));
    if (extraout_r3 < (int)(uVar5 & 0xffff)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)uVar1,uVar2,vr6,vr7));
      *(le<short>* )(unsigned)(ar4 + 0x15e) = (short)uVar2;
    }
  }
  uVar2 = 0x15c;
  if (*(char *)(unsigned)(ar4 + 0x15c) != '\0') {
    iVar6 = (uint)*(byte *)(unsigned)(ar4 + 0x198) * 4;
    iVar3 = *(byte *)(unsigned)(ar4 + 0x198) + 1;
    *(le<uint>* )(unsigned)(ar4 + 0x170 + iVar6) =
         (uint)*(le<ushort>* )(unsigned)(ar4 + 0x50) * (uint)*(le<ushort>* )(unsigned)(ar4 + 0x15e) >> 3;
    *(le<uint>* )(unsigned)(iVar6 + ar4 + 0x184) =
         (uint)*(le<ushort>* )(unsigned)(ar4 + 0x50) * (uint)*(le<ushort>* )(unsigned)(ar4 + 0x50) >> 3;
    if (iVar3 == 5) {
      iVar3 = iVar4;
    }
    uVar2 = 0x198;
    *(char *)(unsigned)(ar4 + 0x198) = (char)iVar3;
  }
  return uVar2;
}

__asm__(".globl FUN_8c115fec\n.set FUN_8c115fec, FUN_8c115fec_def\n");

}
//@unit 8c11617a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11617a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11617a");
  return (unsigned)sh4_interp(0x8c11617a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11617a\n.set FUN_8c11617a, FUN_8c11617a_def\n");
}
//@unit 8c117bac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c117bac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c117bac");
  return (unsigned)sh4_interp(0x8c117bac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c117bac\n.set FUN_8c117bac, FUN_8c117bac_def\n");
}
//@unit 8c11919e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11919e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11919e");
  return (unsigned)sh4_interp(0x8c11919e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11919e\n.set FUN_8c11919e, FUN_8c11919e_def\n");
}
//@unit 8c119218
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119218_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119218");
  return (unsigned)sh4_interp(0x8c119218, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119218\n.set FUN_8c119218, FUN_8c119218_def\n");
}
//@unit 8c119320
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119320_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119320");
  return (unsigned)sh4_interp(0x8c119320, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119320\n.set FUN_8c119320, FUN_8c119320_def\n");
}
//@unit 8c119706
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119706_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119706");
  return (unsigned)sh4_interp(0x8c119706, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119706\n.set FUN_8c119706, FUN_8c119706_def\n");
}
//@unit 8c1197d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1197d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1197d8");
  return (unsigned)sh4_interp(0x8c1197d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1197d8\n.set FUN_8c1197d8, FUN_8c1197d8_def\n");
}
//@unit 8c119a18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119a18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119a18");
  return (unsigned)sh4_interp(0x8c119a18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119a18\n.set FUN_8c119a18, FUN_8c119a18_def\n");
}
//@unit 8c119a1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119a1e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119a1e");
  return (unsigned)sh4_interp(0x8c119a1e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119a1e\n.set FUN_8c119a1e, FUN_8c119a1e_def\n");
}
//@unit 8c119b16
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119b16_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119b16");
  return (unsigned)sh4_interp(0x8c119b16, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119b16\n.set FUN_8c119b16, FUN_8c119b16_def\n");
}
//@unit 8c119c68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c119c68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c119c68");
  return (unsigned)sh4_interp(0x8c119c68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c119c68\n.set FUN_8c119c68, FUN_8c119c68_def\n");
}
//@unit 8c11a014
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11a014_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11a014");
  return (unsigned)sh4_interp(0x8c11a014, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11a014\n.set FUN_8c11a014, FUN_8c11a014_def\n");
}
//@unit 8c11a02c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11a02c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11a02c");
  return (unsigned)sh4_interp(0x8c11a02c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11a02c\n.set FUN_8c11a02c, FUN_8c11a02c_def\n");
}
//@unit 8c11a09e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c11a09e_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11a09e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = ar4[3];
  puVar3 = (le<undefined4>* )(unsigned)(uint)ar4[2];
  puVar2 = ar4;
  while (puVar1 = puVar3, puVar1 != (le<undefined4>* )(unsigned)0x0) {
    if ((uint)puVar1[3] < uVar4) {
      uVar5 = *ar4;
      puVar2[2] = puVar1[2];
      puVar1[2] = ar4;
      *ar4 = 1;
      *puVar1 = uVar5;
      uVar4 = puVar1[3];
      puVar3 = (le<undefined4>* )(unsigned)puVar2[2];
      ar4 = puVar1;
    }
    else {
      puVar3 = (le<undefined4>* )(unsigned)puVar1[2];
      puVar2 = puVar1;
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c11a09e\n.set FUN_8c11a09e, FUN_8c11a09e_def\n");

}
//@unit 8c11a0e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11a0e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11a0e8");
  return (unsigned)sh4_interp(0x8c11a0e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11a0e8\n.set FUN_8c11a0e8, FUN_8c11a0e8_def\n");
}
//@unit 8c11a588
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c11a588_def(int ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11a588");
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
    iVar1 = *(le<int>* )(unsigned)(*ar5 + 8);
    while (iVar1 != 0) {
      if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
        iVar1 = 0;
      }
      else {
        if (((*((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x10)) & 1) != 0) &&
           ((*(le<undefined4>* )(fr0_ - 0xc)) = CONCAT22(*(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 0x10) + 4),
                                *(le<undefined2>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 0x10) + 2)),
           (*(le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(0xc0 + ar4) + (*(le<undefined4>* )(fr0_ - 0xc)) * 2) & 0x80) != 0)) {
          iVar2 = iVar2 + 1;
        }
        iVar1 = *(le<int>* )(unsigned)(iVar1 + 4);
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c11a588\n.set FUN_8c11a588, FUN_8c11a588_def\n");

}
//@unit 8c11a634
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11a634_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11a634");
  return (unsigned)sh4_interp(0x8c11a634, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11a634\n.set FUN_8c11a634, FUN_8c11a634_def\n");
}
//@unit 8c11a88c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11a88c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11a88c");
  return (unsigned)sh4_interp(0x8c11a88c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11a88c\n.set FUN_8c11a88c, FUN_8c11a88c_def\n");
}
//@unit 8c11aaa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11aaa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<ushort>* puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(le<int>* )(unsigned)(0x19c + ar4);
  if (iVar5 != 0) {
    puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar5 + 0xc));
    if (((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
      iVar2 = (int)puVar3 - *(le<int>* )(unsigned)(ar4 + 0x48);
      uVar4 = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      if ((uVar4 < *(le<uint>* )(unsigned)(ar4 + 0x38)) ||
         (*(le<int>* )(unsigned)(0x1b4 + ar4) + *(le<uint>* )(unsigned)(ar4 + 0x38) <= uVar4)) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(le<short>* )(unsigned)(ar4 + 0x34) = *(le<short>* )(unsigned)(ar4 + 0x34) + 1;
      }
    }
    else {
      uVar1 = *puVar3;
      while ((uVar1 & 1) == 0) {
        puVar3 = puVar3 + 1;
        uVar1 = *puVar3;
      }
      iVar2 = *(le<int>* )(unsigned)(puVar3 + 1);
      if (((*(le<ushort>* )(unsigned)(iVar2 * 2 + *(le<int>* )(unsigned)(0xc0 + ar4)) & 2) == 0) ||
         (iVar2 != *(le<int>* )(unsigned)(0x150 + ar4))) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
      }
      else {
        *(le<short>* )(unsigned)(ar4 + 0x34) = *(le<short>* )(unsigned)(ar4 + 0x34) + 1;
      }
      *(le<int>* )(unsigned)(0x150 + ar4) = iVar2;
    }
    if (*(le<uint>* )(unsigned)(0x14c + ar4) < (uint)*(le<ushort>* )(unsigned)(ar4 + 0x34)) {
      if (((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(0x134 + ar4)) == ((void *)(unsigned)0x8c119320)) {
        iVar5 = *(le<int>* )(unsigned)(iVar5 + 8);
        uVar1 = 0;
        if (iVar5 != 0) {
          iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10);
          while (iVar2 != 0) {
            iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10) - *(le<int>* )(unsigned)(ar4 + 0x48);
            iVar5 = *(le<int>* )(unsigned)(iVar5 + 4);
            if ((uint)((int)(iVar2 + (uint)(iVar2 < 0)) >> 1) <
                (uint)(*(le<int>* )(unsigned)(ar4 + 0x40) + *(le<int>* )(unsigned)(0x1b4 + ar4) * -2)) {
              uVar1 = uVar1 + 1;
            }
            if (iVar5 == 0) break;
            iVar2 = *(le<int>* )(unsigned)(iVar5 + 0x10);
          }
        }
        if (uVar1 < 0x10) {
          *(le<undefined2>* )(unsigned)(ar4 + 0x34) = 0;
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c11aaa8\n.set FUN_8c11aaa8, FUN_8c11aaa8_def\n");

}
//@unit 8c11abc6
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11abc6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(le<int>* )(unsigned)(0x80 + ar4) == 0) {
    ar5 = 0;
    uVar1 = 10;
    uVar2 = 0;
  }
  else {
    uVar2 = *(le<undefined4>* )(unsigned)(0x80 + ar4);
    uVar1 = 9;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,uVar1,uVar2,ar5));
  return uVar1;
}

__asm__(".globl FUN_8c11abc6\n.set FUN_8c11abc6, FUN_8c11abc6_def\n");

}
//@unit 8c11abf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11abf0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11abf0");
  return (unsigned)sh4_interp(0x8c11abf0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11abf0\n.set FUN_8c11abf0, FUN_8c11abf0_def\n");
}
//@unit 8c11ac4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ac4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ac4c");
  return (unsigned)sh4_interp(0x8c11ac4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ac4c\n.set FUN_8c11ac4c, FUN_8c11ac4c_def\n");
}
//@unit 8c11ace2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ace2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ace2");
  return (unsigned)sh4_interp(0x8c11ace2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ace2\n.set FUN_8c11ace2, FUN_8c11ace2_def\n");
}
//@unit 8c11ad68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ad68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ad68");
  return (unsigned)sh4_interp(0x8c11ad68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ad68\n.set FUN_8c11ad68, FUN_8c11ad68_def\n");
}
//@unit 8c11adde
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11adde_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11adde");
  return (unsigned)sh4_interp(0x8c11adde, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11adde\n.set FUN_8c11adde, FUN_8c11adde_def\n");
}
//@unit 8c11ae6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ae6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ae6c");
  return (unsigned)sh4_interp(0x8c11ae6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ae6c\n.set FUN_8c11ae6c, FUN_8c11ae6c_def\n");
}
//@unit 8c11af3a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11af3a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11af3a");
  return (unsigned)sh4_interp(0x8c11af3a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11af3a\n.set FUN_8c11af3a, FUN_8c11af3a_def\n");
}
//@unit 8c11af7e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11af7e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11af7e");
  return (unsigned)sh4_interp(0x8c11af7e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11af7e\n.set FUN_8c11af7e, FUN_8c11af7e_def\n");
}
//@unit 8c11b13e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b13e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b13e");
  return (unsigned)sh4_interp(0x8c11b13e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b13e\n.set FUN_8c11b13e, FUN_8c11b13e_def\n");
}
//@unit 8c11b5a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b5a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b5a0");
  return (unsigned)sh4_interp(0x8c11b5a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b5a0\n.set FUN_8c11b5a0, FUN_8c11b5a0_def\n");
}
//@unit 8c11b666
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11b666");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11af7e)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11494a))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c11b13e)); unsigned long t3_ = (unsigned long)(
                     (int)0x1ec); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,ar7,ar7); });
  if (iVar1 != 0) {
    iVar2 = (int)0x1a8;
    *(le<unsigned>* )(unsigned)(iVar2 + iVar1) = ((void *)(unsigned)0x8c11346c);
    *(le<undefined4>* )(unsigned)(iVar2 + -4 + iVar1) = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c11b666\n.set FUN_8c11b666, FUN_8c11b666_def\n");

}
//@unit 8c11b6b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b6b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b6b8");
  return (unsigned)sh4_interp(0x8c11b6b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b6b8\n.set FUN_8c11b6b8, FUN_8c11b6b8_def\n");
}
//@unit 8c11b884
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b884_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b884");
  return (unsigned)sh4_interp(0x8c11b884, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b884\n.set FUN_8c11b884, FUN_8c11b884_def\n");
}
//@unit 8c11b88c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b88c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b88c");
  return (unsigned)sh4_interp(0x8c11b88c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b88c\n.set FUN_8c11b88c, FUN_8c11b88c_def\n");
}
//@unit 8c11b93c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11b93c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11b93c");
  return (unsigned)sh4_interp(0x8c11b93c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11b93c\n.set FUN_8c11b93c, FUN_8c11b93c_def\n");
}
//@unit 8c11bb54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bb54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bb54");
  return (unsigned)sh4_interp(0x8c11bb54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bb54\n.set FUN_8c11bb54, FUN_8c11bb54_def\n");
}
//@unit 8c11bb94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bb94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bb94");
  return (unsigned)sh4_interp(0x8c11bb94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bb94\n.set FUN_8c11bb94, FUN_8c11bb94_def\n");
}
//@unit 8c11bbd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bbd4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bbd4");
  return (unsigned)sh4_interp(0x8c11bbd4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bbd4\n.set FUN_8c11bbd4, FUN_8c11bbd4_def\n");
}
//@unit 8c11bbec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bbec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bbec");
  return (unsigned)sh4_interp(0x8c11bbec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bbec\n.set FUN_8c11bbec, FUN_8c11bbec_def\n");
}
//@unit 8c11bcb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bcb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bcb8");
  return (unsigned)sh4_interp(0x8c11bcb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bcb8\n.set FUN_8c11bcb8, FUN_8c11bcb8_def\n");
}
//@unit 8c11bccc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bccc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bccc");
  return (unsigned)sh4_interp(0x8c11bccc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bccc\n.set FUN_8c11bccc, FUN_8c11bccc_def\n");
}
//@unit 8c11bd6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11bd6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11bd6c");
  return (unsigned)sh4_interp(0x8c11bd6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11bd6c\n.set FUN_8c11bd6c, FUN_8c11bd6c_def\n");
}
//@unit 8c11c0e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c0e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c0e4");
  return (unsigned)sh4_interp(0x8c11c0e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c0e4\n.set FUN_8c11c0e4, FUN_8c11c0e4_def\n");
}
//@unit 8c11c1d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c11c1d8_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c11c1d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x18))))(*ar4,ar4[0xf],vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c11c1d8\n.set FUN_8c11c1d8, FUN_8c11c1d8_def\n");

}
//@unit 8c11c210
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c210_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c210");
  return (unsigned)sh4_interp(0x8c11c210, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c210\n.set FUN_8c11c210, FUN_8c11c210_def\n");
}
//@unit 8c11c2b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c2b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c2b8");
  return (unsigned)sh4_interp(0x8c11c2b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c2b8\n.set FUN_8c11c2b8, FUN_8c11c2b8_def\n");
}
//@unit 8c11c412
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11c412");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11c0e4)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11c2b0))); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11c204))); unsigned long t3_ = (unsigned long)(0x70); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,2,3); });
  return uVar1;
}

__asm__(".globl FUN_8c11c412\n.set FUN_8c11c412, FUN_8c11c412_def\n");

}
//@unit 8c11c47c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c47c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c47c");
  return (unsigned)sh4_interp(0x8c11c47c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c47c\n.set FUN_8c11c47c, FUN_8c11c47c_def\n");
}
//@unit 8c11c5e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c5e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c5e4");
  return (unsigned)sh4_interp(0x8c11c5e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c5e4\n.set FUN_8c11c5e4, FUN_8c11c5e4_def\n");
}
//@unit 8c11c7b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c7b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c7b8");
  return (unsigned)sh4_interp(0x8c11c7b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c7b8\n.set FUN_8c11c7b8, FUN_8c11c7b8_def\n");
}
//@unit 8c11c7cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c7cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c7cc");
  return (unsigned)sh4_interp(0x8c11c7cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c7cc\n.set FUN_8c11c7cc, FUN_8c11c7cc_def\n");
}
//@unit 8c11c86c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c86c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c86c");
  return (unsigned)sh4_interp(0x8c11c86c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c86c\n.set FUN_8c11c86c, FUN_8c11c86c_def\n");
}
//@unit 8c11c914
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c914_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c914");
  return (unsigned)sh4_interp(0x8c11c914, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c914\n.set FUN_8c11c914, FUN_8c11c914_def\n");
}
//@unit 8c11c972
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c972_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c972");
  return (unsigned)sh4_interp(0x8c11c972, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c972\n.set FUN_8c11c972, FUN_8c11c972_def\n");
}
//@unit 8c11c99a
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11c99a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(le<short>* )(unsigned)(ar4 + 0x3e) != (short)ar5) {
    *(le<short>* )(unsigned)(ar4 + 0x3e) = (short)ar5;
    if (*(le<int>* )(unsigned)(0xc8 + ar4) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xc8 + ar4))))((short)ar5,0xf4 + ar4,vr6,vr7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c11c99a\n.set FUN_8c11c99a, FUN_8c11c99a_def\n");

}
//@unit 8c11c9a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11c9a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  int unaff_r14 = 0;
  
  uVar1 = 0;
  if ((uint)*(le<ushort>* )(unsigned)(in_r0 + unaff_r14) != (uint)(ushort)ar5) {
    *(le<ushort>* )(unsigned)(in_r0 + unaff_r14) = (ushort)ar5;
    if (*(le<int>* )(unsigned)(0xc8 + unaff_r14) != 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xc8 + unaff_r14))))
                        ((uint)(ushort)ar5,0xf4 + unaff_r14,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c11c9a0\n.set FUN_8c11c9a0, FUN_8c11c9a0_def\n");

}
//@unit 8c11c9d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c9d2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c9d2");
  return (unsigned)sh4_interp(0x8c11c9d2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c9d2\n.set FUN_8c11c9d2, FUN_8c11c9d2_def\n");
}
//@unit 8c11c9d6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11c9d6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11c9d6");
  return (unsigned)sh4_interp(0x8c11c9d6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11c9d6\n.set FUN_8c11c9d6, FUN_8c11c9d6_def\n");
}
//@unit 8c11ca24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ca24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ca24");
  return (unsigned)sh4_interp(0x8c11ca24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ca24\n.set FUN_8c11ca24, FUN_8c11ca24_def\n");
}
//@unit 8c11ca28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ca28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ca28");
  return (unsigned)sh4_interp(0x8c11ca28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ca28\n.set FUN_8c11ca28, FUN_8c11ca28_def\n");
}
//@unit 8c11cad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cad4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cad4");
  return (unsigned)sh4_interp(0x8c11cad4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cad4\n.set FUN_8c11cad4, FUN_8c11cad4_def\n");
}
//@unit 8c11cada
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cada_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cada");
  return (unsigned)sh4_interp(0x8c11cada, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cada\n.set FUN_8c11cada, FUN_8c11cada_def\n");
}
//@unit 8c11cb54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cb54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cb54");
  return (unsigned)sh4_interp(0x8c11cb54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cb54\n.set FUN_8c11cb54, FUN_8c11cb54_def\n");
}
//@unit 8c11cb5a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cb5a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cb5a");
  return (unsigned)sh4_interp(0x8c11cb5a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cb5a\n.set FUN_8c11cb5a, FUN_8c11cb5a_def\n");
}
//@unit 8c11cbbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cbbc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cbbc");
  return (unsigned)sh4_interp(0x8c11cbbc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cbbc\n.set FUN_8c11cbbc, FUN_8c11cbbc_def\n");
}
//@unit 8c11cc2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cc2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cc2c");
  return (unsigned)sh4_interp(0x8c11cc2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cc2c\n.set FUN_8c11cc2c, FUN_8c11cc2c_def\n");
}
//@unit 8c11cd02
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cd02_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cd02");
  return (unsigned)sh4_interp(0x8c11cd02, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cd02\n.set FUN_8c11cd02, FUN_8c11cd02_def\n");
}
//@unit 8c11cd44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cd44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cd44");
  return (unsigned)sh4_interp(0x8c11cd44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cd44\n.set FUN_8c11cd44, FUN_8c11cd44_def\n");
}
//@unit 8c11cd4e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cd4e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cd4e");
  return (unsigned)sh4_interp(0x8c11cd4e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cd4e\n.set FUN_8c11cd4e, FUN_8c11cd4e_def\n");
}
//@unit 8c11cdb6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11cdb6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11cdb6");
  return (unsigned)sh4_interp(0x8c11cdb6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11cdb6\n.set FUN_8c11cdb6, FUN_8c11cdb6_def\n");
}
//@unit 8c11ce44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ce44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ce44");
  return (unsigned)sh4_interp(0x8c11ce44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ce44\n.set FUN_8c11ce44, FUN_8c11ce44_def\n");
}
//@unit 8c11ce88
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11ce88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)0x8c127c14;
}

__asm__(".globl FUN_8c11ce88\n.set FUN_8c11ce88, FUN_8c11ce88_def\n");

}
//@unit 8c11ce8e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ce8e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ce8e");
  return (unsigned)sh4_interp(0x8c11ce8e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ce8e\n.set FUN_8c11ce8e, FUN_8c11ce8e_def\n");
}
//@unit 8c11d14c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d14c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d14c");
  return (unsigned)sh4_interp(0x8c11d14c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d14c\n.set FUN_8c11d14c, FUN_8c11d14c_def\n");
}
//@unit 8c11d200
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d200_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d200");
  return (unsigned)sh4_interp(0x8c11d200, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d200\n.set FUN_8c11d200, FUN_8c11d200_def\n");
}
//@unit 8c11d20e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d20e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d20e");
  return (unsigned)sh4_interp(0x8c11d20e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d20e\n.set FUN_8c11d20e, FUN_8c11d20e_def\n");
}
//@unit 8c11d370
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d370_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d370");
  return (unsigned)sh4_interp(0x8c11d370, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d370\n.set FUN_8c11d370, FUN_8c11d370_def\n");
}
//@unit 8c11d374
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d374_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d374");
  return (unsigned)sh4_interp(0x8c11d374, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d374\n.set FUN_8c11d374, FUN_8c11d374_def\n");
}
//@unit 8c11d432
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11d432");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  if (ar5 == 0) {
    ar5_00 = 6;
    (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x54))));
    ar6_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0xc))[1];
  }
  else {
    (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x54))));
    ar6_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0xc))[1];
    ar5_00 = 5;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1113d0(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0xc)),ar5_00,ar6_00,0));
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl FUN_8c11d432\n.set FUN_8c11d432, FUN_8c11d432_def\n");

}
//@unit 8c11d488
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d488_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d488");
  return (unsigned)sh4_interp(0x8c11d488, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d488\n.set FUN_8c11d488, FUN_8c11d488_def\n");
}
//@unit 8c11d5d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d5d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d5d4");
  return (unsigned)sh4_interp(0x8c11d5d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d5d4\n.set FUN_8c11d5d4, FUN_8c11d5d4_def\n");
}
//@unit 8c11d6f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d6f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d6f0");
  return (unsigned)sh4_interp(0x8c11d6f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d6f0\n.set FUN_8c11d6f0, FUN_8c11d6f0_def\n");
}
//@unit 8c11d7b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d7b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d7b8");
  return (unsigned)sh4_interp(0x8c11d7b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d7b8\n.set FUN_8c11d7b8, FUN_8c11d7b8_def\n");
}
//@unit 8c11d8fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d8fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d8fc");
  return (unsigned)sh4_interp(0x8c11d8fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d8fc\n.set FUN_8c11d8fc, FUN_8c11d8fc_def\n");
}
//@unit 8c11d904
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d904_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d904");
  return (unsigned)sh4_interp(0x8c11d904, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d904\n.set FUN_8c11d904, FUN_8c11d904_def\n");
}
//@unit 8c11d996
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d996_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d996");
  return (unsigned)sh4_interp(0x8c11d996, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d996\n.set FUN_8c11d996, FUN_8c11d996_def\n");
}
//@unit 8c11d9a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11d9a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11d9a0");
  return (unsigned)sh4_interp(0x8c11d9a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11d9a0\n.set FUN_8c11d9a0, FUN_8c11d9a0_def\n");
}
//@unit 8c11daa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11daa4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11daa4");
  return (unsigned)sh4_interp(0x8c11daa4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11daa4\n.set FUN_8c11daa4, FUN_8c11daa4_def\n");
}
//@unit 8c11dc7e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11dc7e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11dc7e");
  return (unsigned)sh4_interp(0x8c11dc7e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11dc7e\n.set FUN_8c11dc7e, FUN_8c11dc7e_def\n");
}
//@unit 8c11dda2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11dda2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11dda2");
  return (unsigned)sh4_interp(0x8c11dda2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11dda2\n.set FUN_8c11dda2, FUN_8c11dda2_def\n");
}
//@unit 8c11e146
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e146_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e146");
  return (unsigned)sh4_interp(0x8c11e146, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e146\n.set FUN_8c11e146, FUN_8c11e146_def\n");
}
//@unit 8c11e190
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e190_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e190");
  return (unsigned)sh4_interp(0x8c11e190, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e190\n.set FUN_8c11e190, FUN_8c11e190_def\n");
}
//@unit 8c11e194
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e194_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e194");
  return (unsigned)sh4_interp(0x8c11e194, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e194\n.set FUN_8c11e194, FUN_8c11e194_def\n");
}
//@unit 8c11e214
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e214_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e214");
  return (unsigned)sh4_interp(0x8c11e214, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e214\n.set FUN_8c11e214, FUN_8c11e214_def\n");
}
//@unit 8c11e218
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e218_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e218");
  return (unsigned)sh4_interp(0x8c11e218, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e218\n.set FUN_8c11e218, FUN_8c11e218_def\n");
}
//@unit 8c11e274
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e274_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e274");
  return (unsigned)sh4_interp(0x8c11e274, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e274\n.set FUN_8c11e274, FUN_8c11e274_def\n");
}
//@unit 8c11e2de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e2de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e2de");
  return (unsigned)sh4_interp(0x8c11e2de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e2de\n.set FUN_8c11e2de, FUN_8c11e2de_def\n");
}
//@unit 8c11e3ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e3ea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e3ea");
  return (unsigned)sh4_interp(0x8c11e3ea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e3ea\n.set FUN_8c11e3ea, FUN_8c11e3ea_def\n");
}
//@unit 8c11e48a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e48a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e48a");
  return (unsigned)sh4_interp(0x8c11e48a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e48a\n.set FUN_8c11e48a, FUN_8c11e48a_def\n");
}
//@unit 8c11e534
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e534_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e534");
  return (unsigned)sh4_interp(0x8c11e534, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e534\n.set FUN_8c11e534, FUN_8c11e534_def\n");
}
//@unit 8c11e82c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e82c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e82c");
  return (unsigned)sh4_interp(0x8c11e82c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e82c\n.set FUN_8c11e82c, FUN_8c11e82c_def\n");
}
//@unit 8c11e896
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e896_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e896");
  return (unsigned)sh4_interp(0x8c11e896, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e896\n.set FUN_8c11e896, FUN_8c11e896_def\n");
}
//@unit 8c11e8d6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e8d6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e8d6");
  return (unsigned)sh4_interp(0x8c11e8d6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e8d6\n.set FUN_8c11e8d6, FUN_8c11e8d6_def\n");
}
//@unit 8c11e9b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11e9b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11e9b4");
  return (unsigned)sh4_interp(0x8c11e9b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11e9b4\n.set FUN_8c11e9b4, FUN_8c11e9b4_def\n");
}
//@unit 8c11ea3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ea3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ea3c");
  return (unsigned)sh4_interp(0x8c11ea3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ea3c\n.set FUN_8c11ea3c, FUN_8c11ea3c_def\n");
}
//@unit 8c11eb6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11eb6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    return 0;
  }
  return *(le<undefined4>* )(unsigned)(0x104 + ar4);
}

__asm__(".globl FUN_8c11eb6c\n.set FUN_8c11eb6c, FUN_8c11eb6c_def\n");

}
//@unit 8c11eb8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11eb8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11eb8c");
  return (unsigned)sh4_interp(0x8c11eb8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11eb8c\n.set FUN_8c11eb8c, FUN_8c11eb8c_def\n");
}
//@unit 8c11ec7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ec7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ec7c");
  return (unsigned)sh4_interp(0x8c11ec7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ec7c\n.set FUN_8c11ec7c, FUN_8c11ec7c_def\n");
}
//@unit 8c11f13e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f13e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f13e");
  return (unsigned)sh4_interp(0x8c11f13e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f13e\n.set FUN_8c11f13e, FUN_8c11f13e_def\n");
}
//@unit 8c11f14a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f14a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f14a");
  return (unsigned)sh4_interp(0x8c11f14a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f14a\n.set FUN_8c11f14a, FUN_8c11f14a_def\n");
}
//@unit 8c11f258
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f258_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f258");
  return (unsigned)sh4_interp(0x8c11f258, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f258\n.set FUN_8c11f258, FUN_8c11f258_def\n");
}
//@unit 8c11f5d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f5d2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f5d2");
  return (unsigned)sh4_interp(0x8c11f5d2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f5d2\n.set FUN_8c11f5d2, FUN_8c11f5d2_def\n");
}
//@unit 8c11f66a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f66a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f66a");
  return (unsigned)sh4_interp(0x8c11f66a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f66a\n.set FUN_8c11f66a, FUN_8c11f66a_def\n");
}
//@unit 8c11f7bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f7bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f7bc");
  return (unsigned)sh4_interp(0x8c11f7bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f7bc\n.set FUN_8c11f7bc, FUN_8c11f7bc_def\n");
}
//@unit 8c11f7d6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f7d6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f7d6");
  return (unsigned)sh4_interp(0x8c11f7d6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f7d6\n.set FUN_8c11f7d6, FUN_8c11f7d6_def\n");
}
//@unit 8c11f898
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f898_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f898");
  return (unsigned)sh4_interp(0x8c11f898, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f898\n.set FUN_8c11f898, FUN_8c11f898_def\n");
}
//@unit 8c11f8de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11f8de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11f8de");
  return (unsigned)sh4_interp(0x8c11f8de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11f8de\n.set FUN_8c11f8de, FUN_8c11f8de_def\n");
}
//@unit 8c11fa1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11fa1e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11fa1e");
  return (unsigned)sh4_interp(0x8c11fa1e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11fa1e\n.set FUN_8c11fa1e, FUN_8c11fa1e_def\n");
}
//@unit 8c11fa64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11fa64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11fa64");
  return (unsigned)sh4_interp(0x8c11fa64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11fa64\n.set FUN_8c11fa64, FUN_8c11fa64_def\n");
}
//@unit 8c11fb64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11fb64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c11f8de)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11fa5e))); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c11fa14))); unsigned long t3_ = (unsigned long)(0x48); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,2,1); });
  return uVar1;
}

__asm__(".globl FUN_8c11fb64\n.set FUN_8c11fb64, FUN_8c11fb64_def\n");

}
//@unit 8c11fb98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c013dfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013dfc)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c013dfc\n.set thunk_FUN_8c013dfc, thunk_FUN_8c013dfc_def\n");

}
//@unit 8c11fb9e
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c013cd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013cd8)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c013cd8\n.set thunk_FUN_8c013cd8, thunk_FUN_8c013cd8_def\n");

}
//@unit 8c11fba4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c013d28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013d28)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c013d28\n.set thunk_FUN_8c013d28, thunk_FUN_8c013d28_def\n");

}
//@unit 8c11fbaa
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c013be8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013be8(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c013be8\n.set thunk_FUN_8c013be8, thunk_FUN_8c013be8_def\n");

}
//@unit 8c11fbb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c014064");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c014064)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c014064\n.set thunk_FUN_8c014064, thunk_FUN_8c014064_def\n");

}
//@unit 8c11fbb6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11fbb6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11fbb6");
  return (unsigned)sh4_interp(0x8c11fbb6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11fbb6\n.set FUN_8c11fbb6, FUN_8c11fbb6_def\n");
}
//@unit 8c11fbbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c0142e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c0142e4)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c0142e4\n.set thunk_FUN_8c0142e4, thunk_FUN_8c0142e4_def\n");

}
//@unit 8c11fbc2
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("thunk_FUN_8c013c88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013c88)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c013c88\n.set thunk_FUN_8c013c88, thunk_FUN_8c013c88_def\n");

}
//@unit 8c11fbe4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11fbe4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar6 + 0x34) + ar7 * 4) = ar5;
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((ar4 + 0x24))))(ar4,ar6,ar7,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 8) != '\0') {
      do {
        if (*(le<int>* )(unsigned)(cVar2 * 8 + *(le<int>* )(unsigned)(ar5 + 0xc)) == 0) {
          *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar5 + 0xc) + cVar2 * 8) = ar6;
          *(le<int>* )(unsigned)(cVar2 * 8 + *(le<int>* )(unsigned)(ar5 + 0xc) + 4) = ar7;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 8));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c11fbe4\n.set FUN_8c11fbe4, FUN_8c11fbe4_def\n");

}
//@unit 8c11fc5e
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c11fc5e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  char cVar2;
  
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((ar4 + 0x28))))(ar4,ar6,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
  }
  else {
    cVar2 = '\0';
    if (*(char *)(unsigned)(ar5 + 9) != '\0') {
      do {
        if (*(le<int>* )(unsigned)(cVar2 * 4 + *(le<int>* )(unsigned)(ar5 + 0x10)) == 0) {
          *(le<undefined4>* )(unsigned)(cVar2 * 4 + *(le<int>* )(unsigned)(ar5 + 0x10)) = ar6;
          return 0;
        }
        cVar2 = cVar2 + '\x01';
      } while ((int)cVar2 < (int)(uint)*(byte *)(unsigned)(ar5 + 9));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c11fc5e\n.set FUN_8c11fc5e, FUN_8c11fc5e_def\n");

}
//@unit 8c11fcc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11fcc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11fcc4");
  return (unsigned)sh4_interp(0x8c11fcc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11fcc4\n.set FUN_8c11fcc4, FUN_8c11fcc4_def\n");
}
//@unit 8c11ffa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ffa8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ffa8");
  return (unsigned)sh4_interp(0x8c11ffa8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ffa8\n.set FUN_8c11ffa8, FUN_8c11ffa8_def\n");
}
//@unit 8c11ffb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c11ffb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c11ffb8");
  return (unsigned)sh4_interp(0x8c11ffb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c11ffb8\n.set FUN_8c11ffb8, FUN_8c11ffb8_def\n");
}
