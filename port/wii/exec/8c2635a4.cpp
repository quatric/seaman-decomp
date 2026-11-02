#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E8101214_GDFS_error_adxstmf__2635aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E8101214_GDFS_error_adxstmf__2635aa");
  return (unsigned)sh4_interp(0x8c2635a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E8101214_GDFS_error_adxstmf__2635aa\n.set s_E8101214_GDFS_error_adxstmf__2635aa, s_E8101214_GDFS_error_adxstmf__2635aa_def\n");
}
