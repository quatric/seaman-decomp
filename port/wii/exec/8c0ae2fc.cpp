#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Sq_Bone_Home_njd_0ae2fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Sq_Bone_Home_njd_0ae2fc");
  return (unsigned)sh4_interp(0x8c0ae2fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Sq_Bone_Home_njd_0ae2fc\n.set s_Sq_Bone_Home_njd_0ae2fc, s_Sq_Bone_Home_njd_0ae2fc_def\n");
}
