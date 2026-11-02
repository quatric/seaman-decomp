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
int FUN_8c104f5c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c104f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x3c) == 0) {
    (vsp = ((unsigned long)(fr0_ - 44)), get_field_124_027930(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6,ar7));
    uVar2 = ar5;
    iVar1 = ar6;
    (vsp = ((unsigned long)(fr0_ - 44)), s_GRATIFIC_EAT_1063b2(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + 1;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + *(int *)(unsigned)(ar4 + 4) * 0xc);
    if ((*(int *)(unsigned)(ar4 + 0x40) == 0x22) || (*(int *)(unsigned)(ar4 + 0xc) == 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0;
      if (*(int *)(unsigned)(ar4 + 4) == 1) {
        *(int *)(unsigned)(ar4 + 0xc) = *(int *)(unsigned)(ar4 + 0xc) + -1;
        ar5 = uVar2;
        ar6 = iVar1;
        (*(int *)(fr0_ - 0x2c)) = ar4;
      }
      else {
        if (cVar3 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0xc7c35000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x70) = 0x8c02f404c7c35000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
        ar5 = 0;
        ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c02f404(ar4,0,iVar1,ar7); });
        ar6 = iVar1;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c105094(ar4,ar5,ar6,ar7));
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x3c) == 2) {
    ar5 = 2;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x38);
  if (iVar1 == 2) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    iVar1 = 0;
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(int *)(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
      iVar1 = 0x6c;
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c104f5c\n.set _FUN_8c104f5c, _FUN_8c104f5c_def\n");
