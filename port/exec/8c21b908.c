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
undefined4 FUN_8c21b908_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21b908";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  puVar3 = ((void *)(unsigned)0x8c2563ac);
  puVar2 = ((void *)(unsigned)0x8c2569e0);
  puVar1 = ((void *)(unsigned)0x8c257098);
  puVar5 = ((undefined1 *)(unsigned)0x8c4aad80);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(puVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(undefined4 *)(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219954(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21b908((uint *)(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (uint *)(unsigned)(uint)ar4[0xc];
  } while (ar4 != (uint *)(unsigned)0x0);
  return uVar4;
}

__asm__(".globl _FUN_8c21b908\n.set _FUN_8c21b908, _FUN_8c21b908_def\n");
