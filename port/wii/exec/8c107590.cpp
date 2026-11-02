#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_EVENT_QUIZ_107596_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_EVENT_QUIZ_107596");
  return (unsigned)sh4_interp(0x8c107590, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_EVENT_QUIZ_107596\n.set s_EVENT_QUIZ_107596, s_EVENT_QUIZ_107596_def\n");
}
