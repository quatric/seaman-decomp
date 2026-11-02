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
undefined4 FUN_8c034d48_def(short *ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034d48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5,ar6,ar7));
  if (((((short)uVar1 != 8) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) &&
      ((uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5_00,ar6_00,ar7)), (short)uVar1 != 0x10 ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1))))
     && ((*(int *)(unsigned)(ar4 + 4) != 0 ||
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c0_034f3c(ar6[5],ar5_00,ar6_00,ar7)), iVar2 != 1)
         ))) {
    if ((char)ar4[0x14] == '\x01') {
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034f48(ar4,ar6,ar6_00,ar7));
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar6[2] + 0xa8,ar5_00,ar6_00,ar7));
    iVar2 = (int)ar5 - iVar2;
    uVar1 = 0x3c;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0103d0(iVar2,0x3c,ar6_00,ar7));
    if ((iVar3 == 1) && (iVar2 != *(int *)(unsigned)(ar4 + 0x10))) {
      *(int *)(unsigned)(ar4 + 0x12) = *(int *)(unsigned)(ar4 + 0x12) + 1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010284(iVar2,0x3c,ar6_00,ar7));
      ar6_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035028(ar4,uVar1,ar6,ar7));
    }
    *(int *)(unsigned)(ar4 + 0x10) = iVar2;
    if (*ar4 == -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035110(ar4,ar6,ar6_00,ar7));
    }
    else {
      if (*(int *)(unsigned)(ar4 + 4) == 1) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x14))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar4;
      }
      if ((*(int *)(unsigned)(ar4 + 4) == 2) || (*(int *)(unsigned)(ar4 + 4) == 3)) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x18))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar4;
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 4;
      }
      if (*(int *)(unsigned)(ar4 + 4) == 4) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x1c))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar1;
      }
      if (*(int *)(unsigned)(ar4 + 4) == 5) {
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 5;
        if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x22) == '\0') {
          *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 6;
        }
        *ar4 = -1;
        ar4[0x12] = 0;
        ar4[0x13] = 0;
        ar4[4] = 0;
        ar4[5] = 0;
      }
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x14) = 0;
  return 0x28;
}

__asm__(".globl _FUN_8c034d48\n.set _FUN_8c034d48, _FUN_8c034d48_def\n");
