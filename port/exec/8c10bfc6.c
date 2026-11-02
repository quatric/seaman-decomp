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
undefined4 asr_lib_create_recognizer_def(undefined4 *ar4,int *ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "asr_lib_create_recognizer";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *ar6_00;
  int iVar2;
  int *ar6_01;
  int *ar7_00;
  undefined4 uVar3;
  
  uVar3 = 0;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b1ec)));
  (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b576)));
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b5b8)));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b5f0)));
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b628)));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((void *)(unsigned)0x8c10b660)));
  (*(undefined4 *)(fr0_ - 0x34)) = ar4[1];
  ar7_00 = ar7;
  (*(int *)(fr0_ - 0x30)) = ar6;
  ar6_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)((uint)ar4[2])))(0x30,&(*(undefined4 *)(fr0_ - 0x34)),ar6,ar7));
  ar6_00[2] = ar6;
  ar6_00[1] = (int)ar4;
  ar6_00[3] = *ar5;
  ar6_00[4] = ar5[1];
  ar6_00[5] = ar5[2];
  ar6_00[6] = ar5[3];
  ar6_00[7] = ar5[4];
  puVar1 = ((void *)(unsigned)0x8c11ce8e);
  ar6_00[8] = ar5[5];
  ar6_00[9] = 0;
  ar6_00[10] = 0;
  ar6_00[0xb] = 0;
  ar6_01 = ar6_00;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(*ar4,((undefined * *)(fr0_ - 0x2c)),ar6_00,ar7_00));
  if (iVar2 == 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11cd44(*ar4,0,ar6_01,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(ar6_00,&(*(undefined4 *)(fr0_ - 0x34)),ar6_01,ar7_00));
  }
  else {
    *ar6_00 = iVar2;
    *ar7 = (int)ar6_00;
  }
  return uVar3;
}

__asm__(".globl _asr_lib_create_recognizer\n.set _asr_lib_create_recognizer, _asr_lib_create_recognizer_def\n");
