#include "../decls.h"
uint libgcc_divide_helper_0106dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_r0;
  uint in_r1;
  bool bVar4;
  bool bVar5;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (uVar3 < uVar1) {
    if (uVar3 < uVar1) {
      uVar1 = uVar2 + in_r0;
      bVar5 = uVar1 < uVar2;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar2 - in_r0;
      bVar5 = uVar2 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar2 - in_r0;
    bVar5 = uVar2 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((in_r1 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (!bVar5) {
    return uVar2;
  }
  return in_r0 + uVar2;
}

__asm__(".globl _libgcc_divide_helper_0106dc\n.set _libgcc_divide_helper_0106dc, _libgcc_divide_helper_0106dc_def\n");
