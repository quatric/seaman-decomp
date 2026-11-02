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
int FUN_8c0652f4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0652f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  int ar6_00;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x18,ar5,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 3;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x48,ar5,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 4;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,ar5,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 7;
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 8;
    }
    if (*(int *)(unsigned)(ar4 + 0x40) == 3) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 9;
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x40) == 0) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c025f68(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,ar6_00,ar7)), (char)uVar2 == '\x01')) {
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 5;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,ar6_00,ar7));
    *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  if ((*(int *)(unsigned)(ar4 + 0x40) == 0) || (iVar1 = *(int *)(unsigned)(ar4 + 0x40), iVar1 == 3)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5,ar6_00,ar7));
    if ((iVar1 == 0) &&
       ((((iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x34))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,ar6_00,ar7)),
          iVar1 != 1 &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_178_035734(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6_00,ar7)), iVar1 == 0)) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7)), iVar1 == 0)) &&
        (*(int *)(unsigned)(ar4 + 900) == -1)))) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5,ar6_00,ar7));
      ar5_00 = (uint)((char)uVar2 == '\x03');
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), s_JUNGLE_0309ca(ar4 + 0x9c,ar5_00,ar6_00,ar7));
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c025f68(iVar1 * 0x18 + *(int *)(unsigned)(ar6 + 4),ar5_00,ar6_00,ar7));
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        ar6_00 = ar4 + 0x9c;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 900) = uVar2;
      }
      if ((*(int *)(unsigned)(ar4 + 0x40) == 3) && (*(int *)(unsigned)(ar4 + 900) != -1)) {
        (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7));
      }
    }
    iVar1 = *(int *)(unsigned)(ar4 + 4);
    if (((iVar1 == 0) && (iVar1 = 0, *(int *)(unsigned)(ar4 + 0x14c) != 0)) &&
       (iVar1 = *(int *)(unsigned)(ar4 + 900), iVar1 != -1)) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
      *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x12;
      (*(undefined1 *)(unsigned)0x8c136908) = 0x12;
      *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
      (*(undefined1 *)(unsigned)0x8c13690c) = 0xb;
      *(undefined4 *)(unsigned)(ar4 + 0x848) = 0xc;
      (*(undefined1 *)(unsigned)0x8c136910) = 0xc;
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
      if (cVar3 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
      if (cVar3 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x8044af0000;
      }
      iVar1 = 0x80;
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0652f4\n.set _FUN_8c0652f4, _FUN_8c0652f4_def\n");
