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
undefined4 FUN_8c1fc9c0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fc9c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r11 = 0;
  uint unaff_r12 = 0;
  undefined4 unaff_r14 = 0;
  
  *ar4 = unaff_r11;
  ar4[1] = unaff_r11;
  ar4[2] = unaff_r11;
  ar4[3] = unaff_r11;
  ar4[4] = unaff_r11;
  ar4[5] = unaff_r11;
  ar4[6] = unaff_r11;
  ar4[7] = unaff_r11;
  puVar1 = ((void *)(unsigned)0x8c013ff8);
  (vsp = ((unsigned long)(fr0_ - 4)), memset(0x8c475fc0,unaff_r11,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4763c0,0x30,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4767c0,0x31,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c476bc0,0x32,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c476fc0,0x33,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4773c0,0x34,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c4777c0,0x35,unaff_r14,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c477bc0,0x36,unaff_r14,ar7));
  ar5_00 = 0x37;
  uVar3 = 0x8c477fc0;
  ar6_00 = unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x8c477fc0,0x37,unaff_r14,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fcf90(uVar3,ar5_00,ar6_00,ar7));
  puVar1 = ((void *)(unsigned)0x8c1fcfa6);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((unaff_r12 & 1) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fcfa6((&(*(undefined1 *)(unsigned)0x8c1fcaf4)),0x8c4763c0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 2) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcaf8)),0x8c4767c0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcafc)),0x8c476bc0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 8) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcb00)),0x8c476fc0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 0x10) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcb04)),0x8c4773c0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 0x20) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcb08)),0x8c4777c0,unaff_r14,ar7));
    }
    if ((unaff_r12 & 0x40) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcb0c)),0x8c477bc0,unaff_r14,ar7));
    }
    if ((unaff_r12 & (int)0x80) != 0) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((&(*(undefined1 *)(unsigned)0x8c1fcb64)),0x8c477fc0,unaff_r14,ar7));
    }
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl FUN_8c1fc9c0\n.set FUN_8c1fc9c0, FUN_8c1fc9c0_def\n");

}
