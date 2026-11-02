#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def(uint ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *a4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x2c)) >> 0x10),(short)ar4);
  uVar1 = ar4 & 0xffff;
  if ((((uVar1 != 0x300) && (uVar1 != 0x340)) && (uVar1 != 0x380)) && (uVar1 != 0x3c0)) {
    return uVar1;
  }
  *(le<unsigned>* )0x8c475ec8 = (unsigned)(unsigned long)(ar5);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fab8c(ar4,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); FUN_8c1fad9a("\r\n --- ADDRESS CHECKER TRAP --- \r\n",ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("FR0-7:    ",10,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("FR8-15:   ",0x12,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("FR0-7(B): ",0x1a,8,ar7));
  uVar6 = 8;
  uVar5 = 0x22;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("FR8-15(B):",0x22,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a("FPUL: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x2a],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" FPSCR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x2b],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("\r\nR0-7:     ",0x2d,8,ar7));
  uVar5 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3c];
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3c] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[1];
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("R8-15:    ",0x35,8,ar7));
  uVar6 = 8;
  ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3c] = uVar5;
  uVar5 = 2;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1faa08("\r\nR0-7(B):  ",2,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a("MACL: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3c],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" MACH: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3d],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a("\r\nVBR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3e],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" GBR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x3f],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" DBR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8),uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a("\r\nPR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x40],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" PC: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x41],uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(" SR: ",uVar5,uVar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c475ec8)[0x42],uVar5,uVar6,ar7));
  uVar1 = 0;
  do {
    if ((int)uVar1 < 0) {
      uVar3 = ~(~uVar1 + 1 & 3) + 1;
    }
    else {
      uVar3 = uVar1 & 3;
    }
    if (uVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26cff8),uVar5,uVar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0((((le<undefined4>* )(unsigned)0x8c26ce10))[uVar1],uVar5,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26cffc),uVar5,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fadd0(*(le<undefined4>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c26ce10))[uVar1],uVar5,uVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26d000),uVar5,uVar6,ar7));
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x45);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(((undefined1 *)(unsigned)0x8c26cff8),uVar5,uVar6,ar7));
  if (iVar2 == 0) {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER,\r\n then hit RETURN key.";
  }
  else {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER.";
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad9a(a4,uVar5,uVar6,ar7));
  do {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad0a(a4,uVar5,uVar6,ar7));
  } while ((char)uVar4 != '\r');
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000024) = ain0 & 0xffff;
  uVar5 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fad44(a4,uVar5,uVar6,ar7));
  return uVar5;
}

__asm__(".globl s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de\n.set s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de, s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def\n");

}
