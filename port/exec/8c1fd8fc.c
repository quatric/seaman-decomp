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
undefined4 FUN_8c1fd8fc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fd8fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 8) != 0) && (ar5 != 0)) {
    iVar3 = ar4 * 0x148;
    iVar1 = *(int *)(unsigned)(iVar3 + -0x73b87c1c);
    ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a54);
    iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a64);
    if (((iVar1 == 0) ||
        (((ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a58), iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a68), iVar1 == 1 ||
          (ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a5c), iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a6c), iVar1 == 2)) ||
         (ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a60), iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c273a70), iVar1 == 3)))) &&
       ((ar7_00 + iVar2 + 1) * 0x200 + 0x20 <= ar6)) {
      (((undefined1 *)(unsigned)0x8c4783e2))[iVar3] = 1;
      *(short *)(unsigned)(((undefined1 *)(unsigned)0x8c4783e0) + iVar3) = (short)ar4;
      *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) = ar4 * 0x4c + -0x73b831c0;
      (((undefined1 *)(unsigned)0x8c4783ea))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783eb))[iVar3] = 0;
      (((undefined1 *)(unsigned)0x8c4783ec))[iVar3] = 0;
      *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c47840c) + iVar3) = ar5;
      *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar3) = ar5 + 0x20;
      *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478404) + iVar3) = ar5 + 0x220;
      *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c478408) + iVar3) = (ar7_00 + 1) * 0x200 + ar5 + 0x20;
      *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c4783ee) + iVar3) = 1;
      *(short *)(unsigned)(((undefined1 *)(unsigned)0x8c4783f0) + iVar3) = (short)ar7_00;
      *(short *)(unsigned)(((undefined1 *)(unsigned)0x8c4783f2) + iVar3) = (short)iVar2;
      *(undefined2 *)(unsigned)(((undefined1 *)(unsigned)0x8c4783f4) + iVar3) = 0x20;
      (vsp = ((unsigned long)(fr0_ - 256)), memset(iVar3 + -0x73b87be8,0,0x10,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 256)), memset(iVar3 + -0x73b87bd8,0,0x100,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 256)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c47840c) + iVar3),0x47,0x20,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 256)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478400) + iVar3),0x53,0x20,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 256)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478404) + iVar3),0x46,0x20,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 256)), memset(*(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c478408) + iVar3),0x44,0x20,ar7_00));
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x30) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar3) + 0x1c);
      (((undefined1 *)(unsigned)0x8c4783e8))[iVar3] = 1;
      (((undefined1 *)(unsigned)0x8c4783e9))[iVar3] = 1;
      return 0;
    }
  }
  return 0xffffff00;
}

__asm__(".globl _FUN_8c1fd8fc\n.set _FUN_8c1fd8fc, _FUN_8c1fd8fc_def\n");
