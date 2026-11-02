#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a174_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25a174";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ain0;
  
  ar5_00 = ar5;
  ain0 = ar6;
  { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, (const char *)(unsigned)(unsigned)ar5, ar6, ar7); } uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), log_message(ar5,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((unsigned)(fr0_ + (int)0xffffffe8)); unsigned long ri1_ = (unsigned long)(ar5_00 + uVar1 - 4); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(uVar1,ar5_00,ar6,ar7); });
  ar4_00 = (fr0_ + (int)0xffffffe8);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c2033c0(ar4_00,ar5_00,ar6,ar7); });
  uVar1 = ain0;
  if ((char)(*(undefined4 *)(fr0_ - 0x18)) == '.') {
    ar4_00 = (fr0_ + (int)0xffffffe8);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0109e8(ar4_00,ain0,ar6,ar7));
    ar5_00 = ain0;
    if (iVar2 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); unsigned long ri1_ = (unsigned long)(0x8c4aa5a8); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(ar4_00,ain0,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,ar5,ar6,ar7));
      { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, "built", 0, 0); return 1; }
    }
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4); unsigned long ri1_ = (unsigned long)(0x8c4aa5a8); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(ar4_00,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,uVar1,ar6,ar7));
  { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, "built", 0, 0); return 1; }
}

__asm__(".globl _FUN_8c25a174\n.set _FUN_8c25a174, _FUN_8c25a174_def\n");
