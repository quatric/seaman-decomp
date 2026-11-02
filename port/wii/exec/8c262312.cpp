#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E9040816_adxf_is_NULL_ADXF_R_26231a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E9040816_adxf_is_NULL_ADXF_R_26231a");
  return (unsigned)sh4_interp(0x8c262312, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E9040816_adxf_is_NULL_ADXF_R_26231a\n.set s_E9040816_adxf_is_NULL_ADXF_R_26231a, s_E9040816_adxf_is_NULL_ADXF_R_26231a_def\n");
}
