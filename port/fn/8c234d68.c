#include "../decls.h"
undefined4 FUN_8c234d68_def(undefined4 ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  undefined1 *ar4_00;
  int iVar1;
  undefined1 *a7;
  int iVar2;
  undefined4 uVar3;
  uint a5;
  undefined1 *a6;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 in_dr12;
  undefined8 in_dr14;
  uint uStack_80;
  int iStack_7c;
  int iStack_70;
  int aiStack_68 [2];
  undefined1 auStack_60 [52];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uStack_20 = (undefined4)in_dr14;
  uStack_24 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_28 = (undefined4)in_dr12;
  uStack_2c = (undefined4)((ulonglong)in_dr12 >> 0x20);
  a5 = ar5;
  a6 = ar6;
  FUN_8c236454(&DAT_8c4aa4a8,ar5,ar6,ar7);
  if (((uint)ar6 & 0x80000000) == 0) {
    if (((uint)ar6 & 0x40) == 0) {
      uVar3 = 0x80002;
      FUN_8c237124(0x80002,a5,a6,ar7);
      ar4_00 = (undefined1 *)FUN_8c236510(uVar3,a5,a6,ar7);
    }
    else {
      uVar3 = 0x2100002;
      FUN_8c237124(0x2100002,a5,a6,ar7);
      ar4_00 = (undefined1 *)FUN_8c2365e2(uVar3,a5,a6,ar7);
    }
    pcVar7 = FUN_8c233f1c;
    iVar2 = 0x10;
    pcVar5 = FUN_8c25c3a4;
  }
  else {
    if (((uint)ar6 & 0x40) == 0) {
      uVar3 = 0x8000a;
      FUN_8c237124(0x8000a,a5,a6,ar7);
      ar4_00 = (undefined1 *)FUN_8c23666c(uVar3,a5,a6,ar7);
    }
    else {
      uVar3 = 0x210000a;
      FUN_8c237124(0x210000a,a5,a6,ar7);
      ar4_00 = (undefined1 *)FUN_8c236718(uVar3,a5,a6,ar7);
    }
    pcVar7 = FUN_8c233e70;
    pcVar5 = FUN_8c25c868;
    iVar2 = 0x18;
  }
  if (((uint)ar6 & 2) == 0) {
    if (((uint)ar6 & 1) == 0) {
      iStack_7c = 0;
      uStack_80 = 0;
      puVar4 = ar4_00;
      if (0 < ar5) {
        do {
          a5 = uStack_80;
          ar7 = auStack_60;
          puVar6 = (undefined1 *)(*pcVar7)(ar4,uStack_80,2,auStack_60);
          a6 = puVar6;
          ar4_00 = puVar4;
          if (puVar6 != (undefined1 *)0xffffffff) {
            a5 = 2;
            ar4_00 = (undefined1 *)(*pcVar5)(auStack_60,2,puVar4,puVar6);
            a6 = puVar4;
            ar7 = puVar6;
          }
          iStack_7c = iStack_7c + 1;
          uStack_80 = uStack_80 + 2;
          puVar4 = ar4_00;
        } while (iStack_7c < ar5);
      }
    }
    else {
      a6 = (undefined1 *)0x1;
      a5 = 0;
      ar7 = auStack_60;
      iVar1 = (*pcVar7)(ar4,0,1,auStack_60);
      if (iVar1 != -1) {
        iStack_7c = 0;
        uStack_80 = 1;
        puVar6 = auStack_60 + iVar2;
        puVar4 = ar4_00;
        if (0 < ar5) {
          do {
            a5 = uStack_80;
            ar7 = puVar6;
            a7 = (undefined1 *)(*pcVar7)(ar4,uStack_80,1,puVar6);
            a6 = a7;
            ar4_00 = puVar4;
            if (a7 != (undefined1 *)0xffffffff) {
              a5 = 2;
              ar4_00 = (undefined1 *)(*pcVar5)(auStack_60,2,puVar4,a7);
              a6 = puVar4;
              ar7 = a7;
            }
            iStack_7c = iStack_7c + 1;
            uStack_80 = uStack_80 + 1;
            puVar4 = ar4_00;
          } while (iStack_7c < ar5);
        }
      }
    }
  }
  else {
    a6 = (undefined1 *)0x1;
    a5 = 0;
    ar7 = auStack_60;
    aiStack_68[0] = (*pcVar7)(ar4,0,1,auStack_60);
    uStack_80 = 1;
    iStack_70 = 0;
    iStack_7c = 1;
    puVar4 = ar4_00;
    if (0 < ar5) {
      do {
        a6 = (undefined1 *)0x1;
        ar7 = auStack_60 + uStack_80 * iVar2;
        a5 = iStack_7c;
        iVar1 = (*pcVar7)(ar4,iStack_7c,1,ar7);
        aiStack_68[uStack_80] = iVar1;
        ar4_00 = puVar4;
        if ((aiStack_68[0] != -1) && (aiStack_68[1] != -1)) {
          a5 = 2;
          ar7 = (undefined1 *)(aiStack_68[0] + aiStack_68[1]);
          ar4_00 = (undefined1 *)(*pcVar5)(auStack_60,2,puVar4,ar7);
          a6 = puVar4;
        }
        uStack_80 = uStack_80 ^ 1;
        iStack_70 = iStack_70 + 1;
        iStack_7c = iStack_7c + 1;
        puVar4 = ar4_00;
      } while (iStack_70 < ar5);
    }
  }
  FUN_8c2370dc(ar4_00,a5,a6,ar7);
  uVar3 = FUN_8c2364b2(ar4_00,a5,a6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c234d68\n.set _FUN_8c234d68, _FUN_8c234d68_def\n");
