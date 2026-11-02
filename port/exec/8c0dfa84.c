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
undefined4 FUN_8c0dfa84_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0dfa84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  int iVar3;
  float fVar5;
  double dVar4;
  double in_dr14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0191e4(((undefined1 *)(fr0_ - 0xa0)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0xb0)),ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0x7f7fffff);
  }
  iVar3 = 0;
  iVar2 = 0;
  if (*(int *)(unsigned)(ar4 + 0x9d8) == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0dac50(ar4,ar5,ar6,ar7));
  }
  if (iVar2 == 0) {
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c1264b8),*ar5);
    }
    else {
      dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c1264bc),(*(undefined4 *)(unsigned)(unsigned)0x8c1264b8));
    }
    if (SUB84(dVar4,0) == F32HI(dVar4)) {
      *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
    }
    else {
      for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
        ar7 = ((undefined1 *)(fr0_ - 0xac));
        ar6 = ((undefined1 *)(fr0_ - 0xb0));
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019508(((undefined1 *)(fr0_ - 0xa0)),ar4 + iVar2 * 0x16c + 0x22d4c,ar6,ar7));
        uVar1 = SUB84(in_dr14,0);
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c022fc0(((undefined1 *)(fr0_ - 0xb0)),ar5,ar6,ar7));
        fVar5 = F32HI(dVar4);
        in_dr14 = dVar4;
        if (cVar8 == '\0') {
          in_dr14 = CONCAT44D(fVar5,uVar1);
        }
        if (cVar7 == '\0') {
          bVar6 = fVar5 < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            uVar1 = (undefined4)((ulonglong)in_dr14 >> 0x20);
            in_dr14 = CONCAT44D(uVar1,uVar1);
          }
          iVar3 = ar4 + iVar2 * 0x16c + 0x22d48;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(0x428c0000,SUB84(dVar4,0));
      }
      else {
        dVar4 = 5.33949302018055e-311;
      }
      if (cVar7 == '\0') {
        bVar6 = SUB84(in_dr14,0) < F32HI(dVar4);
      }
      else {
        bVar6 = in_dr14 < dVar4;
      }
      if (bVar6) {
        *(int *)(unsigned)(ar4 + 0x9d8) = iVar3;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
      }
    }
  }
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x9d4);
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_019270(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0dfa84\n.set _FUN_8c0dfa84, _FUN_8c0dfa84_def\n");
