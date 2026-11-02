#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_bind_recognizer_model_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_bind_recognizer_model");
  return (unsigned)sh4_interp(0x8c10b840, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_bind_recognizer_model\n.set asr_lib_bind_recognizer_model, asr_lib_bind_recognizer_model_def\n");
}
