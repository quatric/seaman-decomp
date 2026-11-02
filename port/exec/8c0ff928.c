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
undefined4 FUN_8c0ff928_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff928";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined8 *a5;
  undefined4 uVar4;
  undefined8 *a6;
  undefined4 in_fr1 = 0;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  
  cVar6 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c4413c8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413c4) = 0xc1700000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413c8) = CONCAT31((*(undefined1 *)(unsigned)0x8c4413c8),1);
  }
  if ((*(undefined1 *)(unsigned)0x8c4413d0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413cc) = 0xc1400000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413d0) = CONCAT31((*(undefined1 *)(unsigned)0x8c4413d0),1);
  }
  a5 = ar5;
  a6 = ar6;
  uVar3 = ar7;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c2363e8(((undefined4 *)(fr0_ - 0x90)),ar5,ar6,ar7); });
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0xa0)) = *(undefined4 *)(unsigned)ar5;
    (*(undefined4 *)(fr0_ - 0x9c)) = *(undefined4 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0x98)) = *(undefined4 *)(unsigned)ar6;
    (*(undefined4 *)(fr0_ - 0x94)) = *(undefined4 *)(unsigned)((int)ar6 + 4);
    uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0xa0)) = (undefined4)*ar5;
    (*(undefined4 *)(fr0_ - 0x9c)) = (undefined4)*(undefined8 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0x98)) = (undefined4)*ar6;
    uVar5 = *(undefined8 *)(unsigned)((int)ar6 + 4);
    (*(undefined4 *)(fr0_ - 0x94)) = (undefined4)uVar5;
    ((undefined4 *)(fr0_ - 0x90))[0] = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  (*(undefined4 *)(fr0_ - 0xa4)) = 0x42c80000;
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x120))))(*(int *)(unsigned)(ar4 + 4),a5,a6,uVar3));
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),uVar4);
    uVar4 = (*(undefined4 *)(fr0_ - 0xa4));
    uVar5 = (*(undefined8 *)(fr0_ - 0x48));
  }
  (*(undefined8 *)(fr0_ - 0x48)) = uVar5;
  (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257170(&(*(undefined4 *)(fr0_ - 0xa4)),a5,a6,uVar3));
  uVar4 = ar7;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2595aa(2,ar7,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257148(0x2e38,uVar4,a6,uVar3));
  ar4_00 = ((undefined4 *)(fr0_ - 0x90));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2572ec(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219038(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219070(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c21907e(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c256328(0,uVar4,a6,uVar3); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  if (iVar1 == 0xd) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
  }
  uVar7 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0xb0)) >> 0x10);
  if (iVar1 == 10) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x148))))(*(int *)(unsigned)(ar4 + 4),uVar4,a6,uVar3))
    ;
    if ((short)uVar2 != 3) {
      ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar7,(short)uVar2)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
    }
  }
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x38))))(*(int *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c256210(1,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c016340(ar4 + 0xc,uVar4,a6,uVar3));
  if (cVar6 != '\0') {
    ((undefined4 *)(fr0_ - 0x90))[0] = 0xff000000;
  }
  (*(undefined4 *)(fr0_ - 0x94)) = 0x43700000;
  (*(undefined4 *)(fr0_ - 0x98)) = 0x43a00000;
  (*(undefined4 *)(fr0_ - 0x9c)) = 0x43f00000;
  (*(undefined4 *)(fr0_ - 0xa0)) = 0x44200000;
  (*(undefined4 *)(fr0_ - 0xa4)) = 0x43fa0000;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257170(&(*(undefined4 *)(fr0_ - 0xa4)),uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2595aa(0,ar7,a6,uVar3));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c259046(0xff000000,0xff000000,0xff000000,uVar3));
  return uVar3;
}

__asm__(".globl _FUN_8c0ff928\n.set _FUN_8c0ff928, _FUN_8c0ff928_def\n");
