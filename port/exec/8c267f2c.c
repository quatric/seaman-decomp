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
int FUN_8c267f2c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c267f2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    (*(undefined1 *)(unsigned)0x8c4bd4ec) = *(char *)(unsigned)(ar4 + 1);
    ar7 = 0;
    ar6 = (short)(*(undefined1 *)(unsigned)0x8c4bd4ec) * 0x2c + (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0xa8;
    cVar1 = *(char *)(unsigned)(ar6 + 4);
    (*(undefined4 *)(fr0_ - 0x10)) = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x10)) >> 8),cVar1);
    iVar2 = 0;
    if (0 < cVar1) {
      do {
        *(undefined4 *)(unsigned)(ar6 + 0xc + iVar2) = 1;
        ar7 = ar7 + 1;
        *(undefined4 *)(unsigned)(ar6 + 0x14 + iVar2) = 0;
        *(undefined4 *)(unsigned)(ar6 + 0x24 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (ar7 < cVar1);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd4e8) = 0x22;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd4e8),0,ar6,ar7));
  }
  if (iVar2 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); FUN_8c2688a0(((void *)0x8c267f2c),iVar2,ar6,ar7); });
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267f2c\n.set _FUN_8c267f2c, _FUN_8c267f2c_def\n");
