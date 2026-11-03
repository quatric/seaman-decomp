//@unit 8c1b8a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b8a34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b8a34");
  return (unsigned)sh4_interp(0x8c1b8a34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b8a34\n.set FUN_8c1b8a34, FUN_8c1b8a34_def\n");
}
//@unit 8c1b8ec2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b8ec2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b8ec2");
  return (unsigned)sh4_interp(0x8c1b8ec2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b8ec2\n.set FUN_8c1b8ec2, FUN_8c1b8ec2_def\n");
}
//@unit 8c1b8f5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b8f5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b8f5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b8f5c\n.set FUN_8c1b8f5c, FUN_8c1b8f5c_def\n");

}
//@unit 8c1b9044
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9044_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9044");
  return (unsigned)sh4_interp(0x8c1b9044, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9044\n.set FUN_8c1b9044, FUN_8c1b9044_def\n");
}
//@unit 8c1b90e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b90e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b90e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b90e4\n.set FUN_8c1b90e4, FUN_8c1b90e4_def\n");

}
//@unit 8c1b91a2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b91a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b91a2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b8f5c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b8a34(ar4,ar5,ar6,ar7));
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b91a2\n.set FUN_8c1b91a2, FUN_8c1b91a2_def\n");

}
//@unit 8c1b91d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b91d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b91d8");
  return (unsigned)sh4_interp(0x8c1b91d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b91d8\n.set FUN_8c1b91d8, FUN_8c1b91d8_def\n");
}
//@unit 8c1b939a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned halt_baddata_wrap_1b939a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("halt_baddata_wrap_1b939a");
  return (unsigned)sh4_interp(0x8c1b939a, ar4, ar5, ar6, ar7);
}
__asm__(".globl halt_baddata_wrap_1b939a\n.set halt_baddata_wrap_1b939a, halt_baddata_wrap_1b939a_def\n");
}
//@unit 8c1b93be
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b93be_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b93be");
  return (unsigned)sh4_interp(0x8c1b93be, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b93be\n.set FUN_8c1b93be, FUN_8c1b93be_def\n");
}
//@unit 8c1b93e2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b93e2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b93e2");
  return (unsigned)sh4_interp(0x8c1b93e2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b93e2\n.set FUN_8c1b93e2, FUN_8c1b93e2_def\n");
}
//@unit 8c1b940a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b940a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b940a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 in_r0 = (undefined2)(unsigned long)vin0;
  int in_GBR = (void *)0x8cf80000;
  
  *(le<undefined2>* )(unsigned)(in_GBR + 0x1aa) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b940a\n.set FUN_8c1b940a, FUN_8c1b940a_def\n");

}
//@unit 8c1b9422
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9422_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9422");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 in_r0 = (undefined2)(unsigned long)vin0;
  int in_GBR = (void *)0x8cf80000;
  
  *(le<undefined2>* )(unsigned)(in_GBR + 0x172) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9422\n.set FUN_8c1b9422, FUN_8c1b9422_def\n");

}
//@unit 8c1b9428
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9428_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9428");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int in_r1 = (int)(unsigned long)vin1;
  int in_GBR = (void *)0x8cf80000;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(*(le<undefined4>* )(unsigned)((fr0_ + (int)0x00000000) + -in_r1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1ba396(ar4,ar5,ar6,ar7); });
  *(le<short>* )(unsigned)(in_GBR + 0x196) = (short)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ba1a4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c1b9428\n.set FUN_8c1b9428, FUN_8c1b9428_def\n");

}
//@unit 8c1b9444
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9444_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9444");
  return (unsigned)sh4_interp(0x8c1b9444, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9444\n.set FUN_8c1b9444, FUN_8c1b9444_def\n");
}
//@unit 8c1b946e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b946e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b946e");
  return (unsigned)sh4_interp(0x8c1b946e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b946e\n.set FUN_8c1b946e, FUN_8c1b946e_def\n");
}
//@unit 8c1b94ce
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b94ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b94ce");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<short>* in_r1 = (le<short>* )(unsigned long)vin1;
  char in_S = 0;
  undefined4 in_MACH = 0;
  undefined4 in_MACL = 0;
  
  if (in_S != '\0') {
    mac_wOp(CONCAT44(in_MACH,in_MACL),(int)*in_r1 * (int)*in_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b94ce\n.set FUN_8c1b94ce, FUN_8c1b94ce_def\n");

}
//@unit 8c1b9552
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9552_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9552");
  return (unsigned)sh4_interp(0x8c1b9552, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9552\n.set FUN_8c1b9552, FUN_8c1b9552_def\n");
}
//@unit 8c1b9556
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9556_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9556");
  return (unsigned)sh4_interp(0x8c1b9556, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9556\n.set FUN_8c1b9556, FUN_8c1b9556_def\n");
}
//@unit 8c1b95f2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b95f2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b95f2");
  return (unsigned)sh4_interp(0x8c1b95f2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b95f2\n.set FUN_8c1b95f2, FUN_8c1b95f2_def\n");
}
//@unit 8c1b960a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b960a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b960a");
  return (unsigned)sh4_interp(0x8c1b960a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b960a\n.set FUN_8c1b960a, FUN_8c1b960a_def\n");
}
//@unit 8c1b9664
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9664_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9664");
  return (unsigned)sh4_interp(0x8c1b9664, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9664\n.set FUN_8c1b9664, FUN_8c1b9664_def\n");
}
//@unit 8c1b9668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned halt_unimplemented_wrap_1b9668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("halt_unimplemented_wrap_1b9668");
  return (unsigned)sh4_interp(0x8c1b9668, ar4, ar5, ar6, ar7);
}
__asm__(".globl halt_unimplemented_wrap_1b9668\n.set halt_unimplemented_wrap_1b9668, halt_unimplemented_wrap_1b9668_def\n");
}
//@unit 8c1b9702
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9702_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9702");
  return (unsigned)sh4_interp(0x8c1b9702, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9702\n.set FUN_8c1b9702, FUN_8c1b9702_def\n");
}
//@unit 8c1b970a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b970a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b970a");
  return (unsigned)sh4_interp(0x8c1b970a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b970a\n.set FUN_8c1b970a, FUN_8c1b970a_def\n");
}
//@unit 8c1b9750
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9750_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9750");
  return (unsigned)sh4_interp(0x8c1b9750, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9750\n.set FUN_8c1b9750, FUN_8c1b9750_def\n");
}
//@unit 8c1b9756
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9756_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9756");
  return (unsigned)sh4_interp(0x8c1b9756, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9756\n.set FUN_8c1b9756, FUN_8c1b9756_def\n");
}
//@unit 8c1b9794
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9794_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9794");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint in_r0 = (uint)(unsigned long)vin0;
  uint uVar2;
  int iVar3;
  uint extraout_r2 = 0;
  uint in_r2 = 0;
  undefined1 extraout_r3 = 0;
  undefined1 in_r3 = 0;
  int ar7_00;
  int iVar4;
  char *unaff_r9 = 0;
  int unaff_r12 = 0;
  undefined4 in_R1_BANK = 0;
  int in_GBR = (void *)0x8cf80000;
  bool bVar5;
  
  while( true ) {
    if ((int)unaff_r9 < 0) {
      uVar2 = in_r0 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      uVar2 = in_r0 << ((uint)unaff_r9 & 0x1f);
    }
    *(le<short>* )(unsigned)(in_GBR + 0x72) = (short)uVar2;
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    iVar4 = (char)ar4 + ar4;
    *(le<uint>* )(unsigned)(unaff_r12 + 4) = uVar2;
    *ar5 = in_r3;
    *(char *)(unsigned)(in_GBR + 0xeb) = (char)uVar2;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9422(ar4,ar5,ar6,ar7_00));
    *(le<undefined4>* )(unsigned)(iVar3 + -4) = in_R1_BANK;
    *(le<short>* )(unsigned)(in_GBR + 0x108) = (short)(le<undefined4>* )(unsigned)(iVar3 + -4);
    *(le<uint>* )(unsigned)(ar5 + 0x38) = iVar4 + (uint)((in_r2 & 0x80000000) != 0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b960a(ar4,ar5,ar6,ar7_00));
    bVar5 = (uVar2 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar2 << 1) | (ushort)bVar5;
    if (bVar5) break;
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b946e(ar4,ar5,ar6,ar7_00));
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(le<ushort>* )(unsigned)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)(*(undefined1 *)(unsigned)0x8c1b988a);
  *(le<ushort>* )(unsigned)(in_GBR + 0xc) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9664(ar4,ar5,ar6,iVar4));
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9794\n.set FUN_8c1b9794, FUN_8c1b9794_def\n");

}
//@unit 8c1b979e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b979e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b979e");
  return (unsigned)sh4_interp(0x8c1b979e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b979e\n.set FUN_8c1b979e, FUN_8c1b979e_def\n");
}
//@unit 8c1b9802
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9802_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9802");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9802\n.set FUN_8c1b9802, FUN_8c1b9802_def\n");

}
//@unit 8c1b982c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b982c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b982c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 unaff_r9 = 0;
  
  *(undefined1 *)(unsigned)(ar5 + -1) = unaff_r9;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b982c\n.set FUN_8c1b982c, FUN_8c1b982c_def\n");

}
//@unit 8c1b9834
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9834_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9834");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r3 = 0;
  
  *(le<unsigned>* )(unsigned)(in_r3 + 0xc) = register0x0000003c;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9834\n.set FUN_8c1b9834, FUN_8c1b9834_def\n");

}
//@unit 8c1b9902
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9902_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9902");
  return (unsigned)sh4_interp(0x8c1b9902, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9902\n.set FUN_8c1b9902, FUN_8c1b9902_def\n");
}
//@unit 8c1b992a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 mac_wOp_wrap_1b992a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("mac_wOp_wrap_1b992a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint extraout_r1 = 0;
  int iVar2;
  int unaff_r10 = 0;
  int in_GBR = (void *)0x8cf80000;
  char extraout_S = 0;
  undefined4 extraout_MACH = 0;
  undefined4 extraout_MACL = 0;
  
  iVar2 = (int)((void *)0x8c1b9996);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), halt_baddata_wrap_1b939a(ar4,ar5,ar6,ar7));
  *(le<int>* )(unsigned)(unaff_r10 + 0x38) = iVar2;
  *(le<short>* )(unsigned)(in_GBR + 0x1ce) = (short)uVar1;
  iVar2 = (int)*(le<short>* )(unsigned)(extraout_r1 >> 1 | (uint)((extraout_r1 & 1) != 0) << 0x1f);
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),iVar2 * iVar2);
  }
                    
  halt_baddata();
}

