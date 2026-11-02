#include "../decls.h"
undefined4 s_E1205_Illigal_parameter_MWRN_269aec_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  char *s0;
  undefined4 in_stack_fffffff0;
  
  if (ar4 == 0) {
    s0 = s_E1205_Illigal_parameter__MWRNA_N_8c2732a0;
  }
  else {
    if (ar5 <= (int)(uint)*(byte *)(ar4 + 2)) {
      *(char *)(ar4 + 3) = (char)ar5;
      (**(code **)(**(int **)(ar4 + 0x38) + 0x1c))(*(int **)(ar4 + 0x38),(int)(char)ar5,ar6,ar7);
      if (ar5 == 1) {
        *(undefined4 *)(ar4 + 100) = 0;
        *(undefined4 *)(ar4 + 0x68) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 100) = 0xfffffff1;
        *(undefined4 *)(ar4 + 0x68) = 0xf;
      }
      s_E1205_Illigal_parameter_MWRN_269c8c(ar4,0,*(undefined4 *)(ar4 + 100),ar7);
      uVar1 = s_E1205_Illigal_parameter_MWRN_269c8c(ar4,1,*(undefined4 *)(ar4 + 0x68),ar7);
      return uVar1;
    }
    s0 = s_E1211_mwRnaSetNumChan_Illigal_pa_8c273370;
  }
  uVar1 = debug_printf(ar4,ar5,ar6,ar7,s0,in_stack_fffffff0);
  return uVar1;
}

__asm__(".globl _s_E1205_Illigal_parameter_MWRN_269aec\n.set _s_E1205_Illigal_parameter_MWRN_269aec, _s_E1205_Illigal_parameter_MWRN_269aec_def\n");
