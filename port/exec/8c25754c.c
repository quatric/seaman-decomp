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
undefined4 FUN_8c25754c_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25754c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined *a4;
  code *pcVar3;
  uint ar6_00;
  code *pcVar4;
  
  iVar1 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(undefined4 *)(unsigned)(ar4 + 0x18),iVar1,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2371be((int)*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + ar5 * 0x14 + 0x10),iVar1,ar6_00,ar7));
  if ((ar6 & 0x20) == 0) {
    uVar2 = 0x80028;
    pcVar3 = ((void *)0x8c236b3c);
  }
  else {
    uVar2 = 0x2100028;
    pcVar3 = ((void *)0x8c236c38);
  }
  pcVar4 = pcVar3;
  ({ unsigned long ri0_ = (unsigned long)(pcVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c237124(uVar2,pcVar3,ar6_00,ar7); });
  a4 = ((undefined1 *)(unsigned)0x8c4aa52c);
  if ((ar6 & 2) == 0) {
    a4 = ((undefined1 *)(unsigned)0x8c271de8);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar4))(a4,pcVar3,ar6_00,ar7));
  pcVar3 = ((void *)0x8c257610);
  if ((ar6 & 0x10) == 0) {
    pcVar3 = ((void *)0x8c2578ac);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar3))(ar4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    ar4 = ar4_00;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2370dc(ar4_00,ar5,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c25754c\n.set _FUN_8c25754c, _FUN_8c25754c_def\n");
