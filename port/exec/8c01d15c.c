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
undefined * FUN_8c01d15c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01d15c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)(unsigned)0x3;
  if ((2 < (*(undefined4 *)(unsigned)(unsigned)0x8c2791b8)) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201ba2((*(undefined4 *)(unsigned)(unsigned)0x8c27926c),ar5,ar6,ar7)), puVar1 = (undefined *)(unsigned)0x0, iVar2 != 0)) {
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201b92((*(undefined4 *)(unsigned)(unsigned)0x8c27926c),ar5,ar6,ar7));
    }
    else if (iVar2 == 3) {
      return (undefined *)(unsigned)3;
    }
    puVar1 = (undefined *)(unsigned)0x9;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c279248) < 10) && (puVar1 = (undefined *)(unsigned)0x1, 0 < (*(undefined4 *)(unsigned)(unsigned)0x8c279248))) {
      puVar1 = (&(*(undefined1 *)(unsigned)0x8c01d1dc))[(*(undefined4 *)(unsigned)(unsigned)0x8c279248) + -1];
                    
      switch((*(undefined4 *)(unsigned)(unsigned)0x8c279248)) {
      case 1:
        puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c279284);
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c279284) != (undefined *)(unsigned)0x0) {
          puVar1 = (undefined *)(unsigned)0x0;
          *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x0);
        }
        break;
      case 5:
        break;
      case 6:
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c279284) == (undefined *)(unsigned)0x0) {
          return (undefined *)(unsigned)0;
        }
        *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
      case 2:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201c92((*(undefined4 *)(unsigned)(unsigned)0x8c279270),ar5,ar6,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201da0((*(undefined4 *)(unsigned)(unsigned)0x8c279270),uVar3,ar6,ar7));
        break;
      case 7:
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c279284) == (undefined *)(unsigned)0x0) {
          return (undefined *)(unsigned)0;
        }
        *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
      default:
        uVar3 = 0x113a;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201e14((*(undefined4 *)(unsigned)(unsigned)0x8c279270),ar4 + 0x5b86,0x113a,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201da0((*(undefined4 *)(unsigned)(unsigned)0x8c279270),iVar2,uVar3,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b698((*(undefined4 *)(unsigned)(unsigned)0x8c27925c),0,ar4 + 0x5b86,iVar2 << 1));
        break;
      case 8:
        puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c279284);
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c279284) != (undefined *)(unsigned)0x0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c279298) = (*(undefined4 *)(unsigned)(unsigned)0x8c279298) + 1;
          *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x2);
          if (2 < (*(undefined4 *)(unsigned)(unsigned)0x8c279298)) {
            *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
          }
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1225fc((*(undefined4 *)(unsigned)(unsigned)0x8c27925c),1,ar6,ar7));
        }
        break;
      case 9:
        puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c279284);
        if (((undefined4 *)(unsigned long)*(unsigned *)0x8c279284) != (undefined *)(unsigned)0x0) {
          *(unsigned *)0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x3);
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1225fc((*(undefined4 *)(unsigned)(unsigned)0x8c27925c),1,ar6,ar7));
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c01d15c\n.set _FUN_8c01d15c, _FUN_8c01d15c_def\n");
