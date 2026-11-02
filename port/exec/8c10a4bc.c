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
undefined4 FUN_8c10a4bc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10a4bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int a6;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x7c);
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = *ar5;
  *(undefined1 *)(unsigned)(ar4 + 0x50) = *(undefined1 *)(unsigned)(ar5 + 1);
  puVar4 = ar5 + 3;
  *(undefined1 *)(unsigned)(ar4 + 0x51) = *(undefined1 *)(unsigned)(ar5 + 2);
  a6 = iVar1 * 4;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x54),puVar4,a6,ar7));
  puVar4 = puVar4 + iVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x58),puVar4,a6,ar7));
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x5c),puVar4 + iVar1,a6,ar7));
  puVar2 = (undefined8 *)(unsigned)(puVar4 + iVar1 + iVar1);
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = *(undefined4 *)(unsigned)puVar2;
    puVar3 = puVar2 + 1;
    *(undefined4 *)(unsigned)(ar4 + 100) = *(undefined4 *)(unsigned)((int)puVar2 + 4);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x60) = *puVar2;
    puVar3 = puVar2 + 2;
    *(undefined8 *)(unsigned)(ar4 + 100) = puVar2[1];
  }
  *(undefined4 *)(unsigned)(ar4 + 0x68) = *(undefined4 *)(unsigned)puVar3;
  if (cVar5 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)((int)puVar3 + 4);
    puVar4 = (undefined4 *)(unsigned)((int)puVar3 + 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x70) = *(undefined4 *)(unsigned)(puVar3 + 1);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = *(undefined8 *)(unsigned)((int)puVar3 + 4);
    puVar4 = (undefined4 *)(unsigned)((int)puVar3 + 0x14);
    *(undefined8 *)(unsigned)(ar4 + 0x70) = *(undefined8 *)(unsigned)((int)puVar3 + 0xc);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x74) = *puVar4;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = puVar4[1];
  return 0x78;
}

__asm__(".globl _FUN_8c10a4bc\n.set _FUN_8c10a4bc, _FUN_8c10a4bc_def\n");
