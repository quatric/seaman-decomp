#include "../decls.h"
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
