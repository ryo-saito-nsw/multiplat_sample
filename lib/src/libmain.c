#include <stdio.h>
#include "lib.h"


#if defined(TARGET_CPU_X64)
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
  printf("lib_x64_func invoked.\n");
  return k;
}
#elif defined(TARGET_CPU_ARM64)
int lib_arm64_func(int n)
{
  int k;
  if( (n % 4) == 0 ){
    k = 1000 + (64 * 1);
  }else if( (n % 4) == 1 ){
    k = 1000 + (64 * 2);
  }else if( (n % 4) == 2 ){
    k = 1000 + (64 * 3);
  }else{
    k = 1000;
  }
  printf("lib_arm64_func invoked.\n");
  return k;
}
#else
int lib_other_func(int n)
{
  printf("lib_other_func invoked.\n");
  return -1;
}
#endif

int lib_func(int n)
{
  int ret;
#if defined(TARGET_CPU_X64)
  ret = lib_x64_func(n);
#elif defined(TARGET_CPU_ARM64)
  ret = lib_arm64_func(n);
#else
  ret = lib_other_func(n);
#endif
  return ret;
}
