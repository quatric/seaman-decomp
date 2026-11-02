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
undefined4 FUN_8c028ccc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028ccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  iVar1 = ar5 + 0xd8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,iVar1,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar4 + 0x174,iVar1,ar6,ar7));
  if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x2c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,2,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x308)),ar5 + 200,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 0x460) = *(undefined4 *)(unsigned)(ar5 + 0xe8);
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x468) = *(undefined4 *)(unsigned)(ar5 + 0xec);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x468) = *(undefined8 *)(unsigned)(ar5 + 0xec);
  }
  return 0xec;
}

__asm__(".globl _FUN_8c028ccc\n.set _FUN_8c028ccc, _FUN_8c028ccc_def\n");
