#include "../decls.h"
undefined4 FUN_8c0bfa78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffff60;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_2c = DAT_8c13be78;
  uStack_28 = DAT_8c13be7c;
  uStack_24 = DAT_8c13be80;
  uStack_20 = DAT_8c13be84;
  uStack_1c = DAT_8c13be88;
  uStack_18 = DAT_8c13be8c;
  uStack_14 = DAT_8c13be90;
  uStack_10 = DAT_8c13be94;
  fStack_4c = DAT_8c13be98;
  fStack_48 = DAT_8c13be9c;
  fStack_44 = DAT_8c13bea0;
  fStack_40 = DAT_8c13bea4;
  fStack_3c = DAT_8c13bea8;
  fStack_38 = DAT_8c13beac;
  fStack_34 = DAT_8c13beb0;
  fStack_30 = DAT_8c13beb4;
  fStack_6c = DAT_8c13beb8;
  fStack_68 = DAT_8c13bebc;
  fStack_64 = DAT_8c13bec0;
  fStack_60 = DAT_8c13bec4;
  fStack_5c = DAT_8c13bec8;
  fStack_58 = DAT_8c13becc;
  fStack_54 = DAT_8c13bed0;
  fStack_50 = DAT_8c13bed4;
  uStack_8c = DAT_8c13bed8;
  uStack_88 = DAT_8c13bedc;
  uStack_84 = DAT_8c13bee0;
  uStack_80 = DAT_8c13bee4;
  FUN_8c0162f8(&stack0xffffff60,ar5,ar6,ar7);
  uStack_7c = 0;
  uStack_7a = 0xff;
  uStack_78 = 0;
  uStack_76 = 0x80;
  uStack_74 = 0xff;
  uStack_72 = 0x80;
  uStack_70 = 0xff;
  uStack_6e = 0xff;
  uVar4 = 4;
  puVar3 = (undefined4 *)0x8c43654c;
  FUN_8c016318(&stack0xffffff60,&uStack_2c,0x8c43654c,4,in_stack_ffffff60);
  FUN_8c016324(&stack0xffffff60,&uStack_7c,puVar3,uVar4);
  uVar1 = 0x80000060;
  FUN_8c015198(&stack0xffffff60,0x80000060,puVar3,uVar4,in_stack_ffffff60);
  FUN_8c01538c(ar5,uVar1,puVar3,uVar4);
  uVar1 = 0xc;
  FUN_8c014a94(ar5,0xc,puVar3,uVar4);
  FUN_8c01636c(&stack0xffffff60,uVar1,puVar3,uVar4);
  if (*(int *)(ar4 + 0xc) == 0) {
    FUN_8c014a94(ar5,0xc,puVar3,uVar4);
    if (*(int *)(ar4 + 0x24) == 1) {
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_4c);
      }
      else {
        in_xd0 = CONCAT44(fStack_48,fStack_4c);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_4c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_4c = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_48);
      }
      else {
        fStack_4c = (float)in_xd0;
        fStack_48 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_44,fStack_48);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_48 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_48 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_44);
      }
      else {
        fStack_48 = (float)in_xd0;
        fStack_44 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_40,fStack_44);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_44 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_44 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_40);
      }
      else {
        fStack_44 = (float)in_xd0;
        fStack_40 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_3c,fStack_40);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_40 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_40 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_3c);
      }
      else {
        fStack_40 = (float)in_xd0;
        fStack_3c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_38,fStack_3c);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_3c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_3c = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_38);
      }
      else {
        fStack_3c = (float)in_xd0;
        fStack_38 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_34,fStack_38);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_38 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_38 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_34);
      }
      else {
        fStack_38 = (float)in_xd0;
        fStack_34 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_30,fStack_34);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_34 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_34 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_30);
      }
      else {
        fStack_34 = (float)in_xd0;
        fStack_30 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(uStack_2c,fStack_30);
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        fStack_30 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_30 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        fStack_30 = (float)in_xd0;
        uStack_2c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar1 = 4;
      puVar3 = &uStack_8c;
      FUN_8c016318(&stack0xffffff60,&fStack_4c,puVar3,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar1);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar1);
      uStack_7c = 0x80;
      uStack_7a = 0x7f;
      uStack_78 = 0x80;
      uStack_76 = 0;
      uStack_74 = 0xff;
      uStack_72 = 0;
      uStack_70 = 0xff;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = (undefined4 *)0x8c43654c;
      FUN_8c016318(&stack0xffffff60,&fStack_6c,0x8c43654c,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
    }
    else {
      uStack_7c = 0;
      uStack_7a = 0x7f;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_74 = 0x7f;
      uStack_72 = 0;
      uStack_70 = 0x7f;
      uStack_6e = 0x7f;
      uVar4 = 4;
      uVar1 = 0x8c43654c;
      FUN_8c016318(&stack0xffffff60,&fStack_4c,0x8c43654c,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,uVar1,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,uVar1,uVar4);
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_6c);
      }
      else {
        in_xd0 = CONCAT44(fStack_68,fStack_6c);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_6c = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_6c = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_68);
      }
      else {
        fStack_6c = (float)in_xd0;
        fStack_68 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_64,fStack_68);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_68 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_68 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_64);
      }
      else {
        fStack_68 = (float)in_xd0;
        fStack_64 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_60,fStack_64);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_64 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_64 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_60);
      }
      else {
        fStack_64 = (float)in_xd0;
        fStack_60 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_5c,fStack_60);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_60 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_60 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_5c);
      }
      else {
        fStack_60 = (float)in_xd0;
        fStack_5c = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_58,fStack_5c);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_5c = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_5c = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_58);
      }
      else {
        fStack_5c = (float)in_xd0;
        fStack_58 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_54,fStack_58);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_58 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_58 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_54);
      }
      else {
        fStack_58 = (float)in_xd0;
        fStack_54 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_50,fStack_54);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_54 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_54 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44(0x41200000,fStack_50);
      }
      else {
        fStack_54 = (float)in_xd0;
        fStack_50 = (float)((ulonglong)in_xd0 >> 0x20);
        in_xd0 = CONCAT44(fStack_4c,fStack_50);
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        fStack_50 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fStack_50 = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        fStack_50 = (float)in_xd0;
        fStack_4c = (float)((ulonglong)in_xd0 >> 0x20);
      }
      uStack_7c = 0x80;
      uStack_7a = 0x7f;
      uStack_78 = 0x80;
      uStack_76 = 0;
      uStack_74 = 0xff;
      uStack_72 = 0;
      uStack_70 = 0xff;
      uStack_6e = 0x7f;
      uVar4 = 4;
      puVar3 = &uStack_8c;
      FUN_8c016318(&stack0xffffff60,&fStack_6c,puVar3,4,in_stack_ffffff60);
      puVar2 = &uStack_7c;
      FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
      FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
    }
  }
  else if (*(int *)(ar4 + 0xc) == 1) {
    FUN_8c014a94(ar5,0xb,puVar3,uVar4);
    uStack_7c = 0;
    uStack_7a = 0xff;
    uStack_78 = 0;
    uStack_76 = 0;
    uStack_74 = 0xff;
    uStack_72 = 0;
    uStack_70 = 0xff;
    uStack_6e = 0xff;
    puVar2 = &uStack_7c;
    FUN_8c016324(&stack0xffffff60,puVar2,puVar3,uVar4);
    FUN_8c01636c(&stack0xffffff60,puVar2,puVar3,uVar4);
  }
  uVar1 = free_if_nonnull_wrap_0151a0(&stack0xffffff60,0xffffffff,puVar3,uVar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0bfa78\n.set _FUN_8c0bfa78, _FUN_8c0bfa78_def\n");
