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
undefined * Class_12a078_m4_067284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a078_m4_067284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)(unsigned)0x4;
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0672a8))[iVar2];
                    
    switch(iVar2) {
    case 1:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1d,0x1b,ar7));
      break;
    case 2:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1c,0x1b,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1e,0x1b,ar7));
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1f,0x1b,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12a078_m4_067284\n.set _Class_12a078_m4_067284, _Class_12a078_m4_067284_def\n");
