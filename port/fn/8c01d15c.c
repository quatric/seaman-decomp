#include "../decls.h"
undefined * FUN_8c01d15c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)0x3;
  if ((2 < _DAT_8c2791b8) &&
     (iVar2 = FUN_8c201ba2(_DAT_8c27926c,ar5,ar6,ar7), puVar1 = (undefined *)0x0, iVar2 != 0)) {
    if (iVar2 == 1) {
      FUN_8c201b92(_DAT_8c27926c,ar5,ar6,ar7);
    }
    else if (iVar2 == 3) {
      return (undefined *)3;
    }
    puVar1 = (undefined *)0x9;
    if ((_DAT_8c279248 < 10) && (puVar1 = (undefined *)0x1, 0 < _DAT_8c279248)) {
      puVar1 = (&switchdata_8c01d1d6_8c01d1dc)[_DAT_8c279248 + -1];
                    
      switch(_DAT_8c279248) {
      case 1:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          puVar1 = (undefined *)0x0;
          _DAT_8c279284 = (undefined *)0x0;
        }
        break;
      case 5:
        break;
      case 6:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      case 2:
        uVar3 = FUN_8c201c92(_DAT_8c279270,ar5,ar6,ar7);
        puVar1 = (undefined *)FUN_8c201da0(_DAT_8c279270,uVar3,ar6,ar7);
        break;
      case 7:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      default:
        uVar3 = 0x113a;
        iVar2 = FUN_8c201e14(_DAT_8c279270,ar4 + 0x5b86,0x113a,ar7);
        FUN_8c201da0(_DAT_8c279270,iVar2,uVar3,ar7);
        puVar1 = (undefined *)FUN_8c10b698(_DAT_8c27925c,0,ar4 + 0x5b86,iVar2 << 1);
        break;
      case 8:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279298 = _DAT_8c279298 + 1;
          _DAT_8c279284 = (undefined *)0x2;
          if (2 < _DAT_8c279298) {
            _DAT_8c279284 = (undefined *)0x1;
          }
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
        break;
      case 9:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279284 = (undefined *)0x3;
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c01d15c\n.set _FUN_8c01d15c, _FUN_8c01d15c_def\n");
