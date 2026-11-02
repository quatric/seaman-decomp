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
undefined4 FUN_8c12112c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12112c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *a4;
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r13 = 0;
  
  iVar3 = *(int *)(unsigned)(in_r0 + unaff_r13);
  a4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x284 + unaff_r13));
  while (a4 != (undefined4 *)(unsigned)0x0) {
    puVar2 = (undefined4 *)(unsigned)a4[4];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(*a4,0xf4 + unaff_r13,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(a4[2],0xf4 + unaff_r13,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))(a4,0xf4 + unaff_r13,ar6,ar7));
    a4 = puVar2;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))
            (*(undefined4 *)(unsigned)(0x2a8 + unaff_r13),0xf4 + unaff_r13,ar6,ar7));
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0x18))))
                    (*(undefined4 *)(unsigned)(0x29c + unaff_r13),0xf4 + unaff_r13,vr6,vr7));
  return uVar1;
}

__asm__(".globl _FUN_8c12112c\n.set _FUN_8c12112c, _FUN_8c12112c_def\n");
