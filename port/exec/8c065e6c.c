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
undefined * s_IDLEACTION_SNEEZE_065e70_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_IDLEACTION_SNEEZE_065e70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = ar6;
  if ((((*(int *)(unsigned)(ar4 + 900) == -1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5,ar6,ar7)), iVar1 == 0)) &&
      (*(int *)(unsigned)(ar4 + 0x40) == 0x10)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,iVar3,ar7)),
     iVar1 == 5)) {
    ar7 = ((undefined1 *)(unsigned)0x8c136dab);
    iVar3 = 0;
    ar5 = 0x19;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dab)));
  }
  puVar2 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 900));
  if (((puVar2 == (undefined *)(unsigned)0xffffffff) &&
      (puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar6 + 0xc),ar5,iVar3,ar7)),
      puVar2 == (undefined *)(unsigned)0x0)) &&
     (puVar2 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4)), puVar2 == (undefined *)(unsigned)0x0)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar6 + 8)),ar5,iVar3,ar7));
    puVar2 = (undefined *)(unsigned)0xe;
    if ((iVar3 < 0xf) && (puVar2 = (undefined *)(unsigned)0x2, 1 < iVar3)) {
      puVar2 = (&(*(undefined1 *)(unsigned)0x8c065f28))[iVar3 + -2];
                    
      switch(iVar3) {
      case 2:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136b23)); });
        break;
      case 3:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dbd)); });
        break;
      case 4:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dd1)); });
        break;
      case 5:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dab)); });
        break;
      case 6:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136de1)); });
        break;
      case 9:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136df8)); });
        break;
      case 0xb:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e1d)); });
        break;
      case 0xd:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e0d)); });
        break;
      case 0xe:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e2c)); });
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_IDLEACTION_SNEEZE_065e70\n.set _s_IDLEACTION_SNEEZE_065e70, _s_IDLEACTION_SNEEZE_065e70_def\n");
