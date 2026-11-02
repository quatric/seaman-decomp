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
int s_CDCGD_ReadPVMFileReq_021082_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CDCGD_ReadPVMFileReq_021082";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar6_00 = *(undefined4 *)(unsigned)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(((undefined4 *)(fr0_ - 0x1c))); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)(s0); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 16) = (unsigned)t4_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 28)) - 24); FUN_8c02077c(ar4,0x10,ar6_00,ar5); });
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c23a29c(((undefined4 *)(fr0_ - 0x1c))[0],ar7,ar6_00,ar7_00));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c021138(ar4,ar5,ar6,s0));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c021138(ar4,ar5,ar6,s0));
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c12fc0c)) + 0x12,(&(*(undefined1 *)(unsigned)0x8c12fc0c)) + 0x27,1,2));
      iVar1 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _s_CDCGD_ReadPVMFileReq_021082\n.set _s_CDCGD_ReadPVMFileReq_021082, _s_CDCGD_ReadPVMFileReq_021082_def\n");
