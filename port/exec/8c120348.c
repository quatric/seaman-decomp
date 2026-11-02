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
undefined4 FUN_8c120348_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120348";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 a7;
  uint uVar9;
  int a4;
  
  iVar2 = ar4[1];
  a4 = *ar4;
  pcVar7 = ((char *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((uint)*(ushort *)(unsigned)(a4 + 0x3c) * 4 + *(int *)(unsigned)(a4 + 0x38)) +
                     (uint)*(ushort *)(unsigned)(a4 + 0x3e) * 4));
  iVar6 = *(int *)(unsigned)(pcVar7 + 4);
  uVar9 = 0;
  for (; (iVar6 != 0 && (*pcVar7 != (char)iVar2)); pcVar7 = pcVar7 + 8) {
    iVar6 = *(int *)(unsigned)(pcVar7 + 0xc);
  }
  piVar8 = ((int *)(unsigned long)*(unsigned *)(unsigned)(pcVar7 + 4));
  if (piVar8 != (int *)(unsigned)0x0) {
    iVar6 = *piVar8;
    while ((iVar6 != 0 && ((uint)*(byte *)(unsigned)*piVar8 != (ar5 & 0xff)))) {
      piVar8 = piVar8 + 1;
      iVar6 = *piVar8;
    }
    iVar6 = *piVar8;
    if (iVar6 != 0) {
      uVar3 = ar6;
      a7 = ar7;
      if ((*(ushort *)(unsigned)(iVar6 + 2) != 0xffff) &&
         ((uint)*(ushort *)(unsigned)(iVar6 + 2) != (uint)*(ushort *)(unsigned)(a4 + 0x3e))) {
        *(undefined2 *)(unsigned)(a4 + 0x3e) = *(undefined2 *)(unsigned)(iVar6 + 2);
        uVar9 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x1c))))(a4,(int)*(short *)(unsigned)(a4 + 0x3e),ar6,ar7));
        if ((uVar9 & 0xff) != 0) {
          return uVar9;
        }
      }
      if (*(char *)(unsigned)(iVar6 + 1) == '\0') {
        cVar1 = *(char *)(unsigned)(iVar6 + 9);
        iVar5 = iVar6 + 8;
        while (cVar1 != '\0') {
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120148(a4,iVar5,ar6,ar7));
          uVar9 = uVar9 | (uVar4 & 0xff) == 0;
          cVar1 = *(char *)(unsigned)(iVar5 + 3);
          iVar5 = iVar5 + 2;
        }
      }
      else {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1200f4(a4,(int)*(char *)(unsigned)(iVar6 + 1),uVar3,a7));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1208fc(iVar6 + 8,uVar3,a4,a7));
        uVar9 = (uint)(iVar5 == 0);
      }
      if (*(int *)(unsigned)(iVar6 + 4) != 0) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 4))))(a4,(int)(char)iVar2,ar5,ar6));
        uVar9 = uVar9 | uVar4;
      }
      return uVar9;
    }
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,5,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c120348\n.set _FUN_8c120348, _FUN_8c120348_def\n");
