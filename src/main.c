#include <stdio.h>
#include "lib.h"


int main(int argc, char **argv)
{
	int n_in = 10;
	int n_out = 0;
#if TARGET_CPU == x64
	n_out = lib_x64_func( n_in );
#elif TARGET_CPU == arm64
	n_out = lib_arm64_func( n_in );
#endif
	printf("hello world(n_out=%d)\n", n_out);
	return 0;
}
