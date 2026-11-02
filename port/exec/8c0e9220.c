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
int FUN_8c0e9220_def(int ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *a7;
  char cVar8;
  
  puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  iVar3 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c14012c));
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar7 = ar5;
  a7 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c02602c(ar5,ar5,ar6,ar7));
  if (*(uint *)(unsigned)(0xb4 + ar4) != (uVar1 & 0xffff)) {
    if (*(uint *)(unsigned)(0xb4 + ar4) < 5) {
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
      *(byte *)(unsigned)(0xbc + ar4) = (byte)(((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
      *(char *)(unsigned)(0xbc + ar4) =
           *(char *)(unsigned)(0xbc + ar4) - (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f);
      uVar7 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,0xb,ar6,a7));
      *(char *)(unsigned)(ar4 + 0x4d) = (char)uVar7;
      *(undefined1 *)(unsigned)(ar4 + 0x4e) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x11) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x4f) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x12) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x13) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x50) = *(char *)(unsigned)(ar4 + 0x50) + '\x01';
          }
        }
      }
      for (iVar3 = 0; iVar3 < 0x12; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 * 2 + iVar2 + 0x51) = 0;
          *(undefined1 *)(unsigned)(ar4 + iVar3 * 2 + iVar2 + 0x75) = 0;
        }
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + 1;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),0x12c,ar6,a7));
    if (iVar3 == 0xc8) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),0x5a,ar6,a7));
    if (iVar3 == 0x4b) {
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
    }
    uVar7 = 100;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),100,ar6,a7));
    if (iVar3 == 0x41) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
    }
    *(undefined1 *)(unsigned)(0xbd + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
    cVar8 = -(char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f) -
            (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
    if (cVar8 != *(char *)(unsigned)(0xbc + ar4)) {
      *(undefined1 *)(unsigned)(0xbd + ar4) = 1;
    }
    *(char *)(unsigned)(0xbc + ar4) = cVar8;
  }
  *(undefined4 *)(unsigned)(0xcc + ar4) = 1;
  *(undefined4 *)(unsigned)(0xd0 + ar4) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c02602c(ar5,uVar7,ar6,a7));
  iVar3 = 0xb4;
  *(uint *)(unsigned)(0xb4 + ar4) = uVar1 & 0xffff;
  return iVar3;
}

__asm__(".globl _FUN_8c0e9220\n.set _FUN_8c0e9220, _FUN_8c0e9220_def\n");
