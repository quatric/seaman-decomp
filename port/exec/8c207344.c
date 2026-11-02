#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207344_def(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c207344";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0 = 0;
  undefined4 in_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)in_dr0;
    puVar1 = ((undefined1 *)(fr0_ - 0x40));
  }
  else {
    puVar1 = ((undefined1 *)(fr0_ - 0x80));
    (*(undefined8 *)(fr0_ - 0x8)) = in_dr0;
  }
  *(undefined4 *)(unsigned)(puVar1 + -4) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)ar4))(ar5,ar5,ar6,ar7));
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined4 *)(unsigned)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(unsigned)(puVar1 + 0x80);
  }
  return *puVar2;
}

__asm__(".globl _FUN_8c207344\n.set _FUN_8c207344, _FUN_8c207344_def\n");
