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
undefined4 FUN_8c1fc9b0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fc9b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = 0x8c475fa0;
  iVar5 = (int)0x400;
  *(le<undefined4>* )(unsigned)0x8c475fa0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = ((void *)(unsigned)0x8c013ff8);
  (vsp = ((unsigned long)(fr0_ - 4)), memset(0x8c475fc0,0,iVar5,4));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c4763c0,0x30,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c4767c0,0x31,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c476bc0,0x32,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c476fc0,0x33,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c4773c0,0x34,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c4777c0,0x35,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c477bc0,0x36,iVar5,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(0x8c477fc0,0x37,iVar5,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fcf90(vr4,vr5,vr6,vr7));
  puVar2 = ((void *)(unsigned)0x8c1fcfa6);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((ar4 & 1) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fcfa6((&(*(undefined1 *)(unsigned)0x8c1fcaf4)),0x8c4763c0,iVar5,vr7));
    }
    if ((ar4 & 2) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcaf8)),0x8c4767c0,iVar5,vr7));
    }
    if ((ar4 & 4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcafc)),0x8c476bc0,iVar5,vr7));
    }
    if ((ar4 & 8) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcb00)),0x8c476fc0,iVar5,vr7));
    }
    if ((ar4 & 0x10) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcb04)),0x8c4773c0,iVar5,vr7));
    }
    if ((ar4 & 0x20) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcb08)),0x8c4777c0,iVar5,vr7));
    }
    if ((ar4 & 0x40) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcb0c)),0x8c477bc0,iVar5,vr7));
    }
    if ((ar4 & (int)0x80) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))((&(*(undefined1 *)(unsigned)0x8c1fcb64)),0x8c477fc0,iVar5,vr7));
    }
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl FUN_8c1fc9b0\n.set FUN_8c1fc9b0, FUN_8c1fc9b0_def\n");

}
