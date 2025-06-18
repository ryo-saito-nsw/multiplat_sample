#pragma once

#if TARGET_CPU == x64
int lib_x64_func(int n);
#elif TARGET_CPU == arm64
int lib_arm64_func(int n);
#else
int lib_other_func(int n);
#endif

