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
undefined4 Class_12b580_m1_0e634c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b580_m1_0e634c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d84e8(ar4 + 0x10dc,ar5,iVar4,ar7));
  uVar3 = *(uint *)(unsigned)(0x10dc + ar4);
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,uVar3,iVar4,ar7));
  if ((*(int *)(unsigned)(0x10dc + ar4) == 0) || (*(int *)(unsigned)(0x10dc + ar4) == 0x8ca0)) {
    if (*(int *)(unsigned)(0x83fc + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x83fc + ar4),iVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(0x83fc + ar4),iVar4,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x83f8 + ar4),iVar4,ar7));
    *(undefined4 *)(unsigned)(0x83fc + ar4) = uVar1;
    uVar3 = *(uint *)(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  if ((*(uint *)(unsigned)(0x10dc + ar4) & 1) == 0) {
    uVar3 = *(uint *)(unsigned)(0x8400 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101154(*(undefined4 *)(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,uVar3,iVar4,ar7));
    if (iVar2 != 0) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,uVar3,iVar4,ar7));
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c101178))))
                          (*(undefined4 *)(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
        uVar3 = uVar3 & 0xff;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8) + 0x50))))
                  (*(int *)(unsigned)(ar4_00 + 8),uVar3,iVar4,ar7));
        ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,uVar3,iVar4,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,ar5,ar6,ar7));
    if (iVar2 == 1) {
      ar5 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar4 * 0x68 + 0xc0c,ar4,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d64a0(ar4 + 0xa68,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b580_m1_0e634c\n.set _Class_12b580_m1_0e634c, _Class_12b580_m1_0e634c_def\n");
