/* Wii host layer: shared declarations. Guest memory is little-endian; every access from host code goes through le<T>. */
#pragma once
#include "../lep.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#define GM(T, a) (*(le<T> *)(unsigned long)(unsigned)(a))
extern "C" {
extern const char *ring[256];
extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1;
extern unsigned long vsp;
unsigned long xlat(unsigned long);
const char *hostname(void *);
void host_log(const char *fmt, ...);
/* hardware windows (wii_dsi.cpp) */
void wii_setup_memory(void);
void hw_poke32(unsigned ea, unsigned v);
unsigned hw_peek32(unsigned ea);
unsigned hw_pages_used(void);
}
