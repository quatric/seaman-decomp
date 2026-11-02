#include "../decls.h"
uint FUN_8c1f65e8_def(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = *ar7;
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  piVar5 = (int *)(iVar1 + -0x73b8d2c0);
  if (((uVar2 & 4) == 0) || (uVar2 = (uint)*(byte *)(ar6 + 4), uVar2 != 8)) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar4 = *(int *)(ar6 + 8);
    *(ushort *)*piVar5 = (ushort)*(byte *)(iVar4 + 9) * 0x100 + (ushort)*(byte *)(iVar4 + 8);
    *(undefined1 *)(*piVar5 + 2) = *(undefined1 *)(iVar4 + 10);
    *(undefined1 *)(*piVar5 + 3) = *(undefined1 *)(iVar4 + 0xb);
    *(undefined1 *)(*piVar5 + 4) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)(*piVar5 + 5) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)(*piVar5 + 6) = *(undefined1 *)(iVar4 + 0xe);
    if ((*(char *)(*piVar5 + 2) == '\x02') && (0x1d < *(byte *)(*piVar5 + 3))) {
      *(undefined1 *)(*piVar5 + 3) = 0x1d;
    }
    uVar3 = 0;
    uVar2 = (uint)(char)(&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
    *(undefined *)(*piVar5 + 7) = (&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
  }
  if (*(int *)(iVar1 + -0x73b8d2b8) != 0) {
                    
                    
    uVar3 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar3,*(undefined4 *)(iVar1 + -0x73b8d2bc));
    return uVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f65e8\n.set _FUN_8c1f65e8, _FUN_8c1f65e8_def\n");
