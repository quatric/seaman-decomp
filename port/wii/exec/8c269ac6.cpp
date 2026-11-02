#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E1205_Illigal_parameter_MWRN_269ac6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E1205_Illigal_parameter_MWRN_269ac6");
  return (unsigned)sh4_interp(0x8c269ac6, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E1205_Illigal_parameter_MWRN_269ac6\n.set s_E1205_Illigal_parameter_MWRN_269ac6, s_E1205_Illigal_parameter_MWRN_269ac6_def\n");
}
