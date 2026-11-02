#include "../decls.h"
undefined4 FUN_8c07edac_def(int ar4,int ar5,int *ar6,int *ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0xc;
  if (*(int *)(ar4 + 100) == 1) {
    iVar3 = 0x17;
  }
  iVar1 = *(int *)(ar4 + 300);
  piVar2 = ar6;
  if (iVar1 == 0) {
    if (*(int *)(ar4 + 100) != 1) {
      ar6_00 = &DAT_8c125bf0;
      in_dr0 = CONCAT44(0x40400000,(int)in_dr0);
      ar7 = ar6;
      FUN_8c032518(ar4,ar5,&DAT_8c125bf0,ar6);
      Vec3_assign(ar4 + 0x54,auStack_28,ar6_00,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      goto LAB_8c07ee84;
    }
    *(undefined4 *)(ar4 + 300) = 3;
    iVar3 = ar5;
  }
  else {
    if (iVar1 == 1) {
LAB_8c07ee84:
      piVar2 = (int *)(ar4 + 0x54);
      pure_virtual_stub(ar4,ar5,piVar2,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x2b4) = 0;
      }
      goto switchD_8c07f028_default;
    }
    if (iVar1 == 2) {
      *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
      iVar1 = FUN_8c034148(ar4 + 0xb0,iVar3,ar6,ar7);
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        else if (iVar1 == 2) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          goto LAB_8c07efc4;
        }
      }
      FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7,auStack_38);
      FUN_8c082378(ar4,auStack_38,piVar2,ar7);
      Vec3_dtor(auStack_38,0xffffffff,piVar2,ar7);
      goto switchD_8c07f028_default;
    }
    iVar3 = ar5;
    if (iVar1 != 3) goto switchD_8c07f028_default;
  }
LAB_8c07efc4:
  FUN_8c0230f0(ar4 + 0x14,iVar3,piVar2,ar7,auStack_48);
  FUN_8c082378(ar4,auStack_48,piVar2,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_48,0xffffffff,piVar2,ar7);
  *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfe;
  iVar3 = *(int *)(ar4 + 0x128);
  if ((iVar3 < 8) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
    case 1:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 2:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    default:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 6:
      FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      break;
    case 7:
      if (*(int *)(ar4 + 100) == 1) {
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      }
      else {
        FUN_8c03f3ac(ar4 + 0xb0,ar5_00,piVar2,ar7);
      }
    }
  }
switchD_8c07f028_default:
  (**(code **)(*ar6 + 0x128))(ar6,ar5,piVar2,ar7);
  if (cVar7 == '\0') {
    in_dr0 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(ar5 + 4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar5 + 4);
  }
  if (cVar6 != '\0' || (float)in_dr0 <= (float)((ulonglong)in_dr0 >> 0x20)) {
    iVar3 = ar5;
    (**(code **)(*ar6 + 0x128))(ar6,ar5,piVar2,ar7);
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar5 + 4),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar5 = *(double *)(ar5 + 4);
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(0x3d4ccccd,fVar4);
    }
    else {
      dVar5 = -8.332610289015658e-251;
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x2c0),fVar4);
    }
    else {
      dVar5 = *(double *)(ar4 + 0x2c0);
    }
    if (cVar6 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
    if (cVar7 == '\0') {
      *(float *)(ar4 + 0x2c0) = fVar4;
    }
    else {
      *(undefined8 *)(ar4 + 0x2c0) = in_dr0;
    }
    FUN_8c031748(ar4,iVar3,piVar2,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c07edac\n.set _FUN_8c07edac, _FUN_8c07edac_def\n");
