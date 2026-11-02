#include "../decls.h"
undefined4 FUN_8c0143f0_def(byte *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_34;
  uint uStack_30;
  
  uStack_34 = 0;
  uStack_30 = 0;
  iVar6 = ar6;
  pbVar7 = ar4;
  while (((&DAT_8c125470)[*pbVar7] & 0x40) != 0) {
    pbVar7 = pbVar7 + 1;
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    uStack_30 = (uint)(bVar1 == 0x2d);
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  if (ar6 == 0) {
    if (*pbVar7 == 0x30) {
      pbVar8 = pbVar7 + 1;
      iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x78) {
        iVar4 = FUN_8c012e84(pbVar7 + 2,ar4,iVar6,ar7);
        if (iVar4 != 0) {
          return 0;
        }
        ar6 = 0x10;
        pbVar8 = pbVar7 + 2;
      }
      else {
        ar6 = 8;
      }
    }
    else {
      ar6 = 10;
    }
  }
  else if ((ar6 == 0x10) && (*pbVar7 == 0x30)) {
    pbVar8 = pbVar7 + 1;
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      pbVar8 = pbVar7 + 2;
    }
    iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    _DAT_8c2787a8 = 0x4b0;
  }
  else {
    if (ar6 < 0xb) {
      cVar3 = (char)ar6 + '/';
    }
    else {
      cVar3 = (char)ar6 + 'V';
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 7) != 0) {
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 <= cVar3) {
        while (*pbVar8 == 0x30) {
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        uStack_34 = 0;
        while( true ) {
          iVar4 = (int)(char)*pbVar8;
          if (((&DAT_8c125470)[*pbVar8] & 7) == 0) break;
          if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
          }
          if (cVar3 < iVar4) break;
          if (!bVar2) {
            if (((&DAT_8c125470)[*pbVar8] & 4) == 0) {
              iVar4 = (int)(char)*pbVar8;
              if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
              }
              iVar4 = iVar4 + -0x57;
            }
            else {
              iVar4 = (char)*pbVar8 + -0x30;
            }
            uVar5 = libgcc_divide_helper_01051c((uStack_30 - iVar4) + 0x7fffffff,ar6);
            if (uVar5 < uStack_34) {
              bVar2 = true;
            }
            else {
              uStack_34 = ar6 * uStack_34 + iVar4;
            }
          }
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          _DAT_8c2787a8 = 0x44c;
          if (uStack_30 == 0) {
            uStack_34 = 0x7fffffff;
          }
          else {
            uStack_34 = 0x80000000;
          }
        }
        else if (uStack_30 != 0) {
          uStack_34 = -uStack_34;
        }
      }
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar7 = pbVar8;
    if (iVar4 == 0x75) {
      pbVar7 = pbVar8 + 1;
      iVar4 = (int)(char)*pbVar7;
      if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x6c) {
        pbVar7 = pbVar8 + 2;
      }
    }
    iVar4 = (int)(char)*pbVar7;
    if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar8 = pbVar7;
    if (iVar4 == 0x6c) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x75) {
        pbVar8 = pbVar7 + 2;
      }
    }
    iVar6 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (ar5 != (undefined4 *)0x0) {
    *ar5 = pbVar8;
    return uStack_34;
  }
  return uStack_34;
}

__asm__(".globl _FUN_8c0143f0\n.set _FUN_8c0143f0, _FUN_8c0143f0_def\n");
