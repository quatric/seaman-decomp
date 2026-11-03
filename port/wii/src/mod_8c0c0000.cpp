//@unit 8c0c0148
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c0148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c0148");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_10270c(ar4 + 0x28,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c0148\n.set FUN_8c0c0148, FUN_8c0c0148_def\n");

}
//@unit 8c0c0188
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c0188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c0188");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c02a0(ar4 + 0x4c,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c01d8(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c0188\n.set FUN_8c0c0188, FUN_8c0c0188_def\n");

}
//@unit 8c0c01d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c01d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c01d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0224(ar4 + 0x14,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0224(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c01d8\n.set FUN_8c0c01d8, FUN_8c0c01d8_def\n");

}
//@unit 8c0c0224
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c0224_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c0224");
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

__asm__(".globl FUN_8c0c0224\n.set FUN_8c0c0224, FUN_8c0c0224_def\n");

}
//@unit 8c0c0264
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_0c0264_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0c0264");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    ar4[1] = 0;
    *ar4 = 0;
    if (0 < (short)ar5) {
      ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x10)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5,ar6,ar7); })
      ;
    }
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0c0264\n.set free_if_nonnull_wrap_0c0264, free_if_nonnull_wrap_0c0264_def\n");

}
//@unit 8c0c02a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c02a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c02a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x19;
    ar6_00 = 0x18;
    ar5_00 = ((void *)0x8c0c02e8);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); vec_delete_array(ar4,((void *)0x8c0c02e8),0x18,0x19); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c02a0\n.set FUN_8c0c02a0, FUN_8c0c02a0_def\n");

}
//@unit 8c0c02e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c02e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c02e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0224(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c02e8\n.set FUN_8c0c02e8, FUN_8c0c02e8_def\n");

}
//@unit 8c0c0328
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c0328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c0328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c068818(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c0328\n.set FUN_8c0c0328, FUN_8c0c0328_def\n");

}
//@unit 8c0c0368
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c0368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c0368");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0148(ar4 + 0x2e710,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x2e64c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0188(ar4 + 0x2e3a8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ffc1c(ar4 + 0x2de08,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c0328(ar4 + 0x2d59c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b334_m0_0bf38c(ar4 + 0x2d578,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b388_m0_0c5928(ar4 + 0x17c,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b350_m0_0baa08(ar4 + 0xc,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c0368\n.set FUN_8c0c0368, FUN_8c0c0368_def\n");

}
//@unit 8c0c0444
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Tmcpack_idx_0c0448_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Tmcpack_idx_0c0448");
  return (unsigned)sh4_interp(0x8c0c0444, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Tmcpack_idx_0c0448\n.set s_Tmcpack_idx_0c0448, s_Tmcpack_idx_0c0448_def\n");
}
//@unit 8c0c08ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 game_poll_exit_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_poll_exit");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_poll_device_state(0x8c3dd7dc,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2d620 + ar4) = uVar1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01f794(0x8c3eb334,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), pack_close_and_flush(0x8c2b59d0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f816c(0x8c35468c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c2c0c(0x8c2b5628,ar5,ar6,ar7));
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dd88 + 12 * *(le<int>* )(unsigned)(unsigned)(ar4 + 0x2dd84)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)(ar4 + 0x2d59c),ar6,ar7); }
  *(le<int>* )(unsigned)(0x2d59c + ar4) = *(le<int>* )(unsigned)(0x2d59c + ar4) + 1;
  *(le<undefined4>* )(unsigned)(0x2d624 + ar4) = *(le<undefined4>* )(unsigned)(0x2d620 + ar4);
  *(le<undefined4>* )(unsigned)0x8c431a50 = 0;
  if ((iVar2 == 1) || (*(le<int>* )(unsigned)(0x2dd78 + ar4) == 4)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl game_poll_exit\n.set game_poll_exit, game_poll_exit_def\n");

}
//@unit 8c0c09a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c09a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c09a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ab2c(ar4_00,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0c09a4\n.set FUN_8c0c09a4, FUN_8c0c09a4_def\n");

}
//@unit 8c0c09d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WARNING_0c09d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WARNING_0c09d0");
  return (unsigned)sh4_interp(0x8c0c09d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WARNING_0c09d0\n.set s_WARNING_0c09d0, s_WARNING_0c09d0_def\n");
}
//@unit 8c0c1cac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1cac_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1cac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c0c1cac\n.set FUN_8c0c1cac, FUN_8c0c1cac_def\n");

}
//@unit 8c0c1cb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1cb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1cb4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ee54(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c1cb4\n.set FUN_8c0c1cb4, FUN_8c0c1cb4_def\n");

}
//@unit 8c0c1cdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1cdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1cdc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0c1cdc\n.set FUN_8c0c1cdc, FUN_8c0c1cdc_def\n");

}
//@unit 8c0c1ce4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1ce4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1ce4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0c1ce4\n.set FUN_8c0c1ce4, FUN_8c0c1ce4_def\n");

}
//@unit 8c0c1cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0c1cec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0c1cec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0c1cec\n.set free_if_nonnull_wrap_0c1cec, free_if_nonnull_wrap_0c1cec_def\n");

}
//@unit 8c0c1d1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1d1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1d1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba324(ar4,0,0,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c1d1c\n.set FUN_8c0c1d1c, FUN_8c0c1d1c_def\n");

}
//@unit 8c0c1d40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1d40_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c1d40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dda0 + 12 * *(le<int>* )(unsigned)(unsigned)(ar4 + 0x2dd78)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }
  *(le<undefined4>* )(unsigned)0x8c2b5628 = *(le<undefined4>* )(unsigned)(0x88 + ar5);
  return 1;
}

__asm__(".globl FUN_8c0c1d40\n.set FUN_8c0c1d40, FUN_8c0c1d40_def\n");

}
//@unit 8c0c1d98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_0c1da0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_0c1da0");
  return (unsigned)sh4_interp(0x8c0c1d98, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_0c1da0\n.set s_SEAMAN_0c1da0, s_SEAMAN_0c1da0_def\n");
}
//@unit 8c0c2000
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c2000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c2000");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0xc) + 0xc))))((le<int>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c2000\n.set FUN_8c0c2000, FUN_8c0c2000_def\n");

}
//@unit 8c0c2020
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c2020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c2020");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x17c) + 0xc))))((le<int>* )(unsigned)(ar4 + 0x17c),ar5,ar6,ar7))
  ;
  return uVar1;
}

__asm__(".globl FUN_8c0c2020\n.set FUN_8c0c2020, FUN_8c0c2020_def\n");

}
//@unit 8c0c2044
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c2044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c2044");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x2d578) + 0xc))))((le<int>* )(unsigned)(ar4 + 0x2d578),ar5,ar6,ar7))
  ;
  return uVar1;
}

__asm__(".globl FUN_8c0c2044\n.set FUN_8c0c2044, FUN_8c0c2044_def\n");

}
//@unit 8c0c2068
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c2068_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c2068");
  return (unsigned)sh4_interp(0x8c0c2068, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c2068\n.set FUN_8c0c2068, FUN_8c0c2068_def\n");
}
//@unit 8c0c2324
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SEAMANDC_USR_0c2326_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SEAMANDC_USR_0c2326");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01bb00(ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76,ar6,ar7));
  return 4;
}

__asm__(".globl s_SEAMANDC_USR_0c2326\n.set s_SEAMANDC_USR_0c2326, s_SEAMANDC_USR_0c2326_def\n");

}
//@unit 8c0c236c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c236c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c236c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar5 < 0x19) {
    if (ar5 < 0x18) {
      if (0xe < ar5) {
        return ar5;
      }
      if (1 < ar5) {
                    
        switch((uint)ar5) {
        case 2:
          return 4;
        default:
          return ar5;
        case 4:
          return 8;
        case 5:
          return 10;
        case 7:
        case 9:
        case 0xb:
          goto switchD_8c0c2396_caseD_3;
        case 0xc:
          return 0xd;
        }
      }
      return ar5;
    }
  }
  else if (ar5 != 0x1a) {
    return ar5;
  }
switchD_8c0c2396_caseD_3:
  return 0xb;
}

__asm__(".globl FUN_8c0c236c\n.set FUN_8c0c236c, FUN_8c0c236c_def\n");

}
//@unit 8c0c23fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c23fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c23fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf7c8(ar4 + 0x2e710,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0c1ce4(ar4 + 0x2e710,ar7,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0c1cdc(ar4 + 0x2e710,1,ar6_00,ar7_00); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x2e75c) = 1;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x2e740,s4,ar6_00,ar7_00); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf780(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),s4,ar6_00,ar7_00));
  if (iVar1 == 1) {
    ar6 = 0x11;
  }
  return ar6;
}

__asm__(".globl FUN_8c0c23fc\n.set FUN_8c0c23fc, FUN_8c0c23fc_def\n");

}
//@unit 8c0c2490
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Mess_ICON00_pvr_0c2496_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Mess_ICON00_pvr_0c2496");
  return (unsigned)sh4_interp(0x8c0c2490, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Mess_ICON00_pvr_0c2496\n.set s_Mess_ICON00_pvr_0c2496, s_Mess_ICON00_pvr_0c2496_def\n");
}
//@unit 8c0c2c0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c2c0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c2c0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(0x384 + ar4);
  if (iVar1 != -1) {
    ar5_00 = *(le<undefined4>* )(unsigned)(0x384 + ar4);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021f18(0x8c2b59d0,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c3a14(ar4,ar5_00,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0c2c0c\n.set FUN_8c0c2c0c, FUN_8c0c2c0c_def\n");

}
//@unit 8c0c2c54
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c2c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c2c54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x384 + ar4) = 0xffffffff;
  iVar1 = 0x388;
  *(undefined1 *)(unsigned)(0x388 + ar4) = 0x30;
  return iVar1;
}

