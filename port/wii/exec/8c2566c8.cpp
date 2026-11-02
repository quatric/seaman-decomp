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
uint FUN_8c2566c8_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2566c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  le<uint>* a4;
  
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  for ((*(le<uint>* )(fr0_ - 0x28)) = 0; (*(le<uint>* )(fr0_ - 0x28)) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); (*(le<uint>* )(fr0_ - 0x28)) = (*(le<uint>* )(fr0_ - 0x28)) + 1) {
    a4 = (le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0x24)) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08));
    if ((a4[4] & 2) != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c20cf88(a4 + 6,ar5,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = *a4;
        if ((a4[4] & 1) == 0) {
          iVar1 = 0;
          iVar3 = 0;
          for ((*(le<uint>* )(fr0_ - 0x30)) = 0; (*(le<uint>* )(fr0_ - 0x30)) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); (*(le<uint>* )(fr0_ - 0x30)) = (*(le<uint>* )(fr0_ - 0x30)) + 1) {
            if (*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) == uVar2) {
              (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1,ar5,ar6,ar7));
            }
            iVar3 = iVar3 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
        else {
          iVar1 = 0;
          ar6 = 0;
          ar5 = 0;
          while (ar6 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c)) {
            ar6 = ar6 + 1;
            if (*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + ar5) == uVar2) {
              *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x40) = 0;
              *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x10) =
                   *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x10) & 0xfffffff5;
            }
            ar5 = ar5 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffd;
        if ((uVar2 & 0xfffffffd) == 0) {
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e(a4,ar5,ar6,ar7));
        }
        else {
          *(le<undefined2>* )(unsigned)(a4 + 0x10) = 0;
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e(a4,ar5,ar6,ar7));
    }
    (*(le<int>* )(fr0_ - 0x24)) = (*(le<int>* )(fr0_ - 0x24)) + 0x44;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = 0xffffffff;
  return ain0;
}

__asm__(".globl FUN_8c2566c8\n.set FUN_8c2566c8, FUN_8c2566c8_def\n");

}
