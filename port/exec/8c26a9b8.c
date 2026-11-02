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
undefined4 s_E1245_sdPstmSetFxCh_return_e_26a9bc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_E1245_sdPstmSetFxCh_return_e_26a9bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r10 = 0;
  int a6;
  int iVar7;
  char in_T = 0;
  
  puVar2 = ((void *)(unsigned)0x8c267a98);
  puVar1 = ((void *)(unsigned)0x8c26a14e);
  if (in_T == '\x01') {
    if (ar6 < 0) {
      a6 = ar6 * 2 + ((int)(ar6 + (uint)(ar6 < 0)) >> 1);
    }
    else {
      a6 = 0x7f;
    }
  }
  else {
    a6 = -0x7f;
  }
  if (*(int *)(unsigned)(ar4 + 0x48) != unaff_r10) {
    for (iVar7 = 0; iVar7 < *(int *)(unsigned)(ar4 + 0xc); iVar7 = iVar7 + 1) {
      ar7 = 0x7f;
      iVar5 = iVar7;
      iVar6 = unaff_r10;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(*(undefined4 *)(unsigned)(ar4 + 0x30),iVar7,unaff_r10,0x7f));
      if (iVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar3,iVar5,iVar6,ar7));
      }
    }
    *(int *)(unsigned)(ar4 + 0x48) = unaff_r10;
  }
  puVar2 = ((void *)(unsigned)0x8c267b20);
  uVar4 = 0x48;
  for (iVar7 = 0; iVar7 < *(int *)(unsigned)(ar4 + 0xc); iVar7 = iVar7 + 1) {
    iVar5 = iVar7;
    iVar6 = a6;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(*(undefined4 *)(unsigned)(ar4 + 0x30),iVar7,a6,ar7));
    uVar4 = 0;
    if (iVar3 != 0) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar3,iVar5,iVar6,ar7));
    }
  }
  return uVar4;
}

__asm__(".globl _s_E1245_sdPstmSetFxCh_return_e_26a9bc\n.set _s_E1245_sdPstmSetFxCh_return_e_26a9bc, _s_E1245_sdPstmSetFxCh_return_e_26a9bc_def\n");
