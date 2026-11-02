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
undefined4 FUN_8c010e84_def(int ar4,byte *ar5,int *ar6,byte *ar7)

{
  ring[rp++ & 255] = "FUN_8c010e84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  byte *a7;
  byte *pbVar8;
  byte *pbVar9;
  
  ((byte *)(fr0_ - 0x5c))[1] = 0;
  ((byte *)(fr0_ - 0x5c))[2] = 0;
  ((byte *)(fr0_ - 0x5c))[3] = 0;
  (*(int *)(fr0_ - 0x58)) = 0;
  (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)((byte *)(unsigned)0x0));
  (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)((byte *)(unsigned)0x0));
  (*(undefined4 *)(fr0_ - 0x44)) = 0;
  (*(int *)(fr0_ - 0x40)) = 0;
  (*(int *)(fr0_ - 0x3c)) = 0;
  (*(int *)(fr0_ - 0x38)) = 0;
  (*(int *)(fr0_ - 0x34)) = 0;
  a7 = ar7;
  if (ar4 == 0) {
    if (ar6 == (int *)(unsigned)0x0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x452;
      return 0xffffffff;
    }
    if ((*(byte *)(unsigned)(ar6 + 4) & 7) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x514;
      return 0xffffffff;
    }
    a7 = (byte *)(unsigned)(int)(char)ar6[4];
    (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar5));
    if ((((uint)a7 & 4) == 0) && (((uint)a7 & 1) != 0)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x516;
      return 0xffffffff;
    }
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  ((byte *)(fr0_ - 0x5c))[0] = 0;
  ((undefined1 *)(fr0_ - 0xe8))[0] = 0x30;
  (*(int *)(fr0_ - 0x30)) = ar4;
  (*(unsigned *)(fr0_ - 0x2c) = (unsigned)(unsigned long)(ar6));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c011836(&(*(int *)(fr0_ - 0x30)),ar5,ar6,a7));
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  (*(unsigned *)(fr0_ - 0xe0) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
  do {
    while( true ) {
      if (((*ar7 == 0) || (iVar2 = (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c011836(&(*(int *)(fr0_ - 0x30)),ar5,ar6,a7)), iVar2 != 0)) ||
         ((((byte *)(fr0_ - 0x5c))[0] & 1) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c011826(&(*(int *)(fr0_ - 0x30)),ar5,ar6,a7));
        return (*(undefined4 *)(fr0_ - 0x28));
      }
      (*(unsigned *)(fr0_ - 0xf0) = (unsigned)(unsigned long)(ar7));
      if (*ar7 == 0x25) break;
      for (; (*((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xf0)) != 0 && (*((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xf0)) != 0x25)); (*(unsigned *)(fr0_ - 0xf0) = (unsigned)(unsigned long)(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xf0)) + 1))) {
      }
      ar5 = ((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xf0)) + -(int)ar7;
      ar6 = &(*(int *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(ar7,ar5,&(*(int *)(fr0_ - 0x30)),a7));
      ar7 = ((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xf0));
    }
    ((byte *)(fr0_ - 0x5c))[0] = 0;
    (*(undefined4 *)(fr0_ - 0x44)) = 0;
    (*(int *)(fr0_ - 0x40)) = 0;
    (*(int *)(fr0_ - 0x3c)) = 0;
    (*(int *)(fr0_ - 0x38)) = 0;
    (*(int *)(fr0_ - 0x34)) = 0;
    while( true ) {
      pbVar8 = ar7 + 1;
      bVar1 = *pbVar8;
      if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23)))) break;
      bVar1 = *pbVar8;
      ar7 = pbVar8;
      if (bVar1 == 0x2d) {
        ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 2;
      }
      else if (bVar1 == 0x2b) {
        ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 8;
      }
      else if (bVar1 == 0x20) {
        if ((((byte *)(fr0_ - 0x5c))[0] & 8) == 0) {
          ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 0x10;
        }
      }
      else if (bVar1 == 0x23) {
        ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 4;
      }
    }
    ((byte *)(fr0_ - 0x5c))[1] = 0x20;
    if (*pbVar8 == 0x30) {
      pbVar8 = ar7 + 2;
      ((byte *)(fr0_ - 0x5c))[1] = 0x30;
    }
    (*(int *)(fr0_ - 0x58)) = 0;
    if (*pbVar8 == 0x2a) {
      uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
      }
      ar5 = (byte *)(unsigned)(uVar3 - 4);
      pbVar9 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar9 = (byte *)(unsigned)(uVar3 - 8);
      }
      (*(int *)(fr0_ - 0x58)) = *(int *)(unsigned)pbVar9;
      if ((*(int *)(fr0_ - 0x58)) < 0) {
        ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 2;
        (*(int *)(fr0_ - 0x58)) = -(*(int *)(fr0_ - 0x58));
      }
      pbVar8 = pbVar8 + 1;
      (*(uint *)(fr0_ + 0x00000000)) = uVar3;
      if (0x200 < (*(int *)(fr0_ - 0x58))) {
        ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x518;
      }
    }
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 4) != 0) {
      (*(int *)(fr0_ - 0x58)) = 0;
      while (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 4) != 0) {
        iVar6 = (char)*pbVar8 + -0x30;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 244)), libgcc_divide_helper_010468(0x200 - iVar6,10,vr6,vr7));
        pbVar8 = pbVar8 + 1;
        if (iVar2 < (*(int *)(fr0_ - 0x58))) {
          ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x518;
        }
        else {
          (*(int *)(fr0_ - 0x58)) = (*(int *)(fr0_ - 0x58)) * 10 + iVar6;
        }
      }
    }
    (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0xffffffff));
    pbVar9 = pbVar8;
    if (*pbVar8 == 0x2e) {
      pbVar9 = pbVar8 + 1;
      if (*pbVar9 == 0x2a) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
        if ((uVar3 & 3) != 0) {
          uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
        }
        ar5 = (byte *)(unsigned)(uVar3 - 4);
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(ar5));
        if (((uint)ar5 & 3) != 0) {
          (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)(uVar3 - 8)));
        }
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)(((byte *)(unsigned long)*(unsigned *)(unsigned)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)))));
        if ((int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) < 0) {
          (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0xffffffff));
        }
        pbVar9 = pbVar8 + 2;
        (*(uint *)(fr0_ + 0x00000000)) = uVar3;
        if (0x200 < (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54))) {
          ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x518;
        }
      }
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar9] & 4) != 0) {
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0x0));
        while (((((undefined1 *)(unsigned)0x8c125470))[*pbVar9] & 4) != 0) {
          iVar6 = (char)*pbVar9 + -0x30;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 244)), libgcc_divide_helper_010468(0x200 - iVar6,10,vr6,vr7));
          pbVar9 = pbVar9 + 1;
          if (iVar2 < (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54))) {
            ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 1;
            (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x518;
          }
          else {
            (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)((int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) * 10 + iVar6)));
          }
        }
      }
    }
    (*(int *)(fr0_ - 0x50)) = 0x20;
    bVar1 = *pbVar9;
    if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
      (*(int *)(fr0_ - 0x50)) = (int)(char)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    bVar1 = *pbVar9;
    if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
        ((bVar1 == 0x75 || (bVar1 == 0x78)))) || (bVar1 == 0x58)) {
      if ((*(int *)(fr0_ - 0x50)) == 0x6c) {
        uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 8;
        }
        puVar5 = (uint *)(unsigned)(uVar7 - 4);
        if (((uint)puVar5 & 3) != 0) {
          puVar5 = (uint *)(unsigned)(uVar7 - 8);
        }
        uVar3 = *puVar5;
        (*(uint *)(fr0_ + 0x00000000)) = uVar7;
      }
      else if ((*(int *)(fr0_ - 0x50)) == 0x68) {
        bVar1 = *pbVar9;
        if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
          uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 8;
          }
          puVar5 = (uint *)(unsigned)(uVar7 - 4);
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(unsigned)(uVar7 - 8);
          }
          uVar3 = *puVar5 & 0xffff;
          (*(uint *)(fr0_ + 0x00000000)) = uVar7;
        }
        else {
          uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = (*(uint *)(fr0_ + 0x00000000)) + 8;
          }
          puVar4 = (undefined4 *)(unsigned)(uVar7 - 4);
          if (((uint)puVar4 & 3) != 0) {
            puVar4 = (undefined4 *)(unsigned)(uVar7 - 8);
          }
          uVar3 = (uint)(short)*puVar4;
          (*(uint *)(fr0_ + 0x00000000)) = uVar7;
        }
      }
      else {
        bVar1 = *pbVar9;
        if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
          uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
          }
          puVar5 = (uint *)(unsigned)(uVar3 - 4);
          (*(uint *)(fr0_ + 0x00000000)) = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(unsigned)(uVar3 - 8);
          }
        }
        else {
          uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
          }
          puVar5 = (uint *)(unsigned)(uVar3 - 4);
          (*(uint *)(fr0_ + 0x00000000)) = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(unsigned)(uVar3 - 8);
          }
        }
        uVar3 = *puVar5;
      }
      if (((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) == (byte *)(unsigned)0xffffffff) {
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0x1));
      }
      ar6 = (int *)(unsigned)(int)(char)*pbVar9;
      ar5 = ((byte *)(fr0_ - 0xdc));
      a7 = ((byte *)(fr0_ - 0x5c));
      (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0115c4(uVar3,((byte *)(fr0_ - 0xdc)),ar6,((byte *)(fr0_ - 0x5c))));
      (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)((byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 244)), log_message(((byte *)(fr0_ - 0xdc)),ar5,ar6,a7))));
      (*(unsigned *)(fr0_ - 0xec) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    }
    else if (((bVar1 == 0x66) || (bVar1 == 0x65)) ||
            ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
      ar6 = (int *)(unsigned)(int)(char)*pbVar9;
      ar5 = ((byte *)(fr0_ - 0xdc));
      a7 = ((byte *)(fr0_ - 0x5c));
      (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c013374((fr0_ + (int)0x00000000),((byte *)(fr0_ - 0xdc)),ar6,((byte *)(fr0_ - 0x5c))));
      (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)((byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 244)), log_message(((byte *)(fr0_ - 0xdc)),ar5,ar6,a7))));
      (*(unsigned *)(fr0_ - 0xec) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    }
    else if (bVar1 == 99) {
      uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
      }
      ar5 = (byte *)(unsigned)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(unsigned)(uVar3 - 8);
      }
      *((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe0)) = (byte)*(undefined4 *)(unsigned)pbVar8;
      (*(uint *)(fr0_ + 0x00000000)) = uVar3;
