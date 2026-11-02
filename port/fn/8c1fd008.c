#include "../decls.h"
undefined4 FUN_8c1fd008_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *ar5_00;
  undefined4 uVar6;
  int a4;
  undefined4 uVar7;
  uint uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  
  uVar7 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  ar5_00 = ar5;
  pcVar1 = (char *)FUN_8c1efd14(uVar7,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(uVar7,ar5_00,ar6,ar7);
  if ((*pcVar1 == '\0') || ((*puVar2 & 2) == 0)) {
override_prt_8c1fd1c8_7a4d7f16:
    thunk_FUN_8c1f6a30(puVar2,ar5_00,ar6,ar7);
  }
  else {
    thunk_FUN_8c1f4646(uVar7,ar5_00,ar6,ar7);
    do {
      while( true ) {
        FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
        ar5_00 = (uint *)0x2;
        ar6 = 0;
        uVar6 = uVar7;
        puVar2 = (uint *)FUN_8c1efe3a(uVar7,2,0,ar7);
        if (-1 < (int)puVar2) break;
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      while (uVar6 = uVar7, ar5_00 = puVar2, iVar3 = thunk_FUN_8c1f461c(uVar7,puVar2,ar6,ar7),
            iVar3 == 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
      uVar6 = uVar7;
      iVar4 = thunk_FUN_8c1f4636(uVar7,ar5_00,ar6,ar7);
      if (iVar4 != 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
        return 0xffffff30;
      }
      iVar4 = *(int *)(iVar3 + 8);
      a4 = iVar4 + 8;
      if (*(char *)(iVar3 + 4) == '\b') {
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0,ar6,ar7);
        *ar5 = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,2,ar6,ar7);
        ar5[1] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,4,ar6,ar7);
        ar5[2] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,6,ar6,ar7);
        ar5[3] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,8,ar6,ar7);
        ar5[4] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,10,ar6,ar7);
        ar5[5] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0xc,ar6,ar7);
        ar5[6] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x10,ar6,ar7);
        ar5[7] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x12,ar6,ar7);
        uVar6 = 0x14;
        ar5[8] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x14,ar6,ar7);
        ar5[0xd] = uVar5 & 0xffff;
        ar5[0xe] = 0x80;
        ar5[9] = (uint)*(byte *)(iVar4 + 0x16);
        ar5[10] = (uint)*(byte *)(iVar4 + 0x17);
        ar5[0xb] = 0x1ff;
        ar5_00 = (uint *)FUN_8c1efd26(uVar7,uVar6,ar6,ar7);
        puVar2 = &uStack_2c;
        iVar3 = FUN_8c1f0074(puVar2,ar5_00,ar6,ar7);
        if (-1 < iVar3) {
          uVar7 = 0x200;
          ar5[0xf] = (uint)uStack_26;
          ar5[0x10] = (uint)uStack_28;
          uVar5 = libgcc_divide_helper_010468(0x200,(uint)uStack_26);
          ar5[0x11] = uVar5;
          uVar5 = libgcc_divide_helper_010468(uVar7,(uint)uStack_28);
          ar5[0x12] = uVar5;
          return 0;
        }
        goto override_prt_8c1fd1c8_7a4d7f16;
      }
    } while (*(char *)(iVar3 + 4) == -4);
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fd008\n.set _FUN_8c1fd008, _FUN_8c1fd008_def\n");
