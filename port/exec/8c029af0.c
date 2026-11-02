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
undefined4 FUN_8c029af0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029af0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar4_00;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  
  cVar5 = '\0';
  iVar2 = ar6;
  if (*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x434)) == 0) {
    (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar5 + 8);
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar5 + 0xc);
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar5 + 0x10);
    ar5_00 = ar5;
  }
  else {
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2545ec(&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar6,ar7));
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x434) + 4) == 0) {
    (*(undefined4 *)(fr0_ - 0x34)) = *(undefined4 *)(unsigned)(ar5 + 0x14);
    (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(ar5 + 0x18);
    (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(ar5 + 0x1c);
  }
  else {
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c254698(&(*(undefined4 *)(fr0_ - 0x34)),ar6,iVar2,ar7));
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x434) + 8) == 0) {
    if (cVar5 == '\0') {
      (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(ar5 + 0x20);
      (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)(ar5 + 0x24);
      (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar5 + 0x28);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x20);
      (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x24);
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar5 + 0x28);
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 0x28) >> 0x20);
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c254780(&(*(undefined4 *)(fr0_ - 0x28)),ar6,iVar2,ar7));
    ar5_00 = ar6;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(0,ar5_00,iVar2,ar7); });
  uVar1 = (*(undefined4 *)(fr0_ - 0x34));
  uVar3 = (*(undefined4 *)(fr0_ - 0x30));
  uVar4 = (*(undefined4 *)(fr0_ - 0x2c));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256e18(0,(*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x2c))); });
  ar4_00 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(0,uVar1,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25484c(ar4_00,uVar1,uVar3,uVar4));
  *(int *)(unsigned)(ar4 + 0x434) = *(int *)(unsigned)(ar4 + 0x434) + 0x18;
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25b5d0(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  uVar1 = (*(undefined4 *)(fr0_ - 0x34));
  uVar3 = (*(undefined4 *)(fr0_ - 0x30));
  uVar4 = (*(undefined4 *)(fr0_ - 0x2c));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256e18(((undefined1 *)(fr0_ - 0x74)),(*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x2c))); });
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25cddc(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c256fec(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c02430c(((undefined1 *)(fr0_ - 0x74)),uVar1,uVar3,uVar4));
  return uVar1;
}

__asm__(".globl _FUN_8c029af0\n.set _FUN_8c029af0, _FUN_8c029af0_def\n");
