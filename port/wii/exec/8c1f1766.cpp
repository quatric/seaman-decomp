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
int FUN_8c1f1766_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f1766");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  le<undefined4>* a5;
  ushort uVar4;
  int iVar5;
  
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x20) = 1;
  iVar5 = *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x1c);
  if (iVar5 == 0) {
    a4 = 0;
  }
  else {
    a4 = *(le<undefined4>* )(unsigned)(iVar5 + 0x3c);
  }
  a5 = &(*(le<undefined4>* )(fr0_ - 0x28));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x10))))(a4,a5,ar6,ar7));
  if (iVar5 == 0) goto LAB_8c1f19d4;
  uVar4 = (ushort)iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    sVar1 = *(le<short>* )(unsigned)(iVar5 + 0x48);
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
    *(le<ushort>* )(unsigned)(iVar5 + 0x50) = uVar4;
    *(le<undefined4>* )(unsigned)(iVar5 + 0x3c) = 0;
    *(le<undefined2>* )(unsigned)(iVar5 + 0x48) = 0;
    if (iVar2 != 1) goto LAB_8c1f19d4;
    if (sVar1 == 1) {
      *(le<undefined4>* )(unsigned)(iVar5 + 0x18) = (*(le<undefined4>* )(fr0_ - 0x28));
      *(le<int>* )(unsigned)(iVar5 + 0x14) = *(le<int>* )(unsigned)(iVar5 + 0x14) + *(le<int>* )(unsigned)(iVar5 + 0x1c);
      *(le<undefined2>* )(unsigned)(iVar5 + 0x4a) = 2;
      if (*(le<int>* )(unsigned)(iVar5 + 0x24) != 0) {
        (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar5 + 0x24))))(*(le<undefined4>* )(unsigned)(iVar5 + 0x28),a5,ar6,ar7));
      }
      goto LAB_8c1f19d4;
    }
    if (sVar1 != 3) {
      if (sVar1 != 4) {
        if (sVar1 == 7) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f15f4((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x40,&(*(le<undefined4>* )(fr0_ - 0x40)),ar6,ar7));
          if (iVar3 == 0) {
            *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar5 + 8)) = (*(le<undefined4>* )(fr0_ - 0x40));
            *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar5 + 8) + 4) = (*(le<undefined4>* )(fr0_ - 0x3c));
            *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar5 + 8) + 8) = (*(le<undefined4>* )(fr0_ - 0x38));
            *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar5 + 8) + 0xc) = (*(le<undefined4>* )(fr0_ - 0x34));
            *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(iVar5 + 8) + 0x10) = (*(le<uint>* )(fr0_ - 0x30)) & 0xffffff;
            goto LAB_8c1f19d4;
          }
          *(le<undefined2>* )(unsigned)(iVar5 + 0x50) = 5;
          *(le<undefined2>* )(unsigned)(iVar5 + 0x52) = 0xffed;
          *(le<undefined4>* )(unsigned)(iVar5 + 0x44) = 0;
        }
        else {
          if (sVar1 != 8) goto LAB_8c1f19d4;
          ar7 = 0x8c470f9c;
          ar6 = *(le<undefined4>* )(unsigned)(iVar5 + 4);
          iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x48))))
                            (0x8c470f94,0x8c470f98,ar6,0x8c470f9c));
          if (iVar3 != 0) {
            *(le<int>* )(unsigned)(iVar5 + 0x3c) = iVar3;
            *(le<undefined2>* )(unsigned)(iVar5 + 0x50) = 4;
            *(le<undefined2>* )(unsigned)(iVar5 + 0x48) = 6;
            *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x1c) = iVar5;
            goto LAB_8c1f19d4;
          }
          *(le<undefined2>* )(unsigned)(iVar5 + 0x50) = 5;
          *(le<undefined2>* )(unsigned)(iVar5 + 0x52) = 0xffe4;
          *(le<undefined4>* )(unsigned)(iVar5 + 0x44) = 0;
          *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar5 + 4)) = 0;
        }
        goto LAB_8c1f1988;
      }
      *(le<undefined4>* )(unsigned)(iVar5 + 0x18) = *(le<undefined4>* )(unsigned)(iVar5 + 0x20);
      *(le<int>* )(unsigned)(iVar5 + 0x14) = *(le<int>* )(unsigned)(iVar5 + 0x14) + *(le<int>* )(unsigned)(iVar5 + 0x1c);
    }
    *(le<undefined2>* )(unsigned)(iVar5 + 0x4a) = 2;
  }
  else {
    if (iVar2 == 0x41) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0xc) + 0x24))))
                        (*(le<undefined4>* )(unsigned)(iVar5 + 0x3c),&(*(le<int>* )(fr0_ - 0x44)),ar6,ar7));
      if (iVar3 == 0) {
        if ((*(le<int>* )(fr0_ - 0x44)) < 1) {
          *(le<undefined2>* )(unsigned)(iVar5 + 0x4a) = 2;
        }
        else {
          *(le<undefined2>* )(unsigned)(iVar5 + 0x4a) = 0;
        }
        *(le<undefined4>* )(unsigned)(iVar5 + 0x18) = *(le<undefined4>* )(unsigned)(iVar5 + 0x20);
      }
      else if (iVar3 == 1) {
        *(le<int>* )(unsigned)(iVar5 + 0x18) = (*(le<int>* )(fr0_ - 0x44));
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 4) {
      *(le<undefined4>* )(unsigned)(iVar5 + 0x40) = (*(le<undefined4>* )(fr0_ - 0x20));
      if (*(le<short>* )(unsigned)(iVar5 + 0x48) == 1) {
        *(le<undefined4>* )(unsigned)(iVar5 + 0x18) = (*(le<undefined4>* )(fr0_ - 0x28));
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 0x43) goto LAB_8c1f19d4;
    if ((iVar2 != 5) && (iVar2 != 0x40)) {
      *(le<ushort>* )(unsigned)(iVar5 + 0x50) = uVar4 & 0xff;
      *(le<undefined4>* )(unsigned)(iVar5 + 0x3c) = 0;
      *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
      goto LAB_8c1f19d4;
    }
    *(le<ushort>* )(unsigned)(iVar5 + 0x50) = uVar4;
    *(le<short>* )(unsigned)(iVar5 + 0x52) = (short)(*(le<undefined4>* )(fr0_ - 0x28));
    *(le<undefined4>* )(unsigned)(iVar5 + 0x44) = (*(le<undefined4>* )(fr0_ - 0x24));
    *(le<undefined4>* )(unsigned)(iVar5 + 0x3c) = 0;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x1c) = 0;
    if (*(le<short>* )(unsigned)(iVar5 + 0x52) == -0x1d) {
      if (*(le<int>* )(unsigned)(iVar5 + 0x44) == 0x3a) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f23e0(a4,a5,ar6,ar7));
        if ((iVar3 == 6) || (iVar3 == 0)) {
          *(le<undefined2>* )(unsigned)(iVar5 + 0x52) = 0xffe9;
        }
      }
      else if (*(le<int>* )(unsigned)(iVar5 + 0x44) == 0x104) {
        *(le<undefined2>* )(unsigned)(iVar5 + 0x52) = 0xffdb;
      }
    }
LAB_8c1f1988:
    if ((*(le<short>* )(unsigned)(iVar5 + 0x52) == -0x17) || (*(le<short>* )(unsigned)(iVar5 + 0x52) == -0x21)) {
      *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x34) = 1;
    }
    if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x24) != 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x24))))
                (*(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x28),(int)*(le<short>* )(unsigned)(iVar5 + 0x52),ar6,ar7));
    }
    if (*(le<int>* )(unsigned)(iVar5 + 0x34) != 0) {
      (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar5 + 0x34))))
                (*(le<undefined4>* )(unsigned)(iVar5 + 0x38),(int)*(le<short>* )(unsigned)(iVar5 + 0x52),ar6,ar7));
    }
  }
LAB_8c1f19d4:
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x20) = 0;
  return iVar2;
}

__asm__(".globl FUN_8c1f1766\n.set FUN_8c1f1766, FUN_8c1f1766_def\n");

}