__asm__(".globl FUN_8c0c2c54\n.set FUN_8c0c2c54, FUN_8c0c2c54_def\n");

}
//@unit 8c0c2c6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_MESSAGE_0c2c72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_MESSAGE_0c2c72");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
    *(le<undefined4>* )(unsigned)(0x1cc + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 10;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x1c0,ar4 + 0x1c8,0x8c4312a8,10));
  iVar5 = ar4 + 0x1c0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 4) + 8))))((le<int>* )(unsigned)(ar4 + 4),iVar5,uVar1,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 4,iVar5,uVar1,uVar4));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaf2;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == -1) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa20,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x194,puVar2,puVar3,uVar1));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb1c;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb25,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x19c,puVar2,puVar3,uVar1));
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f;
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb47;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,puVar2,puVar3,uVar1));
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)(unsigned)0x1;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb50,puVar2,1,2));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x1a4,puVar2,puVar3,uVar1));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb72,
                     (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f,uVar1));
  if (iVar5 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb7b,
               (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01,1,2));
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    *(le<undefined4>* )(unsigned)(0x308 + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 3;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x328,ar4 + 0x304,0x8c4312a8,3));
  iVar5 = ar4 + 0x328;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x2bc) + 8))))((le<int>* )(unsigned)(ar4 + 0x2bc),iVar5,uVar1,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x2bc,iVar5,uVar1,uVar4));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb9d,
                     (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa0f,uVar1));
  if (iVar5 == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xba9,
               (&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xb01,1,2));
  }
  return 0;
}

__asm__(".globl s_GRAPHICS_MESSAGE_0c2c72\n.set s_GRAPHICS_MESSAGE_0c2c72, s_GRAPHICS_MESSAGE_0c2c72_def\n");

}
//@unit 8c0c2efc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WARNING_NOPAD_0c2f08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WARNING_NOPAD_0c2f08");
  return (unsigned)sh4_interp(0x8c0c2efc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WARNING_NOPAD_0c2f08\n.set s_WARNING_NOPAD_0c2f08, s_WARNING_NOPAD_0c2f08_def\n");
}
//@unit 8c0c3530
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3530_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3530");
  return (unsigned)sh4_interp(0x8c0c3530, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3530\n.set FUN_8c0c3530, FUN_8c0c3530_def\n");
}
//@unit 8c0c38d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_WARNING_NOPAD_0c38d6_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_WARNING_NOPAD_0c38d6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  
  ar5_00 = ar5;
  if (((int)ar5 < 7) && (0 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x1:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbb4);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbb4),ar6,ar7); });
      break;
    case 0x2:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbd0),ar6,ar7); });
      break;
    case 0x3:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbde),ar6,ar7); });
      break;
    case 0x4:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbc2);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbc2),ar6,ar7); });
      break;
    case 0x5:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbde),ar6,ar7); });
      break;
    case 0x6:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbd0),ar6,ar7); });
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 900) != -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c3a14(ar4,ar5_00,ar6,ar7));
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 900);
  if ((iVar1 == -1) && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x388), iVar1 != 0x30)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), pack_acquire_entry_handle(0x8c2b59d0,ar4 + 0x388,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 900) = uVar2;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021d90(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 900),0,0));
  }
  return iVar1;
}

__asm__(".globl s_WARNING_NOPAD_0c38d6\n.set s_WARNING_NOPAD_0c38d6, s_WARNING_NOPAD_0c38d6_def\n");

}
//@unit 8c0c3a14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c3a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c3a14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0x384 + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
              (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x384 + ar4),ar6,ar7));
    iVar1 = 0x384;
    *(le<undefined4>* )(unsigned)(0x384 + ar4) = 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0c3a14\n.set FUN_8c0c3a14, FUN_8c0c3a14_def\n");

}
//@unit 8c0c3a48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3a48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3a48");
  return (unsigned)sh4_interp(0x8c0c3a48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3a48\n.set FUN_8c0c3a48, FUN_8c0c3a48_def\n");
}
//@unit 8c0c3aac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3aac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3aac");
  return (unsigned)sh4_interp(0x8c0c3aac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3aac\n.set FUN_8c0c3aac, FUN_8c0c3aac_def\n");
}
//@unit 8c0c3b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3b10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3b10");
  return (unsigned)sh4_interp(0x8c0c3b10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3b10\n.set FUN_8c0c3b10, FUN_8c0c3b10_def\n");
}
//@unit 8c0c3b74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3b74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3b74");
  return (unsigned)sh4_interp(0x8c0c3b74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3b74\n.set FUN_8c0c3b74, FUN_8c0c3b74_def\n");
}
//@unit 8c0c3e78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c3e78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c3e78");
  return (unsigned)sh4_interp(0x8c0c3e78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c3e78\n.set FUN_8c0c3e78, FUN_8c0c3e78_def\n");
}
//@unit 8c0c412c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c412c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c412c");
  return (unsigned)sh4_interp(0x8c0c412c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c412c\n.set FUN_8c0c412c, FUN_8c0c412c_def\n");
}
//@unit 8c0c42b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c42b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c42b0");
  return (unsigned)sh4_interp(0x8c0c42b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c42b0\n.set FUN_8c0c42b0, FUN_8c0c42b0_def\n");
}
//@unit 8c0c4370
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c4370_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c4370");
  return (unsigned)sh4_interp(0x8c0c4370, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c4370\n.set FUN_8c0c4370, FUN_8c0c4370_def\n");
}
//@unit 8c0c453c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c453c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c453c");
  return (unsigned)sh4_interp(0x8c0c453c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c453c\n.set FUN_8c0c453c, FUN_8c0c453c_def\n");
}
//@unit 8c0c461c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_8_0c461c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_8_0c461c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_0c461c\n.set get_field_8_0c461c, get_field_8_0c461c_def\n");

}
//@unit 8c0c4624
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c4624_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c4624");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c4624\n.set ret_const_0_0c4624, ret_const_0_0c4624_def\n");

}
//@unit 8c0c462c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c462c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c462c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c462c\n.set ret_const_0_0c462c, ret_const_0_0c462c_def\n");

}
//@unit 8c0c4634
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_8_0c4634_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_8_0c4634");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_0c4634\n.set get_field_8_0c4634, get_field_8_0c4634_def\n");

}
//@unit 8c0c463c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c463c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c463c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c463c\n.set ret_const_0_0c463c, ret_const_0_0c463c_def\n");

}
//@unit 8c0c4644
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c4644_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c4644");
  return (unsigned)sh4_interp(0x8c0c4644, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c4644\n.set FUN_8c0c4644, FUN_8c0c4644_def\n");
}
//@unit 8c0c491c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c491c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c491c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0xc;
    ar6_00 = 0x80;
    ar5_00 = ((void *)0x8c0ba1f4);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); vec_delete_array(ar4,((void *)0x8c0ba1f4),0x80,0xc); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c491c\n.set FUN_8c0c491c, FUN_8c0c491c_def\n");

}
//@unit 8c0c4968
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4968");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x2794,((void *)0x8c0ba180),0xf0,10); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x14c4,((void *)0x8c0ba180),0xf0,0x14); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x1ec,((void *)0x8c0ba180),0xf0,0x14); });
    ar7_00 = 3;
    ar6_00 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x1bc,((void *)0x8c022cb0),0x10,3); });
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ba180(ar4 + 0xb0,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4968\n.set FUN_8c0c4968, FUN_8c0c4968_def\n");

}
//@unit 8c0c4a14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0c4a14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0c4a14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0c4a14\n.set free_if_nonnull_wrap_0c4a14, free_if_nonnull_wrap_0c4a14_def\n");

}
//@unit 8c0c4a44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4a44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar7_00 = 0x96;
    ar6_00 = 0x5c;
    ar5_00 = ((void *)0x8c0c4a90);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); vec_delete_array(ar4,((void *)0x8c0c4a90),0x5c,0x96); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4a44\n.set FUN_8c0c4a44, FUN_8c0c4a44_def\n");

}
//@unit 8c0c4a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4a90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4a90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4a90\n.set FUN_8c0c4a90, FUN_8c0c4a90_def\n");

}
//@unit 8c0c4ad0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4ad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4b3c(ar4 + 0x2c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x18,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4ad0\n.set FUN_8c0c4ad0, FUN_8c0c4ad0_def\n");

}
//@unit 8c0c4b3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0c4b3c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4b3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12984c);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_015c94(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4b3c\n.set FUN_8c0c4b3c, FUN_8c0c4b3c_def\n");

}
//@unit 8c0c4b84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4b84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 700,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x1ac,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x1a4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x19c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x194,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x20,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c4b84\n.set FUN_8c0c4b84, FUN_8c0c4b84_def\n");

}
//@unit 8c0c4c3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4c3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4c3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286e8c,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0c4c3c\n.set FUN_8c0c4c3c, FUN_8c0c4c3c_def\n");

}
//@unit 8c0c4c60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4c60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286e5c,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0c4c60\n.set FUN_8c0c4c60, FUN_8c0c4c60_def\n");

}
//@unit 8c0c4c84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4c84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4c84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar4,ar5,ar6,ar7));
  if (((iVar1 != 0xf) && (iVar1 != 0x10)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7)), iVar1 != 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c0c4c84\n.set FUN_8c0c4c84, FUN_8c0c4c84_def\n");

}
//@unit 8c0c4cd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c4cd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c4cd8");
  return (unsigned)sh4_interp(0x8c0c4cd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c4cd8\n.set FUN_8c0c4cd8, FUN_8c0c4cd8_def\n");
}
//@unit 8c0c4d70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4d70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4d70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x380;
  *(le<undefined2>* )(unsigned)(0x380 + ar4) = (undefined2)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0c4d70\n.set FUN_8c0c4d70, FUN_8c0c4d70_def\n");

}
//@unit 8c0c4d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4d7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4d7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  return ar5;
}

__asm__(".globl FUN_8c0c4d7c\n.set FUN_8c0c4d7c, FUN_8c0c4d7c_def\n");

}
//@unit 8c0c4da0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4da0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4da0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0c4dc8(ar5,*(le<undefined4>* )(unsigned)(ar4 + 0x24),ar6,ar7); });
  return ar5;
}

