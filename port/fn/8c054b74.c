#include "../decls.h"
undefined4 FUN_8c054b74_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  double dVar3;
  undefined8 in_dr14;
  double dVar4;
  bool bVar5;
  char cVar6;
  
  cVar6 = '\0';
  dVar3 = (double)CONCAT44(0x40200000,in_fr1);
  dVar4 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(float *)(ar4 + 0x48) * 2.5);
  if (*(int *)(ar4 + 0x31c) != 0) {
    return 0;
  }
  while( true ) {
    iVar1 = *(int *)(ar4 + 300);
    if (4 < iVar1) {
      return 1;
    }
    if (iVar1 < 0) break;
                    
    switch(iVar1) {
    case 0:
      if (ar7 == 1) {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      else {
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
      }
      break;
    case 1:
      iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
      *(undefined4 *)(ar4 + 0x40) = 5;
      return 1;
    case 2:
      iVar1 = FUN_8c055c38(ar4,ar5,ar4 + 0x34c,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      *(undefined4 *)(ar4 + 0x178) = 0;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      return 1;
    case 3:
      uVar2 = ar6;
      iVar1 = FUN_8c04c314(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        *(undefined4 *)(ar4 + 300) = 4;
      }
      else {
        FUN_8c022fc0(ar5,ar6,uVar2,ar7);
        if (cVar6 == '\0') {
          bVar5 = (float)((ulonglong)dVar3 >> 0x20) < SUB84(dVar4,0);
        }
        else {
          bVar5 = dVar3 < dVar4;
        }
        if ((bVar5) && (*(int *)(ar4 + 0x304) == 1)) {
          *(undefined4 *)(ar4 + 300) = 4;
        }
      }
      if (*(int *)(ar4 + 0x21c) != 1) {
        return 1;
      }
      *(undefined4 *)(ar4 + 300) = 4;
      return 1;
    case 4:
      uVar2 = ar6;
      iVar1 = FUN_8c057164(ar4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        return 1;
      }
      Vec3_assign(ar4 + 600,ar6,uVar2,ar7);
      *(undefined4 *)(ar4 + 300) = 0;
      *(undefined4 *)(ar4 + 0x290) = 0;
      *(undefined4 *)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(ar4 + 0x280) = 0;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c054b74\n.set _FUN_8c054b74, _FUN_8c054b74_def\n");
