#include "lib.h"

#if TARGET_CPU == x64
int lib_x64_func(int n)
{
  int k;
  if( n == 0 ){
    k = 64 * 1;
  }else if( n == 1 ){
    k = 64 * 2;
  }else if( n == 2 ){
    k = 64 * 3;
  }else{
    k = 0;
  }
	return k;
}
#elif TARGET_CPU == arm64
int lib_arm64_func(int n)
{
  int k;
  if( (n % d) == 0 ){
    k = 1000 + (64 * 1);
  }else if( (n % d) == 1 ){
    k = 1000 + (64 * 2);
  }else if( (n % d) == 2 ){
    k = 1000 + (64 * 3);
  }else{
    k = 1000;
  }
	return k;
}
#else
int lib_other_func(int n)
{
	return -1;
}
#endif
