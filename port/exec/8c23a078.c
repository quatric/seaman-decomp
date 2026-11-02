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
undefined4 FUN_8c23a078_def(undefined4 ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23a078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4128; for (int i_ = 0; i_ < 4128; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar4_00;
  
  iVar1 = (int)(int)0xffffefec;
  do {
    (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238e98((fr0_ + (int)0xfffffff8) + iVar1,4,ar6,ar7));
    iVar2 = *(int *)(unsigned)((fr0_ + (int)0xfffffff8) + iVar1);
    if ((((iVar2 == 0x4e4c444d) || (iVar2 == 0x564e4f43)) || (iVar2 == 0x494d5650)) ||
       ((iVar2 == 0x43474d49 || (iVar2 == 0x4d4d4f43)))) {
      (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238e98((int)((ushort *)(fr0_ - 0xc)) + iVar1,4,ar6,ar7));
LAB_8c23a190:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238eba(*(undefined4 *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + iVar1),1,ar6,ar7));
      ar4_00 = ar6;
    }
    else if (iVar2 == 0x4c505650) {
      uVar3 = 0xc;
      (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238e98((int)((ushort *)(fr0_ - 0xc)) + 0x1008 + iVar1,0xc,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4128)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c255f88))))
                ((uint)*(ushort *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x100c + iVar1),uVar3,ar6,ar7));
      if (*(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x100e + iVar1) == 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 2;
      }
      ar4_00 = (fr0_ + (int)0xfffffffc) + iVar1;
      (vsp = ((unsigned long)(fr0_ - 4128)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c238e98))))
                (ar4_00,*(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x1012 + iVar1) * iVar2,ar6,ar7));
      uVar3 = 1;
      iVar2 = (*(int *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x1008 + iVar1) -
              *(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x1012 + iVar1) * iVar2) + -8;
      *(int *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + iVar1) = iVar2;
      (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238eba(iVar2,1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 4128)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c25603a))))
                ((uint)*(ushort *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x100c + iVar1),uVar3,ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4128)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c2560b4))))
                        ((int)*(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x1010 + iVar1) +
                         *(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x100e + iVar1) * 0x10,
                         (int)*(short *)(unsigned)((int)((ushort *)(fr0_ - 0xc)) + 0x1012 + iVar1),ar4_00,ar7));
    }
    else {
      if (iVar2 != 0x54525650) {
        (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238e98((int)((ushort *)(fr0_ - 0xc)) + iVar1,4,ar6,ar7));
        goto LAB_8c23a190;
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 4128)), FUN_8c238eba(0xfffffffc,1,ar6,ar7));
      ar4_00 = ar6;
    }
    ar6 = ar4_00;
    if (*(int *)(unsigned)((fr0_ + (int)0xfffffff8) + iVar1) == 0x54525650) {
      return uVar3;
    }
  } while( true );
}

__asm__(".globl _FUN_8c23a078\n.set _FUN_8c23a078, _FUN_8c23a078_def\n");
