#include "../decls.h"
undefined4 s_CAnimBody_AdvanceFrame_033ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float in_fr4;
  undefined4 in_fr14;
  undefined8 in_xd0;
  undefined8 in_xd14;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__AdvanceFrame___8c132cfa,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  uVar2 = 0;
  if (cVar5 == '\0') {
    dVar4 = (double)CONCAT44((float)*(int *)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar4 = (double)*(int *)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),in_fr4);
    in_xd14 = in_xd0;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x20);
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(ar4 + 0x20) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x20) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x1c);
  iVar1 = s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x70) = 0;
  if (*(int *)(ar4 + 0x28) == 0) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(ar4 + 0x20);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 == '\0' && (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar4,0)) {
      FUN_8c033d34(ar4,ar5_00,ar6,ar7);
      uVar2 = 1;
      *(undefined4 *)(ar4 + 0x70) = 1;
      if (*(int *)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
        *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
        *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
    if (*(char *)(ar4 + 0x54) != '\0') {
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 0x60));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x60);
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) * in_fr4;
      }
      else {
        fVar3 = SUB84(dVar4 * (double)CONCAT44(in_fr14,in_fr4),0);
      }
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x58),fVar3);
      }
      else {
        dVar4 = *(double *)(ar4 + 0x58);
      }
      if (cVar5 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        *(float *)(ar4 + 0x58) = fVar3;
      }
      else {
        *(undefined8 *)(ar4 + 0x58) = in_xd14;
      }
      uVar2 = 3;
      *(undefined4 *)(ar4 + 0x70) = 0;
      if (cVar6 == '\0') {
        fVar3 = *(float *)(ar4 + 0x58);
      }
      if (cVar5 != '\0' || 1.0 <= fVar3) {
        *(undefined1 *)(ar4 + 0x54) = 0;
        if (cVar6 == '\0') {
          *(undefined4 *)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
        }
        uVar2 = 4;
        *(undefined4 *)(ar4 + 0x70) = 1;
      }
    }
  }
  else if (*(int *)(ar4 + 0x28) == 1) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = (double)CONCAT44((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= (float)((ulonglong)dVar4 >> 0x20)) {
      if (cVar6 == '\0') {
        dVar4 = (double)(ulonglong)*(uint *)(ar4 + 0x20);
      }
      fVar3 = SUB84(dVar4,0);
      if (cVar5 != '\0' || fVar3 <= 0.0) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(ar4 + 0x20);
        }
        if (fVar3 != 0.0) {
          if (cVar6 == '\0') {
            dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),fVar3);
          }
          else {
            dVar4 = *(double *)(ar4 + 0x20);
          }
          if (cVar5 == '\0') {
            dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) + in_fr4,SUB84(dVar4,0));
          }
          else {
            dVar4 = dVar4 + (double)CONCAT44(in_fr14,in_fr4);
          }
          if (cVar6 == '\0') {
            *(int *)(ar4 + 0x20) = (int)((ulonglong)dVar4 >> 0x20);
          }
          else {
            *(double *)(ar4 + 0x20) = dVar4;
          }
        }
        *(undefined4 *)(ar4 + 0x24) = 1;
        uVar2 = 1;
        *(undefined4 *)(ar4 + 0x70) = 1;
        if (*(int *)(ar4 + 0x2c) != -1) {
          *(undefined4 *)(ar4 + 0x1c) = *(undefined4 *)(ar4 + 0x2c);
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x30);
          *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
          uVar2 = 2;
          *(undefined4 *)(ar4 + 0x70) = 0;
        }
      }
    }
    else {
      if (cVar6 == '\0') {
        dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(ar4 + 0x20);
      }
      if (cVar5 == '\0') {
        dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) - in_fr4,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - (double)CONCAT44(in_fr14,in_fr4);
      }
      if (cVar6 == '\0') {
        *(int *)(ar4 + 0x20) = (int)((ulonglong)dVar4 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x20) = dVar4;
      }
      *(undefined4 *)(ar4 + 0x24) = 0xffffffff;
      uVar2 = 5;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033ba0\n.set _s_CAnimBody_AdvanceFrame_033ba0, _s_CAnimBody_AdvanceFrame_033ba0_def\n");
