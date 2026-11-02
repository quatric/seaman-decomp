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
undefined4 FUN_8c012734_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c012734";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 uVar2;
  undefined4 in_fr5 = 0;
  uint in_fr4 = 0;
  undefined8 in_xd2 = 0;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined2 *)(fr0_ - 0x10)) = (undefined2)in_fr4;
  (*(undefined1 *)(fr0_ - 0xe)) = (undefined1)(in_fr4 >> 0x10);
  (*(undefined1 *)(fr0_ - 0xd)) = (undefined1)(in_fr4 >> 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c010df4(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((int)((in_fr4 >> 0x14 & 0x7ff) - 0x3ff) < 0) {
      if (cVar3 == '\0') {
        ar4[1] = 0;
        *ar4 = 0;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 1) = 0x7001600700000000;
        *(undefined8 *)(unsigned)(ar4 + -1) = 0x7001600700000000;
      }
    }
    else {
      if (cVar3 == '\0') {
        uVar2 = CONCAT44(in_fr4,in_fr5);
      }
      else {
        in_xd2 = CONCAT17((*(undefined1 *)(fr0_ - 0xd)),CONCAT16((*(undefined1 *)(fr0_ - 0xe)),CONCAT24((*(undefined2 *)(fr0_ - 0x10)),in_fr5)));
        uVar2 = CONCAT44(in_PR,in_fr4);
      }
      if (cVar3 == '\0') {
        ar4[1] = (int)((ulonglong)uVar2 >> 0x20);
        *ar4 = (int)uVar2;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 1) = uVar2;
        *(undefined8 *)(unsigned)(ar4 + -1) = in_xd2;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x4b8;
    }
    if (iVar1 == 2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44c;
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c012734\n.set _FUN_8c012734, _FUN_8c012734_def\n");
