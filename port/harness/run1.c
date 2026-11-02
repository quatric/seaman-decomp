#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
extern unsigned rand_def(void);
int main(void){ setvbuf(stdout,0,_IONBF,0); puts("start");
  void *p = mmap((void*)0x8c010000u, 0x2ff0000, PROT_READ|PROT_WRITE, MAP_FIXED|MAP_ANON|MAP_PRIVATE, -1, 0);
  if (p != (void*)0x8c010000u) { puts("mmap fail"); return 1; }
  FILE *f = fopen("../disc/1ST_READ.BIN","rb"); if(!f){puts("no bin");return 1;}
  size_t n = fread(p,1,0x2700000,f); fclose(f);
  printf("loaded %zu\n", n);
  unsigned s = *(unsigned*)0x8c12c4e8; printf("seed0=%08x\n", s);
  unsigned a = rand_def(), b = rand_def();
  unsigned e1 = ((s*0x41c64e6du + 0x3039u)), e2 = e1*0x41c64e6du+0x3039u;
  printf("rand %u %u expect %u %u %s\n", a, b, (e1>>16)&0x7fff, (e2>>16)&0x7fff, (a==((e1>>16)&0x7fff)&&b==((e2>>16)&0x7fff))?"OK":"MISMATCH");
  return 0;
}
