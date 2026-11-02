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
undefined4 FUN_8c0355cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0355cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                    (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
       (char)uVar2 == '\x01')) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
     iVar1 == 1)) {
    ar5 = 7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,7,ar6,ar7));
    if (((iVar1 == 1) &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                    (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (((iVar1 == 0x1d) &&
      (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
      (char)uVar2 == '\x01')) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0 &&
      (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
        iVar1 == 1 &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)))))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035718(*(undefined4 *)(unsigned)(ar4 + 0x18),4,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0355cc\n.set _FUN_8c0355cc, _FUN_8c0355cc_def\n");
