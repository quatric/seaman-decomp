#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E9040811_adxf_is_NULL_adxf_r_26220e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E9040811_adxf_is_NULL_adxf_r_26220e");
  return (unsigned)sh4_interp(0x8c262208, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E9040811_adxf_is_NULL_adxf_r_26220e\n.set s_E9040811_adxf_is_NULL_adxf_r_26220e, s_E9040811_adxf_is_NULL_adxf_r_26220e_def\n");
}
