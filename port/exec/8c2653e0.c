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
int FUN_8c2653e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2653e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = ((void *)(unsigned)0x8c268650);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  iVar4 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0));
  iVar3 = 0xd000001;
  if (iVar4 != 0) {
    iVar3 = (int)0x1d0;
    iVar5 = *(int *)(unsigned)(0x1cc + iVar4);
    iVar6 = iVar5 + 0x20;
    *(int *)(unsigned)(0x1cc + -0x1c + iVar4) = iVar6;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(iVar6,*(int *)(unsigned)puVar1 + iVar3,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(iVar5 + 0x21,*(int *)(unsigned)puVar1 + (int)0x1d1,vr6,vr7));
    if ((*(char *)(unsigned)(*(int *)(unsigned)puVar1 + (int)0x1d0) == '\x01') &&
       (*(char *)(unsigned)((int)0x1d1 + *(int *)(unsigned)puVar1) == '\0')) {
      iVar5 = iVar5 + 0x23;
    }
    else {
      iVar5 = iVar5 + 0x22;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(iVar5,(int)0x1d2 + *(int *)(unsigned)puVar1,vr6,vr7));
    iVar3 = (int)0xa0;
    *(undefined1 *)(unsigned)((int)0x1d3 + *(int *)(unsigned)puVar1) = 0;
    puVar2 = ((void *)(unsigned)0x8c268618);
    (vsp = ((unsigned long)(fr0_ - 0)), aica_ram_268618(iVar3 + iVar6,*(int *)(unsigned)puVar1 + (int)0x1b4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0xa4 + iVar6,*(int *)(unsigned)puVar1 + (int)0x1b8,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0xa8 + iVar6,*(int *)(unsigned)puVar1 + (int)0x1bc,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0xac + iVar6,*(int *)(unsigned)puVar1 + (int)0x1c0,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0xb0 + iVar6,*(int *)(unsigned)puVar1 + (int)0x1c4,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0xb4 + iVar6,*(int *)(unsigned)puVar1 + (int)0x1c8,vr6,vr7));
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c2653e0),iVar3,vr6,vr7));
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2653e0\n.set _FUN_8c2653e0, _FUN_8c2653e0_def\n");
