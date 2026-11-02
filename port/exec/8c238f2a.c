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
undefined4 FUN_8c238f2a_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c238f2a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = *(ushort *)(unsigned)(ar6 + 4);
  sVar2 = *(short *)(unsigned)(ar6 + 6);
  iVar5 = 0;
  puVar6 = (undefined4 *)(unsigned)*ar4;
  if (0 < sVar2) {
    do {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c259c48(((undefined1 *)(fr0_ - 0x48)),ar5,ar6,ar7));
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      puVar4 = ((undefined1 *)(fr0_ - 0x48));
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x5c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c238ede((fr0_ + (int)0xffffffa4),((undefined1 *)(fr0_ - 0x48)),ar6,ar7); });
      puVar6[1] = puVar6[1] & 0xffff0000 | (*(uint *)(fr0_ - 0x5c)) & 0xffff;
      iVar3 = 2;
      if ((uVar1 & 1) != 0) {
        ar6 = (vsp = ((unsigned long)(fr0_ - 184)), log_message(((undefined1 *)(fr0_ - 0x48)) + 2,puVar4,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c23c814(*puVar6,((undefined1 *)(fr0_ - 0x48)) + 2,ar6,ar7));
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
        if ((uVar1 & 8) != 0) {
          ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x5c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7); });
        }
      }
      else if ((uVar1 & 8) != 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x5c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c238eea(puVar6 + 2,puVar4,ar6,ar7); });
        puVar6[1] = puVar6[1] | 0x1000000;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar5 < sVar2);
  }
  return 1;
}

__asm__(".globl _FUN_8c238f2a\n.set _FUN_8c238f2a, _FUN_8c238f2a_def\n");
