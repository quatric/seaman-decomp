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
undefined4 FUN_8c10a410_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a410";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a6;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 extraout_fr3 = 0;
  undefined4 uVar4;
  undefined8 in_xd2 = 0;
  char cVar5;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x4c);
  *(undefined1 *)(unsigned)(ar5 + 1) = *(undefined1 *)(unsigned)(ar4 + 0x50);
  *(undefined1 *)(unsigned)(ar5 + 2) = *(undefined1 *)(unsigned)(ar4 + 0x51);
  puVar2 = ar5 + 3;
  a6 = iVar1 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2,*(undefined4 *)(unsigned)(ar4 + 0x54),a6,ar7));
  puVar2 = puVar2 + iVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2,*(undefined4 *)(unsigned)(ar4 + 0x58),a6,ar7));
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(puVar2 + iVar1,*(undefined4 *)(unsigned)(ar4 + 0x5c),a6,ar7));
  if (cVar5 == '\0') {
    uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x60);
  }
  else {
    in_xd2 = *(undefined8 *)(unsigned)(ar4 + 0x60);
    uVar4 = extraout_fr3;
  }
  puVar3 = (undefined8 *)(unsigned)(puVar2 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)puVar3 = uVar4;
    *(undefined4 *)(unsigned)((int)puVar3 + 4) = *(undefined4 *)(unsigned)(ar4 + 100);
  }
  else {
    *puVar3 = in_xd2;
    *(undefined8 *)(unsigned)((int)puVar3 + 4) = *(undefined8 *)(unsigned)(ar4 + 100);
  }
  *(undefined4 *)(unsigned)(puVar3 + 1) = *(undefined4 *)(unsigned)(ar4 + 0x68);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)((int)puVar3 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
    *(undefined4 *)(unsigned)(puVar3 + 2) = *(undefined4 *)(unsigned)(ar4 + 0x70);
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = *(undefined8 *)(unsigned)(ar4 + 0x6c);
    puVar3[2] = *(undefined8 *)(unsigned)(ar4 + 0x70);
  }
  *(undefined4 *)(unsigned)((int)puVar3 + 0x14) = *(undefined4 *)(unsigned)(ar4 + 0x74);
  *(undefined4 *)(unsigned)(puVar3 + 3) = *(undefined4 *)(unsigned)(ar4 + 0x78);
  return 0x78;
}

__asm__(".globl _FUN_8c10a410\n.set _FUN_8c10a410, _FUN_8c10a410_def\n");
