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
undefined4 FUN_8c0c7438_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c7438";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x2d160 + ar4) == 1) {
    puVar3 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x139;
    ar4_00 = uVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01bba0(uVar1,puVar3,ar6,ar7));
    if (iVar2 != 0) {
      ar6 = ((undefined1 *)(fr0_ - 0x24));
      puVar3 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x16b;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01bc2c(uVar1,puVar3,ar6,ar7));
      ar4_00 = uVar1;
      if (iVar2 != 4) {
        ar4_01 = ar5 + 0x96;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0b7804(ar4_01,puVar3,ar6,ar7));
        if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0b79f0(ar4_01,puVar3,ar6,ar7));
          puVar3 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x8e;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 36)), s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3));
          (vsp = ((unsigned long)(fr0_ - 36)), pure_virtual_stub(ar4,ar5,uVar1,puVar3));
          return 1;
        }
        goto LAB_8c0c755a;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0b79f0(ar4_00,puVar3,ar6,ar7));
    puVar3 = (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x8e;
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 36)), s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3));
    (vsp = ((unsigned long)(fr0_ - 36)), pure_virtual_stub(ar4,ar5,uVar1,puVar3));
  }
  else {
LAB_8c0c755a:
    (vsp = ((unsigned long)(fr0_ - 36)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0c7438\n.set _FUN_8c0c7438, _FUN_8c0c7438_def\n");
