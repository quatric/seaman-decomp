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
undefined4 FUN_8c0274bc_def(int ar4,le<ushort>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0274bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  le<ushort>* ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5,ar6,ar7));
  if (iVar1 != 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7));
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7));
  ar6 = (int)(short)uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02775c(ar4,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027374(ar4 + 0x21c,uVar2,ar6,ar7));
  ar5_00 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027364(*(le<undefined4>* )(unsigned)(0x308 + ar4),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02735c(ar4 + 0x21c,ar5_00,ar6,ar7));
LAB_8c027550:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa5b4(0x8c35468c,ar5_00,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
  if (iVar1 == iVar4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x40))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7));
    if (0 < iVar1) {
      ar5_00 = (le<ushort>* )(unsigned)0x1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b04c(ar4,1,ar6,ar7));
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (le<ushort>* )(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],8,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      else {
        ar5_00 = (le<ushort>* )(unsigned)
                 (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uint)ar5[1],0x18,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
    }
  }
  else {
    ar5_00 = (le<ushort>* )(unsigned)(uint)*ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027344(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5_00,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025ff4(ar4 + 0x174,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a6f8(ar4,ar5_00,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(ar4 + 0x1ec,ar5_00,ar6,ar7));
  if ((char)uVar2 != '\0') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b190(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0353bc(ar4 + 0x2dc,ar4 + 0x174,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x3c))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar4 + 0x174,ar4 + 0x2dc,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0274bc\n.set FUN_8c0274bc, FUN_8c0274bc_def\n");

}
