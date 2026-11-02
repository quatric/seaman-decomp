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
int FUN_8c267058_def(int ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int ar5_00;
  
  ar5_00 = 0;
  pcVar4 = ar6;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (char *)(unsigned)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    iVar2 = (short)*(char *)(unsigned)(ar4 + 1) * 0x2c + (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c268650(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1b8) + *(char *)(unsigned)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                 0x402,(fr0_ + (int)0xffffffe0),ar6,ar7));
    cVar3 = (char)(*(undefined4 *)(fr0_ - 0x20));
    cVar1 = *(char *)(unsigned)(iVar2 + 0xad);
    if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
      if ((char)ar5 == '\0') {
        cVar3 = cVar3 + '@';
      }
      else if ((char)ar5 == '\x01') {
        if (cVar3 == '\0') {
          cVar3 = -1;
        }
        cVar3 = cVar3 + -0x40;
      }
      cVar3 = cVar3 * '\x02';
    }
    *ar6 = cVar3;
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c2688a0(((void *)0x8c267058),ar5_00,pcVar4,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267058\n.set _FUN_8c267058, _FUN_8c267058_def\n");
