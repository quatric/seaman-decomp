#include "../decls.h"
undefined4 s_GRAPHICS_MESSAGE_0c2c72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
    *(undefined4 *)(0x1cc + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 10;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x1c0,ar4 + 0x1c8,0x8c4312a8,10);
  iVar5 = ar4 + 0x1c0;
  (**(code **)(*(int *)(ar4 + 4) + 8))((int *)(ar4 + 4),iVar5,uVar1,uVar4);
  uVar1 = get_field_4_0253e4(ar4 + 4,iVar5,uVar1,uVar4);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xaf2;
  iVar5 = FUN_8c02100c(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == -1) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xa20,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x194,puVar2,puVar3,uVar1);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xb1c;
  iVar5 = FUN_8c020ef0(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb25,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x19c,puVar2,puVar3,uVar1);
  puVar3 = (&DATA_8c13bfe4) + 0xa0f;
  puVar2 = (&DATA_8c13bfe4) + 0xb47;
  iVar5 = FUN_8c020ef0(ar5,puVar2,puVar3,uVar1);
  if (iVar5 == 0) {
    uVar1 = 2;
    puVar3 = (undefined *)0x1;
    puVar2 = (&DATA_8c13bfe4) + 0xb01;
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb50,puVar2,1,2);
  }
  uVar1 = get_field_4_0253e4(ar4 + 0x1a4,puVar2,puVar3,uVar1);
  iVar5 = (*(code *)(&FUN_8c020ef0))
                    (ar5,(&DATA_8c13bfe4) + 0xb72,
                     (&DATA_8c13bfe4) + 0xa0f,uVar1);
  if (iVar5 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xb7b,
               (&DATA_8c13bfe4) + 0xb01,1,2);
  }
  for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
    *(undefined4 *)(0x308 + iVar5 * 0xc + ar4) = 0;
  }
  uVar4 = 3;
  uVar1 = 0x8c4312a8;
  FUN_8c239170(ar4 + 0x328,ar4 + 0x304,0x8c4312a8,3);
  iVar5 = ar4 + 0x328;
  (**(code **)(*(int *)(ar4 + 0x2bc) + 8))((int *)(ar4 + 0x2bc),iVar5,uVar1,uVar4);
  uVar1 = get_field_4_0253e4(ar4 + 0x2bc,iVar5,uVar1,uVar4);
  iVar5 = (*(code *)(&FUN_8c02100c))
                    (ar5,(&DATA_8c13bfe4) + 0xb9d,
                     (&DATA_8c13bfe4) + 0xa0f,uVar1);
  if (iVar5 == -1) {
    (*(code *)(&report_error_message))
              ((&DATA_8c13bfe4) + 0xba9,
               (&DATA_8c13bfe4) + 0xb01,1,2);
  }
  return 0;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c2c72\n.set _s_GRAPHICS_MESSAGE_0c2c72, _s_GRAPHICS_MESSAGE_0c2c72_def\n");
