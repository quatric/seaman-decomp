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
undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e_def
          (undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "s_Failed_to_Read_CAnimal_LoadM_02839e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  short * s0 = (short *)(unsigned long)*(unsigned *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  int s16 = *(int *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 *ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  iVar2 = 2;
  ((undefined4 *)(fr0_ - 0x24))[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = ((undefined4 *)(fr0_ - 0x24));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020ba0(s8,ar5,ar6,ar7_00));
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = ((undefined4 *)(fr0_ - 0x24));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020c98(s8,ar5,ar6,ar7_00));
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015bb0(ar7,((undefined4 *)(fr0_ - 0x24))[0],ar6,ar7_00); });
    }
    else if (s16 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015be4(ar7,((undefined4 *)(fr0_ - 0x24))[0],ar6,ar7_00); });
    }
    *s0 = *s0 + 1;
    if (*s0 == (short)s4) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), report_error_message(ar5,"Failed to Read ..:CAnimal::LoadMFile()",1,2));
  }
  return uVar1;
}

__asm__(".globl _s_Failed_to_Read_CAnimal_LoadM_02839e\n.set _s_Failed_to_Read_CAnimal_LoadM_02839e, _s_Failed_to_Read_CAnimal_LoadM_02839e_def\n");
