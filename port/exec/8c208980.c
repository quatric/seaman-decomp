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
undefined4 FUN_8c208980_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c208980";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 a6;
  
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c50) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c54) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c58) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c5c) = *(undefined4 *)(unsigned)(ain0 + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c60) = *(undefined4 *)(unsigned)(ain0 + 8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9c64) = *(undefined4 *)(unsigned)(ain0 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c((*(undefined4 *)(unsigned)(unsigned)0x8c4a9d4c),6,*(undefined4 *)(unsigned)(ain0 + 0x10),ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(ain0 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(unsigned)(ain0 + 0x1c),ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar3 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(undefined4 *)(unsigned)(iVar3 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(undefined4 *)(unsigned)(iVar3 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(unsigned)(iVar3 + 0x10),ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar3 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(unsigned)(ain0 + 0x1c),ar7));
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar4 + 4);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(undefined4 *)(unsigned)(iVar4 + 8);
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(undefined4 *)(unsigned)(iVar4 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(unsigned)(iVar4 + 0x10),ar7));
  iVar3 = iVar1 + 1;
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(undefined4 *)(unsigned)(iVar4 + 0x18);
  a6 = *(undefined4 *)(unsigned)(ain0 + 0x1c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar3,a6,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,iVar3,a6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d5c) = *(undefined4 *)(unsigned)(ain0 + 0xc);
  return 0;
}

__asm__(".globl _FUN_8c208980\n.set _FUN_8c208980, _FUN_8c208980_def\n");
