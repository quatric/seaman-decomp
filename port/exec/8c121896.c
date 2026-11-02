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
undefined4 FUN_8c121896_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c121896";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
            (*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8),*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc),ar6
             ,ar7));
  uVar4 = (((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),uVar4,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x40) = *(int *)(unsigned)(ar4 + 0x40) + 1;
  if (*(int *)(unsigned)(ar4 + 0x28) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12172e(ar4,uVar4,ar6,ar7));
    puVar1 = ((void *)(unsigned)0x8c120348);
    if ((uVar2 & 0xff) != 0) {
      ar7_00 = 0;
      uVar4 = 10;
      *(int *)(unsigned)(ar4 + 0x3c) = *(int *)(unsigned)(ar4 + 0x40) - *(int *)(unsigned)(ar4 + 0x38);
      ar6_00 = *(undefined4 *)(unsigned)(ar4 + 0x38);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,10,ar6_00,0));
      if ((uVar2 & 0xff) != 0) {
        return 1;
      }
      if (*(char *)(unsigned)(ar4 + 0x4d) == '\0') {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120798(ar4,uVar4,ar6_00,ar7_00));
        if ((uVar2 & 0xff) != 0) {
          return 1;
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = 1;
      }
    }
  }
  else if ((*(int *)(unsigned)(ar4 + 0x28) == 1) &&
          (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12182e(ar4,uVar4,ar6,ar7)), (uVar2 & 0xff) != 0)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xb,*(undefined4 *)(unsigned)(ar4 + 0x40),0));
    if ((uVar2 & 0xff) != 0) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 2;
  }
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)(piVar3[1] * 4 + *(int *)(unsigned)(*piVar3 + 0x40)) != *(int *)(unsigned)(*piVar3 + 0x3c)) &&
     (*(int *)(unsigned)(*(int *)(unsigned)(piVar3[2] + 0x40) + piVar3[3] * 4) != *(int *)(unsigned)(piVar3[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c121896\n.set _FUN_8c121896, _FUN_8c121896_def\n");
