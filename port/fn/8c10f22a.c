#include "../decls.h"
uint FUN_8c10f22a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  int ar4_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0;
  char cVar7;
  undefined8 uStack_14;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (*(char *)((*(int **)(ar4 + 0x10))[1] + 0x30) != '\x01')) {
    if (*(char *)(ar4 + 0x3c) == '\0') {
      puVar5 = *(undefined4 **)(ar4 + 0xc);
      uStack_14 = CONCAT44(puVar5,(undefined4)uStack_14);
      uVar6 = puVar5[1];
      iVar4 = FUN_8c111fbe(*puVar5,uVar6,ar6,ar7);
    }
    else {
      puVar5 = *(undefined4 **)(ar4 + 0xc);
      ar7 = 1;
      ar6 = *(undefined4 *)(ar4 + 0x44);
      uStack_14 = CONCAT44(puVar5,(undefined4)uStack_14);
      uVar6 = puVar5[1];
      uVar2 = FUN_8c111e72(*puVar5,uVar6,ar6,1);
      if ((uVar2 & 0xff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(ar4 + 0x44);
        ar6 = *(undefined4 *)(ar4 + 0x40);
        uVar6 = 0;
        memset(*(int *)(ar4 + 0x2c) * 4 + iVar4,0,ar6,ar7);
      }
    }
    if (iVar4 != 0) {
      uVar6 = FUN_8c111dfe(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar6,ar6,ar7);
      (*(uint*)((uchar*)&uStack_14+4)) = uVar6;
      FUN_8c10f108(*(undefined4 *)(ar4 + 0x2c),iVar4,ar6,ar7);
      ar4_00 = ar4;
      uVar6 = (*(uint*)((uchar*)&uStack_14+4));
      FUN_8c10f168(ar4,iVar4,(*(uint*)((uchar*)&uStack_14+4)),ar7);
      cVar7 = '\0';
      thunk_FUN_8c013dfc(ar4_00,iVar4,uVar6,ar7);
      uVar1 = in_dr0;
      if (cVar7 == '\0') {
        uStack_14 = CONCAT44((*(uint*)((uchar*)&uStack_14+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = uStack_14;
      }
      uStack_14 = uVar1;
      cVar7 = '\0';
      FUN_8c111cdc(**(undefined4 **)(ar4 + 0x10),&uStack_14,1,ar7);
      if (cVar7 == '\0') {
        uStack_14 = CONCAT44((undefined4)uStack_14,0xc1daf5c2);
      }
      sVar3 = (short)(int)(((float)((ulonglong)uStack_14 >> 0x20) + (float)uStack_14) * 4.3429446 *
                          100.0);
      if (0x708 < sVar3) {
        sVar3 = 0x708;
      }
      if ((int)*(short *)(ar4 + 0x48) < (int)sVar3) {
        *(short *)(ar4 + 0x48) = sVar3;
      }
      else {
        *(short *)(ar4 + 0x48) =
             (short)((uint)((*(short *)(ar4 + 0x48) + 0x1c20) * 64000) >> 0x10) + -0x1c20;
      }
    }
  }
  iVar4 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar4 + 0x40)) == *(int *)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10f22a\n.set _FUN_8c10f22a, _FUN_8c10f22a_def\n");
