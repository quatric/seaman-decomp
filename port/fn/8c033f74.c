#include "../decls.h"
undefined4 s_CAnimBody_SetInterpolate_033f7e_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 in_fr1;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  float in_fr4;
  undefined8 in_xd0;
  undefined8 in_xd14;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (*(int *)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5_00 = s_CAnimBody__SetInterpolate___8c132d47;
    report_error_message(s_Motion_is_NO_SET__8c132ce8,s_CAnimBody__SetInterpolate___8c132d47,1,2);
    *(undefined4 *)(ar4 + 0x1c) = 0;
  }
  uVar1 = deref_u32(*(int *)(ar4 + 0x14) + *(int *)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x34) = uVar1;
  uVar1 = deref_u32(*(int *)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  uVar1 = FUN_8c026d74(*(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x44) = uVar1;
  uVar1 = FUN_8c026d74(*(int *)(ar4 + 0x18) + (int)ar5 * 4,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = uVar1;
  FUN_8c033d34(ar4,ar5_00,ar6,ar7);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(ar4 + 0x20);
    *(undefined4 *)(ar4 + 0x4c) = uVar1;
    *(undefined4 *)(ar4 + 0x3c) = uVar1;
    dVar5 = (double)CONCAT44(0xbf800000,in_fr1);
  }
  else {
    uVar4 = *(undefined8 *)(ar4 + 0x20);
    *(undefined8 *)(ar4 + 0x4c) = uVar4;
    *(undefined8 *)(ar4 + 0x3c) = uVar4;
    dVar5 = -8.32867096114109e-251;
  }
  if (in_fr4 == (float)((ulonglong)dVar5 >> 0x20)) {
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x20);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar8 == '\0') {
      *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd0;
    }
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x40) = in_xd0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x40) = in_fr4;
    }
    else {
      *(undefined8 *)(ar4 + 0x40) = in_xd14;
    }
    iVar2 = s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(ar4 + 0x1c),ar6,ar7);
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)CONCAT44((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= (float)((ulonglong)dVar5 >> 0x20)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(SUB84(dVar5,0) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(ar4 + 0x40) = in_xd0;
      }
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 100),*(undefined4 *)(ar4 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x40);
      dVar5 = *(double *)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x20) = fVar3;
    }
    else {
      *(undefined8 *)(ar4 + 0x20) = in_xd0;
    }
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar4 + 0x40);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x20);
    uVar6 = (ulonglong)*(uint *)(ar4 + 100);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(ar4 + 0x40);
    uVar6 = *(ulonglong *)(ar4 + 0x20);
    *(ulonglong *)(ar4 + 0x5c) = uVar6;
  }
  fVar3 = (float)uVar6;
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(1.0 / fVar3,fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(0x3f800000,fVar3) / (double)CONCAT44(0x3f800000,fVar3);
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 0x60) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x60) = dVar5;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar5 & 0xffffffff;
  }
  *(undefined1 *)(ar4 + 0x54) = 1;
  return 0x54;
}

__asm__(".globl _s_CAnimBody_SetInterpolate_033f7e\n.set _s_CAnimBody_SetInterpolate_033f7e, _s_CAnimBody_SetInterpolate_033f7e_def\n");
