#include "../decls.h"
undefined4 FUN_8c11617a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iStack_8;
  
  iVar2 = (int)(int)0xffffff70;
  *(undefined4 *)((int)&iStack_8 + 0x8c + iVar2) = ar4;
  *(undefined4 *)((int)&iStack_8 + 0x88 + iVar2) = ar5;
  (&stack0x0000000f)[iVar2] =
       *(undefined1 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x7c);
  if (0xea60 < (int)(uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50))
  {
    return 0xffffffff;
  }
  *(int *)(&stack0x00000030 + iVar2) = (int)0x7fff;
  *(int *)(&stack0x0000002c + iVar2) =
       (int)*(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2));
  *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
  iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
  *(int *)(0x1ac + iVar6) =
       *(int *)(0x1ac + iVar6) + *(int *)(&stack0x0000002c + iVar2);
  *(undefined4 *)(&stack0x00000034 + iVar2) = 0;
  while (*(uint *)(&stack0x00000034 + iVar2) <
         (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50)) {
    iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
    *(int *)(&stack0x00000008 + iVar2) = iVar6;
    if (iVar6 < 0x77ff) {
      *(uint *)(&stack0x00000004 + iVar2) =
           (uint)(**(ushort **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) >> 2);
      iVar4 = *(int *)(&stack0x00000008 + iVar2);
      *(int *)(&stack0x00000008 + iVar2) = iVar4 - *(int *)(&stack0x0000002c + iVar2);
      iVar6 = (int)0x88;
      **(undefined2 **)((int)&iStack_8 + 0x84 + iVar2) =
           (short)(iVar4 - *(int *)(&stack0x0000002c + iVar2));
      *(int *)(&stack0x00000008 + iVar2) =
           *(int *)(&stack0x00000008 + iVar2) +
           (int)*(short *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) +
                          *(int *)(&stack0x00000004 + iVar2) * 2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) =
           *(undefined2 *)(&stack0x00000008 + iVar2);
    }
    else {
      **(undefined2 **)((int)&iStack_8 + 0x84 + iVar2) =
           (short)*(undefined4 *)(&stack0x00000008 + iVar2);
    }
    if (*(int *)(&stack0x00000008 + iVar2) <= *(int *)(&stack0x00000030 + iVar2)) {
      if (*(int *)(&stack0x00000008 + iVar2) == *(int *)(&stack0x00000030 + iVar2)) {
        *(undefined4 *)(&stack0x00000004 + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
        while ((**(ushort **)(&stack0x00000004 + iVar2) & 1) == 0) {
          *(int *)(&stack0x00000004 + iVar2) = *(int *)(&stack0x00000004 + iVar2) + 2;
        }
        *(undefined2 *)(&stack0x00000000 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 2);
        *(undefined2 *)(&stack0x00000002 + iVar2) =
             *(undefined2 *)(*(int *)(&stack0x00000004 + iVar2) + 4);
        if ((*(ushort *)
              (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xc0) +
              *(int *)(&stack0x00000000 + iVar2) * 2) & 2) != 0) {
          *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        }
      }
      else {
        *(undefined4 *)((int)0x19c + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
      }
      *(undefined4 *)(&stack0x00000030 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
    }
    iVar6 = (int)0x84;
    piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
    *piVar7 = *piVar7 + 1;
    iVar4 = *(int *)((int)&iStack_8 + iVar6 + iVar2);
    iVar6 = (int)0x84;
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x18);
    *(int *)(&stack0x00000034 + iVar2) = *(int *)(&stack0x00000034 + iVar2) + 1;
  }
  *(short *)((int)0x19a + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
       (short)*(undefined4 *)(&stack0x00000030 + iVar2);
  FUN_8c115fec(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),ar5,ar6,ar7);
  iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
  *(short *)(&stack0x0000002a + iVar2) =
       *(short *)(0x19a + -0x3c + iVar6) + *(short *)(0x19a + iVar6) +
       *(short *)((int)0x1a0 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
  *(uint *)(&stack0x00000048 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50);
  *(uint *)(&stack0x00000044 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100);
  *(uint *)(&stack0x00000040 + iVar2) =
       (uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70);
  *(undefined4 *)(&stack0x00000074 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60);
  *(undefined4 *)(&stack0x00000070 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c);
  *(undefined4 *)(&stack0x0000006c + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78);
  *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54);
  iVar6 = 0;
  *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
  do {
    *(int *)(&stack0x00000034 + iVar2) = iVar6;
    if ((uint)*(ushort *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) <=
        *(uint *)(&stack0x00000034 + iVar2)) {
      *(undefined4 *)(&stack0x0000003c + iVar2) = *(undefined4 *)(&stack0x00000044 + iVar2);
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x0000003c + iVar2)) {
        iVar6 = (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
        *(int *)(&stack0x00000008 + iVar2) = iVar6;
        if (*(short *)(&stack0x0000002a + iVar2) < iVar6) {
          if ((*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) != 0) &&
             (piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),
             iVar6 = *piVar7 + -1, *piVar7 = iVar6, iVar6 < 1)) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
            ;
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
          else {
            **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c) = 0;
          }
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000070 + iVar2))
          {
            *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          *(int *)(&stack0x0000004c + iVar2) = iVar6;
          *(undefined2 *)(&stack0x00000024 + iVar2) = *(undefined2 *)(iVar6 + 2);
          *(undefined2 *)(&stack0x00000026 + iVar2) =
               *(undefined2 *)(*(int *)(&stack0x0000004c + iVar2) + 4);
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          iVar6 = (int)0xa8;
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000008 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          iVar6 = *(int *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + iVar6) +
                          *(int *)(&stack0x00000024 + iVar2) * 4);
          *(int *)(&stack0x00000060 + iVar2) = iVar6;
          if (iVar6 == 0) {
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000068 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
            if (*(int *)(&stack0x0000006c + iVar2) != 0) {
              *(undefined4 *)(*(int *)(&stack0x0000006c + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000068 + iVar2);
            }
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
            *(undefined4 *)
             (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
             *(int *)(&stack0x00000024 + iVar2) * 4) = *(undefined4 *)(&stack0x0000006c + iVar2);
            if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x0000006c + iVar2);
            }
          }
          else if (*(int *)(&stack0x00000008 + iVar2) < (int)*(short *)(iVar6 + 2)) {
            *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000008 + iVar2);
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8);
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000054 + iVar2) =
                 *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8);
            *(undefined4 *)(*(int *)(*(int *)(&stack0x00000060 + iVar2) + 8) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000058 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000054 + iVar2);
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
            ;
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x7fff;
          iVar6 = (int)0x84;
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(&stack0x00000038 + iVar2) = *(undefined4 *)(&stack0x00000040 + iVar2);
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
           *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74);
      *(undefined4 *)(&stack0x00000064 + iVar2) = 0;
      uVar9 = 0;
      while (*(uint *)(&stack0x00000034 + iVar2) = uVar9,
            uVar9 < *(uint *)(&stack0x00000038 + iVar2)) {
        *(int *)(&stack0x00000008 + iVar2) =
             (int)*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2);
        *(undefined2 *)(&stack0x00000024 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 2);
        *(undefined2 *)(&stack0x00000026 + iVar2) =
             *(undefined2 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc) + 4);
        if ((int)*(short *)(&stack0x0000002a + iVar2) < *(int *)(&stack0x00000008 + iVar2)) {
          *(undefined4 *)
           (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa8) +
           *(int *)(&stack0x00000024 + iVar2) * 4) = 0;
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x0000006c + iVar2))
          {
            *(undefined4 *)(&stack0x0000006c + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
            if (*(int *)((int)&iStack_8 + 0x84 + iVar2) ==
                *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74)) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) = 0;
            }
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          }
          else {
            *(undefined4 *)(&stack0x00000004 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x74) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)(&stack0x00000004 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)(&stack0x00000004 + iVar2);
          }
          *(int *)(&stack0x00000040 + iVar2) = *(int *)(&stack0x00000040 + iVar2) + -1;
        }
        else {
          *(undefined4 *)(&stack0x00000058 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          *(undefined4 *)(&stack0x0000001c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          *(undefined4 *)(&stack0x00000018 + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0x98) +
                (*(int *)(&stack0x00000024 + iVar2) + 1) * 4);
          *(undefined4 *)(&stack0x0000005c + iVar2) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + (int)0xa0) +
                *(int *)(&stack0x00000024 + iVar2) * 4);
          while (*(uint *)(&stack0x0000001c + iVar2) < *(uint *)(&stack0x00000018 + iVar2)) {
            iVar6 = **(int **)(&stack0x0000001c + iVar2);
            *(int *)(&stack0x00000020 + iVar2) = iVar6;
            *(short *)(&stack0x0000000c + iVar2) =
                 *(short *)(&stack0x00000008 + iVar2) +
                 *(short *)(*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) +
                                    (int)0x1c0) + iVar6 * 2);
            *(undefined4 *)(&stack0x00000014 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                  *(int *)(&stack0x00000020 + iVar2) * 4);
            *(undefined4 *)(&stack0x00000010 + iVar2) =
                 *(undefined4 *)
                  (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x44) +
                  (*(int *)(&stack0x00000020 + iVar2) + 1) * 4);
            while (*(uint *)(&stack0x00000014 + iVar2) < *(uint *)(&stack0x00000010 + iVar2)) {
              puVar5 = (ushort *)
                       (**(int **)(&stack0x00000014 + iVar2) * 2 +
                       *(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x48));
              *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
              *(undefined4 *)(&stack0x00000060 + iVar2) =
                   **(undefined4 **)(&stack0x0000005c + iVar2);
              *(short *)(&stack0x00000028 + iVar2) =
                   *(short *)(&stack0x0000000c + iVar2) +
                   *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) +
                             (uint)(*puVar5 >> 2) * 2);
              if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
                if (*(int *)(&stack0x00000060 + iVar2) == 0) {
                  if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
                    uVar3 = (*(code *)(&FUN_8c112b6e))
                                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                       *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
                    *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
                  }
                  else {
                    *(undefined4 *)(&stack0x00000074 + iVar2) =
                         *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
                  }
                  *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                       *(undefined4 *)(&stack0x0000004c + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) = 0;
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                  *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
                  **(undefined4 **)(&stack0x0000005c + iVar2) =
                       *(undefined4 *)(&stack0x00000074 + iVar2);
                  *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                       *(undefined4 *)(&stack0x0000005c + iVar2);
                  iVar4 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                  iVar6 = *(int *)(&stack0x0000001c + iVar2) -
                          *(int *)((int)0x9c +
                                  *(int *)((int)&iStack_8 + 0x8c + iVar2));
                  if (iVar6 < 0) {
                    iVar6 = iVar6 + 3;
                  }
                  *(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                       *(int *)(0x144 + iVar4) * 4 + *(int *)(0xac + iVar4) +
                       (iVar6 >> 2) * 4;
                }
                else if (*(short *)(&stack0x00000028 + iVar2) <
                         *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
                  *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
                       *(undefined2 *)(&stack0x00000028 + iVar2);
                  iVar6 = **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) + -1;
                  **(int **)(*(int *)(&stack0x00000060 + iVar2) + 8) = iVar6;
                  if (iVar6 < 1) {
                    (*(code *)(&FUN_8c115f18))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8),ar6,ar7);
                  }
                  *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                       *(undefined4 *)(&stack0x00000058 + iVar2);
                  **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
                }
              }
              *(int *)(&stack0x00000014 + iVar2) = *(int *)(&stack0x00000014 + iVar2) + 4;
              *(int *)(&stack0x0000005c + iVar2) = *(int *)(&stack0x0000005c + iVar2) + 4;
            }
            *(int *)(&stack0x0000001c + iVar2) = *(int *)(&stack0x0000001c + iVar2) + 4;
          }
          iVar6 = **(int **)(&stack0x00000058 + iVar2) + -1;
          **(int **)(&stack0x00000058 + iVar2) = iVar6;
          if (iVar6 < 1) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(&stack0x00000058 + iVar2),ar6,ar7);
          }
          *(undefined2 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) = 0x77ff;
          iVar6 = (int)0x84;
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8) = 0;
          *(undefined4 *)(&stack0x00000064 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar6 + iVar2);
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        }
        uVar9 = *(int *)(&stack0x00000034 + iVar2) + 1;
      }
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x60) =
           *(undefined4 *)(&stack0x00000074 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x6c) =
           *(undefined4 *)(&stack0x00000070 + iVar2);
      *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x78) =
           *(undefined4 *)(&stack0x0000006c + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x50) =
           *(undefined2 *)(&stack0x00000048 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 100) =
           *(undefined2 *)(&stack0x00000044 + iVar2);
      *(undefined2 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x70) =
           *(undefined2 *)(&stack0x00000040 + iVar2);
      return 0;
    }
    *(int *)(&stack0x00000000 + iVar2) = (int)**(short **)((int)&iStack_8 + 0x84 + iVar2);
    *(undefined4 *)(&stack0x00000058 + iVar2) =
         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
    puVar5 = *(ushort **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
    *(ushort **)(&stack0x0000004c + iVar2) = puVar5;
    uVar1 = *puVar5;
    *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
    if ((uVar1 & 2) == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
    }
    else {
      *(undefined4 *)(&stack0x00000004 + iVar2) = 0;
    }
    if ((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) {
      iVar6 = *(int *)(&stack0x0000004c + iVar2);
      *(ushort **)(&stack0x0000004c + iVar2) = (ushort *)(iVar6 + 2);
      uVar1 = *(ushort *)(iVar6 + 2);
      *(uint *)(&stack0x00000008 + iVar2) = (uint)uVar1;
      uVar9 = (uint)(uVar1 >> 2);
      *(uint *)(&stack0xfffffffc + iVar2) = uVar9;
      *(short *)(&stack0x00000028 + iVar2) =
           *(short *)(*(int *)((int)&iStack_8 + 0x88 + iVar2) + uVar9 * 2) +
           (short)*(undefined4 *)(&stack0x00000000 + iVar2);
      if (((*(uint *)(&stack0x00000008 + iVar2) & 1) == 0) || ((&stack0x0000000f)[iVar2] != '\0')) {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(short *)(&stack0x00000028 + iVar2) <= *(short *)(&stack0x0000002a + iVar2)) {
            if (*(int *)(&stack0x00000004 + iVar2) == 0) {
              iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(int *)(&stack0x00000050 + iVar2) = iVar6;
              if (*(int *)(iVar6 + 4) == 0) {
                iVar4 = (int)0x114;
                iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
                uVar3 = (*(code *)(&FUN_8c112fd8))
                                  (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
                *(undefined4 *)(iVar4 + iVar6) = uVar3;
              }
              else {
                *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2))
                     = *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
              }
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                   *(undefined4 *)(&stack0x00000058 + iVar2);
              **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
              **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
              *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                   *(undefined4 *)
                    ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                   *(int *)(&stack0x00000000 + iVar2) +
                   *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
              *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            }
            if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
              uVar3 = (*(code *)(&FUN_8c112b6e))
                                (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                                 *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
              *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
            }
            else {
              *(undefined4 *)(&stack0x00000074 + iVar2) =
                   *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            }
            *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
                 *(undefined2 *)(&stack0x00000028 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
                 *(undefined4 *)(&stack0x0000004c + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
            iVar6 = (int)0x84;
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            *(undefined4 *)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000074 + iVar2);
          }
        }
        else if (*(short *)(&stack0x00000028 + iVar2) <
                 *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7)
          ;
        }
        if (*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <=
            *(short *)(&stack0x0000002a + iVar2)) {
          iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
          *(int *)(&stack0x00000064 + iVar2) = iVar6;
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
          goto LAB_8c1173e8;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
             *(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
           (*(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) == 0)
          goto LAB_8c116732;
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
            iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
            *(int *)(&stack0x00000064 + iVar2) = iVar6;
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
            goto LAB_8c1173e8;
          }
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,
                         ar7);
          }
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
LAB_8c116732:
          piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
          iVar6 = *piVar7 + -1;
          *piVar7 = iVar6;
          if (iVar6 < 1) {
            FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                         *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,
                         ar7);
          }
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) + 0x14)
                 = 0;
          }
          if (*(int *)((int)&iStack_8 + 0x84 + iVar2) != *(int *)(&stack0x00000074 + iVar2))
          {
            *(undefined4 *)((int)&iStack_8 + iVar2) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
            *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
            if (*(int *)(&stack0x00000064 + iVar2) == 0) {
              *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            else {
              *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                   *(undefined4 *)((int)&iStack_8 + iVar2);
            }
            *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
            goto LAB_8c1173cc;
          }
        }
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        goto LAB_8c1173cc;
      }
      iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)(&FUN_8c112b6e))
                            (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000074 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000074 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000074 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000028 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + 1;
        iVar6 = (int)0x84;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x1c) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
        **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2) =
             *(undefined4 *)(&stack0x00000074 + iVar2);
        if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
          uVar3 = (*(code *)(&FUN_8c112b6e))
                            (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                             *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
          *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
        }
        else {
          *(undefined4 *)(&stack0x00000068 + iVar2) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        }
        *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
             *(undefined4 *)(&stack0x00000058 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
        *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
             *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
        **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
        *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
        if (*(int *)(&stack0x00000070 + iVar2) != 0) {
          *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0x00000068 + iVar2);
        }
        *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
        if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) =
             *(undefined4 *)(&stack0x00000070 + iVar2);
      }
      else {
        if (*(short *)(&stack0x00000028 + iVar2) <
            *(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
            *(undefined4 *)(&stack0x00000004 + iVar2) = 1;
          }
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000028 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1;
            **(int **)(&stack0x00000054 + iVar2) = iVar6;
            if (iVar6 < 1) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
        iVar6 = *(int *)(&stack0x00000060 + iVar2);
        *(int *)((int)&iStack_8 + 0x80 + iVar2) = iVar6;
        iVar6 = *(int *)(iVar6 + 0x10);
        *(int *)(&stack0x00000060 + iVar2) = iVar6;
        if (iVar6 == 0) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)(&FUN_8c112b6e))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + 0x80 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x80 + iVar2) + 0x10) =
               *(undefined4 *)(&stack0x00000070 + iVar2);
        }
        else if (*(int *)(&stack0x00000000 + iVar2) <
                 (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
          *(int *)(&stack0x00000054 + iVar2) = iVar6;
          if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
            *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
               (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
               **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
              FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                           *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
            }
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                     *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7);
      }
      if (*(short *)(&stack0x0000002a + iVar2) <
          *(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2)) {
        piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
        iVar6 = *piVar7 + -1;
        *piVar7 = iVar6;
        if (iVar6 < 1) {
          FUN_8c115f18(*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7)
          ;
        }
        if ((*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
             *(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2))) ||
           (*(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
            *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14))) {
          if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
            *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10)
                 = 0;
          }
        }
        else {
          **(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) = 0;
        }
        if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
          *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
        }
        else {
          *(undefined4 *)((int)&iStack_8 + iVar2) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          if (*(int *)(&stack0x00000064 + iVar2) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          else {
            *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
                 *(undefined4 *)((int)&iStack_8 + iVar2);
          }
          *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
               *(undefined4 *)((int)&iStack_8 + iVar2);
        }
        goto LAB_8c1173cc;
      }
      iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
      *(int *)(&stack0x00000064 + iVar2) = iVar6;
      *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
    }
    else {
      if ((&stack0x0000000f)[iVar2] == '\0') {
        iVar6 = *(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10);
      }
      else {
        iVar6 = **(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
      }
      *(int *)(&stack0x00000060 + iVar2) = iVar6;
      if (iVar6 == 0) {
        if (*(int *)(&stack0x00000000 + iVar2) <= (int)*(short *)(&stack0x0000002a + iVar2)) {
          if (*(int *)(&stack0x00000004 + iVar2) == 0) {
            iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(&stack0x00000050 + iVar2) = iVar6;
            if (*(int *)(iVar6 + 4) == 0) {
              iVar4 = (int)0x114;
              iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
              uVar3 = (*(code *)(&FUN_8c112fd8))
                                (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
            }
            else {
              *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                   *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
            }
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
                 *(undefined4 *)(&stack0x00000058 + iVar2);
            **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
            **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
            *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
                 *(undefined4 *)
                  ((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
                 *(int *)(&stack0x00000000 + iVar2) +
                 *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
            *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
          }
          if (*(int *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) == 0) {
            uVar3 = (*(code *)(&FUN_8c112b6e))
                              (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                               *(undefined4 *)(&stack0x00000074 + iVar2),ar6,ar7);
            *(undefined4 *)(&stack0x00000068 + iVar2) = uVar3;
          }
          else {
            *(undefined4 *)(&stack0x00000068 + iVar2) =
                 *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
          }
          *(undefined2 *)(*(int *)(&stack0x00000068 + iVar2) + 2) =
               *(undefined2 *)(&stack0x00000000 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0xc) =
               *(undefined4 *)(&stack0x0000004c + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x10) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x14) =
               *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(int *)(&stack0x00000044 + iVar2) = *(int *)(&stack0x00000044 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
               *(undefined4 *)(*(int *)(&stack0x00000068 + iVar2) + 0x18);
          if (*(int *)(&stack0x00000070 + iVar2) != 0) {
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x18) =
                 *(undefined4 *)(&stack0x00000068 + iVar2);
          }
          *(undefined4 *)(&stack0x00000070 + iVar2) = *(undefined4 *)(&stack0x00000068 + iVar2);
          if (*(int *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) == 0) {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x68) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          if ((&stack0x0000000f)[iVar2] == '\0') {
            *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
          else {
            iVar6 = (int)0x84;
            *(undefined4 *)(*(int *)(&stack0x00000070 + iVar2) + 0x1c) =
                 *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
            **(undefined4 **)(*(int *)((int)&iStack_8 + iVar6 + iVar2) + 0x1c) =
                 *(undefined4 *)(&stack0x00000070 + iVar2);
          }
        }
      }
      else if (*(int *)(&stack0x00000000 + iVar2) <
               (int)*(short *)(*(int *)(&stack0x00000060 + iVar2) + 2)) {
        if (*(int *)(&stack0x00000004 + iVar2) == 0) {
          iVar6 = *(int *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(&stack0x00000050 + iVar2) = iVar6;
          if (*(int *)(iVar6 + 4) == 0) {
            iVar4 = (int)0x114;
            iVar6 = *(int *)((int)&iStack_8 + 0x8c + iVar2);
            uVar3 = (*(code *)(&FUN_8c112fd8))
                              (iVar6,*(undefined4 *)(&stack0x00000050 + iVar2),ar6,ar7);
            *(undefined4 *)(iVar4 + iVar6) = uVar3;
          }
          else {
            *(undefined4 *)((int)0x114 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) =
                 *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4);
          }
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 4) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x10) =
               *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0xc);
          **(undefined4 **)(&stack0x00000050 + iVar2) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 8) = 0;
          *(undefined4 *)(*(int *)(&stack0x00000050 + iVar2) + 0x14) =
               *(undefined4 *)((int)0x12c + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(int *)(*(int *)(&stack0x00000050 + iVar2) + 0xc) =
               *(int *)(&stack0x00000000 + iVar2) +
               *(int *)((int)0x1ac + *(int *)((int)&iStack_8 + 0x8c + iVar2));
          *(undefined4 *)(&stack0x00000058 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
        }
        *(undefined2 *)(*(int *)(&stack0x00000060 + iVar2) + 2) =
             *(undefined2 *)(&stack0x00000000 + iVar2);
        *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 0xc) =
             *(undefined4 *)(&stack0x0000004c + iVar2);
        iVar6 = *(int *)(*(int *)(&stack0x00000060 + iVar2) + 8);
        *(int *)(&stack0x00000054 + iVar2) = iVar6;
        if (iVar6 != *(int *)(&stack0x00000058 + iVar2)) {
          *(undefined4 *)(*(int *)(&stack0x00000060 + iVar2) + 8) =
               *(undefined4 *)(&stack0x00000058 + iVar2);
          **(int **)(&stack0x00000058 + iVar2) = **(int **)(&stack0x00000058 + iVar2) + 1;
          if ((*(int *)(&stack0x00000054 + iVar2) != 0) &&
             (iVar6 = **(int **)(&stack0x00000054 + iVar2) + -1,
             **(int **)(&stack0x00000054 + iVar2) = iVar6, iVar6 < 1)) {
            (*(code *)(&FUN_8c115f18))
                      (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                       *(undefined4 *)(&stack0x00000054 + iVar2),ar6,ar7);
          }
        }
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)(&FUN_8c115f18))
                  (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 4),ar6,ar7);
      }
      if ((*(short *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 2) <=
           *(short *)(&stack0x0000002a + iVar2)) ||
         (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x10) != 0)) {
        iVar6 = *(int *)((int)&iStack_8 + 0x84 + iVar2);
        *(int *)(&stack0x00000064 + iVar2) = iVar6;
        *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) = *(undefined4 *)(iVar6 + 0x18);
        goto LAB_8c1173e8;
      }
      piVar7 = *(int **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8);
      iVar6 = *piVar7 + -1;
      *piVar7 = iVar6;
      if (iVar6 < 1) {
        (*(code *)(&FUN_8c115f18))
                  (*(undefined4 *)((int)&iStack_8 + 0x8c + iVar2),
                   *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 8),ar6,ar7);
      }
      if ((&stack0x0000000f)[iVar2] == '\0') {
        puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x1c);
