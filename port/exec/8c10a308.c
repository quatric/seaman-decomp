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
undefined4 FUN_8c10a308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int ar6_00;
  char cVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 2;
  *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
  if (*(float *)(unsigned)(ar4 + 0xa0) <= 0.0) {
    (vsp = ((unsigned long)(fr0_ - 0)), memset(*(undefined4 *)(unsigned)(ar4 + 0x58),0,*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x58),*(undefined4 *)(unsigned)(ar4 + 0xa8),*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
    ar6_00 = *(int *)(unsigned)(ar4 + 0x7c) << 2;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),*(undefined4 *)(unsigned)(ar4 + 0xa8),ar6_00,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11b93c(*(undefined4 *)(unsigned)(ar4 + 0xb0),*(undefined4 *)(unsigned)(ar4 + 0x54),ar6_00,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x51) = 1;
  }
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memset(*(undefined4 *)(unsigned)(ar4 + 0x5c),0,*(int *)(unsigned)(ar4 + 0x7c) << 2,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = 0x47c35000;
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x60) = 0x3f00000047c35000;
    *(undefined8 *)(unsigned)(ar4 + 100) = *(undefined8 *)(unsigned)(ar4 + 0xa0);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x3f000000;
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = 0x2fd62fe63f000000;
    *(undefined8 *)(unsigned)(ar4 + 0x70) = 0x8c013ef400000000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a308\n.set _FUN_8c10a308, _FUN_8c10a308_def\n");
