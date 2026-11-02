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
undefined4 FUN_8c23598e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23598e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  cVar8 = '\0';
  uVar6 = 0;
  puVar3 = ((undefined1 *)(unsigned)0x8c4aa3e8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3ec) = *(undefined4 *)(unsigned)*ar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3f0) = *(undefined4 *)(unsigned)(*ar4 + 4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa400) = *(undefined4 *)(unsigned)(uint)ar4[1];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e8) = 0xe0000000;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,0x8c4aa428,((undefined1 *)(unsigned)0x8c4aa3e8),vr7));
  uVar7 = 1;
  if (1 < ar5) {
    do {
      if ((int)uVar7 < 0) {
        uVar6 = ~(~uVar7 + 1 & 1) + 1;
      }
      else {
        uVar6 = uVar7 & 1;
      }
      iVar4 = uVar6 * 0x20;
      puVar2 = (undefined8 *)(unsigned)(*ar4 + uVar7 * 8);
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa3ec) + iVar4) = *(undefined4 *)(unsigned)puVar2;
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa3ec) + iVar4) = *puVar2;
      }
      iVar5 = uVar7 * 8 + *ar4;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa3f0) + iVar4) = *(undefined4 *)(unsigned)(iVar5 + 4);
      }
      else {
        *(undefined8 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa3f0) + iVar4) = *(undefined8 *)(unsigned)(iVar5 + 4);
      }
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa400) + iVar4) = *(undefined4 *)(unsigned)(uVar7 * 4 + ar4[1]);
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa3e8) + iVar4) = 0xe0000000;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235294(((undefined1 *)(unsigned)0x8c4aa3e8),puVar3 + 0x20,ar6,ar7));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < ar5);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235294(((undefined1 *)(unsigned)0x8c4aa3e8) + uVar6 * 0x20,0x8c4aa428,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c23598e\n.set _FUN_8c23598e, _FUN_8c23598e_def\n");
