#include "../decls.h"
int s_GRAPHICS_SQUIDLINE_0ac6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *ar5_00;
  undefined2 *ar5_01;
  undefined4 uVar2;
  undefined4 ar7_00;
  int iVar3;
  
  ar7_00 = 0xc;
  uVar2 = 1;
  uVar1 = 2;
  (*(code *)(&FUN_8c0254d0))
            (ar4,2,1,0xc,0,ar5,0x8c2868d8,0x8c286a08,*(undefined4 *)(&DATA_8c13b4d4));
  *(undefined **)(ar4 + 8) = (&DATA_8c12b110);
  FUN_8c0b5a30(ar4 + 0x490,uVar1,uVar2,ar7_00);
  FUN_8c0afa50(ar4 + 0x53c,uVar1,uVar2,ar7_00);
  FUN_8c016fcc(ar4 + 0x894,uVar1,uVar2,ar7_00);
  FUN_8c015224(ar4 + 0x9bc,uVar1,uVar2,ar7_00);
  FUN_8c010120(ar4 + 0x9c4,(&FUN_8c016410),0,0x44,10);
  uVar2 = 0x44;
  uVar1 = 0;
  ar5_00 = (&FUN_8c016410);
  FUN_8c010120(ar4 + 0xc6c,(&FUN_8c016410),0,0x44,0x28);
  (*(code *)(&FUN_8c014334))
            (ar4 + 0xc,ar5_00,uVar1,uVar2,(&DATA_8c13b5ec) + 0x338);
  *(undefined4 *)(0x170c + ar4) = 0;
  *(undefined4 *)(0x1710 + ar4) = 0;
  *(undefined4 *)(0x1714 + ar4) = 0xffffffff;
  *(int *)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(0x30c + ar4) = ar4 + 0x53c;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x928 + ar4 + iVar3 * 4) = 0;
    *(undefined4 *)(0x948 + ar4 + iVar3 * 4) = 0;
  }
  *(undefined1 *)(0x968 + ar4) = 0;
  *(undefined4 *)(0x88c + ar4) = 0;
  *(undefined4 *)(0x890 + ar4) = 0;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
  (*(code *)(&FUN_8c0f532c))
            (ar4,*(undefined4 *)(0xb4 + *(int *)(0x328 + ar4)),ar4 + 0x894,
             uVar2);
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(0x970 + iVar3 * 0xc + ar4) = 0;
  }
  uVar2 = 6;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x9b4,ar4 + 0x96c,0x8c4312a8,6);
  iVar3 = ar4 + 0x9b4;
  (**(code **)(*(int *)(ar4 + 0x9bc) + 8))((int *)(ar4 + 0x9bc),iVar3,uVar1,uVar2);
  uVar1 = get_field_4_0253e4(ar4 + 0x9bc,iVar3,uVar1,uVar2);
  iVar3 = (*(code *)(&FUN_8c02100c))
                    (0x8c3eb334,(&DATA_8c13b5ec) + 0x342,
                     (&DATA_8c13b5ec) + 0x10,uVar1);
  if (iVar3 == -1) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13b5ec) + 0x351,
               (&DATA_8c13b5ec) + 0x36a,0,2);
  }
  *(undefined4 *)0x8c286868 = 0;
  ((undefined1 *)1)[0x8c286868] = 0;
  ((undefined1 *)2)[0x8c286868] = (short)0xff;
  ((undefined1 *)3)[0x8c286868] = 0;
  ((undefined1 *)4)[0x8c286868] = (short)0xff;
  ((undefined1 *)5)[0x8c286868] = (short)0xff;
  ((undefined1 *)6)[0x8c286868] = 0;
  ((undefined1 *)7)[0x8c286868] = (short)0xff;
  *(undefined4 *)0x8c286858 = 0xffffffff;
  ((undefined1 *)1)[0x8c286858] = 0xffffffff;
  ((undefined1 *)2)[0x8c286858] = 0xffffffff;
  ((undefined1 *)3)[0x8c286858] = 0xffffffff;
  *(undefined1 *)((int)0x8c286858 + 3) = 0;
  *(undefined1 *)((int)0x8c286858 + 7) = 0;
  *(undefined1 *)((int)0x8c286858 + 0xb) = 0;
  *(undefined1 *)((int)0x8c286858 + 0xf) = 0;
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    uVar2 = 4;
    FUN_8c016464(iVar3 * 0x44 + ar4 + 0x9c4,(&DATA_8c13b474),0x8c286858,4);
    uVar1 = 4;
    ar5_01 = 0x8c286868;
    FUN_8c0164c8(iVar3 * 0x44 + ar4 + 0x9c4,0x8c286868,4,uVar2);
    FUN_8c014790(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
    FUN_8c014764(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
    FUN_8c014a64(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2);
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ac6a4\n.set _s_GRAPHICS_SQUIDLINE_0ac6a4, _s_GRAPHICS_SQUIDLINE_0ac6a4_def\n");