__asm__(".globl FUN_8c0c4da0\n.set FUN_8c0c4da0, FUN_8c0c4da0_def\n");

}
//@unit 8c0c4dc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4dc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0c4dc8\n.set FUN_8c0c4dc8, FUN_8c0c4dc8_def\n");

}
//@unit 8c0c4dd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4dd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  iVar2 = (int)(short)uVar1;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035bc8(ar5,ar5_00,ar6,ar7));
  }
  else if (iVar2 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0996c4(ar5,ar5_00,ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl FUN_8c0c4dd0\n.set FUN_8c0c4dd0, FUN_8c0c4dd0_def\n");

}
//@unit 8c0c4e2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4e2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)0x8c436924 = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e48(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c4e2c\n.set FUN_8c0c4e2c, FUN_8c0c4e2c_def\n");

}
//@unit 8c0c4e48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c4e48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c4e48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)0x8c436928 = 1;
  return 1;
}

__asm__(".globl FUN_8c0c4e48\n.set FUN_8c0c4e48, FUN_8c0c4e48_def\n");

}
//@unit 8c0c4e58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c4e58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c4e58");
  return (unsigned)sh4_interp(0x8c0c4e58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c4e58\n.set FUN_8c0c4e58, FUN_8c0c4e58_def\n");
}
//@unit 8c0c5198
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c5198_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c5198");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c5198\n.set noop_0c5198, noop_0c5198_def\n");

}
//@unit 8c0c519c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c519c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c519c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c519c\n.set noop_0c519c, noop_0c519c_def\n");

}
//@unit 8c0c51a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c51a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c51a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined2>* )(unsigned)(0x18c + ar4) = 0x78;
  iVar1 = 0x188;
  *(le<undefined4>* )(unsigned)(0x188 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0c51a0\n.set FUN_8c0c51a0, FUN_8c0c51a0_def\n");

}
//@unit 8c0c51b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c51b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c51b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xd0;
  *(le<undefined4>* )(unsigned)(0xd0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0c51b8\n.set FUN_8c0c51b8, FUN_8c0c51b8_def\n");

}
//@unit 8c0c51c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c51c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c51c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10168c(ar4,ar5,ar6,ar7));
  *(le<undefined2>* )(unsigned)(0x18c + ar4) = 0x78;
  iVar1 = 0x188;
  *(le<undefined4>* )(unsigned)(0x188 + ar4) = 6;
  return iVar1;
}

__asm__(".globl FUN_8c0c51c4\n.set FUN_8c0c51c4, FUN_8c0c51c4_def\n");

}
//@unit 8c0c51f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c51f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c51f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c51f4\n.set ret_const_0_0c51f4, ret_const_0_0c51f4_def\n");

}
//@unit 8c0c51fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_d0_0c51fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_d0_0c51fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xd0 + ar4);
}

__asm__(".globl get_field_d0_0c51fc\n.set get_field_d0_0c51fc, get_field_d0_0c51fc_def\n");

}
//@unit 8c0c5208
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c5208_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c5208");
  return (unsigned)sh4_interp(0x8c0c5208, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c5208\n.set FUN_8c0c5208, FUN_8c0c5208_def\n");
}
//@unit 8c0c524c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c524c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c524c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  *(le<undefined2>* )(unsigned)(ar4 + 0x10) = 0x78;
  return ar4;
}

__asm__(".globl FUN_8c0c524c\n.set FUN_8c0c524c, FUN_8c0c524c_def\n");

}
//@unit 8c0c526c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c526c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c526c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5304(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0c526c\n.set FUN_8c0c526c, FUN_8c0c526c_def\n");

}
//@unit 8c0c5294
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c5294_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c5294");
  return (unsigned)sh4_interp(0x8c0c5294, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c5294\n.set FUN_8c0c5294, FUN_8c0c5294_def\n");
}
//@unit 8c0c52fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c52fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c52fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl FUN_8c0c52fc\n.set FUN_8c0c52fc, FUN_8c0c52fc_def\n");

}
//@unit 8c0c5304
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c5304_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c5304");
  return (unsigned)sh4_interp(0x8c0c5304, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c5304\n.set FUN_8c0c5304, FUN_8c0c5304_def\n");
}
//@unit 8c0c5314
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c5314_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c5314");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5330(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0c5314\n.set FUN_8c0c5314, FUN_8c0c5314_def\n");

}
//@unit 8c0c5330
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c5330_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c5330");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 3;
  ar4[2] = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl FUN_8c0c5330\n.set FUN_8c0c5330, FUN_8c0c5330_def\n");

}
//@unit 8c0c5340
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0c5340_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c5340");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba898(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b388));
  (vsp = ((unsigned long)(fr0_ - 0)), s_WaterTank_0dcaa2(ar4 + 6,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_SoilTank_0e437e((int)ar4 + 0x232a0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Outside_0e5e56((int)ar4 + 0x24898,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_INCUBATOR_0e74ae((int)ar4 + 0x2ccac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5314((int)ar4 + 0x2d1b0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x2d3b0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224((int)ar4 + 0x2d3f4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ce920(ar4,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cbfc));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d170);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cbfc)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbfc));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc08));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d17c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc08)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc08));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc14));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d188);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc14)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc14));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc20));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d194);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc20)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc20));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc2c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1a0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc2c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc2c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc38));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1bc);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc38)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc38));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc44));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1ec);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc44)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc44));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc50));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d21c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc50)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc50));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc5c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d24c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc5c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc5c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc68));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d27c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc68)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc68));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc74));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2ac);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc74)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc74));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc80));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2dc);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc80)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc80));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc8c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d30c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc8c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc8c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cc98));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d33c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cc98)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cc98));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cca4));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d36c);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cca4)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cca4));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccb0));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1c8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccb0)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccb0));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccbc));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1f8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccbc)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccbc));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccc8));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d228);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccc8)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccc8));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccd4));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d258);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccd4)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccd4));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cce0));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d288);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cce0)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cce0));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccec));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2b8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccec)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccec));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13ccf8));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2e8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13ccf8)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13ccf8));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd04));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d318);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd04)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd04));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd10));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d348);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd10)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd10));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd1c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d378);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd1c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd1c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd28));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1d4);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd28)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd28));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd34));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d204);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd34)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd34));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd40));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d234);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd40)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd40));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd4c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d264);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd4c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd4c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd58));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d294);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd58)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd58));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd64));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2c4);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd64)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd64));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd70));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2f4);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd70)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd70));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd7c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d324);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd7c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd7c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd88));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d354);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd88)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd88));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cd94));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d384);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cd94)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cd94));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cda0));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d1e0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cda0)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cda0));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d210);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cdac));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d240);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cdac)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cdac));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d270);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cdb8));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2a0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cdb8)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cdb8));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d2d0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d300);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d330);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13cdc4));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d360);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13cdc4)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cdc4));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2d390);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c125408)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c125408));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  ar4[2] = ar4 + 6;
  ar4[3] = (int)ar4 + 0x232a0;
  ar4[4] = (int)ar4 + 0x24898;
  ar4[5] = (int)ar4 + 0x2ccac;
  return ar4;
}

__asm__(".globl FUN_8c0c5340\n.set FUN_8c0c5340, FUN_8c0c5340_def\n");

}
//@unit 8c0c58f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0c58f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0c58f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0c58f8\n.set free_if_nonnull_wrap_0c58f8, free_if_nonnull_wrap_0c58f8_def\n");

}
//@unit 8c0c5928
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12b388_m0_0c5928_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b388_m0_0c5928");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b388);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0xb4fd,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xb4ec,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0c58f8(ar4 + 0xb46c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b3b8_m0_0e77ec(ar4 + 0xb32b,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b580_m0_0e61f4(ar4 + 0x9226,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b758_m0_0e46cc(ar4 + 0x8ca8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b930_m0_0dde84(ar4 + 6,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b388_m0_0c5928\n.set Class_12b388_m0_0c5928, Class_12b388_m0_0c5928_def\n");

}
//@unit 8c0c5a04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_MESSAGE_0c5a08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_MESSAGE_0c5a08");
  return (unsigned)sh4_interp(0x8c0c5a04, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_MESSAGE_0c5a08\n.set s_GRAPHICS_MESSAGE_0c5a08, s_GRAPHICS_MESSAGE_0c5a08_def\n");
}
//@unit 8c0c5c08
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b388_m1_0c5c08_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b388_m1_0c5c08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0x2d15c + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d15c + ar4))) << 2) + ar4) + 0x2d170)),ar4,ar5,ar6,ar7); }));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ad88(uVar2,ar5_00,ar6,ar7));
  iVar4 = 1;
  if ((((iVar3 == 1) ||
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffff4(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7)),
       iVar4 != 1)) || (iVar4 = *(le<int>* )(unsigned)(0x2d164 + ar4), iVar4 != 0)) && (iVar1 != 0)) {
    return iVar4;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5cb4(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl Class_12b388_m1_0c5c08\n.set Class_12b388_m1_0c5c08, Class_12b388_m1_0c5c08_def\n");

}
//@unit 8c0c5cb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c5cb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c5cb4");
  return (unsigned)sh4_interp(0x8c0c5cb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c5cb4\n.set FUN_8c0c5cb4, FUN_8c0c5cb4_def\n");
}
//@unit 8c0c5db0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c5db0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c5db0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5dd8(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c5db0\n.set FUN_8c0c5db0, FUN_8c0c5db0_def\n");

}
//@unit 8c0c5dd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c5dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c5dd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)(ar4 + 4);
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  return uVar1;
}

