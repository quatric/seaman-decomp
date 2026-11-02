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
undefined4 s_Nautilus_0ae6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Nautilus_0ae6a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  char *ar5_00;
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  ar5_00 = ((undefined1 *)(unsigned)0x8c13ba15);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); strcpy(ar4,((undefined1 *)(unsigned)0x8c13ba15),ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 2;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0x44a28000;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = 0x43480000;
    *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x44048000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = 0x4348000044a28000;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x4404800043480000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x8c02a1fc44048000;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02a1fc(ar4 + 0x2c,ar5_00,ar6,ar7));
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xc1f00000;
    *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xc2b40000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2c) = 0xc2b40000c1f00000;
    *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c08a9b8c2b40000;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c08a9b8(ar4 + 0x38,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 10;
  *(uint *)(unsigned)(ar4 + 0x48) = *(uint *)(unsigned)(ar4 + 0x48) | 0x80000001;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ae7a4(ar4 + 0x4c,ar5_00,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xd8) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0xd8) = 1;
  *(undefined1 *)(unsigned)(ar4 + 200) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xcc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xe8) = 1;
  return 0xe8;
}

__asm__(".globl _s_Nautilus_0ae6a4\n.set _s_Nautilus_0ae6a4, _s_Nautilus_0ae6a4_def\n");
