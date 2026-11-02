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
int FUN_8c1febe6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1febe6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int ar6_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_r9 = 0;
  undefined4 ar4_00;
  int unaff_r13 = 0;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(le<undefined4>* )(unsigned)(unaff_r13 + 0x28),ar5,ar6,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(le<undefined4>* )(unsigned)(unaff_r13 + 0x28),ar5,ar6,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(le<undefined4>* )(unsigned)(unaff_r13 + 0x28),ar5,ar6,ar7));
    if ((iVar2 != 0) &&
       (*(char *)(unsigned)(0x8c4783e8 + *(le<int>* )(unsigned)(unaff_r13 + 0x28) * (int)0x148) != '\0')) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fc076))))
                        (*(le<undefined4>* )(unsigned)(unaff_r13 + 0x28),ar5,ar6,ar7));
      if (iVar2 < 0) {
        return (int)(int)0xffffff03;
      }
      ar4_00 = *(le<undefined4>* )(unsigned)(unaff_r13 + 0x28);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2008f4(ar4_00,ar5,ar6,ar7));
      puVar1 = ((void *)(unsigned)0x8c1fbc44);
      if (-1 < iVar2) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbc44(ar4_00,iVar2,unaff_r9,ar7));
        ar6_00 = 0xffff;
        if (iVar3 < 0) {
          if (iVar3 == (int)0xffffff01) {
            return iVar3;
          }
          do {
            iVar3 = ar6_00;
            (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4_00,iVar2,ar6_00,ar7));
            iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200890(ar4_00,0xfffc,iVar3,ar7));
            if (iVar2 < 0) goto LAB_8c1fec70;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,iVar2,unaff_r9,ar7));
          } while (iVar3 != 0);
        }
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4_00,iVar2,0xfffa,ar7));
        if (*(le<int>* )(unsigned)(unaff_r13 + 0x38) == ar6_00) {
          *(le<int>* )(unsigned)(unaff_r13 + 0x38) = (int)(short)iVar2;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4_00,*(le<undefined4>* )(unsigned)(unaff_r13 + 0x3c),iVar2,ar7));
        }
        *(le<int>* )(unsigned)(unaff_r13 + 0x3c) = (int)(short)iVar2;
        *(le<int>* )(unsigned)(unaff_r13 + 0x30) = *(le<int>* )(unsigned)(unaff_r13 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1febe6\n.set FUN_8c1febe6, FUN_8c1febe6_def\n");

}
