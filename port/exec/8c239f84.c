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
uint FUN_8c239f84_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c239f84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int ar7_00;
  undefined4 *puVar6;
  
  uVar1 = *(ushort *)(unsigned)(ar6 + 4);
  uVar2 = (uint)*(short *)(unsigned)(ar6 + 6);
  (*(int *)(fr0_ - 0x54)) = 0;
  iVar5 = (int)*(short *)(unsigned)(ar6 + 6);
  puVar6 = (undefined4 *)(unsigned)*ar4;
  ar7_00 = iVar5;
  if (0 < iVar5) {
    do {
      (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c238e98(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7_00));
      puVar4 = ((undefined1 *)(fr0_ - 0x48));
      uVar2 = ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c238ede((fr0_ + (int)0xffffffa8),((undefined1 *)(fr0_ - 0x48)),ar6,ar7_00); });
      puVar6[1] = puVar6[1] & 0xffff0000 | (*(uint *)(fr0_ - 0x58)) & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = (vsp = ((unsigned long)(fr0_ - 176)), log_message(((undefined1 *)(fr0_ - 0x48)) + 2,puVar4,ar6,ar7_00));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c23c814(*puVar6,((undefined1 *)(fr0_ - 0x48)) + 2,ar6,ar7_00));
        iVar3 = 0x1e;
      }
      if ((uVar1 & 2) != 0) {
        iVar3 = iVar3 + 2;
      }
      if ((uVar1 & 4) != 0) {
        iVar3 = iVar3 + 2;
      }
      puVar4 = ((undefined1 *)(fr0_ - 0x48)) + iVar3;
      if ((uVar1 & 0x400) == 0) {
        uVar2 = (uint)uVar1;
        if ((uVar1 & 8) != 0) {
          uVar2 = ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00); });
        }
      }
      else if ((uVar1 & 8) != 0) {
        uVar2 = ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7_00); });
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      (*(int *)(fr0_ - 0x54)) = (*(int *)(fr0_ - 0x54)) + 1;
      puVar6 = puVar6 + 3;
    } while ((*(int *)(fr0_ - 0x54)) < iVar5);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c239f84\n.set _FUN_8c239f84, _FUN_8c239f84_def\n");
