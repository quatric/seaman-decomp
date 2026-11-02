#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0143f0_def(byte *ar4,le<undefined4>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0143f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  (*(le<uint>* )(fr0_ - 0x34)) = 0;
  (*(le<uint>* )(fr0_ - 0x30)) = 0;
  iVar6 = ar6;
  pbVar7 = ar4;
  while (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 0x40) != 0) {
    pbVar7 = pbVar7 + 1;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    (*(le<uint>* )(fr0_ - 0x30)) = (uint)(bVar1 == 0x2d);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  if (ar6 == 0) {
    if (*pbVar7 == 0x30) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = (int)(char)*pbVar8;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x78) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7 + 2,ar4,iVar6,ar7));
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
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      pbVar8 = pbVar7 + 2;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2787a8) = 0x4b0;
  }
  else {
    if (ar6 < 0xb) {
      cVar3 = (char)ar6 + '/';
    }
    else {
      cVar3 = (char)ar6 + 'V';
    }
    iVar4 = (int)(char)*pbVar8;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 7) != 0) {
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 <= cVar3) {
        while (*pbVar8 == 0x30) {
          pbVar8 = pbVar8 + 1;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
          if (iVar4 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        (*(le<uint>* )(fr0_ - 0x34)) = 0;
        while( true ) {
          iVar4 = (int)(char)*pbVar8;
          if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 7) == 0) break;
          if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
          }
          if (cVar3 < iVar4) break;
          if (!bVar2) {
            if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 4) == 0) {
              iVar4 = (int)(char)*pbVar8;
              if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
              }
              iVar4 = iVar4 + -0x57;
            }
            else {
              iVar4 = (char)*pbVar8 + -0x30;
            }
            uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01051c(((*(le<uint>* )(fr0_ - 0x30)) - iVar4) + 0x7fffffff,ar6,vr6,vr7));
            if (uVar5 < (*(le<uint>* )(fr0_ - 0x34))) {
              bVar2 = true;
            }
            else {
              (*(le<uint>* )(fr0_ - 0x34)) = ar6 * (*(le<uint>* )(fr0_ - 0x34)) + iVar4;
            }
          }
          pbVar8 = pbVar8 + 1;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
          if (iVar4 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c2787a8) = 0x44c;
          if ((*(le<uint>* )(fr0_ - 0x30)) == 0) {
            (*(le<uint>* )(fr0_ - 0x34)) = 0x7fffffff;
          }
          else {
            (*(le<uint>* )(fr0_ - 0x34)) = 0x80000000;
          }
        }
        else if ((*(le<uint>* )(fr0_ - 0x30)) != 0) {
          (*(le<uint>* )(fr0_ - 0x34)) = -(*(le<uint>* )(fr0_ - 0x34));
        }
      }
    }
    iVar4 = (int)(char)*pbVar8;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar7 = pbVar8;
    if (iVar4 == 0x75) {
      pbVar7 = pbVar8 + 1;
      iVar4 = (int)(char)*pbVar7;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x6c) {
        pbVar7 = pbVar8 + 2;
      }
    }
    iVar4 = (int)(char)*pbVar7;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar8 = pbVar7;
    if (iVar4 == 0x6c) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (int)(char)*pbVar8;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x75) {
        pbVar8 = pbVar7 + 2;
      }
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (ar5 != (le<undefined4>* )(unsigned)0x0) {
    *ar5 = pbVar8;
    return (*(le<uint>* )(fr0_ - 0x34));
  }
  return (*(le<uint>* )(fr0_ - 0x34));
}

__asm__(".globl FUN_8c0143f0\n.set FUN_8c0143f0, FUN_8c0143f0_def\n");

}
