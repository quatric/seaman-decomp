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
int FUN_8c0f816c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f816c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0faa98(ar4 + 0x1054,ar5,ar6,ar7));
  iVar4 = 0;
  if (*(int *)(unsigned)(0x89134 + ar4) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_REQUEST_HOT_0f9780(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(0x89134 + ar4) = uVar2;
    iVar4 = 0;
    if (*(int *)(unsigned)(0x89140 + ar4) != 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(*(undefined4 *)(unsigned)(0x89140 + ar4),ar5,ar6,ar7));
      *(uint *)(unsigned)(0x102c + ar4) = uVar3 & 0xffff;
      *(undefined4 *)(unsigned)(0x1034 + ar4) = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1011b0))))
                        (*(undefined4 *)(unsigned)(0x7cc + *(int *)(unsigned)(0x89140 + ar4)),ar5,ar6,ar7));
      iVar1 = 0x1034;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(undefined4 *)(unsigned)(0x1034 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

__asm__(".globl _FUN_8c0f816c\n.set _FUN_8c0f816c, _FUN_8c0f816c_def\n");
