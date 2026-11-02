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
undefined4 FUN_8c11c0e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c0e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 a7;
  int *piVar5;
  undefined4 uVar6;
  
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7)), (uVar2 & 0xff) != 0
     )) {
    pcVar3 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
                               (*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8),
                                *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc),ar6,ar7));
    uVar6 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar6,ar6,ar7));
    puVar1 = ((void *)(unsigned)0x8c111dfe);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),uVar6,ar6,ar7));
    a7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 4),uVar6,ar6,ar7));
    uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 8),uVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bd6c(ar4,(int)*pcVar3,uVar4,a7));
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(uVar6,*(undefined4 *)(unsigned)(ar4 + 0x30),*(int *)(unsigned)(ar4 + 0x54) << 2,a7));
  }
  piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)(piVar5[1] * 4 + *(int *)(unsigned)(*piVar5 + 0x40)) == *(int *)(unsigned)(*piVar5 + 0x3c)) ||
     (*(int *)(unsigned)(*(int *)(unsigned)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(unsigned)(piVar5[2] + 0x3c))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11c0e4\n.set _FUN_8c11c0e4, _FUN_8c11c0e4_def\n");
