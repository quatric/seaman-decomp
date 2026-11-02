#include "../decls.h"
undefined4 FUN_8c010e84_def(int ar4,byte *ar5,int *ar6,byte *ar7)

{
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
  uint in_stack_00000000;
  byte *pbStack_f0;
  byte *pbStack_ec;
  undefined1 auStack_e8 [4];
  byte *pbStack_e4;
  byte *pbStack_e0;
  byte abStack_dc [128];
  byte abStack_5c [4];
  int iStack_58;
  byte *pbStack_54;
  int iStack_50;
  byte *pbStack_4c;
  byte *pbStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  abStack_5c[1] = 0;
  abStack_5c[2] = 0;
  abStack_5c[3] = 0;
  iStack_58 = 0;
  pbStack_54 = (byte *)0x0;
  pbStack_4c = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  a7 = ar7;
  if (ar4 == 0) {
    if (ar6 == (int *)0x0) {
      _DAT_8c2787a8 = 0x452;
      return 0xffffffff;
    }
    if ((*(byte *)(ar6 + 4) & 7) == 0) {
      _DAT_8c2787a8 = 0x514;
      return 0xffffffff;
    }
    a7 = (byte *)(int)(char)ar6[4];
    pbStack_24 = ar5;
    if ((((uint)a7 & 4) == 0) && (((uint)a7 & 1) != 0)) {
      _DAT_8c2787a8 = 0x516;
      return 0xffffffff;
    }
  }
  uStack_28 = 0;
  abStack_5c[0] = 0;
  auStack_e8[0] = 0x30;
  iStack_30 = ar4;
  piStack_2c = ar6;
  iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  pbStack_e0 = abStack_dc;
  do {
    while( true ) {
      if (((*ar7 == 0) || (iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7), iVar2 != 0)) ||
         ((abStack_5c[0] & 1) != 0)) {
        FUN_8c011826(&iStack_30,ar5,ar6,a7);
        return uStack_28;
      }
      pbStack_f0 = ar7;
      if (*ar7 == 0x25) break;
      for (; (*pbStack_f0 != 0 && (*pbStack_f0 != 0x25)); pbStack_f0 = pbStack_f0 + 1) {
      }
      ar5 = pbStack_f0 + -(int)ar7;
      ar6 = &iStack_30;
      FUN_8c0117ce(ar7,ar5,&iStack_30,a7);
      ar7 = pbStack_f0;
    }
    abStack_5c[0] = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    while( true ) {
      pbVar8 = ar7 + 1;
      bVar1 = *pbVar8;
      if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23)))) break;
      bVar1 = *pbVar8;
      ar7 = pbVar8;
      if (bVar1 == 0x2d) {
        abStack_5c[0] = abStack_5c[0] | 2;
      }
      else if (bVar1 == 0x2b) {
        abStack_5c[0] = abStack_5c[0] | 8;
      }
      else if (bVar1 == 0x20) {
        if ((abStack_5c[0] & 8) == 0) {
          abStack_5c[0] = abStack_5c[0] | 0x10;
        }
      }
      else if (bVar1 == 0x23) {
        abStack_5c[0] = abStack_5c[0] | 4;
      }
    }
    abStack_5c[1] = 0x20;
    if (*pbVar8 == 0x30) {
      pbVar8 = ar7 + 2;
      abStack_5c[1] = 0x30;
    }
    iStack_58 = 0;
    if (*pbVar8 == 0x2a) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar9 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar9 = (byte *)(uVar3 - 8);
      }
      iStack_58 = *(int *)pbVar9;
      if (iStack_58 < 0) {
        abStack_5c[0] = abStack_5c[0] | 2;
        iStack_58 = -iStack_58;
      }
      pbVar8 = pbVar8 + 1;
      in_stack_00000000 = uVar3;
      if (0x200 < iStack_58) {
        abStack_5c[0] = abStack_5c[0] | 1;
        _DAT_8c2787a8 = 0x518;
      }
    }
    pbStack_4c = abStack_dc;
    pbStack_48 = abStack_dc;
    if (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
      iStack_58 = 0;
      while (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
        iVar6 = (char)*pbVar8 + -0x30;
        iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
        pbVar8 = pbVar8 + 1;
        if (iVar2 < iStack_58) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
        else {
          iStack_58 = iStack_58 * 10 + iVar6;
        }
      }
    }
    pbStack_54 = (byte *)0xffffffff;
    pbVar9 = pbVar8;
    if (*pbVar8 == 0x2e) {
      pbVar9 = pbVar8 + 1;
      if (*pbVar9 == 0x2a) {
        uVar3 = in_stack_00000000 + 4;
        if ((uVar3 & 3) != 0) {
          uVar3 = in_stack_00000000 + 8;
        }
        ar5 = (byte *)(uVar3 - 4);
        pbStack_54 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbStack_54 = (byte *)(uVar3 - 8);
        }
        pbStack_54 = *(byte **)pbStack_54;
        if ((int)pbStack_54 < 0) {
          pbStack_54 = (byte *)0xffffffff;
        }
        pbVar9 = pbVar8 + 2;
        in_stack_00000000 = uVar3;
        if (0x200 < (int)pbStack_54) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
      }
      if (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
        pbStack_54 = (byte *)0x0;
        while (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
          iVar6 = (char)*pbVar9 + -0x30;
          iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
          pbVar9 = pbVar9 + 1;
          if (iVar2 < (int)pbStack_54) {
            abStack_5c[0] = abStack_5c[0] | 1;
            _DAT_8c2787a8 = 0x518;
          }
          else {
            pbStack_54 = (byte *)((int)pbStack_54 * 10 + iVar6);
          }
        }
      }
    }
    iStack_50 = 0x20;
    bVar1 = *pbVar9;
    if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
      iStack_50 = (int)(char)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    bVar1 = *pbVar9;
    if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
        ((bVar1 == 0x75 || (bVar1 == 0x78)))) || (bVar1 == 0x58)) {
      if (iStack_50 == 0x6c) {
        uVar7 = in_stack_00000000 + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = in_stack_00000000 + 8;
        }
        puVar5 = (uint *)(uVar7 - 4);
        if (((uint)puVar5 & 3) != 0) {
          puVar5 = (uint *)(uVar7 - 8);
        }
        uVar3 = *puVar5;
        in_stack_00000000 = uVar7;
      }
      else if (iStack_50 == 0x68) {
        bVar1 = *pbVar9;
        if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar7 - 4);
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar7 - 8);
          }
          uVar3 = *puVar5 & 0xffff;
          in_stack_00000000 = uVar7;
        }
        else {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar4 = (undefined4 *)(uVar7 - 4);
          if (((uint)puVar4 & 3) != 0) {
            puVar4 = (undefined4 *)(uVar7 - 8);
          }
          uVar3 = (uint)(short)*puVar4;
          in_stack_00000000 = uVar7;
        }
      }
      else {
        bVar1 = *pbVar9;
        if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        else {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        uVar3 = *puVar5;
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c0115c4(uVar3,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (((bVar1 == 0x66) || (bVar1 == 0x65)) ||
            ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c013374(&stack0x00000000,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 99) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      *pbStack_e0 = (byte)*(undefined4 *)pbVar8;
      in_stack_00000000 = uVar3;
LAB_8c011442:
      pbStack_e4 = (byte *)0x1;
      iStack_3c = 0;
      iStack_34 = iStack_58 + -1;
      pbStack_ec = abStack_dc;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x73) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      pbStack_ec = *(byte **)pbVar8;
      in_stack_00000000 = uVar3;
      pbStack_e4 = (byte *)log_message(pbStack_ec,ar5,ar6,a7);
      if ((pbStack_54 != (byte *)0xffffffff) && ((int)pbStack_54 < (int)pbStack_e4)) {
        pbStack_e4 = pbStack_54;
      }
      iStack_3c = 0;
      iStack_34 = iStack_58 - (int)pbStack_e4;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x70) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      puVar4 = (undefined4 *)(uVar3 - 4);
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined4 *)(uVar3 - 8);
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)0x78;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      in_stack_00000000 = uVar3;
      FUN_8c0115c4(*puVar4,abStack_dc,0x78,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 0x6e) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      **(undefined4 **)pbVar8 = uStack_28;
      in_stack_00000000 = uVar3;
    }
    else {
      if (bVar1 == 0x25) {
        *pbStack_e0 = 0x25;
        goto LAB_8c011442;
      }
      _DAT_8c2787a8 = 0x518;
      abStack_5c[0] = abStack_5c[0] | 1;
    }
    if ((*pbVar9 != 0x6e) && ((abStack_5c[0] & 1) == 0)) {
      if (((abStack_5c[0] & 2) == 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
      if (((iStack_40 == 0) && (iStack_3c == 0)) && (iStack_38 == 0)) {
        ar5 = pbStack_e4;
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_ec,pbStack_e4,&iStack_30,a7);
      }
      else {
        iVar2 = (int)pbStack_4c - (int)pbStack_ec;
        if (0 < iVar2) {
          FUN_8c0117ce(pbStack_ec,iVar2,&iStack_30,a7);
        }
        for (; 0 < iStack_40; iStack_40 = iStack_40 + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        iVar6 = (int)pbStack_48 - (int)pbStack_4c;
        if (0 < iVar6) {
          FUN_8c0117ce(pbStack_4c,iVar6,&iStack_30,a7);
        }
        for (; 0 < iStack_3c; iStack_3c = iStack_3c + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        ar5 = pbStack_e4 + -(iVar2 + iVar6);
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_48,ar5,&iStack_30,a7);
        for (; 0 < iStack_38; iStack_38 = iStack_38 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
      }
      if (((abStack_5c[0] & 2) != 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
    }
    ar7 = pbVar9 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c010e84\n.set _FUN_8c010e84, _FUN_8c010e84_def\n");