LAB_8c11734a:
        *puVar8 = 0;
      }
      else {
        if ((*(uint *)((int)0xa0 + *(int *)((int)&iStack_8 + 0x8c + iVar2)) <=
             *(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14)) &&
           (*(uint *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) <
            *(uint *)((int)0xa4 + *(int *)((int)&iStack_8 + 0x8c + iVar2)))) {
          puVar8 = *(undefined4 **)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14);
          goto LAB_8c11734a;
        }
        if (*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) != 0) {
          *(undefined4 *)(*(int *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x14) + 0x10) =
               0;
        }
      }
      if (*(int *)((int)&iStack_8 + 0x84 + iVar2) == *(int *)(&stack0x00000074 + iVar2)) {
        *(undefined4 *)(&stack0x00000074 + iVar2) = *(undefined4 *)(&stack0x00000064 + iVar2);
      }
      else {
        *(undefined4 *)(&stack0xfffffffc + iVar2) =
             *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18);
        *(undefined4 *)(*(int *)((int)&iStack_8 + 0x84 + iVar2) + 0x18) =
             *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18);
        *(undefined4 *)(*(int *)(&stack0x00000074 + iVar2) + 0x18) =
             *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2);
        if (*(int *)(&stack0x00000064 + iVar2) == 0) {
          *(undefined4 *)(*(int *)((int)&iStack_8 + 0x8c + iVar2) + 0x54) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        else {
          *(undefined4 *)(*(int *)(&stack0x00000064 + iVar2) + 0x18) =
               *(undefined4 *)(&stack0xfffffffc + iVar2);
        }
        *(undefined4 *)((int)&iStack_8 + 0x84 + iVar2) =
             *(undefined4 *)(&stack0xfffffffc + iVar2);
      }
LAB_8c1173cc:
      *(int *)(&stack0x00000048 + iVar2) = *(int *)(&stack0x00000048 + iVar2) + -1;
    }
LAB_8c1173e8:
    iVar6 = *(int *)(&stack0x00000034 + iVar2) + 1;
  } while( true );
}

__asm__(".globl _FUN_8c11617a\n.set _FUN_8c11617a, _FUN_8c11617a_def\n");
