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
undefined4 FUN_8c11ea3c_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ea3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  int *ar5_01;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 0;
  ar5_01 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if ((*(short *)(unsigned)(ar4 + 0x3e) != 2) && (*(short *)(unsigned)(ar4 + 0x3e) != 1)) {
      ar5_00 = 7;
      uVar4 = *(undefined4 *)(unsigned)(0xfc + ar4);
LAB_8c11eaae:
      uVar4 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11cd02(uVar4,ar5_00,ar6,ar7));
      return uVar4;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    if (ar5 != (int *)(unsigned)0x0) {
      ar6 = (int)0x80;
      ar5_01 = (int *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(0x100 + ar4)) + 8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c013ec0(*ar5 + 8,ar5_01,ar6,ar7));
      if (iVar2 != 0) {
        ar5_00 = 0xc;
        uVar4 = *(undefined4 *)(unsigned)(0xfc + ar4);
        goto LAB_8c11eaae;
      }
    }
    iVar2 = (int)0x104;
    if (*(int *)(unsigned)(iVar2 + ar4) != 0) {
      *(int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(iVar2 + ar4) + 4) + -1;
    }
    puVar1 = ((void *)(unsigned)0x8c11c99a);
    if (ar5 == (int *)(unsigned)0x0) {
      *(undefined4 *)(unsigned)(iVar2 + ar4) = 0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,1,ar6,ar7));
      return uVar3 & 0xff;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c11cb54(ar5,ar5_01,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c10ca2e(((int *)(fr0_ - 0x5c)),ar5_01,ar6,ar7));
      ((int *)(fr0_ - 0x5c))[0] = *ar5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c120348(ar4 + 0x48,0x24,((int *)(fr0_ - 0x5c)),0));
      if ((uVar3 & 0xff) == 0) {
        iVar2 = (int)0x104;
        ar5[1] = ar5[1] + 1;
        *(unsigned *)(unsigned)(iVar2 + ar4) = ar5;
        return *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11ea3c\n.set _FUN_8c11ea3c, _FUN_8c11ea3c_def\n");
