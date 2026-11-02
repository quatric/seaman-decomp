#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_E1221_Illigal_parameter_NCH__26a254_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("s_E1221_Illigal_parameter_NCH__26a254");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  le<undefined4>* puVar5;
  int iVar6;
  int iVar7;
  le<undefined4>* puVar8;
  undefined4 uVar9;
  undefined4 a7;
  int iVar10;
  le<int>* piVar11;
  
  puVar1 = ((void *)(unsigned)0x8c26a14e);
  iVar6 = ar4;
  if (((ar4 < 1) || (2 < ar4)) ||
     (puVar5 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c26a220(ar4,ar5,ar6,ar7)), puVar5 == (le<undefined4>* )(unsigned)0x0)) {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,ar5,ar6,ar7));
  }
  else {
    *puVar5 = (&(*(undefined1 *)(unsigned)0x8c278600));
    for (iVar10 = 0; puVar2 = ((void *)(unsigned)0x8c26a1f2), iVar10 < ar4; iVar10 = iVar10 + 1) {
      puVar8 = puVar5 + iVar10 + 6;
      uVar9 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c26a1ca(iVar6,ar5,ar6,ar7));
      *puVar8 = uVar9;
      if (puVar5[iVar10 + 6] == 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,ar5,ar6,ar7));
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (iVar10 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar2)))(uVar9,ar5,ar6,ar7));
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
        return 0;
      }
      piVar11 = ((le<int>* )(fr0_ - 0x28)) + iVar10;
      iVar6 = puVar5[iVar10 + 6];
      iVar7 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_4_26a1f8(iVar6,ar5,ar6,ar7));
      *piVar11 = iVar7;
    }
    (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0));
    piVar11 = (le<int>*)(puVar5 + 0xe);
    (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(((le<int>* )(fr0_ - 0x28))));
    if (0 < ar4) {
      do {
        ar7 = (int)0x4000;
        ar5 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
        iVar10 = (0x10 - ar5) * -0x4040 + 0x200000;
        ar6 = iVar10;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c268320(0x52535053,ar5,iVar10,ar7));
        if (iVar6 != 0) {
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,ar5,ar6,ar7));
        }
        *piVar11 = iVar10;
        (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 1)));
        piVar11 = piVar11 + 1;
        (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)) + 1));
      } while ((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) < ar4);
    }
    puVar5[0x10] = (int)0x4000;
    for ((*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0)); puVar3 = ((void *)(unsigned)0x8c265784), (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) < ar4;
        (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 1)))) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c265704(&(*(le<undefined4>* )(fr0_ - 0x30)),ar5,ar6,ar7));
      if (iVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,ar5,ar6,ar7));
        (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(puVar5 + 8));
        (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0));
        if (0 < (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40))) {
          do {
            iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar3)))(*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)),ar5,ar6,ar7));
            if (iVar6 != 0) {
              (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,ar5,ar6,ar7));
            }
            (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) + 1)));
            (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)) + 1));
          } while ((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) < (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)));
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar2)))(uVar9,ar5,ar6,ar7));
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 8] = (*(le<undefined4>* )(fr0_ - 0x30));
    }
    for ((*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0)); (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) < ar4;
        (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 1)))) {
      puVar8 = &(*(le<undefined4>* )(fr0_ - 0x30));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c265704(puVar8,ar5,ar6,ar7));
      if (iVar6 != 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(puVar8,ar5,ar6,ar7));
        (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)(puVar5 + 10));
        (*(le<int>* )(fr0_ - 0x34)) = 0;
        if (0 < (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40))) {
          do {
            uVar9 = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38));
            (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar3)))(uVar9,ar5,ar6,ar7));
            if (iVar6 != 0) {
              (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(uVar9,ar5,ar6,ar7));
            }
            (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + 1;
            (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) + 1));
          } while ((*(le<int>* )(fr0_ - 0x34)) < (int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)));
        }
        (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)(puVar5 + 8));
        (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0));
        if (0 < ar4) {
          do {
            uVar9 = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40));
            (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar3)))(uVar9,ar5,ar6,ar7));
            if (iVar6 != 0) {
              (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(uVar9,ar5,ar6,ar7));
            }
            (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) + 1)));
            (*(le<unsigned>* )(fr0_ - 0x40) = (unsigned)(unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 1));
          } while ((int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) < ar4);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar2)))(uVar9,ar5,ar6,ar7));
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 10] = (*(le<undefined4>* )(fr0_ - 0x30));
    }
    if (ar4 == 1) {
      puVar8 = &(*(le<undefined4>* )(fr0_ - 0x2c));
      iVar6 = ({ unsigned long t0_ = (unsigned long)(1); unsigned long t1_ = (unsigned long)((int)(char)((le<int>* )(fr0_ - 0x28))[0]); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c2675d8(puVar8,ar5,ar6,ar7); });
    }
    else {
      puVar8 = &(*(le<undefined4>* )(fr0_ - 0x2c));
      iVar6 = ({ unsigned long t0_ = (unsigned long)(ar4); unsigned long t1_ = (unsigned long)((int)(char)((le<int>* )(fr0_ - 0x28))[0]); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c2675d8(puVar8,ar5,ar6,ar7); });
    }
    puVar4 = ((void *)(unsigned)0x8c267908);
    if (iVar6 == 0) {
      puVar5[0xc] = (*(le<undefined4>* )(fr0_ - 0x2c));
      puVar5[3] = ar4;
      puVar5[2] = ar4;
      for (iVar6 = 0; puVar2 = ((void *)(unsigned)0x8c267914), iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar4)))(puVar5[0xc],iVar6,ar6,ar7));
        if (iVar7 != 0) {
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,iVar10,ar6,ar7));
        }
      }
      for (iVar6 = 0; iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        uVar9 = 0x7f;
        a7 = 0;
        iVar10 = iVar6;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar2)))(puVar5[0xc],iVar6,0x7f,0));
        if (iVar7 != 0) {
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,iVar10,uVar9,a7));
        }
      }
      puVar5[0x12] = 0xffffffff;
      puVar5[0x11] = 0;
      puVar5[1] = 1;
      return puVar5;
    }
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(puVar8,ar5,ar6,ar7));
    (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(puVar5 + 8));
    (*(le<int>* )(fr0_ - 0x34)) = 0;
    if (0 < ar4) {
      do {
        uVar9 = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c));
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar3)))(uVar9,ar5,ar6,ar7));
        if (iVar6 != 0) {
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar1)))(uVar9,ar5,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)(puVar2)))(puVar5[(int)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x40)) + 6],ar5,ar6,ar7));
        (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + 1;
        (*(le<unsigned>* )(fr0_ - 0x3c) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x3c)) + 1));
      } while ((*(le<int>* )(fr0_ - 0x34)) < ar4);
    }
  }
  return 0;
}

__asm__(".globl s_E1221_Illigal_parameter_NCH__26a254\n.set s_E1221_Illigal_parameter_NCH__26a254, s_E1221_Illigal_parameter_NCH__26a254_def\n");

}
