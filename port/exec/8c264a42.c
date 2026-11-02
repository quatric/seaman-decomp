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
int FUN_8c264a42_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264a42";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 *a7;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ar4_01;
  int iVar6;
  int *a4;
  
  ar4_00 = *(undefined4 *)(unsigned)(ar4 + 4);
  ar4_01 = *(undefined4 *)(unsigned)(ar4 + 0xc);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), s_E1205_Illigal_parameter_MWRN_269aa8(ar4_01,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), ret_const_7fffffff_2629e8(ar4_01,ar5,ar6,ar7));
  if (((*(int *)(unsigned)(ar4 + 0x48) <= iVar2) ||
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c26316e(ar4_00,ar5,ar6,ar7)), iVar3 <= iVar2)) ||
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c262c38(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7)), iVar2 == 3)) {
    if (*(char *)(unsigned)(ar4 + 0x70) == '\0') {
      if (*(char *)(unsigned)(ar4 + 0x72) == '\0') {
        ar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 36)), s_E1205_Illigal_parameter_MWRN_2691ba(ar4_01,1,ar6,ar7));
      }
      *(undefined1 *)(unsigned)(ar4 + 1) = 3;
    }
    *(undefined1 *)(unsigned)(ar4 + 0x71) = 1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c262c38(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (iVar2 == 3) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c263df6(ar4,ar5,ar6,ar7));
    puVar1 = ((void *)(unsigned)0x8c013ff8);
    iVar2 = 0x48;
    iVar4 = *(int *)(unsigned)(ar4 + 0x48);
    iVar6 = 0;
    puVar5 = (undefined4 *)(unsigned)(ar4 + 0x18);
    if (0 < iVar3) {
      do {
        a4 = (int *)(unsigned)*puVar5;
        puVar5 = puVar5 + 1;
        a7 = &(*(undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,0,iVar4 * iVar3 * 2,a7));
        (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(puVar1)))((*(undefined4 *)(fr0_ - 0x24)),0,(*(undefined4 *)(fr0_ - 0x20)),a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,1,&(*(undefined4 *)(fr0_ - 0x24)),a7));
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c264a42\n.set _FUN_8c264a42, _FUN_8c264a42_def\n");
