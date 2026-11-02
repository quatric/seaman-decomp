/* Seaman (USA) region 0x8c200000-0x8c210000 (Ghidra decompiler) */

/* FUN_8c200038 @ 8c200038 callers=0 callees=10 */

/* WARNING: Unknown calling convention */

int FUN_8c200038(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  int a5;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_2c [20];
  
  iVar4 = (int)DAT_8c200072;
  iVar5 = ar4 * iVar4 + DAT_8c200074;
  if (*(char *)(iVar5 + 2) != '\0') {
    uVar3 = ar5;
    iVar1 = (*(code *)PTR_FUN_8c200084)(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      (*(code *)PTR_FUN_8c200088)(ar4,uVar3,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c200160)(ar4,uVar3,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(ar4 * iVar4 + DAT_8c200164 + 8) != '\0')) {
        iVar4 = (*(code *)PTR_LAB_8c200168)(ar4,uVar3,ar6,ar7);
        if (iVar4 < 0) {
          return (int)DAT_8c20015c;
        }
        if (*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) {
          puVar2 = auStack_2c;
          iVar4 = FUN_8c1ffc0a(ar4,puVar2,ar6,ar7);
          if ((iVar4 != 0) && (iVar4 = FUN_8c1fffca(ar4,puVar2,ar6,ar7), -1 < iVar4)) {
            while( true ) {
              puVar2 = (undefined1 *)FUN_8c1ffebe(ar4,puVar2,ar6,ar7);
              if (((int)puVar2 < 0) || (iVar4 = FUN_8c1fff0c(ar4,puVar2 + 1,ar6,ar7), iVar4 < 0)) {
                iVar4 = (int)DAT_8c20028e;
                uVar3 = 1;
                for (puVar2 = (undefined1 *)(iVar5 + 0x48);
                    puVar2 < (undefined1 *)(iVar5 + 0x48 + iVar4); puVar2 = puVar2 + 1) {
                  *puVar2 = 1;
                }
                iVar5 = FUN_8c200346(ar4,iVar4,1,ar7);
                if (iVar5 < 0) {
                  return iVar5;
                }
                uVar3 = FUN_8c2007f0(ar4,iVar4,uVar3,ar7);
                return uVar3;
              }
              iVar1 = (*(code *)PTR_FUN_8c20016c)(ar4,puVar2,ar5,ar7);
              if (iVar1 < 0) {
                return iVar1;
              }
              uVar3 = ar5;
              iVar1 = (*(code *)PTR_FUN_8c200170)(ar4,iVar4,ar5,ar7);
              if (iVar1 < 0) break;
              a5 = FUN_8c200890(ar4,puVar2,uVar3,ar7);
              iVar1 = iVar4;
              if (a5 < 1) {
                uVar3 = FUN_8c1fff5e(ar4,puVar2,uVar3,ar7);
                (**(code **)(*DAT_8c200174 + 0x10))(uVar3,2,iVar4,ar7);
              }
              else {
                FUN_8c20099e(ar4,a5,iVar4,ar7);
              }
              uVar3 = FUN_8c2009d0(ar4,puVar2,iVar1,ar7);
              FUN_8c20099e(ar4,iVar4,uVar3,ar7);
              ar6 = DAT_8c200178;
              FUN_8c20099e(ar4,puVar2,DAT_8c200178,ar7);
            }
            return iVar1;
          }
        }
        return (int)DAT_8c20015e;
      }
    }
  }
  return (int)DAT_8c20015a;
}



/* FUN_8c2001b8 @ 8c2001b8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2001b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = DAT_8c200298;
  uVar9 = 1;
  iVar7 = 0;
  iVar3 = ar4 * DAT_8c200290 + DAT_8c200294;
  iVar5 = (int)DAT_8c200292;
  iVar4 = *(int *)(iVar3 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x18);
  uVar8 = *(uint *)(iVar4 + 0x14);
  iVar3 = *(int *)(iVar3 + 0x28);
  if (0 < iVar6) {
    do {
      iVar4 = iVar3;
      iVar2 = (*(code *)PTR_FUN_8c20029c)(ar4,uVar8 & 0xffff,uVar9);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar8 = FUN_8c2009d0(ar4,uVar8 & 0xffff,iVar4,ar7);
      if ((uVar8 & 0xffff) == uVar1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar5;
    } while (iVar7 < iVar6);
  }
  return 0;
}



/* FUN_8c2001d0 @ 8c2001d0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2001d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int in_r3;
  int iVar3;
  int a6;
  int iVar4;
  int iVar5;
  int unaff_r11;
  undefined4 unaff_r12;
  uint uVar6;
  
  uVar1 = DAT_8c200298;
  iVar4 = (int)DAT_8c200292;
  iVar3 = *(int *)(ar4 + in_r3 + 0x1c);
  iVar5 = *(int *)(iVar3 + 0x18);
  uVar6 = *(uint *)(iVar3 + 0x14);
  iVar3 = *(int *)(ar4 + in_r3 + 0x28);
  if (0 < iVar5) {
    do {
      a6 = iVar3;
      iVar2 = (*(code *)PTR_FUN_8c20029c)(unaff_r12,uVar6 & 0xffff,iVar3,ar7);
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar6 = FUN_8c2009d0(unaff_r12,uVar6 & 0xffff,a6,ar7);
      if ((uVar6 & 0xffff) == uVar1) {
        return 0;
      }
      unaff_r11 = unaff_r11 + 1;
      iVar3 = iVar3 + iVar4;
    } while (unaff_r11 < iVar5);
  }
  return 0;
}



/* FUN_8c200226 @ 8c200226 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200226(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  uint a6;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint a6_00;
  ushort uStack_2c;
  
  a6 = DAT_8c200298;
  iVar7 = 0;
  iVar6 = ar4 * DAT_8c200290 + DAT_8c200294;
  uStack_2c = *(ushort *)(*(int *)(iVar6 + 0x1c) + 0x14);
  uVar1 = (uint)(short)uStack_2c;
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 0x18);
  a6_00 = DAT_8c200298 + 2;
  if (0 < iVar5) {
    do {
      uVar3 = uVar1 & 0xffff;
      uVar1 = FUN_8c2009d0(ar4,uVar3,ar6,ar7);
      ar6 = a6_00;
      FUN_8c20099e(ar4,uVar3,a6_00,ar7);
      if (((uVar1 & 0xffff) == a6) || ((uVar1 & 0xffff) == a6_00)) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  uVar1 = (uint)(short)uStack_2c;
  iVar7 = 0;
  do {
    if (iVar5 <= iVar7) {
      if ((uint)uStack_2c != *(uint *)(*(int *)(iVar6 + 0x1c) + 0x14)) {
        uVar4 = 0x4a;
        iVar5 = (int)(short)uStack_2c;
        (**(code **)(*DAT_8c2003c8 + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,iVar5,ar7);
        FUN_8c2007f0(ar4,uVar4,iVar5,ar7);
        FUN_8c20065a(ar4,uVar4,iVar5,ar7);
      }
      return 0;
    }
    while (iVar2 = (*(code *)PTR_FUN_8c2003bc)
                             (ar4,uVar1 & 0xffff,*(int *)(iVar6 + 0x28) + iVar7 * 0x200,ar7),
          iVar2 != 0) {
      if (iVar2 == DAT_8c2003b6) {
        return iVar2;
      }
      uVar4 = DAT_8c2003c0;
      FUN_8c20099e(ar4,uVar1 & 0xffff,DAT_8c2003c0,ar7);
      uVar1 = (*(code *)PTR_FUN_8c2003c4)(ar4,a6_00,uVar4,ar7);
    }
    if (iVar7 == 0) {
      uStack_2c = (ushort)uVar1;
    }
    uVar3 = a6;
    FUN_8c20099e(ar4,uVar1 & 0xffff,a6,ar7);
    if (iVar7 != iVar5 + -1) {
      uVar4 = (*(code *)PTR_FUN_8c2003c4)(ar4,a6_00,uVar3,ar7);
      FUN_8c20099e(ar4,uVar1 & 0xffff,uVar4,ar7);
      uVar1 = (uint)(short)uVar4;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



/* FUN_8c200346 @ 8c200346 callers=6 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c200346(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 a6;
  uint unaff_r8;
  int iVar6;
  int iVar7;
  uint a5;
  
  iVar6 = ar4 * DAT_8c2003b8 + DAT_8c2003cc;
  uVar5 = *(uint *)(iVar6 + 0x1c);
  iVar3 = *(int *)(uVar5 + 0x18);
  uVar4 = *(uint *)(uVar5 + 0x14);
  iVar7 = 0;
  bVar1 = false;
  do {
    a5 = uVar4 & 0xffff;
    if (iVar3 <= iVar7) {
      if ((!bVar1) ||
         ((iVar3 = FUN_8c2007f0(ar4,uVar5,ar6,ar7), -1 < iVar3 &&
          (iVar3 = FUN_8c20065a(ar4,uVar5,ar6,ar7), -1 < iVar3)))) {
        iVar3 = 0;
      }
      return iVar3;
    }
    if (*(char *)(iVar6 + 0x48 + iVar7) == '\0') {
      uVar5 = a5;
      uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
    }
    else {
      while( true ) {
        ar6 = *(int *)(iVar6 + 0x28) + iVar7 * 0x200;
        iVar2 = (*(code *)PTR_FUN_8c2003bc)(ar4,a5,ar6,ar7);
        if (iVar2 == 0) break;
        if (iVar2 == DAT_8c20048c) {
          return iVar2;
        }
        bVar1 = true;
        uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
        a6 = DAT_8c200490;
        FUN_8c20099e(ar4,a5,DAT_8c200490,ar7);
        uVar5 = (*(code *)PTR_FUN_8c200498)(ar4,DAT_8c200494,a6,ar7);
        if ((int)uVar5 < 0) {
          return (int)DAT_8c20048e;
        }
        FUN_8c20099e(ar4,uVar5,uVar4 & 0xffff,ar7);
        if (iVar7 == 0) {
          (**(code **)(*DAT_8c20049c + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,uVar5,ar7);
          unaff_r8 = a5;
          a5 = uVar5;
        }
        else {
          FUN_8c20099e(ar4,unaff_r8,uVar5,ar7);
          unaff_r8 = a5;
          a5 = uVar5;
        }
      }
      uVar5 = a5;
      uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
      *(undefined1 *)(iVar6 + 0x48 + iVar7) = 0;
    }
    iVar7 = iVar7 + 1;
    unaff_r8 = a5;
  } while( true );
}



/* FUN_8c200472 @ 8c200472 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200472(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*ar4 == '\0') {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
    ar4 = ar4 + 1;
  } while (iVar2 < 0xc);
  return iVar1;
}



/* FUN_8c2004a0 @ 8c2004a0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2004a0(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char *a5;
  
  a5 = ar5;
  iVar1 = FUN_8c200472(ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c200472(ar5,a5,ar6,ar7);
  if (iVar1 != iVar2) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*ar4 != *ar5) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      ar5 = ar5 + 1;
      ar4 = ar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}



/* FUN_8c2004ea @ 8c2004ea callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2004ea(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)(ar5 + 0x10);
  *(uint *)(ar5 + 4) = (uint)*ar4;
  pbVar6 = ar4 + 4;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(ar5 + 0x1c));
  pbVar5 = (byte *)(ar5 + 0x20);
  *(undefined1 *)(ar5 + 0x1c) = 0;
  pbVar6 = ar4 + 0x10;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    piVar2 = DAT_8c2005b4;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(ar5 + 0x28));
  uVar3 = (**(code **)(*DAT_8c2005b4 + 0xc))(ar4,2,1);
  *(uint *)(ar5 + 0xc) = uVar3 & 0xffff;
  uVar3 = (**(code **)(*piVar2 + 0xc))(ar4,0x18);
  *(uint *)(ar5 + 0x28) = uVar3 & 0xffff;
  *(byte *)(ar5 + 10) = ar4[1];
  uVar4 = (**(code **)(*piVar2 + 0xc))(ar4,0x1a);
  *(short *)(ar5 + 8) = (short)uVar4;
  return uVar4;
}



/* FUN_8c2004f6 @ 8c2004f6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2004f6(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  byte *unaff_r13;
  int unaff_r14;
  
  puVar6 = (undefined1 *)(unaff_r14 + 0x10);
  *(uint *)(unaff_r14 + 4) = (uint)*unaff_r13;
  puVar8 = (undefined1 *)(ar5 + 4);
  do {
    uVar1 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 1;
  } while (puVar6 < (undefined1 *)(unaff_r14 + 0x1c));
  pbVar7 = (byte *)(unaff_r14 + 0x20);
  *(undefined1 *)(unaff_r14 + 0x1c) = 0;
  pbVar9 = unaff_r13 + 0x10;
  do {
    bVar2 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    *pbVar7 = bVar2;
    piVar3 = DAT_8c2005b4;
    pbVar7 = pbVar7 + 1;
  } while (pbVar7 < (byte *)(unaff_r14 + 0x28));
  uVar4 = (**(code **)(*DAT_8c2005b4 + 0xc))(unaff_r13,2,ar6,ar7);
  *(uint *)(unaff_r14 + 0xc) = uVar4 & 0xffff;
  uVar4 = (**(code **)(*piVar3 + 0xc))(unaff_r13,0x18,ar6,ar7);
  *(uint *)(unaff_r14 + 0x28) = uVar4 & 0xffff;
  *(byte *)(unaff_r14 + 10) = unaff_r13[1];
  uVar5 = (**(code **)(*piVar3 + 0xc))(unaff_r13,0x1a,ar6,ar7);
  *(short *)(unaff_r14 + 8) = (short)uVar5;
  return uVar5;
}



/* FUN_8c200566 @ 8c200566 callers=7 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200566(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int iVar2;
  int iVar3;
  byte *a4;
  
  iVar2 = ar4 * DAT_8c2005b0 + DAT_8c2005b8;
  a4 = *(byte **)(iVar2 + 0x28);
  iVar3 = 0;
  a6 = ar6;
  while( true ) {
    if (*(int *)(*(int *)(iVar2 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    if (((*a4 == 0x33) || (*a4 == DAT_8c2005b2)) &&
       (iVar1 = FUN_8c2004a0(ar5,a4 + 4,a6,ar7), iVar1 != 0)) break;
    a4 = a4 + 0x20;
    iVar3 = iVar3 + 1;
  }
  FUN_8c2004ea(a4,ar6,a6,ar7);
  return iVar3;
}



/* FUN_8c2005d6 @ 8c2005d6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2005d6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  byte *ar4_00;
  int iVar1;
  
  ar6_00 = ar4 * DAT_8c2006ca + DAT_8c2006d0;
  ar4_00 = *(byte **)(ar6_00 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*ar4_00 == (int)DAT_8c2006cc) break;
    ar4_00 = ar4_00 + 0x20;
    iVar1 = iVar1 + 1;
  }
  FUN_8c2004ea(ar4_00,ar5,ar6_00,(uint)*ar4_00);
  return iVar1;
}



/* FUN_8c2005dc @ 8c2005dc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2005dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int a6;
  byte *a4;
  int iVar1;
  int in_MACL;
  
  a6 = in_MACL + in_r3;
  a4 = *(byte **)(a6 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(a6 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*a4 == (int)DAT_8c2006cc) break;
    a4 = a4 + 0x20;
    iVar1 = iVar1 + 1;
  }
  FUN_8c2004ea(a4,ar5,a6,(uint)*a4);
  return iVar1;
}



/* FUN_8c200614 @ 8c200614 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200614(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = ar4 * DAT_8c2006ca + DAT_8c2006d0;
  pcVar2 = *(char **)(iVar3 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x20;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



/* FUN_8c200642 @ 8c200642 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200642(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * DAT_8c2006ca + DAT_8c2006d0;
  uVar1 = (*(code *)PTR_FUN_8c2006d4)
                    (*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),*(undefined4 *)(iVar2 + 0x20));
  return uVar1;
}



/* FUN_8c20065a @ 8c20065a callers=4 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20065a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * DAT_8c2006ca + DAT_8c2006d0;
  uVar1 = (*(code *)PTR_FUN_8c2006d8)
                    (*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),*(undefined4 *)(iVar2 + 0x20));
  return uVar1;
}



/* FUN_8c200672 @ 8c200672 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200672(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_FUN_8c2006d4;
  uVar6 = 1;
  iVar4 = ar4 * DAT_8c2006ca + DAT_8c2006d0;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,*(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(int *)(iVar4 + 0x24),uVar6);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* FUN_8c200682 @ 8c200682 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200682(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int in_r3;
  undefined4 unaff_r11;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_MACL;
  
  puVar1 = PTR_FUN_8c2006d4;
  iVar4 = in_MACL + in_r3;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (*(code *)puVar1)(unaff_r11,*(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(int *)(iVar4 + 0x24),ar7);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}



/* FUN_8c2006dc @ 8c2006dc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2006dc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  int ar6_01;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ar6_00 = DAT_8c2007e0;
  iVar4 = 0;
  iVar3 = ar4 * DAT_8c2007d8 + DAT_8c2007dc;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
  ar6_01 = DAT_8c2007e0 + 5;
  if (0 < iVar2) {
    do {
      iVar1 = (*(code *)PTR_FUN_8c2007e4)
                        (ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,
                         iVar4 * 0x200 + *(int *)(iVar3 + 0x24));
      if (iVar1 < 0) {
        FUN_8c20099e(ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_01,ar7);
        return iVar1;
      }
      FUN_8c20099e(ar4,*(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_00,ar7);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}



/* FUN_8c2006fa @ 8c2006fa callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2006fa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r8;
  int iVar2;
  undefined4 unaff_r12;
  int unaff_r13;
  int unaff_r14;
  
  iVar2 = *(int *)(*(int *)(unaff_r13 + 0x1c) + 0x10);
  if (0 < iVar2) {
    do {
      iVar1 = (*(code *)PTR_FUN_8c2007e4)
                        (unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,
                         unaff_r14 * 0x200 + *(int *)(unaff_r13 + 0x24),ar7);
      if (iVar1 < 0) {
        FUN_8c20099e(unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8 + 5,
                     ar7);
        return iVar1;
      }
      FUN_8c20099e(unaff_r12,*(int *)(*(int *)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8,ar7);
      unaff_r14 = unaff_r14 + 1;
    } while (unaff_r14 < iVar2);
  }
  return 0;
}



/* FUN_8c20075a @ 8c20075a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20075a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  int ar7_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = DAT_8c2007e8;
  iVar4 = *(int *)(ar4 * DAT_8c2007d8 + DAT_8c2007dc + 0x1c);
  iVar5 = *(int *)(iVar4 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x20) + iVar5 + -1;
  do {
    ar6_00 = iVar5;
    ar7_00 = iVar4;
    iVar2 = (*(code *)PTR_FUN_8c2007ec)(ar4,uVar1);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar3 = FUN_8c2009d0(ar4,iVar2 - iVar7,ar6_00,ar7_00);
        if ((uVar3 & 0xffff) != uVar1) {
          iVar4 = (iVar2 - iVar7) + -1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    if (iVar7 == iVar6) {
      return (iVar2 - iVar6) + 1;
    }
  } while( true );
}



/* FUN_8c200772 @ 8c200772 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c200772(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint a5;
  int iVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int a6;
  int a7;
  int a6_00;
  undefined4 unaff_r10;
  int iVar4;
  int iVar5;
  
  a5 = DAT_8c2007e8;
  iVar3 = *(int *)(ar5 + in_r3 + 0x1c);
  a6_00 = *(int *)(iVar3 + 0x1c);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x20) + a6_00 + -1;
  do {
    a6 = a6_00;
    a7 = iVar3;
    iVar1 = (*(code *)PTR_FUN_8c2007ec)(unaff_r10,a5,a6_00,iVar3);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = FUN_8c2009d0(unaff_r10,iVar1 - iVar5,a6,a7);
        if ((uVar2 & 0xffff) != a5) {
          iVar3 = (iVar1 - iVar5) + -1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar5 == iVar4) {
      return (iVar1 - iVar4) + 1;
    }
  } while( true );
}



/* FUN_8c2007f0 @ 8c2007f0 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2007f0(int ar4,int ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int *piVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ar6_00 = DAT_8c2008f0;
  piVar2 = DAT_8c2008ec;
  uVar5 = 0;
  iVar4 = ar4 * DAT_8c2008e2 + DAT_8c2008e8;
  bVar1 = false;
  while( true ) {
    iVar3 = FUN_8c2006dc(ar4,ar5,ar6,ar7);
    if (iVar3 == DAT_8c2008e4) {
      return (int)DAT_8c2008e4;
    }
    if (iVar3 != DAT_8c2008e6) break;
    ar6 = FUN_8c20075a(ar4,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)DAT_8c2008e6;
    }
    ar5 = 0x46;
    *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) = ar6;
    (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(iVar4 + 0x20),uVar5);
    for (iVar3 = 0; bVar1 = true, iVar3 < *(int *)(*(int *)(iVar4 + 0x1c) + 0x10); iVar3 = iVar3 + 1
        ) {
      ar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc) + iVar3;
      ar6 = ar6_00;
      FUN_8c20099e(ar4,ar5,ar6_00,ar7);
    }
  }
  if (bVar1) {
    FUN_8c20065a(ar4,ar5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c20080e @ 8c20080e callers=0 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c20080e(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int *piVar1;
  int a6;
  int iVar2;
  int in_r3;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int unaff_r13;
  int unaff_r14;
  int iVar3;
  
  a6 = DAT_8c2008f0;
  piVar1 = DAT_8c2008ec;
  iVar3 = unaff_r14 + in_r3;
  while( true ) {
    iVar2 = FUN_8c2006dc(unaff_r12,ar5,ar6,ar7);
    if (iVar2 == DAT_8c2008e4) {
      return (int)DAT_8c2008e4;
    }
    if (iVar2 != DAT_8c2008e6) break;
    ar6 = FUN_8c20075a(unaff_r12,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)DAT_8c2008e6;
    }
    ar5 = 0x46;
    *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) = ar6;
    (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(iVar3 + 0x20),0x46,ar6,ar7);
    for (iVar2 = unaff_r10; unaff_r13 = unaff_r9, iVar2 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
        iVar2 = iVar2 + 1) {
      ar5 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc) + iVar2;
      ar6 = a6;
      FUN_8c20099e(unaff_r12,ar5,a6,ar7);
    }
  }
  if (unaff_r13 != 0) {
    FUN_8c20065a(unaff_r12,ar5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c200890 @ 8c200890 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200890(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_8c2008ec;
  iVar4 = ar4 * DAT_8c2008e2 + DAT_8c2008e8;
  iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar4 + 0x24),iVar3 * 2,ar6,ar7);
  } while ((uVar2 & 0xffff) != (uint)(ushort)ar5);
  return iVar3;
}



/* FUN_8c2008f4 @ 8c2008f4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2008f4(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar5_00;
  int ar5_01;
  int iVar1;
  int ar6_00;
  
  ar5_00 = DAT_8c2009f4;
  ar6_00 = DAT_8c2009f4 + -2;
  while( true ) {
    ar5_01 = FUN_8c200890(ar4,ar5_00,ar6,ar7);
    if (ar5_01 < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_8c20093a(ar4,ar5_01,ar6,ar7);
    if (-1 < iVar1) break;
    ar6 = ar6_00;
    FUN_8c20099e(ar4,ar5_01,ar6_00,ar7);
  }
  return ar5_01;
}



/* FUN_8c200900 @ 8c200900 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200900(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  int unaff_r11;
  undefined4 unaff_r13;
  
  while( true ) {
    a5 = FUN_8c200890(unaff_r13,unaff_r11,ar6,ar7);
    if (a5 < 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_8c20093a(unaff_r13,a5,ar6,ar7);
    if (-1 < iVar1) break;
    ar6 = unaff_r11 + -2;
    FUN_8c20099e(unaff_r13,a5,unaff_r11 + -2,ar7);
  }
  return a5;
}



/* FUN_8c20093a @ 8c20093a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c20093a(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int ar5_00;
  undefined4 uVar5;
  
  piVar1 = DAT_8c2009fc;
  ar5_00 = 0;
  uVar5 = 0xfffa;
  iVar4 = ar4 * DAT_8c2009f0 + DAT_8c2009f8;
  while( true ) {
    if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
      return ar5 & 0xffff;
    }
    pbVar2 = (byte *)FUN_8c200a84(ar4,ar5_00,ar6,ar7);
    if (((*pbVar2 == 0x33) || (*pbVar2 == DAT_8c2009f2)) &&
       (uVar3 = (**(code **)(*piVar1 + 0xc))(2,uVar5), (ar5 & 0xffff) == (uVar3 & 0xffff))) break;
    ar5_00 = ar5_00 + 1;
  }
  return 0xffffffff;
}



/* FUN_8c20094e @ 8c20094e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c20094e(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  byte *a4;
  uint uVar2;
  int in_r3;
  undefined4 unaff_r12;
  int unaff_r14;
  int in_MACL;
  
  piVar1 = DAT_8c2009fc;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
      return ar5 & 0xffff;
    }
    a4 = (byte *)FUN_8c200a84(unaff_r12,unaff_r14,ar6,ar7);
    if (((*a4 == 0x33) || (*a4 == DAT_8c2009f2)) &&
       (uVar2 = (**(code **)(*piVar1 + 0xc))(a4,2,ar6,ar7), (ar5 & 0xffff) == (uVar2 & 0xffff)))
    break;
    unaff_r14 = unaff_r14 + 1;
  }
  return 0xffffffff;
}



/* FUN_8c20099e @ 8c20099e callers=6 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20099e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * DAT_8c2009f0 + DAT_8c2009f8;
  if (ar5 <= **(int **)(iVar2 + 0x1c)) {
                    /* WARNING: Could not recover jumptable at 0x8c2009c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*DAT_8c2009fc + 0x10))(*(undefined4 *)(iVar2 + 0x24),ar5 << 1);
    return uVar1;
  }
  return ar5;
}



/* FUN_8c2009d0 @ 8c2009d0 callers=9 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2009d0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c2009ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*DAT_8c2009fc + 0xc))
                    (*(undefined4 *)(ar4 * DAT_8c2009f0 + DAT_8c2009f8 + 0x24),ar5 << 1);
  return uVar1;
}



/* FUN_8c200a00 @ 8c200a00 callers=2 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c200a00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * DAT_8c200af0 + DAT_8c200af4;
  *(undefined4 *)(DAT_8c200af8 + ar4 * 4) = 0;
  if ((*(char *)(iVar2 + 10) != '\0') || (iVar1 = FUN_8c200642(ar4,ar5,ar6,ar7), -1 < iVar1)) {
    iVar1 = FUN_8c1ffcc2(ar4,ar5,ar6,ar7);
    if (-1 < iVar1) {
      if (((*(char *)(iVar2 + 0xb) == '\0') && (iVar1 = FUN_8c200672(ar4,ar5,ar6,ar7), iVar1 < 0))
         || ((*(char *)(iVar2 + 0xc) == '\0' && (iVar1 = FUN_8c2001b8(ar4,ar5,ar6,ar7), iVar1 < 0)))
         ) {
        if (iVar1 != DAT_8c200afc) {
          return iVar1;
        }
        *(undefined4 *)(DAT_8c200af8 + ar4 * 4) = 1;
      }
      else {
        *(undefined1 *)(iVar2 + 10) = 1;
        *(undefined1 *)(iVar2 + 0xb) = 1;
        *(undefined1 *)(iVar2 + 0xc) = 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}



/* FUN_8c200a84 @ 8c200a84 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200a84(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 * 0x20 + *(int *)(ar4 * DAT_8c200af0 + DAT_8c200af4 + 0x28);
}



/* FUN_8c200a9c @ 8c200a9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c200aa2) */
/* WARNING: Unknown calling convention */

int FUN_8c200a9c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * DAT_8c200af0 + DAT_8c200af4 + 0x48;
  *(undefined1 *)((ar5 >> 4) + iVar1) = 1;
  return iVar1;
}



/* FUN_8c200ab6 @ 8c200ab6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200ab6(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = DAT_8c200b00;
  while( true ) {
    if (*DAT_8c200b04 <= iVar2) {
      *DAT_8c200b08 = (int)DAT_8c200af2;
      return 0;
    }
    if (*pcVar1 == '\0') break;
    pcVar1 = pcVar1 + 0x48;
    iVar2 = iVar2 + 1;
  }
  *pcVar1 = '\x01';
  *(int *)(pcVar1 + 0xc) = iVar2;
  return pcVar1;
}



/* FUN_8c200ae4 @ 8c200ae4 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200ae4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*DAT_8c200b0c)(0,0x48);
  return uVar1;
}



/* ret_const_0_200aec @ 8c200aec callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 ret_const_0_200aec(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}



/* FUN_8c200b10 @ 8c200b10 callers=2 callees=3 */

/* WARNING: Unknown calling convention */

int FUN_8c200b10(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined1 *a6;
  int iVar3;
  uint a5;
  undefined1 auStack_40 [12];
  uint uStack_34;
  int iStack_18;
  
  a6 = auStack_40;
  iVar3 = ar4 * DAT_8c200bdc + DAT_8c200be4;
  iVar1 = FUN_8c200566(ar4,ar5,auStack_40,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)DAT_8c200bde;
  }
  else {
    FUN_8c200a84(ar4,iVar1,a6,ar7);
    if ((int)uStack_34 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
      a5 = uStack_34;
      for (iVar1 = 0; iVar1 < iStack_18; iVar1 = iVar1 + 1) {
        uVar2 = FUN_8c2009d0(ar4,a5,a6,ar7);
        uVar2 = uVar2 & 0xffff;
        if (iVar1 == iStack_18 + -1) {
          if (uVar2 != DAT_8c200be8) goto LAB_8c200b80;
        }
        else if ((((uVar2 == a5) || (uVar2 == DAT_8c200be8)) || (uVar2 == DAT_8c200bec)) ||
                ((uVar2 == DAT_8c200bf0 || (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= (int)uVar2)))
                ) goto LAB_8c200b80;
        a5 = uVar2;
      }
      iVar1 = 0;
    }
    else {
LAB_8c200b80:
      iVar1 = (int)DAT_8c200be0;
    }
  }
  return iVar1;
}



/* FUN_8c200ba0 @ 8c200ba0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200ba0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  undefined4 a6;
  
  a6 = 10;
  a5 = (*(code *)PTR_libgcc_divide_helper_01051c_8c200bf4)(ar4,ar5,10,ar7);
  iVar1 = (*(code *)PTR_libgcc_divide_helper_0106dc_8c200bf8)(ar4,a5,a6,ar7);
  return a5 * 0x10 + iVar1;
}



/* FUN_8c200bc4 @ 8c200bc4 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200bc4(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (ar4 >> 4) * 10 + (ar4 & 0xf);
}



/* FUN_8c200bfc @ 8c200bfc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c200bfc(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c200ce4)();
  uVar1 = FUN_8c200ba0(uVar1,ar5_00,ar6,ar7);
  *ar4 = (char)uVar1;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c200ce8)();
  uVar1 = FUN_8c200ba0(uVar1,ar5_00,ar6,ar7);
  ar4[1] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 2),ar5_00,ar6,ar7);
  ar4[2] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 3),ar5_00,ar6,ar7);
  ar4[3] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 4),ar5_00,ar6,ar7);
  ar4[4] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 5),ar5_00,ar6,ar7);
  ar4[5] = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(ar5 + 6),ar5_00,ar6,ar7);
  ar4[6] = (char)uVar1;
  uVar2 = *(byte *)(ar5 + 7) & 7;
  ar4[7] = PTR_DAT_8c200cec[uVar2];
  return uVar2;
}



/* FUN_8c200c08 @ 8c200c08 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c200c08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *unaff_r8;
  int unaff_r13;
  int unaff_r14;
  
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c200ce4)(ar4,ar5,ar6,ar7);
  uVar2 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *unaff_r8 = (char)uVar2;
  uVar1 = (*(code *)PTR_libgcc_divide_helper_010614_8c200ce8)(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 1) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(unaff_r13 + 2),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 2) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(unaff_r13 + 3),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 3) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(unaff_r13 + 4),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 4) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(unaff_r13 + 5),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 5) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)(unaff_r13 + 6),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 6) = (char)uVar1;
  uVar3 = *(byte *)(unaff_r13 + 7) & 7;
  *(undefined *)(unaff_r14 + 7) = PTR_DAT_8c200cec[uVar3];
  return uVar3;
}



/* FUN_8c200c82 @ 8c200c82 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200c82(short *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = FUN_8c200bc4((uint)*ar5,ar5,ar6,ar7);
  uVar3 = FUN_8c200bc4((uint)ar5[1],ar5_00,ar6,ar7);
  *ar4 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = FUN_8c200bc4((uint)ar5[2],ar5_00,ar6,ar7);
  *(char *)(ar4 + 1) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[3],ar5_00,ar6,ar7);
  *(char *)((int)ar4 + 3) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[4],ar5_00,ar6,ar7);
  *(char *)(ar4 + 2) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[5],ar5_00,ar6,ar7);
  *(char *)((int)ar4 + 5) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)ar5[6],ar5_00,ar6,ar7);
  *(char *)(ar4 + 3) = (char)uVar2;
  cVar1 = PTR_DAT_8c200cf0[ar5[7] & 7];
  *(char *)((int)ar4 + 7) = cVar1;
  return (int)cVar1;
}



/* FUN_8c200c8a @ 8c200c8a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c200c8a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *unaff_r13;
  byte *unaff_r14;
  
  uVar2 = FUN_8c200bc4((uint)*unaff_r14,ar5,ar6,ar7);
  uVar3 = FUN_8c200bc4((uint)unaff_r14[1],ar5,ar6,ar7);
  *unaff_r13 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[2],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 1) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[3],ar5,ar6,ar7);
  *(char *)((int)unaff_r13 + 3) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[4],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 2) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[5],ar5,ar6,ar7);
  *(char *)((int)unaff_r13 + 5) = (char)uVar2;
  uVar2 = FUN_8c200bc4((uint)unaff_r14[6],ar5,ar6,ar7);
  *(char *)(unaff_r13 + 3) = (char)uVar2;
  cVar1 = PTR_DAT_8c200cf0[unaff_r14[7] & 7];
  *(char *)((int)unaff_r13 + 7) = cVar1;
  return (int)cVar1;
}



/* FUN_8c200cf4 @ 8c200cf4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200cf4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(ar4 + 0x1c);
  if ((((((0 < *piVar2) && (*piVar2 <= (int)DAT_8c200dce)) && (*piVar2 == piVar2[2])) &&
       ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
      (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) &&
       (piVar2[0xd] <= *piVar2)))) &&
     (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
      ((*(int *)(*DAT_8c200ddc + 8) != 0 ||
       ((piVar2[4] <= (int)*(short *)(ar4 + 0x10) && (piVar2[6] <= (int)*(short *)(ar4 + 0x12)))))))
     )) {
    iVar1 = *piVar2;
    if (iVar1 == DAT_8c200dd0) {
      *(undefined4 *)(ar4 + 4) = 0;
    }
    else if (iVar1 == DAT_8c200dd2) {
      *(undefined4 *)(ar4 + 4) = 1;
    }
    else if (iVar1 == DAT_8c200dd4) {
      *(undefined4 *)(ar4 + 4) = 2;
    }
    else {
      if (iVar1 != DAT_8c200dce) {
        return 0xffffffff;
      }
      *(undefined4 *)(ar4 + 4) = 3;
    }
    return 0;
  }
  return 0xffffffff;
}



/* FUN_8c200d94 @ 8c200d94 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200d94(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_8c200de8;
  puVar1 = PTR_DAT_8c200de4;
  iVar5 = ar4 * DAT_8c200dd6 + DAT_8c200de0;
  iVar4 = (int)DAT_8c200dd8;
  *(undefined4 *)(iVar5 + 0x30) = 1;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(puVar1 + *(int *)(iVar5 + 4) * 0x50);
  iVar6 = 0;
  while( true ) {
    if (**(int **)(iVar5 + 0x1c) + 1 <= iVar6) {
      return 0;
    }
    iVar3 = (*(code *)puVar2)(ar4,iVar6,ar5);
    if (iVar3 < 0) break;
    iVar6 = iVar6 + 1;
    ar5 = ar5 + iVar4;
  }
  return iVar3;
}



/* FUN_8c200db0 @ 8c200db0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200db0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_r2;
  int in_r3;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r12;
  int unaff_r13;
  int iVar4;
  int a5;
  
  puVar1 = PTR_FUN_8c200de8;
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)DAT_8c200dd8;
  *(undefined4 *)(iVar4 + 0x30) = in_r2;
  *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(in_r0 + *(int *)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (**(int **)(iVar4 + 0x1c) + 1 <= a5) {
      return 0;
    }
    iVar2 = (*(code *)puVar1)(unaff_r10,a5,unaff_r12,ar7);
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}



/* FUN_8c200e1e @ 8c200e1e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200e1e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_8c200ec4;
  puVar1 = PTR_DAT_8c200ec0;
  iVar5 = ar4 * DAT_8c200eb6 + DAT_8c200ebc;
  iVar4 = (int)DAT_8c200eb8;
  *(undefined4 *)(iVar5 + 0x30) = 1;
  *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(puVar1 + *(int *)(iVar5 + 4) * 0x50);
  iVar6 = 0;
  while( true ) {
    if (**(int **)(iVar5 + 0x1c) + 1 <= iVar6) {
      return 0;
    }
    iVar3 = (*(code *)puVar2)(ar4,iVar6,ar5);
    if (iVar3 < 0) break;
    iVar6 = iVar6 + 1;
    ar5 = ar5 + iVar4;
  }
  return iVar3;
}



/* FUN_8c200e3a @ 8c200e3a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c200e3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_r2;
  int in_r3;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r12;
  int unaff_r13;
  int iVar4;
  int a5;
  
  puVar1 = PTR_FUN_8c200ec4;
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)DAT_8c200eb8;
  *(undefined4 *)(iVar4 + 0x30) = in_r2;
  *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(in_r0 + *(int *)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (**(int **)(iVar4 + 0x1c) + 1 <= a5) {
      return 0;
    }
    iVar2 = (*(code *)puVar1)(unaff_r10,a5,unaff_r12,ar7);
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}



/* FUN_8c200e8a @ 8c200e8a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c200e8a(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 *a6;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  a6 = &uStack_24;
  uVar5 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (((ar7 != 0) ||
      (uVar1 = (*(code *)PTR_FUN_8c200ec8)(ar4,ar5,ar6,0), uVar5 = uVar1, -1 < (int)uVar1)) &&
     (uVar1 = (*(code *)PTR_FUN_8c200f90)(ar4,uStack_20,&uStack_24,ar7), -1 < (int)uVar1)) {
    uVar4 = 0;
    iVar2 = ar4 * DAT_8c200f88 + DAT_8c200f94;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = uVar5;
    if (uVar5 != 0) {
      iVar3 = (int)DAT_8c200f8a;
      iVar2 = iStack_1c;
      do {
        uVar1 = (*(code *)PTR_FUN_8c200f98)(uStack_24,iVar2,a6,ar7);
        if ((int)uVar1 < 0) goto LAB_8c200f12;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + iVar3;
      } while (uVar4 < uVar5);
    }
    uVar1 = 0;
LAB_8c200f12:
    (*(code *)PTR_FUN_8c200f9c)(uStack_24,0,a6,ar7);
  }
  return uVar1;
}



/* FUN_8c200f2c @ 8c200f2c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c200f2c(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *a7;
  uint uVar5;
  undefined4 in_stack_00000000;
  uint in_stack_00000004;
  int iStack_20;
  int iStack_1c;
  
  a7 = &iStack_20;
  uVar5 = ar7;
  iStack_1c = ar6;
  uVar2 = (*(code *)PTR_FUN_8c200fa0)(ar4,0,ar6,ar7);
  iVar3 = (*(code *)PTR_FUN_8c200fa4)(ar4,ar5,ar6,uVar5);
  if (0 < iVar3) {
    uVar2 = uVar2 + iVar3;
  }
  if (-1 < (int)uVar2) {
    if (uVar2 < ar7) {
      uVar2 = (uint)DAT_8c200f8c;
    }
    else if ((DAT_8c200fa8 & in_stack_00000004) == 0) {
      uVar2 = (*(code *)PTR_FUN_8c201028)(ar4,ar5,in_stack_00000000,&iStack_20);
      iVar3 = DAT_8c20102c;
      if (-1 < (int)uVar2) {
        iVar4 = (int)DAT_8c201024;
        uVar5 = 0;
        *(char *)(iStack_20 + 1) = (char)in_stack_00000004;
        puVar1 = PTR_DAT_8c201030;
        iVar3 = ar4 * iVar4 + iVar3;
        *(undefined4 *)(iVar3 + 0x30) = 1;
        *(uint *)(iVar3 + 0x34) = *(int *)(puVar1 + *(int *)(iVar3 + 4) * 0x50) + ar7;
        if (ar7 != 0) {
          iVar4 = (int)DAT_8c201026;
          iVar3 = iStack_1c;
          do {
            uVar2 = (*(code *)PTR_FUN_8c201034)(iStack_20,iVar3,in_stack_00000000,a7);
            if ((int)uVar2 < 0) goto LAB_8c20100a;
            uVar5 = uVar5 + 1;
            iVar3 = iVar3 + iVar4;
          } while (uVar5 < ar7);
        }
        uVar2 = 0;
LAB_8c20100a:
        (*(code *)PTR_FUN_8c201038)(iStack_20,0,in_stack_00000000,a7);
      }
    }
    else {
      uVar2 = FUN_8c20103c(ar4,ar5,iStack_1c,ar7);
    }
  }
  return uVar2;
}



/* FUN_8c20103c @ 8c20103c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20103c(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  int iVar1;
  int iVar2;
  int *a6;
  int *a7;
  int iVar3;
  uint uVar4;
  int a5;
  int iVar5;
  int iVar6;
  undefined1 *in_stack_00000000;
  undefined1 in_stack_00000004;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  a7 = &iStack_2c;
  a6 = &iStack_2c;
  uStack_28 = ar5;
  iStack_24 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c20115c)(ar4,ar5,in_stack_00000000,&iStack_2c);
  if (-1 < iVar1) {
    iVar1 = (int)DAT_8c201156;
    uVar4 = 0;
    iVar6 = (int)DAT_8c201158;
    *(undefined1 *)(iStack_2c + 1) = in_stack_00000004;
    iVar1 = ar4 * iVar1 + DAT_8c201160;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(uint *)(iVar1 + 0x34) = ar7 * 2 + *(int *)(PTR_DAT_8c201164 + *(int *)(iVar1 + 4) * 0x50);
    iVar5 = iStack_24;
    if (ar7 != 0) {
      do {
        iVar1 = (*(code *)PTR_FUN_8c201168)(iStack_2c,iVar5,in_stack_00000000,a7);
        if (iVar1 < 0) goto LAB_8c20110e;
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + iVar6;
      } while (uVar4 < ar7);
    }
    (*(code *)PTR_FUN_8c20116c)(iStack_2c,0,in_stack_00000000,a7);
    iVar1 = (*(code *)PTR_FUN_8c201170)(ar4,uStack_28,&iStack_2c,a7);
    if (-1 < iVar1) {
      uVar4 = 0;
      iVar5 = ar4 * 0x800 + DAT_8c201174;
      if (ar7 != 0) {
        iVar3 = (int)DAT_8c20115a;
        a5 = iStack_24;
        do {
          iVar1 = (*(code *)PTR_FUN_8c201178)(iStack_2c,iVar5,a6,a7);
          in_stack_00000000 = (undefined1 *)a6;
          if ((iVar1 < 0) ||
             (iVar2 = (*(code *)PTR_FUN_8c20117c)(iVar5,a5,a6,a7),
             in_stack_00000000 = (undefined1 *)a6, iVar1 = iVar3, iVar2 != 0)) goto LAB_8c20110e;
          uVar4 = uVar4 + 1;
          a5 = a5 + iVar6;
        } while (uVar4 < ar7);
      }
      in_stack_00000000 = (undefined1 *)a6;
      iVar1 = 0;
LAB_8c20110e:
      (*(code *)PTR_FUN_8c20116c)(iStack_2c,0,in_stack_00000000,a7);
    }
  }
  return iVar1;
}



/* FUN_8c20112c @ 8c20112c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c20112c(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *a7;
  uint uVar5;
  undefined4 in_stack_00000000;
  uint in_stack_00000004;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  a7 = &iStack_24;
  iStack_20 = ar6;
  uStack_1c = ar5;
  uVar2 = (*(code *)PTR_FUN_8c201180)(ar4,1,ar6,ar7);
  if (-1 < (int)uVar2) {
    if (uVar2 < ar7) {
      uVar2 = (uint)DAT_8c201222;
    }
    else if ((DAT_8c201228 & in_stack_00000004) == 0) {
      uVar2 = (*(code *)PTR_FUN_8c20122c)(ar4,uStack_1c,in_stack_00000000,&iStack_24);
      iVar4 = DAT_8c201230;
      if (-1 < (int)uVar2) {
        iVar3 = (int)DAT_8c201224;
        uVar5 = 0;
        *(char *)(iStack_24 + 1) = (char)in_stack_00000004;
        puVar1 = PTR_DAT_8c201234;
        iVar4 = ar4 * iVar3 + iVar4;
        *(undefined4 *)(iVar4 + 0x30) = 1;
        *(uint *)(iVar4 + 0x34) = *(int *)(puVar1 + *(int *)(iVar4 + 4) * 0x50) + ar7;
        if (ar7 != 0) {
          iVar3 = (int)DAT_8c201226;
          iVar4 = iStack_20;
          do {
            uVar2 = (*(code *)PTR_FUN_8c201238)(iStack_24,iVar4,in_stack_00000000,a7);
            if ((int)uVar2 < 0) goto LAB_8c201208;
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + iVar3;
          } while (uVar5 < ar7);
        }
        uVar2 = 0;
LAB_8c201208:
        (*(code *)PTR_FUN_8c20123c)(iStack_24,0,in_stack_00000000,a7);
      }
    }
    else {
      uVar2 = FUN_8c201240(ar4,uStack_1c,iStack_20,ar7);
    }
  }
  return uVar2;
}



/* FUN_8c201240 @ 8c201240 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c201240(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  int iVar1;
  int iVar2;
  int *a6;
  int *a7;
  int iVar3;
  uint uVar4;
  int a5;
  int iVar5;
  int iVar6;
  undefined1 *in_stack_00000000;
  undefined1 in_stack_00000004;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  a7 = &iStack_2c;
  a6 = &iStack_2c;
  uStack_28 = ar5;
  iStack_24 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c201338)(ar4,ar5,in_stack_00000000,&iStack_2c);
  if (-1 < iVar1) {
    iVar1 = (int)DAT_8c201330;
    uVar4 = 0;
    iVar6 = (int)DAT_8c201332;
    *(undefined1 *)(iStack_2c + 1) = in_stack_00000004;
    iVar1 = ar4 * iVar1 + DAT_8c20133c;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(uint *)(iVar1 + 0x34) = ar7 * 2 + *(int *)(PTR_DAT_8c201340 + *(int *)(iVar1 + 4) * 0x50);
    iVar5 = iStack_24;
    if (ar7 != 0) {
      do {
        iVar1 = (*(code *)PTR_FUN_8c201344)(iStack_2c,iVar5,in_stack_00000000,a7);
        if (iVar1 < 0) goto LAB_8c201312;
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + iVar6;
      } while (uVar4 < ar7);
    }
    (*(code *)PTR_FUN_8c201348)(iStack_2c,0,in_stack_00000000,a7);
    iVar1 = (*(code *)PTR_FUN_8c20134c)(ar4,uStack_28,&iStack_2c,a7);
    if (-1 < iVar1) {
      uVar4 = 0;
      iVar5 = ar4 * 0x800 + DAT_8c201350;
      if (ar7 != 0) {
        iVar3 = (int)DAT_8c201334;
        a5 = iStack_24;
        do {
          iVar1 = (*(code *)PTR_FUN_8c201354)(iStack_2c,iVar5,a6,a7);
          in_stack_00000000 = (undefined1 *)a6;
          if ((iVar1 < 0) ||
             (iVar2 = (*(code *)PTR_FUN_8c201358)(iVar5,a5,a6,a7),
             in_stack_00000000 = (undefined1 *)a6, iVar1 = iVar3, iVar2 != 0)) goto LAB_8c201312;
          uVar4 = uVar4 + 1;
          a5 = a5 + iVar6;
        } while (uVar4 < ar7);
      }
      in_stack_00000000 = (undefined1 *)a6;
      iVar1 = 0;
LAB_8c201312:
      (*(code *)PTR_FUN_8c201348)(iStack_2c,0,in_stack_00000000,a7);
    }
  }
  return iVar1;
}



/* FUN_8c20135c @ 8c20135c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20135c(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar4_00;
  uint uVar2;
  
  uVar2 = 0;
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x38);
  if (ar5 != 0) {
    do {
      if (*(int *)(ar4 + 0x40) == DAT_8c201460) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return DAT_8c201464;
        }
        return 0;
      }
      if (*(int *)(ar4 + 0x34) == 0) {
        return DAT_8c201464;
      }
      uVar1 = FUN_8c2009d0(ar4_00,*(undefined4 *)(ar4 + 0x40),ar6,ar7);
      uVar2 = uVar2 + 1;
      *(uint *)(ar4 + 0x40) = uVar1 & 0xffff;
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + -1;
    } while (uVar2 < ar5);
  }
  return *(undefined4 *)(ar4 + 0x34);
}



/* FUN_8c20136c @ 8c20136c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20136c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  undefined4 a4;
  uint unaff_r12;
  uint unaff_r13;
  int unaff_r14;
  
  a4 = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(in_r0 + unaff_r14) = *(undefined4 *)(unaff_r14 + 0x38);
  while( true ) {
    if (unaff_r12 <= unaff_r13) {
      return *(undefined4 *)(unaff_r14 + 0x34);
    }
    if (*(int *)(unaff_r14 + 0x40) == DAT_8c201460) break;
    if (*(int *)(unaff_r14 + 0x34) == 0) {
      return DAT_8c201464;
    }
    uVar1 = FUN_8c2009d0(a4,*(undefined4 *)(unaff_r14 + 0x40),ar6,ar7);
    unaff_r13 = unaff_r13 + 1;
    *(uint *)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + -1;
  }
  if (*(int *)(unaff_r14 + 0x34) != 0) {
    return DAT_8c201464;
  }
  return 0;
}



/* FUN_8c2013c2 @ 8c2013c2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2013c2(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a6;
  int iVar3;
  uint uVar4;
  uint in_stack_00000000;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_24 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (in_stack_00000000 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c201468)(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      return iVar1;
    }
    in_stack_00000000 = iVar1 - iStack_24;
  }
  iVar2 = (*(code *)PTR_FUN_8c20146c)(ar4,uStack_20,&uStack_28,ar7);
  iVar1 = iStack_1c;
  if (-1 < iVar2) {
    a6 = 0;
    iVar2 = ar4 * DAT_8c20145c + DAT_8c201470;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = in_stack_00000000;
    FUN_8c20135c(uStack_28,iStack_24,0,ar7);
    uVar4 = 0;
    if (in_stack_00000000 != 0) {
      iVar3 = (int)DAT_8c20145e;
      do {
        iVar2 = (*(code *)PTR_FUN_8c201474)(uStack_28,iVar1,a6,ar7);
        if (iVar2 < 0) goto LAB_8c201442;
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + iVar3;
      } while (uVar4 < in_stack_00000000);
    }
    iVar2 = 0;
LAB_8c201442:
    (*(code *)PTR_FUN_8c201478)(uStack_28,0,a6,ar7);
  }
  return iVar2;
}



/* FUN_8c20147c @ 8c20147c callers=0 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c20147c(undefined4 ar4,undefined4 ar5,undefined2 *ar6,undefined4 ar7)

{
  int a5;
  uint uVar1;
  undefined1 *a6;
  int iVar2;
  undefined1 auStack_40 [12];
  uint uStack_34;
  int iStack_18;
  
  a6 = auStack_40;
  a5 = FUN_8c200566(ar4,ar5,a6,ar7);
  if (a5 < 0) {
    a5 = (int)DAT_8c201576;
  }
  else {
    FUN_8c200a84(ar4,a5,a6,ar7);
    *ar6 = (short)uStack_34;
    for (iVar2 = 0; ar6 = ar6 + 1, iVar2 < iStack_18; iVar2 = iVar2 + 1) {
      uVar1 = FUN_8c2009d0(ar4,uStack_34,a6,ar7);
      uStack_34 = uVar1 & 0xffff;
      *ar6 = (short)uVar1;
    }
    iVar2 = FUN_8c200b10(ar4,ar5,a6,ar7);
    if (iVar2 < 0) {
      a5 = iVar2;
    }
  }
  return a5;
}



/* FUN_8c2014e6 @ 8c2014e6 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2014e6(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *a6;
  uint a7;
  int iVar3;
  uint in_stack_00000000;
  undefined1 auStack_30 [4];
  ushort uStack_2c;
  char cStack_2a;
  
  a6 = auStack_30;
  iVar3 = ar4 * DAT_8c201578 + DAT_8c201580;
  *(undefined4 *)(iVar3 + 0x30) = 1;
  puVar1 = PTR_FUN_8c201584;
  *(uint *)(iVar3 + 0x34) = in_stack_00000000;
  a7 = ar7;
  iVar3 = (*(code *)puVar1)(ar4,ar5,a6,ar7);
  if (-1 < iVar3) {
    if (cStack_2a == '\x01') {
      uVar2 = (uint)uStack_2c;
      if (((ar7 < uVar2) && (in_stack_00000000 <= uVar2)) && (ar7 + in_stack_00000000 <= uVar2)) {
        iVar3 = FUN_8c200b10(ar4,ar5,a6,a7);
        if (-1 < iVar3) {
          uVar2 = 0;
          if (in_stack_00000000 != 0) {
            do {
              iVar3 = (*(code *)PTR_FUN_8c201588)(ar4,ar7,ar6,a7);
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
              ar6 = ar6 + DAT_8c2015ac;
              ar7 = ar7 + 1;
            } while (uVar2 < in_stack_00000000);
          }
          iVar3 = 0;
        }
      }
      else {
        iVar3 = (int)DAT_8c20157c;
      }
    }
    else {
      iVar3 = (int)DAT_8c20157a;
    }
  }
  return iVar3;
}



/* FUN_8c2015b0 @ 8c2015b0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2015b0(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int a6;
  int a6_00;
  int iVar8;
  uint a5;
  uint uVar9;
  int iStack_28;
  int iStack_24;
  
  puVar2 = PTR_memset_8c201704;
  if (((((*(short *)(ar5 + 0x4c) == 0) || (3 < *(ushort *)(ar5 + 0x4c))) ||
       (3 < *(ushort *)(ar5 + 0x54))) ||
      ((*(int *)(ar5 + 0x44) == 0 || (*(int *)(ar5 + 0x48) == 0)))) ||
     ((*(short *)(ar5 + 0x54) != 0 && (*(int *)(ar5 + 0x50) == 0)))) {
    iVar3 = (int)DAT_8c201608;
  }
  else {
    (*(code *)PTR_memset_8c201704)(ar4,0,0x60,ar7);
    (*(code *)puVar2)(ar4,0x20,0x10,ar7);
    (*(code *)puVar2)(ar4 + 0x10,0x20,0x20,ar7);
    (*(code *)puVar2)(ar4 + 0x30,0,0x10,ar7);
    iVar3 = 0;
    pcVar6 = ar5;
    pcVar7 = ar4;
    do {
      if (*pcVar6 == '\0') break;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      iVar3 = iVar3 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (iVar3 < 0x10);
    iVar3 = 0;
    pcVar7 = ar4 + 0x10;
    pcVar6 = ar5 + 0x12;
    do {
      if (*pcVar6 == '\0') break;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      iVar3 = iVar3 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (iVar3 < 0x20);
    iVar3 = 0;
    pcVar6 = ar5 + 0x34;
    pcVar7 = ar4 + 0x30;
    do {
      if (*pcVar6 == '\0') break;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      iVar3 = iVar3 + 1;
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (iVar3 < 0x10);
    iVar5 = (int)DAT_8c201702;
    a6_00 = *(int *)(PTR_DAT_8c201708 + (*(ushort *)(ar5 + 0x4c) & 3) * 4);
    a6 = *(int *)(PTR_DAT_8c20170c + (*(ushort *)(ar5 + 0x54) & 3) * 4);
    iVar8 = *(int *)(ar5 + 0x5c);
    iVar3 = a6_00 + a6;
    *(undefined2 *)(ar4 + 0x42) = *(undefined2 *)(ar5 + 0x4e);
    *(undefined2 *)(ar4 + 0x40) = *(undefined2 *)(ar5 + 0x4c);
    a5 = iVar8 + iVar3 + iVar5;
    if ((*(short *)(ar5 + 0x54) == 0) || (*(int *)(ar5 + 0x50) == 0)) {
      ar4[0x44] = '\0';
      ar4[0x45] = '\0';
      iStack_24 = 0;
    }
    else {
      iStack_24 = a6_00 + iVar5;
      *(undefined2 *)(ar4 + 0x44) = *(undefined2 *)(ar5 + 0x54);
    }
    if ((*(int *)(ar5 + 0x5c) == 0) || (*(int *)(ar5 + 0x58) == 0)) {
      ar4[0x48] = '\0';
      ar4[0x49] = '\0';
      ar4[0x4a] = '\0';
      ar4[0x4b] = '\0';
      iStack_28 = 0;
    }
    else {
      iVar3 = iVar3 + iVar5;
      *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(ar5 + 0x5c);
      iStack_28 = iVar3;
    }
    if (a6_00 != 0) {
      (*(code *)PTR_memmove_8c2017f0)(ar4 + 0x60,*(undefined4 *)(ar5 + 0x44),0x20,pcVar6);
      (*(code *)PTR_memmove_8c2017f0)(ar4 + iVar5,*(undefined4 *)(ar5 + 0x48),a6_00,pcVar6);
      iVar3 = a6_00;
    }
    if (a6 != 0) {
      (*(code *)PTR_memmove_8c2017f0)(ar4 + iStack_24,*(undefined4 *)(ar5 + 0x50),a6,pcVar6);
      iVar3 = a6;
    }
    if (*(int *)(ar5 + 0x5c) != 0) {
      iVar3 = *(int *)(ar5 + 0x5c);
      (*(code *)PTR_memmove_8c2017f0)(ar4 + iStack_28,*(undefined4 *)(ar5 + 0x58),iVar3,pcVar6);
    }
    uVar9 = (int)DAT_8c2017e8 & a5;
    if (uVar9 != 0) {
      iVar3 = (int)DAT_8c2017ea - uVar9;
      (*(code *)puVar2)(ar4 + a5,0,iVar3,pcVar6);
    }
    uVar4 = FUN_8c201948(ar4,a5,iVar3,pcVar6);
    *(short *)(ar4 + 0x46) = (short)uVar4;
    iVar3 = (uint)(uVar9 != 0) + (a5 >> 9);
  }
  return iVar3;
}



/* FUN_8c2017a8 @ 8c2017a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2017a8(uint ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((ar4 != 0) && (ar4 < 4)) && (ar5 < 4)) {
    uVar1 = (int)DAT_8c2017ee +
            *(int *)(PTR_DAT_8c2017f4 + ar4 * 4) + *(int *)(PTR_DAT_8c2017f8 + ar5 * 4) + ar6;
    return (uint)(((int)DAT_8c2017e8 & uVar1) != 0) + (uVar1 >> 9);
  }
  return (int)DAT_8c2017ec;
}



/* FUN_8c2017fc @ 8c2017fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2017fc(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if ((((*(short *)(ar5 + 0x40) != 0) && (*(ushort *)(ar5 + 0x40) < 4)) &&
      (*(ushort *)(ar5 + 0x44) < 4)) && (*(uint *)(ar5 + 0x48) <= DAT_8c201908)) {
    iVar3 = *(int *)(PTR_DAT_8c20190c + (uint)*(ushort *)(ar5 + 0x40) * 4);
    iVar6 = *(int *)(PTR_DAT_8c201910 + (uint)*(ushort *)(ar5 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(ar5 + 0x48) + (int)DAT_8c201904;
    if (uVar8 <= DAT_8c201908) {
      puVar5 = ar4;
      puVar7 = ar5;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = ar5 + 0x10;
      *puVar5 = 0;
      puVar5 = ar4 + 0x12;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      puVar7 = ar5 + 0x30;
      puVar5 = ar4 + 0x34;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      *(undefined2 *)(ar4 + 0x4e) = *(undefined2 *)(ar5 + 0x42);
      iVar4 = (int)DAT_8c201904;
      *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)(ar5 + 0x40);
      *(undefined1 **)(ar4 + 0x44) = ar5 + 0x60;
      *(undefined1 **)(ar4 + 0x48) = ar5 + iVar4;
      puVar7 = ar5 + iVar4 + iVar3;
      *(undefined2 *)(ar4 + 0x54) = *(undefined2 *)(ar5 + 0x44);
      if (*(short *)(ar5 + 0x44) == 0) {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        *(undefined1 **)(ar4 + 0x50) = puVar7;
        puVar7 = puVar7 + iVar6;
      }
      *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 0x48);
      if (*(int *)(ar5 + 0x48) == 0) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(undefined1 **)(ar4 + 0x58) = puVar7;
      }
      uVar2 = *(ushort *)(ar5 + 0x46);
      *(undefined2 *)(ar5 + 0x46) = 0;
      uVar8 = FUN_8c201948(ar5,uVar8,puVar7,puVar5);
      *(ushort *)(ar5 + 0x46) = uVar2;
      if ((uVar8 & 0xffff) != (uint)uVar2) {
        return (int)DAT_8c20198c;
      }
      return 0;
    }
  }
  return (int)DAT_8c201906;
}



/* FUN_8c201804 @ 8c201804 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c201804(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  ushort uVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *unaff_r14;
  
  if ((((*(short *)(unaff_r14 + in_r0) != 0) && (*(ushort *)(unaff_r14 + in_r0) < 4)) &&
      (*(ushort *)(unaff_r14 + 0x44) < 4)) && (*(uint *)(unaff_r14 + 0x48) <= DAT_8c201908)) {
    iVar3 = *(int *)(PTR_DAT_8c20190c + (uint)*(ushort *)(unaff_r14 + 0x40) * 4);
    iVar6 = *(int *)(PTR_DAT_8c201910 + (uint)*(ushort *)(unaff_r14 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(unaff_r14 + 0x48) + (int)DAT_8c201904;
    if (uVar8 <= DAT_8c201908) {
      puVar5 = ar4;
      puVar7 = unaff_r14;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = unaff_r14 + 0x10;
      *puVar5 = 0;
      puVar5 = ar4 + 0x12;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      puVar7 = unaff_r14 + 0x30;
      puVar5 = ar4 + 0x34;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      *(undefined2 *)(ar4 + 0x4e) = *(undefined2 *)(unaff_r14 + 0x42);
      iVar4 = (int)DAT_8c201904;
      *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)(unaff_r14 + 0x40);
      *(int *)(ar4 + 0x44) = ar5 + 0x60;
      *(int *)(ar4 + 0x48) = ar5 + iVar4;
      iVar3 = ar5 + iVar4 + iVar3;
      *(undefined2 *)(ar4 + 0x54) = *(undefined2 *)(unaff_r14 + 0x44);
      if (*(short *)(unaff_r14 + 0x44) == 0) {
        *(undefined4 *)(ar4 + 0x50) = 0;
      }
      else {
        *(int *)(ar4 + 0x50) = iVar3;
        iVar3 = iVar3 + iVar6;
      }
      *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(unaff_r14 + 0x48);
      if (*(int *)(unaff_r14 + 0x48) == 0) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
      else {
        *(int *)(ar4 + 0x58) = iVar3;
      }
      uVar2 = *(ushort *)(unaff_r14 + 0x46);
      *(undefined2 *)(unaff_r14 + 0x46) = 0;
      uVar8 = FUN_8c201948(ar5,uVar8,iVar3,puVar5);
      *(ushort *)(unaff_r14 + 0x46) = uVar2;
      if ((uVar8 & 0xffff) != (uint)uVar2) {
        return (int)DAT_8c20198c;
      }
      return 0;
    }
  }
  return (int)DAT_8c201906;
}



/* FUN_8c201948 @ 8c201948 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c201948(char *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  for (uVar5 = 0; uVar5 < ar5; uVar5 = uVar5 + 1) {
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    iVar4 = 8;
    uVar3 = uVar2 ^ (int)cVar1 << 8;
    do {
      uVar2 = uVar3 << 1;
      if ((uVar3 & DAT_8c201990) != 0) {
        uVar2 = uVar2 ^ (int)DAT_8c20198e;
      }
      iVar4 = iVar4 + -1;
      uVar3 = uVar2;
    } while (iVar4 != 0);
  }
  return uVar2;
}



/* FUN_8c201994 @ 8c201994 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201994(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int a4;
  undefined *a5;
  undefined4 a6;
  undefined4 a7;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)DAT_8c201a74 + DAT_8c201a80;
  uVar4 = DAT_8c201a80;
  do {
    FUN_8c2020f8(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x4c;
  } while (uVar4 < uVar3);
  uVar3 = (int)DAT_8c201a76 + DAT_8c201a84;
  uVar4 = DAT_8c201a84;
  do {
    FUN_8c202116(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < uVar3);
  a4 = (int)DAT_8c201a78;
  a7 = 0;
  a6 = 0x20;
  a5 = PTR_FUN_8c201a88;
  uVar2 = (*(code *)PTR_FUN_8c201a8c)(a4,PTR_FUN_8c201a88,0x20,0);
  puVar1 = PTR_FUN_8c201a94;
  *DAT_8c201a90 = uVar2;
  (*(code *)puVar1)(a4,a5,a6,a7);
  return 0;
}



/* FUN_8c2019e0 @ 8c2019e0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2019e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_8c201a98)(*DAT_8c201a90,ar5,ar6,ar7);
  uVar2 = (int)DAT_8c201a74 + DAT_8c201a80;
  uVar3 = DAT_8c201a80;
  do {
    FUN_8c2020f8(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x4c;
  } while (uVar3 < uVar2);
  uVar2 = (int)DAT_8c201a76 + DAT_8c201a84;
  uVar3 = DAT_8c201a84;
  do {
    uVar1 = FUN_8c202116(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < uVar2);
  return uVar1;
}



/* FUN_8c201a1a @ 8c201a1a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201a1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *a7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  puVar1 = PTR_memset_8c201a9c;
  a7 = DAT_8c201a80 + DAT_8c201a74;
  puVar2 = DAT_8c201a80;
  puVar3 = DAT_8c201a80;
  while( true ) {
    if (a7 <= puVar2) {
      return 0;
    }
    if (puVar2[2] == '\0') break;
    puVar2 = puVar2 + 0x4c;
    puVar3 = puVar3 + 0x4c;
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 4) = in_stack_00000000;
  *(undefined4 *)(puVar3 + 8) = in_stack_00000004;
  *(undefined4 *)(puVar3 + 0xc) = in_stack_00000008;
  *(undefined4 *)(puVar3 + 0x10) = in_stack_0000000c;
  if (*(int *)(puVar3 + 8) == 0) {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10) >> 1;
  }
  else {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10);
  }
  *(undefined4 *)(puVar3 + 0x18) = in_stack_00000010;
  *(undefined4 *)(puVar3 + 0x48) = in_stack_00000014;
  (*(code *)puVar1)(*(undefined4 *)(puVar3 + 0x48),0,
                    *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10),a7);
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined4 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)(puVar3 + 0x24) = ar4;
  *(undefined4 *)(puVar3 + 0x28) = 0;
  *(undefined4 *)(puVar3 + 0x2c) = 0;
  *(undefined4 *)(puVar3 + 0x30) = 0;
  *(undefined4 *)(puVar3 + 0x34) = 1;
  *(undefined4 *)(puVar3 + 0x38) = 0;
  *(undefined4 *)(puVar3 + 0x3c) = 0;
  *(undefined4 *)(puVar3 + 0x40) = 0;
  *(undefined4 *)(puVar3 + 0x44) = 0;
  puVar3[2] = 1;
  return puVar3;
}



/* FUN_8c201b04 @ 8c201b04 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201b04(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    uVar1 = FUN_8c2020f8(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
}



/* FUN_8c201b10 @ 8c201b10 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

uint FUN_8c201b10(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_MD;
  byte bVar7;
  byte in_RB;
  byte bVar8;
  byte in_BL;
  byte bVar9;
  byte in_FD;
  byte bVar10;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte extraout_M_01;
  byte bVar11;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte extraout_Q_01;
  byte bVar12;
  byte in_IMASK;
  byte bVar13;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_S_01;
  byte bVar14;
  byte in_T;
  bool bVar15;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar4 = uVar1 | (uint)in_IMASK << 4;
  uVar5 = uVar4 | (uint)in_Q << 8;
  uVar6 = uVar5 | (uint)in_M << 9;
  bVar9 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar7 = bVar9 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar14 = (byte)((uVar1 & 2) >> 1);
  bVar13 = (byte)((uVar4 & 0xf0) >> 4);
  bVar12 = (byte)(uVar5 >> 8) & 1;
  bVar11 = (byte)((uVar6 & 0x200) >> 9);
  bVar10 = (byte)(((uVar6 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar9 = (bVar9 & 0x10) >> 4;
  bVar8 = (bVar7 & 0x20) >> 5;
  bVar7 = ((bVar7 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  uVar2 = (int)DAT_8c201bfa + DAT_8c201bfc;
  uVar1 = DAT_8c201bfc;
  uVar4 = DAT_8c201bfc;
  uVar5 = DAT_8c201bfc;
  uVar6 = DAT_8c201bfc;
  do {
    if (((*(char *)(uVar4 + 2) == '\x01') &&
        (iVar3 = *(int *)(uVar6 + 0x20), FUN_8c202424(uVar6,uVar1,ar6,ar7), bVar11 = extraout_M,
        bVar12 = extraout_Q, bVar14 = extraout_S, iVar3 == 1)) &&
       (iVar3 = (*(code *)PTR_FUN_8c201c00)(*(undefined4 *)(uVar6 + 0x24),uVar1,ar6,ar7),
       bVar11 = extraout_M_00, bVar12 = extraout_Q_00, bVar14 = extraout_S_00, iVar3 == 0)) {
      FUN_8c2020b6(uVar5,uVar1,ar6,ar7);
      FUN_8c20227c(uVar5,uVar1,ar6,ar7);
      bVar11 = extraout_M_01;
      bVar12 = extraout_Q_01;
      bVar14 = extraout_S_01;
    }
    uVar4 = uVar4 + 0x4c;
    bVar15 = uVar2 <= uVar4;
    uVar5 = uVar5 + 0x4c;
    uVar6 = uVar6 + 0x4c;
  } while (!bVar15);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar15 | (uint)bVar14 << 1 | (uint)bVar13 << 4 | (uint)bVar12 << 8 |
          (uint)bVar11 << 9 | (uint)bVar10 << 0xf | (uint)bVar9 << 0x1c | (uint)bVar8 << 0x1d |
         (uint)bVar7 << 0x1e) & (int)DAT_8c201bf8;
}



/* FUN_8c201b92 @ 8c201b92 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201b92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = 1;
  return 0;
}



/* FUN_8c201b9a @ 8c201b9a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201b9a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = 2;
  return 0;
}



/* FUN_8c201ba2 @ 8c201ba2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c201ba2(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*ar4;
}



/* FUN_8c201bae @ 8c201bae callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201bae(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ar4;
  (*(code *)PTR_FUN_8c201c04)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c201c04)(iVar1,ar5,ar6,ar7);
  iVar1 = FUN_8c2029b4(iVar1,ar5,ar6,ar7);
  if (iVar1 == 1) {
    uVar2 = *(undefined4 *)(ar4 + 0x14);
  }
  else {
    uVar2 = *(undefined4 *)(ar4 + 0x40);
  }
  return uVar2;
}



/* FUN_8c201c08 @ 8c201c08 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201c08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_8c201d2c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c201c28 @ 8c201c28 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201c28(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x18) != ar5) {
    *(int *)(ar4 + 0x18) = ar5;
    *(undefined4 *)(ar4 + 0x28) = 4;
  }
  return 0;
}



/* FUN_8c201c3e @ 8c201c3e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201c3e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = DAT_8c201d30;
  puVar2 = DAT_8c201d30;
  while( true ) {
    if (DAT_8c201d30 + DAT_8c201d28 <= puVar1) {
      return 0;
    }
    if (puVar1[1] == '\0') break;
    puVar1 = puVar1 + 0x10;
    puVar2 = puVar2 + 0x10;
  }
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = ar4;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[1] = 1;
  return puVar2;
}



/* FUN_8c201c82 @ 8c201c82 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201c82(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    uVar1 = FUN_8c202116(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return in_r0;
}



/* get_field_4_201c8e @ 8c201c8e callers=5 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 get_field_4_201c8e(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}



/* FUN_8c201c92 @ 8c201c92 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201c92(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_8c20202e(ar4,ar5,ar6,ar7);
  get_field_4_201c8e(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c201d2c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c201d2c)(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    (*(code *)PTR_FUN_8c201d2c)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c201d2c)(ar4,ar5,ar6,ar7);
    uVar2 = FUN_8c2028cc(ar4,ar5,ar6,ar7);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c201cf6 @ 8c201cf6 callers=1 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201cf6(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a5;
  
  uVar1 = ar4;
  a5 = ar5;
  FUN_8c20202e(ar4,ar5,ar6,ar7);
  if (ar5 == 0) {
    (*(code *)PTR_FUN_8c201d2c)(uVar1,a5,ar6,ar7);
  }
  else if (ar5 == 1) {
    (*(code *)PTR_FUN_8c201fa4)(uVar1,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c201fa4)(uVar1,a5,ar6,ar7);
    FUN_8c20280c(uVar1,a5,ar6,ar7);
  }
  else if (ar5 == 2) {
    uVar1 = get_field_4_201c8e(ar4,a5,ar6,ar7);
    (*(code *)PTR_FUN_8c201fa4)(uVar1,a5,ar6,ar7);
  }
  uVar1 = (*(code *)PTR_FUN_8c201fa4)(uVar1,a5,ar6,ar7);
  return uVar1;
}



/* FUN_8c201d84 @ 8c201d84 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201d84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c20202e(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c201fa4)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c201da0 @ 8c201da0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201da0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c201fa4)(ar4,ar5,ar6,ar7);
  uVar1 = 1;
  FUN_8c201cf6(ar4,1,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c201fa4)(ar4,uVar1,ar6,ar7);
  return uVar1;
}



/* FUN_8c201dea @ 8c201dea callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c201dea(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c20202e(ar4,ar5,ar6,ar7);
  return (uint)*ar4;
}



/* FUN_8c201dfe @ 8c201dfe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201dfe(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c20202e(ar4,ar5,ar6,ar7);
  *ar4 = 0;
  return uVar1;
}



/* FUN_8c201e14 @ 8c201e14 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c201e14(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 a4;
  int iVar6;
  
  iVar5 = ar5;
  iVar6 = ar6;
  FUN_8c20202e(ar4,ar5,ar6,ar7);
  iVar3 = get_field_4_201c8e(ar4,iVar5,iVar6,ar7);
  (*(code *)PTR_FUN_8c201fa4)(ar4,iVar5,iVar6,ar7);
  (*(code *)PTR_FUN_8c201fa4)(ar4,iVar5,iVar6,ar7);
  iVar4 = FUN_8c2029b4(ar4,iVar5,iVar6,ar7);
  if (iVar4 == 1) {
    (*(code *)PTR_FUN_8c201fa4)(ar4,iVar5,iVar6,ar7);
    a4 = *(undefined4 *)(iVar3 + 0x14);
    iVar4 = FUN_8c202924(a4,iVar5,iVar6,ar7);
    (*(code *)PTR_FUN_8c201fa4)(a4,iVar5,iVar6,ar7);
    iVar5 = FUN_8c202924(*(undefined4 *)(iVar3 + 0x14),iVar5,iVar6,ar7);
    puVar2 = PTR_memmove_8c201fa8;
    iVar6 = *(int *)(iVar3 + 0x14) - iVar4;
    if (*(int *)(iVar3 + 8) == 0) {
      ar6 = ar6 >> 1;
    }
    iVar1 = iVar6;
    if (iVar4 < iVar5) {
      iVar1 = -iVar4;
    }
    if (iVar5 + iVar1 < ar6) {
      ar6 = iVar5 + iVar1;
    }
    if (iVar6 < ar6) {
      iVar6 = ar6 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    iVar5 = ar6 - iVar6;
    if (*(int *)(iVar3 + 8) == 0) {
      (*(code *)PTR_memmove_8c201fa8)(ar5,iVar4 * 2 + *(int *)(iVar3 + 0x48),iVar5 * 2,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar2)(iVar5 * 2 + ar5,*(undefined4 *)(iVar3 + 0x48),iVar6 << 1,ar7);
      }
    }
    else {
      (*(code *)PTR_memmove_8c201fa8)(ar5,*(int *)(iVar3 + 0x48) + iVar4,iVar5,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar2)(ar5 + iVar5,*(undefined4 *)(iVar3 + 0x48),iVar6,ar7);
      }
    }
    iVar5 = iVar5 + iVar6;
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}



/* FUN_8c201f2c @ 8c201f2c callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201f2c(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
  if (*(int *)(iVar1 + 8) == 0) {
    ar6 = ar6 << 1;
  }
  uVar2 = FUN_8c201e14(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c201f58 @ 8c201f58 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201f58(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  
  pcVar1 = (char *)(*(code *)PTR_FUN_8c201fac)(ar4,ar5,ar6,ar7);
  if ((*pcVar1 != '\0') &&
     (puVar2 = (uint *)(*(code *)PTR_FUN_8c201fb0)(ar4,ar5,ar6,ar7), (*puVar2 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c201f8a @ 8c201f8a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201f8a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_SUB_8c201fb4)(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}



/* FUN_8c201fb8 @ 8c201fb8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201fb8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x2c);
  if (iVar1 == 3) {
    if ((char)ar5 != '\b') {
      return 0xffffffff;
    }
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 100)) {
      if ((char)ar5 != '\a') {
        return 0xffffffff;
      }
    }
    else {
      if (iVar1 != 0x65) {
        return 0xffffffff;
      }
      if ((char)ar5 != '\x05') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* FUN_8c20200c @ 8c20200c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20200c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)*(byte *)(*(int *)(ar5 + 8) + 0xb);
  uVar2 = 0;
  if (((*(char *)(ar5 + 4) == '\b') && (uVar1 == 0)) && (*(int *)(ar4 + 0x34) == 0)) {
    uVar2 = 0xffffffff;
  }
  *(uint *)(ar4 + 0x34) = uVar1;
  return uVar2;
}



/* FUN_8c20202e @ 8c20202e callers=6 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c20202e(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 a4;
  
  if (ar4 != (undefined1 *)0x0) {
    a4 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
    FUN_8c201bae(a4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c202204)(a4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c202204)(a4,ar5,ar6,ar7);
    FUN_8c20284e(a4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c202204)(a4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c202204)(a4,ar5,ar6,ar7);
    in_r0 = FUN_8c2029b4(a4,ar5,ar6,ar7);
    if (in_r0 == 1) {
      in_r0 = (*(code *)PTR_FUN_8c202204)(a4,ar5,ar6,ar7);
      *ar4 = 1;
    }
  }
  return in_r0;
}



/* FUN_8c2020b6 @ 8c2020b6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2020b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(code *)PTR_FUN_8c202208)(*(undefined4 *)(ar4 + 0x24));
  uVar2 = (uint)*(byte *)(iVar1 + 4);
  if ((uVar2 == 8) && (uVar2 = *(byte *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
    *(undefined4 *)(ar4 + 0x38) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x38) = 0;
  }
  return uVar2;
}



/* FUN_8c2020ba @ 8c2020ba callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2020ba(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c202208)(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
  uVar2 = (uint)*(byte *)(iVar1 + 4);
  if ((uVar2 == 8) && (uVar2 = *(byte *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
    *(undefined4 *)(unaff_r14 + 0x38) = 1;
  }
  else {
    *(undefined4 *)(unaff_r14 + 0x38) = 0;
  }
  return uVar2;
}



/* FUN_8c2020f8 @ 8c2020f8 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2020f8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c20220c)(0,0x4c);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c2020fc @ 8c2020fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2020fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c20220c)(ar4,0,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c202116 @ 8c202116 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202116(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c20220c)(0,0x10);
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}



/* FUN_8c20211a @ 8c20211a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20211a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_memset_8c20220c)(ar4,0,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}



/* FUN_8c202132 @ 8c202132 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c202132(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0xf;
}



/* FUN_8c20213e @ 8c20213e callers=1 callees=2 */

/* WARNING: Unknown calling convention */

uint FUN_8c20213e(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint a4;
  undefined4 uVar4;
  int iVar5;
  uint a4_00;
  int iVar6;
  int iVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar7 = *(int *)(ar4 + 8);
  iVar6 = *(int *)(ar5 + 0x48);
  a4_00 = (uint)*(byte *)(iVar7 + 0xb);
  if (a4_00 == 0) {
    a4_00 = 0;
  }
  else {
    iVar5 = ar5;
    (*(code *)PTR_FUN_8c202204)(ar4,ar5,ar6,ar7);
    (*(code *)PTR_FUN_8c202204)(ar4,iVar5,ar6,ar7);
    a4 = a4_00;
    FUN_8c2027c0(a4_00,iVar5,ar6,ar7);
    puVar1 = PTR_memmove_8c202210;
    *(undefined4 *)(ar5 + 0x3c) = uStack_30;
    *(undefined4 *)(ar5 + 0x40) = uStack_2c;
    if (*(int *)(ar5 + 8) == 0) {
      (*(code *)PTR_FUN_8c202204)(a4,iVar5,ar6,ar7);
      uVar4 = *(undefined4 *)(ar5 + 0x14);
      iVar3 = FUN_8c202924(uVar4,iVar5,ar6,ar7);
      (*(code *)PTR_FUN_8c202204)(uVar4,iVar5,ar6,ar7);
      iVar5 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar5,ar6,ar7);
      iVar2 = iVar3 * 2 + iVar6;
      if (iVar5 < iVar3) {
        (*(code *)puVar1)(iVar2,iVar7 + 0xc,(*(int *)(ar5 + 0x14) - iVar3) * 2,ar7);
        iVar7 = (*(int *)(ar5 + 0x14) - iVar3) * 2 + 0xc + iVar7;
        iVar2 = iVar6;
      }
      else {
        iVar5 = iVar5 - iVar3;
        iVar7 = iVar7 + 0xc;
      }
      (*(code *)puVar1)(iVar2,iVar7,iVar5 << 1,ar7);
    }
    else if (*(int *)(ar5 + 8) == 1) {
      (*(code *)PTR_FUN_8c202328)(a4,iVar5,ar6,ar7);
      uVar4 = *(undefined4 *)(ar5 + 0x14);
      iVar2 = FUN_8c202924(uVar4,iVar5,ar6,ar7);
      (*(code *)PTR_FUN_8c202328)(uVar4,iVar5,ar6,ar7);
      iVar3 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar5,ar6,ar7);
      iVar5 = iVar2 + iVar6;
      if (iVar3 < iVar2) {
        (*(code *)puVar1)(iVar5,iVar7 + 0xc,*(int *)(ar5 + 0x14) - iVar2,ar7);
        iVar7 = (*(int *)(ar5 + 0x14) - iVar2) + 0xc + iVar7;
        iVar5 = iVar6;
      }
      else {
        iVar7 = iVar7 + 0xc;
        iVar3 = iVar3 - iVar2;
      }
      (*(code *)puVar1)(iVar5,iVar7,iVar3,ar7);
    }
  }
  return a4_00;
}



/* FUN_8c20227c @ 8c20227c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20227c(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  if (((*ar4 != '\0') && (*ar4 != '\x03')) &&
     (ar4_00 = (*(code *)PTR_FUN_8c20232c)(*(undefined4 *)(ar4 + 0x24)),
     *(char *)(ar4_00 + 4) == '\b')) {
    FUN_8c20213e(ar4_00,ar4,ar6,ar7);
  }
  return 0;
}



/* FUN_8c202280 @ 8c202280 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202280(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a4;
  char *unaff_r14;
  
  if (((*unaff_r14 != '\0') && (*unaff_r14 != '\x03')) &&
     (a4 = (*(code *)PTR_FUN_8c20232c)(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7),
     *(char *)(a4 + 4) == '\b')) {
    FUN_8c20213e(a4,unaff_r14,ar6,ar7);
  }
  return 0;
}



/* FUN_8c2022ac @ 8c2022ac callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2022ac(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(ar4 + 0x28);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    *ar5 = 2;
    uVar2 = FUN_8c202302(ar4,ar5,ar6,ar7);
    ar5[1] = (char)uVar2;
    ar5[2] = 0;
    ar5[3] = 0;
  }
  else {
    if (iVar1 == 3) {
      uVar3 = 1;
    }
    else {
      if (iVar1 != 4) {
        return iVar1;
      }
      uVar3 = 3;
    }
    *ar5 = uVar3;
    uVar2 = FUN_8c202330(ar4,ar5,ar6,ar7);
    ar5[1] = (char)uVar2;
    ar5[2] = 0;
    ar5[3] = 0;
  }
  return 0;
}



/* FUN_8c2022b8 @ 8c2022b8 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2022b8(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int unaff_r12;
  undefined4 unaff_r13;
  undefined1 *unaff_r14;
  
  iVar2 = *(int *)(ar4 + 0x28);
  uVar1 = (undefined1)unaff_r13;
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
    *unaff_r14 = 2;
    uVar3 = FUN_8c202302(ar4,ar5,ar6,ar7);
    *(undefined1 *)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  else {
    if (iVar2 == 3) {
      uVar4 = 1;
    }
    else {
      if (iVar2 != 4) {
        return iVar2;
      }
      uVar4 = 3;
    }
    *unaff_r14 = uVar4;
    uVar3 = FUN_8c202330(ar4,ar5,ar6,ar7);
    *(undefined1 *)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  return unaff_r13;
}



/* FUN_8c202302 @ 8c202302 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c202302(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x28) == 1) {
    uVar1 = (uint)DAT_8c202324;
  }
  if (*(int *)(ar4 + 4) == 1) {
    uVar1 = uVar1 | 4;
  }
  if (*(int *)(ar4 + 8) == 1) {
    uVar1 = uVar1 | 1;
  }
  return uVar1;
}



/* FUN_8c202330 @ 8c202330 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202330(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c202132(*(undefined4 *)(ar4 + 0x18),ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c202342 @ 8c202342 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c202342(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  cVar1 = *ar4;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(ar4 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(ar4 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(ar4 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
        iVar3 = 0;
        uStack_14 = (undefined1)DAT_8c2023ea;
        uStack_13 = 0;
        uStack_12 = 0;
        uStack_11 = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(ar4 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
      }
      goto LAB_8c2023fc;
    }
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = (*(code *)PTR_FUN_8c2025d4)(*(undefined4 *)(ar4 + 0x24),&uStack_14,ar6,ar7);
    *(int *)(ar4 + 0x1c) = iVar3;
    ar4[0x20] = '\x01';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  else {
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
  return iVar3;
}



/* FUN_8c202424 @ 8c202424 callers=1 callees=6 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202424(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_8c201f58(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
  puVar1 = PTR_FUN_8c2025dc;
  if (iVar2 == 1) {
    if (*(int *)(ar4 + 0x30) == 0) {
      uVar3 = (*(code *)PTR_FUN_8c2025d8)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x1c) = uVar3;
      ar4[0x30] = '\x01';
      ar4[0x31] = '\0';
      ar4[0x32] = '\0';
      ar4[0x33] = '\0';
    }
    else {
      if (*(int *)(ar4 + 0x30) == 1) {
        iVar2 = (*(code *)PTR_FUN_8c2025dc)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\a') {
          uVar3 = (*(code *)PTR_FUN_8c2025d8)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
          *(undefined4 *)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        uVar3 = (*(code *)PTR_FUN_8c2025e0)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x1c) = uVar3;
        uVar4 = 2;
      }
      else {
        if (*(int *)(ar4 + 0x30) != 2) {
          if (*(int *)(ar4 + 0x30) == 3) {
            iVar2 = (*(code *)PTR_FUN_8c2025dc)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
            if (*(char *)(iVar2 + 4) == '\a') {
              ar4[0x30] = '\x04';
              ar4[0x31] = '\0';
              ar4[0x32] = '\0';
              ar4[0x33] = '\0';
            }
            else {
              ar4[0x28] = '\x04';
              ar4[0x29] = '\0';
              ar4[0x2a] = '\0';
              ar4[0x2b] = '\0';
              *ar4 = '\x01';
              FUN_8c202782(ar4,ar5,ar6,ar7);
            }
          }
          if ((*(int *)(ar4 + 0x20) != 0) && (-1 < *(int *)(ar4 + 0x1c))) {
            iVar2 = (*(code *)PTR_FUN_8c2025e4)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
            if ((iVar2 == 0) && (*ar4 != '\x03')) {
              uVar3 = *(undefined4 *)(ar4 + 0x1c);
              iVar2 = FUN_8c201f8a(*(undefined4 *)(ar4 + 0x24),uVar3,ar6,ar7);
              if (iVar2 != 1) {
                return iVar2;
              }
              iVar2 = (*(code *)puVar1)(*(undefined4 *)(ar4 + 0x24),uVar3,ar6,ar7);
              ar5 = FUN_8c201fb8(ar4,(int)*(char *)(iVar2 + 4),ar6,ar7);
              FUN_8c20254c(ar4,ar5,ar6,ar7);
            }
            else {
              ar4[1] = *ar4;
              *ar4 = '\x06';
              ar5 = *(undefined4 *)(ar4 + 0x1c);
              iVar2 = FUN_8c201f8a(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
              if (iVar2 != 1) {
                return iVar2;
              }
            }
            FUN_8c202682(ar4,ar5,ar6,ar7);
          }
          uVar3 = FUN_8c202782(ar4,ar5,ar6,ar7);
          return uVar3;
        }
        iVar2 = (*(code *)PTR_FUN_8c2025dc)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\x05') {
          uVar3 = (*(code *)PTR_FUN_8c2025e0)(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
          *(undefined4 *)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        ar4[0x28] = '\x04';
        ar4[0x29] = '\0';
        ar4[0x2a] = '\0';
        ar4[0x2b] = '\0';
        *ar4 = '\x01';
        uVar3 = FUN_8c202782(ar4,ar5,ar6,ar7);
        uVar4 = 3;
      }
      *(undefined4 *)(ar4 + 0x30) = uVar4;
    }
  }
  else {
    uVar3 = 0x44;
    *ar4 = '\0';
    ar4[0x1c] = '\0';
    ar4[0x1d] = '\0';
    ar4[0x1e] = '\0';
    ar4[0x1f] = '\0';
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
    ar4[0x2c] = '\0';
    ar4[0x2d] = '\0';
    ar4[0x2e] = '\0';
    ar4[0x2f] = '\0';
    ar4[0x44] = '\0';
    ar4[0x45] = '\0';
    ar4[0x46] = '\0';
    ar4[0x47] = '\0';
    ar4[0x30] = '\0';
    ar4[0x31] = '\0';
    ar4[0x32] = '\0';
    ar4[0x33] = '\0';
  }
  return uVar3;
}



/* FUN_8c20254c @ 8c20254c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c20254c(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 ar5_00;
  byte bVar3;
  
  if (*ar4 == 3) {
    return 3;
  }
  uVar1 = ar5;
  if (ar5 == 0xffffffff) {
    uVar1 = (uint)*ar4;
    if (uVar1 == 4) {
      *ar4 = 3;
    }
    else {
      *ar4 = 4;
    }
  }
  if (ar5 != 0) {
    return uVar1;
  }
  if (*ar4 == 0) {
    iVar2 = *(int *)(ar4 + 0x2c);
    if (iVar2 != 1) goto LAB_8c20262e;
  }
  else if ((*ar4 != 1) || (iVar2 = 1, *(int *)(ar4 + 0x2c) != 1)) {
    if (*ar4 == 2) {
      iVar2 = *(int *)(ar4 + 0x2c);
      if (iVar2 == 2) goto LAB_8c20262e;
      if ((*ar4 == 2) && (*(int *)(ar4 + 0x2c) == 3)) {
        ar5_00 = (*(code *)PTR_FUN_8c2025dc)(*(undefined4 *)(ar4 + 0x24));
        iVar2 = FUN_8c20200c(ar4,ar5_00,ar6,ar7);
        if (iVar2 == 0) {
          return 0;
        }
        *ar4 = 5;
        return iVar2;
      }
    }
    if (*ar4 == 4) {
      iVar2 = 4;
      if (*(int *)(ar4 + 0x2c) == 0) goto LAB_8c20262e;
      if (*ar4 == 4) {
        iVar2 = 1;
        if (*(int *)(ar4 + 0x2c) == 1) goto LAB_8c202640;
        if (*ar4 == 4) {
          iVar2 = *(int *)(ar4 + 0x2c);
          if (iVar2 == 2) {
LAB_8c20262e:
            bVar3 = 1;
            goto LAB_8c202642;
          }
          if (*ar4 == 4) {
            iVar2 = *(int *)(ar4 + 0x2c);
            if (iVar2 == 3) goto LAB_8c202640;
            if ((*ar4 == 4) && (iVar2 = *(int *)(ar4 + 0x2c), iVar2 == 4)) goto LAB_8c20262e;
          }
        }
      }
    }
    if ((*ar4 != 5) || (iVar2 = 1, *(int *)(ar4 + 0x2c) != 1)) {
      uVar1 = (uint)*ar4;
      if ((uVar1 == 6) && (uVar1 = *(uint *)(ar4 + 0x2c), uVar1 == 4)) {
        if (ar4[1] == 2) {
          *ar4 = 0;
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        else {
          *ar4 = 2;
          ar4[0x28] = 2;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
        }
        return (uint)ar4[1];
      }
      return uVar1;
    }
  }
LAB_8c202640:
  bVar3 = 2;
LAB_8c202642:
  *ar4 = bVar3;
  return iVar2;
}



/* FUN_8c202550 @ 8c202550 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c202550(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 a5;
  byte bVar3;
  byte *unaff_r14;
  
  if (*unaff_r14 == 3) {
    return 3;
  }
  uVar1 = ar5;
  if (ar5 == 0xffffffff) {
    uVar1 = (uint)*unaff_r14;
    if (uVar1 == 4) {
      *unaff_r14 = 3;
    }
    else {
      *unaff_r14 = 4;
    }
  }
  if (ar5 != 0) {
    return uVar1;
  }
  if (*unaff_r14 == 0) {
    iVar2 = *(int *)(unaff_r14 + 0x2c);
    if (iVar2 != 1) goto LAB_8c20262e;
  }
  else if ((*unaff_r14 != 1) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
    if (*unaff_r14 == 2) {
      iVar2 = *(int *)(unaff_r14 + 0x2c);
      if (iVar2 == 2) goto LAB_8c20262e;
      if ((*unaff_r14 == 2) && (*(int *)(unaff_r14 + 0x2c) == 3)) {
        a5 = (*(code *)PTR_FUN_8c2025dc)(*(undefined4 *)(unaff_r14 + 0x24),0,ar6,ar7);
        iVar2 = FUN_8c20200c(unaff_r14,a5,ar6,ar7);
        if (iVar2 == 0) {
          return 0;
        }
        *unaff_r14 = 5;
        return iVar2;
      }
    }
    if (*unaff_r14 == 4) {
      iVar2 = 4;
      if (*(int *)(unaff_r14 + 0x2c) == 0) goto LAB_8c20262e;
      if (*unaff_r14 == 4) {
        iVar2 = 1;
        if (*(int *)(unaff_r14 + 0x2c) == 1) goto LAB_8c202640;
        if (*unaff_r14 == 4) {
          iVar2 = *(int *)(unaff_r14 + 0x2c);
          if (iVar2 == 2) {
LAB_8c20262e:
            bVar3 = 1;
            goto LAB_8c202642;
          }
          if (*unaff_r14 == 4) {
            iVar2 = *(int *)(unaff_r14 + 0x2c);
            if (iVar2 == 3) goto LAB_8c202640;
            if ((*unaff_r14 == 4) && (iVar2 = *(int *)(unaff_r14 + 0x2c), iVar2 == 4))
            goto LAB_8c20262e;
          }
        }
      }
    }
    if ((*unaff_r14 != 5) || (iVar2 = 1, *(int *)(unaff_r14 + 0x2c) != 1)) {
      uVar1 = (uint)*unaff_r14;
      if ((uVar1 == 6) && (uVar1 = *(uint *)(unaff_r14 + 0x2c), uVar1 == 4)) {
        if (unaff_r14[1] == 2) {
          *unaff_r14 = 0;
          unaff_r14[0x28] = 1;
          unaff_r14[0x29] = 0;
          unaff_r14[0x2a] = 0;
          unaff_r14[0x2b] = 0;
        }
        else {
          *unaff_r14 = 2;
          unaff_r14[0x28] = 2;
          unaff_r14[0x29] = 0;
          unaff_r14[0x2a] = 0;
          unaff_r14[0x2b] = 0;
        }
        return (uint)unaff_r14[1];
      }
      return uVar1;
    }
  }
LAB_8c202640:
  bVar3 = 2;
LAB_8c202642:
  *unaff_r14 = bVar3;
  return iVar2;
}



/* FUN_8c202682 @ 8c202682 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c202682(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (uint)*ar4;
  if (uVar1 == 1) {
    uVar1 = *(uint *)(ar4 + 0x28);
    if (uVar1 != 0) {
      if (uVar1 == 2) {
LAB_8c2026ca:
        ar4[0x28] = 0;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return uVar1;
      }
      if (uVar1 != 1) {
        if (uVar1 == 3) {
          ar4[0x28] = 1;
          ar4[0x29] = 0;
          ar4[0x2a] = 0;
          ar4[0x2b] = 0;
          return 3;
        }
        if (uVar1 != 4) goto LAB_8c2026ca;
      }
    }
  }
  else if (uVar1 == 2) {
    uVar1 = *(uint *)(ar4 + 0x28);
    if (uVar1 == 0) {
      ar4[0x28] = 2;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0;
    }
    if ((uVar1 == 1) || ((uVar1 != 2 && (uVar1 != 3)))) {
      ar4[0x28] = 3;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar1;
    }
  }
  else {
    if (uVar1 == 4) {
      uVar2 = *(undefined4 *)(ar4 + 0x28);
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x2c);
      return uVar2;
    }
    if (uVar1 == 5) {
      uVar2 = *(undefined4 *)(ar4 + 0x28);
      ar4[0x28] = 1;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return uVar2;
    }
    if (uVar1 == 6) {
      iVar3 = *(int *)(ar4 + 0x2c);
      if (iVar3 == 100) {
        ar4[0x28] = 0x65;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return 100;
      }
      if (iVar3 != 0x65) {
        ar4[0x28] = 100;
        ar4[0x29] = 0;
        ar4[0x2a] = 0;
        ar4[0x2b] = 0;
        return iVar3;
      }
      ar4[0x28] = 4;
      ar4[0x29] = 0;
      ar4[0x2a] = 0;
      ar4[0x2b] = 0;
      return 0x65;
    }
    if (uVar1 == 0) {
      uVar1 = *(uint *)(ar4 + 0x28);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) && (uVar1 != 3)) {
        return uVar1;
      }
    }
    else if (uVar1 == 3) {
      uVar1 = *(uint *)(ar4 + 0x28);
      if (((uVar1 != 0) && (uVar1 != 1)) && ((uVar1 != 2 && (uVar1 != 3)))) {
        return uVar1;
      }
    }
    else {
      *ar4 = 3;
    }
  }
  return uVar1;
}



/* FUN_8c202782 @ 8c202782 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c202782(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 uStack_c;
  
  if (*(int *)(ar4 + 0x28) == 100) {
    uVar4 = (*(code *)PTR_FUN_8c2029d0)(*(undefined4 *)(ar4 + 0x24));
LAB_8c2027a6:
    *(undefined4 *)(ar4 + 0x1c) = uVar4;
    ar4[0x20] = '\x01';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
    *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
    return uVar4;
  }
  if (*(int *)(ar4 + 0x28) == 0x65) {
    uVar4 = (*(code *)PTR_FUN_8c2029d4)(*(undefined4 *)(ar4 + 0x24));
    goto LAB_8c2027a6;
  }
  uStack_c = 1;
  cVar1 = *ar4;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(ar4 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(ar4 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(ar4 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
        iVar3 = 0;
        uStack_14 = (undefined1)DAT_8c2023ea;
        uStack_13 = 0;
        uStack_12 = 0;
        uStack_11 = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(ar4 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
      }
      goto LAB_8c2023fc;
    }
    iVar3 = FUN_8c2022ac(ar4,&uStack_14,ar6,ar7);
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = (*(code *)PTR_FUN_8c2025d4)(*(undefined4 *)(ar4 + 0x24),&uStack_14);
    *(int *)(ar4 + 0x1c) = iVar3;
    ar4[0x20] = '\x01';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  else {
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  *(undefined4 *)(ar4 + 0x2c) = *(undefined4 *)(ar4 + 0x28);
  return iVar3;
}



/* FUN_8c202786 @ 8c202786 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c202786(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *unaff_r14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  if (*(int *)(unaff_r14 + 0x28) == 100) {
    uVar4 = (*(code *)PTR_FUN_8c2029d0)(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
LAB_8c2027a6:
    *(undefined4 *)(unaff_r14 + 0x1c) = uVar4;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
    *(undefined4 *)(unaff_r14 + 0x2c) = *(undefined4 *)(unaff_r14 + 0x28);
    return uVar4;
  }
  if (*(int *)(unaff_r14 + 0x28) == 0x65) {
    uVar4 = (*(code *)PTR_FUN_8c2029d4)(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
    goto LAB_8c2027a6;
  }
  cVar1 = *unaff_r14;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(int *)(unaff_r14 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(int *)(unaff_r14 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(int *)(unaff_r14 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
        iVar3 = 0;
        uStack_10 = (undefined1)DAT_8c2023ea;
        uStack_f = 0;
        uStack_e = 0;
        uStack_d = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(int *)(unaff_r14 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
      }
      goto LAB_8c2023fc;
    }
    iVar3 = FUN_8c2022ac(unaff_r14,&uStack_10,ar6,ar7);
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = (*(code *)PTR_FUN_8c2025d4)(*(undefined4 *)(unaff_r14 + 0x24),&uStack_10);
    *(int *)(unaff_r14 + 0x1c) = iVar3;
    unaff_r14[0x20] = '\x01';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  else {
    unaff_r14[0x20] = '\0';
    unaff_r14[0x21] = '\0';
    unaff_r14[0x22] = '\0';
    unaff_r14[0x23] = '\0';
  }
  *(undefined4 *)(unaff_r14 + 0x2c) = *(undefined4 *)(unaff_r14 + 0x28);
  return iVar3;
}



/* FUN_8c2027c0 @ 8c2027c0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2027c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_stack_00000004;
  uint in_stack_00000008;
  int iStack_c;
  uint uStack_8;
  
  if (ar4 < 1) {
    uVar1 = (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,&stack0x00000004,ar7);
    return uVar1;
  }
  uStack_8 = ar4 + in_stack_00000008;
  if (uStack_8 < in_stack_00000008) {
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  iStack_c = in_stack_00000004;
  uVar1 = (*(code *)PTR_FUN_8c2029d8)(in_stack_00000004,&iStack_c,&stack0x00000004,ar7);
  return uVar1;
}



/* FUN_8c20280c @ 8c20280c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20280c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint a4;
  bool bVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  int iStack_c;
  uint uStack_8;
  
  bVar2 = in_stack_00000010 <= 0xffffffffU - in_stack_00000008;
  if (bVar2) {
    uStack_8 = in_stack_00000008 + in_stack_00000010;
  }
  else {
    in_stack_00000010 = in_stack_00000010 + in_stack_00000008 + 1;
    uStack_8 = in_stack_00000010;
  }
  a4 = (uint)!bVar2;
  iStack_c = in_stack_00000004 + in_stack_0000000c + a4;
  uVar1 = (*(code *)PTR_FUN_8c2029d8)(a4,in_stack_00000010,&iStack_c,&stack0x00000004);
  return uVar1;
}



/* FUN_8c20284e @ 8c20284e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20284e(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint in_stack_00000008;
  uint in_stack_00000010;
  
  (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    if (in_stack_00000008 < in_stack_00000010) {
      ar5 = in_stack_00000008 - in_stack_00000010;
      ar4 = in_stack_00000008;
    }
    else {
      ar4 = in_stack_00000008 - in_stack_00000010;
      ar5 = in_stack_00000010;
    }
  }
  uVar2 = (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c2028cc @ 8c2028cc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2028cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000000;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  (*(code *)PTR_FUN_8c2029d8)();
  (*(code *)PTR_FUN_8c2029d8)();
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    if ((in_stack_00000008 < in_stack_00000000) ||
       (uVar2 = in_stack_00000004 - in_stack_0000000c, DAT_8c2029dc < uVar2)) {
      uVar2 = DAT_8c2029dc;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c2028d0 @ 8c2028d0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c2028d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  
  (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c2029d8)(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    if ((in_stack_0000000c < in_stack_00000004) ||
       (uVar2 = in_stack_00000008 - in_stack_00000010, DAT_8c2029dc < uVar2)) {
      uVar2 = DAT_8c2029dc;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c202924 @ 8c202924 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202924(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000000;
  
  if (ar4 < 1) {
    return 0;
  }
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0106dc_8c2029e0)
                    (ar4,in_stack_00000000,ar6,&stack0x00000000);
  if (in_stack_00000000 == 0) {
    return uVar1;
  }
  iVar2 = (*(code *)PTR_libgcc_divide_helper_0106dc_8c2029e0)
                    (ar4,in_stack_00000000,uVar1,register0x0000003c);
  iVar2 = iVar2 + 1;
  if (iVar2 == ar4) {
    iVar2 = 0;
  }
  (*(code *)PTR_libgcc_divide_helper_0106dc_8c2029e0)(ar4,in_stack_00000000,uVar1,iVar2);
  uVar1 = (*(code *)PTR_libgcc_divide_helper_0106dc_8c2029e0)(ar4,in_stack_00000000,uVar1,iVar2);
  return uVar1;
}



/* FUN_8c202976 @ 8c202976 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202976(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_stack_00000004;
  uint in_stack_00000008;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = in_stack_00000008 << 1;
  if (DAT_8c2029dc < in_stack_00000004) {
    iStack_c = -1;
  }
  else {
    iStack_c = in_stack_00000004 * 2 + (uint)(DAT_8c2029dc < in_stack_00000008);
  }
  uVar1 = (*(code *)PTR_FUN_8c2029d8)
                    (&iStack_c,iStack_8,&stack0x00000004,(uint)(DAT_8c2029dc < in_stack_00000008));
  return uVar1;
}



/* FUN_8c2029b4 @ 8c2029b4 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2029b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_stack_00000000;
  uint in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_0000000c;
  
  if (in_stack_00000000 == in_stack_00000008) {
    if (in_stack_00000004 == in_stack_0000000c) {
      return 0;
    }
    if (in_stack_0000000c < in_stack_00000004) {
      return 1;
    }
  }
  else if (in_stack_00000008 < in_stack_00000000) {
    return 1;
  }
  return 0xffffffff;
}



/* FUN_8c2029fc @ 8c2029fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2029fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = PTR_FUN_8c202a64;
  iVar1 = DAT_8c202a60;
  iVar5 = 0;
  do {
    pbVar3 = (byte *)(*(code *)puVar2)(iVar5);
    iVar6 = iVar5 + 1;
    iVar4 = iVar5 * 4;
    *(uint *)(iVar4 + iVar1) = (uint)*pbVar3;
    iVar5 = iVar6;
  } while (iVar6 < 0x18);
  return iVar4;
}



/* FUN_8c202a04 @ 8c202a04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c202a04(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  int unaff_r13;
  int unaff_r14;
  int iVar5;
  
  puVar2 = PTR_FUN_8c202a64;
  iVar1 = DAT_8c202a60;
  do {
    pbVar3 = (byte *)(*(code *)puVar2)(unaff_r14,ar5,ar6,ar7);
    iVar5 = unaff_r14 + 1;
    iVar4 = unaff_r14 * 4;
    *(uint *)(iVar4 + iVar1) = (uint)*pbVar3;
    unaff_r14 = iVar5;
  } while (iVar5 <= unaff_r13);
  return iVar4;
}



/* FUN_8c202a30 @ 8c202a30 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c202a30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c202a68)();
  iVar1 = (*(code *)PTR_FUN_8c202a6c)(iVar1 * 6);
  return (uint)((*(byte *)(iVar1 + 2) & 0x1f) != 0);
}



/* FUN_8c202a34 @ 8c202a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c202a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_libgcc_divide_helper_010468_8c202a68)(ar4,ar5,ar6,ar7);
  iVar1 = (*(code *)PTR_FUN_8c202a6c)(iVar1 * 6,ar5,ar6,ar7);
  return (uint)((*(byte *)(iVar1 + 2) & 0x1f) != 0);
}



/* FUN_8c202a80 @ 8c202a80 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202a80(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iStack_18;
  undefined4 uStack_c;
  
  iVar9 = DAT_8c202b90;
  puVar6 = PTR_DAT_8c202b8c;
  uStack_c = 0;
  iVar2 = (int)DAT_8c202b80;
  *(undefined4 *)((int)&iStack_18 + iVar2) = ar6;
  uVar3 = *(undefined4 *)(PTR_DAT_8c202b88 + 4);
  *(undefined4 *)(&stack0xffffffec + iVar2) = *(undefined4 *)PTR_DAT_8c202b88;
  *(undefined4 *)(&stack0xfffffff0 + iVar2) = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c202b88 + 0xc);
  *(undefined4 *)((int)&stack0xfffffff4 + iVar2) = *(undefined4 *)(PTR_DAT_8c202b88 + 8);
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar3;
  uVar3 = *(undefined4 *)(PTR_DAT_8c202b88 + 0x14);
  *(undefined4 *)(&stack0xfffffffc + iVar2) = *(undefined4 *)(PTR_DAT_8c202b88 + 0x10);
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar3;
  *(undefined4 **)(*(int *)PTR_DAT_8c202b8c * 0x10 + DAT_8c202b90 + 0x1c) = ar4;
  *(int *)(*(int *)puVar6 * 0x10 + iVar9 + 0x20) = ar5;
  *(undefined4 *)(*(int *)puVar6 * 0x10 + iVar9 + 0x24) = *(undefined4 *)((int)&iStack_18 + iVar2);
  iVar4 = (int)DAT_8c202b82;
  *(int *)(iVar9 + 0x18) = ar7;
  *(undefined4 *)(*(int *)puVar6 * 0x10 + iVar9 + 0x28) =
       *(undefined4 *)((int)&iStack_18 + iVar4 + iVar2);
  piVar1 = DAT_8c202b94;
  *(uint *)puVar6 = *(int *)puVar6 + 1U & 1;
  *piVar1 = ar7;
  iVar4 = ar7;
  if (*(int *)(iVar9 + 0x54) != 0) {
    puVar6 = (undefined *)(int)DAT_8c202b84;
    ar6 = *(undefined4 *)((int)&iStack_18 + iVar2);
    ar5 = ar7;
    sh4_dmac_202c60(puVar6,ar7,ar6,ar7);
  }
  iVar5 = (*(code *)PTR_FUN_8c202b98)(puVar6,ar5,ar6,iVar4);
  if (iVar5 == DAT_8c202b9c) {
    iVar5 = (*(code *)PTR_FUN_8c202ba0)(*(undefined4 *)(iVar9 + 0x60),ar4,ar6,iVar4);
    piVar1 = DAT_8c202ba4;
    if (iVar5 != 0) {
      return iVar5;
    }
    *ar4 = 1;
    ar4[1] = *(undefined4 *)(&stack0xffffffec + *piVar1 * 4 + iVar2);
    ar4[2] = *piVar1;
    ar4[3] = *(undefined4 *)(iVar9 + 0x48);
    ar4[4] = *(undefined4 *)(iVar9 + 0x4c);
    if (ar7 == 1) {
      ar4[6] = 1;
    }
    else {
      ar4[6] = 0;
    }
    puVar6 = PTR_FUN_8c202c48;
    if (*(int *)((int)&iStack_18 + DAT_8c202c40 + iVar2) == 1) {
      iVar9 = (int)DAT_8c202c42;
      for (puVar7 = (undefined4 *)(&stack0x00000004 + iVar2);
          puVar7 < &stack0x00000004 + iVar9 + iVar2; puVar7 = puVar7 + 1) {
        *puVar7 = 0;
      }
      uVar8 = 0;
      if (ar4[5] != 0) {
        do {
          (*(code *)puVar6)(ar4[7] + uVar8,&stack0x00000004 + iVar2,iVar9,iVar4);
          uVar8 = uVar8 + iVar9;
        } while (uVar8 < (uint)ar4[5]);
      }
    }
  }
  else {
    (*(code *)PTR_FUN_8c202c4c)((int)DAT_8c202c44,ar5,ar6,iVar4);
  }
  return 0;
}



/* sh4_dmac_202c60 @ 8c202c60 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c202cb8) */
/* WARNING: Unknown calling convention */

undefined4 sh4_dmac_202c60(int ar4,int ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint auStack_1c [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  auStack_1c[0] = *(uint *)PTR_DAT_8c202ce8;
  auStack_1c[1] = *(undefined4 *)(PTR_DAT_8c202ce8 + 4);
  auStack_1c[2] = *(undefined4 *)(PTR_DAT_8c202ce8 + 8);
  auStack_1c[3] = *(undefined4 *)(PTR_DAT_8c202ce8 + 0xc);
  uStack_c = *(undefined4 *)(PTR_DAT_8c202ce8 + 0x10);
  uStack_8 = *(undefined4 *)(PTR_DAT_8c202ce8 + 0x14);
  sVar1 = DAT_8c202ce0;
  if ((*DAT_8c202cec != 1) && ((*DAT_8c202cf0 & 0x10) == 0)) {
    sVar1 = DAT_8c202ce2;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *DAT_8c202cf8 = *DAT_8c202cf8 & DAT_8c202cf4 | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*DAT_8c202cec == 1) {
    uVar3 = (uint)DAT_8c202ce4;
  }
  else if (((*DAT_8c202d84 & 1) == 1) || ((*DAT_8c202d84 & 0x2c) != 0x20)) {
    if ((*DAT_8c202d84 & 0x20) == 0) {
      if ((*DAT_8c202d84 & 0x62) == 0x42) {
        iVar4 = *(int *)(DAT_8c202d88 + *DAT_8c202d8c * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)DAT_8c202e00;
      }
    }
    else if ((*DAT_8c202d84 & 0x42) == 0x42) {
      uVar3 = *(uint *)(DAT_8c202d88 + *DAT_8c202d8c * 4);
    }
    else {
      uVar3 = (uint)DAT_8c202d82;
    }
  }
  else {
    uVar3 = (uint)DAT_8c202d80;
  }
  iVar4 = DAT_8c202e04;
  iVar2 = (int)DAT_8c202e02;
  *(int *)(DAT_8c202e04 + 0x48) = (int)sVar1;
  *(uint *)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *DAT_8c202e08;
  }
  *(uint *)(iVar4 + 0x50) = auStack_1c[ar4] >> 3;
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x48) * *(int *)(iVar4 + 0x4c) * *(int *)(iVar4 + 0x50);
  return 0x60;
}



/* sh4_dmac_202e20 @ 8c202e20 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 sh4_dmac_202e20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = DAT_8c202ee4;
  *DAT_8c202ee8 = 0;
  *DAT_8c202eec = 0;
  *DAT_8c202ef0 = 0;
  *piVar1 = (int)DAT_8c202ee0;
  *DAT_8c202ef8 = DAT_8c202ef4;
  *DAT_8c202efc = 0;
  *DAT_8c202f00 = 0x10;
  *DAT_8c202f04 = 0x10;
  puVar4 = DAT_8c202f14;
  puVar3 = DAT_8c202f10;
  puVar2 = DAT_8c202f08;
  *DAT_8c202f08 = 0;
  puVar2[1] = 0;
  puVar2 = DAT_8c202f0c;
  uVar7 = (uint)DAT_8c202ee2;
  *DAT_8c202f0c = 0;
  puVar2[1] = 0;
  uVar6 = 0;
  *puVar3 = 0;
  *puVar4 = 7;
  *DAT_8c202f18 = 1;
  iVar5 = DAT_8c202f1c;
  do {
    iVar8 = iVar5 + uVar6;
    uVar6 = uVar6 + 0x20;
    *(undefined4 *)(iVar8 + 0x18) = 0;
    *(undefined4 *)(iVar8 + uVar7 + 0x18) = 8;
  } while (uVar6 < uVar7);
  return 8;
}



/* g2dma_202e82 @ 8c202e82 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 g2dma_202e82(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar6 = DAT_8c202f20;
  *DAT_8c202f20 = 0;
  puVar1 = DAT_8c202f24;
  *DAT_8c202f24 = 1;
  *puVar1 = 0;
  do {
  } while (*piVar6 != 0);
  *DAT_8c202ee4 = *DAT_8c202ee4 & 0xfffffffe;
  *puVar1 = 1;
  *puVar1 = 0;
  puVar2 = DAT_8c202f10;
  puVar1 = DAT_8c202f08;
  *DAT_8c202f08 = 0;
  puVar1[1] = 0;
  puVar4 = DAT_8c202f18;
  puVar3 = DAT_8c202f14;
  puVar1 = DAT_8c202f0c;
  *DAT_8c202f0c = 0;
  puVar1[1] = 0;
  *puVar2 = 0;
  iVar5 = DAT_8c202f1c;
  uVar8 = (uint)DAT_8c202ee2;
  *puVar3 = 7;
  *puVar4 = 7;
  uVar7 = 0;
  do {
    iVar9 = iVar5 + uVar7;
    uVar7 = uVar7 + 0x20;
    *(undefined4 *)(iVar9 + 0x18) = 0;
    *(undefined4 *)(iVar9 + uVar8 + 0x18) = 8;
  } while (uVar7 < uVar8);
  return 0;
}



/* sh4_dmac_202f40 @ 8c202f40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int sh4_dmac_202f40(int ar4,uint ar5,uint ar6,uint ar7)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *in_stack_00000000;
  
  piVar3 = DAT_8c203030;
  iVar2 = DAT_8c20302c;
  if (ar6 == 0) {
    iVar4 = (int)DAT_8c203022;
  }
  else {
    uVar9 = (ar7 & 8) >> 3;
    iVar4 = (int)DAT_8c203024;
    iVar5 = uVar9 * 4;
    iVar7 = uVar9 * 0x100;
    iVar6 = *(int *)(DAT_8c203028 + iVar5);
    iVar10 = iVar6 * 0x20;
    if ((*(uint *)(iVar7 + DAT_8c20302c + iVar10 + 0x18) & 3) == 0) {
      if ((ar5 & 0x1f) != 0) {
        ar5 = ar5 + 0x1f & 0xffffffe0;
      }
      if ((ar6 & 0x1f) != 0) {
        ar6 = ar6 + 0x1f & 0xffffffe0;
      }
      piVar11 = (int *)(iVar7 + DAT_8c20302c + iVar10);
      *piVar11 = *DAT_8c203030;
      iVar8 = DAT_8c203028;
      piVar11[1] = ar5;
      piVar11[3] = ar4;
      piVar11[5] = ar6;
      piVar11[6] = ar7 | 1;
      *in_stack_00000000 = piVar11;
      iVar4 = 0;
      *(uint *)(iVar5 + iVar8) = *(uint *)(iVar5 + iVar8) + 1 & 7;
      *piVar3 = *piVar3 + 1;
    }
    if (((iVar4 != DAT_8c203024) &&
        ((*(uint *)(*DAT_8c203128 * 0x100 + iVar2 + *DAT_8c20312c * 0x20 + 0x18) & 3) == 0)) &&
       ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 3) == 1)) {
      iVar8 = iVar7 + iVar2 + iVar10;
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & 0xfffffffc | 2;
      *DAT_8c203130 = *(undefined4 *)(iVar8 + 4);
      *DAT_8c203138 = (*(int *)(iVar8 + 0xc) + DAT_8c203134) * 2;
      *DAT_8c20313c = ar6 >> 5;
      uVar1 = DAT_8c203120;
      if ((*(uint *)(iVar8 + 0x18) & 4) == 0) {
        uVar1 = DAT_8c203122;
      }
      if ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | DAT_8c203124;
      }
      *DAT_8c203140 = (int)(short)uVar1;
      iVar10 = iVar7 + iVar2 + iVar10;
      *DAT_8c203144 = *(undefined4 *)(iVar10 + 0xc);
      *DAT_8c203148 = *(undefined4 *)(iVar10 + 0x14);
      *DAT_8c20314c = 1;
      iVar2 = DAT_8c203150;
      *DAT_8c20312c = iVar6;
      *DAT_8c203128 = uVar9;
      *(uint *)(iVar5 + iVar2) = *(uint *)(iVar5 + iVar2) + 1 & 7;
    }
  }
  return iVar4;
}



/* sh4_dmac_203160 @ 8c203160 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 sh4_dmac_203160(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = DAT_8c203254;
  iVar2 = DAT_8c203248;
  uVar1 = DAT_8c203240;
  iVar6 = *DAT_8c20324c * 0x100 + DAT_8c203248 + *DAT_8c203250 * 0x20;
  *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = DAT_8c203258;
  uVar7 = 0;
  do {
    iVar6 = *(int *)(uVar7 * 4 + iVar4);
    if ((*(uint *)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(undefined4 *)(iVar9 + 4);
      *DAT_8c203260 = (*(int *)(iVar9 + 0xc) + DAT_8c20325c) * 2;
      *DAT_8c203264 = *(uint *)(iVar9 + 0x14) >> 5;
      if ((*(uint *)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = DAT_8c203242;
      }
      if ((*(uint *)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | DAT_8c203244;
      }
      *DAT_8c203268 = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *DAT_8c20326c = *(undefined4 *)(iVar10 + 0xc);
      *DAT_8c203270 = *(undefined4 *)(iVar10 + 0x14);
      *DAT_8c203274 = 1;
      puVar3 = DAT_8c20324c;
      puVar8 = (uint *)(uVar7 * 4 + iVar4);
      *DAT_8c203250 = iVar6;
      *puVar3 = uVar7;
      *puVar8 = *puVar8 + 1 & 7;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return 0;
}



/* FUN_8c203298 @ 8c203298 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203298(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = DAT_8c203304;
  piVar5 = DAT_8c203304;
  do {
    if ((int *)((int)DAT_8c203300 + (int)DAT_8c203304) <= piVar4) {
      return 1;
    }
    uVar1 = 0;
    piVar2 = piVar4;
    piVar3 = piVar5;
    do {
      if ((*piVar3 == ar4) && ((piVar2[6] & 3U) != 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 8);
    piVar4 = (int *)((int)piVar4 + (int)DAT_8c203302);
    piVar5 = (int *)((int)piVar5 + (int)DAT_8c203302);
  } while( true );
}



/* FUN_8c203320 @ 8c203320 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203320(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  do {
    iVar1 = FUN_8c203298(ar4,ar5,ar6,ar7);
  } while (iVar1 != 1);
  return 1;
}



/* FUN_8c2033c0 @ 8c2033c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2033c0(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = PTR_FUN_8c2033e8;
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = (*(code *)puVar1)((int)*ar4,ar5,ar6,ar7);
    *ar4 = (char)in_r0;
  }
  *ar4 = '\0';
  return in_r0;
}



/* FUN_8c203400 @ 8c203400 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203400(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar1 = PTR_DAT_8c2034a0;
  iVar2 = *(int *)(PTR_DAT_8c2034a0 + 8);
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    (*(code *)PTR_FUN_8c2034a4)();
  }
  iVar2 = *(int *)puVar1;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    (*(code *)PTR_FUN_8c2034a4)();
  }
  iVar2 = *(int *)(puVar1 + 0x1c);
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    (*(code *)PTR_FUN_8c2034a4)();
  }
  iVar2 = *(int *)(puVar1 + 0x14);
  puVar3 = DAT_8c2034a8;
  while (DAT_8c2034a8 = puVar3, iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
    (*(code *)PTR_FUN_8c2034a4)();
    puVar3 = DAT_8c2034a8;
  }
  puVar4 = (undefined2 *)(DAT_8c2034ac + (int)puVar3);
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 0xc;
  } while (puVar3 < puVar4);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  iVar2 = *(int *)PTR_DAT_8c2034b0;
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    (*(code *)PTR_FUN_8c2034b4)();
  }
  *(undefined4 *)PTR_DAT_8c2034b0 = 0;
  return 0;
}



/* FUN_8c203406 @ 8c203406 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203406(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *a5;
  undefined2 *a6;
  int *unaff_r13;
  int iVar3;
  
  iVar1 = unaff_r13[2];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    (*(code *)PTR_FUN_8c2034a4)(iVar1,ar5,ar6,ar7);
    iVar1 = iVar3;
  }
  iVar1 = *unaff_r13;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    (*(code *)PTR_FUN_8c2034a4)(iVar1,ar5,ar6,ar7);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[7];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    (*(code *)PTR_FUN_8c2034a4)(iVar1,ar5,ar6,ar7);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[5];
  a6 = DAT_8c2034a8;
  while (DAT_8c2034a8 = a6, iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    (*(code *)PTR_FUN_8c2034a4)(iVar1,ar5,ar6,ar7);
    iVar1 = iVar3;
    a6 = DAT_8c2034a8;
  }
  a5 = (undefined2 *)(DAT_8c2034ac + (int)a6);
  puVar2 = a6;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0xc;
  } while (puVar2 < a5);
  *unaff_r13 = 0;
  unaff_r13[1] = 0;
  unaff_r13[2] = 0;
  unaff_r13[3] = 0;
  unaff_r13[4] = 0;
  unaff_r13[5] = 0;
  unaff_r13[6] = 0;
  unaff_r13[7] = 0;
  unaff_r13[8] = 0;
  unaff_r13[9] = 0;
  iVar1 = *(int *)PTR_DAT_8c2034b0;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    (*(code *)PTR_FUN_8c2034b4)(iVar1,a5,a6,ar7);
    iVar1 = iVar3;
  }
  *(undefined4 *)PTR_DAT_8c2034b0 = 0;
  return 0;
}



/* FUN_8c2034c0 @ 8c2034c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2034c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 ar6_00;
  undefined4 uVar9;
  
  uVar7 = DAT_8c203578;
  puVar4 = PTR_DAT_8c203574;
  puVar8 = PTR_DAT_8c203570;
  puVar3 = PTR_DAT_8c20356c;
  puVar2 = PTR_DAT_8c203568;
  puVar1 = PTR_DAT_8c203564;
  if (*(int *)PTR_DAT_8c20357c == 1) {
    ar6_00 = 0;
    iVar6 = (*(code *)PTR_s_HARDWARE_205e00_8c203588)
                      (PTR_s_HARDWARE_8c203584,PTR_s_EnableTexture16MB_8c203580);
    uVar9 = DAT_8c20358c;
    if (iVar6 == 1) {
      *DAT_8c203590 = DAT_8c20358c;
      iVar6 = (int)DAT_8c203560;
      *(undefined4 *)PTR_DAT_8c203594 = uVar9;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar9;
      puVar5 = PTR_pvr_20a844_8c203598;
      *(undefined4 *)puVar1 = uVar9;
      *(undefined4 *)puVar3 = 0;
      uVar7 = 0;
      (*(code *)puVar5)();
    }
    else {
      *DAT_8c203590 = uVar7;
      puVar5 = PTR_pvr_20a844_8c203598;
      iVar6 = (int)DAT_8c203560;
      *(undefined4 *)PTR_DAT_8c203594 = uVar7;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = 0;
      uVar7 = 0;
      (*(code *)puVar5)();
    }
    FUN_8c203400(iVar6,uVar7,ar6_00,ar7);
    *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)puVar4;
    puVar1 = PTR_FUN_8c20359c;
    *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)puVar3;
    iVar6 = (*(code *)puVar1)();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar2;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar4;
LAB_8c20362c:
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(puVar8 + 8);
      *(int *)(puVar8 + 8) = iVar6;
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(puVar8 + 0xc);
      *(int *)(puVar8 + 0xc) = iVar6;
      return 0;
    }
  }
  else {
    uVar9 = 0;
    iVar6 = (*(code *)PTR_s_HARDWARE_205e00_8c20366c)
                      (PTR_s_HARDWARE_8c203668,PTR_s_EnableTexture16MB_8c203664,100);
    if (iVar6 == 1) {
      *DAT_8c203674 = DAT_8c203670;
      puVar5 = PTR_pvr_20a844_8c20367c;
      iVar6 = (int)DAT_8c203660;
      *(undefined4 *)PTR_DAT_8c203678 = uVar7;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = uVar7;
      uVar7 = 0;
      (*(code *)puVar5)();
    }
    else {
      *DAT_8c203674 = uVar7;
      uVar7 = DAT_8c203680;
      puVar5 = PTR_pvr_20a844_8c20367c;
      *(undefined4 *)PTR_DAT_8c203678 = DAT_8c203680;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = uVar7;
      iVar6 = (int)DAT_8c203660;
      uVar7 = 0;
      (*(code *)puVar5)();
    }
    FUN_8c203400(iVar6,uVar7,uVar9,ar7);
    *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)puVar4;
    puVar5 = PTR_FUN_8c203684;
    *(undefined4 *)(puVar8 + 0x24) = *(undefined4 *)puVar3;
    iVar6 = (*(code *)puVar5)();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar2;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar4;
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(puVar8 + 8);
      puVar2 = PTR_FUN_8c203684;
      *(int *)(puVar8 + 8) = iVar6;
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(puVar8 + 0xc);
      *(int *)(puVar8 + 0xc) = iVar6;
      iVar6 = (*(code *)puVar2)();
      if (iVar6 != 0) {
        puVar8 = puVar8 + 0x14;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar1;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar3;
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}



/* s_HARDWARE_2034d0 @ 8c2034cc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 s_HARDWARE_2034d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int *in_r3;
  undefined4 uVar7;
  undefined *a5;
  undefined4 a6;
  undefined4 uVar8;
  
  uVar7 = DAT_8c203578;
  puVar4 = PTR_DAT_8c203574;
  a5 = PTR_DAT_8c203570;
  puVar3 = PTR_DAT_8c20356c;
  puVar2 = PTR_DAT_8c203568;
  puVar1 = PTR_DAT_8c203564;
  if (*in_r3 == 1) {
    a6 = 0;
    iVar6 = (*(code *)PTR_s_HARDWARE_205e00_8c203588)
                      (PTR_s_HARDWARE_8c203584,PTR_s_EnableTexture16MB_8c203580,0,ar7);
    uVar8 = DAT_8c20358c;
    if (iVar6 == 1) {
      *DAT_8c203590 = DAT_8c20358c;
      iVar6 = (int)DAT_8c203560;
      *(undefined4 *)PTR_DAT_8c203594 = uVar8;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar8;
      puVar5 = PTR_pvr_20a844_8c203598;
      *(undefined4 *)puVar1 = uVar8;
      *(undefined4 *)puVar3 = 0;
      uVar7 = 0;
      (*(code *)puVar5)(iVar6,0,a6,ar7);
    }
    else {
      *DAT_8c203590 = uVar7;
      puVar5 = PTR_pvr_20a844_8c203598;
      iVar6 = (int)DAT_8c203560;
      *(undefined4 *)PTR_DAT_8c203594 = uVar7;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = 0;
      uVar7 = 0;
      (*(code *)puVar5)(iVar6,0,a6,ar7);
    }
    FUN_8c203400(iVar6,uVar7,a6,ar7);
    *(undefined4 *)(a5 + 0x10) = *(undefined4 *)puVar4;
    puVar1 = PTR_FUN_8c20359c;
    *(undefined4 *)(a5 + 0x24) = *(undefined4 *)puVar3;
    iVar6 = (*(code *)puVar1)(iVar6,uVar7,a6,ar7);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar2;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar4;
LAB_8c20362c:
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(a5 + 8);
      *(int *)(a5 + 8) = iVar6;
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(a5 + 0xc);
      *(int *)(a5 + 0xc) = iVar6;
      return 0;
    }
  }
  else {
    uVar8 = 0;
    iVar6 = (*(code *)PTR_s_HARDWARE_205e00_8c20366c)
                      (PTR_s_HARDWARE_8c203668,PTR_s_EnableTexture16MB_8c203664,0,ar7);
    if (iVar6 == 1) {
      *DAT_8c203674 = DAT_8c203670;
      puVar5 = PTR_pvr_20a844_8c20367c;
      iVar6 = (int)DAT_8c203660;
      *(undefined4 *)PTR_DAT_8c203678 = uVar7;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = uVar7;
      uVar7 = 0;
      (*(code *)puVar5)(iVar6,0,uVar8,ar7);
    }
    else {
      *DAT_8c203674 = uVar7;
      uVar7 = DAT_8c203680;
      puVar5 = PTR_pvr_20a844_8c20367c;
      *(undefined4 *)PTR_DAT_8c203678 = DAT_8c203680;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)puVar4 = uVar7;
      *(undefined4 *)puVar1 = uVar7;
      *(undefined4 *)puVar3 = uVar7;
      iVar6 = (int)DAT_8c203660;
      uVar7 = 0;
      (*(code *)puVar5)(iVar6,0,uVar8,ar7);
    }
    FUN_8c203400(iVar6,uVar7,uVar8,ar7);
    *(undefined4 *)(a5 + 0x10) = *(undefined4 *)puVar4;
    puVar5 = PTR_FUN_8c203684;
    *(undefined4 *)(a5 + 0x24) = *(undefined4 *)puVar3;
    iVar6 = (*(code *)puVar5)(iVar6,uVar7,uVar8,ar7);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar2;
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar4;
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(a5 + 8);
      puVar2 = PTR_FUN_8c203684;
      *(int *)(a5 + 8) = iVar6;
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(a5 + 0xc);
      *(int *)(a5 + 0xc) = iVar6;
      iVar6 = (*(code *)puVar2)(iVar6,a5,uVar8,ar7);
      if (iVar6 != 0) {
        a5 = a5 + 0x14;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)puVar1;
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)puVar3;
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}



/* FUN_8c2036a0 @ 8c2036a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2036a0(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = PTR_FUN_8c2037d4;
  puVar2 = PTR_DAT_8c2037c4;
  puVar1 = PTR_DAT_8c2037c0;
  if ((int)ar4 < 0) {
    uVar4 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar4 = ar4 & 0x1f;
  }
  if (uVar4 != 0) {
    ar4 = ar4 + (0x20 - uVar4);
  }
  if (*(uint *)PTR_DAT_8c2037c0 == ar4) {
    *(uint *)(ar5 + 0x14) = ar4;
    uVar6 = (*(code *)puVar3)(*(int *)puVar2 + 4);
    *(undefined4 *)(ar5 + 0x1c) = uVar6;
    iVar5 = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)puVar2 = 0;
  }
  else {
    if ((*DAT_8c2037c8 & 4) == 0) {
      iVar5 = (*(code *)PTR_FUN_8c2037d0)(0,ar4 << 1,ar5,8);
    }
    else {
      iVar5 = (*(code *)PTR_FUN_8c2037d0)
                        (*(uint *)(PTR_DAT_8c2037cc + 0x10) < *(uint *)(PTR_DAT_8c2037cc + 0x24),ar5
                         ,8);
    }
    puVar3 = PTR_FUN_8c2037d4;
    if (iVar5 == 0) {
      *(uint *)puVar1 = ar4;
      *(undefined4 *)puVar2 = *(undefined4 *)(ar5 + 0x1c);
      *(uint *)(ar5 + 0x14) = ar4;
      uVar6 = (*(code *)puVar3)(*(undefined4 *)(ar5 + 0x1c));
      *(undefined4 *)(ar5 + 0x1c) = uVar6;
    }
  }
  return iVar5;
}



/* FUN_8c2036ac @ 8c2036ac callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2036ac(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint in_r0;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int a5;
  int iVar7;
  int unaff_r13;
  char in_T;
  
  puVar3 = PTR_FUN_8c2037d4;
  puVar2 = PTR_DAT_8c2037c4;
  puVar1 = PTR_DAT_8c2037c0;
  if (in_T == '\0') {
    uVar4 = ~(~in_r0 + 1 & 0x1f) + 1;
  }
  else {
    uVar4 = in_r0 & 0x1f;
  }
  if (uVar4 != 0) {
    unaff_r13 = unaff_r13 + (0x20 - uVar4);
  }
  if (*(int *)PTR_DAT_8c2037c0 == unaff_r13) {
    *(int *)(ar5 + 0x14) = unaff_r13;
    uVar6 = (*(code *)puVar3)(*(int *)puVar2 + 4,ar5,ar6,ar7);
    *(undefined4 *)(ar5 + 0x1c) = uVar6;
    iVar5 = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)puVar2 = 0;
  }
  else {
    a5 = unaff_r13 << 1;
    iVar7 = ar5;
    if ((*DAT_8c2037c8 & 4) == 0) {
      uVar6 = 8;
      iVar5 = (*(code *)PTR_FUN_8c2037d0)(0,a5,ar5,8);
    }
    else {
      uVar6 = 8;
      iVar5 = (*(code *)PTR_FUN_8c2037d0)
                        ((uint)(*(uint *)(PTR_DAT_8c2037cc + 0x10) <
                               *(uint *)(PTR_DAT_8c2037cc + 0x24)),a5,ar5,8);
    }
    puVar3 = PTR_FUN_8c2037d4;
    if (iVar5 == 0) {
      *(int *)puVar1 = unaff_r13;
      *(undefined4 *)puVar2 = *(undefined4 *)(ar5 + 0x1c);
      *(int *)(ar5 + 0x14) = unaff_r13;
      uVar6 = (*(code *)puVar3)(*(undefined4 *)(ar5 + 0x1c),a5,iVar7,uVar6);
      *(undefined4 *)(ar5 + 0x1c) = uVar6;
    }
  }
  return iVar5;
}



/* FUN_8c20374e @ 8c20374e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20374e(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int a5;
  int iVar6;
  int a4;
  
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  a5 = ar4 << 1;
  iVar6 = ar5;
  if ((*DAT_8c2037c8 & 4) == 0) {
    uVar5 = 8;
    iVar3 = (*(code *)PTR_FUN_8c2038a4)(0,a5,ar5,8);
  }
  else {
    uVar5 = 8;
    iVar3 = (*(code *)PTR_FUN_8c2037d0)
                      ((uint)(*(uint *)(PTR_DAT_8c2037cc + 0x10) <=
                             *(uint *)(PTR_DAT_8c2037cc + 0x24)),a5,ar5,8);
  }
  puVar1 = PTR_FUN_8c2038a8;
  if (iVar3 == 0) {
    a4 = *(int *)(ar5 + 0x1c);
    *(uint *)(ar5 + 0x14) = ar4;
    uVar4 = (*(code *)puVar1)(a4,a5,iVar6,uVar5);
    puVar1 = PTR_FUN_8c2038a8;
    *(undefined4 *)(ar5 + 0x1c) = uVar4;
    *(uint *)(ar6 + 0x14) = ar4;
    uVar5 = (*(code *)puVar1)(a4 + 4,a5,iVar6,uVar5);
    *(undefined4 *)(ar6 + 0x1c) = uVar5;
  }
  return iVar3;
}



/* FUN_8c203820 @ 8c203820 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c203820(uint ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int a5;
  int *a6;
  int a7;
  int a4;
  
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  a7 = (int)DAT_8c2038a0;
  a5 = ar4 << 1;
  a6 = ar5;
  iVar3 = (*(code *)PTR_FUN_8c2038a4)(0,a5,ar5,a7);
  if (iVar3 == 0) {
    a4 = *ar5;
    iVar4 = (*(code *)PTR_FUN_8c2038a8)(a4,a5,a6,a7);
    puVar1 = PTR_FUN_8c2038a8;
    *ar5 = iVar4;
    uVar5 = (*(code *)puVar1)(a4 + 4,a5,a6,a7);
    *ar6 = uVar5;
  }
  return iVar3;
}



/* FUN_8c2038c0 @ 8c2038c0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2038c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_14;
  int aiStack_10 [2];
  
  if ((*DAT_8c2039c0 & 4) == 0) {
    uVar1 = (*(code *)PTR_FUN_8c2039c4)(1,ar4,ar5,ar7);
  }
  else {
    FUN_8c204006(&iStack_14,aiStack_10,ar6,ar7);
    uVar1 = (*(code *)PTR_FUN_8c2039c4)((uint)(iStack_14 < aiStack_10[0]),ar4,ar5,ar7);
  }
  return uVar1;
}



/* FUN_8c203914 @ 8c203914 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

int FUN_8c203914(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c2041e2(ar4,ar5,ar6,ar7);
  if (iVar1 == -1) {
    iVar2 = 3;
  }
  else {
    iVar2 = FUN_8c2043d4(0,iVar1,ar4,ar5);
    if (iVar2 == 0) {
      iVar1 = *(int *)PTR_DAT_8c2039c8 + iVar1;
      iVar2 = FUN_8c2043d4(1,iVar1,ar4,ar6);
      if (iVar2 != 0) {
        FUN_8c203bda(*(undefined4 *)(ar5 + 0x1c),iVar1,ar4,ar6);
      }
    }
  }
  return iVar2;
}



/* FUN_8c203980 @ 8c203980 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203980(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2043d4((uint)(*(int *)PTR_DAT_8c2039cc <= *(int *)(ar5 + 0x1c)),*(int *)(ar5 + 0x1c)
                       ,ar4,ar5);
  return uVar1;
}



/* FUN_8c2039e0 @ 8c2039e0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c2039e0(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_3c [44];
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  iVar4 = ar5;
  puVar2 = (ushort *)(*(code *)PTR_FUN_8c203b60)(0,ar4,ar5,ar7);
  if (puVar2 == (ushort *)0x0) {
    iVar4 = ar5;
    puVar2 = (ushort *)(*(code *)PTR_FUN_8c203b60)(1,ar4,ar5,ar7);
  }
  if (puVar2 == (ushort *)0x0) {
    iVar4 = FUN_8c2041e2(ar4,ar5,iVar4,ar7);
    if (iVar4 == -1) {
      iVar3 = 3;
    }
    else {
      iVar3 = FUN_8c2043d4(0,iVar4,ar4,ar5);
      if (iVar3 == 0) {
        iVar3 = FUN_8c2043d4(1,*(int *)PTR_DAT_8c203b64 + iVar4,ar4,auStack_3c);
      }
    }
  }
  else {
    *(undefined4 *)(ar5 + 0x1c) = *(undefined4 *)(puVar2 + 6);
    *(int *)(puVar2 + 10) = ar5;
    *puVar2 = *puVar2 | 4;
    iVar3 = 0;
  }
  return iVar3;
}



/* FUN_8c203a92 @ 8c203a92 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203a92(uint ar4,undefined4 ar5,uint ar6,uint ar7)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint a5;
  uint uVar6;
  uint unaff_r12;
  ushort *a5_00;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  
  a5 = ar4;
  (*(code *)PTR_FUN_8c203b68)(&uStack_28,ar4,ar6,ar7);
  puVar4 = *(ushort **)PTR_DAT_8c203b6c;
  a5_00 = (ushort *)0x0;
  while (puVar4 != (ushort *)0x0) {
    if (((*puVar4 & DAT_8c203b70) == uStack_28) &&
       (a5 = 0, puVar5 = puVar4, ar6 = uStack_18, uStack_18 != 0)) {
      do {
        puVar4 = puVar5;
        uVar6 = a5;
        if (*(int *)(puVar5 + a5 * 2 + 6) == 0) {
          puVar4 = (ushort *)0x0;
          uVar6 = uStack_18;
          unaff_r12 = a5;
          a5_00 = puVar5;
        }
        a5 = uVar6 + 1;
        puVar5 = puVar4;
      } while (a5 < uStack_18);
    }
    ar7 = DAT_8c203b70;
    if (a5_00 == (ushort *)0x0) {
      puVar4 = *(ushort **)(puVar4 + 2);
    }
  }
  if (a5_00 == (ushort *)0x0) {
    a5_00 = (ushort *)(*(code *)PTR_FUN_8c203b74)(0,a5,ar6,ar7);
    if (a5_00 != (ushort *)0x0) {
      puVar4 = a5_00 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < a5_00 + 0x26);
      unaff_r12 = 0;
      (*(code *)PTR_FUN_8c203b78)(PTR_DAT_8c203b6c,a5_00,ar6,ar7);
      puVar1 = DAT_8c203b7c;
      *a5_00 = *a5_00 | (ushort)uStack_28;
      puVar4 = a5_00;
      if ((*puVar1 & 4) == 0) {
        iVar2 = (*(code *)PTR_FUN_8c203c80)(1,uStack_1c,a5_00,ar7);
      }
      else {
        FUN_8c204006(&iStack_30,&iStack_2c,ar6,ar7);
        iVar2 = (*(code *)PTR_FUN_8c203c80)((uint)(iStack_30 < iStack_2c),uStack_1c,a5_00,ar7);
      }
      if (iVar2 == 0) goto LAB_8c203baa;
      (*(code *)PTR_FUN_8c203c84)(a5_00,uStack_1c,puVar4,ar7);
    }
    uVar3 = 3;
  }
  else {
LAB_8c203baa:
    *(uint *)(ar4 + 0x1c) = unaff_r12 * (uStack_24 >> 2) * 4 + *(int *)(a5_00 + 4);
    *(uint *)(a5_00 + unaff_r12 * 2 + 6) = ar4;
    *a5_00 = *a5_00 | 2;
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c203bda @ 8c203bda callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203bda(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *a5;
  undefined4 uVar1;
  ushort *a5_00;
  int iVar2;
  short asStack_14 [2];
  short asStack_10 [4];
  
  a5 = (ushort *)(*(code *)PTR_FUN_8c203c88)(ar4,asStack_14,ar6,ar7);
  if (a5 == (ushort *)0x0) {
    uVar1 = 7;
  }
  else if ((*a5 & 2) == 0) {
    uVar1 = (*(code *)PTR_FUN_8c203c90)((int)asStack_14[0],a5,ar6,ar7);
  }
  else {
    iVar2 = *(int *)PTR_DAT_8c203c8c;
    if (asStack_14[0] != 0) {
      iVar2 = -iVar2;
    }
    a5_00 = (ushort *)(*(code *)PTR_FUN_8c203c88)(iVar2 + ar4,asStack_10,ar6,ar7);
    if (a5_00 == (ushort *)0x0) {
      (*(code *)PTR_FUN_8c203c90)((int)asStack_14[0],a5,ar6,ar7);
      uVar1 = 0;
    }
    else if ((*a5_00 & 4) == 0) {
      (*(code *)PTR_FUN_8c203c90)((int)asStack_14[0],a5,ar6,ar7);
      uVar1 = (*(code *)PTR_FUN_8c203c90)((int)asStack_10[0],a5_00,ar6,ar7);
    }
    else {
      *a5 = *a5 & (ushort)DAT_8c203c94;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* FUN_8c203ca0 @ 8c203ca0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203ca0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  
  a5 = ar5;
  uVar1 = (*(code *)PTR_FUN_8c203dc0)(ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c203bda(uVar1,a5,ar6,ar7);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (*(code *)PTR_FUN_8c203dc0)(ar5,a5,ar6,ar7);
    uVar1 = FUN_8c203bda(uVar1,a5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c203cd0 @ 8c203cd0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203cd0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r11;
  ushort *a5;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_1c;
  
  (*(code *)PTR_FUN_8c203dc4)(&uStack_2c,ar4,ar6,ar7);
  uVar7 = 0;
  a5 = (ushort *)0x0;
  puVar3 = *(ushort **)PTR_DAT_8c203dc8;
  while (puVar3 != (ushort *)0x0) {
    if (((*puVar3 & DAT_8c203dcc) == uStack_2c) && (uVar5 = 0, puVar4 = puVar3, uStack_1c != 0)) {
      do {
        puVar3 = puVar4;
        uVar6 = uVar5;
        if ((*(int *)(puVar4 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * (uStack_28 >> 2) * 4 + *(int *)(puVar4 + 4) == *(int *)(ar4 + 0x1c))) {
          puVar3 = (ushort *)0x0;
          uVar6 = uStack_1c;
          unaff_r11 = uVar5;
          a5 = puVar4;
        }
        uVar5 = uVar6 + 1;
        puVar4 = puVar3;
      } while (uVar5 < uStack_1c);
    }
    if (a5 == (ushort *)0x0) {
      puVar3 = *(ushort **)(puVar3 + 2);
    }
  }
  if (a5 == (ushort *)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (a5 + unaff_r11 * 2 + 6)[0] = 0;
    (a5 + unaff_r11 * 2 + 6)[1] = 0;
    if (uStack_1c != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(int *)(a5 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < uStack_1c);
    }
    if (!bVar1) {
      iVar2 = FUN_8c203bda(*(undefined4 *)(a5 + 4),1,0,uStack_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar3 = a5;
      (*(code *)PTR_FUN_8c203dd0)(PTR_DAT_8c203dc8,a5,uVar7,uStack_1c);
      (*(code *)PTR_FUN_8c203dd4)(a5,puVar3,uVar7,uStack_1c);
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* FUN_8c203de0 @ 8c203de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203de0(int *ar4,int *ar5,int *ar6,int *ar7)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = 0;
  iStack_28 = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_2c = 0;
  for (iVar3 = *(int *)(PTR_DAT_8c203ee8 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    if (iStack_34 < *(int *)(iVar3 + 0x10)) {
      iStack_34 = *(int *)(iVar3 + 0x10);
    }
    iStack_24 = iStack_24 + *(int *)(iVar3 + 0x10);
  }
  for (puVar4 = *(ushort **)PTR_DAT_8c203ee8; puVar4 != (ushort *)0x0;
      puVar4 = *(ushort **)(puVar4 + 4)) {
    if ((*puVar4 & 4) == 0) {
      if (iStack_34 < *(int *)(puVar4 + 8)) {
        iStack_34 = *(int *)(puVar4 + 8);
      }
      iStack_28 = iStack_28 + *(int *)(puVar4 + 8);
    }
  }
  for (iVar3 = *(int *)(PTR_DAT_8c203ee8 + 0x1c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    if (iStack_30 < *(int *)(iVar3 + 0x10)) {
      iStack_30 = *(int *)(iVar3 + 0x10);
    }
    iStack_20 = iStack_20 + *(int *)(iVar3 + 0x10);
  }
  for (puVar4 = *(ushort **)(PTR_DAT_8c203ee8 + 0x14); puVar4 != (ushort *)0x0;
      puVar4 = *(ushort **)(puVar4 + 4)) {
    if ((*puVar4 & 4) == 0) {
      if (iStack_30 < *(int *)(puVar4 + 8)) {
        iStack_30 = *(int *)(puVar4 + 8);
      }
      iStack_1c = iStack_1c + *(int *)(puVar4 + 8);
    }
  }
  puVar4 = *(ushort **)PTR_DAT_8c203eec;
  do {
    if (puVar4 == (ushort *)0x0) {
      *ar4 = iStack_24 + iStack_28;
      *ar5 = iStack_20 + iStack_1c;
      *ar6 = iStack_2c;
      if (iStack_34 < iStack_30) {
        iStack_34 = iStack_30;
      }
      *ar7 = iStack_34;
      return 0;
    }
    uVar1 = *puVar4 & DAT_8c203ef0;
    if (uVar1 == (int)DAT_8c203ee0) {
      iVar3 = (int)DAT_8c203f46;
LAB_8c203f32:
      iVar5 = 0x10;
    }
    else {
      if (uVar1 == (int)DAT_8c203ee2) {
        iVar3 = (int)DAT_8c203f48;
        goto LAB_8c203f32;
      }
      if (uVar1 == (int)DAT_8c203ee4) {
        iVar3 = (int)DAT_8c203f4a;
        goto LAB_8c203f32;
      }
      if (uVar1 == (int)DAT_8c203ee6) {
        iVar3 = (int)DAT_8c203f4c;
        goto LAB_8c203f32;
      }
      if (uVar1 == (int)DAT_8c203f40) {
        iVar3 = (int)DAT_8c203f80;
        iVar5 = 8;
      }
      else if (uVar1 == (int)DAT_8c203f42) {
        iVar3 = (int)DAT_8c203f82;
        iVar5 = 4;
      }
      else if (uVar1 == (int)DAT_8c203f44) {
        iVar3 = (int)DAT_8c203f84;
        iVar5 = 2;
      }
      else if (uVar1 == DAT_8c203f50) {
        iVar3 = (int)DAT_8c203f86;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar3 = 0;
      }
    }
    iStack_38 = 0;
    puVar2 = puVar4 + 6;
    if (iVar5 != 0) {
      do {
        if (*(int *)puVar2 == 0) {
          iStack_2c = iStack_2c + iVar3;
        }
        iStack_38 = iStack_38 + 1;
        puVar2 = puVar2 + 2;
      } while (iStack_38 < iVar5);
    }
    puVar4 = *(ushort **)(puVar4 + 2);
  } while( true );
}



/* FUN_8c204006 @ 8c204006 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204006(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  for (iVar1 = *(int *)(PTR_DAT_8c204120 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (iVar3 < *(int *)(iVar1 + 0x10)) {
      iVar3 = *(int *)(iVar1 + 0x10);
    }
  }
  for (puVar2 = *(ushort **)PTR_DAT_8c204120; puVar2 != (ushort *)0x0;
      puVar2 = *(ushort **)(puVar2 + 4)) {
    if (((*puVar2 & 4) == 0) && (iVar3 < *(int *)(puVar2 + 8))) {
      iVar3 = *(int *)(puVar2 + 8);
    }
  }
  for (iVar1 = *(int *)(PTR_DAT_8c204120 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (iVar4 < *(int *)(iVar1 + 0x10)) {
      iVar4 = *(int *)(iVar1 + 0x10);
    }
  }
  for (puVar2 = *(ushort **)(PTR_DAT_8c204120 + 0x14); puVar2 != (ushort *)0x0;
      puVar2 = *(ushort **)(puVar2 + 4)) {
    if (((*puVar2 & 4) == 0) && (iVar4 < *(int *)(puVar2 + 8))) {
      iVar4 = *(int *)(puVar2 + 8);
    }
  }
  *ar4 = iVar3;
  *ar5 = iVar4;
  return 0;
}



/* FUN_8c20408e @ 8c20408e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20408e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_8c204120;
  (*(code *)PTR_FUN_8c204124)(PTR_DAT_8c204120,PTR_DAT_8c204120 + 4);
  puVar2 = PTR_DAT_8c204128;
  (*(code *)PTR_FUN_8c204124)(PTR_DAT_8c204128,PTR_DAT_8c204128 + 4);
  (*(code *)PTR_FUN_8c204124)(puVar1 + 8,puVar1 + 0xc);
  (*(code *)PTR_FUN_8c204124)(puVar2 + 8,puVar2 + 0xc);
  return 0;
}



/* FUN_8c204092 @ 8c204092 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204092(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int unaff_r14;
  
  (*(code *)PTR_FUN_8c204124)(unaff_r14,unaff_r14 + 4,ar6,ar7);
  puVar1 = PTR_DAT_8c204128;
  (*(code *)PTR_FUN_8c204124)(PTR_DAT_8c204128,PTR_DAT_8c204128 + 4,ar6,ar7);
  (*(code *)PTR_FUN_8c204124)(unaff_r14 + 8,unaff_r14 + 0xc,ar6,ar7);
  (*(code *)PTR_FUN_8c204124)(puVar1 + 8,puVar1 + 0xc,ar6,ar7);
  return 0;
}



/* FUN_8c2040ce @ 8c2040ce callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2040ce(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_8c20412c)
                    (PTR_DAT_8c204120 + 8,PTR_DAT_8c204120 + 0xc,PTR_DAT_8c204120,
                     PTR_DAT_8c204120 + 4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c20412c)
                      (PTR_DAT_8c204128 + 8,PTR_DAT_8c204128 + 0xc,PTR_DAT_8c204128,
                       PTR_DAT_8c204128 + 4);
  }
  return iVar1;
}



/* FUN_8c2040d2 @ 8c2040d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2040d2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = (*(code *)PTR_FUN_8c20412c)(unaff_r14 + 8,unaff_r14 + 0xc,unaff_r14,unaff_r14 + 4);
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_FUN_8c20412c)
                      (PTR_DAT_8c204128 + 8,PTR_DAT_8c204128 + 0xc,PTR_DAT_8c204128,
                       PTR_DAT_8c204128 + 4);
  }
  return iVar1;
}



/* FUN_8c204140 @ 8c204140 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c204140(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x10);
  uVar1 = (int)DAT_8c2041a0 + *(int *)(ar4 + 0xc) & (int)DAT_8c2041a2;
  if ((uint)(int)DAT_8c2041a4 < ar5) {
    iVar3 = (int)DAT_8c2041a6;
    if (uVar1 - *(int *)(ar4 + 0xc) < (uint)(int)DAT_8c2041a4) {
      uVar1 = uVar1 + (int)DAT_8c204220;
      if (uVar2 < (uVar1 - *(int *)(ar4 + 0xc)) + ar5 + iVar3) {
        return 0xffffffff;
      }
    }
    else if (uVar2 < (uVar1 - *(int *)(ar4 + 0xc)) + ar5 + iVar3) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + iVar3;
  }
  else if ((uVar1 < uVar2) && (uVar1 - *(int *)(ar4 + 0xc) < ar5)) {
    if (uVar2 - uVar1 < ar5) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(uint *)(ar4 + 0xc);
  }
  return uVar1;
}



/* FUN_8c2041e2 @ 8c2041e2 callers=2 callees=2 */

/* WARNING: Unknown calling convention */

int FUN_8c2041e2(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int a4;
  int iVar6;
  int iStack_24;
  
  puVar1 = PTR_DAT_8c204308;
  iStack_24 = 0;
  iVar5 = 0;
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  a4 = *(int *)(PTR_DAT_8c204304 + 8);
  do {
    if (a4 == 0) {
      if ((iStack_24 != 2) || (iVar5 == 0)) {
        iVar5 = -1;
      }
      return iVar5;
    }
    if ((int)ar4 <= *(int *)(a4 + 0x10)) {
      uVar2 = *(uint *)(ar5 + 0x18);
      iVar6 = (*(int *)(a4 + 0xc) + *(int *)(a4 + 0x10)) - ar4;
      if ((((uVar2 & 1) == 0) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0)) {
        iStack_24 = 1;
        for (iVar3 = *(int *)(a4 + 0xc); iVar3 <= iVar6; iVar3 = iVar3 + 0x20) {
          iVar4 = FUN_8c20436c(1,*(int *)puVar1 + iVar3,ar4,ar7);
          if (iVar4 == 0) {
            return iVar3;
          }
        }
      }
      else {
        iVar3 = FUN_8c204140(a4,ar4,ar5,ar7);
        if (-1 < iVar3) {
          for (; iVar3 <= iVar6; iVar3 = iVar3 + DAT_8c204300) {
            iVar4 = FUN_8c20436c(1,*(int *)puVar1 + iVar3,ar4,ar7);
            if (iVar4 == 0) {
              return iVar3;
            }
          }
        }
        iStack_24 = 2;
        if (iVar5 == 0) {
          for (iVar3 = *(int *)(a4 + 0xc); iVar3 <= iVar6; iVar3 = iVar3 + 0x20) {
            iVar4 = FUN_8c20436c(1,*(int *)puVar1 + iVar3,ar4,ar7);
            if (iVar4 == 0) {
              iVar5 = iVar3;
              iVar3 = iVar6;
            }
          }
        }
      }
    }
    a4 = *(int *)(a4 + 8);
  } while( true );
}



/* FUN_8c20436c @ 8c20436c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20436c(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(PTR_DAT_8c204400 + (short)ar4 * 0x14);
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0xc);
    if ((((ar5 < iVar3) || (*(int *)(iVar1 + 0x10) + iVar3 <= ar5)) || (ar5 + ar6 < iVar3)) ||
       (*(int *)(iVar1 + 0x10) + iVar3 < ar5 + ar6)) {
      iVar3 = *(int *)(iVar1 + 8);
    }
    else {
      iVar3 = 0;
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 3;
}



/* FUN_8c2043d4 @ 8c2043d4 callers=3 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2043d4(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  ushort *a6;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *a6_00;
  int a5;
  int iVar5;
  int iVar6;
  undefined4 a7;
  undefined *puVar7;
  int in_stack_00000000;
  int in_stack_00000004;
  
  puVar1 = PTR_DAT_8c2044c0;
  iVar6 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar2 != 0) {
    ar6 = ar6 + (0x20 - uVar2);
  }
  iVar3 = (short)ar4 * 0x14;
  a6 = (ushort *)0x0;
  puVar4 = *(ushort **)(PTR_DAT_8c2044c0 + iVar3 + 8);
  iVar5 = ar5;
  while (puVar4 != (ushort *)0x0) {
    iVar5 = *(int *)(puVar4 + 6);
    if ((((ar5 < iVar5) || (*(int *)(puVar4 + 8) + iVar5 <= ar5)) || (iVar6 < iVar5)) ||
       (*(int *)(puVar4 + 8) + iVar5 < iVar6)) {
      puVar4 = *(ushort **)(puVar4 + 4);
    }
    else {
      a6 = puVar4;
      puVar4 = (ushort *)0x0;
    }
  }
  if (a6 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(a6 + 8) == ar6) {
    puVar7 = PTR_DAT_8c2044c0 + iVar3;
    FUN_8c204ed2(puVar7 + 8,puVar7 + 0xc,a6,0);
    FUN_8c204e92(puVar7,puVar7 + 4,a6,a7);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(a6 + 6);
    *(int *)(a6 + 10) = ar7;
    *a6 = 1;
    if ((short)ar4 == 0) {
      *a6 = *a6 | 0x80;
    }
    else {
      *a6 = *a6 | DAT_8c204580;
    }
    if (in_stack_00000000 != 0) {
      *a6 = *a6 | 2;
    }
    if (in_stack_00000004 != 0) {
      *a6 = *a6 | 4;
    }
    iVar6 = *(int *)(a6 + 8);
  }
  else {
    if (*(int *)(a6 + 6) != ar5) {
      if (*(int *)(a6 + 6) + *(int *)(a6 + 8) == iVar6) {
        a6_00 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
        if (a6_00 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar6;
        *(int *)(a6_00 + 6) = ar5;
        *(uint *)(a6_00 + 8) = ar6;
        FUN_8c204e92(puVar1 + iVar3,puVar1 + iVar3 + 4,a6_00,a7);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(a6_00 + 6);
        *(int *)(a6_00 + 10) = ar7;
        if ((short)ar4 == 0) {
          *a6_00 = *a6_00 | 0x80;
        }
        else {
          *a6_00 = *a6_00 | DAT_8c204620;
        }
        if (in_stack_00000000 != 0) {
          *a6_00 = *a6_00 | 2;
        }
        if (in_stack_00000004 != 0) {
          *a6_00 = *a6_00 | 4;
        }
      }
      else {
        a6_00 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
        if (a6_00 == (ushort *)0x0) {
          return 3;
        }
        a5 = FUN_8c204e40(puVar4,iVar5,iVar6,a7);
        if (a5 == 0) {
          FUN_8c204e6c(a6_00,iVar5,iVar6,a7);
          return 3;
        }
        iVar6 = *(int *)(a6 + 8);
        iVar5 = *(int *)(a6 + 6);
        *(int *)(a6 + 8) = ar5 - iVar5;
        puVar7 = puVar1 + iVar3;
        *(int *)(a6_00 + 6) = ar5;
        *(uint *)(a6_00 + 8) = ar6;
        FUN_8c204e92(puVar7,puVar7 + 4,a6_00,a7);
        *(uint *)(a5 + 0xc) = ar5 + ar6;
        *(uint *)(a5 + 0x10) = (iVar6 - ar6) - (ar5 - iVar5);
        FUN_8c204eb6(puVar7 + 0xc,a5,*(undefined4 *)(puVar7 + 0xc),a7);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(a6_00 + 6);
        *(int *)(a6_00 + 10) = ar7;
        if ((short)ar4 == 0) {
          *a6_00 = *a6_00 | 0x80;
        }
        else {
          *a6_00 = *a6_00 | DAT_8c204700;
        }
        if (in_stack_00000000 != 0) {
          *a6_00 = *a6_00 | 2;
        }
        if (in_stack_00000004 != 0) {
          *a6_00 = *a6_00 | 4;
        }
      }
      *(int *)(puVar1 + iVar3 + 0x10) = *(int *)(puVar1 + iVar3 + 0x10) - *(int *)(a6_00 + 8);
      return 0;
    }
    puVar4 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
    if (puVar4 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(a6 + 6);
    *(uint *)(puVar4 + 8) = ar6;
    *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar6;
    *(uint *)(a6 + 6) = *(int *)(a6 + 6) + ar6;
    FUN_8c204e92(puVar1 + iVar3,puVar1 + iVar3 + 4,puVar4,a7);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(puVar4 + 6);
    *(int *)(puVar4 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar4 = *puVar4 | 0x80;
    }
    else {
      *puVar4 = *puVar4 | DAT_8c204580;
    }
    if (in_stack_00000000 != 0) {
      *puVar4 = *puVar4 | 2;
    }
    if (in_stack_00000004 != 0) {
      *puVar4 = *puVar4 | 4;
    }
    iVar6 = *(int *)(puVar4 + 8);
  }
  *(int *)(puVar1 + iVar3 + 0x10) = *(int *)(puVar1 + iVar3 + 0x10) - iVar6;
  return 0;
}



/* FUN_8c2046d2 @ 8c2046d2 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2046d2(undefined4 ar4,uint ar5,undefined4 *ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *a6;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  undefined *a4;
  
  puVar2 = PTR_DAT_8c2047c4;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar4 = ar5 & 0x1f;
  }
  if (uVar4 != 0) {
    ar5 = ar5 + (0x20 - uVar4);
  }
  iVar9 = (short)ar4 * 0x14;
  puVar5 = *(ushort **)(PTR_DAT_8c2047c4 + iVar9 + 8);
  a6 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar5 = (ushort *)0x0;
      a6 = puVar1;
    }
  }
  if (a6 == (ushort *)0x0) {
LAB_8c204880:
    uVar6 = 3;
  }
  else {
    uVar8 = (ushort)ar7;
    if (*(uint *)(a6 + 8) == ar5) {
      a4 = PTR_DAT_8c2047c4 + iVar9;
      FUN_8c204ed2(a4 + 8,a4 + 0xc,a6,ar7);
      FUN_8c204e92(a4,a4 + 4,a6,ar7);
      *a6 = 1;
      uVar3 = DAT_8c204860;
      if (uVar8 == 8) {
        ar6[7] = *(undefined4 *)(a6 + 6);
        *(undefined4 **)(a6 + 10) = ar6;
        *a6 = *a6 | 8;
      }
      else {
        if (uVar8 != DAT_8c2047c0) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(a6 + 6);
        *(undefined4 **)(a6 + 10) = ar6;
        *a6 = *a6 | uVar3;
      }
      *a6 = *a6 | 4;
      iVar7 = *(int *)(a6 + 8);
    }
    else {
      puVar5 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar5 == (ushort *)0x0) goto LAB_8c204880;
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(a6 + 6);
      *(uint *)(puVar5 + 8) = ar5;
      *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar5;
      *(uint *)(a6 + 6) = ar5 + *(int *)(a6 + 6);
      FUN_8c204e92(puVar2 + iVar9,puVar2 + iVar9 + 4,puVar5,ar7);
      uVar3 = DAT_8c204860;
      if (uVar8 == 8) {
        ar6[7] = *(undefined4 *)(puVar5 + 6);
        *(undefined4 **)(puVar5 + 10) = ar6;
        *puVar5 = *puVar5 | 8;
      }
      else {
        if (uVar8 != DAT_8c204860) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(puVar5 + 6);
        *(undefined4 **)(puVar5 + 10) = ar6;
        *puVar5 = *puVar5 | uVar3;
      }
      *puVar5 = *puVar5 | 4;
      iVar7 = *(int *)(puVar5 + 8);
    }
    uVar6 = 0;
    *(int *)(puVar2 + iVar9 + 0x10) = *(int *)(puVar2 + iVar9 + 0x10) - iVar7;
  }
  return uVar6;
}



/* FUN_8c2048aa @ 8c2048aa callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2048aa(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *a6;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *a4;
  
  puVar2 = PTR_DAT_8c2049a0;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar4 = ar5 & 0x1f;
  }
  if (uVar4 != 0) {
    ar5 = ar5 + (0x20 - uVar4);
  }
  iVar8 = (short)ar4 * 0x14;
  puVar5 = *(ushort **)(PTR_DAT_8c2049a0 + iVar8 + 8);
  a6 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar5 = (ushort *)0x0;
      a6 = puVar1;
    }
  }
  if (a6 == (ushort *)0x0) {
LAB_8c204964:
    uVar6 = 3;
  }
  else {
    if (*(uint *)(a6 + 8) == ar5) {
      a4 = PTR_DAT_8c2049a0 + iVar8;
      FUN_8c204ed2(a4 + 8,a4 + 0xc,a6,ar7);
      FUN_8c204e92(a4,a4 + 4,a6,ar7);
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(a6 + 6);
      *(int *)(a6 + 10) = ar6;
      *a6 = 1;
      if ((short)ar4 == 0) {
        uVar3 = *a6 | 0x20;
      }
      else {
        uVar3 = *a6 | 0x40;
      }
      *a6 = uVar3;
      *a6 = *a6 | 4;
      iVar7 = *(int *)(a6 + 8);
    }
    else {
      puVar5 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar5 == (ushort *)0x0) goto LAB_8c204964;
      *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(a6 + 6);
      *(uint *)(puVar5 + 8) = ar5;
      *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar5;
      *(uint *)(a6 + 6) = *(int *)(a6 + 6) + ar5;
      FUN_8c204e92(puVar2 + iVar8,puVar2 + iVar8 + 4,puVar5,ar7);
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(puVar5 + 6);
      *(int *)(puVar5 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar3 = *puVar5 | 0x20;
      }
      else {
        uVar3 = *puVar5 | 0x40;
      }
      *puVar5 = uVar3;
      *puVar5 = *puVar5 | 4;
      iVar7 = *(int *)(puVar5 + 8);
    }
    uVar6 = 0;
    *(int *)(puVar2 + iVar8 + 0x10) = *(int *)(puVar2 + iVar8 + 0x10) - iVar7;
  }
  return uVar6;
}



/* FUN_8c2049ec @ 8c2049ec callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2049ec(undefined4 ar4,uint ar5,int ar6,int ar7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *a4;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  uint a6;
  undefined *a4_00;
  ushort *a6_00;
  
  puVar1 = PTR_DAT_8c204aa4;
  iVar7 = 0;
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  puVar8 = (ushort *)0x0;
  a6 = ar5;
  if (uVar2 != 0) {
    a6 = ar5 + (0x20 - uVar2);
  }
  a6_00 = (ushort *)0x0;
  iVar3 = (short)ar4 * 0x14;
  if (*(ushort **)(PTR_DAT_8c204aa4 + iVar3 + 8) != (ushort *)0x0) {
    ar7 = (int)DAT_8c204aa0;
    a4 = *(ushort **)(PTR_DAT_8c204aa4 + iVar3 + 8);
    do {
      if (*(int *)(a4 + 8) < (int)a6) {
        puVar6 = *(ushort **)(a4 + 4);
      }
      else {
        if (puVar8 == (ushort *)0x0) {
          puVar8 = a4;
        }
        iVar4 = (*(code *)PTR_libgcc_divide_helper_010614_8c204aa8)(a4,ar5,iVar7,ar7);
        if (iVar4 == 0) {
          ar5 = *(uint *)(a4 + 6);
LAB_8c204a94:
          iVar7 = 1;
        }
        else {
          ar5 = *(int *)(a4 + 6) + ar7 & (int)DAT_8c204aa2;
          iVar4 = *(int *)(a4 + 6) + *(int *)(a4 + 8);
          if ((iVar4 <= (int)ar5) || ((int)a6 <= (int)(ar5 - *(int *)(a4 + 6)))) goto LAB_8c204a94;
          if ((int)(iVar4 - ar5) < (int)a6) {
            puVar6 = *(ushort **)(a4 + 4);
            goto LAB_8c204ac2;
          }
          iVar7 = 2;
        }
        puVar6 = (ushort *)0x0;
        a6_00 = a4;
      }
LAB_8c204ac2:
      a4 = puVar6;
    } while (puVar6 != (ushort *)0x0);
  }
  if ((iVar7 == 0) && (puVar8 != (ushort *)0x0)) {
    iVar7 = 1;
    a6_00 = puVar8;
  }
  if (a6_00 == (ushort *)0x0) {
LAB_8c204b6a:
    uVar5 = 3;
  }
  else {
    if (iVar7 == 2) {
      uVar5 = FUN_8c2052f2((int)(short)ar4,ar5,a6,ar6);
      return uVar5;
    }
    if (*(uint *)(a6_00 + 8) == a6) {
      a4_00 = puVar1 + iVar3;
      FUN_8c204ed2(a4_00 + 8,a4_00 + 0xc,a6_00,ar7);
      FUN_8c204e92(a4_00,a4_00 + 4,a6_00,ar7);
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(a6_00 + 6);
      *(int *)(a6_00 + 10) = ar6;
      *a6_00 = 1;
      if ((short)ar4 == 0) {
        *a6_00 = *a6_00 | DAT_8c204b40;
      }
      else {
        *a6_00 = *a6_00 | DAT_8c204b42;
      }
      *a6_00 = *a6_00 | 4;
      iVar7 = *(int *)(a6_00 + 8);
    }
    else {
      puVar8 = (ushort *)FUN_8c204e40(0,ar5,iVar7,ar7);
      if (puVar8 == (ushort *)0x0) goto LAB_8c204b6a;
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(a6_00 + 6);
      *(uint *)(puVar8 + 8) = a6;
      *(uint *)(a6_00 + 8) = *(int *)(a6_00 + 8) - a6;
      *(uint *)(a6_00 + 6) = *(int *)(a6_00 + 6) + a6;
      FUN_8c204e92(puVar1 + iVar3,puVar1 + iVar3 + 4,puVar8,ar7);
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(puVar8 + 6);
      *(int *)(puVar8 + 10) = ar6;
      if ((short)ar4 == 0) {
        *puVar8 = *puVar8 | DAT_8c204be0;
      }
      else {
        *puVar8 = *puVar8 | DAT_8c204be2;
      }
      *puVar8 = *puVar8 | 4;
      iVar7 = *(int *)(puVar8 + 8);
    }
    uVar5 = 0;
    *(int *)(puVar1 + iVar3 + 0x10) = *(int *)(puVar1 + iVar3 + 0x10) - iVar7;
  }
  return uVar5;
}



/* FUN_8c204c00 @ 8c204c00 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c204c00(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  puVar2 = PTR_DAT_8c204cac;
  iVar5 = *(int *)PTR_DAT_8c204ca4;
  puVar4 = (ushort *)0x0;
  iStack_24 = ar5;
  iStack_20 = ar6;
  for (puVar6 = *(ushort **)(PTR_DAT_8c204ca8 + (short)ar4 * 0x14); puVar6 != (ushort *)0x0;
      puVar6 = *(ushort **)(puVar6 + 4)) {
    uVar1 = *puVar6;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((DAT_8c204ca0 & uVar1) != 0)) &&
       ((iStack_24 <= *(int *)(puVar6 + 8) && (*(int *)(puVar6 + 8) < iVar5)))) {
      if ((short)ar4 == 0) {
        iVar3 = *(int *)(puVar6 + 6) + *(int *)puVar2;
      }
      else {
        iVar3 = *(int *)(puVar6 + 6) - *(int *)puVar2;
      }
      iVar3 = FUN_8c204cc0(iVar3,auStack_28,ar6,ar7);
      if ((iVar3 != 0) && (*(int *)(*(int *)(iVar3 + 0x14) + 0x18) == *(int *)(iStack_20 + 0x18))) {
        iVar5 = *(int *)(puVar6 + 8);
        puVar4 = puVar6;
      }
    }
  }
  return puVar4;
}



/* FUN_8c204cc0 @ 8c204cc0 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c204cc0(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (ar4 < *DAT_8c204e00) {
    *ar5 = 0;
  }
  else {
    *ar5 = 1;
  }
  iVar3 = *(int *)(PTR_DAT_8c204e04 + *ar5 * 0x14);
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) == ar4) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
  }
  return iVar2;
}



/* FUN_8c204cfc @ 8c204cfc callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204cfc(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined *a5;
  ushort *a6;
  undefined *puVar4;
  ushort *puVar5;
  
  puVar2 = PTR_DAT_8c204e04;
  *ar5 = *ar5 & (ushort)DAT_8c204e08;
  puVar4 = puVar2 + (short)ar4 * 0x14;
  a5 = puVar4 + 4;
  a6 = ar5;
  FUN_8c204ed2(puVar4,a5,ar5,ar7);
  *(int *)(puVar4 + 0x10) = *(int *)(puVar4 + 0x10) + *(int *)(ar5 + 8);
  puVar5 = *(ushort **)(puVar4 + 8);
  puVar3 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    a6 = *(ushort **)(ar5 + 6);
    a5 = *(undefined **)(puVar1 + 6);
    if ((a5 == (undefined *)(*(int *)(ar5 + 8) + (int)a6)) ||
       (a6 == (ushort *)(a5 + *(int *)(puVar1 + 8)))) {
      puVar5 = (ushort *)0x0;
      puVar3 = puVar1;
    }
    else {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
  }
  puVar4 = puVar2 + (short)ar4 * 0x14;
  puVar5 = ar5;
  if (puVar3 != (ushort *)0x0) {
    do {
      ar5 = puVar3;
      if (*(int *)(ar5 + 6) == *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8)) {
        *(undefined4 *)(ar5 + 6) = *(undefined4 *)(puVar5 + 6);
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      else {
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      FUN_8c204e6c(puVar5,a5,a6,ar7);
      a5 = puVar4 + 0xc;
      a6 = ar5;
      FUN_8c204ed2(puVar4 + 8,a5,ar5,ar7);
      puVar5 = *(ushort **)(puVar4 + 8);
      puVar3 = (ushort *)0x0;
      while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
        a5 = *(undefined **)(ar5 + 6);
        a6 = *(ushort **)(puVar1 + 6);
        if ((a6 == (ushort *)(a5 + *(int *)(ar5 + 8))) ||
           (a5 == (undefined *)(*(int *)(puVar1 + 8) + (int)a6))) {
          puVar5 = (ushort *)0x0;
          puVar3 = puVar1;
        }
        else {
          puVar5 = *(ushort **)(puVar1 + 4);
        }
      }
      puVar5 = ar5;
    } while (puVar3 != (ushort *)0x0);
    puVar4 = puVar2 + (short)ar4 * 0x14;
  }
  FUN_8c204e92(puVar4 + 8,puVar4 + 0xc,ar5,ar7);
  return 0;
}



/* FUN_8c204e40 @ 8c204e40 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c204e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = DAT_8c204f00;
  puVar2 = DAT_8c204f00;
  while( true ) {
    if ((ushort *)(DAT_8c204f04 + (int)DAT_8c204f00) <= puVar1) {
      return (ushort *)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 0xc;
  }
  *puVar2 = 1;
  return puVar2;
}



/* FUN_8c204e6c @ 8c204e6c callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204e6c(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r0;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar1 = DAT_8c204f08;
  puVar2 = (ushort *)((int)DAT_8c204f00 + DAT_8c204f04);
  puVar3 = DAT_8c204f00;
  puVar4 = DAT_8c204f00;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (puVar3 < puVar2);
  return in_r0;
}



/* FUN_8c204e92 @ 8c204e92 callers=7 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204e92(int *ar4,int *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (*ar4 == 0) {
    *(undefined4 *)(ar6 + 4) = 0;
    *(undefined4 *)(ar6 + 8) = 0;
    *ar4 = ar6;
    *ar5 = ar6;
  }
  else {
    iVar1 = *ar4;
    *(undefined4 *)(ar6 + 4) = *(undefined4 *)(iVar1 + 4);
    *(int *)(ar6 + 8) = *ar4;
    *(int *)(iVar1 + 4) = ar6;
    *ar4 = ar6;
  }
  return in_r0;
}



/* FUN_8c204eb6 @ 8c204eb6 callers=4 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204eb6(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  
  if (*(int *)(ar6 + 8) == 0) {
    *ar4 = ar5;
    *(int *)(ar5 + 4) = ar6;
    uVar1 = 0;
  }
  else {
    *(int *)(*(int *)(ar6 + 8) + 4) = ar5;
    *(int *)(ar5 + 4) = ar6;
    uVar1 = *(undefined4 *)(ar6 + 8);
  }
  *(undefined4 *)(ar5 + 8) = uVar1;
  *(int *)(ar6 + 8) = ar5;
  return in_r0;
}



/* FUN_8c204ed2 @ 8c204ed2 callers=8 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204ed2(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = *(int *)(ar6 + 8);
  if (*(int *)(ar6 + 4) == 0) {
    *ar4 = *(undefined4 *)(ar6 + 8);
  }
  else {
    *(undefined4 *)(*(int *)(ar6 + 4) + 8) = *(undefined4 *)(ar6 + 8);
  }
  if (*(int *)(ar6 + 8) == 0) {
    *ar5 = *(undefined4 *)(ar6 + 4);
  }
  else {
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(ar6 + 4);
  }
  return in_r0;
}



/* FUN_8c204f2a @ 8c204f2a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204f2a(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint a6;
  int iVar4;
  int a4;
  int iVar5;
  uint uVar6;
  int iStack_20;
  
  puVar1 = PTR_FUN_8c204fa4;
  iVar2 = (int)DAT_8c204fa0;
  uVar6 = (uint)DAT_8c204fa2;
  if (uVar6 < ar6) {
    *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
    do {
      iVar5 = ar5;
      a6 = uVar6;
      (*(code *)PTR_FUN_8c204fa8)(*(undefined4 *)((int)&iStack_20 + iVar2),ar5,uVar6,ar7);
      a4 = *(int *)((int)&iStack_20 + iVar2);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        (*(code *)puVar1)(a4,iVar5,a6,ar7);
        a4 = a4 + 0x20;
      }
      (*(code *)PTR_FUN_8c204fac)(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),uVar6,ar7);
      ar6 = ar6 - uVar6;
      ar5 = ar5 + uVar6;
      ar4 = ar4 + uVar6;
    } while (uVar6 < ar6);
  }
  *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
  uVar6 = ar6;
  (*(code *)PTR_FUN_8c204fa8)(&stack0xffffffe4 + iVar2,ar5,ar6,ar7);
  iVar4 = *(int *)((int)&iStack_20 + iVar2);
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    (*(code *)puVar1)(iVar4,ar5,uVar6,ar7);
    iVar4 = iVar4 + 0x20;
  }
  uVar3 = (*(code *)PTR_FUN_8c205004)(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),ar6,ar7);
  return uVar3;
}



/* FUN_8c205020 @ 8c205020 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205020(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_24;
  
  if (*ar4 != 0) {
    iVar1 = *ar4;
    iVar3 = 0;
    iVar5 = iVar1;
    do {
      iVar4 = iVar3;
      if (*(int *)(iVar5 + 0xc) < *(int *)(iVar1 + 0xc)) {
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 8);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    if (1 < iVar3) {
      if (*ar5 != iVar5) {
        FUN_8c204ed2(ar4,ar5,iVar5,ar7);
        in_r0 = FUN_8c204eb6(ar5,iVar5,*ar5,ar7);
      }
      iVar4 = iVar4 + -1;
      uStack_24 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar5 = *ar4;
          iVar2 = 0;
          iVar1 = iVar5;
          if (0 < iVar3) {
            do {
              iVar1 = *(int *)(iVar1 + 8);
              iVar2 = iVar2 + 1;
              if (*(int *)(iVar5 + 0xc) < *(int *)(iVar1 + 0xc)) {
                iVar5 = iVar1;
              }
            } while (iVar2 < iVar3);
          }
          if (iVar1 != iVar5) {
            FUN_8c204ed2(ar4,ar5,iVar5,ar7);
            in_r0 = FUN_8c204eb6(ar5,iVar5,iVar1,ar7);
          }
          iVar3 = iVar3 + -1;
          uStack_24 = uStack_24 + 1;
        } while (uStack_24 < iVar4);
      }
    }
  }
  return in_r0;
}



/* FUN_8c2050cc @ 8c2050cc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2050cc(int *ar4,int ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  ushort *puVar9;
  
  iVar8 = *ar4;
  puVar9 = (ushort *)*ar6;
  if ((iVar8 == 0) || (iVar3 = ar5, puVar9 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar9;
    iVar7 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((DAT_8c205180 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((DAT_8c205182 & uVar1) != 0))))))))
    {
      iVar7 = 1;
    }
    uVar1 = *puVar9;
    uVar5 = (uint)uVar1;
    if (((((int)DAT_8c205184 & uVar5) != 0) || (((int)DAT_8c205186 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)DAT_8c205188 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)DAT_8c20518a & uVar5) != 0)))))))) {
      iVar7 = 2;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        return 0;
      }
      if (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6)) {
        do {
          iVar8 = *(int *)(iVar8 + 8);
          if (iVar8 == 0) {
            return 0;
          }
        } while (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6));
      }
      if (iVar8 == 0) {
        return 0;
      }
      if (puVar9 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc)) {
        do {
          puVar9 = *(ushort **)(puVar9 + 4);
          if (puVar9 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == *(int *)(puVar9 + 6)) {
        uVar2 = *(uint *)(iVar8 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40(uVar5,iVar3,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
          *(uint *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar8 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - iVar4;
          if (*(int *)(iVar8 + 4) == 0) {
            FUN_8c204e92(ar4,ar5,iVar3,ar7);
          }
          else {
            FUN_8c204eb6(ar5,iVar3,*(int *)(iVar8 + 4),ar7);
          }
        }
        iVar3 = *(int *)(puVar9 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar8 + 0xc),iVar3,*(undefined4 *)(puVar9 + 8),ar7);
        iVar6 = *(int *)(puVar9 + 6);
        iVar4 = *(int *)(iVar8 + 0xc);
        *(int *)(puVar9 + 6) = iVar4;
        ar6 = (undefined4 *)(iVar6 - iVar4);
        *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + *(int *)(puVar9 + 8);
        if (iVar7 == 1) {
          *(undefined4 *)(*(int *)(puVar9 + 10) + 0x1c) = *(undefined4 *)(puVar9 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          iVar3 = 0;
          *(undefined4 *)(*(int *)(puVar9 + 10) + 8) = *(undefined4 *)(puVar9 + 6);
          uVar5 = 0;
          do {
            if (*(int *)(*(int *)(puVar9 + 10) + 0xc + uVar5) != 0) {
              iVar7 = *(int *)(*(int *)(puVar9 + 10) + 0xc + iVar3);
              *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + (int)ar6 * -4;
            }
            uVar5 = uVar5 + 4;
            iVar3 = iVar3 + 4;
          } while (uVar5 < 0x40);
        }
        ar6_00 = *(undefined4 **)(iVar8 + 8);
        if ((ar6_00 != (undefined4 *)0x0) &&
           (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == ar6_00[3])) {
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + ar6_00[4];
          iVar3 = ar5;
          ar6 = ar6_00;
          FUN_8c204ed2(ar4,ar5,ar6_00,ar7);
          FUN_8c204e6c(ar6_00,iVar3,ar6,ar7);
        }
      }
      if ((puVar9 != (ushort *)0x0) && (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc))) {
        do {
          puVar9 = *(ushort **)(puVar9 + 4);
          if (puVar9 == (ushort *)0x0) break;
        } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
      }
    }
    if (puVar9 == (ushort *)0x0) {
      return 0;
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while( true );
}



/* FUN_8c2050de @ 8c2050de callers=0 callees=6 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2050de(undefined4 ar4,int ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_r8;
  int unaff_r9;
  int iVar6;
  undefined4 *a6;
  int iVar7;
  ushort *puVar8;
  
  iVar7 = *unaff_r8;
  puVar8 = (ushort *)*ar6;
  if ((iVar7 == 0) || (puVar8 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar8;
    iVar6 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((DAT_8c205180 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((DAT_8c205182 & uVar1) != 0))))))))
    {
      iVar6 = 1;
    }
    uVar1 = *puVar8;
    uVar5 = (uint)uVar1;
    if (((((int)DAT_8c205184 & uVar5) != 0) || (((int)DAT_8c205186 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)DAT_8c205188 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)DAT_8c20518a & uVar5) != 0)))))))) {
      iVar6 = 2;
    }
    if (iVar6 == 0) {
      if (iVar7 == 0) {
        return 0;
      }
      if (*(int *)(iVar7 + 0xc) < *(int *)(puVar8 + 6)) {
        do {
          iVar7 = *(int *)(iVar7 + 8);
          if (iVar7 == 0) {
            return 0;
          }
        } while (*(int *)(iVar7 + 0xc) < *(int *)(puVar8 + 6));
      }
      if (iVar7 == 0) {
        return 0;
      }
      if (puVar8 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar8 + 6) < *(int *)(iVar7 + 0xc)) {
        do {
          puVar8 = *(ushort **)(puVar8 + 4);
          if (puVar8 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar8 + 6) < *(int *)(iVar7 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x10) == *(int *)(puVar8 + 6)) {
        uVar2 = *(uint *)(iVar7 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40(uVar5,ar5,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar7 + 0xc);
          *(uint *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar7 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - iVar4;
          if (*(int *)(iVar7 + 4) == 0) {
            FUN_8c204e92(unaff_r8,unaff_r9,iVar3,ar7);
          }
          else {
            FUN_8c204eb6(unaff_r9,iVar3,*(int *)(iVar7 + 4),ar7);
          }
        }
        ar5 = *(int *)(puVar8 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar7 + 0xc),ar5,*(undefined4 *)(puVar8 + 8),ar7);
        iVar4 = *(int *)(puVar8 + 6);
        iVar3 = *(int *)(iVar7 + 0xc);
        *(int *)(puVar8 + 6) = iVar3;
        ar6 = (undefined4 *)(iVar4 - iVar3);
        *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + *(int *)(puVar8 + 8);
        if (iVar6 == 1) {
          *(undefined4 *)(*(int *)(puVar8 + 10) + 0x1c) = *(undefined4 *)(puVar8 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          ar5 = 0;
          *(undefined4 *)(*(int *)(puVar8 + 10) + 8) = *(undefined4 *)(puVar8 + 6);
          uVar5 = 0;
          do {
            if (*(int *)(*(int *)(puVar8 + 10) + 0xc + uVar5) != 0) {
              iVar6 = *(int *)(*(int *)(puVar8 + 10) + 0xc + ar5);
              *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + (int)ar6 * -4;
            }
            uVar5 = uVar5 + 4;
            ar5 = ar5 + 4;
          } while (uVar5 < 0x40);
        }
        a6 = *(undefined4 **)(iVar7 + 8);
        if ((a6 != (undefined4 *)0x0) && (*(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x10) == a6[3]))
        {
          *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + a6[4];
          ar5 = unaff_r9;
          ar6 = a6;
          FUN_8c204ed2(unaff_r8,unaff_r9,a6,ar7);
          FUN_8c204e6c(a6,ar5,ar6,ar7);
        }
      }
      if ((puVar8 != (ushort *)0x0) && (*(int *)(puVar8 + 6) < *(int *)(iVar7 + 0xc))) {
        do {
          puVar8 = *(ushort **)(puVar8 + 4);
          if (puVar8 == (ushort *)0x0) break;
        } while (*(int *)(puVar8 + 6) < *(int *)(iVar7 + 0xc));
      }
    }
    if (puVar8 == (ushort *)0x0) {
      return 0;
    }
    if (iVar7 == 0) {
      return 0;
    }
  } while( true );
}



/* FUN_8c2052f2 @ 8c2052f2 callers=1 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2052f2(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  ushort *a6;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *a6_00;
  int a5;
  int iVar5;
  int iVar6;
  undefined4 a7;
  undefined *puVar7;
  int in_stack_00000000;
  int in_stack_00000004;
  
  puVar1 = PTR_DAT_8c205380;
  iVar6 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar2 != 0) {
    ar6 = ar6 + (0x20 - uVar2);
  }
  iVar3 = (short)ar4 * 0x14;
  a6 = (ushort *)0x0;
  puVar4 = *(ushort **)(PTR_DAT_8c205380 + iVar3 + 8);
  iVar5 = ar5;
  while (puVar4 != (ushort *)0x0) {
    iVar5 = *(int *)(puVar4 + 6);
    if ((((ar5 < iVar5) || (*(int *)(puVar4 + 8) + iVar5 <= ar5)) || (iVar6 < iVar5)) ||
       (*(int *)(puVar4 + 8) + iVar5 < iVar6)) {
      puVar4 = *(ushort **)(puVar4 + 4);
    }
    else {
      a6 = puVar4;
      puVar4 = (ushort *)0x0;
    }
  }
  if (a6 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(a6 + 8) == ar6) {
    puVar7 = PTR_DAT_8c205380 + iVar3;
    FUN_8c204ed2(puVar7 + 8,puVar7 + 0xc,a6,0);
    FUN_8c204e92(puVar7,puVar7 + 4,a6,a7);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(a6 + 6);
    *(int *)(a6 + 10) = ar7;
    *a6 = 1;
    if ((short)ar4 == 0) {
      *a6 = *a6 | DAT_8c205420;
    }
    else {
      *a6 = *a6 | DAT_8c205422;
    }
    if (in_stack_00000000 != 0) {
      *a6 = *a6 | 2;
    }
    if (in_stack_00000004 != 0) {
      *a6 = *a6 | 4;
    }
    iVar6 = *(int *)(a6 + 8);
  }
  else {
    if (*(int *)(a6 + 6) != ar5) {
      if (*(int *)(a6 + 6) + *(int *)(a6 + 8) == iVar6) {
        a6_00 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
        if (a6_00 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar6;
        *(int *)(a6_00 + 6) = ar5;
        *(uint *)(a6_00 + 8) = ar6;
        FUN_8c204e92(puVar1 + iVar3,puVar1 + iVar3 + 4,a6_00,a7);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(a6_00 + 6);
        *(int *)(a6_00 + 10) = ar7;
        if ((short)ar4 == 0) {
          *a6_00 = *a6_00 | DAT_8c205560;
        }
        else {
          *a6_00 = *a6_00 | DAT_8c205562;
        }
        if (in_stack_00000000 != 0) {
          *a6_00 = *a6_00 | 2;
        }
        if (in_stack_00000004 != 0) {
          *a6_00 = *a6_00 | 4;
        }
      }
      else {
        a6_00 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
        if (a6_00 == (ushort *)0x0) {
          return 3;
        }
        a5 = FUN_8c204e40(puVar4,iVar5,iVar6,a7);
        if (a5 == 0) {
          FUN_8c204e6c(a6_00,iVar5,iVar6,a7);
          return 3;
        }
        iVar6 = *(int *)(a6 + 8);
        iVar5 = *(int *)(a6 + 6);
        *(int *)(a6 + 8) = ar5 - iVar5;
        puVar7 = puVar1 + iVar3;
        *(int *)(a6_00 + 6) = ar5;
        *(uint *)(a6_00 + 8) = ar6;
        FUN_8c204e92(puVar7,puVar7 + 4,a6_00,a7);
        *(uint *)(a5 + 0xc) = ar5 + ar6;
        *(uint *)(a5 + 0x10) = (iVar6 - ar6) - (ar5 - iVar5);
        FUN_8c204eb6(puVar7 + 0xc,a5,*(undefined4 *)(puVar7 + 0xc),a7);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(a6_00 + 6);
        *(int *)(a6_00 + 10) = ar7;
        if ((short)ar4 == 0) {
          *a6_00 = *a6_00 | DAT_8c205620;
        }
        else {
          *a6_00 = *a6_00 | DAT_8c205622;
        }
        if (in_stack_00000000 != 0) {
          *a6_00 = *a6_00 | 2;
        }
        if (in_stack_00000004 != 0) {
          *a6_00 = *a6_00 | 4;
        }
      }
      *(int *)(puVar1 + iVar3 + 0x10) = *(int *)(puVar1 + iVar3 + 0x10) - *(int *)(a6_00 + 8);
      return 0;
    }
    puVar4 = (ushort *)FUN_8c204e40(0,iVar5,iVar6,0);
    if (puVar4 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(a6 + 6);
    *(uint *)(puVar4 + 8) = ar6;
    *(uint *)(a6 + 8) = *(int *)(a6 + 8) - ar6;
    *(uint *)(a6 + 6) = *(int *)(a6 + 6) + ar6;
    FUN_8c204e92(puVar1 + iVar3,puVar1 + iVar3 + 4,puVar4,a7);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(puVar4 + 6);
    *(int *)(puVar4 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar4 = *puVar4 | DAT_8c2054c0;
    }
    else {
      *puVar4 = *puVar4 | DAT_8c2054c2;
    }
    if (in_stack_00000000 != 0) {
      *puVar4 = *puVar4 | 2;
    }
    if (in_stack_00000004 != 0) {
      *puVar4 = *puVar4 | 4;
    }
    iVar6 = *(int *)(puVar4 + 8);
  }
  *(int *)(puVar1 + iVar3 + 0x10) = *(int *)(puVar1 + iVar3 + 0x10) - iVar6;
  return 0;
}



/* FUN_8c205640 @ 8c205640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205640(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = DAT_8c205722;
  iVar2 = *(int *)(ar5 + 0xc);
  iVar3 = (int)DAT_8c2056a0;
  if (iVar2 == 8) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      iVar2 = (int)DAT_8c2056a6;
      *ar4 = iVar3;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = iVar2;
    }
    else {
      iVar2 = (int)DAT_8c2056a4;
      *ar4 = (int)DAT_8c2056a2;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = iVar2;
    }
  }
  else if (iVar2 == 0x10) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      *ar4 = (int)DAT_8c205720;
      ar4[1] = 0x80;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = (int)DAT_8c2056a8;
      sVar1 = DAT_8c2056aa;
      ar4[1] = 0x80;
      ar4[2] = 0x60;
    }
    ar4[3] = (int)sVar1;
  }
  else {
    if (iVar2 == 0x20) {
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        iVar2 = (int)DAT_8c20572e;
        *ar4 = (int)DAT_8c20572c;
        ar4[1] = iVar2;
        ar4[2] = iVar2;
        ar4[3] = iVar3;
        goto LAB_8c205756;
      }
      iVar3 = (int)DAT_8c205726;
      *ar4 = (int)DAT_8c205724;
      iVar2 = (int)DAT_8c205728;
      ar4[1] = iVar3;
      sVar1 = DAT_8c20572a;
      ar4[2] = iVar2;
    }
    else {
      if (iVar2 != 0x40) {
        return 0;
      }
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        iVar2 = (int)DAT_8c2057a2;
        *ar4 = (int)DAT_8c2057a0;
        ar4[1] = iVar2;
        ar4[2] = iVar2;
        ar4[3] = iVar3;
        goto LAB_8c205756;
      }
      iVar3 = (int)DAT_8c205730;
      iVar2 = (int)DAT_8c205732;
      *ar4 = DAT_8c205738;
      ar4[1] = iVar3;
      sVar1 = DAT_8c205734;
      ar4[2] = iVar2;
    }
    ar4[3] = (int)sVar1;
  }
LAB_8c205756:
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01051c_8c2057a8)();
  ar4[4] = iVar2;
  return 1;
}



/* FUN_8c205644 @ 8c205644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205644(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int a6;
  int a7;
  uint unaff_r14;
  
  sVar1 = DAT_8c205722;
  iVar2 = *(int *)(ar5 + 0xc);
  a6 = (int)DAT_8c2056a0;
  a7 = unaff_r14 + 0x7f;
  if (iVar2 == 8) {
    if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
      iVar2 = (int)DAT_8c2056a6;
      *ar4 = a6;
      ar4[1] = a7;
      ar4[2] = 0x20;
      ar4[3] = iVar2;
    }
    else {
      iVar2 = (int)DAT_8c2056a4;
      *ar4 = (int)DAT_8c2056a2;
      ar4[1] = a7;
      ar4[2] = 0x20;
      ar4[3] = iVar2;
    }
  }
  else if (iVar2 == 0x10) {
    if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
      *ar4 = (int)DAT_8c205720;
      ar4[1] = a7;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = (int)DAT_8c2056a8;
      sVar1 = DAT_8c2056aa;
      ar4[1] = a7;
      ar4[2] = 0x60;
    }
    ar4[3] = (int)sVar1;
  }
  else {
    if (iVar2 == 0x20) {
      if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
        ar5 = (int)DAT_8c20572e;
        *ar4 = (int)DAT_8c20572c;
        ar4[1] = ar5;
        ar4[2] = ar5;
        ar4[3] = a6;
        goto LAB_8c205756;
      }
      iVar3 = (int)DAT_8c205726;
      *ar4 = (int)DAT_8c205724;
      iVar2 = (int)DAT_8c205728;
      ar4[1] = iVar3;
      sVar1 = DAT_8c20572a;
      ar4[2] = iVar2;
    }
    else {
      if (iVar2 != 0x40) {
        return 0;
      }
      if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
        ar5 = (int)DAT_8c2057a2;
        *ar4 = (int)DAT_8c2057a0;
        ar4[1] = ar5;
        ar4[2] = ar5;
        ar4[3] = a6;
        goto LAB_8c205756;
      }
      iVar3 = (int)DAT_8c205730;
      iVar2 = (int)DAT_8c205732;
      *ar4 = DAT_8c205738;
      ar4[1] = iVar3;
      sVar1 = DAT_8c205734;
      ar4[2] = iVar2;
    }
    ar4[3] = (int)sVar1;
  }
LAB_8c205756:
  iVar2 = (*(code *)PTR_libgcc_divide_helper_01051c_8c2057a8)(ar4,ar5,a6,a7);
  ar4[4] = iVar2;
  return 1;
}



/* FUN_8c205768 @ 8c205768 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c205768(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = DAT_8c2057ac;
  puVar2 = DAT_8c2057ac;
  while( true ) {
    if ((ushort *)(DAT_8c2057b0 + (int)DAT_8c2057ac) <= puVar1) {
      return (ushort *)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0x26;
    puVar2 = puVar2 + 0x26;
  }
  *puVar2 = 1;
  return puVar2;
}



/* FUN_8c2057c0 @ 8c2057c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2057c0(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_r0;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  uVar1 = DAT_8c205844;
  puVar2 = (ushort *)((int)DAT_8c205840 + DAT_8c205848);
  puVar3 = DAT_8c205840;
  puVar4 = DAT_8c205840;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0x26;
    puVar4 = puVar4 + 0x26;
  } while (puVar3 < puVar2);
  return in_r0;
}



/* FUN_8c2057e6 @ 8c2057e6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2057e6(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *ar4;
  }
  *(int *)(ar5 + 4) = iVar1;
  *ar4 = ar5;
  return in_r0;
}



/* FUN_8c2057f8 @ 8c2057f8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2057f8(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == ar5) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(int *)(iVar1 + 4);
    }
  }
  if (*ar4 == ar5) {
    *ar4 = *(int *)(ar5 + 4);
  }
  else {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(ar5 + 4);
  }
  return iVar2;
}



/* FUN_8c205860 @ 8c205860 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c205860(undefined4 ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  undefined1 auStack_2c [4];
  int iStack_28;
  ushort *puStack_24;
  
  uVar3 = DAT_8c205930;
  puVar2 = PTR_DAT_8c20592c;
  iVar6 = *(int *)PTR_DAT_8c205924;
  puVar5 = (ushort *)0x0;
  iStack_28 = ar5;
  puStack_24 = ar6;
  for (puVar7 = *(ushort **)(PTR_DAT_8c205928 + (short)ar4 * 0x14); puVar7 != (ushort *)0x0;
      puVar7 = *(ushort **)(puVar7 + 4)) {
    uVar1 = *puVar7;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((DAT_8c205920 & uVar1) != 0)) &&
       ((iStack_28 <= *(int *)(puVar7 + 8) && (*(int *)(puVar7 + 8) < iVar6)))) {
      if ((short)ar4 == 0) {
        iVar4 = *(int *)(puVar7 + 6) + *(int *)puVar2;
      }
      else {
        iVar4 = *(int *)(puVar7 + 6) - *(int *)puVar2;
      }
      iVar4 = FUN_8c204cc0(iVar4,auStack_2c,ar6,ar7);
      if ((iVar4 != 0) && ((**(ushort **)(iVar4 + 0x14) & uVar3) == (*puStack_24 & uVar3))) {
        iVar6 = *(int *)(puVar7 + 8);
        puVar5 = puVar7;
      }
    }
  }
  return puVar5;
}



/* FUN_8c205948 @ 8c205948 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205948(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint in_r0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char in_T;
  
  puVar1 = PTR_DAT_8c205a24;
  if (in_T == '\0') {
    uVar2 = ~(~in_r0 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = in_r0 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  iVar7 = *(int *)(PTR_DAT_8c205a20 + 8);
  do {
    if (iVar7 == 0) {
      return 0xffffffff;
    }
    if (ar4 <= *(int *)(iVar7 + 0x10)) {
      iVar5 = *(int *)(iVar7 + 0xc);
      iVar4 = *(int *)(iVar7 + 0x10);
      for (iVar6 = *(int *)(iVar7 + 0xc); iVar6 <= (iVar5 + iVar4) - ar4; iVar6 = iVar6 + 0x20) {
        iVar3 = (*(code *)PTR_FUN_8c205a28)(1,*(int *)puVar1 + iVar6,ar4,ar7);
        if (iVar3 == 0) {
          return iVar6;
        }
      }
    }
    iVar7 = *(int *)(iVar7 + 8);
  } while( true );
}



/* FUN_8c2059be @ 8c2059be callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2059be(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ((ar4 & 0xfffffff8) >> 1) + (ar4 & 3);
  if ((ar4 & 4) != 0) {
    iVar1 = iVar1 + DAT_8c205a2c;
  }
  if (DAT_8c205a30 <= ar4) {
    iVar1 = iVar1 + DAT_8c205a2c;
  }
  return iVar1;
}



/* FUN_8c2059e0 @ 8c2059e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2059e0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (ar4 < DAT_8c205a30) {
    if (DAT_8c205a2c <= ar4) {
      ar4 = ar4 - DAT_8c205a2c;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1;
  }
  else {
    if (DAT_8c205a34 <= ar4) {
      ar4 = ar4 - DAT_8c205a2c;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1 + DAT_8c205a38;
  }
  return iVar1;
}



/* FUN_8c205a40 @ 8c205a40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205a40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_pvr_20a844_8c205ac0;
  (*(code *)PTR_pvr_20a844_8c205ac0)(8,3);
  (*(code *)puVar1)(0);
  uVar2 = (*(code *)puVar1)(8,0);
  return uVar2;
}



/* FUN_8c205a44 @ 8c205a44 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205a44(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_pvr_20a844_8c205ac0;
  (*(code *)PTR_pvr_20a844_8c205ac0)(8,ar5,ar6,ar7);
  (*(code *)puVar1)(0,0,ar6,ar7);
  uVar2 = (*(code *)puVar1)(8,0,ar6,ar7);
  return uVar2;
}



/* g2dma_205a62 @ 8c205a62 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 g2dma_205a62(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_1c;
  int iStack_18;
  
  uVar6 = DAT_8c205ac4;
  *DAT_8c205ac8 = 0;
  iStack_18 = (*(code *)PTR_pvr_20a876_8c205acc)(0,ar5,ar6,ar7);
  uVar3 = (*(code *)PTR_pvr_20a876_8c205acc)(4,ar5,ar6,ar7);
  *DAT_8c205ad0 = 5;
  if (iStack_18 == DAT_8c205ad4) {
    if (uVar3 == 1) {
      *DAT_8c205ad0 = 5;
    }
    else if (0x10 < uVar3) {
      *DAT_8c205b44 = 6;
      *DAT_8c205b4c = DAT_8c205b48;
      uVar6 = DAT_8c205b50;
    }
  }
  else {
    *DAT_8c205ad0 = 5;
  }
  iVar4 = (int)DAT_8c205b40;
  iVar5 = *DAT_8c205b54;
  if (iVar5 == 0) {
    *DAT_8c205b58 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        *DAT_8c205ba0 = 3;
      }
      else if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
        *DAT_8c205ba0 = 0x7f;
        iVar4 = DAT_8c205ba4;
      }
      else if (iVar5 == 8) {
        *DAT_8c205ba0 = 0x1f;
      }
      else if (iVar5 == 9) {
        *DAT_8c205ba0 = 0xf;
      }
      else {
        *DAT_8c205c4c = (int)DAT_8c205c40;
      }
      goto LAB_8c205bc8;
    }
    *DAT_8c205b58 = 1;
  }
  iVar4 = 0;
LAB_8c205bc8:
  puVar2 = PTR_pvr_20a844_8c205c50;
  (*(code *)PTR_pvr_20a844_8c205c50)((int)DAT_8c205c42,uVar6,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205c44,0x20,ar6,ar7);
  (*(code *)puVar2)(8,0,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205c46,3,ar6,ar7);
  (*(code *)puVar2)(0x48,9,ar6,ar7);
  if ((*DAT_8c205c54 & 1) == 0) {
    (*(code *)PTR_LAB_8c205c5c)(0x44,0,ar6,ar7);
  }
  else {
    (*(code *)PTR_LAB_8c205c5c)(0x44,DAT_8c205c58,ar6,ar7);
  }
  (*(code *)puVar2)(0x5c,0,ar6,ar7);
  (*(code *)puVar2)(0x68,DAT_8c205c60,ar6,ar7);
  (*(code *)puVar2)(0x6c,DAT_8c205c64,ar6,ar7);
  uVar6 = DAT_8c205d54;
  sVar1 = DAT_8c205d40;
  if (*DAT_8c205c68 == 6) {
    (*(code *)puVar2)((int)DAT_8c205c48,DAT_8c205c6c,ar6,ar7);
    uVar6 = *DAT_8c205c70;
    sVar1 = DAT_8c205c4a;
  }
  (*(code *)puVar2)((int)sVar1,uVar6,ar6,ar7);
  (*(code *)puVar2)(0x4c,(int)DAT_8c205d42,ar6,ar7);
  (*(code *)puVar2)(0x74,0,ar6,ar7);
  (*(code *)puVar2)(0x78,DAT_8c205d58,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d44,0,ar6,ar7);
  (*(code *)puVar2)(0x30,iVar4,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d46,DAT_8c205d5c,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d48,DAT_8c205d5c,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d4a,0,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d4c,0xffffffff,ar6,ar7);
  (*(code *)puVar2)(0x80,7,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d4e,DAT_8c205d60,ar6,ar7);
  (*(code *)puVar2)((int)DAT_8c205d50,DAT_8c205d64,ar6,ar7);
  (*(code *)puVar2)(0x74,1,ar6,ar7);
  if (*DAT_8c205d68 == 6) {
    uVar6 = DAT_8c205d70;
    if (*DAT_8c205d68 == 6) {
      uVar6 = DAT_8c205d6c;
    }
    (*(code *)puVar2)(0x7c,uVar6,ar6,ar7);
    iVar4 = DAT_8c205d78;
    puVar2 = PTR_FUN_8c205d74;
    iVar7 = 0;
    uStack_1c = 0;
    iVar5 = DAT_8c205d7c;
    do {
      (*(code *)puVar2)(iVar5,&uStack_1c,4,ar7);
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < iVar4);
    return 1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* FUN_8c205d80 @ 8c205d80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205d80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  
  puVar1 = PTR_pvr_20a844_8c205dec;
  (*(code *)PTR_pvr_20a844_8c205dec)((int)DAT_8c205de0,DAT_8c205df0,ar6,ar7);
  (*(code *)puVar1)((int)DAT_8c205de2,DAT_8c205df4,ar6,ar7);
  (*(code *)puVar1)((int)DAT_8c205de4,DAT_8c205df4,ar6,ar7);
  uVar4 = (uint)DAT_8c205dea;
  uVar3 = (uint)DAT_8c205de8;
  a4 = (int)DAT_8c205de6;
  do {
    uVar2 = (*(code *)puVar1)(a4,(uVar4 & 0xff) << 8 | uVar3 & 0xff,ar6,ar7);
    uVar4 = uVar4 - 1;
    a4 = a4 + 4;
    uVar3 = uVar3 - 1;
  } while (0x7f < (int)uVar4);
  return uVar2;
}



/* noop_205dd4 @ 8c205dd4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_205dd4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* s_HARDWARE_205e00 @ 8c205e00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_HARDWARE_205e00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  
  a6 = ar6;
  iVar1 = (*(code *)PTR_FUN_8c205e44)(ar4,PTR_s_HARDWARE_8c205e40,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = (*(code *)PTR_FUN_8c205e44)(ar5,PTR_s_EnableTexture16MB_8c205e48,a6,ar7), ar6 = ar5,
     iVar1 == 0)) {
    ar6 = 0;
  }
  return ar6;
}



/* s_r_nCOPYRIGHT_C_NEC_Corporati_205e72 @ 8c205e64 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  int *piVar6;
  int a6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined *puVar14;
  undefined *puVar15;
  int iVar16;
  undefined *puVar17;
  undefined4 uVar18;
  int iVar19;
  int a7;
  
  puVar14 = PTR_DAT_8c205fa8;
  if (*(int *)PTR_DAT_8c205fa8 == 0) {
    *(undefined4 **)PTR_DAT_8c205fa8 = DAT_8c205fac;
    ar5 = 0;
    ar6 = (int)DAT_8c205fa0;
    (*(code *)PTR_memset_8c205fb0)(*(undefined4 *)puVar14,0,ar6,ar7);
  }
  puVar2 = DAT_8c205fb4;
  puVar1 = DAT_8c205fac;
  *DAT_8c205fb4 = 3;
  puVar2[1] = 2;
  puVar14 = PTR_s_COPYRIGHT__C__NEC_Corporation_19_8c205fb8;
  puVar2[2] = 6;
  puVar2[3] = 0;
  puVar2[4] = puVar14;
  *puVar1 = puVar2;
  puVar1 = DAT_8c205fbc;
  *DAT_8c205fbc = 0;
  puVar3 = DAT_8c205fc0;
  *DAT_8c205fc0 = 0;
  *DAT_8c205fc4 = 0;
  puVar1[7] = 0;
  puVar3[7] = 0;
  piVar4 = DAT_8c205fc8;
  *DAT_8c205fc8 = (int)DAT_8c205fa2;
  iVar13 = (int)DAT_8c205fa4;
  *DAT_8c205fcc = iVar13;
  *DAT_8c205fd0 = iVar13 + 0x10;
  piVar4[3] = iVar13 + 0x20;
  puVar14 = PTR_FUN_8c205fd8;
  *DAT_8c205fd4 = iVar13 + 0x30;
  (*(code *)puVar14)(puVar2,ar5,ar6,ar7);
  *DAT_8c205fdc = 0;
  *DAT_8c205fe0 = 0;
  puVar5 = PTR_s_HARDWARE_205e00_8c205fe8;
  puVar14 = PTR_s_RENDER_8c205fe4;
  uVar18 = 1;
  puVar15 = PTR_s_VSYNCCount_8c205fec;
  iVar13 = (*(code *)PTR_s_HARDWARE_205e00_8c205fe8)
                     (PTR_s_RENDER_8c205fe4,PTR_s_VSYNCCount_8c205fec,1,ar7);
  piVar4 = DAT_8c205ff0;
  *DAT_8c205ff0 = iVar13 + -1;
  piVar6 = DAT_8c205ff4;
  *DAT_8c205ff4 = *piVar4;
  *DAT_8c205ffc = DAT_8c205ff8;
  uVar12 = DAT_8c206000;
  *DAT_8c206004 = DAT_8c206000;
  *DAT_8c206008 = uVar12;
  *DAT_8c20600c = 0;
  *DAT_8c206010 = 0;
  *DAT_8c206014 = 0;
  piVar6[-1] = 3;
  puVar17 = PTR_FUN_8c20601c;
  *DAT_8c206018 = 1;
  (*(code *)puVar17)(uVar12,puVar15,uVar18,ar7);
  uVar8 = (*(code *)puVar5)(puVar14,PTR_s_RegionSize_8c206020,(int)DAT_8c205fa6,ar7);
  uVar9 = (*(code *)puVar5)(puVar14,PTR_s_ObjListSize_8c206028,DAT_8c206024,ar7);
  uVar10 = (*(code *)puVar5)(puVar14,PTR_s_ISPParamSize_8c206030,DAT_8c20602c,ar7);
  uVar11 = (*(code *)puVar5)(puVar14,PTR_s_TSPParamSize_8c206034,DAT_8c20602c,ar7);
  *DAT_8c2061e0 = uVar10 & 0xfffff800;
  *DAT_8c2061e4 = uVar11 & 0xfffff800;
  a6 = DAT_8c2061ec;
  iVar13 = DAT_8c2061e8;
  a7 = (uVar8 & 0xfffff800) + (uVar9 & 0xfffff800);
  iVar19 = 0;
  iVar16 = 0;
  for (uVar9 = 0; puVar1 = DAT_8c2061f8, iVar7 = DAT_8c2061f0, uVar9 < 0x20; uVar9 = uVar9 + 0x10) {
    *(int *)(DAT_8c2061f0 + uVar9) = iVar16;
    *(uint *)(iVar7 + uVar9 + 4) = iVar16 + (uVar8 & 0xfffff800);
    *(int *)(iVar7 + uVar9 + 8) = iVar16 + a7;
    *(uint *)(iVar7 + uVar9 + 0xc) = (uVar10 & 0xfffff800) + a7 + iVar16;
    *(int *)(DAT_8c2061f4 + iVar19) = iVar13 - iVar16;
    iVar16 = iVar16 + a6;
    iVar19 = iVar19 + 4;
  }
  *DAT_8c2061f8 = 0;
  *DAT_8c2061fc = 0;
  puVar2 = DAT_8c206200;
  *DAT_8c206200 = 0;
  puVar1[3] = 0xffffffff;
  puVar3 = DAT_8c206204;
  *DAT_8c206204 = 0xffffffff;
  puVar2[3] = 0xffffffff;
  puVar1[6] = 0;
  puVar3[3] = 0;
  puVar2[6] = 0;
  *DAT_8c206208 = 0;
  *DAT_8c20620c = 0;
  puVar15 = PTR_s_VertexBuffer_8c20621c;
  puVar17 = PTR_s_BufferBase_8c206218;
  uVar12 = DAT_8c206214;
  *DAT_8c206210 = 1;
  uVar12 = (*(code *)puVar5)(puVar15,puVar17,uVar12,a7);
  *DAT_8c206220 = uVar12;
  uVar12 = (*(code *)puVar5)(PTR_s_VertexBuffer_8c20621c,PTR_s_BufferSize_8c206224,a6,a7);
  *DAT_8c206228 = uVar12;
  uVar12 = (*(code *)puVar5)(puVar14,PTR_s_PoolingTAStatus_8c20622c,0,a7);
  *DAT_8c206230 = uVar12;
  uVar12 = (*(code *)puVar5)(puVar14,PTR_s_RenderTimeOut_8c206234,10,a7);
  *DAT_8c206238 = uVar12;
  uVar12 = (*(code *)puVar5)(puVar14,PTR_s_VertexTimeOut_8c20623c,10,a7);
  *DAT_8c206240 = uVar12;
  uVar18 = 10;
  puVar17 = PTR_s_VSYNCTimeOut_8c206244;
  uVar12 = (*(code *)puVar5)(puVar14,PTR_s_VSYNCTimeOut_8c206244,10,a7);
  *DAT_8c206248 = uVar12;
  *DAT_8c20624c = 0;
  *DAT_8c206250 = 1;
  puVar1 = DAT_8c206254;
  *DAT_8c206254 = 0xf;
  *puVar1 = *puVar1;
  *DAT_8c206258 = 0;
  *DAT_8c20625c = 0;
  uVar12 = (*(code *)PTR_noop_20b77a_8c206260)(puVar14,puVar17,uVar18,a7);
  return uVar12;
}



/* FUN_8c206146 @ 8c206146 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206146(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*(int *)PTR_DAT_8c206264 != 0) {
    in_r0 = (*(code *)PTR_noop_205dd4_8c206268)(ar4,ar5,ar6,ar7);
    *(undefined4 *)PTR_DAT_8c206264 = 0;
  }
  return in_r0;
}



/* FUN_8c206162 @ 8c206162 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2061ba) */
/* WARNING: Removing unreachable block (ram,0x8c2061ae) */
/* WARNING: Removing unreachable block (ram,0x8c2061b4) */
/* WARNING: Removing unreachable block (ram,0x8c2061c0) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c206162(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_noop_20a840_8c20626c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_g2dma_205a62_8c206270)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c206274)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c206278)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c20627c)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c206280)(ar4,ar5,ar6,ar7);
  *DAT_8c206288 = DAT_8c206284;
  *DAT_8c20628c = 0;
  *DAT_8c206290 = 0;
  *DAT_8c206294 = 0;
  uVar1 = (*(code *)PTR_FUN_8c206298)
                    (*DAT_8c2061f0 >> 7,DAT_8c2061f0[1] >> 7,DAT_8c2061f0[2] >> 7,
                     DAT_8c2061f0[3] >> 7);
  return uVar1;
}



/* FUN_8c2062c8 @ 8c2062c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2062c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c2062ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*DAT_8c2062e4)();
  return uVar1;
}



/* FUN_8c206300 @ 8c206300 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206300(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = (*(code *)PTR_FUN_8c206424)(PTR_pvr_206ff0_8c206420,ar5,ar6,ar7);
  *DAT_8c206428 = 0;
  *DAT_8c20642c = 0;
  *DAT_8c206430 = 0;
  *DAT_8c206434 = 0;
  puVar4 = DAT_8c206440;
  puVar3 = DAT_8c20643c;
  puVar2 = DAT_8c206438;
  uVar6 = 0;
  *DAT_8c206438 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  do {
    iVar1 = uVar6 + 0x2c;
    uVar6 = uVar6 + 4;
    *(undefined4 *)((int)puVar2 + iVar1) = 0;
  } while (uVar6 < 0x14);
  return uVar5;
}



/* pvr_206350 @ 8c206350 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int pvr_206350(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = DAT_8c20644c;
  puVar2 = DAT_8c206448;
  puVar1 = DAT_8c206444;
  uVar6 = 0;
  piVar7 = DAT_8c20644c + -1;
  while ((*(int *)(DAT_8c206450 + uVar6 * 4) != 5 &&
         (iVar5 = *(int *)(DAT_8c206450 + uVar6 * 4), iVar5 != -3))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return iVar5;
    }
  }
  *(undefined4 *)(DAT_8c206450 + uVar6 * 4) = 7;
  piVar4 = DAT_8c206458;
  if (((*DAT_8c206454 & 1) == 1) || ((*DAT_8c206454 & 0x2c) != 0x20)) {
    if (*DAT_8c206468 != 1) {
      *piVar7 = DAT_8c206458[uVar6 & 1] + *DAT_8c20645c;
      *piVar3 = piVar4[uVar6 & 1] + *DAT_8c206464;
    }
  }
  else {
    *piVar7 = *DAT_8c206458 + *DAT_8c20645c;
    *piVar3 = *DAT_8c206460 + *DAT_8c206464;
  }
  if (*(int *)(DAT_8c206450 + uVar6 * 4) == -3) {
    return 0xfffffffd;
  }
  if (*DAT_8c20646c != 1) {
    return *DAT_8c20646c;
  }
  *puVar2 = *DAT_8c206470;
  puVar2 = DAT_8c206474;
  *puVar1 = *DAT_8c206474;
  *DAT_8c20646c = 0;
  return (int)puVar2;
}



/* pvr_206480 @ 8c206480 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_206480(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 a4;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  a4 = DAT_8c2065d0;
  puVar3 = PTR_sh4_dmac_202f40_8c2065cc;
  uVar2 = DAT_8c2065c8;
  puVar1 = DAT_8c2065c4;
  iVar8 = (int)DAT_8c2065c0;
  uVar6 = 0;
  while ((*(int *)(uVar6 * 4 + DAT_8c2065d4) != 1 || (*DAT_8c2065d8 != 0))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return 1;
    }
  }
  *DAT_8c2065d8 = 1;
  iVar9 = uVar6 * 4;
  *(undefined4 *)(DAT_8c2065d4 + iVar9) = 2;
  *DAT_8c2065dc = uVar6;
  puVar4 = DAT_8c2065e8;
  *DAT_8c2065e4 = *DAT_8c2065e0;
  *puVar4 = 1;
  *puVar4 = 0;
  iVar5 = DAT_8c2065ec;
  iVar7 = (uVar6 & 1) * 0x20;
  *DAT_8c2065f0 = *(undefined4 *)(DAT_8c2065ec + iVar7);
  *DAT_8c2065f4 = *(undefined4 *)(iVar5 + 4 + iVar7);
  *DAT_8c2065f8 = *(undefined4 *)(iVar5 + 0xc + iVar7);
  *DAT_8c2065fc = *(undefined4 *)(iVar5 + 0x10 + iVar7);
  *DAT_8c206600 = *(undefined4 *)(iVar5 + 8 + iVar7);
  *puVar1 = DAT_8c206604;
  *DAT_8c206608 = 0;
  *DAT_8c20660c = 0;
  iVar5 = DAT_8c206614;
  *DAT_8c206610 = 0;
  if (*(int *)(iVar5 + iVar9) != 0) {
    *DAT_8c206608 = *DAT_8c206608 | 1;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(DAT_8c206618 + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(DAT_8c20661c + iVar9) != 0) {
    *DAT_8c206608 = *DAT_8c206608 | 2;
    puVar1 = DAT_8c206624;
    if (*DAT_8c206620 == 1) {
      *(uint *)*DAT_8c206624 = *(uint *)*DAT_8c206624 & uVar2 | DAT_8c206628;
      iVar5 = (*(code *)puVar3)(a4,*puVar1,*DAT_8c20662c,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(DAT_8c20661c + -0x50 + iVar9),
                              *(int *)(DAT_8c20661c + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  iVar5 = DAT_8c206820;
  if (*(int *)(DAT_8c206820 + iVar9) != 0) {
    *DAT_8c206824 = *DAT_8c206824 | 4;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(DAT_8c206828 + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(DAT_8c20682c + iVar9) != 0) {
    *DAT_8c206824 = *DAT_8c206824 | 8;
    if (*DAT_8c206830 == 1) {
      *(uint *)*DAT_8c206834 = *(uint *)*DAT_8c206834 & uVar2 | DAT_8c206838;
      iVar5 = (*(code *)puVar3)(a4,*DAT_8c206834,*DAT_8c20683c,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(DAT_8c20682c + -0x50 + iVar9),
                              *(int *)(DAT_8c20682c + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(DAT_8c206840 + iVar9) == 0) {
    return 1;
  }
  *DAT_8c206824 = *DAT_8c206824 | 0x10;
  iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(DAT_8c206840 + -0x50 + iVar9),
                            *(int *)(DAT_8c206840 + iVar9) + 0x20,0x10);
  if (iVar5 != iVar8) {
    return 1;
  }
  return 0;
}



/* pvr_20672a @ 8c20672a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int pvr_20672a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = DAT_8c206844;
  uVar8 = 0;
  puVar6 = DAT_8c206844 + 0x16;
  while ((iVar3 = *(int *)(uVar8 * 4 + DAT_8c206848), iVar3 != 3 || (*DAT_8c20684c != 0))) {
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      return iVar3;
    }
  }
  uVar7 = uVar8 & 1;
  if ((uVar7 + 1 & *DAT_8c206850) != 0) {
    (*(code *)PTR_FUN_8c206860)(*DAT_8c20685c,*DAT_8c206858,0,1);
    *DAT_8c206850 = ~(uVar7 + 1) & *DAT_8c206850 & 3;
  }
  *DAT_8c20684c = 1;
  *(undefined4 *)(DAT_8c206848 + uVar8 * 4) = 4;
  if ((*DAT_8c206864 & 0x10) != 0) {
    *puVar1 = 2;
    *puVar1 = 0;
  }
  iVar3 = DAT_8c206868;
  *DAT_8c20686c = *(undefined4 *)(DAT_8c206868 + uVar7 * 0x20);
  *DAT_8c206870 = *(undefined4 *)(iVar3 + 0x14 + uVar7 * 0x20);
  if (*DAT_8c206874 != 1) {
    if (((*DAT_8c206878 & 1) == 1) || ((*DAT_8c206878 & 0x2c) != 0x20)) {
      uVar5 = *(undefined4 *)(DAT_8c206940 + uVar7 * 4);
    }
    else {
      uVar5 = *(undefined4 *)(DAT_8c20687c + *DAT_8c206880 * 4);
    }
    *puVar6 = uVar5;
  }
  puVar6 = DAT_8c206948;
  puVar1 = DAT_8c206944;
  *DAT_8c206948 = *DAT_8c206944;
  puVar6[-1] = puVar1[-1] & 0xfffffff0;
  puVar1 = DAT_8c206950;
  *DAT_8c206950 = *DAT_8c20694c;
  puVar1[1] = *DAT_8c206954;
  puVar1[-7] = *DAT_8c206958;
  puVar1[-8] = *DAT_8c20695c;
  puVar2 = DAT_8c206964;
  *DAT_8c206960 = 0;
  if ((*puVar2 & 0xffffffed) == 0x20) {
    if (*DAT_8c206968 == 0) {
      uVar4 = *DAT_8c206970;
      uVar7 = DAT_8c20696c;
    }
    else {
      uVar4 = *DAT_8c206970;
      uVar7 = DAT_8c206974;
    }
    *DAT_8c206978 = uVar4 | uVar7;
  }
  puVar2 = DAT_8c206984;
  *DAT_8c206980 = *DAT_8c20697c;
  *puVar2 = uVar8;
  puVar1 = DAT_8c20698c;
  *DAT_8c206988 = 1;
  *puVar1 = 0xffffffff;
  return (int)puVar2;
}



/* pvr_2069a0 @ 8c2069a0 callers=1 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 pvr_2069a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 a4;
  bool bVar11;
  undefined4 a5;
  int iVar12;
  uint *puVar13;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  *DAT_8c206a44 = 8;
  *DAT_8c206a48 = *DAT_8c206a48 | 2;
  *DAT_8c206a4c = *DAT_8c206a4c + 1;
  puVar1 = DAT_8c206a50;
  if ((*DAT_8c206a54 & 2) == 0) {
    uVar9 = *(int *)PTR_DAT_8c206a5c + 1U & 1;
    *(uint *)PTR_DAT_8c206a5c = uVar9;
  }
  else {
    uVar9 = (*DAT_8c206a58 & (int)DAT_8c206a40) >> 10;
  }
  puVar3 = DAT_8c206a64;
  piVar2 = DAT_8c206a60;
  *puVar1 = uVar9;
  piVar4 = DAT_8c206a68;
  if (((*puVar3 & 4) == 4) && (*puVar1 == 1)) {
    bVar11 = true;
  }
  else {
    *DAT_8c206a68 = *DAT_8c206a68 + -1;
    if (*piVar4 < 0) {
      *DAT_8c206b84 = *DAT_8c206b80;
      bVar11 = false;
    }
    else if (*piVar2 == 0) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
      *piVar2 = 0;
    }
  }
  puVar3 = DAT_8c206bac;
  puVar1 = DAT_8c206b8c;
  if (!bVar11) {
    uStack_24 = 0;
    a5 = 0;
    if (*DAT_8c206b88 == 0) {
      if (*DAT_8c206b90 == 0) {
        iStack_28 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        puVar13 = DAT_8c206bac + -0xf;
        a4 = 0;
        for (iStack_34 = 0; iVar6 = DAT_8c206d40, iVar10 = DAT_8c206bb0, iStack_34 < 4;
            iStack_34 = iStack_34 + 1) {
          iVar12 = iStack_34 * 4;
          if ((-1 < *(int *)(DAT_8c206bb0 + iVar12)) &&
             ((*(uint *)(DAT_8c206bb0 + iVar12) & 1) == 0)) {
            if (*DAT_8c206bb4 == 0) {
              if (*(int *)(DAT_8c206bb0 + iVar12) == 4) {
                *(undefined4 *)(DAT_8c206bb0 + iVar12) = 5;
                if (*DAT_8c206ba8 != 0) {
                  puVar1[2] = puVar1[2] + 1;
                }
                *DAT_8c206ba8 = 0;
                *puVar13 = 2;
                *puVar13 = 0;
              }
              else {
                *piVar2 = 1;
                uStack_24 = 1;
                if ((*(int *)(iVar10 + iVar12) == 2) &&
                   (puVar1[1] = puVar1[1] + 1, *DAT_8c206bb8 < puVar1[1])) {
                  puVar1[3] = puVar1[3] + 1;
                  (*(code *)PTR_g2dma_202e82_8c206bbc)(a4,a5,ar6,ar7);
                  *(undefined4 *)(DAT_8c206bb0 + iVar12) = 0xffffffff;
                  *DAT_8c206bc0 = 0;
                  puVar1[1] = 0;
                }
              }
            }
            else {
              *piVar2 = 1;
              uStack_24 = 1;
              if ((*(int *)(iVar6 + iVar12) == 4) &&
                 (*puVar1 = *puVar1 + 1, puVar7 = DAT_8c206d48, *DAT_8c206d44 < *puVar1)) {
                puVar1[2] = puVar1[2] + 1;
                *puVar3 = *puVar7 & 0xfffffffe;
                *puVar13 = 6;
                *puVar13 = 0;
                *puVar3 = *puVar7;
                (*(code *)PTR_FUN_8c206d58)(*DAT_8c206d54,*DAT_8c206d50,0,1);
                ar6 = 0;
                ar7 = 1;
                a5 = *DAT_8c206d50;
                a4 = *DAT_8c206d54;
                (*(code *)PTR_FUN_8c206d58)(a4,a5,0,1);
                *(undefined4 *)(DAT_8c206d40 + iStack_2c) = 5;
                *DAT_8c206d5c = 0;
                *DAT_8c206d60 = *DAT_8c206d60 + 1;
                *puVar1 = 0;
              }
              puVar7 = DAT_8c206d64;
              if ((*(int *)(DAT_8c206d40 + iStack_30) == 2) &&
                 (uVar9 = puVar1[1], puVar1[1] = uVar9 + 1, puVar8 = PTR_g2dma_202e82_8c206d68,
                 *puVar7 < uVar9 + 1)) {
                puVar1[3] = puVar1[3] + 1;
                (*(code *)puVar8)(a4,a5,ar6,ar7);
                *(undefined4 *)(DAT_8c206d40 + iStack_28) = 0xffffffff;
                *DAT_8c206d6c = 0;
                puVar1[1] = 0;
              }
            }
          }
          iStack_28 = iStack_28 + 4;
          iStack_30 = iStack_30 + 4;
          iStack_2c = iStack_2c + 4;
        }
        uStack_24 = uStack_24 | *DAT_8c206d5c;
      }
      else {
        uVar9 = DAT_8c206b8c[6];
        DAT_8c206b8c[6] = uVar9 + 1;
        puVar5 = DAT_8c206b98;
        a5 = 1;
        if (0x10 < uVar9 + 1) {
          *DAT_8c206b98 = *DAT_8c206b94;
          puVar5[1] = *DAT_8c206b9c;
          puVar5[8] = *DAT_8c206ba0;
          puVar5[9] = *DAT_8c206ba4;
          *DAT_8c206ba8 = 0;
          puVar1[6] = 0;
        }
        uStack_24 = 1;
      }
    }
    else {
      uStack_24 = 1;
    }
    if (uStack_24 == 0) {
      pvr_206350(0,a5,ar6,ar7);
      iVar10 = pvr_206480(uStack_24,a5,ar6,ar7);
      if (iVar10 == 0) {
        return 1;
      }
      pvr_20672a(uStack_24,a5,ar6,ar7);
      *DAT_8c206d70 = 0;
    }
  }
  return 0;
}



/* pvr_206cfe @ 8c206cfe callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_206cfe(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_8c206d74;
  if (*(int *)(*DAT_8c206d78 * 4 + DAT_8c206d40) != -1) {
    if (*DAT_8c206d7c == 0) {
      *DAT_8c206d80 = *DAT_8c206d80 | 0x20;
      DAT_8c206d78[*DAT_8c206d78 + -6] = 3;
    }
    puVar2 = DAT_8c206e44;
    if ((*DAT_8c206d88 & 1) == 0) {
      iVar4 = *(int *)(DAT_8c206e48 + (*DAT_8c206e44 & 1) * 0x20);
    }
    else {
      iVar4 = *DAT_8c206d84;
    }
    *(int *)((*DAT_8c206e44 & 1) * 4 + iVar1 + 0x24) = *DAT_8c206d84;
    *DAT_8c206e5c =
         *DAT_8c206e50 & DAT_8c206e4c |
         (iVar4 - *(int *)(DAT_8c206e54 + (*puVar2 & 1) * 0x20)) * 2 & DAT_8c206e58;
    iVar6 = 0x30;
    puVar5 = (undefined4 *)(iVar4 + DAT_8c206e64);
    puVar7 = DAT_8c206e60;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  *DAT_8c206e68 = 0;
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x48) - *DAT_8c206e6c;
  return 0x4c;
}



/* FUN_8c206e14 @ 8c206e14 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206e14(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_24;
  
  iVar1 = DAT_8c206e70;
  iVar5 = (int)DAT_8c206e40;
  if (ar4 == 0) {
    iVar3 = (int)DAT_8c206f20;
    uVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = DAT_8c206f2c;
      if ((uint)(*(int *)(DAT_8c206f2c + uVar7) + iVar3) <
          (uint)(*(int *)(DAT_8c206f2c + -0x10 + uVar7) + iVar5)) {
        *(int *)(DAT_8c206f2c + iVar4) = *(int *)(DAT_8c206f2c + iVar4) + iVar3;
        *(int *)(iVar6 + -0xc + iVar4) = *(int *)(iVar6 + iVar4) + (int)DAT_8c206f22;
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      else if (*(int *)(iVar1 + 0x14) != 0) {
        (*(code *)PTR_FUN_8c206f30)(3,ar5,ar6,ar7);
      }
      uVar7 = uVar7 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (uVar7 < 0x40);
  }
  else if (ar4 == 1) {
    iVar6 = (int)DAT_8c206f24;
    iVar3 = 0;
    iVar4 = 0;
    uStack_24 = 0;
    iVar8 = 0;
    do {
      iVar2 = DAT_8c206f34;
      if ((uint)(*(int *)(DAT_8c206f34 + 8 + uStack_24 * 0x20) + (int)DAT_8c206f26) <
          (uint)(*(int *)(DAT_8c206f34 + uStack_24 * 0x20) + iVar6)) {
        if (*(uint *)(iVar1 + 0x24 + iVar3) < (uint)(*(int *)(DAT_8c206f34 + iVar4) + iVar6)) {
          *(int *)(DAT_8c206f34 + iVar8) = *(int *)(DAT_8c206f34 + iVar8) - (int)DAT_8c206f28;
          *(int *)(DAT_8c206f2c + iVar8) = *(int *)(iVar2 + iVar8) + iVar5;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      else if (10 < *(uint *)(iVar1 + 0x10)) {
        (*(code *)PTR_FUN_8c2070a0)(3,ar5,ar6,ar7);
      }
      iVar4 = iVar4 + 0x20;
      uStack_24 = uStack_24 + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 4;
    } while (uStack_24 < 2);
  }
  return 0;
}



/* FUN_8c206f76 @ 8c206f76 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206f76(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  *DAT_8c2070a4 = 4;
  piVar2 = DAT_8c2070ac;
  iVar1 = DAT_8c2070a8;
  *(int *)(DAT_8c2070a8 + 0x20) = *(int *)(DAT_8c2070a8 + 0x20) + 1;
  piVar2[*piVar2 + -6] = -3;
  if (*DAT_8c2070b0 == 1) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    FUN_8c206e14(0,ar5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c206faa @ 8c206faa callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206faa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  *DAT_8c2070a4 = 8;
  piVar2 = DAT_8c2070b0;
  iVar1 = DAT_8c2070a8;
  *(int *)(DAT_8c2070a8 + 0x1c) = *(int *)(DAT_8c2070a8 + 0x1c) + 1;
  if (*piVar2 == 1) {
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    FUN_8c206e14(1,ar5,ar6,ar7);
  }
  return 0;
}



/* FUN_8c206fd2 @ 8c206fd2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206fd2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  *DAT_8c2070a4 = 2;
  piVar1 = DAT_8c2070b4;
  if (*DAT_8c2070b4 == 0) {
    *DAT_8c2070b8 = *DAT_8c2070b8 | 0x10;
  }
  *piVar1 = 0;
  return 0;
}



/* pvr_206ff0 @ 8c206ff0 callers=0 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 pvr_206ff0(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar3 = DAT_8c2070bc;
  puVar1 = PTR_FUN_8c2070a0;
  uVar11 = *DAT_8c2070bc;
  if (((uVar11 & 8) != 0) && (iVar7 = pvr_2069a0(ar4,ar5,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,ar5,ar6,ar7);
  }
  if ((uVar11 & 0x20) != 0) {
    *puVar3 = 0x20;
    *DAT_8c2070b8 = *DAT_8c2070b8 | 4;
  }
  if ((uVar11 & 4) != 0) {
    *puVar3 = 7;
    *DAT_8c2070c0 = 0;
    piVar4 = DAT_8c2070c4;
    puVar2 = DAT_8c2070a8;
    *DAT_8c2070a8 = 0;
    puVar2[0x11] = puVar2[0x10] - *piVar4;
    if (*DAT_8c2070c8 == 0) {
      *(undefined4 *)(DAT_8c207208 + *(int *)(DAT_8c207208 + 0x14) * 4) = 5;
    }
    else {
      *DAT_8c2070c8 = 0;
      puVar5 = DAT_8c2070cc;
      puVar2[6] = 0;
      puVar2 = DAT_8c2070d0;
      *DAT_8c2070d0 = *puVar5;
      puVar2[1] = *DAT_8c2070d4;
      *DAT_8c2070dc = *DAT_8c2070d8;
      *DAT_8c2070e4 = *DAT_8c2070e0;
    }
    *DAT_8c20720c = *DAT_8c20720c | 1;
    *DAT_8c207210 = 0;
  }
  puVar10 = DAT_8c207218;
  uVar9 = DAT_8c207214;
  if ((uVar11 & DAT_8c207214) != 0) {
    uVar8 = *DAT_8c207218;
    *DAT_8c207218 = uVar8 & 0xfffffffc;
    puVar6 = PTR_sh4_dmac_203160_8c20721c;
    *puVar3 = uVar9;
    (*(code *)puVar6)(uVar8 & 0xfffffffc,uVar9,puVar10,ar7);
    ar6 = puVar10;
  }
  if ((uVar11 & 0x40) != 0) {
    *puVar3 = 0x40;
    *DAT_8c20720c = *DAT_8c20720c | 0x40;
  }
  uVar8 = (uint)DAT_8c207200;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = DAT_8c207220;
    *DAT_8c207220 = *DAT_8c207220 | 1;
    if (*DAT_8c207224 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)DAT_8c207202;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = DAT_8c207220;
    *DAT_8c207220 = *DAT_8c207220 | 2;
    if (*DAT_8c207224 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)DAT_8c207204;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = DAT_8c207220;
    *DAT_8c207220 = *DAT_8c207220 | 4;
    if (*DAT_8c207224 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)DAT_8c207206;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = DAT_8c207220;
    *DAT_8c207220 = *DAT_8c207220 | 8;
    if (*DAT_8c207224 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = DAT_8c207228;
  if ((uVar11 & DAT_8c207228) != 0) {
    *puVar3 = DAT_8c207228;
    puVar3 = DAT_8c207220;
    *DAT_8c207220 = *DAT_8c207220 | 0x10;
    if (*DAT_8c207224 == *puVar3) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar11 = *DAT_8c20722c;
  if (((uVar11 & 4) != 0) && (uVar8 = FUN_8c206f76(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 8) != 0) && (uVar8 = FUN_8c206faa(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 2) != 0) && (iVar7 = FUN_8c206fd2(uVar8,uVar9,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,uVar9,ar6,ar7);
  }
  puVar1 = PTR_FUN_8c2072e0;
  for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
    if ((int)uVar11 < 0) {
      uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (uVar11 & 0x1f);
    }
    if ((*DAT_8c2072e4 & uVar9) != 0) {
      *DAT_8c2072e4 = *DAT_8c2072e4 & ~uVar9;
      (*(code *)puVar1)(*(undefined4 *)(DAT_8c2072e8 + -4 + uVar11 * 8),
                        *(undefined4 *)(DAT_8c2072e8 + uVar11 * 8),ar6,ar7);
    }
  }
  return 0;
}



/* FUN_8c2072b2 @ 8c2072b2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2072b2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c2072c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(DAT_8c2072ec + ar4 * 8))(*(undefined4 *)(DAT_8c2072ec + ar4 * 8 + 4));
  return uVar1;
}



/* FUN_8c207300 @ 8c207300 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c207300(undefined8 *ar4,undefined8 *ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 in_dr0;
  char in_FPSCR_SZ;
  
  uVar1 = (uint)ar4 | (uint)ar5 | ar6;
  if ((uVar1 & 7) == 0) {
    uVar3 = ar6 >> 3;
    do {
      if (in_FPSCR_SZ == '\0') {
        in_dr0 = CONCAT44(*(undefined4 *)ar5,(int)in_dr0);
        ar5 = (undefined8 *)((int)ar5 + 4);
      }
      else {
        in_dr0 = *ar5;
        ar5 = ar5 + 1;
      }
      uVar3 = uVar3 - 1;
      if (in_FPSCR_SZ == '\0') {
        *(int *)ar4 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        *ar4 = in_dr0;
      }
      ar4 = ar4 + 1;
    } while (uVar3 != 0);
    return uVar1;
  }
  uVar1 = ar6 >> 2;
  do {
    uVar2 = *(undefined4 *)ar5;
    ar5 = (undefined8 *)((int)ar5 + 4);
    uVar1 = uVar1 - 1;
    *(undefined4 *)ar4 = uVar2;
    ar4 = (undefined8 *)((int)ar4 + 4);
  } while (uVar1 != 0);
  return uVar2;
}



/* FUN_8c20731e @ 8c20731e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20731e(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar6 >> 2;
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (uVar2 != 0);
  return uVar1;
}



/* FUN_8c20732e @ 8c20732e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20732e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  CacheBlockWriteBack(ar4);
  return in_r0;
}



/* FUN_8c207334 @ 8c207334 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207334(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0;
  undefined4 in_PR;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  byte in_FPSCR_SZ;
  char cVar3;
  byte in_FPSCR_FR;
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [56];
  undefined8 uStack_c;
  uint uStack_4;
  
  uStack_4 = (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
             (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
             (uint)in_FPSCR_SZ << 0x14 | (uint)in_FPSCR_FR << 0x15;
  cVar3 = (char)((~(~uStack_4 | 0x100000) & 0x100000) >> 0x14);
  if (cVar3 == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)uStack_c);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_c._0_4_ = (int)in_dr0;
    puVar1 = auStack_44;
  }
  else {
    puVar1 = auStack_84;
    uStack_c = in_dr0;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  (*ar4)(ar5);
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(puVar1 + 0x80);
  }
  return *puVar2;
}



/* FUN_8c207344 @ 8c207344 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207344(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0;
  undefined4 in_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [56];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)uStack_8);
                    /* WARNING: Ignoring partial resolution of indirect */
    uStack_8._0_4_ = (int)in_dr0;
    puVar1 = auStack_40;
  }
  else {
    puVar1 = auStack_80;
    uStack_8 = in_dr0;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  (*ar4)(ar5,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined4 *)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(puVar1 + 0x80);
  }
  return *puVar2;
}



/* FUN_8c2073a0 @ 8c2073a0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2073a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_r0;
  
  puVar1 = DAT_8c207440;
  *DAT_8c207440 = 0;
  puVar2 = DAT_8c207444;
  *DAT_8c207444 = PTR_LAB_8c207448;
  puVar2[1] = 0;
  puVar1[-0x1d] = PTR_LAB_8c20744c;
  puVar1[-0x1c] = 0;
  puVar2[4] = PTR_LAB_8c207450;
  puVar2[5] = 0;
  puVar1[-0x19] = PTR_LAB_8c207454;
  puVar1[-0x18] = 0;
  puVar2[8] = PTR_LAB_8c207458;
  puVar2[9] = 0;
  puVar1[-0x15] = PTR_LAB_8c20745c;
  puVar1[-0x14] = 0;
  puVar2[0xc] = PTR_LAB_8c207460;
  puVar2[0xd] = 0;
  puVar1[-0x11] = PTR_LAB_8c207464;
  puVar1[-0x10] = 0;
  puVar2[0x10] = PTR_DAT_8c207468;
  puVar2[0x11] = 0;
  puVar1[-0xd] = PTR_LAB_8c20746c;
  puVar1[-0xc] = 0;
  return in_r0;
}



/* FUN_8c2073f8 @ 8c2073f8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2073f8(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  
  if (ar5 == 0) {
    iVar1 = (int)DAT_8c2074c0;
    *(undefined **)(iVar1 + ar4) = PTR_LAB_8c2074cc;
    return iVar1;
  }
  if (ar5 == 1) {
    iVar1 = (int)DAT_8c2074c2;
    puVar2 = PTR_LAB_8c2074d0;
LAB_8c2074f4:
    *(undefined **)(iVar1 + ar4) = puVar2;
  }
  else {
    if (ar5 == 2) {
      iVar1 = (int)DAT_8c2074c4;
      puVar2 = PTR_LAB_8c2074d4;
    }
    else {
      if (ar5 == 3) {
        iVar1 = (int)DAT_8c2074c6;
        puVar2 = PTR_LAB_8c2074d8;
        goto LAB_8c2074f4;
      }
      if (ar5 == 4) {
        iVar1 = (int)DAT_8c2074c8;
        puVar2 = PTR_LAB_8c2074dc;
      }
      else {
        if (ar5 == 5) {
          iVar1 = (int)DAT_8c207540;
          puVar2 = PTR_LAB_8c20754c;
          goto LAB_8c2074f4;
        }
        if (ar5 == 6) {
          iVar1 = (int)DAT_8c207542;
          puVar2 = PTR_LAB_8c207550;
        }
        else {
          if (ar5 == 7) {
            iVar1 = (int)DAT_8c207544;
            puVar2 = PTR_LAB_8c207554;
            goto LAB_8c2074f4;
          }
          if (ar5 != 8) {
            return ar5;
          }
          iVar1 = (int)DAT_8c207546;
          puVar2 = PTR_DAT_8c207558;
        }
      }
    }
    *(undefined **)(iVar1 + ar4) = puVar2;
  }
  return iVar1;
}



/* FUN_8c207502 @ 8c207502 callers=10 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c207502(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte in_MD;
  byte bVar6;
  byte in_RB;
  byte bVar7;
  byte in_BL;
  byte bVar8;
  byte in_FD;
  byte bVar9;
  byte in_M;
  byte extraout_M;
  byte bVar10;
  byte in_Q;
  byte extraout_Q;
  byte bVar11;
  byte in_IMASK;
  byte bVar12;
  byte in_S;
  byte extraout_S;
  byte bVar13;
  byte in_T;
  byte bVar14;
  byte extraout_T;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  bVar8 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar6 = bVar8 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar13 = (byte)((uVar1 & 2) >> 1);
  bVar12 = (byte)((uVar2 & 0xf0) >> 4);
  bVar11 = (byte)(uVar3 >> 8) & 1;
  bVar10 = (byte)((uVar4 & 0x200) >> 9);
  bVar9 = (byte)(((uVar4 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar8 = (bVar8 & 0x10) >> 4;
  bVar7 = (bVar6 & 0x20) >> 5;
  bVar6 = ((bVar6 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  if (ar6 == 0) {
    FUN_8c2073f8(ar4,ar5,0,ar7);
    bVar10 = extraout_M;
    bVar11 = extraout_Q;
    bVar13 = extraout_S;
    bVar14 = extraout_T;
  }
  else {
    bVar14 = (ar5 & 0x20000000) != 0;
    iVar5 = (int)DAT_8c20754a;
    *(int *)(ar5 * 8 + DAT_8c20754a + ar4) = ar6;
    *(undefined4 *)(iVar5 + ar4 + ar5 * 8 + 4) = ar7;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar14 | (uint)bVar13 << 1 | (uint)bVar12 << 4 | (uint)bVar11 << 8 |
          (uint)bVar10 << 9 | (uint)bVar9 << 0xf | (uint)bVar8 << 0x1c | (uint)bVar7 << 0x1d |
         (uint)bVar6 << 0x1e) & (int)DAT_8c207600;
}



/* FUN_8c20757e @ 8c20757e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20757e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207604,0,ar4,ar5);
  return 0;
}



/* FUN_8c20759a @ 8c20759a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20759a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_ret_const_1_25eca0_8c207608)(1,ar5,ar6,ar7);
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207604,1,ar4,ar5);
  return 0;
}



/* FUN_8c2075bc @ 8c2075bc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2075bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_ret_const_1_25eca4_8c20760c)(-((ar4 == 0) - 1),ar5,ar6,ar7);
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207604,2,ar4,ar5);
  return 0;
}



/* FUN_8c207620 @ 8c207620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207620(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint a6;
  uint a7;
  
  if (((*DAT_8c2076a8 & 1) == 1) || ((*DAT_8c2076a8 & 0x2c) == 0)) {
    a6 = *DAT_8c2076ac >> 0x10;
  }
  else {
    a6 = *DAT_8c2076ac >> 0x11;
  }
  a7 = ar4 + *DAT_8c2076a4 + *DAT_8c2076a0;
  uVar1 = a7;
  if (((*DAT_8c2076a8 & 1) != 1) && ((*DAT_8c2076a8 & 0x20) != 0)) {
    uVar1 = ((int)(ar4 + (uint)(ar4 < 0)) >> 1) + *DAT_8c2076a4 + *DAT_8c2076a0;
  }
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + a6;
  }
  if ((int)a6 < (int)uVar1) {
    uVar1 = a6;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = *DAT_8c20774c & DAT_8c207748 | (int)DAT_8c207740 & uVar1;
  *DAT_8c20774c = uVar1;
  (*(code *)PTR_pvr_20a844_8c207750)((int)DAT_8c207742,uVar1,a6,a7);
  return 0;
}



/* FUN_8c2076f6 @ 8c2076f6 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2077dc) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2076f6(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_dr2;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double in_xd4;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  
  uVar5 = (undefined4)((ulonglong)in_dr2 >> 0x20);
  if ((*DAT_8c207754 & 2) == 0) {
    uVar2 = 0;
    piVar1 = ar4;
  }
  else {
    piVar1 = (int *)(*(code *)PTR_pvr_20a876_8c207758)((int)DAT_8c207744,ar5,ar6,ar7);
    uVar2 = (int)DAT_8c207740 & (uint)piVar1;
  }
  iVar3 = *DAT_8c207760 + *DAT_8c20775c;
  dVar7 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = 0.007812501848093234;
  }
  if ((*DAT_8c207764 & 1) == 1) {
    iVar4 = (int)DAT_8c207746;
  }
  else if (((*DAT_8c207804 & 1) == 1) || ((*DAT_8c207804 & 0x2c) == 0)) {
    iVar4 = (int)DAT_8c207802;
  }
  else {
    uVar6 = SUB84(dVar7,0);
    if ((*DAT_8c207804 & 0x20) == 0) {
      iVar4 = (int)DAT_8c207802;
      iVar3 = iVar3 * 2;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((undefined4)DAT_8c207808,uVar6);
      }
      else {
        dVar7 = (double)CONCAT44(DAT_8c207808._4_4_,(undefined4)DAT_8c207808);
      }
    }
    else {
      iVar4 = (int)DAT_8c207800;
      dVar7 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(uVar6,uVar6);
      }
      iVar3 = iVar3 * 2;
    }
  }
  if ((((*DAT_8c207804 & 1) != 1) && ((*DAT_8c207804 & 0x2c) != 0)) &&
     (((uint)piVar1 & DAT_8c207810) != 0)) {
    uVar2 = uVar2 + 1;
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)((float)(int)(uVar2 - iVar3) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar3 = (int)((double)CONCAT44(uVar5,(float)(int)(uVar2 - iVar3)) * dVar7);
  }
  if (iVar4 < iVar3) {
    iVar3 = iVar3 - (*DAT_8c207808._4_4_ >> 0x10);
  }
  *ar4 = iVar3;
  return 0;
}



/* FUN_8c207832 @ 8c207832 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207832(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,3,ar4,ar5);
  return 0;
}



/* FUN_8c20784e @ 8c20784e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20784e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,4,ar4,ar5);
  return 0;
}



/* FUN_8c20786a @ 8c20786a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20786a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,5,ar4,ar5);
  return 0;
}



/* FUN_8c207886 @ 8c207886 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207886(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,6,ar4,ar5);
  return 0;
}



/* FUN_8c2078a2 @ 8c2078a2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078a2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,7,ar4,ar5);
  return 0;
}



/* FUN_8c2078be @ 8c2078be callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078be(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,8,ar4,0);
  return 0;
}



/* FUN_8c2078d8 @ 8c2078d8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(*(undefined4 *)PTR_DAT_8c207900,9,ar4,0);
  return 0;
}



/* FUN_8c2079a0 @ 8c2079a0 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2079a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_pvr_20a844_8c207a48;
  (*(code *)PTR_pvr_20a844_8c207a48)(0x68,*DAT_8c207a4c,ar6,ar7);
  (*(code *)puVar1)(0x6c,*DAT_8c207a50,ar6,ar7);
  (*(code *)puVar1)(0x5c,*DAT_8c207a54,ar6,ar7);
  (*(code *)puVar1)(0x4c,*DAT_8c207a58,ar6,ar7);
  (*(code *)puVar1)((int)DAT_8c207a40,*DAT_8c207a5c,ar6,ar7);
  (*(code *)puVar1)((int)DAT_8c207a42,*DAT_8c207a60,ar6,ar7);
  (*(code *)puVar1)(0x48,*DAT_8c207a64,ar6,ar7);
  (*(code *)puVar1)(0x44,*DAT_8c207a68 & 0xfffffffe,ar6,ar7);
  uVar2 = (*(code *)puVar1)((int)DAT_8c207a44,*DAT_8c207a6c | 8,ar6,ar7);
  return uVar2;
}



/* FUN_8c2079fc @ 8c2079fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2079fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  do {
  } while (*DAT_8c207a70 == *DAT_8c207a70);
  return in_r0;
}



/* s_KAMUI_207a0e @ 8c207a0c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 s_KAMUI_207a0e(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *a4;
  undefined *a5;
  uint a6;
  
  (*(code *)PTR_s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_8c207a74)(ar4,ar5,ar6,ar7);
  if (((int)ar4 < 3) && (-1 < (int)ar4)) {
    a6 = ar4 & 3;
    a4 = PTR_s_KAMUI_8c207b64;
    a5 = PTR_s_VideoMode_8c207b60;
    uVar2 = (*(code *)PTR_s_HARDWARE_205e00_8c207b68)
                      (PTR_s_KAMUI_8c207b64,PTR_s_VideoMode_8c207b60,a6,ar7);
    puVar1 = PTR_FUN_8c207b70;
    *DAT_8c207b6c = uVar2;
    (*(code *)puVar1)(a4,a5,a6,ar7);
    return 0;
  }
  return 2;
}



/* s_DisplayMode_207aaa @ 8c207a9c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int s_DisplayMode_207aaa(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *a4;
  undefined *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *a5;
  int a5_00;
  undefined4 a7;
  int iVar7;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_24;
  
  iVar7 = 0;
  a7 = ar7;
  (*(code *)PTR_FUN_8c207b74)(ar4,ar5,ar6,ar7);
  puVar1 = PTR_s_HARDWARE_205e00_8c207b68;
  a4 = PTR_s_KAMUI_8c207b64;
  uVar4 = (*(code *)PTR_s_HARDWARE_205e00_8c207b68)
                    (PTR_s_KAMUI_8c207b64,PTR_s_DisplayMode_8c207b78,ar4,a7);
  iVar5 = (*(code *)puVar1)(a4,PTR_s_AntiAlias_8c207b7c,ar7,a7);
  a5 = PTR_s_Dither_8c207b80;
  iVar6 = (*(code *)puVar1)(a4,PTR_s_Dither_8c207b80,ar6,a7);
  *DAT_8c207b6c = uVar4 & 3;
  if ((uVar4 & 0x42) == 0x42) {
    uStack_28 = uVar4;
    (*(code *)*DAT_8c207b84)(&uStack_28,a5,ar6,a7);
    piVar2 = DAT_8c207b88;
    *DAT_8c207b88 = iStack_24;
    if ((*piVar2 < 0) || (4 < *DAT_8c207b88)) {
      *DAT_8c207b88 = 1;
    }
  }
  puVar3 = DAT_8c207c04;
  if ((((ar5 != 5) && (ar5 != 4)) && (ar5 != 3)) && ((ar5 != 1 && (ar5 != 0)))) {
    iVar7 = 1;
  }
  uStack_34 = (uint)(iVar6 != 0);
  if (iVar7 == 0) {
    *DAT_8c207c04 = uVar4;
    piVar2 = DAT_8c207c08;
    *DAT_8c207c08 = ar5;
    *DAT_8c207c0c = uStack_34;
    puVar3[3] = (uint)(iVar5 != 0);
    iVar6 = (int)DAT_8c207c02;
    a5_00 = (int)DAT_8c207c00;
    iVar5 = a5_00;
    iStack_2c = iVar6;
    if (piVar2[-1] == 1) {
      uStack_30 = 0;
      *DAT_8c207c10 = a5_00;
    }
    else {
      if (((*DAT_8c207c04 & 1) == 1) || ((*DAT_8c207c04 & 0x2c) == 0)) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = 1;
      }
      if ((*DAT_8c207c04 & 0x10) == 0) {
        iStack_2c = (int)DAT_8c207c80;
      }
      if ((*DAT_8c207c84 & 0x20) == 0) {
        if ((*DAT_8c207c84 & 0x42) == 0x42) {
          iVar5 = *(int *)(DAT_8c207c88 + *DAT_8c207c8c * 4);
          iVar5 = (int)(iVar5 + (uint)(iVar5 < 0)) >> 1;
        }
        else {
          iVar5 = (int)DAT_8c207ce0;
        }
        *DAT_8c207ce4 = iVar5;
      }
      else {
        if ((*DAT_8c207c84 & 0x42) == 0x42) {
          iVar5 = *(int *)(DAT_8c207c88 + *DAT_8c207c8c * 4);
        }
        *DAT_8c207c90 = (int)(iVar5 + (uint)(iVar5 < 0)) >> 1;
      }
    }
    iVar7 = *DAT_8c207ce8;
    if (iVar7 == 1) {
      iVar7 = 0;
      (*(code *)PTR_FUN_8c207cec)(iVar6,a5_00,ar6,a7);
    }
    else if (iVar7 == 0) {
      iVar7 = 0;
      (*(code *)PTR_FUN_8c207cf0)(iVar6,a5_00,ar6,a7);
    }
    else if (iVar7 == 2) {
      iVar7 = 0;
      (*(code *)PTR_FUN_8c207cf4)(iVar6,a5_00,ar6,a7);
    }
    else {
      iVar7 = 1;
    }
    (*(code *)PTR_FUN_8c207d84)(iStack_2c,iVar5,ar5,uStack_30);
    FUN_8c2079a0(iStack_2c,iVar5,ar5,uStack_30);
  }
  return iVar7;
}



/* FUN_8c207d32 @ 8c207d32 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207d32(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint a5;
  
  puVar1 = PTR_pvr_20a844_8c207d88;
  if (in_r0 == 1) {
    (*(code *)PTR_pvr_20a844_8c207d88)(0x44,*DAT_8c207d8c & 0xfffffffe,ar6,ar7);
    a5 = *DAT_8c207d90 | 8;
  }
  else {
    (*(code *)PTR_pvr_20a844_8c207d88)(0x44,*DAT_8c207d8c & 0xfffffffe,ar6,ar7);
    a5 = *DAT_8c207d90;
  }
  (*(code *)puVar1)((int)DAT_8c207d80,a5,ar6,ar7);
  (*(code *)puVar1)(0x44,*DAT_8c207d8c,ar6,ar7);
  return 0;
}



/* FUN_8c207da0 @ 8c207da0 callers=0 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c207efe) */
/* WARNING: Removing unreachable block (ram,0x8c207ef2) */
/* WARNING: Removing unreachable block (ram,0x8c207ef8) */
/* WARNING: Removing unreachable block (ram,0x8c207f04) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c207da0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 a4;
  int a4_00;
  int a5;
  uint a5_00;
  undefined4 a6;
  undefined4 a7;
  
  (*(code *)PTR_FUN_8c207e28)(ar4,ar5,ar6,ar7);
  *DAT_8c207e2c = (uint)(ar4 != 0);
  *DAT_8c207e30 = (uint)(ar5 != 0);
  a4_00 = (int)DAT_8c207e20;
  if (*DAT_8c207e34 == 1) {
    a5 = (int)DAT_8c207e22;
    a7 = 0;
  }
  else {
    if (((*DAT_8c207e84 & 1) == 1) || ((*DAT_8c207e84 & 0x2c) == 0)) {
      a7 = 0;
    }
    else {
      a7 = 1;
    }
    if ((*DAT_8c207e84 & 0x10) == 0) {
      a4_00 = (int)DAT_8c207e80;
    }
    if ((*DAT_8c207e84 & 0x20) == 0) {
      a5 = (int)DAT_8c207f40;
    }
    else {
      a5 = (int)DAT_8c207e82;
    }
  }
  do {
  } while (*DAT_8c207f44 == *DAT_8c207f44);
  a6 = *DAT_8c207f48;
  (*(code *)PTR_FUN_8c207f4c)(a4_00,a5,a6,a7);
  FUN_8c2079a0(a4_00,a5,a6,a7);
  puVar1 = PTR_pvr_20a844_8c207f50;
  (*(code *)PTR_pvr_20a844_8c207f50)(0x44,*DAT_8c207f54 & 0xfffffffe,a6,a7);
  (*(code *)puVar1)((int)DAT_8c207f42,*DAT_8c207f58,a6,a7);
  a5_00 = *DAT_8c207f54;
  a4 = 0x44;
  (*(code *)puVar1)(0x44,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c207f5c)(a4,a5_00,a6,a7);
  (*(code *)PTR_FUN_8c207f68)
            (*DAT_8c207f64 >> 7,DAT_8c207f64[1] >> 7,DAT_8c207f64[2] >> 7,DAT_8c207f64[3] >> 7);
  *DAT_8c207f6c = 1;
  do {
  } while (*DAT_8c207f44 == *DAT_8c207f44);
  return 0;
}



/* FUN_8c207f80 @ 8c207f80 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207f80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  
  puVar1 = PTR_pvr_20a844_8c208024;
  (*(code *)PTR_pvr_20a844_8c208024)(0x44,*DAT_8c208028 & 0xfffffffe);
  (*(code *)puVar1)((int)DAT_8c208020,*DAT_8c20802c | 8);
  (*(code *)PTR_FUN_8c208030)();
  (*(code *)PTR_FUN_8c208034)();
  (*(code *)puVar1)(0x44,*DAT_8c208028 & 0xfffffffe);
  (*(code *)puVar1)((int)DAT_8c208020,*DAT_8c20802c | 8);
  do {
  } while (*DAT_8c208038 == *DAT_8c208038);
  *DAT_8c20803c = 1;
  return 0;
}



/* FUN_8c207f84 @ 8c207f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207f84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint a5;
  uint in_r3;
  int a4;
  
  puVar1 = PTR_pvr_20a844_8c208024;
  (*(code *)PTR_pvr_20a844_8c208024)(0x44,*DAT_8c208028 & in_r3,ar6,ar7);
  a4 = (int)DAT_8c208020;
  a5 = *DAT_8c20802c | 8;
  (*(code *)puVar1)(a4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c208030)(a4,a5,ar6,ar7);
  (*(code *)PTR_FUN_8c208034)(a4,a5,ar6,ar7);
  (*(code *)puVar1)(0x44,*DAT_8c208028 & 0xfffffffe,ar6,ar7);
  (*(code *)puVar1)((int)DAT_8c208020,*DAT_8c20802c | 8,ar6,ar7);
  do {
  } while (*DAT_8c208038 == *DAT_8c208038);
  *DAT_8c20803c = 1;
  return 0;
}



/* FUN_8c207fe4 @ 8c207fe4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207fe4(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int in_r1;
  int *in_r2;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_r14;
  
  piVar2 = DAT_8c208044;
  puVar1 = PTR_pvr_20a844_8c208024;
  uVar8 = 0;
  if (in_r1 < *in_r2 + ar4) {
    if (*DAT_8c208044 != ar4) {
      *DAT_8c208044 = ar4;
      piVar3 = DAT_8c208048;
      *DAT_8c208048 = *DAT_8c208040 + *piVar2;
      (*(code *)puVar1)((int)DAT_8c208022,*piVar3,ar6,ar7);
    }
  }
  else {
    uVar8 = 0x12;
  }
  puVar4 = DAT_8c208110;
  if ((*DAT_8c208104 + unaff_r14 < 1) && (*DAT_8c208108 + unaff_r14 < 1)) {
    uVar8 = 0x12;
  }
  else if (*DAT_8c20810c != unaff_r14) {
    *DAT_8c208110 = *DAT_8c208104 + unaff_r14 | (*DAT_8c208108 + unaff_r14) * 0x10000;
    (*(code *)puVar1)((int)DAT_8c208100,*puVar4,ar6,ar7);
    uVar7 = *DAT_8c208118 & DAT_8c208114;
    if (unaff_r14 < 1) {
      if ((*DAT_8c2081c8 & 1) == 1) {
        uVar5 = (uint)DAT_8c2081c0;
      }
      else if ((*DAT_8c2081c8 & 0x42) == 0x42) {
        iVar6 = *(int *)(DAT_8c2081cc + *DAT_8c2081d0 * 4);
        uVar5 = ((int)(iVar6 + (uint)(iVar6 < 0)) >> 1) - 2;
      }
      else {
        uVar5 = (uint)DAT_8c2081c2;
      }
    }
    else {
      iVar6 = unaff_r14;
      if (unaff_r14 <= *DAT_8c208120) {
        iVar6 = *DAT_8c208120;
      }
      uVar5 = *DAT_8c20811c - iVar6;
      if (*DAT_8c20811c < unaff_r14 + uVar5) {
        uVar5 = *DAT_8c20811c - *DAT_8c208120;
      }
      if (*DAT_8c20811c < uVar5) {
        *DAT_8c20811c = uVar5;
      }
    }
    *DAT_8c2081d4 = unaff_r14;
    *DAT_8c2081d8 = (uVar5 & (int)DAT_8c2081c4) << 10 | uVar7;
    (*(code *)puVar1)(0x44,*DAT_8c2081dc & 0xfffffffe,ar6,ar7);
    (*(code *)puVar1)(0x5c,*DAT_8c2081d8,ar6,ar7);
    (*(code *)puVar1)(0x44,*DAT_8c2081dc,ar6,ar7);
  }
  return uVar8;
}



/* FUN_8c2081e0 @ 8c2081e0 callers=7 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2081e0(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  uint *puVar1;
  uint in_r0;
  
  puVar1 = DAT_8c208300;
  *DAT_8c208300 = (ar4 & 7) << 0x18;
  if (ar6 != 0) {
    in_r0 = *puVar1 | DAT_8c208304;
    *puVar1 = in_r0;
  }
  if (ar5 != 0) {
    *DAT_8c208300 = *DAT_8c208300 | DAT_8c208308;
  }
  return in_r0;
}



/* FUN_8c20820a @ 8c20820a callers=7 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20820a(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((DAT_8c20830c & ar4) != 0) {
    iVar1 = 2;
    if ((DAT_8c208310 & ar4) != 0) {
      iVar1 = 3;
    }
    if ((ar4 & DAT_8c208314) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



/* FUN_8c208228 @ 8c208228 callers=5 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c208228(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar4 & DAT_8c208310) != 0) {
    iVar1 = ar5 * 4;
    ar5 = ar5 + 1;
    *(undefined4 *)(DAT_8c208318 + iVar1) = ar6;
  }
  return ar5;
}



/* FUN_8c20823c @ 8c20823c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20823c(uint ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c208318;
  if ((DAT_8c20830c & ar4) != 0) {
    iVar2 = ar5;
    if ((ar4 & DAT_8c208314) == 0) {
      *(uint *)(DAT_8c208318 + ar5 * 4) = DAT_8c20831c & ar6;
      ar6 = ar6 << 0x10;
      iVar2 = ar5 + 1;
    }
    ar5 = iVar2 + 1;
    *(uint *)(iVar1 + iVar2 * 4) = ar6;
  }
  return ar5;
}



/* FUN_8c208270 @ 8c208270 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c208270(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_8c208318;
  if ((ar4 & DAT_8c20830c) != 0) {
    iVar2 = ar5 + 1;
    *(undefined4 *)(DAT_8c208318 + ar5 * 4) = ar6;
    ar5 = ar5 + 2;
    *(undefined4 *)(iVar1 + iVar2 * 4) = ar7;
  }
  return ar5;
}



/* FUN_8c20828c @ 8c20828c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20828c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *DAT_8c208318 = DAT_8c208320;
  puVar1 = DAT_8c208324;
  *DAT_8c208324 = DAT_8c208328;
  *DAT_8c20832c = 0;
  puVar3 = DAT_8c208334;
  uVar2 = DAT_8c208330;
  *DAT_8c208334 = DAT_8c208330;
  puVar5 = DAT_8c20833c;
  uVar4 = DAT_8c208338;
  *DAT_8c20833c = DAT_8c208338;
  uVar6 = DAT_8c208340;
  puVar1[4] = DAT_8c208340;
  uVar7 = DAT_8c208344;
  puVar3[3] = DAT_8c208344;
  puVar5[3] = DAT_8c208348;
  *DAT_8c20834c = uVar2;
  puVar3[6] = uVar6;
  puVar5[6] = uVar7;
  puVar1 = DAT_8c208350;
  *DAT_8c208350 = DAT_8c208354;
  *DAT_8c208358 = uVar4;
  puVar5[9] = uVar6;
  *DAT_8c20835c = uVar7;
  *DAT_8c208360 = puVar1[-6];
  *DAT_8c208300 = DAT_8c208310;
  return 0;
}



/* FUN_8c208380 @ 8c208380 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208380(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *a7;
  undefined4 a4;
  int iStack_14;
  int aiStack_10 [2];
  
  puVar1 = DAT_8c20866c;
  iVar2 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  a4 = *DAT_8c208660;
  uVar3 = *DAT_8c208664;
  uVar4 = *DAT_8c208668;
  *DAT_8c20866c = a4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = *(undefined4 *)(iVar2 + 4);
  puVar1[4] = *(undefined4 *)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(iVar2 + 0xc);
  puVar1[6] = *(undefined4 *)(iVar2 + 0x18);
  puVar1[7] = *(undefined4 *)(iStack_14 + 4);
  puVar1[8] = *(undefined4 *)(iStack_14 + 8);
  puVar1[9] = *(undefined4 *)(iStack_14 + 0xc);
  puVar1[10] = *(undefined4 *)(iStack_14 + 0x18);
  puVar1[0xb] = *(undefined4 *)(aiStack_10[0] + 4);
  puVar1[0xc] = *(undefined4 *)(aiStack_10[0] + 8);
  puVar1[0xd] = *(undefined4 *)(aiStack_10[0] + 0xc);
  puVar1[0xe] = *(undefined4 *)(aiStack_10[0] + 0x18);
  *DAT_8c208670 = 0x3c;
  uVar3 = FUN_8c20820a(a4,0x3c,&iStack_14,a7);
  FUN_8c2081e0(uVar3,0,0,a7);
  *DAT_8c208674 = *(undefined4 *)(iVar2 + 0xc);
  return 0;
}



/* FUN_8c208484 @ 8c208484 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208484(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *a7;
  undefined4 a4;
  float fVar5;
  double in_dr2;
  undefined4 in_fr5;
  double dVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_14;
  int aiStack_10 [2];
  double dVar6;
  
  puVar1 = DAT_8c20866c;
  iVar2 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  a4 = *DAT_8c208660;
  uVar3 = *DAT_8c208664;
  uVar4 = *DAT_8c208668;
  *DAT_8c20866c = a4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = *(undefined4 *)(iVar2 + 4);
  puVar1[4] = *(undefined4 *)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(iVar2 + 0xc);
  puVar1 = DAT_8c20866c;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44((undefined4)DAT_8c208678,in_fr5);
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x10));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c208678._4_4_,(undefined4)DAT_8c208678);
  }
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(in_dr2,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar9 = (int)fVar5;
  }
  else {
    dVar6 = in_dr2 * dVar7;
    iVar9 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iVar2 + 0x14));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar10 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar10 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iVar2 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar11 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar11 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iVar2 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    uVar12 = (uint)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    uVar12 = (uint)dVar6;
  }
  DAT_8c20866c[6] = iVar9 << 0x18 | iVar10 << 0x10 | iVar11 << 8 | uVar12;
  puVar1[7] = *(undefined4 *)(iStack_14 + 4);
  puVar1[8] = *(undefined4 *)(iStack_14 + 8);
  puVar1[9] = *(undefined4 *)(iStack_14 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x10));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar9 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar9 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x14));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar10 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar10 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar11 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar11 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    uVar12 = (uint)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    uVar12 = (uint)dVar6;
  }
  puVar1[10] = iVar9 << 0x18 | iVar10 << 0x10 | iVar11 << 8 | uVar12;
  puVar1[0xb] = *(undefined4 *)(aiStack_10[0] + 4);
  puVar1[0xc] = *(undefined4 *)(aiStack_10[0] + 8);
  puVar1[0xd] = *(undefined4 *)(aiStack_10[0] + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x10));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar9 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar9 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x14));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar10 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar10 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    iVar11 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    iVar11 = (int)dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    uVar12 = (uint)(SUB84(dVar6,0) * fVar8);
  }
  else {
    uVar12 = (uint)(dVar6 * dVar7);
  }
  puVar1[0xe] = iVar9 << 0x18 | iVar10 << 0x10 | iVar11 << 8 | uVar12;
  *DAT_8c208670 = 0x3c;
  uVar3 = FUN_8c20820a(a4,0x3c,&iStack_14,a7);
  FUN_8c2081e0(uVar3,0,0,a7);
  *DAT_8c208674 = *(undefined4 *)(iVar2 + 0xc);
  return 0;
}



/* FUN_8c208680 @ 8c208680 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208680(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *a7;
  undefined4 a4;
  float fVar5;
  double in_dr2;
  undefined4 in_fr5;
  double dVar7;
  float fVar8;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_14;
  int aiStack_10 [2];
  double dVar6;
  
  puVar1 = DAT_8c20896c;
  iVar2 = *ar4;
  a7 = &iStack_14;
  iStack_14 = ar4[1];
  aiStack_10[0] = ar4[2];
  a4 = *DAT_8c208960;
  uVar3 = *DAT_8c208964;
  uVar4 = *DAT_8c208968;
  *DAT_8c20896c = a4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = *(undefined4 *)(iVar2 + 4);
  puVar1[4] = *(undefined4 *)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(iVar2 + 0xc);
  puVar1 = DAT_8c20896c;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44((undefined4)DAT_8c208970,in_fr5);
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x18));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c208970._4_4_,(undefined4)DAT_8c208970);
  }
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(in_dr2,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    dVar6 = in_dr2 * dVar7;
    uVar9 = (uint)dVar6;
  }
  DAT_8c20896c[6] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  puVar1[7] = *(undefined4 *)(iStack_14 + 4);
  puVar1[8] = *(undefined4 *)(iStack_14 + 8);
  puVar1[9] = *(undefined4 *)(iStack_14 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    uVar9 = (uint)dVar6;
  }
  puVar1[10] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  puVar1[0xb] = *(undefined4 *)(aiStack_10[0] + 4);
  puVar1[0xc] = *(undefined4 *)(aiStack_10[0] + 8);
  puVar1[0xd] = *(undefined4 *)(aiStack_10[0] + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)(SUB84(dVar6,0) * fVar8);
  }
  else {
    uVar9 = (uint)(dVar6 * dVar7);
  }
  puVar1[0xe] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  *DAT_8c208970._4_4_ = 0x3c;
  uVar3 = FUN_8c20820a(a4,0x3c,aiStack_10,a7);
  FUN_8c2081e0(uVar3,0,0,a7);
  *DAT_8c208978 = *(undefined4 *)(iVar2 + 0xc);
  return 0;
}



/* FUN_8c2087e4 @ 8c2087e4 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2087e4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 a4;
  
  puVar1 = DAT_8c20896c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  a4 = *DAT_8c208960;
  uVar6 = *DAT_8c208964;
  uVar7 = *DAT_8c208968;
  *DAT_8c20896c = a4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = *(undefined4 *)(iVar4 + 4);
  puVar1[4] = *(undefined4 *)(iVar4 + 8);
  puVar1[5] = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar2 = FUN_8c208270(a4,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  DAT_8c20896c[iVar2] = *(undefined4 *)(iVar4 + 0x18);
  iVar2 = FUN_8c208228(a4,iVar2 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  puVar1 = DAT_8c20896c;
  DAT_8c20896c[iVar2] = *(undefined4 *)(iVar3 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar3 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar2 = FUN_8c208270(a4,iVar2 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  DAT_8c20896c[iVar2] = *(undefined4 *)(iVar3 + 0x18);
  iVar2 = FUN_8c208228(a4,iVar2 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  puVar1 = DAT_8c20896c;
  DAT_8c20896c[iVar2] = *(undefined4 *)(iVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar5 + 0xc);
  uVar7 = *(undefined4 *)(iVar5 + 0x14);
  iVar2 = FUN_8c208270(a4,iVar2 + 3,*(undefined4 *)(iVar5 + 0x10),uVar7);
  iVar3 = iVar2 + 1;
  DAT_8c20896c[iVar2] = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  iVar2 = FUN_8c208228(a4,iVar3,uVar6,uVar7);
  *DAT_8c208970._4_4_ = iVar2 << 2;
  uVar6 = FUN_8c20820a(a4,iVar3,uVar6,uVar7);
  FUN_8c2081e0(uVar6,0,0,uVar7);
  *DAT_8c208978 = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c208980 @ 8c208980 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208980(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 a4;
  
  puVar1 = DAT_8c208aec;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  a4 = *DAT_8c208ae0;
  uVar6 = *DAT_8c208ae4;
  uVar7 = *DAT_8c208ae8;
  *DAT_8c208aec = a4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = *(undefined4 *)(iVar4 + 4);
  puVar1[4] = *(undefined4 *)(iVar4 + 8);
  puVar1[5] = *(undefined4 *)(iVar4 + 0xc);
  iVar2 = FUN_8c20823c(a4,6,*(undefined4 *)(iVar4 + 0x10),ar7);
  DAT_8c208aec[iVar2] = *(undefined4 *)(iVar4 + 0x18);
  iVar2 = FUN_8c208228(a4,iVar2 + 1,*(undefined4 *)(iVar4 + 0x1c),ar7);
  puVar1 = DAT_8c208aec;
  DAT_8c208aec[iVar2] = *(undefined4 *)(iVar3 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar3 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = FUN_8c20823c(a4,iVar2 + 3,*(undefined4 *)(iVar3 + 0x10),ar7);
  DAT_8c208aec[iVar2] = *(undefined4 *)(iVar3 + 0x18);
  iVar2 = FUN_8c208228(a4,iVar2 + 1,*(undefined4 *)(iVar4 + 0x1c),ar7);
  puVar1 = DAT_8c208aec;
  DAT_8c208aec[iVar2] = *(undefined4 *)(iVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = FUN_8c20823c(a4,iVar2 + 3,*(undefined4 *)(iVar5 + 0x10),ar7);
  iVar3 = iVar2 + 1;
  DAT_8c208aec[iVar2] = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar4 + 0x1c);
  iVar2 = FUN_8c208228(a4,iVar3,uVar6,ar7);
  *DAT_8c208af0 = iVar2 << 2;
  uVar6 = FUN_8c20820a(a4,iVar3,uVar6,ar7);
  FUN_8c2081e0(uVar6,0,0,ar7);
  *DAT_8c208af4 = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c208b00 @ 8c208b00 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208b00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 a4;
  undefined1 *puVar9;
  float fVar10;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c208dec;
  if (in_FPSCR_SZ == '\0') {
    puVar9 = auStack_1c;
  }
  else {
    puVar9 = auStack_20;
  }
  *(undefined4 *)(puVar9 + -4) = in_PR;
  piVar5 = (int *)(puVar9 + -0x10);
  piVar8 = (int *)(puVar9 + -0xc);
  *piVar5 = *ar4;
  piVar7 = (int *)(puVar9 + -8);
  *piVar8 = ar4[1];
  *piVar7 = ar4[2];
  a4 = *DAT_8c208de0;
  uVar6 = *DAT_8c208de4;
  uVar3 = *DAT_8c208de8;
  *DAT_8c208dec = a4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*piVar5 + 4);
  puVar1[4] = *(undefined4 *)(*piVar5 + 8);
  puVar1[5] = *(undefined4 *)(*piVar5 + 0xc);
  *(int *)(puVar9 + -0x14) = *piVar5;
  uVar3 = *(undefined4 *)(*piVar5 + 0x14);
  iVar2 = FUN_8c208270(a4,6,*(undefined4 *)(*(int *)(puVar9 + -0x14) + 0x10),uVar3);
  iVar4 = *piVar5;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
    in_fr15 = (float)DAT_8c208df0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar12 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar13 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    uVar14 = (uint)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar14 = (uint)in_dr2;
  }
  DAT_8c208dec[iVar2] = iVar11 << 0x18 | iVar12 << 0x10 | iVar13 << 8 | uVar14;
  iVar4 = *piVar5;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar12 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar14 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar14 = (uint)in_dr2;
  }
  iVar2 = FUN_8c208228(a4,iVar2 + 1,iVar11 << 0x18 | iVar12 << 0x10 | iVar13 << 8 | uVar14,uVar3);
  puVar1 = DAT_8c208dec;
  DAT_8c208dec[iVar2] = *(undefined4 *)(*piVar8 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar8 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar8 + 0xc);
  *(int *)(puVar9 + -0x14) = *piVar8;
  uVar3 = *(undefined4 *)(*piVar8 + 0x14);
  iVar2 = FUN_8c208270(a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar9 + -0x14) + 0x10),uVar3);
  iVar4 = *piVar8;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar12 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar13 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    uVar14 = (uint)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar14 = (uint)in_dr2;
  }
  DAT_8c208dec[iVar2] = iVar11 << 0x18 | iVar12 << 0x10 | iVar13 << 8 | uVar14;
  iVar4 = *piVar8;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar12 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar14 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar14 = (uint)in_dr2;
  }
  iVar2 = FUN_8c208228(a4,iVar2 + 1,iVar11 << 0x18 | iVar12 << 0x10 | iVar13 << 8 | uVar14,uVar3);
  puVar1 = DAT_8c208dec;
  DAT_8c208dec[iVar2] = *(undefined4 *)(*piVar7 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar7 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar7 + 0xc);
  *(int *)(puVar9 + -0x14) = *piVar7;
  uVar3 = *(undefined4 *)(*piVar7 + 0x14);
  iVar2 = FUN_8c208270(a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar9 + -0x14) + 0x10),uVar3);
  iVar4 = *piVar7;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  iVar12 = iVar2 + 1;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar13 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar15 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar15 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    uVar14 = (uint)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar14 = (uint)in_dr2;
  }
  DAT_8c208dec[iVar2] = iVar11 << 0x18 | iVar13 << 0x10 | iVar15 << 8 | uVar14;
  iVar2 = *piVar7;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar4 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar4 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar10 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar10);
    iVar11 = (int)fVar10;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar13 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar13 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar14 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar14 = (uint)in_dr2;
  }
  uVar14 = iVar4 << 0x18 | iVar11 << 0x10 | iVar13 << 8 | uVar14;
  iVar2 = FUN_8c208228(a4,iVar12,uVar14,uVar3);
  *DAT_8c208df0._4_4_ = iVar2 << 2;
  uVar6 = FUN_8c20820a(a4,iVar12,uVar14,uVar3);
  FUN_8c2081e0(uVar6,0,0,uVar3);
  *DAT_8c208df8 = *(undefined4 *)(*piVar5 + 0xc);
  return 0;
}



/* FUN_8c208e00 @ 8c208e00 callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c208e00(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 a4;
  undefined1 *puVar8;
  float fVar9;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c2090cc;
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_1c;
  }
  else {
    puVar8 = auStack_20;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  piVar7 = (int *)(puVar8 + -0xc);
  *(undefined4 *)(puVar8 + -0x10) = *ar4;
  piVar6 = (int *)(puVar8 + -8);
  *piVar7 = ar4[1];
  *piVar6 = ar4[2];
  a4 = *DAT_8c2090c0;
  uVar5 = *DAT_8c2090c4;
  uVar3 = *DAT_8c2090c8;
  *DAT_8c2090cc = a4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*(int *)(puVar8 + -0x10) + 4);
  puVar1[4] = *(undefined4 *)(*(int *)(puVar8 + -0x10) + 8);
  puVar1[5] = *(undefined4 *)(*(int *)(puVar8 + -0x10) + 0xc);
  iVar2 = FUN_8c20823c(a4,6,*(undefined4 *)(*(int *)(puVar8 + -0x10) + 0x10),ar7);
  iVar4 = *(int *)(puVar8 + -0x10);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
    in_fr15 = (float)DAT_8c2090d0;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar11 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar12 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar13 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar13 = (uint)in_dr2;
  }
  DAT_8c2090cc[iVar2] = iVar10 << 0x18 | iVar11 << 0x10 | iVar12 << 8 | uVar13;
  iVar4 = *(int *)(puVar8 + -0x10);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar11 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar13 = (uint)in_dr2;
  }
  iVar2 = FUN_8c208228(a4,iVar2 + 1,iVar10 << 0x18 | iVar11 << 0x10 | iVar12 << 8 | uVar13,ar7);
  puVar1 = DAT_8c2090cc;
  DAT_8c2090cc[iVar2] = *(undefined4 *)(*piVar7 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar7 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar7 + 0xc);
  iVar2 = FUN_8c20823c(a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar8 + -0x10) + 0x10),ar7);
  iVar4 = *piVar7;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar11 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar12 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar13 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar13 = (uint)in_dr2;
  }
  DAT_8c2090cc[iVar2] = iVar10 << 0x18 | iVar11 << 0x10 | iVar12 << 8 | uVar13;
  iVar4 = *piVar7;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar11 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar11 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar13 = (uint)in_dr2;
  }
  iVar2 = FUN_8c208228(a4,iVar2 + 1,iVar10 << 0x18 | iVar11 << 0x10 | iVar12 << 8 | uVar13,ar7);
  puVar1 = DAT_8c2090cc;
  DAT_8c2090cc[iVar2] = *(undefined4 *)(*piVar6 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar6 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar6 + 0xc);
  iVar2 = FUN_8c20823c(a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar8 + -0x10) + 0x10),ar7);
  iVar4 = *piVar6;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  iVar11 = iVar2 + 1;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar12 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar14 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar14 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar13 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar13 = (uint)in_dr2;
  }
  DAT_8c2090cc[iVar2] = iVar10 << 0x18 | iVar12 << 0x10 | iVar14 << 8 | uVar13;
  iVar2 = *piVar6;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x30));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar4 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar4 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x34));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    iVar10 = (int)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x38));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    iVar12 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar12 = (int)in_dr2;
  }
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x3c));
  }
  if (in_FPSCR_PR == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (in_FPSCR_PR == '\0') {
    uVar13 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar13 = (uint)in_dr2;
  }
  uVar13 = iVar4 << 0x18 | iVar10 << 0x10 | iVar12 << 8 | uVar13;
  iVar2 = FUN_8c208228(a4,iVar11,uVar13,ar7);
  *DAT_8c2090d0._4_4_ = iVar2 << 2;
  uVar3 = FUN_8c20820a(a4,iVar11,uVar13,ar7);
  FUN_8c2081e0(uVar3,0,0,ar7);
  *DAT_8c2090d8 = *(undefined4 *)(*(int *)(puVar8 + -0x10) + 0xc);
  return 0;
}



/* FUN_8c2090e0 @ 8c2090e0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2090e0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int a5;
  undefined4 a4;
  undefined1 *puVar8;
  float fVar9;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  uint uVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c20934c;
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_1c;
  }
  else {
    puVar8 = auStack_20;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  piVar4 = (int *)(puVar8 + -0x10);
  piVar7 = (int *)(puVar8 + -0xc);
  *piVar4 = *ar4;
  piVar6 = (int *)(puVar8 + -8);
  *piVar7 = ar4[1];
  *piVar6 = ar4[2];
  a4 = *DAT_8c209340;
  uVar5 = *DAT_8c209344;
  uVar3 = *DAT_8c209348;
  *DAT_8c20934c = a4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*piVar4 + 4);
  puVar1[4] = *(undefined4 *)(*piVar4 + 8);
  puVar1[5] = *(undefined4 *)(*piVar4 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar4;
  uVar3 = *(undefined4 *)(*piVar4 + 0x14);
  iVar2 = FUN_8c208270(a4,6,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar4 + 0x18));
    in_fr15 = DAT_8c209350;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c20934c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar4 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  iVar2 = FUN_8c208228(a4,iVar2 + 1,uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10,uVar3);
  puVar1 = DAT_8c20934c;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar4 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c20934c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar7 + 4);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar7 + 8);
  puVar1[iVar2 + 3] = *(undefined4 *)(*piVar7 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar7;
  uVar3 = *(undefined4 *)(*piVar7 + 0x14);
  iVar2 = FUN_8c208270(a4,iVar2 + 4,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar7 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c20934c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar7 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c209354)
                    (a4,iVar2 + 1,uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10,uVar3);
  puVar1 = DAT_8c20934c;
  DAT_8c20934c[iVar2] = *(undefined4 *)(*piVar6 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar6 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar6 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar6;
  uVar3 = *(undefined4 *)(*piVar6 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209358)
                    (a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
  }
  a5 = iVar2 + 1;
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c20934c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    uVar10 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar10 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar10 = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  iVar2 = (*(code *)PTR_FUN_8c209354)(a4,a5,uVar10,uVar3);
  *DAT_8c20935c = iVar2 << 2;
  uVar5 = (*(code *)PTR_FUN_8c209360)(a4,a5,uVar10,uVar3);
  (*(code *)PTR_FUN_8c209364)(uVar5,0,0,uVar3);
  *DAT_8c209368 = *(undefined4 *)(*piVar4 + 0xc);
  return 0;
}



/* FUN_8c209380 @ 8c209380 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209380(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int a5;
  undefined4 a4;
  undefined1 *puVar7;
  float fVar8;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c2095cc;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = auStack_1c;
  }
  else {
    puVar7 = auStack_20;
  }
  *(undefined4 *)(puVar7 + -4) = in_PR;
  piVar6 = (int *)(puVar7 + -0xc);
  *(undefined4 *)(puVar7 + -0x10) = *ar4;
  piVar5 = (int *)(puVar7 + -8);
  *piVar6 = ar4[1];
  *piVar5 = ar4[2];
  a4 = *DAT_8c2095c0;
  uVar4 = *DAT_8c2095c4;
  uVar3 = *DAT_8c2095c8;
  *DAT_8c2095cc = a4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 4);
  puVar1[4] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 8);
  puVar1[5] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c2095d0)(a4,6,*(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                              *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x18));
    in_fr15 = DAT_8c2095d4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c2095cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                              *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c2095d8)
                    (a4,iVar2 + 1,uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9,ar7);
  puVar1 = DAT_8c2095cc;
  DAT_8c2095cc[iVar2] = *(undefined4 *)(*piVar6 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar6 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar6 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c2095d0)
                    (a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c2095cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c2095d8)
                    (a4,iVar2 + 1,uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9,ar7);
  puVar1 = DAT_8c2095cc;
  DAT_8c2095cc[iVar2] = *(undefined4 *)(*piVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar5 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c2095d0)
                    (a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar5 + 0x18));
  }
  a5 = iVar2 + 1;
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c2095cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar5 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar9 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar9 = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  iVar2 = (*(code *)PTR_FUN_8c2095d8)(a4,a5,uVar9,ar7);
  *DAT_8c2095dc = iVar2 << 2;
  uVar3 = (*(code *)PTR_FUN_8c2095e0)(a4,a5,uVar9,ar7);
  (*(code *)PTR_FUN_8c2095e4)(uVar3,0,0,ar7);
  *DAT_8c2095e8 = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0xc);
  return 0;
}



/* FUN_8c209600 @ 8c209600 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209600(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *a7;
  undefined4 a4;
  int iStack_14;
  int aiStack_10 [2];
  
  puVar1 = DAT_8c20988c;
  iVar2 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  a4 = *DAT_8c209880;
  uVar3 = *DAT_8c209884;
  uVar4 = *DAT_8c209888;
  *DAT_8c20988c = a4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = *(undefined4 *)(iVar2 + 4);
  puVar1[4] = *(undefined4 *)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(iVar2 + 0xc);
  puVar1[6] = *(undefined4 *)(iVar2 + 0x10);
  puVar1[7] = *(undefined4 *)(iStack_14 + 4);
  puVar1[8] = *(undefined4 *)(iStack_14 + 8);
  puVar1[9] = *(undefined4 *)(iStack_14 + 0xc);
  puVar1[10] = *(undefined4 *)(iStack_14 + 0x10);
  puVar1[0xb] = *(undefined4 *)(aiStack_10[0] + 4);
  puVar1[0xc] = *(undefined4 *)(aiStack_10[0] + 8);
  puVar1[0xd] = *(undefined4 *)(aiStack_10[0] + 0xc);
  puVar1[0xe] = *(undefined4 *)(aiStack_10[0] + 0x10);
  *DAT_8c209890 = 0x3c;
  uVar3 = (*(code *)PTR_FUN_8c209894)(a4,0x3c,&iStack_14,a7);
  (*(code *)PTR_FUN_8c209898)(uVar3,0,0,a7);
  *DAT_8c20989c = *(undefined4 *)(iVar2 + 0xc);
  return 0;
}



/* FUN_8c209708 @ 8c209708 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209708(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *a7;
  undefined4 a4;
  float fVar5;
  double in_dr2;
  undefined4 in_fr5;
  double dVar7;
  float fVar8;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  int iStack_14;
  int aiStack_10 [2];
  double dVar6;
  
  puVar1 = DAT_8c20988c;
  iVar2 = *ar4;
  a7 = &iStack_14;
  iStack_14 = ar4[1];
  aiStack_10[0] = ar4[2];
  a4 = *DAT_8c209880;
  uVar3 = *DAT_8c209884;
  uVar4 = *DAT_8c209888;
  *DAT_8c20988c = a4;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = *(undefined4 *)(iVar2 + 4);
  puVar1[4] = *(undefined4 *)(iVar2 + 8);
  puVar1[5] = *(undefined4 *)(iVar2 + 0xc);
  puVar1 = DAT_8c20988c;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44((undefined4)DAT_8c2098a0,in_fr5);
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar2 + 0x10));
  }
  else {
    dVar7 = (double)CONCAT44(DAT_8c2098a0._4_4_,(undefined4)DAT_8c2098a0);
  }
  fVar8 = (float)((ulonglong)dVar7 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(in_dr2,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    dVar6 = in_dr2 * dVar7;
    uVar9 = (uint)dVar6;
  }
  DAT_8c20988c[6] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  puVar1[7] = *(undefined4 *)(iStack_14 + 4);
  puVar1[8] = *(undefined4 *)(iStack_14 + 8);
  puVar1[9] = *(undefined4 *)(iStack_14 + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(iStack_14 + 0x10));
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = SUB84(dVar6,0) * fVar8;
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    dVar6 = dVar6 * dVar7;
    uVar9 = (uint)dVar6;
  }
  puVar1[10] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  puVar1[0xb] = *(undefined4 *)(aiStack_10[0] + 4);
  puVar1[0xc] = *(undefined4 *)(aiStack_10[0] + 8);
  puVar1[0xd] = *(undefined4 *)(aiStack_10[0] + 0xc);
  if (in_FPSCR_SZ == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),*(undefined4 *)(aiStack_10[0] + 0x10));
  }
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)(SUB84(dVar6,0) * fVar8);
  }
  else {
    uVar9 = (uint)(dVar6 * dVar7);
  }
  puVar1[0xe] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  *DAT_8c209890 = 0x3c;
  uVar3 = (*(code *)PTR_FUN_8c209894)(a4,0x3c,aiStack_10,a7);
  (*(code *)PTR_FUN_8c209898)(uVar3,0,0,a7);
  *DAT_8c20989c = *(undefined4 *)(iVar2 + 0xc);
  return 0;
}



/* FUN_8c2098c0 @ 8c2098c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2098c0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 a4;
  
  puVar1 = DAT_8c209bcc;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  a4 = *DAT_8c209bc0;
  uVar6 = *DAT_8c209bc4;
  uVar7 = *DAT_8c209bc8;
  *DAT_8c209bcc = a4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = *(undefined4 *)(iVar4 + 4);
  puVar1[4] = *(undefined4 *)(iVar4 + 8);
  puVar1[5] = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209bd0)(a4,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar4 + 0x18);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar2 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  puVar1 = DAT_8c209bcc;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar3 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar3 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209bd0)(a4,iVar2 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar3 + 0x18);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar2 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  puVar1 = DAT_8c209bcc;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar5 + 0xc);
  uVar7 = *(undefined4 *)(iVar5 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209bd0)(a4,iVar2 + 3,*(undefined4 *)(iVar5 + 0x10),uVar7);
  iVar3 = iVar2 + 1;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar3,uVar6,uVar7);
  *DAT_8c209bd8 = iVar2 << 2;
  uVar6 = (*(code *)PTR_FUN_8c209bdc)(a4,iVar3,uVar6,uVar7);
  (*(code *)PTR_FUN_8c209be0)(uVar6,0,0,uVar7);
  *DAT_8c209be4 = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209a40 @ 8c209a40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209a40(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 a4;
  
  puVar1 = DAT_8c209bcc;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  a4 = *DAT_8c209bc0;
  uVar6 = *DAT_8c209bc4;
  uVar7 = *DAT_8c209bc8;
  *DAT_8c209bcc = a4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = *(undefined4 *)(iVar4 + 4);
  puVar1[4] = *(undefined4 *)(iVar4 + 8);
  puVar1[5] = *(undefined4 *)(iVar4 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c209be8)(a4,6,*(undefined4 *)(iVar4 + 0x10),ar7);
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar4 + 0x18);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar2 + 1,*(undefined4 *)(iVar4 + 0x1c),ar7);
  puVar1 = DAT_8c209bcc;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar3 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar3 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c209be8)(a4,iVar2 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar3 + 0x18);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar2 + 1,*(undefined4 *)(iVar3 + 0x1c),ar7);
  puVar1 = DAT_8c209bcc;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(iVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c209be8)(a4,iVar2 + 3,*(undefined4 *)(iVar5 + 0x10),ar7);
  iVar3 = iVar2 + 1;
  DAT_8c209bcc[iVar2] = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  iVar2 = (*(code *)PTR_FUN_8c209bd4)(a4,iVar3,uVar6,ar7);
  *DAT_8c209bd8 = iVar2 << 2;
  uVar6 = (*(code *)PTR_FUN_8c209bdc)(a4,iVar3,uVar6,ar7);
  (*(code *)PTR_FUN_8c209be0)(uVar6,0,0,ar7);
  *DAT_8c209be4 = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209c00 @ 8c209c00 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209c00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int a5;
  undefined4 a4;
  undefined1 *puVar8;
  float fVar9;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  uint uVar10;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c209e4c;
  if (in_FPSCR_SZ == '\0') {
    puVar8 = auStack_1c;
  }
  else {
    puVar8 = auStack_20;
  }
  *(undefined4 *)(puVar8 + -4) = in_PR;
  piVar4 = (int *)(puVar8 + -0x10);
  piVar7 = (int *)(puVar8 + -0xc);
  *piVar4 = *ar4;
  piVar6 = (int *)(puVar8 + -8);
  *piVar7 = ar4[1];
  *piVar6 = ar4[2];
  a4 = *DAT_8c209e40;
  uVar5 = *DAT_8c209e44;
  uVar3 = *DAT_8c209e48;
  *DAT_8c209e4c = a4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*piVar4 + 4);
  puVar1[4] = *(undefined4 *)(*piVar4 + 8);
  puVar1[5] = *(undefined4 *)(*piVar4 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar4;
  uVar3 = *(undefined4 *)(*piVar4 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209e50)(a4,6,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar4 + 0x18));
    in_fr15 = DAT_8c209e54;
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c209e4c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar4 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c209e58)
                    (a4,iVar2 + 1,uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10,uVar3);
  puVar1 = DAT_8c209e4c;
  DAT_8c209e4c[iVar2] = *(undefined4 *)(*piVar7 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar7 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar7 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar7;
  uVar3 = *(undefined4 *)(*piVar7 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209e50)
                    (a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar7 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c209e4c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar7 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c209e58)
                    (a4,iVar2 + 1,uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10,uVar3);
  puVar1 = DAT_8c209e4c;
  DAT_8c209e4c[iVar2] = *(undefined4 *)(*piVar6 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar6 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar6 + 0xc);
  *(int *)(puVar8 + -0x14) = *piVar6;
  uVar3 = *(undefined4 *)(*piVar6 + 0x14);
  iVar2 = (*(code *)PTR_FUN_8c209e50)
                    (a4,iVar2 + 3,*(undefined4 *)(*(int *)(puVar8 + -0x14) + 0x10),uVar3);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
  }
  a5 = iVar2 + 1;
  if (in_FPSCR_PR == '\0') {
    fVar9 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar9);
    uVar10 = (uint)fVar9;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar10 = (uint)in_dr2;
  }
  DAT_8c209e4c[iVar2] = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    uVar10 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar10 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar10 = uVar10 << 0x18 | uVar10 << 0x10 | uVar10 << 8 | uVar10;
  iVar2 = (*(code *)PTR_FUN_8c209e58)(a4,a5,uVar10,uVar3);
  *DAT_8c209e5c = iVar2 << 2;
  uVar5 = (*(code *)PTR_FUN_8c209e60)(a4,a5,uVar10,uVar3);
  (*(code *)PTR_FUN_8c209e64)(uVar5,0,0,uVar3);
  *DAT_8c209e68 = *(undefined4 *)(*piVar4 + 0xc);
  return 0;
}



/* FUN_8c209e80 @ 8c209e80 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c209e80(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int a5;
  int *piVar6;
  undefined4 a4;
  undefined1 *puVar7;
  float fVar8;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  undefined4 in_PR;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = DAT_8c20a0cc;
  if (in_FPSCR_SZ == '\0') {
    puVar7 = auStack_1c;
  }
  else {
    puVar7 = auStack_20;
  }
  *(undefined4 *)(puVar7 + -4) = in_PR;
  piVar6 = (int *)(puVar7 + -0xc);
  *(undefined4 *)(puVar7 + -0x10) = *ar4;
  piVar5 = (int *)(puVar7 + -8);
  *piVar6 = ar4[1];
  *piVar5 = ar4[2];
  a4 = *DAT_8c20a0c0;
  uVar4 = *DAT_8c20a0c4;
  uVar3 = *DAT_8c20a0c8;
  *DAT_8c20a0cc = a4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 4);
  puVar1[4] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 8);
  puVar1[5] = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c20a0d0)(a4,6,*(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                              *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x18));
    in_fr15 = DAT_8c20a0d4;
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c20a0cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                              *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c20a0d8)
                    (a4,iVar2 + 1,uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9,ar7);
  puVar1 = DAT_8c20a0cc;
  DAT_8c20a0cc[iVar2] = *(undefined4 *)(*piVar6 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar6 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar6 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c20a0d0)(a4,iVar2 + 3,*(undefined4 *)(*piVar6 + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x18));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c20a0cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar6 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  iVar2 = (*(code *)PTR_FUN_8c20a0d8)
                    (a4,iVar2 + 1,uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9,ar7);
  puVar1 = DAT_8c20a0cc;
  DAT_8c20a0cc[iVar2] = *(undefined4 *)(*piVar5 + 4);
  puVar1[iVar2 + 1] = *(undefined4 *)(*piVar5 + 8);
  puVar1[iVar2 + 2] = *(undefined4 *)(*piVar5 + 0xc);
  iVar2 = (*(code *)PTR_FUN_8c20a0d0)(a4,iVar2 + 3,*(undefined4 *)(*piVar5 + 0x10),ar7);
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar5 + 0x18));
  }
  a5 = iVar2 + 1;
  if (in_FPSCR_PR == '\0') {
    fVar8 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar8);
    uVar9 = (uint)fVar8;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  DAT_8c20a0cc[iVar2] = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  if (in_FPSCR_SZ == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(*piVar5 + 0x1c));
  }
  if (in_FPSCR_PR == '\0') {
    uVar9 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar9 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar9 = uVar9 << 0x18 | uVar9 << 0x10 | uVar9 << 8 | uVar9;
  iVar2 = (*(code *)PTR_FUN_8c20a0d8)(a4,a5,uVar9,ar7);
  *DAT_8c20a0dc = iVar2 << 2;
  uVar3 = (*(code *)PTR_FUN_8c20a0e0)(a4,a5,uVar9,ar7);
  (*(code *)PTR_FUN_8c20a0e4)(uVar3,0,0,ar7);
  *DAT_8c20a0e8 = *(undefined4 *)(*(int *)(puVar7 + -0x10) + 0xc);
  return 0;
}



/* FUN_8c20a104 @ 8c20a104 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20a122) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a104(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  uint a5;
  
  if ((in_r3 & ar4) != 0) {
    ar4 = 0;
  }
  if ((DAT_8c20a18c & ar4) != 0) {
    ar4 = (uint)DAT_8c20a180;
  }
  *DAT_8c20a190 = ar4;
  a5 = *DAT_8c20a198 & DAT_8c20a194 | (ar4 & 0xff) << 0xf;
  *DAT_8c20a198 = a5;
  (*(code *)PTR_pvr_20a844_8c20a19c)(0x48,a5,ar6,ar7);
  return 0;
}



/* FUN_8c20a13a @ 8c20a13a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a13a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr5;
  uint in_fr4;
  char in_FPSCR_SZ;
  uint uStack_8;
  
  uStack_8 = in_fr5;
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = in_fr4;
  }
  (*(code *)PTR_pvr_20a844_8c20a19c)(0x78,uStack_8 & DAT_8c20a1a0,ar6,ar7);
  return 0;
}



/* FUN_8c20a156 @ 8c20a156 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a156(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  (*(code *)PTR_pvr_20a844_8c20a19c)((int)DAT_8c20a182,in_stack_00000000,ar6,ar7);
  (*(code *)PTR_pvr_20a844_8c20a19c)((int)DAT_8c20a184,in_stack_00000004,ar6,ar7);
  return 0;
}



/* FUN_8c20a16e @ 8c20a16e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a16e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_pvr_20a844_8c20a19c)((int)DAT_8c20a186,in_stack_00000000,ar6,ar7);
  return 0;
}



/* FUN_8c20a1c0 @ 8c20a1c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a1c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_pvr_20a844_8c20a26c)((int)DAT_8c20a260,in_stack_00000000,ar6,ar7);
  return 0;
}



/* FUN_8c20a1d0 @ 8c20a1d0 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a1d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 in_fr3;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  undefined4 in_PR;
  uint uVar8;
  uint uVar9;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  float fVar7;
  
  puVar1 = PTR_pvr_20a844_8c20a26c;
  if (in_FPSCR_SZ == '\0') {
    puVar5 = auStack_1c;
  }
  else {
    puVar5 = auStack_20;
  }
  iVar4 = (int)DAT_8c20a262;
  *(undefined4 *)(puVar5 + -4) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = DAT_8c20a270;
  }
  uVar3 = iVar4 + 0x7f;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = *(undefined4 *)(DAT_8c20a264 + ar4);
  }
  else {
    in_xd2 = *(double *)(DAT_8c20a264 + ar4);
  }
  iVar2 = (int)DAT_8c20a266;
  if (in_FPSCR_SZ == '\0') {
    in_xd2 = (double)CONCAT44(in_fr3,in_fr3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar7 = (float)((ulonglong)in_xd2 >> 0x20) * in_fr15;
    dVar6 = (double)CONCAT44(fVar7,SUB84(in_xd2,0));
    uVar8 = (uint)fVar7;
  }
  else {
    dVar6 = in_xd2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)dVar6;
  }
  uVar8 = uVar8 & uVar3;
  do {
    iVar4 = iVar4 + -1;
    if (in_FPSCR_SZ == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(iVar4 * 4 + ar4),SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(iVar4 * 4 + ar4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar7 = (float)((ulonglong)dVar6 >> 0x20) * in_fr15;
      dVar6 = (double)CONCAT44(fVar7,SUB84(dVar6,0));
      uVar9 = (uint)fVar7;
    }
    else {
      dVar6 = dVar6 * (double)CONCAT44(in_fr14,in_fr15);
      uVar9 = (uint)dVar6;
    }
    uVar9 = uVar9 & uVar3;
    (*(code *)puVar1)(iVar4 * 4 + iVar2,(uVar9 << 8 | uVar8) & 0xffff);
    uVar8 = uVar9;
  } while (iVar4 != 0);
  return 0;
}



/* FUN_8c20a1e4 @ 8c20a1e4 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a1e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float *in_r0;
  int unaff_r10;
  int iVar2;
  uint uVar3;
  int unaff_r14;
  undefined4 in_fr3;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd2;
  uint uVar6;
  uint uVar7;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  float fVar5;
  
  puVar1 = PTR_pvr_20a844_8c20a26c;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *in_r0;
  }
  uVar3 = unaff_r14 + 0x7f;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = *(undefined4 *)(DAT_8c20a264 + unaff_r10);
  }
  else {
    in_xd2 = *(double *)(DAT_8c20a264 + unaff_r10);
  }
  iVar2 = (int)DAT_8c20a266;
  if (in_FPSCR_SZ == '\0') {
    in_xd2 = (double)CONCAT44(in_fr3,in_fr3);
  }
  if (in_FPSCR_PR == '\0') {
    fVar5 = (float)((ulonglong)in_xd2 >> 0x20) * in_fr15;
    dVar4 = (double)CONCAT44(fVar5,SUB84(in_xd2,0));
    uVar6 = (uint)fVar5;
  }
  else {
    dVar4 = in_xd2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)dVar4;
  }
  uVar6 = uVar6 & uVar3;
  do {
    unaff_r14 = unaff_r14 + -1;
    if (in_FPSCR_SZ == '\0') {
      dVar4 = (double)CONCAT44(*(undefined4 *)(unaff_r14 * 4 + unaff_r10),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unaff_r14 * 4 + unaff_r10);
    }
    if (in_FPSCR_PR == '\0') {
      fVar5 = (float)((ulonglong)dVar4 >> 0x20) * in_fr15;
      dVar4 = (double)CONCAT44(fVar5,SUB84(dVar4,0));
      uVar7 = (uint)fVar5;
    }
    else {
      dVar4 = dVar4 * (double)CONCAT44(in_fr14,in_fr15);
      uVar7 = (uint)dVar4;
    }
    uVar7 = uVar7 & uVar3;
    (*(code *)puVar1)(unaff_r14 * 4 + iVar2,(uVar7 << 8 | uVar6) & 0xffff,ar6,ar7);
    uVar6 = uVar7;
  } while (unaff_r14 != 0);
  return 0;
}



/* FUN_8c20a238 @ 8c20a238 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a238(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_pvr_20a844_8c20a26c)((int)DAT_8c20a268,ar4,ar6,ar7);
  return 0;
}



/* FUN_8c20a280 @ 8c20a280 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a280(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 & 0xfffffffc) == 0) {
    *DAT_8c20a308 = ar4;
    (*(code *)PTR_pvr_20a844_8c20a30c)((int)DAT_8c20a300,ar4);
  }
  return 0;
}



/* FUN_8c20a284 @ 8c20a284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a284(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  
  if ((in_r3 & ar4) == 0) {
    *DAT_8c20a308 = ar4;
    (*(code *)PTR_pvr_20a844_8c20a30c)((int)DAT_8c20a300,ar4,ar6,ar7);
  }
  return 0;
}



/* FUN_8c20a2aa @ 8c20a2aa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a2aa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 a5;
  int iVar2;
  int unaff_r12;
  undefined4 *unaff_r13;
  int a4;
  
  puVar1 = PTR_pvr_20a844_8c20a30c;
  a4 = (int)DAT_8c20a304;
  iVar2 = (int)DAT_8c20a302;
  do {
    a5 = *unaff_r13;
    unaff_r13 = unaff_r13 + 1;
    (*(code *)puVar1)(a4,a5,ar6,ar7);
    unaff_r12 = unaff_r12 + 1;
    a4 = a4 + 4;
  } while (unaff_r12 < iVar2);
  return 0;
}



/* FUN_8c20a2e2 @ 8c20a2e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a2e2(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r3;
  undefined4 a5;
  undefined4 *puVar2;
  int a4;
  
  puVar1 = PTR_pvr_20a844_8c20a404;
  if (in_r3 < ar5) {
    ar5 = (int)DAT_8c20a306;
  }
  a4 = ar4 * 4 + (int)DAT_8c20a400;
  puVar2 = (undefined4 *)(ar4 * 4 + ar6);
  for (; ar4 < ar5; ar4 = ar4 + 1) {
    a5 = *puVar2;
    puVar2 = puVar2 + 1;
    (*(code *)puVar1)(a4,a5,ar6,ar7);
    a4 = a4 + 4;
  }
  return 0;
}



/* FUN_8c20a356 @ 8c20a356 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a356(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  (*(code *)PTR_pvr_20a844_8c20a404)(0x40,in_stack_00000000,ar6,ar7);
  return 0;
}



/* FUN_8c20a366 @ 8c20a366 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a366(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double in_dr2;
  undefined4 in_fr5;
  double dVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  double dVar2;
  
  if (in_FPSCR_SZ == '\0') {
    dVar3 = (double)CONCAT44((undefined4)DAT_8c20a408,in_fr5);
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ar4 + 0x70));
  }
  else {
    dVar3 = (double)CONCAT44(DAT_8c20a408._4_4_,(undefined4)DAT_8c20a408);
  }
  fVar4 = (float)((ulonglong)dVar3 >> 0x20);
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(in_dr2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar1);
    iVar5 = (int)fVar1;
  }
  else {
    dVar2 = in_dr2 * dVar3;
    iVar5 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x74));
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    iVar6 = (int)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    iVar6 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x78));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),SUB84(dVar2,0) * fVar4);
  }
  else {
    dVar2 = dVar2 * dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)SUB84(dVar2,0);
  }
  else {
    iVar7 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x7c));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),SUB84(dVar2,0) * fVar4);
  }
  else {
    dVar2 = dVar2 * dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    uVar8 = (uint)SUB84(dVar2,0);
  }
  else {
    uVar8 = (uint)dVar2;
  }
  *DAT_8c20a408._4_4_ = iVar5 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar8;
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x80));
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    iVar5 = (int)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    iVar5 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x84));
  }
  if (in_FPSCR_PR == '\0') {
    fVar1 = SUB84(dVar2,0) * fVar4;
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),fVar1);
    iVar6 = (int)fVar1;
  }
  else {
    dVar2 = dVar2 * dVar3;
    iVar6 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x88));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),SUB84(dVar2,0) * fVar4);
  }
  else {
    dVar2 = dVar2 * dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    iVar7 = (int)SUB84(dVar2,0);
  }
  else {
    iVar7 = (int)dVar2;
  }
  if (in_FPSCR_SZ == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(ar4 + 0x8c));
  }
  if (in_FPSCR_PR == '\0') {
    dVar2 = (double)CONCAT44((int)((ulonglong)dVar2 >> 0x20),SUB84(dVar2,0) * fVar4);
  }
  else {
    dVar2 = dVar2 * dVar3;
  }
  if (in_FPSCR_PR == '\0') {
    uVar8 = (uint)SUB84(dVar2,0);
  }
  else {
    uVar8 = (uint)dVar2;
  }
  *DAT_8c20a410 = iVar5 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar8;
  iVar5 = (int)DAT_8c20a402;
  *DAT_8c20a414 = *(undefined4 *)(iVar5 + ar4);
  *DAT_8c20a418 = *(undefined4 *)(iVar5 + 4 + ar4);
  *DAT_8c20a41c = *(undefined4 *)(iVar5 + 8 + ar4);
  return 0;
}



/* FUN_8c20a420 @ 8c20a420 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a420(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(PTR_PTR_8c20a4a0 + ar5 * 4))(ar4,ar5,ar6,ar7);
  *DAT_8c20a4a4 = *DAT_8c20a4a4 & DAT_8c20a4a8;
  return uVar1;
}



/* FUN_8c20a482 @ 8c20a482 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a482(uint ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  
  if (((int)ar4 <= (int)ar6) && ((int)ar5 <= (int)ar7)) {
    uVar1 = (uint)DAT_8c20a580;
    if ((int)uVar1 < (int)ar6) {
      ar6 = uVar1;
    }
    if ((int)uVar1 < (int)ar7) {
      ar7 = uVar1;
    }
    if (*DAT_8c20a584 == 4) {
      ar6 = ar6 & 0xfffffffe;
      ar7 = ar7 & 0xfffffffe;
      ar4 = ar4 + 1 & 0xfffffffe;
      ar5 = ar5 + 1 & 0xfffffffe;
    }
    *DAT_8c20a588 = ar4 & uVar1 | (ar6 & uVar1) << 0x10;
    *DAT_8c20a58c = (ar7 & uVar1) << 0x10 | ar5 & uVar1;
    return 0;
  }
  return DAT_8c20a4c0;
}



/* FUN_8c20a52c @ 8c20a52c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a52c(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*DAT_8c20a590 == 1) {
    iVar4 = *DAT_8c20a594;
    iVar3 = *DAT_8c20a598;
    *DAT_8c20a59c = *DAT_8c20a59c + iVar3 * iVar4 * -8;
    *DAT_8c20a5a0 = *DAT_8c20a5a0 + iVar3 * iVar4 * -8;
  }
  if (ar4 == 0) {
    *DAT_8c20a598 = 0;
  }
  else if (ar4 == 1) {
    if (((*DAT_8c20a640 & 1) == 1) || ((*DAT_8c20a640 & 0x20) != 0)) {
      *DAT_8c20a644 = 0x10;
    }
    else {
      *DAT_8c20a644 = 8;
    }
    iVar3 = *DAT_8c20a644 * *DAT_8c20a648 * 8;
    *DAT_8c20a64c = *DAT_8c20a64c + iVar3;
    *DAT_8c20a650 = iVar3 + *DAT_8c20a650;
  }
  uVar6 = *DAT_8c20a658 & DAT_8c20a654;
  piVar2 = DAT_8c20a724;
  if (*DAT_8c20a644 < *DAT_8c20a660) {
    piVar2 = DAT_8c20a660;
  }
  uVar5 = *DAT_8c20a65c - *piVar2;
  if (*DAT_8c20a72c < *DAT_8c20a728 + uVar5) {
    uVar5 = *DAT_8c20a72c - *DAT_8c20a724;
  }
  if (*DAT_8c20a72c < uVar5) {
    *DAT_8c20a72c = uVar5;
  }
  *DAT_8c20a730 = (uVar5 & (int)DAT_8c20a720) << 10 | uVar6;
  puVar1 = PTR_pvr_20a844_8c20a734;
  (*(code *)PTR_pvr_20a844_8c20a734)(0x44,0,ar6,ar7);
  (*(code *)puVar1)(0x5c,*DAT_8c20a730,ar6,ar7);
  (*(code *)puVar1)(0x44,*DAT_8c20a738,ar6,ar7);
  *DAT_8c20a73c = ar4;
  if (ar5 != (int *)0x0) {
    *ar5 = *DAT_8c20a724;
  }
  return 0;
}



/* FUN_8c20a6f2 @ 8c20a6f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a6f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c20a740)(ar4,ar5,ar6,ar7);
  (*(code *)PTR_FUN_8c20a744)(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c20a786 @ 8c20a786 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a786(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *DAT_8c20a7d0 = ar4 + -1;
  return 0;
}



/* FUN_8c20a790 @ 8c20a790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a790(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(code *)PTR_pvr_20a876_8c20a7d4)((int)DAT_8c20a7c0,ar5,ar6,ar7);
  uVar2 = (uint)DAT_8c20a7c2;
  *ar4 = uVar1 & uVar2;
  *ar5 = uVar1 >> 0x10 & uVar2;
  return 0;
}



/* FUN_8c20a7e0 @ 8c20a7e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a7e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*DAT_8c20a820 != 1) &&
     (iVar1 = (*(code *)PTR_FUN_8c20a828)(*DAT_8c20a824,ar5,ar6,ar7), iVar1 != 1)) {
    return 0x11;
  }
  return 0;
}



/* noop_20a840 @ 8c20a840 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_20a840(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* pvr_20a844 @ 8c20a844 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_20a844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + DAT_8c20a8c0) = ar5;
  return 1;
}



/* FUN_8c20a84e @ 8c20a84e callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a84e(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  uint uVar2;
  code *pcVar3;
  
  puVar1 = PTR_FUN_8c20a8c4;
  pcVar3 = FUN_8c20732e;
  uVar2 = ar4 + ar5;
  for (; ar4 <= uVar2; ar4 = ar4 + 0x20) {
    in_r0 = (*(code *)puVar1)(ar4,pcVar3);
  }
  return in_r0;
}



/* FUN_8c20a85a @ 8c20a85a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a85a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  uint unaff_r13;
  uint unaff_r14;
  
  puVar1 = PTR_FUN_8c20a8c4;
  for (; unaff_r14 <= unaff_r13; unaff_r14 = unaff_r14 + 0x20) {
    in_r0 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
  }
  return in_r0;
}



/* pvr_20a876 @ 8c20a876 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_20a876(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(DAT_8c20a8c0 + ar4);
}



/* FUN_8c20a87c @ 8c20a87c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a87c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c20a8cc)(ar4 + DAT_8c20a8c8,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c20a892 @ 8c20a892 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a892(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  (*(code *)PTR_FUN_8c20a8cc)(ar4,ar5 + DAT_8c20a8c8,ar6,ar7);
  return 1;
}



/* FUN_8c20a8e0 @ 8c20a8e0 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a8e0(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint a6;
  int a4;
  int iVar2;
  uint a6_00;
  uint a5;
  byte in_IMASK;
  char in_S;
  byte in_T;
  undefined4 uStack_24;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    a5 = ar6;
    FUN_8c20a84e(ar5,ar6,ar6,ar7);
    a6_00 = ar6 & 0xffffffe0;
    if (a6_00 == 0) {
      *DAT_8c20a98c = 0;
    }
    else {
      iVar2 = (int)DAT_8c20a980;
      a4 = DAT_8c20a984 + ar4;
      do {
        ar7 = 0x18;
        a5 = ar5;
        iVar1 = (*(code *)PTR_sh4_dmac_202f40_8c20a988)(a4,ar5,a6_00,0x18);
      } while (iVar1 == iVar2);
      *DAT_8c20a98c = *uStack_24;
    }
    a6 = ar6 & 0x1f;
    if (a6 != 0) {
      a5 = ar5 + a6_00;
      (*(code *)PTR_FUN_8c20a994)(DAT_8c20a990 + ar4 + a6_00,a5,a6,ar7);
    }
    if (*DAT_8c20a998 == 1) {
      (*(code *)PTR_FUN_8c20a99c)(*DAT_8c20a98c,a5,a6,ar7);
    }
  }
  else {
    (*(code *)PTR_FUN_8c20aa24)(DAT_8c20aa20 + ar4,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c20a9c2 @ 8c20a9c2 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a9c2(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 a6;
  
  a6 = ar6;
  (*(code *)PTR_FUN_8c20aa24)(ar4,ar5 + DAT_8c20aa20,ar6,ar7);
  FUN_8c20a84e(ar4,ar6,a6,ar7);
  return 1;
}



/* FUN_8c20aa40 @ 8c20aa40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c20aa40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int in_VBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  puVar6 = DAT_8c20aaa4;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(undefined4 *)(DAT_8c20aaa2 + in_VBR) = ar4;
  *puVar6 = 0;
  puVar7 = DAT_8c20aaa8;
  *DAT_8c20aaa8 = 0;
  *DAT_8c20aaac = 0xffffffff;
  *DAT_8c20aab0 = 0xffffffff;
  *puVar6 = DAT_8c20aab4;
  *puVar7 = 0xe;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         (in_T & 1 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)DAT_8c20aaa0;
}



/* FUN_8c20aacc @ 8c20aacc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20aacc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = DAT_8c20ab88;
  iVar9 = 4;
  iVar6 = 0;
  iVar10 = 0;
  iVar11 = 0;
  do {
    iVar2 = DAT_8c20ab8c;
    iVar8 = (1 - iVar10) * 0x18;
    *(undefined4 *)(ar4 + iVar8) = *(undefined4 *)(DAT_8c20ab8c + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 4) = *(undefined4 *)(iVar2 + -0xc + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 8) = *(undefined4 *)(iVar2 + -0x14 + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 0xc) = *(undefined4 *)(iVar2 + 4 + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 0x10) = *(undefined4 *)(iVar2 + -8 + iVar6);
    iVar2 = DAT_8c20ab90;
    *(undefined4 *)(iVar8 + ar4 + 0x14) = *(undefined4 *)(iVar1 + 0x24 + iVar11);
    iVar10 = iVar10 + 1;
    puVar4 = (undefined4 *)(iVar2 + iVar11);
    iVar11 = iVar11 + 4;
    *(undefined4 *)(ar4 + 0x38 + iVar9) = *puVar4;
    puVar3 = DAT_8c20ac84;
    iVar2 = DAT_8c20ab98;
    iVar9 = iVar9 + -4;
    iVar6 = iVar6 + 0x20;
  } while (iVar10 < 2);
  if (*DAT_8c20ab94 == 0) {
    puVar3 = (uint *)(DAT_8c20ab98 + 0x28);
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(DAT_8c20ab98 + (*puVar3 & 1) * 4);
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(iVar2 + (1 - (*puVar3 & 1)) * 4);
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((*DAT_8c20ac84 & 1) * 4 + DAT_8c20ac88);
    *(uint *)(ar4 + 0x30) = puVar3[-9 - (*puVar3 & 1)];
  }
  *(undefined4 *)(ar4 + 0x40) = *DAT_8c20ac8c;
  uVar7 = 0;
  *(undefined4 *)(ar4 + 0x44) = *DAT_8c20ac90;
  iVar6 = 0;
  *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(iVar1 + 0x20);
  do {
    iVar10 = DAT_8c20ac94 + 4;
    *(undefined4 *)(ar4 + 0x58 + uVar7) = *(undefined4 *)(DAT_8c20ac94 + iVar6);
    iVar9 = DAT_8c20ac98;
    *(undefined4 *)(ar4 + uVar7 + 0x6c) = *(undefined4 *)(iVar10 + iVar6);
    *(undefined4 *)(DAT_8c20ac80 + ar4 + uVar7) = *(undefined4 *)(iVar9 + uVar7);
    puVar4 = (undefined4 *)(iVar1 + 0x2c + uVar7);
    puVar5 = (undefined4 *)(DAT_8c20ac82 + ar4 + uVar7);
    uVar7 = uVar7 + 4;
    *puVar5 = *puVar4;
    iVar6 = iVar6 + 0x10;
  } while (uVar7 < 0x14);
  *(undefined4 *)(ar4 + 0xa8) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(ar4 + 0xac) = *(undefined4 *)(iVar1 + 0x44);
  return 0;
}



/* FUN_8c20ad04 @ 8c20ad04 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20ad04(int ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  uint a7;
  int in_stack_00000000;
  
  uVar1 = 0;
  if (ar5 == 3) {
    uVar1 = DAT_8c20ad48;
  }
  a7 = ar7 - 1U & 0x3f;
  uVar1 = (in_stack_00000000 - 1U & 0x3f) << 8 | a7 | uVar1;
  if (ar6 != 0) {
    uVar1 = DAT_8c20adc4 | uVar1;
  }
  (*(code *)PTR_pvr_20a844_8c20adc8)((int)DAT_8c20adc0,uVar1,ar6,a7);
  (*(code *)PTR_pvr_20a844_8c20adc8)((int)DAT_8c20adc2,*(undefined4 *)(ar4 + 0x1c),ar6,a7);
  return 0;
}



/* FUN_8c20ade0 @ 8c20ade0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20ade0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint a5;
  int iVar3;
  uint a6;
  int iVar4;
  uint a7;
  uint a7_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *DAT_8c20ae20;
  iVar3 = *DAT_8c20ae24;
  uVar5 = *DAT_8c20ae28;
  uVar6 = *DAT_8c20ae30 & DAT_8c20ae2c;
  a5 = *DAT_8c20ae34 & 0xffff;
  if (ar4 == 0) {
    a5 = a5 & DAT_8c20ae38;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && ((*DAT_8c20aeec & 3) == 0)) &&
          (((*DAT_8c20aeec & 0x20) != 0 &&
           (((*DAT_8c20aeec & 1) == 1 || ((*DAT_8c20aeec & 0x2c) != 0x20)))))) {
    uVar5 = (uint)DAT_8c20aee2;
    iVar3 = iVar3 + 0xc;
    a5 = (uint)DAT_8c20aee0;
    iVar4 = iVar4 + 0xc;
  }
  uVar7 = *DAT_8c20ae34 & DAT_8c20aef0;
  uVar2 = (uint)DAT_8c20aee4;
  a6 = (iVar3 + *DAT_8c20aef4) * 0x10000;
  a7 = iVar4 + *DAT_8c20aef4 | a6;
  a7_00 = a7;
  (*(code *)PTR_FUN_8c20aef8)(ar4,a5,a6,a7);
  puVar1 = PTR_pvr_20a844_8c20aefc;
  (*(code *)PTR_pvr_20a844_8c20aefc)(0x44,*DAT_8c20af00 & 0xfffffffe,a6,a7_00);
  (*(code *)puVar1)((int)DAT_8c20aee6,*DAT_8c20af04 | 8,a6,a7_00);
  (*(code *)puVar1)((int)DAT_8c20aee8,a7,a6,a7_00);
  (*(code *)puVar1)(0x5c,uVar6 | (uVar5 & uVar2) << 10,a6,a7_00);
  (*(code *)puVar1)((int)DAT_8c20aeea,uVar7 | a5,a6,a7_00);
  *DAT_8c20af08 = 1;
  return 0;
}



/* FUN_8c20aed8 @ 8c20aed8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20aed8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *DAT_8c20af0c = ar4;
  return 0;
}



/* FUN_8c20af20 @ 8c20af20 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20af20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  
  puVar5 = PTR_DAT_8c20afe8;
  puVar6 = &DAT_8c4aad24;
  uVar2 = *(uint *)*DAT_8c20afe4;
  uVar3 = uVar2 >> 0x18;
  *DAT_8c20afec = uVar3;
  *DAT_8c20aff0 = uVar3;
  puVar1 = PTR_FUN_8c20affc;
  iVar4 = 4;
  uVar2 = DAT_8c20aff4 & uVar2 | DAT_8c20aff8;
  do {
    (*(code *)puVar1)(uVar2,puVar5,0x20,puVar6);
    iVar4 = iVar4 + -1;
    uVar2 = uVar2 + 0x20;
    puVar5 = puVar5 + 0x20;
  } while (iVar4 != 0);
  iVar4 = *(int *)*DAT_8c20afe4 + (int)DAT_8c20afe0;
  *(int *)*DAT_8c20afe4 = iVar4;
  return iVar4;
}



/* FUN_8c20af22 @ 8c20af22 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20af22(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *in_r3;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *a5;
  
  a5 = PTR_DAT_8c20afe8;
  uVar2 = *(uint *)*in_r3;
  uVar3 = uVar2 >> 0x18;
  *DAT_8c20afec = uVar3;
  *DAT_8c20aff0 = uVar3;
  puVar1 = PTR_FUN_8c20affc;
  iVar4 = 4;
  uVar2 = DAT_8c20aff4 & uVar2 | DAT_8c20aff8;
  do {
    (*(code *)puVar1)(uVar2,a5,0x20,ar7);
    iVar4 = iVar4 + -1;
    uVar2 = uVar2 + 0x20;
    a5 = a5 + 0x20;
  } while (iVar4 != 0);
  iVar4 = *(int *)*DAT_8c20afe4 + (int)DAT_8c20afe0;
  *(int *)*DAT_8c20afe4 = iVar4;
  return iVar4;
}



/* FUN_8c20af76 @ 8c20af76 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20af76(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int a5;
  undefined4 a5_00;
  int a6;
  undefined4 a7;
  undefined4 uVar6;
  
  puVar3 = PTR_FUN_8c20b008;
  iVar1 = DAT_8c20b000;
  uVar6 = 0;
  if ((ar4 == 0) || (ar5 == 0)) {
    uVar6 = 0xe;
  }
  else {
    *(int *)(DAT_8c20b000 + 0x3c) = ar4;
    *(int *)(iVar1 + 0x40) = ar5;
    *(undefined4 *)(iVar1 + 0x44) = ar7;
    piVar2 = DAT_8c20b004;
    *(int *)(iVar1 + 0x18) = ar6;
    *piVar2 = ar6;
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    iVar5 = (*(code *)puVar3)(ar4,ar5,ar6,ar7);
    if (iVar5 == DAT_8c20b00c) {
      if (*(int *)(ar4 + 0x18) == *(int *)(ar5 + 0x18)) {
        if (*(int *)(ar4 + 0x14) == *(int *)(ar5 + 0x14)) {
          *DAT_8c20b0c0 = *(undefined4 *)(ar4 + 0x1c);
          puVar4 = DAT_8c20b0c4;
          *DAT_8c20b0c4 = 0;
          *DAT_8c20b0c8 = *(undefined4 *)(ar5 + 0x1c);
          *DAT_8c20b0cc = 0;
          puVar3 = PTR_pvr_20a844_8c20b0d0;
          (*(code *)PTR_pvr_20a844_8c20b0d0)(0x50,puVar4[-0x1b],a6,a7);
          (*(code *)puVar3)(0x54,*DAT_8c20b0d4,a6,a7);
          (*(code *)puVar3)(0x60,*DAT_8c20b0c0,a6,a7);
          (*(code *)puVar3)(100,*DAT_8c20b0c8,a6,a7);
          puVar4 = DAT_8c20b0c0;
          *DAT_8c20b0d4 = *DAT_8c20b0c0;
          puVar4[-0x18] = *DAT_8c20b0c8;
          if (ar6 == 1) {
            *DAT_8c20b0d8 = 0;
            *DAT_8c20b0dc = 0;
            (*(code *)puVar3)(0x50,*DAT_8c20b0d4,a6,a7);
            a5_00 = *DAT_8c20b0e0;
          }
          else {
            (*(code *)puVar3)(0x50,*DAT_8c20b0d4,a6,a7);
            a5_00 = *DAT_8c20b0d4;
          }
          (*(code *)puVar3)(0x54,a5_00,a6,a7);
          *DAT_8c20b0e4 = 1;
          *DAT_8c20b0e8 = ar7;
        }
        else {
          uVar6 = 0x10;
        }
      }
      else {
        uVar6 = 0xf;
      }
    }
    else {
      iVar5 = (*(code *)PTR_FUN_8c20b144)((int)DAT_8c20b140,a5,a6,a7);
      if (iVar5 == DAT_8c20b142) {
        (*(code *)PTR_FUN_8c20b14c)(DAT_8c20b148,a5,a6,a7);
        uVar6 = (*(code *)PTR_FUN_8c20b150)(*(undefined4 *)(iVar1 + 0x54),a5,a6,a7);
      }
    }
  }
  return uVar6;
}



/* FUN_8c20b160 @ 8c20b160 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20b160(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 a4;
  int in_r0;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  a4 = DAT_8c20b238;
  puVar2 = PTR_sh4_dmac_202f40_8c20b234;
  uVar1 = DAT_8c20b230;
  uVar7 = 0;
  puVar4 = (undefined4 *)(DAT_8c20b228 + *DAT_8c20b224 * 4);
  piVar5 = (int *)(DAT_8c20b22c + *DAT_8c20b224 * 4);
  iVar6 = (int)DAT_8c20b220;
  do {
    if ((*piVar5 != 0) && (ar4 != uVar7)) {
      if ((*DAT_8c20b23c == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
        *(uint *)*DAT_8c20b240 = *(uint *)*DAT_8c20b240 & uVar1 | uVar7 << 0x18;
        do {
          iVar3 = (*(code *)puVar2)(a4,*DAT_8c20b240,*DAT_8c20b244,0x10);
        } while (iVar3 == iVar6);
      }
      do {
        in_r0 = (*(code *)puVar2)(a4,*puVar4,*piVar5 + 0x20,0x10);
      } while (in_r0 == iVar6);
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (uVar7 < 5);
  return in_r0;
}



/* FUN_8c20b260 @ 8c20b260 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b260(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  
  iVar8 = DAT_8c20b310;
  piVar11 = DAT_8c20b308;
  if (*(int *)PTR_DAT_8c20b300 == 0) {
    if (*DAT_8c20b304 == 0) {
      DAT_8c20b308[*DAT_8c20b308 + -4] = 1;
      *DAT_8c20b30c = 1;
    }
    else {
      *(undefined4 *)(DAT_8c20b310 + 0x48) = *DAT_8c20b314;
      iVar9 = *piVar11;
      *DAT_8c20b318 = iVar9;
      *DAT_8c20b31c = 1;
      puVar2 = DAT_8c20b320;
      *DAT_8c20b320 = 0;
      *DAT_8c20b328 = *DAT_8c20b324;
      puVar2[2] = 1;
      iVar12 = DAT_8c20b32c;
      *(undefined4 *)(iVar8 + 4) = 0;
      *(undefined4 *)(iVar12 + iVar9 * 4) = 2;
      uVar10 = DAT_8c20b434;
      puVar3 = PTR_sh4_dmac_202f40_8c20b430;
      if ((*DAT_8c20b330 & 0x20) == 0) {
        iVar12 = *DAT_8c20b424 * 4 + DAT_8c20b428;
        piVar11 = DAT_8c20b424 + *DAT_8c20b424 + *DAT_8c20b42c * 4 + 0x1d;
        iVar8 = *DAT_8c20b42c;
        iVar9 = (int)DAT_8c20b420;
        do {
          ar7 = 0x10;
          ar5 = *(undefined **)(iVar12 + iVar8 * 0x10);
          ar6 = *piVar11 + 0x20;
          iVar6 = (*(code *)puVar3)(uVar10,ar5,ar6,0x10);
        } while (iVar6 == iVar9);
        FUN_8c20b160(*DAT_8c20b42c,ar5,ar6,ar7);
      }
      else {
        *DAT_8c20b334 = 0x10;
        *DAT_8c20b338 = 0x10;
        ar6 = 4;
        ar5 = PTR_DAT_8c20b33c;
        (*(code *)PTR_FUN_8c20b344)(DAT_8c20b340,PTR_DAT_8c20b33c,4,ar7);
        FUN_8c20b160(*DAT_8c20b348,ar5,ar6,ar7);
      }
    }
  }
  *DAT_8c20b438 = 0;
  bVar1 = false;
  iVar8 = *DAT_8c20b43c;
  while (iVar8 != 0) {
    (*(code *)*DAT_8c20b440)(DAT_8c20b440[1],ar5,ar6,ar7);
    if (*DAT_8c20b448 + *DAT_8c20b444 + 1U < *DAT_8c20b438) {
      bVar1 = true;
      break;
    }
    iVar8 = *DAT_8c20b43c;
  }
  if (bVar1) {
    *DAT_8c20b44c = 0;
    *DAT_8c20b438 = 0;
    bVar1 = false;
    iVar8 = *DAT_8c20b43c;
    while (iVar8 != 0) {
      (*(code *)*DAT_8c20b440)(DAT_8c20b440[1],ar5,ar6,ar7);
      if (0x14 < *DAT_8c20b438) {
        bVar1 = true;
        break;
      }
      iVar8 = *DAT_8c20b54c;
    }
    if (bVar1) {
      (*(code *)PTR_FUN_8c20b550)(4,ar5,ar6,ar7);
    }
  }
  puVar4 = DAT_8c20b554;
  *DAT_8c20b554 = *DAT_8c20b554 + 1;
  *puVar4 = *puVar4 & 3;
  *(undefined4 *)(DAT_8c20b558 + *puVar4 * 4) = 0;
  puVar3 = PTR_pvr_20a844_8c20b564;
  if ((*DAT_8c20b55c == 1) || (*(int *)PTR_DAT_8c20b560 == 1)) {
    uVar7 = *DAT_8c20b554;
    (*(code *)PTR_pvr_20a844_8c20b564)(8,1,ar6,ar7);
    (*(code *)puVar3)(8,0,ar6,ar7);
    iVar8 = (uVar7 & 1) * 0x20;
    (*(code *)puVar3)((int)DAT_8c20b540,*(undefined4 *)(DAT_8c20b568 + iVar8),ar6,ar7);
    (*(code *)puVar3)((int)DAT_8c20b542,*(undefined4 *)(DAT_8c20b56c + iVar8),ar6,ar7);
    (*(code *)puVar3)((int)DAT_8c20b544,*(undefined4 *)(DAT_8c20b570 + iVar8),ar6,ar7);
    (*(code *)puVar3)((int)DAT_8c20b546,*(undefined4 *)(DAT_8c20b574 + iVar8),ar6,ar7);
    (*(code *)puVar3)((int)DAT_8c20b548,*(undefined4 *)(DAT_8c20b578 + iVar8),ar6,ar7);
    uVar10 = DAT_8c20b57c;
    (*(code *)puVar3)((int)DAT_8c20b54a,DAT_8c20b57c,ar6,ar7);
    (*(code *)PTR_pvr_20a876_8c20b580)((int)DAT_8c20b54a,uVar10,ar6,ar7);
    *DAT_8c20b584 = 0;
    *DAT_8c20b58c = *DAT_8c20b588;
    puVar5 = DAT_8c20b590;
    puVar4 = DAT_8c20b554;
    if (*(int *)PTR_DAT_8c20b560 != 0) {
      *DAT_8c20b590 = *DAT_8c20b554;
      puVar5[*puVar4 - 6] = 2;
      *DAT_8c20b594 = 1;
      puVar4[8] = 1;
    }
  }
  return 0;
}



/* FUN_8c20b5a0 @ 8c20b5a0 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b5a0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *DAT_8c20b680 = 1;
  puVar2 = PTR_pvr_20a844_8c20b688;
  uVar3 = *DAT_8c20b684;
  if ((*DAT_8c20b68c & 0x10) != 0) {
    (*(code *)PTR_pvr_20a844_8c20b688)(8,2,ar6,ar7);
    (*(code *)puVar2)(8,0,ar6,ar7);
  }
  iVar4 = (uVar3 & 1) * 0x20;
  (*(code *)puVar2)(0x2c,*(undefined4 *)(DAT_8c20b690 + iVar4),ar6,ar7);
  (*(code *)puVar2)(0x20,*(undefined4 *)(DAT_8c20b694 + iVar4 + 0x18),ar6,ar7);
  (*(code *)puVar2)(0x60,ar4[2],ar6,ar7);
  (*(code *)puVar2)(0x48,*ar4,ar6,ar7);
  (*(code *)puVar2)(0x4c,ar4[1],ar6,ar7);
  (*(code *)puVar2)(0x68,ar4[3],ar6,ar7);
  uVar5 = ar4[4];
  (*(code *)puVar2)(0x6c,uVar5,ar6,ar7);
  *DAT_8c20b698 = 0;
  iVar4 = *DAT_8c20b69c;
  bVar1 = false;
  do {
    if (iVar4 == 0) {
LAB_8c20b63e:
      if (!bVar1) {
        (*(code *)puVar2)((int)DAT_8c20b740,*DAT_8c20b744,ar6,ar7);
        (*(code *)puVar2)((int)DAT_8c20b742,*DAT_8c20b748 & 0xfffffff0,ar6,ar7);
        uVar5 = (*(code *)puVar2)(0x14,0xffffffff,ar6,ar7);
        return uVar5;
      }
      (*(code *)puVar2)(0x48,*DAT_8c20b6a8,ar6,ar7);
      (*(code *)puVar2)(0x4c,*DAT_8c20b6ac,ar6,ar7);
      (*(code *)puVar2)(0x68,*DAT_8c20b6b0,ar6,ar7);
      (*(code *)puVar2)(0x6c,*DAT_8c20b6b4,ar6,ar7);
      *DAT_8c20b69c = 0;
      *DAT_8c20b6b8 = 0;
      uVar5 = (*(code *)PTR_FUN_8c20b6c0)(*(undefined4 *)PTR_DAT_8c20b6bc);
      return uVar5;
    }
    (*(code *)*DAT_8c20b6a0)(DAT_8c20b6a0[1],uVar5,ar6,ar7);
    if (*DAT_8c20b6a4 < *DAT_8c20b698) {
      bVar1 = true;
      goto LAB_8c20b63e;
    }
    iVar4 = *DAT_8c20b69c;
  } while( true );
}



/* FUN_8c20b708 @ 8c20b708 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b708(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((*(uint *)(ar4 + 0x18) & 4) == 0) && (*(int *)(ar4 + 4) == 1)) {
    uVar1 = *(uint *)(ar4 + 8) & DAT_8c20b74c;
    if (uVar1 == 0) {
      ar4 = 3;
    }
    else if (uVar1 == DAT_8c20b750) {
      ar4 = 1;
    }
    else if (uVar1 == DAT_8c20b754) {
      ar4 = 2;
    }
    *DAT_8c20b784 = *DAT_8c20b780 & 0xfffffff8 | ar4;
    return 0;
  }
  return 4;
}



/* noop_20b77a @ 8c20b77a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 noop_20b77a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}



/* FUN_8c20b7a0 @ 8c20b7a0 callers=0 callees=1 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b7a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 **ppuVar9;
  undefined4 **a5;
  undefined4 **a6;
  undefined4 **a7;
  int iVar10;
  uint uStack_78;
  uint uStack_74;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [5];
  undefined4 *apuStack_34 [6];
  
  puStack_68 = *(undefined4 **)PTR_DAT_8c20b9c0;
  uStack_64 = *(undefined4 *)(PTR_DAT_8c20b9c0 + 4);
  uStack_60 = *(undefined4 *)(PTR_DAT_8c20b9c0 + 8);
  uStack_5c = *(undefined4 *)(PTR_DAT_8c20b9c0 + 0xc);
  uStack_58 = *(undefined4 *)(PTR_DAT_8c20b9c0 + 0x10);
  uStack_54 = *(undefined4 *)(PTR_DAT_8c20b9c0 + 0x14);
  uStack_50 = *(undefined4 *)(PTR_DAT_8c20b9c0 + 0x18);
  uStack_4c = *(undefined4 *)(PTR_DAT_8c20b9c0 + 0x1c);
  if (((((*DAT_8c20b9c4 & 0x40) != 0) && (*DAT_8c20b9c8 != 0)) && (*DAT_8c20b9cc != 0)) &&
     (*DAT_8c20b9d0 != 0)) {
    FUN_8c20af20(ar4,ar5,ar6,ar7);
  }
  piVar7 = DAT_8c20ba00;
  iVar10 = *DAT_8c20b9d4 * 4;
  apuStack_34[0] = (undefined4 *)(DAT_8c20b9d8 + iVar10);
  a5 = apuStack_34 + 2;
  apuStack_34[2] = (undefined4 *)(DAT_8c20b9e0 + iVar10);
  a6 = apuStack_34 + 1;
  apuStack_34[1] = (undefined4 *)(DAT_8c20b9dc + iVar10);
  a7 = apuStack_34 + 4;
  apuStack_34[3] = (undefined4 *)(DAT_8c20b9e4 + iVar10);
  apuStack_34[4] = (undefined4 *)(DAT_8c20b9e8 + iVar10);
  aiStack_48[0] = DAT_8c20b9ec + iVar10;
  aiStack_48[1] = DAT_8c20b9f0 + iVar10;
  aiStack_48[2] = DAT_8c20b9f4 + iVar10;
  aiStack_48[3] = DAT_8c20b9f8 + iVar10;
  aiStack_48[4] = iVar10 + DAT_8c20b9fc;
  *(undefined4 *)(DAT_8c20b9d8 + iVar10) = *(undefined4 *)*DAT_8c20ba00;
  *apuStack_34[1] = *(undefined4 *)(*piVar7 + 4);
  *apuStack_34[2] = *(undefined4 *)(*piVar7 + 8);
  *apuStack_34[3] = *(undefined4 *)(*piVar7 + 0xc);
  puVar2 = PTR_FUN_8c20ba0c;
  *apuStack_34[4] = *(undefined4 *)(*piVar7 + 0x10);
  piVar1 = DAT_8c20ba08;
  uVar4 = DAT_8c20ba04;
  if (*DAT_8c20ba10 == 0) {
    uStack_74 = 0;
    do {
      ppuVar9 = (undefined4 **)PTR_DAT_8c20ba18;
      if ((int)uStack_74 < 0) {
        uVar6 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar6 & *DAT_8c20ba14) != 0) {
        iVar10 = uStack_74 * 4;
        iVar5 = *(int *)(iVar10 + *piVar1) - *apuStack_34[uStack_74];
        if (iVar5 < 0) {
          iVar5 = iVar5 + 3;
        }
        *(int *)aiStack_48[uStack_74] = (iVar5 >> 2) << 2;
        a6 = (undefined4 **)0x4;
        (*(code *)puVar2)(*(undefined4 *)(iVar10 + *piVar1),ppuVar9,4,a7);
        *(int *)(iVar10 + *piVar1) = *(int *)(iVar10 + *piVar1) + 0x20;
        a5 = ppuVar9;
      }
      uStack_74 = uStack_74 + 1;
    } while ((int)uStack_74 < 5);
    uVar6 = 0;
    do {
      if ((int)uVar6 < 0) {
        uVar8 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar8 = 1 << (uVar6 & 0x1f);
      }
      if ((uVar8 & *DAT_8c20ba14) == 0) {
        *(undefined4 *)aiStack_48[uVar6] = 0;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 5);
    uVar6 = 0;
LAB_8c20b91a:
    if ((int)uVar6 < 0) {
      uVar8 = 1 >> (~uVar6 & 0x1f) + 1;
    }
    else {
      uVar8 = 1 << (uVar6 & 0x1f);
    }
    if ((uVar8 & *DAT_8c20ba14) == 0) goto LAB_8c20b9b4;
    if (*(uint *)(uVar6 * 4 + DAT_8c20ba1c) < *(uint *)aiStack_48[uVar6]) {
      *(undefined4 *)(DAT_8c20ba1c + uVar6 * 4) = *(undefined4 *)aiStack_48[uVar6];
    }
    a5 = (undefined4 **)(uVar6 * 4);
    if (**(uint **)((int)a5 + (int)aiStack_48) <= *(uint *)((int)a5 + DAT_8c20ba20))
    goto LAB_8c20b9b4;
    uVar6 = 0;
    do {
      if ((int)uVar6 < 0) {
        uVar8 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar8 = 1 << (uVar6 & 0x1f);
      }
      if ((uVar8 & *DAT_8c20ba14) != 0) {
        puStack_68 = (undefined4 *)((uint)puStack_68 & uVar4 | uVar6 << 0x18);
        (*(code *)puVar2)(*apuStack_34[uVar6],&puStack_68,0x20,a7);
        a6 = (undefined4 **)0x4;
        a5 = (undefined4 **)PTR_DAT_8c20ba18;
        (*(code *)puVar2)(*apuStack_34[uVar6] + 0x20,PTR_DAT_8c20ba18,4,a7);
        *(undefined4 *)aiStack_48[uVar6] = 0x20;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 5);
    goto LAB_8c20bd1e;
  }
  if ((*DAT_8c20bbe0 & 0x20) == 0) {
    (*(code *)PTR_FUN_8c20bd80)(piVar7,a5,a6,a7);
    uStack_78 = 0;
    do {
      a5 = (undefined4 **)PTR_DAT_8c20bd84;
      iVar10 = uStack_78 * 4;
      iVar5 = *(int *)(iVar10 + *piVar1) - *apuStack_34[uStack_78];
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      *(int *)aiStack_48[uStack_78] = (iVar5 >> 2) << 2;
      a6 = (undefined4 **)0x4;
      (*(code *)puVar2)(*(undefined4 *)(iVar10 + *piVar1),a5,4,a7);
      *(int *)(iVar10 + *piVar1) = *(int *)(iVar10 + *piVar1) + 0x20;
      if ((int)uStack_78 < 0) {
        uVar6 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar6 & *DAT_8c20bd88) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      if ((int)uStack_78 < 0) {
        uVar6 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar6 & *DAT_8c20bd88) != 0) {
        iVar10 = uStack_78 * 4;
        if (*(uint *)(DAT_8c20bd8c + iVar10) < *(uint *)aiStack_48[uStack_78]) {
          *(undefined4 *)(DAT_8c20bd8c + iVar10) = *(undefined4 *)aiStack_48[uStack_78];
        }
        if (*(uint *)(DAT_8c20bd90 + iVar10) < *(uint *)aiStack_48[uStack_78]) {
          uVar6 = 0;
          do {
            if ((int)uVar6 < 0) {
              uVar8 = 1 >> (~uVar6 & 0x1f) + 1;
            }
            else {
              uVar8 = 1 << (uVar6 & 0x1f);
            }
            if ((uVar8 & *DAT_8c20bd88) == 0) {
              *(undefined4 *)aiStack_48[uVar6] = 0;
            }
            else {
              puStack_68 = (undefined4 *)((uint)puStack_68 & uVar4 | uVar6 << 0x18);
              (*(code *)puVar2)(*apuStack_34[uVar6],&puStack_68,0x20,a7);
              a6 = (undefined4 **)0x4;
              a5 = (undefined4 **)PTR_DAT_8c20bd84;
              (*(code *)puVar2)(*apuStack_34[uVar6] + 0x20,PTR_DAT_8c20bd84,4,a7);
              *(undefined4 *)aiStack_48[uVar6] = 0x20;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < 5);
LAB_8c20bd1e:
          (*(code *)PTR_FUN_8c20bd94)(2,a5,a6,a7);
          break;
        }
      }
      uStack_78 = uStack_78 + 1;
    } while ((int)uStack_78 < 5);
    goto LAB_8c20bd36;
  }
  uStack_78 = 0;
  ppuVar9 = a5;
  do {
    a5 = (undefined4 **)PTR_DAT_8c20bbec;
    if (uStack_78 != *DAT_8c20bbe4) {
      if ((int)uStack_78 < 0) {
        uVar6 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar6 & *DAT_8c20bbe8) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      else {
        iVar10 = uStack_78 * 4;
        piVar7 = aiStack_48 + uStack_78;
        iVar5 = *(int *)(iVar10 + *piVar1) - *apuStack_34[uStack_78];
        if (iVar5 < 0) {
          iVar5 = iVar5 + 3;
        }
        *(int *)*piVar7 = (iVar5 >> 2) << 2;
        a6 = (undefined4 **)0x4;
        (*(code *)puVar2)(*(undefined4 *)(iVar10 + *piVar1),a5,4,a7);
        *(int *)(iVar10 + *piVar1) = *(int *)(iVar10 + *piVar1) + 0x20;
        if (*(uint *)(DAT_8c20bbf0 + iVar10) < *(uint *)*piVar7) {
          *(undefined4 *)(DAT_8c20bbf0 + uStack_78 * 4) = *(undefined4 *)aiStack_48[uStack_78];
        }
        ppuVar9 = a5;
        if (*(uint *)(uStack_78 * 4 + DAT_8c20bbf4) < *(uint *)aiStack_48[uStack_78]) {
          uVar6 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    a5 = ppuVar9;
    uStack_78 = uStack_78 + 1;
    ppuVar9 = a5;
  } while ((int)uStack_78 < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar6 = uVar6 + 1;
  if (4 < (int)uVar6) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar6 == *DAT_8c20bbe4) {
LAB_8c20bb3e:
      *(undefined4 *)aiStack_48[uVar6] = 0;
    }
    else {
      if ((int)uVar6 < 0) {
        uVar8 = 1 >> (~uVar6 & 0x1f) + 1;
      }
      else {
        uVar8 = 1 << (uVar6 & 0x1f);
      }
      if ((uVar8 & *DAT_8c20bbe8) == 0) goto LAB_8c20bb3e;
      puStack_68 = (undefined4 *)((uint)puStack_68 & uVar4 | uVar6 << 0x18);
      (*(code *)puVar2)(*apuStack_34[uVar6],&puStack_68,0x20,a7);
      a6 = (undefined4 **)0x4;
      a5 = (undefined4 **)PTR_DAT_8c20bbec;
      (*(code *)puVar2)(*apuStack_34[uVar6] + 0x20,PTR_DAT_8c20bbec,4,a7);
      *(undefined4 *)aiStack_48[uVar6] = 0x20;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 5);
  (*(code *)PTR_FUN_8c20bbf8)(2,a5,a6,a7);
LAB_8c20bb6c:
  if (*(int *)(*piVar1 + *DAT_8c20bbe4 * 4) == *apuStack_34[*DAT_8c20bbe4]) {
    *DAT_8c20bbfc = 0x10;
    *DAT_8c20bc00 = 0x10;
    puStack_68 = (undefined4 *)(uVar4 & (uint)puStack_68 | (*DAT_8c20bbe4 & 7) << 0x18);
    a5 = &puStack_68;
    a6 = (undefined4 **)0x20;
    (*(code *)puVar2)(*(uint *)(*piVar1 + *DAT_8c20bbe4 * 4) & DAT_8c20bc04 | DAT_8c20bc08,a5,0x20,
                      a7);
  }
LAB_8c20bd36:
  puVar3 = PTR_FUN_8c20bda0;
  puVar2 = PTR_DAT_8c20bd9c;
  *(undefined4 *)PTR_DAT_8c20bd98 = 0;
  uVar4 = *(int *)puVar2 + 1U & 1;
  *(uint *)puVar2 = uVar4;
  (*(code *)puVar3)(uVar4,a5,a6,a7);
  return 0;
}



/* FUN_8c20bdc0 @ 8c20bdc0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20bdc0(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  int iStack_78;
  uint *puStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_5c = *(undefined4 *)(PTR_DAT_8c20bea4 + 4);
  uStack_60 = *(uint *)PTR_DAT_8c20bea4;
  uStack_58 = *(undefined4 *)(PTR_DAT_8c20bea4 + 8);
  uStack_54 = *(undefined4 *)(PTR_DAT_8c20bea4 + 0xc);
  uStack_50 = *(undefined4 *)(PTR_DAT_8c20bea4 + 0x10);
  uStack_4c = *(undefined4 *)(PTR_DAT_8c20bea4 + 0x14);
  uStack_48 = *(undefined4 *)(PTR_DAT_8c20bea4 + 0x18);
  uStack_44 = *(undefined4 *)(PTR_DAT_8c20bea4 + 0x1c);
  puVar9 = &uStack_60;
  if (*DAT_8c20bea8 == 1) {
    *DAT_8c20beac = 0x10;
    *DAT_8c20beb0 = 0x10;
    uStack_60 = uStack_60 & DAT_8c20beb4 | (*DAT_8c20beb8 & 7) << 0x18;
    ar6 = 0x20;
    (*(code *)PTR_FUN_8c20bec8)
              (*(uint *)(*DAT_8c20bebc + *DAT_8c20beb8 * 4) & DAT_8c20bec0 | DAT_8c20bec4,puVar9,
               0x20,ar7);
    ar5 = puVar9;
  }
  iVar6 = FUN_8c20b708(ar4,ar5,ar6,ar7);
  puVar4 = PTR_pvr_20a876_8c20bed4;
  puVar3 = PTR_FUN_8c20bed0;
  puVar2 = PTR_DAT_8c20becc;
  if (iVar6 != 0) {
    (*(code *)PTR_FUN_8c20bed0)(*(undefined4 *)PTR_DAT_8c20becc,ar5,ar6,ar7);
    return iVar6;
  }
  if ((*(uint *)(ar4 + 0x18) & 0x10) == 0) {
    *DAT_8c20c080 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar7 = (*(code *)PTR_pvr_20a876_8c20bed4)((int)DAT_8c20bea0,ar5,ar6,ar7);
    *DAT_8c20bed8 = (uVar7 & 0x1f) << 3;
  }
  puVar9 = DAT_8c20c08c;
  *DAT_8c20c088 = *(uint *)(ar4 + 0x1c) | DAT_8c20c084;
  uVar7 = *puVar9;
  puStack_74 = (uint *)(uVar7 * 4);
  uStack_68 = uVar7 & 1;
  puStack_6c = (uint *)((int)puStack_74 + (int)(puVar9 + 9));
  puStack_70 = (uint *)(DAT_8c20c090 + (int)puStack_74);
  if (*DAT_8c20c094 == 0) {
    *DAT_8c20c098 = 0;
    iStack_78 = 0;
    iVar6 = *DAT_8c20c09c;
    while (iVar6 != 0) {
      (*(code *)*DAT_8c20c0a0)(DAT_8c20c0a0[1],ar5,ar6,ar7);
      if (*DAT_8c20c0a4 < *DAT_8c20c098) {
        iStack_78 = 1;
        break;
      }
      iVar6 = *DAT_8c20c09c;
    }
    if (iStack_78 != 0) {
      *DAT_8c20c0a8 = 0;
      *DAT_8c20c09c = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  ar5 = puStack_74;
  piVar5 = DAT_8c20c0ac;
  *(undefined4 *)(DAT_8c20c0b0 + (int)puStack_74) = *(undefined4 *)*DAT_8c20c0ac;
  iVar6 = DAT_8c20c0b4;
  *(undefined4 *)(DAT_8c20c0b4 + (int)puStack_74) = *(undefined4 *)(*piVar5 + 4);
  *(undefined4 *)(iVar6 + 0x10 + (int)puStack_74) = *(undefined4 *)(*piVar5 + 8);
  *(undefined4 *)(iVar6 + 0x20 + (int)puStack_74) = *(undefined4 *)(*piVar5 + 0xc);
  *(undefined4 *)(iVar6 + 0x30 + (int)puStack_74) = *(undefined4 *)(*piVar5 + 0x10);
  puStack_74 = (uint *)0x0;
  do {
    piVar5 = DAT_8c20c094;
    iStack_78 = (int)puStack_74 * 4;
    iVar6 = *(int *)(*DAT_8c20c0b8 + iStack_78) - *puStack_6c;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 3;
    }
    *puStack_70 = (iVar6 >> 2) << 2;
    if ((*piVar5 == 0) || (puStack_74 != (uint *)*DAT_8c20c0bc)) {
      if ((int)puStack_74 < 0) {
        uVar8 = 1 >> (~(uint)puStack_74 & 0x1f) + 1;
      }
      else {
        uVar8 = 1 << ((uint)puStack_74 & 0x1f);
      }
      if ((uVar8 & *DAT_8c20c0c0) != 0) {
        ar6 = 4;
        ar5 = (uint *)PTR_DAT_8c20c0c4;
        (*(code *)PTR_FUN_8c20c0c8)
                  (*(undefined4 *)(iStack_78 + *DAT_8c20c0b8),PTR_DAT_8c20c0c4,4,ar7);
        *(int *)(iStack_78 + *DAT_8c20c0b8) = *(int *)(iStack_78 + *DAT_8c20c0b8) + 0x20;
        if (*(uint *)(DAT_8c20c0cc + iStack_78) < *puStack_70) {
          (*(code *)PTR_FUN_8c20c0d0)(2,ar5,ar6,ar7);
        }
      }
    }
    puStack_70 = puStack_70 + 4;
    puStack_6c = puStack_6c + 4;
    puStack_74 = (uint *)((int)puStack_74 + 1);
  } while (puStack_74 < (uint *)0x5);
  uStack_64 = *DAT_8c20c0d4;
  *DAT_8c20c098 = 0;
  puStack_70 = (uint *)0x0;
  iVar6 = *DAT_8c20c0d8;
  while (iVar6 != 0) {
    (*(code *)*DAT_8c20c0a0)(DAT_8c20c0a0[1],ar5,ar6,ar7);
    if (*DAT_8c20c0dc < *DAT_8c20c098) {
      puStack_70 = (uint *)0x1;
      break;
    }
    iVar6 = *DAT_8c20c0d8;
  }
  if (puStack_70 == (uint *)0x0) {
    *DAT_8c20c1ac = 1;
    *DAT_8c20c1b0 = 1;
    iStack_78 = uStack_68 << 5;
    if (*DAT_8c20c1b4 == 0) {
      (*(code *)PTR_pvr_20a844_8c20c1b8)(8,1,ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)(8,0,ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)
                ((int)DAT_8c20c1a0,*(undefined4 *)(DAT_8c20c1bc + iStack_78 + 0xc),ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)
                ((int)DAT_8c20c1a2,*(undefined4 *)(DAT_8c20c1bc + iStack_78 + 0x10),ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)
                ((int)DAT_8c20c1a4,*(undefined4 *)(DAT_8c20c1bc + iStack_78 + 0x18),ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)
                ((int)DAT_8c20c1a6,*(undefined4 *)(DAT_8c20c1bc + iStack_78 + 0x1c),ar6,ar7);
      (*(code *)PTR_pvr_20a844_8c20c1b8)
                ((int)DAT_8c20c1a8,*(undefined4 *)(DAT_8c20c1bc + iStack_78 + 0x14),ar6,ar7);
      ar5 = DAT_8c20c1c0;
      (*(code *)PTR_pvr_20a844_8c20c1b8)((int)DAT_8c20c1aa,DAT_8c20c1c0,ar6,ar7);
      (*(code *)puVar4)((int)DAT_8c20c1aa,ar5,ar6,ar7);
    }
    *DAT_8c20c1c4 = 0;
    uStack_68 = 0;
    iVar6 = *DAT_8c20c1c8;
    while (iVar6 != 0) {
      (*(code *)*DAT_8c20c1cc)(DAT_8c20c1cc[1],ar5,ar6,ar7);
      if (*DAT_8c20c1d0 < *DAT_8c20c1c4) {
        uStack_68 = 1;
        break;
      }
      iVar6 = *DAT_8c20c1c8;
    }
    puVar9 = DAT_8c20c284;
    if (uStack_68 != 0) {
      *DAT_8c20c1ac = 0;
      (*(code *)puVar3)(*(undefined4 *)puVar2,ar5,ar6,ar7);
      return 0xfffffffe;
    }
    *DAT_8c20c284 = uVar7;
    *DAT_8c20c28c = *DAT_8c20c288;
    puVar9[2] = 0;
    if (*DAT_8c20c290 == 0) {
      iVar6 = (int)DAT_8c20c280;
    }
    else {
      *DAT_8c20c294 = 0x10;
      *DAT_8c20c298 = 0x10;
      ar6 = 4;
      ar5 = (uint *)PTR_DAT_8c20c2ac;
      (*(code *)PTR_FUN_8c20c2b0)
                (*(uint *)(*DAT_8c20c2a0 + *DAT_8c20c29c * 4) & DAT_8c20c2a4 | DAT_8c20c2a8,
                 PTR_DAT_8c20c2ac,4,ar7);
      iVar6 = *DAT_8c20c29c;
    }
    (*(code *)PTR_FUN_8c20c2b4)(iVar6,ar5,ar6,ar7);
    puStack_70 = (uint *)*DAT_8c20c2b8;
    uStack_68 = *DAT_8c20c2bc;
    puStack_74 = *(uint **)(ar4 + 0x10);
    puStack_6c = *(uint **)(ar4 + 0xc);
    if (*DAT_8c20c2c0 < puStack_74) {
      uVar7 = *DAT_8c20c2c0;
    }
    else {
      uVar7 = (int)puStack_74 - 1;
    }
    uVar10 = 0;
    if (*DAT_8c20c2c4 < puStack_6c) {
      uVar8 = *DAT_8c20c2c4;
    }
    else {
      uVar8 = (int)puStack_6c - 1;
    }
    (*(code *)PTR_FUN_8c20c360)(0,0,uVar8,uVar7);
    *DAT_8c20c368 = *DAT_8c20c364;
    *DAT_8c20c370 = *DAT_8c20c36c;
    *DAT_8c20c364 = puStack_70;
    *DAT_8c20c36c = uStack_68;
    FUN_8c20b5a0(DAT_8c20c374,uVar10,uVar8,uVar7);
    *DAT_8c20c378 = uStack_64;
    (*(code *)puVar3)(*(undefined4 *)puVar2,uVar10,uVar8,uVar7);
    if (*DAT_8c20c37c == 1) {
      *DAT_8c20c380 = 0;
      bVar1 = false;
      iVar6 = *DAT_8c20c384;
      while (iVar6 != 0) {
        (*(code *)*DAT_8c20c388)(DAT_8c20c388[1],uVar10,uVar8,uVar7);
        if (*DAT_8c20c38c < *DAT_8c20c380) {
          bVar1 = true;
          break;
        }
        iVar6 = *DAT_8c20c384;
      }
      if (bVar1) {
        *DAT_8c20c390 = 0;
        return 0xfffffffd;
      }
      (*(code *)PTR_pvr_20a844_8c20c44c)(8,1,uVar8,uVar7);
      (*(code *)PTR_pvr_20a844_8c20c44c)(8,0,uVar8,uVar7);
      (*(code *)PTR_pvr_20a844_8c20c44c)
                ((int)DAT_8c20c440,*(undefined4 *)(DAT_8c20c450 + iStack_78 + 0xc),uVar8,uVar7);
      iVar6 = iStack_78;
      (*(code *)PTR_pvr_20a844_8c20c44c)
                ((int)DAT_8c20c442,*(undefined4 *)(DAT_8c20c454 + iStack_78),uVar8,uVar7);
      (*(code *)PTR_pvr_20a844_8c20c44c)
                ((int)DAT_8c20c444,*(undefined4 *)(DAT_8c20c458 + iVar6),uVar8,uVar7);
      (*(code *)PTR_pvr_20a844_8c20c44c)
                ((int)DAT_8c20c446,*(undefined4 *)(DAT_8c20c45c + iVar6),uVar8,uVar7);
      (*(code *)PTR_pvr_20a844_8c20c44c)
                ((int)DAT_8c20c448,*(undefined4 *)(DAT_8c20c460 + iVar6),uVar8,uVar7);
      uVar10 = DAT_8c20c464;
      (*(code *)PTR_pvr_20a844_8c20c44c)((int)DAT_8c20c44a,DAT_8c20c464,uVar8,uVar7);
      (*(code *)puVar4)((int)DAT_8c20c44a,uVar10,uVar8,uVar7);
    }
    uVar10 = DAT_8c20c46c;
    *(undefined4 *)PTR_DAT_8c20c468 = 0;
    *(int **)uVar10 = &iStack_78;
    return 0;
  }
  *DAT_8c20c09c = 0;
override_prt_8c20c05a_7a4d7f16:
  (*(code *)puVar3)(*(undefined4 *)puVar2,ar5,ar6,ar7);
  return 0xffffffff;
}



/* FUN_8c20c416 @ 8c20c416 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

uint * FUN_8c20c416(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 a5;
  uint a7;
  uint uVar13;
  
  puVar6 = (uint *)FUN_8c20b708(ar4,ar5,ar6,ar7);
  puVar2 = DAT_8c20c5a8;
  iVar12 = DAT_8c20c5a0;
  if (puVar6 == (uint *)0x0) {
    *(uint *)(DAT_8c20c5a0 + 4) = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
    *(uint *)(iVar12 + 8) = *(uint *)(ar4 + 0x1c) | DAT_8c20c5a4;
    uVar13 = *puVar2;
    *DAT_8c20c5ac = 0;
    bVar1 = false;
    uVar10 = *DAT_8c20c5b0;
    puVar6 = DAT_8c20c5b0;
    while (uVar10 != 0) {
      (*(code *)*DAT_8c20c5b4)(DAT_8c20c5b4[1],ar5,ar6,ar7);
      puVar6 = DAT_8c20c5b8;
      if (*DAT_8c20c5b8 < *DAT_8c20c5ac) {
        bVar1 = true;
        break;
      }
      uVar10 = *DAT_8c20c5b0;
    }
    if (!bVar1) {
      *DAT_8c20c5ac = 0;
      bVar1 = false;
      iVar11 = *DAT_8c20c5bc;
      while (iVar11 != 0) {
        (*(code *)*DAT_8c20c5b4)(DAT_8c20c5b4[1],ar5,ar6,ar7);
        puVar6 = DAT_8c20c5c0;
        if (*DAT_8c20c5c0 < *DAT_8c20c5ac) {
          bVar1 = true;
          break;
        }
        iVar11 = *DAT_8c20c5bc;
      }
      piVar9 = DAT_8c20c5bc;
      if (!bVar1) {
        *DAT_8c20c5c4 = 1;
        uVar7 = *DAT_8c20c5c8;
        uVar8 = *DAT_8c20c5cc;
        a7 = *(uint *)(ar4 + 0x10);
        uVar10 = *(uint *)(ar4 + 0xc);
        if (*DAT_8c20c5d0 < a7) {
          a7 = *DAT_8c20c5d0;
        }
        a5 = 0;
        if (*DAT_8c20c5d4 < uVar10) {
          uVar10 = *DAT_8c20c5d4;
        }
        (*(code *)PTR_FUN_8c20c5d8)(0,0,uVar10,a7);
        puVar4 = DAT_8c20c5cc;
        puVar3 = DAT_8c20c5c8;
        *(undefined4 *)(iVar12 + 0xc) = *DAT_8c20c5c8;
        *(undefined4 *)(iVar12 + 0x10) = *puVar4;
        *puVar3 = uVar7;
        *DAT_8c20c5cc = uVar8;
        puVar6 = (uint *)FUN_8c20b5a0(DAT_8c20c5a0,a5,uVar10,a7);
        *DAT_8c20c5ac = 0;
        bVar1 = false;
        iVar12 = *DAT_8c20c5bc;
        while (iVar12 != 0) {
          (*(code *)*DAT_8c20c5b4)(DAT_8c20c5b4[1],a5,uVar10,a7);
          puVar6 = DAT_8c20c5c0;
          if (*DAT_8c20c5c0 < *DAT_8c20c5ac) {
            bVar1 = true;
            break;
          }
          iVar12 = *DAT_8c20c68c;
        }
        puVar5 = PTR_pvr_20a844_8c20c694;
        piVar9 = DAT_8c20c690;
        if (!bVar1) {
          (*(code *)PTR_pvr_20a844_8c20c694)(8,1,uVar10,a7);
          (*(code *)puVar5)(8,0,uVar10,a7);
          iVar12 = (uVar13 & 1) * 0x20;
          (*(code *)puVar5)((int)DAT_8c20c680,*(undefined4 *)(DAT_8c20c698 + iVar12),uVar10,a7);
          (*(code *)puVar5)((int)DAT_8c20c682,*(undefined4 *)(DAT_8c20c69c + iVar12),uVar10,a7);
          (*(code *)puVar5)((int)DAT_8c20c684,*(undefined4 *)(DAT_8c20c6a0 + iVar12),uVar10,a7);
          (*(code *)puVar5)((int)DAT_8c20c686,*(undefined4 *)(DAT_8c20c6a4 + iVar12),uVar10,a7);
          (*(code *)puVar5)((int)DAT_8c20c688,*(undefined4 *)(DAT_8c20c6a8 + iVar12),uVar10,a7);
          uVar7 = DAT_8c20c6ac;
          (*(code *)puVar5)((int)DAT_8c20c68a,DAT_8c20c6ac,uVar10,a7);
          (*(code *)PTR_pvr_20a876_8c20c6b0)((int)DAT_8c20c68a,uVar7,uVar10,a7);
          *DAT_8c20c6b4 = 0;
          *DAT_8c20c6bc = *DAT_8c20c6b8;
          piVar9 = DAT_8c20c6c0;
          *DAT_8c20c6c4 = *DAT_8c20c6c0;
          *DAT_8c20c6c8 = 1;
          *DAT_8c20c6cc = 1;
          *(undefined4 *)(DAT_8c20c6d0 + *piVar9 * 4) = 2;
          return (uint *)0;
        }
      }
      *piVar9 = 0;
    }
  }
  else {
    (*(code *)PTR_FUN_8c20c474)(*(undefined4 *)PTR_DAT_8c20c470,ar5,ar6,ar7);
  }
  return puVar6;
}



/* FUN_8c20c7e0 @ 8c20c7e0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20c7e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = PTR_pvr_20a844_8c20c894;
  if (*DAT_8c20c88c == 1) {
    uVar2 = *DAT_8c20c890;
    (*(code *)PTR_pvr_20a844_8c20c894)(8,1,ar6,ar7);
    (*(code *)puVar1)(8,0,ar6,ar7);
    iVar4 = (uVar2 & 1) * 0x20;
    (*(code *)puVar1)((int)DAT_8c20c880,*(undefined4 *)(DAT_8c20c898 + iVar4),ar6,ar7);
    (*(code *)puVar1)((int)DAT_8c20c882,*(undefined4 *)(DAT_8c20c89c + iVar4),ar6,ar7);
    (*(code *)puVar1)((int)DAT_8c20c884,*(undefined4 *)(DAT_8c20c8a0 + iVar4),ar6,ar7);
    (*(code *)puVar1)((int)DAT_8c20c886,*(undefined4 *)(DAT_8c20c8a4 + iVar4),ar6,ar7);
    (*(code *)puVar1)((int)DAT_8c20c888,*(undefined4 *)(DAT_8c20c8a8 + iVar4),ar6,ar7);
    uVar3 = DAT_8c20c8ac;
    (*(code *)puVar1)((int)DAT_8c20c88a,DAT_8c20c8ac,ar6,ar7);
    (*(code *)PTR_pvr_20a876_8c20c8b0)((int)DAT_8c20c88a,uVar3,ar6,ar7);
    *DAT_8c20c8b4 = 0;
    *DAT_8c20c8bc = *DAT_8c20c8b8;
  }
  uVar3 = (*(code *)PTR_FUN_8c20c8c4)(*(undefined4 *)PTR_DAT_8c20c8c0);
  return uVar3;
}



/* FUN_8c20c8e0 @ 8c20c8e0 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20c8ea) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20c8e0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_8c20c960;
  uVar1 = (*(code *)PTR_pvr_20a876_8c20c964)((int)DAT_8c20c962,ar5,ar6,ar7);
  (*(code *)PTR_pvr_20a844_8c20c968)
            ((int)DAT_8c20c962,(int)(ar4 & uVar2) >> 5 | uVar1 & 0xffffffe0,ar6,ar7);
  return 0;
}



/* FUN_8c20c90c @ 8c20c90c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20c90c(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c20d128(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar1 = (*(code *)PTR_FUN_8c20c96c)(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_8c20c970)(ar4[5],ar4,ar6,ar7);
      ar5 = ar4;
    }
    if (iVar1 == 3) {
      (*(code *)PTR_FUN_8c20c974)(3,ar5,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c20c980 @ 8c20c980 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20c980(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 in_stack_00000000;
  
  iVar2 = FUN_8c20d128(ar4,ar6,ar7,in_stack_00000000);
  puVar1 = PTR_FUN_8c20cac0;
  if (iVar2 == 0) {
    *ar5 = *ar4;
    ar5[1] = ar4[1];
    ar5[2] = ar4[2];
    ar5[3] = ar4[3];
    ar5[4] = ar4[4];
    ar5[5] = ar4[5];
    ar5[6] = ar4[6];
    if ((*ar4 & 0xffff) == 3) {
      iVar2 = (*(code *)PTR_FUN_8c20cac4)(ar4,ar6,ar7,in_stack_00000000);
      if (iVar2 != 3) {
        iVar2 = (*(code *)PTR_FUN_8c20cac4)(ar5,ar6,ar7,in_stack_00000000);
        if (iVar2 != 3) {
          return iVar2;
        }
        (*(code *)PTR_FUN_8c20cac8)(ar4,ar6,ar7,in_stack_00000000);
        (*(code *)puVar1)(3,ar6,ar7,in_stack_00000000);
        return 3;
      }
    }
    else {
      ar6 = ar4;
      iVar2 = (*(code *)PTR_FUN_8c20cacc)(ar4[5],ar4,ar7,in_stack_00000000);
      if (iVar2 != 3) {
        iVar2 = (*(code *)PTR_FUN_8c20cacc)(ar5[5],ar5,ar7,in_stack_00000000);
        if (iVar2 != 3) {
          return iVar2;
        }
        (*(code *)PTR_FUN_8c20cad0)(ar4[7],ar5,ar7,in_stack_00000000);
        (*(code *)puVar1)(3,ar5,ar7,in_stack_00000000);
        return 3;
      }
    }
    (*(code *)puVar1)(3,ar6,ar7,in_stack_00000000);
  }
  return iVar2;
}



/* FUN_8c20ca32 @ 8c20ca32 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20ca32(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint a4;
  uint *a5;
  int iVar5;
  undefined4 in_stack_00000000;
  
  iVar3 = FUN_8c20d128(ar4,ar6,ar7,in_stack_00000000);
  if (iVar3 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar3 = 4;
    }
    else {
      if ((1 < ar5) && (iVar3 = 1, puVar4 = ar4, 1 < ar5)) {
        do {
          iVar3 = iVar3 + 1;
          puVar4[10] = *ar4;
          puVar4[0xb] = ar4[1];
          puVar4[0xc] = ar4[2];
          puVar4[0xd] = ar4[3];
          puVar4[0xe] = ar4[4];
          puVar4[0xf] = ar4[5];
          puVar4[0x10] = ar4[6];
          puVar4 = puVar4 + 10;
        } while (iVar3 < ar5);
      }
      puVar4 = ar4;
      iVar3 = (*(code *)PTR_FUN_8c20cacc)(ar4[5] * ar5,ar4,ar7,in_stack_00000000);
      puVar1 = PTR_FUN_8c20cbe0;
      if (iVar3 == 3) {
        (*(code *)PTR_FUN_8c20cac0)(3,puVar4,ar7,in_stack_00000000);
      }
      else {
        a4 = ar4[7];
        (*(code *)PTR_FUN_8c20cbe0)(a4,puVar4,ar7,in_stack_00000000);
        iVar5 = 0;
        if (0 < ar5) {
          do {
            puVar2 = PTR_FUN_8c20cbe4;
            a5 = ar4 + iVar5 * 10;
            a5[7] = a4;
            puVar4 = a5;
            iVar3 = (*(code *)puVar2)(a5[5],a5,ar7,in_stack_00000000);
            a4 = a4 + (a5[5] & 0xfffffffc);
            if (iVar3 == 3) {
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  (*(code *)puVar1)(ar4[iVar5 * 10 + 7],puVar4,ar7,in_stack_00000000);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              (*(code *)PTR_FUN_8c20cbe8)(3,puVar4,ar7,in_stack_00000000);
              return 3;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < ar5);
        }
      }
    }
  }
  return iVar3;
}



/* FUN_8c20cb5a @ 8c20cb5a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cb5a(uint *ar4,undefined4 ar5,int ar6,int ar7)

{
  uint uVar1;
  
  if ((ar6 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]);
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        (*(code *)PTR_FUN_8c20cbec)(ar4[7],ar4[5]);
      }
      else {
        FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7);
      }
    }
    return 0;
  }
  return 4;
}



/* FUN_8c20cb5e @ 8c20cb5e callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cb5e(uint *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int in_r0;
  uint uVar1;
  
  if ((in_r0 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]);
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        (*(code *)PTR_FUN_8c20cbec)(ar4[7],ar5,ar4[5],ar7);
      }
      else {
        FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7);
      }
    }
    return 0;
  }
  return 4;
}



/* FUN_8c20cbbc @ 8c20cbbc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cbbc(uint *ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  uint a7;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = 4;
  }
  else {
    uVar2 = ar4[6];
    if (((((uVar2 & 4) == 0) || ((uVar2 & 1) == 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0))
    {
      iVar3 = 0;
    }
    else {
      iVar3 = 4;
    }
    a7 = ar7 * 0x20;
    uVar4 = iVar3 + ar6 * a7;
    uVar2 = ar4[5] - uVar4;
    if (uVar4 < ar4[5]) {
      if (a7 < uVar2) {
        uVar2 = a7;
      }
      (*(code *)PTR_FUN_8c20cd00)(uVar4 + ar4[7],ar5,uVar2,a7);
      uVar1 = 0;
    }
    else {
      uVar1 = 0xc;
    }
  }
  return uVar1;
}



/* FUN_8c20cc56 @ 8c20cc56 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cc56(uint *ar4,undefined4 ar5,uint ar6,uint ar7)

{
  uint uVar1;
  int iVar2;
  uint a7;
  uint uVar3;
  
  a7 = ar7 & 0xfffffffc;
  if (a7 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      return 4;
    }
    uVar1 = ar4[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      iVar2 = 0;
    }
    else {
      iVar2 = 4;
    }
    uVar3 = (ar6 & 0xfffffffc) + iVar2;
    uVar1 = ar4[5] - uVar3;
    if (ar4[5] <= uVar3) {
      return 7;
    }
    if (a7 < uVar1) {
      uVar1 = a7;
    }
    (*(code *)PTR_FUN_8c20cd00)(uVar3 + ar4[7],ar5,uVar1,a7);
  }
  return 0;
}



/* FUN_8c20ccd6 @ 8c20ccd6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20ccd6(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_r3;
  uint uVar2;
  int a7;
  uint unaff_r9;
  uint uVar3;
  int iVar4;
  int a4;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  
  uVar2 = *(uint *)(ar4 + 0x18);
  if (((((in_r3 & uVar2) == 0) && ((uVar2 & 1) == 0)) && ((uVar2 & 8) == 0)) &&
     ((uVar2 & 0x20) == 0)) {
    a7 = *(int *)(ar4 + 0xc);
    iVar4 = a7 * 2;
    a4 = in_stack_0000001c * iVar4 + in_stack_00000018 * 2 + *(int *)(ar4 + 0x1c);
    uVar2 = ar6 << 1;
    if (in_stack_00000028 != 0) {
      ar5 = (in_stack_00000024 * in_stack_00000028 * 2 + in_stack_00000020 * 2 & 0xfffffffcU) + ar5;
      uVar2 = in_stack_00000028 * 2;
    }
    uVar3 = 0;
    if (unaff_r9 != 0) {
      do {
        (*(code *)PTR_FUN_8c20ce20)(a4,ar5,ar6 << 1,a7);
        uVar3 = uVar3 + 1;
        a4 = a4 + iVar4;
        ar5 = ar5 + (uVar2 & 0xfffffffc);
      } while (uVar3 < unaff_r9);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



/* FUN_8c20cd92 @ 8c20cd92 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cd92(int ar4,uint ar5,uint ar6,uint ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint a6;
  int a6_00;
  undefined4 uVar4;
  undefined4 a7;
  int iVar5;
  int iVar6;
  int in_stack_00000000;
  int in_stack_00000004;
  undefined4 *puStack_1c;
  
  if ((ar5 & 0x1f) != 0) {
    return 7;
  }
  uVar3 = *(uint *)(ar4 + 0x18);
  if (((((uVar3 & 1) == 0) && ((uVar3 & 4) == 0)) && ((uVar3 & 8) == 0)) &&
     (((uVar3 & 0x20) == 0 && ((*(uint *)(ar4 + 8) & DAT_8c20ce24) != 0)))) {
    if (in_stack_00000000 == 6) {
      iVar5 = 0;
    }
    else {
      if (in_stack_00000000 != 3) {
        return 4;
      }
      iVar5 = 1;
    }
    if (((0 < (int)ar6) && ((int)ar6 < 0x41)) && ((0 < (int)ar7 && ((int)ar7 < 0x41)))) {
      iVar6 = ar6 * ar7;
      if (iVar6 < 2) {
        ar6 = *(uint *)(ar4 + 0xc) >> 4;
        ar7 = *(uint *)(ar4 + 0x10) >> 4;
      }
      uVar3 = (uint)(iVar6 >= 2);
      if (iVar5 == 0) {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 * 0x180;
      }
      else {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 << 9;
      }
      uVar4 = 0x3f;
      a6 = ar6 - 1 & 0x3f;
      (*(code *)PTR_pvr_20a844_8c20cf48)
                ((int)DAT_8c20cf40,iVar5 << 0x18 | uVar3 << 0x10 | (ar7 - 1 & 0x3f) << 8 | a6,a6,
                 0x3f);
      (*(code *)PTR_pvr_20a844_8c20cf48)
                ((int)DAT_8c20cf42,*(uint *)(ar4 + 0x1c) & DAT_8c20cf4c,a6,uVar4);
      uVar4 = DAT_8c20cf54;
      puVar1 = PTR_sh4_dmac_202f40_8c20cf50;
      iVar5 = (int)DAT_8c20cf44;
      do {
        a7 = 0x18;
        a6_00 = iVar6;
        iVar2 = (*(code *)puVar1)(uVar4,ar5,iVar6,0x18);
      } while (iVar2 == iVar5);
      if (iVar2 == 0) {
        if (in_stack_00000004 == 1) {
          (*(code *)PTR_FUN_8c20cf58)(*puStack_1c,0,a6_00,a7);
        }
        return 0;
      }
      return 8;
    }
  }
  return 4;
}



/* FUN_8c20cefe @ 8c20cefe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cefe(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  
  if ((*ar4 & 0xffff) == 3) {
    iVar1 = FUN_8c20d400(ar4[3],ar4[3],ar6,ar7);
    puVar2 = PTR_DAT_8c20cfc4;
    if ((ar4[6] & 1) != 0) {
      puVar2 = PTR_DAT_8c20cf5c;
    }
    iVar1 = *(int *)(puVar2 + iVar1 * 4);
  }
  else {
    if ((ar4[6] & 8) == 0) {
      return 4;
    }
    iVar1 = (int)DAT_8c20cfc0;
  }
  (*(code *)PTR_FUN_8c20cfc8)(ar4[7],ar5,iVar1,ar7);
  return 0;
}



/* FUN_8c20cf88 @ 8c20cf88 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cf88(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = (*(code *)PTR_FUN_8c20cfcc)(ar4);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c20cfd0)(ar4[7]);
  }
  return uVar1;
}



/* FUN_8c20cf8c @ 8c20cf8c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cf8c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 0xffff) == 3) {
    uVar1 = (*(code *)PTR_FUN_8c20cfcc)(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)PTR_FUN_8c20cfd0)(unaff_r14[7],ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c20cfe0 @ 8c20cfe0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cfe0(int *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  int *piStack_8;
  
  puStack_c = ar5;
  piStack_8 = ar4;
  uVar1 = (*(code *)PTR_FUN_8c20d0c0)(&iStack_1c,&iStack_18,&iStack_14,&uStack_10);
  *piStack_8 = iStack_1c + iStack_18 + iStack_14;
  *puStack_c = uStack_10;
  return uVar1;
}



/* FUN_8c20d01a @ 8c20d01a callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d01a(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_r3;
  uint a7;
  
  if ((ar4[2] == in_r3) && ((ar4[6] & 1) != 0)) {
    uVar1 = FUN_8c20d82e(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[2] == DAT_8c20d0c8) && ((ar4[6] & 1) != 0)) {
    uVar1 = FUN_8c20d9ce(ar4,ar5,ar6,ar7);
  }
  else if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c20db80(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[6] & 8) == 0) {
    a7 = ar4[6];
    if (((a7 & 4) == 0) || ((a7 & 1) == 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = FUN_8c20daa0(ar4,ar5,ar6,a7);
    }
  }
  else {
    uVar1 = FUN_8c20db80(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}



/* FUN_8c20d082 @ 8c20d082 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d082(undefined4 ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*ar5 & 3) == 1) {
    (*(code *)PTR_FUN_8c20d0cc)(ar5[7],ar5[5]);
  }
  else if ((*ar5 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,ar5[7],ar5[3],ar5[6]);
  }
  else {
    uVar1 = ar5[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      (*(code *)PTR_FUN_8c20d164)(ar5[7],ar5[5]);
    }
    else {
      FUN_8c20d6ea(ar4,ar5[7],ar5[3],ar7);
    }
  }
  return 0;
}



/* FUN_8c20d086 @ 8c20d086 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d086(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 3) == 1) {
    (*(code *)PTR_FUN_8c20d0cc)(ar4,unaff_r14[7],unaff_r14[5],ar7);
  }
  else if ((*unaff_r14 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,unaff_r14[7],unaff_r14[3],unaff_r14[6]);
  }
  else {
    uVar1 = unaff_r14[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      (*(code *)PTR_FUN_8c20d164)(ar4,unaff_r14[7],unaff_r14[5],ar7);
    }
    else {
      FUN_8c20d6ea(ar4,unaff_r14[7],unaff_r14[3],ar7);
    }
  }
  return 0;
}



/* FUN_8c20d114 @ 8c20d114 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d114(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)PTR_FUN_8c20d168)(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)PTR_FUN_8c20d16c)(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c20d128 @ 8c20d128 callers=3 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d128(undefined4 *ar4,int ar5,int ar6,uint ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = DAT_8c20d170 & ar7;
  uVar2 = ar7 & 0xff;
  if ((uVar4 == (int)DAT_8c20d160) || (uVar4 == (int)DAT_8c20d162)) {
    *ar4 = 3;
  }
  else {
    *ar4 = 2;
  }
  if ((uVar4 == (int)DAT_8c20d1e0) || (uVar4 == (int)DAT_8c20d1e2)) {
    if (*(int *)(*(int *)PTR_DAT_8c20d1ec + (int)DAT_8c20d1e4) == 3) {
      ar4[1] = 3;
      uVar1 = DAT_8c20d1f0;
    }
    else {
      ar4[1] = 1;
      uVar1 = DAT_8c20d1f0;
    }
  }
  else {
    if ((uVar4 != (int)DAT_8c20d1e6) && (uVar4 != (int)DAT_8c20d1e8)) {
      ar4[1] = 1;
      if (uVar2 == 0) {
        ar4[2] = 0;
        goto LAB_8c20d262;
      }
      uVar1 = DAT_8c20d240;
      if (uVar2 == 1) {
LAB_8c20d22e:
        ar4[2] = uVar1;
      }
      else {
        uVar1 = DAT_8c20d244;
        if (uVar2 != 2) {
          uVar1 = DAT_8c20d248;
          if (uVar2 == 3) goto LAB_8c20d22e;
          uVar1 = DAT_8c20d24c;
          if (uVar2 != 4) {
            uVar3 = 4;
            goto LAB_8c20d262;
          }
        }
        ar4[2] = uVar1;
      }
      goto LAB_8c20d262;
    }
    if (*(int *)(*(int *)PTR_DAT_8c20d1ec + (int)DAT_8c20d1e4) == 3) {
      ar4[1] = 3;
      uVar1 = DAT_8c20d1f4;
    }
    else {
      ar4[1] = 1;
      uVar1 = DAT_8c20d1f4;
    }
  }
  ar4[2] = uVar1;
LAB_8c20d262:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != DAT_8c20d320)) &&
      ((ar5 != DAT_8c20d322 && ((ar5 != DAT_8c20d324 && (ar5 != DAT_8c20d326)))))))) {
    uVar3 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) && ((ar6 != 0x40 && (ar6 != DAT_8c20d320))))
     && ((ar6 != DAT_8c20d322 && ((ar6 != DAT_8c20d324 && (ar6 != DAT_8c20d326)))))) {
    uVar3 = 4;
  }
  if (((((uVar4 != (int)DAT_8c20d328) && (uVar4 != (int)DAT_8c20d32a)) &&
       (uVar4 != (int)DAT_8c20d32c)) &&
      ((uVar4 != (int)DAT_8c20d32e && (uVar4 != (int)DAT_8c20d330)))) && (ar5 != ar6)) {
    uVar3 = 4;
  }
  uVar2 = (uint)DAT_8c20d332;
  ar4[6] = 0;
  if (((uVar4 == uVar2) || (uVar4 == (int)DAT_8c20d324)) ||
     ((uVar4 == (int)DAT_8c20d326 ||
      (((uVar4 == (int)DAT_8c20d334 || (uVar4 == (int)DAT_8c20d336)) || (uVar4 == (int)DAT_8c20d338)
       ))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == (int)DAT_8c20d33a) || (uVar4 == (int)DAT_8c20d332)) ||
     ((uVar4 == (int)DAT_8c20d3e0 || ((uVar4 == (int)DAT_8c20d3e2 || (uVar4 == (int)DAT_8c20d3e4))))
     )) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == (int)DAT_8c20d3e6) || (uVar4 == (int)DAT_8c20d3e8)) ||
      (uVar4 == (int)DAT_8c20d3ea)) || (uVar4 == (int)DAT_8c20d3ec)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == (int)DAT_8c20d3ee) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == (int)DAT_8c20d3f0) || (uVar4 == (int)DAT_8c20d3f2)) ||
     ((uVar4 == (int)DAT_8c20d3f4 || (uVar4 == (int)DAT_8c20d3f6)))) {
    ar4[6] = ar4[6] | 0x24;
  }
  FUN_8c20d4a6(ar4,ar5,ar6,4);
  return uVar3;
}



/* FUN_8c20d400 @ 8c20d400 callers=10 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d400(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 != 8) {
    if (ar4 == 0x10) {
      return 4;
    }
    if (ar4 == 0x20) {
      return 5;
    }
    if (ar4 == 0x40) {
      return 6;
    }
    if (ar4 == DAT_8c20d460) {
      return 7;
    }
    if (ar4 == DAT_8c20d462) {
      return 8;
    }
    if (ar4 == DAT_8c20d464) {
      return 9;
    }
    if (ar4 == DAT_8c20d466) {
      return 10;
    }
  }
  return 3;
}



/* FUN_8c20d4a6 @ 8c20d4a6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c20d4a6(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c20d63c(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[6] & 8) == 0) {
    if ((ar4[6] & 0x20) == 0) {
      uVar1 = FUN_8c20d500(ar4,ar5,ar6,ar7);
    }
    else {
      uVar1 = FUN_8c20d5b2(ar4,ar5,ar6,ar7);
    }
  }
  else {
    uVar1 = FUN_8c20d554(ar4,ar5,ar6,ar7);
  }
  ar4[5] = uVar1;
  return uVar1;
}



/* FUN_8c20d4aa @ 8c20d4aa callers=0 callees=4 */

/* WARNING: Unknown calling convention */

uint FUN_8c20d4aa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *unaff_r14;
  
  if ((*unaff_r14 & 0xffff) == 3) {
    uVar1 = FUN_8c20d63c(unaff_r14,ar5,ar6,ar7);
  }
  else if ((unaff_r14[6] & 8) == 0) {
    if ((unaff_r14[6] & 0x20) == 0) {
      uVar1 = FUN_8c20d500(unaff_r14,ar5,ar6,ar7);
    }
    else {
      uVar1 = FUN_8c20d5b2(unaff_r14,ar5,ar6,ar7);
    }
  }
  else {
    uVar1 = FUN_8c20d554(unaff_r14,ar5,ar6,ar7);
  }
  unaff_r14[5] = uVar1;
  return uVar1;
}



/* FUN_8c20d500 @ 8c20d500 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20d500(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(uint *)(ar4 + 0xc) * *(uint *)(ar4 + 0x10);
  if ((*(uint *)(ar4 + 0x18) & 1) != 0) {
    uVar3 = *(uint *)(ar4 + 0xc) >> 1;
    uVar2 = *(uint *)(ar4 + 0x10) >> 1;
    uVar1 = uVar2;
    if (uVar3 < uVar2) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar3 * uVar2;
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
      iVar4 = iVar4 + iVar5;
    }
    if (uVar3 == uVar2) {
      iVar4 = iVar4 + 4;
    }
    else {
      iVar4 = iVar4 + uVar3 * uVar2;
    }
  }
  if (*(int *)(ar4 + 4) == 1) {
    iVar4 = iVar4 << 1;
  }
  else {
    iVar4 = iVar4 << 2;
  }
  return iVar4;
}



/* FUN_8c20d554 @ 8c20d554 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20d554(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (*(uint *)(ar4 + 0xc) >> 1) * (*(uint *)(ar4 + 0x10) >> 1);
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    if ((*(int *)(ar4 + 0xc) == 8) && (*(int *)(ar4 + 0x10) == 8)) {
      iVar4 = iVar4 + 0x10;
    }
  }
  else {
    uVar3 = *(uint *)(ar4 + 0xc) >> 2;
    uVar2 = *(uint *)(ar4 + 0x10) >> 2;
    uVar1 = uVar2;
    if (uVar3 < uVar2) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar3 * uVar2;
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
      iVar4 = iVar4 + iVar5;
    }
    if (uVar3 == uVar2) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar4 = iVar4 + uVar3 * uVar2;
    }
    iVar4 = iVar4 + 10;
  }
  return iVar4 + DAT_8c20d600;
}



/* FUN_8c20d5b2 @ 8c20d5b2 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c20d5b2(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(ar4 + 0xc) * *(uint *)(ar4 + 0x10);
  if ((*(uint *)(ar4 + 0x18) & 1) != 0) {
    uVar2 = *(uint *)(ar4 + 0xc) >> 1;
    uVar3 = *(uint *)(ar4 + 0x10) >> 1;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      uVar1 = uVar2;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar2 * uVar3;
      uVar2 = uVar2 >> 1;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 + iVar5;
    }
    if (uVar2 == uVar3) {
      iVar5 = uVar4 + 1;
    }
    else {
      iVar5 = uVar4 + uVar2 * uVar3;
    }
    if (*(int *)(ar4 + 8) == DAT_8c20d604) {
      uVar4 = iVar5 + 0x2b;
    }
    else {
      uVar4 = iVar5 + 0xb;
    }
  }
  if (*(int *)(ar4 + 8) == DAT_8c20d720) {
    if (uVar4 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 >> 1;
    }
  }
  return uVar4;
}



/* FUN_8c20d63c @ 8c20d63c callers=1 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20d63c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(uint *)(ar4 + 0xc);
  uVar4 = *(uint *)(ar4 + 0x10);
  iVar5 = (uVar3 >> 1) * (uVar4 >> 1);
  iVar2 = FUN_8c20d400(uVar3,uVar4,ar6,ar7);
  if ((*(uint *)(ar4 + 0x18) & 1) == 0) {
    iVar5 = iVar5 + *(int *)(PTR_DAT_8c20d728 + iVar2 * 4);
  }
  else {
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 2;
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar6 = uVar3 * uVar4;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 >> 1;
      iVar5 = iVar5 + iVar6;
    }
    if (uVar3 == uVar4) {
      iVar5 = iVar5 + 2;
    }
    else {
      iVar5 = iVar5 + uVar3 * uVar4;
    }
    iVar5 = iVar5 + 10 + *(int *)(PTR_DAT_8c20d724 + iVar2 * 4);
  }
  return iVar5;
}



/* FUN_8c20d6c0 @ 8c20d6c0 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d6c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c20d730)(ar4 + 4,ar5,*(int *)(PTR_DAT_8c20d72c + iVar1 * 4) + 4);
  return uVar2;
}



/* FUN_8c20d6ea @ 8c20d6ea callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d6ea(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  uVar2 = (*(code *)PTR_FUN_8c20d734)(ar4,ar5 + 4,*(undefined4 *)(PTR_DAT_8c20d72c + iVar1 * 4));
  return uVar2;
}



/* FUN_8c20d740 @ 8c20d740 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d740(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint a7;
  int a6;
  
  a7 = ar7;
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    a6 = *(int *)(PTR_DAT_8c20d7ec + iVar1);
    iVar1 = *(int *)(PTR_DAT_8c20d7f0 + iVar1);
  }
  else {
    a6 = *(int *)(PTR_DAT_8c20d7e4 + iVar1);
    iVar1 = *(int *)(PTR_DAT_8c20d7e8 + iVar1) + 10;
  }
  (*(code *)PTR_FUN_8c20d7f4)(ar4,ar5,a6,a7);
  uVar2 = (*(code *)PTR_FUN_8c20d7f4)(ar4 + DAT_8c20d7e0,ar5 + a6,iVar1);
  return uVar2;
}



/* FUN_8c20d7a0 @ 8c20d7a0 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d7a0(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint a7;
  int a6;
  
  a7 = ar7;
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    a6 = *(int *)(PTR_DAT_8c20d8a4 + iVar1);
    iVar1 = *(int *)(PTR_DAT_8c20d8a8 + iVar1);
  }
  else {
    a6 = *(int *)(PTR_DAT_8c20d7e4 + iVar1);
    iVar1 = *(int *)(PTR_DAT_8c20d7e8 + iVar1) + 10;
  }
  (*(code *)PTR_FUN_8c20d8ac)(ar4,ar5,a6,a7);
  uVar2 = (*(code *)PTR_FUN_8c20d8ac)(ar4 + a6,ar5 + DAT_8c20d8a0,iVar1);
  return uVar2;
}



/* FUN_8c20d82e @ 8c20d82e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d82e(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  iVar5 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  puVar4 = PTR_DAT_8c20da80;
  puVar3 = PTR_FUN_8c20d8b4;
  puVar2 = PTR_FUN_8c20d8b0;
  if (ar6 < 5) {
    puVar10 = (undefined1 *)0x10;
    (*(code *)PTR_FUN_8c20d8ac)(auStack_30,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    if (ar6 == 1) {
      auStack_30[1] = *ar5;
    }
    else {
      puVar9 = auStack_30 + 4;
      if (ar6 == 2) {
        puVar8 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        } while (puVar8 < puVar9);
      }
      else {
        puVar10 = auStack_24;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
        } while (puVar9 < puVar10);
      }
    }
    iVar5 = *(int *)(ar4 + 0x1c);
    (*(code *)puVar3)(auStack_30,ar5,puVar10,ar7);
    (*(code *)puVar3)(&stack0xfffffff0,ar5,puVar10,ar7);
  }
  else {
    iVar11 = iVar5 * 4;
    (*(code *)PTR_FUN_8c20da84)
              (auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(PTR_DAT_8c20da80 + iVar11) + -0xc,0x10,ar7
              );
    puVar8 = auStack_20;
    puVar9 = auStack_24;
    puVar10 = ar5;
    do {
      uVar1 = *puVar10;
      puVar10 = puVar10 + 1;
      *puVar9 = uVar1;
      puVar9 = puVar9 + 1;
    } while (puVar9 < puVar8);
    iVar6 = *(int *)(ar4 + 0x1c);
    iVar7 = *(int *)(puVar4 + iVar11);
    (*(code *)puVar3)(auStack_30,puVar8,puVar10,ar7);
    (*(code *)puVar3)(&stack0xfffffff0,puVar8,puVar10,ar7);
    (*(code *)puVar2)(iVar6 + iVar7 + -0xc,auStack_30,0x10,ar7);
    if (*(int *)(PTR_DAT_8c20da88 + iVar11) != 0x10) {
      (*(code *)puVar2)(*(int *)(ar4 + 0x1c) + *(int *)(puVar4 + iVar11) + 4,ar5 + 4,
                        *(int *)(PTR_DAT_8c20da88 + iVar11) + -0x10,ar7);
    }
    (*(code *)PTR_FUN_8c20da84)
              (auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(puVar4 + (iVar5 + 1) * 4) + -0xc,0x10,ar7)
    ;
    puVar8 = auStack_24;
    puVar9 = ar5 + *(int *)(PTR_DAT_8c20da88 + iVar11) + -0xc;
    puVar10 = auStack_30;
    do {
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      *puVar10 = uVar1;
      puVar10 = puVar10 + 1;
    } while (puVar10 < puVar8);
    iVar5 = *(int *)(ar4 + 0x1c) + *(int *)(puVar4 + (iVar5 + 1) * 4) + -0xc;
    (*(code *)puVar3)(auStack_30,puVar9,puVar8,ar7);
    (*(code *)puVar3)(&stack0xfffffff0,puVar9,puVar8,ar7);
  }
  (*(code *)puVar2)(iVar5,auStack_30,0x10,ar7);
  return 0;
}



/* FUN_8c20d9ce @ 8c20d9ce callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d9ce(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *a5;
  undefined1 *a6;
  undefined4 a6_00;
  undefined1 auStack_1c [3];
  undefined1 uStack_19;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    a6 = (undefined1 *)0x8;
    a5 = *(undefined1 **)(ar4 + 0x1c);
    (*(code *)PTR_FUN_8c20da84)(auStack_1c,a5,8,ar7);
    if (ar6 == 1) {
      uStack_19 = *ar5;
    }
    else {
      a6 = auStack_14;
      puVar3 = auStack_18;
      a5 = ar5;
      do {
        uVar1 = *a5;
        a5 = a5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < a6);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    (*(code *)PTR_FUN_8c20da8c)(auStack_1c,a5,a6,ar7);
    (*(code *)PTR_FUN_8c20da8c)(&stack0x00000004,a5,a6,ar7);
    a6_00 = 8;
    ar5 = auStack_1c;
  }
  else {
    a6_00 = *(undefined4 *)(PTR_DAT_8c20da90 + iVar2 * 4);
    iVar2 = *(int *)(PTR_DAT_8c20da94 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  (*(code *)PTR_FUN_8c20da98)(iVar2,ar5,a6_00,ar7);
  return 0;
}



/* FUN_8c20daa0 @ 8c20daa0 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20daa0(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *a6;
  undefined4 a6_00;
  undefined1 auStack_24 [6];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    a6 = (undefined1 *)0x10;
    (*(code *)PTR_FUN_8c20db60)(auStack_24,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    puVar4 = auStack_1c;
    if (ar6 == 1) {
      puVar3 = auStack_1e;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar4);
    }
    else {
      a6 = auStack_14;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < a6);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    (*(code *)PTR_FUN_8c20db64)(auStack_24,ar5,a6,ar7);
    (*(code *)PTR_FUN_8c20db64)(&stack0xfffffffc,ar5,a6,ar7);
    a6_00 = 0x10;
    ar5 = auStack_24;
  }
  else {
    a6_00 = *(undefined4 *)(PTR_DAT_8c20db68 + iVar2 * 4);
    iVar2 = *(int *)(PTR_DAT_8c20db6c + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  (*(code *)PTR_FUN_8c20db70)(iVar2,ar5,a6_00,ar7);
  return 0;
}



/* FUN_8c20db80 @ 8c20db80 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20db80(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *a6;
  int iVar9;
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [10];
  undefined1 auStack_20 [4];
  
  iVar4 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  puVar3 = PTR_DAT_8c20dd28;
  puVar2 = PTR_FUN_8c20dc04;
  if (ar6 != 1) {
    if (ar6 < 5) {
      puVar8 = (undefined1 *)0x10;
      (*(code *)PTR_FUN_8c20dc08)(auStack_30,*(int *)(ar4 + 0x1c) + (int)DAT_8c20dc00,0x10,ar7);
      if (ar6 == 2) {
        auStack_30[1] = *ar5;
      }
      else {
        puVar8 = auStack_2a;
        puVar7 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
        } while (puVar7 < puVar8);
      }
      iVar4 = *(int *)(ar4 + 0x1c) + (int)DAT_8c20dc00;
    }
    else {
      iVar9 = (int)DAT_8c20dd20;
      (*(code *)PTR_FUN_8c20dd2c)
                (auStack_30,
                 *(int *)(ar4 + 0x1c) + *(int *)(PTR_DAT_8c20dd28 + (iVar4 + -1) * 4) + iVar9,0x10,
                 ar7);
      a6 = auStack_20;
      puVar8 = auStack_2a;
      puVar7 = ar5;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      } while (puVar8 < a6);
      iVar5 = *(int *)(ar4 + 0x1c);
      iVar6 = *(int *)(puVar3 + (iVar4 + -1) * 4);
      (*(code *)puVar2)(auStack_30,puVar7,a6,ar7);
      (*(code *)puVar2)(&stack0xfffffff0,puVar7,a6,ar7);
      (*(code *)PTR_FUN_8c20dd30)(iVar5 + iVar6 + iVar9,auStack_30,0x10,ar7);
      iVar5 = iVar4 * 4;
      if (*(int *)(PTR_DAT_8c20dd34 + iVar5) != 0x10) {
        (*(code *)PTR_FUN_8c20dd30)
                  (*(int *)(ar4 + 0x1c) + *(int *)(puVar3 + (iVar4 + -1) * 4) + (int)DAT_8c20dd22,
                   ar5 + 10,*(int *)(PTR_DAT_8c20dd34 + iVar5) + -0x10,ar7);
      }
      (*(code *)PTR_FUN_8c20dd2c)
                (auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(puVar3 + iVar5) + iVar9,0x10,ar7);
      puVar8 = auStack_2a;
      ar5 = ar5 + *(int *)(PTR_DAT_8c20dd34 + iVar5) + -6;
      puVar7 = auStack_30;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar7 = uVar1;
        puVar7 = puVar7 + 1;
      } while (puVar7 < puVar8);
      iVar4 = *(int *)(ar4 + 0x1c) + *(int *)(puVar3 + iVar5) + iVar9;
    }
    (*(code *)puVar2)(auStack_30,ar5,puVar8,ar7);
    (*(code *)puVar2)(&stack0xfffffff0,ar5,puVar8,ar7);
    (*(code *)PTR_FUN_8c20dd30)(iVar4,auStack_30,0x10,ar7);
  }
  return 0;
}



/* FUN_8c20dd80 @ 8c20dd80 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20dd80(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int in_stack_00000000;
  char in_stack_00000004;
  
  if ((in_stack_00000000 < 8) || (DAT_8c20dde0 < in_stack_00000000)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if (in_stack_00000004 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = DAT_8c20dde4;
      if ((in_stack_00000004 != '\x01') && (uVar1 = DAT_8c20dde8, in_stack_00000004 != '\x02'))
      goto LAB_8c20de00;
    }
    if (ar6 == 1) {
      FUN_8c20e8c6(ar4,ar5,ar7,in_stack_00000000);
    }
    else {
      if (ar7 == 1) {
        FUN_8c20e9ae(ar5,in_stack_00000000,in_stack_00000000,uVar1);
      }
      (*(code *)PTR_s_UUUU_t_20ed60_8c20de60)(ar4,ar5,in_stack_00000000,uVar1);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c20de80 @ 8c20de80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20deec) */
/* WARNING: Removing unreachable block (ram,0x8c20deda) */
/* WARNING: Removing unreachable block (ram,0x8c20df2e) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20de80(undefined1 *ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r12;
  int unaff_r13;
  uint uVar9;
  int in_stack_00000000;
  
  iVar5 = ar7 + -1;
  uVar7 = (uint)DAT_8c20df00;
  uVar8 = (uint)DAT_8c20df02;
  puVar3 = (ushort *)(ar6 * iVar5 * 2 + ar5);
  iVar6 = iVar5;
  do {
    if (iVar5 < 0) {
      return 0;
    }
    iVar2 = 0;
    puVar4 = puVar3;
    if (0 < ar6) {
      do {
        if (in_stack_00000000 == 0) {
          uVar1 = (uint)*puVar4;
          iVar6 = (int)(DAT_8c20df08 & uVar1) >> 8;
          uVar9 = (int)((int)DAT_8c20df04 & uVar1) >> 1;
LAB_8c20df30:
          unaff_r13 = (int)uVar9 >> 2;
          unaff_r12 = (uVar1 & 0x1f) << 3;
        }
        else {
          if (in_stack_00000000 == 1) {
            uVar1 = (uint)*puVar4;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            uVar9 = uVar1 & uVar8;
            goto LAB_8c20df30;
          }
          if (in_stack_00000000 == 3) {
            uVar1 = (uint)*puVar4;
            uVar9 = uVar1 & uVar8;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            goto LAB_8c20df30;
          }
        }
        iVar2 = iVar2 + 1;
        *ar4 = (char)unaff_r12;
        ar4[1] = (char)unaff_r13;
        ar4[2] = (char)iVar6;
        ar4 = ar4 + 3;
        puVar4 = puVar4 + 1;
      } while (iVar2 < ar6);
    }
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + -ar6;
  } while( true );
}



/* FUN_8c20df7a @ 8c20df7a callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20df7a(int ar4,uint ar5,int ar6,uint *ar7)

{
  uint uVar1;
  uint a5;
  int a6;
  uint *a7;
  
  if ((*(int *)PTR_DAT_8c20dfc0 == 2) || (*(int *)PTR_DAT_8c20dfc0 == 3)) {
    if (ar4 == 0) {
      return 1;
    }
    a5 = ar5;
    a6 = ar6;
    a7 = ar7;
    uVar1 = FUN_8c20e720(ar4,ar5,ar6,ar7);
    *ar7 = uVar1;
    if (ar6 == 0) {
      return 0;
    }
    if (ar5 < *ar7) {
      return 2;
    }
    uVar1 = 0;
    if (*ar7 != 0) {
      do {
        (*(code *)PTR_FUN_8c20e044)(uVar1,a5,a6,a7);
        uVar1 = uVar1 + 1;
      } while (uVar1 < *ar7);
    }
    FUN_8c20e78e(ar6,a5,a6,a7);
  }
  if (*(int *)PTR_DAT_8c20e048 != 1) {
    return 0;
  }
  return 0x78;
}



/* FUN_8c20e030 @ 8c20e030 callers=0 callees=13 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e030(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint in_r3;
  undefined4 uVar3;
  uint unaff_r10;
  int unaff_r12;
  uint *unaff_r13;
  uint a5;
  
  puVar1 = PTR_DAT_8c20e1c0;
  uVar3 = 0;
  if (unaff_r10 < in_r3) {
    *unaff_r13 = 0;
    uVar3 = 2;
  }
  else {
    a5 = 0;
    if (unaff_r10 != 0) {
      while (*(int *)(a5 * 4 + unaff_r12) != 0) {
        iVar2 = FUN_8c20e16a(unaff_r12,a5,unaff_r13,ar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_8c20e1e6(unaff_r12,a5,unaff_r13,ar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_8c20e272(unaff_r12,a5,unaff_r13,ar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (*(int *)puVar1 == 1) {
          iVar2 = FUN_8c20e300(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e328(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e368(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e3a0(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e400(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        iVar2 = *(int *)puVar1;
        if ((iVar2 == 2) || (iVar2 == 3)) {
          iVar2 = FUN_8c20e428(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e480(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_8c20e608(unaff_r12,a5,unaff_r13,ar7);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        iVar2 = FUN_8c20e664(unaff_r12,a5,unaff_r13,ar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_8c20e6c0(unaff_r12,a5,unaff_r13,ar7);
        if (iVar2 != 0) {
          return iVar2;
        }
        a5 = a5 + 1;
        if (unaff_r10 <= a5) {
          return 0;
        }
      }
      *unaff_r13 = a5;
      uVar3 = 1;
    }
  }
  return uVar3;
}



/* FUN_8c20e16a @ 8c20e16a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e16a(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(ar5 * 4 + ar4);
  iVar1 = *(int *)PTR_DAT_8c20e1c0;
  if (((((iVar1 != 2) && (iVar1 != 3)) || (iVar2 = *(int *)(iVar3 + 4), iVar2 == 0)) ||
      ((iVar2 == 1 || (iVar2 == 2)))) &&
     ((iVar1 != 1 || ((iVar1 = *(int *)(iVar3 + 4), iVar1 == 0 || (iVar1 == 1)))))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 3;
}



/* FUN_8c20e1e6 @ 8c20e1e6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e1e6(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)PTR_DAT_8c20e2e0;
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((iVar3 != 2) && (iVar3 != 3)) || ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))
       ) || (((((iVar3 != 3 || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) ||
              (iVar2 == 4)) &&
             (((iVar3 != 2 || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 8) == 2)))))) &&
     ((((iVar3 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
       ((*(int *)(iVar1 + 8) == 0 || (*(int *)(iVar1 + 8) == 2)))) &&
      (((*(int *)(iVar1 + 4) != 1 || (*(int *)(iVar1 + 8) == 1)) || (*(int *)(iVar1 + 8) == 3))))))
  {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 4;
}



/* FUN_8c20e272 @ 8c20e272 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e272(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)PTR_DAT_8c20e2e0;
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((iVar2 != 2) && (iVar2 != 3)) || ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))
       ) || (((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)) ||
             (*(int *)(iVar1 + 0x5c) != 0)))) &&
     ((((iVar2 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
       ((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)))) ||
      (*(int *)(iVar1 + 0x5c) != 0)))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 5;
}



/* FUN_8c20e300 @ 8c20e300 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e300(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((*(int *)PTR_DAT_8c20e3e0 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
     (*(int *)(iVar1 + 0x3c) == 3)) {
    *ar6 = ar5 + 1;
    return 6;
  }
  return 0;
}



/* FUN_8c20e328 @ 8c20e328 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e328(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((((*(int *)PTR_DAT_8c20e3e0 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
      ((*(int *)(iVar1 + 0x20) == 2 || (*(int *)(iVar1 + 0x20) == 3)))) &&
     ((*(int *)(iVar1 + 0x54) == 1 || (*(int *)(iVar1 + 0x54) == 3)))) {
    *ar6 = ar5 + 1;
    return 7;
  }
  return 0;
}



/* FUN_8c20e368 @ 8c20e368 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e368(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((((*(int *)PTR_DAT_8c20e3e0 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
      ((*(int *)(iVar1 + 0x20) == 2 || (*(int *)(iVar1 + 0x20) == 3)))) &&
     (*(int *)(iVar1 + 0x60) == 0)) {
    *ar6 = ar5 + 1;
    return 8;
  }
  return 0;
}



/* FUN_8c20e3a0 @ 8c20e3a0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e3a0(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((*(int *)PTR_DAT_8c20e3e0 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
     (*(int *)(iVar1 + 0xc) == 3)) {
    *ar6 = ar5 + 1;
    return 9;
  }
  return 0;
}



/* FUN_8c20e400 @ 8c20e400 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e400(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((*(int *)PTR_DAT_8c20e464 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
     (*(int *)(iVar1 + 0x20) == 0)) {
    *ar6 = ar5 + 1;
    return 10;
  }
  return 0;
}



/* FUN_8c20e428 @ 8c20e428 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e428(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  if (((*(int *)PTR_DAT_8c20e464 == 2) || (*(int *)PTR_DAT_8c20e464 == 3)) &&
     (*(int *)((int)DAT_8c20e460 + *(int *)(ar5 * 4 + ar4)) == 1)) {
    *ar6 = ar5 + 1;
    return 0xb;
  }
  return 0;
}



/* FUN_8c20e480 @ 8c20e480 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e480(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(ar5 * 4 + ar4);
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  iVar5 = piVar4[2];
  if ((*(int *)PTR_DAT_8c20e5e0 == 2) || (*(int *)PTR_DAT_8c20e5e0 == 3)) {
    if (((*(int *)(iVar3 + 8) == 0) &&
        (((((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) &&
           (*(int *)(iVar3 + 0x54) == 1)) &&
          ((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)))) &&
         (*(int *)(iVar3 + 0x34) == 0)))) && (*(int *)(iVar3 + 0x38) == 0)) {
      if (iVar2 != 0) {
        if (((*(int *)(iVar2 + 8) != 2) ||
            ((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)))) ||
           ((*(int *)(iVar2 + 0x54) != 3 ||
            ((((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
              (*(int *)(iVar2 + 0x34) != 0)) || (*(int *)(iVar2 + 0x38) != 0))))))
        goto LAB_8c20e580;
        goto LAB_8c20e514;
      }
LAB_8c20e5bc:
      *ar6 = ar5 + 2;
    }
    else {
LAB_8c20e514:
      if ((((*(int *)(iVar3 + 8) != 2) ||
           ((*(int *)(iVar3 + 0x20) != 2 && (*(int *)(iVar3 + 0x20) != 3)))) ||
          (*(int *)(iVar3 + 0x54) != 1)) ||
         (((*(int *)(iVar3 + 0x2c) != 10 || (*(int *)(iVar3 + 0x30) != 0xb)) ||
          ((*(int *)(iVar3 + 0x34) != 0 || (*(int *)(iVar3 + 0x38) != 1)))))) goto LAB_8c20e600;
      if (iVar2 == 0) goto LAB_8c20e5bc;
      if (((*(int *)(iVar2 + 8) != 2) ||
          (((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)) ||
           (*(int *)(iVar2 + 0x54) != 3)))) ||
         (((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
          ((*(int *)(iVar2 + 0x34) != 0 || (*(int *)(iVar2 + 0x38) != 1)))))) {
LAB_8c20e580:
        *ar6 = ar5 + 2;
        return 0xc;
      }
      if (iVar5 != 0) {
        if (((*(int *)(iVar5 + 8) != 2) ||
            ((*(int *)(iVar5 + 0x20) != 2 && (*(int *)(iVar5 + 0x20) != 3)))) ||
           ((*(int *)(iVar5 + 0x54) != 3 ||
            ((*(int *)(iVar5 + 0x34) != 1 || (*(int *)(iVar5 + 0x38) != 0)))))) {
          *ar6 = ar5 + 3;
          return 0xc;
        }
        goto LAB_8c20e600;
      }
      *ar6 = ar5 + 3;
    }
    uVar1 = 1;
  }
  else {
LAB_8c20e600:
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c20e608 @ 8c20e608 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e608(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((*(int *)PTR_DAT_8c20e6a0 == 2) || (*(int *)PTR_DAT_8c20e6a0 == 3)) &&
     (*(int *)(iVar1 + 4) == 2)) {
    if ((((*(int *)(iVar1 + 0x20) != 0) && (*(int *)(iVar1 + 0x20) != 2)) ||
        ((*(int *)(iVar1 + 0x20) == 2 &&
         ((*(int *)(iVar1 + 0xc) != 0 || (*(int *)(iVar1 + 0x10) != 1)))))) ||
       ((*(int *)(iVar1 + 0x20) == 0 && (*(int *)(iVar1 + 0xc) != 0)))) {
      *ar6 = ar5 + 1;
      return 0xd;
    }
  }
  return 0;
}



/* FUN_8c20e664 @ 8c20e664 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e664(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((*(int *)(iVar1 + 8) == 0) &&
     ((*(int *)(iVar1 + 0x2c) != 10 || (*(int *)(iVar1 + 0x30) != 0xb)))) {
    *ar6 = ar5 + 1;
    return 0xe;
  }
  return 0;
}



/* FUN_8c20e6c0 @ 8c20e6c0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e6c0(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if ((((*(int *)(iVar1 + 4) == 1) && (iVar1 = *(int *)(DAT_8c20e700 + iVar1), iVar1 != 0)) &&
      (iVar1 != 0)) && (((iVar1 != 0 && (iVar1 != DAT_8c20e704)) && (iVar1 != DAT_8c20e708)))) {
    *ar6 = ar5 + 1;
    return 0xf;
  }
  return 0;
}



/* FUN_8c20e720 @ 8c20e720 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e720(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((*(int *)(ar4 + 8) == 0) &&
       (((*(int *)(ar4 + 0x20) == 2 || (*(int *)(ar4 + 0x20) == 3)) && (*(int *)(ar4 + 0x54) == 1)))
       ) && (((*(int *)(ar4 + 0x2c) == 10 && (*(int *)(ar4 + 0x30) == 0xb)) &&
             (*(int *)(ar4 + 0x34) == 0)))) && (*(int *)(ar4 + 0x38) == 0)) {
    uVar1 = 2;
  }
  if ((((*(int *)(ar4 + 8) == 2) && ((*(int *)(ar4 + 0x20) == 2 || (*(int *)(ar4 + 0x20) == 3)))) &&
      (*(int *)(ar4 + 0x54) == 1)) &&
     ((((*(int *)(ar4 + 0x2c) == 10 && (*(int *)(ar4 + 0x30) == 0xb)) && (*(int *)(ar4 + 0x34) == 0)
       ) && (*(int *)(ar4 + 0x38) == 1)))) {
    uVar1 = 3;
  }
  return uVar1;
}



/* FUN_8c20e78e @ 8c20e78e callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20e78e(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *ar4;
  iVar4 = ar4[1];
  iVar2 = ar4[2];
  if ((((*(int *)(iVar3 + 8) == 0) &&
       (((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) &&
        (*(int *)(iVar3 + 0x54) == 1)))) &&
      (((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)) &&
       (*(int *)(iVar3 + 0x34) == 0)))) && (*(int *)(iVar3 + 0x38) == 0)) {
    *(undefined4 *)(iVar4 + 8) = 2;
    *(undefined4 *)(iVar4 + 0x54) = 3;
    *(undefined4 *)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(iVar4 + 0x30) = 10;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x38) = 0;
  }
  iVar1 = *(int *)(iVar3 + 8);
  if ((((iVar1 == 2) &&
       ((*(int *)(iVar3 + 0x20) == 2 || (iVar1 = *(int *)(iVar3 + 0x20), iVar1 == 3)))) &&
      (iVar1 = *(int *)(iVar3 + 0x54), iVar1 == 1)) &&
     ((((iVar1 = *(int *)(iVar3 + 0x2c), iVar1 == 10 &&
        (iVar1 = *(int *)(iVar3 + 0x30), iVar1 == 0xb)) && (*(int *)(iVar3 + 0x34) == 0)) &&
      (iVar1 = *(int *)(iVar3 + 0x38), iVar1 == 1)))) {
    *(undefined4 *)(iVar4 + 8) = 2;
    iVar1 = 0x54;
    *(undefined4 *)(iVar4 + 0x54) = 3;
    *(undefined4 *)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(iVar4 + 0x30) = 10;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 8) = 2;
    *(undefined4 *)(iVar2 + 0x54) = 3;
    *(undefined4 *)(iVar2 + 0x2c) = 8;
    *(undefined4 *)(iVar2 + 0x30) = 6;
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 0;
  }
  return iVar1;
}



/* FUN_8c20e838 @ 8c20e838 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e838(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 != 8) {
    if (ar4 == 0x10) {
      return 4;
    }
    if (ar4 == 0x20) {
      return 5;
    }
    if (ar4 == 0x40) {
      return 6;
    }
    if (ar4 == DAT_8c20e880) {
      return 7;
    }
    if (ar4 == DAT_8c20e882) {
      return 8;
    }
    if (ar4 == DAT_8c20e884) {
      return 9;
    }
    if (ar4 == DAT_8c20e886) {
      return 10;
    }
  }
  return 3;
}



/* FUN_8c20e8c6 @ 8c20e8c6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e8c6(int ar4,undefined4 ar5,int ar6,int ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  int *piVar4;
  undefined4 in_stack_00000000;
  
  iVar2 = FUN_8c20e838(ar7,ar7,ar6,ar7);
  if (ar6 != 0) {
    FUN_8c20e9ae(ar5,ar7,ar7,in_stack_00000000);
  }
  ar7_00 = in_stack_00000000;
  s_UUUU_t_20ed60(*(int *)(PTR_DAT_8c20e960 + iVar2 * 4) + ar4,ar5,ar7,in_stack_00000000);
  puVar1 = PTR_DAT_8c20e960;
  piVar4 = (int *)(PTR_DAT_8c20e960 + (iVar2 + -1) * 4);
  do {
    FUN_8c20f25a(ar5,ar7,ar7,ar7_00);
    ar7 = ar7 >> 1;
    if (ar6 != 0) {
      FUN_8c20e9ae(ar5,ar7,ar7,in_stack_00000000);
    }
    ar7_00 = in_stack_00000000;
    uVar3 = s_UUUU_t_20ed60(*piVar4 + ar4,ar5,ar7,in_stack_00000000);
    piVar4 = piVar4 + -1;
  } while (puVar1 <= piVar4);
  return uVar3;
}



/* FUN_8c20e8dc @ 8c20e8dc callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e8dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 a7;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int *piVar4;
  int unaff_r14;
  undefined4 in_stack_00000018;
  
  iVar2 = FUN_8c20e838(ar7,ar5,ar6,ar7);
  if (unaff_r10 != 0) {
    FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,in_stack_00000018);
  }
  a7 = in_stack_00000018;
  s_UUUU_t_20ed60(*(int *)(PTR_DAT_8c20e960 + iVar2 * 4) + unaff_r9,unaff_r12,unaff_r14,
                  in_stack_00000018);
  puVar1 = PTR_DAT_8c20e960;
  piVar4 = (int *)(PTR_DAT_8c20e960 + (iVar2 + -1) * 4);
  do {
    FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7);
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,in_stack_00000018);
    }
    a7 = in_stack_00000018;
    uVar3 = s_UUUU_t_20ed60(*piVar4 + unaff_r9,unaff_r12,unaff_r14,in_stack_00000018);
    piVar4 = piVar4 + -1;
  } while (puVar1 <= piVar4);
  return uVar3;
}



/* FUN_8c20e9ae @ 8c20e9ae callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20ebaa) */
/* WARNING: Removing unreachable block (ram,0x8c20ebc6) */
/* WARNING: Removing unreachable block (ram,0x8c20ebdc) */
/* WARNING: Removing unreachable block (ram,0x8c20ebf0) */
/* WARNING: Unknown calling convention */

uint FUN_8c20e9ae(byte *ar4,int ar5,uint ar6,int ar7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  
  iVar3 = (int)DAT_8c20ea44;
  if (ar5 == 1) {
    ar6 = 1;
  }
  else if (ar6 != 1) {
    puVar13 = (undefined4 *)(&stack0x0000001c + iVar3);
    *(undefined4 **)(&stack0x0000000c + iVar3) = puVar13;
    for (iVar12 = ar5; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13 = puVar13 + 4;
    }
    puVar13 = (undefined4 *)(&stack0xffffffe4 + DAT_8c20ea46 + iVar3);
    *(undefined4 **)(&stack0x00000000 + iVar3) = puVar13;
    *puVar13 = 0;
    *(undefined4 **)(&stack0x00000008 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(undefined4 **)(&stack0xffffffec + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(undefined4 **)(&stack0x00000010 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    puVar13 = (undefined4 *)(&stack0xffffffe4 + DAT_8c20ea48 + iVar3);
    *(undefined4 **)(&stack0xfffffff4 + iVar3) = puVar13;
    *puVar13 = 0;
    *(undefined4 **)(&stack0xfffffff8 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(undefined4 **)(&stack0xfffffffc + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(undefined4 **)(&stack0x00000004 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    *(uint *)(&stack0xffffffe8 + iVar3) = ar6;
    while (*(int *)(&stack0xffffffe8 + iVar3) != 0) {
      piVar8 = *(int **)(&stack0x0000000c + iVar3);
      *(int *)(&stack0xfffffff0 + iVar3) = ar5;
      while (*(int *)(&stack0xfffffff0 + iVar3) != 0) {
        bVar1 = ar4[3];
        iVar6 = *piVar8;
        bVar2 = ar4[2];
        iVar12 = **(int **)(&stack0x00000000 + iVar3);
        *(int **)(&stack0x00000014 + iVar3) = piVar8 + 1;
        iVar4 = piVar8[1];
        uVar7 = iVar6 + (uint)bVar1 + iVar12;
        bVar1 = ar4[1];
        iVar12 = **(int **)(&stack0x00000008 + iVar3);
        *(int **)(&stack0x00000018 + iVar3) = piVar8 + 2;
        uVar5 = iVar4 + (uint)bVar2 + iVar12;
        uVar11 = piVar8[2] + (uint)bVar1 + **(int **)(&stack0xffffffec + iVar3);
        uVar9 = (uint)*ar4;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((int)DAT_8c20eae0 < (int)uVar7) {
          uVar7 = (int)DAT_8c20eae0;
        }
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((int)DAT_8c20eae0 < (int)uVar5) {
          uVar5 = (int)DAT_8c20eae0;
        }
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        else if ((int)DAT_8c20eb40 < (int)uVar11) {
          uVar11 = (int)DAT_8c20eb40;
        }
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if ((int)DAT_8c20eb40 < (int)uVar9) {
          uVar9 = (int)DAT_8c20eb40;
        }
        ar4[3] = (byte)uVar7;
        iVar12 = DAT_8c20ec28;
        ar4[2] = (byte)uVar5;
        uVar10 = (uint)DAT_8c20ec20;
        ar4[1] = (byte)uVar11;
        *ar4 = (byte)uVar9;
        if (ar7 == iVar12) {
          ar6 = (int)DAT_8c20ec22 & uVar5 | 2;
          uVar5 = uVar5 - ar6;
          uVar11 = uVar11 - (uVar10 & uVar11 | 4);
          uVar9 = 0;
          uVar7 = uVar7 - (uVar7 & uVar10 | 4);
        }
        else if (ar7 == DAT_8c20ec2c) {
          uVar10 = (uint)DAT_8c20ec24;
          uVar5 = uVar5 - ((int)uVar5 >> 4 & 8U | uVar5 & uVar10 | 4);
          uVar11 = uVar11 - ((int)uVar11 >> 4 & 8U | uVar11 & uVar10 | 4);
          ar6 = (int)uVar9 >> 4 & 8U | uVar10 & uVar9 | 4;
          uVar9 = uVar9 - ar6;
          *(uint *)(&stack0xffffffe4 + iVar3) = uVar9;
          uVar7 = uVar7 - ((int)uVar7 >> 4 & 8U | uVar7 & uVar10 | 4);
        }
        else {
          ar6 = uVar11;
          if (ar7 == 0) {
            uVar5 = uVar5 - (uVar5 & uVar10 | 4);
            ar6 = uVar7 - (uVar7 & uVar10 | 4);
            uVar11 = uVar11 - (uVar10 & uVar11 | 4);
            *(uint *)(&stack0xffffffe4 + iVar3) = uVar11;
            uVar7 = ar6;
          }
        }
        iVar12 = (int)(uVar7 * 3 + 4) >> 3;
        **(int **)(&stack0x00000000 + iVar3) = iVar12;
        *piVar8 = **(int **)(&stack0xfffffff4 + iVar3) + iVar12;
        **(int **)(&stack0xfffffff4 + iVar3) = uVar7 + iVar12 * -2;
        iVar12 = (int)(uVar5 * 3 + 4) >> 3;
        **(int **)(&stack0x00000008 + iVar3) = iVar12;
        **(int **)(&stack0x00000014 + iVar3) = **(int **)(&stack0xfffffff8 + iVar3) + iVar12;
        **(int **)(&stack0xfffffff8 + iVar3) = uVar5 + iVar12 * -2;
        iVar12 = (int)(uVar11 * 3 + 4) >> 3;
        **(int **)(&stack0xffffffec + iVar3) = iVar12;
        **(int **)(&stack0x00000018 + iVar3) = **(int **)(&stack0xfffffffc + iVar3) + iVar12;
        **(int **)(&stack0xfffffffc + iVar3) = uVar11 + iVar12 * -2;
        **(int **)(&stack0x00000010 + iVar3) = iVar12;
        piVar8[3] = **(int **)(&stack0x00000004 + iVar3) + iVar12;
        **(int **)(&stack0x00000004 + iVar3) = uVar9 + iVar12 * -2;
        ar4 = ar4 + 4;
        piVar8 = piVar8 + 4;
        *(int *)(&stack0xfffffff0 + iVar3) = *(int *)(&stack0xfffffff0 + iVar3) + -1;
      }
      *(int *)(&stack0xffffffe8 + iVar3) = *(int *)(&stack0xffffffe8 + iVar3) + -1;
    }
  }
  return ar6;
}



/* s_UUUU_t_20ed60 @ 8c20ed60 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20ee36) */
/* WARNING: Unknown calling convention */

int s_UUUU_t_20ed60(int ar4,byte *ar5,int ar6,int ar7)

{
  byte bVar1;
  uint uVar2;
  int in_r0;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r14;
  uint uVar10;
  
  uVar8 = (uint)DAT_8c20ee00;
  uVar5 = 0;
  uVar9 = uVar8 + 8;
  iVar4 = ar6;
  uVar2 = DAT_8c20eea8;
  do {
    if (iVar4 == 0) {
      DAT_8c20eea8 = uVar2;
      uVar2 = (uint)s_UUUU_8c20eeb0._0_4_ >> 0x10;
      uVar5 = (uint)s_UUUU_8c20eeb0._0_4_ >> 0x18;
      s_UUUU_8c20eeb0[0] = (char)s_UUUU_8c20eeb0._0_4_;
      s_UUUU_8c20eeb0[1] = (char)((uint)s_UUUU_8c20eeb0._0_4_ >> 8);
      s_UUUU_8c20eeb0[2] = (char)uVar2;
      s_UUUU_8c20eeb0[3] = (char)uVar5;
      return in_r0;
    }
    uVar7 = 0;
    pbVar3 = ar5;
    for (iVar6 = ar6; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (ar7 == DAT_8c20ee04) {
        uVar10 = (pbVar3[3] & uVar9) << 8 | (pbVar3[2] & 0xfc) << 3;
        bVar1 = pbVar3[1] >> 3;
LAB_8c20ede2:
        unaff_r14 = uVar10 | bVar1;
      }
      else {
        if (ar7 == DAT_8c20ee08) {
          uVar10 = (*pbVar3 & uVar8) << 8 | (pbVar3[3] & uVar8) << 4 | pbVar3[2] & uVar8;
          bVar1 = pbVar3[1] >> 4;
          goto LAB_8c20ede2;
        }
        if (ar7 == 0) {
          unaff_r14 = ((int)DAT_8c20eea0 & (uint)*pbVar3) << 8 | (pbVar3[3] & uVar9) << 7 |
                      (pbVar3[2] & uVar9) << 2 | (uint)(pbVar3[1] >> 3);
        }
      }
      uVar10 = DAT_8c20eea4 + uVar7;
      in_r0 = (uVar7 | uVar5) * 2;
      DAT_8c20eea8 = uVar2;
      *(short *)(in_r0 + ar4) = (short)unaff_r14;
      pbVar3 = pbVar3 + 4;
      uVar7 = uVar2 & uVar10;
      uVar2 = DAT_8c20eea8;
    }
    iVar4 = iVar4 + -1;
    ar5 = ar5 + ar6 * 4;
    uVar5 = s_UUUU_8c20eeb0._0_4_ & DAT_8c20eeac + uVar5;
  } while( true );
}



/* FUN_8c20eec0 @ 8c20eec0 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20f228) */
/* WARNING: Removing unreachable block (ram,0x8c20f1f0) */
/* WARNING: Removing unreachable block (ram,0x8c20f158) */
/* WARNING: Removing unreachable block (ram,0x8c20f090) */
/* WARNING: Removing unreachable block (ram,0x8c20f0f4) */
/* WARNING: Removing unreachable block (ram,0x8c20f1c4) */
/* WARNING: Removing unreachable block (ram,0x8c20f20c) */
/* WARNING: Removing unreachable block (ram,0x8c20f244) */
/* WARNING: Unknown calling convention */

int FUN_8c20eec0(byte *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined1 *in_stack_00000000;
  int in_stack_00000004;
  
  iVar19 = (in_stack_00000004 * 2 + -1) * 4;
  pbVar18 = ar4 + iVar19;
  pbVar17 = ar5 + iVar19;
  pbVar20 = ar6 + iVar19;
  pbVar21 = ar7 + iVar19;
  iVar10 = (uint)pbVar18[3] + (uint)pbVar17[3] * 2 + (uint)pbVar20[3] * 2 + (uint)pbVar21[3];
  iVar11 = (uint)pbVar18[2] + (uint)pbVar17[2] * 2 + (uint)pbVar20[2] * 2 + (uint)pbVar21[2];
  iVar12 = (uint)pbVar18[1] + (uint)pbVar17[1] * 2 + (uint)pbVar20[1] * 2 + (uint)pbVar21[1];
  iVar1 = (uint)*pbVar18 + (uint)*pbVar17 * 2 + (uint)*pbVar20 * 2 + (uint)*pbVar21;
  iVar13 = (uint)ar4[3] + (uint)ar5[3] * 2 + (uint)ar6[3] * 2 + (uint)ar7[3];
  iVar14 = (uint)ar4[2] + (uint)ar5[2] * 2 + (uint)ar6[2] * 2 + (uint)ar7[2];
  iVar15 = (uint)ar4[1] + (uint)ar5[1] * 2 + (uint)ar6[1] * 2 + (uint)ar7[1];
  iVar2 = (uint)*ar4 + (uint)*ar5 * 2 + (uint)*ar6 * 2 + (uint)*ar7;
  iVar19 = iVar10;
  iVar5 = iVar11;
  iVar7 = iVar12;
  iVar9 = iVar1;
  iVar4 = iVar13;
  iVar6 = iVar14;
  iVar8 = iVar15;
  iVar16 = iVar2;
  while (in_stack_00000004 = in_stack_00000004 + -1, in_stack_00000004 != 0) {
    iVar3 = iVar4 * 2 + iVar19;
    iVar19 = (uint)ar4[7] + (uint)ar5[7] * 2 + (uint)ar6[7] * 2 + (uint)ar7[7];
    pbVar17 = ar6 + 8;
    pbVar18 = ar7 + 8;
    iVar4 = (uint)ar4[0xb] + (uint)ar5[0xb] * 2 + (uint)ar6[0xb] * 2 + (uint)ar7[0xb];
    in_stack_00000000[3] = (char)((iVar3 + iVar19 * 2 + iVar4) * 0x39 >> 0xb);
    iVar3 = iVar6 * 2 + iVar5;
    iVar5 = (uint)ar4[6] + (uint)ar5[6] * 2 + (uint)ar6[6] * 2 + (uint)ar7[6];
    iVar6 = (uint)ar4[10] + (uint)ar5[10] * 2 + (uint)ar6[10] * 2 + (uint)ar7[10];
    in_stack_00000000[2] = (char)((iVar3 + iVar5 * 2 + iVar6) * 0x39 >> 0xb);
    iVar3 = iVar8 * 2 + iVar7;
    iVar7 = (uint)ar4[5] + (uint)ar5[5] * 2 + (uint)ar6[5] * 2 + (uint)ar7[5];
    iVar8 = (uint)ar4[9] + (uint)ar5[9] * 2 + (uint)ar6[9] * 2 + (uint)ar7[9];
    in_stack_00000000[1] = (char)((iVar3 + iVar7 * 2 + iVar8) * 0x39 >> 0xb);
    iVar3 = iVar16 * 2 + iVar9;
    iVar9 = (uint)ar4[4] + (uint)ar5[4] * 2 + (uint)ar6[4] * 2 + (uint)ar7[4];
    ar7 = ar7 + 8;
    ar6 = ar6 + 8;
    iVar16 = (uint)ar4[8] + (uint)ar5[8] * 2 + (uint)*pbVar17 * 2 + (uint)*pbVar18;
    ar5 = ar5 + 8;
    ar4 = ar4 + 8;
    *in_stack_00000000 = (char)((iVar3 + iVar9 * 2 + iVar16) * 0x39 >> 0xb);
    in_stack_00000000 = in_stack_00000000 + 4;
  }
  in_stack_00000000[3] = (char)((iVar4 * 2 + iVar19 + iVar10 * 2 + iVar13) * 0x39 >> 0xb);
  in_stack_00000000[2] = (char)((iVar6 * 2 + iVar5 + iVar11 * 2 + iVar14) * 0x39 >> 0xb);
  iVar19 = (iVar8 * 2 + iVar7 + iVar12 * 2 + iVar15) * 0x39 >> 0xb;
  in_stack_00000000[1] = (char)iVar19;
  *in_stack_00000000 = (char)((iVar16 * 2 + iVar9 + iVar1 * 2 + iVar2) * 0x39 >> 0xb);
  return iVar19;
}



/* FUN_8c20f25a @ 8c20f25a callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20f25a(undefined1 *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int aiStack_28 [3];
  
  iVar2 = (int)DAT_8c20f320;
  iVar6 = (int)(ar5 + (uint)(ar5 < 0)) >> 1;
  *(int *)((int)aiStack_28 + iVar2 + 8) = (int)(ar6 + (uint)(ar6 < 0)) >> 1;
  puVar9 = &stack0xffffffec + iVar2;
  puVar5 = ar4;
  for (iVar4 = ar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar9[1] = puVar5[1];
    puVar9[2] = puVar5[2];
    puVar1 = puVar5 + 3;
    puVar5 = puVar5 + 4;
    puVar9[3] = *puVar1;
    puVar9 = puVar9 + 4;
  }
  iVar4 = *(int *)((int)aiStack_28 + iVar2 + 8);
  *(int *)(&stack0xffffffe4 + iVar2) = ar5 << 2;
  *(int *)((int)aiStack_28 + iVar2 + 8) = ar5 << 3;
  *(int *)(&stack0xffffffe8 + iVar2) = iVar6 << 2;
  puVar9 = ar4 + (ar6 + -1) * ar5 * 2;
  puVar5 = ar4;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    iVar7 = *(int *)((int)aiStack_28 + iVar2 + 8);
    iVar8 = *(int *)(&stack0xffffffe4 + iVar2);
    *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
    *(undefined1 **)((int)aiStack_28 + iVar2) = ar4;
    FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar8,puVar5 + iVar7);
    ar4 = ar4 + *(int *)(&stack0xffffffe8 + iVar2);
    puVar9 = puVar5 + iVar8;
    puVar5 = puVar5 + iVar7;
  }
  iVar4 = *(int *)(&stack0xffffffe4 + iVar2);
  *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
  *(undefined1 **)((int)aiStack_28 + iVar2) = ar4;
  uVar3 = FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar4,&stack0xffffffec + iVar2);
  return uVar3;
}



/* FUN_8c20f340 @ 8c20f340 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20f340(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 8) {
    ar4 = 0;
  }
  else if (ar4 == 0x10) {
    ar4 = 1;
  }
  else if (ar4 == 0x20) {
    ar4 = 2;
  }
  else if (ar4 == 0x40) {
    ar4 = 3;
  }
  else if (ar4 == DAT_8c20f380) {
    ar4 = 4;
  }
  else if (ar4 == DAT_8c20f3c0) {
    ar4 = 5;
  }
  else if (ar4 == DAT_8c20f3c2) {
    ar4 = 6;
  }
  else if (ar4 == DAT_8c20f3c4) {
    ar4 = 7;
  }
  return ar4;
}



/* FUN_8c20f640 @ 8c20f640 callers=1 callees=1 */

/* WARNING: Removing unreachable block (ram,0x8c20fb70) */
/* WARNING: Removing unreachable block (ram,0x8c20fb42) */
/* WARNING: Removing unreachable block (ram,0x8c20fa18) */
/* WARNING: Removing unreachable block (ram,0x8c20f742) */
/* WARNING: Removing unreachable block (ram,0x8c20f6a4) */
/* WARNING: Removing unreachable block (ram,0x8c20f692) */
/* WARNING: Removing unreachable block (ram,0x8c20f72a) */
/* WARNING: Removing unreachable block (ram,0x8c20f976) */
/* WARNING: Removing unreachable block (ram,0x8c20fa4e) */
/* WARNING: Removing unreachable block (ram,0x8c20fbe0) */
/* WARNING: Removing unreachable block (ram,0x8c20fcec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20f640(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 a5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uStack_3c;
  int aiStack_30 [5];
  
  uVar6 = DAT_8c20f6c8;
  iVar1 = (int)DAT_8c20f6c0;
  uVar9 = *(uint *)(iVar1 + (int)ar4);
  uVar11 = *(uint *)(iVar1 + 4 + (int)ar4);
  uStack_3c = *(uint *)(iVar1 + 8 + (int)ar4);
  uVar8 = *(uint *)((int)DAT_8c20f6c2 + (int)ar4);
  aiStack_30[0] = *(int *)PTR_DAT_8c20f6c4;
  aiStack_30[1] = *(undefined4 *)(PTR_DAT_8c20f6c4 + 4);
  aiStack_30[2] = *(undefined4 *)(PTR_DAT_8c20f6c4 + 8);
  aiStack_30[3] = *(undefined4 *)(PTR_DAT_8c20f6c4 + 0xc);
  uVar10 = *ar4;
  if ((uVar10 & 1) != 0) {
    uVar9 = uVar9 & DAT_8c20f6c8 | ar4[5] << 0x1d;
  }
  if ((uVar10 & 2) != 0) {
    uVar9 = DAT_8c20f6cc & uVar9 | ar4[6] << 0x1b;
  }
  if ((uVar10 & 0x20) != 0) {
    if (ar4[10] == 0) {
      uVar9 = uVar9 & DAT_8c20f764;
    }
    else {
      uVar9 = uVar9 | DAT_8c20f6d0;
    }
  }
  uVar7 = uVar10 & 8;
  if (uVar7 != 0) {
    uVar9 = DAT_8c20f768 & uVar9 | (ar4[8] >> 1) << 0x19;
  }
  uVar4 = (uint)DAT_8c20f760;
  if ((uVar4 & uVar10) != 0) {
    uVar9 = uVar9 & DAT_8c20f76c | ar4[0x10] << 0x18;
  }
  if (uVar7 != 0) {
    uVar9 = DAT_8c20f770 & uVar9 | (ar4[8] & 1) << 0x17;
  }
  uVar3 = DAT_8c20f774 & uVar10;
  if (uVar3 != 0) {
    uVar9 = DAT_8c20f778 & uVar9 | ar4[4] << 0x16;
  }
  if ((uVar10 & DAT_8c20f6d0) != 0) {
    if (*(int *)((int)DAT_8c20f762 + (int)ar4) == 0) {
      uVar9 = uVar9 & DAT_8c20f7a4;
    }
    else {
      uVar9 = uVar9 | DAT_8c20f77c;
    }
  }
  uVar5 = uVar11 & DAT_8c20f6c8;
  if ((uVar10 & 0x40) == 0) goto LAB_8c20f862;
  switch(ar4[0xb]) {
  case 0:
    uVar11 = _UNK_8c20f824;
    uVar2 = _UNK_8c20f820;
    goto code_r0x8c20f7da;
  case 1:
    uVar11 = _UNK_8c20f82c;
    uVar2 = DAT_8c20f828;
code_r0x8c20f7da:
    uVar11 = (uVar5 | uVar2) & DAT_8c20f7a8 | uVar11;
    goto LAB_8c20f862;
  case 2:
    uVar11 = _UNK_8c20f830;
    break;
  case 3:
    uVar11 = _UNK_8c20f834;
    break;
  case 4:
    uVar11 = _UNK_8c20f838;
    break;
  case 5:
    uVar11 = _UNK_8c20f83c;
    break;
  case 6:
    uVar11 = _UNK_8c20f820;
    break;
  default:
    goto LAB_8c20f862;
  case 8:
    uVar11 = DAT_8c20f828;
    break;
  case 10:
    uVar11 = _UNK_8c20f840;
    break;
  case 0xb:
    uVar11 = uVar5;
    goto LAB_8c20f862;
  }
  uVar11 = uVar11 | uVar5;
LAB_8c20f862:
  if (((int)DAT_8c20f886 & uVar10) == 0) goto LAB_8c20f8ea;
  uVar5 = uVar11 & DAT_8c20f7a8;
  switch(ar4[0xc]) {
  case 0:
    uVar5 = _UNK_8c20f924;
    uVar2 = _UNK_8c20f920;
    goto code_r0x8c20f8ba;
  case 1:
    uVar5 = DAT_8c20f92c;
    uVar2 = _UNK_8c20f928;
code_r0x8c20f8ba:
    uVar11 = (uVar11 & DAT_8c20f6c8 | uVar2) & DAT_8c20f7a8 | uVar5;
    goto LAB_8c20f8ea;
  case 2:
    uVar11 = _UNK_8c20f930;
    break;
  default:
    goto LAB_8c20f8ea;
  case 4:
    uVar11 = _UNK_8c20f934;
    break;
  case 6:
    uVar11 = DAT_8c20f92c;
    break;
  case 7:
    uVar11 = _UNK_8c20f938;
    break;
  case 8:
    uVar11 = _UNK_8c20f924;
    break;
  case 9:
    uVar11 = _UNK_8c20f93c;
    break;
  case 10:
    uVar11 = uVar5 | DAT_8c20f6d0;
    goto LAB_8c20f8ea;
  case 0xb:
    uVar11 = uVar5;
    goto LAB_8c20f8ea;
  }
  uVar11 = uVar11 | uVar5;
LAB_8c20f8ea:
  if ((uVar10 & DAT_8c20f944) != 0) {
    if (ar4[0xd] == 0) {
      uVar11 = uVar11 & DAT_8c20f948;
    }
    else {
      uVar11 = uVar11 | DAT_8c20f940;
    }
  }
  if ((DAT_8c20f940 & uVar10) != 0) {
    if (ar4[0xe] == 0) {
      uVar11 = uVar11 & DAT_8c20f76c;
    }
    else {
      uVar11 = uVar11 | DAT_8c20f944;
    }
  }
  a5 = 3;
  if (((int)DAT_8c20f9c0 & uVar10) != 0) {
    uVar11 = DAT_8c20f9c8 & uVar11 | (ar4[0xf] & 3) << 0x16;
  }
  if ((DAT_8c20f9cc & uVar10) != 0) {
    if (ar4[0x19] == 0) {
      uVar11 = uVar11 & DAT_8c20f9d4;
    }
    else {
      uVar11 = uVar11 | DAT_8c20f9d0;
    }
  }
  if (((int)DAT_8c20f9c2 & uVar10) != 0) {
    if (ar4[0x11] == 0) {
      uVar11 = uVar11 & DAT_8c20f9dc;
    }
    else {
      uVar11 = uVar11 | DAT_8c20f9d8;
    }
  }
  if (((int)DAT_8c20f9c4 & uVar10) != 0) {
    if (ar4[0x12] == 0) {
      uVar11 = uVar11 & DAT_8c20fa88;
    }
    else {
      uVar11 = uVar11 | DAT_8c20f9e0;
    }
  }
  uVar5 = (uint)DAT_8c20fa80;
  if ((uVar10 & uVar5) != 0) {
    uVar11 = DAT_8c20fa8c & uVar11 | ar4[0x13] << 0xf;
  }
  if (((int)DAT_8c20fa82 & uVar10) != 0) {
    uVar11 = DAT_8c20fa90 & uVar11 | ar4[0x14] << 0x11;
  }
  if (((int)DAT_8c20fa84 & uVar10) != 0) {
    uVar11 = (int)DAT_8c20fa86 & uVar11 | aiStack_30[ar4[0x15]] << 0xd;
  }
  if ((DAT_8c20fa94 & uVar10) != 0) {
    if (ar4[0x16] == 0) {
      uVar11 = uVar11 & (int)DAT_8c20fb80;
    }
    else {
      uVar11 = uVar11 | uVar5;
    }
  }
  if ((DAT_8c20fb88 & uVar10) != 0) {
    uVar2 = ar4[0x17] & 0xf;
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    uVar11 = (int)DAT_8c20fb82 & uVar11 | uVar2 << 8;
  }
  if ((DAT_8c20fb8c & uVar10) != 0) {
    uVar11 = (int)DAT_8c20fb84 & uVar11 | (ar4[0x18] & 3) << 6;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    uVar2 = DAT_8c20f6d0;
    iVar1 = FUN_8c20f340(*(undefined4 *)(ar4[0x1b] + 0xc),3,uVar5,DAT_8c20f6d0);
    uVar5 = FUN_8c20f340(*(undefined4 *)(ar4[0x1b] + 0x10),a5,uVar5,uVar2);
    uVar11 = uVar11 & 0xffffffc0 | iVar1 << 3 | uVar5;
  }
  uVar5 = DAT_8c20fde4;
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    uVar2 = *(uint *)(ar4[0x1b] + 0x18);
    uVar2 = ((uStack_3c & DAT_8c20fb90 | (uint)((uVar2 & 1) != 0) << 0x1f) & DAT_8c20fb94 |
            (uVar2 & 8) << 0x1b) & DAT_8c20fb9c | *(uint *)(ar4[0x1b] + 8) & DAT_8c20fb98;
    if (((uVar2 & DAT_8c20fb98) == DAT_8c20fba0) || ((uVar2 & DAT_8c20fb98) == DAT_8c20fba4)) {
      uVar2 = DAT_8c20fba8 & uVar2 | (ar4[0x1a] & 0x3f) << 0x15;
    }
    else {
      uVar2 = DAT_8c20fc68 &
              (uVar2 & DAT_8c20fc64 | (~(*(uint *)(ar4[0x1b] + 0x18) & 4) & 4) << 0x18) |
              (*(uint *)(ar4[0x1b] + 0x18) & 0x10) << 0x15;
    }
    uStack_3c = uVar2 & DAT_8c20fc6c | *(uint *)(ar4[0x1b] + 0x1c) >> 3;
  }
  if ((DAT_8c20fc70 & uVar10) != 0) {
    uVar2 = ar4[1];
    if (uVar2 == 0) {
      uVar8 = DAT_8c20fc74 | uVar8 & uVar6;
    }
    if (uVar2 == 1) {
      uVar8 = DAT_8c20fc74 | uVar8 & uVar6;
    }
    if (uVar2 == 2) {
      uVar8 = DAT_8c20fc78 | uVar6 & uVar8;
    }
  }
  if ((DAT_8c20fc7c & uVar10) != 0) {
    uVar8 = DAT_8c20fc80 & uVar8 | ar4[2] << 0x18;
  }
  if ((DAT_8c20fc8c & uVar10) == 0) {
    iVar1 = *DAT_8c20fd68;
  }
  else {
    iVar1 = *(int *)((int)DAT_8c20fc60 + (int)ar4);
  }
  uVar6 = iVar1 << 0x12 | DAT_8c20fc88 & (uVar8 | DAT_8c20fc84);
  if ((DAT_8c20fd6c & uVar10) != 0) {
    uVar6 = DAT_8c20fd70 & uVar6 | *(int *)((int)DAT_8c20fd60 + (int)ar4) << 0x10;
  }
  uVar6 = (int)DAT_8c20fd62 & uVar6;
  if (((*(uint *)((int)DAT_8c20fd64 + (int)ar4) & DAT_8c20fd74) != 0) && ((ar4[2] & 1) != 0)) {
    uVar6 = uVar6 | 0x40;
  }
  if (((uVar10 & 0x10) != 0) && ((ar4[9] & 1) != 0)) {
    uVar6 = (int)DAT_8c20fd66 & uVar6 & 0xffffffbf | ar4[9] << 7 | *(int *)PTR_DAT_8c20fd78 << 6;
  }
  if ((uVar10 & DAT_8c20fd7c) != 0) {
    uVar6 = uVar6 & 0xffffffcf | ar4[3] << 4;
  }
  uVar8 = uVar6;
  if (uVar7 != 0) {
    uVar2 = (ar4[8] >> 1) << 3;
    uVar8 = uVar6 & 0xfffffff7 | uVar2;
    if (uVar7 != 0) {
      uVar8 = uVar6 & 0xfffffff5 | uVar2 | (ar4[8] & 1) << 1;
    }
  }
  if ((uVar4 & uVar10) != 0) {
    if (ar4[0x10] == 0) {
      uVar8 = uVar8 & 0xfffffffb;
    }
    else {
      uVar8 = uVar8 | 4;
    }
  }
  if (uVar3 != 0) {
    uVar8 = ar4[4] | uVar8 & 0xfffffffe;
  }
  iVar1 = (int)DAT_8c20fde0;
  *(uint *)(iVar1 + (int)ar4) = uVar9 & DAT_8c20fde8;
  *(uint *)(iVar1 + 4 + (int)ar4) = uVar11;
  iVar1 = (int)DAT_8c20fde2;
  *(uint *)(iVar1 + (int)ar4) = uStack_3c;
  *(uint *)(iVar1 + -0xc + (int)ar4) = uVar8 & uVar5;
  return 0;
}



/* FUN_8c20fe00 @ 8c20fe00 callers=17 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20fe00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  float fVar11;
  double in_dr2;
  undefined4 in_fr5;
  double dVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  char in_FPSCR_PR;
  char in_FPSCR_SZ;
  double dVar12;
  
  uVar8 = DAT_8c20ff28;
  puVar2 = DAT_8c20ff24;
  iVar6 = (int)DAT_8c20ff20;
  *DAT_8c20ff24 = *(uint *)(iVar6 + ar4);
  puVar2[4] = *(uint *)(iVar6 + 4 + ar4);
  puVar2[5] = *(uint *)(iVar6 + 8 + ar4);
  if ((*puVar2 >> 0x18 & 7) == 0) {
    puVar2[5] = puVar2[5] & DAT_8c20ff2c | uVar8;
  }
  puVar2[6] = *(uint *)(DAT_8c20ff22 + ar4);
  if (in_FPSCR_SZ == '\0') {
    puVar2[8] = *(uint *)(ar4 + 0x70);
    puVar2[9] = *(uint *)(ar4 + 0x74);
    puVar2[10] = *(uint *)(ar4 + 0x78);
    puVar2[0xb] = *(uint *)(ar4 + 0x7c);
    puVar2[0xc] = *(uint *)(ar4 + 0x80);
    puVar2[0xd] = *(uint *)(ar4 + 0x84);
    puVar2[0xe] = *(uint *)(ar4 + 0x88);
    uVar1 = DAT_8c20ff34;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(uint *)(ar4 + 0x8c));
    puVar2[0xf] = *(uint *)(ar4 + 0x8c);
  }
  else {
    *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(ar4 + 0x70);
    *(undefined8 *)(puVar2 + 9) = *(undefined8 *)(ar4 + 0x74);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(ar4 + 0x78);
    *(undefined8 *)(puVar2 + 0xb) = *(undefined8 *)(ar4 + 0x7c);
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(ar4 + 0x80);
    *(undefined8 *)(puVar2 + 0xd) = *(undefined8 *)(ar4 + 0x84);
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(ar4 + 0x88);
    uVar1 = DAT_8c20ff34;
    *(undefined8 *)(puVar2 + 0xf) = *(undefined8 *)(ar4 + 0x8c);
  }
  puVar3 = PTR_DAT_8c20ff30;
  puVar2[0x10] = *(uint *)(ar4 + 0xa0);
  puVar5 = DAT_8c20ff40;
  uVar10 = *puVar2;
  *DAT_8c20ff3c =
       *(int *)(PTR_DAT_8c20ff38 +
               ((uVar8 & uVar10) >> 0x18 | (uVar1 & uVar10) >> 0x14 | (uVar10 & 0x40) >> 3 |
                (uVar10 & 0x20) >> 3 | (uVar10 & 0x10) >> 3 | (uVar10 & 4) >> 2) * 4);
  *(uint *)puVar3 = *puVar2;
  uVar8 = (*puVar2 & DAT_8c20ff44) >> 0x18;
  *puVar5 = uVar8;
  piVar4 = DAT_8c20ff3c;
  if ((uVar8 & 1) != 0) {
    *(uint *)(puVar3 + 4) = puVar2[0x10];
    puVar9 = (uint *)(puVar3 + 0x20);
    goto LAB_8c2100aa;
  }
  *(uint *)(puVar3 + 4) = puVar2[4];
  *(uint *)(puVar3 + 8) = puVar2[5];
  *(uint *)(puVar3 + 0xc) = puVar2[6];
  iVar6 = *piVar4;
  puVar9 = (uint *)(puVar3 + 0x10);
  if (iVar6 == 0) {
    puVar9 = (uint *)(puVar3 + 0x20);
    goto LAB_8c2100aa;
  }
  if (iVar6 == 1) {
    *puVar9 = puVar2[8];
    *(uint *)(puVar3 + 0x14) = puVar2[9];
    puVar9 = (uint *)(puVar3 + 0x18);
    *puVar9 = puVar2[10];
    puVar7 = puVar2 + 0xb;
LAB_8c20ffb2:
    puVar9 = puVar9 + 1;
    *puVar9 = *puVar7;
  }
  else {
    if (iVar6 == 2) {
      *(uint *)(puVar3 + 0x20) = puVar2[8];
      *(uint *)(puVar3 + 0x24) = puVar2[9];
      *(uint *)(puVar3 + 0x28) = puVar2[10];
      *(uint *)(puVar3 + 0x2c) = puVar2[0xb];
      *(uint *)(puVar3 + 0x30) = puVar2[0xc];
      *(uint *)(puVar3 + 0x34) = puVar2[0xd];
      puVar9 = (uint *)(puVar3 + 0x38);
      puVar7 = puVar2 + 0xf;
      *puVar9 = puVar2[0xe];
      goto LAB_8c20ffb2;
    }
    if (iVar6 == 3) {
      *puVar9 = puVar2[0x11];
      *(uint *)(puVar3 + 0x14) = puVar2[0x12];
      puVar9 = (uint *)(puVar3 + 0x20);
      goto LAB_8c2100aa;
    }
    if (iVar6 != 4) {
      if (iVar6 == 0x10) {
        if (in_FPSCR_SZ == '\0') {
          dVar13 = (double)CONCAT44((undefined4)DAT_8c2100c0,in_fr5);
          in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),puVar2[8]);
        }
        else {
          dVar13 = (double)CONCAT44(DAT_8c2100c0._4_4_,(undefined4)DAT_8c2100c0);
        }
        fVar14 = (float)((ulonglong)dVar13 >> 0x20);
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(in_dr2,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar11);
          iVar6 = (int)fVar11;
        }
        else {
          dVar12 = in_dr2 * dVar13;
          iVar6 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[9]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          iVar15 = (int)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          iVar15 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[10]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          iVar16 = (int)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          iVar16 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[0xb]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          uVar8 = (uint)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          uVar8 = (uint)dVar12;
        }
        *puVar9 = iVar6 << 0x18 | iVar15 << 0x10 | iVar16 << 8 | uVar8;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[0xc]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          iVar6 = (int)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          iVar6 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[0xd]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          iVar15 = (int)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          iVar15 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[0xe]);
        }
        if (in_FPSCR_PR == '\0') {
          fVar11 = SUB84(dVar12,0) * fVar14;
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),fVar11);
          iVar16 = (int)fVar11;
        }
        else {
          dVar12 = dVar12 * dVar13;
          iVar16 = (int)dVar12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar12 = (double)CONCAT44((int)((ulonglong)dVar12 >> 0x20),puVar2[0xf]);
        }
        if (in_FPSCR_PR == '\0') {
          uVar8 = (uint)(SUB84(dVar12,0) * fVar14);
        }
        else {
          uVar8 = (uint)(dVar12 * dVar13);
        }
        *(uint *)(puVar3 + 0x14) = iVar6 << 0x18 | iVar15 << 0x10 | iVar16 << 8 | uVar8;
        puVar9 = (uint *)(puVar3 + 0x20);
      }
      goto LAB_8c2100aa;
    }
    *puVar9 = puVar2[0x11];
    *(uint *)(puVar3 + 0x14) = puVar2[0x12];
    *(uint *)(puVar3 + 0x20) = puVar2[8];
    *(uint *)(puVar3 + 0x24) = puVar2[9];
    *(uint *)(puVar3 + 0x28) = puVar2[10];
    *(uint *)(puVar3 + 0x2c) = puVar2[0xb];
    *(uint *)(puVar3 + 0x30) = puVar2[0x14];
    *(uint *)(puVar3 + 0x34) = puVar2[0x15];
    *(uint *)(puVar3 + 0x38) = puVar2[0x16];
    puVar9 = (uint *)(puVar3 + 0x3c);
    *puVar9 = puVar2[0x17];
  }
  puVar9 = puVar9 + 1;
LAB_8c2100aa:
  puVar2 = DAT_8c2100c0._4_4_;
  *DAT_8c2100c0._4_4_ = *puVar5;
  puVar2[1] = (int)puVar9 - (int)puVar3;
  return 0;
}


