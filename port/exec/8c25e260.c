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
undefined4 FUN_8c25e260_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25e260";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint uVar7;
  
  iVar3 = (int)0xf8;
  *(undefined4 *)(unsigned)0x8c4a9c04 = *(int *)(unsigned)((int)(fr0_ + (int)0x00000000) + iVar3);
  *(undefined4 *)(unsigned)0x8c4a9c08 = *(int *)(unsigned)((fr0_ + (int)0xfffffff8) + iVar3);
  *(undefined4 *)(unsigned)0x8c4a9c0c = *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffffc) + iVar3);
  *(undefined4 *)(unsigned)0x8c4a9e8c =
       (*(int *)(fr0_ + 0x00000054)) << 1 | (*(uint *)(fr0_ + 0x00000050)) | (*(int *)(fr0_ + 0x0000005c)) << 2 | (*(int *)(fr0_ + 0x00000068)) << 3
       | (*(int *)(fr0_ + 0x00000030)) << 4 | (*(int *)(fr0_ + 0x00000060)) << 5 | (*(int *)(fr0_ + 0x00000028)) << 6 |
       (*(int *)(fr0_ + 0x0000002c)) << 7 | (*(int *)(fr0_ + 0x00000048)) << 8 | (*(int *)(fr0_ + 0x0000004c)) << 9;
  uVar5 = (uint)0x7ff;
  *(undefined4 *)(unsigned)0x8c4a9e98 = (*(uint *)(fr0_ + 0x00000004)) & uVar5 | ((*(uint *)(fr0_ + 0x00000000)) & uVar5) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e90 = ((*(uint *)(fr0_ + 0x00000004)) & uVar5) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e9c = (*(uint *)(fr0_ + 0x00000008)) & uVar5 | ((*(uint *)(fr0_ + 0x00000014)) & uVar5) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9ea0 = (*(uint *)(fr0_ + 0x00000010)) & uVar5 | ((*(uint *)(fr0_ + 0x0000000c)) & uVar5) << 0x10;
  *(undefined4 *)(unsigned)0x8c4a9e94 = (*(uint *)(fr0_ + 0x00000074)) & uVar5 | ((*(uint *)(fr0_ + 0x00000078)) & uVar5) << 0x10;
  uVar6 = 0x7f;
  uVar7 = (uint)0x3ff;
  *(undefined4 *)(unsigned)0x8c4a9ea4 =
       (*(uint *)(fr0_ + 0x00000018)) & 0x7f | ((*(uint *)(fr0_ + 0x0000001c)) & 0xf) << 8 |
       ((*(uint *)(fr0_ + 0x00000020)) & uVar7) << 0xc | ((*(uint *)(fr0_ + 0x00000024)) & 0x7f) << 0x16;
  uVar5 = ((*(uint *)(fr0_ + 0x00000044)) & 0xf) << 4;
  *(undefined4 *)(unsigned)0x8c4a9eb0 =
       (*(uint *)(fr0_ + 0x00000034)) & 1 | ((*(uint *)(fr0_ + 0x00000038)) & 1) << 1 | ((*(uint *)(fr0_ + 0x0000003c)) & 1) << 2 |
       ((*(uint *)(fr0_ + 0x00000040)) & 1) << 3 | uVar5 | ((*(uint *)(fr0_ + 0x0000006c)) & 1) << 8 |
       ((*(uint *)(fr0_ + 0x00000070)) & 0x3f) << 0x10;
  piVar1 = 0x8c4a9c04;
  *(undefined4 *)(unsigned)0x8c4a9eb4 = *(undefined4 *)(unsigned)0x8c4a9c04 + *(undefined4 *)(unsigned)0x8c4a9bfc;
  *(undefined4 *)(unsigned)0x8c4a9eb8 = *(undefined4 *)(unsigned)0x8c4a9c08 + *(undefined4 *)(unsigned)0x8c4a9c00 | (((undefined1 *)(unsigned)1)[0x8c4a9c08] + piVar1[-1]) * 0x10000;
  puVar2 = ((void *)(unsigned)0x8c20a876);
  if ((*(undefined4 *)(unsigned)0x8c4aa098 != 1) && ((*(undefined4 *)(unsigned)0x8c4a9bb0 & 2) != 0)) {
    iVar3 = (int)0x10c;
    do {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))(iVar3,uVar5,uVar6,ar7));
    } while ((uVar4 & uVar7) == 0);
    do {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))(iVar3,uVar5,uVar6,ar7));
    } while ((uVar4 & uVar7) != 0);
  }
  puVar2 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844((int)0xe8,*(undefined4 *)(unsigned)0x8c4a9eb0 | 8,uVar6,ar7));
  a5 = 0x800000;
  if ((*(undefined4 *)(unsigned)0x8c4a9bc8 & 1) == 0) {
    a5 = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))(0x44,a5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))(0x5c,0,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xd0,*(undefined4 *)(unsigned)0x8c4a9e8c,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xd8,*(undefined4 *)(unsigned)0x8c4a9e9c,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xcc,*(undefined4 *)(unsigned)0x8c4a9e94,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xd4,*(undefined4 *)(unsigned)0x8c4a9e98,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xdc,*(undefined4 *)(unsigned)0x8c4a9ea0,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xe0,*(undefined4 *)(unsigned)0x8c4a9ea4,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xec,*(undefined4 *)(unsigned)0x8c4a9eb4,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xf0,*(undefined4 *)(unsigned)0x8c4a9eb8,uVar6,ar7));
  uVar6 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xc8,*(undefined4 *)(unsigned)0x8c4a9e90,uVar6,ar7));
  return uVar6;
}

__asm__(".globl _FUN_8c25e260\n.set _FUN_8c25e260, _FUN_8c25e260_def\n");
