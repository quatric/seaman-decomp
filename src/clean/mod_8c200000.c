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
  
  iVar4 = (int)0x148;
  iVar5 = ar4 * iVar4 + 0x8c4783e0;
  if (*(char *)(iVar5 + 2) != '\0') {
    uVar3 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar3,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(ar4 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6,ar7);
        if (iVar4 < 0) {
          return (int)(int)0xffffff03;
        }
        if (*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) {
          puVar2 = auStack_2c;
          iVar4 = FUN_8c1ffc0a(ar4,puVar2,ar6,ar7);
          if ((iVar4 != 0) && (iVar4 = FUN_8c1fffca(ar4,puVar2,ar6,ar7), -1 < iVar4)) {
            while( true ) {
              puVar2 = (undefined1 *)FUN_8c1ffebe(ar4,puVar2,ar6,ar7);
              if (((int)puVar2 < 0) || (iVar4 = FUN_8c1fff0c(ar4,puVar2 + 1,ar6,ar7), iVar4 < 0)) {
                iVar4 = (int)0x100;
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
              iVar1 = FUN_8c1fbb6c(ar4,puVar2,ar5,ar7);
              if (iVar1 < 0) {
                return iVar1;
              }
              uVar3 = ar5;
              iVar1 = FUN_8c1fbc44(ar4,iVar4,ar5,ar7);
              if (iVar1 < 0) break;
              a5 = FUN_8c200890(ar4,puVar2,uVar3,ar7);
              iVar1 = iVar4;
              if (a5 < 1) {
                uVar3 = FUN_8c1fff5e(ar4,puVar2,uVar3,ar7);
                (**(code **)(*0x8c4783dc + 0x10))(uVar3,2,iVar4,ar7);
              }
              else {
                FUN_8c20099e(ar4,a5,iVar4,ar7);
              }
              uVar3 = FUN_8c2009d0(ar4,puVar2,iVar1,ar7);
              FUN_8c20099e(ar4,iVar4,uVar3,ar7);
              ar6 = 0xfffc;
              FUN_8c20099e(ar4,puVar2,0xfffc,ar7);
            }
            return iVar1;
          }
        }
        return (int)(int)0xffffff0b;
      }
    }
  }
  return (int)(int)0xffffff01;
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
  
  uVar1 = 0xfffa;
  uVar9 = 1;
  iVar7 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = (int)0x200;
  iVar4 = *(int *)(iVar3 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x18);
  uVar8 = *(uint *)(iVar4 + 0x14);
  iVar3 = *(int *)(iVar3 + 0x28);
  if (0 < iVar6) {
    do {
      iVar4 = iVar3;
      iVar2 = FUN_8c1fbb6c(ar4,uVar8 & 0xffff,uVar9);
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
  
  uVar1 = 0xfffa;
  iVar4 = (int)0x200;
  iVar3 = *(int *)(ar4 + in_r3 + 0x1c);
  iVar5 = *(int *)(iVar3 + 0x18);
  uVar6 = *(uint *)(iVar3 + 0x14);
  iVar3 = *(int *)(ar4 + in_r3 + 0x28);
  if (0 < iVar5) {
    do {
      a6 = iVar3;
      iVar2 = FUN_8c1fbb6c(unaff_r12,uVar6 & 0xffff,iVar3,ar7);
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
  
  a6 = 0xfffa;
  iVar7 = 0;
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  uStack_2c = *(ushort *)(*(int *)(iVar6 + 0x1c) + 0x14);
  uVar1 = (uint)(short)uStack_2c;
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 0x18);
  a6_00 = 0xfffa + 2;
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
        (**(code **)(*0x8c4783dc + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,iVar5,ar7);
        FUN_8c2007f0(ar4,uVar4,iVar5,ar7);
        FUN_8c20065a(ar4,uVar4,iVar5,ar7);
      }
      return 0;
    }
    while (iVar2 = (*(code *)(&FUN_8c1fbc44))
                             (ar4,uVar1 & 0xffff,*(int *)(iVar6 + 0x28) + iVar7 * 0x200,ar7),
          iVar2 != 0) {
      if (iVar2 == (int)0xffffff01) {
        return iVar2;
      }
      uVar4 = 0xffff;
      FUN_8c20099e(ar4,uVar1 & 0xffff,0xffff,ar7);
      uVar1 = FUN_8c1fe15a(ar4,a6_00,uVar4,ar7);
    }
    if (iVar7 == 0) {
      uStack_2c = (ushort)uVar1;
    }
    uVar3 = a6;
    FUN_8c20099e(ar4,uVar1 & 0xffff,a6,ar7);
    if (iVar7 != iVar5 + -1) {
      uVar4 = FUN_8c1fe15a(ar4,a6_00,uVar3,ar7);
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
  undefined4 ar6_00;
  uint unaff_r8;
  int iVar6;
  int iVar7;
  uint a5;
  
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
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
        iVar2 = FUN_8c1fbc44(ar4,a5,ar6,ar7);
        if (iVar2 == 0) break;
        if (iVar2 == (int)0xffffff01) {
          return iVar2;
        }
        bVar1 = true;
        uVar4 = FUN_8c2009d0(ar4,a5,ar6,ar7);
        ar6_00 = 0xffff;
        FUN_8c20099e(ar4,a5,0xffff,ar7);
        uVar5 = FUN_8c1fe15a(ar4,0xfffc,ar6_00,ar7);
        if ((int)uVar5 < 0) {
          return (int)(int)0xffffff04;
        }
        FUN_8c20099e(ar4,uVar5,uVar4 & 0xffff,ar7);
        if (iVar7 == 0) {
          (**(code **)(*0x8c4783dc + 0x10))(*(undefined4 *)(iVar6 + 0x20),0x4a,uVar5,ar7);
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
    piVar2 = 0x8c4783dc;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(ar5 + 0x28));
  uVar3 = (**(code **)(*0x8c4783dc + 0xc))(ar4,2,1);
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
    piVar3 = 0x8c4783dc;
    pbVar7 = pbVar7 + 1;
  } while (pbVar7 < (byte *)(unaff_r14 + 0x28));
  uVar4 = (**(code **)(*0x8c4783dc + 0xc))(unaff_r13,2,ar6,ar7);
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
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  a4 = *(byte **)(iVar2 + 0x28);
  iVar3 = 0;
  a6 = ar6;
  while( true ) {
    if (*(int *)(*(int *)(iVar2 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
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
  
  ar6_00 = ar4 * 0x148 + 0x8c4783e0;
  ar4_00 = *(byte **)(ar6_00 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*ar4_00 == (int)0xcc) break;
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
    if ((uint)*a4 == (int)0xcc) break;
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
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
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
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  uVar1 = (*(code *)(&FUN_8c1fbb6c))
                    (*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),*(undefined4 *)(iVar2 + 0x20));
  return uVar1;
}



/* FUN_8c20065a @ 8c20065a callers=4 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20065a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  uVar1 = (*(code *)(&FUN_8c1fbc44))
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
  
  puVar1 = (&FUN_8c1fbb6c);
  uVar6 = 1;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
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
  
  puVar1 = (&FUN_8c1fbb6c);
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
  
  ar6_00 = 0xfffa;
  iVar4 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x10);
  ar6_01 = 0xfffa + 5;
  if (0 < iVar2) {
    do {
      iVar1 = (*(code *)(&FUN_8c1fbc44))
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
      iVar1 = (*(code *)(&FUN_8c1fbc44))
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
  
  uVar1 = 0xfffc;
  iVar4 = *(int *)(ar4 * 0x148 + 0x8c4783e0 + 0x1c);
  iVar5 = *(int *)(iVar4 + 0x1c);
  iVar6 = *(int *)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x20) + iVar5 + -1;
  do {
    ar6_00 = iVar5;
    ar7_00 = iVar4;
    iVar2 = FUN_8c1fe1e4(ar4,uVar1);
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
  uint ar5_00;
  int iVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int a6;
  int a7;
  int ar6_00;
  undefined4 unaff_r10;
  int iVar4;
  int iVar5;
  
  ar5_00 = 0xfffc;
  iVar3 = *(int *)(ar5 + in_r3 + 0x1c);
  ar6_00 = *(int *)(iVar3 + 0x1c);
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar3 = *(int *)(iVar3 + 0x20) + ar6_00 + -1;
  do {
    a6 = ar6_00;
    a7 = iVar3;
    iVar1 = FUN_8c1fe1e4(unaff_r10,ar5_00,ar6_00,iVar3);
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = FUN_8c2009d0(unaff_r10,iVar1 - iVar5,a6,a7);
        if ((uVar2 & 0xffff) != ar5_00) {
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
  
  ar6_00 = 0xfffa;
  piVar2 = 0x8c4783dc;
  uVar5 = 0;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  bVar1 = false;
  while( true ) {
    iVar3 = FUN_8c2006dc(ar4,ar5,ar6,ar7);
    if (iVar3 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar3 != (int)0xffffff40) break;
    ar6 = FUN_8c20075a(ar4,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
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
  
  a6 = 0xfffa;
  piVar1 = 0x8c4783dc;
  iVar3 = unaff_r14 + in_r3;
  while( true ) {
    iVar2 = FUN_8c2006dc(unaff_r12,ar5,ar6,ar7);
    if (iVar2 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar2 != (int)0xffffff40) break;
    ar6 = FUN_8c20075a(unaff_r12,ar5,ar6,ar7);
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
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
  
  piVar1 = 0x8c4783dc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
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
  
  ar5_00 = 0xfffc;
  ar6_00 = 0xfffc + -2;
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
  
  piVar1 = 0x8c4783dc;
  ar5_00 = 0;
  uVar5 = 0xfffa;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  while( true ) {
    if (*(int *)(*(int *)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
      return ar5 & 0xffff;
    }
    pbVar2 = (byte *)FUN_8c200a84(ar4,ar5_00,ar6,ar7);
    if (((*pbVar2 == 0x33) || (*pbVar2 == 0xcc)) &&
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
  
  piVar1 = 0x8c4783dc;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
      return ar5 & 0xffff;
    }
    a4 = (byte *)FUN_8c200a84(unaff_r12,unaff_r14,ar6,ar7);
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
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
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  if (ar5 <= **(int **)(iVar2 + 0x1c)) {
                    /* WARNING: Could not recover jumptable at 0x8c2009c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*0x8c4783dc + 0x10))(*(undefined4 *)(iVar2 + 0x24),ar5 << 1);
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
  uVar1 = (**(code **)(*0x8c4783dc + 0xc))
                    (*(undefined4 *)(ar4 * 0x148 + 0x8c4783e0 + 0x24),ar5 << 1);
  return uVar1;
}



/* FUN_8c200a00 @ 8c200a00 callers=2 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c200a00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  *(undefined4 *)(0x8c478e20 + ar4 * 4) = 0;
  if ((*(char *)(iVar2 + 10) != '\0') || (iVar1 = FUN_8c200642(ar4,ar5,ar6,ar7), -1 < iVar1)) {
    iVar1 = FUN_8c1ffcc2(ar4,ar5,ar6,ar7);
    if (-1 < iVar1) {
      if (((*(char *)(iVar2 + 0xb) == '\0') && (iVar1 = FUN_8c200672(ar4,ar5,ar6,ar7), iVar1 < 0))
         || ((*(char *)(iVar2 + 0xc) == '\0' && (iVar1 = FUN_8c2001b8(ar4,ar5,ar6,ar7), iVar1 < 0)))
         ) {
        if (iVar1 != 0xffff0000) {
          return iVar1;
        }
        *(undefined4 *)(0x8c478e20 + ar4 * 4) = 1;
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
  return ar5 * 0x20 + *(int *)(ar4 * 0x148 + 0x8c4783e0 + 0x28);
}



/* FUN_8c200a9c @ 8c200a9c callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c200aa2) */
/* WARNING: Unknown calling convention */

int FUN_8c200a9c(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * 0x148 + 0x8c4783e0 + 0x48;
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
  pcVar1 = 0x8c47d0a0;
  while( true ) {
    if (*0x8c47d2e0 <= iVar2) {
      *0x8c47d2e4 = (int)(int)0xffffff07;
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
  
  uVar1 = (*0x8c013ff8)(0,0x48);
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
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = FUN_8c200566(ar4,ar5,auStack_40,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    FUN_8c200a84(ar4,iVar1,a6,ar7);
    if ((int)uStack_34 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
      a5 = uStack_34;
      for (iVar1 = 0; iVar1 < iStack_18; iVar1 = iVar1 + 1) {
        uVar2 = FUN_8c2009d0(ar4,a5,a6,ar7);
        uVar2 = uVar2 & 0xffff;
        if (iVar1 == iStack_18 + -1) {
          if (uVar2 != 0xfffa) goto LAB_8c200b80;
        }
        else if ((((uVar2 == a5) || (uVar2 == 0xfffa)) || (uVar2 == 0xfffc)) ||
                ((uVar2 == 0xffff || (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= (int)uVar2)))
                ) goto LAB_8c200b80;
        a5 = uVar2;
      }
      iVar1 = 0;
    }
    else {
LAB_8c200b80:
      iVar1 = (int)(int)0xffffff41;
    }
  }
  return iVar1;
}



/* FUN_8c200ba0 @ 8c200ba0 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c200ba0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 d;
  
  d = 10;
  iVar1 = libgcc_divide_helper_01051c(ar4,10);
  iVar2 = libgcc_divide_helper_0106dc(ar4,d);
  return iVar1 * 0x10 + iVar2;
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
  uVar1 = libgcc_divide_helper_010468((uint)*(ushort *)ar5,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5_00,ar6,ar7);
  *ar4 = (char)uVar1;
  uVar1 = libgcc_divide_helper_010614((uint)*(ushort *)ar5,100);
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
  ar4[7] = (&DAT_8c26d210)[uVar2];
  return uVar2;
}



/* FUN_8c200c08 @ 8c200c08 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c200c08(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *unaff_r8;
  ushort *unaff_r13;
  int unaff_r14;
  
  uVar1 = libgcc_divide_helper_010468((uint)*unaff_r13,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *unaff_r8 = (char)uVar1;
  uVar1 = libgcc_divide_helper_010614((uint)*unaff_r13,100);
  uVar1 = FUN_8c200ba0(uVar1,ar5,ar6,ar7);
  *(char *)(unaff_r14 + 1) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[1],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 2) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)((int)unaff_r13 + 3),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 3) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[2],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 4) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)*(byte *)((int)unaff_r13 + 5),ar5,ar6,ar7);
  *(char *)(unaff_r14 + 5) = (char)uVar1;
  uVar1 = FUN_8c200ba0((uint)(byte)unaff_r13[3],ar5,ar6,ar7);
  *(char *)(unaff_r14 + 6) = (char)uVar1;
  uVar2 = *(byte *)((int)unaff_r13 + 7) & 7;
  *(undefined *)(unaff_r14 + 7) = (&DAT_8c26d210)[uVar2];
  return uVar2;
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
  cVar1 = (&DAT_8c26d218)[ar5[7] & 7];
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
  cVar1 = (&DAT_8c26d218)[unaff_r14[7] & 7];
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
  if ((((((0 < *piVar2) && (*piVar2 <= (int)0x7ff)) && (*piVar2 == piVar2[2])) &&
       ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
      (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) &&
       (piVar2[0xd] <= *piVar2)))) &&
     (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
      ((*(int *)(*0x8c4783dc + 8) != 0 ||
       ((piVar2[4] <= (int)*(short *)(ar4 + 0x10) && (piVar2[6] <= (int)*(short *)(ar4 + 0x12)))))))
     )) {
    iVar1 = *piVar2;
    if (iVar1 == 0xff) {
      *(undefined4 *)(ar4 + 4) = 0;
    }
    else if (iVar1 == 0x1ff) {
      *(undefined4 *)(ar4 + 4) = 1;
    }
    else if (iVar1 == 0x3ff) {
      *(undefined4 *)(ar4 + 4) = 2;
    }
    else {
      if (iVar1 != 0x7ff) {
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
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab0 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (**(int **)(&DAT_8c4783fc + iVar2) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = FUN_8c1fbb6c(ar4,ar5_00,ar5,ar7);
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
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
  
  puVar1 = (&FUN_8c1fbb6c);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
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
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab4 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (**(int **)(&DAT_8c4783fc + iVar2) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = FUN_8c1fbc44(ar4,ar5_00,ar5,ar7);
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
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
  
  puVar1 = (&FUN_8c1fbc44);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
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
  undefined4 *ar6_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  ar6_00 = &uStack_24;
  uVar5 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (((ar7 != 0) ||
      (uVar1 = FUN_8c1ffb70(ar4,ar5,ar6,0), uVar5 = uVar1, -1 < (int)uVar1)) &&
     (uVar1 = FUN_8c1fe534(ar4,uStack_20,&uStack_24,ar7), -1 < (int)uVar1)) {
    uVar4 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = uVar5;
    if (uVar5 != 0) {
      iVar3 = (int)0x200;
      iVar2 = iStack_1c;
      do {
        uVar1 = FUN_8c1fee6c(uStack_24,iVar2,ar6_00,ar7);
        if ((int)uVar1 < 0) goto LAB_8c200f12;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + iVar3;
      } while (uVar4 < uVar5);
    }
    uVar1 = 0;
LAB_8c200f12:
    FUN_8c1fe9ae(uStack_24,0,ar6_00,ar7);
  }
  return uVar1;
}



/* FUN_8c200f2c @ 8c200f2c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c200f2c(int ar4,undefined4 ar5,int ar6,uint ar7,undefined4 s0,uint s4)

{
  uint uVar1;
  int iVar2;
  int *ar7_00;
  uint uVar3;
  int iStack_20;
  int iStack_1c;
  
  ar7_00 = &iStack_20;
  uVar3 = ar7;
  iStack_1c = ar6;
  uVar1 = FUN_8c1fe350(ar4,0,ar6,ar7);
  iVar2 = FUN_8c1ffb70(ar4,ar5,ar6,uVar3);
  if (0 < iVar2) {
    uVar1 = uVar1 + iVar2;
  }
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = FUN_8c1fe7aa(ar4,ar5,s0,&iStack_20);
      if (-1 < (int)uVar1) {
        iVar2 = ar4 * 0x148;
        uVar3 = 0;
        *(char *)(iStack_20 + 1) = (char)s4;
        *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
        *(uint *)(iVar2 + -0x73b87bec) =
             *(int *)(&DAT_8c273aa4 + *(int *)(iVar2 + -0x73b87c1c) * 0x50) + ar7;
        iVar2 = iStack_1c;
        if (ar7 != 0) {
          do {
            uVar1 = FUN_8c1febd6(iStack_20,iVar2,s0,ar7_00);
            if ((int)uVar1 < 0) goto LAB_8c20100a;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x200;
          } while (uVar3 < ar7);
        }
        uVar1 = 0;
LAB_8c20100a:
        FUN_8c1fe9ae(iStack_20,0,s0,ar7_00);
      }
    }
    else {
      uVar1 = FUN_8c20103c(ar4,ar5,iStack_1c,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c20103c @ 8c20103c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20103c(int ar4,undefined4 ar5,int ar6,uint ar7,undefined1 *s0,undefined4 s4)

{
  int iVar1;
  int *ar6_00;
  int *ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  ar7_00 = &iStack_2c;
  ar6_00 = &iStack_2c;
  uStack_28 = ar5;
  iStack_24 = ar6;
  iVar1 = FUN_8c1fe7aa(ar4,ar5,s0,&iStack_2c);
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(iStack_2c + 1) = (undefined1)s4;
    *(undefined4 *)(iVar1 + -0x73b87bf0) = 1;
    *(uint *)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(int *)(&DAT_8c273aa4 + *(int *)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = iStack_24;
    if (ar7 != 0) {
      do {
        iVar1 = FUN_8c1febd6(iStack_2c,iVar3,s0,ar7_00);
        if (iVar1 < 0) goto LAB_8c20110e;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
    iVar1 = FUN_8c1fe534(ar4,uStack_28,&iStack_2c,ar7_00);
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = iStack_24;
      if (ar7 != 0) {
        do {
          iVar1 = FUN_8c1fee6c(iStack_2c,ar5_00,ar6_00,ar7_00);
          s0 = (undefined1 *)ar6_00;
          if (iVar1 < 0) goto LAB_8c20110e;
          iVar1 = FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00);
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)ar6_00;
            goto LAB_8c20110e;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)ar6_00;
LAB_8c20110e:
      FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
    }
  }
  return iVar1;
}



/* FUN_8c20112c @ 8c20112c callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c20112c(int ar4,undefined4 ar5,int ar6,uint ar7,undefined4 s0,uint s4)

{
  uint uVar1;
  int *ar7_00;
  uint uVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  ar7_00 = &iStack_24;
  iStack_20 = ar6;
  uStack_1c = ar5;
  uVar1 = FUN_8c1fe350(ar4,1,ar6,ar7);
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = FUN_8c1fe646(ar4,uStack_1c,s0,&iStack_24);
      if (-1 < (int)uVar1) {
        iVar3 = ar4 * 0x148;
        uVar2 = 0;
        *(char *)(iStack_24 + 1) = (char)s4;
        *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
        *(uint *)(iVar3 + -0x73b87bec) =
             *(int *)(&DAT_8c273aa4 + *(int *)(iVar3 + -0x73b87c1c) * 0x50) + ar7;
        iVar3 = iStack_20;
        if (ar7 != 0) {
          do {
            uVar1 = FUN_8c1fecf2(iStack_24,iVar3,s0,ar7_00);
            if ((int)uVar1 < 0) goto LAB_8c201208;
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x200;
          } while (uVar2 < ar7);
        }
        uVar1 = 0;
LAB_8c201208:
        FUN_8c1fe9ae(iStack_24,0,s0,ar7_00);
      }
    }
    else {
      uVar1 = FUN_8c201240(ar4,uStack_1c,iStack_20,ar7);
    }
  }
  return uVar1;
}



/* FUN_8c201240 @ 8c201240 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c201240(int ar4,undefined4 ar5,int ar6,uint ar7,undefined1 *s0,undefined4 s4)

{
  int iVar1;
  int *ar6_00;
  int *ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  ar7_00 = &iStack_2c;
  ar6_00 = &iStack_2c;
  uStack_28 = ar5;
  iStack_24 = ar6;
  iVar1 = FUN_8c1fe646(ar4,ar5,s0,&iStack_2c);
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(iStack_2c + 1) = (undefined1)s4;
    *(undefined4 *)(iVar1 + -0x73b87bf0) = 1;
    *(uint *)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(int *)(&DAT_8c273aa4 + *(int *)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = iStack_24;
    if (ar7 != 0) {
      do {
        iVar1 = FUN_8c1fecf2(iStack_2c,iVar3,s0,ar7_00);
        if (iVar1 < 0) goto LAB_8c201312;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
    iVar1 = FUN_8c1fe534(ar4,uStack_28,&iStack_2c,ar7_00);
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = iStack_24;
      if (ar7 != 0) {
        do {
          iVar1 = FUN_8c1fee6c(iStack_2c,ar5_00,ar6_00,ar7_00);
          s0 = (undefined1 *)ar6_00;
          if (iVar1 < 0) goto LAB_8c201312;
          iVar1 = FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00);
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)ar6_00;
            goto LAB_8c201312;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)ar6_00;
LAB_8c201312:
      FUN_8c1fe9ae(iStack_2c,0,s0,ar7_00);
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
      if (*(int *)(ar4 + 0x40) == 0xfffa) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
        return 0;
      }
      if (*(int *)(ar4 + 0x34) == 0) {
        return 0xffff0000;
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
    if (*(int *)(unaff_r14 + 0x40) == 0xfffa) break;
    if (*(int *)(unaff_r14 + 0x34) == 0) {
      return 0xffff0000;
    }
    uVar1 = FUN_8c2009d0(a4,*(undefined4 *)(unaff_r14 + 0x40),ar6,ar7);
    unaff_r13 = unaff_r13 + 1;
    *(uint *)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(int *)(unaff_r14 + 0x34) = *(int *)(unaff_r14 + 0x34) + -1;
  }
  if (*(int *)(unaff_r14 + 0x34) != 0) {
    return 0xffff0000;
  }
  return 0;
}



/* FUN_8c2013c2 @ 8c2013c2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2013c2(int ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  int iVar3;
  uint uVar4;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iStack_24 = ar7;
  uStack_20 = ar5;
  iStack_1c = ar6;
  if (s0 == 0) {
    iVar1 = FUN_8c1ffb70(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      return iVar1;
    }
    s0 = iVar1 - iStack_24;
  }
  iVar2 = FUN_8c1fe534(ar4,uStack_20,&uStack_28,ar7);
  iVar1 = iStack_1c;
  if (-1 < iVar2) {
    ar6_00 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(uint *)(iVar2 + 0x34) = s0;
    FUN_8c20135c(uStack_28,iStack_24,0,ar7);
    uVar4 = 0;
    if (s0 != 0) {
      iVar3 = (int)0x200;
      do {
        iVar2 = FUN_8c1fee6c(uStack_28,iVar1,ar6_00,ar7);
        if (iVar2 < 0) goto LAB_8c201442;
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + iVar3;
      } while (uVar4 < s0);
    }
    iVar2 = 0;
LAB_8c201442:
    FUN_8c1fe9ae(uStack_28,0,ar6_00,ar7);
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
    a5 = (int)(int)0xffffff05;
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

int FUN_8c2014e6(int ar4,undefined4 ar5,int ar6,uint ar7,uint s0)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 *ar6_00;
  uint a7;
  int iVar3;
  undefined1 auStack_30 [4];
  ushort uStack_2c;
  char cStack_2a;
  
  ar6_00 = auStack_30;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  *(undefined4 *)(iVar3 + 0x30) = 1;
  puVar1 = (&FUN_8c1fdd44);
  *(uint *)(iVar3 + 0x34) = s0;
  a7 = ar7;
  iVar3 = (*(code *)puVar1)(ar4,ar5,ar6_00,ar7);
  if (-1 < iVar3) {
    if (cStack_2a == '\x01') {
      uVar2 = (uint)uStack_2c;
      if (((ar7 < uVar2) && (s0 <= uVar2)) && (ar7 + s0 <= uVar2)) {
        iVar3 = FUN_8c200b10(ar4,ar5,ar6_00,a7);
        if (-1 < iVar3) {
          uVar2 = 0;
          if (s0 != 0) {
            do {
              iVar3 = FUN_8c1fbc44(ar4,ar7,ar6,a7);
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
              ar6 = ar6 + 0x200;
              ar7 = ar7 + 1;
            } while (uVar2 < s0);
          }
          iVar3 = 0;
        }
      }
      else {
        iVar3 = (int)(int)0xffffff00;
      }
    }
    else {
      iVar3 = (int)(int)0xffffff0b;
    }
  }
  return iVar3;
}



/* FUN_8c2015b0 @ 8c2015b0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c2015b0(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int ar6_00;
  int ar6_01;
  int iVar6;
  uint a5;
  uint uVar7;
  int iStack_28;
  int iStack_24;
  
  if (((((*(short *)(ar5 + 0x4c) == 0) || (3 < *(ushort *)(ar5 + 0x4c))) ||
       (3 < *(ushort *)(ar5 + 0x54))) ||
      ((*(int *)(ar5 + 0x44) == 0 || (*(int *)(ar5 + 0x48) == 0)))) ||
     ((*(short *)(ar5 + 0x54) != 0 && (*(int *)(ar5 + 0x50) == 0)))) {
    iVar2 = -0x100;
  }
  else {
    memset(ar4,0,0x60,ar7);
    memset(ar4,0x20,0x10,ar7);
    memset(ar4 + 0x10,0x20,0x20,ar7);
    memset(ar4 + 0x30,0,0x10,ar7);
    iVar2 = 0;
    pcVar4 = ar5;
    pcVar5 = ar4;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    pcVar5 = ar4 + 0x10;
    pcVar4 = ar5 + 0x12;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x20);
    iVar2 = 0;
    pcVar4 = ar5 + 0x34;
    pcVar5 = ar4 + 0x30;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    ar6_01 = *(int *)(&DAT_8c273bb8 + (*(ushort *)(ar5 + 0x4c) & 3) * 4);
    ar6_00 = *(int *)(&DAT_8c273bc8 + (*(ushort *)(ar5 + 0x54) & 3) * 4);
    iVar6 = *(int *)(ar5 + 0x5c);
    iVar2 = ar6_01 + ar6_00;
    *(undefined2 *)(ar4 + 0x42) = *(undefined2 *)(ar5 + 0x4e);
    *(undefined2 *)(ar4 + 0x40) = *(undefined2 *)(ar5 + 0x4c);
    a5 = iVar6 + iVar2 + 0x80;
    if ((*(short *)(ar5 + 0x54) == 0) || (*(int *)(ar5 + 0x50) == 0)) {
      ar4[0x44] = '\0';
      ar4[0x45] = '\0';
      iStack_24 = 0;
    }
    else {
      iStack_24 = ar6_01 + 0x80;
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
      iVar2 = iVar2 + 0x80;
      *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(ar5 + 0x5c);
      iStack_28 = iVar2;
    }
    if (ar6_01 != 0) {
      memmove(ar4 + 0x60,*(undefined4 *)(ar5 + 0x44),0x20,pcVar4);
      memmove(ar4 + 0x80,*(undefined4 *)(ar5 + 0x48),ar6_01,pcVar4);
      iVar2 = ar6_01;
    }
    if (ar6_00 != 0) {
      memmove(ar4 + iStack_24,*(undefined4 *)(ar5 + 0x50),ar6_00,pcVar4);
      iVar2 = ar6_00;
    }
    if (*(int *)(ar5 + 0x5c) != 0) {
      iVar2 = *(int *)(ar5 + 0x5c);
      memmove(ar4 + iStack_28,*(undefined4 *)(ar5 + 0x58),iVar2,pcVar4);
    }
    uVar7 = a5 & 0x1ff;
    if (uVar7 != 0) {
      iVar2 = 0x200 - uVar7;
      memset(ar4 + a5,0,iVar2,pcVar4);
    }
    uVar3 = FUN_8c201948(ar4,a5,iVar2,pcVar4);
    *(short *)(ar4 + 0x46) = (short)uVar3;
    iVar2 = (uint)(uVar7 != 0) + (a5 >> 9);
  }
  return iVar2;
}



/* FUN_8c2017a8 @ 8c2017a8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2017a8(uint ar4,uint ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((ar4 != 0) && (ar4 < 4)) && (ar5 < 4)) {
    uVar1 = *(int *)(&DAT_8c273bb8 + ar4 * 4) + *(int *)(&DAT_8c273bc8 + ar5 * 4) + ar6 + 0x80;
    return (uint)((uVar1 & 0x1ff) != 0) + (uVar1 >> 9);
  }
  return 0xffffff00;
}



/* FUN_8c2017fc @ 8c2017fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2017fc(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

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
      (*(ushort *)(ar5 + 0x44) < 4)) && (*(uint *)(ar5 + 0x48) < 0xe1001)) {
    iVar3 = *(int *)(&DAT_8c273bb8 + (uint)*(ushort *)(ar5 + 0x40) * 4);
    iVar6 = *(int *)(&DAT_8c273bc8 + (uint)*(ushort *)(ar5 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(ar5 + 0x48) + 0x80;
    if (uVar8 < 0xe1001) {
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
      *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)(ar5 + 0x40);
      *(undefined1 **)(ar4 + 0x44) = ar5 + 0x60;
      *(undefined1 **)(ar4 + 0x48) = ar5 + 0x80;
      puVar7 = ar5 + 0x80 + iVar3;
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
        return 0xffffff20;
      }
      return 0;
    }
  }
  return 0xffffff21;
}



/* FUN_8c201804 @ 8c201804 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201804(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *unaff_r14;
  
  if ((((*(short *)(unaff_r14 + ain0) != 0) && (*(ushort *)(unaff_r14 + ain0) < 4)) &&
      (*(ushort *)(unaff_r14 + 0x44) < 4)) && (*(uint *)(unaff_r14 + 0x48) < 0xe1001)) {
    iVar3 = *(int *)(&DAT_8c273bb8 + (uint)*(ushort *)(unaff_r14 + 0x40) * 4);
    iVar6 = *(int *)(&DAT_8c273bc8 + (uint)*(ushort *)(unaff_r14 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(int *)(unaff_r14 + 0x48) + 0x80;
    if (uVar8 < 0xe1001) {
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
      *(undefined2 *)(ar4 + 0x4c) = *(undefined2 *)(unaff_r14 + 0x40);
      *(int *)(ar4 + 0x44) = ar5 + 0x60;
      *(int *)(ar4 + 0x48) = ar5 + 0x80;
      iVar3 = ar5 + 0x80 + iVar3;
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
        return 0xffffff20;
      }
      return 0;
    }
  }
  return 0xffffff21;
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
      if ((uVar3 & 0x8000) != 0) {
        uVar2 = uVar2 ^ (int)0x1021;
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
  int ar4_00;
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)0x130 + 0x8c47e6f0;
  uVar4 = 0x8c47e6f0;
  do {
    FUN_8c2020f8(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x4c;
  } while (uVar4 < uVar3);
  uVar3 = (int)0x100 + 0x8c47e820;
  uVar4 = 0x8c47e820;
  do {
    FUN_8c202116(uVar4,ar5,ar6,ar7);
    uVar4 = uVar4 + 0x10;
  } while (uVar4 < uVar3);
  ar4_00 = (int)0xa00;
  ar7_00 = 0;
  ar6_00 = 0x20;
  ar5_00 = (&FUN_8c201b10);
  uVar2 = FUN_8c1fa244(ar4_00,(&FUN_8c201b10),0x20,0);
  puVar1 = (&FUN_8c2029fc);
  *0x8c47e920 = uVar2;
  (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}



/* FUN_8c2019e0 @ 8c2019e0 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2019e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_8c1fa54c(*0x8c47e920,ar5,ar6,ar7);
  uVar2 = (int)0x130 + 0x8c47e6f0;
  uVar3 = 0x8c47e6f0;
  do {
    FUN_8c2020f8(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x4c;
  } while (uVar3 < uVar2);
  uVar2 = (int)0x100 + 0x8c47e820;
  uVar3 = 0x8c47e820;
  do {
    uVar1 = FUN_8c202116(uVar3,ar5,ar6,ar7);
    uVar3 = uVar3 + 0x10;
  } while (uVar3 < uVar2);
  return uVar1;
}



/* FUN_8c201a1a @ 8c201a1a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c201a1a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *a7;
  
  puVar1 = (&memset);
  a7 = 0x8c47e6f0 + 0x130;
  puVar2 = 0x8c47e6f0;
  puVar3 = 0x8c47e6f0;
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
  *(undefined4 *)(puVar3 + 4) = s0;
  *(undefined4 *)(puVar3 + 8) = s4;
  *(undefined4 *)(puVar3 + 0xc) = s8;
  *(undefined4 *)(puVar3 + 0x10) = s12;
  if (*(int *)(puVar3 + 8) == 0) {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10) >> 1;
  }
  else {
    *(int *)(puVar3 + 0x14) = *(int *)(puVar3 + 0xc) * *(int *)(puVar3 + 0x10);
  }
  *(undefined4 *)(puVar3 + 0x18) = s16;
  *(undefined4 *)(puVar3 + 0x48) = s20;
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
  uVar2 = (int)0x130 + 0x8c47e6f0;
  uVar1 = 0x8c47e6f0;
  uVar4 = 0x8c47e6f0;
  uVar5 = 0x8c47e6f0;
  uVar6 = 0x8c47e6f0;
  do {
    if (((*(char *)(uVar4 + 2) == '\x01') &&
        (iVar3 = *(int *)(uVar6 + 0x20), FUN_8c202424(uVar6,uVar1,ar6,ar7), bVar11 = extraout_M,
        bVar12 = extraout_Q, bVar14 = extraout_S, iVar3 == 1)) &&
       (iVar3 = FUN_8c202a30(*(undefined4 *)(uVar6 + 0x24),uVar1,ar6,ar7),
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
         (uint)bVar7 << 0x1e) & (int)(int)0xffffff0f;
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
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = 0;
  uStack_10 = *(undefined4 *)(ar4 + 0x14);
  iVar1 = ar4;
  FUN_8c010794(8,auStack_1c,&uStack_14);
  FUN_8c010794(8,auStack_24,ar4 + 0x3c);
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

undefined4 FUN_8c201c08(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_8c010794(8,in_stack_00000000,ar4 + 0x3c);
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
  
  puVar1 = 0x8c47e820;
  puVar2 = 0x8c47e820;
  while( true ) {
    if (0x8c47e820 + 0x100 <= puVar1) {
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

undefined4 FUN_8c201c92(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int a4;
  undefined4 in_PR;
  undefined1 auStackY_1c [8];
  undefined1 auStackY_14 [8];
  
  FUN_8c20202e(ar4,ar5,ar6,ar7,in_PR);
  a4 = ar4;
  iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
  FUN_8c010794(8,auStackY_14,ar4 + 8);
  FUN_8c010794(8,auStackY_1c,iVar1 + 0x3c);
  iVar2 = FUN_8c2029b4(a4,ar5,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c010794(8,auStackY_14,ar4 + 8);
    FUN_8c010794(8,auStackY_1c,iVar1 + 0x3c);
    uVar3 = FUN_8c2028cc(a4,ar5,ar6,ar7);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* FUN_8c201cf6 @ 8c201cf6 callers=1 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201cf6(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined1 auStackY_1c [8];
  undefined1 auStackY_14 [8];
  int iVar3;
  
  iVar1 = ar4;
  iVar3 = ar5;
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar5);
  if (iVar3 == 0) {
    FUN_8c010794(8,ar4 + 8,&stack0x00000004);
  }
  else if (iVar3 == 1) {
    FUN_8c010794(8,auStackY_14,&stack0x00000004);
    FUN_8c010794(8,auStackY_1c,ar4 + 8);
    FUN_8c20280c(iVar1,ar5,ar6,ar7);
  }
  else if (iVar3 == 2) {
    iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
    FUN_8c010794(8,ar4 + 8,iVar1 + 0x3c);
  }
  uVar2 = FUN_8c010794(8,in_stack_00000000,ar4 + 8);
  return uVar2;
}



/* FUN_8c201d84 @ 8c201d84 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201d84(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar4);
  uVar1 = FUN_8c010794(8,in_stack_00000000,ar4 + 8);
  return uVar1;
}



/* FUN_8c201da0 @ 8c201da0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201da0(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = 0;
  if (ar5 < 1) {
    ar5 = 0;
  }
  iStack_10 = ar5;
  FUN_8c010794(8,auStack_1c,&uStack_14);
  FUN_8c201cf6(ar4,1,ar6,ar7);
  uVar1 = FUN_8c010794(8,in_stack_00000000,ar4 + 8);
  return uVar1;
}



/* FUN_8c201dea @ 8c201dea callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c201dea(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar4);
  return (uint)*ar4;
}



/* FUN_8c201dfe @ 8c201dfe callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201dfe(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c20202e(ar4,ar5,ar6,ar7,ar4);
  *ar4 = 0;
  return uVar1;
}



/* FUN_8c201e14 @ 8c201e14 callers=1 callees=4 */

/* WARNING: Unknown calling convention */

int FUN_8c201e14(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStackY_30 [8];
  undefined1 auStackY_28 [8];
  
  iVar5 = ar5;
  iVar4 = ar6;
  FUN_8c20202e(ar4,ar5,ar6,ar7,ar6);
  iVar3 = ar4;
  iVar2 = get_field_4_201c8e(ar4,iVar5,ar6,ar7);
  FUN_8c010794(8,auStackY_28,ar4 + 8);
  FUN_8c010794(8,auStackY_30,iVar2 + 0x3c);
  iVar3 = FUN_8c2029b4(iVar3,iVar5,ar6,ar7);
  if (iVar3 == 1) {
    FUN_8c010794(8,auStackY_28,ar4 + 8);
    iVar3 = FUN_8c202924(*(undefined4 *)(iVar2 + 0x14),iVar5,ar6,ar7);
    FUN_8c010794(8,auStackY_30,iVar2 + 0x3c);
    iVar5 = FUN_8c202924(*(undefined4 *)(iVar2 + 0x14),iVar5,ar6,ar7);
    iVar6 = *(int *)(iVar2 + 0x14) - iVar3;
    if (*(int *)(iVar2 + 8) == 0) {
      iVar4 = iVar4 >> 1;
    }
    iVar1 = iVar6;
    if (iVar3 < iVar5) {
      iVar1 = -iVar3;
    }
    if (iVar5 + iVar1 < iVar4) {
      iVar4 = iVar5 + iVar1;
    }
    if (iVar6 < iVar4) {
      iVar6 = iVar4 - iVar6;
    }
    else {
      iVar6 = 0;
    }
    iVar4 = iVar4 - iVar6;
    if (*(int *)(iVar2 + 8) == 0) {
      memmove(ar5,iVar3 * 2 + *(int *)(iVar2 + 0x48),iVar4 * 2,ar7);
      if (iVar6 != 0) {
        memmove(iVar4 * 2 + ar5,*(undefined4 *)(iVar2 + 0x48),iVar6 << 1,ar7);
      }
    }
    else {
      memmove(ar5,*(int *)(iVar2 + 0x48) + iVar3,iVar4,ar7);
      if (iVar6 != 0) {
        memmove(ar5 + iVar4,*(undefined4 *)(iVar2 + 0x48),iVar6,ar7);
      }
    }
    iVar4 = iVar4 + iVar6;
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
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
  
  pcVar1 = (char *)FUN_8c1efd14(ar4,ar5,ar6,ar7);
  if ((*pcVar1 != '\0') &&
     (puVar2 = (uint *)FUN_8c1efd26(ar4,ar5,ar6,ar7), (*puVar2 & 0x10) != 0)) {
    return 1;
  }
  return 0;
}



/* FUN_8c201f8a @ 8c201f8a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c201f8a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = thunk_FUN_8c1f461c(ar4,ar5,ar6,ar7);
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

int FUN_8c20202e(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int a4;
  int a4_00;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  
  if (ar4 != (undefined1 *)0x0) {
    a4 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
    uStack_24 = 0;
    a4_00 = a4;
    uStack_20 = FUN_8c201bae(a4,ar5,ar6,ar7);
    FUN_8c010794(8,auStack_2c,&uStack_24);
    FUN_8c010794(8,auStack_34,a4 + 0x3c);
    puStack_38 = auStack_1c;
    FUN_8c20284e(a4_00,ar5,ar6,ar7);
    FUN_8c010794(8,auStack_40,ar4 + 8);
    FUN_8c010794(8,auStack_48,auStack_1c);
    ain0 = FUN_8c2029b4(a4_00,ar5,ar6,ar7);
    if (ain0 == 1) {
      ain0 = FUN_8c010794(8,ar4 + 8,auStack_1c);
      *ar4 = 1;
    }
  }
  return ain0;
}



/* FUN_8c2020b6 @ 8c2020b6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2020b6(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24));
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
  
  iVar1 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
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
  memset(0,0x4c);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c2020fc @ 8c2020fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2020fc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(ar4,0,ar6,ar7);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}



/* FUN_8c202116 @ 8c202116 callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202116(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(0,0x10);
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}



/* FUN_8c20211a @ 8c20211a callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20211a(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(ar4,0,ar6,ar7);
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
  int iVar1;
  int iVar2;
  int iVar3;
  uint a4;
  int iVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  undefined1 auStack_38 [8];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [12];
  
  iVar5 = *(int *)(ar4 + 8);
  iVar4 = *(int *)(ar5 + 0x48);
  a4 = (uint)*(byte *)(iVar5 + 0xb);
  if (a4 == 0) {
    a4 = 0;
  }
  else {
    iVar3 = ar5;
    FUN_8c010794(8,auStack_28,ar5 + 0x3c);
    FUN_8c010794(8,auStack_38,auStack_28);
    puStack_3c = (undefined1 *)&uStack_30;
    FUN_8c2027c0(a4,iVar3,ar6,ar7);
    *(undefined4 *)(ar5 + 0x3c) = uStack_30;
    *(undefined4 *)(ar5 + 0x40) = uStack_2c;
    if (*(int *)(ar5 + 8) == 0) {
      FUN_8c010794(8,auStack_38,auStack_28);
      iVar2 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      FUN_8c010794(8,auStack_40,&uStack_30);
      iVar3 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      iVar1 = iVar2 * 2 + iVar4;
      if (iVar3 < iVar2) {
        memmove(iVar1,iVar5 + 0xc,(*(int *)(ar5 + 0x14) - iVar2) * 2,ar7);
        iVar5 = (*(int *)(ar5 + 0x14) - iVar2) * 2 + 0xc + iVar5;
        iVar1 = iVar4;
      }
      else {
        iVar3 = iVar3 - iVar2;
        iVar5 = iVar5 + 0xc;
      }
      memmove(iVar1,iVar5,iVar3 << 1,ar7);
    }
    else if (*(int *)(ar5 + 8) == 1) {
      FUN_8c010794(8,auStack_38,auStack_28);
      iVar1 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      FUN_8c010794(8,auStack_40,&uStack_30);
      iVar2 = FUN_8c202924(*(undefined4 *)(ar5 + 0x14),iVar3,ar6,ar7);
      iVar3 = iVar1 + iVar4;
      if (iVar2 < iVar1) {
        memmove(iVar3,iVar5 + 0xc,*(int *)(ar5 + 0x14) - iVar1,ar7);
        iVar5 = (*(int *)(ar5 + 0x14) - iVar1) + 0xc + iVar5;
        iVar3 = iVar4;
      }
      else {
        iVar5 = iVar5 + 0xc;
        iVar2 = iVar2 - iVar1;
      }
      memmove(iVar3,iVar5,iVar2,ar7);
    }
  }
  return a4;
}



/* FUN_8c20227c @ 8c20227c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20227c(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  if (((*ar4 != '\0') && (*ar4 != '\x03')) &&
     (ar4_00 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24)),
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
     (a4 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7),
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
    uVar1 = (uint)0x80;
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
        uStack_14 = (undefined1)0xfc;
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
    iVar3 = FUN_8c1eff32(*(undefined4 *)(ar4 + 0x24),&uStack_14,ar6,ar7);
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
  puVar1 = (&FUN_8c1efd14);
  if (iVar2 == 1) {
    if (*(int *)(ar4 + 0x30) == 0) {
      uVar3 = FUN_8c1efdc8(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x1c) = uVar3;
      ar4[0x30] = '\x01';
      ar4[0x31] = '\0';
      ar4[0x32] = '\0';
      ar4[0x33] = '\0';
    }
    else {
      if (*(int *)(ar4 + 0x30) == 1) {
        iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\a') {
          uVar3 = FUN_8c1efdc8(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
          *(undefined4 *)(ar4 + 0x1c) = uVar3;
          return uVar3;
        }
        uVar3 = FUN_8c1efd7c(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        *(undefined4 *)(ar4 + 0x1c) = uVar3;
        uVar4 = 2;
      }
      else {
        if (*(int *)(ar4 + 0x30) != 2) {
          if (*(int *)(ar4 + 0x30) == 3) {
            iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
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
            iVar2 = FUN_8c202a30(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
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
        iVar2 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
        if (*(char *)(iVar2 + 4) != '\x05') {
          uVar3 = FUN_8c1efd7c(*(undefined4 *)(ar4 + 0x24),ar5,ar6,ar7);
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
        ar5_00 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24));
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
        a5 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),0,ar6,ar7);
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
    uVar4 = FUN_8c1efdc8(*(undefined4 *)(ar4 + 0x24));
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
    uVar4 = FUN_8c1efd7c(*(undefined4 *)(ar4 + 0x24));
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
        uStack_14 = (undefined1)0xfc;
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
    iVar3 = FUN_8c1eff32(*(undefined4 *)(ar4 + 0x24),&uStack_14);
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
    uVar4 = FUN_8c1efdc8(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
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
    uVar4 = FUN_8c1efd7c(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
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
        uStack_10 = (undefined1)0xfc;
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
    iVar3 = FUN_8c1eff32(*(undefined4 *)(unaff_r14 + 0x24),&uStack_10);
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

undefined4
FUN_8c2027c0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,uint s8)

{
  undefined4 uVar1;
  int iStack_c;
  uint uStack_8;
  
  if (ar4 < 1) {
    uVar1 = FUN_8c010794(8,s0,&s4);
    return uVar1;
  }
  uStack_8 = ar4 + s8;
  iStack_c = s4;
  if (uStack_8 < s8) {
    iStack_c = s4 + 1;
  }
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}



/* FUN_8c20280c @ 8c20280c callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20280c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,int s8
            ,int s12,uint s16)

{
  undefined4 uVar1;
  bool bVar2;
  int iStack_c;
  int iStack_8;
  
  bVar2 = s16 <= 0xffffffffU - s8;
  if (bVar2) {
    iStack_8 = s8 + s16;
  }
  else {
    iStack_8 = s16 + s8 + 1;
  }
  iStack_c = s4 + s12 + (uint)!bVar2;
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}



/* FUN_8c20284e @ 8c20284e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20284e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,int s4,
            uint s8,int s12,uint s16)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  int iStack_20;
  int iStack_1c;
  
  FUN_8c010794(8,auStack_28,&s12);
  FUN_8c010794(8,auStack_30,&s4);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    iStack_1c = s8 - s16;
    iStack_20 = (s4 - s12) - (uint)(s8 < s16);
  }
  else {
    iStack_1c = 0;
    iStack_20 = 0;
  }
  uVar2 = FUN_8c010794(8,s0,&iStack_20);
  return uVar2;
}



/* FUN_8c2028cc @ 8c2028cc callers=1 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2028cc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint s0,int s4,uint s8
                 ,int s12)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  undefined4 in_stack_fffffff0;
  
  FUN_8c010794(8,&stack0xffffffec,&s8);
  FUN_8c010794(8,&stack0xffffffe4,&s0);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,
                       in_stack_fffffff0);
  if (iVar1 == 1) {
    if ((s8 < s0) || (uVar2 = s4 - s12, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c2028d0 @ 8c2028d0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

uint FUN_8c2028d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,uint s4,
                 int s8,uint s12,int s16)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  undefined1 auStack_8 [4];
  
  FUN_8c010794(in_r0,auStack_8 + -in_r0,&s12);
  FUN_8c010794(8,auStack_10 + -in_r0,&s4);
  iVar1 = FUN_8c2029b4(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    if ((s12 < s4) || (uVar2 = s8 - s16, 0x7fffffff < uVar2)) {
      uVar2 = 0x7fffffff;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c202924 @ 8c202924 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c202924(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_stack_00000004;
  
  if (ar4 < 1) {
    return 0;
  }
  iVar1 = libgcc_divide_helper_0106dc(in_stack_00000004,ar4);
  if (s0 == 0) {
    return iVar1;
  }
  iVar2 = libgcc_divide_helper_0106dc(0xffffffff,ar4);
  iVar2 = iVar2 + 1;
  if (iVar2 == ar4) {
    iVar2 = 0;
  }
  iVar3 = libgcc_divide_helper_0106dc(s0,ar4);
  uVar4 = libgcc_divide_helper_0106dc(iVar3 * iVar2 + iVar1,ar4);
  return uVar4;
}



/* FUN_8c202976 @ 8c202976 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c202976(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,uint s4,
            uint s8)

{
  undefined4 uVar1;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = s8 << 1;
  if (s4 < 0x80000000) {
    iStack_c = s4 * 2 + (uint)(0x7fffffff < s8);
  }
  else {
    iStack_c = -1;
  }
  uVar1 = FUN_8c010794(8,s0,&iStack_c);
  return uVar1;
}



/* FUN_8c2029b4 @ 8c2029b4 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c2029b4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint s0,uint s4,uint s8,
            uint s12)

{
  if (s0 == s8) {
    if (s4 == s12) {
      return 0;
    }
    if (s12 < s4) {
      return 1;
    }
  }
  else if (s8 < s0) {
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
  
  puVar2 = (&FUN_8c1efd14);
  iVar1 = 0x8c47e928;
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
  
  puVar2 = (&FUN_8c1efd14);
  iVar1 = 0x8c47e928;
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
  
  iVar1 = libgcc_divide_helper_010468(ar4,6);
  iVar1 = FUN_8c1efd34(iVar1 * 6,ar5,ar6,ar7);
  return (uint)((*(byte *)(iVar1 + 2) & 0x1f) != 0);
}



/* FUN_8c202a34 @ 8c202a34 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c202a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_r1;
  
  iVar1 = libgcc_divide_helper_010468(in_r1,6);
  iVar1 = FUN_8c1efd34(iVar1 * 6,ar5,ar6,ar7);
  return (uint)((*(byte *)(iVar1 + 2) & 0x1f) != 0);
}



/* FUN_8c202a80 @ 8c202a80 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c202a80(undefined4 *ar4,int ar5,undefined4 ar6,int ar7,int s0,undefined4 s4)

{
  int iVar1;
  undefined4 *puVar2;
  int ar7_00;
  uint uVar3;
  undefined4 auStack_a30 [4];
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined4 auStack_a18 [640];
  undefined4 uStack_18;
  
  puVar2 = &DAT_8c273be0;
  auStack_a30[0] = DAT_8c26d250;
  auStack_a30[1] = DAT_8c26d254;
  auStack_a30[2] = DAT_8c26d258;
  auStack_a30[3] = DAT_8c26d25c;
  uStack_a20 = DAT_8c26d260;
  uStack_a1c = DAT_8c26d264;
  *(undefined4 **)(&DAT_8c4aa1bc + DAT_8c273be0 * 0x10) = ar4;
  *(int *)(&DAT_8c4aa1c0 + DAT_8c273be0 * 0x10) = ar5;
  *(undefined4 *)(&DAT_8c4aa1c4 + DAT_8c273be0 * 0x10) = ar6;
  _DAT_8c4aa1b8 = ar7;
  *(int *)(&DAT_8c4aa1c8 + DAT_8c273be0 * 0x10) = s0;
  DAT_8c273be0 = DAT_8c273be0 + 1 & 1;
  ar7_00 = ar7;
  _DAT_8c4a9be0 = ar7;
  if (_DAT_8c4aa1f4 != 0) {
    puVar2 = (undefined4 *)0xff;
    ar5 = ar7;
    sh4_dmac_202c60(0xff,ar7,ar6,ar7);
  }
  iVar1 = FUN_8c212148(puVar2,ar5,ar6,ar7_00);
  if (iVar1 == -0x80000000) {
    iVar1 = FUN_8c2036a0(_DAT_8c4aa200,ar4,ar6,ar7_00);
    if (iVar1 != 0) {
      return iVar1;
    }
    *ar4 = 1;
    ar4[1] = auStack_a30[_DAT_8c4a9bd0];
    ar4[2] = _DAT_8c4a9bd0;
    ar4[3] = _DAT_8c4aa1e8;
    ar4[4] = _DAT_8c4aa1ec;
    if (ar7 == 1) {
      ar4[6] = 1;
    }
    else {
      ar4[6] = 0;
    }
    if (s0 == 1) {
      for (puVar2 = auStack_a18; puVar2 < &uStack_18; puVar2 = puVar2 + 1) {
        *puVar2 = 0;
      }
      uVar3 = 0;
      if (ar4[5] != 0) {
        do {
          FUN_8c20a87c(ar4[7] + uVar3,auStack_a18,0xa00,ar7_00);
          uVar3 = uVar3 + 0xa00;
        } while (uVar3 < (uint)ar4[5]);
      }
    }
  }
  else {
    FUN_8c2120c0(0x200,ar5,ar6,ar7_00);
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
  
  auStack_1c[0] = *(uint *)(&DATA_8c26d268);
  auStack_1c[1] = *(undefined4 *)((&DATA_8c26d268) + 4);
  auStack_1c[2] = *(undefined4 *)((&DATA_8c26d268) + 8);
  auStack_1c[3] = *(undefined4 *)((&DATA_8c26d268) + 0xc);
  uStack_c = *(undefined4 *)((&DATA_8c26d268) + 0x10);
  uStack_8 = *(undefined4 *)((&DATA_8c26d268) + 0x14);
  sVar1 = 0x280;
  if ((*0x8c4a9bc8 != 1) && ((*0x8c4a9bcc & 0x10) == 0)) {
    sVar1 = 0x140;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *0x8c4a9e74 = *0x8c4a9e74 & 0xffa0ffff | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*0x8c4a9bc8 == 1) {
    uVar3 = (uint)0x1e0;
  }
  else if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) != 0x20)) {
    if ((*0x8c4a9bcc & 0x20) == 0) {
      if ((*0x8c4a9bcc & 0x62) == 0x42) {
        iVar4 = *(int *)(0x8c4aa084 + *0x8c4a9bdc * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)0xf0;
      }
    }
    else if ((*0x8c4a9bcc & 0x42) == 0x42) {
      uVar3 = *(uint *)(0x8c4aa084 + *0x8c4a9bdc * 4);
    }
    else {
      uVar3 = (uint)0x1e0;
    }
  }
  else {
    uVar3 = (uint)0xf0;
  }
  iVar4 = 0x8c4aa1a0;
  iVar2 = (int)0xff;
  *(int *)(0x8c4aa1a0 + 0x48) = (int)sVar1;
  *(uint *)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *0x8c4a9bd0;
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
  
  piVar1 = 0xffa0002c;
  *0xffa00020 = 0;
  *0xffa00024 = 0;
  *0xffa00028 = 0;
  *piVar1 = (int)0x12c0;
  *0xffa00040 = 0x8201;
  *0xa05f6884 = 0;
  *0xff000038 = 0x10;
  *0xff00003c = 0x10;
  puVar4 = 0x8c47eb9c;
  puVar3 = 0x8c47eb90;
  puVar2 = 0x8c47eb88;
  *0x8c47eb88 = 0;
  puVar2[1] = 0;
  puVar2 = 0x8c47eb94;
  uVar7 = (uint)0x100;
  *0x8c47eb94 = 0;
  puVar2[1] = 0;
  uVar6 = 0;
  *puVar3 = 0;
  *puVar4 = 7;
  *0x8c47eba0 = 1;
  iVar5 = 0x8c47e988;
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
  
  piVar6 = 0xa05f6808;
  *0xa05f6808 = 0;
  puVar1 = 0xa05f8008;
  *0xa05f8008 = 1;
  *puVar1 = 0;
  do {
  } while (*piVar6 != 0);
  *0xffa0002c = *0xffa0002c & 0xfffffffe;
  *puVar1 = 1;
  *puVar1 = 0;
  puVar2 = 0x8c47eb90;
  puVar1 = 0x8c47eb88;
  *0x8c47eb88 = 0;
  puVar1[1] = 0;
  puVar4 = 0x8c47eba0;
  puVar3 = 0x8c47eb9c;
  puVar1 = 0x8c47eb94;
  *0x8c47eb94 = 0;
  puVar1[1] = 0;
  *puVar2 = 0;
  iVar5 = 0x8c47e988;
  uVar8 = (uint)0x100;
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

int sh4_dmac_202f40(int ar4,uint ar5,uint ar6,uint ar7,undefined4 *s0)

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
  
  piVar3 = 0x8c47eb90;
  iVar2 = 0x8c47e988;
  if (ar6 == 0) {
    iVar4 = (int)0x103;
  }
  else {
    uVar9 = (ar7 & 8) >> 3;
    iVar4 = (int)0x100;
    iVar5 = uVar9 * 4;
    iVar7 = uVar9 * 0x100;
    iVar6 = *(int *)(0x8c47eb88 + iVar5);
    iVar10 = iVar6 * 0x20;
    if ((*(uint *)(iVar7 + 0x8c47e988 + iVar10 + 0x18) & 3) == 0) {
      if ((ar5 & 0x1f) != 0) {
        ar5 = ar5 + 0x1f & 0xffffffe0;
      }
      if ((ar6 & 0x1f) != 0) {
        ar6 = ar6 + 0x1f & 0xffffffe0;
      }
      piVar11 = (int *)(iVar7 + 0x8c47e988 + iVar10);
      *piVar11 = *0x8c47eb90;
      iVar8 = 0x8c47eb88;
      piVar11[1] = ar5;
      piVar11[3] = ar4;
      piVar11[5] = ar6;
      piVar11[6] = ar7 | 1;
      *s0 = piVar11;
      iVar4 = 0;
      *(uint *)(iVar5 + iVar8) = *(uint *)(iVar5 + iVar8) + 1 & 7;
      *piVar3 = *piVar3 + 1;
    }
    if (((iVar4 != 0x100) &&
        ((*(uint *)(*0x8c47eba0 * 0x100 + iVar2 + *0x8c47eb9c * 0x20 + 0x18) & 3) == 0)) &&
       ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 3) == 1)) {
      iVar8 = iVar7 + iVar2 + iVar10;
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & 0xfffffffc | 2;
      *0xffa00020 = *(undefined4 *)(iVar8 + 4);
      *0xffa00024 = (*(int *)(iVar8 + 0xc) + 0xf0000000) * 2;
      *0xffa00028 = ar6 >> 5;
      uVar1 = 0x241;
      if ((*(uint *)(iVar8 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(uint *)(iVar7 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar7 + iVar2 + iVar10;
      *0xa05f6800 = *(undefined4 *)(iVar10 + 0xc);
      *0xa05f6804 = *(undefined4 *)(iVar10 + 0x14);
      *0xa05f6808 = 1;
      iVar2 = 0x8c47eb94;
      *0x8c47eb9c = iVar6;
      *0x8c47eba0 = uVar9;
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
  
  iVar4 = 0x8c47eb94;
  iVar2 = 0x8c47e988;
  uVar1 = 0x241;
  iVar6 = *0x8c47eba0 * 0x100 + 0x8c47e988 + *0x8c47eb9c * 0x20;
  *(uint *)(iVar6 + 0x18) = *(uint *)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = 0xffa00020;
  uVar7 = 0;
  do {
    iVar6 = *(int *)(uVar7 * 4 + iVar4);
    if ((*(uint *)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(undefined4 *)(iVar9 + 4);
      *0xffa00024 = (*(int *)(iVar9 + 0xc) + 0xf0000000) * 2;
      *0xffa00028 = *(uint *)(iVar9 + 0x14) >> 5;
      if ((*(uint *)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(uint *)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *0xa05f6800 = *(undefined4 *)(iVar10 + 0xc);
      *0xa05f6804 = *(undefined4 *)(iVar10 + 0x14);
      *0xa05f6808 = 1;
      puVar3 = 0x8c47eba0;
      puVar8 = (uint *)(uVar7 * 4 + iVar4);
      *0x8c47eb9c = iVar6;
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
  
  piVar4 = 0x8c47e988;
  piVar5 = 0x8c47e988;
  do {
    if ((int *)((int)0x200 + (int)0x8c47e988) <= piVar4) {
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
    piVar4 = (int *)((int)piVar4 + (int)0x100);
    piVar5 = (int *)((int)piVar5 + (int)0x100);
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
  
  puVar1 = (&FUN_8c0146b4);
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
  undefined4 in_r0;
  undefined2 *puVar1;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_8c275408;
  while (iVar2 = DAT_8c275400, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    in_r0 = FUN_8c204e6c(iVar3,ar5,ar6,ar7,in_r0);
    iVar3 = iVar2;
  }
  while (iVar3 = DAT_8c27541c, iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    in_r0 = FUN_8c204e6c(iVar2,ar5,ar6,ar7,in_r0);
    iVar2 = iVar3;
  }
  while (iVar2 = DAT_8c275414, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    in_r0 = FUN_8c204e6c(iVar3,ar5,ar6,ar7,in_r0);
    iVar3 = iVar2;
  }
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    in_r0 = FUN_8c204e6c(iVar2,ar5,ar6,ar7,in_r0);
    iVar2 = iVar3;
  }
  ar6_00 = &DAT_8c47eba8;
  ar5_00 = &DAT_8c496ba8;
  puVar1 = (undefined2 *)&DAT_8c47eba8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0xc;
  } while (puVar1 < &DAT_8c496ba8);
  DAT_8c275400 = 0;
  DAT_8c275404 = 0;
  DAT_8c275408 = 0;
  DAT_8c27540c = 0;
  DAT_8c275410 = 0;
  DAT_8c275414 = 0;
  DAT_8c275418 = 0;
  DAT_8c27541c = 0;
  DAT_8c275420 = 0;
  DAT_8c275424 = 0;
  iVar3 = DAT_8c275428;
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    in_r0 = FUN_8c2057c0(iVar3,ar5_00,ar6_00,ar7,in_r0);
    iVar3 = iVar2;
  }
  DAT_8c275428 = 0;
  return 0;
}



/* FUN_8c203406 @ 8c203406 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203406(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int *unaff_r13;
  int iVar3;
  undefined4 in_PR;
  
  iVar1 = unaff_r13[2];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = *unaff_r13;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[7];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[5];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  ar6_00 = &DAT_8c47eba8;
  ar5_00 = &DAT_8c496ba8;
  puVar2 = (undefined2 *)&DAT_8c47eba8;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0xc;
  } while (puVar2 < &DAT_8c496ba8);
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
  iVar1 = DAT_8c275428;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    FUN_8c2057c0(iVar1,ar5_00,ar6_00,ar7,in_PR);
    iVar1 = iVar3;
  }
  DAT_8c275428 = 0;
  return 0;
}



/* FUN_8c2034c0 @ 8c2034c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2034c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (DAT_8c2753e8 == 1) {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x1000000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x1000000;
      DAT_8c2753f8 = 0x1000000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      puVar4 = &DAT_8c275400;
LAB_8c20362c:
      *(undefined4 *)(iVar1 + 8) = puVar4[2];
      puVar4[2] = iVar1;
      *(undefined4 *)(iVar1 + 4) = puVar4[3];
      puVar4[3] = iVar1;
      return 0;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0x800000;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      DAT_8c2753ec = 0x400000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x400000;
      DAT_8c2753f8 = 0x400000;
      DAT_8c2753fc = 0x400000;
      uVar2 = 0xe4;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      *(int *)(iVar1 + 8) = DAT_8c275408;
      DAT_8c275408 = iVar1;
      *(int *)(iVar1 + 4) = DAT_8c27540c;
      DAT_8c27540c = iVar1;
      iVar1 = FUN_8c204e40(iVar1,&DAT_8c275400,uVar5,ar7);
      if (iVar1 != 0) {
        puVar4 = &DAT_8c275414;
        *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f8;
        *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753fc;
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}



/* s_HARDWARE_2034d0 @ 8c2034cc callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_HARDWARE_2034d0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (*in_r3 == 1) {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x1000000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x1000000;
      DAT_8c2753f8 = 0x1000000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      puVar4 = &DAT_8c275400;
LAB_8c20362c:
      *(undefined4 *)(iVar1 + 8) = puVar4[2];
      puVar4[2] = iVar1;
      *(undefined4 *)(iVar1 + 4) = puVar4[3];
      puVar4[3] = iVar1;
      return 0;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0x800000;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      DAT_8c2753ec = 0x400000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x400000;
      DAT_8c2753f8 = 0x400000;
      DAT_8c2753fc = 0x400000;
      uVar2 = 0xe4;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      *(int *)(iVar1 + 8) = DAT_8c275408;
      DAT_8c275408 = iVar1;
      *(int *)(iVar1 + 4) = DAT_8c27540c;
      DAT_8c27540c = iVar1;
      iVar1 = FUN_8c204e40(iVar1,&DAT_8c275400,uVar5,ar7);
      if (iVar1 != 0) {
        puVar4 = &DAT_8c275414;
        *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f8;
        *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753fc;
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}



/* FUN_8c2036a0 @ 8c2036a0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2036a0(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  if (DAT_8c275430 == ar4) {
    *(uint *)(ar5 + 0x14) = ar4;
    uVar3 = FUN_8c2059be(DAT_8c27542c + 4,ar5,ar6,ar7);
    *(undefined4 *)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    DAT_8c275430 = 0;
    DAT_8c27542c = 0;
  }
  else {
    ar5_00 = ar4 << 1;
    iVar4 = ar5;
    if ((_DAT_8c4a9bb0 & 4) == 0) {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2(0,ar5_00,ar5,8);
    }
    else {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2((uint)(DAT_8c275410 < DAT_8c275424),ar5_00,ar5,8);
    }
    if (iVar2 == 0) {
      DAT_8c27542c = *(int *)(ar5 + 0x1c);
      DAT_8c275430 = ar4;
      *(uint *)(ar5 + 0x14) = ar4;
      uVar3 = FUN_8c2059be(*(undefined4 *)(ar5 + 0x1c),ar5_00,iVar4,uVar3);
      *(undefined4 *)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}



/* FUN_8c2036ac @ 8c2036ac callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c2036ac(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  int unaff_r13;
  char in_T;
  
  if (in_T == '\0') {
    uVar1 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ain0 & 0x1f;
  }
  if (uVar1 != 0) {
    unaff_r13 = unaff_r13 + (0x20 - uVar1);
  }
  if (DAT_8c275430 == unaff_r13) {
    *(int *)(ar5 + 0x14) = unaff_r13;
    uVar3 = FUN_8c2059be(DAT_8c27542c + 4,ar5,ar6,ar7);
    *(undefined4 *)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    DAT_8c275430 = 0;
    DAT_8c27542c = 0;
  }
  else {
    ar5_00 = unaff_r13 << 1;
    iVar4 = ar5;
    if ((_DAT_8c4a9bb0 & 4) == 0) {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2(0,ar5_00,ar5,8);
    }
    else {
      uVar3 = 8;
      iVar2 = FUN_8c2046d2((uint)(DAT_8c275410 < DAT_8c275424),ar5_00,ar5,8);
    }
    if (iVar2 == 0) {
      DAT_8c27542c = *(int *)(ar5 + 0x1c);
      DAT_8c275430 = unaff_r13;
      *(int *)(ar5 + 0x14) = unaff_r13;
      uVar3 = FUN_8c2059be(*(undefined4 *)(ar5 + 0x1c),ar5_00,iVar4,uVar3);
      *(undefined4 *)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}



/* FUN_8c20374e @ 8c20374e callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c20374e(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  int iVar5;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  ar5_00 = ar4 << 1;
  iVar5 = ar5;
  if ((_DAT_8c4a9bb0 & 4) == 0) {
    uVar4 = 8;
    iVar2 = FUN_8c2046d2(0,ar5_00,ar5,8);
  }
  else {
    uVar4 = 8;
    iVar2 = FUN_8c2046d2((uint)(DAT_8c275410 <= DAT_8c275424),ar5_00,ar5,8);
  }
  if (iVar2 == 0) {
    ar4_00 = *(int *)(ar5 + 0x1c);
    *(uint *)(ar5 + 0x14) = ar4;
    uVar3 = FUN_8c2059be(ar4_00,ar5_00,iVar5,uVar4);
    *(undefined4 *)(ar5 + 0x1c) = uVar3;
    *(uint *)(ar6 + 0x14) = ar4;
    uVar4 = FUN_8c2059be(ar4_00 + 4,ar5_00,iVar5,uVar4);
    *(undefined4 *)(ar6 + 0x1c) = uVar4;
  }
  return iVar2;
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
  int ar5_00;
  int *ar6_00;
  int ar7_00;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  ar7_00 = (int)0x2000;
  ar5_00 = ar4 << 1;
  ar6_00 = ar5;
  iVar3 = FUN_8c2046d2(0,ar5_00,ar5,ar7_00);
  if (iVar3 == 0) {
    ar4_00 = *ar5;
    iVar4 = FUN_8c2059be(ar4_00,ar5_00,ar6_00,ar7_00);
    puVar1 = (&FUN_8c2059be);
    *ar5 = iVar4;
    uVar5 = (*(code *)puVar1)(ar4_00 + 4,ar5_00,ar6_00,ar7_00);
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
  
  if ((*0x8c4a9bb0 & 4) == 0) {
    uVar1 = FUN_8c2048aa(1,ar4,ar5,ar7);
  }
  else {
    FUN_8c204006(&iStack_14,aiStack_10,ar6,ar7);
    uVar1 = FUN_8c2048aa((uint)(iStack_14 < aiStack_10[0]),ar4,ar5,ar7);
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
      iVar1 = DAT_8c2753f4 + iVar1;
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
  
  uVar1 = FUN_8c2043d4((uint)(DAT_8c2753f8 <= *(int *)(ar5 + 0x1c)),*(int *)(ar5 + 0x1c),ar4,ar5);
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
  puVar2 = (ushort *)FUN_8c204c00(0,ar4,ar5,ar7);
  if (puVar2 == (ushort *)0x0) {
    iVar4 = ar5;
    puVar2 = (ushort *)FUN_8c204c00(1,ar4,ar5,ar7);
  }
  if (puVar2 == (ushort *)0x0) {
    iVar4 = FUN_8c2041e2(ar4,ar5,iVar4,ar7);
    if (iVar4 == -1) {
      iVar3 = 3;
    }
    else {
      iVar3 = FUN_8c2043d4(0,iVar4,ar4,ar5);
      if (iVar3 == 0) {
        iVar3 = FUN_8c2043d4(1,DAT_8c2753f4 + iVar4,ar4,auStack_3c);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c203a92(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint ar5_00;
  uint uVar5;
  uint unaff_r12;
  ushort *ar5_01;
  int in_stack_ffffffd0;
  int iStack_2c;
  uint uStack_28;
  uint uStack_24;
  undefined4 uStack_1c;
  uint uStack_18;
  
  ar5_00 = ar4;
  FUN_8c205640(&uStack_28,ar4,ar6,ar7);
  ar5_01 = (ushort *)0x0;
  if (DAT_8c275428 != (ushort *)0x0) {
    ar7 = 0xf000;
    puVar4 = DAT_8c275428;
    do {
      if (((*puVar4 & 0xf000) == uStack_28) &&
         (ar5_00 = 0, puVar3 = puVar4, ar6 = uStack_18, uStack_18 != 0)) {
        do {
          puVar4 = puVar3;
          uVar5 = ar5_00;
          if (*(int *)(puVar3 + ar5_00 * 2 + 6) == 0) {
            puVar4 = (ushort *)0x0;
            uVar5 = uStack_18;
            unaff_r12 = ar5_00;
            ar5_01 = puVar3;
          }
          ar5_00 = uVar5 + 1;
          puVar3 = puVar4;
        } while (ar5_00 < uStack_18);
      }
      if (ar5_01 == (ushort *)0x0) {
        puVar4 = *(ushort **)(puVar4 + 2);
      }
    } while (puVar4 != (ushort *)0x0);
  }
  if (ar5_01 == (ushort *)0x0) {
    ar5_01 = (ushort *)FUN_8c205768(0,ar5_00,ar6,ar7);
    if (ar5_01 != (ushort *)0x0) {
      puVar4 = ar5_01 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < ar5_01 + 0x26);
      unaff_r12 = 0;
      FUN_8c2057e6(&DAT_8c275428,ar5_01,ar6,ar7,in_stack_ffffffd0);
      *ar5_01 = *ar5_01 | (ushort)uStack_28;
      puVar4 = ar5_01;
      if ((_DAT_8c4a9bb0 & 4) == 0) {
        iVar1 = FUN_8c2049ec(1,uStack_1c,ar5_01,ar7);
      }
      else {
        FUN_8c204006(&stack0xffffffd0,&iStack_2c,ar6,ar7);
        iVar1 = FUN_8c2049ec((uint)(in_stack_ffffffd0 < iStack_2c),uStack_1c,ar5_01,ar7);
      }
      if (iVar1 == 0) goto LAB_8c203baa;
      FUN_8c2057c0(ar5_01,uStack_1c,puVar4,ar7,in_stack_ffffffd0);
    }
    uVar2 = 3;
  }
  else {
LAB_8c203baa:
    *(uint *)(ar4 + 0x1c) = unaff_r12 * (uStack_24 >> 2) * 4 + *(int *)(ar5_01 + 4);
    *(uint *)(ar5_01 + unaff_r12 * 2 + 6) = ar4;
    *ar5_01 = *ar5_01 | 2;
    uVar2 = 0;
  }
  return uVar2;
}



/* FUN_8c203bda @ 8c203bda callers=3 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203bda(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *ar5_00;
  undefined4 uVar2;
  ushort *ar5_01;
  short asStack_14 [2];
  short asStack_10 [4];
  
  ar5_00 = (ushort *)FUN_8c204cc0(ar4,asStack_14,ar6,ar7);
  if (ar5_00 == (ushort *)0x0) {
    uVar2 = 7;
  }
  else if ((*ar5_00 & 2) == 0) {
    uVar2 = FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
  }
  else {
    iVar1 = DAT_8c2753f4;
    if (asStack_14[0] != 0) {
      iVar1 = -DAT_8c2753f4;
    }
    ar5_01 = (ushort *)FUN_8c204cc0(iVar1 + ar4,asStack_10,ar6,ar7);
    if (ar5_01 == (ushort *)0x0) {
      FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
      uVar2 = 0;
    }
    else if ((*ar5_01 & 4) == 0) {
      FUN_8c204cfc((int)asStack_14[0],ar5_00,ar6,ar7);
      uVar2 = FUN_8c204cfc((int)asStack_10[0],ar5_01,ar6,ar7);
    }
    else {
      *ar5_00 = *ar5_00 & 0xfffb;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* FUN_8c203ca0 @ 8c203ca0 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203ca0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  
  a5 = ar5;
  uVar1 = FUN_8c2059e0(ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c203bda(uVar1,a5,ar6,ar7);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = FUN_8c2059e0(ar5,a5,ar6,ar7);
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
  ushort *ar5_00;
  uint in_stack_ffffffd4;
  uint uStack_28;
  uint uStack_1c;
  
  FUN_8c205640(&stack0xffffffd4,ar4,ar6,ar7);
  uVar7 = 0;
  ar5_00 = (ushort *)0x0;
  puVar4 = DAT_8c275428;
  while (puVar4 != (ushort *)0x0) {
    if (((*puVar4 & 0xf000) == in_stack_ffffffd4) && (uVar5 = 0, puVar3 = puVar4, uStack_1c != 0)) {
      do {
        puVar4 = puVar3;
        uVar6 = uVar5;
        if ((*(int *)(puVar3 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * (uStack_28 >> 2) * 4 + *(int *)(puVar3 + 4) == *(int *)(ar4 + 0x1c))) {
          puVar4 = (ushort *)0x0;
          uVar6 = uStack_1c;
          unaff_r11 = uVar5;
          ar5_00 = puVar3;
        }
        uVar5 = uVar6 + 1;
        puVar3 = puVar4;
      } while (uVar5 < uStack_1c);
    }
    if (ar5_00 == (ushort *)0x0) {
      puVar4 = *(ushort **)(puVar4 + 2);
    }
  }
  if (ar5_00 == (ushort *)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
    if (uStack_1c != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(int *)(ar5_00 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < uStack_1c);
    }
    if (!bVar1) {
      iVar2 = FUN_8c203bda(*(undefined4 *)(ar5_00 + 4),1,0,uStack_1c);
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = ar5_00;
      FUN_8c2057f8(&DAT_8c275428,ar5_00,uVar7,uStack_1c);
      FUN_8c2057c0(ar5_00,puVar4,uVar7,uStack_1c,in_stack_ffffffd4);
    }
    uVar7 = 0;
  }
  return uVar7;
}



/* FUN_8c203de0 @ 8c203de0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c203de0(int *ar4,int *ar5,int *ar6,int *ar7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
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
  for (iVar4 = DAT_8c275408; puVar3 = DAT_8c275400, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    if (iStack_34 < *(int *)(iVar4 + 0x10)) {
      iStack_34 = *(int *)(iVar4 + 0x10);
    }
    iStack_24 = iStack_24 + *(int *)(iVar4 + 0x10);
  }
  for (; iVar4 = DAT_8c27541c, puVar3 != (ushort *)0x0; puVar3 = *(ushort **)(puVar3 + 4)) {
    if ((*puVar3 & 4) == 0) {
      if (iStack_34 < *(int *)(puVar3 + 8)) {
        iStack_34 = *(int *)(puVar3 + 8);
      }
      iStack_28 = iStack_28 + *(int *)(puVar3 + 8);
    }
  }
  for (; puVar3 = DAT_8c275414, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    if (iStack_30 < *(int *)(iVar4 + 0x10)) {
      iStack_30 = *(int *)(iVar4 + 0x10);
    }
    iStack_20 = iStack_20 + *(int *)(iVar4 + 0x10);
  }
  for (; puVar1 = DAT_8c275428, puVar3 != (ushort *)0x0; puVar3 = *(ushort **)(puVar3 + 4)) {
    if ((*puVar3 & 4) == 0) {
      if (iStack_30 < *(int *)(puVar3 + 8)) {
        iStack_30 = *(int *)(puVar3 + 8);
      }
      iStack_1c = iStack_1c + *(int *)(puVar3 + 8);
    }
  }
  do {
    if (puVar1 == (ushort *)0x0) {
      *ar4 = iStack_24 + iStack_28;
      *ar5 = iStack_20 + iStack_1c;
      *ar6 = iStack_2c;
      if (iStack_34 < iStack_30) {
        iStack_34 = iStack_30;
      }
      *ar7 = iStack_34;
      return 0;
    }
    uVar2 = *puVar1 & 0xf000;
    if (uVar2 == 0x1000) {
      iVar4 = 0x90;
LAB_8c203f32:
      iVar5 = 0x10;
    }
    else {
      if (uVar2 == 0x2000) {
        iVar4 = 0xa0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x3000) {
        iVar4 = 0xc0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x4000) {
        iVar4 = 0xe0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x5000) {
        iVar4 = 0x200;
        iVar5 = 8;
      }
      else if (uVar2 == 0x6000) {
        iVar4 = 0x360;
        iVar5 = 4;
      }
      else if (uVar2 == 0x7000) {
        iVar4 = 0x800;
        iVar5 = 2;
      }
      else if (uVar2 == 0x8000) {
        iVar4 = 0xd60;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
      }
    }
    iStack_38 = 0;
    puVar3 = puVar1 + 6;
    if (iVar5 != 0) {
      do {
        if (*(int *)puVar3 == 0) {
          iStack_2c = iStack_2c + iVar4;
        }
        iStack_38 = iStack_38 + 1;
        puVar3 = puVar3 + 2;
      } while (iStack_38 < iVar5);
    }
    puVar1 = *(ushort **)(puVar1 + 2);
  } while( true );
}



/* FUN_8c204006 @ 8c204006 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204006(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  for (iVar2 = DAT_8c275408; puVar1 = DAT_8c275400, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (iVar3 < *(int *)(iVar2 + 0x10)) {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
  }
  for (; iVar2 = DAT_8c27541c, puVar1 != (ushort *)0x0; puVar1 = *(ushort **)(puVar1 + 4)) {
    if (((*puVar1 & 4) == 0) && (iVar3 < *(int *)(puVar1 + 8))) {
      iVar3 = *(int *)(puVar1 + 8);
    }
  }
  for (; puVar1 = DAT_8c275414, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (iVar4 < *(int *)(iVar2 + 0x10)) {
      iVar4 = *(int *)(iVar2 + 0x10);
    }
  }
  for (; puVar1 != (ushort *)0x0; puVar1 = *(ushort **)(puVar1 + 4)) {
    if (((*puVar1 & 4) == 0) && (iVar4 < *(int *)(puVar1 + 8))) {
      iVar4 = *(int *)(puVar1 + 8);
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
  undefined4 in_r0;
  undefined4 uVar1;
  
  uVar1 = FUN_8c205020(&DAT_8c275400,&DAT_8c275404,ar6,ar7,in_r0);
  uVar1 = FUN_8c205020(&DAT_8c275414,&DAT_8c275418,ar6,ar7,uVar1);
  uVar1 = FUN_8c205020(&DAT_8c275408,&DAT_8c27540c,ar6,ar7,uVar1);
  FUN_8c205020(&DAT_8c27541c,&DAT_8c275420,ar6,ar7,uVar1);
  return 0;
}



/* FUN_8c204092 @ 8c204092 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c204092(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r14;
  undefined4 in_PR;
  
  FUN_8c205020(unaff_r14,unaff_r14 + 4,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c275414,&DAT_8c275418,ar6,ar7,in_PR);
  FUN_8c205020(unaff_r14 + 8,unaff_r14 + 0xc,ar6,ar7,in_PR);
  FUN_8c205020(&DAT_8c27541c,&DAT_8c275420,ar6,ar7,in_PR);
  return 0;
}



/* FUN_8c2040ce @ 8c2040ce callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2040ce(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c2050cc(&DAT_8c275408,&DAT_8c27540c,&DAT_8c275400,&DAT_8c275404);
  if (iVar1 == 0) {
    iVar1 = FUN_8c2050cc(&DAT_8c27541c,&DAT_8c275420,&DAT_8c275414,&DAT_8c275418);
  }
  return iVar1;
}



/* FUN_8c2040d2 @ 8c2040d2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2040d2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = FUN_8c2050cc(unaff_r14 + 8,unaff_r14 + 0xc,unaff_r14,unaff_r14 + 4);
  if (iVar1 == 0) {
    iVar1 = FUN_8c2050cc(&DAT_8c27541c,&DAT_8c275420,&DAT_8c275414,&DAT_8c275418);
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
  uVar1 = (int)0x800 + *(int *)(ar4 + 0xc) & (int)(int)0xfffff800;
  if ((uint)(int)0x2b0 < ar5) {
    iVar3 = (int)(int)0xfffffd50;
    if (uVar1 - *(int *)(ar4 + 0xc) < (uint)(int)0x2b0) {
      uVar1 = uVar1 + (int)0x800;
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
  int a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iStack_24 = 0;
  iVar4 = 0;
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  a4 = DAT_8c275408;
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  do {
    if (a4 == 0) {
      if ((iStack_24 != 2) || (iVar4 == 0)) {
        iVar4 = -1;
      }
      return iVar4;
    }
    if ((int)ar4 <= *(int *)(a4 + 0x10)) {
      uVar1 = *(uint *)(ar5 + 0x18);
      iVar5 = (*(int *)(a4 + 0xc) + *(int *)(a4 + 0x10)) - ar4;
      if ((((uVar1 & 1) == 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
        iStack_24 = 1;
        for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
          iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
          if (iVar3 == 0) {
            return iVar2;
          }
        }
      }
      else {
        iVar2 = FUN_8c204140(a4,ar4,ar5,ar7);
        if (-1 < iVar2) {
          for (; iVar2 <= iVar5; iVar2 = iVar2 + 0x800) {
            iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
            if (iVar3 == 0) {
              return iVar2;
            }
          }
        }
        iStack_24 = 2;
        if (iVar4 == 0) {
          for (iVar2 = *(int *)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
            iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar2,ar4,ar7);
            if (iVar3 == 0) {
              iVar4 = iVar2;
              iVar2 = iVar5;
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
  
  iVar3 = (&DAT_8c275408)[(short)ar4 * 5];
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

undefined4 FUN_8c2043d4(undefined4 ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  undefined4 in_stack_ffffffd0;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = *(ushort **)(puVar3 + 4);
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)0x0;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(ar6_00 + 8) == ar6) {
    FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,0,in_stack_ffffffd0);
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,a7,in_stack_ffffffd0);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
    *(int *)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x80;
    }
    else {
      *ar6_00 = *ar6_00 | 0x100;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(ar6_00 + 8);
  }
  else {
    if (*(int *)(ar6_00 + 6) != ar5) {
      if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,
                     &DAT_8c275400 + iVar2 * 5);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        ain0 = FUN_8c204e40(puVar3,iVar4,iVar5,a7);
        if (ain0 == 0) {
          FUN_8c204e6c(ar6_01,iVar4,iVar5,a7,0);
          return 3;
        }
        iVar5 = *(int *)(ar6_00 + 8);
        iVar4 = *(int *)(ar6_00 + 6);
        *(int *)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,ain0);
        *(uint *)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        FUN_8c204eb6(&DAT_8c27540c + iVar2 * 5,ain0,(&DAT_8c27540c)[iVar2 * 5],a7,ain0);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
    if (puVar3 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
    *(uint *)(puVar3 + 8) = ar6;
    *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
    *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar6;
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar3,a7,
                 &DAT_8c275400 + iVar2 * 5);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(puVar3 + 6);
    *(int *)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    else {
      *puVar3 = *puVar3 | 0x100;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(puVar3 + 8);
  }
  (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar5;
  return 0;
}



/* FUN_8c2046d2 @ 8c2046d2 callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2046d2(undefined4 ar4,uint ar5,undefined4 *ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  if (uVar2 != 0) {
    ar5 = ar5 + (0x20 - uVar2);
  }
  iVar7 = (int)(short)ar4;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar3, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar3 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar3 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204880:
    uVar4 = 3;
  }
  else {
    sVar6 = (short)ar7;
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *ar6_00 = 1;
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 0x2000;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar5 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar3 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar3 == (ushort *)0x0) goto LAB_8c204880;
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar3 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = ar5 + *(int *)(ar6_00 + 6);
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar3,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 0x2000;
      }
      *puVar3 = *puVar3 | 4;
      iVar5 = *(int *)(puVar3 + 8);
    }
    uVar4 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar5;
  }
  return uVar4;
}



/* FUN_8c2048aa @ 8c2048aa callers=0 callees=3 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2048aa(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar3 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar3 = ar5 & 0x1f;
  }
  if (uVar3 != 0) {
    ar5 = ar5 + (0x20 - uVar3);
  }
  iVar7 = (int)(short)ar4;
  puVar4 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar4, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar4 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar4 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204964:
    uVar5 = 3;
  }
  else {
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
      *(int *)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        uVar2 = *ar6_00 | 0x20;
      }
      else {
        uVar2 = *ar6_00 | 0x40;
      }
      *ar6_00 = uVar2;
      *ar6_00 = *ar6_00 | 4;
      iVar6 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar4 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar4 == (ushort *)0x0) goto LAB_8c204964;
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar4 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar5;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar4,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(puVar4 + 6);
      *(int *)(puVar4 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar2 = *puVar4 | 0x20;
      }
      else {
        uVar2 = *puVar4 | 0x40;
      }
      *puVar4 = uVar2;
      *puVar4 = *puVar4 | 4;
      iVar6 = *(int *)(puVar4 + 8);
    }
    uVar5 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar6;
  }
  return uVar5;
}



/* FUN_8c2049ec @ 8c2049ec callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2049ec(undefined4 ar4,uint ar5,int ar6,int ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  uint a6;
  ushort *ar6_00;
  int in_stack_ffffffd4;
  
  iVar7 = 0;
  if ((int)ar5 < 0) {
    uVar1 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar5 & 0x1f;
  }
  puVar8 = (ushort *)0x0;
  a6 = ar5;
  if (uVar1 != 0) {
    a6 = ar5 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  if ((ushort *)(&DAT_8c275408)[iVar2 * 5] != (ushort *)0x0) {
    ar7 = 0x800;
    puVar5 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
    do {
      if (*(int *)(puVar5 + 8) < (int)a6) {
        puVar6 = *(ushort **)(puVar5 + 4);
      }
      else {
        if (puVar8 == (ushort *)0x0) {
          puVar8 = puVar5;
        }
        iVar3 = libgcc_divide_helper_010614(*(undefined4 *)(puVar5 + 6),ar7);
        if (iVar3 == 0) {
          ar5 = *(uint *)(puVar5 + 6);
LAB_8c204a94:
          iVar7 = 1;
        }
        else {
          ar5 = *(int *)(puVar5 + 6) + ar7 & 0xfffff800;
          in_stack_ffffffd4 = *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8);
          if ((in_stack_ffffffd4 <= (int)ar5) || ((int)a6 <= (int)(ar5 - *(int *)(puVar5 + 6))))
          goto LAB_8c204a94;
          if ((int)(in_stack_ffffffd4 - ar5) < (int)a6) {
            puVar6 = *(ushort **)(puVar5 + 4);
            goto LAB_8c204ac2;
          }
          iVar7 = 2;
        }
        puVar6 = (ushort *)0x0;
        ar6_00 = puVar5;
      }
LAB_8c204ac2:
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)0x0);
  }
  if ((iVar7 == 0) && (puVar8 != (ushort *)0x0)) {
    iVar7 = 1;
    ar6_00 = puVar8;
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204b6a:
    uVar4 = 3;
  }
  else {
    if (iVar7 == 2) {
      uVar4 = FUN_8c2052f2((int)(short)ar4,ar5,a6,ar6);
      return uVar4;
    }
    if (*(uint *)(ar6_00 + 8) == a6) {
      FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,ar7,in_stack_ffffffd4)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,ar7,in_stack_ffffffd4)
      ;
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(ar6_00 + 6);
      *(int *)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        *ar6_00 = *ar6_00 | 0x200;
      }
      else {
        *ar6_00 = *ar6_00 | 0x400;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar7 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar8 = (ushort *)FUN_8c204e40(0,ar5,iVar7,ar7);
      if (puVar8 == (ushort *)0x0) goto LAB_8c204b6a;
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar8 + 8) = a6;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a6;
      *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a6;
      FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar8,ar7,
                   &DAT_8c275400 + iVar2 * 5);
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(puVar8 + 6);
      *(int *)(puVar8 + 10) = ar6;
      if ((short)ar4 == 0) {
        *puVar8 = *puVar8 | 0x200;
      }
      else {
        *puVar8 = *puVar8 | 0x400;
      }
      *puVar8 = *puVar8 | 4;
      iVar7 = *(int *)(puVar8 + 8);
    }
    uVar4 = 0;
    (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar7;
  }
  return uVar4;
}



/* FUN_8c204c00 @ 8c204c00 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c204c00(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  puVar3 = (ushort *)0x0;
  iStack_24 = ar5;
  iStack_20 = ar6;
  iVar4 = DAT_8c2753ec;
  for (puVar5 = (ushort *)(&DAT_8c275400)[(short)ar4 * 5]; puVar5 != (ushort *)0x0;
      puVar5 = *(ushort **)(puVar5 + 4)) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x180) != 0)) &&
       ((iStack_24 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(int *)(puVar5 + 6) + DAT_8c2753f4;
      }
      else {
        iVar2 = *(int *)(puVar5 + 6) - DAT_8c2753f4;
      }
      iVar2 = FUN_8c204cc0(iVar2,auStack_28,ar6,ar7);
      if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0x14) + 0x18) == *(int *)(iStack_20 + 0x18))) {
        iVar4 = *(int *)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}



/* FUN_8c204cc0 @ 8c204cc0 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c204cc0(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (ar4 < DAT_8c2753f8) {
    *ar5 = 0;
  }
  else {
    *ar5 = 1;
  }
  iVar3 = (&DAT_8c275400)[*ar5 * 5];
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
  ushort *puVar2;
  undefined4 *ar5_00;
  undefined4 *puVar3;
  ushort *ar6_00;
  int iVar4;
  ushort *puVar5;
  undefined4 *in_stack_ffffffe0;
  
  iVar4 = (int)(short)ar4;
  *ar5 = *ar5 & 0xfffb;
  ar5_00 = &DAT_8c275404 + iVar4 * 5;
  ar6_00 = ar5;
  FUN_8c204ed2(&DAT_8c275400 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
  (&DAT_8c275410)[iVar4 * 5] = (&DAT_8c275410)[iVar4 * 5] + *(int *)(ar5 + 8);
  puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
  puVar2 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    ar6_00 = *(ushort **)(ar5 + 6);
    ar5_00 = *(undefined4 **)(puVar1 + 6);
    if ((ar5_00 == (undefined4 *)(*(int *)(ar5 + 8) + (int)ar6_00)) ||
       (ar6_00 == (ushort *)(*(int *)(puVar1 + 8) + (int)ar5_00))) {
      puVar5 = (ushort *)0x0;
      puVar2 = puVar1;
    }
    else {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
  }
  iVar4 = (int)(short)ar4;
  puVar3 = &DAT_8c275400 + iVar4 * 5;
  puVar5 = ar5;
  if (puVar2 != (ushort *)0x0) {
    do {
      ar5 = puVar2;
      if (*(int *)(ar5 + 6) == *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8)) {
        *(undefined4 *)(ar5 + 6) = *(undefined4 *)(puVar5 + 6);
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      else {
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      FUN_8c204e6c(puVar5,ar5_00,ar6_00,ar7,in_stack_ffffffe0);
      ar5_00 = &DAT_8c27540c + iVar4 * 5;
      ar6_00 = ar5;
      FUN_8c204ed2(&DAT_8c275408 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
      puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
      puVar2 = (ushort *)0x0;
      while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
        ar5_00 = *(undefined4 **)(ar5 + 6);
        ar6_00 = *(ushort **)(puVar1 + 6);
        if ((ar6_00 == (ushort *)(*(int *)(ar5 + 8) + (int)ar5_00)) ||
           (ar5_00 == (undefined4 *)(*(int *)(puVar1 + 8) + (int)ar6_00))) {
          puVar5 = (ushort *)0x0;
          puVar2 = puVar1;
        }
        else {
          puVar5 = *(ushort **)(puVar1 + 4);
        }
      }
      puVar5 = ar5;
    } while (puVar2 != (ushort *)0x0);
    puVar3 = &DAT_8c275400 + (short)ar4 * 5;
    in_stack_ffffffe0 = puVar3;
  }
  FUN_8c204e92(puVar3 + 2,puVar3 + 3,ar5,ar7,in_stack_ffffffe0);
  return 0;
}



/* FUN_8c204e40 @ 8c204e40 callers=6 callees=0 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c204e40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = 0x8c47eba8;
  puVar2 = 0x8c47eba8;
  while( true ) {
    if ((ushort *)(0x18000 + (int)0x8c47eba8) <= puVar1) {
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
  
  uVar1 = 0xfffe;
  puVar2 = (ushort *)((int)0x8c47eba8 + 0x18000);
  puVar3 = 0x8c47eba8;
  puVar4 = 0x8c47eba8;
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
  
  puVar1 = (&FUN_8c20732e);
  iVar2 = (int)(int)0xfffff7fc;
  uVar6 = (uint)0x800;
  if (uVar6 < ar6) {
    *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
    do {
      iVar5 = ar5;
      a6 = uVar6;
      FUN_8c20a9c2(*(undefined4 *)((int)&iStack_20 + iVar2),ar5,uVar6,ar7);
      a4 = *(int *)((int)&iStack_20 + iVar2);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        (*(code *)puVar1)(a4,iVar5,a6,ar7);
        a4 = a4 + 0x20;
      }
      FUN_8c20a8e0(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),uVar6,ar7);
      ar6 = ar6 - uVar6;
      ar5 = ar5 + uVar6;
      ar4 = ar4 + uVar6;
    } while (uVar6 < ar6);
  }
  *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
  uVar6 = ar6;
  FUN_8c20a9c2(&stack0xffffffe4 + iVar2,ar5,ar6,ar7);
  iVar4 = *(int *)((int)&iStack_20 + iVar2);
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    (*(code *)puVar1)(iVar4,ar5,uVar6,ar7);
    iVar4 = iVar4 + 0x20;
  }
  uVar3 = FUN_8c20a8e0(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),ar6,ar7);
  return uVar3;
}



/* FUN_8c205020 @ 8c205020 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205020(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  undefined4 in_stack_ffffffdc;
  int iVar5;
  
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
        FUN_8c204ed2(ar4,ar5,iVar5,ar7,in_stack_ffffffdc);
        ain0 = FUN_8c204eb6(ar5,iVar5,*ar5,ar7,in_stack_ffffffdc);
      }
      iVar4 = iVar4 + -1;
      iVar5 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar1 = *ar4;
          iVar2 = 0;
          ar6_00 = iVar1;
          if (0 < iVar3) {
            do {
              ar6_00 = *(int *)(ar6_00 + 8);
              iVar2 = iVar2 + 1;
              if (*(int *)(iVar1 + 0xc) < *(int *)(ar6_00 + 0xc)) {
                iVar1 = ar6_00;
              }
            } while (iVar2 < iVar3);
          }
          if (ar6_00 != iVar1) {
            FUN_8c204ed2(ar4,ar5,iVar1,ar7,iVar5);
            ain0 = FUN_8c204eb6(ar5,iVar1,ar6_00,ar7,iVar5);
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  return ain0;
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
        (((0x80 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((0x100 & uVar1) != 0))))))))
    {
      iVar7 = 1;
    }
    uVar1 = *puVar9;
    uVar5 = (uint)uVar1;
    if (((((int)0x200 & uVar5) != 0) || (((int)0x400 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)0x800 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)0x1000 & uVar5) != 0)))))))) {
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
  int *unaff_r8;
  int unaff_r9;
  int iVar5;
  undefined4 *ar6_00;
  int iVar6;
  ushort *puVar7;
  undefined4 in_PR;
  
  iVar6 = *unaff_r8;
  puVar7 = (ushort *)*ar6;
  if ((iVar6 == 0) || (puVar7 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar7;
    iVar5 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x80) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x100) != 0)))))))) {
      iVar5 = 1;
    }
    uVar1 = *puVar7;
    if ((((uVar1 & 0x200) != 0) || ((uVar1 & 0x400) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x800) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x1000) != 0)))))))) {
      iVar5 = 2;
    }
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        return 0;
      }
      if (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6)) {
        do {
          iVar6 = *(int *)(iVar6 + 8);
          if (iVar6 == 0) {
            return 0;
          }
        } while (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6));
      }
      if (iVar6 == 0) {
        return 0;
      }
      if (puVar7 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc)) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == *(int *)(puVar7 + 6)) {
        uVar2 = *(uint *)(iVar6 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40((uint)uVar1,ar5,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
          *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar6 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iVar4;
          if (*(int *)(iVar6 + 4) == 0) {
            FUN_8c204e92(unaff_r8,unaff_r9,iVar3,ar7,in_PR);
          }
          else {
            FUN_8c204eb6(unaff_r9,iVar3,*(int *)(iVar6 + 4),ar7,in_PR);
          }
        }
        ar5 = *(int *)(puVar7 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar6 + 0xc),ar5,*(undefined4 *)(puVar7 + 8),ar7);
        iVar4 = *(int *)(puVar7 + 6);
        iVar3 = *(int *)(iVar6 + 0xc);
        *(int *)(puVar7 + 6) = iVar3;
        ar6 = (undefined4 *)(iVar4 - iVar3);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(puVar7 + 8);
        if (iVar5 == 1) {
          *(undefined4 *)(*(int *)(puVar7 + 10) + 0x1c) = *(undefined4 *)(puVar7 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          ar5 = 0;
          *(undefined4 *)(*(int *)(puVar7 + 10) + 8) = *(undefined4 *)(puVar7 + 6);
          uVar2 = 0;
          do {
            if (*(int *)(*(int *)(puVar7 + 10) + 0xc + uVar2) != 0) {
              iVar5 = *(int *)(*(int *)(puVar7 + 10) + 0xc + ar5);
              *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + (int)ar6 * -4;
            }
            uVar2 = uVar2 + 4;
            ar5 = ar5 + 4;
          } while (uVar2 < 0x40);
        }
        ar6_00 = *(undefined4 **)(iVar6 + 8);
        if ((ar6_00 != (undefined4 *)0x0) &&
           (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == ar6_00[3])) {
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + ar6_00[4];
          ar5 = unaff_r9;
          ar6 = ar6_00;
          FUN_8c204ed2(unaff_r8,unaff_r9,ar6_00,ar7,in_PR);
          FUN_8c204e6c(ar6_00,ar5,ar6,ar7,in_PR);
        }
      }
      if ((puVar7 != (ushort *)0x0) && (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc))) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) break;
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    if (puVar7 == (ushort *)0x0) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
  } while( true );
}



/* FUN_8c2052f2 @ 8c2052f2 callers=1 callees=5 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2052f2(undefined4 ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  undefined4 in_stack_ffffffd0;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = *(ushort **)(puVar3 + 4);
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)0x0;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(ar6_00 + 8) == ar6) {
    FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,0,in_stack_ffffffd0);
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,a7,in_stack_ffffffd0);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_00 + 6);
    *(int *)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x800;
    }
    else {
      *ar6_00 = *ar6_00 | 0x1000;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(ar6_00 + 8);
  }
  else {
    if (*(int *)(ar6_00 + 6) != ar5) {
      if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,
                     &DAT_8c275400 + iVar2 * 5);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        ain0 = FUN_8c204e40(puVar3,iVar4,iVar5,a7);
        if (ain0 == 0) {
          FUN_8c204e6c(ar6_01,iVar4,iVar5,a7,0);
          return 3;
        }
        iVar5 = *(int *)(ar6_00 + 8);
        iVar4 = *(int *)(ar6_00 + 6);
        *(int *)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,ain0);
        *(uint *)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        FUN_8c204eb6(&DAT_8c27540c + iVar2 * 5,ain0,(&DAT_8c27540c)[iVar2 * 5],a7,ain0);
        *(undefined4 *)(ar7 + 8) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
    if (puVar3 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
    *(uint *)(puVar3 + 8) = ar6;
    *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
    *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar6;
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar3,a7,
                 &DAT_8c275400 + iVar2 * 5);
    *(undefined4 *)(ar7 + 8) = *(undefined4 *)(puVar3 + 6);
    *(int *)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x800;
    }
    else {
      *puVar3 = *puVar3 | 0x1000;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(puVar3 + 8);
  }
  (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar5;
  return 0;
}



/* FUN_8c205640 @ 8c205640 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205640(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar5 + 0xc);
  if (iVar1 == 8) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      *ar4 = 0x1000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = 0x80;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = 0x80;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((*(uint *)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = libgcc_divide_helper_01051c(0x800,ar4[1]);
  ar4[4] = uVar2;
  return 1;
}



/* FUN_8c205644 @ 8c205644 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205644(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r14;
  
  iVar1 = *(int *)(ar5 + 0xc);
  iVar3 = unaff_r14 + 0x7f;
  if (iVar1 == 8) {
    if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
      *ar4 = 0x1000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = iVar3;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = iVar3;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((unaff_r14 & *(uint *)(ar5 + 0x18)) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = libgcc_divide_helper_01051c(0x800,ar4[1]);
  ar4[4] = uVar2;
  return 1;
}



/* FUN_8c205768 @ 8c205768 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

ushort * FUN_8c205768(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = 0x8c496ba8;
  puVar2 = 0x8c496ba8;
  while( true ) {
    if ((ushort *)(0x13000 + (int)0x8c496ba8) <= puVar1) {
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
  
  uVar1 = 0xfffe;
  puVar2 = (ushort *)((int)0x8c496ba8 + 0x13000);
  puVar3 = 0x8c496ba8;
  puVar4 = 0x8c496ba8;
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
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  ushort *puStack_24;
  
  puVar3 = (ushort *)0x0;
  iStack_28 = ar5;
  puStack_24 = ar6;
  iVar4 = DAT_8c2753ec;
  for (puVar5 = (ushort *)(&DAT_8c275400)[(short)ar4 * 5]; puVar5 != (ushort *)0x0;
      puVar5 = *(ushort **)(puVar5 + 4)) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x1800) != 0)) &&
       ((iStack_28 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(int *)(puVar5 + 6) + DAT_8c2753f4;
      }
      else {
        iVar2 = *(int *)(puVar5 + 6) - DAT_8c2753f4;
      }
      iVar2 = FUN_8c204cc0(iVar2,auStack_2c,ar6,ar7);
      if ((iVar2 != 0) && ((**(ushort **)(iVar2 + 0x14) & 0xf000) == (*puStack_24 & 0xf000))) {
        iVar4 = *(int *)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}



/* FUN_8c205948 @ 8c205948 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205948(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char in_T;
  
  if (in_T == '\0') {
    uVar2 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ain0 & 0x1f;
  }
  iVar1 = DAT_8c275408;
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  do {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (ar4 <= *(int *)(iVar1 + 0x10)) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar4 = *(int *)(iVar1 + 0x10);
      for (iVar6 = *(int *)(iVar1 + 0xc); iVar6 <= (iVar5 + iVar4) - ar4; iVar6 = iVar6 + 0x20) {
        iVar3 = FUN_8c20436c(1,DAT_8c2753f4 + iVar6,ar4,ar7);
        if (iVar3 == 0) {
          return iVar6;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 8);
  } while( true );
}



/* FUN_8c2059be @ 8c2059be callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2059be(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ((ar4 & 0xfffffff8) >> 1) + (ar4 & 3);
  if ((ar4 & 4) != 0) {
    iVar1 = iVar1 + 0x400000;
  }
  if (0x800000 <= ar4) {
    iVar1 = iVar1 + 0x400000;
  }
  return iVar1;
}



/* FUN_8c2059e0 @ 8c2059e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c2059e0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (ar4 < 0x800000) {
    if (0x400000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1;
  }
  else {
    if (0xc00000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1 + 0xff800000;
  }
  return iVar1;
}



/* FUN_8c205a40 @ 8c205a40 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c205a40(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(8,3);
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
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(8,ar5,ar6,ar7);
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
  
  uVar6 = 0xdd18957;
  *0x8c4a9ec0 = 0;
  iStack_18 = pvr_20a876(0,ar5,ar6,ar7);
  uVar3 = pvr_20a876(4,ar5,ar6,ar7);
  *0x8c4a9bac = 5;
  if (iStack_18 == 0x17fd11db) {
    if (uVar3 == 1) {
      *0x8c4a9bac = 5;
    }
    else if (0x10 < uVar3) {
      *0x8c4a9bac = 6;
      *0x8c4a9ec0 = 0x800408;
      uVar6 = 0x15d1c951;
    }
  }
  else {
    *0x8c4a9bac = 5;
  }
  iVar4 = (int)0x101;
  iVar5 = *0xa05f689c;
  if (iVar5 == 0) {
    *0x8c4a9bb0 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        *0x8c4a9bb0 = 3;
      }
      else if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
        *0x8c4a9bb0 = 0x7f;
        iVar4 = 0x10101;
      }
      else if (iVar5 == 8) {
        *0x8c4a9bb0 = 0x1f;
      }
      else if (iVar5 == 9) {
        *0x8c4a9bb0 = 0xf;
      }
      else {
        *0x8c4a9bb0 = (int)0x8f;
      }
      goto LAB_8c205bc8;
    }
    *0x8c4a9bb0 = 1;
  }
  iVar4 = 0;
LAB_8c205bc8:
  puVar2 = (&pvr_20a844);
  pvr_20a844((int)0xa8,uVar6,ar6,ar7);
  (*(code *)puVar2)((int)0xa0,0x20,ar6,ar7);
  (*(code *)puVar2)(8,0,ar6,ar7);
  (*(code *)puVar2)((int)0xe4,3,ar6,ar7);
  (*(code *)puVar2)(0x48,9,ar6,ar7);
  if ((*0x8c4a9bc8 & 1) == 0) {
    pvr_20a844(0x44,0,ar6,ar7);
  }
  else {
    pvr_20a844(0x44,0x800000,ar6,ar7);
  }
  (*(code *)puVar2)(0x5c,0,ar6,ar7);
  (*(code *)puVar2)(0x68,0x2800000,ar6,ar7);
  (*(code *)puVar2)(0x6c,0x1e00000,ar6,ar7);
  uVar6 = 0x92039;
  sVar1 = 0x110;
  if (*0x8c4a9bac == 6) {
    (*(code *)puVar2)((int)0x110,0x93f39,ar6,ar7);
    uVar6 = *0x8c4a9ec0;
    sVar1 = 0x98;
  }
  (*(code *)puVar2)((int)sVar1,uVar6,ar6,ar7);
  (*(code *)puVar2)(0x4c,(int)0xa0,ar6,ar7);
  (*(code *)puVar2)(0x74,0,ar6,ar7);
  (*(code *)puVar2)(0x78,0x3f800000,ar6,ar7);
  (*(code *)puVar2)((int)0x84,0,ar6,ar7);
  (*(code *)puVar2)(0x30,iVar4,ar6,ar7);
  (*(code *)puVar2)((int)0xb0,0x7f7f7f,ar6,ar7);
  (*(code *)puVar2)((int)0xb4,0x7f7f7f,ar6,ar7);
  (*(code *)puVar2)((int)0xc0,0,ar6,ar7);
  (*(code *)puVar2)((int)0xbc,0xffffffff,ar6,ar7);
  (*(code *)puVar2)(0x80,7,ar6,ar7);
  (*(code *)puVar2)((int)0x88,0x3727c5a0,ar6,ar7);
  (*(code *)puVar2)((int)0x8c,0x1203000,ar6,ar7);
  (*(code *)puVar2)(0x74,1,ar6,ar7);
  if (*0x8c4a9bac == 6) {
    uVar6 = 0x7df77;
    if (*0x8c4a9bac == 6) {
      uVar6 = 0x27df77;
    }
    (*(code *)puVar2)(0x7c,uVar6,ar6,ar7);
    iVar4 = 0x200000;
    puVar2 = (&FUN_8c20731e);
    iVar7 = 0;
    uStack_1c = 0;
    iVar5 = 0xa5000000;
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
  
  puVar1 = (&pvr_20a844);
  pvr_20a844((int)0xb8,0xff07,ar6,ar7);
  (*(code *)puVar1)((int)0xb4,0x7f7f7f,ar6,ar7);
  (*(code *)puVar1)((int)0xb0,0x7f7f7f,ar6,ar7);
  uVar4 = (uint)0xff;
  uVar3 = (uint)0xfe;
  a4 = (int)0x200;
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
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  iVar1 = FUN_8c01439c(ar4,s_HARDWARE_8c26d2a0,ar6,ar7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_8c01439c(ar5,s_EnableTexture16MB_8c26d2ac,ar6_00,ar7), ar6 = ar5, iVar1 == 0)) {
    ar6 = 0;
  }
  return ar6;
}



/* s_r_nCOPYRIGHT_C_NEC_Corporati_205e72 @ 8c205e64 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int ain0;
  char *pcVar4;
  int iVar5;
  char *ar5_00;
  undefined4 uVar6;
  int iVar7;
  int a7;
  undefined4 in_stack_ffffffd4;
  
  if (DAT_8c2756b0 == (undefined1 *)0x0) {
    DAT_8c2756b0 = &DAT_8c4a9ba8;
    ar5 = 0;
    ar6 = 0x4f4;
    memset(&DAT_8c4a9ba8,0,0x4f4,ar7);
  }
  _DAT_8c4aa09c = 3;
  _DAT_8c4aa0a0 = 2;
  _DAT_8c4aa0a4 = 6;
  _DAT_8c4aa0a8 = 0;
  _DAT_8c4aa0ac = s_COPYRIGHT__C__NEC_Corporation_19_8c275440;
  _DAT_8c4a9ba8 = &DAT_8c4aa09c;
  _DAT_8c4a9be0 = 0;
  _DAT_8c4a9be4 = 0;
  _DAT_8c4a9be8 = 0;
  _DAT_8c4a9bfc = 0;
  _DAT_8c4a9c00 = 0;
  _DAT_8c4aa084 = 0x1f0;
  _DAT_8c4aa088 = 0x200;
  _DAT_8c4aa08c = 0x210;
  _DAT_8c4aa090 = 0x220;
  _DAT_8c4aa094 = 0x230;
  FUN_8c2073a0(&DAT_8c4aa09c,ar5,ar6,ar7,in_stack_ffffffd4);
  _DAT_8c4a9db4 = 0;
  _DAT_8c4a9db8 = 0;
  pcVar4 = s_VSYNCCount_8c26d2cc;
  uVar6 = 1;
  _DAT_8c4a9d8c = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_VSYNCCount_8c26d2cc,1,ar7);
  _DAT_8c4a9d8c = _DAT_8c4a9d8c + -1;
  _DAT_8c4a9bbc = 0x10000;
  _DAT_8c4a9bc0 = 0x800000;
  _DAT_8c4a9bc4 = 0x800000;
  _DAT_8c4a9d74 = 0;
  _DAT_8c4a9d70 = 0;
  _DAT_8c4a9d6c = 0;
  _DAT_8c4a9d88 = 3;
  _DAT_8c4a9e54 = 1;
  _DAT_8c4a9d90 = _DAT_8c4a9d8c;
  FUN_8c20828c(0x800000,pcVar4,uVar6,ar7);
  uVar1 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_RegionSize_8c26d2d8,0x6000,ar7);
  uVar2 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_ObjListSize_8c26d2e4,0x7a000,ar7);
  uVar3 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_ISPParamSize_8c26d2f0,0x180000,ar7);
  _DAT_8c4a9c44 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_TSPParamSize_8c26d300,0x180000,ar7);
  _DAT_8c4a9c40 = uVar3 & 0xfffff800;
  _DAT_8c4a9c44 = _DAT_8c4a9c44 & 0xfffff800;
  a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
  ain0 = _DAT_8c4a9c40 + a7;
  iVar7 = 0;
  iVar5 = 0;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
    *(int *)(&DAT_8c4a9c18 + uVar2) = iVar5;
    *(uint *)(&DAT_8c4a9c1c + uVar2) = iVar5 + (uVar1 & 0xfffff800);
    *(int *)(&DAT_8c4a9c20 + uVar2) = iVar5 + a7;
    *(int *)(&DAT_8c4a9c24 + uVar2) = ain0 + iVar5;
    *(int *)(iVar7 + -0x73b563c8) = 0x7d0000 - iVar5;
    iVar5 = iVar5 + 0x400000;
    iVar7 = iVar7 + 4;
  }
  _DAT_8c4a9ef0 = 0;
  _DAT_8c4a9fcc = 0;
  _DAT_8c4a9ef8 = 0;
  _DAT_8c4a9efc = 0xffffffff;
  _DAT_8c4a9f00 = 0xffffffff;
  _DAT_8c4a9f04 = 0xffffffff;
  _DAT_8c4a9f08 = 0;
  _DAT_8c4a9f0c = 0;
  _DAT_8c4a9f10 = 0;
  _DAT_8c4a9fd8 = 0;
  _DAT_8c4a9fe0 = 0;
  _DAT_8c4a9fdc = 1;
  _DAT_8c4a9fec = s_HARDWARE_205e00(s_VertexBuffer_8c26d310,s_BufferBase_8c26d320,0xacc00000,a7);
  _DAT_8c4a9ff0 = s_HARDWARE_205e00(s_VertexBuffer_8c26d310,s_BufferSize_8c26d32c,0x400000,a7);
  _DAT_8c4a9c10 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_PoolingTAStatus_8c26d338,0,a7);
  _DAT_8c4a9dd0 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_RenderTimeOut_8c26d348,10,a7);
  _DAT_8c4a9dd4 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_VertexTimeOut_8c26d358,10,a7);
  ar5_00 = s_VSYNCTimeOut_8c26d368;
  uVar6 = 10;
  pcVar4 = s_RENDER_8c26d2c4;
  _DAT_8c4a9dd8 = s_HARDWARE_205e00(s_RENDER_8c26d2c4,s_VSYNCTimeOut_8c26d368,10,a7);
  _DAT_8c4a9d80 = 0;
  _DAT_8c4a9d84 = 1;
  _DAT_8c4a9c14 = 0xf;
  _DAT_8c4a9dc4 = 0;
  _DAT_8c4a9dc8 = 0;
  uVar6 = noop_20b77a(pcVar4,ar5_00,uVar6,a7,ain0);
  return uVar6;
}



/* FUN_8c206146 @ 8c206146 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c206146(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 in_PR;
  
  if (DAT_8c2756b0 != 0) {
    ain0 = noop_205dd4(ar4,ar5,ar6,ar7,in_PR);
    DAT_8c2756b0 = 0;
  }
  return ain0;
}



/* FUN_8c206162 @ 8c206162 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c2061ba) */
/* WARNING: Removing unreachable block (ram,0x8c2061ae) */
/* WARNING: Removing unreachable block (ram,0x8c2061b4) */
/* WARNING: Removing unreachable block (ram,0x8c2061c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c206162(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  noop_20a840(ar4,ar5,ar6,ar7,in_PR);
  g2dma_205a62(ar4,ar5,ar6,ar7);
  FUN_8c25d780(ar4,ar5,ar6,ar7);
  FUN_8c2034c0(ar4,ar5,ar6,ar7);
  FUN_8c206300(ar4,ar5,ar6,ar7);
  FUN_8c205d80(ar4,ar5,ar6,ar7);
  _DAT_8c4aa004 = 0x100000;
  _DAT_8c4aa008 = 0;
  _DAT_8c4aa00c = 0;
  _DAT_8c4aa010 = 0;
  uVar1 = FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,_DAT_8c4a9c1c >> 7,_DAT_8c4a9c20 >> 7,_DAT_8c4a9c24 >> 7,
                       _DAT_8c4a9c14);
  return uVar1;
}



/* pvr_20a844 @ 8c2061cc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 pvr_20a844(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*0x8c20a844)();
  return uVar1;
}



/* FUN_8c2062c8 @ 8c2062c8 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2062c8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x8c2062ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)*0x8c4a9e1c)();
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
  
  uVar5 = FUN_8c20aa40((&pvr_206ff0),ar5,ar6,ar7);
  *0x8c4a9d98 = 0;
  *0x8c4a9e5c = 0;
  *0x8c4a9f24 = 0;
  *0x8c4a9f28 = 0;
  puVar4 = 0x8c4aa0b0;
  puVar3 = 0x8c4aa104;
  puVar2 = 0x8c4aa0b4;
  uVar6 = 0;
  *0x8c4aa0b4 = 0;
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
  
  piVar3 = 0xa05f8054;
  puVar2 = 0xa05f80e8;
  puVar1 = 0xa05f8044;
  uVar6 = 0;
  piVar7 = 0xa05f8054 + -1;
  while ((*(int *)(0x8c4a9ef8 + uVar6 * 4) != 5 &&
         (iVar5 = *(int *)(0x8c4a9ef8 + uVar6 * 4), iVar5 != -3))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return iVar5;
    }
  }
  *(undefined4 *)(0x8c4a9ef8 + uVar6 * 4) = 7;
  piVar4 = 0x8c4a9ee0;
  if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) != 0x20)) {
    if (*0x8c4a9be0 != 1) {
      *piVar7 = 0x8c4a9ee0[uVar6 & 1] + *0x8c4a9dc4;
      *piVar3 = piVar4[uVar6 & 1] + *0x8c4a9dc8;
    }
  }
  else {
    *piVar7 = *0x8c4a9ee0 + *0x8c4a9dc4;
    *piVar3 = *0x8c4a9ee4 + *0x8c4a9dc8;
  }
  if (*(int *)(0x8c4a9ef8 + uVar6 * 4) == -3) {
    return 0xfffffffd;
  }
  if (*0x8c4a9e54 != 1) {
    return *0x8c4a9e54;
  }
  *puVar2 = *0x8c4a9eb0;
  puVar2 = 0x8c4a9e74;
  *puVar1 = *0x8c4a9e74;
  *0x8c4a9e54 = 0;
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
  
  a4 = 0x10000000;
  puVar3 = (&sh4_dmac_202f40);
  uVar2 = 0xf0ffffff;
  puVar1 = 0xa05f8144;
  iVar8 = (int)0x100;
  uVar6 = 0;
  while ((*(int *)(uVar6 * 4 + 0x8c4a9ef8) != 1 || (*0x8c4a9db8 != 0))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return 1;
    }
  }
  *0x8c4a9db8 = 1;
  iVar9 = uVar6 * 4;
  *(undefined4 *)(0x8c4a9ef8 + iVar9) = 2;
  *0x8c4a9f10 = uVar6;
  puVar4 = 0xa05f8008;
  *0x8c4aa0fc = *0xffd8000c;
  *puVar4 = 1;
  *puVar4 = 0;
  iVar5 = 0x8c4aa024;
  iVar7 = (uVar6 & 1) * 0x20;
  *0xa05f8124 = *(undefined4 *)(0x8c4aa024 + iVar7);
  *0xa05f812c = *(undefined4 *)(iVar5 + 4 + iVar7);
  *0xa05f8128 = *(undefined4 *)(iVar5 + 0xc + iVar7);
  *0xa05f8130 = *(undefined4 *)(iVar5 + 0x10 + iVar7);
  *0xa05f8164 = *(undefined4 *)(iVar5 + 8 + iVar7);
  *puVar1 = 0x80000000;
  *0x8c4a9f14 = 0;
  *0x8c4a9f18 = 0;
  iVar5 = 0x8c4a9f7c;
  *0x8c4aa0b8 = 0;
  if (*(int *)(iVar5 + iVar9) != 0) {
    *0x8c4a9f14 = *0x8c4a9f14 | 1;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f2c + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9f8c + iVar9) != 0) {
    *0x8c4a9f14 = *0x8c4a9f14 | 2;
    puVar1 = 0x8c4a9fe4;
    if (*0x8c4a9fe0 == 1) {
      *(uint *)*0x8c4a9fe4 = *(uint *)*0x8c4a9fe4 & uVar2 | 0x1000000;
      iVar5 = (*(code *)puVar3)(a4,*puVar1,*0x8c4a9fe8,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f8c + -0x50 + iVar9),
                              *(int *)(0x8c4a9f8c + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  iVar5 = 0x8c4a9f9c;
  if (*(int *)(0x8c4a9f9c + iVar9) != 0) {
    *0x8c4a9f14 = *0x8c4a9f14 | 4;
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9f4c + iVar9),
                              *(int *)(iVar5 + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9fac + iVar9) != 0) {
    *0x8c4a9f14 = *0x8c4a9f14 | 8;
    if (*0x8c4a9fe0 == 1) {
      *(uint *)*0x8c4a9fe4 = *(uint *)*0x8c4a9fe4 & uVar2 | 0x3000000;
      iVar5 = (*(code *)puVar3)(a4,*0x8c4a9fe4,*0x8c4a9fe8,0x10);
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9fac + -0x50 + iVar9),
                              *(int *)(0x8c4a9fac + iVar9) + 0x20,0x10);
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(int *)(0x8c4a9fbc + iVar9) == 0) {
    return 1;
  }
  *0x8c4a9f14 = *0x8c4a9f14 | 0x10;
  iVar5 = (*(code *)puVar3)(a4,*(undefined4 *)(0x8c4a9fbc + -0x50 + iVar9),
                            *(int *)(0x8c4a9fbc + iVar9) + 0x20,0x10);
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
  
  puVar1 = 0xa05f8008;
  uVar8 = 0;
  puVar6 = 0xa05f8008 + 0x16;
  while ((iVar3 = *(int *)(uVar8 * 4 + 0x8c4a9ef8), iVar3 != 3 || (*0x8c4a9db4 != 0))) {
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      return iVar3;
    }
  }
  uVar7 = uVar8 & 1;
  if ((uVar7 + 1 & *0x8c4a9d6c) != 0) {
    FUN_8c25d0a0(*0x8c4aa008,*0x8c4aa00c,0,1);
    *0x8c4a9d6c = ~(uVar7 + 1) & *0x8c4a9d6c & 3;
  }
  *0x8c4a9db4 = 1;
  *(undefined4 *)(0x8c4a9ef8 + uVar8 * 4) = 4;
  if ((*0x8c4a9bb0 & 0x10) != 0) {
    *puVar1 = 2;
    *puVar1 = 0;
  }
  iVar3 = 0x8c4aa01c;
  *0xa05f802c = *(undefined4 *)(0x8c4aa01c + uVar7 * 0x20);
  *0xa05f8020 = *(undefined4 *)(iVar3 + 0x14 + uVar7 * 0x20);
  if (*0x8c4a9be0 != 1) {
    if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) != 0x20)) {
      uVar5 = *(undefined4 *)(0x8c4a9ee0 + uVar7 * 4);
    }
    else {
      uVar5 = *(undefined4 *)(0x8c4a9ee0 + *0x8c4aa10c * 4);
    }
    *puVar6 = uVar5;
  }
  puVar6 = 0xa05f808c;
  puVar1 = 0x8c4a9d60;
  *0xa05f808c = *0x8c4a9d60;
  puVar6[-1] = puVar1[-1] & 0xfffffff0;
  puVar1 = 0xa05f8068;
  *0xa05f8068 = *0x8c4a9e60;
  puVar1[1] = *0x8c4a9e64;
  puVar1[-7] = *0x8c4a9e70;
  puVar1[-8] = *0x8c4a9e78;
  puVar2 = 0x8c4a9bcc;
  *0x8c4aa0b4 = 0;
  if ((*puVar2 & 0xffffffed) == 0x20) {
    if (*0x8c4aa10c == 0) {
      uVar4 = *0x8c4a9eac;
      uVar7 = 0x20000;
    }
    else {
      uVar4 = *0x8c4a9eac;
      uVar7 = 0x60000;
    }
    *0xa05f80f4 = uVar4 | uVar7;
  }
  puVar2 = 0x8c4a9f0c;
  *0x8c4aa0f4 = *0xffd8000c;
  *puVar2 = uVar8;
  puVar1 = 0xa05f8014;
  *0x8c4aa108 = 1;
  *puVar1 = 0xffffffff;
  return (int)puVar2;
}



/* pvr_2069a0 @ 8c2069a0 callers=1 callees=3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 pvr_2069a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  bool bVar2;
  undefined4 ar5_00;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  _DAT_a05f6900 = 8;
  _DAT_8c4a9e5c = _DAT_8c4a9e5c | 2;
  _DAT_8c4a9f1c = _DAT_8c4a9f1c + 1;
  if ((_DAT_8c4a9bb0 & 2) == 0) {
    _DAT_8c4aa10c = DAT_8c2756b8 + 1 & 1;
    DAT_8c2756b8 = _DAT_8c4aa10c;
  }
  else {
    _DAT_8c4aa10c = (_DAT_a05f810c & 0x400) >> 10;
  }
  if (((_DAT_8c4a9bcc & 4) == 4) && (_DAT_8c4aa10c == 1)) {
    bVar2 = true;
  }
  else {
    _DAT_8c4a9d8c = _DAT_8c4a9d8c + -1;
    if (_DAT_8c4a9d8c < 0) {
      _DAT_8c4a9d8c = _DAT_8c4a9d90;
      bVar2 = false;
    }
    else if (_DAT_8c4aa0b0 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      _DAT_8c4aa0b0 = 0;
    }
  }
  if (!bVar2) {
    uStack_24 = 0;
    ar5_00 = 0;
    if (_DAT_8c4a9f28 == 0) {
      if (_DAT_8c4a9f24 == 0) {
        iStack_28 = 0;
        iStack_30 = 0;
        iStack_2c = 0;
        ar4_00 = 0;
        for (iStack_34 = 0; iStack_34 < 4; iStack_34 = iStack_34 + 1) {
          iVar1 = iStack_34 * 4;
          if ((-1 < *(int *)(&DAT_8c4a9ef8 + iVar1)) &&
             ((*(uint *)(&DAT_8c4a9ef8 + iVar1) & 1) == 0)) {
            if (_DAT_8c4a9dd0 == 0) {
              if (*(int *)(&DAT_8c4a9ef8 + iVar1) == 4) {
                *(undefined4 *)(&DAT_8c4a9ef8 + iVar1) = 5;
                if (_DAT_8c4a9db4 != 0) {
                  _DAT_8c4aa0bc = _DAT_8c4aa0bc + 1;
                }
                _DAT_8c4a9db4 = 0;
                _DAT_a05f8008 = 0;
              }
              else {
                _DAT_8c4aa0b0 = 1;
                uStack_24 = 1;
                if ((*(int *)(&DAT_8c4a9ef8 + iVar1) == 2) &&
                   (_DAT_8c4aa0b8 = _DAT_8c4aa0b8 + 1, _DAT_8c4a9dd4 < _DAT_8c4aa0b8)) {
                  _DAT_8c4aa0c0 = _DAT_8c4aa0c0 + 1;
                  g2dma_202e82(ar4_00,ar5_00,ar6,ar7);
                  *(undefined4 *)(&DAT_8c4a9ef8 + iVar1) = 0xffffffff;
                  _DAT_8c4a9db8 = 0;
                  _DAT_8c4aa0b8 = 0;
                }
              }
            }
            else {
              _DAT_8c4aa0b0 = 1;
              uStack_24 = 1;
              if ((*(int *)(&DAT_8c4a9ef8 + iVar1) == 4) &&
                 (_DAT_8c4aa0b4 = _DAT_8c4aa0b4 + 1, _DAT_8c4a9dd0 < _DAT_8c4aa0b4)) {
                _DAT_8c4aa0bc = _DAT_8c4aa0bc + 1;
                _DAT_a05f8008 = 0;
                _DAT_a05f8044 = _DAT_8c4a9e74;
                FUN_8c25d0a0(_DAT_8c4aa008,_DAT_8c4aa00c,0,1);
                ar6 = 0;
                ar7 = 1;
                ar4_00 = _DAT_8c4aa008;
                ar5_00 = _DAT_8c4aa00c;
                FUN_8c25d0a0(_DAT_8c4aa008,_DAT_8c4aa00c,0,1);
                *(undefined4 *)(&DAT_8c4a9ef8 + iStack_2c) = 5;
                _DAT_8c4a9db4 = 0;
                _DAT_8c4aa104 = _DAT_8c4aa104 + 1;
                _DAT_8c4aa0b4 = 0;
              }
              if ((*(int *)(&DAT_8c4a9ef8 + iStack_30) == 2) &&
                 (_DAT_8c4aa0b8 = _DAT_8c4aa0b8 + 1, _DAT_8c4a9dd4 < _DAT_8c4aa0b8)) {
                _DAT_8c4aa0c0 = _DAT_8c4aa0c0 + 1;
                g2dma_202e82(ar4_00,ar5_00,ar6,ar7);
                *(undefined4 *)(&DAT_8c4a9ef8 + iStack_28) = 0xffffffff;
                _DAT_8c4a9db8 = 0;
                _DAT_8c4aa0b8 = 0;
              }
            }
          }
          iStack_28 = iStack_28 + 4;
          iStack_30 = iStack_30 + 4;
          iStack_2c = iStack_2c + 4;
        }
        uStack_24 = uStack_24 | _DAT_8c4a9db4;
      }
      else {
        _DAT_8c4aa0cc = _DAT_8c4aa0cc + 1;
        ar5_00 = 1;
        if (0x10 < _DAT_8c4aa0cc) {
          _DAT_a05f8048 = _DAT_8c4a9e78;
          _DAT_a05f804c = _DAT_8c4a9e70;
          _DAT_a05f8068 = _DAT_8c4a9e60;
          _DAT_a05f806c = _DAT_8c4a9e64;
          _DAT_8c4a9db4 = 0;
          _DAT_8c4aa0cc = 0;
        }
        uStack_24 = 1;
      }
    }
    else {
      uStack_24 = 1;
    }
    if (uStack_24 == 0) {
      pvr_206350(0,ar5_00,ar6,ar7);
      iVar1 = pvr_206480(uStack_24,ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        return 1;
      }
      pvr_20672a(uStack_24,ar5_00,ar6,ar7);
      _DAT_8c4a9f20 = 0;
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
  
  iVar1 = 0x8c4aa0b4;
  if (*(int *)(*0x8c4a9f10 * 4 + 0x8c4a9ef8) != -1) {
    if (*0x8c4a9f24 == 0) {
      *0x8c4a9e5c = *0x8c4a9e5c | 0x20;
      0x8c4a9f10[*0x8c4a9f10 + -6] = 3;
    }
    puVar2 = 0x8c4a9f10;
    if ((*0x8c4a9bb0 & 1) == 0) {
      iVar4 = *(int *)(0x8c4aa034 + (*0x8c4a9f10 & 1) * 0x20);
    }
    else {
      iVar4 = *0xa05f8138;
    }
    *(int *)((*0x8c4a9f10 & 1) * 4 + iVar1 + 0x24) = *0xa05f8138;
    *0x8c4a9d60 =
         *0x8c4a9d58 & 0xff000000 |
         (iVar4 - *(int *)(0x8c4aa030 + (*puVar2 & 1) * 0x20)) * 2 & 0xfffff8;
    iVar6 = 0x30;
    puVar5 = (undefined4 *)(iVar4 + 0xa5000000);
    puVar7 = 0x8c4a9c50;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  *0x8c4a9db8 = 0;
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x48) - *0xffd8000c;
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
  
  iVar1 = 0x8c4aa0b4;
  iVar5 = (int)(int)0xffffff40;
  if (ar4 == 0) {
    iVar3 = (int)0x2000;
    uVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = 0x8c4aa034;
      if ((uint)(*(int *)(0x8c4aa034 + uVar7) + iVar3) <
          (uint)(*(int *)(0x8c4aa034 + -0x10 + uVar7) + iVar5)) {
        *(int *)(0x8c4aa034 + iVar4) = *(int *)(0x8c4aa034 + iVar4) + iVar3;
        *(int *)(iVar6 + -0xc + iVar4) = *(int *)(iVar6 + iVar4) + (int)0xc0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      else if (*(int *)(iVar1 + 0x14) != 0) {
        FUN_8c2062c8(3,ar5,ar6,ar7);
      }
      uVar7 = uVar7 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (uVar7 < 0x40);
  }
  else if (ar4 == 1) {
    iVar6 = (int)(int)0xfffff800;
    iVar3 = 0;
    iVar4 = 0;
    uStack_24 = 0;
    iVar8 = 0;
    do {
      iVar2 = 0x8c4aa028;
      if ((uint)(*(int *)(0x8c4aa028 + 8 + uStack_24 * 0x20) + (int)0x140) <
          (uint)(*(int *)(0x8c4aa028 + uStack_24 * 0x20) + iVar6)) {
        if (*(uint *)(iVar1 + 0x24 + iVar3) < (uint)(*(int *)(0x8c4aa028 + iVar4) + iVar6)) {
          *(int *)(0x8c4aa028 + iVar8) = *(int *)(0x8c4aa028 + iVar8) - (int)0x800;
          *(int *)(0x8c4aa034 + iVar8) = *(int *)(iVar2 + iVar8) + iVar5;
        }
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      else if (10 < *(uint *)(iVar1 + 0x10)) {
        FUN_8c2062c8(3,ar5,ar6,ar7);
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
  
  *0xa05f6908 = 4;
  piVar2 = 0x8c4a9f10;
  iVar1 = 0x8c4aa0b4;
  *(int *)(0x8c4aa0b4 + 0x20) = *(int *)(0x8c4aa0b4 + 0x20) + 1;
  piVar2[*piVar2 + -6] = -3;
  if (*0x8c4aa058 == 1) {
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
  
  *0xa05f6908 = 8;
  piVar2 = 0x8c4aa058;
  iVar1 = 0x8c4aa0b4;
  *(int *)(0x8c4aa0b4 + 0x1c) = *(int *)(0x8c4aa0b4 + 0x1c) + 1;
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
  
  *0xa05f6908 = 2;
  piVar1 = 0x8c4aa108;
  if (*0x8c4aa108 == 0) {
    *0x8c4a9e5c = *0x8c4a9e5c | 0x10;
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
  
  puVar3 = 0xa05f6900;
  puVar1 = (&FUN_8c2062c8);
  uVar11 = *0xa05f6900;
  if (((uVar11 & 8) != 0) && (iVar7 = pvr_2069a0(ar4,ar5,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,ar5,ar6,ar7);
  }
  if ((uVar11 & 0x20) != 0) {
    *puVar3 = 0x20;
    *0x8c4a9e5c = *0x8c4a9e5c | 4;
  }
  if ((uVar11 & 4) != 0) {
    *puVar3 = 7;
    *0x8c4a9db4 = 0;
    piVar4 = 0xffd8000c;
    puVar2 = 0x8c4aa0b4;
    *0x8c4aa0b4 = 0;
    puVar2[0x11] = puVar2[0x10] - *piVar4;
    if (*0x8c4a9f24 == 0) {
      *(undefined4 *)(0x8c4a9ef8 + *(int *)(0x8c4a9ef8 + 0x14) * 4) = 5;
    }
    else {
      *0x8c4a9f24 = 0;
      puVar5 = 0x8c4a9e78;
      puVar2[6] = 0;
      puVar2 = 0xa05f8048;
      *0xa05f8048 = *puVar5;
      puVar2[1] = *0x8c4a9e70;
      *0xa05f8068 = *0x8c4a9e60;
      *0xa05f806c = *0x8c4a9e64;
    }
    *0x8c4a9e5c = *0x8c4a9e5c | 1;
    *0x8c4aa104 = 0;
  }
  puVar10 = 0xffa0002c;
  uVar9 = 0x80000;
  if ((uVar11 & 0x80000) != 0) {
    uVar8 = *0xffa0002c;
    *0xffa0002c = uVar8 & 0xfffffffc;
    puVar6 = (&sh4_dmac_203160);
    *puVar3 = uVar9;
    (*(code *)puVar6)(uVar8 & 0xfffffffc,uVar9,puVar10,ar7);
    ar6 = puVar10;
  }
  if ((uVar11 & 0x40) != 0) {
    *puVar3 = 0x40;
    *0x8c4a9e5c = *0x8c4a9e5c | 0x40;
  }
  uVar8 = (uint)0x80;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *0x8c4a9f18 = *0x8c4a9f18 | 1;
    if (*0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x100;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *0x8c4a9f18 = *0x8c4a9f18 | 2;
    if (*0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x200;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *0x8c4a9f18 = *0x8c4a9f18 | 4;
    if (*0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = (uint)0x400;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *0x8c4a9f18 = *0x8c4a9f18 | 8;
    if (*0x8c4a9f14 == *puVar10) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar8 = 0x200000;
  if ((uVar11 & 0x200000) != 0) {
    *puVar3 = 0x200000;
    puVar3 = 0x8c4a9f18;
    *0x8c4a9f18 = *0x8c4a9f18 | 0x10;
    if (*0x8c4a9f14 == *puVar3) {
      pvr_206cfe(uVar8,uVar9,ar6,ar7);
    }
  }
  uVar11 = *0xa05f6908;
  if (((uVar11 & 4) != 0) && (uVar8 = FUN_8c206f76(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 8) != 0) && (uVar8 = FUN_8c206faa(uVar8,uVar9,ar6,ar7), uVar8 != 0)) {
    (*(code *)puVar1)(uVar8,uVar9,ar6,ar7);
  }
  if (((uVar11 & 2) != 0) && (iVar7 = FUN_8c206fd2(uVar8,uVar9,ar6,ar7), iVar7 != 0)) {
    (*(code *)puVar1)(iVar7,uVar9,ar6,ar7);
  }
  puVar1 = (&FUN_8c207334);
  for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
    if ((int)uVar11 < 0) {
      uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (uVar11 & 0x1f);
    }
    if ((*0x8c4a9e5c & uVar9) != 0) {
      *0x8c4a9e5c = *0x8c4a9e5c & ~uVar9;
      (*(code *)puVar1)(*(undefined4 *)(0x8c4a9de0 + -4 + uVar11 * 8),
                        *(undefined4 *)(0x8c4a9de0 + uVar11 * 8),ar6,ar7);
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
  uVar1 = (**(code **)(0x8c4a9ddc + ar4 * 8))(*(undefined4 *)(0x8c4a9ddc + ar4 * 8 + 4));
  return uVar1;
}



/* FUN_8c207300 @ 8c207300 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c207314) */
/* WARNING: Removing unreachable block (ram,0x8c207310) */
/* WARNING: Unknown calling convention */

uint FUN_8c207300(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)ar4 | (uint)ar5 | ar6;
  if ((uVar1 & 7) != 0) {
    uVar1 = ar6 >> 2;
    do {
      uVar3 = *ar5;
      ar5 = ar5 + 1;
      uVar1 = uVar1 - 1;
      *ar4 = uVar3;
      ar4 = ar4 + 1;
    } while (uVar1 != 0);
    return uVar3;
  }
  uVar2 = ar6 >> 3;
  do {
    uVar3 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar3;
    ar4 = ar4 + 2;
  } while (uVar2 != 0);
  return uVar1;
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
  char cVar3;
  byte in_FPSCR_FR;
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [56];
  undefined8 uStack_c;
  uint uStack_4;
  
  uStack_4 = (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
             (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
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
  
  puVar1 = 0x8c4a9e58;
  *0x8c4a9e58 = 0;
  puVar2 = 0x8c4a9ddc;
  *0x8c4a9ddc = (&DATA_8c2078f2);
  puVar2[1] = 0;
  puVar1[-0x1d] = (&DATA_8c2078f6);
  puVar1[-0x1c] = 0;
  puVar2[4] = (&DATA_8c2078fa);
  puVar2[5] = 0;
  puVar1[-0x19] = (&DATA_8c207920);
  puVar1[-0x18] = 0;
  puVar2[8] = (&DATA_8c207924);
  puVar2[9] = 0;
  puVar1[-0x15] = (&DATA_8c207928);
  puVar1[-0x14] = 0;
  puVar2[0xc] = (&DATA_8c20792c);
  puVar2[0xd] = 0;
  puVar1[-0x11] = (&DATA_8c207930);
  puVar1[-0x10] = 0;
  puVar2[0x10] = (&DATA_8c207934);
  puVar2[0x11] = 0;
  puVar1[-0xd] = (&DATA_8c207972);
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
    iVar1 = (int)0x234;
    *(undefined **)(iVar1 + ar4) = (&DATA_8c2078f2);
    return iVar1;
  }
  if (ar5 == 1) {
    iVar1 = (int)0x23c;
    puVar2 = (&DATA_8c2078f6);
LAB_8c2074f4:
    *(undefined **)(iVar1 + ar4) = puVar2;
  }
  else {
    if (ar5 == 2) {
      iVar1 = (int)0x244;
      puVar2 = (&DATA_8c2078fa);
    }
    else {
      if (ar5 == 3) {
        iVar1 = (int)0x24c;
        puVar2 = (&DATA_8c207920);
        goto LAB_8c2074f4;
      }
      if (ar5 == 4) {
        iVar1 = (int)0x254;
        puVar2 = (&DATA_8c207924);
      }
      else {
        if (ar5 == 5) {
          iVar1 = (int)0x25c;
          puVar2 = (&DATA_8c207928);
          goto LAB_8c2074f4;
        }
        if (ar5 == 6) {
          iVar1 = (int)0x264;
          puVar2 = (&DATA_8c20792c);
        }
        else {
          if (ar5 == 7) {
            iVar1 = (int)0x26c;
            puVar2 = (&DATA_8c207930);
            goto LAB_8c2074f4;
          }
          if (ar5 != 8) {
            return ar5;
          }
          iVar1 = (int)0x274;
          puVar2 = (&DATA_8c207934);
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
    iVar5 = (int)0x234;
    *(int *)(ar5 * 8 + 0x234 + ar4) = ar6;
    *(undefined4 *)(iVar5 + ar4 + ar5 * 8 + 4) = ar7;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar14 | (uint)bVar13 << 1 | (uint)bVar12 << 4 | (uint)bVar11 << 8 |
          (uint)bVar10 << 9 | (uint)bVar9 << 0xf | (uint)bVar8 << 0x1c | (uint)bVar7 << 0x1d |
         (uint)bVar6 << 0x1e) & (int)(int)0xffffff0f;
}



/* FUN_8c20757e @ 8c20757e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20757e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,0,ar4,ar5);
  return 0;
}



/* FUN_8c20759a @ 8c20759a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20759a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ret_const_1_25eca0(1,ar5,ar6,ar7);
  FUN_8c207502(DAT_8c2756b0,1,ar4,ar5);
  return 0;
}



/* FUN_8c2075bc @ 8c2075bc callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2075bc(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ret_const_1_25eca4(-((ar4 == 0) - 1),ar5,ar6,ar7);
  FUN_8c207502(DAT_8c2756b0,2,ar4,ar5);
  return 0;
}



/* FUN_8c207620 @ 8c207620 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207620(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint ar6_00;
  uint ar7_00;
  
  if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) == 0)) {
    ar6_00 = *0x8c4a9e9c >> 0x10;
  }
  else {
    ar6_00 = *0x8c4a9e9c >> 0x11;
  }
  ar7_00 = ar4 + *0x8c4a9c08 + *0x8c4a9c00;
  uVar1 = ar7_00;
  if (((*0x8c4a9bcc & 1) != 1) && ((*0x8c4a9bcc & 0x20) != 0)) {
    uVar1 = ((int)(ar4 + (uint)(ar4 < 0)) >> 1) + *0x8c4a9c08 + *0x8c4a9c00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ar6_00;
  }
  if ((int)ar6_00 < (int)uVar1) {
    uVar1 = ar6_00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = *0x8c4a9e90 & 0x3ff0000 | (int)0x3ff & uVar1;
  *0x8c4a9e90 = uVar1;
  pvr_20a844((int)0xc8,uVar1,ar6_00,ar7_00);
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
  if ((*0x8c4a9bb0 & 2) == 0) {
    uVar2 = 0;
    piVar1 = ar4;
  }
  else {
    piVar1 = (int *)pvr_20a876((int)0x10c,ar5,ar6,ar7);
    uVar2 = (int)0x3ff & (uint)piVar1;
  }
  iVar3 = *0x8c4a9c08 + *0x8c4a9c00;
  dVar7 = in_xd4;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = 0.007812501848093234;
  }
  if ((*0x8c4a9bcc & 1) == 1) {
    iVar4 = (int)0x1e0;
  }
  else if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) == 0)) {
    iVar4 = (int)0xf0;
  }
  else {
    uVar6 = SUB84(dVar7,0);
    if ((*0x8c4a9bcc & 0x20) == 0) {
      iVar4 = (int)0xf0;
      iVar3 = iVar3 * 2;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44((undefined4)DAT_8c207808,uVar6);
      }
      else {
        dVar7 = (double)CONCAT44(0x8c4a9e9c,(undefined4)DAT_8c207808);
      }
    }
    else {
      iVar4 = (int)0x1e0;
      dVar7 = in_xd4;
      if (in_FPSCR_SZ == '\0') {
        dVar7 = (double)CONCAT44(uVar6,uVar6);
      }
      iVar3 = iVar3 * 2;
    }
  }
  if ((((*0x8c4a9bcc & 1) != 1) && ((*0x8c4a9bcc & 0x2c) != 0)) &&
     (((uint)piVar1 & 0x40000) != 0)) {
    uVar2 = uVar2 + 1;
  }
  if (in_FPSCR_PR == '\0') {
    iVar3 = (int)((float)(int)(uVar2 - iVar3) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar3 = (int)((double)CONCAT44(uVar5,(float)(int)(uVar2 - iVar3)) * dVar7);
  }
  if (iVar4 < iVar3) {
    iVar3 = iVar3 - (*0x8c4a9e9c >> 0x10);
  }
  *ar4 = iVar3;
  return 0;
}



/* FUN_8c207832 @ 8c207832 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207832(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,3,ar4,ar5);
  return 0;
}



/* FUN_8c20784e @ 8c20784e callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20784e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,4,ar4,ar5);
  return 0;
}



/* FUN_8c20786a @ 8c20786a callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20786a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,5,ar4,ar5);
  return 0;
}



/* FUN_8c207886 @ 8c207886 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207886(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,6,ar4,ar5);
  return 0;
}



/* FUN_8c2078a2 @ 8c2078a2 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078a2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,7,ar4,ar5);
  return 0;
}



/* FUN_8c2078be @ 8c2078be callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078be(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,8,ar4,0);
  return 0;
}



/* FUN_8c2078d8 @ 8c2078d8 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2078d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c207502(DAT_8c2756b0,9,ar4,0);
  return 0;
}



/* FUN_8c2079a0 @ 8c2079a0 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2079a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x68,*0x8c4a9e60,ar6,ar7);
  (*(code *)puVar1)(0x6c,*0x8c4a9e64,ar6,ar7);
  (*(code *)puVar1)(0x5c,*0x8c4a9e6c,ar6,ar7);
  (*(code *)puVar1)(0x4c,*0x8c4a9e70,ar6,ar7);
  (*(code *)puVar1)((int)0x118,*0x8c4a9ea8,ar6,ar7);
  (*(code *)puVar1)((int)0xf4,*0x8c4a9eac,ar6,ar7);
  (*(code *)puVar1)(0x48,*0x8c4a9e78,ar6,ar7);
  (*(code *)puVar1)(0x44,*0x8c4a9e74 & 0xfffffffe,ar6,ar7);
  uVar2 = (*(code *)puVar1)((int)0xe8,*0x8c4a9eb0 | 8,ar6,ar7);
  return uVar2;
}



/* FUN_8c2079fc @ 8c2079fc callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c2079fc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  do {
  } while (*0x8c4a9f1c == *0x8c4a9f1c);
  return in_r0;
}



/* s_KAMUI_207a0e @ 8c207a0c callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 s_KAMUI_207a0e(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar4_00;
  char *ar5_00;
  uint ar6_00;
  
  s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(ar4,ar5,ar6,ar7);
  if (((int)ar4 < 3) && (-1 < (int)ar4)) {
    ar4_00 = s_KAMUI_8c26d3a8;
    ar5_00 = s_VideoMode_8c26d3b0;
    ar6_00 = ar4 & 3;
    _DAT_8c4a9bc8 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_VideoMode_8c26d3b0,ar6_00,ar7);
    FUN_8c206162(ar4_00,ar5_00,ar6_00,ar7);
    return 0;
  }
  return 2;
}



/* s_DisplayMode_207aaa @ 8c207a9c callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int s_DisplayMode_207aaa(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char *a5;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  iVar5 = 0;
  ar7_00 = ar7;
  FUN_8c21214e(ar4,ar5,ar6,ar7);
  uVar1 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_DisplayMode_8c26d3bc,ar4,ar7_00);
  iVar2 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_AntiAlias_8c26d3c8,ar7,ar7_00);
  a5 = s_Dither_8c26d3d4;
  iVar3 = s_HARDWARE_205e00(s_KAMUI_8c26d3a8,s_Dither_8c26d3d4,ar6,ar7_00);
  _DAT_8c4a9bc8 = uVar1 & 3;
  if ((uVar1 & 0x42) == 0x42) {
    uStack_28 = uVar1;
    (*_DAT_8c4a9e24)(&uStack_28,a5,ar6,ar7_00);
    _DAT_8c4a9bdc = iStack_24;
    if ((iStack_24 < 0) || (4 < iStack_24)) {
      _DAT_8c4a9bdc = 1;
    }
  }
  if ((((ar5 != 5) && (ar5 != 4)) && (ar5 != 3)) && ((ar5 != 1 && (ar5 != 0)))) {
    iVar5 = 1;
  }
  uVar4 = (uint)(iVar2 != 0);
  uStack_34 = (uint)(iVar3 != 0);
  if (iVar5 == 0) {
    _DAT_8c4a9bd4 = uStack_34;
    if (uVar1 == 1) {
      iVar2 = 0x1e0;
      uStack_2c = 0x280;
      uStack_30 = 0;
      _DAT_8c4a9ecc = 0x1e0;
    }
    else {
      if (((uVar1 & 1) == 1) || ((uVar1 & 0x2c) == 0)) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = 1;
      }
      if ((uVar1 & 0x10) == 0) {
        uStack_2c = 0x140;
      }
      else {
        uStack_2c = 0x280;
      }
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = (int)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) +
                       (uint)(*(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4) < 0)) >> 1;
          _DAT_8c4a9ecc = iVar2;
        }
        else {
          iVar2 = 0xf0;
          _DAT_8c4a9ecc = iVar2;
        }
      }
      else {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = *(int *)(&DAT_8c4aa084 + _DAT_8c4a9bdc * 4);
        }
        else {
          iVar2 = 0x1e0;
        }
        _DAT_8c4a9ecc = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      }
    }
    _DAT_8c4a9bcc = uVar1;
    _DAT_8c4a9bd0 = ar5;
    _DAT_8c4a9bd8 = uVar4;
    if (_DAT_8c4a9bc8 == 1) {
      iVar5 = 0;
      FUN_8c25eb60(0x280,0x1e0,ar6,ar7_00);
    }
    else if (_DAT_8c4a9bc8 == 0) {
      iVar5 = 0;
      FUN_8c25e884(0x280,0x1e0,ar6,ar7_00);
    }
    else if (_DAT_8c4a9bc8 == 2) {
      iVar5 = 0;
      FUN_8c25e540(0x280,0x1e0,ar6,ar7_00);
    }
    else {
      iVar5 = 1;
    }
    FUN_8c25dc60(uStack_2c,iVar2,ar5,uStack_30);
    FUN_8c2079a0(uStack_2c,iVar2,ar5,uStack_30);
  }
  return iVar5;
}



/* FUN_8c207d32 @ 8c207d32 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207d32(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  uint a5;
  
  puVar1 = (&pvr_20a844);
  if (in_r0 == 1) {
    pvr_20a844(0x44,*0x8c4a9e74 & 0xfffffffe,ar6,ar7);
    a5 = *0x8c4a9eb0 | 8;
  }
  else {
    pvr_20a844(0x44,*0x8c4a9e74 & 0xfffffffe,ar6,ar7);
    a5 = *0x8c4a9eb0;
  }
  (*(code *)puVar1)((int)0xe8,a5,ar6,ar7);
  (*(code *)puVar1)(0x44,*0x8c4a9e74,ar6,ar7);
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
  undefined4 ar4_00;
  int ar4_01;
  int ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  FUN_8c21214e(ar4,ar5,ar6,ar7);
  *0x8c4a9bd4 = (uint)(ar4 != 0);
  *0x8c4a9bd8 = (uint)(ar5 != 0);
  ar4_01 = (int)0x280;
  if (*0x8c4a9bcc == 1) {
    ar5_00 = (int)0x1e0;
    ar7_00 = 0;
  }
  else {
    if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x2c) == 0)) {
      ar7_00 = 0;
    }
    else {
      ar7_00 = 1;
    }
    if ((*0x8c4a9bcc & 0x10) == 0) {
      ar4_01 = (int)0x140;
    }
    if ((*0x8c4a9bcc & 0x20) == 0) {
      ar5_00 = (int)0xf0;
    }
    else {
      ar5_00 = (int)0x1e0;
    }
  }
  do {
  } while (*0x8c4a9f1c == *0x8c4a9f1c);
  ar6_00 = *0x8c4a9bd0;
  FUN_8c25dc60(ar4_01,ar5_00,ar6_00,ar7_00);
  FUN_8c2079a0(ar4_01,ar5_00,ar6_00,ar7_00);
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*0x8c4a9e74 & 0xfffffffe,ar6_00,ar7_00);
  (*(code *)puVar1)((int)0xe8,*0x8c4a9eb0,ar6_00,ar7_00);
  ar5_01 = *0x8c4a9e74;
  ar4_00 = 0x44;
  (*(code *)puVar1)(0x44,ar5_01,ar6_00,ar7_00);
  FUN_8c205a40(ar4_00,ar5_01,ar6_00,ar7_00);
  (*(code *)(&FUN_8c25d7c6))
            (*0x8c4a9c18 >> 7,0x8c4a9c18[1] >> 7,0x8c4a9c18[2] >> 7,0x8c4a9c18[3] >> 7,
             *0x8c4a9c14);
  *0x8c4a9e54 = 1;
  do {
  } while (*0x8c4a9f1c == *0x8c4a9f1c);
  return 0;
}



/* FUN_8c207f80 @ 8c207f80 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207f80(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*0x8c4a9e74 & 0xfffffffe);
  (*(code *)puVar1)((int)0xe8,*0x8c4a9eb0 | 8);
  FUN_8c21214e();
  FUN_8c205a40();
  (*(code *)puVar1)(0x44,*0x8c4a9e74 & 0xfffffffe);
  (*(code *)puVar1)((int)0xe8,*0x8c4a9eb0 | 8);
  do {
  } while (*0x8c4a9f1c == *0x8c4a9f1c);
  *0x8c4a9e54 = 1;
  return 0;
}



/* FUN_8c207f84 @ 8c207f84 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c207f84(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint ar5_00;
  uint in_r3;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,*0x8c4a9e74 & in_r3,ar6,ar7);
  ar4_00 = (int)0xe8;
  ar5_00 = *0x8c4a9eb0 | 8;
  (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
  FUN_8c21214e(ar4_00,ar5_00,ar6,ar7);
  FUN_8c205a40(ar4_00,ar5_00,ar6,ar7);
  (*(code *)puVar1)(0x44,*0x8c4a9e74 & 0xfffffffe,ar6,ar7);
  (*(code *)puVar1)((int)0xe8,*0x8c4a9eb0 | 8,ar6,ar7);
  do {
  } while (*0x8c4a9f1c == *0x8c4a9f1c);
  *0x8c4a9e54 = 1;
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
  
  piVar2 = 0x8c4a9bfc;
  puVar1 = (&pvr_20a844);
  uVar8 = 0;
  if (in_r1 < *in_r2 + ar4) {
    if (*0x8c4a9bfc != ar4) {
      *0x8c4a9bfc = ar4;
      piVar3 = 0x8c4a9eb4;
      *0x8c4a9eb4 = *0x8c4a9c04 + *piVar2;
      (*(code *)puVar1)((int)0xec,*piVar3,ar6,ar7);
    }
  }
  else {
    uVar8 = 0x12;
  }
  puVar4 = 0x8c4a9eb8;
  if ((*0x8c4a9c08 + unaff_r14 < 1) && (*0x8c4a9c0c + unaff_r14 < 1)) {
    uVar8 = 0x12;
  }
  else if (*0x8c4a9c00 != unaff_r14) {
    *0x8c4a9eb8 = *0x8c4a9c08 + unaff_r14 | (*0x8c4a9c0c + unaff_r14) * 0x10000;
    (*(code *)puVar1)((int)0xf0,*puVar4,ar6,ar7);
    uVar7 = *0x8c4a9e6c & 0xfff003ff;
    if (unaff_r14 < 1) {
      if ((*0x8c4a9bcc & 1) == 1) {
        uVar5 = (uint)0x1de;
      }
      else if ((*0x8c4a9bcc & 0x42) == 0x42) {
        iVar6 = *(int *)(0x8c4aa084 + *0x8c4a9bdc * 4);
        uVar5 = ((int)(iVar6 + (uint)(iVar6 < 0)) >> 1) - 2;
      }
      else {
        uVar5 = (uint)0xee;
      }
    }
    else {
      iVar6 = unaff_r14;
      if (unaff_r14 <= *0x8c4a9be8) {
        iVar6 = *0x8c4a9be8;
      }
      uVar5 = *0x8c4a9bf0 - iVar6;
      if (*0x8c4a9bf0 < unaff_r14 + uVar5) {
        uVar5 = *0x8c4a9bf0 - *0x8c4a9be8;
      }
      if (*0x8c4a9bf0 < uVar5) {
        *0x8c4a9bf0 = uVar5;
      }
    }
    *0x8c4a9c00 = unaff_r14;
    *0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar7;
    (*(code *)puVar1)(0x44,*0x8c4a9e74 & 0xfffffffe,ar6,ar7);
    (*(code *)puVar1)(0x5c,*0x8c4a9e6c,ar6,ar7);
    (*(code *)puVar1)(0x44,*0x8c4a9e74,ar6,ar7);
  }
  return uVar8;
}



/* FUN_8c2081e0 @ 8c2081e0 callers=7 callees=0 */

/* WARNING: Unknown calling convention */

uint FUN_8c2081e0(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  uint *puVar1;
  uint in_r0;
  
  puVar1 = 0x8c4a9d58;
  *0x8c4a9d58 = (ar4 & 7) << 0x18;
  if (ar6 != 0) {
    in_r0 = *puVar1 | 0x10000000;
    *puVar1 = in_r0;
  }
  if (ar5 != 0) {
    *0x8c4a9d58 = *0x8c4a9d58 | 0x8000000;
  }
  return in_r0;
}



/* FUN_8c20820a @ 8c20820a callers=7 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20820a(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((0x2000000 & ar4) != 0) {
    iVar1 = 2;
    if ((0x1000000 & ar4) != 0) {
      iVar1 = 3;
    }
    if ((ar4 & 0x400000) == 0) {
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
  
  if ((ar4 & 0x1000000) != 0) {
    iVar1 = ar5 * 4;
    ar5 = ar5 + 1;
    *(undefined4 *)(0x8c4a9c50 + iVar1) = ar6;
  }
  return ar5;
}



/* FUN_8c20823c @ 8c20823c callers=2 callees=0 */

/* WARNING: Unknown calling convention */

int FUN_8c20823c(uint ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((0x2000000 & ar4) != 0) {
    iVar2 = ar5;
    if ((ar4 & 0x400000) == 0) {
      *(uint *)(0x8c4a9c50 + ar5 * 4) = 0xffff0000 & ar6;
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
  
  iVar1 = 0x8c4a9c50;
  if ((ar4 & 0x2000000) != 0) {
    iVar2 = ar5 + 1;
    *(undefined4 *)(0x8c4a9c50 + ar5 * 4) = ar6;
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
  
  *0x8c4a9c50 = 0x80800000;
  puVar1 = 0x8c4a9c54;
  *0x8c4a9c54 = 0x20800000;
  *0x8c4a9c58 = 0;
  puVar3 = 0x8c4a9c5c;
  uVar2 = 0x40000000;
  *0x8c4a9c5c = 0x40000000;
  puVar5 = 0x8c4a9c60;
  uVar4 = 0x43820000;
  *0x8c4a9c60 = 0x43820000;
  uVar6 = 0x3727c5ac;
  puVar1[4] = 0x3727c5ac;
  uVar7 = 0xff000000;
  puVar3[3] = 0xff000000;
  puVar5[3] = 0x43160000;
  *0x8c4a9c70 = uVar2;
  puVar3[6] = uVar6;
  puVar5[6] = uVar7;
  puVar1 = 0x8c4a9c7c;
  *0x8c4a9c7c = 0x440c0000;
  *0x8c4a9c80 = uVar4;
  puVar5[9] = uVar6;
  *0x8c4a9c88 = uVar7;
  *0x8c4a9d5c = puVar1[-6];
  *0x8c4a9d58 = 0x1000000;
  return 0;
}



/* FUN_8c208380 @ 8c208380 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208380(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = *(undefined4 *)(iVar1 + 0x18);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = *(undefined4 *)(iStack_14 + 0x18);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = *(undefined4 *)(aiStack_10[0] + 0x18);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,a7);
  FUN_8c2081e0(ar4_00,0,0,a7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c208484 @ 8c208484 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c208612) */
/* WARNING: Removing unreachable block (ram,0x8c208604) */
/* WARNING: Removing unreachable block (ram,0x8c208600) */
/* WARNING: Removing unreachable block (ram,0x8c2085ec) */
/* WARNING: Removing unreachable block (ram,0x8c2085e8) */
/* WARNING: Removing unreachable block (ram,0x8c2085de) */
/* WARNING: Removing unreachable block (ram,0x8c2085a6) */
/* WARNING: Removing unreachable block (ram,0x8c208598) */
/* WARNING: Removing unreachable block (ram,0x8c208594) */
/* WARNING: Removing unreachable block (ram,0x8c208580) */
/* WARNING: Removing unreachable block (ram,0x8c20857c) */
/* WARNING: Removing unreachable block (ram,0x8c208572) */
/* WARNING: Removing unreachable block (ram,0x8c20853a) */
/* WARNING: Removing unreachable block (ram,0x8c20852c) */
/* WARNING: Removing unreachable block (ram,0x8c208528) */
/* WARNING: Removing unreachable block (ram,0x8c208514) */
/* WARNING: Removing unreachable block (ram,0x8c208510) */
/* WARNING: Removing unreachable block (ram,0x8c208502) */
/* WARNING: Removing unreachable block (ram,0x8c208500) */
/* WARNING: Removing unreachable block (ram,0x8c20850a) */
/* WARNING: Removing unreachable block (ram,0x8c208512) */
/* WARNING: Removing unreachable block (ram,0x8c208518) */
/* WARNING: Removing unreachable block (ram,0x8c20852a) */
/* WARNING: Removing unreachable block (ram,0x8c208538) */
/* WARNING: Removing unreachable block (ram,0x8c20853c) */
/* WARNING: Removing unreachable block (ram,0x8c208578) */
/* WARNING: Removing unreachable block (ram,0x8c20857e) */
/* WARNING: Removing unreachable block (ram,0x8c208584) */
/* WARNING: Removing unreachable block (ram,0x8c208596) */
/* WARNING: Removing unreachable block (ram,0x8c2085a4) */
/* WARNING: Removing unreachable block (ram,0x8c2085a8) */
/* WARNING: Removing unreachable block (ram,0x8c2085e4) */
/* WARNING: Removing unreachable block (ram,0x8c2085ea) */
/* WARNING: Removing unreachable block (ram,0x8c2085f0) */
/* WARNING: Removing unreachable block (ram,0x8c208602) */
/* WARNING: Removing unreachable block (ram,0x8c208610) */
/* WARNING: Removing unreachable block (ram,0x8c208614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208484(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  a7 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 =
       (int)(*(float *)(iVar1 + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(iVar1 + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(iVar1 + 0x18) * 255.0) << 8 | (int)(*(float *)(iVar1 + 0x1c) * 255.0);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 =
       (int)(*(float *)(iStack_14 + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(iStack_14 + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(iStack_14 + 0x18) * 255.0) << 8 |
       (int)(*(float *)(iStack_14 + 0x1c) * 255.0);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 =
       (int)(*(float *)(aiStack_10[0] + 0x10) * 255.0) << 0x18 |
       (int)(*(float *)(aiStack_10[0] + 0x14) * 255.0) << 0x10 |
       (int)(*(float *)(aiStack_10[0] + 0x18) * 255.0) << 8 |
       (int)(*(float *)(aiStack_10[0] + 0x1c) * 255.0);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,a7);
  FUN_8c2081e0(ar4_00,0,0,a7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c208680 @ 8c208680 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c2087a2) */
/* WARNING: Removing unreachable block (ram,0x8c208756) */
/* WARNING: Removing unreachable block (ram,0x8c208750) */
/* WARNING: Removing unreachable block (ram,0x8c208706) */
/* WARNING: Removing unreachable block (ram,0x8c2086fc) */
/* WARNING: Removing unreachable block (ram,0x8c2086fe) */
/* WARNING: Removing unreachable block (ram,0x8c208708) */
/* WARNING: Removing unreachable block (ram,0x8c208754) */
/* WARNING: Removing unreachable block (ram,0x8c20879e) */
/* WARNING: Removing unreachable block (ram,0x8c2087a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208680(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *a7;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  a7 = &iStack_14;
  iStack_14 = ar4[1];
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = (uint)(*(float *)(iVar1 + 0x18) * 255.0);
  _DAT_8c4a9c68 = _DAT_8c4a9c68 << 0x18 | _DAT_8c4a9c68 << 0x10 | _DAT_8c4a9c68 << 8 | _DAT_8c4a9c68
  ;
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = (uint)(*(float *)(iStack_14 + 0x18) * 255.0);
  _DAT_8c4a9c78 = _DAT_8c4a9c78 << 0x18 | _DAT_8c4a9c78 << 0x10 | _DAT_8c4a9c78 << 8 | _DAT_8c4a9c78
  ;
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = (uint)(*(float *)(aiStack_10[0] + 0x18) * 255.0);
  _DAT_8c4a9c88 = _DAT_8c4a9c88 << 0x18 | _DAT_8c4a9c88 << 0x10 | _DAT_8c4a9c88 << 8 | _DAT_8c4a9c88
  ;
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,aiStack_10,a7);
  FUN_8c2081e0(ar4_00,0,0,a7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c2087e4 @ 8c2087e4 callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2087e4(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 a7;
  int a5;
  
  uVar2 = _DAT_8c4a9d4c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  a7 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),a7);
  a5 = iVar3 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,a5,uVar6,a7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,a5,uVar6,a7);
  FUN_8c2081e0(uVar2,0,0,a7,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c208980 @ 8c208980 callers=0 callees=4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208980(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 a6;
  
  uVar2 = _DAT_8c4a9d4c;
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(ain0 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  iVar3 = iVar1 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  a6 = *(undefined4 *)(ain0 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,a6,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,a6,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c208b00 @ 8c208b00 callers=0 callees=4 */

/* WARNING: Removing unreachable block (ram,0x8c208b0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208b00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar14 = '\0';
  cVar13 = '\0';
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_fr15 = 255.0;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar8 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar8 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,iVar8 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),uVar6);
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x20));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  iVar8 = iVar3 + 1;
  if (cVar13 == '\0') {
    iVar9 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x24));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar10 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x28));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar12 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar12 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x2c));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar11 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar11 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar3 * 4) = iVar9 << 0x18 | iVar10 << 0x10 | iVar12 << 8 | uVar11;
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x30));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar3 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar3 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x34));
  }
  if (cVar13 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    iVar9 = (int)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar9 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x38));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    iVar10 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar10 = (int)in_dr2;
  }
  if (cVar14 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x3c));
  }
  if (cVar13 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar13 == '\0') {
    uVar11 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar11 = (uint)in_dr2;
  }
  uVar11 = iVar3 << 0x18 | iVar9 << 0x10 | iVar10 << 8 | uVar11;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar8,uVar11,uVar6);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar8,uVar11,uVar6);
  FUN_8c2081e0(uVar2,0,0,uVar6,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c208e00 @ 8c208e00 callers=0 callees=4 */

/* WARNING: Removing unreachable block (ram,0x8c208e0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c208e00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  float fVar5;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  char cVar11;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar11 = '\0';
  cVar10 = '\0';
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_fr15 = 255.0;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar8 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x20));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  iVar3 = iVar1 + 1;
  if (cVar10 == '\0') {
    iVar6 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x24));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar7 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x28));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar8 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar8 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x2c));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar9 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar9 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = iVar6 << 0x18 | iVar7 << 0x10 | iVar8 << 8 | uVar9;
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x30));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar1 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar1 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x34));
  }
  if (cVar10 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    iVar6 = (int)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    iVar6 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x38));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    iVar7 = (int)SUB84(in_dr2,0);
  }
  else {
    iVar7 = (int)in_dr2;
  }
  if (cVar11 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x3c));
  }
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),SUB84(in_dr2,0) * in_fr15);
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
  }
  if (cVar10 == '\0') {
    uVar9 = (uint)SUB84(in_dr2,0);
  }
  else {
    uVar9 = (uint)in_dr2;
  }
  uVar9 = iVar1 << 0x18 | iVar6 << 0x10 | iVar7 << 8 | uVar9;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,uVar9,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,uVar9,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c2090e0 @ 8c2090e0 callers=0 callees=2 */

/* WARNING: Removing unreachable block (ram,0x8c2090ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2090e0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int ar5_00;
  float fVar7;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 3) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 4,*(undefined4 *)(iVar3 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x18));
  }
  ar5_00 = iVar3 + 1;
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar8 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar8 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar8,uVar6);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar8,uVar6);
  FUN_8c2081e0(uVar2,0,0,uVar6,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209380 @ 8c209380 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20938c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209380(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  float fVar5;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  uint uVar6;
  char cVar7;
  char cVar8;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar8 = '\0';
  cVar7 = '\0';
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
  }
  iVar3 = iVar1 + 1;
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar7 == '\0') {
    uVar6 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar6 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar6 = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,uVar6,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,uVar6,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c209600 @ 8c209600 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209600(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar7_00;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  iStack_14 = ar4[1];
  ar7_00 = aiStack_10;
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = *(undefined4 *)(iVar1 + 0x10);
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = *(undefined4 *)(iStack_14 + 0x10);
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = *(undefined4 *)(aiStack_10[0] + 0x10);
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,&iStack_14,ar7_00);
  FUN_8c2081e0(ar4_00,0,0,ar7_00,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c209708 @ 8c209708 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20982a) */
/* WARNING: Removing unreachable block (ram,0x8c2097de) */
/* WARNING: Removing unreachable block (ram,0x8c2097d8) */
/* WARNING: Removing unreachable block (ram,0x8c20978e) */
/* WARNING: Removing unreachable block (ram,0x8c209784) */
/* WARNING: Removing unreachable block (ram,0x8c209786) */
/* WARNING: Removing unreachable block (ram,0x8c209790) */
/* WARNING: Removing unreachable block (ram,0x8c2097dc) */
/* WARNING: Removing unreachable block (ram,0x8c209826) */
/* WARNING: Removing unreachable block (ram,0x8c20982c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209708(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar7_00;
  undefined4 ain0;
  int iStack_14;
  int aiStack_10 [2];
  
  iVar1 = *ar4;
  ar7_00 = &iStack_14;
  iStack_14 = ar4[1];
  aiStack_10[0] = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar1 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar1 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar1 + 0xc);
  _DAT_8c4a9c68 = (uint)(*(float *)(iVar1 + 0x10) * 255.0);
  _DAT_8c4a9c68 = _DAT_8c4a9c68 << 0x18 | _DAT_8c4a9c68 << 0x10 | _DAT_8c4a9c68 << 8 | _DAT_8c4a9c68
  ;
  _DAT_8c4a9c6c = *(undefined4 *)(iStack_14 + 4);
  _DAT_8c4a9c70 = *(undefined4 *)(iStack_14 + 8);
  _DAT_8c4a9c74 = *(undefined4 *)(iStack_14 + 0xc);
  _DAT_8c4a9c78 = (uint)(*(float *)(iStack_14 + 0x10) * 255.0);
  _DAT_8c4a9c78 = _DAT_8c4a9c78 << 0x18 | _DAT_8c4a9c78 << 0x10 | _DAT_8c4a9c78 << 8 | _DAT_8c4a9c78
  ;
  _DAT_8c4a9c7c = *(undefined4 *)(aiStack_10[0] + 4);
  _DAT_8c4a9c80 = *(undefined4 *)(aiStack_10[0] + 8);
  _DAT_8c4a9c84 = *(undefined4 *)(aiStack_10[0] + 0xc);
  _DAT_8c4a9c88 = (uint)(*(float *)(aiStack_10[0] + 0x10) * 255.0);
  _DAT_8c4a9c88 = _DAT_8c4a9c88 << 0x18 | _DAT_8c4a9c88 << 0x10 | _DAT_8c4a9c88 << 8 | _DAT_8c4a9c88
  ;
  _DAT_8c4a9d48 = 0x3c;
  ain0 = _DAT_8c4a9d50;
  ar4_00 = FUN_8c20820a(_DAT_8c4a9d4c,0x3c,aiStack_10,ar7_00);
  FUN_8c2081e0(ar4_00,0,0,ar7_00,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar1 + 0xc);
  return 0;
}



/* FUN_8c2098c0 @ 8c2098c0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c2098c0(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  int ar5_00;
  
  uVar2 = _DAT_8c4a9d4c;
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar4 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  ar7_00 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),ar7_00);
  ar5_00 = iVar3 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 0x18);
  uVar6 = *(undefined4 *)(iVar5 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar6,ar7_00);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar6,ar7_00);
  FUN_8c2081e0(uVar2,0,0,ar7_00,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209a40 @ 8c209a40 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209a40(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 ar6_00;
  
  uVar2 = _DAT_8c4a9d4c;
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(ain0 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(ain0 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(ain0 + 0x10),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 0x18);
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,*(undefined4 *)(iVar3 + 0x1c),ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  iVar3 = iVar1 + 1;
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 0x18);
  ar6_00 = *(undefined4 *)(iVar4 + 0x1c);
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,ar6_00,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,ar6_00,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c209c00 @ 8c209c00 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c209c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209c00(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int ar5_00;
  float fVar7;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  uint uVar8;
  char cVar9;
  char cVar10;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar10 = '\0';
  cVar9 = '\0';
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(iVar4 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(iVar4 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(iVar4 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x14);
  iVar1 = FUN_8c208270(_DAT_8c4a9d4c,6,*(undefined4 *)(iVar4 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  iVar1 = FUN_8c208270(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  iVar3 = FUN_8c208228(uVar2,iVar1 + 1,uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8,uVar6);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar3 * 4) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 1) * 4) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar3 + 2) * 4) = *(undefined4 *)(iVar5 + 0xc);
  uVar6 = *(undefined4 *)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = FUN_8c208270(uVar2,iVar3 + 3,*(undefined4 *)(iVar5 + 0x10),uVar6);
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x18));
  }
  ar5_00 = iVar3 + 1;
  if (cVar9 == '\0') {
    fVar7 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar7);
    uVar8 = (uint)fVar7;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar8 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar3 * 4) = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  if (cVar10 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar5 + 0x1c));
  }
  if (cVar9 == '\0') {
    uVar8 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar8 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar8 = uVar8 << 0x18 | uVar8 << 0x10 | uVar8 << 8 | uVar8;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,ar5_00,uVar8,uVar6);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,ar5_00,uVar8,uVar6);
  FUN_8c2081e0(uVar2,0,0,uVar6,iVar1);
  _DAT_8c4a9d5c = *(undefined4 *)(iVar4 + 0xc);
  return 0;
}



/* FUN_8c209e80 @ 8c209e80 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c209e8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c209e80(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  float fVar5;
  double in_dr2;
  float in_fr15;
  undefined4 in_fr14;
  uint uVar6;
  char cVar7;
  char cVar8;
  
  uVar2 = _DAT_8c4a9d4c;
  cVar8 = '\0';
  cVar7 = '\0';
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  _DAT_8c4a9c50 = _DAT_8c4a9d4c;
  _DAT_8c4a9c54 = _DAT_8c4a9d50;
  _DAT_8c4a9c58 = _DAT_8c4a9d54;
  _DAT_8c4a9c5c = *(undefined4 *)(ain0 + 4);
  _DAT_8c4a9c60 = *(undefined4 *)(ain0 + 8);
  _DAT_8c4a9c64 = *(undefined4 *)(ain0 + 0xc);
  iVar1 = FUN_8c20823c(_DAT_8c4a9d4c,6,*(undefined4 *)(ain0 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x18));
    in_fr15 = 255.0;
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(ain0 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar3 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar3 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar3 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x18));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar3 + 0x1c));
  }
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  iVar1 = FUN_8c208228(uVar2,iVar1 + 1,uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6,ar7);
  *(undefined4 *)(&DAT_8c4a9c50 + iVar1 * 4) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 1) * 4) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(&DAT_8c4a9c50 + (iVar1 + 2) * 4) = *(undefined4 *)(iVar4 + 0xc);
  iVar1 = FUN_8c20823c(uVar2,iVar1 + 3,*(undefined4 *)(iVar4 + 0x10),ar7);
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x18));
  }
  iVar3 = iVar1 + 1;
  if (cVar7 == '\0') {
    fVar5 = SUB84(in_dr2,0) * in_fr15;
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),fVar5);
    uVar6 = (uint)fVar5;
  }
  else {
    in_dr2 = in_dr2 * (double)CONCAT44(in_fr14,in_fr15);
    uVar6 = (uint)in_dr2;
  }
  *(uint *)(&DAT_8c4a9c50 + iVar1 * 4) = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  if (cVar8 == '\0') {
    in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(iVar4 + 0x1c));
  }
  if (cVar7 == '\0') {
    uVar6 = (uint)(SUB84(in_dr2,0) * in_fr15);
  }
  else {
    uVar6 = (uint)(in_dr2 * (double)CONCAT44(in_fr14,in_fr15));
  }
  uVar6 = uVar6 << 0x18 | uVar6 << 0x10 | uVar6 << 8 | uVar6;
  _DAT_8c4a9d48 = FUN_8c208228(uVar2,iVar3,uVar6,ar7);
  _DAT_8c4a9d48 = _DAT_8c4a9d48 << 2;
  uVar2 = FUN_8c20820a(uVar2,iVar3,uVar6,ar7);
  FUN_8c2081e0(uVar2,0,0,ar7,ain0);
  _DAT_8c4a9d5c = *(undefined4 *)(ain0 + 0xc);
  return 0;
}



/* FUN_8c20a104 @ 8c20a104 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20a122) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a104(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  uint ar5_00;
  
  if ((in_r3 & ar4) != 0) {
    ar4 = 0;
  }
  if ((0x7fffff00 & ar4) != 0) {
    ar4 = (uint)0xff;
  }
  *0x8c4a9c4c = ar4;
  ar5_00 = *0x8c4a9e78 & 0xff00ffff | (ar4 & 0xff) << 0xf;
  *0x8c4a9e78 = ar5_00;
  pvr_20a844(0x48,ar5_00,ar6,ar7);
  return 0;
}



/* FUN_8c20a13a @ 8c20a13a callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20a144) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a13a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr4;
  
  pvr_20a844(0x78,in_fr4 & 0x7fffffff,ar6,ar7);
  return 0;
}



/* FUN_8c20a156 @ 8c20a156 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20a156(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  pvr_20a844((int)0xbc,s0,ar6,ar7);
  pvr_20a844((int)0xc0,s4,ar6,ar7);
  return 0;
}



/* FUN_8c20a16e @ 8c20a16e callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a16e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  pvr_20a844((int)0xb0,s0,ar6,ar7);
  return 0;
}



/* FUN_8c20a1c0 @ 8c20a1c0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a1c0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  pvr_20a844((int)0xb4,s0,ar6,ar7);
  return 0;
}



/* FUN_8c20a1d0 @ 8c20a1d0 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20a1f6) */
/* WARNING: Removing unreachable block (ram,0x8c20a1f0) */
/* WARNING: Removing unreachable block (ram,0x8c20a1e0) */
/* WARNING: Removing unreachable block (ram,0x8c20a1e6) */
/* WARNING: Removing unreachable block (ram,0x8c20a1f4) */
/* WARNING: Removing unreachable block (ram,0x8c20a1f8) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a1d0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  float fVar4;
  double dVar3;
  float fVar5;
  undefined4 in_fr14;
  uint uVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = 0x80;
  fVar5 = 255.0;
  fVar4 = *(float *)(ar4 + 0x1fc) * 255.0;
  dVar3 = (double)CONCAT44(fVar4,*(float *)(ar4 + 0x1fc));
  uVar1 = (int)fVar4 & 0xff;
  do {
    iVar2 = iVar2 + -1;
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(iVar2 * 4 + ar4),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(iVar2 * 4 + ar4);
    }
    if (cVar7 == '\0') {
      fVar4 = (float)((ulonglong)dVar3 >> 0x20) * fVar5;
      dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0));
      uVar6 = (uint)fVar4;
    }
    else {
      dVar3 = dVar3 * (double)CONCAT44(in_fr14,fVar5);
      uVar6 = (uint)dVar3;
    }
    pvr_20a844(iVar2 * 4 + 0x200,(uVar6 & 0xff) << 8 | uVar1,ar6,ar7);
    uVar1 = uVar6 & 0xff;
  } while (iVar2 != 0);
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
  
  puVar1 = (&pvr_20a844);
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = *in_r0;
  }
  uVar3 = unaff_r14 + 0x7f;
  if (in_FPSCR_SZ == '\0') {
    in_fr3 = *(undefined4 *)(0x1fc + unaff_r10);
  }
  else {
    in_xd2 = *(double *)(0x1fc + unaff_r10);
  }
  iVar2 = (int)0x200;
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
  pvr_20a844((int)0xb8,ar4,ar6,ar7);
  return 0;
}



/* FUN_8c20a280 @ 8c20a280 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a280(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 & 0xfffffffc) == 0) {
    *0x8c4a9c48 = ar4;
    pvr_20a844((int)0x108,ar4);
  }
  return 0;
}



/* FUN_8c20a284 @ 8c20a284 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a284(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r3;
  
  if ((in_r3 & ar4) == 0) {
    *0x8c4a9c48 = ar4;
    pvr_20a844((int)0x108,ar4,ar6,ar7);
  }
  return 0;
}



/* FUN_8c20a2aa @ 8c20a2aa callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a2aa(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 ar5_00;
  int iVar2;
  int unaff_r12;
  undefined4 *unaff_r13;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  ar4_00 = (int)0x1000;
  iVar2 = (int)0x400;
  do {
    ar5_00 = *unaff_r13;
    unaff_r13 = unaff_r13 + 1;
    (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
    unaff_r12 = unaff_r12 + 1;
    ar4_00 = ar4_00 + 4;
  } while (unaff_r12 < iVar2);
  return 0;
}



/* FUN_8c20a2e2 @ 8c20a2e2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a2e2(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r3;
  undefined4 ar5_00;
  undefined4 *puVar2;
  int ar4_00;
  
  puVar1 = (&pvr_20a844);
  if (in_r3 < ar5) {
    ar5 = (int)0x3ff;
  }
  ar4_00 = ar4 * 4 + (int)0x1000;
  puVar2 = (undefined4 *)(ar4 * 4 + ar6);
  for (; ar4 < ar5; ar4 = ar4 + 1) {
    ar5_00 = *puVar2;
    puVar2 = puVar2 + 1;
    (*(code *)puVar1)(ar4_00,ar5_00,ar6,ar7);
    ar4_00 = ar4_00 + 4;
  }
  return 0;
}



/* FUN_8c20a356 @ 8c20a356 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a356(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  pvr_20a844(0x40,s0,ar6,ar7);
  return 0;
}



/* FUN_8c20a366 @ 8c20a366 callers=0 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20a3cc) */
/* WARNING: Removing unreachable block (ram,0x8c20a3c4) */
/* WARNING: Removing unreachable block (ram,0x8c20a3b8) */
/* WARNING: Removing unreachable block (ram,0x8c20a3b2) */
/* WARNING: Removing unreachable block (ram,0x8c20a3ac) */
/* WARNING: Removing unreachable block (ram,0x8c20a3a6) */
/* WARNING: Removing unreachable block (ram,0x8c20a392) */
/* WARNING: Removing unreachable block (ram,0x8c20a38c) */
/* WARNING: Removing unreachable block (ram,0x8c20a380) */
/* WARNING: Removing unreachable block (ram,0x8c20a37a) */
/* WARNING: Removing unreachable block (ram,0x8c20a374) */
/* WARNING: Removing unreachable block (ram,0x8c20a36e) */
/* WARNING: Removing unreachable block (ram,0x8c20a36a) */
/* WARNING: Removing unreachable block (ram,0x8c20a372) */
/* WARNING: Removing unreachable block (ram,0x8c20a376) */
/* WARNING: Removing unreachable block (ram,0x8c20a37e) */
/* WARNING: Removing unreachable block (ram,0x8c20a384) */
/* WARNING: Removing unreachable block (ram,0x8c20a38e) */
/* WARNING: Removing unreachable block (ram,0x8c20a398) */
/* WARNING: Removing unreachable block (ram,0x8c20a3aa) */
/* WARNING: Removing unreachable block (ram,0x8c20a3ae) */
/* WARNING: Removing unreachable block (ram,0x8c20a3b6) */
/* WARNING: Removing unreachable block (ram,0x8c20a3bc) */
/* WARNING: Removing unreachable block (ram,0x8c20a3c6) */
/* WARNING: Removing unreachable block (ram,0x8c20a3d2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a366(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  _DAT_8c4a9d64 =
       (int)(*(float *)(ar4 + 0x70) * 255.0) << 0x18 | (int)(*(float *)(ar4 + 0x74) * 255.0) << 0x10
       | (int)(*(float *)(ar4 + 0x78) * 255.0) << 8 | (int)(*(float *)(ar4 + 0x7c) * 255.0);
  _DAT_8c4a9d68 =
       (int)(*(float *)(ar4 + 0x80) * 255.0) << 0x18 | (int)(*(float *)(ar4 + 0x84) * 255.0) << 0x10
       | (int)(*(float *)(ar4 + 0x88) * 255.0) << 8 | (int)(*(float *)(ar4 + 0x8c) * 255.0);
  _DAT_8c4a9d4c = *(undefined4 *)(ar4 + 0x94);
  _DAT_8c4a9d50 = *(undefined4 *)(ar4 + 0x98);
  _DAT_8c4a9d54 = *(undefined4 *)(ar4 + 0x9c);
  return 0;
}



/* FUN_8c20a420 @ 8c20a420 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a420(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&PTR_FUN_8c2756c0)[ar5])(ar4,ar5,ar6,ar7);
  _DAT_8c4a9c50 = _DAT_8c4a9c50 & 0xfff00000;
  return uVar1;
}



/* FUN_8c20a482 @ 8c20a482 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a482(uint ar4,uint ar5,uint ar6,uint ar7)

{
  uint uVar1;
  
  if (((int)ar4 <= (int)ar6) && ((int)ar5 <= (int)ar7)) {
    uVar1 = (uint)0x7ff;
    if ((int)uVar1 < (int)ar6) {
      ar6 = uVar1;
    }
    if ((int)uVar1 < (int)ar7) {
      ar7 = uVar1;
    }
    if (*0x8c4a9bd0 == 4) {
      ar6 = ar6 & 0xfffffffe;
      ar7 = ar7 & 0xfffffffe;
      ar4 = ar4 + 1 & 0xfffffffe;
      ar5 = ar5 + 1 & 0xfffffffe;
    }
    *0x8c4a9e60 = ar4 & uVar1 | (ar6 & uVar1) << 0x10;
    *0x8c4a9e64 = (ar7 & uVar1) << 0x10 | ar5 & uVar1;
    return 0;
  }
  return 0xdddd;
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
  
  if (*0x8c4a9be4 == 1) {
    iVar4 = *0x8c4a9e70;
    iVar3 = *0x8c4a9be8;
    *0x8c4a9dc4 = *0x8c4a9dc4 + iVar3 * iVar4 * -8;
    *0x8c4a9dc8 = *0x8c4a9dc8 + iVar3 * iVar4 * -8;
  }
  if (ar4 == 0) {
    *0x8c4a9be8 = 0;
  }
  else if (ar4 == 1) {
    if (((*0x8c4a9bcc & 1) == 1) || ((*0x8c4a9bcc & 0x20) != 0)) {
      *0x8c4a9be8 = 0x10;
    }
    else {
      *0x8c4a9be8 = 8;
    }
    iVar3 = *0x8c4a9be8 * *0x8c4a9e70 * 8;
    *0x8c4a9dc4 = *0x8c4a9dc4 + iVar3;
    *0x8c4a9dc8 = iVar3 + *0x8c4a9dc8;
  }
  uVar6 = *0x8c4a9e6c & 0xfff003ff;
  piVar2 = 0x8c4a9be8;
  if (*0x8c4a9be8 < *0x8c4a9c00) {
    piVar2 = 0x8c4a9c00;
  }
  uVar5 = *0x8c4a9bf0 - *piVar2;
  if (*0x8c4a9bf0 < *0x8c4a9c00 + uVar5) {
    uVar5 = *0x8c4a9bf0 - *0x8c4a9be8;
  }
  if (*0x8c4a9bf0 < uVar5) {
    *0x8c4a9bf0 = uVar5;
  }
  *0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar6;
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,0,ar6,ar7);
  (*(code *)puVar1)(0x5c,*0x8c4a9e6c,ar6,ar7);
  (*(code *)puVar1)(0x44,*0x8c4a9e74,ar6,ar7);
  *0x8c4a9be4 = ar4;
  if (ar5 != (int *)0x0) {
    *ar5 = *0x8c4a9be8;
  }
  return 0;
}



/* FUN_8c20a6f2 @ 8c20a6f2 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a6f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c21214e(ar4,ar5,ar6,ar7);
  FUN_8c205a40(ar4,ar5,ar6,ar7);
  return 0;
}



/* FUN_8c20a786 @ 8c20a786 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a786(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *0x8c4a9d90 = ar4 + -1;
  return 0;
}



/* FUN_8c20a790 @ 8c20a790 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a790(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = pvr_20a876((int)0xc4,ar5,ar6,ar7);
  uVar2 = (uint)0x3ff;
  *ar4 = uVar1 & uVar2;
  *ar5 = uVar1 >> 0x10 & uVar2;
  return 0;
}



/* FUN_8c20a7e0 @ 8c20a7e0 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a7e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((*0x8c4a9fdc != 1) &&
     (iVar1 = FUN_8c203298(*0x8c4a9fd8,ar5,ar6,ar7), iVar1 != 1)) {
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



/* pvr_20a844 @ 8c20a844 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_20a844(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xa05f8000) = ar5;
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
  
  puVar1 = (&FUN_8c20732e);
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
  
  puVar1 = (&FUN_8c20732e);
  for (; unaff_r14 <= unaff_r13; unaff_r14 = unaff_r14 + 0x20) {
    in_r0 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
  }
  return in_r0;
}



/* pvr_20a876 @ 8c20a876 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 pvr_20a876(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa05f8000 + ar4);
}



/* FUN_8c20a87c @ 8c20a87c callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a87c(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c20731e(ar4 + 0xa5000000,ar5,ar6,ar7);
  return 1;
}



/* FUN_8c20a892 @ 8c20a892 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a892(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c20731e(ar4,ar5 + 0xa5000000,ar6,ar7);
  return 1;
}



/* FUN_8c20a8e0 @ 8c20a8e0 callers=2 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a8e0(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint ar6_00;
  uint ar6_01;
  uint ar5_00;
  byte in_IMASK;
  char in_S;
  byte in_T;
  undefined4 *in_stack_ffffffdc;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    ar5_00 = ar6;
    FUN_8c20a84e(ar5,ar6,ar6,ar7,in_stack_ffffffdc);
    ar6_01 = ar6 & 0xffffffe0;
    if (ar6_01 == 0) {
      _DAT_8c4a9fd8 = 0;
    }
    else {
      do {
        ar7 = 0x18;
        ar5_00 = ar5;
        iVar1 = sh4_dmac_202f40(ar4 + 0x11000000,ar5,ar6_01,0x18,&stack0xffffffdc);
      } while (iVar1 == 0x100);
      _DAT_8c4a9fd8 = *in_stack_ffffffdc;
    }
    ar6_00 = ar6 & 0x1f;
    if (ar6_00 != 0) {
      ar5_00 = ar5 + ar6_01;
      FUN_8c20731e(ar4 + ar6_01 + -0x5c000000,ar5_00,ar6_00,ar7);
    }
    if (_DAT_8c4a9fdc == 1) {
      FUN_8c203320(_DAT_8c4a9fd8,ar5_00,ar6_00,ar7);
    }
  }
  else {
    FUN_8c20731e(ar4 + 0xa4000000,ar5,ar6,ar7);
  }
  return 1;
}



/* FUN_8c20a9c2 @ 8c20a9c2 callers=2 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20a9c2(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  FUN_8c20731e(ar4,ar5 + -0x5c000000,ar6,ar7);
  FUN_8c20a84e(ar4,ar6,ar6_00,ar7,ar4);
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
  
  puVar6 = 0xa05f6930;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(undefined4 *)(0x224 + in_VBR) = ar4;
  *puVar6 = 0;
  puVar7 = 0xa05f6938;
  *0xa05f6938 = 0;
  *0xa05f6900 = 0xffffffff;
  *0xa05f6908 = 0xffffffff;
  *puVar6 = 0x2807ec;
  *puVar7 = 0xe;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         (in_T & 1 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
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
  
  iVar1 = 0x8c4aa0b4;
  iVar9 = 4;
  iVar6 = 0;
  iVar10 = 0;
  iVar11 = 0;
  do {
    iVar2 = 0x8c4aa030;
    iVar8 = (1 - iVar10) * 0x18;
    *(undefined4 *)(ar4 + iVar8) = *(undefined4 *)(0x8c4aa030 + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 4) = *(undefined4 *)(iVar2 + -0xc + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 8) = *(undefined4 *)(iVar2 + -0x14 + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 0xc) = *(undefined4 *)(iVar2 + 4 + iVar6);
    *(undefined4 *)(ar4 + iVar8 + 0x10) = *(undefined4 *)(iVar2 + -8 + iVar6);
    iVar2 = 0x8c4a9dc4;
    *(undefined4 *)(iVar8 + ar4 + 0x14) = *(undefined4 *)(iVar1 + 0x24 + iVar11);
    iVar10 = iVar10 + 1;
    puVar4 = (undefined4 *)(iVar2 + iVar11);
    iVar11 = iVar11 + 4;
    *(undefined4 *)(ar4 + 0x38 + iVar9) = *puVar4;
    puVar3 = 0x8c4a9f08;
    iVar2 = 0x8c4a9ee0;
    iVar9 = iVar9 + -4;
    iVar6 = iVar6 + 0x20;
  } while (iVar10 < 2);
  if (*0x8c4a9ef0 == 0) {
    puVar3 = (uint *)(0x8c4a9ee0 + 0x28);
    *(undefined4 *)(ar4 + 0x30) = *(undefined4 *)(0x8c4a9ee0 + (*puVar3 & 1) * 4);
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(iVar2 + (1 - (*puVar3 & 1)) * 4);
  }
  else {
    *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)((*0x8c4a9f08 & 1) * 4 + 0x8c4a9ee0);
    *(uint *)(ar4 + 0x30) = puVar3[-9 - (*puVar3 & 1)];
  }
  *(undefined4 *)(ar4 + 0x40) = *0x8c4a9e60;
  uVar7 = 0;
  *(undefined4 *)(ar4 + 0x44) = *0x8c4a9e64;
  iVar6 = 0;
  *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(ar4 + 0x4c) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(iVar1 + 0x20);
  do {
    iVar10 = 0x8c4a9f2c + 4;
    *(undefined4 *)(ar4 + 0x58 + uVar7) = *(undefined4 *)(0x8c4a9f2c + iVar6);
    iVar9 = 0x8c4aa070;
    *(undefined4 *)(ar4 + uVar7 + 0x6c) = *(undefined4 *)(iVar10 + iVar6);
    *(undefined4 *)(0x80 + ar4 + uVar7) = *(undefined4 *)(iVar9 + uVar7);
    puVar4 = (undefined4 *)(iVar1 + 0x2c + uVar7);
    puVar5 = (undefined4 *)(0x94 + ar4 + uVar7);
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

undefined4 FUN_8c20ad04(int ar4,int ar5,int ar6,int ar7,int s0)

{
  uint uVar1;
  uint ar7_00;
  
  uVar1 = 0;
  if (ar5 == 3) {
    uVar1 = 0x1000000;
  }
  ar7_00 = ar7 - 1U & 0x3f;
  uVar1 = (s0 - 1U & 0x3f) << 8 | ar7_00 | uVar1;
  if (ar6 != 0) {
    uVar1 = 0x10000 | uVar1;
  }
  pvr_20a844((int)0x14c,uVar1,ar6,ar7_00);
  pvr_20a844((int)0x148,*(undefined4 *)(ar4 + 0x1c),ar6,ar7_00);
  return 0;
}



/* FUN_8c20ade0 @ 8c20ade0 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20ade0(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  uint ar6_00;
  int iVar2;
  uint ar7_00;
  uint ar7_01;
  uint uVar3;
  uint uVar4;
  uint ain0;
  
  uVar4 = _DAT_8c4a9e6c & 0xfff003ff;
  ar5_00 = _DAT_8c4a9eac & 0xffff;
  iVar1 = _DAT_8c4a9c0c;
  iVar2 = _DAT_8c4a9c08;
  uVar3 = _DAT_8c4a9bf0;
  if (ar4 == 0) {
    ar5_00 = _DAT_8c4a9eac & 0xff00;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && ((_DAT_8c4a9bcc & 3) == 0)) &&
          (((_DAT_8c4a9bcc & 0x20) != 0 &&
           (((_DAT_8c4a9bcc & 1) == 1 || ((_DAT_8c4a9bcc & 0x2c) != 0x20)))))) {
    ar5_00 = 0x471;
    iVar1 = _DAT_8c4a9c0c + 0xc;
    iVar2 = _DAT_8c4a9c08 + 0xc;
    uVar3 = 0xd6;
  }
  ain0 = _DAT_8c4a9eac & 0xffff0000 | ar5_00;
  ar6_00 = (iVar1 + _DAT_8c4a9c00) * 0x10000;
  ar7_00 = iVar2 + _DAT_8c4a9c00 | ar6_00;
  ar7_01 = ar7_00;
  FUN_8c2079fc(ar4,ar5_00,ar6_00,ar7_00,ain0);
  pvr_20a844(0x44,_DAT_8c4a9e74 & 0xfffffffe,ar6_00,ar7_01);
  pvr_20a844(0xe8,_DAT_8c4a9eb0 | 8,ar6_00,ar7_01);
  pvr_20a844(0xf0,ar7_00,ar6_00,ar7_01);
  pvr_20a844(0x5c,uVar4 | (uVar3 & 0x3ff) << 10,ar6_00,ar7_01);
  pvr_20a844(0xf4,ain0,ar6_00,ar7_01);
  _DAT_8c4a9e54 = 1;
  return 0;
}



/* FUN_8c20aed8 @ 8c20aed8 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20aed8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *0x8c4aa098 = ar4;
  return 0;
}



/* FUN_8c20af20 @ 8c20af20 callers=1 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

uint FUN_8c20af20(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined *ar5_00;
  
  ar5_00 = &DAT_8c275714;
  _DAT_ff000038 = *_DAT_8c4aa21c >> 0x18;
  iVar1 = 4;
  uVar2 = *_DAT_8c4aa21c & 0x3ffffff | 0xe0000000;
  _DAT_ff00003c = _DAT_ff000038;
  do {
    FUN_8c207300(uVar2,ar5_00,0x20,ar7);
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  uVar2 = *_DAT_8c4aa21c;
  *_DAT_8c4aa21c = uVar2 + 0x80;
  return uVar2 + 0x80;
}



/* FUN_8c20af22 @ 8c20af22 callers=0 callees=0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int FUN_8c20af22(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *in_r3;
  int iVar1;
  uint ar4_00;
  undefined *ar5_00;
  
  ar5_00 = &DAT_8c275714;
  _DAT_ff000038 = *(uint *)*in_r3 >> 0x18;
  iVar1 = 4;
  ar4_00 = *(uint *)*in_r3 & 0x3ffffff | 0xe0000000;
  _DAT_ff00003c = _DAT_ff000038;
  do {
    FUN_8c207300(ar4_00,ar5_00,0x20,ar7);
    iVar1 = iVar1 + -1;
    ar4_00 = ar4_00 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  iVar1 = *_DAT_8c4aa21c;
  *_DAT_8c4aa21c = iVar1 + 0x80;
  return iVar1 + 0x80;
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
  int ar5_00;
  undefined4 a5;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar6;
  
  puVar3 = (&FUN_8c212148);
  iVar1 = 0x8c4aa1a0;
  uVar6 = 0;
  if ((ar4 == 0) || (ar5 == 0)) {
    uVar6 = 0xe;
  }
  else {
    *(int *)(0x8c4aa1a0 + 0x3c) = ar4;
    *(int *)(iVar1 + 0x40) = ar5;
    *(undefined4 *)(iVar1 + 0x44) = ar7;
    piVar2 = 0x8c4a9be0;
    *(int *)(iVar1 + 0x18) = ar6;
    *piVar2 = ar6;
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar5 = (*(code *)puVar3)(ar4,ar5,ar6,ar7);
    if (iVar5 == 0x80000000) {
      if (*(int *)(ar4 + 0x18) == *(int *)(ar5 + 0x18)) {
        if (*(int *)(ar4 + 0x14) == *(int *)(ar5 + 0x14)) {
          *0x8c4a9ee0 = *(undefined4 *)(ar4 + 0x1c);
          puVar4 = 0x8c4a9ee8;
          *0x8c4a9ee8 = 0;
          *0x8c4a9ee4 = *(undefined4 *)(ar5 + 0x1c);
          *0x8c4a9eec = 0;
          puVar3 = (&pvr_20a844);
          pvr_20a844(0x50,puVar4[-0x1b],ar6_00,ar7_00);
          (*(code *)puVar3)(0x54,*0x8c4a9e7c,ar6_00,ar7_00);
          (*(code *)puVar3)(0x60,*0x8c4a9ee0,ar6_00,ar7_00);
          (*(code *)puVar3)(100,*0x8c4a9ee4,ar6_00,ar7_00);
          puVar4 = 0x8c4a9ee0;
          *0x8c4a9e7c = *0x8c4a9ee0;
          puVar4[-0x18] = *0x8c4a9ee4;
          if (ar6 == 1) {
            *0x8c4a9dc4 = 0;
            *0x8c4a9dc8 = 0;
            (*(code *)puVar3)(0x50,*0x8c4a9e7c,ar6_00,ar7_00);
            a5 = *0x8c4a9e80;
          }
          else {
            (*(code *)puVar3)(0x50,*0x8c4a9e7c,ar6_00,ar7_00);
            a5 = *0x8c4a9e7c;
          }
          (*(code *)puVar3)(0x54,a5,ar6_00,ar7_00);
          *0x8c4a9e54 = 1;
          *0x8c4a9d94 = ar7;
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
      iVar5 = FUN_8c2120c0((int)0x800,ar5_00,ar6_00,ar7_00);
      if (iVar5 == 0xb00) {
        FUN_8c212140(0x80000000,ar5_00,ar6_00,ar7_00);
        uVar6 = FUN_8c211f40(*(undefined4 *)(iVar1 + 0x54),ar5_00,ar6_00,ar7_00);
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
  
  a4 = 0x10000000;
  puVar2 = (&sh4_dmac_202f40);
  uVar1 = 0xf0ffffff;
  uVar7 = 0;
  puVar4 = (undefined4 *)(0x8c4a9f2c + *0x8c4a9f08 * 4);
  piVar5 = (int *)(0x8c4a9f7c + *0x8c4a9f08 * 4);
  iVar6 = (int)0x100;
  do {
    if ((*piVar5 != 0) && (ar4 != uVar7)) {
      if ((*0x8c4a9fe0 == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
        *(uint *)*0x8c4a9fe4 = *(uint *)*0x8c4a9fe4 & uVar1 | uVar7 << 0x18;
        do {
          iVar3 = (*(code *)puVar2)(a4,*0x8c4a9fe4,*0x8c4a9fe8,0x10);
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b260(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffd8;
  
  if (DAT_8c275710 == 0) {
    if (_DAT_8c4a9ef0 == 0) {
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 1;
      _DAT_8c4a9f20 = 1;
    }
    else {
      _DAT_8c4aa0fc = _DAT_ffd8000c;
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f18 = 0;
      _DAT_8c4a9f14 = _DAT_8c4aa014;
      _DAT_8c4a9f20 = 1;
      _DAT_8c4aa0b8 = 0;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      if ((_DAT_8c4a9fcc & 0x20) == 0) {
        iVar6 = _DAT_8c4a9f08 * 4;
        iVar5 = _DAT_8c4a9f08 * 4;
        iVar7 = _DAT_8c4a9fd0 * 0x10;
        iVar4 = _DAT_8c4a9fd0 * 0x10;
        do {
          ar7 = 0x10;
          ar5 = *(undefined **)(iVar6 + -0x73b560d4 + iVar4);
          ar6 = *(int *)(iVar5 + -0x73b56084 + iVar7) + 0x20;
          iVar2 = sh4_dmac_202f40(0x10000000,ar5,ar6,0x10,&stack0xffffffd8);
        } while (iVar2 == 0x100);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
      else {
        _DAT_ff000038 = 0x10;
        _DAT_ff00003c = 0x10;
        ar5 = &DAT_8c26d3f8;
        ar6 = 4;
        FUN_8c20731e(0xe0000000,&DAT_8c26d3f8,4,ar7);
        FUN_8c20b160(_DAT_8c4a9fd0,ar5,ar6,ar7,in_stack_ffffffd8);
      }
    }
  }
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  do {
    if (_DAT_8c4a9f20 == 0) goto LAB_8c20b3e0;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4 + _DAT_8c4a9dd0 + 1U);
  bVar1 = true;
LAB_8c20b3e0:
  if (bVar1) {
    _DAT_8c4a9db4 = 0;
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9f20 == 0) goto LAB_8c20b468;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c < 0x15);
    bVar1 = true;
LAB_8c20b468:
    if (bVar1) {
      FUN_8c2062c8(4,ar5,ar6,ar7);
    }
  }
  _DAT_8c4a9f08 = _DAT_8c4a9f08 + 1 & 3;
  *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 0;
  if ((_DAT_8c4a9ef0 == 1) || (DAT_8c275710 == 1)) {
    uVar3 = _DAT_8c4a9f08 & 1;
    pvr_20a844(8,1,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
    iVar7 = uVar3 * 0x20;
    pvr_20a844(0x124,*(undefined4 *)(iVar7 + -0x73b55fdc),ar6,ar7);
    pvr_20a844(300,*(undefined4 *)(iVar7 + -0x73b55fd8),ar6,ar7);
    pvr_20a844(0x128,*(undefined4 *)(iVar7 + -0x73b55fd0),ar6,ar7);
    pvr_20a844(0x130,*(undefined4 *)(iVar7 + -0x73b55fcc),ar6,ar7);
    pvr_20a844(0x164,*(undefined4 *)(iVar7 + -0x73b55fd4),ar6,ar7);
    ar5_00 = 0x80000000;
    pvr_20a844(0x144,0x80000000,ar6,ar7);
    pvr_20a876(0x144,ar5_00,ar6,ar7);
    _DAT_8c4a9f18 = 0;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    if (DAT_8c275710 != 0) {
      _DAT_8c4a9f10 = _DAT_8c4a9f08;
      *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
      _DAT_8c4a9db8 = 1;
      _DAT_8c4a9f28 = 1;
    }
  }
  return 0;
}



/* FUN_8c20b5a0 @ 8c20b5a0 callers=2 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b5a0(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  _DAT_8c4a9db4 = 1;
  uVar2 = _DAT_8c4a9f10 & 1;
  if ((_DAT_8c4a9bb0 & 0x10) != 0) {
    pvr_20a844(8,2,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
  }
  iVar3 = uVar2 * 0x20;
  pvr_20a844(0x2c,*(undefined4 *)(iVar3 + -0x73b55fe4),ar6,ar7);
  pvr_20a844(0x20,*(undefined4 *)(iVar3 + -0x73b55fd0),ar6,ar7);
  pvr_20a844(0x60,ar4[2],ar6,ar7);
  pvr_20a844(0x48,*ar4,ar6,ar7);
  pvr_20a844(0x4c,ar4[1],ar6,ar7);
  pvr_20a844(0x68,ar4[3],ar6,ar7);
  uVar4 = ar4[4];
  pvr_20a844(0x6c,uVar4,ar6,ar7);
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  do {
    if (_DAT_8c4a9db8 == 0) goto LAB_8c20b63e;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,uVar4,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
  bVar1 = true;
LAB_8c20b63e:
  if (bVar1) {
    pvr_20a844(0x48,_DAT_8c4a9e78,ar6,ar7);
    pvr_20a844(0x4c,_DAT_8c4a9e70,ar6,ar7);
    pvr_20a844(0x68,_DAT_8c4a9e60,ar6,ar7);
    uVar4 = _DAT_8c4a9e64;
    pvr_20a844(0x6c,_DAT_8c4a9e64,ar6,ar7);
    _DAT_8c4a9db8 = 0;
    _DAT_8c4a9f24 = 0;
    uVar4 = FUN_8c210cc0(DAT_8c27570c,uVar4,ar6,ar7);
    return uVar4;
  }
  pvr_20a844(0x8c,_DAT_8c4a9d60,ar6,ar7);
  pvr_20a844(0x88,_DAT_8c4a9d5c & 0xfffffff0,ar6,ar7);
  uVar4 = pvr_20a844(0x14,0xffffffff,ar6,ar7);
  return uVar4;
}



/* FUN_8c20b708 @ 8c20b708 callers=2 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b708(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((*(uint *)(ar4 + 0x18) & 4) == 0) && (*(int *)(ar4 + 4) == 1)) {
    uVar1 = *(uint *)(ar4 + 8) & 0x38000000;
    if (uVar1 == 0) {
      ar4 = 3;
    }
    else if (uVar1 == 0x8000000) {
      ar4 = 1;
    }
    else if (uVar1 == 0x10000000) {
      ar4 = 2;
    }
    *0x8c4aa110 = *0x8c4a9e78 & 0xfffffff8 | ar4;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20b7a0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 **ar5_00;
  undefined4 **ar6_00;
  undefined4 **a7;
  int iVar5;
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
  
  puStack_68 = DAT_8c26d400;
  uStack_64 = DAT_8c26d404;
  uStack_60 = DAT_8c26d408;
  uStack_5c = DAT_8c26d40c;
  uStack_58 = DAT_8c26d410;
  uStack_54 = DAT_8c26d414;
  uStack_50 = DAT_8c26d418;
  uStack_4c = DAT_8c26d41c;
  if (((((_DAT_8c4a9bb0 & 0x40) != 0) && (_DAT_8c4aa05c != 0)) && (_DAT_8c4aa064 != 0)) &&
     (_DAT_8c4a9d70 != 0)) {
    FUN_8c20af20(ar4,ar5,ar6,ar7);
  }
  iVar5 = _DAT_8c4a9f08 * 4;
  apuStack_34[0] = (undefined4 *)(iVar5 + -0x73b560d4);
  ar5_00 = apuStack_34 + 2;
  ar6_00 = apuStack_34 + 1;
  apuStack_34[1] = (undefined4 *)(iVar5 + -0x73b560c4);
  apuStack_34[2] = (undefined4 *)(iVar5 + -0x73b560b4);
  a7 = apuStack_34 + 4;
  apuStack_34[3] = (undefined4 *)(iVar5 + -0x73b560a4);
  apuStack_34[4] = (undefined4 *)(iVar5 + -0x73b56094);
  aiStack_48[0] = iVar5 + -0x73b56084;
  aiStack_48[1] = iVar5 + -0x73b56074;
  aiStack_48[2] = iVar5 + -0x73b56064;
  aiStack_48[3] = iVar5 + -0x73b56054;
  aiStack_48[4] = iVar5 + -0x73b56044;
  *(undefined4 *)(iVar5 + -0x73b560d4) = *_DAT_8c4aa218;
  *(undefined4 *)(iVar5 + -0x73b560c4) = _DAT_8c4aa218[1];
  *(undefined4 *)(iVar5 + -0x73b560b4) = _DAT_8c4aa218[2];
  *(undefined4 *)(iVar5 + -0x73b560a4) = _DAT_8c4aa218[3];
  *(undefined4 *)(iVar5 + -0x73b56094) = _DAT_8c4aa218[4];
  if (_DAT_8c4a9ef0 == 0) {
    uStack_74 = 0;
    do {
      if ((int)uStack_74 < 0) {
        uVar2 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) != 0) {
        iVar5 = uStack_74 * 4;
        iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_74];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        *(int *)aiStack_48[uStack_74] = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)0x4;
        FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
        *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
      }
      uStack_74 = uStack_74 + 1;
    } while ((int)uStack_74 < 5);
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uVar2] = 0;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    uVar2 = 0;
LAB_8c20b91a:
    if ((int)uVar2 < 0) {
      uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar4 = 1 << (uVar2 & 0x1f);
    }
    if ((uVar4 & _DAT_8c4aa014) == 0) goto LAB_8c20b9b4;
    if (*(uint *)(uVar2 * 4 + -0x73b55f20) < *(uint *)aiStack_48[uVar2]) {
      *(undefined4 *)(uVar2 * 4 + -0x73b55f20) = *(undefined4 *)aiStack_48[uVar2];
    }
    ar5_00 = (undefined4 **)(uVar2 * 4);
    if ((undefined4 *)**(uint **)((int)ar5_00 + (int)aiStack_48) <= ar5_00[-0x1ced57e4])
    goto LAB_8c20b9b4;
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) != 0) {
        puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
        FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
        ar6_00 = (undefined4 **)0x4;
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
        *(undefined4 *)aiStack_48[uVar2] = 0x20;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    goto LAB_8c20bd1e;
  }
  if ((_DAT_8c4a9fcc & 0x20) == 0) {
    FUN_8c210dfc(&DAT_8c4aa218,ar5_00,ar6_00,a7);
    uStack_78 = 0;
    do {
      iVar5 = uStack_78 * 4;
      iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_78];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      ar5_00 = (undefined4 **)&DAT_8c26d3f8;
      *(int *)aiStack_48[uStack_78] = (iVar1 >> 2) << 2;
      ar6_00 = (undefined4 **)0x4;
      FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
      *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) != 0) {
        iVar5 = uStack_78 * 4;
        if (*(uint *)(iVar5 + -0x73b55f20) < *(uint *)aiStack_48[uStack_78]) {
          *(undefined4 *)(iVar5 + -0x73b55f20) = *(undefined4 *)aiStack_48[uStack_78];
        }
        if (*(uint *)(&DAT_8c4aa070 + iVar5) < *(uint *)aiStack_48[uStack_78]) {
          uVar2 = 0;
          do {
            if ((int)uVar2 < 0) {
              uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            }
            else {
              uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & _DAT_8c4aa014) == 0) {
              *(undefined4 *)aiStack_48[uVar2] = 0;
            }
            else {
              puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
              FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
              ar6_00 = (undefined4 **)0x4;
              ar5_00 = (undefined4 **)&DAT_8c26d3f8;
              FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
              *(undefined4 *)aiStack_48[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 5);
LAB_8c20bd1e:
          FUN_8c2062c8(2,ar5_00,ar6_00,a7);
          break;
        }
      }
      uStack_78 = uStack_78 + 1;
    } while ((int)uStack_78 < 5);
    goto LAB_8c20bd36;
  }
  uStack_78 = 0;
  do {
    if (uStack_78 != _DAT_8c4a9fd0) {
      if ((int)uStack_78 < 0) {
        uVar2 = 1 >> (~uStack_78 & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << (uStack_78 & 0x1f);
      }
      if ((uVar2 & _DAT_8c4aa014) == 0) {
        *(undefined4 *)aiStack_48[uStack_78] = 0;
      }
      else {
        iVar5 = uStack_78 * 4;
        piVar3 = aiStack_48 + uStack_78;
        iVar1 = *(int *)(iVar5 + _DAT_8c4aa21c) - *apuStack_34[uStack_78];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (undefined4 **)&DAT_8c26d3f8;
        *(int *)*piVar3 = (iVar1 >> 2) << 2;
        ar6_00 = (undefined4 **)0x4;
        FUN_8c20731e(*(undefined4 *)(iVar5 + _DAT_8c4aa21c),&DAT_8c26d3f8,4,a7);
        *(int *)(iVar5 + _DAT_8c4aa21c) = *(int *)(iVar5 + _DAT_8c4aa21c) + 0x20;
        if (*(uint *)(iVar5 + -0x73b55f20) < *(uint *)*piVar3) {
          *(undefined4 *)(uStack_78 * 4 + -0x73b55f20) = *(undefined4 *)aiStack_48[uStack_78];
        }
        if (*(uint *)(&DAT_8c4aa070 + uStack_78 * 4) < *(uint *)aiStack_48[uStack_78]) {
          uVar2 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    uStack_78 = uStack_78 + 1;
  } while ((int)uStack_78 < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar2 = uVar2 + 1;
  if (4 < (int)uVar2) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar2 == _DAT_8c4a9fd0) {
LAB_8c20bb3e:
      *(undefined4 *)aiStack_48[uVar2] = 0;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & _DAT_8c4aa014) == 0) goto LAB_8c20bb3e;
      puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | uVar2 << 0x18);
      FUN_8c20731e(*apuStack_34[uVar2],&puStack_68,0x20,a7);
      ar6_00 = (undefined4 **)0x4;
      ar5_00 = (undefined4 **)&DAT_8c26d3f8;
      FUN_8c20731e(*apuStack_34[uVar2] + 0x20,&DAT_8c26d3f8,4,a7);
      *(undefined4 *)aiStack_48[uVar2] = 0x20;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  FUN_8c2062c8(2,ar5_00,ar6_00,a7);
LAB_8c20bb6c:
  if (*(int *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) == *apuStack_34[_DAT_8c4a9fd0]) {
    _DAT_ff000038 = 0x10;
    _DAT_ff00003c = 0x10;
    puStack_68 = (undefined4 *)((uint)puStack_68 & 0xf0ffffff | (_DAT_8c4a9fd0 & 7) << 0x18);
    ar5_00 = &puStack_68;
    ar6_00 = (undefined4 **)0x20;
    FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,ar5_00,0x20,
                 a7);
  }
LAB_8c20bd36:
  DAT_8c275710 = 0;
  DAT_8c27570c = DAT_8c27570c + 1 & 1;
  FUN_8c210cc0(DAT_8c27570c,ar5_00,ar6_00,a7);
  return 0;
}



/* FUN_8c20bdc0 @ 8c20bdc0 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20bdc0(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 a5;
  undefined4 uVar10;
  uint uStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_60 = DAT_8c26d424;
  uStack_5c = DAT_8c26d428;
  uStack_58 = DAT_8c26d42c;
  uStack_54 = DAT_8c26d430;
  uStack_50 = DAT_8c26d434;
  uStack_4c = DAT_8c26d438;
  uStack_48 = DAT_8c26d43c;
  uStack_44 = DAT_8c26d440;
  puVar7 = &uStack_60;
  if (_DAT_8c4a9ef0 == 1) {
    _DAT_ff000038 = 0x10;
    _DAT_ff00003c = 0x10;
    uStack_60 = DAT_8c26d424 & 0xf0ffffff | (_DAT_8c4a9fd0 & 7) << 0x18;
    ar6 = 0x20;
    FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,puVar7,0x20,
                 ar7);
    ar5 = puVar7;
  }
  iVar4 = FUN_8c20b708(ar4,ar5,ar6,ar7);
  if (iVar4 != 0) {
    FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
    return iVar4;
  }
  if ((*(uint *)(ar4 + 0x18) & 0x10) == 0) {
    _DAT_8c4aa114 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar5 = pvr_20a876(0xe4,ar5,ar6,ar7);
    _DAT_8c4aa114 = (uVar5 & 0x1f) << 3;
  }
  uVar5 = _DAT_8c4a9f08;
  _DAT_8c4aa118 = *(uint *)(ar4 + 0x1c) | 0x1000000;
  puVar7 = (uint *)(_DAT_8c4a9f08 * 4);
  uVar9 = _DAT_8c4a9f08 & 1;
  puStack_6c = puVar7 + -0x1ced5835;
  puStack_70 = puVar7 + -0x1ced5821;
  if (_DAT_8c4a9ef0 == 0) {
    _DAT_8c4a9f1c = 0;
    iVar4 = 0;
    do {
      if (_DAT_8c4a9db8 == 0) goto LAB_8c20bf52;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
    iVar4 = 1;
LAB_8c20bf52:
    if (iVar4 != 0) {
      _DAT_8c4a9f24 = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  puVar7[-0x1ced5835] = *_DAT_8c4aa218;
  puVar7[-0x1ced5831] = _DAT_8c4aa218[1];
  puVar7[-0x1ced582d] = _DAT_8c4aa218[2];
  puVar7[-0x1ced5829] = _DAT_8c4aa218[3];
  puVar7[-0x1ced5825] = _DAT_8c4aa218[4];
  uStack_74 = 0;
  do {
    iVar4 = uStack_74 * 4;
    iVar8 = *(int *)(_DAT_8c4aa21c + iVar4) - *puStack_6c;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    *puStack_70 = (iVar8 >> 2) << 2;
    if ((_DAT_8c4a9ef0 == 0) || (uStack_74 != _DAT_8c4a9fd0)) {
      if ((int)uStack_74 < 0) {
        uVar6 = 1 >> (~uStack_74 & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << (uStack_74 & 0x1f);
      }
      if ((uVar6 & _DAT_8c4aa014) != 0) {
        ar6 = 4;
        puVar7 = (uint *)&DAT_8c26d420;
        FUN_8c20731e(*(undefined4 *)(iVar4 + _DAT_8c4aa21c),&DAT_8c26d420,4,ar7);
        *(int *)(iVar4 + _DAT_8c4aa21c) = *(int *)(iVar4 + _DAT_8c4aa21c) + 0x20;
        if (*(uint *)(&DAT_8c4aa070 + iVar4) < *puStack_70) {
          FUN_8c2062c8(2,puVar7,ar6,ar7);
        }
      }
    }
    uVar10 = _DAT_8c4a9d60;
    puStack_70 = puStack_70 + 4;
    puStack_6c = puStack_6c + 4;
    uStack_74 = uStack_74 + 1;
  } while (uStack_74 < 5);
  _DAT_8c4a9f1c = 0;
  bVar1 = false;
  ar5 = puVar7;
  do {
    if (_DAT_8c4a9db4 == 0) goto LAB_8c20c050;
    (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
  } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
  bVar1 = true;
LAB_8c20c050:
  if (!bVar1) {
    _DAT_8c4a9f24 = 1;
    _DAT_8c4a9db8 = 1;
    iVar4 = uVar9 << 5;
    if (_DAT_8c4a9ef0 == 0) {
      pvr_20a844(8,1,ar6,ar7);
      pvr_20a844(8,0,ar6,ar7);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),ar6,ar7);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),ar6,ar7);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),ar6,ar7);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),ar6,ar7);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),ar6,ar7);
      ar5 = (uint *)0x80000000;
      pvr_20a844(0x144,0x80000000,ar6,ar7);
      pvr_20a876(0x144,ar5,ar6,ar7);
    }
    _DAT_8c4a9f1c = 0;
    bVar1 = false;
    do {
      if (_DAT_8c4a9db4 == 0) goto LAB_8c20c18e;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
    bVar1 = true;
LAB_8c20c18e:
    if (bVar1) {
      _DAT_8c4a9f24 = 0;
      FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
      return 0xfffffffe;
    }
    _DAT_8c4a9f10 = uVar5;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
    _DAT_8c4a9f18 = 0;
    if (_DAT_8c4a9ef0 == 0) {
      uVar5 = 0xff;
    }
    else {
      _DAT_ff000038 = 0x10;
      _DAT_ff00003c = 0x10;
      ar6 = 4;
      ar5 = (uint *)&DAT_8c26d420;
      FUN_8c20731e(*(uint *)(_DAT_8c4aa21c + _DAT_8c4a9fd0 * 4) & 0x3ffffff | 0xe0000000,
                   &DAT_8c26d420,4,ar7);
      uVar5 = _DAT_8c4a9fd0;
    }
    FUN_8c20b160(uVar5,ar5,ar6,ar7,iVar4);
    uVar3 = _DAT_8c4a9e64;
    uVar2 = _DAT_8c4a9e60;
    uVar5 = _DAT_8c4a9bf8;
    if (*(uint *)(ar4 + 0x10) <= _DAT_8c4a9bf8) {
      uVar5 = *(uint *)(ar4 + 0x10) - 1;
    }
    a5 = 0;
    uVar9 = _DAT_8c4a9bf4;
    if (*(uint *)(ar4 + 0xc) <= _DAT_8c4a9bf4) {
      uVar9 = *(uint *)(ar4 + 0xc) - 1;
    }
    FUN_8c20a482(0,0,uVar9,uVar5);
    _DAT_8c4aa11c = _DAT_8c4a9e60;
    _DAT_8c4aa120 = _DAT_8c4a9e64;
    _DAT_8c4a9e60 = uVar2;
    _DAT_8c4a9e64 = uVar3;
    FUN_8c20b5a0(&DAT_8c4aa110,a5,uVar9,uVar5);
    _DAT_8c4a9d60 = uVar10;
    FUN_8c210cc0(DAT_8c27570c,a5,uVar9,uVar5);
    if (_DAT_8c4a9ef0 == 1) {
      _DAT_8c4a9f1c = 0;
      bVar1 = false;
      do {
        if (_DAT_8c4a9db4 == 0) goto LAB_8c20c350;
        (*_DAT_8c4a9e14)(_DAT_8c4a9e18,a5,uVar9,uVar5);
      } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
      bVar1 = true;
LAB_8c20c350:
      if (bVar1) {
        _DAT_8c4a9f24 = 0;
        return 0xfffffffd;
      }
      pvr_20a844(8,1,uVar9,uVar5);
      pvr_20a844(8,0,uVar9,uVar5);
      pvr_20a844(0x124,*(undefined4 *)(iVar4 + -0x73b55fdc),uVar9,uVar5);
      pvr_20a844(300,*(undefined4 *)(iVar4 + -0x73b55fd8),uVar9,uVar5);
      pvr_20a844(0x128,*(undefined4 *)(iVar4 + -0x73b55fd0),uVar9,uVar5);
      pvr_20a844(0x130,*(undefined4 *)(iVar4 + -0x73b55fcc),uVar9,uVar5);
      pvr_20a844(0x164,*(undefined4 *)(iVar4 + -0x73b55fd4),uVar9,uVar5);
      uVar10 = 0x80000000;
      pvr_20a844(0x144,0x80000000,uVar9,uVar5);
      pvr_20a876(0x144,uVar10,uVar9,uVar5);
    }
    DAT_8c275710 = 0;
    _DAT_8c4a9e30 = &stack0xffffff88;
    return 0;
  }
override_prt_8c20c05a_7a4d7f16:
  _DAT_8c4a9db8 = 0;
  FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  return 0xffffffff;
}



/* FUN_8c20c416 @ 8c20c416 callers=0 callees=2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined1 * FUN_8c20c416(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint ar6_00;
  uint ar7_00;
  int iVar7;
  
  puVar4 = (undefined1 *)FUN_8c20b708(ar4,ar5,ar6,ar7);
  uVar3 = _DAT_8c4a9f08;
  if (puVar4 == (undefined1 *)0x0) {
    _DAT_8c4aa114 = (*(uint *)(ar4 + 0xc) & 0xfffffff) >> 2;
    _DAT_8c4aa118 = *(uint *)(ar4 + 0x1c) | 0x1000000;
    _DAT_8c4a9f1c = 0;
    puVar4 = &DAT_8c4a9db8;
    bVar1 = false;
    do {
      if (_DAT_8c4a9db8 == 0) goto LAB_8c20c4ce;
      (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
      puVar4 = &DAT_8c4a9dd4;
    } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd4);
    bVar1 = true;
LAB_8c20c4ce:
    if (!bVar1) {
      _DAT_8c4a9f1c = 0;
      bVar1 = false;
      do {
        if (_DAT_8c4a9db4 == 0) goto LAB_8c20c504;
        (*_DAT_8c4a9e14)(_DAT_8c4a9e18,ar5,ar6,ar7);
        puVar4 = &DAT_8c4a9dd0;
      } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
      bVar1 = true;
LAB_8c20c504:
      uVar2 = _DAT_8c4a9e64;
      uVar6 = _DAT_8c4a9e60;
      if (bVar1) {
        puVar5 = (undefined4 *)&DAT_8c4a9db4;
      }
      else {
        _DAT_8c4a9f24 = 1;
        ar7_00 = *(uint *)(ar4 + 0x10);
        ar6_00 = *(uint *)(ar4 + 0xc);
        if (_DAT_8c4a9bf8 < ar7_00) {
          ar7_00 = _DAT_8c4a9bf8;
        }
        a5 = 0;
        if (_DAT_8c4a9bf4 < ar6_00) {
          ar6_00 = _DAT_8c4a9bf4;
        }
        FUN_8c20a482(0,0,ar6_00,ar7_00);
        _DAT_8c4aa11c = _DAT_8c4a9e60;
        _DAT_8c4aa120 = _DAT_8c4a9e64;
        _DAT_8c4a9e60 = uVar6;
        _DAT_8c4a9e64 = uVar2;
        puVar4 = (undefined1 *)FUN_8c20b5a0(&DAT_8c4aa110,a5,ar6_00,ar7_00);
        _DAT_8c4a9f1c = 0;
        bVar1 = false;
        do {
          if (_DAT_8c4a9db4 == 0) goto LAB_8c20c5e8;
          (*_DAT_8c4a9e14)(_DAT_8c4a9e18,a5,ar6_00,ar7_00);
          puVar4 = &DAT_8c4a9dd0;
        } while (_DAT_8c4a9f1c <= _DAT_8c4a9dd0);
        bVar1 = true;
LAB_8c20c5e8:
        if (!bVar1) {
          pvr_20a844(8,1,ar6_00,ar7_00);
          pvr_20a844(8,0,ar6_00,ar7_00);
          iVar7 = (uVar3 & 1) * 0x20;
          pvr_20a844(0x124,*(undefined4 *)(iVar7 + -0x73b55fdc),ar6_00,ar7_00);
          pvr_20a844(300,*(undefined4 *)(iVar7 + -0x73b55fd8),ar6_00,ar7_00);
          pvr_20a844(0x128,*(undefined4 *)(iVar7 + -0x73b55fd0),ar6_00,ar7_00);
          pvr_20a844(0x130,*(undefined4 *)(iVar7 + -0x73b55fcc),ar6_00,ar7_00);
          pvr_20a844(0x164,*(undefined4 *)(iVar7 + -0x73b55fd4),ar6_00,ar7_00);
          uVar6 = 0x80000000;
          pvr_20a844(0x144,0x80000000,ar6_00,ar7_00);
          pvr_20a876(0x144,uVar6,ar6_00,ar7_00);
          _DAT_8c4a9f18 = 0;
          _DAT_8c4a9f14 = _DAT_8c4aa014;
          _DAT_8c4a9f10 = _DAT_8c4a9f08;
          _DAT_8c4a9db8 = 1;
          _DAT_8c4a9f28 = 1;
          *(undefined4 *)(&DAT_8c4a9ef8 + _DAT_8c4a9f08 * 4) = 2;
          return (undefined1 *)0;
        }
        puVar5 = (undefined4 *)&DAT_8c4a9f24;
      }
      *puVar5 = 0;
    }
  }
  else {
    FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  }
  return puVar4;
}



/* FUN_8c20c7e0 @ 8c20c7e0 callers=0 callees=1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20c7e0(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_8c4a9ef0 == 1) {
    uVar1 = _DAT_8c4a9f08 & 1;
    pvr_20a844(8,1,ar6,ar7);
    pvr_20a844(8,0,ar6,ar7);
    iVar3 = uVar1 * 0x20;
    pvr_20a844(0x124,*(undefined4 *)(iVar3 + -0x73b55fdc),ar6,ar7);
    pvr_20a844(300,*(undefined4 *)(iVar3 + -0x73b55fd8),ar6,ar7);
    pvr_20a844(0x128,*(undefined4 *)(iVar3 + -0x73b55fd0),ar6,ar7);
    pvr_20a844(0x130,*(undefined4 *)(iVar3 + -0x73b55fcc),ar6,ar7);
    pvr_20a844(0x164,*(undefined4 *)(iVar3 + -0x73b55fd4),ar6,ar7);
    ar5 = 0x80000000;
    pvr_20a844(0x144,0x80000000,ar6,ar7);
    pvr_20a876(0x144,ar5,ar6,ar7);
    _DAT_8c4a9f18 = 0;
    _DAT_8c4a9f14 = _DAT_8c4aa014;
  }
  uVar2 = FUN_8c210cc0(DAT_8c27570c,ar5,ar6,ar7);
  return uVar2;
}



/* FUN_8c20c8e0 @ 8c20c8e0 callers=1 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20c8ea) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20c8e0(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)0x3e0;
  uVar1 = pvr_20a876((int)0xe4,ar5,ar6,ar7);
  (*(code *)(&pvr_20a844))
            ((int)0xe4,(int)(ar4 & uVar2) >> 5 | uVar1 & 0xffffffe0,ar6,ar7);
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
      iVar1 = FUN_8c203a92(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c2038c0(ar4[5],ar4,ar6,ar7);
      ar5 = ar4;
    }
    if (iVar1 == 3) {
      FUN_8c2072b2(3,ar5,ar6,ar7);
    }
  }
  return iVar1;
}



/* FUN_8c20c980 @ 8c20c980 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20c980(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7,undefined4 s0)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_8c20d128(ar4,ar6,ar7,s0);
  puVar1 = (&FUN_8c2072b2);
  if (iVar2 == 0) {
    *ar5 = *ar4;
    ar5[1] = ar4[1];
    ar5[2] = ar4[2];
    ar5[3] = ar4[3];
    ar5[4] = ar4[4];
    ar5[5] = ar4[5];
    ar5[6] = ar4[6];
    if ((*ar4 & 0xffff) == 3) {
      iVar2 = FUN_8c203a92(ar4,ar6,ar7,s0);
      if (iVar2 != 3) {
        iVar2 = FUN_8c203a92(ar5,ar6,ar7,s0);
        if (iVar2 != 3) {
          return iVar2;
        }
        FUN_8c203cd0(ar4,ar6,ar7,s0);
        (*(code *)puVar1)(3,ar6,ar7,s0);
        return 3;
      }
    }
    else {
      ar6 = ar4;
      iVar2 = FUN_8c2038c0(ar4[5],ar4,ar7,s0);
      if (iVar2 != 3) {
        iVar2 = FUN_8c2038c0(ar5[5],ar5,ar7,s0);
        if (iVar2 != 3) {
          return iVar2;
        }
        FUN_8c203bda(ar4[7],ar5,ar7,s0);
        (*(code *)puVar1)(3,ar5,ar7,s0);
        return 3;
      }
    }
    (*(code *)puVar1)(3,ar6,ar7,s0);
  }
  return iVar2;
}



/* FUN_8c20ca32 @ 8c20ca32 callers=0 callees=1 */

/* WARNING: Unknown calling convention */

int FUN_8c20ca32(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint ar4_00;
  uint *ar5_00;
  int iVar5;
  
  iVar3 = FUN_8c20d128(ar4,ar6,ar7,s0);
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
      iVar3 = FUN_8c2038c0(ar4[5] * ar5,ar4,ar7,s0);
      puVar1 = (&FUN_8c203bda);
      if (iVar3 == 3) {
        FUN_8c2072b2(3,puVar4,ar7,s0);
      }
      else {
        ar4_00 = ar4[7];
        FUN_8c203bda(ar4_00,puVar4,ar7,s0);
        iVar5 = 0;
        if (0 < ar5) {
          do {
            puVar2 = (&FUN_8c203980);
            ar5_00 = ar4 + iVar5 * 10;
            ar5_00[7] = ar4_00;
            puVar4 = ar5_00;
            iVar3 = (*(code *)puVar2)(ar5_00[5],ar5_00,ar7,s0);
            ar4_00 = ar4_00 + (ar5_00[5] & 0xfffffffc);
            if (iVar3 == 3) {
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  (*(code *)puVar1)(ar4[iVar5 * 10 + 7],puVar4,ar7,s0);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              FUN_8c2072b2(3,puVar4,ar7,s0);
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
        FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7);
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
        FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7);
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
  uint ar7_00;
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
    ar7_00 = ar7 * 0x20;
    uVar4 = iVar3 + ar6 * ar7_00;
    uVar2 = ar4[5] - uVar4;
    if (uVar4 < ar4[5]) {
      if (ar7_00 < uVar2) {
        uVar2 = ar7_00;
      }
      FUN_8c20a8e0(uVar4 + ar4[7],ar5,uVar2,ar7_00);
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
  uint ar7_00;
  uint uVar3;
  
  ar7_00 = ar7 & 0xfffffffc;
  if (ar7_00 != 0) {
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
    if (ar7_00 < uVar1) {
      uVar1 = ar7_00;
    }
    FUN_8c20a8e0(uVar3 + ar4[7],ar5,uVar1,ar7_00);
  }
  return 0;
}



/* FUN_8c20ccd6 @ 8c20ccd6 callers=0 callees=0 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20ccd6(int ar4,int ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4,undefined4 s8,
            undefined4 s12,undefined4 s16,undefined4 s20,int s24,int s28,int s32,int s36,int s40)

{
  undefined4 uVar1;
  uint in_r3;
  uint uVar2;
  int ar7_00;
  uint unaff_r9;
  uint uVar3;
  int iVar4;
  int ar4_00;
  
  uVar2 = *(uint *)(ar4 + 0x18);
  if (((((in_r3 & uVar2) == 0) && ((uVar2 & 1) == 0)) && ((uVar2 & 8) == 0)) &&
     ((uVar2 & 0x20) == 0)) {
    ar7_00 = *(int *)(ar4 + 0xc);
    iVar4 = ar7_00 * 2;
    ar4_00 = s28 * iVar4 + s24 * 2 + *(int *)(ar4 + 0x1c);
    uVar2 = ar6 << 1;
    if (s40 != 0) {
      ar5 = (s36 * s40 * 2 + s32 * 2 & 0xfffffffcU) + ar5;
      uVar2 = s40 * 2;
    }
    uVar3 = 0;
    if (unaff_r9 != 0) {
      do {
        FUN_8c20a8e0(ar4_00,ar5,ar6 << 1,ar7_00);
        uVar3 = uVar3 + 1;
        ar4_00 = ar4_00 + iVar4;
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

undefined4 FUN_8c20cd92(int ar4,uint ar5,uint ar6,uint ar7,int s0,int s4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint a6;
  int ar6_00;
  undefined4 uVar4;
  undefined4 ar7_00;
  int iVar5;
  int iVar6;
  undefined4 *apuStack_1c [2];
  
  if ((ar5 & 0x1f) != 0) {
    return 7;
  }
  uVar3 = *(uint *)(ar4 + 0x18);
  if (((((uVar3 & 1) == 0) && ((uVar3 & 4) == 0)) && ((uVar3 & 8) == 0)) &&
     (((uVar3 & 0x20) == 0 && ((*(uint *)(ar4 + 8) & 0x18000000) != 0)))) {
    if (s0 == 6) {
      iVar5 = 0;
    }
    else {
      if (s0 != 3) {
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
      (*(code *)(&pvr_20a844))
                ((int)0x14c,iVar5 << 0x18 | uVar3 << 0x10 | (ar7 - 1 & 0x3f) << 8 | a6,a6,
                 0x3f);
      (*(code *)(&pvr_20a844))
                ((int)0x148,*(uint *)(ar4 + 0x1c) & 0xfffff8,a6,uVar4);
      uVar4 = 0x10800000;
      puVar1 = (&sh4_dmac_202f40);
      iVar5 = (int)0x100;
      do {
        ar7_00 = 0x18;
        ar6_00 = iVar6;
        iVar2 = (*(code *)puVar1)(uVar4,ar5,iVar6,0x18,apuStack_1c);
      } while (iVar2 == iVar5);
      if (iVar2 == 0) {
        if (s4 == 1) {
          FUN_8c203320(*apuStack_1c[0],0,ar6_00,ar7_00);
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
  undefined4 ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    iVar1 = FUN_8c20d400(ar4[3],ar4[3],ar6,ar7);
    if ((ar4[6] & 1) == 0) {
      puVar2 = &DAT_8c26d448;
    }
    else {
      puVar2 = &DAT_8c26d464;
    }
    ar6_00 = *(undefined4 *)(puVar2 + iVar1 * 4);
  }
  else {
    if ((ar4[6] & 8) == 0) {
      return 4;
    }
    ar6_00 = 0x800;
  }
  FUN_8c20a8e0(ar4[7],ar5,ar6_00,ar7);
  return 0;
}



/* FUN_8c20cf88 @ 8c20cf88 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20cf88(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c203cd0(ar4);
  }
  else {
    uVar1 = FUN_8c203bda(ar4[7]);
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
    uVar1 = FUN_8c203cd0(unaff_r14,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c203bda(unaff_r14[7],ar5,ar6,ar7);
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
  uVar1 = FUN_8c203de0(&iStack_1c,&iStack_18,&iStack_14,&uStack_10);
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
  else if ((ar4[2] == 0x30000000) && ((ar4[6] & 1) != 0)) {
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
    FUN_8c20a892(ar5[7],ar5[5]);
  }
  else if ((*ar5 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,ar5[7],ar5[3],ar5[6]);
  }
  else {
    uVar1 = ar5[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      FUN_8c20a9c2(ar5[7],ar5[5]);
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
    FUN_8c20a892(ar4,unaff_r14[7],unaff_r14[5],ar7);
  }
  else if ((*unaff_r14 & 0xffff) == 3) {
    FUN_8c20d7a0(ar4,unaff_r14[7],unaff_r14[3],unaff_r14[6]);
  }
  else {
    uVar1 = unaff_r14[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      FUN_8c20a9c2(ar4,unaff_r14[7],unaff_r14[5],ar7);
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
  
  FUN_8c20408e(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c2040ce(ar4,ar5,ar6,ar7);
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
  uVar4 = ar7 & 0xff00;
  uVar2 = ar7 & 0xff;
  if ((uVar4 == 0x1000) || (uVar4 == 0x1100)) {
    *ar4 = 3;
  }
  else {
    *ar4 = 2;
  }
  if ((uVar4 == 0x500) || (uVar4 == 0x600)) {
    if (*(int *)(DAT_8c2756b0 + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x28000000;
  }
  else {
    if ((uVar4 != 0x700) && (uVar4 != 0x800)) {
      ar4[1] = 1;
      if (uVar2 == 0) {
        ar4[2] = 0;
        goto LAB_8c20d262;
      }
      if (uVar2 == 1) {
        uVar1 = 0x8000000;
LAB_8c20d22e:
        ar4[2] = uVar1;
      }
      else {
        if (uVar2 == 2) {
          uVar1 = 0x10000000;
        }
        else {
          if (uVar2 == 3) {
            uVar1 = 0x18000000;
            goto LAB_8c20d22e;
          }
          if (uVar2 != 4) {
            uVar3 = 4;
            goto LAB_8c20d262;
          }
          uVar1 = 0x20000000;
        }
        ar4[2] = uVar1;
      }
      goto LAB_8c20d262;
    }
    if (*(int *)(DAT_8c2756b0 + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x30000000;
  }
  ar4[2] = uVar1;
LAB_8c20d262:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != 0x80)) && ((ar5 != 0x100 && ((ar5 != 0x200 && (ar5 != 0x400)))))))) {
    uVar3 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) && ((ar6 != 0x40 && (ar6 != 0x80)))) &&
     ((ar6 != 0x100 && ((ar6 != 0x200 && (ar6 != 0x400)))))) {
    uVar3 = 4;
  }
  if (((((uVar4 != 0x900) && (uVar4 != 0xb00)) && (uVar4 != 0xd00)) &&
      ((uVar4 != 0x500 && (uVar4 != 0x700)))) && (ar5 != ar6)) {
    uVar3 = 4;
  }
  ar4[6] = 0;
  if (((uVar4 == 0xf00) || (uVar4 == 0x200)) ||
     ((uVar4 == 0x400 || (((uVar4 == 0x1100 || (uVar4 == 0x600)) || (uVar4 == 0x800)))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == 0xe00) || (uVar4 == 0xf00)) ||
     ((uVar4 == 0x100 || ((uVar4 == 0x200 || (uVar4 == 0xd00)))))) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == 0x300) || (uVar4 == 0x400)) || (uVar4 == 0x1000)) || (uVar4 == 0x1100)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == 0xb00) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == 0x500) || (uVar4 == 0x600)) || ((uVar4 == 0x700 || (uVar4 == 0x800)))) {
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
    if (ar4 == 0x80) {
      return 7;
    }
    if (ar4 == 0x100) {
      return 8;
    }
    if (ar4 == 0x200) {
      return 9;
    }
    if (ar4 == 0x400) {
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
  return iVar4 + 0x800;
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
    if (*(int *)(ar4 + 8) == 0x28000000) {
      uVar4 = iVar5 + 0x2b;
    }
    else {
      uVar4 = iVar5 + 0xb;
    }
  }
  if (*(int *)(ar4 + 8) == 0x28000000) {
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
    iVar5 = iVar5 + *(int *)(&DAT_8c26d448 + iVar2 * 4);
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
    iVar5 = iVar5 + 10 + *(int *)(&DAT_8c26d464 + iVar2 * 4);
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
  uVar2 = FUN_8c20a8e0(ar4 + 4,ar5,*(int *)(&DAT_8c26d4d8 + iVar1 * 4) + 4,ar7);
  return uVar2;
}



/* FUN_8c20d6ea @ 8c20d6ea callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d6ea(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  uVar2 = FUN_8c20a9c2(ar4,ar5 + 4,*(undefined4 *)(&DAT_8c26d4d8 + iVar1 * 4),ar7);
  return uVar2;
}



/* FUN_8c20d740 @ 8c20d740 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d740(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(int *)(&DAT_8c26d448 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d530 + iVar1);
  }
  else {
    ar6_00 = *(int *)(&DAT_8c26d464 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d55c + iVar1) + 10;
  }
  FUN_8c20a8e0(ar4,ar5,ar6_00,ar7_00);
  uVar2 = FUN_8c20a8e0(ar4 + 0x800,ar5 + ar6_00,iVar1,ar7_00);
  return uVar2;
}



/* FUN_8c20d7a0 @ 8c20d7a0 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d7a0(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(int *)(&DAT_8c26d448 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d530 + iVar1);
  }
  else {
    ar6_00 = *(int *)(&DAT_8c26d464 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d55c + iVar1) + 10;
  }
  FUN_8c20a9c2(ar4,ar5,ar6_00,ar7_00);
  uVar2 = FUN_8c20a9c2(ar4 + ar6_00,ar5 + 0x800,iVar1,ar7_00);
  return uVar2;
}



/* FUN_8c20d82e @ 8c20d82e callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d82e(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 5) {
    puVar7 = (undefined1 *)0x10;
    FUN_8c20a9c2(auStack_30,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    if (ar6 == 1) {
      auStack_30[1] = *ar5;
    }
    else {
      puVar6 = auStack_30 + 4;
      if (ar6 == 2) {
        puVar5 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      else {
        puVar7 = auStack_24;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar7);
      }
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_30,ar5,puVar7,ar7);
    FUN_8c20732e(&stack0xfffffff0,ar5,puVar7,ar7);
  }
  else {
    iVar8 = iVar2 * 4;
    FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + iVar8) + -0xc,0x10,ar7);
    puVar5 = auStack_20;
    puVar6 = auStack_24;
    puVar7 = ar5;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar5);
    iVar3 = *(int *)(ar4 + 0x1c);
    iVar4 = *(int *)(&DAT_8c26d5e0 + iVar8);
    FUN_8c20732e(auStack_30,puVar5,puVar7,ar7);
    FUN_8c20732e(&stack0xfffffff0,puVar5,puVar7,ar7);
    FUN_8c20a8e0(iVar3 + iVar4 + -0xc,auStack_30,0x10,ar7);
    if (*(int *)(&DAT_8c26d60c + iVar8) != 0x10) {
      FUN_8c20a8e0(*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + iVar8) + 4,ar5 + 4,
                   *(int *)(&DAT_8c26d60c + iVar8) + -0x10,ar7);
    }
    FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + (iVar2 + 1) * 4) + -0xc,
                 0x10,ar7);
    puVar5 = auStack_24;
    puVar6 = ar5 + *(int *)(&DAT_8c26d60c + iVar8) + -0xc;
    puVar7 = auStack_30;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar5);
    iVar2 = *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + (iVar2 + 1) * 4) + -0xc;
    FUN_8c20732e(auStack_30,puVar6,puVar5,ar7);
    FUN_8c20732e(&stack0xfffffff0,puVar6,puVar5,ar7);
  }
  FUN_8c20a8e0(iVar2,auStack_30,0x10,ar7);
  return 0;
}



/* FUN_8c20d9ce @ 8c20d9ce callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20d9ce(int ar4,undefined1 *ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_1c [3];
  undefined1 uStack_19;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x8;
    ar5_00 = *(undefined1 **)(ar4 + 0x1c);
    FUN_8c20a9c2(auStack_1c,ar5_00,8,ar7);
    if (ar6 == 1) {
      uStack_19 = *ar5;
    }
    else {
      ar6_00 = auStack_14;
      puVar3 = auStack_18;
      ar5_00 = ar5;
      do {
        uVar1 = *ar5_00;
        ar5_00 = ar5_00 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_1c,ar5_00,ar6_00,ar7,iVar2);
    FUN_8c20732e(&s4,ar5_00,ar6_00,ar7,iVar2);
    ar6_01 = 8;
    ar5 = auStack_1c;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d5b4 + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d588 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
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
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_24 [6];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x10;
    FUN_8c20a9c2(auStack_24,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
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
      ar6_00 = auStack_14;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_24,ar5,ar6_00,ar7,iVar2);
    FUN_8c20732e(&stack0xfffffffc,ar5,ar6_00,ar7,iVar2);
    ar6_01 = 0x10;
    ar5 = auStack_24;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d4ac + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d480 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
  return 0;
}



/* FUN_8c20db80 @ 8c20db80 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20db80(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a6;
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [10];
  undefined1 auStack_20 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 != 1) {
    if (ar6 < 5) {
      puVar6 = (undefined1 *)0x10;
      FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + 0x800,0x10,ar7);
      if (ar6 == 2) {
        auStack_30[1] = *ar5;
      }
      else {
        puVar6 = auStack_2a;
        puVar5 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      iVar2 = *(int *)(ar4 + 0x1c) + 0x800;
    }
    else {
      FUN_8c20a9c2(auStack_30,
                   *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4) + 0x7fa,0x10,
                   ar7);
      a6 = auStack_20;
      puVar6 = auStack_2a;
      puVar5 = ar5;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar6 < a6);
      iVar3 = *(int *)(ar4 + 0x1c);
      iVar4 = *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4);
      FUN_8c20732e(auStack_30,puVar5,a6,ar7);
      FUN_8c20732e(&stack0xfffffff0,puVar5,a6,ar7);
      FUN_8c20a8e0(iVar3 + iVar4 + 0x7fa,auStack_30,0x10,ar7);
      iVar3 = iVar2 * 4;
      if (*(int *)(&DAT_8c26d530 + iVar3) != 0x10) {
        FUN_8c20a8e0(*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4) + 0x80a,
                     ar5 + 10,*(int *)(&DAT_8c26d530 + iVar3) + -0x10,ar7);
      }
      FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + iVar3) + 0x7fa,0x10,
                   ar7);
      puVar6 = auStack_2a;
      ar5 = ar5 + *(int *)(&DAT_8c26d530 + iVar3) + -6;
      puVar5 = auStack_30;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar6);
      iVar2 = *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + iVar3) + 0x7fa;
    }
    FUN_8c20732e(auStack_30,ar5,puVar6,ar7);
    FUN_8c20732e(&stack0xfffffff0,ar5,puVar6,ar7);
    FUN_8c20a8e0(iVar2,auStack_30,0x10,ar7);
  }
  return 0;
}



/* FUN_8c20dd80 @ 8c20dd80 callers=0 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20dd80(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0,undefined4 s4)

{
  undefined4 uVar1;
  
  if ((s0 < 8) || (0x400 < s0)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if ((char)s4 == '\0') {
      uVar1 = 0;
    }
    else if ((char)s4 == '\x01') {
      uVar1 = 0x8000000;
    }
    else {
      if ((char)s4 != '\x02') goto LAB_8c20de00;
      uVar1 = 0x10000000;
    }
    if (ar6 == 1) {
      FUN_8c20e8c6(ar4,ar5,ar7,s0);
    }
    else {
      if (ar7 == 1) {
        FUN_8c20e9ae(ar5,s0,s0,uVar1);
      }
      s_UUUU_t_20ed60(ar4,ar5,s0,uVar1,ar7);
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

undefined4 FUN_8c20de80(undefined1 *ar4,int ar5,int ar6,int ar7,int s0)

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
  
  iVar5 = ar7 + -1;
  uVar7 = (uint)0x7c00;
  uVar8 = (uint)0x3e0;
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
        if (s0 == 0) {
          uVar1 = (uint)*puVar4;
          iVar6 = (int)(0xf800 & uVar1) >> 8;
          uVar9 = (int)((int)0x7e0 & uVar1) >> 1;
LAB_8c20df30:
          unaff_r13 = (int)uVar9 >> 2;
          unaff_r12 = (uVar1 & 0x1f) << 3;
        }
        else {
          if (s0 == 1) {
            uVar1 = (uint)*puVar4;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            uVar9 = uVar1 & uVar8;
            goto LAB_8c20df30;
          }
          if (s0 == 3) {
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

/* WARNING: Removing unreachable block (ram,0x8c20e00c) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20df7a(int ar4,uint ar5,int ar6,uint *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int ar6_00;
  uint *ar7_00;
  undefined4 in_PR;
  uint ain0;
  
  if (ar4 == 0) {
    uVar1 = 1;
  }
  else {
    ar6_00 = ar6;
    ar7_00 = ar7;
    ain0 = ar5;
    uVar2 = FUN_8c20e720(ar4,ar5,ar6,ar7);
    *ar7 = uVar2;
    if (ar6 != 0) {
      if (ain0 < *ar7) {
        return 2;
      }
      uVar2 = 0;
      if (*ar7 != 0) {
        do {
          FUN_8c010838(uVar2,ar5,ar6_00,ar7_00,ain0,in_PR);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *ar7);
      }
      FUN_8c20e78e(ar6,ar5,ar6_00,ar7_00);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* FUN_8c20e030 @ 8c20e030 callers=0 callees=13 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e030(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint in_r3;
  undefined4 uVar2;
  uint unaff_r10;
  int unaff_r12;
  uint *unaff_r13;
  uint a5;
  
  uVar2 = 0;
  if (unaff_r10 < in_r3) {
    *unaff_r13 = 0;
    uVar2 = 2;
  }
  else {
    a5 = 0;
    if (unaff_r10 != 0) {
      while (*(int *)(a5 * 4 + unaff_r12) != 0) {
        iVar1 = FUN_8c20e16a(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e1e6(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e272(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (DAT_8c275798 == 1) {
          iVar1 = FUN_8c20e300(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e328(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e368(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e3a0(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e400(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if ((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) {
          iVar1 = FUN_8c20e428(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e480(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = FUN_8c20e608(unaff_r12,a5,unaff_r13,ar7);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = FUN_8c20e664(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_8c20e6c0(unaff_r12,a5,unaff_r13,ar7);
        if (iVar1 != 0) {
          return iVar1;
        }
        a5 = a5 + 1;
        if (unaff_r10 <= a5) {
          return 0;
        }
      }
      *unaff_r13 = a5;
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* FUN_8c20e16a @ 8c20e16a callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e16a(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) || (iVar1 = *(int *)(iVar2 + 4), iVar1 == 0))
      || ((iVar1 == 1 || (iVar1 == 2)))) &&
     ((DAT_8c275798 != 1 || ((iVar2 = *(int *)(iVar2 + 4), iVar2 == 0 || (iVar2 == 1)))))) {
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
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) ||
       ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
      (((((DAT_8c275798 != 3 || (iVar2 = *(int *)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) ||
        (iVar2 == 4)) &&
       (((DAT_8c275798 != 2 || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(iVar1 + 8) == 2)))))) &&
     ((((DAT_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
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
  
  iVar1 = *(int *)(ar5 * 4 + ar4);
  if (((((DAT_8c275798 != 2) && (DAT_8c275798 != 3)) ||
       ((*(int *)(iVar1 + 4) != 0 && (*(int *)(iVar1 + 4) != 2)))) ||
      (((*(int *)(iVar1 + 0x20) != 2 && (*(int *)(iVar1 + 0x20) != 3)) ||
       (*(int *)(iVar1 + 0x5c) != 0)))) &&
     ((((DAT_8c275798 != 1 || (*(int *)(iVar1 + 4) != 0)) ||
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
  if (((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x3c) == 3)) {
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
  if ((((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
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
  if ((((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) &&
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
  if (((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0xc) == 3)) {
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
  if (((DAT_8c275798 == 1) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x20) == 0)) {
    *ar6 = ar5 + 1;
    return 10;
  }
  return 0;
}



/* FUN_8c20e428 @ 8c20e428 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e428(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  if (((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) &&
     (*(int *)(*(int *)(ar5 * 4 + ar4) + 0xbc) == 1)) {
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
  if ((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) {
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
  if (((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) && (*(int *)(iVar1 + 4) == 2)) {
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
  if ((((*(int *)(iVar1 + 4) == 1) && (iVar1 = *(int *)(0xa0 + iVar1), iVar1 != 0)) &&
      (iVar1 != 0)) && (((iVar1 != 0 && (iVar1 != 0x20000000)) && (iVar1 != 0x40000000)))) {
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
    if (ar4 == 0x80) {
      return 7;
    }
    if (ar4 == 0x100) {
      return 8;
    }
    if (ar4 == 0x200) {
      return 9;
    }
    if (ar4 == 0x400) {
      return 10;
    }
  }
  return 3;
}



/* FUN_8c20e8c6 @ 8c20e8c6 callers=1 callees=0 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c20e8c6(int ar4,undefined4 ar5,int ar6,int ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  int *piVar3;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c20e838(ar7,ar7,ar6,ar7);
  if (ar6 != 0) {
    FUN_8c20e9ae(ar5,ar7,ar7,s0,in_PR,unaff_r8,unaff_r9,unaff_r10,unaff_r11,unaff_r12,unaff_r13,
                 unaff_r14);
  }
  ar7_00 = s0;
  s_UUUU_t_20ed60(*(int *)(&DAT_8c26d63c + iVar1 * 4) + ar4,ar5,ar7,s0,&DAT_8c26d63c);
  piVar3 = (int *)(&DAT_8c26d63c + (iVar1 + -1) * 4);
  do {
    uVar2 = FUN_8c20f25a(ar5,ar7,ar7,ar7_00);
    ar7 = ar7 >> 1;
    if (ar6 != 0) {
      uVar2 = FUN_8c20e9ae(ar5,ar7,ar7,s0,in_PR,unaff_r8,unaff_r9,unaff_r10,unaff_r11,unaff_r12,
                           unaff_r13,unaff_r14);
    }
    ar7_00 = s0;
    uVar2 = s_UUUU_t_20ed60(*piVar3 + ar4,ar5,ar7,s0,uVar2);
    piVar3 = piVar3 + -1;
  } while ((undefined *)0x8c26d63b < piVar3);
  return uVar2;
}



/* FUN_8c20e8dc @ 8c20e8dc callers=0 callees=4 */

/* WARNING: Unknown calling convention */

undefined4
FUN_8c20e8dc(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_r12;
  int *piVar3;
  int unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c20e838(ar7,ar5,ar6,ar7);
  if (unaff_r10 != 0) {
    FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
  }
  a7 = s24;
  s_UUUU_t_20ed60(*(int *)(&DAT_8c26d63c + iVar1 * 4) + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
  piVar3 = (int *)(&DAT_8c26d63c + (iVar1 + -1) * 4);
  do {
    FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7);
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24);
    }
    a7 = s24;
    uVar2 = s_UUUU_t_20ed60(*piVar3 + unaff_r9,unaff_r12,unaff_r14,s24,in_PR);
    piVar3 = piVar3 + -1;
  } while ((undefined *)0x8c26d63b < piVar3);
  return uVar2;
}



/* FUN_8c20e9ae @ 8c20e9ae callers=2 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c20ebaa) */
/* WARNING: Removing unreachable block (ram,0x8c20ebc6) */
/* WARNING: Removing unreachable block (ram,0x8c20ebdc) */
/* WARNING: Removing unreachable block (ram,0x8c20ebf0) */
/* WARNING: Unknown calling convention */

uint FUN_8c20e9ae(byte *ar4,int ar5,uint ar6,int ar7,undefined4 s0,undefined4 s4,undefined4 s8,
                 undefined4 s12,undefined4 s16,undefined4 s20,undefined4 s24,undefined4 s28)

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
  
  iVar3 = (int)(int)0xffffbfa8;
  if (ar5 == 1) {
    ar6 = 1;
  }
  else if (ar6 != 1) {
    puVar13 = (undefined4 *)((int)&s28 + iVar3);
    *(undefined4 **)((int)&s12 + iVar3) = puVar13;
    for (iVar12 = ar5; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13 = puVar13 + 4;
    }
    puVar13 = (undefined4 *)(&stack0xffffffe4 + 0x4048 + iVar3);
    *(undefined4 **)((int)&s0 + iVar3) = puVar13;
    *puVar13 = 0;
    *(undefined4 **)((int)&s8 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(undefined4 **)(&stack0xffffffec + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(undefined4 **)((int)&s16 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    puVar13 = (undefined4 *)(&stack0xffffffe4 + 0x4038 + iVar3);
    *(undefined4 **)(&stack0xfffffff4 + iVar3) = puVar13;
    *puVar13 = 0;
    *(undefined4 **)(&stack0xfffffff8 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(undefined4 **)(&stack0xfffffffc + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(undefined4 **)((int)&s4 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    *(uint *)(&stack0xffffffe8 + iVar3) = ar6;
    while (*(int *)(&stack0xffffffe8 + iVar3) != 0) {
      piVar8 = *(int **)((int)&s12 + iVar3);
      *(int *)(&stack0xfffffff0 + iVar3) = ar5;
      while (*(int *)(&stack0xfffffff0 + iVar3) != 0) {
        bVar1 = ar4[3];
        iVar6 = *piVar8;
        bVar2 = ar4[2];
        iVar12 = **(int **)((int)&s0 + iVar3);
        *(int **)((int)&s20 + iVar3) = piVar8 + 1;
        iVar4 = piVar8[1];
        uVar7 = iVar6 + (uint)bVar1 + iVar12;
        bVar1 = ar4[1];
        iVar12 = **(int **)((int)&s8 + iVar3);
        *(int **)((int)&s24 + iVar3) = piVar8 + 2;
        uVar5 = iVar4 + (uint)bVar2 + iVar12;
        uVar11 = piVar8[2] + (uint)bVar1 + **(int **)(&stack0xffffffec + iVar3);
        uVar9 = (uint)*ar4;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((int)0xff < (int)uVar7) {
          uVar7 = (int)0xff;
        }
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((int)0xff < (int)uVar5) {
          uVar5 = (int)0xff;
        }
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        else if ((int)0xff < (int)uVar11) {
          uVar11 = (int)0xff;
        }
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if ((int)0xff < (int)uVar9) {
          uVar9 = (int)0xff;
        }
        ar4[3] = (byte)uVar7;
        iVar12 = 0x8000000;
        ar4[2] = (byte)uVar5;
        uVar10 = (uint)0xf8;
        ar4[1] = (byte)uVar11;
        *ar4 = (byte)uVar9;
        if (ar7 == iVar12) {
          ar6 = (int)0xfc & uVar5 | 2;
          uVar5 = uVar5 - ar6;
          uVar11 = uVar11 - (uVar10 & uVar11 | 4);
          uVar9 = 0;
          uVar7 = uVar7 - (uVar7 & uVar10 | 4);
        }
        else if (ar7 == 0x10000000) {
          uVar10 = (uint)0xf0;
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
        **(int **)((int)&s0 + iVar3) = iVar12;
        *piVar8 = **(int **)(&stack0xfffffff4 + iVar3) + iVar12;
        **(int **)(&stack0xfffffff4 + iVar3) = uVar7 + iVar12 * -2;
        iVar12 = (int)(uVar5 * 3 + 4) >> 3;
        **(int **)((int)&s8 + iVar3) = iVar12;
        **(int **)((int)&s20 + iVar3) = **(int **)(&stack0xfffffff8 + iVar3) + iVar12;
        **(int **)(&stack0xfffffff8 + iVar3) = uVar5 + iVar12 * -2;
        iVar12 = (int)(uVar11 * 3 + 4) >> 3;
        **(int **)(&stack0xffffffec + iVar3) = iVar12;
        **(int **)((int)&s24 + iVar3) = **(int **)(&stack0xfffffffc + iVar3) + iVar12;
        **(int **)(&stack0xfffffffc + iVar3) = uVar11 + iVar12 * -2;
        **(int **)((int)&s16 + iVar3) = iVar12;
        piVar8[3] = **(int **)((int)&s4 + iVar3) + iVar12;
        **(int **)((int)&s4 + iVar3) = uVar9 + iVar12 * -2;
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
  
  uVar8 = (uint)0xf0;
  uVar5 = 0;
  uVar9 = uVar8 + 8;
  iVar4 = ar6;
  uVar2 = 0xaaaaaaaa;
  do {
    if (iVar4 == 0) {
      0xaaaaaaaa = uVar2;
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
      if (ar7 == 0x8000000) {
        uVar10 = (pbVar3[3] & uVar9) << 8 | (pbVar3[2] & 0xfc) << 3;
        bVar1 = pbVar3[1] >> 3;
LAB_8c20ede2:
        unaff_r14 = uVar10 | bVar1;
      }
      else {
        if (ar7 == 0x10000000) {
          uVar10 = (*pbVar3 & uVar8) << 8 | (pbVar3[3] & uVar8) << 4 | pbVar3[2] & uVar8;
          bVar1 = pbVar3[1] >> 4;
          goto LAB_8c20ede2;
        }
        if (ar7 == 0) {
          unaff_r14 = ((int)0x80 & (uint)*pbVar3) << 8 | (pbVar3[3] & uVar9) << 7 |
                      (pbVar3[2] & uVar9) << 2 | (uint)(pbVar3[1] >> 3);
        }
      }
      uVar10 = 0x55555556 + uVar7;
      in_r0 = (uVar7 | uVar5) * 2;
      0xaaaaaaaa = uVar2;
      *(short *)(in_r0 + ar4) = (short)unaff_r14;
      pbVar3 = pbVar3 + 4;
      uVar7 = uVar2 & uVar10;
      uVar2 = 0xaaaaaaaa;
    }
    iVar4 = iVar4 + -1;
    ar5 = ar5 + ar6 * 4;
    uVar5 = s_UUUU_8c20eeb0._0_4_ & 0xaaaaaaab + uVar5;
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

int FUN_8c20eec0(byte *ar4,byte *ar5,byte *ar6,byte *ar7,undefined1 *s0,int s4)

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
  
  iVar19 = (s4 * 2 + -1) * 4;
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
  while (s4 = s4 + -1, s4 != 0) {
    iVar3 = iVar4 * 2 + iVar19;
    iVar19 = (uint)ar4[7] + (uint)ar5[7] * 2 + (uint)ar6[7] * 2 + (uint)ar7[7];
    pbVar17 = ar6 + 8;
    pbVar18 = ar7 + 8;
    iVar4 = (uint)ar4[0xb] + (uint)ar5[0xb] * 2 + (uint)ar6[0xb] * 2 + (uint)ar7[0xb];
    s0[3] = (char)((iVar3 + iVar19 * 2 + iVar4) * 0x39 >> 0xb);
    iVar3 = iVar6 * 2 + iVar5;
    iVar5 = (uint)ar4[6] + (uint)ar5[6] * 2 + (uint)ar6[6] * 2 + (uint)ar7[6];
    iVar6 = (uint)ar4[10] + (uint)ar5[10] * 2 + (uint)ar6[10] * 2 + (uint)ar7[10];
    s0[2] = (char)((iVar3 + iVar5 * 2 + iVar6) * 0x39 >> 0xb);
    iVar3 = iVar8 * 2 + iVar7;
    iVar7 = (uint)ar4[5] + (uint)ar5[5] * 2 + (uint)ar6[5] * 2 + (uint)ar7[5];
    iVar8 = (uint)ar4[9] + (uint)ar5[9] * 2 + (uint)ar6[9] * 2 + (uint)ar7[9];
    s0[1] = (char)((iVar3 + iVar7 * 2 + iVar8) * 0x39 >> 0xb);
    iVar3 = iVar16 * 2 + iVar9;
    iVar9 = (uint)ar4[4] + (uint)ar5[4] * 2 + (uint)ar6[4] * 2 + (uint)ar7[4];
    ar7 = ar7 + 8;
    ar6 = ar6 + 8;
    iVar16 = (uint)ar4[8] + (uint)ar5[8] * 2 + (uint)*pbVar17 * 2 + (uint)*pbVar18;
    ar5 = ar5 + 8;
    ar4 = ar4 + 8;
    *s0 = (char)((iVar3 + iVar9 * 2 + iVar16) * 0x39 >> 0xb);
    s0 = s0 + 4;
  }
  s0[3] = (char)((iVar4 * 2 + iVar19 + iVar10 * 2 + iVar13) * 0x39 >> 0xb);
  s0[2] = (char)((iVar6 * 2 + iVar5 + iVar11 * 2 + iVar14) * 0x39 >> 0xb);
  iVar19 = (iVar8 * 2 + iVar7 + iVar12 * 2 + iVar15) * 0x39 >> 0xb;
  s0[1] = (char)iVar19;
  *s0 = (char)((iVar16 * 2 + iVar9 + iVar1 * 2 + iVar2) * 0x39 >> 0xb);
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
  
  iVar2 = (int)(int)0xffffeff4;
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
  else if (ar4 == 0x80) {
    ar4 = 4;
  }
  else if (ar4 == 0x100) {
    ar4 = 5;
  }
  else if (ar4 == 0x200) {
    ar4 = 6;
  }
  else if (ar4 == 0x400) {
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
  undefined4 a5;
  undefined4 a6;
  uint uVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack_3c;
  int aiStack_30 [5];
  
  uVar7 = ar4[0x25];
  uVar9 = ar4[0x26];
  uStack_3c = ar4[0x27];
  uVar6 = ar4[0x24];
  aiStack_30[0] = DAT_8c26d698;
  aiStack_30[1] = DAT_8c26d69c;
  aiStack_30[2] = DAT_8c26d6a0;
  aiStack_30[3] = DAT_8c26d6a4;
  uVar8 = *ar4;
  if ((uVar8 & 1) != 0) {
    uVar7 = uVar7 & 0x1fffffff | ar4[5] << 0x1d;
  }
  if ((uVar8 & 2) != 0) {
    uVar7 = uVar7 & 0xe7ffffff | ar4[6] << 0x1b;
  }
  a7 = 0x4000000;
  if ((uVar8 & 0x20) != 0) {
    if (ar4[10] == 0) {
      uVar7 = uVar7 & 0xfbffffff;
    }
    else {
      uVar7 = uVar7 | 0x4000000;
    }
  }
  uVar5 = uVar8 & 8;
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xfdffffff | (ar4[8] >> 1) << 0x19;
  }
  if ((uVar8 & 0x200) != 0) {
    uVar7 = uVar7 & 0xfeffffff | ar4[0x10] << 0x18;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xff7fffff | (ar4[8] & 1) << 0x17;
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar7 = uVar7 & 0xffbfffff | ar4[4] << 0x16;
  }
  if ((uVar8 & 0x4000000) != 0) {
    if (ar4[0x2d] == 0) {
      uVar7 = uVar7 & 0xffefffff;
    }
    else {
      uVar7 = uVar7 | 0x100000;
    }
  }
  uVar2 = uVar9 & 0x1fffffff;
  if ((uVar8 & 0x40) == 0) goto LAB_8c20f862;
  switch(ar4[0xb]) {
  case 0:
    uVar9 = 0x10000000;
    uVar2 = uVar2 | 0xa0000000;
    goto code_r0x8c20f7da;
  case 1:
    uVar9 = 0x14000000;
    uVar2 = uVar2 | 0x80000000;
code_r0x8c20f7da:
    uVar9 = uVar2 & 0xe3ffffff | uVar9;
    goto LAB_8c20f862;
  case 2:
    uVar9 = 0xc0000000;
    break;
  case 3:
    uVar9 = 0x40000000;
    break;
  case 4:
    uVar9 = 0xe0000000;
    break;
  case 5:
    uVar9 = 0x60000000;
    break;
  case 6:
    uVar9 = 0xa0000000;
    break;
  default:
    goto LAB_8c20f862;
  case 8:
    uVar9 = 0x80000000;
    break;
  case 10:
    uVar9 = 0x20000000;
    break;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f862;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f862:
  if ((uVar8 & 0x80) == 0) goto LAB_8c20f8ea;
  uVar2 = uVar9 & 0xe3ffffff;
  switch(ar4[0xc]) {
  case 0:
    uVar2 = 0x10000000;
    uVar9 = uVar9 & 0x1fffffff | 0xa0000000;
    goto code_r0x8c20f8ba;
  case 1:
    uVar2 = 0x14000000;
    uVar9 = uVar9 & 0x1fffffff | 0x80000000;
code_r0x8c20f8ba:
    uVar9 = uVar9 & 0xe3ffffff | uVar2;
    goto LAB_8c20f8ea;
  case 2:
    uVar9 = 0x18000000;
    break;
  default:
    goto LAB_8c20f8ea;
  case 4:
    uVar9 = 0x1c000000;
    break;
  case 6:
    uVar9 = 0x14000000;
    break;
  case 7:
    uVar9 = 0xc000000;
    break;
  case 8:
    uVar9 = 0x10000000;
    break;
  case 9:
    uVar9 = 0x8000000;
    break;
  case 10:
    uVar9 = uVar2 | 0x4000000;
    goto LAB_8c20f8ea;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f8ea;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f8ea:
  if ((uVar8 & 0x1000000) != 0) {
    if (ar4[0xd] == 0) {
      uVar9 = uVar9 & 0xfdffffff;
    }
    else {
      uVar9 = uVar9 | 0x2000000;
    }
  }
  if ((uVar8 & 0x2000000) != 0) {
    if (ar4[0xe] == 0) {
      uVar9 = uVar9 & 0xfeffffff;
    }
    else {
      uVar9 = uVar9 | 0x1000000;
    }
  }
  a5 = 3;
  if ((uVar8 & 0x100) != 0) {
    uVar9 = uVar9 & 0xff3fffff | (ar4[0xf] & 3) << 0x16;
  }
  if ((uVar8 & 0x40000) != 0) {
    if (ar4[0x19] == 0) {
      uVar9 = uVar9 & 0xffdfffff;
    }
    else {
      uVar9 = uVar9 | 0x200000;
    }
  }
  if ((uVar8 & 0x400) != 0) {
    if (ar4[0x11] == 0) {
      uVar9 = uVar9 & 0xffefffff;
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
  }
  if ((uVar8 & 0x800) != 0) {
    if (ar4[0x12] == 0) {
      uVar9 = uVar9 & 0xfff7ffff;
    }
    else {
      uVar9 = uVar9 | 0x80000;
    }
  }
  a6 = 0x1000;
  if ((uVar8 & 0x1000) != 0) {
    uVar9 = uVar9 & 0xfffe7fff | ar4[0x13] << 0xf;
  }
  if ((uVar8 & 0x2000) != 0) {
    uVar9 = uVar9 & 0xfff9ffff | ar4[0x14] << 0x11;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar9 = uVar9 & 0xffff9fff | aiStack_30[ar4[0x15]] << 0xd;
  }
  if ((uVar8 & 0x8000) != 0) {
    if (ar4[0x16] == 0) {
      uVar9 = uVar9 & 0xffffefff;
    }
    else {
      uVar9 = uVar9 | 0x1000;
    }
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar2 = ar4[0x17] & 0xf;
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    uVar9 = uVar9 & 0xfffff0ff | uVar2 << 8;
  }
  if ((uVar8 & 0x20000) != 0) {
    uVar9 = uVar9 & 0xffffff3f | (ar4[0x18] & 3) << 6;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    iVar1 = FUN_8c20f340(*(undefined4 *)(ar4[0x1b] + 0xc),3,0x1000,0x4000000);
    uVar2 = FUN_8c20f340(*(undefined4 *)(ar4[0x1b] + 0x10),a5,a6,a7);
    uVar9 = uVar9 & 0xffffffc0 | iVar1 << 3 | uVar2;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    uVar3 = *(uint *)(ar4[0x1b] + 0x18);
    uVar2 = (uint)((uVar3 & 1) != 0) << 0x1f;
    uVar4 = (uVar3 & 8) << 0x1b;
    uVar3 = *(uint *)(ar4[0x1b] + 8) & 0x38000000;
    if ((uVar3 == 0x28000000) || (uVar3 == 0x30000000)) {
      uVar2 = uVar2 | uVar4 | uVar3 | (ar4[0x1a] & 0x3f) << 0x15;
    }
    else {
      uVar2 = uStack_3c & 0x1ffffff | uVar2 | uVar4 | uVar3 |
              (~(*(uint *)(ar4[0x1b] + 0x18) & 4) & 4) << 0x18 |
              (*(uint *)(ar4[0x1b] + 0x18) & 0x10) << 0x15;
    }
    uStack_3c = uVar2 & 0xffe00000 | *(uint *)(ar4[0x1b] + 0x1c) >> 3;
  }
  if ((uVar8 & 0x100000) != 0) {
    uVar2 = ar4[1];
    if (uVar2 == 0) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 1) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 2) {
      uVar6 = uVar6 & 0x1fffffff | 0xa0000000;
    }
  }
  if ((uVar8 & 0x200000) != 0) {
    uVar6 = uVar6 & 0xf8ffffff | ar4[2] << 0x18;
  }
  uVar2 = _DAT_8c4a9d88;
  if ((uVar8 & 0x8000000) != 0) {
    uVar2 = ar4[0x2e];
  }
  uVar3 = uVar2 << 0x12 | uVar6 & 0xfff3ffff | 0x800000;
  if ((uVar8 & 0x10000000) != 0) {
    uVar3 = uVar2 << 0x12 | uVar6 & 0xfff0ffff | 0x800000 | ar4[0x2f] << 0x10;
  }
  uVar3 = uVar3 & 0xffffff3f;
  if (((ar4[0x28] & 0x60000000) != 0) && ((ar4[2] & 1) != 0)) {
    uVar3 = uVar3 | 0x40;
  }
  if (((uVar8 & 0x10) != 0) && ((ar4[9] & 1) != 0)) {
    uVar3 = uVar3 & 0xffffffbf | ar4[9] << 7 | DAT_8c2757a0 << 6;
  }
  if ((uVar8 & 0x400000) != 0) {
    uVar3 = uVar3 & 0xffffffcf | ar4[3] << 4;
  }
  uVar6 = uVar3;
  if (uVar5 != 0) {
    uVar2 = (ar4[8] >> 1) << 3;
    uVar6 = uVar3 & 0xfffffff7 | uVar2;
    if (uVar5 != 0) {
      uVar6 = uVar3 & 0xfffffff5 | uVar2 | (ar4[8] & 1) << 1;
    }
  }
  if ((uVar8 & 0x200) != 0) {
    if (ar4[0x10] == 0) {
      uVar6 = uVar6 & 0xfffffffb;
    }
    else {
      uVar6 = uVar6 | 4;
    }
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar6 = ar4[4] | uVar6 & 0xfffffffe;
  }
  ar4[0x25] = uVar7 & 0xffd00000;
  ar4[0x26] = uVar9;
  ar4[0x27] = uStack_3c;
  ar4[0x24] = uVar6 & 0xe78f00ff;
  return 0;
}



/* FUN_8c20fe00 @ 8c20fe00 callers=17 callees=0 */

/* WARNING: Removing unreachable block (ram,0x8c210094) */
/* WARNING: Removing unreachable block (ram,0x8c210088) */
/* WARNING: Removing unreachable block (ram,0x8c210084) */
/* WARNING: Removing unreachable block (ram,0x8c210072) */
/* WARNING: Removing unreachable block (ram,0x8c21006e) */
/* WARNING: Removing unreachable block (ram,0x8c210068) */
/* WARNING: Removing unreachable block (ram,0x8c210058) */
/* WARNING: Removing unreachable block (ram,0x8c21004a) */
/* WARNING: Removing unreachable block (ram,0x8c210046) */
/* WARNING: Removing unreachable block (ram,0x8c210034) */
/* WARNING: Removing unreachable block (ram,0x8c210030) */
/* WARNING: Removing unreachable block (ram,0x8c21002a) */
/* WARNING: Removing unreachable block (ram,0x8c20fe76) */
/* WARNING: Removing unreachable block (ram,0x8c20fe6c) */
/* WARNING: Removing unreachable block (ram,0x8c20fe64) */
/* WARNING: Removing unreachable block (ram,0x8c20fe5c) */
/* WARNING: Removing unreachable block (ram,0x8c20fe54) */
/* WARNING: Removing unreachable block (ram,0x8c20fe4c) */
/* WARNING: Removing unreachable block (ram,0x8c20fe44) */
/* WARNING: Removing unreachable block (ram,0x8c20fe3c) */
/* WARNING: Removing unreachable block (ram,0x8c20fe38) */
/* WARNING: Removing unreachable block (ram,0x8c20fe40) */
/* WARNING: Removing unreachable block (ram,0x8c20fe48) */
/* WARNING: Removing unreachable block (ram,0x8c20fe50) */
/* WARNING: Removing unreachable block (ram,0x8c20fe58) */
/* WARNING: Removing unreachable block (ram,0x8c20fe60) */
/* WARNING: Removing unreachable block (ram,0x8c20fe68) */
/* WARNING: Removing unreachable block (ram,0x8c20fe70) */
/* WARNING: Removing unreachable block (ram,0x8c210026) */
/* WARNING: Removing unreachable block (ram,0x8c21002e) */
/* WARNING: Removing unreachable block (ram,0x8c210032) */
/* WARNING: Removing unreachable block (ram,0x8c210038) */
/* WARNING: Removing unreachable block (ram,0x8c210048) */
/* WARNING: Removing unreachable block (ram,0x8c210054) */
/* WARNING: Removing unreachable block (ram,0x8c21005a) */
/* WARNING: Removing unreachable block (ram,0x8c21006c) */
/* WARNING: Removing unreachable block (ram,0x8c210070) */
/* WARNING: Removing unreachable block (ram,0x8c210076) */
/* WARNING: Removing unreachable block (ram,0x8c210086) */
/* WARNING: Removing unreachable block (ram,0x8c210092) */
/* WARNING: Removing unreachable block (ram,0x8c210096) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c20fe00(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_8c2757a8 = *(uint *)(ar4 + 0x90);
  DAT_8c2757ac = *(undefined4 *)(ar4 + 0x94);
  _DAT_8c4aa13c = *(uint *)(ar4 + 0x98);
  if ((DAT_8c2757a8 >> 0x18 & 7) == 0) {
    _DAT_8c4aa13c = _DAT_8c4aa13c & 0x3ffffff | 0x20000000;
  }
  _DAT_8c4aa140 = *(undefined4 *)(ar4 + 0x9c);
  _DAT_8c4aa148 = *(float *)(ar4 + 0x70);
  _DAT_8c4aa14c = *(float *)(ar4 + 0x74);
  _DAT_8c4aa150 = *(float *)(ar4 + 0x78);
  _DAT_8c4aa154 = *(float *)(ar4 + 0x7c);
  _DAT_8c4aa158 = *(float *)(ar4 + 0x80);
  _DAT_8c4aa15c = *(float *)(ar4 + 0x84);
  _DAT_8c4aa160 = *(float *)(ar4 + 0x88);
  _DAT_8c4aa164 = *(float *)(ar4 + 0x8c);
  _DAT_8c4aa168 = *(undefined4 *)(ar4 + 0xa0);
  _DAT_8c4aa198 =
       *(int *)(&DAT_8c2757e8 +
               ((DAT_8c2757a8 & 0x20000000) >> 0x18 | (DAT_8c2757a8 & 0x1000000) >> 0x14 |
                (DAT_8c2757a8 & 0x40) >> 3 | (DAT_8c2757a8 & 0x20) >> 3 | (DAT_8c2757a8 & 0x10) >> 3
               | (DAT_8c2757a8 & 4) >> 2) * 4);
  _DAT_8c4aa27c = (DAT_8c2757a8 & 0x7000000) >> 0x18;
  _DAT_8c4aa128 = DAT_8c2757a8;
  _DAT_8c4aa138 = DAT_8c2757ac;
  if ((_DAT_8c4aa27c & 1) != 0) {
    puVar2 = &DAT_8c2757c8;
    DAT_8c2757ac = _DAT_8c4aa168;
    goto LAB_8c2100aa;
  }
  DAT_8c2757b0 = _DAT_8c4aa13c;
  puVar2 = &DAT_8c2757b8;
  DAT_8c2757b4 = _DAT_8c4aa140;
  if (_DAT_8c4aa198 == 0) {
    puVar2 = &DAT_8c2757c8;
    goto LAB_8c2100aa;
  }
  if (_DAT_8c4aa198 == 1) {
    puVar2 = &DAT_8c2757c0;
    puVar1 = (undefined4 *)&DAT_8c4aa154;
    DAT_8c2757b8 = _DAT_8c4aa148;
    DAT_8c2757bc = _DAT_8c4aa14c;
    DAT_8c2757c0 = _DAT_8c4aa150;
LAB_8c20ffb2:
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
  }
  else {
    if (_DAT_8c4aa198 == 2) {
      puVar2 = &DAT_8c2757e0;
      puVar1 = (undefined4 *)&DAT_8c4aa164;
      DAT_8c2757c8 = _DAT_8c4aa148;
      DAT_8c2757cc = _DAT_8c4aa14c;
      DAT_8c2757d0 = _DAT_8c4aa150;
      DAT_8c2757d4 = _DAT_8c4aa154;
      DAT_8c2757d8 = _DAT_8c4aa158;
      DAT_8c2757dc = _DAT_8c4aa15c;
      DAT_8c2757e0 = _DAT_8c4aa160;
      goto LAB_8c20ffb2;
    }
    if (_DAT_8c4aa198 == 3) {
      DAT_8c2757b8 = _DAT_8c4aa16c;
      DAT_8c2757bc = _DAT_8c4aa170;
      puVar2 = &DAT_8c2757c8;
      goto LAB_8c2100aa;
    }
    if (_DAT_8c4aa198 != 4) {
      if (_DAT_8c4aa198 == 0x10) {
        DAT_8c2757b8 = (float)((int)(_DAT_8c4aa148 * 255.0) << 0x18 |
                               (int)(_DAT_8c4aa14c * 255.0) << 0x10 |
                               (int)(_DAT_8c4aa150 * 255.0) << 8 | (int)(_DAT_8c4aa154 * 255.0));
        DAT_8c2757bc = (float)((int)(_DAT_8c4aa158 * 255.0) << 0x18 |
                               (int)(_DAT_8c4aa15c * 255.0) << 0x10 |
                               (int)(_DAT_8c4aa160 * 255.0) << 8 | (int)(_DAT_8c4aa164 * 255.0));
        puVar2 = &DAT_8c2757c8;
      }
      goto LAB_8c2100aa;
    }
    DAT_8c2757b8 = _DAT_8c4aa16c;
    DAT_8c2757bc = _DAT_8c4aa170;
    DAT_8c2757d8 = _DAT_8c4aa178;
    DAT_8c2757dc = _DAT_8c4aa17c;
    DAT_8c2757e0 = _DAT_8c4aa180;
    puVar2 = &DAT_8c2757e4;
    DAT_8c2757e4 = _DAT_8c4aa184;
    DAT_8c2757c8 = _DAT_8c4aa148;
    DAT_8c2757cc = _DAT_8c4aa14c;
    DAT_8c2757d0 = _DAT_8c4aa150;
    DAT_8c2757d4 = _DAT_8c4aa154;
  }
  puVar2 = puVar2 + 1;
LAB_8c2100aa:
  _DAT_8c4aa208 = _DAT_8c4aa27c;
  _DAT_8c4aa20c = puVar2 + 0x1cf62a16;
  return 0;
}


