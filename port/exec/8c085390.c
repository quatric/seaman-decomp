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
undefined4 CAnimal_m2_085390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_085390";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x10c0 + ar4) == 0)) &&
      (*(int *)(unsigned)(0x10c4 + ar4) == 0)) &&
     (((*(int *)(unsigned)(0x10c8 + ar4) == 0 && (*(int *)(unsigned)(0x10cc + ar4) == 0)) &&
      ((*(int *)(unsigned)(0x10d0 + ar4) == 0 && (*(int *)(unsigned)(0x10d4 + ar4) == 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0858e4(ar4,ar5,ar6,ar7_00));
  }
  if (((*(int *)(unsigned)(0x10c0 + ar4) != 0) || (*(int *)(unsigned)(0x10c4 + ar4) != 0)) ||
     ((*(int *)(unsigned)(0x10c8 + ar4) != 0 ||
      (((*(int *)(unsigned)(0x10cc + ar4) != 0 || (*(int *)(unsigned)(0x10d0 + ar4) != 0)) ||
       (*(int *)(unsigned)(0x10d4 + ar4) != 0)))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0859c8(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      if (*(char *)(unsigned)(0x10d8 + ar4) == '\0') {
        *(undefined1 *)(unsigned)(0x10d8 + ar4) = 1;
        *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_085b18(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_290_085544(ar4 + 0xd20,ar5_00,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x44))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x10d8 + ar4) == '\x01')) {
      *(undefined1 *)(unsigned)(0x10d8 + ar4) = 0;
    }
  }
  return 1;
}

__asm__(".globl _CAnimal_m2_085390\n.set _CAnimal_m2_085390, _CAnimal_m2_085390_def\n");
