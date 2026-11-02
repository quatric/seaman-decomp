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
int FUN_8c1fe7aa_def(int ar4,char *ar5,undefined4 ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c1fe7aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 324; for (int i_ = 0; i_ < 324; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  le<int>* ar7_00;
  
  iVar2 = 0x8c4783e2;
  *ar7 = 0;
  if (*(char *)(unsigned)(iVar2 + ar4 * 0x148) != '\0') {
    pcVar4 = ar5;
    uVar5 = ar6;
    ar7_00 = ar7;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fdd1a(ar4,pcVar4,uVar5,ar7_00));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fd550(ar4,pcVar4,uVar5,ar7_00));
      if ((iVar2 != 0) && (*(char *)(unsigned)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), thunk_FUN_8c1ffcc2(ar4,pcVar4,uVar5,ar7_00));
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), ret_const_0_200aec(ar4,ar5,uVar5,ar7_00));
        if (-1 < iVar2) {
          ar6_00 = ((undefined1 *)(fr0_ - 0x44));
          pcVar4 = ar5;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200566(ar4,ar5,ar6_00,ar7_00));
          if ((-1 < iVar2) && (pcVar4 = ar5, iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1ff478(ar4,ar5,ar6_00,ar7_00)), iVar2 < 0)
             ) {
            return iVar2;
          }
          iVar2 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200614(ar4,pcVar4,ar6_00,ar7_00));
          if (-1 < iVar2) {
            iVar3 = iVar2;
            (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200a84(ar4,iVar2,ar6_00,ar7_00));
            iVar3 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200ab6(ar4,iVar3,ar6_00,ar7_00));
            uVar5 = 0xffff;
            if (iVar3 == 0) {
              return (int)(int)0xffffff07;
            }
            *(le<undefined4>* )(unsigned)(iVar3 + 8) = 0;
            *(le<undefined4>* )(unsigned)(iVar3 + 4) = 1;
            *(le<int>* )(unsigned)(iVar3 + 0x2c) = iVar2;
            *(le<undefined4>* )(unsigned)(iVar3 + 0x38) = uVar5;
            *(le<undefined4>* )(unsigned)(iVar3 + 0x30) = 0;
            *(le<int>* )(unsigned)(iVar3 + 0x28) = ar4;
            *(le<undefined2>* )(unsigned)(iVar3 + 2) = 0;
            *(undefined1 *)(unsigned)(iVar3 + 1) = 0;
            pcVar4 = (char *)(unsigned)(iVar3 + 0x10);
            for (; puVar1 = ((void *)(unsigned)0x8c200bfc), *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar4 = *ar5;
              pcVar4 = pcVar4 + 1;
            }
            *pcVar4 = '\0';
            (vsp = ((unsigned long)(fr0_ - 324)), (*(code *)xlat((unsigned long)(puVar1)))(iVar3 + 0x20,ar6,ar6_00,ar7_00));
            *ar7 = iVar3;
            return 0;
          }
        }
        return (int)(int)0xffffff08;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1fe7aa\n.set FUN_8c1fe7aa, FUN_8c1fe7aa_def\n");

}
