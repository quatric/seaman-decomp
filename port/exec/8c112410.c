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
int * FUN_8c112410_def(int *ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c112410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  ulonglong *puVar2;
  uint uVar3;
  uint in_fr5 = 0;
  ulonglong uVar4;
  uint uVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar5 = ar5 * ar6;
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[2] = uVar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x10))))(ar7,uVar5 * 4,vr6,vr7));
  ar4[3] = iVar1;
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar7 + 0x18))))(ar7,ar4,vr6,vr7));
    ar4 = (int *)(unsigned)0x0;
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 5) = 1;
    uVar3 = 0;
    ar4[4] = uVar5 * 4 + ar4[3];
    puVar2 = (ulonglong *)(unsigned)(uint)ar4[3];
    if (cVar6 == '\0') {
      uVar4 = (ulonglong)in_fr5;
    }
    else {
      uVar4 = 0x8c1129e400000000;
    }
    if (uVar5 != 0) {
      do {
        uVar3 = uVar3 + 1;
        if (cVar6 == '\0') {
          *(int *)(unsigned)puVar2 = (int)(uVar4 >> 0x20);
        }
        else {
          *puVar2 = uVar4;
        }
        puVar2 = (ulonglong *)(unsigned)((int)puVar2 + 4);
      } while (uVar3 < uVar5);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c112410\n.set _FUN_8c112410, _FUN_8c112410_def\n");
