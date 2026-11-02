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
undefined4 FUN_8c203de0_def(le<int>* ar4,le<int>* ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c203de0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  ushort uVar2;
  le<ushort>* puVar3;
  int iVar4;
  int iVar5;
  
  (*(le<int>* )(fr0_ - 0x1c)) = 0;
  (*(le<int>* )(fr0_ - 0x28)) = 0;
  (*(le<int>* )(fr0_ - 0x20)) = 0;
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  (*(le<int>* )(fr0_ - 0x30)) = 0;
  (*(le<int>* )(fr0_ - 0x34)) = 0;
  (*(le<int>* )(fr0_ - 0x2c)) = 0;
  for (iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar4 != 0; iVar4 = *(le<int>* )(unsigned)(iVar4 + 8)) {
    if ((*(le<int>* )(fr0_ - 0x34)) < *(le<int>* )(unsigned)(iVar4 + 0x10)) {
      (*(le<int>* )(fr0_ - 0x34)) = *(le<int>* )(unsigned)(iVar4 + 0x10);
    }
    (*(le<int>* )(fr0_ - 0x24)) = (*(le<int>* )(fr0_ - 0x24)) + *(le<int>* )(unsigned)(iVar4 + 0x10);
  }
  for (; iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), puVar3 != (le<ushort>* )(unsigned)0x0; puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4))) {
    if ((*puVar3 & 4) == 0) {
      if ((*(le<int>* )(fr0_ - 0x34)) < *(le<int>* )(unsigned)(puVar3 + 8)) {
        (*(le<int>* )(fr0_ - 0x34)) = *(le<int>* )(unsigned)(puVar3 + 8);
      }
      (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + *(le<int>* )(unsigned)(puVar3 + 8);
    }
  }
  for (; puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar4 != 0; iVar4 = *(le<int>* )(unsigned)(iVar4 + 8)) {
    if ((*(le<int>* )(fr0_ - 0x30)) < *(le<int>* )(unsigned)(iVar4 + 0x10)) {
      (*(le<int>* )(fr0_ - 0x30)) = *(le<int>* )(unsigned)(iVar4 + 0x10);
    }
    (*(le<int>* )(fr0_ - 0x20)) = (*(le<int>* )(fr0_ - 0x20)) + *(le<int>* )(unsigned)(iVar4 + 0x10);
  }
  for (; puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428), puVar3 != (le<ushort>* )(unsigned)0x0; puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4))) {
    if ((*puVar3 & 4) == 0) {
      if ((*(le<int>* )(fr0_ - 0x30)) < *(le<int>* )(unsigned)(puVar3 + 8)) {
        (*(le<int>* )(fr0_ - 0x30)) = *(le<int>* )(unsigned)(puVar3 + 8);
      }
      (*(le<int>* )(fr0_ - 0x1c)) = (*(le<int>* )(fr0_ - 0x1c)) + *(le<int>* )(unsigned)(puVar3 + 8);
    }
  }
  do {
    if (puVar1 == (le<ushort>* )(unsigned)0x0) {
      *ar4 = (*(le<int>* )(fr0_ - 0x24)) + (*(le<int>* )(fr0_ - 0x28));
      *ar5 = (*(le<int>* )(fr0_ - 0x20)) + (*(le<int>* )(fr0_ - 0x1c));
      *ar6 = (*(le<int>* )(fr0_ - 0x2c));
      if ((*(le<int>* )(fr0_ - 0x34)) < (*(le<int>* )(fr0_ - 0x30))) {
        (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x30));
      }
      *ar7 = (*(le<int>* )(fr0_ - 0x34));
      return 0;
    }
    uVar2 = *puVar1 & 0xf000;
    if (uVar2 == 0x1000) {
      iVar4 = 0x90;
LAB_8c203f32:
      iVar5 = 0x10;
    }
    else {
      if (uVar2 == 0x2000) {
        iVar4 = 0xa0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x3000) {
        iVar4 = 0xc0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x4000) {
        iVar4 = 0xe0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x5000) {
        iVar4 = 0x200;
        iVar5 = 8;
      }
      else if (uVar2 == 0x6000) {
        iVar4 = 0x360;
        iVar5 = 4;
      }
      else if (uVar2 == 0x7000) {
        iVar4 = 0x800;
        iVar5 = 2;
      }
      else if (uVar2 == 0x8000) {
        iVar4 = 0xd60;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
      }
    }
    (*(le<int>* )(fr0_ - 0x38)) = 0;
    puVar3 = puVar1 + 6;
    if (iVar5 != 0) {
      do {
        if (*(le<int>* )(unsigned)puVar3 == 0) {
          (*(le<int>* )(fr0_ - 0x2c)) = (*(le<int>* )(fr0_ - 0x2c)) + iVar4;
        }
        (*(le<int>* )(fr0_ - 0x38)) = (*(le<int>* )(fr0_ - 0x38)) + 1;
        puVar3 = puVar3 + 2;
      } while ((*(le<int>* )(fr0_ - 0x38)) < iVar5);
    }
    puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 2));
  } while( true );
}

__asm__(".globl FUN_8c203de0\n.set FUN_8c203de0, FUN_8c203de0_def\n");

}
