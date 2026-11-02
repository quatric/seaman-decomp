#include "../decls.h"
int FUN_8c02dfa0_def(char *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *piVar4;
  char cVar5;
  float fVar6;
  ulonglong in_dr0;
  float fVar7;
  char cVar8;
  char cVar9;
  ulonglong uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar3 = (int)ar4[0xb];
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_28 = uVar2;
          if (cVar9 != '\0') {
            uStack_28 = (undefined4)in_dr0;
            uStack_24 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_28,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_24,uStack_28);
          }
          if (cVar8 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      fVar6 = (float)(in_dr0 >> 0x20);
      if (cVar9 == '\0') {
        fVar7 = 35.0;
      }
      else {
        fVar6 = 35.0;
        fVar7 = 3.78351e-42;
      }
      if ((cVar8 != '\0' || fVar7 <= fVar6) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 1:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_34 = uVar2;
          if (cVar9 != '\0') {
            uStack_34 = (undefined4)in_dr0;
            uStack_30 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_34,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_30,uStack_34);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      ar4_00 = ar5;
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar4_00,piVar4,ar6,ar7);
        piVar4 = (int *)0x3e8;
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      iVar3 = FUN_8c02bea4(ar4,piVar4,ar6,ar7);
      if (iVar3 < 1) {
        (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      }
      break;
    case 2:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_48 = uVar2;
          if (cVar9 != '\0') {
            uStack_48 = (undefined4)in_dr0;
            uStack_44 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_48,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_44,uStack_48);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 3:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x188))(ar5,piVar4,ar6,ar7);
          uVar1 = in_dr0;
          if (cVar9 == '\0') {
            uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),(int)(in_dr0 >> 0x20));
            uVar1 = uStack_54;
          }
          uStack_54 = uVar1;
          in_dr0 = uStack_54;
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((undefined4)uStack_54,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc))
                             );
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      break;
    case 4:
      if ((*ar4 == '\x01') && (ar4[8] == '\x05')) {
        ar4[4] = '\x10';
        ar4[5] = '\'';
        ar4[6] = '\0';
        ar4[7] = '\0';
      }
      break;
    case 5:
      if (*ar4 == '\x01') {
        ar4[8] = '\x02' - (char)*(undefined4 *)(ar4 + 4);
      }
    }
  }
  iVar3 = (int)*ar4;
  if (iVar3 == 0) {
    iVar3 = 0;
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  return iVar3;
}

__asm__(".globl _FUN_8c02dfa0\n.set _FUN_8c02dfa0, _FUN_8c02dfa0_def\n");
