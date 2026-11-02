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
undefined4 asr_lib_create_engine_def(int *ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "asr_lib_create_engine";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int *ar5_00;
  int iVar1;
  int *ar6_00;
  undefined4 uVar2;
  
  uVar2 = 0;
  ((int *)(fr0_ - 0x3c))[1] = 0;
  ar6_00 = ar6;
  ((int *)(fr0_ - 0x3c))[0] = ar5;
  ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)(*ar4)))(0x2c,((int *)(fr0_ - 0x3c)),ar6,ar7));
  if (ar5_00 == (int *)(unsigned)0x0) {
    uVar2 = 1;
  }
  else {
    ar5_00[2] = *ar4;
    ar5_00[3] = ar4[1];
    ar5_00[4] = ar4[2];
    ar5_00[5] = ar4[3];
    ar5_00[6] = ar4[4];
    ar5_00[7] = ar4[5];
    ar5_00[8] = ar4[6];
    ar5_00[9] = ar4[7];
    ar5_00[10] = ar4[8];
    ar5_00[1] = ar5;
    (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10aff4)));
    *ar6 = (int)ar5_00;
    (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b02a)));
    (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b060)));
    (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b096)));
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b0d8)));
    (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b10e)));
    (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b144)));
    (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b17a)));
    (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b1b0)));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c11cdb6(((undefined * *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c11cd44(0,0,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)((uint)ar4[1])))(ar5_00,((int *)(fr0_ - 0x3c)),ar6_00,ar7));
    }
    else {
      *ar5_00 = iVar1;
    }
  }
  return uVar2;
}

__asm__(".globl _asr_lib_create_engine\n.set _asr_lib_create_engine, _asr_lib_create_engine_def\n");
