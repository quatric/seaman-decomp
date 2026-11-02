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
int s_E9040901_can_t_find_s_ADXF_O_261f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E9040901_can_t_find_s_ADXF_O_261f82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 a4;
  undefined4 *ar5_00;
  undefined4 *a5;
  
  a5 = &(*(undefined4 *)(fr0_ - 0x20));
  ar5_00 = ((undefined4 *)(fr0_ - 0x18));
  a4 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2637ca(ar5,ar5_00,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c25ece6);
  if (-1 < iVar2) {
    ar5_00 = &(*(undefined4 *)(fr0_ - 0x1c));
    a4 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2637e8(ar5,ar5_00,ar6,ar7));
    if (-1 < iVar2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c263816(ar5,&(*(undefined4 *)(fr0_ - 0x20)),ar6,ar7));
      if (iVar2 < 0) {
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(ar5,a5,ar6,ar7));
        return iVar2;
      }
      *(undefined4 *)(unsigned)(ar4 + 0xc) = ((undefined4 *)(fr0_ - 0x18))[0];
      *(undefined4 *)(unsigned)(ar4 + 0x10) = (*(undefined4 *)(fr0_ - 0x1c));
      *(undefined4 *)(unsigned)(ar4 + 0x14) = (*(undefined4 *)(fr0_ - 0x20));
      return 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(a4,ar5_00,ar6,ar7));
  return iVar2;
}

__asm__(".globl _s_E9040901_can_t_find_s_ADXF_O_261f82\n.set _s_E9040901_can_t_find_s_ADXF_O_261f82, _s_E9040901_can_t_find_s_ADXF_O_261f82_def\n");
