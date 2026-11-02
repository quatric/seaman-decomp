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
int FUN_8c1f1766_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f1766";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  undefined4 *a5;
  ushort uVar4;
  int iVar5;
  
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x20) = 1;
  iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x1c);
  if (iVar5 == 0) {
    a4 = 0;
  }
  else {
    a4 = *(undefined4 *)(unsigned)(iVar5 + 0x3c);
  }
  a5 = &(*(undefined4 *)(fr0_ - 0x28));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x10))))(a4,a5,ar6,ar7));
  if (iVar5 == 0) goto LAB_8c1f19d4;
  uVar4 = (ushort)iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    sVar1 = *(short *)(unsigned)(iVar5 + 0x48);
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
    *(ushort *)(unsigned)(iVar5 + 0x50) = uVar4;
    *(undefined4 *)(unsigned)(iVar5 + 0x3c) = 0;
    *(undefined2 *)(unsigned)(iVar5 + 0x48) = 0;
    if (iVar2 != 1) goto LAB_8c1f19d4;
    if (sVar1 == 1) {
      *(undefined4 *)(unsigned)(iVar5 + 0x18) = (*(undefined4 *)(fr0_ - 0x28));
      *(int *)(unsigned)(iVar5 + 0x14) = *(int *)(unsigned)(iVar5 + 0x14) + *(int *)(unsigned)(iVar5 + 0x1c);
      *(undefined2 *)(unsigned)(iVar5 + 0x4a) = 2;
      if (*(int *)(unsigned)(iVar5 + 0x24) != 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x24))))(*(undefined4 *)(unsigned)(iVar5 + 0x28),a5,ar6,ar7));
      }
      goto LAB_8c1f19d4;
    }
    if (sVar1 != 3) {
      if (sVar1 != 4) {
        if (sVar1 == 7) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f15f4((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x40,&(*(undefined4 *)(fr0_ - 0x40)),ar6,ar7));
          if (iVar3 == 0) {
            *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar5 + 8)) = (*(undefined4 *)(fr0_ - 0x40));
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + 4) = (*(undefined4 *)(fr0_ - 0x3c));
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + 8) = (*(undefined4 *)(fr0_ - 0x38));
            *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + 0xc) = (*(undefined4 *)(fr0_ - 0x34));
            *(uint *)(unsigned)(*(int *)(unsigned)(iVar5 + 8) + 0x10) = (*(uint *)(fr0_ - 0x30)) & 0xffffff;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(unsigned)(iVar5 + 0x50) = 5;
          *(undefined2 *)(unsigned)(iVar5 + 0x52) = 0xffed;
          *(undefined4 *)(unsigned)(iVar5 + 0x44) = 0;
        }
        else {
          if (sVar1 != 8) goto LAB_8c1f19d4;
          ar7 = 0x8c470f9c;
          ar6 = *(undefined4 *)(unsigned)(iVar5 + 4);
          iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x48))))
                            (0x8c470f94,0x8c470f98,ar6,0x8c470f9c));
          if (iVar3 != 0) {
            *(int *)(unsigned)(iVar5 + 0x3c) = iVar3;
            *(undefined2 *)(unsigned)(iVar5 + 0x50) = 4;
            *(undefined2 *)(unsigned)(iVar5 + 0x48) = 6;
            *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x1c) = iVar5;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(unsigned)(iVar5 + 0x50) = 5;
          *(undefined2 *)(unsigned)(iVar5 + 0x52) = 0xffe4;
          *(undefined4 *)(unsigned)(iVar5 + 0x44) = 0;
          *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar5 + 4)) = 0;
        }
        goto LAB_8c1f1988;
      }
      *(undefined4 *)(unsigned)(iVar5 + 0x18) = *(undefined4 *)(unsigned)(iVar5 + 0x20);
      *(int *)(unsigned)(iVar5 + 0x14) = *(int *)(unsigned)(iVar5 + 0x14) + *(int *)(unsigned)(iVar5 + 0x1c);
    }
    *(undefined2 *)(unsigned)(iVar5 + 0x4a) = 2;
  }
  else {
    if (iVar2 == 0x41) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x24))))
                        (*(undefined4 *)(unsigned)(iVar5 + 0x3c),&(*(int *)(fr0_ - 0x44)),ar6,ar7));
      if (iVar3 == 0) {
        if ((*(int *)(fr0_ - 0x44)) < 1) {
          *(undefined2 *)(unsigned)(iVar5 + 0x4a) = 2;
        }
        else {
          *(undefined2 *)(unsigned)(iVar5 + 0x4a) = 0;
        }
        *(undefined4 *)(unsigned)(iVar5 + 0x18) = *(undefined4 *)(unsigned)(iVar5 + 0x20);
      }
      else if (iVar3 == 1) {
        *(int *)(unsigned)(iVar5 + 0x18) = (*(int *)(fr0_ - 0x44));
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 4) {
      *(undefined4 *)(unsigned)(iVar5 + 0x40) = (*(undefined4 *)(fr0_ - 0x20));
      if (*(short *)(unsigned)(iVar5 + 0x48) == 1) {
        *(undefined4 *)(unsigned)(iVar5 + 0x18) = (*(undefined4 *)(fr0_ - 0x28));
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 0x43) goto LAB_8c1f19d4;
    if ((iVar2 != 5) && (iVar2 != 0x40)) {
      *(ushort *)(unsigned)(iVar5 + 0x50) = uVar4 & 0xff;
      *(undefined4 *)(unsigned)(iVar5 + 0x3c) = 0;
      *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
      goto LAB_8c1f19d4;
    }
    *(ushort *)(unsigned)(iVar5 + 0x50) = uVar4;
    *(short *)(unsigned)(iVar5 + 0x52) = (short)(*(undefined4 *)(fr0_ - 0x28));
    *(undefined4 *)(unsigned)(iVar5 + 0x44) = (*(undefined4 *)(fr0_ - 0x24));
    *(undefined4 *)(unsigned)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
    if (*(short *)(unsigned)(iVar5 + 0x52) == -0x1d) {
      if (*(int *)(unsigned)(iVar5 + 0x44) == 0x3a) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f23e0(a4,a5,ar6,ar7));
        if ((iVar3 == 6) || (iVar3 == 0)) {
          *(undefined2 *)(unsigned)(iVar5 + 0x52) = 0xffe9;
        }
      }
      else if (*(int *)(unsigned)(iVar5 + 0x44) == 0x104) {
        *(undefined2 *)(unsigned)(iVar5 + 0x52) = 0xffdb;
      }
    }
LAB_8c1f1988:
    if ((*(short *)(unsigned)(iVar5 + 0x52) == -0x17) || (*(short *)(unsigned)(iVar5 + 0x52) == -0x21)) {
      *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x34) = 1;
    }
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x24) != 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x24))))
                (*(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x28),(int)*(short *)(unsigned)(iVar5 + 0x52),ar6,ar7));
    }
    if (*(int *)(unsigned)(iVar5 + 0x34) != 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x34))))
                (*(undefined4 *)(unsigned)(iVar5 + 0x38),(int)*(short *)(unsigned)(iVar5 + 0x52),ar6,ar7));
    }
  }
LAB_8c1f19d4:
  *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2739e0) + 0x20) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c1f1766\n.set _FUN_8c1f1766, _FUN_8c1f1766_def\n");
