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
undefined4 FUN_8c1ef682_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ef682");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  le<undefined4>* puVar3;
  undefined *puVar4;
  le<undefined4>* puVar5;
  le<undefined4>* puVar6;
  undefined4 uVar7;
  int iVar8;
  
  puVar3 = 0x8c470910;
  puVar2 = ((void *)(unsigned)0x8c1fa244);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c26bf98));
  uVar7 = ({ unsigned long t0_ = (unsigned long)(0x8c4727c4
                    ); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fa244))))
                    ((int)0x900,(&(*(undefined1 *)(unsigned)0x8c1ef4e4)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26bf98)),0); });
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef4f0));
  iVar8 = (int)0xa00;
  *puVar3 = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(le<undefined4>* )(unsigned)(puVar1 + 4),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5ca));
  iVar8 = (int)0xa00;
  puVar3[1] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(le<undefined4>* )(unsigned)(puVar1 + 8),0));
  puVar4 = (&(*(undefined1 *)(unsigned)0x8c1ef5d2));
  iVar8 = (int)0xa20;
  puVar3[2] = uVar7;
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(iVar8,puVar4,*(le<undefined4>* )(unsigned)(puVar1 + 0xc),0));
  puVar5 = 0x8c470c18;
  puVar3[3] = uVar7;
  puVar6 = 0x8c470e68;
  puVar3 = 0x8c470e64;
  *puVar5 = 0;
  *puVar3 = 0;
  *puVar6 = 0;
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  *(le<undefined4>* )(unsigned)0x8c470e6c = 0;
  *(le<undefined4>* )(unsigned)0x8c470e70 = 0;
  *(le<undefined4>* )(unsigned)0x8c470e78 = 0;
  *(le<undefined4>* )(unsigned)0x8c470e74 = 0xffffffff;
  *(le<undefined4>* )(unsigned)0x8c470e8c = 0;
  *(le<undefined4>* )(unsigned)0x8c470e90 = 0;
  *(le<undefined4>* )(unsigned)0x8c470e94 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470be0,0,0x38,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4709a0,0,(int)0x240,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470c20,0,(int)0x240,vr7));
  uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c470920,0,(int)0x80,vr7));
  return uVar7;
}

__asm__(".globl FUN_8c1ef682\n.set FUN_8c1ef682, FUN_8c1ef682_def\n");

}
