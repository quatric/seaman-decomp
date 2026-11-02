#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c1f3d9c_def(undefined1 *ar4,char *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f3d9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (ar6 == 1) {
    iVar4 = 0x20;
    pbVar8 = ar4 + 5;
    do {
      iVar12 = 6;
      do {
        pbVar7 = pbVar8;
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          bVar2 = bVar2 << 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *pbVar7 = bVar9;
        iVar12 = iVar12 + -1;
        pbVar8 = pbVar7 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar7 + 0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 2) {
    iVar4 = 0x20;
    puVar5 = ar4 + 0xba;
    do {
      iVar12 = 6;
      do {
        puVar6 = puVar5;
        uVar10 = 0;
        uVar3 = (uint)0x80;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            uVar10 = uVar10 | uVar3;
          }
          uVar3 = uVar3 >> 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *puVar6 = (char)uVar10;
        iVar12 = iVar12 + -1;
        puVar5 = puVar6 + 1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      puVar5 = puVar6 + -0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 3) {
    iVar4 = 0x20;
    pbVar8 = ar4 + 0xc0;
    do {
      iVar12 = 6;
      do {
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          iVar11 = iVar11 + -1;
          bVar2 = bVar2 << 1;
        } while (iVar11 != 0);
        pbVar8 = pbVar8 + -1;
        *pbVar8 = bVar9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  iVar4 = (int)0xc0;
  do {
    uVar10 = 0;
    uVar3 = (uint)0x80;
    iVar12 = 8;
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      if (((int)cVar1 & 8U) != 0) {
        uVar10 = uVar10 | uVar3;
      }
      uVar3 = uVar3 >> 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *ar4 = (char)uVar10;
    iVar4 = iVar4 + -1;
    ar4 = ar4 + 1;
  } while (iVar4 != 0);
  return (int)cVar1;
}

__asm__(".globl FUN_8c1f3d9c\n.set FUN_8c1f3d9c, FUN_8c1f3d9c_def\n");

}
