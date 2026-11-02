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
uint FUN_8c1fa244_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fa244");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  le<undefined4>* puVar7;
  int iVar8;
  uint ar6_00;
  uint uVar9;
  uint uVar10;
  int in_VBR = (void *)0x8cf80000;
  
  iVar2 = 0x8c475bc8;
  iVar1 = 0x8c474bc8;
  iVar3 = (int)(short)ar4;
  iVar4 = iVar3 >> 4;
  uVar9 = ar6 | 0x80000000;
  iVar5 = *(le<int>* )(unsigned)(iVar4 * 4 + 0x8c475bc8);
  iVar8 = iVar5;
  while ((iVar6 = iVar5, iVar6 != 0 && (*(le<uint>* )(unsigned)(iVar6 + 0xc) < uVar9))) {
    iVar8 = iVar6;
    iVar5 = *(le<int>* )(unsigned)(iVar6 + 4);
  }
  ar6_00 = (uint)0x100;
  uVar10 = 1;
  do {
    if ((*(le<uint>* )(unsigned)(uVar10 * 0x10 + 0x8c474bc8 + 0xc) & 0x80000000) == 0) break;
    uVar10 = uVar10 + 1;
  } while (uVar10 < ar6_00);
  if (uVar10 < ar6_00) {
    if ((iVar6 == 0) && (iVar8 == 0)) {
      if (iVar3 < 0x900) {
        *(le<unsigned>* )(unsigned)((int)0x200 + in_VBR + ((int)0xfffffe00 + iVar3 >> 3)) = ((void *)(unsigned)0x8c1fa3f2)
        ;
      }
      else if (iVar3 == 0x900) {
        (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c20759a((&(*(undefined1 *)(unsigned)0x8c1fa416)),0,ar6_00,0x80000000));
      }
      else if (iVar3 == 0x920) {
        (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c2075bc((&(*(undefined1 *)(unsigned)0x8c1fa460)),0,ar6_00,0x80000000));
      }
      else {
        *(le<unsigned>* )(unsigned)(0x22c + in_VBR) = (&(*(undefined1 *)(unsigned)0x8c1fa486));
      }
      puVar7 = (le<undefined4>* )(unsigned)(uVar10 * 0x10 + iVar1);
      *(le<unsigned>* )(unsigned)(iVar4 * 4 + iVar2) = puVar7;
      puVar7[1] = 0;
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
      uVar9 = (uint)(byte)((byte)(short)ar4 >> 5);
      if (iVar3 >> 8 == 10) {
        *(volatile le<undefined4>* )(unsigned)0xa05f6920 = *(volatile le<undefined4>* )(unsigned)0xa05f6920 | 1 << uVar9 + 0xc;
      }
      else if (iVar3 >> 8 == 0xb) {
        *(volatile le<undefined4>* )(unsigned)0xa05f6924 = *(volatile le<undefined4>* )(unsigned)0xa05f6924 | 1 << uVar9;
      }
    }
    else {
      puVar7 = (le<undefined4>* )(unsigned)(uVar10 * 0x10 + 0x8c474bc8);
      if (iVar6 == *(le<int>* )(unsigned)(iVar4 * 4 + 0x8c475bc8)) {
        puVar7[1] = iVar6;
        *(le<unsigned>* )(unsigned)(iVar4 * 4 + iVar2) = puVar7;
      }
      else {
        *(le<unsigned>* )(unsigned)(iVar8 + 4) = puVar7;
        puVar7[1] = iVar6;
      }
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl FUN_8c1fa244\n.set FUN_8c1fa244, FUN_8c1fa244_def\n");

}
