#include <stdio.h>
#include <sys/mman.h>
#include <stdint.h>
int main(void) {
    void *p = mmap((void *)0x8c010000u, 0x2700000, PROT_READ | PROT_WRITE, MAP_FIXED | MAP_ANON | MAP_PRIVATE, -1, 0);
    printf("mmap -> %p (want 0x8c010000)\n", p);
    if (p == MAP_FAILED) { perror("mmap"); return 1; }
    *(uint32_t *)0x8c010000u = 0x1234; printf("wrote/read %x\n", *(uint32_t *)0x8c010000u);
    return 0;
}
