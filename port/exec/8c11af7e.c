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
undefined4 FUN_8c11af7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11af7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
                    (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6,ar7));
  if (iVar1 != 0) {
    if (((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x18)) == ((void *)(unsigned)0x8c11af3a)) {
      return 0;
    }
    iVar2 = (int)0x12c;
    *(int *)(unsigned)(iVar2 + ar4) = *(int *)(unsigned)(iVar2 + ar4) + 1;
    iVar4 = iVar1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 8 + ar4))))(ar4,iVar1,ar6,ar7));
    if (iVar2 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,0x77,ar6,ar7));
      ar7 = 0;
      ar6 = 0;
      *(unsigned *)(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c11af3a);
      iVar4 = 0xb;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xb,0,0));
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    if (*(char *)(unsigned)(0x1d8 + ar4) != '\0') {
      if (*(uint *)(unsigned)(0x1d4 + ar4) <= *(uint *)(unsigned)(0x12c + ar4)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ae6c(ar4,iVar4,ar6,ar7));
      }
      *(int *)(unsigned)((*(int *)(unsigned)(0x12c + ar4) + 1) * 4 + *(int *)(unsigned)(0x1cc + ar4)) =
           (int)*(short *)(unsigned)((uint)*(ushort *)(unsigned)(0xde + ar4) * 2 + iVar1) +
           *(int *)(unsigned)(*(int *)(unsigned)(0x12c + ar4) * 4 + *(int *)(unsigned)(0x1cc + ar4));
      iVar4 = *(int *)(unsigned)(0x1d0 + ar4);
      *(int *)(unsigned)((*(int *)(unsigned)(0x12c + ar4) + 1) * 4 + iVar4) =
           (int)*(short *)(unsigned)(iVar1 + (uint)*(ushort *)(unsigned)(0xe0 + ar4) * 2) +
           *(int *)(unsigned)(*(int *)(unsigned)(0x12c + ar4) * 4 + iVar4);
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,ar6,ar7));
    iVar4 = iVar1 + (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) + 0xc);
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1a8 + ar4))))(ar4,iVar1,iVar4,ar7));
    if ((uVar3 & 0xffff) == 0) {
      return 1;
    }
    if ((*(int *)(unsigned)(0x128 + ar4) != 0) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11aaa8(ar4,iVar1,iVar4,ar7)), (uVar3 & 0xff) != 0)) {
      *(unsigned *)(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c11af3a);
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,8,0,0));
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
  }
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar1 + 0x40)) == *(int *)(unsigned)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c11af7e\n.set _FUN_8c11af7e, _FUN_8c11af7e_def\n");
