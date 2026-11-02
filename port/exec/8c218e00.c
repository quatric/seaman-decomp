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
undefined4 FUN_8c218e00_def(int *ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c218e00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined4 in_PR = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  puVar2 = (fr0_ + (int)0xffffffe8);
  if (((((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x100) == 0) || ((float)ar4[5] <= 0.0)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c217e18(ar4,ar5,ar6,ar7)), iVar1 == 0)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa554) = 0;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x40) != 0) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c212740(0,ar4 + 2,(fr0_ + (int)0xffffffe8),ar7); });
      if (cVar5 == '\0') {
        dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),ar4[5]);
      }
      else {
        dVar3 = CONCAT44D(in_PR,(*(undefined4 *)(fr0_ - 0x10)));
      }
      if (cVar4 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) + F32LO(dVar3),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar3;
      }
      if (cVar5 == '\0') {
        dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa544));
      }
      ar6 = puVar2;
      if (cVar4 == '\0' && SUB84(dVar3,0) < F32HI(dVar3)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa554) = 1;
      }
    }
    ar6_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa510);
    if ((*ar4 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c218c82(*ar4,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa510),ar6,ar7)), iVar1 != -1)) {
      if (ar4[1] != 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c218804(ar4[1],(*(undefined4 *)(unsigned)(unsigned)0x8c4c0fa0),ar6_00,ar7); });
      }
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c218e00\n.set _FUN_8c218e00, _FUN_8c218e00_def\n");
