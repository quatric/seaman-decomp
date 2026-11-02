#include "../decls.h"
int libgcc_divide_helper_01031c_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 in_r0;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (ar5 == 0) {
    return in_r0;
  }
  bVar5 = (ar4 & 0x80000000) != 0;
  uVar2 = (uint)bVar5;
  uVar3 = ar4 - (uVar2 != 0);
  bVar6 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (ar5 & 0x80000000) != 0;
  bVar7 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar2 = uVar1 << 1 | (uint)((uVar3 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else if (bVar6 && !bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  else {
    uVar2 = uVar2 - ar5;
  }
  if (((uVar2 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar2 & 0x80000000) != 0;
    bVar4 = (ar5 & 0x80000000) != 0;
    uVar2 = ((int)uVar2 >> 1) << 1 | (uint)((uVar2 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else if (bVar6 && !bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else {
        uVar2 = uVar2 - ar5;
      }
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  return uVar2 + bVar5;
}

__asm__(".globl _libgcc_divide_helper_01031c\n.set _libgcc_divide_helper_01031c, _libgcc_divide_helper_01031c_def\n");
