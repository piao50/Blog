// gcc compute.c -o compute
#include <stdio.h>
#include <math.h>

#define RAD (3.14159265/180.0)

int main()
{
  printf("hello, gushi ...\r\n");

  for(int i = 0; i < 5; i++) printf("%d \r\n", i);

  int i;
  float am, as, c, t, t2, xtra;
  float val = sin(RAD * 45);
  printf("val: %f \r\n", val);
  
  printf("bye, gushi.\r\n");
  return 0;
}
