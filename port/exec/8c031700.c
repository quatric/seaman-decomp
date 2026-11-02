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
undefined4 FUN_8c031700_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031700";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  uint in_PR = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 12)), vec3_clear(ar4 + 0x6c,ar5,ar6,ar7));
  (*(undefined8 *)(fr0_ - 0xc)) = (ulonglong)in_fr1;
  if (cVar1 == '\0') {
    (*(undefined8 *)(fr0_ - 0xc)) = (ulonglong)in_PR << 0x20;
    *(undefined4 *)(unsigned)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xac) = (*(undefined8 *)(fr0_ - 0xc));
  }
  if (cVar1 == '\0') {
    *(int *)(unsigned)(ar4 + 0xa8) = (int)(*(undefined8 *)(fr0_ - 0xc));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa8) = (*(undefined8 *)(fr0_ - 0xc));
  }
  return 0;
}

__asm__(".globl _FUN_8c031700\n.set _FUN_8c031700, _FUN_8c031700_def\n");
