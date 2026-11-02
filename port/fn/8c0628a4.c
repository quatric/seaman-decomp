#include "../decls.h"
undefined4 * s_REACTION_TEMP_LACK_0628aa_def(int ar4,int *ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0;
  float fVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  a6 = ar6;
  if ((*(int *)(ar4 + 0x88c) == 0) &&
     (iVar1 = (**(code **)(*ar5 + 0x1ac))(ar5,0,ar6,ar7), *(int *)(ar4 + 0x884) != iVar1)) {
    uVar4 = 0;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,0,a6,ar7);
    *(undefined4 *)(ar4 + 0x884) = uVar2;
    if (*(int *)(ar4 + 0x884) == 0) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41980000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x419f333341980000;
      }
      if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x419f3333,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = 0x8c02602c419f3333;
        }
        if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7), 2 < (ushort)uVar2)) {
          ar7 = s_REACTION_TEMP_LACK_8c136ca2;
          a6 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_TEMP_LACK_8c136ca2);
          *(undefined4 *)(ar4 + 0x88c) = 1;
        }
      }
    }
  }
  if (*(int *)(ar4 + 0x890) == 0) {
    uVar2 = 0;
    iVar1 = (**(code **)(*ar5 + 0x1a4))(ar5,0,a6,ar7);
    if (iVar1 == 2) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar2,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41c8cccd,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x32d41c8cccd;
      }
      if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
         (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7), 2 < (ushort)uVar2)) {
        ar7 = s_REACTION_SWITCH_OFF_8c136cb5;
        a6 = 0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_SWITCH_OFF_8c136cb5);
        *(undefined4 *)(ar4 + 0x890) = 1;
      }
    }
  }
  puVar3 = *(undefined4 **)(ar4 + 0x894);
  if ((puVar3 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7),
     *(undefined4 **)(ar4 + 0x888) != puVar3)) {
    uVar4 = 1;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7);
    *(undefined4 *)(ar4 + 0x888) = uVar2;
    puVar3 = *(undefined4 **)(ar4 + 0x888);
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = &DAT_8c062af8;
      if (cVar8 == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = 79.0;
      }
      else {
        fVar5 = 79.0;
        fVar6 = 79.9;
      }
      if (cVar7 != '\0' || fVar6 <= fVar5) {
        (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)&DAT_8c062afc;
        if (cVar8 == '\0') {
          fVar6 = 79.9;
        }
        else {
          fVar5 = 79.9;
          fVar6 = 1.16728e-42;
        }
        if (cVar7 != '\0' || fVar5 <= fVar6) {
          uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
          puVar3 = (undefined4 *)0x3;
          if (2 < (ushort)uVar2) {
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_OXYGEN_LACK_8c136cc9);
            puVar3 = (undefined4 *)0x894;
            *(undefined4 *)(ar4 + 0x894) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}

__asm__(".globl _s_REACTION_TEMP_LACK_0628aa\n.set _s_REACTION_TEMP_LACK_0628aa, _s_REACTION_TEMP_LACK_0628aa_def\n");
