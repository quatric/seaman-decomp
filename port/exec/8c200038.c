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
int FUN_8c200038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200038";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  int a5;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)0x148;
  iVar5 = ar4 * iVar4 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar5 + 2) != '\0') {
    uVar3 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fdd1a(ar4,uVar3,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fd550(ar4,uVar3,ar6,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(ar4 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1ffcc2(ar4,uVar3,ar6,ar7));
        if (iVar4 < 0) {
          return (int)(int)0xffffff03;
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)(iVar5 + 0x1c) + 0x38) != 0) {
          puVar2 = ((undefined1 *)(fr0_ - 0x2c));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1ffc0a(ar4,puVar2,ar6,ar7));
          if ((iVar4 != 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fffca(ar4,puVar2,ar6,ar7)), -1 < iVar4)) {
            while( true ) {
              puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1ffebe(ar4,puVar2,ar6,ar7));
              if (((int)puVar2 < 0) || (iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fff0c(ar4,puVar2 + 1,ar6,ar7)), iVar4 < 0)) {
                iVar4 = (int)0x100;
                uVar3 = 1;
                for (puVar2 = (undefined1 *)(unsigned)(iVar5 + 0x48);
                    puVar2 < (undefined1 *)(unsigned)(iVar5 + 0x48 + iVar4); puVar2 = puVar2 + 1) {
                  *puVar2 = 1;
                }
                iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c200346(ar4,iVar4,1,ar7));
                if (iVar5 < 0) {
                  return iVar5;
                }
                uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2007f0(ar4,iVar4,uVar3,ar7));
                return uVar3;
              }
              iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fbb6c(ar4,puVar2,ar5,ar7));
              if (iVar1 < 0) {
                return iVar1;
              }
              uVar3 = ar5;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fbc44(ar4,iVar4,ar5,ar7));
              if (iVar1 < 0) break;
              a5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c200890(ar4,puVar2,uVar3,ar7));
              iVar1 = iVar4;
              if (a5 < 1) {
                uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fff5e(ar4,puVar2,uVar3,ar7));
                (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)0x8c4783dc + 0x10))))(uVar3,2,iVar4,ar7));
              }
              else {
                (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,a5,iVar4,ar7));
              }
              uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2009d0(ar4,puVar2,iVar1,ar7));
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,iVar4,uVar3,ar7));
              ar6 = 0xfffc;
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,puVar2,0xfffc,ar7));
            }
            return iVar1;
          }
        }
        return (int)(int)0xffffff0b;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c200038\n.set _FUN_8c200038, _FUN_8c200038_def\n");
