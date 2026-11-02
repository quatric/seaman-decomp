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
undefined8 * FUN_8c08de3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08de3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 in_xd14 = 0;
  char cVar4;
  
  cVar4 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x128) = ar5;
  iVar1 = *(int *)(unsigned)(ar4 + 0x128);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    uVar3 = *(undefined4 *)(unsigned)(ar4 + 0xa0);
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c2846d0,ar6,ar7));
    puVar2 = (undefined8 *)(unsigned)0xa0;
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = uVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd14;
    }
  }
  else {
    if (iVar1 == 2) {
      ar7 = 0;
      ar6 = 0xffffffff;
      uVar3 = 1;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
    }
    else if (iVar1 != 3) {
      return (undefined8 *)(unsigned)iVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,0x8c2846e8,ar6,ar7));
    puVar2 = ((undefined1 *)(unsigned)0x8c08dee8);
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41200000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x2fd62fe641200000;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c08de3c\n.set _FUN_8c08de3c, _FUN_8c08de3c_def\n");
