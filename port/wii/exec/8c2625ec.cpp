#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E9040827_adxf_is_NULL_ADXF_T_2625ec");
  return (unsigned)sh4_interp(0x8c2625ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E9040827_adxf_is_NULL_ADXF_T_2625ec\n.set s_E9040827_adxf_is_NULL_ADXF_T_2625ec, s_E9040827_adxf_is_NULL_ADXF_T_2625ec_def\n");
}
