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
undefined4 s_E1201_mwRnaCreate_Illigal_pa_268b7a_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1201_mwRnaCreate_Illigal_pa_268b7a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined1 *a4;
  undefined4 uVar2;
  int *a4_00;
  undefined1 *a4_01;
  int iVar3;
  uint ar5_00;
  
  puVar1 = ((void *)(unsigned)0x8c26a14e);
  a4_01 = ((undefined1 *)(fr0_ - 0x20));
  if (((int)ar5 < 1) || (2 < (int)ar5)) {
    (vsp = ((unsigned long)(fr0_ - 32)), debug_printf(ar4,ar5,ar6,ar7));
  }
  else {
    a4_00 = ar4;
    ar5_00 = ar5;
    if (ar4 != (int *)(unsigned)0x0) {
      ar5_00 = 0;
      if (0 < (int)ar5) {
        do {
          if (*a4_00 == 0) goto LAB_8c268bae;
          ar5_00 = ar5_00 + 1;
          a4_00 = a4_00 + 1;
        } while ((int)ar5_00 < (int)ar5);
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a100(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
      a4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 32)), FUN_8c268b48(a4_01,ar5_00,ar6,ar7));
      if (a4 == (undefined1 *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(a4_01,ar5_00,ar6,ar7));
      }
      else {
        ar5_00 = 0;
        a4[3] = (char)ar5;
        a4[2] = (char)ar5;
        iVar3 = 0;
        if (0 < (int)ar5) {
          do {
            ar5_00 = ar5_00 + 1;
            *(undefined4 *)(unsigned)(a4 + iVar3 + 0x10) = *(undefined4 *)(unsigned)(iVar3 + (int)ar4);
            iVar3 = iVar3 + 4;
          } while ((int)ar5_00 < (int)ar5);
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2785cc)) + 0x14))))(ar5,ar5_00,ar6,ar7));
        *(int *)(unsigned)(a4 + 0x38) = iVar3;
        if (iVar3 == 0) {
          (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar1)))(ar5,ar5_00,ar6,ar7));
          a4 = (undefined1 *)(unsigned)0x0;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c268afc(a4,ar5_00,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269b92(a4,0x10,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269c06(a4,0xac44,ar6,ar7));
          ar5_00 = (uint)(byte)a4[3];
          (vsp = ((unsigned long)(fr0_ - 32)), s_E1205_Illigal_parameter_MWRN_269aec(a4,ar5_00,ar6,ar7));
          (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(a4 + 0x38))));
          uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) + 0x18))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),ar5_00,ar6,ar7));
          *(undefined4 *)(unsigned)(a4 + 0x28) = uVar2;
          *a4 = 1;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c26a118(((undefined1 *)(fr0_ - 0x20)),ar5_00,ar6,ar7));
      return a4;
    }
LAB_8c268bae:
    (vsp = ((unsigned long)(fr0_ - 32)), debug_printf(a4_00,ar5_00,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _s_E1201_mwRnaCreate_Illigal_pa_268b7a\n.set _s_E1201_mwRnaCreate_Illigal_pa_268b7a, _s_E1201_mwRnaCreate_Illigal_pa_268b7a_def\n");
