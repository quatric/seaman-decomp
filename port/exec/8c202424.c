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
undefined4 FUN_8c202424_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c202424";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201f58(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1efd14);
  if (iVar2 == 1) {
    if (*(int *)(unsigned)(ar4 + 0x30) == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efdc8(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x1c) = uVar3;
      ar4[0x30] = '\x01';
      ar4[0x31] = '\0';
      ar4[0x32] = '\0';
      ar4[0x33] = '\0';
    }
    else {
      if (*(int *)(unsigned)(ar4 + 0x30) == 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
        if (*(char *)(unsigned)(iVar2 + 4) != '\a') {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efdc8(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd7c(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = uVar3;
        uVar4 = 2;
      }
      else {
        if (*(int *)(unsigned)(ar4 + 0x30) != 2) {
          if (*(int *)(unsigned)(ar4 + 0x30) == 3) {
            iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
            if (*(char *)(unsigned)(iVar2 + 4) == '\a') {
              ar4[0x30] = '\x04';
              ar4[0x31] = '\0';
              ar4[0x32] = '\0';
              ar4[0x33] = '\0';
            }
            else {
              ar4[0x28] = '\x04';
              ar4[0x29] = '\0';
              ar4[0x2a] = '\0';
              ar4[0x2b] = '\0';
              *ar4 = '\x01';
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202782(ar4,ar5,ar6,ar7));
            }
          }
          if ((*(int *)(unsigned)(ar4 + 0x20) != 0) && (-1 < *(int *)(unsigned)(ar4 + 0x1c))) {
            iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202a30(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
            if ((iVar2 == 0) && (*ar4 != '\x03')) {
              uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
              iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201f8a(*(undefined4 *)(unsigned)(ar4 + 0x24),uVar3,ar6,ar7));
              if (iVar2 != 1) {
                return iVar2;
              }
              iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(ar4 + 0x24),uVar3,ar6,ar7));
              ar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201fb8(ar4,(int)*(char *)(unsigned)(iVar2 + 4),ar6,ar7));
              (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20254c(ar4,ar5,ar6,ar7));
            }
            else {
              ar4[1] = *ar4;
              *ar4 = '\x06';
              ar5 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
              iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201f8a(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
              if (iVar2 != 1) {
                return iVar2;
              }
            }
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202682(ar4,ar5,ar6,ar7));
          }
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202782(ar4,ar5,ar6,ar7));
          return uVar3;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd14(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
        if (*(char *)(unsigned)(iVar2 + 4) != '\x05') {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1efd7c(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        ar4[0x28] = '\x04';
        ar4[0x29] = '\0';
        ar4[0x2a] = '\0';
        ar4[0x2b] = '\0';
        *ar4 = '\x01';
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c202782(ar4,ar5,ar6,ar7));
        uVar4 = 3;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x30) = uVar4;
    }
  }
  else {
    uVar3 = 0x44;
    *ar4 = '\0';
    ar4[0x1c] = '\0';
    ar4[0x1d] = '\0';
    ar4[0x1e] = '\0';
    ar4[0x1f] = '\0';
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
    ar4[0x2c] = '\0';
    ar4[0x2d] = '\0';
    ar4[0x2e] = '\0';
    ar4[0x2f] = '\0';
    ar4[0x44] = '\0';
    ar4[0x45] = '\0';
    ar4[0x46] = '\0';
    ar4[0x47] = '\0';
    ar4[0x30] = '\0';
    ar4[0x31] = '\0';
    ar4[0x32] = '\0';
    ar4[0x33] = '\0';
  }
  return uVar3;
}

__asm__(".globl _FUN_8c202424\n.set _FUN_8c202424, _FUN_8c202424_def\n");
