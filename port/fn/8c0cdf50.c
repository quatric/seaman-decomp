#include "../decls.h"
undefined4 FUN_8c0cdf50_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  int *ar4_00;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *a5;
  int *piVar9;
  code *pcVar10;
  code *a7;
  undefined4 extraout_fr1;
  char cVar11;
  short sStack_116;
  short sStack_114;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  code *pcStack_44;
  int aiStack_40 [4];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  pcVar10 = FUN_8c0c5db0;
  ar4_00 = (int *)FUN_8c0c5db0(*(undefined4 *)(ar5 + 0x7cc),FUN_8c0c5db0,ar6,ar7);
  pcVar3 = (code *)get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),pcVar10,ar6,ar7);
  pcStack_44 = (code *)get_field_128_0ce914(*(undefined4 *)(ar5 + 0x7cc),pcVar10,ar6,ar7);
  iVar4 = get_field_24_05c284(ar4_00,pcVar10,ar6,ar7);
  if (cVar11 == '\0') {
    uStack_50 = 0;
  }
  else {
    pcStack_44 = (code *)0x0;
    uStack_50 = extraout_fr1;
  }
  uStack_48 = 0;
  uStack_4c = 0;
  Vec3_ctor_zero(auStack_30,pcVar10,ar6,ar7);
  Vec3_ctor_zero(aiStack_40,pcVar10,ar6,ar7);
  sStack_114 = 0;
  sStack_116 = 0;
  (**(code **)(**(int **)(ar4 + 8) + 0x148))(*(int **)(ar4 + 8),pcVar10,ar6,ar7);
  uVar5 = (**(code **)(**(int **)(ar4 + 0xc) + 0x148))(*(int **)(ar4 + 0xc),pcVar10,ar6,ar7);
  (**(code **)(**(int **)(ar4 + 0x10) + 0x148))(*(int **)(ar4 + 0x10),pcVar10,ar6,ar7);
  a7 = (code *)&uStack_50;
  piVar9 = *(int **)(ar4 + (int)pcVar3 * 4 + 8);
  (**(code **)(*piVar9 + 0x13c))(piVar9,&uStack_48,&uStack_4c,a7);
  a5 = aiStack_40;
  piVar9 = ar4_00;
  pcVar10 = pcVar3;
  (**(code **)(ar4_00[2] + 0x150))(ar4_00,a5,pcVar3,a7);
  if (iVar4 != 0xe) {
    piVar9 = ar4_00;
    FUN_8c036988(ar4_00,a5,pcVar10,a7);
  }
  if (pcVar3 == (code *)0x0) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),iVar4,pcVar10,a7);
      pcVar10 = (code *)0x1;
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,1,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),10,pcVar10,a7);
      if (iVar4 < 1) {
        if (pcStack_44 == (code *)0x1) {
          pcVar10 = FUN_8c0c4dd0;
          FUN_8c0c4dd0(ar4_00,uVar5,FUN_8c0c4dd0,a7);
        }
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (**(code **)(**(int **)(ar4 + 8) + 0x11c))(*(int **)(ar4 + 8),0xe,pcVar10,a7);
      if (iVar4 < 4) {
        piVar9 = *(int **)(ar4 + 8);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 8);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x1) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),iVar4,pcVar10,a7);
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 0xc);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      a5 = (int *)0xa;
      uVar6 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),10,pcVar10,a7);
      for (sVar2 = 0; sVar2 < (short)uVar6; sVar2 = sVar2 + 1) {
        pcVar10 = (code *)(int)sVar2;
        a5 = (int *)0xa;
        iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x100))(*(int **)(ar4 + 0xc),10,pcVar10,a7);
        uVar7 = (**(code **)(*(int *)(iVar4 + 8) + 0x148))(iVar4,a5,pcVar10,a7);
        sVar1 = (short)uVar7;
        if ((sVar1 == 0) || (sVar1 == 1)) {
          sStack_114 = sStack_114 + 1;
        }
        else if (sVar1 == 3) {
          sStack_116 = sStack_116 + 1;
        }
      }
      piVar9 = ar4_00;
      uVar6 = (**(code **)(ar4_00[2] + 0x148))(ar4_00,a5,pcVar10,a7);
      sVar2 = (short)uVar6;
      if ((sVar2 == 0) || (sVar2 == 1)) {
        if (pcStack_44 == (code *)0x1) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else if ((sStack_114 < 4) &&
                (uVar6 = FUN_8c035b50(uVar5,a5,pcVar10,a7), (char)uVar6 < '\x04')) {
          if (pcStack_44 == (code *)0x3) {
            FUN_8c09a540(uVar5,a5,pcVar10,a7);
          }
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
      else if (sVar2 == 3) {
        if (pcStack_44 == (code *)0x1) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else if ((sStack_116 < 4) &&
                (uVar6 = FUN_8c035ca0(uVar5,a5,pcVar10,a7), (char)uVar6 < '\x04')) {
          if (pcStack_44 == (code *)0x3) {
            FUN_8c035c88(uVar5,a5,pcVar10,a7);
          }
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
    }
    else if (iVar4 == 0xe) {
      if (pcStack_44 == (code *)0x1) {
        piVar9 = *(int **)(ar4 + 0xc);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        iVar4 = (**(code **)(**(int **)(ar4 + 0xc) + 0x11c))(*(int **)(ar4 + 0xc),0xe,pcVar10,a7);
        if (iVar4 < 2) {
          piVar9 = *(int **)(ar4 + 0xc);
          (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
          a5 = ar4_00;
        }
        else {
          a5 = (int *)(ar4 + 8);
          pcVar10 = pcStack_44;
          FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
          piVar9 = ar4_00;
        }
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 0xc);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x2) {
    if ((iVar4 == 0xf) || (iVar4 == 0xd)) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),iVar4,pcVar10,a7);
      if (iVar4 < 1) {
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 10) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),10,pcVar10,a7);
      if (iVar4 < 1) {
        if (pcStack_44 == (code *)0x1) {
          FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7);
        }
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        a7 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,pcStack_44);
        piVar9 = ar4_00;
      }
    }
    else if (iVar4 == 0xe) {
      iVar4 = (**(code **)(**(int **)(ar4 + 0x10) + 0x11c))(*(int **)(ar4 + 0x10),0xe,pcVar10,a7);
      if (iVar4 < 3) {
        piVar9 = *(int **)(ar4 + 0x10);
        (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
        a5 = ar4_00;
      }
      else {
        a5 = (int *)(ar4 + 8);
        pcVar10 = pcStack_44;
        FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
        piVar9 = ar4_00;
      }
    }
    else {
      piVar9 = *(int **)(ar4 + 0x10);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
  }
  else if (pcVar3 == (code *)0x3) {
    pcVar10 = (code *)**(undefined4 **)(ar4 + 0x14);
    iVar8 = (**(code **)(pcVar10 + 0x118))
                      (*(undefined4 **)(ar4 + 0x14),*(code **)(pcVar10 + 0x118),pcVar10,a7);
    if (iVar8 < 0xc) {
      if ((iVar4 == 10) && (pcStack_44 == (code *)0x1)) {
        FUN_8c0c4dd0(ar4_00,uVar5,pcVar10,a7);
      }
      piVar9 = *(int **)(ar4 + 0x14);
      (**(code **)(*piVar9 + 0x50))(piVar9,ar4_00,pcVar10,a7);
      a5 = ar4_00;
    }
    else {
      a5 = (int *)(ar4 + 8);
      pcVar10 = pcStack_44;
      FUN_8c0c4cd8(ar4_00,a5,pcStack_44,a7);
      piVar9 = ar4_00;
    }
  }
  FUN_8c0c4e2c(piVar9,a5,pcVar10,a7);
  FUN_8c0c4e48(piVar9,a5,pcVar10,a7);
  pcVar3 = Vec3_dtor;
  Vec3_dtor(aiStack_40,0xffffffff,Vec3_dtor,a7);
  uVar5 = Vec3_dtor(auStack_30,0xffffffff,pcVar3,a7);
  return uVar5;
}

__asm__(".globl _FUN_8c0cdf50\n.set _FUN_8c0cdf50, _FUN_8c0cdf50_def\n");
