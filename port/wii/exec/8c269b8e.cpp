#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E1205_Illigal_parameter_MWRN_269b92_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E1205_Illigal_parameter_MWRN_269b92");
  return (unsigned)sh4_interp(0x8c269b8e, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E1205_Illigal_parameter_MWRN_269b92\n.set s_E1205_Illigal_parameter_MWRN_269b92, s_E1205_Illigal_parameter_MWRN_269b92_def\n");
}
