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
undefined4 FUN_8c035858_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int a6;
  
  iVar4 = 0;
  a6 = 0;
  while( true ) {
    uVar3 = 5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,ar6,ar7));
    if (iVar1 <= a6) break;
    uVar3 = 5;
    ar6 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
    if (iVar1 == 7) {
      uVar3 = 5;
      ar6 = a6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar4) &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(ar4[3],uVar3,ar6,ar7)), iVar4 == 0)) &&
      (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(ar4[2] + 0x90,uVar3,ar6,ar7)), iVar4 < 0x31)) &&
     (((uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03584c(ar4[5],uVar3,ar6,ar7)), (char)uVar2 == '\x02' &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c0_034f3c(ar4[5],uVar3,ar6,ar7)), iVar4 == 0)) &&
      (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_03598c(ar4[5],uVar3,ar6,ar7)), iVar4 == 0)))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce10(ar4[2] + 0x90,0,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035858\n.set _FUN_8c035858, _FUN_8c035858_def\n");
