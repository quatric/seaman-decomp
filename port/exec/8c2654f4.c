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
int FUN_8c2654f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2654f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x7000103;
  if ((((ar4 != 0) && (piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)), iVar2 = 0x9000001, *piVar3 == 0x56524453))
      && (iVar2 = 0xb000002, (char)piVar3[1] == '\x01')) && (*(char *)(unsigned)((int)piVar3 + 5) < '\x02')
     ) {
    (vsp = ((unsigned long)(fr0_ - 4)), aica_reg_265278(vr4,vr5,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 4)), aica_ram_2684b8(vr4,vr5,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c265704((&(*(undefined1 *)(unsigned)0x8c2784b8)),vr5,vr6,vr7));
    ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c265ea0(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784b8)),piVar3 + 8,piVar3[2],0xffffffff); });
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c265ff4(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784b8)),0,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 4)), aica_reg_2652f4(vr4,vr5,vr6,vr7));
    puVar1 = ((void *)(unsigned)0x8c2653e0);
    for (iVar2 = 0x200000; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c4)) = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(vr4,vr5,vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2659dc(ar4,vr5,vr6,vr7));
    iVar2 = 0;
  }
  if (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784b8)) != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c265784(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784b8)),vr5,vr6,vr7));
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2688a0(((void *)(unsigned)0x8c2654f4),iVar2,vr6,vr7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2654f4\n.set _FUN_8c2654f4, _FUN_8c2654f4_def\n");