__asm__(".globl FUN_8c0c5dd8\n.set FUN_8c0c5dd8, FUN_8c0c5dd8_def\n");

}
//@unit 8c0c5de8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_wtNumberOfItems_is_over_CGam_0c5df6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_wtNumberOfItems_is_over_CGam_0c5df6");
  return (unsigned)sh4_interp(0x8c0c5de8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_wtNumberOfItems_is_over_CGam_0c5df6\n.set s_wtNumberOfItems_is_over_CGam_0c5df6, s_wtNumberOfItems_is_over_CGam_0c5df6_def\n");
}
//@unit 8c0c67dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c67dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c67dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c67dc\n.set ret_const_0_0c67dc, ret_const_0_0c67dc_def\n");

}
//@unit 8c0c67e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c67e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c67e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c67e4\n.set ret_const_0_0c67e4, ret_const_0_0c67e4_def\n");

}
//@unit 8c0c67ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c67ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c67ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c67ec\n.set ret_const_0_0c67ec, ret_const_0_0c67ec_def\n");

}
//@unit 8c0c67f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c67f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c67f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  int iVar3;
  
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0b9d14(ar5,ar6 + 0x14,ar6,ar7));
  iVar2 = ar6 + 0x1e;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0b9d14(ar5,iVar2,ar6_00,ar7));
  *(le<undefined2>* )(unsigned)(ar6 + 0x28) = 0;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined1 *)(unsigned)(ar6 + iVar3 + 0x2a) = 0;
  }
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    *(le<undefined2>* )(unsigned)(iVar3 * 10 + ar6 + 0x32) = 0;
    *(undefined1 *)(unsigned)(iVar3 * 10 + ar6 + 0x34) = 0;
    *(undefined1 *)(unsigned)(iVar3 * 10 + ar6 + 0x35) = 0;
    *(undefined1 *)(unsigned)(iVar3 * 10 + ar6 + 0x36) = 0;
    *(undefined1 *)(unsigned)(iVar3 * 10 + ar6 + 0x37) = 0;
    *(undefined1 *)(unsigned)(iVar3 * 10 + ar6 + 0x38) = 0;
  }
  *(undefined1 *)(unsigned)(ar6 + 0x50) = 0;
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    *(le<undefined4>* )(unsigned)(ar6 + iVar3 * 4 + 0x54) = 0;
  }
  for (iVar3 = 0; iVar3 < 0x3e; iVar3 = iVar3 + 1) {
    *(undefined1 *)(unsigned)(ar6 + iVar3 + 0x68) = 0;
  }
  *(undefined1 *)(unsigned)(0xa8 + ar6) = *(le<undefined4>* )(unsigned)0x8c436548;
  *(le<undefined4>* )(unsigned)(0xac + ar6) = 0;
  *(le<undefined4>* )(unsigned)(0xc8 + ar6) = 0xffffffff;
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(le<undefined4>* )(unsigned)(0x204 + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 0x14; iVar3 = iVar3 + 1) {
    *(le<undefined4>* )(unsigned)(0x14dc + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    *(le<undefined4>* )(unsigned)(0x27ac + iVar3 * 0xf0 + ar6) = 0xffffffff;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d1d54(ar6,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e98f8(ar6 + 0x14ac,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d1eb8(ar6,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e98f8(ar6 + 0x2784,iVar2,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d1f38(ar6,iVar2,ar6_00,ar7));
  iVar2 = ar6 + 0x30f4;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fa2f0(0x8c35468c,iVar2,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01f528(0x8c3dd7dc,iVar2,ar6_00,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01e028(uVar1,ar6 + 0x4104,ar6_00,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0c67f4\n.set FUN_8c0c67f4, FUN_8c0c67f4_def\n");

}
//@unit 8c0c6a44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0c6a44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0c6a44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0c6a44\n.set ret_const_1_0c6a44, ret_const_1_0c6a44_def\n");

}
//@unit 8c0c6a4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c6a4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c6a4c");
  return (unsigned)sh4_interp(0x8c0c6a4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c6a4c\n.set FUN_8c0c6a4c, FUN_8c0c6a4c_def\n");
}
//@unit 8c0c6ac8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_COMMON_0c6ad0_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_COMMON_0c6ad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar4_00;
  undefined4 uVar4;
  le<undefined*>* ar5_00;
  undefined4 uVar5;
  char *ar6_00;
  
  uVar5 = 1;
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c3e78(((undefined1 *)(unsigned)0x8c2b5628),0xffffffff,1,ar7));
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x2d3a0);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      iVar3 = ar5[499];
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1011e0(iVar3,uVar4,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0242e8(iVar3,uVar4,uVar5,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c431a54) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c13bcc4) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c436924) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c436928) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c015ad4(0x8c43690c,((undefined1 *)(unsigned)0x8c1622a4),uVar5,ar7); });
      ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c146440));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); Class_129920_m0_015248(0x8c43691c,&(*(le<undefined4>* )(unsigned)(unsigned)0x8c146440),uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_4_0253e4(0x8c43691c,ar5_00,uVar5,ar7));
      ar6_00 = ((undefined1 *)(unsigned)0x8c13d004);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c020ef0(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d107),((undefined1 *)(unsigned)0x8c13d004),uVar4));
      if (iVar3 == 0) {
        uVar4 = 2;
        ar6_00 = (char *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 56)), report_error_message(((undefined1 *)(unsigned)0x8c13d112),((undefined1 *)(unsigned)0x8c13d12c),0,2));
      }
      uVar5 = 0;
      ar4_00 = ((undefined1 *)(unsigned)0x8c2b5628);
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c4d70(((undefined1 *)(unsigned)0x8c2b5628),0,ar6_00,uVar4));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c06a524(ar4_00,uVar5,ar6_00,uVar4));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 1;
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_a510_01f538(0x8c3dd7dc,uVar4,uVar5,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7920(uVar1,uVar4,uVar5,ar7));
      if (iVar3 == 1) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), s_SEAMANDC_USR_0b76dc(uVar1,uVar4,uVar5,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b787c(uVar1,uVar4,uVar5,ar7));
        if (iVar3 == 1) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c43711c) = *ar5;
          *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 2;
        }
      }
      break;
    case 2:
      if (3 < (uint)(*ar5 - (*(le<undefined4>* )(unsigned)(unsigned)0x8c43711c))) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 3;
      }
      break;
    case 3:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13d13d),0x8c431a68,0x4208,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13d14a),0x8c435c7c,0x600,ar7));
      if ((iVar3 == 0) && (iVar2 == 0)) {
        uVar4 = 0x8c431a68;
        (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0cc784(ar4,ar5,0x8c431a68,ar7));
        (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0xc0))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c435c7c,uVar4,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 4;
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 1;
      }
      break;
    case 4:
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c258e0a(((void *)0x8c0d1c3c),uVar4,uVar5,ar7); });
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b9230(ar5,uVar4,uVar5,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d15c) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 0;
    }
  }
  return 1;
}

__asm__(".globl s_GRAPHICS_COMMON_0c6ad0\n.set s_GRAPHICS_COMMON_0c6ad0, s_GRAPHICS_COMMON_0c6ad0_def\n");

}
//@unit 8c0c6d68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0c6d68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0c6d68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0c6d68\n.set ret_const_1_0c6d68, ret_const_1_0c6d68_def\n");

}
//@unit 8c0c6d70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c6d70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c6d70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar4_00;
  int ar5_00;
  
  ar4_00 = ar4;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((((*(le<int>* )(unsigned)((0x2d160 + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d160 + ar4))) << 2) << 2) + ar4) + (((((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff) << 1) + ((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff)) << 2)) + 0x2d1bc)),ar4,ar5,ar6,ar7); }));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_SEAMANDC_USR_0b76dc(ar4_00,ar5_00,ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x2d16c + ar4) = uVar2;
    if (*(le<int>* )(unsigned)(0x2d16c + ar4) == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b77a0(ar5 + 0x96,ar5_00,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x2d168 + ar4) = uVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1c14((uint)*(byte *)(unsigned)(0xa0 + ar5),ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((((*(le<int>* )(unsigned)((0x2d160 + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d160 + ar4))) << 2) << 2) + ar4) + (((((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff) << 1) + ((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff)) << 2)) + 0x2d21c)),ar4,ar5,ar6,ar7); }));
    *(le<undefined4>* )(unsigned)(0x2d15c + ar4) = 2;
  }
  return 1;
}

__asm__(".globl FUN_8c0c6d70\n.set FUN_8c0c6d70, FUN_8c0c6d70_def\n");

}
//@unit 8c0c6e74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_0c6e7e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_0c6e7e");
  return (unsigned)sh4_interp(0x8c0c6e74, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_0c6e7e\n.set s_SEAMAN_0c6e7e, s_SEAMAN_0c6e7e_def\n");
}
//@unit 8c0c7424
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_d4_0c7424_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_d4_0c7424");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xd4 + ar4);
}

__asm__(".globl get_field_d4_0c7424\n.set get_field_d4_0c7424, get_field_d4_0c7424_def\n");

}
//@unit 8c0c7430
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c7430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c7430");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c7430\n.set noop_0c7430, noop_0c7430_def\n");

}
//@unit 8c0c7434
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c7434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c7434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c7434\n.set noop_0c7434, noop_0c7434_def\n");

}
//@unit 8c0c7438
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c7438_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c7438");
  return (unsigned)sh4_interp(0x8c0c7438, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c7438\n.set FUN_8c0c7438, FUN_8c0c7438_def\n");
}
//@unit 8c0c75f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c75f4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c75f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  uint a5;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  a5 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
  piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0x78))))(piVar2,a5,ar6,ar7));
  if ((*(le<int>* )(unsigned)(0x2d15c + ar4) != 0) && (*(le<int>* )(unsigned)(0x2d15c + ar4) != 1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                      (*(le<undefined4>* )(unsigned)(0x7cc + ar5),a5,ar6,ar7));
    piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x9c + *piVar2))))(piVar2,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((((*(le<int>* )(unsigned)((0x2d160 + ar4)) << 1) + *(le<int>* )(unsigned)((0x2d160 + ar4))) << 2) << 2) + ar4) + (((((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff) << 1) + ((*(signed char *)(unsigned)((0xa0 + ar5)) & 0xff) & 0xff)) << 2)) + 0x2d33c)),ar4,ar5,ar6,ar7); }));
  return 1;
}

