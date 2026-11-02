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
int s_VM_App_Icon_VMI_01b2b2_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_VM_App_Icon_VMI_01b2b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 uVar3;
  int *ar7_00;
  int unaff_r8 = 0;
  undefined4 ain0;
  
  ar7_00 = ((int *)(fr0_ - 0x24));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0213bc(0x8c3eb334,"VM_App_Icon.VMI",((undefined1 *)(unsigned)0x8c12fb29),ar7_00));
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    ain0 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01ab78(ar4,3,ar5,ar7_00));
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01b5dc(ar4,ar7,ar5,ar7_00));
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 36)), malloc_thunk(iVar2 << 9,uVar3,ar5,ar7_00));
      if (ar4_00 != 0) {
        (vsp = ((unsigned long)(fr0_ - 36)), memmove(ar4_00,ar6,ar7,ar7_00));
        uVar3 = 0x280;
        (vsp = ((unsigned long)(fr0_ - 36)), memset(ar4_00 + 0x200,0,0x280,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); strcpy(ar4_00 + 0x200,s0,uVar3,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); strcpy(ar4_00 + 0x210,s4,uVar3,ar7_00); });
        *(undefined2 *)(unsigned)(ar4_00 + 0x240) = 1;
        *(undefined4 *)(unsigned)(ar4_00 + 0x248) = ar7;
        (vsp = ((unsigned long)(fr0_ - 36)), memmove(ar4_00 + 0x260,((int *)(fr0_ - 0x24))[0] + 0xa0,0x220,ar7_00));
        *(int *)(unsigned)(iVar1 * 0x28 + ar4 + 0x246c) = iVar2;
        *(int *)(unsigned)(iVar1 * 0x28 + ar4 + 0x2470) = ar4_00;
        unaff_r8 = iVar1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021428(0x8c3eb334,"VM_App_Icon.VMI",((undefined1 *)(unsigned)0x8c12fb29),ar7_00));
  }
  return unaff_r8 = 0;
}

__asm__(".globl _s_VM_App_Icon_VMI_01b2b2\n.set _s_VM_App_Icon_VMI_01b2b2, _s_VM_App_Icon_VMI_01b2b2_def\n");
