#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E9040804_can_t_open_s_ADXF_L_261ba4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E9040804_can_t_open_s_ADXF_L_261ba4");
  return (unsigned)sh4_interp(0x8c261b96, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E9040804_can_t_open_s_ADXF_L_261ba4\n.set s_E9040804_can_t_open_s_ADXF_L_261ba4, s_E9040804_can_t_open_s_ADXF_L_261ba4_def\n");
}
