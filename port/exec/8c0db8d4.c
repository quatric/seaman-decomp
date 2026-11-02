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
undefined4 FUN_8c0db8d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0db8d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *ar5_00;
  int iVar2;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = 0;
  ar5_00 = ar5;
  for (iVar2 = 0; iVar2 < 0x11; iVar2 = iVar2 + 1) {
    while (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                             (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7)), iVar1 != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0db5a0))))
                        (iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
      ((undefined4 *)(fr0_ - 0x14))[0] =
           (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe41c))))
                     (iVar2 * 0x3c + ar4 + 0x3a8,iVar1 + -1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe334))))
                (iVar2 * 0x3c + ar4 + 0x3a8,((undefined4 *)(fr0_ - 0x14))[0],ar6,ar7));
      ar5_00 = ((undefined4 *)(fr0_ - 0x14));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0feb88(ar4 + 0x7a4,ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fe4c4(iVar2 * 0x3c + ar4 + 0x3a8,ar5_00,ar6,ar7));
  }
  while (iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7)),
        iVar2 != 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_300_0bf154(ar4 + 0xa4,ar5_00,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe108))))
                          (ar4 + 0xa4,iVar2 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fe018))))
              (ar4 + 0xa4,(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d1b90(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x9d4 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1020 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1024 + ar4) = 0;
  return 1;
}

__asm__(".globl _FUN_8c0db8d4\n.set _FUN_8c0db8d4, _FUN_8c0db8d4_def\n");