LAB_8c011442:
      (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)((byte *)(unsigned)0x1));
      (*(int *)(fr0_ - 0x3c)) = 0;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x58)) + -1;
      (*(unsigned *)(fr0_ - 0xec) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
      (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    }
    else if (bVar1 == 0x73) {
      uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
      }
      ar5 = (byte *)(unsigned)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(unsigned)(uVar3 - 8);
      }
      (*(unsigned *)(fr0_ - 0xec) = (unsigned)(unsigned long)(((byte *)(unsigned long)*(unsigned *)(unsigned)pbVar8)));
      (*(uint *)(fr0_ + 0x00000000)) = uVar3;
      (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)((byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 244)), log_message(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xec)),ar5,ar6,a7))));
      if ((((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) != (byte *)(unsigned)0xffffffff) && ((int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) < (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe4)))) {
        (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54))));
      }
      (*(int *)(fr0_ - 0x3c)) = 0;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x58)) - (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe4));
      (*(unsigned *)(fr0_ - 0x48) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    }
    else if (bVar1 == 0x70) {
      uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
      }
      puVar4 = (undefined4 *)(unsigned)(uVar3 - 4);
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined4 *)(unsigned)(uVar3 - 8);
      }
      if (((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x54)) == (byte *)(unsigned)0xffffffff) {
        (*(unsigned *)(fr0_ - 0x54) = (unsigned)(unsigned long)((byte *)(unsigned)0x1));
      }
      ar6 = (int *)(unsigned)0x78;
      ar5 = ((byte *)(fr0_ - 0xdc));
      a7 = ((byte *)(fr0_ - 0x5c));
      (*(uint *)(fr0_ + 0x00000000)) = uVar3;
      (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0115c4(*puVar4,((byte *)(fr0_ - 0xdc)),0x78,((byte *)(fr0_ - 0x5c))));
      (*(unsigned *)(fr0_ - 0xe4) = (unsigned)(unsigned long)((byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 244)), log_message(((byte *)(fr0_ - 0xdc)),ar5,ar6,a7))));
      (*(unsigned *)(fr0_ - 0xec) = (unsigned)(unsigned long)(((byte *)(fr0_ - 0xdc))));
    }
    else if (bVar1 == 0x6e) {
      uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = (*(uint *)(fr0_ + 0x00000000)) + 8;
      }
      ar5 = (byte *)(unsigned)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(unsigned)(uVar3 - 8);
      }
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)pbVar8) = (*(undefined4 *)(fr0_ - 0x28));
      (*(uint *)(fr0_ + 0x00000000)) = uVar3;
    }
    else {
      if (bVar1 == 0x25) {
        *((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe0)) = 0x25;
        goto LAB_8c011442;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x518;
      ((byte *)(fr0_ - 0x5c))[0] = ((byte *)(fr0_ - 0x5c))[0] | 1;
    }
    if ((*pbVar9 != 0x6e) && ((((byte *)(fr0_ - 0x5c))[0] & 1) == 0)) {
      if (((((byte *)(fr0_ - 0x5c))[0] & 2) == 0) && (0 < (*(int *)(fr0_ - 0x34)))) {
        for (; 0 < (*(int *)(fr0_ - 0x34)); (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1) {
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(fr0_ - 0x5c)) + 1,1,&(*(int *)(fr0_ - 0x30)),a7));
        }
      }
      if ((((*(int *)(fr0_ - 0x40)) == 0) && ((*(int *)(fr0_ - 0x3c)) == 0)) && ((*(int *)(fr0_ - 0x38)) == 0)) {
        ar5 = ((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe4));
        ar6 = &(*(int *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xec)),((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe4)),&(*(int *)(fr0_ - 0x30)),a7));
      }
      else {
        iVar2 = (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) - (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xec));
        if (0 < iVar2) {
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xec)),iVar2,&(*(int *)(fr0_ - 0x30)),a7));
        }
        for (; 0 < (*(int *)(fr0_ - 0x40)); (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + -1) {
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((undefined1 *)(fr0_ - 0xe8)),1,&(*(int *)(fr0_ - 0x30)),a7));
        }
        iVar6 = (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x48)) - (int)((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
        if (0 < iVar6) {
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)),iVar6,&(*(int *)(fr0_ - 0x30)),a7));
        }
        for (; 0 < (*(int *)(fr0_ - 0x3c)); (*(int *)(fr0_ - 0x3c)) = (*(int *)(fr0_ - 0x3c)) + -1) {
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((undefined1 *)(fr0_ - 0xe8)),1,&(*(int *)(fr0_ - 0x30)),a7));
        }
        ar5 = ((byte *)(unsigned long)*(unsigned *)(fr0_ - 0xe4)) + -(iVar2 + iVar6);
        ar6 = &(*(int *)(fr0_ - 0x30));
        (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(unsigned long)*(unsigned *)(fr0_ - 0x48)),ar5,&(*(int *)(fr0_ - 0x30)),a7));
        for (; 0 < (*(int *)(fr0_ - 0x38)); (*(int *)(fr0_ - 0x38)) = (*(int *)(fr0_ - 0x38)) + -1) {
          ar5 = (byte *)(unsigned)0x1;
          ar6 = &(*(int *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((undefined1 *)(fr0_ - 0xe8)),1,&(*(int *)(fr0_ - 0x30)),a7));
        }
      }
      if (((((byte *)(fr0_ - 0x5c))[0] & 2) != 0) && (0 < (*(int *)(fr0_ - 0x34)))) {
        for (; 0 < (*(int *)(fr0_ - 0x34)); (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1) {
          ar5 = (byte *)(unsigned)0x1;
          ar6 = &(*(int *)(fr0_ - 0x30));
          (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c0117ce(((byte *)(fr0_ - 0x5c)) + 1,1,&(*(int *)(fr0_ - 0x30)),a7));
        }
      }
    }
    ar7 = pbVar9 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c010e84\n.set _FUN_8c010e84, _FUN_8c010e84_def\n");