__asm__(".globl FUN_8c0c75f4\n.set FUN_8c0c75f4, FUN_8c0c75f4_def\n");

}
//@unit 8c0c76d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WARNING_EXIT_0c76d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WARNING_EXIT_0c76d0");
  return (unsigned)sh4_interp(0x8c0c76d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WARNING_EXIT_0c76d0\n.set s_WARNING_EXIT_0c76d0, s_WARNING_EXIT_0c76d0_def\n");
}
//@unit 8c0c8024
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0c8024_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8024");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eedc(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c0c8024\n.set FUN_8c0c8024, FUN_8c0c8024_def\n");

}
//@unit 8c0c8058
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c8058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8058");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 != 2)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01edcc(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

__asm__(".globl FUN_8c0c8058\n.set FUN_8c0c8058, FUN_8c0c8058_def\n");

}
//@unit 8c0c80bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c80bc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c80bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined2>* )(unsigned)(0x2d1ac + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x1c))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x98 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))
            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x70))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c80bc\n.set FUN_8c0c80bc, FUN_8c0c80bc_def\n");

}
//@unit 8c0c812c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c812c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c812c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c812c\n.set noop_0c812c, noop_0c812c_def\n");

}
//@unit 8c0c8130
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c8130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c8130");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c8130\n.set noop_0c8130, noop_0c8130_def\n");

}
//@unit 8c0c8134
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_SM_0c813c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_SM_0c813c");
  return (unsigned)sh4_interp(0x8c0c8134, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_SM_0c813c\n.set s_SEAMAN_SM_0c813c, s_SEAMAN_SM_0c813c_def\n");
}
//@unit 8c0c8460
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c8460_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c8460");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c8460\n.set noop_0c8460, noop_0c8460_def\n");

}
//@unit 8c0c8464
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c8464_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8464");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)(0xd4 + ar4);
  *(le<undefined4>* )(unsigned)(0xd4 + ar4) = 0;
  return uVar1;
}

__asm__(".globl FUN_8c0c8464\n.set FUN_8c0c8464, FUN_8c0c8464_def\n");

}
//@unit 8c0c847c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c847c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c847c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c847c\n.set noop_0c847c, noop_0c847c_def\n");

}
//@unit 8c0c8480
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c8480_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0c8480\n.set FUN_8c0c8480, FUN_8c0c8480_def\n");

}
//@unit 8c0c84cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0c84cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c84cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0c84cc\n.set FUN_8c0c84cc, FUN_8c0c84cc_def\n");

}
//@unit 8c0c84f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c84f4_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("FUN_8c0c84f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c102748(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c7424))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86d4(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86c0(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c8698(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x30));
      ar6 = ((undefined1 *)(fr0_ - 0x38));
      ar5_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff54(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb0 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff84(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                      (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x48))))(piVar3,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0cc524(ar4,iVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c84f4\n.set FUN_8c0c84f4, FUN_8c0c84f4_def\n");

}
//@unit 8c0c868c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c868c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c868c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c868c\n.set noop_0c868c, noop_0c868c_def\n");

}
//@unit 8c0c8690
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0c8690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0c8690");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0c8690\n.set ret_const_1_0c8690, ret_const_1_0c8690_def\n");

}
//@unit 8c0c8698
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c8698_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8698");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ((le<undefined4>* )(unsigned)(ar4 + 0x94))[1];
  *ar5 = *(le<undefined4>* )(unsigned)(ar4 + 0x94);
  ar5[1] = uVar1;
  uVar1 = ((le<undefined4>* )(unsigned)(ar4 + 0x9c))[1];
  ar5[2] = *(le<undefined4>* )(unsigned)(ar4 + 0x9c);
  ar5[3] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0c8698\n.set FUN_8c0c8698, FUN_8c0c8698_def\n");

}
//@unit 8c0c86c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c86c0_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c86c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ((le<undefined4>* )(unsigned)(ar4 + 0x8c))[1];
  *ar5 = *(le<undefined4>* )(unsigned)(ar4 + 0x8c);
  ar5[1] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0c86c0\n.set FUN_8c0c86c0, FUN_8c0c86c0_def\n");

}
//@unit 8c0c86d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c86d4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c86d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* puVar2;
  
  puVar2 = (le<undefined4>* )(unsigned)(ar4 + 0x80);
  uVar1 = puVar2[1];
  *ar5 = *puVar2;
  ar5[1] = uVar1;
  uVar1 = puVar2[2];
  ar5[2] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0c86d4\n.set FUN_8c0c86d4, FUN_8c0c86d4_def\n");

}
//@unit 8c0c86f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c86f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c86f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,0,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,0,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c86f4\n.set FUN_8c0c86f4, FUN_8c0c86f4_def\n");

}
//@unit 8c0c8754
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c8754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c8754");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c8754\n.set noop_0c8754, noop_0c8754_def\n");

}
//@unit 8c0c8758
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_BUGBOX_3_0c8762_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_BUGBOX_3_0c8762");
  return (unsigned)sh4_interp(0x8c0c8758, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_BUGBOX_3_0c8762\n.set s_BUGBOX_3_0c8762, s_BUGBOX_3_0c8762_def\n");
}
//@unit 8c0c8c28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_BUGBOX_4_0c8c30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_BUGBOX_4_0c8c30");
  return (unsigned)sh4_interp(0x8c0c8c28, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_BUGBOX_4_0c8c30\n.set s_BUGBOX_4_0c8c30, s_BUGBOX_4_0c8c30_def\n");
}
//@unit 8c0c8f50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c8f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c8f50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c8f50\n.set noop_0c8f50, noop_0c8f50_def\n");

}
//@unit 8c0c8f54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c8f54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c8f54");
  return (unsigned)sh4_interp(0x8c0c8f54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c8f54\n.set FUN_8c0c8f54, FUN_8c0c8f54_def\n");
}
//@unit 8c0c8f64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c8f64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c8f64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                      (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c0c8f64\n.set FUN_8c0c8f64, FUN_8c0c8f64_def\n");

}
//@unit 8c0c8fc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c8fc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c8fc4");
  return (unsigned)sh4_interp(0x8c0c8fc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c8fc4\n.set FUN_8c0c8fc4, FUN_8c0c8fc4_def\n");
}
//@unit 8c0c90d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c90d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c90d0");
  return (unsigned)sh4_interp(0x8c0c90d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c90d0\n.set FUN_8c0c90d0, FUN_8c0c90d0_def\n");
}
//@unit 8c0c90ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c90ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c90ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c86f4(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)) != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
              (0x8c2b59d0,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)),ar6,ar7));
    *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13cbf4)) = 0xffffffff;
  }
  if (2 < *(le<short>* )(unsigned)(0x2d1ac + ar4)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,1,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c0c90ec\n.set FUN_8c0c90ec, FUN_8c0c90ec_def\n");

}
//@unit 8c0c9174
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c9174_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c9174");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined2>* )(unsigned)(0x2d1ac + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x20))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x98 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))
            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x70))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),1,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c9174\n.set FUN_8c0c9174, FUN_8c0c9174_def\n");

}
//@unit 8c0c91f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c91f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c91f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c91f0\n.set noop_0c91f0, noop_0c91f0_def\n");

}
//@unit 8c0c91f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_SM_0c91fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_SM_0c91fc");
  return (unsigned)sh4_interp(0x8c0c91f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_SM_0c91fc\n.set s_SEAMAN_SM_0c91fc, s_SEAMAN_SM_0c91fc_def\n");
}
//@unit 8c0c9588
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c9588_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("FUN_8c0c9588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c102748(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c7424))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86d4(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86c0(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c8698(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x30));
      ar6 = ((undefined1 *)(fr0_ - 0x38));
      ar5_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff54(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb0 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x34))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
    }
    else if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),ar5_00,ar6,ar7));
    }
    else if (iVar1 == 3) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff84(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x48))))(piVar3,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0cc524(ar4,iVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c9588\n.set FUN_8c0c9588, FUN_8c0c9588_def\n");

}
//@unit 8c0c972c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c972c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c972c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c972c\n.set noop_0c972c, noop_0c972c_def\n");

}
//@unit 8c0c9738
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c9738_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0c9738");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,1,ar7));
  return 0;
}

__asm__(".globl FUN_8c0c9738\n.set FUN_8c0c9738, FUN_8c0c9738_def\n");

}
//@unit 8c0c97bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0c97c4_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0c97c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c51c4(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x138 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1006bc(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  }
  if (iVar1 != 0) {
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x78))))(piVar3,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c51b8(*(le<undefined4>* )(unsigned)(0x7cc + ar5),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x70))))
              (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021720(0x8c2b59d0,1,ar6,ar7));
    ar6 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d1c20))))
              (*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),*(le<undefined4>* )(unsigned)(ar4 + 8),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x84 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2d1b0 + ar4) = 2;
  *(le<undefined4>* )(unsigned)(0x2d1b4 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0209b0))))
            (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,
             (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be,((le<undefined4>* )(fr0_ - 0x18))));
  return 0;
}

__asm__(".globl s_GRAPHICS_ENV_0c97c4\n.set s_GRAPHICS_ENV_0c97c4, s_GRAPHICS_ENV_0c97c4_def\n");

}
//@unit 8c0c990c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c990c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c990c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c990c\n.set noop_0c990c, noop_0c990c_def\n");

}
//@unit 8c0c9910
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_ff_0c9910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_ff_0c9910");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0xff;
}

