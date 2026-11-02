#include "../decls.h"
undefined4 FUN_8c0f72ec_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double in_dr0;
  double in_dr14;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_2c [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (**(code **)(*ar5 + 0x1a0))(ar5,ar5,ar6,ar7);
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = FUN_8c0f6ab0(iVar1 + iVar3 * 0x68,ar5,ar6,ar7);
    if ((iVar2 == 1) && (iVar1 + iVar3 * 0x68 != ar4)) {
      if (cVar6 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(iVar1 + iVar3 * 0x68 + 0x1c));
        in_dr0 = (double)CONCAT44(0x3fc00000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.956826979325289e-251;
      }
      if (cVar5 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
      iVar2 = iVar1 + iVar3 * 0x68;
      Vec3_sub(ar4,iVar2,ar6,ar7,auStack_2c);
      Vec3_length_sq(auStack_2c,iVar2,ar6,ar7);
      if (cVar5 == '\0') {
        bVar4 = SUB84(in_dr14,0) < (float)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        bVar4 = in_dr14 < in_dr0;
      }
      ar5 = (int *)0xffffffff;
      Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
      if (!bVar4) {
        if (cVar6 == '\0') {
          in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 4),
                                    *(undefined4 *)(iVar1 + iVar3 * 0x68 + 4));
        }
        else {
          in_dr0 = *(double *)(ar4 + 4);
        }
        if (cVar5 != '\0' || SUB84(in_dr0,0) <= (float)((ulonglong)in_dr0 >> 0x20)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0f72ec\n.set _FUN_8c0f72ec, _FUN_8c0f72ec_def\n");
