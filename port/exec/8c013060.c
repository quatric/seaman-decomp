#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c013060_def(int ar4,undefined1 *ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "FUN_8c013060";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char *ar4_00;
  char *ar4_01;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *ar6_00;
  char *ar7_00;
  ulonglong in_dr4 = 0;
  undefined4 ain0;
  
  puVar6 = (fr0_ + (int)0xffffffa4);
  ar4_01 = (char *)(unsigned)&(*(undefined4 *)(fr0_ - 0x28));
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr4;
  (*(undefined4 *)(fr0_ - 0x24)) = (uint)(in_dr4 >> 0x20);
  bVar1 = false;
  ar7_00 = ar7;
  if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c010b40(ar4_01,7,ar6,ar7)), iVar2 != 0))
  {
    puVar6 = ar5 + 8;
    for (; ar5 < puVar6; ar5 = ar5 + 1) {
      *ar5 = 0;
    }
    *ar6 = 0;
    if (((*(undefined4 *)(fr0_ - 0x24)) & 0x80000000) == 0) {
      *ar7 = '\x01';
    }
    else {
      *ar7 = -1;
    }
  }
  else {
    ar4_00 = ar7;
    ar6_00 = ((undefined1 *)(fr0_ - 0x30));
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c012f58(ar7,(fr0_ + (int)0xffffffa4),((undefined1 *)(fr0_ - 0x30)),ar7_00));
    if (*ar7 == -1) {
      (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x24)) & 0x7fffffff;
    }
    if ((short)(*(undefined4 *)(fr0_ - 0x5c)) == 0x7ff) {
      if ((*(uint*)((uchar*)&(*(undefined4 *)(fr0_ - 0x24))+2)) != -0x10) {
        return 2;
      }
      puVar6 = (undefined1 *)(unsigned)0x6;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c010b40(ar4_01,6,ar6_00,ar7_00));
      if (iVar2 == 0) {
        return 2;
      }
      if (*ar7 == '\x01') {
        return 1;
      }
      ar4_00 = ar4_01;
      if (*ar7 == -1) {
        return 0xffffffff;
      }
    }
    sVar4 = (short)(*(undefined4 *)(fr0_ - 0x5c)) + -0x3ff;
    ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0x5c)) >> 0x10),sVar4);
    if (sVar4 < 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00));
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00));
    }
    (*(undefined1 *)(fr0_ - 0x29)) = 0;
    *ar6 = (iVar2 - ar4) + 1;
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c012af8(ar4,((undefined1 *)(fr0_ - 0x38)),ar6_00,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 184)), libgcc_divide_helper_010468(ar4,8,vr6,vr7));
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        ((undefined1 *)(fr0_ - 0x38))[iVar2] = ((undefined1 *)(fr0_ - 0x38))[iVar2 + iVar3];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = ((undefined1 *)(fr0_ - 0x38)) + iVar5; puVar6 < ((undefined1 *)(fr0_ - 0x30)); puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    iVar2 = ar4 + iVar3 * -8;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c01289c(((undefined1 *)(fr0_ - 0x38)),8,iVar2,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c012af8(ar4 + -1,((undefined1 *)(fr0_ - 0x40)),iVar2,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 184)), libgcc_divide_helper_010468(ar4 + -1,8,vr6,vr7));
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        ((undefined1 *)(fr0_ - 0x40))[iVar2] = ((undefined1 *)(fr0_ - 0x40))[iVar3 + iVar2];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = ((undefined1 *)(fr0_ - 0x40)) + iVar5; puVar6 < ((undefined1 *)(fr0_ - 0x38)); puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 184)); FUN_8c01289c(((undefined1 *)(fr0_ - 0x40)),8,ar4 + iVar3 * -8 + -1,ar7_00); });
    while( true ) {
      while( true ) {
        puVar6 = ar5;
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c010b60((int)(short)ain0,((undefined1 *)(fr0_ - 0x30)),*ar6,ar5));
        (vsp = ((unsigned long)(fr0_ - 184)), memmove(((undefined1 *)(fr0_ - 0x48)),ar5,8,puVar6));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c013ec0(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x38)),8,puVar6));
        if (iVar2 < 1) break;
        bVar1 = true;
        *ar6 = *ar6 + 1;
      }
      (vsp = ((unsigned long)(fr0_ - 184)), memmove(((undefined1 *)(fr0_ - 0x48)),ar5,8,puVar6));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c013ec0(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x38)),8,puVar6));
      if (iVar2 == 0) break;
      (vsp = ((unsigned long)(fr0_ - 184)), memmove(((undefined1 *)(fr0_ - 0x48)),ar5,8,puVar6));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c013ec0(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x40)),8,puVar6));
      if (-1 < iVar2) {
        return 0;
      }
      if (bVar1) {
        return 0;
      }
      *ar6 = *ar6 + -1;
    }
    iVar2 = *ar6;
    *ar6 = iVar2 + 1;
    (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c010b60((int)(short)ain0,((undefined1 *)(fr0_ - 0x30)),iVar2 + 1,ar5));
  }
  return 0;
}

__asm__(".globl _FUN_8c013060\n.set _FUN_8c013060, _FUN_8c013060_def\n");
