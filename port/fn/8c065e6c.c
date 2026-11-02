#include "../decls.h"
undefined * s_IDLEACTION_SNEEZE_065e70_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = ar6;
  if ((((*(int *)(ar4 + 900) == -1) &&
       (iVar1 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5,ar6,ar7), iVar1 == 0)) &&
      (*(int *)(ar4 + 0x40) == 0x10)) &&
     (iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7),
     iVar1 == 5)) {
    ar7 = s_IDLEACTION_SNEEZE_8c136dab;
    iVar3 = 0;
    ar5 = 0x19;
    FUN_8c0306d4(ar4 + 0x9c,0x19,0,s_IDLEACTION_SNEEZE_8c136dab);
  }
  puVar2 = *(undefined **)(ar4 + 900);
  if (((puVar2 == (undefined *)0xffffffff) &&
      (puVar2 = (undefined *)get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5,iVar3,ar7),
      puVar2 == (undefined *)0x0)) &&
     (puVar2 = *(undefined **)(ar4 + 4), puVar2 == (undefined *)0x0)) {
    iVar3 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7);
    puVar2 = (undefined *)0xe;
    if ((iVar3 < 0xf) && (puVar2 = (undefined *)0x2, 1 < iVar3)) {
      puVar2 = (&switchdata_8c065f22_8c065f28)[iVar3 + -2];
                    
      switch(iVar3) {
      case 2:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_YAWN_8c136b23,&DAT_8c1369bf);
        break;
      case 3:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_PURUPURU_8c136dbd,&DAT_8c1369bf);
        break;
      case 4:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_WHAT_8c136dd1,&DAT_8c1369bf);
        break;
      case 5:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_SNEEZE_8c136dab,&DAT_8c1369bf);
        break;
      case 6:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_STERN_SWING_8c136de1,&DAT_8c1369bf);
        break;
      case 9:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_WANT_FREE_8c136df8,&DAT_8c1369bf);
        break;
      case 0xb:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_PAW_8c136e1d,&DAT_8c1369bf);
        break;
      case 0xd:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_BITE_8c136e0d,&DAT_8c1369bf);
        break;
      case 0xe:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_ACTION_JUMP_8c136e2c,&DAT_8c1369bf);
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_IDLEACTION_SNEEZE_065e70\n.set _s_IDLEACTION_SNEEZE_065e70, _s_IDLEACTION_SNEEZE_065e70_def\n");