__asm__(".globl ret_const_ff_0c9910\n.set ret_const_ff_0c9910, ret_const_ff_0c9910_def\n");

}
//@unit 8c0c991c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_44_OUTWATERCAT_0c9920_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_44_OUTWATERCAT_0c9920");
  return (unsigned)sh4_interp(0x8c0c991c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_44_OUTWATERCAT_0c9920\n.set s_44_OUTWATERCAT_0c9920, s_44_OUTWATERCAT_0c9920_def\n");
}
//@unit 8c0c9ed0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c9ed0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c9ed0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c9ed0\n.set noop_0c9ed0, noop_0c9ed0_def\n");

}
//@unit 8c0c9ed4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0c9ed4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0c9ed4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0c9ed4\n.set noop_0c9ed4, noop_0c9ed4_def\n");

}
//@unit 8c0c9ed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0c9ed8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0c9ed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0c9ed8\n.set ret_const_0_0c9ed8, ret_const_0_0c9ed8_def\n");

}
//@unit 8c0c9ee0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0c9ee0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0c9ee0");
  return (unsigned)sh4_interp(0x8c0c9ee0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0c9ee0\n.set FUN_8c0c9ee0, FUN_8c0c9ee0_def\n");
}
//@unit 8c0ca0dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0ca0dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0ca0dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0ca0dc\n.set noop_0ca0dc, noop_0ca0dc_def\n");

}
//@unit 8c0ca0e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0ca0e6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0ca0e6");
  return (unsigned)sh4_interp(0x8c0ca0e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0ca0e6\n.set s_GRAPHICS_ENV_0ca0e6, s_GRAPHICS_ENV_0ca0e6_def\n");
}
//@unit 8c0ca228
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0ca228_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0ca228");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0ca228\n.set noop_0ca228, noop_0ca228_def\n");

}
//@unit 8c0ca22c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0ca230_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0ca230");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  ar5_00 = ar5;
  if (*(le<int>* )(unsigned)(0x2d1b8 + ar4) != -1) {
    ar5_00 = *(le<undefined4>* )(unsigned)(0x2d1b8 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), pack_release_entry_handle(0x8c2b59d0,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(0x8c437028,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,
             (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be,ar4));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,ar6_00,ar4))
  ;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c9738(ar4,ar5,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl s_GRAPHICS_ENV_0ca230\n.set s_GRAPHICS_ENV_0ca230, s_GRAPHICS_ENV_0ca230_def\n");

}
//@unit 8c0ca2cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0ca2d4_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0ca2d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  char *pcVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x1c)) = 0;
  iVar1 = *(le<int>* )(unsigned)(ar5 + 4);
  if (iVar1 == 0) {
    puVar3 = ((le<undefined4>* )(fr0_ - 0x18));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13d1c2);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0209b0(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1c2),puVar3));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c015ad4(0x8c437030,((le<undefined4>* )(fr0_ - 0x18))[0],pcVar2,puVar3); });
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 1;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1f0),0,2));
    }
  }
  else if (iVar1 == 1) {
    puVar3 = &(*(le<undefined4>* )(fr0_ - 0x1c));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13d1c2);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020aa8(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d1c2),puVar3));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); Class_129920_m0_015248(0x8c437028,(*(le<undefined4>* )(fr0_ - 0x1c)),pcVar2,puVar3); });
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 2;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d1bb),((undefined1 *)(unsigned)0x8c13d219),0,2));
    }
  }
  else if (iVar1 == 2) {
    ar7_00 = (vsp = ((unsigned long)(fr0_ - 28)), get_field_4_0253e4(0x8c437028,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c020e80(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d242),((undefined1 *)(unsigned)0x8c13d1c2),ar7_00));
    if (iVar1 == 1) {
      *(le<undefined4>* )(unsigned)(ar5 + 4) = 3;
      uVar4 = 4;
    }
    else if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c13d242),((undefined1 *)(unsigned)0x8c13d219),0,2));
    }
  }
  return uVar4;
}

__asm__(".globl s_GRAPHICS_ENV_0ca2d4\n.set s_GRAPHICS_ENV_0ca2d4, s_GRAPHICS_ENV_0ca2d4_def\n");

}
//@unit 8c0ca458
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ca458_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ca458");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* a4;
  uint a5;
  
  *(le<undefined2>* )(unsigned)(0x2d1ac + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x24))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,ar6,ar7));
  a5 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
  a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x98 + *a4))))(a4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(a4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(a4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x70))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),2,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0ca458\n.set FUN_8c0ca458, FUN_8c0ca458_def\n");

}
//@unit 8c0ca4e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0ca4e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0ca4e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0ca4e4\n.set noop_0ca4e4, noop_0ca4e4_def\n");

}
//@unit 8c0ca4e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_SM_0ca4f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_SM_0ca4f0");
  return (unsigned)sh4_interp(0x8c0ca4e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_SM_0ca4f0\n.set s_SEAMAN_SM_0ca4f0, s_SEAMAN_SM_0ca4f0_def\n");
}
//@unit 8c0ca88c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ca88c_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("FUN_8c0ca88c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c102748(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c7424))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86d4(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86c0(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c8698(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x30));
      ar6 = ((undefined1 *)(fr0_ - 0x38));
      ar5_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff54(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    }
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb0 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x38))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),ar5_00,ar6,ar7));
    }
    else if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),ar5_00,ar6,ar7));
    }
    else if (iVar1 == 3) {
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x28))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff84(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x48))))(piVar3,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0cc524(ar4,iVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0ca88c\n.set FUN_8c0ca88c, FUN_8c0ca88c_def\n");

}
//@unit 8c0caa30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0caa30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0caa30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0caa30\n.set noop_0caa30, noop_0caa30_def\n");

}
//@unit 8c0caa3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0caa3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0caa3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,2,ar7));
  return 0;
}

__asm__(".globl FUN_8c0caa3c\n.set FUN_8c0caa3c, FUN_8c0caa3c_def\n");

}
//@unit 8c0caac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0caac0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0caac0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  int ar5_00;
  uint a5;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x138 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1006bc(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  }
  if (iVar1 != 0) {
    piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x78))))(piVar3,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51b8(*(le<undefined4>* )(unsigned)(0x7cc + ar5),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)) + 0x70))))
              (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,1,ar6,ar7));
    ar6 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d1c20))))
              (*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),*(le<undefined4>* )(unsigned)(ar4 + 8),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x88 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2d1b0 + ar4) = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x88 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),0x8c3eb334,ar6,ar7));
  a5 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x98 + *piVar3))))(piVar3,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(piVar3,a5,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0caac0\n.set FUN_8c0caac0, FUN_8c0caac0_def\n");

}
//@unit 8c0cac04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cac04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cac04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cac04\n.set noop_0cac04, noop_0cac04_def\n");

}
//@unit 8c0cac08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cac08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cac08");
  return (unsigned)sh4_interp(0x8c0cac08, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cac08\n.set FUN_8c0cac08, FUN_8c0cac08_def\n");
}
//@unit 8c0cb1dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb1dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb1dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb1dc\n.set noop_0cb1dc, noop_0cb1dc_def\n");

}
//@unit 8c0cb1e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cb1e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cb1e0");
  return (unsigned)sh4_interp(0x8c0cb1e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cb1e0\n.set FUN_8c0cb1e0, FUN_8c0cb1e0_def\n");
}
//@unit 8c0cb1fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb1fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb1fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb1fc\n.set noop_0cb1fc, noop_0cb1fc_def\n");

}
//@unit 8c0cb200
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb200_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb200");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb200\n.set noop_0cb200, noop_0cb200_def\n");

}
//@unit 8c0cb204
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb204_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb204");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb204\n.set noop_0cb204, noop_0cb204_def\n");

}
//@unit 8c0cb208
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cb208_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cb208");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cb208\n.set ret_const_0_0cb208, ret_const_0_0cb208_def\n");

}
//@unit 8c0cb210
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cb210_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cb210");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cb210\n.set ret_const_0_0cb210, ret_const_0_0cb210_def\n");

}
//@unit 8c0cb218
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cb218_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cb218");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cb218\n.set ret_const_0_0cb218, ret_const_0_0cb218_def\n");

}
//@unit 8c0cb220
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cb220_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cb220");
  return (unsigned)sh4_interp(0x8c0cb220, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cb220\n.set FUN_8c0cb220, FUN_8c0cb220_def\n");
}
//@unit 8c0cb298
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb298_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb298\n.set noop_0cb298, noop_0cb298_def\n");

}
//@unit 8c0cb29c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cb29c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cb29c");
  return (unsigned)sh4_interp(0x8c0cb29c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cb29c\n.set FUN_8c0cb29c, FUN_8c0cb29c_def\n");
}
//@unit 8c0cb54c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cb54c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cb54c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cb54c\n.set ret_const_0_0cb54c, ret_const_0_0cb54c_def\n");

}
//@unit 8c0cb554
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cb554_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cb554");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cb554\n.set noop_0cb554, noop_0cb554_def\n");

}
//@unit 8c0cb558
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cb558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cb558");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cb558\n.set ret_const_0_0cb558, ret_const_0_0cb558_def\n");

}
//@unit 8c0cb560
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cb560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cb560");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0caa3c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x9c + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),0x8c3eb334,3,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cb560\n.set FUN_8c0cb560, FUN_8c0cb560_def\n");

}
//@unit 8c0cb5c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cb5c8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cb5c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  
  ar5_00 = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51b8(*(le<undefined4>* )(unsigned)(0x7cc + ar5),2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(*(le<undefined4>* )(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0x18))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x98 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))
            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x70))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_MESSAGE_0cef1c(0x8c436a28,0x8c3eb334,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cb5c8\n.set FUN_8c0cb5c8, FUN_8c0cb5c8_def\n");

}
//@unit 8c0cb668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SEAMAN_SM_0cb670_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SEAMAN_SM_0cb670");
  return (unsigned)sh4_interp(0x8c0cb668, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SEAMAN_SM_0cb670\n.set s_SEAMAN_SM_0cb670, s_SEAMAN_SM_0cb670_def\n");
}
//@unit 8c0cb9c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cb9c8_def(int ar4,undefined1 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  TRACE_ENTER("FUN_8c0cb9c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c102748(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c1026ec(((undefined1 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0637d0(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86d4(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c86c0(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0c8698(*(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 8),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x30));
    ar6 = ((undefined1 *)(fr0_ - 0x38));
    ar5_00 = ((undefined1 *)(fr0_ - 0x20));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff54(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  }
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb0 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x28))))(piVar3,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0fff84(*(le<undefined4>* )(unsigned)(ar5 + 0x7cc),ar5_00,ar6,ar7));
  piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + iVar1 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar3 + 0x48))))(piVar3,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0cf63c(0x8c436a28,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_10270c(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cb9c8\n.set FUN_8c0cb9c8, FUN_8c0cb9c8_def\n");

}
//@unit 8c0cbb2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cbb2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbb2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),0x8c3eb334,3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0xc)),0x8c3eb334,3,ar7));
  ar6_00 = 3;
  ar5_00 = 0x8c3eb334;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b4 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14))))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c3eb334,3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(0x8c436a28,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf1bc(0x8c436a28,0x8c3eb334,ar6_00,ar7));
  return 0;
}

