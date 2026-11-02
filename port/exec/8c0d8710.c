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
undefined4 FUN_8c0d8710_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d8710";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined8 *puVar3;
  char cVar4;
  
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = ar5;
  if (*ar4 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d8890(ar4,ar5,ar6,ar7));
  }
  ar5_00 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d8bf0(ar4,ar5_00,ar6,ar7));
  if (cVar4 == '\0') {
    puVar3 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0x24)) + 4);
    (*(undefined8 *)(fr0_ - 0x24)) = CONCAT44(ar4[0x1b87],(undefined4)(*(undefined8 *)(fr0_ - 0x24)));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x24)) = *(undefined8 *)(unsigned)(ar4 + 0x1b87);
    puVar3 = &(*(undefined8 *)(fr0_ - 0x24));
  }
  (*(int *)(fr0_ - 0x14)) = iVar1;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d7b60(ar4 + 0x1e,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0d7cb0(ar4 + 0x1e,ar5_00,ar6,ar7));
  if ((iVar1 == 0) || (iVar1 == 1)) {
    ar4[1] = 0;
  }
  else {
    ar4[1] = 1;
  }
  if (ar4[1] == 0) {
    *(unsigned *)(unsigned)((int)puVar3 + 8) = ar4;
    *((int *)(unsigned long)*(unsigned *)(unsigned)((int)puVar3 + 8)) = *((int *)(unsigned long)*(unsigned *)(unsigned)((int)puVar3 + 8)) + 1;
  }
  uVar2 = 72000;
  if (71999 < *ar4) {
    uVar2 = 0;
    *ar4 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d8710\n.set _FUN_8c0d8710, _FUN_8c0d8710_def\n");
