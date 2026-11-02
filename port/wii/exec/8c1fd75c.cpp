#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1fd75c_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fd75c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 308; for (int i_ = 0; i_ < 308; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a7;
  int iVar2;
  int iVar3;
  le<undefined2>* puVar4;
  
  a7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc);
  puVar4 = (le<undefined2>* )(unsigned)((undefined1 *)(unsigned)0x8c4783e0);
  if (ar4 == 0xf) {
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 4) = 0;
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a64);
    iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a54);
  }
  else {
    if (ar4 != 0x21) {
      if (ar4 == 0x41) {
        *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 4) = 2;
        uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a6c);
        iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a5c);
      }
      else {
        if (ar4 != 0x7a) {
          return 0xffffff00;
        }
        *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 4) = 3;
        uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a70);
        iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a60);
      }
      (*(le<undefined2>* )(fr0_ - 0x24)) = (undefined2)uVar1;
      goto LAB_8c1fd7e8;
    }
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 4) = 1;
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a68);
    iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c273a58);
  }
  (*(le<undefined2>* )(fr0_ - 0x24)) = (undefined2)uVar1;
LAB_8c1fd7e8:
  (*(le<uint>* )(fr0_ - 0x34)) = 1;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if ((ar5 & (*(le<uint>* )(fr0_ - 0x34))) != 0) {
      *(undefined1 *)(unsigned)(puVar4 + 1) = 1;
      *puVar4 = (short)iVar3;
      *(le<int>* )(unsigned)(puVar4 + 0xe) = iVar3 * 0x4c + -0x73b831c0;
      *(undefined1 *)(unsigned)(puVar4 + 5) = 0;
      *(undefined1 *)(unsigned)((int)puVar4 + 0xb) = 0;
      *(undefined1 *)(unsigned)(puVar4 + 6) = 0;
      *(le<int>* )(unsigned)(puVar4 + 0x16) = ar6;
      *(le<int>* )(unsigned)(puVar4 + 0x10) = ar6 + 0x20;
      *(le<int>* )(unsigned)(puVar4 + 0x12) = ar6 + 0x220;
      *(le<int>* )(unsigned)(puVar4 + 0x14) = (iVar2 + 1) * 0x200 + ar6 + 0x20;
      *(undefined1 *)(unsigned)(puVar4 + 4) = 0;
      *(undefined1 *)(unsigned)((int)puVar4 + 9) = 0;
      puVar4[7] = 1;
      puVar4[8] = (short)iVar2;
      puVar4[9] = (*(le<undefined2>* )(fr0_ - 0x24));
      puVar4[10] = 0x20;
      (vsp = ((unsigned long)(fr0_ - 308)), memset(puVar4 + 0x1c,0,0x10,a7));
      (vsp = ((unsigned long)(fr0_ - 308)), memset(puVar4 + 0x24,0,0x100,a7));
      (vsp = ((unsigned long)(fr0_ - 308)), memset(*(le<undefined4>* )(unsigned)(puVar4 + 0x16),0x47,0x20,a7));
      (vsp = ((unsigned long)(fr0_ - 308)), memset(*(le<undefined4>* )(unsigned)(puVar4 + 0x10),0x53,0x20,a7));
      (vsp = ((unsigned long)(fr0_ - 308)), memset(*(le<undefined4>* )(unsigned)(puVar4 + 0x12),0x46,0x20,a7));
      (vsp = ((unsigned long)(fr0_ - 308)), memset(*(le<undefined4>* )(unsigned)(puVar4 + 0x14),0x44,0x20,a7));
      ar6 = ar6 + ar4 * 0x200 + 0x20;
    }
    (*(le<uint>* )(fr0_ - 0x34)) = (*(le<uint>* )(fr0_ - 0x34)) << 1;
    puVar4 = puVar4 + 0xa4;
  }
  return 0;
}

__asm__(".globl FUN_8c1fd75c\n.set FUN_8c1fd75c, FUN_8c1fd75c_def\n");

}
