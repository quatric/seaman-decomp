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
int * FUN_8c21214e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21214e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = 0x8c4a9ef8;
  *(undefined4 *)(unsigned)0x8c4a9ef8 = 0;
  puVar2 = 0x8c4a9efc;
  *(undefined4 *)(unsigned)0x8c4a9efc = 0xffffffff;
  puVar3 = 0x8c4a9f00;
  *(undefined4 *)(unsigned)0x8c4a9f00 = 0xffffffff;
  puVar1[3] = 0xffffffff;
  puVar2[3] = 0;
  puVar3[3] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(unsigned)0x8c4a9f1c = 0;
  iVar5 = *(undefined4 *)(unsigned)0x8c4a9db4;
  while ((iVar5 != 0 && ((vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4a9e14)))(((undefined1 *)(unsigned)1)[0x8c4a9e14],vr5,vr6,vr7)), *(undefined4 *)(unsigned)0x8c4a9f1c < 0xb))) {
    iVar5 = *(undefined4 *)(unsigned)0x8c4a9db4;
  }
  piVar4 = 0x8c4a9ef0;
  if (*(undefined4 *)(unsigned)0x8c4a9ef0 == 0) {
    *(undefined4 *)(unsigned)0x8c4a9f1c = 0;
    iVar5 = *(undefined4 *)(unsigned)0x8c4a9db8;
    while ((iVar5 != 0 &&
           (piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4a9e14)))(((undefined1 *)(unsigned)1)[0x8c4a9e14],vr5,vr6,vr7)), *(undefined4 *)(unsigned)0x8c4a9f1c < 0xb))) {
      iVar5 = *(undefined4 *)(unsigned)0x8c4a9db8;
      piVar4 = 0x8c4a9db8;
    }
  }
  *(undefined4 *)(unsigned)0x8c4a9db8 = 0;
  *(undefined4 *)(unsigned)0x8c4a9db4 = 0;
  return piVar4;
}

__asm__(".globl _FUN_8c21214e\n.set _FUN_8c21214e, _FUN_8c21214e_def\n");