__asm__(".globl mac_wOp_wrap_1b992a\n.set mac_wOp_wrap_1b992a, mac_wOp_wrap_1b992a_def\n");

}
//@unit 8c1b9966
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9966_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9966");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9966\n.set FUN_8c1b9966, FUN_8c1b9966_def\n");

}
//@unit 8c1b9994
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9994");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar7_00;
  int in_GBR = (void *)0x8cf80000;
  
  ar7_00 = (int)(*(undefined1 *)(unsigned)0x8c1b9a52);
  *(le<undefined2>* )(unsigned)(in_GBR + 0xc) = (undefined2)ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9702(ar4,ar5,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b982c(ar4,ar5,ar6,ar7_00));
  *(char *)(unsigned)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(unsigned)(in_GBR + 0x93) = (char)uVar1;
  *(le<short>* )(unsigned)(in_GBR + 0x108) = (short)uVar1;
  *(le<unsigned>* )(unsigned)(ar5 + 0x38) = register0x0000003c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9802(ar4,ar5,ar6,ar7_00));
  *(char *)(unsigned)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ba442(ar4,ar5,ar6,ar7_00));
  *(le<short>* )(unsigned)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(unsigned)(in_GBR + 0xf) = (char)uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9834(ar4,ar5,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b95f2(ar4,ar5,ar6,ar7_00));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9994(ar4,ar5,ar6,ar7_00); });
  *(le<short>* )(unsigned)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9994\n.set FUN_8c1b9994, FUN_8c1b9994_def\n");

}
//@unit 8c1b9996
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9996_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9996");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a7;
  int in_GBR = (void *)0x8cf80000;
  
  a7 = (int)(*(undefined1 *)(unsigned)0x8c1b9a52);
  *(le<undefined2>* )(unsigned)(in_GBR + 0xc) = (undefined2)ain0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9702(ar4,ar5,ar6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b982c(ar4,ar5,ar6,a7));
  *(char *)(unsigned)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(unsigned)(in_GBR + 0x93) = (char)uVar1;
  *(le<short>* )(unsigned)(in_GBR + 0x108) = (short)uVar1;
  *(le<unsigned>* )(unsigned)(ar5 + 0x38) = register0x0000003c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9802(ar4,ar5,ar6,a7));
  *(char *)(unsigned)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ba442(ar4,ar5,ar6,a7));
  *(le<short>* )(unsigned)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(unsigned)(in_GBR + 0xf) = (char)uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b9834(ar4,ar5,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1b95f2(ar4,ar5,ar6,a7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9996(ar4,ar5,ar6,a7); });
  *(le<short>* )(unsigned)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1b9996\n.set FUN_8c1b9996, FUN_8c1b9996_def\n");

}
//@unit 8c1b9a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1b9a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1b9a34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 in_r0 = (undefined1)(unsigned long)vin0;
  int in_GBR = (void *)0x8cf80000;
  
  *(undefined1 *)(unsigned)(in_GBR + 0x95) = in_r0;
  *(undefined1 *)(unsigned)(in_GBR + 0xf1) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl FUN_8c1b9a34\n.set FUN_8c1b9a34, FUN_8c1b9a34_def\n");

}
//@unit 8c1b9a54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9a54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9a54");
  return (unsigned)sh4_interp(0x8c1b9a54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9a54\n.set FUN_8c1b9a54, FUN_8c1b9a54_def\n");
}
//@unit 8c1b9a72
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9a72_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9a72");
  return (unsigned)sh4_interp(0x8c1b9a72, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9a72\n.set FUN_8c1b9a72, FUN_8c1b9a72_def\n");
}
//@unit 8c1b9aa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9aa8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9aa8");
  return (unsigned)sh4_interp(0x8c1b9aa8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9aa8\n.set FUN_8c1b9aa8, FUN_8c1b9aa8_def\n");
}
//@unit 8c1b9b02
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9b02_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9b02");
  return (unsigned)sh4_interp(0x8c1b9b02, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9b02\n.set FUN_8c1b9b02, FUN_8c1b9b02_def\n");
}
//@unit 8c1b9b9e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9b9e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9b9e");
  return (unsigned)sh4_interp(0x8c1b9b9e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9b9e\n.set FUN_8c1b9b9e, FUN_8c1b9b9e_def\n");
}
//@unit 8c1b9c3a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9c3a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9c3a");
  return (unsigned)sh4_interp(0x8c1b9c3a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9c3a\n.set FUN_8c1b9c3a, FUN_8c1b9c3a_def\n");
}
//@unit 8c1b9c52
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9c52_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9c52");
  return (unsigned)sh4_interp(0x8c1b9c52, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9c52\n.set FUN_8c1b9c52, FUN_8c1b9c52_def\n");
}
//@unit 8c1b9c70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9c70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9c70");
  return (unsigned)sh4_interp(0x8c1b9c70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9c70\n.set FUN_8c1b9c70, FUN_8c1b9c70_def\n");
}
//@unit 8c1b9e00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1b9e00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1b9e00");
  return (unsigned)sh4_interp(0x8c1b9e00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1b9e00\n.set FUN_8c1b9e00, FUN_8c1b9e00_def\n");
}
//@unit 8c1ba1a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1ba1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ba1a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1ba1a4\n.set FUN_8c1ba1a4, FUN_8c1ba1a4_def\n");

}
//@unit 8c1ba396
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1ba396_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1ba396");
  return (unsigned)sh4_interp(0x8c1ba396, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1ba396\n.set FUN_8c1ba396, FUN_8c1ba396_def\n");
}
//@unit 8c1ba442
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1ba442_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ba442");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1ba442\n.set FUN_8c1ba442, FUN_8c1ba442_def\n");

}
//@unit 8c1ba44a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1ba44a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ba44a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1ba44a\n.set FUN_8c1ba44a, FUN_8c1ba44a_def\n");

}
//@unit 8c1ba52c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1ba52c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ba52c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_baddata();
}

__asm__(".globl FUN_8c1ba52c\n.set FUN_8c1ba52c, FUN_8c1ba52c_def\n");

}
//@unit 8c1bab30
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1bab30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1bab30");
  return (unsigned)sh4_interp(0x8c1bab30, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1bab30\n.set FUN_8c1bab30, FUN_8c1bab30_def\n");
}