__asm__(".globl FUN_8c0cbb2c\n.set FUN_8c0cbb2c, FUN_8c0cbb2c_def\n");

}
//@unit 8c0cbbcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cbbcc_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbbcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100154(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar6_00 = 0;
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e58(ar5,ar6,0,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7));
  a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + ar6));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x6c))))(a4,ar5,0,ar7));
  return 1;
}

__asm__(".globl FUN_8c0cbbcc\n.set FUN_8c0cbbcc, FUN_8c0cbbcc_def\n");

}
//@unit 8c0cbc34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0cbc34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0cbc34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0cbc34\n.set ret_const_1_0cbc34, ret_const_1_0cbc34_def\n");

}
//@unit 8c0cbc3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cbc3c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbc3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100154(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar6_00 = 1;
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e58(ar5,ar6,1,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7));
  a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + ar6));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x6c))))(a4,ar5,1,ar7));
  return 1;
}

__asm__(".globl FUN_8c0cbc3c\n.set FUN_8c0cbc3c, FUN_8c0cbc3c_def\n");

}
//@unit 8c0cbca4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cbca4_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbca4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100154(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar6_00 = 2;
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e58(ar5,ar6,2,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7));
  a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + ar6));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x6c))))(a4,ar5,2,ar7));
  return 1;
}

__asm__(".globl FUN_8c0cbca4\n.set FUN_8c0cbca4, FUN_8c0cbca4_def\n");

}
//@unit 8c0cbd0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cbd0c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cbd0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* a4;
  int ar6_00;
  
  iVar2 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100154(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    ar6_00 = 3;
    iVar2 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e58(ar5,ar6,3,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_d0_0c51fc(ar5,iVar2,ar6_00,ar7));
  a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + ar6));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x6c))))(a4,ar5,3,ar7));
  return 1;
}

__asm__(".globl FUN_8c0cbd0c\n.set FUN_8c0cbd0c, FUN_8c0cbd0c_def\n");

}
//@unit 8c0cbd74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cbd74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cbd74");
  return (unsigned)sh4_interp(0x8c0cbd74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cbd74\n.set FUN_8c0cbd74, FUN_8c0cbd74_def\n");
}
//@unit 8c0cc518
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cc518_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cc518");
  return (unsigned)sh4_interp(0x8c0cc518, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cc518\n.set FUN_8c0cc518, FUN_8c0cc518_def\n");
}
//@unit 8c0cc524
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cc524_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cc524");
  return (unsigned)sh4_interp(0x8c0cc524, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cc524\n.set FUN_8c0cc524, FUN_8c0cc524_def\n");
}
//@unit 8c0cc784
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cc784_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cc784");
  return (unsigned)sh4_interp(0x8c0cc784, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cc784\n.set FUN_8c0cc784, FUN_8c0cc784_def\n");
}
//@unit 8c0cd3b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cd3b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cd3b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cd3b4\n.set noop_0cd3b4, noop_0cd3b4_def\n");

}
//@unit 8c0cd3b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cd3b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cd3b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cd3b8\n.set noop_0cd3b8, noop_0cd3b8_def\n");

}
//@unit 8c0cd3bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cd3bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cd3bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cd3bc\n.set noop_0cd3bc, noop_0cd3bc_def\n");

}
//@unit 8c0cd3c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cd3c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cd3c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cd3c0\n.set noop_0cd3c0, noop_0cd3c0_def\n");

}
//@unit 8c0cd3c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cd3c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cd3c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cd3c4\n.set noop_0cd3c4, noop_0cd3c4_def\n");

}
//@unit 8c0cd3c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cd3c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cd3c8");
  return (unsigned)sh4_interp(0x8c0cd3c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cd3c8\n.set FUN_8c0cd3c8, FUN_8c0cd3c8_def\n");
}
//@unit 8c0cdf50
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cdf50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cdf50");
  return (unsigned)sh4_interp(0x8c0cdf50, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cdf50\n.set FUN_8c0cdf50, FUN_8c0cdf50_def\n");
}
//@unit 8c0ce914
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_128_0ce914_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_128_0ce914");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x128 + ar4);
}

__asm__(".globl get_field_128_0ce914\n.set get_field_128_0ce914, get_field_128_0ce914_def\n");

}
//@unit 8c0ce920
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ce920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ce920");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0x2d160 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2d15c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2d39c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2d3a0 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0x2d1ac + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2d16c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2d168 + ar4) = 1;
  *(le<undefined4>* )(unsigned)(0x2d164 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5330(ar4 + 0x2d1b0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0ce920\n.set FUN_8c0ce920, FUN_8c0ce920_def\n");

}
//@unit 8c0ce994
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ce994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ce994");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 uVar1;
  int a6;
  
  uVar1 = *(le<undefined4>* )(unsigned)(ar5 + 0x54);
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,*(le<undefined4>* )(unsigned)(ar5 + 0x18),uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x104 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar5,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x94 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar6,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar6,uVar1,ar7));
  a6 = (int)(short)uVar1;
  uVar1 = 0x8c3eb334;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,0x8c3eb334,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x5c))))(a4,uVar1,a6,ar7));
  return a4;
}

__asm__(".globl FUN_8c0ce994\n.set FUN_8c0ce994, FUN_8c0ce994_def\n");

}
//@unit 8c0cea34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cea34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cea34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cea34\n.set noop_0cea34, noop_0cea34_def\n");

}
//@unit 8c0cea38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0cea38_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cea38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 ar6_00;
  
  ar6_00 = *(le<undefined4>* )(unsigned)(ar5 + 0x54);
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,*(le<undefined4>* )(unsigned)(ar5 + 0x18),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x104 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x94 + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar6,ar6_00,ar7));
  return a4;
}

__asm__(".globl FUN_8c0cea38\n.set FUN_8c0cea38, FUN_8c0cea38_def\n");

}
//@unit 8c0cea98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cea98_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cea98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int a5;
  
  a5 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(ar5,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(ar5 + 8)))))(ar5,a5,ar6,ar7));
  if ((iVar1 == 3) && ((short)uVar2 == 7)) {
    uVar2 = 1;
  }
  else if ((iVar1 == 5) && (2 < (short)uVar2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0cea98\n.set FUN_8c0cea98, FUN_8c0cea98_def\n");

}
//@unit 8c0ceb04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ceb04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ceb04");
  return (unsigned)sh4_interp(0x8c0ceb04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ceb04\n.set FUN_8c0ceb04, FUN_8c0ceb04_def\n");
}
//@unit 8c0cebec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0cebec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0cebec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0cebec\n.set noop_0cebec, noop_0cebec_def\n");

}
//@unit 8c0cebf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0cebf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0cebf0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0cebf0\n.set ret_const_0_0cebf0, ret_const_0_0cebf0_def\n");

}
//@unit 8c0cebf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cebf8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cebf8");
  return (unsigned)sh4_interp(0x8c0cebf8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cebf8\n.set FUN_8c0cebf8, FUN_8c0cebf8_def\n");
}
//@unit 8c0cee98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0cee98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cee98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0cee98\n.set FUN_8c0cee98, FUN_8c0cee98_def\n");

}
//@unit 8c0ceed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ceed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ceed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ceed8\n.set FUN_8c0ceed8, FUN_8c0ceed8_def\n");

}
//@unit 8c0cef18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_MESSAGE_0cef1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_MESSAGE_0cef1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
    *(le<undefined4>* )(unsigned)(0x3ec + iVar2 * 0xc + ar4) = 0;
  }
  a7 = 0x10;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x3e0,ar4 + 0x3e8,0x8c4312a8,0x10));
  iVar2 = ar4 + 0x3e0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x158) + 8))))((le<int>* )(unsigned)(ar4 + 0x158),iVar2,uVar1,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x158,iVar2,uVar1,a7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x261,
                     (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x19,uVar1));
  if (iVar2 == -1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x26c,
                       (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x287,0,2));
  }
  return iVar2;
}

