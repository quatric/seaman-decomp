/* le<T>: a T stored little-endian in guest memory (the Dreamcast SH-4 is little-endian, the Wii's Broadway is big-endian).
   Pointers to multi-byte scalars in generated code are le<T>*, so every load/store through them byte-swaps. */
#pragma once
template<int N> struct le_raw;
template<> struct le_raw<1> { typedef unsigned char type; static type sw(type v) { return v; } };
template<> struct le_raw<2> { typedef unsigned short type; static type sw(type v) { return __builtin_bswap16(v); } };
template<> struct le_raw<4> { typedef unsigned int type;   static type sw(type v) { return __builtin_bswap32(v); } };
template<> struct le_raw<8> { typedef unsigned long long type; static type sw(type v) { return __builtin_bswap64(v); } };
template<> struct le_raw<16> { typedef unsigned long long type; static type sw(type v) { return v; } };
template<class U> struct le_enable_int { };
template<> struct le_enable_int<int> { typedef void type; };
template<> struct le_enable_int<long> { typedef void type; };
template<> struct le_enable_int<unsigned long> { typedef void type; };
template<> struct le_enable_int<short> { typedef void type; };
template<> struct le_enable_int<unsigned short> { typedef void type; };
template<> struct le_enable_int<char> { typedef void type; };
template<> struct le_enable_int<unsigned char> { typedef void type; };
template<> struct le_enable_int<long long> { typedef void type; };
template<> struct le_enable_int<unsigned long long> { typedef void type; };
template<class T> struct le;
template<class T> struct le {
  enum { W = (sizeof(T) > 8) ? 8 : sizeof(T) };
  typedef le_raw<W> R;
  typename R::type r;
  operator T() const { typename R::type v = R::sw(r); T t; __builtin_memcpy(&t, &v, W); return t; }
  template<class U> operator U*() const { return (U*)(unsigned long)(T)*this; }
  /* volatile access: hardware windows (polled registers) must not be hoisted out of loops */
  operator T() const volatile { typename R::type v = R::sw(r); T t; __builtin_memcpy(&t, &v, W); return t; }
  volatile le& operator=(T t) volatile { typename R::type v = 0; __builtin_memcpy(&v, &t, W); r = R::sw(v); return *this; }
  le& operator=(T t) { typename R::type v = 0; __builtin_memcpy(&v, &t, W); r = R::sw(v); return *this; }
  le& operator=(const le& o) { r = o.r; return *this; }
  template<class U> le& operator+=(U u) { return *this = (T)((T)*this + u); }
  template<class U> le& operator-=(U u) { return *this = (T)((T)*this - u); }
  template<class U> le& operator*=(U u) { return *this = (T)((T)*this * u); }
  template<class U> le& operator/=(U u) { return *this = (T)((T)*this / u); }
  template<class U> le& operator|=(U u) { return *this = (T)((T)*this | u); }
  template<class U> le& operator&=(U u) { return *this = (T)((T)*this & u); }
  template<class U> le& operator^=(U u) { return *this = (T)((T)*this ^ u); }
  template<class U> le& operator<<=(U u) { return *this = (T)((T)*this << u); }
  template<class U> le& operator>>=(U u) { return *this = (T)((T)*this >> u); }
  le& operator++() { return *this = (T)((T)*this + 1); }
  le& operator--() { return *this = (T)((T)*this - 1); }
  T operator++(int) { T o = *this; *this = (T)(o + 1); return o; }
  T operator--(int) { T o = *this; *this = (T)(o - 1); return o; }
};

/* a pointer cell: a 32-bit little-endian guest address. Converts to the host pointer, and to integers for casts and arguments. */
template<class P> struct le<P*> {
  unsigned r;
  operator P*() const { return (P*)(unsigned long)__builtin_bswap32(r); }
  operator unsigned() const { return __builtin_bswap32(r); }
  template<class U, class = typename le_enable_int<U>::type> explicit operator U() const { return (U)__builtin_bswap32(r); }
  P* operator+(int n) const { return (P*)*this + n; }
  P* operator-(int n) const { return (P*)*this - n; }
  le& operator=(P* p) { r = __builtin_bswap32((unsigned)(unsigned long)p); return *this; }
  le& operator=(unsigned v) { r = __builtin_bswap32(v); return *this; }
  le& operator=(const le& o) { r = o.r; return *this; }
};
