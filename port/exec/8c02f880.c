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
undefined4 FUN_8c02f880_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02f880";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 a7;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fr1 = 0;
  double dVar7;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar9;
  char cVar10;
  char cVar11;
  double dVar8;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 0;
  puVar3 = ar6;
  a7 = ar7;
  (vsp = ((unsigned long)(fr0_ - 120)), Vec3_ctor_zero(((uint *)(fr0_ - 0x34)),ar5,ar6,ar7));
  if (cVar11 == '\0') {
    in_fr15 = 1e+07;
  }
  iVar4 = 0;
  if (cVar11 == '\0') {
    ((uint *)(fr0_ - 0x34))[0] = 0;
  }
  else {
    ((uint *)(fr0_ - 0x34))[3] = 0;
    ((uint *)(fr0_ - 0x34))[0] = in_fr1;
  }
  dVar7 = (double)(ulonglong)in_fr1;
  ((uint *)(fr0_ - 0x34))[2] = 0;
  ((uint *)(fr0_ - 0x34))[1] = 0;
  (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7));
  for (puVar6 = (undefined4 *)(unsigned)0x0; uVar2 = ar7,
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7)), (int)puVar6 < iVar1;
      puVar6 = (undefined4 *)(unsigned)((int)puVar6 + 1)) {
    uVar2 = ar7;
    puVar3 = puVar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x114))))(iVar1,uVar2,puVar3,a7));
    if ((*(int *)(fr0_ + 0x00000000)) == iVar1) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb4))))(iVar1,uVar2,puVar3,a7));
      if (iVar1 == 1) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0xb8))))(iVar1,uVar2,puVar3,a7));
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  if ((*(short *)(fr0_ + 0x00000004)) < iVar4) {
    if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar2,puVar3,a7); });
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x44)),uVar2,puVar3,a7));
      if (cVar11 == '\0') {
        in_fr15 = F32HI(dVar7);
      }
      (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,puVar3,a7));
      uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    }
    for (puVar6 = (undefined4 *)(unsigned)0x0; iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x11c))))(ar5,ar7,puVar3,a7)),
        (int)puVar6 < iVar4; puVar6 = (undefined4 *)(unsigned)((int)puVar6 + 1)) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x114))))(iVar4,uVar2,puVar3,a7));
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0x114))))(iVar4,uVar2,puVar3,a7));
      if ((*(int *)(fr0_ + 0x00000000)) == iVar4) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0xb4))))(iVar4,uVar2,puVar3,a7));
        if (iVar4 == 1) {
          uVar2 = ar7;
          puVar3 = puVar6;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar4 + 8) + 0xb8))))(iVar4,uVar2,puVar3,a7));
          if (iVar4 == 0) {
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(*ar6,uVar2,puVar3,a7); });
            uVar2 = ar7;
            puVar3 = puVar6;
            ar4_00 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); FUN_8c02f670(ar4_00,uVar2,puVar3,a7); });
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x74))); *(unsigned *)((((unsigned long)(fr0_ - 120)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 120)) - 8); Vec3_sub(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),puVar3,a7); });
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_assign(((uint *)(fr0_ - 0x34)),((undefined1 *)(fr0_ - 0x74)),puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,puVar3,a7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,puVar3,a7));
            (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
            if (cVar10 == '\0') {
              bVar9 = F32HI(dVar7) < in_fr15;
            }
            else {
              bVar9 = dVar7 < CONCAT44D(in_fr14,in_fr15);
            }
            if (bVar9) {
              (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
              dVar8 = dVar7;
              if (cVar11 == '\0') {
                dVar8 = (double)(D2U(dVar7) >> 0x20);
              }
              dVar7 = (double)(D2U(dVar8) & 0xffffffff);
              if (SUB84(dVar8,0) != 0.0) {
                (vsp = ((unsigned long)(fr0_ - 120)), Vec3_length_sq(((uint *)(fr0_ - 0x34)),uVar2,puVar3,a7));
                if (cVar11 == '\0') {
                  in_fr15 = F32HI(dVar7);
                }
                puVar3 = puVar6;
                uVar5 = (vsp = ((unsigned long)(fr0_ - 120)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x100))))(ar5,ar7,puVar6,a7));
              }
            }
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((uint *)(fr0_ - 0x34)),0xffffffff,puVar3,a7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 120)), Vec3_dtor(((uint *)(fr0_ - 0x34)),0xffffffff,puVar3,a7));
    uVar5 = 0;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c02f880\n.set _FUN_8c02f880, _FUN_8c02f880_def\n");
