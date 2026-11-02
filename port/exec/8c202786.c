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
int FUN_8c202786_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c202786";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_r14 = 0;
  
  if (*(int *)(unsigned)(unaff_r14 + 0x28) == 100) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1efdc8(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),ar5,ar6,ar7));
LAB_8c2027a6:
    *(undefined4 *)(unsigned)(unaff_r14 + 0x1c) = uVar4;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
    *(undefined4 *)(unsigned)(unaff_r14 + 0x2c) = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
    return uVar4;
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x28) == 0x65) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1efd7c(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),ar5,ar6,ar7));
    goto LAB_8c2027a6;
  }
  cVar1 = *unaff_r14;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(unsigned)(unaff_r14 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c2022ac(unaff_r14,&(*(undefined1 *)(fr0_ - 0x10)),ar6,ar7));
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(unsigned)(unaff_r14 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(unsigned)(unaff_r14 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c2022ac(unaff_r14,&(*(undefined1 *)(fr0_ - 0x10)),ar6,ar7));
        iVar3 = 0;
        (*(undefined1 *)(fr0_ - 0x10)) = (undefined1)0xfc;
        (*(undefined1 *)(fr0_ - 0xf)) = 0;
        (*(undefined1 *)(fr0_ - 0xe)) = 0;
        (*(undefined1 *)(fr0_ - 0xd)) = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(unsigned)(unaff_r14 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c2022ac(unaff_r14,&(*(undefined1 *)(fr0_ - 0x10)),ar6,ar7));
      }
      goto LAB_8c2023fc;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c2022ac(unaff_r14,&(*(undefined1 *)(fr0_ - 0x10)),ar6,ar7));
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1eff32(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),&(*(undefined1 *)(fr0_ - 0x10)),vr6,vr7));
    *(int *)(unsigned)(unaff_r14 + 0x1c) = iVar3;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  else {
    unaff_r14[0x20] = '\0';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  *(undefined4 *)(unsigned)(unaff_r14 + 0x2c) = *(undefined4 *)(unsigned)(unaff_r14 + 0x28);
  return iVar3;
}

__asm__(".globl _FUN_8c202786\n.set _FUN_8c202786, _FUN_8c202786_def\n");
