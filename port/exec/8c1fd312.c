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
undefined4 FUN_8c1fd312_def(int ar4,int ar5,char *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c1fd312";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 308; for (int i_ = 0; i_ < 308; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 *ar7_00;
  undefined4 ar4_00;
  
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4783e0) + ar4 * 0x148));
  iVar2 = ar4;
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1fd550(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f6a30(iVar2,ar5_00,ar6,ar7));
  }
  else {
    ar4_00 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c26d1e8) + ar4 * 4);
    (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7));
    uVar3 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 0x1c) + 0x48);
    ar7_00 = (undefined4 *)(unsigned)0x0;
    for ((*(int *)(fr0_ - 0x24)) = 0; (*(int *)(fr0_ - 0x24)) < *(int *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x2c)) + 0x1c) + 0x40);
        (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1) {
      while( true ) {
        while( true ) {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7));
          if (iVar2 != 0) {
            return 0xffffff30;
          }
          (vsp = ((unsigned long)(fr0_ - 308)), libgcc_divide_helper_010468(uVar3,4,vr6,vr7));
          ar5_00 = 2;
          ar6 = (char *)(unsigned)0x0;
          uVar4 = ar4_00;
          ar7 = ar7_00;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1efeac(ar4_00,2,0,ar7_00));
          if (-1 < iVar2) break;
          (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7));
        }
        while (uVar4 = ar4_00, ar5_00 = iVar2, iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7)),
              iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7));
        }
        (*(int *)(fr0_ - 0x28)) = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7));
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        if (*(char *)(unsigned)((*(int *)(fr0_ - 0x28)) + 4) == '\a') break;
        if (*(char *)(unsigned)((*(int *)(fr0_ - 0x28)) + 4) != -4) {
          return 0xffffff01;
        }
      }
      ar7_00 = (undefined4 *)(unsigned)((int)ar7_00 + 1);
    }
    do {
      while( true ) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7));
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        ar6 = (char *)(unsigned)0x0;
        ar5_00 = 2;
        uVar3 = ar4_00;
        ar7 = ar7_00;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1efee0(ar4_00,2,0,ar7_00));
        if (-1 < iVar2) break;
        (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7));
      }
      while (uVar3 = ar4_00, ar5_00 = iVar2, iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7)),
            iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7));
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 308)), FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7));
      if (iVar1 != 0) {
        return 0xffffff30;
      }
      if (((undefined4 *)(unsigned long)*(unsigned *)0x8c273a48) == (code *)0x0) {
LAB_8c1fd4ac:
        ((char *)(fr0_ - 0x34))[0] = *(char *)(unsigned)(iVar2 + 4);
        (*(undefined4 *)(fr0_ - 0x30)) = *(undefined4 *)(unsigned)(iVar2 + 0xc);
      }
      else {
        ar6 = ((char *)(fr0_ - 0x34));
        ar7 = &(*(undefined4 *)(fr0_ - 0x30));
        ar5_00 = ar5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 308)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c273a48)))(ar4,ar5,ar6,ar7));
        if (iVar1 == 0) goto LAB_8c1fd4ac;
      }
      if (((char *)(fr0_ - 0x34))[0] == '\a') {
        return 0;
      }
    } while (((char *)(fr0_ - 0x34))[0] == -4);
    if (((char *)(fr0_ - 0x34))[0] == -5) {
      return 0xffffff40;
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fd312\n.set _FUN_8c1fd312, _FUN_8c1fd312_def\n");
