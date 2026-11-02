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
int FUN_8c267740_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267740";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  
  iVar7 = 0xd000001;
  if (((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) && (iVar7 = 0x7000103, ar4 != 0)) &&
     (iVar7 = 0x3000001, ((byte)ar7 & 0xf0) == 0)) {
    bVar1 = *(byte *)(unsigned)(ar4 + 1);
    piVar6 = (int *)(unsigned)((short)(char)bVar1 * 0x2c + (int)0xa8 + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)));
    *piVar6 = ar5;
    pbVar9 = 0x8c4bd42c;
    puVar2 = 0x8c4bd428;
    iVar7 = 0x3000001;
    if (*(char *)(unsigned)((int)piVar6 + 5) == '\x01') {
      bVar10 = 0;
    }
    else {
      if (*(char *)(unsigned)((int)piVar6 + 5) != '\x02') goto LAB_8c267802;
      bVar10 = (byte)0x80;
    }
    iVar5 = *piVar6;
    if (iVar5 == 1) {
      bVar8 = 0;
    }
    else if (iVar5 == 0) {
      bVar8 = 0x10;
    }
    else {
      if (iVar5 != 2) goto LAB_8c267802;
      bVar8 = 0x30;
    }
    piVar6[3] = 0;
    piVar6[4] = 0;
    *puVar2 = 0x21;
    puVar3 = 0x8c4bd42d;
    *pbVar9 = bVar1 | bVar10 | bVar8;
    *puVar3 = *(undefined1 *)(unsigned)((int)piVar6 + 6);
    *(char *)(unsigned)((int)puVar2 + 6) = (char)ar6;
    pcVar4 = 0x8c4bd430;
    pbVar9[3] = (byte)((uint)ar6 >> 8);
    *pcVar4 = (byte)ar7 << 3;
    pbVar9 = (byte *)(unsigned)((int)piVar6 + 7);
    for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      ((undefined1 *)(unsigned)iVar7)[0x8c4bd42c] = bVar1;
    }
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(0x8c4bd428,((void *)0x8c267740),vr6,vr7));
  }
LAB_8c267802:
  if (iVar7 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c267740),iVar7,vr6,vr7));
  }
  return iVar7;
}

__asm__(".globl _FUN_8c267740\n.set _FUN_8c267740, _FUN_8c267740_def\n");
