#include "../decls.h"
undefined4 FUN_8c0d4a90_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  float fVar3;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  FUN_8c01538c(ar4 + 0x108,ar5,ar6,ar7);
  iVar2 = 0;
  do {
    if (4 < iVar2) {
      return 5;
    }
    iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
    if (iVar1 != 0) {
      iVar1 = get_field_40_0d3d64(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      if (iVar1 == 1) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(iVar2 * 0x44 + ar4 + 0x478);
          pcVar4 = (code *)0x44960000;
        }
        else {
          fVar3 = 1200.0;
          pcVar4 = get_field_3c_0d4bd4;
        }
        if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) goto LAB_8c0d4b8e;
      }
      iVar1 = get_field_3c_0d4bd4(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      if ((iVar1 == 3) || (iVar1 == 4)) {
        ar6 = ar4 + 0x154;
        ar5 = ar4 + 0x108;
        FUN_8c0d2264(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      }
      else {
        ar7 = ar4 + 0x110;
        ar6 = ar4 + 0x430;
        ar5 = ar4 + 0x108;
        FUN_8c0d2478(iVar2 * 0x44 + ar4 + 0x470,ar5,ar6,ar7);
      }
    }
LAB_8c0d4b8e:
    iVar2 = iVar2 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0d4a90\n.set _FUN_8c0d4a90, _FUN_8c0d4a90_def\n");
