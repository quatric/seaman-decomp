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
undefined * FUN_8c0999ac_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0999ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0xa;
  if ((iVar2 < 0xb) && (puVar1 = (undefined *)(unsigned)0x1, 0 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0999d8))[iVar2 + -1];
                    
    switch(iVar2) {
    case 1:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],ar5,ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x12) {
        ar6_01 = 0x1b;
        ar5_00 = 0x27;
        iVar2 = ar6[6];
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(iVar2,0x27,0x1b,ar7));
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5_00,ar6_01,ar7));
      }
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0996dc(ar6[3],1,ar6,ar7));
      break;
    case 8:
      ar6_00 = ar6;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,ar5,ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        iVar2 = *ar6;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,ar5,ar6_00,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5,ar6_00,ar7));
      }
      break;
    case 9:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      break;
    case 10:
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      puVar1 = (undefined *)(unsigned)0x98;
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 5;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0999ac\n.set _FUN_8c0999ac, _FUN_8c0999ac_def\n");
