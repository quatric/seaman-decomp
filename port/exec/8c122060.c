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
undefined4 FUN_8c122060_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c122060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(unsigned)(0xfc + ar4);
  uVar5 = 0;
  if (*(int *)(unsigned)(0x240 + ar4) != 0) {
    do {
      if (*(int *)(unsigned)(uVar5 * 8 + 0x268 + ar4 + 4) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))
                  (*(undefined4 *)(unsigned)(uVar5 * 8 + 0x268 + ar4 + 4),0xf4 + ar4,vr6,vr7));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(unsigned)(0x240 + ar4));
  }
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(undefined4 *)(unsigned)(0x148 + ar4) = 3;
  cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x23,0,vr7));
  if (((cVar2 == '\0') && (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x15,0,vr7)), cVar2 == '\0')) &&
     (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x10,*(undefined4 *)(unsigned)(0x248 + ar4),2)),
     puVar1 = ((void *)(unsigned)0x8c121f38), cVar2 == '\0')) {
    *(undefined1 *)(unsigned)(0x234 + ar4) = 0;
    *(unsigned *)(unsigned)(0xdc + ar4) = puVar1;
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c122060\n.set _FUN_8c122060, _FUN_8c122060_def\n");
