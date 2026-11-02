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
undefined4 asr_load_language_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("asr_load_language_model");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  if (*(le<undefined4>* )(unsigned)0x8c2791b8 < 3) {
    *(le<undefined4>* )(unsigned)0x8c279258 = 0;
    *(le<undefined4>* )(unsigned)0x8c27925c = 0;
    *(le<undefined4>* )(unsigned)0x8c279260 = 0;
    *(le<undefined4>* )(unsigned)0x8c279268 = 0;
    *(le<undefined4>* )(unsigned)0x8c279264 = 0;
    *(le<undefined4>* )(unsigned)(0x5b34 + ar4) = 0;
    ar7_00 = ar4 + 0x5b34;
    ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c;
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fb7c));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0212b8))))
                      (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fb7c)),ar6_00,ar7_00));
    if (iVar2 == 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), asr_init_from_model(ar4,ar5_00,ar6_00,ar7_00));
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d624))))
                  (ar4,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1d,
                   (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x26,ar7_00));
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl asr_load_language_model\n.set asr_load_language_model, asr_load_language_model_def\n");

}
