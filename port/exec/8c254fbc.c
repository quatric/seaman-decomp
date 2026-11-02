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
int FUN_8c254fbc_def(int ar4,int ar5,int ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c254fbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(unsigned)0x8c271d90),vr7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0106dc(ar5 + ar6 + -1,ar6,vr6,vr7));
  iVar1 = iVar1 * 8 + ar4;
  piVar5 = (int *)(unsigned)(ar5 * 8 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0106dc(ar5 + 1,ar6,vr6,vr7));
  piVar6 = (int *)(unsigned)(iVar2 * 8 + ar4);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0106dc(ar5 + 2,ar6,vr6,vr7));
  iVar4 = *piVar5;
  iVar3 = *piVar6;
  *ar7 = *(undefined4 *)(unsigned)(iVar1 + 4);
  ar7[1] = piVar5[1];
  ar7[2] = piVar6[1];
  ar7[3] = *(undefined4 *)(unsigned)(iVar2 * 8 + ar4 + 4);
  return (uint)(0 < iVar3 - iVar4) << 2;
}

__asm__(".globl _FUN_8c254fbc\n.set _FUN_8c254fbc, _FUN_8c254fbc_def\n");
