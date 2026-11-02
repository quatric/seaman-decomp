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
int FUN_8c0d49cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d49cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar2;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f4f8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13f504);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13f508);
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x20))));
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x34))));
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), get_field_d0_0d3f70(ar4 + 0x34,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0d3f50(ar4 + 0x34,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)(ar4_00 + 8);
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4_00 + 0xc);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4_00 + 0x10);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 8);
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 0xc);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4_00 + 0x10);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4_00 + 0x10) >> 0x20);
    }
    ar6_00 = 0x40;
    ar5_00 = 1;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c234fd0(((undefined4 * *)(fr0_ - 0x30)),1,0x40,ar7));
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 52)), list_node_next(ar4_00,ar5_00,ar6_00,ar7));
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0d49cc\n.set _FUN_8c0d49cc, _FUN_8c0d49cc_def\n");
