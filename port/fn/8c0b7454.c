#include "../decls.h"
undefined4 FUN_8c0b7454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined *ar7_00;
  undefined4 uVar4;
  undefined1 auStack_30 [24];
  
  uVar2 = ar5;
  uVar3 = ar6;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar4 = 1;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = &DAT_8c13c025;
      uVar3 = 0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,uVar3,ar7_00);
      iVar1 = FUN_8c01bba0(uVar2,ar4,uVar3,ar7_00);
      if (iVar1 == 1) {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,uVar3,ar7_00);
        if ((iVar1 == 0) && (iVar1 = FUN_8c01b5f8(uVar2,ar4,ar5,ar6), iVar1 == 1)) {
          uVar4 = 0;
        }
      }
      else {
        ar6_00 = auStack_30;
        iVar1 = FUN_8c01bc2c(uVar2,s_SM2000US__VM_8c13c040,ar6_00,ar7_00);
        if (iVar1 == 1) {
          iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7_00);
          if ((iVar1 == 0) &&
             (iVar1 = FUN_8c01b7b0(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6), iVar1 == 1)) {
            uVar4 = 0;
          }
        }
        else {
          s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,3,0,ar4);
        }
      }
      break;
    case 1:
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      uVar2 = get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,uVar2,&DAT_8c13c025);
      break;
    case 4:
      uVar2 = get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7);
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,uVar2,&DAT_8c13c025);
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0b7454\n.set _FUN_8c0b7454, _FUN_8c0b7454_def\n");
