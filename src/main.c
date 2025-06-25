#include <stdio.h>
#include "lib.h"


int main(int argc, char **argv)
{
	int n_in = 10;
	int n_out = 0;
	n_out = lib_func( n_in );
	printf("hello world(n_out=%d)\n", n_out);
	return 0;
}
