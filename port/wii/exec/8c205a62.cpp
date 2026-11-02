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
undefined4 g2dma_205a62_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("g2dma_205a62");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0xdd18957;
  *(le<undefined4>* )(unsigned)0x8c4a9ec0 = 0;
  (*(le<int>* )(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a876(0,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a876(4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
  if ((*(le<int>* )(fr0_ - 0x18)) == 0x17fd11db) {
    if (uVar3 == 1) {
      *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
    }
    else if (0x10 < uVar3) {
      *(le<undefined4>* )(unsigned)0x8c4a9bac = 6;
      *(le<undefined4>* )(unsigned)0x8c4a9ec0 = 0x800408;
      uVar6 = 0x15d1c951;
    }
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
  }
  iVar4 = (int)0x101;
  iVar5 = *(volatile le<undefined4>* )(unsigned)0xa05f689c;
  if (iVar5 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 3;
      }
      else if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0x7f;
        iVar4 = 0x10101;
      }
      else if (iVar5 == 8) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0x1f;
      }
      else if (iVar5 == 9) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0xf;
      }
      else {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = (int)0x8f;
      }
      goto LAB_8c205bc8;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 1;
  }
  iVar4 = 0;
LAB_8c205bc8:
  puVar2 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844((int)0xa8,uVar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xa0,0x20,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(8,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xe4,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x48,9,ar6,ar7));
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bc8 & 1) == 0) {
    (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844(0x44,0,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844(0x44,0x800000,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x5c,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x68,0x2800000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x6c,0x1e00000,ar6,ar7));
  uVar6 = 0x92039;
  sVar1 = 0x110;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x110,0x93f39,ar6,ar7));
    uVar6 = *(le<undefined4>* )(unsigned)0x8c4a9ec0;
    sVar1 = 0x98;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)sVar1,uVar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x4c,(int)0xa0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x74,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x78,0x3f800000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x84,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x30,iVar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xb0,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xb4,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xc0,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xbc,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x80,7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x88,0x3727c5a0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x8c,0x1203000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x74,1,ar6,ar7));
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    uVar6 = 0x7df77;
    if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
      uVar6 = 0x27df77;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x7c,uVar6,ar6,ar7));
    iVar4 = 0x200000;
    puVar2 = ((void *)(unsigned)0x8c20731e);
    iVar7 = 0;
    (*(le<undefined4>* )(fr0_ - 0x1c)) = 0;
    iVar5 = 0xa5000000;
    do {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(iVar5,&(*(le<undefined4>* )(fr0_ - 0x1c)),4,ar7));
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < iVar4);
    return 1;
  }
  do {
                    
  } while( true );
}

__asm__(".globl g2dma_205a62\n.set g2dma_205a62, g2dma_205a62_def\n");

}
