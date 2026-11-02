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
int FUN_8c1fe534_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fe534";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined1 *ar6_01;
  
  iVar1 = 0x8c4783e2;
  *ar6 = 0;
  if (*(char *)(unsigned)(iVar1 + ar4 * 0x148) != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fd550(ar4,uVar3,ar6_00,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7));
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), ret_const_0_200aec(ar4,ar5,ar6_00,ar7));
        if (-1 < iVar1) {
          uVar3 = ar5;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c200b10(ar4,ar5,ar6_00,ar7));
          if (iVar1 < 0) {
            return (int)(int)0xffffff41;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c200ab6(ar4,uVar3,ar6_00,ar7));
          if (iVar1 != 0) {
            ar6_01 = ((undefined1 *)(fr0_ - 0x40));
            iVar2 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c200566(ar4,ar5,ar6_01,ar7));
            *(undefined4 *)(unsigned)0x8c47d2e4 = iVar2;
            if (iVar2 < 0) {
              (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c200ae4(iVar1,ar5,ar6_01,ar7));
              return (int)(int)0xffffff05;
            }
            *(undefined4 *)(unsigned)(iVar1 + 4) = 0;
            *(undefined4 *)(unsigned)(iVar1 + 0x34) = (*(undefined4 *)(fr0_ - 0x18));
            *(undefined4 *)(unsigned)(iVar1 + 0x38) = (*(undefined4 *)(fr0_ - 0x34));
            *(undefined4 *)(unsigned)(iVar1 + 0x40) = (*(undefined4 *)(fr0_ - 0x34));
            *(int *)(unsigned)(iVar1 + 0x28) = ar4;
            *(undefined2 *)(unsigned)(iVar1 + 2) = (*(undefined2 *)(fr0_ - 0x38));
            *(undefined1 *)(unsigned)(iVar1 + 1) = (*(undefined1 *)(fr0_ - 0x36));
            *ar6 = iVar1;
            return 0;
          }
        }
        return (int)(int)0xffffff07;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe534\n.set _FUN_8c1fe534, _FUN_8c1fe534_def\n");
