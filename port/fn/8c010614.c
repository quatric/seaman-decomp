#include "../decls.h"
int libgcc_divide_helper_010614_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_r0;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  bVar5 = (in_r1 & 0x80000000) != 0;
  uVar3 = (uint)bVar5;
  uVar2 = in_r1 - (uVar3 != 0);
  bVar6 = (-uVar3 & 0x80000000) != 0;
  bVar4 = (in_r0 & 0x80000000) != 0;
  bVar7 = (-uVar3 & 0x80000000) == 0;
  uVar3 = uVar3 * -2 | (uint)((uVar2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar3 = uVar1 << 1 | (uint)((uVar2 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else if (bVar6 && !bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  else {
    uVar3 = uVar3 - in_r0;
  }
  if (((uVar3 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar3 & 0x80000000) != 0;
    bVar4 = (in_r0 & 0x80000000) != 0;
    uVar3 = ((int)uVar3 >> 1) << 1 | (uint)((uVar3 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else if (bVar6 && !bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else {
        uVar3 = uVar3 - in_r0;
      }
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  return uVar3 + bVar5;
}

__asm__(".globl _libgcc_divide_helper_010614\n.set _libgcc_divide_helper_010614, _libgcc_divide_helper_010614_def\n");
