#include "lib.h"

#if TARGET_CPU == x64
int lib_x64_func(int n)
{
	return 64;
}
#elif TARGET_CPU == arm64
int lib_arm64_func(int n)
{
	return 0xaa;
}
#else
int lib_other_func(int n)
{
	return n;
}
#endif
