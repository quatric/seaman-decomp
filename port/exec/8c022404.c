#include "../decls.h"
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
