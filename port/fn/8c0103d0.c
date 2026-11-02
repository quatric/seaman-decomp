#include "../decls.h"
uint libgcc_divide_helper_0103d0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_r0;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (ar5 == 0) {
    return in_r0;
  }
  uVar2 = (uint)((ar4 & 0x80000000) != 0);
  uVar1 = uVar2 - ar5;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 * 2 | (uint)((ar4 & 0x40000000) != 0);
  if (uVar2 < uVar1) {
    if (uVar2 < uVar1) {
      uVar1 = uVar3 + ar5;
      bVar5 = uVar1 < uVar3;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar3 - ar5;
      bVar5 = uVar3 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar3 - ar5;
    bVar5 = uVar3 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((ar4 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (bVar5) {
    uVar3 = uVar3 + ar5;
  }
  return uVar3;
}

__asm__(".globl _libgcc_divide_helper_0103d0\n.set _libgcc_divide_helper_0103d0, _libgcc_divide_helper_0103d0_def\n");
