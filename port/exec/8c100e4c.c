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
undefined4 FUN_8c100e4c_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c100e4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined8 *ar5_00;
  byte bVar3;
  undefined4 in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(unsigned)ar5 = 0;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
    uVar2 = 0;
  }
  else {
    if ((9 < *(int *)(unsigned)(ar4 + 0x59c)) &&
       (*(int *)(unsigned)(ar4 + 0x59c) = *(int *)(unsigned)(ar4 + 0x59c) + 1, 0x27 < *(int *)(unsigned)(ar4 + 0x59c))) {
      *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ed40(0x8c3dd7dc,ar5_00,ar6,ar7));
    if ((iVar1 == 1) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7)), iVar1 == 1)) {
      if (*(int *)(unsigned)(ar4 + 0x59c) < 2) {
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 0;
        uVar2 = 0;
      }
      else {
        if (*(int *)(unsigned)(ar4 + 0x59c) == 2) {
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)ar5 = 0x3f000000;
          }
          else {
            *ar5 = 0x3f3333333f000000;
          }
        }
        else if (*(int *)(unsigned)(ar4 + 0x59c) == 3) {
          if (cVar4 == '\0') {
            *(undefined4 *)(unsigned)ar5 = 0x3f333333;
          }
          else {
            *ar5 = 0x8c0c51a03f333333;
          }
        }
        else if (cVar4 == '\0') {
          *(undefined4 *)(unsigned)ar5 = 0x3f800000;
        }
        else {
          *ar5 = CONCAT44(0x3f800000,in_fr1);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 10;
        uVar2 = 2;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(0x8c3dd7dc,ar5_00,ar6,ar7));
      if ((iVar1 == 1) &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(0x8c3dd7dc,ar5_00,ar6,ar7)), iVar1 != 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 1;
        uVar2 = 0;
      }
      else if (*(int *)(unsigned)(ar4 + 0x59c) < 1) {
        uVar2 = 0;
      }
      else {
        for (bVar3 = 0; bVar3 < 0x78; bVar3 = bVar3 + 1) {
          if (*(char *)(unsigned)(ar4 + (uint)(byte)(*(char *)(unsigned)(ar4 + 0x598) - bVar3) * 4 + 0x193) == '\0') {
            if (bVar3 < 0x3c) {
              return 0;
            }
            if (0x3b < bVar3) {
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51a0(ar4,4,ar6,ar7));
              *(undefined4 *)(unsigned)(ar4 + 0x59c) = 2;
            }
            if (0x59 < bVar3) {
              *(undefined4 *)(unsigned)(ar4 + 0x59c) = 3;
            }
            return 1;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x59c) = 4;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100e4c\n.set _FUN_8c100e4c, _FUN_8c100e4c_def\n");
