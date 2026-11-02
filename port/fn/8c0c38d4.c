#include "../decls.h"
int s_WARNING_NOPAD_0c38d6_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  
  ar5_00 = ar5;
  if (((int)ar5 < 7) && (0 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x1:
      ar5_00 = s_WARNING_NOPAD_8c13cbb4;
      strcpy(ar4 + 0x388,s_WARNING_NOPAD_8c13cbb4,ar6,ar7,ar5);
      break;
    case 0x2:
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(ar4 + 0x388,s_WARNING_NOVMS_8c13cbd0,ar6,ar7,ar5);
      break;
    case 0x3:
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(ar4 + 0x388,s_WARNING_NOTFOUND_8c13cbde,ar6,ar7,ar5);
      break;
    case 0x4:
      ar5_00 = s_WARNING_NOMIC_8c13cbc2;
      strcpy(ar4 + 0x388,s_WARNING_NOMIC_8c13cbc2,ar6,ar7,ar5);
      break;
    case 0x5:
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(ar4 + 0x388,s_WARNING_NOTFOUND_8c13cbde,ar6,ar7,ar5);
      break;
    case 0x6:
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(ar4 + 0x388,s_WARNING_NOVMS_8c13cbd0,ar6,ar7,ar5);
    }
  }
  if (*(int *)(ar4 + 900) != -1) {
    FUN_8c0c3a14(ar4,ar5_00,ar6,ar7);
  }
  iVar1 = *(int *)(ar4 + 900);
  if ((iVar1 == -1) && (iVar1 = (int)*(char *)(ar4 + 0x388), iVar1 != 0x30)) {
    uVar2 = pack_acquire_entry_handle(0x8c2b59d0,ar4 + 0x388,ar6,ar7);
    *(undefined4 *)(ar4 + 900) = uVar2;
    iVar1 = FUN_8c021d90(0x8c2b59d0,*(undefined4 *)(ar4 + 900),0,0);
  }
  return iVar1;
}

__asm__(".globl _s_WARNING_NOPAD_0c38d6\n.set _s_WARNING_NOPAD_0c38d6, _s_WARNING_NOPAD_0c38d6_def\n");
