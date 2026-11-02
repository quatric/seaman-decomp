#include "../decls.h"
int s_IDLEACTION_TREMOR_1091d0_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 0) {
    iVar1 = ar6;
    if (((*(int *)(ar4 + 900) == -1) &&
        (iVar2 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,ar6,ar7),
        iVar2 < 0x11)) && (10 < iVar2)) {
                    
      switch(iVar2) {
      case 0xb:
        ar7 = "IDLEACTION_PAW";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_PAW",&DAT_8c1eeec3);
        break;
      case 0xc:
        ar7 = "IDLEACTION_TREMOR";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_TREMOR",&DAT_8c1eeec3);
        break;
      case 0xd:
        ar7 = "IDLEACTION_BITE";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_BITE",&DAT_8c1eeec3);
        break;
      case 0xe:
        ar7 = "IDLEACTION_ACTION_JUMP";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_ACTION_JUMP",&DAT_8c1eeec3);
        break;
      case 0xf:
        if (*(char *)(ar4 + 0x98) < '\x05') {
          ar7 = "IDLEACTION_STAND_SWIM";
          iVar1 = 0;
          ar5 = 0x19;
          FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_STAND_SWIM",&DAT_8c1eeec3);
        }
        else {
          ar7 = "EVENT_WANT_LAND";
          iVar1 = 0;
          ar5 = 0x19;
          FUN_8c030568(ar4 + 0x9c,0x19,0,"EVENT_WANT_LAND",&DAT_8c1eeec3);
        }
        break;
      case 0x10:
        ar7 = "IDLEACTION_REVERSE_SWIM";
        iVar1 = 0;
        ar5 = 0x19;
        FUN_8c030568(ar4 + 0x9c,0x19,0,"IDLEACTION_REVERSE_SWIM",&DAT_8c1eeec3);
      }
    }
    iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar1,ar7);
    if (iVar1 == 0x11) {
      iVar1 = FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"IDLEACTION_HEAD_DAMAGE");
    }
  }
  return iVar1;
}

__asm__(".globl _s_IDLEACTION_TREMOR_1091d0\n.set _s_IDLEACTION_TREMOR_1091d0, _s_IDLEACTION_TREMOR_1091d0_def\n");
