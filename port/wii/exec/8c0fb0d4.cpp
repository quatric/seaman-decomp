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
undefined4 s_ERROR_0fb0de_def(le<undefined4>* ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_ERROR_0fb0de");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar4_00;
  
  if (*ar5 == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(0x84 + (int)ar4)) == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faf30(ar5,(&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x13,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = 2;
      *ar4 = 2;
    }
    else if (*ar5 == '#') {
      *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = *(le<undefined4>* )(unsigned)(0x84 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(le<int>* )(unsigned)(0x88 + (int)ar4) +
              *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x88 + (int)ar4) + 0x24) + 0x28;
      if (*(le<int>* )(unsigned)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(le<int>* )(unsigned)(0x88 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (ar4_00 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(0x84 + (int)ar4));
          (*(le<int>* )(unsigned)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(le<int>* )(unsigned)(ar4_00 + 0x24) + 0x28) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faf30(ar4_00,ar5,ar6,ar7));
        if (iVar2 == 0) {
          *(le<unsigned>* )(unsigned)(0x88 + (int)ar4) = ar4_00;
          *ar4 = 6;
          return 6;
        }
      }
      uVar1 = 2;
      *ar4 = 2;
    }
  }
  return uVar1;
}

__asm__(".globl s_ERROR_0fb0de\n.set s_ERROR_0fb0de, s_ERROR_0fb0de_def\n");

}
