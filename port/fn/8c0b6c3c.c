#include "../decls.h"
undefined4 FUN_8c0b6c3c_def(undefined4 ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 auStack_30 [24];
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7);
  uVar2 = 1;
  FUN_8c0162f8(auStack_30,ar5_00,ar6_00,ar7);
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      uVar2 = 0xb;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,0xb,0,&DAT_8c13c025);
      uVar2 = FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7);
      iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_USR_8c13c026,ar6_00,ar7);
      if (iVar1 == 0) {
        _DAT_8c431a58 = FUN_8c01ae28(uVar2,ar4,ar5,ar6);
        ar6_00 = ar5;
        ar7 = ar6;
      }
      else {
        iVar1 = FUN_8c0b6e04(ar4,s_SM2000US_INC_8c13c033,ar6_00,ar7);
        if (iVar1 == 0) {
          _DAT_8c431a58 = FUN_8c01b400(uVar2,s_SM2000US__VM_8c13c040,ar5,ar6);
          ar6_00 = ar5;
          ar7 = ar6;
        }
      }
      uVar2 = 0;
      break;
    case 1:
      ar7 = &DAT_8c13c025;
      ar6_00 = (undefined *)0x0;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,1,0,&DAT_8c13c025);
      break;
    case 3:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7);
      ar7 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,2,ar6_00,&DAT_8c13c025);
      break;
    case 4:
      ar6_00 = (undefined *)get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7);
      ar7 = &DAT_8c13c025;
      s_WARNING_NOPAD_0c2f08(&DAT_8c2b5628,4,ar6_00,&DAT_8c13c025);
    }
  }
  FUN_8c0c412c(&DAT_8c2b5628,1,ar6_00,ar7);
  free_if_nonnull_wrap_0151a0(auStack_30,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0b6c3c\n.set _FUN_8c0b6c3c, _FUN_8c0b6c3c_def\n");
