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
uint FUN_8c11daa4_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11daa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 d;
  undefined4 uVar4;
  int a6;
  
  a6 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 != 0) {
    return 1;
  }
  if (ar5 == (undefined4 *)(unsigned)0x0) {
    uVar4 = 0x13;
  }
  else if (ar6 == 0x38) {
    sVar1 = *(short *)(unsigned)(ar4 + 0x3e);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cc2c(ar4,ar5[0xd],a6,ar7));
      if (iVar2 == 0) {
        d = 10;
        *(int *)(unsigned)(ar4 + 0x78) = ar5[3] * 100;
        *(undefined4 *)(unsigned)(ar4 + 0x7c) = ar5[9];
        *(undefined4 *)(unsigned)(ar4 + 0x80) = ar5[0xc];
        *(undefined4 *)(unsigned)(ar4 + 0x84) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x88) = ar5[1];
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = *ar5;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar5[2],10,vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x90) = uVar4;
        *(undefined4 *)(unsigned)(ar4 + 0x94) = ar5[7];
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar5[8],d,vr6,vr7));
        *(undefined4 *)(unsigned)(ar4 + 0x98) = uVar4;
        *(undefined4 *)(unsigned)(ar4 + 0x9c) = ar5[0xd];
        *(short *)(unsigned)(ar4 + 0xa0) = 0x32 - (short)ar5[6];
        *(short *)(unsigned)(ar4 + 0xa2) = 0x32 - (short)ar5[5];
        *(undefined4 *)(unsigned)(ar4 + 0xa4) = ar5[4];
        *(undefined4 *)(unsigned)(ar4 + 0xac) = ar5[10];
        *(undefined4 *)(unsigned)(ar4 + 0xb0) = *ar5;
        *(undefined4 *)(unsigned)(ar4 + 0xb4) = ar5[2] << 1;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = ar5[0xb];
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x50,ar4 + 0x7c,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x51,ar4 + 0x88,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x52,ar4 + 0x9c,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x53,ar4 + 0xa0,0));
        if ((uVar3 & 0xff) != 0) {
          return 1;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x54,ar4 + 0xa4,0));
        goto LAB_8c11dc70;
      }
      uVar4 = 0x14;
    }
    else {
      uVar4 = 7;
    }
  }
  else {
    uVar4 = 0x17;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,uVar4,a6,ar7));
LAB_8c11dc70:
  return uVar3 & 0xff;
}

__asm__(".globl _FUN_8c11daa4\n.set _FUN_8c11daa4, _FUN_8c11daa4_def\n");
