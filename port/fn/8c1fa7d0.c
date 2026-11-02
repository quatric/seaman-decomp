#include "../decls.h"
uint s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def(uint ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *a4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffd4;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(short)ar4);
  uVar1 = ar4 & 0xffff;
  if ((((uVar1 != 0x300) && (uVar1 != 0x340)) && (uVar1 != 0x380)) && (uVar1 != 0x3c0)) {
    return uVar1;
  }
  _DAT_8c475ec8 = ar5;
  iVar2 = FUN_8c1fab8c(ar4,ar5,ar6,ar7);
  FUN_8c1fad9a("\r\n --- ADDRESS CHECKER TRAP --- \r\n",ar5,ar6,ar7,ain0);
  FUN_8c1faa08("FR0-7:    ",10,8,ar7);
  FUN_8c1faa08("FR8-15:   ",0x12,8,ar7);
  FUN_8c1faa08("FR0-7(B): ",0x1a,8,ar7);
  uVar6 = 8;
  uVar5 = 0x22;
  FUN_8c1faa08("FR8-15(B):",0x22,8,ar7);
  FUN_8c1fad9a("FPUL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2a],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" FPSCR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2b],uVar5,uVar6,ar7);
  FUN_8c1faa08("\r\nR0-7:     ",0x2d,8,ar7);
  uVar5 = _DAT_8c475ec8[0x3c];
  _DAT_8c475ec8[0x3c] = _DAT_8c475ec8[1];
  FUN_8c1faa08("R8-15:    ",0x35,8,ar7);
  uVar6 = 8;
  _DAT_8c475ec8[0x3c] = uVar5;
  uVar5 = 2;
  FUN_8c1faa08("\r\nR0-7(B):  ",2,8,ar7);
  FUN_8c1fad9a("MACL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3c],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" MACH: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3d],uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nVBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3e],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" GBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3f],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" DBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(*_DAT_8c475ec8,uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nPR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x40],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" PC: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x41],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" SR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x42],uVar5,uVar6,ar7);
  uVar1 = 0;
  do {
    if ((int)uVar1 < 0) {
      uVar3 = ~(~uVar1 + 1 & 3) + 1;
    }
    else {
      uVar3 = uVar1 & 3;
    }
    if (uVar3 == 0) {
      FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
    }
    FUN_8c1fadd0((&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26cffc,uVar5,uVar6,ar7);
    FUN_8c1fadd0(*(undefined4 *)(&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,uVar5,uVar6,ar7);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x45);
  FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
  if (iVar2 == 0) {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER,\r\n then hit RETURN key.";
  }
  else {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER.";
  }
  FUN_8c1fad9a(a4,uVar5,uVar6,ar7);
  do {
    uVar4 = FUN_8c1fad0a(a4,uVar5,uVar6,ar7);
  } while ((char)uVar4 != '\r');
  _DAT_ff000024 = ain0 & 0xffff;
  uVar5 = FUN_8c1fad44(a4,uVar5,uVar6,ar7);
  return uVar5;
}

__asm__(".globl _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de\n.set _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de, _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def\n");
