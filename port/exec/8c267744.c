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
int FUN_8c267744_def(int ar4,int ar5,undefined1 *ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c267744";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  byte bVar2;
  int *in_r3 = 0;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_PR = 0;
  
  if (*in_r3 == 0) {
    iVar6 = 0xd000001;
    goto LAB_8c267802;
  }
  if (ar4 == 0) {
    iVar6 = 0x7000103;
    goto LAB_8c267802;
  }
  if ((ar7 & 0xf0) == 0) {
    bVar2 = *(byte *)(unsigned)(ar4 + 1);
    piVar3 = (int *)(unsigned)((short)(char)bVar2 * 0x2c + *in_r3 + 0xa8);
    *piVar3 = ar5;
    if (*(char *)(unsigned)((int)piVar3 + 5) == '\x01') {
      bVar5 = 0;
    }
    else {
      if (*(char *)(unsigned)((int)piVar3 + 5) != '\x02') goto LAB_8c2677e6;
      bVar5 = 0x80;
    }
    iVar6 = *piVar3;
    if (iVar6 == 1) {
      bVar4 = 0;
    }
    else if (iVar6 == 0) {
      bVar4 = 0x10;
    }
    else {
      if (iVar6 != 2) goto LAB_8c2677e6;
      bVar4 = 0x30;
    }
    (*(undefined1 *)(unsigned)0x8c4bd42c) = bVar2 | bVar5 | bVar4;
    piVar3[3] = 0;
    piVar3[4] = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd428) = 0x21;
    (*(undefined1 *)(unsigned)0x8c4bd42d) = *(undefined1 *)(unsigned)((int)piVar3 + 6);
    ar7 = (int)(char)ar7 << 3;
    (*(undefined1 *)(unsigned)0x8c4bd42e) = SUB41(ar6,0);
    (*(undefined1 *)(unsigned)0x8c4bd42f) = (undefined1)((uint)ar6 >> 8);
    (*(undefined1 *)(unsigned)0x8c4bd430) = (undefined1)ar7;
    ar6 = (undefined1 *)(unsigned)((int)piVar3 + 7);
    for (iVar6 = 5; iVar6 < 7; iVar6 = iVar6 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      (((undefined1 *)(unsigned)0x8c4bd42c))[iVar6] = uVar1;
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd428),7,ar6,ar7));
  }
  else {
LAB_8c2677e6:
    iVar6 = 0x3000001;
  }
LAB_8c267802:
  if (iVar6 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267740),iVar6,ar6,ar7); });
  }
  return iVar6;
}

__asm__(".globl _FUN_8c267744\n.set _FUN_8c267744, _FUN_8c267744_def\n");
