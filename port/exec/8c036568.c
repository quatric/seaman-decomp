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
undefined4 CAnimal_m3_036568_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "CAnimal_m3_036568";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_a0_035724(ar5,ar5,ar6,ar7));
  if (((char)uVar1 == '\x02') && (*(int *)(unsigned)(0x7d4 + ar5) == 1)) {
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 68)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0366f0(ar4,ar5,ar6,ar7_00));
  }
  if (*(int *)(unsigned)(0x1134 + ar4) != 0) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c03679c(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_2f0_03655c(ar4 + 0xd2c,ar5_00,ar6,ar7_00));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), s_CSquidLine_036894(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  return 1;
}

__asm__(".globl _CAnimal_m3_036568\n.set _CAnimal_m3_036568, _CAnimal_m3_036568_def\n");
