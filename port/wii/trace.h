/* Differential tracing: the x86 and Wii builds both fold every guest function entry into one hash and print a checkpoint every 64K entries
   (or every call inside [trace_lo, trace_hi) with trace_mask), so the first checkpoint that differs brackets where the two ports diverge. */
#pragma once
extern const char *ring[256]; extern unsigned rp; extern unsigned trace_hash, trace_lo, trace_hi, trace_mask; extern const char *trace_watch; extern unsigned trace_last;
void trace_ckpt(unsigned, unsigned);
#define TRACE_ENTER(n) do { const char *p_ = (n); ring[rp++ & 255] = p_; unsigned h_ = trace_hash; for (int i_ = 0; i_ < 6 && p_[i_]; i_++) h_ = h_ * 31u + (unsigned char)p_[i_]; trace_hash = h_; if (!(rp & 0xffff) || (*(volatile unsigned *)0x8c4aa014u != trace_last) || (trace_watch && p_[0] == trace_watch[0] && p_[4] == trace_watch[4] && !__builtin_strcmp(p_, trace_watch)) || (rp >= trace_lo && rp < trace_hi && !(rp & trace_mask))) trace_ckpt(rp, h_); } while (0)
