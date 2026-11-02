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
undefined4 FUN_8c209a40_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c209a40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 ar6_00;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(ain0 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(ain0 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),6,*(le<undefined4>* )(unsigned)(ain0 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(ain0 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(ain0 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(ain0 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar3 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar4 + 0x10),ar7));
  iVar3 = iVar1 + 1;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0x18);
  ar6_00 = *(le<undefined4>* )(unsigned)(iVar4 + 0x1c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar3,ar6_00,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,iVar3,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c209a40\n.set FUN_8c209a40, FUN_8c209a40_def\n");

}
