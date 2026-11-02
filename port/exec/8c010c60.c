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
undefined4 FUN_8c010c60_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c010c60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *a6;
  int iVar3;
  char *ain0;
  
  uVar2 = ar7;
  (vsp = ((unsigned long)(fr0_ - 72)), memset(&(*(char *)(fr0_ - 0x2c)),0,4,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memmove(&(*(char *)(fr0_ - 0x28)),uVar2,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memset(((undefined1 *)(fr0_ - 0x38)),0,4,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x34)),ar5,8,ar7));
  a6 = (undefined1 *)(unsigned)0x10;
  (vsp = ((unsigned long)(fr0_ - 72)), memset(((undefined1 *)(fr0_ - 0x48)),0,0x10,ar7));
  ain0 = &(*(char *)(fr0_ - 0x3d));
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(((undefined1 *)(fr0_ - 0x48)),0xc,a6,ar7));
    ar7 = 0xc;
    a6 = ((undefined1 *)(fr0_ - 0x38));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012eac(0,&(*(char *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x38)),0xc));
    if (iVar1 < 0) {
      a6 = (undefined1 *)(unsigned)0xc;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c010af8(&(*(char *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x38)),0xc,ar7); });
    }
    else {
      *ain0 = *ain0 + '\x01';
    }
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(&(*(char *)(fr0_ - 0x2c)),0xc,a6,ar7));
  }
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012d5c(((undefined1 *)(fr0_ - 0x48)),0x10,a6,ar7));
  }
  if ((((((*(char *)(fr0_ - 0x2c)) != '\0') || ((*(char *)(fr0_ - 0x2b)) != '\0')) || ((*(char *)(fr0_ - 0x2a)) != '\0')) ||
      ((((*(char *)(fr0_ - 0x29)) != '\0' || ((*(char *)(fr0_ - 0x28)) != '\0')) ||
       (((*(char *)(fr0_ - 0x27)) != '\0' || (((*(char *)(fr0_ - 0x26)) != '\0' || ((*(char *)(fr0_ - 0x25)) != '\0')))))))) ||
     (((*(char *)(fr0_ - 0x24)) != '\0' || ((((*(char *)(fr0_ - 0x23)) != '\0' || ((*(char *)(fr0_ - 0x22)) != '\0')) || ((*(char *)(fr0_ - 0x21)) != '\0'))))))
  {
    (*(byte *)(fr0_ - 0x3c)) = (*(byte *)(fr0_ - 0x3c)) | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  if (((((*(byte *)(fr0_ - 0x44)) != 0) || ((*(char *)(fr0_ - 0x43)) != '\0')) ||
      ((((*(char *)(fr0_ - 0x42)) != '\0' || (((*(char *)(fr0_ - 0x41)) != '\0' || ((*(char *)(fr0_ - 0x40)) != '\0')))) || ((*(char *)(fr0_ - 0x3f)) != '\0')))
      ) || ((((*(char *)(fr0_ - 0x3e)) != '\0' || (*ain0 != '\0')) || ((*(byte *)(fr0_ - 0x3c)) != 0)))) {
    while (((*(byte *)(fr0_ - 0x44)) & 0x80) == 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(&(*(byte *)(fr0_ - 0x44)),9,a6,ar7));
      *ar4 = *ar4 + -1;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), memmove(ar5,&(*(byte *)(fr0_ - 0x44)),9,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c010c60\n.set _FUN_8c010c60, _FUN_8c010c60_def\n");
