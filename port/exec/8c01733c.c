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
undefined4 Class_129938_m6_01733c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129938_m6_01733c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  
  cVar6 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(ar4 + 0x90,ar5,ar6,ar7));
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar1 + 4)) + 8;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x18 + iVar1);
    puVar3 = (undefined8 *)(unsigned)(iVar5 * 0xc + ar4 + 0x30);
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)puVar4 = *(undefined4 *)(unsigned)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x18 + iVar1 + 4);
    puVar3 = (undefined8 *)(unsigned)(iVar5 * 0xc + ar4 + 0x34);
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)puVar4 = *(undefined4 *)(unsigned)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(unsigned)(iVar5 * 0x18 + iVar1 + 8);
    puVar3 = (undefined8 *)(unsigned)(iVar5 * 0xc + ar4 + 0x38);
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)puVar4 = *(undefined4 *)(unsigned)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015af8(ar4 + 0x90,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_129938_m6_01733c\n.set _Class_129938_m6_01733c, _Class_129938_m6_01733c_def\n");
