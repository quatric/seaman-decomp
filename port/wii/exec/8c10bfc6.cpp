#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned asr_lib_create_recognizer_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("asr_lib_create_recognizer");
  return (unsigned)sh4_interp(0x8c10bfc6, ar4, ar5, ar6, ar7);
}
__asm__(".globl asr_lib_create_recognizer\n.set asr_lib_create_recognizer, asr_lib_create_recognizer_def\n");
}
