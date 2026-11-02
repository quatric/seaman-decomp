#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_No_2ld_kind_d_cat_d_food_d_r_0f5008");
  return (unsigned)sh4_interp(0x8c0f5004, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set s_No_2ld_kind_d_cat_d_food_d_r_0f5008, s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
}
