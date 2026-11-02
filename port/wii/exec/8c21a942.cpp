#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c21a942_def(le<uint>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21a942");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar2 = ((void *)(unsigned)0x8c2563ac);
  puVar1 = ((void *)(unsigned)0x8c2569e0);
  puVar5 = ((undefined1 *)(unsigned)0x8c4aad80);
  uVar4 = (uint)0x80;
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(puVar5,vr5,vr6,vr7));
    if ((*ar4 & 0x40) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa340)))(ar4,vr5,vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), noop_25b638(ar4 + 2,vr5,vr6,vr7));
      ar5 = *ar4 & 0x20;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 5,vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c257098(ar4 + 8,vr5,vr6,vr7));
    }
    if ((code *)*(le<undefined4>* )(unsigned)0x8c4aa358 != (code *)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa358)))(ar4,vr5,vr6,vr7));
    }
    if ((*ar4 & uVar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa36c)))(ar4,vr5,vr6,vr7));
    }
    else if ((ar4[1] != 0) && ((*ar4 & 8) == 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4aa368)))(ar4[1],vr5,vr6,vr7));
    }
    if (ar4[0xb] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a942((le<uint>* )(unsigned)(uint)ar4[0xb],ar5,ar6,ar7));
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256254(vr4,vr5,vr6,vr7));
    ar4 = (le<uint>* )(unsigned)(uint)ar4[0xc];
  } while (ar4 != (le<uint>* )(unsigned)0x0);
  return uVar3;
}

__asm__(".globl FUN_8c21a942\n.set FUN_8c21a942, FUN_8c21a942_def\n");

}
