#include "../decls.h"
undefined * FUN_8c0fb494_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar5_00;
  undefined *ar5_01;
  uint *ar6_00;
  uint *puVar2;
  undefined4 ar6_01;
  int *ar7_00;
  undefined4 ar7_01;
  int iVar3;
  uint auStack_50 [2];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint auStack_14 [2];
  
  puVar2 = auStack_50;
  if (ar4[0x2c] == 1) {
    pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6,ar7);
    puVar1 = (undefined *)0x2;
    *ar4 = 2;
  }
  else {
    iVar3 = ar4[0x22];
    ar7_00 = &iStack_18;
    ar6_00 = auStack_14;
    ar5_01 = (undefined *)(uint)ar4[0x2d];
    ar5_00 = FUN_8c021f4c(0x8c2b59d0,ar5_01,ar6_00,ar7_00,&iStack_1c);
    puVar1 = (undefined *)0x8;
    if ((ar5_00 < 9) && (-1 < ar5_00)) {
      puVar1 = (&switchdata_8c0fb4fa_8c0fb500)[ar5_00];
      iStack_20 = ar5_00;
                    
      switch((uint)ar5_00) {
      default:
        break;
      case 2:
        pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6_00,ar7_00);
      case 1:
        FUN_8c0fb780(ar4,4,ar6_00,ar7_00);
        puVar1 = (undefined *)s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6_00,ar7_00);
        break;
      case 4:
        break;
      case 5:
        if ((auStack_14[0] < 0xb) && (-1 < (int)auStack_14[0])) {
                    
          switch(auStack_14[0]) {
          case 1:
            iStack_24 = ar4[0x23];
            *(undefined4 *)(iStack_24 * 0x24 + iVar3 + 0x50) = 0x4e;
            break;
          case 2:
            iStack_28 = ar4[0x23];
            *(undefined4 *)(iStack_28 * 0x24 + iVar3 + 0x50) = 0x41;
            break;
          case 3:
            iStack_2c = ar4[0x23];
            *(undefined4 *)(iStack_2c * 0x24 + iVar3 + 0x50) = 0x4c;
            break;
          case 4:
            iStack_30 = ar4[0x23];
            *(undefined4 *)(iStack_30 * 0x24 + iVar3 + 0x50) = 0x50;
            break;
          case 5:
            iStack_34 = ar4[0x23];
            *(undefined4 *)(iStack_34 * 0x24 + iVar3 + 0x50) = 0x43;
            break;
          case 6:
            iStack_38 = ar4[0x23];
            *(undefined4 *)(iStack_38 * 0x24 + iVar3 + 0x50) = 0x46;
            break;
          case 7:
            iStack_3c = ar4[0x23];
            *(undefined4 *)(iStack_3c * 0x24 + iVar3 + 0x50) = 0x53;
            break;
          case 8:
            iStack_40 = ar4[0x23];
            *(undefined4 *)(iStack_40 * 0x24 + iVar3 + 0x50) = 0x49;
            break;
          case 9:
            iStack_44 = ar4[0x23];
            *(undefined4 *)(iStack_44 * 0x24 + iVar3 + 0x50) = 0x48;
            break;
          case 10:
            iStack_48 = ar4[0x23];
            *(undefined4 *)(iStack_48 * 0x24 + iVar3 + 0x50) = 0x55;
          }
        }
        if (iStack_18 != 0) {
          FUN_8c014334(auStack_50,ar5_01,ar6_00,ar7_00,&DAT_8c141e10);
          ar5_01 = &DAT_8c141e13;
          FUN_8c0fc94c(ar4,&DAT_8c141e13,auStack_50,ar7_00);
          ar6_00 = puVar2;
        }
        if (iStack_1c != 0) {
          FUN_8c014334(auStack_50,ar5_01,ar6_00,ar7_00,&DAT_8c141e10);
          FUN_8c0fc94c(ar4,&DAT_8c141e15,auStack_50,ar7_00);
        }
        ar7_01 = 0;
        ar6_01 = *(undefined4 *)(*(int *)(ar4[4] + 0x40) + 0xc0);
        FUN_8c021d90(0x8c2b59d0,ar4[0x2d],ar6_01,0);
        puVar1 = (undefined *)FUN_8c0fb780(ar4,ar5_00,ar6_01,ar7_01);
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0fb494\n.set _FUN_8c0fb494, _FUN_8c0fb494_def\n");
