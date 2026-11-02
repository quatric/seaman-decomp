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
int FUN_8c1fe236_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fe236";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 284; for (int i_ = 0; i_ < 284; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int ar5_00;
  undefined1 *puVar5;
  undefined1 *ar6_00;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar7 + 2) != '\0') {
    ar5_00 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7));
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fd550(ar4,ar5_00,ar6,ar7));
      if ((iVar2 != 0) && (*(char *)(unsigned)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 284)), thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7));
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        for (iVar6 = 0; iVar6 < 0x20; iVar6 = iVar6 + 1) {
          *(undefined1 *)(unsigned)(ar5 + iVar6) = *(undefined1 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x20) + iVar6 + 0x10);
        }
        puVar5 = (undefined1 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x20) + 0x30);
        ar6_00 = ((undefined1 *)(fr0_ - 0x14));
        for (puVar4 = ((undefined1 *)(fr0_ - 0x1c)); puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c200c82(ar5 + 0x30,((undefined1 *)(fr0_ - 0x1c)),ar6_00,ar7));
        *(short *)(unsigned)(ar5 + 0x20) = (short)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar7 + 0x1c)) + 1;
        *(short *)(unsigned)(ar5 + 0x22) = (short)*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x1c) + 0x30);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe350(ar4,0,ar6_00,ar7));
        *(short *)(unsigned)(ar5 + 0x26) = (short)uVar3;
        *(undefined2 *)(unsigned)(ar5 + 0x24) = *(undefined2 *)(unsigned)(ar5 + 0x26);
        *(short *)(unsigned)(ar5 + 0x28) = (short)*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x1c) + 0x38);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe350(ar4,1,ar6_00,ar7));
        *(short *)(unsigned)(ar5 + 0x2a) = (short)uVar3;
        *(short *)(unsigned)(ar5 + 0x2c) = (short)*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x1c) + 0x2c) + 1;
        *(ushort *)(unsigned)(ar5 + 0x2e) = (ushort)*(byte *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x20) + 0x4e);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe236\n.set _FUN_8c1fe236, _FUN_8c1fe236_def\n");
