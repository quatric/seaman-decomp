#pragma once
/* Prelude for compiling Ghidra decompiler output (syntax/type check only; not a behavioural port). */
#include "lep.h"
/* guest functions that share a name with newlib routines */
#define memmove guest_memmove
#define memset guest_memset
#define rand guest_rand
#define strcpy guest_strcpy
typedef unsigned char undefined1, undefined, byte, uchar;
typedef unsigned short undefined2, ushort;
typedef unsigned int undefined4, uint;
typedef unsigned long long undefined8, ulonglong;
typedef long long longlong;
typedef long double float10;
typedef unsigned code(unsigned,unsigned,unsigned,unsigned);
/* Ghidra piece-concatenation helpers: CONCATab(hi of a bytes, lo of b bytes) */
#define CCAT_(a,b,nb) ((ulonglong)((((ulonglong)(a)) << (8*(nb))) | (((ulonglong)(b)) & ((1ULL << (8*(nb))) - 1))))
#define CONCAT11(x,y) CCAT_(x,y,1)
#define CONCAT14(x,y) CCAT_(x,y,4)
#define CONCAT15(x,y) CCAT_(x,y,5)
#define CONCAT16(x,y) CCAT_(x,y,6)
#define CONCAT17(x,y) CCAT_(x,y,7)
#define CONCAT21(x,y) CCAT_(x,y,1)
#define CONCAT23(x,y) CCAT_(x,y,3)
#define CONCAT24(x,y) CCAT_(x,y,4)
#define CONCAT25(x,y) CCAT_(x,y,5)
#define CONCAT26(x,y) CCAT_(x,y,6)
#define CONCAT32(x,y) CCAT_(x,y,2)
#define CONCAT33(x,y) CCAT_(x,y,3)
#define CONCAT34(x,y) CCAT_(x,y,4)
#define CONCAT35(x,y) CCAT_(x,y,5)
#define CONCAT41(x,y) CCAT_(x,y,1)
#define CONCAT42(x,y) CCAT_(x,y,2)
#define CONCAT43(x,y) CCAT_(x,y,3)
#define CONCAT51(x,y) CCAT_(x,y,1)
#define CONCAT52(x,y) CCAT_(x,y,2)
#define CONCAT53(x,y) CCAT_(x,y,3)
#define CONCAT61(x,y) CCAT_(x,y,1)
#define CONCAT62(x,y) CCAT_(x,y,2)
#define CONCAT71(x,y) CCAT_(x,y,1)
/* register pieces hold raw bits: float-typed operands are stored as their IEEE bits, not converted */
static inline unsigned bits_f_(float f) { unsigned u; __builtin_memcpy(&u,&f,4); return u; }
template<class T> static inline unsigned bits32_(T v) { return (unsigned)(unsigned long long)v; }
static inline unsigned bits32_(float f) { return bits_f_(f); }
template<class T> static inline unsigned bits32_(const le<T>& v) { return bits32_((T)v); }
template<class T> static inline unsigned bits32_(const volatile le<T>& v) { return bits32_((T)v); }
#define BITS32(x) bits32_(x)
#define CONCAT44(a,b) ((ulonglong)(((ulonglong)BITS32(a) << 32) | BITS32(b)))
#define CONCAT44D(a,b) ({ulonglong q_ = CONCAT44(a,b); double d_; __builtin_memcpy(&d_,&q_,8); d_;})
#define D2U(d) ({double d_ = (double)(d); ulonglong q_; __builtin_memcpy(&q_,&d_,8); q_;})
#define F32HI(d) ({unsigned u_ = (unsigned)(D2U(d) >> 32); float f_; __builtin_memcpy(&f_,&u_,4); f_;})
#define F32LO(d) ({unsigned u_ = (unsigned)D2U(d); float f_; __builtin_memcpy(&f_,&u_,4); f_;})
#define CONCAT12(a,b) ((uint)(((uint)(uchar)(a) << 16) | (ushort)(b)))
#define CONCAT22(a,b) ((uint)(((uint)(ushort)(a) << 16) | (ushort)(b)))
#define CONCAT13(a,b) ((uint)(((uint)(uchar)(a) << 24) | ((uint)(b) & 0xffffff)))
#define CONCAT31(a,b) ((uint)(((uint)(a) << 8) | (uchar)(b)))
/* SUBxy on a floating register piece means its raw bits, not a numeric conversion (out-of-range double->integer differs between hosts) */
template<class T> static inline ulonglong tobits_(T v) { return (ulonglong)v; }
static inline ulonglong tobits_(double d) { ulonglong q; __builtin_memcpy(&q,&d,8); return q; }
static inline ulonglong tobits_(float f) { return bits_f_(f); }
#define SUB84(x,n) ((uint)(tobits_(x) >> ((n)*8)))
#define SUB44(x,n) ((uint)(tobits_(x) >> ((n)*8)))
#define SUB41(x,n) ((uchar)(((uint)(x)) >> ((n)*8)))
#define SUB42(x,n) ((ushort)(((uint)(x)) >> ((n)*8)))
#define SUB81(x,n) ((uchar)(tobits_(x) >> ((n)*8)))
#define SUB82(x,n) ((ushort)(tobits_(x) >> ((n)*8)))
#define ZEXT48(x) ((ulonglong)(uint)(x))
#define ZEXT44(x) ((ulonglong)(uint)(x))
#define SEXT48(x) ((longlong)(int)(x))
#define POPCOUNT(x) __builtin_popcount(x)
typedef undefined4 BADSPACEBASE;
#define CONCAT11(a,b) ((ushort)(((ushort)(uchar)(a) << 8) | (uchar)(b)))
#define CONCAT14(a,b) ((ulonglong)(((ulonglong)(uchar)(a) << 32) | (uint)(b)))
#define CONCAT24(a,b) ((ulonglong)(((ulonglong)(ushort)(a) << 32) | (uint)(b)))
#define CONCAT16(a,b) ((ulonglong)(((ulonglong)(uchar)(a) << 48) | ((ulonglong)(b) & 0xffffffffffffULL)))
#define CONCAT17(a,b) ((ulonglong)(((ulonglong)(uchar)(a) << 56) | ((ulonglong)(b) & 0x00ffffffffffffffULL)))
#define ABS(x) ((x) < 0 ? -(x) : (x))
