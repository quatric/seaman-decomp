#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_vmu_stat_vm(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01bc2c_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_vmu_stat_vm(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bc2c\n.set FUN_8c01bc2c, FUN_8c01bc2c_def\n");

}
