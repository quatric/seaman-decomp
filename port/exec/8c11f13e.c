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
undefined4 FUN_8c11f13e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f13e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  *(int *)(unsigned)(0x10c + ar4) = ar5;
  puVar3 = (&(*(undefined1 *)(unsigned)0x8c127c1d));
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c18));
  if (ar5 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 100);
    *(undefined4 *)(unsigned)(0x114 + ar4) = 0;
    if ((*(int *)(unsigned)(0x88 + ar4) == 0) || (*(char *)(unsigned)(0x234 + ar4) != '\0')) {
      cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x34,0,vr7));
    }
    else {
      cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x33,0,vr7));
    }
  }
  else if (ar5 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x68);
    *(unsigned *)(unsigned)(0x114 + ar4) = puVar2;
    cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x2b,0,vr7));
  }
  else {
    if (ar5 != 2) {
      return 0x18;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    *(unsigned *)(unsigned)(0x114 + ar4) = puVar3;
    cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x2c,0,vr7));
  }
  if ((cVar4 == '\0') &&
     (((*(int *)(unsigned)(0x88 + ar4) == 0 || (ar5 == 0)) ||
      (cVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,2,0,vr7)), cVar4 == '\0')))) {
    *(uint *)(unsigned)(0x110 + ar4) = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x60) + 0xc);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c11f13e\n.set _FUN_8c11f13e, _FUN_8c11f13e_def\n");