__asm__(".globl s_GRAPHICS_MESSAGE_0cef1c\n.set s_GRAPHICS_MESSAGE_0cef1c, s_GRAPHICS_MESSAGE_0cef1c_def\n");

}
//@unit 8c0ceff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ceff8_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ceff8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  int iVar2;
  
  if (*ar4 == 1) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(0x14c + (int)ar4);
    if (iVar1 == 0) {
      if (ar5 == 1) {
        *(le<short>* )(unsigned)(0x144 + (int)ar4) = *(le<short>* )(unsigned)(0x144 + (int)ar4) + 1;
      }
      if (ar5 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,0,ar6,ar7));
      }
      else {
        iVar1 = 0x96;
        if (0x96 < *(le<short>* )(unsigned)(0x144 + (int)ar4)) {
          *(le<undefined2>* )(unsigned)(0x146 + (int)ar4) = 0;
          *(le<undefined2>* )(unsigned)(0x144 + (int)ar4) = 0;
          *(le<undefined2>* )(unsigned)(0x148 + (int)ar4) = 0;
          *(le<undefined4>* )(unsigned)(0x150 + (int)ar4) = 0;
          iVar1 = 0x14c;
          *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 1;
        }
      }
    }
    else {
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0cf1e4))))
                          (ar4,ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(le<short>* )(unsigned)(0x148 + (int)ar4),ar7));
        if (iVar1 == 5) {
          *(le<short>* )(unsigned)(0x148 + (int)ar4) = *(le<short>* )(unsigned)(0x148 + (int)ar4) + 1;
          iVar2 = 0x14c;
          iVar1 = (int)*(le<short>* )(unsigned)(0x148 + (int)ar4);
          if (*(le<short>* )(unsigned)(0x148 + (int)ar4) == 0x10) {
            *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 2;
            iVar1 = iVar2;
          }
        }
        if (ar5 != 0) {
          return iVar1;
        }
        *(le<undefined4>* )(unsigned)(0x14c + (int)ar4) = 3;
      }
      else {
        if (iVar1 == 2) {
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,ar5,ar6,ar7));
          *ar4 = 1;
          return 1;
        }
        if (iVar1 != 3) {
          return iVar1;
        }
      }
      iVar2 = (int)*(le<short>* )(unsigned)(0x148 + (int)ar4);
      ar5_00 = ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf39c(ar4,ar5_00,iVar2,ar7));
      if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0cf144(ar4,ar5_00,iVar2,ar7));
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ceff8\n.set FUN_8c0ceff8, FUN_8c0ceff8_def\n");

}
//@unit 8c0cf144
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cf144_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cf144");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined2>* )(unsigned)(0x144 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0x146 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0x148 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x14c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x150 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x154 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x4c8 + ar4 + iVar1 * 4) = 0xffffff;
  }
  return 4;
}

__asm__(".globl FUN_8c0cf144\n.set FUN_8c0cf144, FUN_8c0cf144_def\n");

}
//@unit 8c0cf1bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cf1bc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cf1bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312((int)ar4 + 0x158,ar5,ar6,ar7));
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c0cf1bc\n.set FUN_8c0cf1bc, FUN_8c0cf1bc_def\n");

}
//@unit 8c0cf1e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cf1e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cf1e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x150);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
      }
      *(le<undefined2>* )(unsigned)(ar4 + 0x146) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x150) = 1;
      break;
    case 1:
      if (*(le<uint>* )(unsigned)(ar4 + 0x4c8) < 0xfaffffff) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(le<int>* )(unsigned)(iVar1 + 0x4c8) = *(le<int>* )(unsigned)(iVar1 + 0x4c8) + 0x5000000;
        }
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffffff;
        }
        *(le<undefined4>* )(unsigned)(ar4 + 0x150) = 2;
      }
      break;
    case 2:
      *(le<short>* )(unsigned)(ar4 + 0x146) = *(le<short>* )(unsigned)(ar4 + 0x146) + 1;
      if (*(le<short>* )(unsigned)(ar5 + 0x10) <= *(le<short>* )(unsigned)(ar4 + 0x146)) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x146) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x150) = 3;
      }
      break;
    case 3:
      if (*(le<uint>* )(unsigned)(ar4 + 0x4c8) < 0x6000000) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
        }
        *(le<undefined2>* )(unsigned)(ar4 + 0x146) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x150) = 4;
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(le<int>* )(unsigned)(iVar1 + 0x4c8) = *(le<int>* )(unsigned)(iVar1 + 0x4c8) + -0x5000000;
        }
      }
      break;
    case 4:
      *(le<short>* )(unsigned)(ar4 + 0x146) = *(le<short>* )(unsigned)(ar4 + 0x146) + 1;
      if (0x59 < *(le<short>* )(unsigned)(ar4 + 0x146)) {
        *(le<undefined2>* )(unsigned)(ar4 + 0x146) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x150) = 0;
        return 5;
      }
    }
  }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x150);
}

__asm__(".globl FUN_8c0cf1e4\n.set FUN_8c0cf1e4, FUN_8c0cf1e4_def\n");

}
//@unit 8c0cf39c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cf39c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cf39c");
  return (unsigned)sh4_interp(0x8c0cf39c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cf39c\n.set FUN_8c0cf39c, FUN_8c0cf39c_def\n");
}
//@unit 8c0cf620
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_14_0cf620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_14_0cf620");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x14);
}

__asm__(".globl get_field_14_0cf620\n.set get_field_14_0cf620, get_field_14_0cf620_def\n");

}
//@unit 8c0cf628
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0cf628_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cf628");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 1;
  return 1;
}

__asm__(".globl FUN_8c0cf628\n.set FUN_8c0cf628, FUN_8c0cf628_def\n");

}
//@unit 8c0cf630
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cf630_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cf630");
  return (unsigned)sh4_interp(0x8c0cf630, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cf630\n.set FUN_8c0cf630, FUN_8c0cf630_def\n");
}
//@unit 8c0cf63c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0cf63c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cf63c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if (*ar4 != 1) {
    if (*(le<int>* )(unsigned)(0x14c + (int)ar4) == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0cf6bc))))
                        (ar4,ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1,
                         (int)*(le<short>* )(unsigned)(0x148 + (int)ar4),ar7));
    }
    else {
      iVar1 = *(le<int>* )(unsigned)(0x14c + (int)ar4);
      if (iVar1 == 3) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0cf7a4))))
                          (ar4,ar4 + *(le<short>* )(unsigned)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(le<short>* )(unsigned)(0x148 + (int)ar4),ar7));
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0cf63c\n.set FUN_8c0cf63c, FUN_8c0cf63c_def\n");

}
//@unit 8c0cf6bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cf6bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cf6bc");
  return (unsigned)sh4_interp(0x8c0cf6bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cf6bc\n.set FUN_8c0cf6bc, FUN_8c0cf6bc_def\n");
}
//@unit 8c0cf7a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cf7a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cf7a4");
  return (unsigned)sh4_interp(0x8c0cf7a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cf7a4\n.set FUN_8c0cf7a4, FUN_8c0cf7a4_def\n");
}
//@unit 8c0cf9b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cf9b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cf9b4");
  return (unsigned)sh4_interp(0x8c0cf9b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cf9b4\n.set FUN_8c0cf9b4, FUN_8c0cf9b4_def\n");
}
//@unit 8c0cfbc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_2d15c_0cfbc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_2d15c_0cfbc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x2d15c + ar4);
}

__asm__(".globl get_field_2d15c_0cfbc0\n.set get_field_2d15c_0cfbc0, get_field_2d15c_0cfbc0_def\n");

}
//@unit 8c0cfbcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cfbcc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cfbcc");
  return (unsigned)sh4_interp(0x8c0cfbcc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cfbcc\n.set FUN_8c0cfbcc, FUN_8c0cfbcc_def\n");
}
//@unit 8c0cfe48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0cfe48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0cfe48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0cfe48\n.set free_if_nonnull_wrap_0cfe48, free_if_nonnull_wrap_0cfe48_def\n");

}
//@unit 8c0cfe78
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0cfe78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cfe78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0cfe78\n.set FUN_8c0cfe78, FUN_8c0cfe78_def\n");

}
//@unit 8c0cfed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0cfed8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0cfed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x3cc,0xffffffff,ar6,ar7));
    uVar2 = 0x19;
    uVar1 = 0x18;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x174,((void *)0x8c0cee98),0x18,0x19); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x160,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x158,0xffffffff,uVar1,uVar2));
    uVar2 = 0x10;
    uVar1 = 0x14;
    ar5_00 = ((void *)0x8c0ceed8);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 4,((void *)0x8c0ceed8),0x14,0x10); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,uVar1,uVar2); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0cfed8\n.set FUN_8c0cfed8, FUN_8c0cfed8_def\n");

}
//@unit 8c0cff78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0cff78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0cff78");
  return (unsigned)sh4_interp(0x8c0cff78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0cff78\n.set FUN_8c0cff78, FUN_8c0cff78_def\n");
}
//@unit 8c0cffc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0cffc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0cffc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0cffc8\n.set free_if_nonnull_wrap_0cffc8, free_if_nonnull_wrap_0cffc8_def\n");

}
//@unit 8c0cfff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_ENV_0d0006_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d0006");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar7_00;
  undefined4 ar5_00;
  char *ar6_00;
  le<undefined4>* ar7_01;
  uint uVar2;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x28)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d47d),((le<undefined4>* )(fr0_ - 0x24))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d48a),1,2);
  }
  ar7_01 = &(*(le<undefined4>* )(fr0_ - 0x28));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13d47d);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d47d),ar7_01));
  if (iVar1 == 0) {
    ar7_01 = (le<undefined4>* )(unsigned)0x2;
    ar6_00 = (char *)(unsigned)0x1;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13d46c),((undefined1 *)(unsigned)0x8c13d4ad),1,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c015ad4(ar4 + 2,((le<undefined4>* )(fr0_ - 0x24))[0],ar6_00,ar7_01); });
  ar5_00 = (*(le<undefined4>* )(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 8))))(ar4,(*(le<undefined4>* )(fr0_ - 0x28)),ar6_00,ar7_01));
  ar7_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 72)), get_field_4_0253e4(ar4,ar5_00,ar6_00,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c015bb8(ar4 + 2,ar5_00,ar6_00,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), thunk_FUN_8c0151e8(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar1 + 4) + 4),0x17,ar6_00,ar7_01));
  ar4[8] = iVar1 + 4;
  for (uVar2 = 0; uVar2 < (uint)ar7_00[1]; uVar2 = uVar2 + 1) {
    iVar1 = uVar2 * 0xc + *ar7_00;
    *(le<uint>* )(unsigned)(iVar1 + 4) = *(le<uint>* )(unsigned)(iVar1 + 4) | 0x80000000;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13d4d0),((undefined1 *)(unsigned)0x8c13d47d),ar7_00));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), report_error_message(((undefined1 *)(unsigned)0x8c13d4d7),((undefined1 *)(unsigned)0x8c13d4fb),1,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_ENV_0d0006\n.set s_GRAPHICS_ENV_0d0006, s_GRAPHICS_ENV_0d0006_def\n");

}
