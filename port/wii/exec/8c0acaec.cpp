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
undefined4 CAnimal_m2_0acaec_def(int ar4,le<int>* ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("CAnimal_m2_0acaec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* a4;
  le<int>* ar5_00;
  le<int>* ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((((char)uVar1 == '\x01') && (*(le<int>* )(unsigned)(0x948 + ar4) == 0)) &&
       (*(le<int>* )(unsigned)(0x94c + ar4) == 0)) &&
      ((*(le<int>* )(unsigned)(0x950 + ar4) == 0 && (*(le<int>* )(unsigned)(0x954 + ar4) == 0)))) &&
     (((*(le<int>* )(unsigned)(0x958 + ar4) == 0 &&
       ((*(le<int>* )(unsigned)(0x95c + ar4) == 0 && (*(le<int>* )(unsigned)(0x960 + ar4) == 0)))) &&
      (*(le<int>* )(unsigned)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad050(ar4,ar5,ar6,ar7_00));
  }
  if ((((*(le<int>* )(unsigned)(0x948 + ar4) != 0) || (*(le<int>* )(unsigned)(0x94c + ar4) != 0)) ||
      (*(le<int>* )(unsigned)(0x950 + ar4) != 0)) ||
     (((*(le<int>* )(unsigned)(0x954 + ar4) != 0 || (*(le<int>* )(unsigned)(0x958 + ar4) != 0)) ||
      ((*(le<int>* )(unsigned)(0x95c + ar4) != 0 ||
       ((*(le<int>* )(unsigned)(0x960 + ar4) != 0 || (*(le<int>* )(unsigned)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x44))))
                        (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
      if (iVar2 < iVar3) {
        if (*(char *)(unsigned)(0x968 + ar4) == '\0') {
          *(undefined1 *)(unsigned)(0x968 + ar4) = 1;
          *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
        }
        ar5_00 = ar7;
        (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00));
        ar6 = ar5;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x44))))(a4,ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x968 + ar4) == '\x01')) {
      *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 1;
      *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(a4,ar5_00,ar6,ar7_00));
    }
  }
  if (*(le<int>* )(unsigned)(0x77c + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0x170c + ar4) = 1;
  }
  if (*(le<int>* )(unsigned)(0x75c + ar4) == 1) {
    if ((*(le<int>* )(unsigned)(0x88c + ar4) != 0) && (*(le<int>* )(unsigned)(0x890 + ar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb8 + *ar7))))
                (ar7,*(le<undefined4>* )(unsigned)(0x88c + ar4),*(le<undefined4>* )(unsigned)(0x890 + ar4),
                 ar4 + 0x760));
      *(le<undefined4>* )(unsigned)(0x88c + ar4) = 0;
      *(le<undefined4>* )(unsigned)(0x890 + ar4) = 0;
    }
    *(le<undefined4>* )(unsigned)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl CAnimal_m2_0acaec\n.set CAnimal_m2_0acaec, CAnimal_m2_0acaec_def\n");

}
