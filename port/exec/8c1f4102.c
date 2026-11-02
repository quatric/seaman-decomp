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
undefined4 FUN_8c1f4102_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4102";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = 0x8c4727b4;
  iVar7 = *(undefined4 *)(unsigned)0x8c4727b4;
  iVar6 = iVar7 + 0x28;
  puVar5 = (uint *)(unsigned)(0x44c + iVar7);
  if (0 < *(int *)(unsigned)(0x10e4 + iVar7)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4a00(*(undefined4 *)(unsigned)(0x10e4 + iVar7),1,vr6,vr7));
  }
  puVar2 = ((void *)(unsigned)0x8c1f55e4);
  for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
    if ((*(char *)(unsigned)((int)0xf90 + *piVar3 + iVar7) != '\0') && (*(char *)(unsigned)(iVar6 + 6) == '\0'))
    {
      cVar1 = *(char *)(unsigned)(iVar6 + 4);
      if (cVar1 == '\x01') {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(iVar7,vr5,vr6,vr7));
      }
      else if (cVar1 == '\x02') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f56b0(iVar7,vr5,vr6,vr7));
      }
      else if (cVar1 == '\x03') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f566c(iVar7,vr5,vr6,vr7));
      }
      else if (cVar1 == '\x04') {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5628(iVar7,vr5,vr6,vr7));
      }
      else if (cVar1 == '\t') {
        uVar4 = *puVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = 1;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5582(iVar7,uVar4,vr6,vr7));
      }
    }
    puVar5 = puVar5 + 0x1e;
    iVar6 = iVar6 + 0x2c;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f59c8(vr4,vr5,vr6,vr7));
  return 0;
}

__asm__(".globl _FUN_8c1f4102\n.set _FUN_8c1f4102, _FUN_8c1f4102_def\n");
